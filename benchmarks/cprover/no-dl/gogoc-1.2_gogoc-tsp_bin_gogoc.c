// #anon_enum$DNS_RCODE_NOERROR=0$DNS_RCODE_FORMERR=1$DNS_RCODE_SERVFAIL=2$DNS_RCODE_NXDOMAIN=3$DNS_RCODE_NOTIMP=4$DNS_RCODE_REFUSED=5$DNS_RCODE_YXDOMAIN=6$DNS_RCODE_YXRRSET=7$DNS_RCODE_NXRRSET=8$DNS_RCODE_NOTAUTH=9$DNS_RCODE_NOTZONE=10$DNS_RCODE_11=11$DNS_RCODE_12=12$DNS_RCODE_13=13$DNS_RCODE_14=14$DNS_RCODE_15=15
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/dns.h line 45
enum anonymous$10 { DNS_RCODE_NOERROR=0, DNS_RCODE_FORMERR=1, DNS_RCODE_SERVFAIL=2, DNS_RCODE_NXDOMAIN=3, DNS_RCODE_NOTIMP=4, DNS_RCODE_REFUSED=5, DNS_RCODE_YXDOMAIN=6, DNS_RCODE_YXRRSET=7, DNS_RCODE_NXRRSET=8, DNS_RCODE_NOTAUTH=9, DNS_RCODE_NOTZONE=10, DNS_RCODE_11=11, DNS_RCODE_12=12, DNS_RCODE_13=13, DNS_RCODE_14=14, DNS_RCODE_15=15 };

// #anon_enum$FALSE=0$TRUE=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 38
enum anonymous$0 { FALSE=0, TRUE=1 };

// #anon_enum$GOGOC_CLISTAT__DISCONNECTEDIDLE=0$GOGOC_CLISTAT__DISCONNECTEDNORETRY=1$GOGOC_CLISTAT__DISCONNECTEDERROR=2$GOGOC_CLISTAT__DISCONNECTEDHACCESSSETUPERROR=3$GOGOC_CLISTAT__DISCONNECTEDHACCESSEXPOSEDEVICESERROR=4$GOGOC_CLISTAT__CONNECTING=5$GOGOC_CLISTAT__CONNECTED=6
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogocmsgdata.h line 43
enum anonymous$21 { GOGOC_CLISTAT__DISCONNECTEDIDLE=0, GOGOC_CLISTAT__DISCONNECTEDNORETRY=1, GOGOC_CLISTAT__DISCONNECTEDERROR=2, GOGOC_CLISTAT__DISCONNECTEDHACCESSSETUPERROR=3, GOGOC_CLISTAT__DISCONNECTEDHACCESSEXPOSEDEVICESERROR=4, GOGOC_CLISTAT__CONNECTING=5, GOGOC_CLISTAT__CONNECTED=6 };

// #anon_enum$HACCESS_DEVMAPSTTS_SUCCESS=0$HACCESS_DEVMAPSTTS_ERROR=1$HACCESS_DEVMAPSTTS_NEW=2$HACCESS_DEVMAPSTTS_MODIFIED=3$HACCESS_DEVMAPSTTS_UNKNOWN=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/haccessmsgdata.h line 59
enum anonymous$30 { HACCESS_DEVMAPSTTS_SUCCESS=0, HACCESS_DEVMAPSTTS_ERROR=1, HACCESS_DEVMAPSTTS_NEW=2, HACCESS_DEVMAPSTTS_MODIFIED=3, HACCESS_DEVMAPSTTS_UNKNOWN=4 };

// #anon_enum$HACCESS_FEATSTTS_SUCCESS=0$HACCESS_FEATSTTS_ERROR=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/haccessmsgdata.h line 85
enum anonymous$18 { HACCESS_FEATSTTS_SUCCESS=0, HACCESS_FEATSTTS_ERROR=1 };

// #anon_enum$IEE_MODE_OTHER=0$IEE_MODE_KA=1$IEE_MODE_ACD=2
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 45
enum anonymous$28 { IEE_MODE_OTHER=0, IEE_MODE_KA=1, IEE_MODE_ACD=2 };

// #anon_enum$IEE_SUCCESS=0$IEE_INVALID_PARMS=1$IEE_RESOURCE_STARVATION=2$IEE_CONNECTIVITY_ASSESSED=3$IEE_GENERAL_ECHO_TIMEOUT=4$IEE_GENERAL_ECHO_ERROR=5
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 35
enum anonymous$26 { IEE_SUCCESS=0, IEE_INVALID_PARMS=1, IEE_RESOURCE_STARVATION=2, IEE_CONNECTIVITY_ASSESSED=3, IEE_GENERAL_ECHO_TIMEOUT=4, IEE_GENERAL_ECHO_ERROR=5 };

// #anon_enum$KA_ERROR=0$KA_SUCCESS=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 19
enum anonymous$8 { KA_ERROR=0, KA_SUCCESS=1 };

// #anon_enum$KA_PRIV_SUCCESS=0$KA_INVALID_PARMS=1$KA_RESOURCE_STARVATION=2
// file net_ka.c line 40
enum anonymous$25 { KA_PRIV_SUCCESS=0, KA_INVALID_PARMS=1, KA_RESOURCE_STARVATION=2 };

// #anon_enum$KA_STAT_INVALID=0$KA_STAT_ONGOING=1$KA_STAT_FIN_SUCCESS=2$KA_STAT_FIN_TIMEOUT=3$KA_STAT_FIN_ERROR=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 25
enum anonymous$9 { KA_STAT_INVALID=0, KA_STAT_ONGOING=1, KA_STAT_FIN_SUCCESS=2, KA_STAT_FIN_TIMEOUT=3, KA_STAT_FIN_ERROR=4 };

// #anon_enum$READ_SELECT_ERROR=0$READ_SELECT_TIMEOUT=1$READ_SOCKET_CLOSED=2$READ_RECV_ERROR=3$SEND_PINGOUT_SUCCESS=4$SEND_PINGOUT_ERROR=5$SEND_MEMORY_STARVATION=6$ANAL_PACKET_BAD=7$ANAL_PACKET_IGNORED=8$ANAL_PACKET_PINGIN_LATE=9$ANAL_PACKET_PINGIN_ONTIME=10$ECHO_EVENT_REMOVED=11$ECHO_EVENT_NOTFOUND=12
// file icmp_echo_engine.c line 134
enum anonymous$32 { READ_SELECT_ERROR=0, READ_SELECT_TIMEOUT=1, READ_SOCKET_CLOSED=2, READ_RECV_ERROR=3, SEND_PINGOUT_SUCCESS=4, SEND_PINGOUT_ERROR=5, SEND_MEMORY_STARVATION=6, ANAL_PACKET_BAD=7, ANAL_PACKET_IGNORED=8, ANAL_PACKET_PINGIN_LATE=9, ANAL_PACKET_PINGIN_ONTIME=10, ECHO_EVENT_REMOVED=11, ECHO_EVENT_NOTFOUND=12 };

// #anon_enum$SOCKET_ADDRESS_OK=0$SOCKET_ADDRESS_WRONG_FAMILY=1$SOCKET_ADDRESS_PROBLEM_RESOLVING=2$SOCKET_ADDRESS_ERROR=3
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_echo_request.h line 26
enum anonymous$38 { SOCKET_ADDRESS_OK=0, SOCKET_ADDRESS_WRONG_FAMILY=1, SOCKET_ADDRESS_PROBLEM_RESOLVING=2, SOCKET_ADDRESS_ERROR=3 };

// #anon_enum$TSP_REDIRECT_BROKER_TYPE_NONE=0$TSP_REDIRECT_BROKER_TYPE_FQDN=1$TSP_REDIRECT_BROKER_TYPE_IPV4=2$TSP_REDIRECT_BROKER_TYPE_IPV6=3
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 69
enum anonymous$29 { TSP_REDIRECT_BROKER_TYPE_NONE=0, TSP_REDIRECT_BROKER_TYPE_FQDN=1, TSP_REDIRECT_BROKER_TYPE_IPV4=2, TSP_REDIRECT_BROKER_TYPE_IPV6=3 };

// #anon_enum$TSP_REDIRECT_OK=0$TSP_REDIRECT_INTERNAL_ERR=1$TSP_REDIRECT_CANT_OPEN_FILE=2$TSP_REDIRECT_NO_LAST_SERVER=3$TSP_REDIRECT_CANT_WRITE_TO_FILE=4$TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST=5$TSP_REDIRECT_CANT_EXTRACT_PAYLOAD=6$TSP_REDIRECT_CANT_CREATE_LIST=7$TSP_REDIRECT_CANT_SORT_LIST=8$TSP_REDIRECT_CANT_LOG_REDIRECTION=9$TSP_REDIRECT_CANT_ALLOCATE_MEM=10$TSP_REDIRECT_ADDRESS_TRUNCATED=11$TSP_REDIRECT_CANT_GET_DISTANCES=12$TSP_REDIRECT_CANT_INSERT_BROKER_IN_LIST=13$TSP_REDIRECT_CANT_SAVE_BROKER_LIST=14$TSP_REDIRECT_EMPTY_BROKER_LIST=15$TSP_REDIRECT_TOO_MANY_BROKERS=16$TSP_REDIRECT_CANT_INIT_THREAD_ARG=17$TSP_REDIRECT_CANT_CREATE_THREAD=18$TSP_REDIRECT_CANT_WAIT_FOR_THREAD=19$TSP_REDIRECT_ECHO_REQUEST_TIMEOUT=20$TSP_REDIRECT_ECHO_REQUEST_ERROR=21$TSP_REDIRECT_CANT_MALLOC_THREAD_ARRAY=22$TSP_REDIRECT_CANT_MALLOC_THREAD_ARGS=23
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 42
enum anonymous$27 { TSP_REDIRECT_OK=0, TSP_REDIRECT_INTERNAL_ERR=1, TSP_REDIRECT_CANT_OPEN_FILE=2, TSP_REDIRECT_NO_LAST_SERVER=3, TSP_REDIRECT_CANT_WRITE_TO_FILE=4, TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST=5, TSP_REDIRECT_CANT_EXTRACT_PAYLOAD=6, TSP_REDIRECT_CANT_CREATE_LIST=7, TSP_REDIRECT_CANT_SORT_LIST=8, TSP_REDIRECT_CANT_LOG_REDIRECTION=9, TSP_REDIRECT_CANT_ALLOCATE_MEM=10, TSP_REDIRECT_ADDRESS_TRUNCATED=11, TSP_REDIRECT_CANT_GET_DISTANCES=12, TSP_REDIRECT_CANT_INSERT_BROKER_IN_LIST=13, TSP_REDIRECT_CANT_SAVE_BROKER_LIST=14, TSP_REDIRECT_EMPTY_BROKER_LIST=15, TSP_REDIRECT_TOO_MANY_BROKERS=16, TSP_REDIRECT_CANT_INIT_THREAD_ARG=17, TSP_REDIRECT_CANT_CREATE_THREAD=18, TSP_REDIRECT_CANT_WAIT_FOR_THREAD=19, TSP_REDIRECT_ECHO_REQUEST_TIMEOUT=20, TSP_REDIRECT_ECHO_REQUEST_ERROR=21, TSP_REDIRECT_CANT_MALLOC_THREAD_ARRAY=22, TSP_REDIRECT_CANT_MALLOC_THREAD_ARGS=23 };

// #anon_enum$TUNTYPE_V6V4=0$TUNTYPE_V6UDPV4=1$TUNTYPE_V4V6=2
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogocmsgdata.h line 54
enum anonymous$22 { TUNTYPE_V6V4=0, TUNTYPE_V6UDPV4=1, TUNTYPE_V4V6=2 };

// #anon_enum$V6V4=1$V6UDPV4=2$V6ANYV4=3$V4V6=4$DSLITE=5
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 44
enum anonymous$23 { V6V4=1, V6UDPV4=2, V6ANYV4=3, V4V6=4, DSLITE=5 };

// tag-#anon#ST[*{S8}$S8$'realm'||*{S8}$S8$'nonce'||*{S8}$S8$'qop'||*{S8}$S8$'algorithm'||*{S8}$S8$'charset'||*{S8}$S8$'rspauth'|]
// file tsp_auth.c line 30
struct anonymous$36;

// tag-#anon#ST[*{SYM#tag-nodeptr#}$SYM#tag-nodeptr#$'head'||*{SYM#tag-nodeptr#}$SYM#tag-nodeptr#$'tail'||*{SYM#tag-nodeptr#}$SYM#tag-nodeptr#$'cursor'||S32'size'||S32'sorted'||S32'item_deleted'||U32'$pad0'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/deque.h line 32
struct anonymous$37;

// tag-#anon#ST[*{U8}$U8$'buf'||U64'alloc'||U64'offset'||U64'end'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 30
struct anonymous;

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$4;

// tag-#anon#ST[BF{U32}$U32$'__w_stopval'||BF{U32}$U32$'__w_stopsig'||BF{U32}$U32$'$anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 84
struct anonymous$34;

// tag-#anon#ST[BF{U32}$U32$'__w_termsig'||BF{U32}$U32$'__w_coredump'||BF{U32}$U32$'__w_retcode'||BF{U32}$U32$'$anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 69
struct anonymous$33;

// tag-#anon#ST[S32'_id'||U32'$pad0'||*{cS8}$cS8$'_str'|]
// file src/gogocuistrings.c line 22
struct anonymous$3;

// tag-#anon#ST[U16'encoding'||U16'parity'|]
// file /usr/include/linux/hdlc/ioctl.h line 52
struct anonymous$13;

// tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'|]
// file /usr/include/linux/hdlc/ioctl.h line 39
struct anonymous$11;

// tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'||U32'slot_map'|]
// file /usr/include/linux/hdlc/ioctl.h line 45
struct anonymous$12;

// tag-#anon#ST[U32'dlci'|]
// file /usr/include/linux/hdlc/ioctl.h line 67
struct anonymous$15;

// tag-#anon#ST[U32'dlci'||ARR16{S8}$S8$'master'|]
// file /usr/include/linux/hdlc/ioctl.h line 71
struct anonymous$16;

// tag-#anon#ST[U32'interval'||U32'timeout'|]
// file /usr/include/linux/hdlc/ioctl.h line 76
struct anonymous$17;

// tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]
// file /usr/include/linux/hdlc/ioctl.h line 57
struct anonymous$14;

// tag-#anon#UN[*{S8}$S8$'ptr'||S32'boolean'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'asn1_string'||*{SYM#tag-asn1_object_st#}$SYM#tag-asn1_object_st#$'object'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'integer'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'enumerated'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'bit_string'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'octet_string'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'printablestring'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'t61string'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'ia5string'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'generalstring'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'bmpstring'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'universalstring'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'utctime'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'generalizedtime'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'visiblestring'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'utf8string'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'set'||*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'sequence'||*{SYM#tag-ASN1_VALUE_st#}$SYM#tag-ASN1_VALUE_st#$'asn1_value'|]
// file /usr/include/openssl/asn1.h line 526
union anonymous$40;

// tag-#anon#UN[*{SYM#tag-#anon#ST[U16'encoding'||U16'parity'|]#}$SYM#tag-#anon#ST[U16'encoding'||U16'parity'|]#$'raw_hdlc'||*{SYM#tag-#anon#ST[U32'interval'||U32'timeout'|]#}$SYM#tag-#anon#ST[U32'interval'||U32'timeout'|]#$'cisco'||*{SYM#tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]#}$SYM#tag-#anon#ST[U32't391'||U32't392'||U32'n391'||U32'n392'||U32'n393'||U16'lmi'||U16'dce'|]#$'fr'||*{SYM#tag-#anon#ST[U32'dlci'|]#}$SYM#tag-#anon#ST[U32'dlci'|]#$'fr_pvc'||*{SYM#tag-#anon#ST[U32'dlci'||ARR16{S8}$S8$'master'|]#}$SYM#tag-#anon#ST[U32'dlci'||ARR16{S8}$S8$'master'|]#$'fr_pvc_info'||*{SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'|]#}$SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'|]#$'sync'||*{SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'||U32'slot_map'|]#}$SYM#tag-#anon#ST[U32'clock_rate'||U32'clock_type'||U16'loopback'||U16'$pad0'||U32'slot_map'|]#$'te1'|]
// file /usr/include/linux/if.h line 182
union anonymous$19;

// tag-#anon#UN[*{SYM#tag-wait#}$SYM#tag-wait#$'__uptr'||*{S32}$S32$'__iptr'|]
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 60
union anonymous$5;

// tag-#anon#UN[*{SYM#tag-wait#}$SYM#tag-wait#$'__uptr'||*{S32}$S32$'__iptr'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 60
union anonymous$6;

// tag-#anon#UN[*{V(S32|S32|*{V}$V$)->V}$V(S32|S32|*{V}$V$)->V$'cb_1'||*{S32(S32|S32|*{SYM#tag-bn_gencb_st#}$SYM#tag-bn_gencb_st#$)->S32}$S32(S32|S32|*{SYM#tag-bn_gencb_st#}$SYM#tag-bn_gencb_st#$)->S32$'cb_2'|]
// file /usr/include/openssl/bn.h line 351
union anonymous$39;

// tag-#anon#UN[ARR16{S8}$S8$'ifrn_name'|]
// file /usr/include/linux/if.h line 205
union anonymous$20;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$7;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 129
union anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}$S8$'ifru_slave'||ARR16{S8}$S8$'ifru_newname'||*{V}$V$'ifru_data'||SYM#tag-if_settings#'ifru_settings'|]
// file /usr/include/linux/if.h line 210
union anonymous$24;

// tag-#anon#UN[SYM#tag-sockaddr_in#'in4'||SYM#tag-sockaddr_in6#'in6'|]
// file icmp_echo_engine.c line 120
union anonymous$31;

// tag-ASN1_VALUE_st
// file /usr/include/openssl/asn1.h line 299
struct ASN1_VALUE_st;

// tag-DSA_SIG_st
// file /usr/include/openssl/dsa.h line 124
struct DSA_SIG_st;

// tag-MD5Context
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/md5.h line 40
struct MD5Context;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__BROKER_LIST
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogocmsgdata.h line 101
struct __BROKER_LIST;

// tag-__ECHO_EVENT
// file icmp_echo_engine.c line 81
struct __ECHO_EVENT;

// tag-__HACCESS_CONFIG_INFO
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/haccessmsgdata.h line 42
struct __HACCESS_CONFIG_INFO;

// tag-__HACCESS_STATUS_INFO
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/haccessmsgdata.h line 95
struct __HACCESS_STATUS_INFO;

// tag-__ICMP_ECHO_ENGINE_PARMS
// file icmp_echo_engine.c line 91
struct __ICMP_ECHO_ENGINE_PARMS;

// tag-__ICMP_ECHO_HEADER
// file icmp_echo_engine.c line 56
struct __ICMP_ECHO_HEADER;

// tag-__IP6_PSEUDO_HEADER
// file icmp_echo_engine.c line 69
struct __IP6_PSEUDO_HEADER;

// tag-__KA_ENGINE_PARMS
// file net_ka.c line 30
struct __KA_ENGINE_PARMS;

// tag-__MAPPING_STATUS
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/haccessmsgdata.h line 71
struct __MAPPING_STATUS;

// tag-__STATUS_INFO
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogocmsgdata.h line 63
struct __STATUS_INFO;

// tag-__TSP_PROTOCOL_CODES_STR
// file tsp_client.c line 73
struct __TSP_PROTOCOL_CODES_STR;

// tag-__TUNNEL_INFO
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogocmsgdata.h line 82
struct __TUNNEL_INFO;

// tag-__TUNNEL_LOOP_CONFIG
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_tun_mgt.h line 15
struct __TUNNEL_LOOP_CONFIG;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-asn1_object_st
// file /usr/include/openssl/ossl_typ.h line 103
struct asn1_object_st;

// tag-asn1_string_st
// file /usr/include/openssl/ossl_typ.h line 83
struct asn1_string_st;

// tag-asn1_type_st
// file /usr/include/openssl/asn1.h line 524
struct asn1_type_st;

// tag-bignum_ctx
// file /usr/include/openssl/ossl_typ.h line 121
struct bignum_ctx;

// tag-bignum_st
// file /usr/include/openssl/ossl_typ.h line 120
struct bignum_st;

// tag-bio_method_st
// file /usr/include/openssl/bio.h line 312
struct bio_method_st;

// tag-bio_st
// file /usr/include/openssl/crypto.h line 290
struct bio_st;

// tag-bn_gencb_st
// file /usr/include/openssl/ossl_typ.h line 125
struct bn_gencb_st;

// tag-bn_mont_ctx_st
// file /usr/include/openssl/ossl_typ.h line 123
struct bn_mont_ctx_st;

// tag-crypto_ex_data_st
// file /usr/include/openssl/ossl_typ.h line 195
struct crypto_ex_data_st;

// tag-dh_method
// file /usr/include/openssl/ossl_typ.h line 141
struct dh_method;

// tag-dh_st
// file /usr/include/openssl/ossl_typ.h line 140
struct dh_st;

// tag-dsa_method
// file /usr/include/openssl/ossl_typ.h line 144
struct dsa_method;

// tag-dsa_st
// file /usr/include/openssl/ossl_typ.h line 143
struct dsa_st;

// tag-engine_st
// file /usr/include/openssl/ossl_typ.h line 177
struct engine_st;

// tag-env_md_ctx_st
// file /usr/include/openssl/ossl_typ.h line 132
struct env_md_ctx_st;

// tag-env_md_st
// file /usr/include/openssl/ossl_typ.h line 131
struct env_md_st;

// tag-evp_cipher_ctx_st
// file /usr/include/openssl/ossl_typ.h line 130
struct evp_cipher_ctx_st;

// tag-evp_cipher_st
// file /usr/include/openssl/ossl_typ.h line 129
struct evp_cipher_st;

// tag-evp_pkey_ctx_st
// file /usr/include/openssl/ossl_typ.h line 138
struct evp_pkey_ctx_st;

// tag-if_settings
// file /usr/include/linux/if.h line 179
struct if_settings;

// tag-ifmap
// file /usr/include/linux/if.h line 169
struct ifmap;

// tag-ifreq
// file /usr/include/linux/if.h line 203
struct ifreq;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-net_tools
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net.h line 14
struct net_tools;

// tag-nodeptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/deque.h line 25
struct nodeptr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rttengine_statistics
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 38
struct rttengine_statistics;

// tag-rudp_message_struct
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 32
struct rudp_message_struct;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-stAttribute
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xmlparse.h line 42
struct stAttribute;

// tag-stBrokerList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 76
struct stBrokerList;

// tag-stBrokerTimingThreadArg
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 83
struct stBrokerTimingThreadArg;

// tag-stConf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 54
struct stConf;

// tag-stLinkedList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_tun.h line 20
struct stLinkedList;

// tag-stLogConfiguration
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 37
struct stLogConfiguration;

// tag-stNode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xmlparse.h line 33
struct stNode;

// tag-stPayload
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 37
struct stPayload;

// tag-stTunnel
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_tun.h line 25
struct stTunnel;

// tag-stack_st
// file /usr/include/openssl/stack.h line 66
struct stack_st;

// tag-stack_st_void
// file /usr/include/openssl/crypto.h line 293
struct stack_st_void;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-syslog_facility
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 111
struct syslog_facility;

// tag-tSeverityLevel
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 29
enum tSeverityLevel { ELError=0, ELWarning=1, ELInfo=2, ELDebug=3 };

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
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-pal/defs/pal_time.def line 20
struct tm;

// tag-wait
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 62
union wait;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// Assign
// file xml_tun.c line 109
static signed int Assign(char *str, char **toStr);
// AssignToList
// file xml_tun.c line 137
static signed int AssignToList(char *str, struct stLinkedList **toList);
// AuthANONYMOUS
// file tsp_auth.c line 43
unsigned int AuthANONYMOUS(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list);
// AuthDIGEST_MD5
// file tsp_auth.c line 245
unsigned int AuthDIGEST_MD5(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list, signed int version_index);
// AuthPASSDSS_3DES_1
// file tsp_auth_passdss.c line 323
unsigned int AuthPASSDSS_3DES_1(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list);
// AuthPLAIN
// file tsp_auth.c line 90
unsigned int AuthPLAIN(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list);
// BIO_ctrl
// file /usr/include/openssl/bio.h line 664
signed long int BIO_ctrl(struct bio_st *, signed int, signed long int, void *);
// BIO_f_base64
// file /usr/include/openssl/evp.h line 701
struct bio_method_st * BIO_f_base64(void);
// BIO_f_cipher
// file /usr/include/openssl/evp.h line 702
struct bio_method_st * BIO_f_cipher(void);
// BIO_new
// file /usr/include/openssl/bio.h line 655
struct bio_st * BIO_new(struct bio_method_st *);
// BIO_pop
// file /usr/include/openssl/bio.h line 671
struct bio_st * BIO_pop(struct bio_st *);
// BIO_push
// file /usr/include/openssl/bio.h line 670
struct bio_st * BIO_push(struct bio_st *, struct bio_st *);
// BIO_s_mem
// file /usr/include/openssl/bio.h line 687
struct bio_method_st * BIO_s_mem(void);
// BIO_set_cipher
// file /usr/include/openssl/evp.h line 704
void BIO_set_cipher(struct bio_st *, const struct evp_cipher_st *, const unsigned char *, const unsigned char *, signed int);
// BIO_set_flags
// file /usr/include/openssl/bio.h line 240
void BIO_set_flags(struct bio_st *, signed int);
// BIO_vfree
// file /usr/include/openssl/bio.h line 658
void BIO_vfree(struct bio_st *);
// BIO_write
// file /usr/include/openssl/bio.h line 661
signed int BIO_write(struct bio_st *, const void *, signed int);
// BN_bin2bn
// file /usr/include/openssl/bn.h line 441
struct bignum_st * BN_bin2bn(const unsigned char *, signed int, struct bignum_st *);
// BN_bn2bin
// file /usr/include/openssl/bn.h line 442
signed int BN_bn2bin(const struct bignum_st *, unsigned char *);
// BN_bn2hex
// file /usr/include/openssl/bn.h line 530
char * BN_bn2hex(const struct bignum_st *);
// BN_clear_free
// file /usr/include/openssl/bn.h line 438
void BN_clear_free(struct bignum_st *);
// BN_cmp
// file /usr/include/openssl/bn.h line 491
signed int BN_cmp(const struct bignum_st *, const struct bignum_st *);
// BN_free
// file /usr/include/openssl/bn.h line 492
void BN_free(struct bignum_st *);
// BN_hex2bn
// file /usr/include/openssl/bn.h line 532
signed int BN_hex2bn(struct bignum_st **, const char *);
// BN_new
// file /usr/include/openssl/bn.h line 436
struct bignum_st * BN_new(void);
// BN_num_bits
// file /usr/include/openssl/bn.h line 434
signed int BN_num_bits(const struct bignum_st *);
// CopyLogFileToBackup
// file log.c line 105
static signed int CopyLogFileToBackup(char *filename, char *backupname);
// DH_compute_key
// file /usr/include/openssl/dh.h line 222
signed int DH_compute_key(unsigned char *, const struct bignum_st *, struct dh_st *);
// DH_free
// file /usr/include/openssl/dh.h line 201
void DH_free(struct dh_st *);
// DH_generate_key
// file /usr/include/openssl/dh.h line 221
signed int DH_generate_key(struct dh_st *);
// DH_new
// file /usr/include/openssl/dh.h line 200
struct dh_st * DH_new(void);
// DH_size
// file /usr/include/openssl/dh.h line 203
signed int DH_size(const struct dh_st *);
// DNSGenerateID
// file dns.c line 44
static unsigned short int DNSGenerateID(void);
// DNSMessageCreate
// file dns.c line 128
static enum anonymous$10 DNSMessageCreate(char *Buffer, unsigned short int DNSid, char *Domain, char *Name, unsigned int TTL, char *AAAA, unsigned long int *Len_p);
// DNSNameEncode
// file dns.c line 70
static enum anonymous$10 DNSNameEncode(char **Pos_pp, char *Name, unsigned short int Offset);
// DNSUpdate
// file dns.c line 236
static enum anonymous$10 DNSUpdate(signed int Socket, char *Name, char *Domain, char *AAAA);
// DNSUpdateAddAAAA
// file dns.c line 329
enum anonymous$10 DNSUpdateAddAAAA(signed int Socket, char *Name, char *Domain, char *AAAA);
// DNSUpdateClose
// file dns.c line 320
signed int DNSUpdateClose(signed int Socket);
// DNSUpdateConnect
// file dns.c line 306
signed int DNSUpdateConnect(char *Server);
// DNSUpdateDelRRSets
// file dns.c line 339
enum anonymous$10 DNSUpdateDelRRSets(signed int Socket, char *Name, char *Domain);
// DSA_SIG_free
// file /usr/include/openssl/dsa.h line 189
void DSA_SIG_free(struct DSA_SIG_st *);
// DSA_SIG_new
// file /usr/include/openssl/dsa.h line 188
struct DSA_SIG_st * DSA_SIG_new(void);
// DSA_do_verify
// file /usr/include/openssl/dsa.h line 194
signed int DSA_do_verify(const unsigned char *, signed int, struct DSA_SIG_st *, struct dsa_st *);
// DSA_free
// file /usr/include/openssl/dsa.h line 205
void DSA_free(struct dsa_st *);
// DSA_new
// file /usr/include/openssl/dsa.h line 203
struct dsa_st * DSA_new(void);
// Decode
// file md5c.c line 85
static void Decode(unsigned int *output, const unsigned char *input, unsigned int len);
// DirectErrorMessage
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 51
signed int DirectErrorMessage(char *message, ...);
// Display
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 52
void Display(signed int VerboseLevel, enum tSeverityLevel SeverityLvl, const char *func, char *format, ...);
// EVP_des_ede3_cbc
// file /usr/include/openssl/evp.h line 768
const struct evp_cipher_st * EVP_des_ede3_cbc(void);
// EVP_sha1
// file /usr/include/openssl/evp.h line 720
const struct env_md_st * EVP_sha1(void);
// Encode
// file md5c.c line 67
static void Encode(unsigned char *output, unsigned int *input, unsigned int len);
// ExtractChallenge
// file tsp_auth.c line 195
void ExtractChallenge(struct anonymous$36 *c, char *String);
// FormatBrokerListAddr
// file tsp_client.c line 875
signed int FormatBrokerListAddr(struct stBrokerList *listElement, char **ppAddr);
// FreeBrokerList
// file tsp_client.c line 807
void FreeBrokerList(struct __BROKER_LIST **ppBrokerList);
// FreeHACCESSStatusInfo
// file tsp_client.c line 821
void FreeHACCESSStatusInfo(struct __HACCESS_STATUS_INFO **ppHACCESSStatusInfo);
// FreeLogConfiguration
// file log.c line 695
static void FreeLogConfiguration(struct stLogConfiguration *configuration);
// FreeStatusInfo
// file tsp_client.c line 787
void FreeStatusInfo(struct __STATUS_INFO **ppStatusInfo);
// FreeTunnelInfo
// file tsp_client.c line 797
void FreeTunnelInfo(struct __TUNNEL_INFO **ppTunnelInfo);
// GetLogFileBackupName
// file log.c line 47
static signed int GetLogFileBackupName(char *filename, char *backupname);
// GetSizeOfNullTerminatedArray
// file lib.c line 90
signed int GetSizeOfNullTerminatedArray(char **a);
// HMAC
// file /usr/include/openssl/hmac.h line 98
unsigned char * HMAC(const struct env_md_st *, const void *, signed int, const unsigned char *, unsigned long int, unsigned char *, unsigned int *);
// IEE_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 65
enum anonymous$26 IEE_destroy(void **pp_config);
// IEE_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 55
enum anonymous$26 IEE_init(void **pp_config, enum anonymous$28 eng_mode, unsigned int send_interval, unsigned int echo_num, unsigned int echo_timeout, unsigned char echo_timeout_threshold, char *src, char *dst, signed int af, void (*send_clbk)(void), void (*recv_clbk)(double));
// IEE_init::recv_clbk$object
//
void recv_clbk$object(double);
// IEE_init::send_clbk$object
//
void send_clbk$object(void);
// IEE_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 67
enum anonymous$26 IEE_process(void *p_config);
// IEE_stop
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 70
enum anonymous$26 IEE_stop(void *p_config);
// InitLogSystem
// file tsp_client.c line 1856
signed int InitLogSystem(const struct stConf *p_config);
// InitNetToolsArray
// file tsp_client.c line 1803
void InitNetToolsArray(struct net_tools *nt_array);
// InsertInChallegeStruct
// file tsp_auth.c line 155
signed int InsertInChallegeStruct(struct anonymous$36 *c, char *Token, char *Value);
// IsAddressInPrefix
// file lib.c line 125
signed int IsAddressInPrefix(const char *address, const char *prefix, const signed short int prefix_len);
// IsAll
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/lib.h line 23
signed int IsAll(char *AllowedChars, char *Value);
// IsPresent
// file lib.c line 79
signed int IsPresent(char *Value);
// KA_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 47
enum anonymous$8 KA_destroy(void **pp_engine);
// KA_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 35
enum anonymous$8 KA_init(void **pp_engine, unsigned int ka_send_interval, char *ka_src_addr, char *ka_dst_addr, signed int ka_af);
// KA_qry_status
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 43
enum anonymous$9 KA_qry_status(void *p_engine);
// KA_start
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 41
enum anonymous$8 KA_start(void *p_engine);
// KA_stop
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 45
enum anonymous$8 KA_stop(void *p_engine);
// LogBufferLineToFile
// file log.c line 313
static signed int LogBufferLineToFile(char *LogLine, struct stLogConfiguration *configuration, signed int *OutputBufferChars);
// LogClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 54
void LogClose(void);
// LogConfigure
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 53
signed int LogConfigure(struct stLogConfiguration *configuration);
// LogToFile
// file log.c line 376
static signed int LogToFile(signed int buffer, enum tSeverityLevel SeverityLvl, const char *FunctionName, char *Format, ...);
// LogToLocal
// file log.c line 488
static signed int LogToLocal(struct _IO_FILE *location, char *Format, ...);
// LogToSyslog
// file log.c line 274
static signed int LogToSyslog(signed int VerboseLevel, enum tSeverityLevel SeverityLvl, const char *FunctionName, char *Format, ...);
// MD5Final
// file md5c.c line 219
void MD5Final(unsigned char *digest, struct MD5Context *context);
// MD5Init
// file md5c.c line 138
void MD5Init(struct MD5Context *context);
// MD5Pad
// file md5c.c line 196
void MD5Pad(struct MD5Context *context);
// MD5Transform
// file md5c.c line 234
static void MD5Transform(unsigned int *state, const unsigned char *block);
// MD5Update
// file md5c.c line 157
void MD5Update(struct MD5Context *context, const unsigned char *input, unsigned int inputLen);
// NetRUDPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 22
extern signed int NetRUDPClose(signed int sock);
// NetRUDPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 21
extern signed int NetRUDPConnect(signed int *p_sock, char *Host, unsigned short int Port);
// NetRUDPDestroy
// file net_rudp.c line 36
signed int NetRUDPDestroy(void);
// NetRUDPInit
// file net_rudp.c line 28
signed int NetRUDPInit(void);
// NetRUDPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 27
extern signed int NetRUDPPrintf(signed int sock, char *out, signed int ol, char *Format, ...);
// NetRUDPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 29
extern signed int NetRUDPRead(signed int sock, char *b, signed int l);
// NetRUDPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 24
extern signed int NetRUDPReadWrite(signed int sock, char *in, signed int il, char *out, signed int ol);
// NetRUDPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 26
extern signed int NetRUDPWrite(signed int sock, char *b, signed int l);
// NetTCP6Close
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 27
extern signed int NetTCP6Close(signed int Socket);
// NetTCP6Connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 26
extern signed int NetTCP6Connect(signed int *p_sock, char *Host, unsigned short int Port);
// NetTCP6Printf
// file net_tcp6.c line 116
extern signed int NetTCP6Printf(signed int sock, char *out, signed int pl, char *Format, ...);
// NetTCP6Read
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 34
extern signed int NetTCP6Read(signed int sock, char *in, signed int l);
// NetTCP6ReadWrite
// file net_tcp6.c line 84
extern signed int NetTCP6ReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo);
// NetTCP6Write
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 31
extern signed int NetTCP6Write(signed int sock, char *b, signed int l);
// NetTCPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 15
extern signed int NetTCPClose(signed int Socket);
// NetTCPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 14
extern signed int NetTCPConnect(signed int *p_sock, char *Host, unsigned short int Port);
// NetTCPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 20
extern signed int NetTCPPrintf(signed int sock, char *out, signed int pl, char *Format, ...);
// NetTCPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 22
extern signed int NetTCPRead(signed int sock, char *in, signed int l);
// NetTCPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 17
extern signed int NetTCPReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo);
// NetTCPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 19
extern signed int NetTCPWrite(signed int sock, char *b, signed int l);
// NetText2Addr
// file net.c line 110
struct in_addr * NetText2Addr(char *Address, struct in_addr *in_p);
// NetText2Addr6
// file net.c line 183
struct in6_addr * NetText2Addr6(char *Address, struct in6_addr *in6_p);
// NetUDPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 15
extern signed int NetUDPClose(signed int Socket);
// NetUDPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 14
extern signed int NetUDPConnect(signed int *p_sock, char *Host, unsigned short int Port);
// NetUDPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 20
extern signed int NetUDPPrintf(signed int sock, char *out, signed int ol, char *Format, ...);
// NetUDPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 22
extern signed int NetUDPRead(signed int sock, char *b, signed int l);
// NetUDPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 17
extern signed int NetUDPReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo);
// NetUDPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 19
extern signed int NetUDPWrite(signed int sock, char *b, signed int l);
// NotifyhaccessConfigInfo
// file tsp_client.c line 852
signed int NotifyhaccessConfigInfo(const struct __HACCESS_CONFIG_INFO *aHACCESSConfigInfo);
// ParseArguments
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/cli.h line 15
void ParseArguments(signed int argc, char **argv, struct stConf *Conf);
// ParseSyslogFacility
// file config.c line 58
static signed int ParseSyslogFacility(struct stConf *pConf, char *facility);
// PrintUsage
// file cli.c line 27
void PrintUsage(char *message);
// Q_BSearch
// file deque.c line 805
static signed int Q_BSearch(struct anonymous$37 *q, void *key, signed int (*Comp)(const void *, const void *));
// Q_BSearch::Comp$object
//
signed int Comp$object(const void *, const void *);
// Q_DelCur
// file deque.c line 542
void * Q_DelCur(struct anonymous$37 *q);
// Q_Empty
// file deque.c line 191
signed int Q_Empty(struct anonymous$37 *q);
// Q_End
// file deque.c line 171
signed int Q_End(struct anonymous$37 *q);
// Q_Find
// file deque.c line 639
signed int Q_Find(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *));
// Q_Find::Comp$object
//
signed int Comp$object(const void *, const void *);
// Q_First
// file deque.c line 230
void * Q_First(struct anonymous$37 *q);
// Q_Get
// file deque.c line 587
void * Q_Get(struct anonymous$37 *q);
// Q_Init
// file deque.c line 127
signed int Q_Init(struct anonymous$37 *q);
// Q_Insert
// file deque.c line 891
signed int Q_Insert(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *));
// Q_Insert::Comp$object
//
signed int Comp$object(const void *, const void *);
// Q_Last
// file deque.c line 255
void * Q_Last(struct anonymous$37 *q);
// Q_Next
// file deque.c line 486
void * Q_Next(struct anonymous$37 *q);
// Q_PopHead
// file deque.c line 397
void * Q_PopHead(struct anonymous$37 *q);
// Q_PopTail
// file deque.c line 441
void * Q_PopTail(struct anonymous$37 *q);
// Q_Previous
// file deque.c line 513
void * Q_Previous(struct anonymous$37 *q);
// Q_PushHead
// file deque.c line 280
signed int Q_PushHead(struct anonymous$37 *q, void *d);
// Q_PushTail
// file deque.c line 339
signed int Q_PushTail(struct anonymous$37 *q, void *d);
// Q_Put
// file deque.c line 610
signed int Q_Put(struct anonymous$37 *q, void *data);
// Q_Seek
// file deque.c line 850
void * Q_Seek(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *));
// Q_Seek::Comp$object
//
signed int Comp$object(const void *, const void *);
// Q_Size
// file deque.c line 210
signed int Q_Size(struct anonymous$37 *q);
// Q_Sort
// file deque.c line 725
signed int Q_Sort(struct anonymous$37 *q, signed int (*Comp)(const void *, const void *));
// Q_Sort::Comp$object
//
signed int Comp$object(const void *, const void *);
// Q_Start
// file deque.c line 151
signed int Q_Start(struct anonymous$37 *q);
// QuickSort
// file deque.c line 660
static void QuickSort(void **list, signed int low, signed int high, signed int (*Comp)(const void *, const void *));
// QuickSort::Comp$object
//
signed int Comp$object(const void *, const void *);
// RetrieveBrokerList
// file tsp_client.c line 698
signed int RetrieveBrokerList(struct __BROKER_LIST **ppBrokerList);
// RetrieveHACCESSStatusInfo
// file tsp_client.c line 753
signed int RetrieveHACCESSStatusInfo(struct __HACCESS_STATUS_INFO **ppHACCESSStatusInfo);
// RetrieveStatusInfo
// file tsp_client.c line 649
signed int RetrieveStatusInfo(struct __STATUS_INFO **ppStatusInfo);
// RetrieveTunnelInfo
// file tsp_client.c line 673
signed int RetrieveTunnelInfo(struct __TUNNEL_INFO **ppTunnelInfo);
// RotateLogFile
// file log.c line 198
static signed int RotateLogFile(char *filename, signed int max_size, char *log_line);
// RotationPendingHook
// file log.c line 151
static signed int RotationPendingHook();
// SHA1
// file /usr/include/openssl/sha.h line 124
unsigned char * SHA1(const unsigned char *, unsigned long int, unsigned char *);
// SeverityToChar
// file log.c line 30
char SeverityToChar(const enum tSeverityLevel sLvl);
// ShowList
// file xml_tun.c line 382
void ShowList(struct stLinkedList *l);
// SkipBlanks
// file xmlparse.c line 50
static signed int SkipBlanks(char *str, signed int pos);
// TunInit
// file tsp_tun.c line 37
signed int TunInit(char *TunDevice);
// TunMainLoop
// file tsp_tun.c line 76
unsigned int TunMainLoop(signed int tunfd, signed int Socket, enum anonymous$0 keepalive, signed int keepalive_interval, char *local_address_ipv6, char *keepalive_address);
// XMLParse
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xmlparse.h line 67
extern signed int XMLParse(char *str, struct stNode *nodes);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __bswap_32$link1
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link1(unsigned int __bsx$link1);
// __bswap_32$link2
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link2(unsigned int __bsx$link2);
// __bswap_32$link3
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link3(unsigned int __bsx$link3);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 401
extern signed int __xstat(signed int, const char *, struct stat *);
// _calc_icmp_csum
// file icmp_echo_engine.c line 604
void _calc_icmp_csum(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct __ICMP_ECHO_HEADER *icmp_hdr);
// _compare_tv
// file icmp_echo_engine.c line 1334
double _compare_tv(struct timeval *tv_1, struct timeval *tv_2);
// _compute_echo_timeout
// file icmp_echo_engine.c line 1251
void _compute_echo_timeout(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_timeout);
// _compute_next_send
// file icmp_echo_engine.c line 1233
void _compute_next_send(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_next_send);
// _compute_tv_diff_now
// file icmp_echo_engine.c line 1312
double _compute_tv_diff_now(struct timeval *tv_diff);
// _conv_ms_to_tv
// file icmp_echo_engine.c line 1286
void _conv_ms_to_tv(double ms, struct timeval *tv);
// _create_insert_echo_event
// file icmp_echo_engine.c line 1090
struct __ECHO_EVENT * _create_insert_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_sent, unsigned int echo_seq);
// _create_ka_engine
// file net_ka.c line 323
enum anonymous$25 _create_ka_engine(struct __KA_ENGINE_PARMS **pp_engine);
// _decode_icmp_packet
// file icmp_echo_engine.c line 902
enum anonymous$32 _decode_icmp_packet(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, unsigned char *pkt_data, unsigned int pkt_len, unsigned int *echo_seq);
// _destroy_ka_engine
// file net_ka.c line 358
enum anonymous$25 _destroy_ka_engine(struct __KA_ENGINE_PARMS **pp_engine);
// _do_read
// file icmp_echo_engine.c line 812
enum anonymous$32 _do_read(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_delay, unsigned int *echo_seq);
// _do_read_wrap
// file icmp_echo_engine.c line 661
enum anonymous$26 _do_read_wrap(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_ref);
// _do_send
// file icmp_echo_engine.c line 533
enum anonymous$32 _do_send(struct __ICMP_ECHO_ENGINE_PARMS *p_engine);
// _do_send_wrap
// file icmp_echo_engine.c line 490
enum anonymous$26 _do_send_wrap(struct __ICMP_ECHO_ENGINE_PARMS *p_engine);
// _free_echo_event_list
// file icmp_echo_engine.c line 1209
void _free_echo_event_list(struct __ECHO_EVENT *p_event);
// _insert_echo_event
// file icmp_echo_engine.c line 1124
void _insert_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct __ECHO_EVENT *p_event_insert);
// _ka_recv_callback
// file net_ka.c line 464
void _ka_recv_callback(double rtt);
// _ka_send_callback
// file net_ka.c line 449
void _ka_send_callback(void);
// _ka_start_thread
// file net_ka.c line 384
void * _ka_start_thread(void *arg);
// _remove_free_echo_event
// file icmp_echo_engine.c line 1171
enum anonymous$32 _remove_free_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, unsigned int echo_seq);
// add_dsakey_to_keyfile
// file tsp_auth_passdss.c line 228
signed int add_dsakey_to_keyfile(struct dsa_st *dsa, char *host, char *filename, enum anonymous$0 autoaccept);
// ask
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/cli.h line 14
signed int ask(char *question, ...);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoi$link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link1(const char *__nptr$link1);
// atoi$link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link2(const char *__nptr$link2);
// atoi$link3
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link3(const char *__nptr$link3);
// atoi$link4
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link4(const char *__nptr$link4);
// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr);
// base64decode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/base64.h line 14
signed int base64decode(char *bufplain, const char *bufcoded);
// base64decode_binary
// file base64.c line 120
signed int base64decode_binary(unsigned char *bufplain, const char *bufcoded);
// base64decode_len
// file base64.c line 93
signed int base64decode_len(const char *bufcoded);
// base64encode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/base64.h line 17
signed int base64encode(char *encoded, const char *string, signed int len);
// base64encode_binary
// file base64.c line 181
signed int base64encode_binary(char *encoded, const unsigned char *string, signed int len);
// base64encode_len
// file base64.c line 168
signed int base64encode_len(signed int len);
// buffer_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 45
void buffer_append(struct anonymous *buffer, const void *data, unsigned long int len);
// buffer_append_space
// file buffer.c line 81
void * buffer_append_space(struct anonymous *buffer, unsigned long int len);
// buffer_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 39
void buffer_clear(struct anonymous *buffer);
// buffer_consume
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 50
void buffer_consume(struct anonymous *buffer, unsigned int bytes);
// buffer_consume_end
// file buffer.c line 157
void buffer_consume_end(struct anonymous *buffer, unsigned int bytes);
// buffer_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 40
void buffer_free(struct anonymous *buffer);
// buffer_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 48
void buffer_get(struct anonymous *buffer, void *buf, unsigned int len);
// buffer_get_bignum
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 35
void buffer_get_bignum(struct anonymous *buffer, struct bignum_st *value);
// buffer_get_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 36
unsigned int buffer_get_int(struct anonymous *buffer);
// buffer_get_octet
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 39
signed int buffer_get_octet(struct anonymous *buffer);
// buffer_get_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 42
void * buffer_get_string(struct anonymous *buffer, unsigned int *length_ptr);
// buffer_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 38
void buffer_init(struct anonymous *buffer);
// buffer_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 42
unsigned long int buffer_len(struct anonymous *buffer);
// buffer_ptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 43
void * buffer_ptr(struct anonymous *buffer);
// buffer_put_bignum
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 34
void buffer_put_bignum(struct anonymous *buffer, struct bignum_st *value);
// buffer_put_cstring
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 44
void buffer_put_cstring(struct anonymous *buffer, const char *s);
// buffer_put_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 37
void buffer_put_int(struct anonymous *buffer, unsigned int value);
// buffer_put_octet
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 40
void buffer_put_octet(struct anonymous *buffer, signed int value);
// buffer_put_string
// file bufaux.c line 201
void buffer_put_string(struct anonymous *buffer, const void *buf, unsigned int len);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// createConnectedSocket
// file net_echo_request.c line 43
signed int createConnectedSocket(struct addrinfo *address_info);
// createStatEngine
// file net_echo_request.c line 25
struct rttengine_statistics * createStatEngine();
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// destroySocket
// file net_echo_request.c line 101
signed int destroySocket(signed int sfd);
// execScript
// file tsp_setup.c line 37
signed int execScript(const char *cmd);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// findAttribute
// file xmlparse.c line 36
static struct stAttribute * findAttribute(char *name, struct stAttribute *attributes);
// findNode
// file xmlparse.c line 22
static struct stNode * findNode(char *name, struct stNode *nodes);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// freadline
// file tsp_auth_passdss.c line 42
static signed int freadline(char *buf, signed int max_len, struct _IO_FILE *fp);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// getSocketAddress
// file net_echo_request.c line 388
enum anonymous$38 getSocketAddress(char *server, enum anonymous$29 address_type, enum anonymous$23 tunnel_mode, struct addrinfo **address_info_root, struct addrinfo **address_info);
// get_always_use_last_server
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 75
void get_always_use_last_server(enum anonymous$0 *);
// get_auth_method
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 59
void get_auth_method(char **);
// get_auto_retry_connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 60
void get_auto_retry_connect(enum anonymous$0 *);
// get_broker_list_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 73
void get_broker_list_file(char **);
// get_client_v4
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 69
void get_client_v4(char **);
// get_config_errors
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 42
void get_config_errors(signed int *, unsigned int **);
// get_dns_server
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 57
void get_dns_server(char **);
// get_gogoc_dir
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 58
void get_gogoc_dir(char **);
// get_haccess_document_root
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 84
void get_haccess_document_root(char **);
// get_haccess_proxy_enabled
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 82
void get_haccess_proxy_enabled(enum anonymous$0 *);
// get_haccess_web_enabled
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 83
void get_haccess_web_enabled(enum anonymous$0 *);
// get_host_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 54
void get_host_type(char **);
// get_if_tun_v6udpv4
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 67
void get_if_tun_v6udpv4(char **);
// get_if_tun_v6v4
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 66
void get_if_tun_v6v4(char **);
// get_ifprefix
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 56
void get_ifprefix(char **);
// get_keepalive
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 63
void get_keepalive(enum anonymous$0 *);
// get_keepalive_interval
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 64
void get_keepalive_interval(signed int *);
// get_last_server_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 74
void get_last_server_file(char **);
// get_log
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 76
void get_log(const char *, signed short int *);
// get_log_filename
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 77
void get_log_filename(char **);
// get_log_rotation
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 78
void get_log_rotation(enum anonymous$0 *);
// get_log_rotation_del
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 80
void get_log_rotation_del(enum anonymous$0 *);
// get_log_rotation_sz
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 79
void get_log_rotation_sz(signed int *);
// get_mui_string
// file src/gogocuistrings.c line 144
const char * get_mui_string(const signed int id);
// get_pal_version
// file src/pal_version.c line 21
const char * get_pal_version(void);
// get_passwd
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 50
void get_passwd(char **);
// get_prefixlen
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 55
void get_prefixlen(signed int *);
// get_proxy_client
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 72
void get_proxy_client(enum anonymous$0 *);
// get_retry_delay
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 61
void get_retry_delay(signed int *);
// get_retry_delay_max
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 62
void get_retry_delay_max(signed int *);
// get_server
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 52
void get_server(char **);
// get_syslog_facility
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 81
void get_syslog_facility(char **);
// get_template
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 71
void get_template(char **);
// get_template_script
// file tsp_setup.c line 268
static char * get_template_script(const struct stConf *pConfig);
// get_tunnel_mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 65
void get_tunnel_mode(char **);
// get_ui_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogocuistrings.h line 108
const char * get_ui_string(const signed int id);
// get_user_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 48
void get_user_id(char **);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getppid
// file /usr/include/unistd.h line 631
extern signed int getppid(void);
// getsockname
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 127
extern signed int getsockname(signed int, struct sockaddr *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// in_cksum
// file net_cksm.c line 15
unsigned short int in_cksum(unsigned short int *addr, signed int len);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 40
signed int initialize(const char *);
// internal_discard_message
// file net_rudp.c line 420
extern void internal_discard_message(void *m);
// internal_get_adjusted_rto
// file net_rudp.c line 441
extern float internal_get_adjusted_rto(float rto);
// internal_get_sai
// file net_rudp.c line 453
static struct sockaddr_in * internal_get_sai(struct rttengine_statistics *s, char *Host, unsigned short int Port);
// internal_get_timestamp
// file net_rudp.c line 429
extern unsigned int internal_get_timestamp(struct rttengine_statistics *s);
// internal_prepare_message
// file net_rudp.c line 404
extern void * internal_prepare_message(struct rudp_message_struct **hdr, unsigned long int msglen);
// internal_send_recv
// file net_rudp.c line 130
extern signed int internal_send_recv(signed int fd, void *in, signed int il, void *out, signed int ol);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// is_dsakey_in_keyfile
// file tsp_auth_passdss.c line 72
static signed int is_dsakey_in_keyfile(struct dsa_st *dsa_1, char *host, char *filename);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// md5
// file md5c.c line 338
char * md5(char *string, unsigned long int len);
// md5digest
// file md5c.c line 356
void md5digest(char *string, unsigned long int len, char *digest);
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
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// p_address
// file xml_tun.c line 280
signed int p_address(struct stNode *n, char *content);
// p_as
// file xml_tun.c line 253
signed int p_as(struct stNode *n, char *content);
// p_broker
// file xml_tun.c line 209
signed int p_broker(struct stNode *n, char *content);
// p_client
// file xml_tun.c line 219
signed int p_client(struct stNode *n, char *content);
// p_default
// file xml_tun.c line 182
signed int p_default(struct stNode *n, char *content);
// p_dns_server
// file xml_tun.c line 230
signed int p_dns_server(struct stNode *n, char *content);
// p_keepalive
// file xml_tun.c line 263
signed int p_keepalive(struct stNode *n, char *content);
// p_prefix
// file xml_tun.c line 274
signed int p_prefix(struct stNode *n, char *content);
// p_router
// file xml_tun.c line 241
signed int p_router(struct stNode *n, char *content);
// p_server
// file xml_tun.c line 199
signed int p_server(struct stNode *n, char *content);
// p_tunnel
// file xml_tun.c line 188
signed int p_tunnel(struct stNode *n, char *content);
// parse_addr_port
// file net.c line 35
signed int parse_addr_port(const char *addr_port, char **addr, unsigned short int *port, unsigned short int dflt_port);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 244
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 253
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 261
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous$2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 784
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int, struct sockaddr *, unsigned int *);
// rttengine_deinit
// file net_rudp.c line 360
extern signed int rttengine_deinit(struct rttengine_statistics *s, void *im, void *om);
// rttengine_init
// file net_rudp.c line 294
extern signed int rttengine_init(struct rttengine_statistics *s);
// rttengine_update
// file net_rudp.c line 383
extern float rttengine_update(struct rttengine_statistics *s, unsigned int rtt);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$4 *, struct anonymous$4 *, struct anonymous$4 *, struct timeval *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_broker_list
// file tsp_local.c line 51
signed int send_broker_list(void);
// send_haccess_status_info
// file tsp_local.c line 52
signed int send_haccess_status_info(void);
// send_status_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogoc_c_wrapper.h line 37
signed int send_status_info(void);
// send_tunnel_info
// file tsp_local.c line 50
signed int send_tunnel_info(void);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, struct sockaddr *, unsigned int);
// set_tsp_env_variables
// file tsp_setup.c line 139
void set_tsp_env_variables(const struct stConf *pConfig, const struct stTunnel *pTunnelInfo);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// signal_handler
// file unix-main.c line 32
void signal_handler(signed int sigraised);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 453
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcasecmp
// file /usr/include/string.h line 534
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 413
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 399
extern unsigned long int strlen(const char *);
// strrchr
// file /usr/include/string.h line 263
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 342
extern char * strstr(const char *, const char *);
// strtok
// file /usr/include/string.h line 348
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// system
// file /usr/include/stdlib.h line 717
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// timeEchoRequestReply
// file net_echo_request.c line 238
enum anonymous$27 timeEchoRequestReply(signed int sfd, char *address, struct rttengine_statistics *engine, unsigned int *distance);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// tolower$link1
// file /usr/include/ctype.h line 215
static inline signed int tolower$link1(signed int __c$link1);
// tspAddBrokerToList
// file tsp_redirect.c line 42
enum anonymous$27 tspAddBrokerToList(struct stBrokerList **broker_list, char *address, enum anonymous$29 address_type, unsigned int distance);
// tspAddPayloadString
// file tsp_client.c line 173
char * tspAddPayloadString(struct stPayload *Payload, char *Addition);
// tspAuthenticate
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_auth.h line 27
unsigned int tspAuthenticate(signed int socket, unsigned int cap, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list, signed int version_index);
// tspBuildCreateAcknowledge
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_req.h line 17
char * tspBuildCreateAcknowledge(void);
// tspBuildCreateRequest
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_req.h line 16
char * tspBuildCreateRequest(struct stConf *conf);
// tspCheckForStopOrWait
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 56
extern signed int tspCheckForStopOrWait(const unsigned int uiWaitMs);
// tspClearTunnelInfo
// file xml_tun.c line 352
void tspClearTunnelInfo(struct stTunnel *Tunnel);
// tspClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 45
unsigned int tspClose(signed int sock, struct net_tools *nt);
// tspConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 44
unsigned int tspConnect(signed int *p_sock, char *srvname, unsigned short int srvport, struct net_tools *nt);
// tspCreateBrokerList
// file tsp_redirect.c line 166
enum anonymous$27 tspCreateBrokerList(struct stTunnel *tunnel_info, struct stBrokerList **broker_list, signed int *broker_count);
// tspDoEchoRequest
// file net_echo_request.c line 495
extern enum anonymous$27 tspDoEchoRequest(char *address, enum anonymous$29 address_type, struct stConf *conf, unsigned int *distance);
// tspExtractCapability
// file tsp_cap.c line 26
unsigned int tspExtractCapability(char *String);
// tspExtractPayload
// file tsp_client.c line 126
signed int tspExtractPayload(char *Payload, struct stTunnel *t);
// tspFormatCapabilities
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 46
char * tspFormatCapabilities(char *szBuffer, const unsigned long int bufLen, const unsigned int cap);
// tspFree
// file xml_tun.c line 332
void tspFree(char *var);
// tspFreeBrokerList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 92
extern enum anonymous$27 tspFreeBrokerList(struct stBrokerList *broker_list);
// tspFreeLinkedList
// file xml_tun.c line 337
void tspFreeLinkedList(struct stLinkedList *list);
// tspGetBrokerDistance
// file net_echo_request.c line 110
void * tspGetBrokerDistance(void *threadarg);
// tspGetBrokerDistances
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 88
extern enum anonymous$27 tspGetBrokerDistances(struct stBrokerList *broker_list, signed int broker_count, struct stConf *conf);
// tspGetCapabilities
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 45
unsigned int tspGetCapabilities(signed int socket, struct net_tools *nt, unsigned int *capability, signed int version_index, struct stConf *conf, struct stBrokerList **broker_list);
// tspGetErrorByCode
// file lib.c line 102
char * tspGetErrorByCode(signed int code);
// tspGetLocalAddress
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 58
extern char * tspGetLocalAddress(signed int socket, char *buffer, signed int size);
// tspGetOSInfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 57
extern void tspGetOSInfo(const unsigned long int len, char *buf);
// tspGetStatusCode
// file tsp_client.c line 147
signed int tspGetStatusCode(char *payload);
// tspGetTspStatusStr
// file tsp_client.c line 156
const char * tspGetTspStatusStr(signed int tsp_status);
// tspGoDaemon
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 63
extern signed int tspGoDaemon(struct stConf *c);
// tspHandleRedirect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 93
extern enum anonymous$27 tspHandleRedirect(char *payload, struct stConf *conf, struct stBrokerList **broker_list);
// tspInitialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 148
unsigned int tspInitialize(signed int argc, char **argv, struct stConf *pConf);
// tspInsertInBrokerList
// file tsp_redirect.c line 246
enum anonymous$27 tspInsertInBrokerList(struct stBrokerList *new_element, struct stBrokerList **sorted_list);
// tspIsRedirectStatus
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 90
extern signed int tspIsRedirectStatus(signed int status);
// tspLeaseCheckExp
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_lease.h line 16
signed int tspLeaseCheckExp(const signed long int tun_expiration);
// tspLeaseGetExpTime
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_lease.h line 14
signed long int tspLeaseGetExpTime(const signed long int tun_lifetime);
// tspLogOSInfo
// file tsp_client.c line 1906
void tspLogOSInfo(void);
// tspLogReceivedRedirection
// file tsp_redirect.c line 331
enum anonymous$27 tspLogReceivedRedirection(char *payload, struct stConf *conf);
// tspLogRedirectionList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 91
extern enum anonymous$27 tspLogRedirectionList(struct stBrokerList *broker_list, signed int sorted);
// tspMain
// file tsp_client.c line 921
signed int tspMain(signed int argc, char **argv);
// tspPerformTunnelLoop
// file tsp_tun_mgt.c line 46
unsigned int tspPerformTunnelLoop(struct __TUNNEL_LOOP_CONFIG * const pTunLoopCfg);
// tspReadBrokerListFromFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 96
extern enum anonymous$27 tspReadBrokerListFromFile(char *broker_list_file, struct stBrokerList **broker_list);
// tspReadConfigFile
// file config.c line 92
unsigned int tspReadConfigFile(char *szFile, struct stConf *pConf);
// tspReadLastServerFromFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 94
extern enum anonymous$27 tspReadLastServerFromFile(char *last_server_file, char *buffer);
// tspSend
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 48
signed int tspSend(signed int socket, struct stPayload *pl, struct net_tools *nt);
// tspSendRecv
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 47
signed int tspSendRecv(signed int socket, struct stPayload *plin, struct stPayload *plout, struct net_tools *nt);
// tspSetCapability
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 44
unsigned int tspSetCapability(char *Token, char *Value);
// tspSetEnv
// file tsp_local.c line 76
extern void tspSetEnv(char *Variable, char *Value, signed int Flag);
// tspSetupInterface
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_setup.h line 18
unsigned int tspSetupInterface(struct stConf *c, struct stTunnel *t);
// tspSetupInterfaceLocal
// file tsp_local.c line 107
extern signed int tspSetupInterfaceLocal(struct stConf *pConf, struct stTunnel *pTun);
// tspSetupTunnel
// file tsp_client.c line 408
unsigned int tspSetupTunnel(struct stConf *conf, struct net_tools *nt, signed int version_index, struct stBrokerList **broker_list);
// tspSortBrokerList
// file tsp_redirect.c line 278
enum anonymous$27 tspSortBrokerList(struct stBrokerList **broker_list, struct stConf *conf, signed int broker_count);
// tspStartLocal
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 52
extern unsigned int tspStartLocal(signed int socket, struct stConf *c, struct stTunnel *t, struct net_tools *nt);
// tspTearDownTunnel
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_setup.h line 19
unsigned int tspTearDownTunnel(struct stConf *pConf, struct stTunnel *pTunInfo);
// tspTestIPv6Support
// file tsp_local.c line 58
unsigned int tspTestIPv6Support();
// tspTunnelNegotiation
// file tsp_client.c line 309
unsigned int tspTunnelNegotiation(signed int socket, struct stTunnel *tunnel_info, struct stConf *conf, struct net_tools *nt, signed int version_index, struct stBrokerList **broker_list);
// tspUpdateSourceAddr
// file tsp_client.c line 224
unsigned int tspUpdateSourceAddr(struct stConf *pConf, signed int fd);
// tspWriteBrokerListToFile
// file tsp_redirect.c line 489
extern enum anonymous$27 tspWriteBrokerListToFile(char *broker_list_file, struct stBrokerList *broker_list);
// tspWriteLastServerToFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 95
extern enum anonymous$27 tspWriteLastServerToFile(char *last_server_file, char *last_server);
// tspXMLParse
// file xml_tun.c line 425
signed int tspXMLParse(char *Data, struct stTunnel *Tunnel);
// tspXMLShowInfo
// file xml_tun.c line 394
void tspXMLShowInfo(struct stTunnel *Tunnel);
// tsp_get_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/version.h line 42
char * tsp_get_version(void);
// un_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogoc_c_wrapper.h line 41
void un_initialize(void);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// validate_tunnel_info
// file tsp_setup.c line 79
signed int validate_tunnel_info(const struct stTunnel *pTunnelInfo);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// wait
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 102
extern signed int wait(union anonymous$6);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$36
{
  // realm
  char *realm;
  // nonce
  char *nonce;
  // qop
  char *qop;
  // algorithm
  char *algorithm;
  // charset
  char *charset;
  // rspauth
  char *rspauth;
};

struct anonymous$37
{
  // head
  struct nodeptr *head;
  // tail
  struct nodeptr *tail;
  // cursor
  struct nodeptr *cursor;
  // size
  signed int size;
  // sorted
  signed int sorted;
  // item_deleted
  signed int item_deleted;
};

struct anonymous
{
  // buf
  unsigned char *buf;
  // alloc
  unsigned long int alloc;
  // offset
  unsigned long int offset;
  // end
  unsigned long int end;
};

struct anonymous$4
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous$34
{
  // __w_stopval
  unsigned int __w_stopval : 8;
  // __w_stopsig
  unsigned int __w_stopsig : 8;
  // $anon0
  unsigned int $anon0 : 16;
};

struct anonymous$33
{
  // __w_termsig
  unsigned int __w_termsig : 7;
  // __w_coredump
  unsigned int __w_coredump : 1;
  // __w_retcode
  unsigned int __w_retcode : 8;
  // $anon0
  unsigned int $anon0 : 16;
};

struct anonymous$3
{
  // _id
  signed int _id;
  // _str
  const char *_str;
};

struct anonymous$13
{
  // encoding
  unsigned short int encoding;
  // parity
  unsigned short int parity;
};

struct anonymous$11
{
  // clock_rate
  unsigned int clock_rate;
  // clock_type
  unsigned int clock_type;
  // loopback
  unsigned short int loopback;
};

struct anonymous$12
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

struct anonymous$15
{
  // dlci
  unsigned int dlci;
};

struct anonymous$16
{
  // dlci
  unsigned int dlci;
  // master
  char master[16l];
};

struct anonymous$17
{
  // interval
  unsigned int interval;
  // timeout
  unsigned int timeout;
};

struct anonymous$14
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

union anonymous$40
{
  // ptr
  char *ptr;
  // boolean
  signed int boolean;
  // asn1_string
  struct asn1_string_st *asn1_string;
  // object
  struct asn1_object_st *object;
  // integer
  struct asn1_string_st *integer;
  // enumerated
  struct asn1_string_st *enumerated;
  // bit_string
  struct asn1_string_st *bit_string;
  // octet_string
  struct asn1_string_st *octet_string;
  // printablestring
  struct asn1_string_st *printablestring;
  // t61string
  struct asn1_string_st *t61string;
  // ia5string
  struct asn1_string_st *ia5string;
  // generalstring
  struct asn1_string_st *generalstring;
  // bmpstring
  struct asn1_string_st *bmpstring;
  // universalstring
  struct asn1_string_st *universalstring;
  // utctime
  struct asn1_string_st *utctime;
  // generalizedtime
  struct asn1_string_st *generalizedtime;
  // visiblestring
  struct asn1_string_st *visiblestring;
  // utf8string
  struct asn1_string_st *utf8string;
  // set
  struct asn1_string_st *set;
  // sequence
  struct asn1_string_st *sequence;
  // asn1_value
  struct ASN1_VALUE_st *asn1_value;
};

union anonymous$19
{
  // raw_hdlc
  struct anonymous$13 *raw_hdlc;
  // cisco
  struct anonymous$17 *cisco;
  // fr
  struct anonymous$14 *fr;
  // fr_pvc
  struct anonymous$15 *fr_pvc;
  // fr_pvc_info
  struct anonymous$16 *fr_pvc_info;
  // sync
  struct anonymous$11 *sync;
  // te1
  struct anonymous$12 *te1;
};

union anonymous$5
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
};

union anonymous$6
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
} __attribute__ ((__transparent_union__));

union anonymous$39
{
  // cb_1
  void (*cb_1)(signed int, signed int, void *);
  // cb_2
  signed int (*cb_2)(signed int, signed int, struct bn_gencb_st *);
};

union anonymous$20
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous$7
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$2
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

union anonymous$1
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

struct if_settings
{
  // type
  unsigned int type;
  // size
  unsigned int size;
  // ifs_ifsu
  union anonymous$19 ifs_ifsu;
};

union anonymous$24
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

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct in6_addr
{
  // __in6_u
  union anonymous$7 __in6_u;
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

union anonymous$31
{
  // in4
  struct sockaddr_in in4;
  // in6
  struct sockaddr_in6 in6;
};

struct DSA_SIG_st
{
  // r
  struct bignum_st *r;
  // s
  struct bignum_st *s;
};

struct MD5Context
{
  // state
  unsigned int state[4l];
  // count
  unsigned int count[2l];
  // buffer
  unsigned char buffer[64l];
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

struct __BROKER_LIST
{
  // szAddress
  char *szAddress;
  // nDistance
  signed int nDistance;
  // next
  struct __BROKER_LIST *next;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct __ECHO_EVENT
{
  // echo_seq
  unsigned int echo_seq;
  // tv_timeout
  struct timeval tv_timeout;
  // next
  struct __ECHO_EVENT *next;
};

struct __HACCESS_CONFIG_INFO
{
  // haccess_doc_root
  char *haccess_doc_root;
  // haccess_proxy_enabled
  signed short int haccess_proxy_enabled;
  // haccess_web_enabled
  signed short int haccess_web_enabled;
  // haccess_devmap_changed
  signed short int haccess_devmap_changed;
};

struct __HACCESS_STATUS_INFO
{
  // haccess_proxy_status
  enum anonymous$18 haccess_proxy_status;
  // haccess_web_status
  enum anonymous$18 haccess_web_status;
  // haccess_devmapmod_status
  enum anonymous$18 haccess_devmapmod_status;
  // haccess_devmap_statuses
  struct __MAPPING_STATUS *haccess_devmap_statuses;
};

struct __ICMP_ECHO_ENGINE_PARMS
{
  // send_interval
  unsigned int send_interval;
  // echo_num
  unsigned int echo_num;
  // echo_timeout
  unsigned int echo_timeout;
  // echo_timeout_threshold
  unsigned int echo_timeout_threshold;
  // eng_mode
  unsigned char eng_mode : 2;
  // eng_ongoing
  unsigned char eng_ongoing : 1;
  // count_send
  unsigned int count_send;
  // count_ontime
  unsigned int count_ontime;
  // count_late
  unsigned int count_late;
  // count_consec_late
  unsigned char count_consec_late;
  // event_list
  struct __ECHO_EVENT *event_list;
  // clbk_send
  void (*clbk_send)(void);
  // clbk_recv
  void (*clbk_recv)(double);
  // icmp_echo_id
  unsigned int icmp_echo_id;
  // icmp_sfd
  signed int icmp_sfd;
  // icmp_saf
  signed int icmp_saf;
  // echo_addr_src
  union anonymous$31 echo_addr_src;
  // echo_addr_dst
  union anonymous$31 echo_addr_dst;
};

struct __ICMP_ECHO_HEADER
{
  // icmp_type
  unsigned char icmp_type;
  // icmp_code
  unsigned char icmp_code;
  // icmp_cksm
  unsigned short int icmp_cksm;
  // echo_id
  unsigned short int echo_id;
  // echo_seq
  unsigned short int echo_seq;
  // echo_data
  unsigned char echo_data[0l];
};

struct __IP6_PSEUDO_HEADER
{
  // ip6_src
  struct in6_addr ip6_src;
  // ip6_dst
  struct in6_addr ip6_dst;
  // hdr_len
  unsigned int hdr_len;
  // pad
  unsigned char pad[3l];
  // nxt_hdr
  unsigned char nxt_hdr;
  // icmp_hdr
  unsigned char icmp_hdr[0l];
};

struct __KA_ENGINE_PARMS
{
  // ka_thread_id
  unsigned long int ka_thread_id;
  // ka_status
  enum anonymous$9 ka_status;
  // p_echo_engine
  void *p_echo_engine;
};

struct __MAPPING_STATUS
{
  // device_name
  char *device_name;
  // mapping_status
  enum anonymous$30 mapping_status;
  // next
  struct __MAPPING_STATUS *next;
};

struct __STATUS_INFO
{
  // eStatus
  enum anonymous$21 eStatus;
  // nStatus
  signed int nStatus;
};

struct __TSP_PROTOCOL_CODES_STR
{
  // status
  signed int status;
  // status_str
  const char *status_str;
};

struct __TUNNEL_INFO
{
  // szBrokerName
  char *szBrokerName;
  // eTunnelType
  enum anonymous$22 eTunnelType;
  // szIPV4AddrLocalEndpoint
  char *szIPV4AddrLocalEndpoint;
  // szIPV6AddrLocalEndpoint
  char *szIPV6AddrLocalEndpoint;
  // szIPV6AddrDns
  char *szIPV6AddrDns;
  // szIPV4AddrRemoteEndpoint
  char *szIPV4AddrRemoteEndpoint;
  // szIPV6AddrRemoteEndpoint
  char *szIPV6AddrRemoteEndpoint;
  // szDelegatedPrefix
  char *szDelegatedPrefix;
  // szUserDomain
  char *szUserDomain;
  // tunnelUpTime
  signed long int tunnelUpTime;
};

struct __TUNNEL_LOOP_CONFIG
{
  // ka_src_addr
  char *ka_src_addr;
  // ka_dst_addr
  char *ka_dst_addr;
  // sa_family
  signed int sa_family;
  // ka_interval
  unsigned int ka_interval;
  // tun_lifetime
  signed long int tun_lifetime;
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

struct asn1_object_st
{
  // sn
  const char *sn;
  // ln
  const char *ln;
  // nid
  signed int nid;
  // length
  signed int length;
  // data
  const unsigned char *data;
  // flags
  signed int flags;
};

struct asn1_string_st
{
  // length
  signed int length;
  // type
  signed int type;
  // data
  unsigned char *data;
  // flags
  signed long int flags;
};

struct asn1_type_st
{
  // type
  signed int type;
  // value
  union anonymous$40 value;
};

struct bignum_st
{
  // d
  unsigned long int *d;
  // top
  signed int top;
  // dmax
  signed int dmax;
  // neg
  signed int neg;
  // flags
  signed int flags;
};

struct bio_method_st
{
  // type
  signed int type;
  // name
  const char *name;
  // bwrite
  signed int (*bwrite)(struct bio_st *, const char *, signed int);
  // bread
  signed int (*bread)(struct bio_st *, char *, signed int);
  // bputs
  signed int (*bputs)(struct bio_st *, const char *);
  // bgets
  signed int (*bgets)(struct bio_st *, char *, signed int);
  // ctrl
  signed long int (*ctrl)(struct bio_st *, signed int, signed long int, void *);
  // create
  signed int (*create)(struct bio_st *);
  // destroy
  signed int (*destroy)(struct bio_st *);
  // callback_ctrl
  signed long int (*callback_ctrl)(struct bio_st *, signed int, void (*)(struct bio_st *, signed int, const char *, signed int, signed long int, signed long int));
};

struct crypto_ex_data_st
{
  // sk
  struct stack_st_void *sk;
  // dummy
  signed int dummy;
};

struct bio_st
{
  // method
  struct bio_method_st *method;
  // callback
  signed long int (*callback)(struct bio_st *, signed int, const char *, signed int, signed long int, signed long int);
  // cb_arg
  char *cb_arg;
  // init
  signed int init;
  // shutdown
  signed int shutdown;
  // flags
  signed int flags;
  // retry_reason
  signed int retry_reason;
  // num
  signed int num;
  // ptr
  void *ptr;
  // next_bio
  struct bio_st *next_bio;
  // prev_bio
  struct bio_st *prev_bio;
  // references
  signed int references;
  // num_read
  unsigned long int num_read;
  // num_write
  unsigned long int num_write;
  // ex_data
  struct crypto_ex_data_st ex_data;
};

struct bn_gencb_st
{
  // ver
  unsigned int ver;
  // arg
  void *arg;
  // cb
  union anonymous$39 cb;
};

struct bn_mont_ctx_st
{
  // ri
  signed int ri;
  // RR
  struct bignum_st RR;
  // N
  struct bignum_st N;
  // Ni
  struct bignum_st Ni;
  // n0
  unsigned long int n0[2l];
  // flags
  signed int flags;
};

struct dh_method
{
  // name
  const char *name;
  // generate_key
  signed int (*generate_key)(struct dh_st *);
  // compute_key
  signed int (*compute_key)(unsigned char *, const struct bignum_st *, struct dh_st *);
  // bn_mod_exp
  signed int (*bn_mod_exp)(const struct dh_st *, struct bignum_st *, const struct bignum_st *, const struct bignum_st *, const struct bignum_st *, struct bignum_ctx *, struct bn_mont_ctx_st *);
  // init
  signed int (*init)(struct dh_st *);
  // finish
  signed int (*finish)(struct dh_st *);
  // flags
  signed int flags;
  // app_data
  char *app_data;
  // generate_params
  signed int (*generate_params)(struct dh_st *, signed int, signed int, struct bn_gencb_st *);
};

struct dh_st
{
  // pad
  signed int pad;
  // version
  signed int version;
  // p
  struct bignum_st *p;
  // g
  struct bignum_st *g;
  // length
  signed long int length;
  // pub_key
  struct bignum_st *pub_key;
  // priv_key
  struct bignum_st *priv_key;
  // flags
  signed int flags;
  // method_mont_p
  struct bn_mont_ctx_st *method_mont_p;
  // q
  struct bignum_st *q;
  // j
  struct bignum_st *j;
  // seed
  unsigned char *seed;
  // seedlen
  signed int seedlen;
  // counter
  struct bignum_st *counter;
  // references
  signed int references;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // meth
  const struct dh_method *meth;
  // engine
  struct engine_st *engine;
};

struct dsa_method
{
  // name
  const char *name;
  // dsa_do_sign
  struct DSA_SIG_st * (*dsa_do_sign)(const unsigned char *, signed int, struct dsa_st *);
  // dsa_sign_setup
  signed int (*dsa_sign_setup)(struct dsa_st *, struct bignum_ctx *, struct bignum_st **, struct bignum_st **);
  // dsa_do_verify
  signed int (*dsa_do_verify)(const unsigned char *, signed int, struct DSA_SIG_st *, struct dsa_st *);
  // dsa_mod_exp
  signed int (*dsa_mod_exp)(struct dsa_st *, struct bignum_st *, struct bignum_st *, struct bignum_st *, struct bignum_st *, struct bignum_st *, struct bignum_st *, struct bignum_ctx *, struct bn_mont_ctx_st *);
  // bn_mod_exp
  signed int (*bn_mod_exp)(struct dsa_st *, struct bignum_st *, struct bignum_st *, const struct bignum_st *, const struct bignum_st *, struct bignum_ctx *, struct bn_mont_ctx_st *);
  // init
  signed int (*init)(struct dsa_st *);
  // finish
  signed int (*finish)(struct dsa_st *);
  // flags
  signed int flags;
  // app_data
  char *app_data;
  // dsa_paramgen
  signed int (*dsa_paramgen)(struct dsa_st *, signed int, const unsigned char *, signed int, signed int *, unsigned long int *, struct bn_gencb_st *);
  // dsa_keygen
  signed int (*dsa_keygen)(struct dsa_st *);
};

struct dsa_st
{
  // pad
  signed int pad;
  // version
  signed long int version;
  // write_params
  signed int write_params;
  // p
  struct bignum_st *p;
  // q
  struct bignum_st *q;
  // g
  struct bignum_st *g;
  // pub_key
  struct bignum_st *pub_key;
  // priv_key
  struct bignum_st *priv_key;
  // kinv
  struct bignum_st *kinv;
  // r
  struct bignum_st *r;
  // flags
  signed int flags;
  // method_mont_p
  struct bn_mont_ctx_st *method_mont_p;
  // references
  signed int references;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // meth
  const struct dsa_method *meth;
  // engine
  struct engine_st *engine;
};

struct env_md_ctx_st
{
  // digest
  const struct env_md_st *digest;
  // engine
  struct engine_st *engine;
  // flags
  unsigned long int flags;
  // md_data
  void *md_data;
  // pctx
  struct evp_pkey_ctx_st *pctx;
  // update
  signed int (*update)(struct env_md_ctx_st *, const void *, unsigned long int);
};

struct env_md_st
{
  // type
  signed int type;
  // pkey_type
  signed int pkey_type;
  // md_size
  signed int md_size;
  // flags
  unsigned long int flags;
  // init
  signed int (*init)(struct env_md_ctx_st *);
  // update
  signed int (*update)(struct env_md_ctx_st *, const void *, unsigned long int);
  // final
  signed int (*final)(struct env_md_ctx_st *, unsigned char *);
  // copy
  signed int (*copy)(struct env_md_ctx_st *, const struct env_md_ctx_st *);
  // cleanup
  signed int (*cleanup)(struct env_md_ctx_st *);
  // sign
  signed int (*sign)(signed int, const unsigned char *, unsigned int, unsigned char *, unsigned int *, void *);
  // verify
  signed int (*verify)(signed int, const unsigned char *, unsigned int, const unsigned char *, unsigned int, void *);
  // required_pkey_type
  signed int required_pkey_type[5l];
  // block_size
  signed int block_size;
  // ctx_size
  signed int ctx_size;
  // md_ctrl
  signed int (*md_ctrl)(struct env_md_ctx_st *, signed int, signed int, void *);
};

struct evp_cipher_ctx_st
{
  // cipher
  const struct evp_cipher_st *cipher;
  // engine
  struct engine_st *engine;
  // encrypt
  signed int encrypt;
  // buf_len
  signed int buf_len;
  // oiv
  unsigned char oiv[16l];
  // iv
  unsigned char iv[16l];
  // buf
  unsigned char buf[32l];
  // num
  signed int num;
  // app_data
  void *app_data;
  // key_len
  signed int key_len;
  // flags
  unsigned long int flags;
  // cipher_data
  void *cipher_data;
  // final_used
  signed int final_used;
  // block_mask
  signed int block_mask;
  // final
  unsigned char final[32l];
};

struct evp_cipher_st
{
  // nid
  signed int nid;
  // block_size
  signed int block_size;
  // key_len
  signed int key_len;
  // iv_len
  signed int iv_len;
  // flags
  unsigned long int flags;
  // init
  signed int (*init)(struct evp_cipher_ctx_st *, const unsigned char *, const unsigned char *, signed int);
  // do_cipher
  signed int (*do_cipher)(struct evp_cipher_ctx_st *, unsigned char *, const unsigned char *, unsigned long int);
  // cleanup
  signed int (*cleanup)(struct evp_cipher_ctx_st *);
  // ctx_size
  signed int ctx_size;
  // set_asn1_parameters
  signed int (*set_asn1_parameters)(struct evp_cipher_ctx_st *, struct asn1_type_st *);
  // get_asn1_parameters
  signed int (*get_asn1_parameters)(struct evp_cipher_ctx_st *, struct asn1_type_st *);
  // ctrl
  signed int (*ctrl)(struct evp_cipher_ctx_st *, signed int, signed int, void *);
  // app_data
  void *app_data;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous$20 ifr_ifrn;
  // ifr_ifru
  union anonymous$24 ifr_ifru;
};

struct net_tools
{
  // netopen
  signed int (*netopen)(signed int *, char *, unsigned short int);
  // netclose
  signed int (*netclose)(signed int);
  // netsendrecv
  signed int (*netsendrecv)(signed int, char *, signed int, char *, signed int);
  // netsend
  signed int (*netsend)(signed int, char *, signed int);
  // netprintf
  signed int (*netprintf)(signed int, char *, signed int, char *, ...);
  // netrecv
  signed int (*netrecv)(signed int, char *, signed int);
  // netreadline
  signed int (*netreadline)(char *, signed int, char *, signed int);
};

struct nodeptr
{
  // data
  void *data;
  // prev
  struct nodeptr *prev;
  // next
  struct nodeptr *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rttengine_statistics
{
  // sai
  struct sockaddr *sai;
  // rtt
  float rtt;
  // srtt
  float srtt;
  // rttvar
  float rttvar;
  // rto
  float rto;
  // sequence
  unsigned int sequence;
  // retries
  signed int retries;
  // last_recv_sequence
  signed int last_recv_sequence;
  // initial_timestamp
  signed int initial_timestamp;
  // apply_backoff
  signed int apply_backoff;
  // has_peer
  signed int has_peer;
  // initiated
  signed int initiated;
};

struct rudp_message_struct
{
  // sequence
  unsigned int sequence;
  // timestamp
  unsigned int timestamp;
};

struct stAttribute
{
  // name
  char *name;
  // value
  char *value;
};

struct stBrokerList
{
  // address
  char address[255l];
  // address_type
  enum anonymous$29 address_type;
  // distance
  unsigned int distance;
  // next
  struct stBrokerList *next;
};

struct stBrokerTimingThreadArg
{
  // broker
  struct stBrokerList *broker;
  // conf
  struct stConf *conf;
};

struct stConf
{
  // tsp_dir
  char *tsp_dir;
  // server
  char *server;
  // dslite_server
  char *dslite_server;
  // dslite_client
  char *dslite_client;
  // userid
  char *userid;
  // passwd
  char *passwd;
  // auth_method
  char *auth_method;
  // client_v4
  char *client_v4;
  // client_v6
  char *client_v6;
  // protocol
  char *protocol;
  // if_tunnel_v6v4
  char *if_tunnel_v6v4;
  // if_tunnel_v6udpv4
  char *if_tunnel_v6udpv4;
  // if_tunnel_v4v6
  char *if_tunnel_v4v6;
  // dns_server
  char *dns_server;
  // routing_info
  char *routing_info;
  // if_prefix
  char *if_prefix;
  // template
  char *template;
  // host_type
  char *host_type;
  // log_filename
  char *log_filename;
  // last_server_file
  char *last_server_file;
  // haccess_document_root
  char *haccess_document_root;
  // broker_list_file
  char *broker_list_file;
  // keepalive_interval
  signed int keepalive_interval;
  // prefixlen
  signed int prefixlen;
  // retry_delay
  signed int retry_delay;
  // retry_delay_max
  signed int retry_delay_max;
  // syslog_facility
  signed int syslog_facility;
  // transport
  signed int transport;
  // log_rotation_size
  signed int log_rotation_size;
  // log_level_stderr
  signed short int log_level_stderr;
  // log_level_syslog
  signed short int log_level_syslog;
  // log_level_console
  signed short int log_level_console;
  // log_level_file
  signed short int log_level_file;
  // keepalive
  enum anonymous$0 keepalive;
  // syslog
  enum anonymous$0 syslog;
  // proxy_client
  enum anonymous$0 proxy_client;
  // log_rotation
  enum anonymous$0 log_rotation;
  // log_rotation_delete
  enum anonymous$0 log_rotation_delete;
  // always_use_same_server
  enum anonymous$0 always_use_same_server;
  // auto_retry_connect
  enum anonymous$0 auto_retry_connect;
  // tunnel_mode
  enum anonymous$23 tunnel_mode;
  // haccess_web_enabled
  enum anonymous$0 haccess_web_enabled;
  // haccess_proxy_enabled
  enum anonymous$0 haccess_proxy_enabled;
  // boot_mode
  enum anonymous$0 boot_mode;
  // nodaemon
  enum anonymous$0 nodaemon;
  // no_questions
  enum anonymous$0 no_questions;
  // addr_local_v4
  char addr_local_v4[46l];
  // port_local_v4
  unsigned short int port_local_v4;
  // addr_remote_v4
  char addr_remote_v4[46l];
  // port_remote_v4
  unsigned short int port_remote_v4;
};

struct stLinkedList
{
  // Value
  char *Value;
  // next
  struct stLinkedList *next;
};

struct stLogConfiguration
{
  // identity
  char *identity;
  // log_filename
  char *log_filename;
  // log_level_stderr
  signed int log_level_stderr;
  // log_level_console
  signed int log_level_console;
  // log_level_syslog
  signed int log_level_syslog;
  // log_level_file
  signed int log_level_file;
  // syslog_facility
  signed int syslog_facility;
  // log_rotation_size
  signed int log_rotation_size;
  // log_rotation
  signed int log_rotation;
  // buffer
  signed int buffer;
  // delete_rotated_log
  signed int delete_rotated_log;
};

struct stNode
{
  // name
  char *name;
  // p
  signed int (*p)(struct stNode *, char *);
  // attributes
  struct stAttribute attributes[6l];
};

struct stPayload
{
  // size
  signed long int size;
  // PayloadCapacity
  signed long int PayloadCapacity;
  // payload
  char *payload;
};

struct stTunnel
{
  // action
  char *action;
  // type
  char *type;
  // lifetime
  char *lifetime;
  // proxy
  char *proxy;
  // mtu
  char *mtu;
  // client_address_ipv4
  char *client_address_ipv4;
  // client_address_ipv6
  char *client_address_ipv6;
  // client_dns_server_address_ipv6
  char *client_dns_server_address_ipv6;
  // client_dns_name
  char *client_dns_name;
  // server_address_ipv4
  char *server_address_ipv4;
  // server_address_ipv6
  char *server_address_ipv6;
  // router_protocol
  char *router_protocol;
  // prefix_length
  char *prefix_length;
  // prefix
  char *prefix;
  // client_as
  char *client_as;
  // server_as
  char *server_as;
  // keepalive_interval
  char *keepalive_interval;
  // keepalive_address
  char *keepalive_address;
  // dns_server_address_ipv4
  struct stLinkedList *dns_server_address_ipv4;
  // dns_server_address_ipv6
  struct stLinkedList *dns_server_address_ipv6;
  // broker_address_ipv4
  struct stLinkedList *broker_address_ipv4;
  // broker_address_ipv6
  struct stLinkedList *broker_address_ipv6;
  // broker_redirect_ipv4
  struct stLinkedList *broker_redirect_ipv4;
  // broker_redirect_ipv6
  struct stLinkedList *broker_redirect_ipv6;
  // broker_redirect_dn
  struct stLinkedList *broker_redirect_dn;
};

struct stack_st
{
  // num
  signed int num;
  // data
  char **data;
  // sorted
  signed int sorted;
  // num_alloc
  signed int num_alloc;
  // comp
  signed int (*comp)(const void *, const void *);
};

struct stack_st_void
{
  // stack
  struct stack_st stack;
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

struct syslog_facility
{
  // string
  char *string;
  // value
  signed int value;
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

union wait
{
  // w_status
  signed int w_status;
  // __wait_terminated
  struct anonymous$33 __wait_terminated;
  // __wait_stopped
  struct anonymous$34 __wait_stopped;
};


// Broker
// file xml_tun.c line 93
struct stNode Broker[2l];
// Broker
// file xml_tun.c line 93
struct stNode Broker[2l] = { { .name="address", .p=p_address, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// Client
// file xml_tun.c line 70
struct stNode Client[5l];
// Client
// file xml_tun.c line 70
struct stNode Client[5l] = { { .name="address", .p=p_address, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="dns_server", .p=p_dns_server, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="router", .p=p_router, .attributes={ { .name="protocol", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="keepalive", .p=p_keepalive, .attributes={ { .name="interval", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// DNSServer
// file xml_tun.c line 87
struct stNode DNSServer[2l];
// DNSServer
// file xml_tun.c line 87
struct stNode DNSServer[2l] = { { .name="address", .p=p_address, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// DirSeparator
// file tsp_local.c line 41
char DirSeparator = (char)47;
// FileName
// file tsp_local.c line 36
char *FileName = "/etc/gogoc/gogoc.conf";
// GOGOCStatusContext
// file tsp_client.c line 59
const char *GOGOCStatusContext[11l] = { "Unspecified", "Configuration validation", "Network initialisation", "Network connection", "Retrieve TSP capabilities", "TSP authentication", "TSP tunnel negotiation", "Tunnel interface setup", "Tunnel life loop", "Application/tunnel teardown", (const char *)(void *)0 };
// Keepalive
// file xml_tun.c line 99
struct stNode Keepalive[2l];
// Keepalive
// file xml_tun.c line 99
struct stNode Keepalive[2l] = { { .name="address", .p=p_address, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// LogBuffer
// file log.c line 21
static struct anonymous LogBuffer;
// LogConfiguration
// file log.c line 20
static struct stLogConfiguration *LogConfiguration = (struct stLogConfiguration *)(void *)0;
// LogMutexInitialized
// file log.c line 23
signed int LogMutexInitialized = 0;
// Logfp
// file log.c line 19
static struct _IO_FILE *Logfp;
// PADDING
// file md5c.c line 95
static unsigned char PADDING[64l] = { (unsigned char)0x80, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 };
// Q_index
// file deque.c line 110
static void **Q_index;
// Root
// file xml_tun.c line 49
struct stNode Root[2l];
// Root
// file xml_tun.c line 49
struct stNode Root[2l] = { { .name="tunnel", .p=p_tunnel, .attributes={ { .name="action", .value=((char *)NULL) },
    { .name="type", .value=((char *)NULL) },
    { .name="lifetime", .value=((char *)NULL) },
    { .name="proxy", .value=((char *)NULL) },
    { .name="mtu", .value=((char *)NULL) }, { .name="", .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// Router
// file xml_tun.c line 79
struct stNode Router[4l];
// Router
// file xml_tun.c line 79
struct stNode Router[4l] = { { .name="prefix", .p=p_prefix, .attributes={ { .name="length", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="dns_server", .p=p_dns_server, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="as", .p=p_as, .attributes={ { .name="number", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// ScriptDir
// file tsp_local.c line 39
char *ScriptDir = (char *)(void *)0;
// ScriptExtension
// file tsp_local.c line 38
char *ScriptExtension = "sh";
// ScriptInterpretor
// file tsp_local.c line 37
char *ScriptInterpretor = "/bin/sh";
// Server
// file xml_tun.c line 63
struct stNode Server[3l];
// Server
// file xml_tun.c line 63
struct stNode Server[3l] = { { .name="address", .p=p_address, .attributes={ { .name="type", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="router", .p=p_router, .attributes={ { .name="protocol", .value=((char *)NULL) },
    { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// TSPProtoVerStr
// file tsp_client.c line 51
const char *TSPProtoVerStr[5l] = { "2.0.2", "2.0.1", "2.0.0", "1.0.1", (const char *)(void *)0 };
// TSP_PROTOCOL_CODES_STR
// file tsp_client.c line 78
struct __TSP_PROTOCOL_CODES_STR TSP_PROTOCOL_CODES_STR[19l] = { { .status=200, .status_str="Operation successful." },
    { .status=300, .status_str="Authentication failed." },
    { .status=301, .status_str="The server has reached its tunnel capacity limit." },
    { .status=302, .status_str="Unsupported TSP version." },
    { .status=303, .status_str="Unsupported tunnel type." },
    { .status=310, .status_str="Server-side error." },
    { .status=500, .status_str="Invalid TSP request." },
    { .status=501, .status_str="Invalid IPv4 address." },
    { .status=502, .status_str="Invalid IPv6 address." },
    { .status=506, .status_str="IPv4 prefix already in use." },
    { .status=507, .status_str="Prefix length unavailable." },
    { .status=509, .status_str="DNS delegation error." },
    { .status=518, .status_str="Unsupported prefix length." },
    { .status=520, .status_str="Missing prefix length." },
    { .status=521, .status_str="Request already in progress." },
    { .status=522, .status_str="Prefix requested for anonymous." },
    { .status=530, .status_str="Server too busy." },
    { .status=1200, .status_str="Redirection." },
    { .status=0, .status_str=(const char *)(void *)0 } };
// TspErrorCodesArray
// file lib.c line 18
char *TspErrorCodesArray[24l] = { "NO_ERROR", "NO_ERROR_SHOW_HELP", "TSP_ERROR", "SOCKET_ERROR", "INTERFACE_SETUP_FAILED", "KEEPALIVE_TIMEOUT", "KEEPALIVE_ERROR", "TUNNEL_ERROR", "TSP_VERSION_ERROR", "AUTHENTICATION_ERROR", "LEASE_EXPIRED", "SERVER_SIDE_ERROR", "INVALID_ARGUMENTS", "MEMORY_ERROR", "INVALID_SERVER", "INVALID_CONFIG_FILE", "INVALID_CLIENT_IPV4", "INVALID_CLIENT_IPV6", "LOGGING_CONFIGURATION_ERROR", "BROKER_REDIRECTION", "BROKER_REDIRECTION_ERROR", "SOCKET_ERROR_CANT_CONNECT", "INITIALIZATION_ERROR", (char *)(void *)0 };
// TspHomeDir
// file tsp_local.c line 40
char *TspHomeDir = "/usr/share/gogoc";
// Tunnel
// file xml_tun.c line 55
struct stNode Tunnel[4l];
// Tunnel
// file xml_tun.c line 55
struct stNode Tunnel[4l] = { { .name="server", .p=p_server, .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="client", .p=p_client, .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="broker", .p=p_broker, .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } },
    { .name="", .p=((signed int (*)(struct stNode *, char *))NULL), .attributes={ { .name="", .value=((char *)NULL) }, { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) },
    { .name=((char *)NULL), .value=((char *)NULL) } } } };
// basis_64
// file base64.c line 165
static const char basis_64[65l] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/', 0 };
// broker
// file xml_tun.c line 179
static signed int broker;
// client
// file xml_tun.c line 175
static signed int client;
// debug
// file xmlparse.c line 20
signed int debug = 0;
// dns_server
// file xml_tun.c line 178
static signed int dns_server;
// gHACCESSStatusInfo
// file tsp_client.c line 105
struct __HACCESS_STATUS_INFO gHACCESSStatusInfo;
// gStatusInfo
// file tsp_client.c line 102
struct __STATUS_INFO gStatusInfo;
// gTunnelInfo
// file tsp_client.c line 103
struct __TUNNEL_INFO gTunnelInfo;
// gogocUIStrings
// file src/gogocuistrings.c line 25
static const struct anonymous$3 gogocUIStrings[70l] = { { ._id=(signed int)0x00010000, ._str="Name=Value Parser Error" },
    { ._id=(signed int)0x00010001, ._str="Failed to open specified file." },
    { ._id=(signed int)0x00010002, ._str="Bad configuration file." },
    { ._id=(signed int)0x00010003, ._str="Failed to open file to write configuration data." },
    { ._id=(signed int)0x00020000, ._str="Generic Configuration Error" },
    { ._id=(signed int)0x00020001, ._str="Cannot load configuration when access mode is CREATE." },
    { ._id=(signed int)0x00020002, ._str="Cannot apply configuration data when access mode is READ." },
    { ._id=(signed int)0x00020003, ._str="Cannot cancel configuration changes when access mode is READ." },
    { ._id=(signed int)0x00020004, ._str="Cannot override configuration data with same contents." },
    { ._id=(signed int)0x00020005, ._str="Cannot override configuration data when access mode is READ." },
    { ._id=(signed int)0x00030000, ._str="gogoCLIENT Configuration Error" },
    { ._id=(signed int)0x00030001, ._str="Invalid configuration." },
    { ._id=(signed int)0x00030002, ._str="Failed to load default configuration: No default configuration file was provided during initialization." },
    { ._id=(signed int)0x00030003, ._str="Must supply password when authentication method is NOT anonymous." },
    { ._id=(signed int)0x00030004, ._str="Proxy client cannot be enabled with tunnel mode v6udpv4." },
    { ._id=(signed int)0x00030005, ._str="Keep-alive interval cannot be 0 when keep-alive is enabled." },
    { ._id=(signed int)0x00030006, ._str="(if_tunnel_v6v4=,if_tunnel_v6udpv4=)You must provide both V6V4 and V6UDPV4 interfaces when using V6ANYV4 tunnel mode." },
    { ._id=(signed int)0x00030007, ._str="(if_tunnel_v6v4=)You must provide the V6V4 tunnel interface when using V6V4 tunnel mode." },
    { ._id=(signed int)0x00030008, ._str="(if_tunnel_v6udpv4=)You must provide the V6UDPV4 tunnel interface when using V6UDPV4 tunnel mode." },
    { ._id=(signed int)0x00030009, ._str="(if_tunnel_v4v6=)You must provide the V4V6 tunnel interface when using V4V6 tunnel mode." },
    { ._id=(signed int)0x00040000, ._str="gogoCLIENT Validation Error" },
    { ._id=(signed int)0x00040001, ._str="(userid=)User ID must not be longer than 253 characters." },
    { ._id=(signed int)0x00040002, ._str="(userid=)Invalid characters found in user name." },
    { ._id=(signed int)0x00040003, ._str="(passwd=)Password must not be longer than 128 characters." },
    { ._id=(signed int)0x0004002C, ._str="(passwd=)Invalid characters found in password." },
    { ._id=(signed int)0x00040004, ._str="(server=)A server MUST be specified." },
    { ._id=(signed int)0x00040005, ._str="(server=)Server must not be longer than 1025 characters." },
    { ._id=(signed int)0x00040006, ._str="(server=)Invalid characters found in server string." },
    { ._id=(signed int)0x00040007, ._str="(host_type=)Host type must be: <router|host>." },
    { ._id=(signed int)0x00040008, ._str="(prefixlen=)Prefix length must be between 0 and 128." },
    { ._id=(signed int)0x00040009, ._str="(if_prefix=)Invalid characters found in interface name." },
    { ._id=(signed int)0x0004002D, ._str="(if_prefix=)Interface prefix must be supplied when host_type is 'router'." },
    { ._id=(signed int)0x0004000A, ._str="(dns_server=)DNS servers string must not be longer than 1025 characters." },
    { ._id=(signed int)0x0004000B, ._str="(dns_server=)Failed to resolve one or more DNS servers found in configuration." },
    { ._id=(signed int)0x0004000C, ._str="(gogoc_dir=)The directory does not exist." },
    { ._id=(signed int)0x0004000D, ._str="(auth_method=)Authorization method must be: <anonymous|any|digest-md5|plain|passdss-3des-1>." },
    { ._id=(signed int)0x0004000E, ._str="(retry_connect=)Retry connection must be:<yes|no>" },
    { ._id=(signed int)0x0004000F, ._str="(retry_delay=)Retry delay must be between 0 and 3600." },
    { ._id=(signed int)0x00040010, ._str="(keepalive=)Keep-alive must be: <yes|no>" },
    { ._id=(signed int)0x00040011, ._str="(keepalive_interval=)Keep-alive interval must be positive." },
    { ._id=(signed int)0x00040012, ._str="(tunnel_mode=)Tunnel mode must be: <v6anyv4|v6v4|v6udpv4|v4v6>" },
    { ._id=(signed int)0x00040013, ._str="(if_tunnel_v6v4=)Invalid characters found in interface name." },
    { ._id=(signed int)0x00040014, ._str="(if_tunnel_v6udpv4=)Invalid characters found in interface name." },
    { ._id=(signed int)0x00040015, ._str="(if_tunnel_v4v6=)Invalid characters found in interface name." },
    { ._id=(signed int)0x00040016, ._str="(client_v4=)Invalid IPv4 address. Address must be: <auto|A.B.C.D>." },
    { ._id=(signed int)0x00040017, ._str="(client_v6=)IPv6 address must be: <auto|X:X::X:X>." },
    { ._id=(signed int)0x00040018, ._str="(template=)Template must be: <checktunnel|freebsd|netbsd|linux|windows|darwin|cisco|solaris|openbsd|openwrt|gogocpe>" },
    { ._id=(signed int)0x00040019, ._str="(proxy_client=)Proxy client must be: <yes|no>" },
    { ._id=(signed int)0x0004001A, ._str="(broker_list=)Broker list filename cannot be greater than 256 characters." },
    { ._id=(signed int)0x0004001B, ._str="(broker_list=)Invalid characters found in broker list file name." },
    { ._id=(signed int)0x0004001C, ._str="(last_server=)Last server filename cannot be greater than 256 characters." },
    { ._id=(signed int)0x0004001D, ._str="(last_server=)Invalid characters found in last server file name." },
    { ._id=(signed int)0x0004001E, ._str="(always_use_same_server=)Value must be: <yes|no>" },
    { ._id=(signed int)0x0004001F, ._str="(log=)Log level must be between 0 and 3." },
    { ._id=(signed int)0x00040020, ._str="(log=)Log device must be: <console|stderr|file|syslog>" },
    { ._id=(signed int)0x00040021, ._str="(log_filename=)Log filename cannot be greater than 256 characters." },
    { ._id=(signed int)0x00040022, ._str="(log_filename=)Invalid characters found in log file name." },
    { ._id=(signed int)0x00040023, ._str="(log_rotation=)Log rotation must be: <yes|no>" },
    { ._id=(signed int)0x00040024, ._str="(log_rotation_size=)Log rotation size(in KB) must be: <16|32|128|1024>" },
    { ._id=(signed int)0x0004002F, ._str="(log_rotation_delete=)Log rotation deletion must be: <yes|no>" },
    { ._id=(signed int)0x00040025, ._str="(syslog_facility=)Syslog facility must be: <USER|LOCAL0|LOCAL1|LOCAL2|LOCAL3|LOCAL4|LOCAL5|LOCAL6|LOCAL7>" },
    { ._id=(signed int)0x00040026, ._str="(dns_server=)One or more DNS server specified contains invalid characters." },
    { ._id=(signed int)0x00040027, ._str="(haccess_proxy_enabled=)Home Access must be: <yes|no>" },
    { ._id=(signed int)0x00040028, ._str="(haccess_web_enabled=)Home Web must be: <yes|no>" },
    { ._id=(signed int)0x00040029, ._str="(haccess_document_root=)Home Web document root must exist." },
    { ._id=(signed int)0x0004002A, ._str="(haccess_document_root=)Must be specified when haccess_web_enabled=yes." },
    { ._id=(signed int)0x0004002B, ._str="(tunnel_mode=)Tunnel mode cannot be V4V6 with Home Access or Home Web." },
    { ._id=(signed int)0x00040030, ._str="(keepalive=)Keep-alives cannot be turned on when proxy mode is on." },
    { ._id=(signed int)0x00040031, ._str="(retry_delay_max=)Retry delay max must be between 0 and 3600." },
    { ._id=(signed int)0x00040032, ._str="(retry_delay_max=)Retry delay max must be greater than retry delay." } };
// gogocUIStrings$link1
// file src/gogocuistrings.c line 29
static const struct anonymous$3 gogocUIStrings$link1[44l] = { { ._id=(signed int)0x00000000, ._str="SUCCESS" },
    { ._id=(signed int)0x00000001, ._str="Failed writing on the named pipe." },
    { ._id=(signed int)0x00000002, ._str="Failed \"peeking\" IO status on named pipe." },
    { ._id=(signed int)0x00000003, ._str="Failed reading on the named pipe." },
    { ._id=(signed int)0x00000004, ._str="Pipe server is already up." },
    { ._id=(signed int)0x00000005, ._str="Failed creation of pipe server." },
    { ._id=(signed int)0x00000006, ._str="Pipe client is already connected." },
    { ._id=(signed int)0x00000007, ._str="Pipe client connection failed." },
    { ._id=(signed int)0x00000008, ._str="Pipe server disconnection failed." },
    { ._id=(signed int)0x00000009, ._str="Failed creation of client pipe." },
    { ._id=(signed int)0x0000000A, ._str="Pipe client disconnection failed." },
    { ._id=(signed int)0x0000000B, ._str="Invalid/erroneous IPC data packet received." },
    { ._id=(signed int)0x0000000C, ._str="IPC communication desynchronized. Need re-initialization." },
    { ._id=(signed int)0x0000000D, ._str="ERROR, IPC sequential packet number is not ordered." },
    { ._id=(signed int)0x0000000E, ._str="IPC layer internal buffer size too small to read data packet." },
    { ._id=(signed int)0x0000000F, ._str="User message data is too big to be sent through the IPC." },
    { ._id=(signed int)0x00000010, ._str="Failed acquiring IO mutex to perform requested IPC operation." },
    { ._id=(signed int)0x00000011, ._str="Message processing is disabled. Reception of messages is unavailable." },
    { ._id=(signed int)0x00000012, ._str="Unknown message received. Processing for that message is not implemented." },
    { ._id=(signed int)0x00000013, ._str="C language wrapper for messaging layer is already initialized." },
    { ._id=(signed int)0x00000014, ._str="C language wrapper for messaging layer is not implemented call initialize_messaging()." },
    { ._id=(signed int)0x00000015, ._str="Unknown error." },
    { ._id=(signed int)0x00000016, ._str="Failed redirection broker list extraction." },
    { ._id=(signed int)0x00000017, ._str="Configuration data is invalid." },
    { ._id=(signed int)0x00000018, ._str="Memory allocation error." },
    { ._id=(signed int)0x00000019, ._str="Socket I/O error." },
    { ._id=(signed int)0x0000001A, ._str="Socket error, cannot connect." },
    { ._id=(signed int)0x0000001B, ._str="A redirection has been received from the Gateway6." },
    { ._id=(signed int)0x0000001C, ._str="Redirection error." },
    { ._id=(signed int)0x0000001D, ._str="The Gateway6 is not supporting this TSP protocol version." },
    { ._id=(signed int)0x0000001E, ._str="Generic TSP protocol error." },
    { ._id=(signed int)0x0000001F, ._str="The requested tunnel mode is not available on the Gateway6." },
    { ._id=(signed int)0x00000020, ._str="Authentication method is not supported by the Gateway6." },
    { ._id=(signed int)0x00000021, ._str="Authentication failure." },
    { ._id=(signed int)0x00000022, ._str="Bad tunnel parameters received from the Gateway6." },
    { ._id=(signed int)0x00000023, ._str="Failed to execute tunnel configuration script." },
    { ._id=(signed int)0x00000024, ._str="A keepalive timeout occurred." },
    { ._id=(signed int)0x00000025, ._str="A keepalive network error occurred." },
    { ._id=(signed int)0x00000026, ._str="Internal tunnel I/O error." },
    { ._id=(signed int)0x00000027, ._str="The tunnel lease has expired." },
    { ._id=(signed int)0x00000028, ._str="The HACCESS setup script did not complete successfully." },
    { ._id=(signed int)0x00000029, ._str="The HACCESS subsystem could not apply the HomeAccess configuration successfully." },
    { ._id=(signed int)0x0000002A, ._str="The Gateway6 is too busy to handle your TSP session. Please retry later." },
    { ._id=(signed int)0x0000002B, ._str="The Gateway6 address is invalid." } };
// gszBrokerListFile
// file tsp_client.c line 104
char *gszBrokerListFile = (char *)(void *)0;
// indSigHUP
// file tsp_local.c line 43
signed int indSigHUP = 0;
// keepalive
// file xml_tun.c line 180
static signed int keepalive;
// logMutex
// file log.c line 24
union anonymous$1 logMutex;
// optarg
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-pal/defs/pal_getopt.def line 18
extern char *optarg;
// posn_index
// file deque.c line 111
static struct nodeptr **posn_index;
// pr2six
// file base64.c line 72
static const unsigned char pr2six[256l] = { (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)62, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)63, (const unsigned char)52, (const unsigned char)53, (const unsigned char)54, (const unsigned char)55, (const unsigned char)56, (const unsigned char)57, (const unsigned char)58, (const unsigned char)59, (const unsigned char)60, (const unsigned char)61, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)0, (const unsigned char)1, (const unsigned char)2, (const unsigned char)3, (const unsigned char)4, (const unsigned char)5, (const unsigned char)6, (const unsigned char)7, (const unsigned char)8, (const unsigned char)9, (const unsigned char)10, (const unsigned char)11, (const unsigned char)12, (const unsigned char)13, (const unsigned char)14, (const unsigned char)15, (const unsigned char)16, (const unsigned char)17, (const unsigned char)18, (const unsigned char)19, (const unsigned char)20, (const unsigned char)21, (const unsigned char)22, (const unsigned char)23, (const unsigned char)24, (const unsigned char)25, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)26, (const unsigned char)27, (const unsigned char)28, (const unsigned char)29, (const unsigned char)30, (const unsigned char)31, (const unsigned char)32, (const unsigned char)33, (const unsigned char)34, (const unsigned char)35, (const unsigned char)36, (const unsigned char)37, (const unsigned char)38, (const unsigned char)39, (const unsigned char)40, (const unsigned char)41, (const unsigned char)42, (const unsigned char)43, (const unsigned char)44, (const unsigned char)45, (const unsigned char)46, (const unsigned char)47, (const unsigned char)48, (const unsigned char)49, (const unsigned char)50, (const unsigned char)51, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64, (const unsigned char)64 };
// router
// file xml_tun.c line 177
static signed int router;
// rttengine_stats
// file net_rudp.c line 20
struct rttengine_statistics rttengine_stats;
// server
// file xml_tun.c line 176
static signed int server;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// syslog_facilities
// file config.c line 29
static struct syslog_facility syslog_facilities[10l] = { { .string="USER", .value=1 << 3 }, { .string="LOCAL0", .value=16 << 3 }, { .string="LOCAL1", .value=17 << 3 }, { .string="LOCAL2", .value=18 << 3 }, { .string="LOCAL3", .value=19 << 3 }, { .string="LOCAL4", .value=20 << 3 }, { .string="LOCAL5", .value=21 << 3 }, { .string="LOCAL6", .value=22 << 3 }, { .string="LOCAL7", .value=23 << 3 }, { .string=(char *)(void *)0, .value=0 } };
// theTunnelInfo
// file xml_tun.c line 172
static struct stTunnel *theTunnelInfo;

// Assign
// file xml_tun.c line 109
static signed int Assign(char *str, char **toStr)
{
  char *tol;
  signed int tmp_statement_expression$1;
  signed int tmp_if_expr$3;
  const signed int **return_value___ctype_tolower_loc$2;
  const signed int **return_value___ctype_tolower_loc$4;
  if(str == ((char *)NULL))
    return 0;

  else
  {
    tol = str;
    for( ; !((signed int)*tol == 0); tol = tol + 1l)
    {
      signed int __res;
      __res=tolower((signed int)*tol);
      tmp_statement_expression$1 = __res;
      *tol = (char)tmp_statement_expression$1;
    }
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(str);
    void *return_value_malloc$6;
    return_value_malloc$6=malloc(return_value_strlen$5 + (unsigned long int)1);
    *toStr = (char *)return_value_malloc$6;
    if(*toStr == ((char *)NULL))
    {
      printf("Assign: Memory allocation error!\n");
      return -1;
    }

    else
    {
      strcpy(*toStr, str);
      return 0;
    }
  }
}

// AssignToList
// file xml_tun.c line 137
static signed int AssignToList(char *str, struct stLinkedList **toList)
{
  struct stLinkedList *ll;
  if(str == ((char *)NULL))
    return 0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct stLinkedList) /*16ul*/ );
    ll = (struct stLinkedList *)return_value_malloc$1;
    if(ll == ((struct stLinkedList *)NULL))
    {
      printf("AssignToList: Memory allocation error!\n");
      return -1;
    }

    else
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(str);
      void *return_value_malloc$3;
      return_value_malloc$3=malloc(return_value_strlen$2 + (unsigned long int)1);
      ll->Value = (char *)return_value_malloc$3;
      if(ll->Value == ((char *)NULL))
      {
        printf("AssignToList: Memory allocation error!\n");
        return -1;
      }

      else
      {
        strcpy(ll->Value, str);
        ll->next = *toList;
        *toList = ll;
        return 0;
      }
    }
  }
}

// AuthANONYMOUS
// file tsp_auth.c line 43
unsigned int AuthANONYMOUS(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list)
{
  char Buffer[4096l];
  char string[25l] = { 'A', 'U', 'T', 'H', 'E', 'N', 'T', 'I', 'C', 'A', 'T', 'E', ' ', 'A', 'N', 'O', 'N', 'Y', 'M', 'O', 'U', 'S', '\r', '\n', 0 };
  signed int tsp_status;
  signed int return_value;
  return_value=nt->netsendrecv(socket, string, (signed int)sizeof(char [25l]) /*25ul*/ , Buffer, (signed int)sizeof(char [4096l]) /*4096ul*/ );
  if(return_value == -1)
  {
    Display(1, (enum tSeverityLevel)ELError, "AuthANONYMOUS", "Failed to write/read on network socket.");
    return (unsigned int)(10 | 5 << 16);
  }

  else
  {
    tsp_status=tspGetStatusCode(Buffer);
    signed int return_value_tspIsRedirectStatus$2;
    return_value_tspIsRedirectStatus$2=tspIsRedirectStatus(tsp_status);
    if(!(return_value_tspIsRedirectStatus$2 == 0))
    {
      enum anonymous$27 return_value_tspHandleRedirect$1;
      return_value_tspHandleRedirect$1=tspHandleRedirect(Buffer, conf, broker_list);
      if((signed int)return_value_tspHandleRedirect$1 == TSP_REDIRECT_OK)
        return (unsigned int)(57345 | 5 << 16);

      else
        return (unsigned int)(14 | 5 << 16);
    }

    if(!(tsp_status == 200))
    {
      const char *return_value_tspGetTspStatusStr$3;
      return_value_tspGetTspStatusStr$3=tspGetTspStatusStr(tsp_status);
      Display(1, (enum tSeverityLevel)ELError, "AuthANONYMOUS", "Unknown TSP error during authentication. (%s)", return_value_tspGetTspStatusStr$3);
      return (unsigned int)(13 | 5 << 16);
    }

    return (unsigned int)(0 | 5 << 16);
  }
}

// AuthDIGEST_MD5
// file tsp_auth.c line 245
unsigned int AuthDIGEST_MD5(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list, signed int version_index)
{
  char Buffer[4096l];
  char Response[33l];
  char cResponse[33l];
  char *ChallengeString;
  char string[26l] = { 'A', 'U', 'T', 'H', 'E', 'N', 'T', 'I', 'C', 'A', 'T', 'E', ' ', 'D', 'I', 'G', 'E', 'S', 'T', '-', 'M', 'D', '5', '\r', '\n', 0 };
  char BufferIn[4096l];
  signed long int cnonce;
  cnonce=time((signed long int *)(void *)0);
  struct anonymous$36 c;
  signed int tsp_status;
  memset((void *)BufferIn, 0, sizeof(char [4096l]) /*4096ul*/ );
  signed int return_value;
  return_value=nt->netsendrecv(socket, string, (signed int)sizeof(char [26l]) /*26ul*/ , BufferIn, (signed int)sizeof(char [4096l]) /*4096ul*/ );
  _Bool tmp_if_expr$29;
  unsigned long int return_value_strlen$25;
  _Bool tmp_if_expr$28;
  signed int tmp_statement_expression$26;
  unsigned long int return_value_strlen$20;
  char *return_value_md5$21;
  unsigned long int return_value_strlen$22;
  char *return_value_md5$23;
  _Bool tmp_if_expr$39;
  unsigned long int tmp_post$38;
  if(return_value == -1)
  {
    Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed to write/read on network socket.");
    return (unsigned int)(10 | 5 << 16);
  }

  else
  {
    tsp_status=tspGetStatusCode(BufferIn);
    signed int return_value_tspIsRedirectStatus$2;
    return_value_tspIsRedirectStatus$2=tspIsRedirectStatus(tsp_status);
    if(!(return_value_tspIsRedirectStatus$2 == 0))
    {
      enum anonymous$27 return_value_tspHandleRedirect$1;
      return_value_tspHandleRedirect$1=tspHandleRedirect(BufferIn, conf, broker_list);
      if((signed int)return_value_tspHandleRedirect$1 == TSP_REDIRECT_OK)
        return (unsigned int)(57345 | 5 << 16);

      else
        return (unsigned int)(14 | 5 << 16);
    }

    if(tsp_status == 300)
    {
      Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "The server failed to authenticate user %s.", conf->userid);
      return (unsigned int)(16 | 5 << 16);
    }

    else
    {
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(BufferIn);
      void *return_value_malloc$4;
      return_value_malloc$4=malloc((unsigned long int)((unsigned int)return_value_strlen$3 + (unsigned int)1));
      ChallengeString = (char *)return_value_malloc$4;
      if(ChallengeString == ((char *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
        return (unsigned int)(2 | 5 << 16);
      }

      else
      {
        base64decode(ChallengeString, BufferIn);
        ExtractChallenge(&c, ChallengeString);
        free((void *)ChallengeString);
        char *A1_1Fmt = "%s:%s:%s";
        char *A1Fmt = ":%s:%lu";
        char *ChallRespFmt = "%s:%s:00000001:%lu:%s:%s";
        char *ResponseFmt = "charset=%s,username=\"%s\",realm=\"%s\",nonce=\"%s\",nc=00000001,cnonce=\"%lu\",digest-uri=\"tsp/%s\",response=%s,qop=auth";
        char *A2Fmt = "%s:tsp/%s";
        char A1[33l];
        char A1_1[33l];
        char A2[33l];
        char cA2[33l];
        char *String;
        unsigned long int len;
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(A2Fmt);
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(conf->server);
        len = (unsigned long int)((unsigned int)return_value_strlen$5 + (unsigned int)12 + (unsigned int)return_value_strlen$6 + (unsigned int)1);
        void *return_value_malloc$7;
        return_value_malloc$7=malloc(len);
        String = (char *)return_value_malloc$7;
        if(String == ((char *)NULL))
        {
          Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
          return (unsigned int)(2 | 5 << 16);
        }

        else
        {
          snprintf(String, len, A2Fmt, (const void *)"AUTHENTICATE", conf->server);
          unsigned long int return_value_strlen$8;
          return_value_strlen$8=strlen(String);
          char *return_value_md5$9;
          return_value_md5$9=md5(String, (unsigned long int)(unsigned int)return_value_strlen$8);
          __builtin_strncpy(A2, return_value_md5$9, (unsigned long int)33);
          snprintf(String, len, A2Fmt, (const void *)"", conf->server);
          unsigned long int return_value_strlen$10;
          return_value_strlen$10=strlen(String);
          char *return_value_md5$11;
          return_value_md5$11=md5(String, (unsigned long int)(unsigned int)return_value_strlen$10);
          __builtin_strncpy(cA2, return_value_md5$11, (unsigned long int)33);
          free((void *)String);
          unsigned long int return_value_strlen$12;
          return_value_strlen$12=strlen(A1_1Fmt);
          unsigned long int return_value_strlen$13;
          return_value_strlen$13=strlen(conf->userid);
          unsigned long int return_value_strlen$14;
          return_value_strlen$14=strlen(c.realm);
          unsigned long int return_value_strlen$15;
          return_value_strlen$15=strlen(conf->passwd);
          len = (unsigned long int)((unsigned int)return_value_strlen$12 + (unsigned int)return_value_strlen$13 + (unsigned int)return_value_strlen$14 + (unsigned int)return_value_strlen$15 + (unsigned int)1);
          void *return_value_malloc$16;
          return_value_malloc$16=malloc(len);
          String = (char *)return_value_malloc$16;
          if(String == ((char *)NULL))
          {
            Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
            return (unsigned int)(2 | 5 << 16);
          }

          else
          {
            snprintf(String, len, A1_1Fmt, conf->userid, c.realm, conf->passwd);
            unsigned long int return_value_strlen$17;
            return_value_strlen$17=strlen(String);
            md5digest(String, (unsigned long int)(unsigned int)return_value_strlen$17, A1_1);
            free((void *)String);
            unsigned long int return_value_strlen$18;
            return_value_strlen$18=strlen(c.nonce);
            len = (unsigned long int)((unsigned int)(16 + 1) + (unsigned int)return_value_strlen$18 + (unsigned int)16 + (unsigned int)1);
            void *return_value_malloc$19;
            return_value_malloc$19=malloc(len);
            String = (char *)return_value_malloc$19;
            if(String == ((char *)NULL))
            {
              Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
              return (unsigned int)(2 | 5 << 16);
            }

            else
            {
              memcpy((void *)String, (const void *)A1_1, (unsigned long int)16);
              snprintf(String + (signed long int)16, len - (unsigned long int)16, A1Fmt, c.nonce, cnonce);
              A1_1[(signed long int)16] = (char)0;
              unsigned long int return_value_strlen$24;
              return_value_strlen$24=strlen(A1_1);
              if(!((unsigned int)return_value_strlen$24 >= 16u))
              {
                return_value_strlen$25=strlen(TSPProtoVerStr[(signed long int)version_index]);
                if((unsigned int)return_value_strlen$25 >= 6u)
                  tmp_if_expr$28 = (_Bool)1;

                else
                {
                  unsigned long int __s1_len;
                  unsigned long int __s2_len;
                  signed int return_value___builtin_strcmp$27;
                  return_value___builtin_strcmp$27=__builtin_strcmp(TSPProtoVerStr[(signed long int)version_index], "2.0.0");
                  tmp_statement_expression$26 = return_value___builtin_strcmp$27;
                  tmp_if_expr$28 = tmp_statement_expression$26 > 0 ? (_Bool)1 : (_Bool)0;
                }
                tmp_if_expr$29 = !tmp_if_expr$28 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$29 = (_Bool)0;
              if(tmp_if_expr$29)
              {
                return_value_strlen$20=strlen(String);
                return_value_md5$21=md5(String, (unsigned long int)(unsigned int)return_value_strlen$20);
                __builtin_strncpy(A1, return_value_md5$21, (unsigned long int)33);
              }

              else
              {
                return_value_strlen$22=strlen(String + (signed long int)16);
                return_value_md5$23=md5(String, (unsigned long int)((unsigned int)16 + (unsigned int)return_value_strlen$22));
                __builtin_strncpy(A1, return_value_md5$23, (unsigned long int)33);
              }
              free((void *)String);
              unsigned long int return_value_strlen$30;
              return_value_strlen$30=strlen(ChallRespFmt);
              unsigned long int return_value_strlen$31;
              return_value_strlen$31=strlen(c.nonce);
              unsigned long int return_value_strlen$32;
              return_value_strlen$32=strlen(c.qop);
              len = (unsigned long int)((unsigned int)return_value_strlen$30 + (unsigned int)32 + (unsigned int)return_value_strlen$31 + (unsigned int)16 + (unsigned int)return_value_strlen$32 + (unsigned int)32 + (unsigned int)1);
              void *return_value_malloc$33;
              return_value_malloc$33=malloc(len);
              String = (char *)return_value_malloc$33;
              if(String == ((char *)NULL))
              {
                Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
                return (unsigned int)(2 | 5 << 16);
              }

              else
              {
                snprintf(String, len, ChallRespFmt, (const void *)A1, c.nonce, cnonce, c.qop, (const void *)A2);
                unsigned long int return_value_strlen$34;
                return_value_strlen$34=strlen(String);
                char *return_value_md5$35;
                return_value_md5$35=md5(String, (unsigned long int)(unsigned int)return_value_strlen$34);
                __builtin_strncpy(Response, return_value_md5$35, (unsigned long int)33);
                snprintf(String, len, ChallRespFmt, (const void *)A1, c.nonce, cnonce, c.qop, (const void *)cA2);
                unsigned long int return_value_strlen$36;
                return_value_strlen$36=strlen(String);
                char *return_value_md5$37;
                return_value_md5$37=md5(String, (unsigned long int)(unsigned int)return_value_strlen$36);
                __builtin_strncpy(cResponse, return_value_md5$37, (unsigned long int)33);
                free((void *)String);
                char userid[512l];
                char *cc;
                unsigned long int i;
                cc = conf->userid;
                i = (unsigned long int)0;
                if(!(*cc == 0) && !(i >= 512ul))
                {
                  if((signed int)*cc == 34)
                    tmp_if_expr$39 = (_Bool)1;

                  else
                    tmp_if_expr$39 = (signed int)*cc == 92 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr$39)
                  {
                    tmp_post$38 = i;
                    i = i + 1ul;
                    userid[(signed long int)tmp_post$38] = (char)92;
                  }

                  userid[(signed long int)i] = *cc;
                  cc = cc + 1l;
                  i = i + 1ul;
                }

                userid[(signed long int)i] = (char)0;
                unsigned long int return_value_strlen$40;
                return_value_strlen$40=strlen(ResponseFmt);
                unsigned long int return_value_strlen$41;
                return_value_strlen$41=strlen(c.charset);
                unsigned long int return_value_strlen$42;
                return_value_strlen$42=strlen(userid);
                unsigned long int return_value_strlen$43;
                return_value_strlen$43=strlen(c.realm);
                unsigned long int return_value_strlen$44;
                return_value_strlen$44=strlen(c.nonce);
                unsigned long int return_value_strlen$45;
                return_value_strlen$45=strlen(conf->server);
                len = (unsigned long int)((unsigned int)return_value_strlen$40 + (unsigned int)return_value_strlen$41 + (unsigned int)return_value_strlen$42 + (unsigned int)return_value_strlen$43 + (unsigned int)return_value_strlen$44 + (unsigned int)16 + (unsigned int)return_value_strlen$45 + (unsigned int)32);
                void *return_value_malloc$46;
                return_value_malloc$46=malloc(len);
                String = (char *)return_value_malloc$46;
                if(String == ((char *)NULL))
                {
                  Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
                  return (unsigned int)(2 | 5 << 16);
                }

                else
                {
                  snprintf(String, len, ResponseFmt, c.charset, (const void *)userid, c.realm, c.nonce, cnonce, conf->server, (const void *)Response);
                  memset((void *)Buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
                  unsigned long int return_value_strlen$47;
                  return_value_strlen$47=strlen(String);
                  base64encode(Buffer, String, (signed int)(unsigned int)return_value_strlen$47);
                  free((void *)String);
                  memset((void *)BufferIn, 0, sizeof(char [4096l]) /*4096ul*/ );
                  signed int return_value_1;
                  return_value_1=nt->netprintf(socket, BufferIn, (signed int)sizeof(char [4096l]) /*4096ul*/ , "%s\r\n", (const void *)Buffer);
                  if(return_value_1 == -1)
                  {
                    Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed to write on network socket.");
                    return (unsigned int)(10 | 5 << 16);
                  }

                  else
                  {
                    tsp_status=tspGetStatusCode(BufferIn);
                    signed int return_value_tspIsRedirectStatus$49;
                    return_value_tspIsRedirectStatus$49=tspIsRedirectStatus(tsp_status);
                    if(!(return_value_tspIsRedirectStatus$49 == 0))
                    {
                      enum anonymous$27 return_value_tspHandleRedirect$48;
                      return_value_tspHandleRedirect$48=tspHandleRedirect(BufferIn, conf, broker_list);
                      if((signed int)return_value_tspHandleRedirect$48 == TSP_REDIRECT_OK)
                        return (unsigned int)(57345 | 5 << 16);

                      else
                        return (unsigned int)(14 | 5 << 16);
                    }

                    if(tsp_status == 300)
                    {
                      Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "The server failed to authenticate user %s.", conf->userid);
                      return (unsigned int)(16 | 5 << 16);
                    }

                    else
                    {
                      unsigned long int return_value_strlen$50;
                      return_value_strlen$50=strlen(BufferIn);
                      void *return_value_malloc$51;
                      return_value_malloc$51=malloc((unsigned long int)((unsigned int)return_value_strlen$50 + (unsigned int)1));
                      ChallengeString = (char *)return_value_malloc$51;
                      if(ChallengeString == ((char *)NULL))
                      {
                        Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed memory allocation.");
                        return (unsigned int)(2 | 5 << 16);
                      }

                      else
                      {
                        base64decode(ChallengeString, BufferIn);
                        ExtractChallenge(&c, ChallengeString);
                        free((void *)ChallengeString);
                        signed int return_value_memcmp$52;
                        return_value_memcmp$52=memcmp((const void *)c.rspauth, (const void *)cResponse, (unsigned long int)32);
                        if(!(return_value_memcmp$52 == 0))
                        {
                          Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Invalid MD5 response from server.");
                          return (unsigned int)(16 | 5 << 16);
                        }

                        else
                        {
                          signed int return_value_2;
                          return_value_2=nt->netrecv(socket, Buffer, (signed int)sizeof(char [4096l]) /*4096ul*/ );
                          if(return_value_2 == -1)
                          {
                            Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Failed to read from network socket.");
                            return (unsigned int)(10 | 5 << 16);
                          }

                          else
                          {
                            tsp_status=tspGetStatusCode(Buffer);
                            signed int return_value_tspIsRedirectStatus$54;
                            return_value_tspIsRedirectStatus$54=tspIsRedirectStatus(tsp_status);
                            if(!(return_value_tspIsRedirectStatus$54 == 0))
                            {
                              enum anonymous$27 return_value_tspHandleRedirect$53;
                              return_value_tspHandleRedirect$53=tspHandleRedirect(Buffer, conf, broker_list);
                              if((signed int)return_value_tspHandleRedirect$53 == TSP_REDIRECT_OK)
                                return (unsigned int)(57345 | 5 << 16);

                              else
                                return (unsigned int)(14 | 5 << 16);
                            }

                            if(tsp_status == 200)
                            {
                              Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "The server failed to authenticate user %s.", conf->userid);
                              return (unsigned int)(16 | 5 << 16);
                            }

                            const char *return_value_tspGetTspStatusStr$55;
                            return_value_tspGetTspStatusStr$55=tspGetTspStatusStr(tsp_status);
                            Display(1, (enum tSeverityLevel)ELError, "AuthDIGEST_MD5", "Unknown TSP error during authentication. (%s)", return_value_tspGetTspStatusStr$55);
                            return (unsigned int)(13 | 5 << 16);
                            return (unsigned int)(0 | 5 << 16);
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

// AuthPASSDSS_3DES_1
// file tsp_auth_passdss.c line 323
unsigned int AuthPASSDSS_3DES_1(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list)
{
  struct dh_st *dh = (struct dh_st *)(void *)0;
  struct dsa_st *dsa = (struct dsa_st *)(void *)0;
  struct DSA_SIG_st *sig = (struct DSA_SIG_st *)(void *)0;
  char authenticate[30l] = { 'A', 'U', 'T', 'H', 'E', 'N', 'T', 'I', 'C', 'A', 'T', 'E', ' ', 'P', 'A', 'S', 'S', 'D', 'S', 'S', '-', '3', 'D', 'E', 'S', '-', '1', '\r', '\n', 0 };
  char *BufferIn = (char *)(void *)0;
  char *BufferOut = (char *)(void *)0;
  char *BufferPtr = (char *)(void *)0;
  struct anonymous BufH;
  struct anonymous BufSpace;
  struct anonymous *Buf_H = &BufH;
  struct anonymous *Buf_Space = &BufSpace;
  struct bio_st *bio_rw = (struct bio_st *)(void *)0;
  struct bio_st *b64 = (struct bio_st *)(void *)0;
  struct bio_st *cipher = (struct bio_st *)(void *)0;
  struct bignum_st *server_pubkey = (struct bignum_st *)(void *)0;
  struct bignum_st *dh_K = (struct bignum_st *)(void *)0;
  unsigned char hash[20l];
  unsigned char enc_key[24l];
  unsigned char enc_iv[8l];
  unsigned char int_key[20l];
  unsigned char tmphash[40l];
  unsigned char hmac[64l];
  signed int pklength = 0;
  signed int ssecmask = 0;
  signed int sbuflen = 0;
  char *s = (char *)(void *)0;
  unsigned char num[3l];
  signed int buflen;
  signed int readlen;
  signed int keysize;
  signed int siglength;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  signed int tsp_status;
  dh=DH_new();
  _Bool tmp_if_expr$1;
  if(dh == ((struct dh_st *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
  {
    server_pubkey=BN_new();
    tmp_if_expr$1 = server_pubkey == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  void *return_value_calloc$8;
  void *return_value_calloc$9;
  _Bool tmp_if_expr$10;
  struct bio_method_st *return_value_BIO_s_mem$11;
  struct bio_method_st *return_value_BIO_f_base64$12;
  signed int return_value_DH_generate_key$13;
  signed int return_value;
  void *return_value_buffer_ptr$14;
  unsigned long int return_value_buffer_len$15;
  void *return_value_buffer_ptr$16;
  unsigned long int return_value_buffer_len$17;
  signed long int return_value_BIO_ctrl$18;
  unsigned int return_value_buffer_get_int$19;
  void *return_value_buffer_ptr$20;
  void *return_value_buffer_get_string$21;
  void *return_value_buffer_ptr$22;
  unsigned int return_value_buffer_get_int$23;
  void *return_value_buffer_get_string$24;
  _Bool tmp_if_expr$25;
  signed int return_value_DH_size$27;
  void *return_value_calloc$28;
  char *return_value_BN_bn2hex$29;
  void *return_value_buffer_ptr$30;
  unsigned long int return_value_buffer_len$31;
  void *return_value_buffer_ptr$32;
  unsigned long int return_value_buffer_len$33;
  char *return_value_BN_bn2hex$35;
  char *return_value_BN_bn2hex$36;
  signed int return_value_DSA_do_verify$37;
  void *return_value_buffer_ptr$38;
  unsigned long int return_value_buffer_len$39;
  void *return_value_buffer_ptr$40;
  unsigned long int return_value_buffer_len$41;
  void *return_value_buffer_ptr$42;
  unsigned long int return_value_buffer_len$43;
  void *return_value_buffer_ptr$44;
  unsigned long int return_value_buffer_len$45;
  void *return_value_buffer_ptr$49;
  const struct env_md_st *return_value_EVP_sha1$50;
  void *return_value_buffer_ptr$51;
  unsigned long int return_value_buffer_len$52;
  struct bio_method_st *return_value_BIO_f_cipher$53;
  const struct evp_cipher_st *return_value_EVP_des_ede3_cbc$54;
  void *return_value_buffer_ptr$55;
  unsigned long int return_value_buffer_len$56;
  signed long int return_value_BIO_ctrl$57;
  signed int return_value_tspIsRedirectStatus$59;
  if(tmp_if_expr$1)
  {
    Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
    status = (unsigned int)(2 | 5 << 16);
  }

  else
  {
    static char *dh_group2 = "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD129024E088A67CC74020BBEA63B139B22514A08798E3404DDEF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7EDEE386BFB5A899FA5AE9F24117C4B1FE649286651ECE65381FFFFFFFFFFFFFFFF";
    BN_hex2bn(&dh->p, dh_group2);
    static unsigned char dh_g[1l] = { (unsigned char)0x02 };
    dh->g=BN_bin2bn(dh_g, (signed int)sizeof(unsigned char [1l]) /*1ul*/ , (struct bignum_st *)(void *)0);
    if(dh->p == ((struct bignum_st *)NULL))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = dh->g == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
    {
      Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "DH initialization error.");
      status = (unsigned int)(16 | 5 << 16);
    }

    else
    {
      dh_K=BN_new();
      if(dh_K == ((struct bignum_st *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
        status = (unsigned int)(2 | 5 << 16);
      }

      else
      {
        dsa=DSA_new();
        if(dsa == ((struct dsa_st *)NULL))
          tmp_if_expr$3 = (_Bool)1;

        else
        {
          dsa->p=BN_new();
          tmp_if_expr$3 = dsa->p == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (_Bool)1;

        else
        {
          dsa->q=BN_new();
          tmp_if_expr$4 = dsa->q == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$4)
          tmp_if_expr$5 = (_Bool)1;

        else
        {
          dsa->g=BN_new();
          tmp_if_expr$5 = dsa->g == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$5)
          tmp_if_expr$6 = (_Bool)1;

        else
        {
          dsa->pub_key=BN_new();
          tmp_if_expr$6 = dsa->pub_key == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$6)
          tmp_if_expr$7 = (_Bool)1;

        else
        {
          dsa->priv_key=BN_new();
          tmp_if_expr$7 = dsa->priv_key == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$7)
        {
          Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
          status = (unsigned int)(2 | 5 << 16);
        }

        else
        {
          sig=DSA_SIG_new();
          if(sig == ((struct DSA_SIG_st *)NULL))
          {
            Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
            status = (unsigned int)(2 | 5 << 16);
          }

          else
          {
            return_value_calloc$8=calloc((unsigned long int)1, (unsigned long int)4096);
            BufferIn = (char *)return_value_calloc$8;
            return_value_calloc$9=calloc((unsigned long int)1, (unsigned long int)4096);
            BufferOut = (char *)return_value_calloc$9;
            if(BufferIn == ((char *)NULL) || BufferOut == ((char *)NULL))
            {
              Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
              status = (unsigned int)(2 | 5 << 16);
            }

            else
            {
              buffer_init(Buf_Space);
              buffer_init(Buf_H);
              if(Buf_Space->buf == ((unsigned char *)NULL))
                tmp_if_expr$10 = (_Bool)1;

              else
                tmp_if_expr$10 = Buf_H->buf == (unsigned char *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$10)
              {
                Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
                status = (unsigned int)(2 | 5 << 16);
              }

              else
              {
                return_value_BIO_s_mem$11=BIO_s_mem();
                bio_rw=BIO_new(return_value_BIO_s_mem$11);
                return_value_BIO_f_base64$12=BIO_f_base64();
                b64=BIO_new(return_value_BIO_f_base64$12);
                if(b64 == ((struct bio_st *)NULL) || bio_rw == ((struct bio_st *)NULL))
                {
                  Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
                  status = (unsigned int)(2 | 5 << 16);
                }

                else
                {
                  return_value_DH_generate_key$13=DH_generate_key(dh);
                  if(return_value_DH_generate_key$13 == 0)
                  {
                    Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "DH generation error.");
                    status = (unsigned int)(16 | 5 << 16);
                  }

                  else
                  {
                    return_value=nt->netsend(socket, authenticate, (signed int)sizeof(char [30l]) /*30ul*/ );
                    if(return_value == -1)
                    {
                      Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed to write on network socket.");
                      status = (unsigned int)(10 | 5 << 16);
                    }

                    else
                    {
                      buffer_put_int(Buf_Space, (unsigned int)0);
                      buffer_put_cstring(Buf_Space, conf->userid);
                      buffer_put_bignum(Buf_Space, dh->pub_key);
                      return_value_buffer_ptr$14=buffer_ptr(Buf_Space);
                      return_value_buffer_len$15=buffer_len(Buf_Space);
                      buffer_append(Buf_H, return_value_buffer_ptr$14, return_value_buffer_len$15);
                      BIO_push(b64, bio_rw);
                      BIO_set_flags(b64, 0x100);
                      return_value_buffer_ptr$16=buffer_ptr(Buf_Space);
                      return_value_buffer_len$17=buffer_len(Buf_Space);
                      BIO_write(b64, return_value_buffer_ptr$16, (signed int)return_value_buffer_len$17);
                      BIO_ctrl(b64, 11, (signed long int)0, (void *)0);
                      return_value_BIO_ctrl$18=BIO_ctrl(bio_rw, 3, (signed long int)0, (void *)(char *)&BufferPtr);
                      buflen = (signed int)return_value_BIO_ctrl$18;
                      readlen=nt->netsendrecv(socket, BufferPtr, buflen, BufferIn, 4096);
                      if(readlen == -1)
                      {
                        Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed to write/read on network socket.");
                        status = (unsigned int)(10 | 5 << 16);
                      }

                      else
                      {
                        BIO_pop(bio_rw);
                        buffer_clear(Buf_Space);
                        buflen = 0;
                        buflen=base64decode(BufferOut, BufferIn);
                        buffer_append(Buf_Space, (const void *)BufferOut, (unsigned long int)buflen);
                        return_value_buffer_get_int$19=buffer_get_int(Buf_Space);
                        pklength = (signed int)return_value_buffer_get_int$19;
                        if(!(pklength >= 240))
                        {
                          Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Received data is invalid.");
                          status = (unsigned int)(16 | 5 << 16);
                        }

                        else
                        {
                          buffer_put_int(Buf_H, (unsigned int)pklength);
                          return_value_buffer_ptr$20=buffer_ptr(Buf_Space);
                          buffer_append(Buf_H, return_value_buffer_ptr$20, (unsigned long int)pklength);
                          return_value_buffer_get_string$21=buffer_get_string(Buf_Space, (unsigned int *)&buflen);
                          s = (char *)return_value_buffer_get_string$21;
                          free((void *)s);
                          s = (char *)(void *)0;
                          buffer_get_bignum(Buf_Space, dsa->p);
                          buffer_get_bignum(Buf_Space, dsa->q);
                          buffer_get_bignum(Buf_Space, dsa->g);
                          buffer_get_bignum(Buf_Space, dsa->pub_key);
                          buffer_get_bignum(Buf_Space, server_pubkey);
                          buffer_put_bignum(Buf_H, server_pubkey);
                          return_value_buffer_ptr$22=buffer_ptr(Buf_Space);
                          buffer_append(Buf_H, return_value_buffer_ptr$22, (unsigned long int)4);
                          ssecmask=buffer_get_octet(Buf_Space);
                          buffer_get(Buf_Space, (void *)(char *)num, (unsigned int)3);
                          sbuflen = (signed int)((unsigned long int)(unsigned char)num[(signed long int)0] << 16 | (unsigned long int)(unsigned char)num[(signed long int)1] << 8 | (unsigned long int)(unsigned char)num[(signed long int)2]);
                          return_value_buffer_get_int$23=buffer_get_int(Buf_Space);
                          siglength = (signed int)return_value_buffer_get_int$23;
                          if(!(siglength >= 59))
                          {
                            Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Received data is invalid.");
                            status = (unsigned int)(16 | 5 << 16);
                          }

                          else
                          {
                            return_value_buffer_get_string$24=buffer_get_string(Buf_Space, (unsigned int *)&buflen);
                            s = (char *)return_value_buffer_get_string$24;
                            free((void *)s);
                            s = (char *)(void *)0;
                            sig->r=BN_new();
                            if(sig->r == ((struct bignum_st *)NULL))
                              tmp_if_expr$25 = (_Bool)1;

                            else
                            {
                              sig->s=BN_new();
                              tmp_if_expr$25 = sig->s == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr$25)
                            {
                              Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
                              status = (unsigned int)(2 | 5 << 16);
                            }

                            else
                            {
                              buffer_get_bignum(Buf_Space, sig->r);
                              buffer_get_bignum(Buf_Space, sig->s);
                              signed int return_value_add_dsakey_to_keyfile$26;
                              return_value_add_dsakey_to_keyfile$26=add_dsakey_to_keyfile(dsa, conf->server, "/var/lib/gogoc/gogockeys.pub", conf->no_questions);
                              if(return_value_add_dsakey_to_keyfile$26 == 0)
                              {
                                Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Key verification error.");
                                status = (unsigned int)(16 | 5 << 16);
                              }

                              else
                              {
                                return_value_DH_size$27=DH_size(dh);
                                return_value_calloc$28=calloc((unsigned long int)1, (unsigned long int)return_value_DH_size$27);
                                s = (char *)return_value_calloc$28;
                                if(s == ((char *)NULL))
                                {
                                  Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed memory allocation.");
                                  status = (unsigned int)(2 | 5 << 16);
                                }

                                else
                                {
                                  keysize=DH_compute_key((unsigned char *)s, server_pubkey, dh);
                                  if(!(keysize >= 0))
                                  {
                                    Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "DH shared key computation error.");
                                    status = (unsigned int)(16 | 5 << 16);
                                  }

                                  else
                                  {
                                    BN_bin2bn((const unsigned char *)s, keysize, dh_K);
                                    memset((void *)s, 0, (unsigned long int)keysize);
                                    free((void *)s);
                                    s = (char *)(void *)0;
                                    return_value_BN_bn2hex$29=BN_bn2hex(dh_K);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "DH shared key: %s.", return_value_BN_bn2hex$29);
                                    buffer_clear(Buf_Space);
                                    return_value_buffer_ptr$30=buffer_ptr(Buf_H);
                                    return_value_buffer_len$31=buffer_len(Buf_H);
                                    buffer_append(Buf_Space, return_value_buffer_ptr$30, return_value_buffer_len$31);
                                    buffer_put_bignum(Buf_Space, dh_K);
                                    return_value_buffer_ptr$32=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$33=buffer_len(Buf_Space);
                                    SHA1((const unsigned char *)return_value_buffer_ptr$32, return_value_buffer_len$33, hash);
                                    struct bignum_st *h;
                                    h=BN_bin2bn(hash, 20, (struct bignum_st *)(void *)0);
                                    char *return_value_BN_bn2hex$34;
                                    return_value_BN_bn2hex$34=BN_bn2hex(h);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "Signed hash: %s.", return_value_BN_bn2hex$34);
                                    BN_free(h);
                                    return_value_BN_bn2hex$35=BN_bn2hex(sig->r);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "DSA sign r:%s.", return_value_BN_bn2hex$35);
                                    return_value_BN_bn2hex$36=BN_bn2hex(sig->s);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "DSA sign s:%s.", return_value_BN_bn2hex$36);
                                    return_value_DSA_do_verify$37=DSA_do_verify(hash, (signed int)sizeof(unsigned char [20l]) /*20ul*/ , sig, dsa);
                                    if(return_value_DSA_do_verify$37 == 0)
                                    {
                                      Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Incorrect signature from server.");
                                      status = (unsigned int)(16 | 5 << 16);
                                    }

                                    Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Signature verification error.");
                                    status = (unsigned int)(16 | 5 << 16);
                                    buffer_clear(Buf_Space);
                                    buffer_put_bignum(Buf_Space, dh_K);
                                    buffer_put_octet(Buf_Space, 65);
                                    buffer_append(Buf_Space, (const void *)hash, (unsigned long int)20);
                                    return_value_buffer_ptr$38=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$39=buffer_len(Buf_Space);
                                    SHA1((const unsigned char *)return_value_buffer_ptr$38, return_value_buffer_len$39, tmphash);
                                    memcpy((void *)enc_iv, (const void *)tmphash, (unsigned long int)8);
                                    buffer_clear(Buf_Space);
                                    buffer_put_bignum(Buf_Space, dh_K);
                                    buffer_put_octet(Buf_Space, 69);
                                    buffer_append(Buf_Space, (const void *)hash, (unsigned long int)20);
                                    return_value_buffer_ptr$40=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$41=buffer_len(Buf_Space);
                                    SHA1((const unsigned char *)return_value_buffer_ptr$40, return_value_buffer_len$41, int_key);
                                    buffer_clear(Buf_Space);
                                    buffer_put_bignum(Buf_Space, dh_K);
                                    buffer_put_octet(Buf_Space, 67);
                                    buffer_append(Buf_Space, (const void *)hash, (unsigned long int)20);
                                    return_value_buffer_ptr$42=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$43=buffer_len(Buf_Space);
                                    SHA1((const unsigned char *)return_value_buffer_ptr$42, return_value_buffer_len$43, tmphash);
                                    buffer_clear(Buf_Space);
                                    buffer_put_bignum(Buf_Space, dh_K);
                                    buffer_append(Buf_Space, (const void *)tmphash, (unsigned long int)20);
                                    return_value_buffer_ptr$44=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$45=buffer_len(Buf_Space);
                                    SHA1((const unsigned char *)return_value_buffer_ptr$44, return_value_buffer_len$45, tmphash + (signed long int)20);
                                    memcpy((void *)enc_key, (const void *)tmphash, (unsigned long int)24);
                                    struct bignum_st *enc;
                                    struct bignum_st *i;
                                    struct bignum_st *iv;
                                    enc=BN_bin2bn(enc_key, 24, (struct bignum_st *)(void *)0);
                                    iv=BN_bin2bn(enc_iv, 8, (struct bignum_st *)(void *)0);
                                    i=BN_bin2bn(int_key, 20, (struct bignum_st *)(void *)0);
                                    char *return_value_BN_bn2hex$46;
                                    return_value_BN_bn2hex$46=BN_bn2hex(enc);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "PASSDSS: encryption key: %s.", return_value_BN_bn2hex$46);
                                    char *return_value_BN_bn2hex$47;
                                    return_value_BN_bn2hex$47=BN_bn2hex(iv);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "PASSDSS: iv: %s.", return_value_BN_bn2hex$47);
                                    char *return_value_BN_bn2hex$48;
                                    return_value_BN_bn2hex$48=BN_bn2hex(i);
                                    Display(3, (enum tSeverityLevel)ELDebug, "PASSDSS-3DES-1", "PASSDSS: integrity key: %s.", return_value_BN_bn2hex$48);
                                    BN_free(enc);
                                    BN_free(i);
                                    BN_free(iv);
                                    buffer_clear(Buf_Space);
                                    buffer_put_octet(Buf_Space, ssecmask);
                                    buffer_put_octet(Buf_Space, 0);
                                    buffer_put_octet(Buf_Space, 0);
                                    buffer_put_octet(Buf_Space, 0);
                                    buffer_put_cstring(Buf_Space, conf->passwd);
                                    return_value_buffer_ptr$49=buffer_ptr(Buf_Space);
                                    buffer_append(Buf_H, return_value_buffer_ptr$49, (unsigned long int)4);
                                    return_value_EVP_sha1$50=EVP_sha1();
                                    return_value_buffer_ptr$51=buffer_ptr(Buf_H);
                                    return_value_buffer_len$52=buffer_len(Buf_H);
                                    HMAC(return_value_EVP_sha1$50, (const void *)int_key, (signed int)sizeof(unsigned char [20l]) /*20ul*/ , (const unsigned char *)return_value_buffer_ptr$51, return_value_buffer_len$52, hmac, (unsigned int *)&keysize);
                                    buffer_append(Buf_Space, (const void *)hmac, (unsigned long int)keysize);
                                    BIO_ctrl(bio_rw, 1, (signed long int)0, (void *)0);
                                    memset((void *)BufferOut, 0, (unsigned long int)4096);
                                    memset((void *)BufferIn, 0, (unsigned long int)4096);
                                    buflen = 0;
                                    return_value_BIO_f_cipher$53=BIO_f_cipher();
                                    cipher=BIO_new(return_value_BIO_f_cipher$53);
                                    return_value_EVP_des_ede3_cbc$54=EVP_des_ede3_cbc();
                                    BIO_set_cipher(cipher, return_value_EVP_des_ede3_cbc$54, enc_key, enc_iv, 1);
                                    BIO_push(cipher, b64);
                                    BIO_push(b64, bio_rw);
                                    return_value_buffer_ptr$55=buffer_ptr(Buf_Space);
                                    return_value_buffer_len$56=buffer_len(Buf_Space);
                                    BIO_write(cipher, return_value_buffer_ptr$55, (signed int)return_value_buffer_len$56);
                                    BIO_ctrl(cipher, 11, (signed long int)0, (void *)0);
                                    return_value_BIO_ctrl$57=BIO_ctrl(bio_rw, 3, (signed long int)0, (void *)(char *)&BufferPtr);
                                    buflen = (signed int)return_value_BIO_ctrl$57;
                                    memset((void *)enc_key, 0, sizeof(unsigned char [24l]) /*24ul*/ );
                                    memset((void *)enc_iv, 0, sizeof(unsigned char [8l]) /*8ul*/ );
                                    readlen=nt->netsendrecv(socket, BufferPtr, buflen, BufferIn, 4096);
                                    if(readlen == -1)
                                    {
                                      Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Failed to write/read on network socket.");
                                      status = (unsigned int)(10 | 5 << 16);
                                    }

                                    else
                                    {
                                      tsp_status=tspGetStatusCode(BufferIn);
                                      return_value_tspIsRedirectStatus$59=tspIsRedirectStatus(tsp_status);
                                      if(!(return_value_tspIsRedirectStatus$59 == 0))
                                      {
                                        enum anonymous$27 return_value_tspHandleRedirect$58;
                                        return_value_tspHandleRedirect$58=tspHandleRedirect(BufferIn, conf, broker_list);
                                        if((signed int)return_value_tspHandleRedirect$58 == TSP_REDIRECT_OK)
                                          status = (unsigned int)(57345 | 5 << 16);

                                        else
                                          status = (unsigned int)(14 | 5 << 16);
                                      }

                                      if(tsp_status == 200)
                                      {
                                        Display(1, (enum tSeverityLevel)ELError, "AuthPASSDSS_3DES_1", "The server failed to authenticate user %s.", conf->userid);
                                        status = (unsigned int)(16 | 5 << 16);
                                      }

                                      const char *return_value_tspGetTspStatusStr$60;
                                      return_value_tspGetTspStatusStr$60=tspGetTspStatusStr(tsp_status);
                                      Display(1, (enum tSeverityLevel)ELError, "AuthPASSDSS_3DES_1", "Unknown TSP error during authentication. (%s)", return_value_tspGetTspStatusStr$60);
                                      status = (unsigned int)(13 | 5 << 16);
                                      status = (unsigned int)(0 | 0 << 16);
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

error:
  ;
  if(!(dsa == ((struct dsa_st *)NULL)))
    DSA_free(dsa);

  if(!(sig == ((struct DSA_SIG_st *)NULL)))
    DSA_SIG_free(sig);

  if(!(dh == ((struct dh_st *)NULL)))
    DH_free(dh);

  if(!(server_pubkey == ((struct bignum_st *)NULL)))
    BN_free(server_pubkey);

  if(!(dh_K == ((struct bignum_st *)NULL)))
    BN_free(dh_K);

  if(!(Buf_Space->buf == ((unsigned char *)NULL)))
    buffer_free(Buf_Space);

  if(!(Buf_H->buf == ((unsigned char *)NULL)))
    buffer_free(Buf_H);

  if(!(BufferIn == ((char *)NULL)))
    free((void *)BufferIn);

  if(!(BufferOut == ((char *)NULL)))
    free((void *)BufferOut);

  if(!(cipher == ((struct bio_st *)NULL)))
    BIO_vfree(cipher);

  if(!(b64 == ((struct bio_st *)NULL)))
    BIO_vfree(b64);

  if(!(bio_rw == ((struct bio_st *)NULL)))
    BIO_vfree(bio_rw);

  if(!(s == ((char *)NULL)))
    free((void *)s);

  return status;
}

// AuthPLAIN
// file tsp_auth.c line 90
unsigned int AuthPLAIN(signed int socket, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list)
{
  char BufferIn[1024l];
  char BufferOut[4096l];
  char string[21l] = { 'A', 'U', 'T', 'H', 'E', 'N', 'T', 'I', 'C', 'A', 'T', 'E', ' ', 'P', 'L', 'A', 'I', 'N', '\r', '\n', 0 };
  signed int Length;
  signed int tsp_status;
  signed int return_value;
  return_value=nt->netsend(socket, string, (signed int)sizeof(char [21l]) /*21ul*/ );
  if(return_value == -1)
  {
    Display(1, (enum tSeverityLevel)ELError, "AuthPLAIN", "Failed to write on network socket.");
    return (unsigned int)(10 | 5 << 16);
  }

  else
  {
    memset((void *)BufferIn, 0, sizeof(char [1024l]) /*1024ul*/ );
    Length=snprintf(BufferIn, sizeof(char [1024l]) /*1024ul*/ , "%c%s%c%s\r\n", 0, conf->userid, 0, conf->passwd);
    signed int return_value_1;
    return_value_1=nt->netsendrecv(socket, BufferIn, Length, BufferOut, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    if(return_value_1 == -1)
    {
      Display(1, (enum tSeverityLevel)ELError, "AuthPLAIN", "Failed to write/read on network socket.");
      return (unsigned int)(10 | 5 << 16);
    }

    else
    {
      tsp_status=tspGetStatusCode(BufferOut);
      signed int return_value_tspIsRedirectStatus$2;
      return_value_tspIsRedirectStatus$2=tspIsRedirectStatus(tsp_status);
      if(!(return_value_tspIsRedirectStatus$2 == 0))
      {
        enum anonymous$27 return_value_tspHandleRedirect$1;
        return_value_tspHandleRedirect$1=tspHandleRedirect(BufferOut, conf, broker_list);
        if((signed int)return_value_tspHandleRedirect$1 == TSP_REDIRECT_OK)
          return (unsigned int)(57345 | 5 << 16);

        else
          return (unsigned int)(14 | 5 << 16);
      }

      if(tsp_status == 200)
      {
        Display(1, (enum tSeverityLevel)ELError, "AuthPLAIN", "The server failed to authenticate user %s.", conf->userid);
        return (unsigned int)(16 | 5 << 16);
      }

      const char *return_value_tspGetTspStatusStr$3;
      return_value_tspGetTspStatusStr$3=tspGetTspStatusStr(tsp_status);
      Display(1, (enum tSeverityLevel)ELError, "AuthPLAIN", "Unknown TSP error during authentication. (%s)", return_value_tspGetTspStatusStr$3);
      return (unsigned int)(13 | 5 << 16);
      return (unsigned int)(0 | 5 << 16);
    }
  }
}

// CopyLogFileToBackup
// file log.c line 105
static signed int CopyLogFileToBackup(char *filename, char *backupname)
{
  struct _IO_FILE *from;
  struct _IO_FILE *to;
  char buffer[4096l];
  char *return_value_fgets$1;
  if(backupname == ((char *)NULL) || filename == ((char *)NULL))
    return 1;

  else
  {
    from=fopen(filename, "r");
    if(from == ((struct _IO_FILE *)NULL))
      return 1;

    else
    {
      to=fopen(backupname, "w+");
      if(to == ((struct _IO_FILE *)NULL))
      {
        fclose(from);
        return 1;
      }

      else
      {
        do
        {
          return_value_fgets$1=fgets(buffer, 4096, from);
          if(return_value_fgets$1 == ((char *)NULL))
            break;

          signed int return_value_fputs$2;
          return_value_fputs$2=fputs(buffer, to);
          if(return_value_fputs$2 == -1)
          {
            fclose(from);
            fclose(to);
            return 1;
          }

        }
        while((_Bool)1);
        signed int return_value_feof$3;
        return_value_feof$3=feof(from);
        if(return_value_feof$3 == 0)
          return 1;

        else
        {
          fclose(from);
          fclose(to);
          return 0;
        }
      }
    }
  }
}

// DNSGenerateID
// file dns.c line 44
static unsigned short int DNSGenerateID(void)
{
  struct timeval now;
  gettimeofday(&now, (struct timezone *)(void *)0);
  signed int return_value_getpid$1;
  static unsigned short int id = (unsigned short int)0;
  if(id == 0)
  {
    return_value_getpid$1=getpid();
    id = (unsigned short int)((signed long int)0xffff & (now.tv_sec ^ now.tv_usec ^ (signed long int)return_value_getpid$1));
  }

  else
    id = id + (unsigned short int)(1 + (signed int)(unsigned short int)(now.tv_usec % (signed long int)263));
  return id;
}

// DNSMessageCreate
// file dns.c line 128
static enum anonymous$10 DNSMessageCreate(char *Buffer, unsigned short int DNSid, char *Domain, char *Name, unsigned int TTL, char *AAAA, unsigned long int *Len_p)
{
  char *p;
  unsigned long int Domain_len;
  unsigned long int Name_len;
  struct in6_addr AAAA_addr;
  struct in6_addr *AAAA_addr_p = (struct in6_addr *)(void *)0;
  enum anonymous$10 ret;
  unsigned short int tmp_statement_expression$1;
  unsigned short int tmp_statement_expression$2;
  unsigned short int tmp_statement_expression$3;
  unsigned short int tmp_statement_expression$4;
  unsigned short int tmp_statement_expression$5;
  unsigned short int tmp_statement_expression$6;
  unsigned short int tmp_statement_expression$7;
  unsigned short int tmp_statement_expression$8;
  unsigned short int tmp_statement_expression$9;
  unsigned short int tmp_statement_expression$10;
  unsigned short int tmp_statement_expression$11;
  unsigned short int tmp_statement_expression$12;
  unsigned short int tmp_statement_expression$13;
  unsigned short int tmp_statement_expression$14;
  unsigned short int tmp_statement_expression$15;
  if(Buffer == ((char *)NULL) || Domain == ((char *)NULL) || Name == ((char *)NULL) || Len_p == ((unsigned long int *)NULL))
    return (enum anonymous$10)DNS_RCODE_FORMERR;

  else
  {
    Name_len=strlen(Name);
    Domain_len=strlen(Domain);
    if(1ul + Domain_len + Name_len >= 254ul || Name_len >= 64ul)
      return (enum anonymous$10)DNS_RCODE_FORMERR;

    else
      if(!(AAAA == ((char *)NULL)))
      {
        AAAA_addr_p=NetText2Addr6(AAAA, &AAAA_addr);
        if(!(AAAA_addr_p == ((struct in6_addr *)NULL)))
          goto __CPROVER_DUMP_L3;

        return (enum anonymous$10)DNS_RCODE_FORMERR;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        p = Buffer + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$2$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$2$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$2$$1$$__x = (unsigned short int)DNSid;
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$2$$1$$__v) : "0"(DNSMessageCreate$$1$$2$$1$$__x) : "cc");
        tmp_statement_expression$1 = DNSMessageCreate$$1$$2$$1$$__v;
        *DNSMessageCreate$$1$$2$$bb = tmp_statement_expression$1;
        p = p + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$3$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$3$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$3$$1$$__x = (unsigned short int)(5 << 11);
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$3$$1$$__v) : "0"(DNSMessageCreate$$1$$3$$1$$__x) : "cc");
        tmp_statement_expression$2 = DNSMessageCreate$$1$$3$$1$$__v;
        *DNSMessageCreate$$1$$3$$bb = tmp_statement_expression$2;
        p = p + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$4$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$4$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$4$$1$$__x = (unsigned short int)1;
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$4$$1$$__v) : "0"(DNSMessageCreate$$1$$4$$1$$__x) : "cc");
        tmp_statement_expression$3 = DNSMessageCreate$$1$$4$$1$$__v;
        *DNSMessageCreate$$1$$4$$bb = tmp_statement_expression$3;
        p = p + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$5$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$5$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$5$$1$$__x = (unsigned short int)0;
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$5$$1$$__v) : "0"(DNSMessageCreate$$1$$5$$1$$__x) : "cc");
        tmp_statement_expression$4 = DNSMessageCreate$$1$$5$$1$$__v;
        *DNSMessageCreate$$1$$5$$bb = tmp_statement_expression$4;
        p = p + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$6$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$6$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$6$$1$$__x = (unsigned short int)1;
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$6$$1$$__v) : "0"(DNSMessageCreate$$1$$6$$1$$__x) : "cc");
        tmp_statement_expression$5 = DNSMessageCreate$$1$$6$$1$$__v;
        *DNSMessageCreate$$1$$6$$bb = tmp_statement_expression$5;
        p = p + (signed long int)2;
        unsigned short int *DNSMessageCreate$$1$$7$$bb = (unsigned short int *)p;
        unsigned short int DNSMessageCreate$$1$$7$$1$$__v;
        unsigned short int DNSMessageCreate$$1$$7$$1$$__x = (unsigned short int)0;
        asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$7$$1$$__v) : "0"(DNSMessageCreate$$1$$7$$1$$__x) : "cc");
        tmp_statement_expression$6 = DNSMessageCreate$$1$$7$$1$$__v;
        *DNSMessageCreate$$1$$7$$bb = tmp_statement_expression$6;
        p = p + (signed long int)2;
        ret=DNSNameEncode(&p, Domain, (unsigned short int)0);
        if(!((signed int)ret == DNS_RCODE_NOERROR))
          return ret;

        else
        {
          unsigned short int *DNSMessageCreate$$1$$8$$bb = (unsigned short int *)p;
          unsigned short int DNSMessageCreate$$1$$8$$1$$__v;
          unsigned short int DNSMessageCreate$$1$$8$$1$$__x = (unsigned short int)6;
          asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$8$$1$$__v) : "0"(DNSMessageCreate$$1$$8$$1$$__x) : "cc");
          tmp_statement_expression$7 = DNSMessageCreate$$1$$8$$1$$__v;
          *DNSMessageCreate$$1$$8$$bb = tmp_statement_expression$7;
          p = p + (signed long int)2;
          unsigned short int *DNSMessageCreate$$1$$9$$bb = (unsigned short int *)p;
          unsigned short int DNSMessageCreate$$1$$9$$1$$__v;
          unsigned short int DNSMessageCreate$$1$$9$$1$$__x = (unsigned short int)1;
          asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$9$$1$$__v) : "0"(DNSMessageCreate$$1$$9$$1$$__x) : "cc");
          tmp_statement_expression$8 = DNSMessageCreate$$1$$9$$1$$__v;
          *DNSMessageCreate$$1$$9$$bb = tmp_statement_expression$8;
          p = p + (signed long int)2;
          ret=DNSNameEncode(&p, Name, (unsigned short int)12);
          if(!((signed int)ret == DNS_RCODE_NOERROR))
            return ret;

          else
          {
            if(!(AAAA_addr_p == ((struct in6_addr *)NULL)))
            {
              unsigned short int *DNSMessageCreate$$1$$10$$1$$bb = (unsigned short int *)p;
              unsigned short int DNSMessageCreate$$1$$10$$1$$1$$__v;
              unsigned short int DNSMessageCreate$$1$$10$$1$$1$$__x = (unsigned short int)28;
              asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$10$$1$$1$$__v) : "0"(DNSMessageCreate$$1$$10$$1$$1$$__x) : "cc");
              tmp_statement_expression$9 = DNSMessageCreate$$1$$10$$1$$1$$__v;
              *DNSMessageCreate$$1$$10$$1$$bb = tmp_statement_expression$9;
              p = p + (signed long int)2;
              unsigned short int *DNSMessageCreate$$1$$10$$2$$bb = (unsigned short int *)p;
              unsigned short int DNSMessageCreate$$1$$10$$2$$1$$__v;
              unsigned short int __x = (unsigned short int)1;
              asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$10$$2$$1$$__v) : "0"(__x) : "cc");
              tmp_statement_expression$10 = DNSMessageCreate$$1$$10$$2$$1$$__v;
              *DNSMessageCreate$$1$$10$$2$$bb = tmp_statement_expression$10;
              p = p + (signed long int)2;
              unsigned int *bb = (unsigned int *)p;
              *bb=__bswap_32(TTL);
              p = p + (signed long int)4;
              unsigned short int *DNSMessageCreate$$1$$10$$4$$bb = (unsigned short int *)p;
              unsigned short int __v;
              unsigned short int DNSMessageCreate$$1$$10$$4$$1$$__x = (unsigned short int)16;
              asm("rorw $8, %w0" : "=r"(__v) : "0"(DNSMessageCreate$$1$$10$$4$$1$$__x) : "cc");
              tmp_statement_expression$11 = __v;
              *DNSMessageCreate$$1$$10$$4$$bb = tmp_statement_expression$11;
              p = p + (signed long int)2;
              memcpy((void *)p, (const void *)AAAA_addr_p, (unsigned long int)16);
              p = p + (signed long int)16;
            }

            else
            {
              unsigned short int *DNSMessageCreate$$1$$11$$1$$bb = (unsigned short int *)p;
              unsigned short int DNSMessageCreate$$1$$11$$1$$1$$__v;
              unsigned short int DNSMessageCreate$$1$$11$$1$$1$$__x = (unsigned short int)255;
              asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$11$$1$$1$$__v) : "0"(DNSMessageCreate$$1$$11$$1$$1$$__x) : "cc");
              tmp_statement_expression$12 = DNSMessageCreate$$1$$11$$1$$1$$__v;
              *DNSMessageCreate$$1$$11$$1$$bb = tmp_statement_expression$12;
              p = p + (signed long int)2;
              unsigned short int *DNSMessageCreate$$1$$11$$2$$bb = (unsigned short int *)p;
              unsigned short int DNSMessageCreate$$1$$11$$2$$1$$__v;
              unsigned short int DNSMessageCreate$$1$$11$$2$$1$$__x = (unsigned short int)255;
              asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$11$$2$$1$$__v) : "0"(DNSMessageCreate$$1$$11$$2$$1$$__x) : "cc");
              tmp_statement_expression$13 = DNSMessageCreate$$1$$11$$2$$1$$__v;
              *DNSMessageCreate$$1$$11$$2$$bb = tmp_statement_expression$13;
              p = p + (signed long int)2;
              unsigned int *DNSMessageCreate$$1$$11$$3$$bb = (unsigned int *)p;
              *DNSMessageCreate$$1$$11$$3$$bb=__bswap_32((unsigned int)0);
              p = p + (signed long int)4;
              unsigned short int *DNSMessageCreate$$1$$11$$4$$bb = (unsigned short int *)p;
              unsigned short int DNSMessageCreate$$1$$11$$4$$1$$__v;
              unsigned short int DNSMessageCreate$$1$$11$$4$$1$$__x = (unsigned short int)0;
              asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$11$$4$$1$$__v) : "0"(DNSMessageCreate$$1$$11$$4$$1$$__x) : "cc");
              tmp_statement_expression$14 = DNSMessageCreate$$1$$11$$4$$1$$__v;
              *DNSMessageCreate$$1$$11$$4$$bb = tmp_statement_expression$14;
              p = p + (signed long int)2;
            }
            *Len_p = (unsigned long int)(p - Buffer);
            p = Buffer;
            unsigned short int *DNSMessageCreate$$1$$12$$bb = (unsigned short int *)p;
            unsigned short int DNSMessageCreate$$1$$12$$1$$__v;
            unsigned short int DNSMessageCreate$$1$$12$$1$$__x = (unsigned short int)((signed int)(unsigned short int)*Len_p - 2);
            asm("rorw $8, %w0" : "=r"(DNSMessageCreate$$1$$12$$1$$__v) : "0"(DNSMessageCreate$$1$$12$$1$$__x) : "cc");
            tmp_statement_expression$15 = DNSMessageCreate$$1$$12$$1$$__v;
            *DNSMessageCreate$$1$$12$$bb = tmp_statement_expression$15;
            p = p + (signed long int)2;
            return (enum anonymous$10)DNS_RCODE_NOERROR;
          }
        }
      }
  }
}

// DNSNameEncode
// file dns.c line 70
static enum anonymous$10 DNSNameEncode(char **Pos_pp, char *Name, unsigned short int Offset)
{
  char *Pos_p;
  char *Name_p;
  char *Dot_p;
  unsigned long int Len;
  _Bool tmp_if_expr$1;
  if(Pos_pp == ((char **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (char *)(void *)0 == *Pos_pp ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(Name == ((char *)NULL) || tmp_if_expr$1)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_strlen$2=strlen(Name);
    tmp_if_expr$3 = return_value_strlen$2 > (unsigned long int)253 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int tmp_if_expr$6;
  unsigned long int return_value_strlen$5;
  char *tmp_post$7;
  unsigned short int tmp_statement_expression$8;
  char *tmp_post$9;
  if(tmp_if_expr$3)
    return (enum anonymous$10)DNS_RCODE_FORMERR;

  else
  {
    Pos_p = *Pos_pp;
    Name_p = Name;
    while(!((signed int)*Name_p == 0))
    {
      char *return_value___builtin_strchr$4;
      return_value___builtin_strchr$4=__builtin_strchr(Name_p, 46);
      Dot_p = return_value___builtin_strchr$4;
      if(!(Dot_p == ((char *)NULL)))
        tmp_if_expr$6 = (unsigned long int)(Dot_p - Name_p);

      else
      {
        return_value_strlen$5=strlen(Name_p);
        tmp_if_expr$6 = return_value_strlen$5;
      }
      Len = tmp_if_expr$6;
      if(!(Len == 0ul))
      {
        tmp_post$7 = Pos_p;
        Pos_p = Pos_p + 1l;
        *tmp_post$7 = (char)(unsigned char)Len;
        memcpy((void *)Pos_p, (const void *)Name_p, Len);
        Pos_p = Pos_p + (signed long int)Len;
        Name_p = Name_p + (signed long int)Len;
      }

      if(!(Dot_p == ((char *)NULL)))
        Name_p = Name_p + 1l;

    }
    if(!(Offset == 0))
    {
      unsigned short int *bb = (unsigned short int *)Pos_p;
      unsigned short int __v;
      unsigned short int __x = (unsigned short int)(0xc000 | (signed int)Offset);
      asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
      tmp_statement_expression$8 = __v;
      *bb = tmp_statement_expression$8;
      Pos_p = Pos_p + (signed long int)2;
    }

    else
    {
      tmp_post$9 = Pos_p;
      Pos_p = Pos_p + 1l;
      *tmp_post$9 = (char)0;
    }
    *Pos_pp = Pos_p;
    return (enum anonymous$10)DNS_RCODE_NOERROR;
  }
}

// DNSUpdate
// file dns.c line 236
static enum anonymous$10 DNSUpdate(signed int Socket, char *Name, char *Domain, char *AAAA)
{
  unsigned short int DNSid;
  unsigned short int DNSidReply;
  unsigned short int Header;
  unsigned short int QR;
  unsigned short int OPCode;
  unsigned short int RCode;
  enum anonymous$10 ret;
  char Buffer[512l];
  unsigned long int Len;
  char *p;
  DNSid=DNSGenerateID();
  ret=DNSMessageCreate(Buffer, DNSid, Domain, Name, (unsigned int)3600, AAAA, &Len);
  unsigned short int tmp_statement_expression$3;
  unsigned short int tmp_statement_expression$4;
  if(!((signed int)ret == DNS_RCODE_NOERROR))
    return ret;

  else
  {
    signed int return_value_NetTCP6Write$1;
    return_value_NetTCP6Write$1=NetTCP6Write(Socket, Buffer, (signed int)Len);
    if(!(return_value_NetTCP6Write$1 == (signed int)Len))
      return (enum anonymous$10)DNS_RCODE_SERVFAIL;

    else
    {
      signed int return_value_NetTCP6Read$2;
      return_value_NetTCP6Read$2=NetTCP6Read(Socket, Buffer, (signed int)sizeof(char [512l]) /*512ul*/ );
      Len = (unsigned long int)return_value_NetTCP6Read$2;
      if(!(Len >= 14ul))
        return (enum anonymous$10)DNS_RCODE_SERVFAIL;

      else
      {
        p = Buffer + (signed long int)2;
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)*((unsigned short int *)p);
        asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression$3 = __v;
        DNSidReply = tmp_statement_expression$3;
        p = p + (signed long int)2;
        unsigned short int DNSUpdate$$1$$2$$1$$__v;
        unsigned short int DNSUpdate$$1$$2$$1$$__x = (unsigned short int)*((unsigned short int *)p);
        asm("rorw $8, %w0" : "=r"(DNSUpdate$$1$$2$$1$$__v) : "0"(DNSUpdate$$1$$2$$1$$__x) : "cc");
        tmp_statement_expression$4 = DNSUpdate$$1$$2$$1$$__v;
        Header = tmp_statement_expression$4;
        p = p + (signed long int)2;
        QR = (unsigned short int)(((signed int)Header & 0x8000) >> 15);
        OPCode = (unsigned short int)(((signed int)Header & 0x7800) >> 11);
        RCode = (unsigned short int)((signed int)Header & 0x000f);
        if(!(DNSid == DNSidReply) || !((signed int)OPCode == 5) || !((signed int)QR == 1))
          return (enum anonymous$10)DNS_RCODE_SERVFAIL;

        else
          return (enum anonymous$10)RCode;
      }
    }
  }
}

// DNSUpdateAddAAAA
// file dns.c line 329
enum anonymous$10 DNSUpdateAddAAAA(signed int Socket, char *Name, char *Domain, char *AAAA)
{
  enum anonymous$10 return_value_DNSUpdate$1;
  return_value_DNSUpdate$1=DNSUpdate(Socket, Name, Domain, AAAA);
  return return_value_DNSUpdate$1;
}

// DNSUpdateClose
// file dns.c line 320
signed int DNSUpdateClose(signed int Socket)
{
  signed int return_value_NetTCP6Close$1;
  return_value_NetTCP6Close$1=NetTCP6Close(Socket);
  return return_value_NetTCP6Close$1;
}

// DNSUpdateConnect
// file dns.c line 306
signed int DNSUpdateConnect(char *Server)
{
  signed int sock;
  signed int return_value_NetTCP6Connect$1;
  return_value_NetTCP6Connect$1=NetTCP6Connect(&sock, Server, (unsigned short int)853);
  if(return_value_NetTCP6Connect$1 == 0)
    return sock;

  else
    return -1;
}

// DNSUpdateDelRRSets
// file dns.c line 339
enum anonymous$10 DNSUpdateDelRRSets(signed int Socket, char *Name, char *Domain)
{
  enum anonymous$10 return_value_DNSUpdate$1;
  return_value_DNSUpdate$1=DNSUpdate(Socket, Name, Domain, (char *)(void *)0);
  return return_value_DNSUpdate$1;
}

// Decode
// file md5c.c line 85
static void Decode(unsigned int *output, const unsigned char *input, unsigned int len)
{
  unsigned int i;
  unsigned int j;
  i = (unsigned int)0;
  j = (unsigned int)0;
  for( ; !(j >= len); j = j + (unsigned int)4)
  {
    output[(signed long int)i] = (unsigned int)input[(signed long int)j] | (unsigned int)input[(signed long int)(j + (unsigned int)1)] << 8 | (unsigned int)input[(signed long int)(j + (unsigned int)2)] << 16 | (unsigned int)input[(signed long int)(j + (unsigned int)3)] << 24;
    i = i + 1u;
  }
}

// DirectErrorMessage
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 51
signed int DirectErrorMessage(char *message, ...)
{
  void **argp;
  signed long int t;
  struct tm *tm;
  char buffer[4096l];
  char concat_buffer[4096l];
  if(LogMutexInitialized == 0)
  {
    pthread_mutex_init(&logMutex, (const union anonymous$2 *)(void *)0);
    LogMutexInitialized = 1;
  }

  pthread_mutex_lock(&logMutex);
  argp = (void **)&message;
  vsnprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , message, argp);
  argp = ((void **)NULL);
  signed int return_value_fprintf$1;
  return_value_fprintf$1=fprintf(stderr, "%s\n", (const void *)buffer);
  _Bool tmp_if_expr$3;
  char *tmp_if_expr$4;
  if(!(return_value_fprintf$1 >= 0))
  {
    pthread_mutex_unlock(&logMutex);
    return 1;
  }

  else
  {
    t=time((signed long int *)(void *)0);
    if(t == -1l)
    {
      pthread_mutex_unlock(&logMutex);
      return 1;
    }

    else
    {
      tm=localtime(&t);
      if(tm == ((struct tm *)NULL))
      {
        pthread_mutex_unlock(&logMutex);
        return 1;
      }

      else
      {
        char return_value_SeverityToChar$2;
        return_value_SeverityToChar$2=SeverityToChar((const enum tSeverityLevel)ELInfo);
        if(LogConfiguration == ((struct stLogConfiguration *)NULL))
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = LogConfiguration->identity == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = "gogoc";

        else
          tmp_if_expr$4 = LogConfiguration->identity;
        snprintf(concat_buffer, sizeof(char [4096l]) /*4096ul*/ , "%04d/%02d/%02d %02d:%02d:%02d %c %s: %s\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, return_value_SeverityToChar$2, tmp_if_expr$4, (const void *)buffer);
        if(!(Logfp == ((struct _IO_FILE *)NULL)))
        {
          signed int return_value_fprintf$5;
          return_value_fprintf$5=fprintf(Logfp, "%s", (const void *)concat_buffer);
          if(return_value_fprintf$5 >= 0)
          {
            fflush(Logfp);
            pthread_mutex_unlock(&logMutex);
            return 0;
          }

        }

        pthread_mutex_unlock(&logMutex);
        return 1;
      }
    }
  }
}

// Display
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 52
void Display(signed int VerboseLevel, enum tSeverityLevel SeverityLvl, const char *func, char *format, ...)
{
  void **argp;
  signed int i;
  signed int j;
  char fmt[5000l];
  char clean[5000l];
  signed int tmp_post$1;
  if(!((signed int)SeverityLvl == ELDebug))
  {
    pthread_mutex_lock(&logMutex);
    argp = (void **)&format;
    vsnprintf(fmt, sizeof(char [5000l]) /*5000ul*/ , format, argp);
    argp = ((void **)NULL);
    i = 0;
    j = 0;
    for( ; !((unsigned long int)i >= sizeof(char [5000l]) /*5000ul*/ ); i = i + 1)
    {
      if((signed int)fmt[(signed long int)i] == 13)
      {
        if((signed int)fmt[(signed long int)(1 + i)] == 10)
          goto __CPROVER_DUMP_L4;

      }

      tmp_post$1 = j;
      j = j + 1;
      clean[(signed long int)tmp_post$1] = fmt[(signed long int)i];
      if((signed int)fmt[(signed long int)i] == 0)
        break;


    __CPROVER_DUMP_L4:
      ;
    }
    if(LogConfiguration == ((struct stLogConfiguration *)NULL))
      pthread_mutex_unlock(&logMutex);

    else
    {
      if(LogConfiguration->log_level_console >= VerboseLevel)
        LogToLocal(stdout, clean);

      if(LogConfiguration->log_level_stderr >= VerboseLevel)
        LogToLocal(stderr, clean);

      if(LogConfiguration->log_level_file >= VerboseLevel)
        LogToFile(LogConfiguration->buffer, SeverityLvl, func, clean);

      if(LogConfiguration->log_level_syslog >= VerboseLevel)
        LogToSyslog(VerboseLevel, SeverityLvl, func, clean);

      pthread_mutex_unlock(&logMutex);
    }
  }

}

// Encode
// file md5c.c line 67
static void Encode(unsigned char *output, unsigned int *input, unsigned int len)
{
  unsigned int i;
  unsigned int j;
  i = (unsigned int)0;
  j = (unsigned int)0;
  for( ; !(j >= len); j = j + (unsigned int)4)
  {
    output[(signed long int)j] = (unsigned char)(input[(signed long int)i] & (unsigned int)0xff);
    output[(signed long int)(j + (unsigned int)1)] = (unsigned char)(input[(signed long int)i] >> 8 & (unsigned int)0xff);
    output[(signed long int)(j + (unsigned int)2)] = (unsigned char)(input[(signed long int)i] >> 16 & (unsigned int)0xff);
    output[(signed long int)(j + (unsigned int)3)] = (unsigned char)(input[(signed long int)i] >> 24 & (unsigned int)0xff);
    i = i + 1u;
  }
}

// ExtractChallenge
// file tsp_auth.c line 195
void ExtractChallenge(struct anonymous$36 *c, char *String)
{
  char *s;
  char *e;
  char *Token;
  char *Value;
  signed int len;
  memset((void *)c, 0, sizeof(struct anonymous$36) /*48ul*/ );
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(String);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)((unsigned int)return_value_strlen$1 + (unsigned int)1));
  Token = (char *)return_value_malloc$2;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(String);
  void *return_value_malloc$4;
  return_value_malloc$4=malloc((unsigned long int)((unsigned int)return_value_strlen$3 + (unsigned int)1));
  Value = (char *)return_value_malloc$4;
  *Value = (char)0;
  *Token = *Value;
  e = String;
  s = e;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  do
  {
    if((signed int)*e == 44)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = (signed int)*e == 13 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
      tmp_if_expr$6 = (_Bool)1;

    else
      tmp_if_expr$6 = (signed int)*e == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (_Bool)1;

    else
      tmp_if_expr$7 = (signed int)*e == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$7)
    {
      if(!(s == e))
      {
        if(!(*Token == 0))
        {
          if((signed int)*Value == 0)
          {
            len = (signed int)((char *)e - (char *)s);
            if((signed int)*s == 34)
            {
              if(!(len == 0))
              {
                s = s + 1l;
                len = len - 1;
              }

            }

            if((signed int)s[(signed long int)(len + -1)] == 34)
            {
              if(!(len == 0))
                len = len - 1;

            }

            if(!(len == 0))
              memcpy((void *)Value, (const void *)s, (unsigned long int)len);

            Value[(signed long int)len] = (char)0;
          }

        }

        if(!(*Token == 0))
        {
          if(!(*Value == 0))
          {
            InsertInChallegeStruct(c, Token, Value);
            *Token = (char)0;
            *Value = *Token;
          }

        }

      }

      if((signed int)*e == 0)
        break;

      e = e + 1l;
      s = e;
    }

    if((signed int)*e == 61)
      tmp_if_expr$8 = (_Bool)1;

    else
      tmp_if_expr$8 = (signed int)*e == 44 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$8)
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = (signed int)*e == 13 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
      tmp_if_expr$10 = (_Bool)1;

    else
      tmp_if_expr$10 = (signed int)*e == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$10)
      tmp_if_expr$11 = (_Bool)1;

    else
      tmp_if_expr$11 = (signed int)*e == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$11)
    {
      if((signed int)*Token == 0)
      {
        if(!(e == s))
        {
          len = (signed int)((char *)e - (char *)s);
          memcpy((void *)Token, (const void *)s, (unsigned long int)len);
          Token[(signed long int)len] = (char)0;
          if((signed int)*e == 0)
            break;

          e = e + 1l;
          s = e;
        }

      }

    }

    e = e + 1l;
  }
  while((_Bool)1);
  free((void *)Token);
  free((void *)Value);
}

// FormatBrokerListAddr
// file tsp_client.c line 875
signed int FormatBrokerListAddr(struct stBrokerList *listElement, char **ppAddr)
{
  if(ppAddr == ((char **)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "FormatBrokerListAddr", "Invalid pointer.");
    return 1;
  }

  else
  {
    if(!(*ppAddr == ((char *)NULL)))
    {
      free((void *)*ppAddr);
      *ppAddr = (char *)(void *)0;
    }

    if((signed int)listElement->address_type == TSP_REDIRECT_BROKER_TYPE_IPV6)
    {
      unsigned long int len;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(listElement->address);
      len = (unsigned long int)((unsigned int)return_value_strlen$1 + (unsigned int)3);
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(len);
      *ppAddr = (char *)return_value_malloc$2;
      if(*ppAddr == ((char *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "FormatBrokerListAddr", "Failed memory allocation.");
        return 1;
      }

      snprintf(*ppAddr, len, "[%s]", (const void *)listElement->address);
    }

    else
    {
      char *return_value___strdup$3;
      return_value___strdup$3=__strdup(listElement->address);
      *ppAddr = return_value___strdup$3;
    }
    return 0;
  }
}

// FreeBrokerList
// file tsp_client.c line 807
void FreeBrokerList(struct __BROKER_LIST **ppBrokerList)
{
  struct __BROKER_LIST *pList = *ppBrokerList;
  while(!(*ppBrokerList == ((struct __BROKER_LIST *)NULL)))
  {
    pList = *ppBrokerList;
    free((void *)pList->szAddress);
    *ppBrokerList = pList->next;
    free((void *)pList);
  }
}

// FreeHACCESSStatusInfo
// file tsp_client.c line 821
void FreeHACCESSStatusInfo(struct __HACCESS_STATUS_INFO **ppHACCESSStatusInfo)
{
  struct __MAPPING_STATUS *pList = (*ppHACCESSStatusInfo)->haccess_devmap_statuses;
  while(!((*ppHACCESSStatusInfo)->haccess_devmap_statuses == ((struct __MAPPING_STATUS *)NULL)))
  {
    pList = (*ppHACCESSStatusInfo)->haccess_devmap_statuses;
    free((void *)pList->device_name);
    (*ppHACCESSStatusInfo)->haccess_devmap_statuses = pList->next;
    free((void *)pList);
  }
  free((void *)*ppHACCESSStatusInfo);
  *ppHACCESSStatusInfo = (struct __HACCESS_STATUS_INFO *)(void *)0;
}

// FreeLogConfiguration
// file log.c line 695
static void FreeLogConfiguration(struct stLogConfiguration *configuration)
{
  if(!(configuration == ((struct stLogConfiguration *)NULL)))
  {
    if(!(configuration->identity == ((char *)NULL)))
      free((void *)configuration->identity);

    if(!(configuration->log_filename == ((char *)NULL)))
      free((void *)configuration->log_filename);

    free((void *)configuration);
  }

}

// FreeStatusInfo
// file tsp_client.c line 787
void FreeStatusInfo(struct __STATUS_INFO **ppStatusInfo)
{
  if(!(*ppStatusInfo == ((struct __STATUS_INFO *)NULL)))
    *ppStatusInfo = (struct __STATUS_INFO *)(void *)0;

}

// FreeTunnelInfo
// file tsp_client.c line 797
void FreeTunnelInfo(struct __TUNNEL_INFO **ppTunnelInfo)
{
  if(!(*ppTunnelInfo == ((struct __TUNNEL_INFO *)NULL)))
    *ppTunnelInfo = (struct __TUNNEL_INFO *)(void *)0;

}

// GetLogFileBackupName
// file log.c line 47
static signed int GetLogFileBackupName(char *filename, char *backupname)
{
  signed long int t;
  struct tm *tm;
  char smallname[255l];
  char extension[255l];
  char *lastdot;
  if(backupname == ((char *)NULL) || filename == ((char *)NULL))
    return 1;

  else
  {
    t=time((signed long int *)(void *)0);
    if(t == -1l)
      return 1;

    else
    {
      tm=localtime(&t);
      if(tm == ((struct tm *)NULL))
        return 1;

      else
      {
        memset((void *)smallname, 0, (unsigned long int)255);
        memset((void *)extension, 0, (unsigned long int)255);
        lastdot=strrchr(filename, 46);
        if(!(lastdot == ((char *)NULL)))
        {
          __builtin_strncpy(smallname, filename, (unsigned long int)(lastdot - filename));
          unsigned long int return_value_strlen$1;
          return_value_strlen$1=strlen(lastdot);
          __builtin_strncpy(extension, lastdot, (unsigned long int)(unsigned int)return_value_strlen$1);
          snprintf(backupname, (unsigned long int)255, "%s.%04d%02d%02d%02d%02d%02d%s", (const void *)smallname, tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, (const void *)extension);
        }

        else
          snprintf(backupname, (unsigned long int)255, "%s.%04d%02d%02d%02d%02d%02d", filename, tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
        return 0;
      }
    }
  }
}

// GetSizeOfNullTerminatedArray
// file lib.c line 90
signed int GetSizeOfNullTerminatedArray(char **a)
{
  signed int i = 0;
  for( ; (_Bool)1; i = i + 1)
    if(a[(signed long int)i] == ((char *)NULL))
      return i;

}

// IEE_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 65
enum anonymous$26 IEE_destroy(void **pp_config)
{
  struct __ICMP_ECHO_ENGINE_PARMS *p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)(void *)0;
  _Bool tmp_if_expr$1;
  if(pp_config == ((void **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *pp_config == (void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (enum anonymous$26)IEE_INVALID_PARMS;

  else
  {
    p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)*pp_config;
    close(p_engine->icmp_sfd);
    _free_echo_event_list(p_engine->event_list);
    free((void *)p_engine);
    *pp_config = (void *)0;
    return (enum anonymous$26)IEE_SUCCESS;
  }
}

// IEE_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 55
enum anonymous$26 IEE_init(void **pp_config, enum anonymous$28 eng_mode, unsigned int send_interval, unsigned int echo_num, unsigned int echo_timeout, unsigned char echo_timeout_threshold, char *src, char *dst, signed int af, void (*send_clbk)(void), void (*recv_clbk)(double))
{
  struct __ICMP_ECHO_ENGINE_PARMS *p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)(void *)0;
  _Bool tmp_if_expr$1;
  if(pp_config == ((void **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *pp_config != (void *)0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_inet_pton$3;
  signed int return_value_inet_pton$4;
  signed int return_value_socket$5;
  signed int return_value_inet_pton$6;
  signed int return_value_inet_pton$7;
  signed int return_value_socket$8;
  if(dst == ((char *)NULL) || tmp_if_expr$1)
    return (enum anonymous$26)IEE_INVALID_PARMS;

  else
  {
    *pp_config=malloc(sizeof(struct __ICMP_ECHO_ENGINE_PARMS) /*136ul*/ );
    p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)*pp_config;
    if(p_engine == ((struct __ICMP_ECHO_ENGINE_PARMS *)NULL))
      return (enum anonymous$26)IEE_RESOURCE_STARVATION;

    else
    {
      memset((void *)p_engine, 0, sizeof(struct __ICMP_ECHO_ENGINE_PARMS) /*136ul*/ );
      p_engine->send_interval = send_interval;
      p_engine->echo_num = echo_num;
      p_engine->echo_timeout = echo_timeout;
      p_engine->echo_timeout_threshold = (unsigned int)echo_timeout_threshold;
      p_engine->eng_mode = (unsigned char)eng_mode;
      p_engine->eng_ongoing = (unsigned char)1;
      p_engine->count_send = (unsigned int)0;
      p_engine->count_late = (unsigned int)0;
      p_engine->count_ontime = (unsigned int)0;
      p_engine->count_consec_late = (unsigned char)0;
      p_engine->event_list = (struct __ECHO_EVENT *)(void *)0;
      p_engine->clbk_send = send_clbk;
      p_engine->clbk_recv = recv_clbk;
      signed int return_value_getpid$2;
      return_value_getpid$2=getpid();
      p_engine->icmp_echo_id = (unsigned int)return_value_getpid$2;
      p_engine->icmp_saf = af;
      switch(p_engine->icmp_saf)
      {
        case 2:
        {
          return_value_inet_pton$3=inet_pton(2, src, (void *)&p_engine->echo_addr_src.in4.sin_addr);
          if(!(return_value_inet_pton$3 >= 1))
          {
            free((void *)p_engine);
            return (enum anonymous$26)IEE_INVALID_PARMS;
          }

          p_engine->echo_addr_src.in4.sin_family = (unsigned short int)2;
          return_value_inet_pton$4=inet_pton(2, dst, (void *)&p_engine->echo_addr_dst.in4.sin_addr);
          if(!(return_value_inet_pton$4 >= 1))
          {
            free((void *)p_engine);
            return (enum anonymous$26)IEE_INVALID_PARMS;
          }

          p_engine->echo_addr_dst.in4.sin_family = (unsigned short int)2;
          return_value_socket$5=socket(2, 3, 1);
          p_engine->icmp_sfd = (signed int)return_value_socket$5;
          break;
        }
        case 10:
        {
          return_value_inet_pton$6=inet_pton(10, src, (void *)&p_engine->echo_addr_src.in6.sin6_addr);
          if(!(return_value_inet_pton$6 >= 1))
          {
            free((void *)p_engine);
            return (enum anonymous$26)IEE_INVALID_PARMS;
          }

          p_engine->echo_addr_src.in6.sin6_family = (unsigned short int)10;
          return_value_inet_pton$7=inet_pton(10, dst, (void *)&p_engine->echo_addr_dst.in6.sin6_addr);
          if(!(return_value_inet_pton$7 >= 1))
          {
            free((void *)p_engine);
            return (enum anonymous$26)IEE_INVALID_PARMS;
          }

          p_engine->echo_addr_dst.in6.sin6_family = (unsigned short int)10;
          return_value_socket$8=socket(10, 3, 58);
          p_engine->icmp_sfd = (signed int)return_value_socket$8;
          break;
        }
        default:
        {
          free((void *)p_engine);
          return (enum anonymous$26)IEE_INVALID_PARMS;
        }
      }
      if(p_engine->icmp_sfd == -1)
      {
        free((void *)p_engine);
        return (enum anonymous$26)IEE_GENERAL_ECHO_ERROR;
      }

      else
        return (enum anonymous$26)IEE_SUCCESS;
    }
  }
}

// IEE_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 67
enum anonymous$26 IEE_process(void *p_config)
{
  struct __ICMP_ECHO_ENGINE_PARMS *p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)p_config;
  struct timeval tv_reference;
  enum anonymous$26 retval = (enum anonymous$26)IEE_SUCCESS;
  if(p_engine == ((struct __ICMP_ECHO_ENGINE_PARMS *)NULL))
    return (enum anonymous$26)IEE_INVALID_PARMS;

  else
  {
    if((signed int)(enum anonymous$28)p_engine->eng_mode == IEE_MODE_KA)
    {
      unsigned int total_sleep_time = p_engine->send_interval;
      unsigned int sleep_time;
      for( ; (signed int)p_engine->eng_ongoing == 1; total_sleep_time = total_sleep_time - sleep_time)
      {
        if(!(total_sleep_time >= 1u))
          break;

        sleep_time = total_sleep_time > (unsigned int)1000 ? (unsigned int)1000 : total_sleep_time;
        usleep(sleep_time * (unsigned int)1000);
      }
    }

    while((signed int)p_engine->eng_ongoing == 1)
    {
      if(!(p_engine->echo_num == 0u))
      {
        if(p_engine->count_send >= p_engine->echo_num)
          break;

      }

      retval=_do_send_wrap(p_engine);
      if(!((signed int)retval == IEE_SUCCESS))
        break;

      if((signed int)p_engine->eng_ongoing == 0)
        break;

      gettimeofday(&tv_reference, (struct timezone *)(void *)0);
      _compute_next_send(p_engine, &tv_reference);
      retval=_do_read_wrap(p_engine, &tv_reference);
      if(!((signed int)retval == IEE_SUCCESS))
        break;

    }
    return retval;
  }
}

// IEE_stop
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/icmp_echo_engine.h line 70
enum anonymous$26 IEE_stop(void *p_config)
{
  struct __ICMP_ECHO_ENGINE_PARMS *p_engine = (struct __ICMP_ECHO_ENGINE_PARMS *)p_config;
  if(p_engine == ((struct __ICMP_ECHO_ENGINE_PARMS *)NULL))
    return (enum anonymous$26)IEE_INVALID_PARMS;

  else
  {
    p_engine->eng_ongoing = (unsigned char)0;
    close(p_engine->icmp_sfd);
    return (enum anonymous$26)IEE_SUCCESS;
  }
}

// InitLogSystem
// file tsp_client.c line 1856
signed int InitLogSystem(const struct stConf *p_config)
{
  struct stLogConfiguration *p_log_config;
  if(p_config == ((const struct stConf *)NULL))
    return -1;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct stLogConfiguration) /*56ul*/ );
    p_log_config = (struct stLogConfiguration *)return_value_malloc$1;
    if(p_log_config == ((struct stLogConfiguration *)NULL))
    {
      DirectErrorMessage("Failed memory allocation.");
      return -1;
    }

    else
    {
      char *return_value___strdup$2;
      return_value___strdup$2=__strdup("gogoc");
      p_log_config->identity = return_value___strdup$2;
      char *return_value___strdup$3;
      return_value___strdup$3=__strdup(p_config->log_filename);
      p_log_config->log_filename = return_value___strdup$3;
      p_log_config->log_level_stderr = (signed int)p_config->log_level_stderr;
      p_log_config->log_level_console = (signed int)p_config->log_level_console;
      p_log_config->log_level_syslog = (signed int)p_config->log_level_syslog;
      p_log_config->log_level_file = (signed int)p_config->log_level_file;
      p_log_config->syslog_facility = p_config->syslog_facility;
      p_log_config->log_rotation = (signed int)p_config->log_rotation;
      p_log_config->log_rotation_size = p_config->log_rotation_size;
      p_log_config->delete_rotated_log = (signed int)p_config->log_rotation_delete;
      p_log_config->buffer = 0;
      signed int return_value_LogConfigure$4;
      return_value_LogConfigure$4=LogConfigure(p_log_config);
      if(!(return_value_LogConfigure$4 == 0))
      {
        DirectErrorMessage("Failed to configure the logging system.");
        return -1;
      }

      else
        return 0;
    }
  }
}

// InitNetToolsArray
// file tsp_client.c line 1803
void InitNetToolsArray(struct net_tools *nt_array)
{
  (nt_array + (signed long int)0)->netopen = NetRUDPConnect;
  (nt_array + (signed long int)0)->netclose = NetRUDPClose;
  (nt_array + (signed long int)0)->netsendrecv = NetRUDPReadWrite;
  (nt_array + (signed long int)0)->netsend = NetRUDPWrite;
  (nt_array + (signed long int)0)->netprintf = NetRUDPPrintf;
  (nt_array + (signed long int)0)->netrecv = NetRUDPRead;
  (nt_array + (signed long int)1)->netopen = NetUDPConnect;
  (nt_array + (signed long int)1)->netclose = NetUDPClose;
  (nt_array + (signed long int)1)->netsendrecv = NetUDPReadWrite;
  (nt_array + (signed long int)1)->netsend = NetUDPWrite;
  (nt_array + (signed long int)1)->netprintf = NetUDPPrintf;
  (nt_array + (signed long int)1)->netrecv = NetUDPRead;
  (nt_array + (signed long int)2)->netopen = NetTCPConnect;
  (nt_array + (signed long int)2)->netclose = NetTCPClose;
  (nt_array + (signed long int)2)->netsendrecv = NetTCPReadWrite;
  (nt_array + (signed long int)2)->netsend = NetTCPWrite;
  (nt_array + (signed long int)2)->netprintf = NetTCPPrintf;
  (nt_array + (signed long int)2)->netrecv = NetTCPRead;
}

// InsertInChallegeStruct
// file tsp_auth.c line 155
signed int InsertInChallegeStruct(struct anonymous$36 *c, char *Token, char *Value)
{
  signed int tmp_statement_expression$2;
  unsigned long int InsertInChallegeStruct$$1$$1$$__s1_len;
  unsigned long int InsertInChallegeStruct$$1$$1$$__s2_len;
  signed int return_value___builtin_strcmp$3;
  return_value___builtin_strcmp$3=__builtin_strcmp(Token, "realm");
  tmp_statement_expression$2 = return_value___builtin_strcmp$3;
  if(tmp_statement_expression$2 == 0)
  {
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(Value);
    c->realm = return_value___strdup$1;
    return 0;
  }

  signed int tmp_statement_expression$5;
  unsigned long int __s1_len;
  unsigned long int InsertInChallegeStruct$$1$$3$$__s2_len;
  signed int return_value___builtin_strcmp$6;
  return_value___builtin_strcmp$6=__builtin_strcmp(Token, "nonce");
  tmp_statement_expression$5 = return_value___builtin_strcmp$6;
  if(tmp_statement_expression$5 == 0)
  {
    char *return_value___strdup$4;
    return_value___strdup$4=__strdup(Value);
    c->nonce = return_value___strdup$4;
    return 0;
  }

  signed int tmp_statement_expression$8;
  unsigned long int InsertInChallegeStruct$$1$$5$$__s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$9;
  return_value___builtin_strcmp$9=__builtin_strcmp(Token, "qop");
  tmp_statement_expression$8 = return_value___builtin_strcmp$9;
  if(tmp_statement_expression$8 == 0)
  {
    char *return_value___strdup$7;
    return_value___strdup$7=__strdup(Value);
    c->qop = return_value___strdup$7;
    return 0;
  }

  signed int tmp_statement_expression$11;
  unsigned long int InsertInChallegeStruct$$1$$7$$__s1_len;
  unsigned long int InsertInChallegeStruct$$1$$7$$__s2_len;
  signed int return_value___builtin_strcmp$12;
  return_value___builtin_strcmp$12=__builtin_strcmp(Token, "algorithm");
  tmp_statement_expression$11 = return_value___builtin_strcmp$12;
  if(tmp_statement_expression$11 == 0)
  {
    char *return_value___strdup$10;
    return_value___strdup$10=__strdup(Value);
    c->algorithm = return_value___strdup$10;
    return 0;
  }

  signed int tmp_statement_expression$14;
  unsigned long int InsertInChallegeStruct$$1$$9$$__s1_len;
  unsigned long int InsertInChallegeStruct$$1$$9$$__s2_len;
  signed int return_value___builtin_strcmp$15;
  return_value___builtin_strcmp$15=__builtin_strcmp(Token, "charset");
  tmp_statement_expression$14 = return_value___builtin_strcmp$15;
  if(tmp_statement_expression$14 == 0)
  {
    char *return_value___strdup$13;
    return_value___strdup$13=__strdup(Value);
    c->charset = return_value___strdup$13;
    return 0;
  }

  signed int tmp_statement_expression$17;
  unsigned long int InsertInChallegeStruct$$1$$11$$__s1_len;
  unsigned long int InsertInChallegeStruct$$1$$11$$__s2_len;
  signed int return_value___builtin_strcmp$18;
  return_value___builtin_strcmp$18=__builtin_strcmp(Token, "rspauth");
  tmp_statement_expression$17 = return_value___builtin_strcmp$18;
  if(tmp_statement_expression$17 == 0)
  {
    char *return_value___strdup$16;
    return_value___strdup$16=__strdup(Value);
    c->rspauth = return_value___strdup$16;
    return 0;
  }

  return -1;
}

// IsAddressInPrefix
// file lib.c line 125
signed int IsAddressInPrefix(const char *address, const char *prefix, const signed short int prefix_len)
{
  signed short int compare_bytes = (signed short int)0;
  signed short int compare_bits = (signed short int)0;
  signed int ret_code = 1;
  struct addrinfo hints;
  struct addrinfo *res_address = (struct addrinfo *)(void *)0;
  struct addrinfo *res_prefix = (struct addrinfo *)(void *)0;
  struct in6_addr *in6_address;
  struct in6_addr *in6_prefix;
  memset((void *)&hints, 0x00, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 10;
  signed int return_value_getaddrinfo$1;
  _Bool tmp_if_expr$3;
  signed int return_value_getaddrinfo$2;
  if((signed int)prefix_len >= 1 && !(address == ((const char *)NULL)) && !(prefix == ((const char *)NULL)) && !((signed int)prefix_len >= 129))
  {
    return_value_getaddrinfo$1=getaddrinfo(address, (const char *)(void *)0, &hints, &res_address);
    if(!(return_value_getaddrinfo$1 == 0))
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_getaddrinfo$2=getaddrinfo(prefix, (const char *)(void *)0, &hints, &res_prefix);
      tmp_if_expr$3 = return_value_getaddrinfo$2 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr$3)
      goto __CPROVER_DUMP_L4;

    ret_code = -1;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    if(res_address == ((struct addrinfo *)NULL) || res_prefix == ((struct addrinfo *)NULL))
      ret_code = -1;

    else
    {
      in6_address = &((struct sockaddr_in6 *)res_address->ai_addr)->sin6_addr;
      in6_prefix = &((struct sockaddr_in6 *)res_prefix->ai_addr)->sin6_addr;
      compare_bytes = (signed short int)((signed int)prefix_len / 8);
      compare_bits = (signed short int)((signed int)prefix_len % 8);
      signed int return_value_memcmp$4;
      return_value_memcmp$4=memcmp((const void *)in6_address, (const void *)in6_prefix, (unsigned long int)compare_bytes);
      if(return_value_memcmp$4 == 0)
      {
        if((signed int)compare_bits >= 1)
        {
          if((signed int)in6_address->__in6_u.__u6_addr8[(signed long int)compare_bytes] >> (signed int)compare_bits == (signed int)in6_prefix->__in6_u.__u6_addr8[(signed long int)compare_bytes] >> (signed int)compare_bits)
            goto __CPROVER_DUMP_L7;

        }

        else
        {

        __CPROVER_DUMP_L7:
          ;
          ret_code = 0;
          goto __CPROVER_DUMP_L8;
        }
      }

    }
  }

__CPROVER_DUMP_L8:
  ;
  if(!(res_address == ((struct addrinfo *)NULL)))
    freeaddrinfo(res_address);

  if(!(res_prefix == ((struct addrinfo *)NULL)))
    freeaddrinfo(res_prefix);

  return ret_code;
}

// IsAll
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/lib.h line 23
signed int IsAll(char *AllowedChars, char *Value)
{
  if(!(Value == ((char *)NULL)))
    for( ; !(*Value == 0); Value = Value + 1l)
    {
      char *return_value___builtin_strchr$1;
      return_value___builtin_strchr$1=__builtin_strchr(AllowedChars, (signed int)*Value);
      if(return_value___builtin_strchr$1 == ((char *)NULL))
        return 0;

    }

  else
    return 0;
  return 1;
}

// IsPresent
// file lib.c line 79
signed int IsPresent(char *Value)
{
  unsigned long int return_value_strlen$1;
  if(!(Value == ((char *)NULL)))
  {
    return_value_strlen$1=strlen(Value);
    if((unsigned int)return_value_strlen$1 == 0u)
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

// KA_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 47
enum anonymous$8 KA_destroy(void **pp_engine)
{
  struct __KA_ENGINE_PARMS *p_ka_engine = (struct __KA_ENGINE_PARMS *)*pp_engine;
  enum anonymous$25 ka_priv_ret;
  enum anonymous$26 iee_ret;
  _Bool tmp_if_expr$1;
  if(p_ka_engine == ((struct __KA_ENGINE_PARMS *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = p_ka_engine->p_echo_engine == (void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    Display(1, (enum tSeverityLevel)ELError, "KA_destroy", "Keepalive destruction failed: Invalid pointer.");
    return (enum anonymous$8)KA_ERROR;
  }

  else
  {
    iee_ret=IEE_destroy(&p_ka_engine->p_echo_engine);
    if(!((signed int)iee_ret == IEE_SUCCESS))
    {
      Display(1, (enum tSeverityLevel)ELError, "KA_destroy", "Keepalive destruction failed: Failed to destroy ICMP echo engine.");
      return (enum anonymous$8)KA_ERROR;
    }

    else
    {
      ka_priv_ret=_destroy_ka_engine((struct __KA_ENGINE_PARMS **)pp_engine);
      switch((signed int)ka_priv_ret)
      {
        case KA_PRIV_SUCCESS:
          break;
        case KA_INVALID_PARMS:
        {
          Display(1, (enum tSeverityLevel)ELError, "KA_destroy", "Keepalive destruction failed: Invalid pointer.");
          return (enum anonymous$8)KA_ERROR;
        }
        default:
        {
          Display(1, (enum tSeverityLevel)ELError, "KA_destroy", "Keepalive destruction failed: Unknown or unhandled error.");
          return (enum anonymous$8)KA_ERROR;
        }
      }
      return (enum anonymous$8)KA_SUCCESS;
    }
  }
}

// KA_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 35
enum anonymous$8 KA_init(void **pp_engine, unsigned int ka_send_interval, char *ka_src_addr, char *ka_dst_addr, signed int ka_af)
{
  struct __KA_ENGINE_PARMS *p_ka_engine;
  enum anonymous$26 iee_ret;
  enum anonymous$25 ka_priv_ret;
  ka_priv_ret=_create_ka_engine((struct __KA_ENGINE_PARMS **)pp_engine);
  switch((signed int)ka_priv_ret)
  {
    case KA_PRIV_SUCCESS:
      goto __CPROVER_DUMP_L4;
    case KA_INVALID_PARMS:
    {
      Display(1, (enum tSeverityLevel)ELError, "KA_init", "Keepalive initialisation failed: Already initialized.");
      return (enum anonymous$8)KA_ERROR;
    }
    case KA_RESOURCE_STARVATION:
    {
      Display(1, (enum tSeverityLevel)ELError, "KA_init", "Keepalive initialisation failed: Failed memory allocation.");
      return (enum anonymous$8)KA_ERROR;
    }
    default:
    {

    __CPROVER_DUMP_L4:
      ;
      p_ka_engine = (struct __KA_ENGINE_PARMS *)*pp_engine;
      iee_ret=IEE_init(&p_ka_engine->p_echo_engine, (enum anonymous$28)IEE_MODE_KA, ka_send_interval, (unsigned int)0, (unsigned int)5000, (unsigned char)3, ka_src_addr, ka_dst_addr, ka_af, _ka_send_callback, _ka_recv_callback);
      switch((signed int)iee_ret)
      {
        case IEE_SUCCESS:
        {
          Display(2, (enum tSeverityLevel)ELInfo, "KA_init", "Keepalive initialized with peer %s. Interval=%dms. Timeout=%dms. General timeout at %d consecutive timeouts.", ka_dst_addr, ka_send_interval, 5000, 3);
          break;
        }
        case IEE_INVALID_PARMS:
        {
          Display(1, (enum tSeverityLevel)ELError, "KA_init", "Keepalive initialisation failed: Invalid pointer.");
          _destroy_ka_engine(&p_ka_engine);
          return (enum anonymous$8)KA_ERROR;
        }
        case IEE_RESOURCE_STARVATION:
        {
          Display(1, (enum tSeverityLevel)ELError, "KA_init", "Keepalive initialisation failed: Failed memory allocation.");
          _destroy_ka_engine(&p_ka_engine);
          return (enum anonymous$8)KA_ERROR;
        }
        default:
        {
          Display(1, (enum tSeverityLevel)ELError, "KA_init", "Keepalive initialisation failed: Unknown or unhandled error.");
          _destroy_ka_engine(&p_ka_engine);
          return (enum anonymous$8)KA_ERROR;
        }
      }
      return (enum anonymous$8)KA_SUCCESS;
    }
  }
}

// KA_qry_status
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 43
enum anonymous$9 KA_qry_status(void *p_engine)
{
  struct __KA_ENGINE_PARMS *p_ka_engine = (struct __KA_ENGINE_PARMS *)p_engine;
  if(p_ka_engine == ((struct __KA_ENGINE_PARMS *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "KA_qry_status", "Keepalive status query failed: Invalid pointer.");
    return (enum anonymous$9)KA_STAT_INVALID;
  }

  else
    return p_ka_engine->ka_status;
}

// KA_start
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 41
enum anonymous$8 KA_start(void *p_engine)
{
  struct __KA_ENGINE_PARMS *p_ka_engine = (struct __KA_ENGINE_PARMS *)p_engine;
  signed int ret;
  if(p_ka_engine == ((struct __KA_ENGINE_PARMS *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "KA_start", "Keepalive start failed: Invalid pointer.");
    return (enum anonymous$8)KA_ERROR;
  }

  else
  {
    ret=pthread_create(&p_ka_engine->ka_thread_id, (const union pthread_attr_t *)(void *)0, _ka_start_thread, (void *)p_ka_engine);
    if(!(ret == 0))
    {
      Display(1, (enum tSeverityLevel)ELError, "KA_start", "%s%d", (const void *)"Keepalive start failed: Thread start error: ", ret);
      return (enum anonymous$8)KA_ERROR;
    }

    else
    {
      p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_ONGOING;
      return (enum anonymous$8)KA_SUCCESS;
    }
  }
}

// KA_stop
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_ka.h line 45
enum anonymous$8 KA_stop(void *p_engine)
{
  struct __KA_ENGINE_PARMS *p_ka_engine = (struct __KA_ENGINE_PARMS *)p_engine;
  enum anonymous$26 iee_ret;
  signed int ret;
  _Bool tmp_if_expr$1;
  if(p_ka_engine == ((struct __KA_ENGINE_PARMS *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = p_ka_engine->p_echo_engine == (void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    Display(1, (enum tSeverityLevel)ELError, "KA_stop", "Keepalive stop failed: Invalid pointer.");
    return (enum anonymous$8)KA_ERROR;
  }

  else
  {
    iee_ret=IEE_stop(p_ka_engine->p_echo_engine);
    if(!((signed int)iee_ret == IEE_SUCCESS))
    {
      Display(1, (enum tSeverityLevel)ELError, "KA_stop", "Keepalive stop failed: Failed to stop ICMP echo engine.");
      return (enum anonymous$8)KA_ERROR;
    }

    else
    {
      ret=pthread_join(p_ka_engine->ka_thread_id, (void **)(void *)0);
      if(!(ret == 0))
      {
        Display(1, (enum tSeverityLevel)ELError, "KA_stop", "%s%d", (const void *)"Keepalive stop failed: Thread join error: ", ret);
        return (enum anonymous$8)KA_ERROR;
      }

      else
        return (enum anonymous$8)KA_SUCCESS;
    }
  }
}

// LogBufferLineToFile
// file log.c line 313
static signed int LogBufferLineToFile(char *LogLine, struct stLogConfiguration *configuration, signed int *OutputBufferChars)
{
  char buffer[4096l];
  signed int output_chars;
  if(configuration == ((struct stLogConfiguration *)NULL))
  {
    *OutputBufferChars = 0;
    return 1;
  }

  else
    if(configuration->log_filename == ((char *)NULL))
    {
      *OutputBufferChars = 0;
      return 1;
    }

    else
      if(Logfp == ((struct _IO_FILE *)NULL))
      {
        *OutputBufferChars = 0;
        return 1;
      }

      else
        if(LogLine == ((char *)NULL))
        {
          *OutputBufferChars = 0;
          return 1;
        }

        else
        {
          output_chars=snprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , "%s", LogLine);
          if(configuration->log_rotation == TRUE)
          {
            signed int return_value_RotateLogFile$1;
            return_value_RotateLogFile$1=RotateLogFile(configuration->log_filename, configuration->log_rotation_size, buffer);
          }

          signed int return_value_fprintf$2;
          return_value_fprintf$2=fprintf(Logfp, "%s", (const void *)buffer);
          if(!(return_value_fprintf$2 >= 0))
          {
            *OutputBufferChars = 0;
            return 1;
          }

          else
          {
            signed int return_value_fflush$3;
            return_value_fflush$3=fflush(Logfp);
            if(!(return_value_fflush$3 == 0))
            {
              *OutputBufferChars = 0;
              return 1;
            }

            else
            {
              *OutputBufferChars = output_chars;
              return 0;
            }
          }
        }
}

// LogClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 54
void LogClose(void)
{
  buffer_free(&LogBuffer);
  if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
  {
    FreeLogConfiguration(LogConfiguration);
    LogConfiguration = (struct stLogConfiguration *)(void *)0;
  }

  if(!(Logfp == ((struct _IO_FILE *)NULL)))
  {
    fclose(Logfp);
    Logfp = (struct _IO_FILE *)(void *)0;
  }

  closelog();
}

// LogConfigure
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/log.h line 53
signed int LogConfigure(struct stLogConfiguration *configuration)
{
  signed int OutputBufferChars = 0;
  static signed int LogBufferInitialized = 0;
  if(LogBufferInitialized == 0)
  {
    buffer_init(&LogBuffer);
    LogBufferInitialized = 1;
  }

  if(LogMutexInitialized == 0)
  {
    pthread_mutex_init(&logMutex, (const union anonymous$2 *)(void *)0);
    LogMutexInitialized = 1;
  }

  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$4;
  signed int tmp_statement_expression$2;
  unsigned long int return_value_buffer_len$5;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$11;
  signed int tmp_statement_expression$9;
  _Bool tmp_if_expr$12;
  if(configuration == ((struct stLogConfiguration *)NULL))
  {
    DirectErrorMessage("Received NULL configuration.");
    if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
    {
      FreeLogConfiguration(LogConfiguration);
      LogConfiguration = (struct stLogConfiguration *)(void *)0;
    }

    return 1;
  }

  else
  {
    if(configuration->log_level_file >= 1)
    {
      if(!(configuration->log_filename == ((char *)NULL)))
      {
        if(!(Logfp == ((struct _IO_FILE *)NULL)))
        {
          if(LogConfiguration == ((struct stLogConfiguration *)NULL))
            tmp_if_expr$1 = (_Bool)1;

          else
            tmp_if_expr$1 = LogConfiguration->log_filename == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$1)
            tmp_if_expr$4 = (_Bool)1;

          else
          {
            unsigned long int LogConfigure$$1$$4$$1$$1$$1$$__s1_len;
            unsigned long int LogConfigure$$1$$4$$1$$1$$1$$__s2_len;
            signed int return_value___builtin_strcmp$3;
            return_value___builtin_strcmp$3=__builtin_strcmp(LogConfiguration->log_filename, configuration->log_filename);
            tmp_statement_expression$2 = return_value___builtin_strcmp$3;
            tmp_if_expr$4 = tmp_statement_expression$2 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$4)
          {
            fflush(Logfp);
            fclose(Logfp);
            Logfp=fopen(configuration->log_filename, "a");
            if(Logfp == ((struct _IO_FILE *)NULL))
            {
              DirectErrorMessage("Failed to open log file %s.", configuration->log_filename);
              if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
              {
                FreeLogConfiguration(LogConfiguration);
                LogConfiguration = (struct stLogConfiguration *)(void *)0;
              }

              FreeLogConfiguration(configuration);
              return 1;
            }

          }

        }

        else
        {
          Logfp=fopen(configuration->log_filename, "a");
          if(Logfp == ((struct _IO_FILE *)NULL))
          {
            DirectErrorMessage("Failed to open log file %s.", configuration->log_filename);
            if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
            {
              FreeLogConfiguration(LogConfiguration);
              LogConfiguration = (struct stLogConfiguration *)(void *)0;
            }

            FreeLogConfiguration(configuration);
            return 1;
          }

        }
        do
        {
          return_value_buffer_len$5=buffer_len(&LogBuffer);
          if(!(return_value_buffer_len$5 >= 1ul))
            break;

          void *return_value_buffer_ptr$6;
          return_value_buffer_ptr$6=buffer_ptr(&LogBuffer);
          signed int return_value_LogBufferLineToFile$7;
          return_value_LogBufferLineToFile$7=LogBufferLineToFile((char *)return_value_buffer_ptr$6, configuration, &OutputBufferChars);
          if(!(return_value_LogBufferLineToFile$7 == 0))
            DirectErrorMessage("Failed to write the log buffer to file. Some logs may be lost.");

          OutputBufferChars = OutputBufferChars + 1;
          buffer_consume(&LogBuffer, (unsigned int)OutputBufferChars);
        }
        while((_Bool)1);
        buffer_clear(&LogBuffer);
      }

    }

    else
    {
      buffer_clear(&LogBuffer);
      if(!(Logfp == ((struct _IO_FILE *)NULL)))
      {
        fflush(Logfp);
        fclose(Logfp);
      }

    }
    if(configuration->log_level_syslog >= 1)
    {
      if(LogConfiguration == ((struct stLogConfiguration *)NULL))
        openlog(configuration->identity, 0, configuration->syslog_facility);

      else
        if(LogConfiguration->log_level_syslog >= 1)
        {
          if(LogConfiguration == ((struct stLogConfiguration *)NULL))
            tmp_if_expr$8 = (_Bool)1;

          else
            tmp_if_expr$8 = LogConfiguration->identity == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$8)
            tmp_if_expr$11 = (_Bool)1;

          else
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$10;
            return_value___builtin_strcmp$10=__builtin_strcmp(LogConfiguration->identity, configuration->identity);
            tmp_statement_expression$9 = return_value___builtin_strcmp$10;
            tmp_if_expr$11 = tmp_statement_expression$9 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$11)
            tmp_if_expr$12 = (_Bool)1;

          else
            tmp_if_expr$12 = LogConfiguration->syslog_facility != configuration->syslog_facility ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$12)
          {
            closelog();
            openlog(configuration->identity, 0, configuration->syslog_facility);
          }

        }

        else
          openlog(configuration->identity, 0, configuration->syslog_facility);
    }

    else
      if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
      {
        if(LogConfiguration->log_level_syslog >= 1)
          closelog();

      }

    if(!(LogConfiguration == ((struct stLogConfiguration *)NULL)))
      FreeLogConfiguration(LogConfiguration);

    LogConfiguration = configuration;
    return 0;
  }
}

// LogToFile
// file log.c line 376
static signed int LogToFile(signed int buffer, enum tSeverityLevel SeverityLvl, const char *FunctionName, char *Format, ...)
{
  void **argp;
  signed long int t;
  struct tm *tm;
  char *s1;
  char *s2;
  unsigned long int i;
  unsigned long int j;
  char line_to_log[4096l];
  char temp_buffer[4096l];
  char *tmp_post$3;
  char *tmp_post$4;
  char *tmp_if_expr$6;
  if(Logfp == ((struct _IO_FILE *)NULL) && buffer == 0)
    return 1;

  else
  {
    argp = (void **)&Format;
    vsnprintf(line_to_log, sizeof(char [4096l]) /*4096ul*/ , Format, argp);
    argp = ((void **)NULL);
    t=time((signed long int *)(void *)0);
    if(t == -1l)
      return 1;

    else
    {
      tm=localtime(&t);
      if(tm == ((struct tm *)NULL))
        return 1;

      else
      {
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen(line_to_log);
        i = (unsigned long int)(unsigned int)return_value_strlen$1;
        void *return_value_malloc$2;
        return_value_malloc$2=malloc(i + (unsigned long int)1);
        s2 = (char *)return_value_malloc$2;
        s1 = s2;
        if(s1 == ((char *)NULL))
          return 1;

        else
        {
          j = (unsigned long int)0;
          for( ; !(j >= i); j = j + 1ul)
            if(!((signed int)line_to_log[(signed long int)j] == 13))
            {
              if(!((signed int)line_to_log[(signed long int)j] == 10))
              {
                tmp_post$3 = s1;
                s1 = s1 + 1l;
                *tmp_post$3 = line_to_log[(signed long int)j];
              }

            }

          tmp_post$4 = s1;
          s1 = s1 + 1l;
          *tmp_post$4 = (char)0;
          char return_value_SeverityToChar$5;
          return_value_SeverityToChar$5=SeverityToChar(SeverityLvl);
          if(LogConfiguration->identity == ((char *)NULL))
            tmp_if_expr$6 = "";

          else
            tmp_if_expr$6 = LogConfiguration->identity;
          snprintf(temp_buffer, sizeof(char [4096l]) /*4096ul*/ , "%04d/%02d/%02d %02d:%02d:%02d %c %s: %s\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, return_value_SeverityToChar$5, tmp_if_expr$6, s2);
          free((void *)s2);
          if(!(buffer == 0))
          {
            unsigned long int return_value_strlen$7;
            return_value_strlen$7=strlen(temp_buffer);
            buffer_append(&LogBuffer, (void *)temp_buffer, (unsigned long int)((unsigned int)return_value_strlen$7 + (unsigned int)1));
          }

          else
          {
            if(LogConfiguration->log_rotation == TRUE)
            {
              signed int return_value_RotateLogFile$8;
              return_value_RotateLogFile$8=RotateLogFile(LogConfiguration->log_filename, LogConfiguration->log_rotation_size, temp_buffer);
            }

            signed int return_value_fprintf$9;
            return_value_fprintf$9=fprintf(Logfp, "%s", (const void *)temp_buffer);
            if(!(return_value_fprintf$9 >= 0))
              return 1;

            signed int return_value_fflush$10;
            return_value_fflush$10=fflush(Logfp);
            if(!(return_value_fflush$10 == 0))
              return 1;

          }
          return 0;
        }
      }
    }
  }
}

// LogToLocal
// file log.c line 488
static signed int LogToLocal(struct _IO_FILE *location, char *Format, ...)
{
  void **argp = (void **)&Format;
  static char buffer[4096l];
  vsnprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , Format, argp);
  argp = ((void **)NULL);
  signed int return_value_fprintf$1;
  return_value_fprintf$1=fprintf(location, "%s\n", (const void *)buffer);
  if(!(return_value_fprintf$1 >= 0))
    return 1;

  else
    return 0;
}

// LogToSyslog
// file log.c line 274
static signed int LogToSyslog(signed int VerboseLevel, enum tSeverityLevel SeverityLvl, const char *FunctionName, char *Format, ...)
{
  void **argp;
  char buffer[4096l];
  char line_to_log[4096l];
  argp = (void **)&Format;
  vsnprintf(line_to_log, sizeof(char [4096l]) /*4096ul*/ , Format, argp);
  argp = ((void **)NULL);
  snprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , "%s", (const void *)line_to_log);
  switch((signed int)SeverityLvl)
  {
    case ELError:
    {
      syslog(3, buffer);
      goto __CPROVER_DUMP_L4;
    }
    case ELWarning:
    {
      syslog(ELWarning, buffer);
      goto __CPROVER_DUMP_L4;
    }
    case ELInfo:

    case ELDebug:
      syslog(7, buffer);
    default:
    {

    __CPROVER_DUMP_L4:
      ;
      return 0;
    }
  }
}

// MD5Final
// file md5c.c line 219
void MD5Final(unsigned char *digest, struct MD5Context *context)
{
  MD5Pad(context);
  Encode(digest, context->state, (unsigned int)16);
  memset((void *)context, 0, sizeof(struct MD5Context) /*88ul*/ );
}

// MD5Init
// file md5c.c line 138
void MD5Init(struct MD5Context *context)
{
  context->count[(signed long int)1] = (unsigned int)0;
  context->count[(signed long int)0] = context->count[(signed long int)1];
  context->state[(signed long int)0] = (unsigned int)0x67452301;
  context->state[(signed long int)1] = 0xefcdab89;
  context->state[(signed long int)2] = 0x98badcfe;
  context->state[(signed long int)3] = (unsigned int)0x10325476;
}

// MD5Pad
// file md5c.c line 196
void MD5Pad(struct MD5Context *context)
{
  unsigned char bits[8l];
  unsigned int index;
  unsigned int padLen;
  Encode(bits, context->count, (unsigned int)8);
  index = (unsigned int)(context->count[(signed long int)0] >> 3 & (unsigned int)0x3f);
  padLen = index < (unsigned int)56 ? (unsigned int)56 - index : (unsigned int)120 - index;
  MD5Update(context, PADDING, padLen);
  MD5Update(context, bits, (unsigned int)8);
}

// MD5Transform
// file md5c.c line 234
static void MD5Transform(unsigned int *state, const unsigned char *block)
{
  unsigned int a = state[(signed long int)0];
  unsigned int b = state[(signed long int)1];
  unsigned int c = state[(signed long int)2];
  unsigned int d = state[(signed long int)3];
  unsigned int x[16l];
  Decode(x, block, (unsigned int)64);
  a = a + (b & c | ~b & d) + x[(signed long int)0] + (unsigned int)0xd76aa478;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (a & b | ~a & c) + x[(signed long int)1] + (unsigned int)0xe8c7b756;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (d & a | ~d & b) + x[(signed long int)2] + (unsigned int)0x242070db;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (c & d | ~c & a) + x[(signed long int)3] + (unsigned int)0xc1bdceee;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (b & c | ~b & d) + x[(signed long int)4] + (unsigned int)0xf57c0faf;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (a & b | ~a & c) + x[(signed long int)5] + (unsigned int)0x4787c62a;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (d & a | ~d & b) + x[(signed long int)6] + (unsigned int)0xa8304613;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (c & d | ~c & a) + x[(signed long int)7] + (unsigned int)0xfd469501;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (b & c | ~b & d) + x[(signed long int)8] + (unsigned int)0x698098d8;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (a & b | ~a & c) + x[(signed long int)9] + (unsigned int)0x8b44f7af;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (d & a | ~d & b) + x[(signed long int)10] + (unsigned int)0xffff5bb1;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (c & d | ~c & a) + x[(signed long int)11] + (unsigned int)0x895cd7be;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (b & c | ~b & d) + x[(signed long int)12] + (unsigned int)0x6b901122;
  a = a << 7 | a >> 32 - 7;
  a = a + b;
  d = d + (a & b | ~a & c) + x[(signed long int)13] + (unsigned int)0xfd987193;
  d = d << 12 | d >> 32 - 12;
  d = d + a;
  c = c + (d & a | ~d & b) + x[(signed long int)14] + (unsigned int)0xa679438e;
  c = c << 17 | c >> 32 - 17;
  c = c + d;
  b = b + (c & d | ~c & a) + x[(signed long int)15] + (unsigned int)0x49b40821;
  b = b << 22 | b >> 32 - 22;
  b = b + c;
  a = a + (b & d | c & ~d) + x[(signed long int)1] + (unsigned int)0xf61e2562;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (a & c | b & ~c) + x[(signed long int)6] + (unsigned int)0xc040b340;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (d & b | a & ~b) + x[(signed long int)11] + (unsigned int)0x265e5a51;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (c & a | d & ~a) + x[(signed long int)0] + (unsigned int)0xe9b6c7aa;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (b & d | c & ~d) + x[(signed long int)5] + (unsigned int)0xd62f105d;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (a & c | b & ~c) + x[(signed long int)10] + (unsigned int)0x2441453;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (d & b | a & ~b) + x[(signed long int)15] + (unsigned int)0xd8a1e681;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (c & a | d & ~a) + x[(signed long int)4] + (unsigned int)0xe7d3fbc8;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (b & d | c & ~d) + x[(signed long int)9] + (unsigned int)0x21e1cde6;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (a & c | b & ~c) + x[(signed long int)14] + (unsigned int)0xc33707d6;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (d & b | a & ~b) + x[(signed long int)3] + (unsigned int)0xf4d50d87;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (c & a | d & ~a) + x[(signed long int)8] + (unsigned int)0x455a14ed;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (b & d | c & ~d) + x[(signed long int)13] + (unsigned int)0xa9e3e905;
  a = a << 5 | a >> 32 - 5;
  a = a + b;
  d = d + (a & c | b & ~c) + x[(signed long int)2] + (unsigned int)0xfcefa3f8;
  d = d << 9 | d >> 32 - 9;
  d = d + a;
  c = c + (d & b | a & ~b) + x[(signed long int)7] + (unsigned int)0x676f02d9;
  c = c << 14 | c >> 32 - 14;
  c = c + d;
  b = b + (c & a | d & ~a) + x[(signed long int)12] + (unsigned int)0x8d2a4c8a;
  b = b << 20 | b >> 32 - 20;
  b = b + c;
  a = a + (b ^ c ^ d) + x[(signed long int)5] + (unsigned int)0xfffa3942;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + x[(signed long int)8] + (unsigned int)0x8771f681;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + x[(signed long int)11] + (unsigned int)0x6d9d6122;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + x[(signed long int)14] + (unsigned int)0xfde5380c;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + x[(signed long int)1] + (unsigned int)0xa4beea44;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + x[(signed long int)4] + (unsigned int)0x4bdecfa9;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + x[(signed long int)7] + (unsigned int)0xf6bb4b60;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + x[(signed long int)10] + (unsigned int)0xbebfbc70;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + x[(signed long int)13] + (unsigned int)0x289b7ec6;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + x[(signed long int)0] + (unsigned int)0xeaa127fa;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + x[(signed long int)3] + (unsigned int)0xd4ef3085;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + x[(signed long int)6] + (unsigned int)0x4881d05;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (b ^ c ^ d) + x[(signed long int)9] + (unsigned int)0xd9d4d039;
  a = a << 4 | a >> 32 - 4;
  a = a + b;
  d = d + (a ^ b ^ c) + x[(signed long int)12] + (unsigned int)0xe6db99e5;
  d = d << 11 | d >> 32 - 11;
  d = d + a;
  c = c + (d ^ a ^ b) + x[(signed long int)15] + (unsigned int)0x1fa27cf8;
  c = c << 16 | c >> 32 - 16;
  c = c + d;
  b = b + (c ^ d ^ a) + x[(signed long int)2] + (unsigned int)0xc4ac5665;
  b = b << 23 | b >> 32 - 23;
  b = b + c;
  a = a + (c ^ (b | ~d)) + x[(signed long int)0] + (unsigned int)0xf4292244;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + x[(signed long int)7] + (unsigned int)0x432aff97;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + x[(signed long int)14] + (unsigned int)0xab9423a7;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + x[(signed long int)5] + (unsigned int)0xfc93a039;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + x[(signed long int)12] + (unsigned int)0x655b59c3;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + x[(signed long int)3] + (unsigned int)0x8f0ccc92;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + x[(signed long int)10] + (unsigned int)0xffeff47d;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + x[(signed long int)1] + (unsigned int)0x85845dd1;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + x[(signed long int)8] + (unsigned int)0x6fa87e4f;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + x[(signed long int)15] + (unsigned int)0xfe2ce6e0;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + x[(signed long int)6] + (unsigned int)0xa3014314;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + x[(signed long int)13] + (unsigned int)0x4e0811a1;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  a = a + (c ^ (b | ~d)) + x[(signed long int)4] + (unsigned int)0xf7537e82;
  a = a << 6 | a >> 32 - 6;
  a = a + b;
  d = d + (b ^ (a | ~c)) + x[(signed long int)11] + (unsigned int)0xbd3af235;
  d = d << 10 | d >> 32 - 10;
  d = d + a;
  c = c + (a ^ (d | ~b)) + x[(signed long int)2] + (unsigned int)0x2ad7d2bb;
  c = c << 15 | c >> 32 - 15;
  c = c + d;
  b = b + (d ^ (c | ~a)) + x[(signed long int)9] + (unsigned int)0xeb86d391;
  b = b << 21 | b >> 32 - 21;
  b = b + c;
  state[(signed long int)0] = state[(signed long int)0] + a;
  state[(signed long int)1] = state[(signed long int)1] + b;
  state[(signed long int)2] = state[(signed long int)2] + c;
  state[(signed long int)3] = state[(signed long int)3] + d;
  memset((void *)x, 0, sizeof(unsigned int [16l]) /*64ul*/ );
}

// MD5Update
// file md5c.c line 157
void MD5Update(struct MD5Context *context, const unsigned char *input, unsigned int inputLen)
{
  unsigned int i;
  unsigned int index;
  unsigned int partLen;
  index = (unsigned int)(context->count[(signed long int)0] >> 3 & (unsigned int)0x3F);
  context->count[(signed long int)0] = context->count[(signed long int)0] + ((unsigned int)inputLen << 3);
  if(!(context->count[0l] >= inputLen << 3))
    context->count[(signed long int)1] = context->count[(signed long int)1] + 1u;

  context->count[(signed long int)1] = context->count[(signed long int)1] + ((unsigned int)inputLen >> 29);
  partLen = (unsigned int)64 - index;
  if(inputLen >= partLen)
  {
    memcpy((void *)&context->buffer[(signed long int)index], (const void *)input, (unsigned long int)partLen);
    MD5Transform(context->state, context->buffer);
    i = partLen;
    for( ; !(63u + i >= inputLen); i = i + (unsigned int)64)
      MD5Transform(context->state, &input[(signed long int)i]);
    index = (unsigned int)0;
  }

  else
    i = (unsigned int)0;
  memcpy((void *)&context->buffer[(signed long int)index], (const void *)&input[(signed long int)i], (unsigned long int)(inputLen - i));
}

// NetRUDPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 22
extern signed int NetRUDPClose(signed int sock)
{
  shutdown(sock, 2);
  close(sock);
  signed int return_value_NetRUDPDestroy$1;
  return_value_NetRUDPDestroy$1=NetRUDPDestroy();
  return return_value_NetRUDPDestroy$1;
}

// NetRUDPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 21
extern signed int NetRUDPConnect(signed int *p_sock, char *Host, unsigned short int Port)
{
  signed int sfd;
  struct sockaddr_in *sai;
  if(rttengine_stats.initiated == 0)
    NetRUDPInit();

  sai=internal_get_sai(&rttengine_stats, Host, Port);
  if(sai == ((struct sockaddr_in *)NULL))
    return -1;

  else
  {
    signed int return_value_socket$1;
    return_value_socket$1=socket(2, 2, 0);
    sfd = (signed int)return_value_socket$1;
    if(sfd == -1)
      return -2;

    else
    {
      signed int return_value_connect$2;
      return_value_connect$2=connect(sfd, (struct sockaddr *)sai, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      if(return_value_connect$2 == -1)
      {
        close(sfd);
        return -2;
      }

      else
      {
        *p_sock = sfd;
        return 0;
      }
    }
  }
}

// NetRUDPDestroy
// file net_rudp.c line 36
signed int NetRUDPDestroy(void)
{
  signed int return_value_rttengine_deinit$1;
  return_value_rttengine_deinit$1=rttengine_deinit(&rttengine_stats, (void *)0, (void *)0);
  if(return_value_rttengine_deinit$1 == 0)
    return 1;

  else
    return 0;
}

// NetRUDPInit
// file net_rudp.c line 28
signed int NetRUDPInit(void)
{
  memset((void *)&rttengine_stats, 0, sizeof(struct rttengine_statistics) /*56ul*/ );
  signed int return_value_rttengine_init$1;
  return_value_rttengine_init$1=rttengine_init(&rttengine_stats);
  return return_value_rttengine_init$1;
}

// NetRUDPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 27
extern signed int NetRUDPPrintf(signed int sock, char *out, signed int ol, char *Format, ...)
{
  void **argp;
  char Data[1024l];
  argp = (void **)&Format;
  vsnprintf((char *)Data, sizeof(char [1024l]) /*1024ul*/ , Format, argp);
  argp = ((void **)NULL);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(Data);
  signed int return_value_NetRUDPReadWrite$2;
  return_value_NetRUDPReadWrite$2=NetRUDPReadWrite(sock, Data, (signed int)(unsigned int)return_value_strlen$1, out, ol);
  return return_value_NetRUDPReadWrite$2;
}

// NetRUDPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 29
extern signed int NetRUDPRead(signed int sock, char *b, signed int l)
{
  signed int return_value_NetRUDPReadWrite$1;
  return_value_NetRUDPReadWrite$1=NetRUDPReadWrite(sock, (char *)(void *)0, 0, b, l);
  return return_value_NetRUDPReadWrite$1;
}

// NetRUDPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 24
extern signed int NetRUDPReadWrite(signed int sock, char *in, signed int il, char *out, signed int ol)
{
  signed int return_value_internal_send_recv$1;
  return_value_internal_send_recv$1=internal_send_recv(sock, (void *)in, il, (void *)out, ol);
  return return_value_internal_send_recv$1;
}

// NetRUDPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_rudp.h line 26
extern signed int NetRUDPWrite(signed int sock, char *b, signed int l)
{
  signed int return_value_NetRUDPReadWrite$1;
  return_value_NetRUDPReadWrite$1=NetRUDPReadWrite(sock, b, l, (char *)(void *)0, 0);
  return return_value_NetRUDPReadWrite$1;
}

// NetTCP6Close
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 27
extern signed int NetTCP6Close(signed int Socket)
{
  shutdown(Socket, 2);
  signed int return_value_close$1;
  return_value_close$1=close(Socket);
  return return_value_close$1;
}

// NetTCP6Connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 26
extern signed int NetTCP6Connect(signed int *p_sock, char *Host, unsigned short int Port)
{
  signed int sockfd;
  struct sockaddr_in6 serv_addr;
  struct in6_addr addr;
  struct in6_addr *return_value_NetText2Addr6$1;
  return_value_NetText2Addr6$1=NetText2Addr6(Host, &addr);
  unsigned short int tmp_statement_expression$2;
  if(return_value_NetText2Addr6$1 == ((struct in6_addr *)NULL))
    return -1;

  else
  {
    memset((void *)&serv_addr, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
    serv_addr.sin6_family = (unsigned short int)10;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)Port;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression$2 = __v;
    serv_addr.sin6_port = tmp_statement_expression$2;
    serv_addr.sin6_addr = addr;
    signed int return_value_socket$3;
    return_value_socket$3=socket(10, 1, 0);
    sockfd = (signed int)return_value_socket$3;
    if(!(sockfd >= 0))
      return -2;

    else
    {
      signed int return_value_connect$4;
      return_value_connect$4=connect(sockfd, (struct sockaddr *)&serv_addr, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ );
      if(!(return_value_connect$4 >= 0))
      {
        close(sockfd);
        return -2;
      }

      else
      {
        *p_sock = sockfd;
        return 0;
      }
    }
  }
}

// NetTCP6Printf
// file net_tcp6.c line 116
extern signed int NetTCP6Printf(signed int sock, char *out, signed int pl, char *Format, ...)
{
  void **argp;
  signed int Length;
  char Data[1024l];
  argp = (void **)&Format;
  vsnprintf(Data, sizeof(char [1024l]) /*1024ul*/ , Format, argp);
  argp = ((void **)NULL);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(Data);
  Length = (signed int)(unsigned int)return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(Data);
  signed int return_value_NetTCP6Write$3;
  return_value_NetTCP6Write$3=NetTCP6Write(sock, Data, (signed int)(unsigned int)return_value_strlen$2);
  if(!(return_value_NetTCP6Write$3 == Length))
    return 0;

  else
  {
    signed int return_value_NetTCP6Read$4;
    return_value_NetTCP6Read$4=NetTCP6Read(sock, out, pl);
    return return_value_NetTCP6Read$4;
  }
}

// NetTCP6Read
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 34
extern signed int NetTCP6Read(signed int sock, char *in, signed int l)
{
  signed long int return_value_recv$1;
  return_value_recv$1=recv(sock, (void *)in, (unsigned long int)l, 0);
  return (signed int)return_value_recv$1;
}

// NetTCP6ReadWrite
// file net_tcp6.c line 84
extern signed int NetTCP6ReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo)
{
  signed int return_value_NetTCP6Write$1;
  return_value_NetTCP6Write$1=NetTCP6Write(sock, bi, li);
  if(!(return_value_NetTCP6Write$1 == li))
    return -1;

  else
  {
    signed int return_value_NetTCP6Read$2;
    return_value_NetTCP6Read$2=NetTCP6Read(sock, bo, lo);
    return return_value_NetTCP6Read$2;
  }
}

// NetTCP6Write
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp6.h line 31
extern signed int NetTCP6Write(signed int sock, char *b, signed int l)
{
  signed int nleft;
  signed int nwritten;
  char *ptr = b;
  nleft = l;
  while(nleft >= 1)
  {
    signed long int return_value_send$1;
    return_value_send$1=send(sock, (const void *)ptr, (unsigned long int)nleft, 0);
    nwritten = (signed int)return_value_send$1;
    if(!(nwritten >= 1))
      return nwritten;

    nleft = nleft - nwritten;
    ptr = ptr + (signed long int)nwritten;
  }
  return l;
}

// NetTCPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 15
extern signed int NetTCPClose(signed int Socket)
{
  shutdown(Socket, 2);
  signed int return_value_close$1;
  return_value_close$1=close(Socket);
  return return_value_close$1;
}

// NetTCPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 14
extern signed int NetTCPConnect(signed int *p_sock, char *Host, unsigned short int Port)
{
  signed int sockfd;
  struct sockaddr_in serv_addr;
  struct in_addr addr;
  struct in_addr *return_value_NetText2Addr$1;
  return_value_NetText2Addr$1=NetText2Addr(Host, &addr);
  unsigned short int tmp_statement_expression$2;
  if(return_value_NetText2Addr$1 == ((struct in_addr *)NULL))
    return -1;

  else
  {
    memset((void *)&serv_addr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    serv_addr.sin_family = (unsigned short int)2;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)Port;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression$2 = __v;
    serv_addr.sin_port = tmp_statement_expression$2;
    serv_addr.sin_addr.s_addr = addr.s_addr;
    signed int return_value_socket$3;
    return_value_socket$3=socket(2, 1, 0);
    sockfd = (signed int)return_value_socket$3;
    if(!(sockfd >= 0))
      return -2;

    else
    {
      signed int return_value_connect$4;
      return_value_connect$4=connect(sockfd, (struct sockaddr *)&serv_addr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      if(!(return_value_connect$4 >= 0))
      {
        close(sockfd);
        return -2;
      }

      else
      {
        *p_sock = sockfd;
        return 0;
      }
    }
  }
}

// NetTCPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 20
extern signed int NetTCPPrintf(signed int sock, char *out, signed int pl, char *Format, ...)
{
  void **argp;
  signed int Length;
  char Data[1024l];
  argp = (void **)&Format;
  vsnprintf(Data, sizeof(char [1024l]) /*1024ul*/ , Format, argp);
  argp = ((void **)NULL);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(Data);
  Length = (signed int)(unsigned int)return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(Data);
  signed int return_value_NetTCPWrite$3;
  return_value_NetTCPWrite$3=NetTCPWrite(sock, Data, (signed int)(unsigned int)return_value_strlen$2);
  if(!(return_value_NetTCPWrite$3 == Length))
    return 0;

  else
  {
    signed int return_value_NetTCPRead$4;
    return_value_NetTCPRead$4=NetTCPRead(sock, out, pl);
    return return_value_NetTCPRead$4;
  }
}

// NetTCPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 22
extern signed int NetTCPRead(signed int sock, char *in, signed int l)
{
  signed long int return_value_recv$1;
  return_value_recv$1=recv(sock, (void *)in, (unsigned long int)l, 0);
  return (signed int)return_value_recv$1;
}

// NetTCPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 17
extern signed int NetTCPReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo)
{
  signed int return_value_NetTCPWrite$1;
  return_value_NetTCPWrite$1=NetTCPWrite(sock, bi, li);
  if(!(return_value_NetTCPWrite$1 == li))
    return -1;

  else
  {
    signed int return_value_NetTCPRead$2;
    return_value_NetTCPRead$2=NetTCPRead(sock, bo, lo);
    return return_value_NetTCPRead$2;
  }
}

// NetTCPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_tcp.h line 19
extern signed int NetTCPWrite(signed int sock, char *b, signed int l)
{
  signed int nleft;
  signed int nwritten;
  char *ptr = b;
  nleft = l;
  while(nleft >= 1)
  {
    signed long int return_value_send$1;
    return_value_send$1=send(sock, (const void *)ptr, (unsigned long int)nleft, 0);
    nwritten = (signed int)return_value_send$1;
    if(!(nwritten >= 1))
      return nwritten;

    nleft = nleft - nwritten;
    ptr = ptr + (signed long int)nwritten;
  }
  return l;
}

// NetText2Addr
// file net.c line 110
struct in_addr * NetText2Addr(char *Address, struct in_addr *in_p)
{
  struct addrinfo hints;
  struct addrinfo *res = (struct addrinfo *)(void *)0;
  struct addrinfo *result = (struct addrinfo *)(void *)0;
  char addr_cp[1024l];
  char *addr;
  _Bool tmp_if_expr$3;
  char *return_value___builtin_strchr$2;
  char *return_value___builtin_strchr$5;
  signed int return_value_getaddrinfo$6;
  if(Address == ((char *)NULL) || in_p == ((struct in_addr *)NULL))
    return (struct in_addr *)(void *)0;

  else
  {
    memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
    hints.ai_family = 0;
    strcpy(addr_cp, Address);
    char *return_value___builtin_strchr$1;
    return_value___builtin_strchr$1=__builtin_strchr(Address, 91);
    if(!(return_value___builtin_strchr$1 == ((char *)NULL)))
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value___builtin_strchr$2=__builtin_strchr(Address, 93);
      tmp_if_expr$3 = return_value___builtin_strchr$2 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr$3)
    {
      return_value___builtin_strchr$5=__builtin_strchr(Address, 58);
      addr = return_value___builtin_strchr$5;
      if(!(addr == ((char *)NULL)))
      {
        char *return_value___builtin_strchr$4;
        return_value___builtin_strchr$4=__builtin_strchr(addr + (signed long int)1, 58);
        if(!(return_value___builtin_strchr$4 == ((char *)NULL)))
          goto error_v4;

      }

      addr = addr_cp;
      strtok(addr_cp, ":");
      return_value_getaddrinfo$6=getaddrinfo(addr, (const char *)(void *)0, &hints, &res);
      if(return_value_getaddrinfo$6 == 0)
      {
        result = res;
        for( ; !(result == ((struct addrinfo *)NULL)); result = result->ai_next)
          if(result->ai_family == 2)
          {
            memcpy((void *)in_p, (const void *)&((struct sockaddr_in *)result->ai_addr)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
            freeaddrinfo(res);
            return in_p;
          }

      }

    }


  error_v4:
    ;
    Display(3, (enum tSeverityLevel)ELWarning, "NetText2Addr", "Failed to resolve server IPv4 address.");
    if(!(res == ((struct addrinfo *)NULL)))
      freeaddrinfo(res);

    return (struct in_addr *)(void *)0;
  }
}

// NetText2Addr6
// file net.c line 183
struct in6_addr * NetText2Addr6(char *Address, struct in6_addr *in6_p)
{
  struct addrinfo hints;
  struct addrinfo *res = (struct addrinfo *)(void *)0;
  struct addrinfo *result = (struct addrinfo *)(void *)0;
  char addr[1024l];
  char *p;
  signed int c = 0;
  if(Address == ((char *)NULL) || in6_p == ((struct in6_addr *)NULL))
    return (struct in6_addr *)(void *)0;

  else
  {
    memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
    hints.ai_family = 10;
    addr[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
    __builtin_strncpy(addr, Address, sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1);
    p = addr;
    for( ; !((signed int)*p == 0); p = p + 1l)
      if((signed int)*p == 58)
        c = c + 1;

    p = addr;
    if(c >= 2)
    {
      hints.ai_flags = 0x0004;
      if((signed int)*p == 91)
      {
        strtok(p, "]");
        p = p + 1l;
      }

    }

    else
      strtok(p, ":");
    signed int return_value_getaddrinfo$1;
    return_value_getaddrinfo$1=getaddrinfo(p, (const char *)(void *)0, &hints, &res);
    if(return_value_getaddrinfo$1 == 0)
    {
      result = res;
      for( ; !(result == ((struct addrinfo *)NULL)); result = result->ai_next)
        if(result->ai_family == 10)
        {
          memcpy((void *)in6_p, (const void *)&((struct sockaddr_in6 *)result->ai_addr)->sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
          freeaddrinfo(res);
          return in6_p;
        }

    }

    Display(3, (enum tSeverityLevel)ELWarning, "NetText2Addr6", "Failed to resolve server IPv6 address.");
    if(!(res == ((struct addrinfo *)NULL)))
      freeaddrinfo(res);

    return (struct in6_addr *)(void *)0;
  }
}

// NetUDPClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 15
extern signed int NetUDPClose(signed int Socket)
{
  shutdown(Socket, 2);
  signed int return_value_close$1;
  return_value_close$1=close(Socket);
  return return_value_close$1;
}

// NetUDPConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 14
extern signed int NetUDPConnect(signed int *p_sock, char *Host, unsigned short int Port)
{
  signed int sockfd;
  struct sockaddr_in serv_addr;
  struct in_addr addr;
  struct in_addr *return_value_NetText2Addr$1;
  return_value_NetText2Addr$1=NetText2Addr(Host, &addr);
  unsigned short int tmp_statement_expression$2;
  if(return_value_NetText2Addr$1 == ((struct in_addr *)NULL))
    return -1;

  else
  {
    memset((void *)&serv_addr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    serv_addr.sin_family = (unsigned short int)2;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)Port;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression$2 = __v;
    serv_addr.sin_port = tmp_statement_expression$2;
    serv_addr.sin_addr.s_addr = addr.s_addr;
    signed int return_value_socket$3;
    return_value_socket$3=socket(2, 2, 0);
    sockfd = (signed int)return_value_socket$3;
    if(!(sockfd >= 0))
      return -2;

    else
    {
      signed int return_value_connect$4;
      return_value_connect$4=connect(sockfd, (struct sockaddr *)&serv_addr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      if(!(return_value_connect$4 >= 0))
      {
        close(sockfd);
        return -2;
      }

      else
      {
        *p_sock = sockfd;
        return 0;
      }
    }
  }
}

// NetUDPPrintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 20
extern signed int NetUDPPrintf(signed int sock, char *out, signed int ol, char *Format, ...)
{
  void **argp;
  char Data[1024l];
  argp = (void **)&Format;
  vsnprintf(Data, sizeof(char [1024l]) /*1024ul*/ , Format, argp);
  argp = ((void **)NULL);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(Data);
  signed int return_value_NetUDPReadWrite$2;
  return_value_NetUDPReadWrite$2=NetUDPReadWrite(sock, Data, (signed int)(unsigned int)return_value_strlen$1, out, ol);
  return return_value_NetUDPReadWrite$2;
}

// NetUDPRead
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 22
extern signed int NetUDPRead(signed int sock, char *b, signed int l)
{
  signed long int return_value_recvfrom$1;
  return_value_recvfrom$1=recvfrom(sock, (void *)b, (unsigned long int)l, 0, (struct sockaddr *)(void *)0, (unsigned int *)(void *)0);
  return (signed int)return_value_recvfrom$1;
}

// NetUDPReadWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 17
extern signed int NetUDPReadWrite(signed int sock, char *bi, signed int li, char *bo, signed int lo)
{
  signed int return_value_NetUDPWrite$1;
  return_value_NetUDPWrite$1=NetUDPWrite(sock, bi, li);
  if(!(return_value_NetUDPWrite$1 == li))
    return -1;

  else
  {
    signed int return_value_NetUDPRead$2;
    return_value_NetUDPRead$2=NetUDPRead(sock, bo, lo);
    return return_value_NetUDPRead$2;
  }
}

// NetUDPWrite
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/net_udp.h line 19
extern signed int NetUDPWrite(signed int sock, char *b, signed int l)
{
  signed int nwritten;
  signed int nleft;
  char *ptr = b;
  nleft = l;
  while(nleft >= 1)
  {
    signed long int return_value_send$1;
    return_value_send$1=send(sock, (const void *)ptr, (unsigned long int)nleft, 0);
    nwritten = (signed int)return_value_send$1;
    if(!(nwritten >= 1))
      return nwritten;

    nleft = nleft - nwritten;
    ptr = ptr + (signed long int)nwritten;
  }
  return l;
}

// NotifyhaccessConfigInfo
// file tsp_client.c line 852
signed int NotifyhaccessConfigInfo(const struct __HACCESS_CONFIG_INFO *aHACCESSConfigInfo)
{
  return (signed int)0x00000000;
}

// ParseArguments
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/cli.h line 15
void ParseArguments(signed int argc, char **argv, struct stConf *Conf)
{
  signed int ch;
  do
  {
    ch=getopt(argc, argv, "h?b?n?y?f:r:i:u:s:");
    if(ch == -1)
      break;

    switch(ch)
    {
      case 98:
      {
        Conf->boot_mode = (enum anonymous$0)TRUE;
        break;
      }
      case 110:
      {
        Conf->nodaemon = (enum anonymous$0)TRUE;
        break;
      }
      case 121:
      {
        Conf->no_questions = (enum anonymous$0)TRUE;
        break;
      }
      case 115:
      {
        Conf->client_v4 = optarg;
        break;
      }
      case 105:
      {
        Conf->if_tunnel_v6v4 = optarg;
        break;
      }
      case 117:
      {
        Conf->if_tunnel_v6udpv4 = optarg;
        break;
      }
      case 102:
      {
        FileName = optarg;
        break;
      }
      case 114:
      {
        Conf->retry_delay=atoi$link3(optarg);
        break;
      }
      case 63:

      case 104:
      {
        PrintUsage((char *)(void *)0);
        exit(0);
      }
      default:
      {
        PrintUsage("Error while parsing command line arguments");
        exit(1);
      }
    }
  }
  while((_Bool)1);
}

// ParseSyslogFacility
// file config.c line 58
static signed int ParseSyslogFacility(struct stConf *pConf, char *facility)
{
  signed int index = 0;
  signed int tmp_statement_expression$1;
  for( ; (_Bool)1; index = index + 1)
  {
    if(syslog_facilities[(signed long int)index].string == ((char *)NULL))
      break;

    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(facility, syslog_facilities[(signed long int)index].string);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
    {
      pConf->syslog_facility = syslog_facilities[(signed long int)index].value;
      return 0;
    }

  }
  return 1;
}

// PrintUsage
// file cli.c line 27
void PrintUsage(char *message)
{
  if(!(message == ((char *)NULL)))
    printf(message);

  printf("usage: gogoc [options] [-f config_file] [-r seconds]\n  where options are :\n    -i    gif interface to use for tunnel_v6v4\n    -u    interface to use for tunnel_v6udpv4\n    -s    interface to query to get IPv4 source address\n    -f    Read this config file instead of %s \n    -r    Retry after n seconds until success\n    -b    Boot mode: avoid reconnecting after failure\n    -n    Run in foreground\n    -y    Do not ask y/n questions\n    -h    help\n    -?    help\n\n", FileName);
}

// Q_BSearch
// file deque.c line 805
static signed int Q_BSearch(struct anonymous$37 *q, void *key, signed int (*Comp)(const void *, const void *))
{
  signed int low;
  signed int mid;
  signed int hi;
  signed int val;
  low = 0;
  hi = q->size - 1;
  if(hi >= low)
  {
    mid = (low + hi) / 2;
    val=Comp(key, Q_index[(signed long int)mid]);
    if(!(val >= 0))
      hi = mid - 1;

    else
      if(val >= 1)
        low = mid + 1;

      else
        return mid;
  }

  return -1;
}

// Q_DelCur
// file deque.c line 542
void * Q_DelCur(struct anonymous$37 *q)
{
  void *d;
  struct nodeptr *n;
  struct nodeptr *p;
  void *return_value_Q_PopHead$1;
  void *return_value_Q_PopTail$2;
  if(q->cursor == ((struct nodeptr *)NULL))
    return (void *)0;

  else
    if(q->cursor == q->head)
    {
      return_value_Q_PopHead$1=Q_PopHead(q);
      return return_value_Q_PopHead$1;
    }

    else
      if(q->cursor == q->tail)
      {
        return_value_Q_PopTail$2=Q_PopTail(q);
        return return_value_Q_PopTail$2;
      }

      else
      {
        n = q->cursor->next;
        p = q->cursor->prev;
        d = q->cursor->data;
        free((void *)q->cursor);
        if(!(p == ((struct nodeptr *)NULL)))
          q->cursor = p;

        else
          q->cursor = n;
        q->size = q->size - 1;
        q->sorted = 0;
        return d;
      }
}

// Q_Empty
// file deque.c line 191
signed int Q_Empty(struct anonymous$37 *q)
{
  return (signed int)(q->size == 0);
}

// Q_End
// file deque.c line 171
signed int Q_End(struct anonymous$37 *q)
{
  return (signed int)(q->cursor == q->tail);
}

// Q_Find
// file deque.c line 639
signed int Q_Find(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *))
{
  void *d;
  d=Q_First(q);
  signed int return_value;
  return_value=Comp(d, data);
  if(return_value == 0)
    return 1;

  else
  {
    d=Q_Next(q);
    signed int return_value_Q_End$1;
    return_value_Q_End$1=Q_End(q);
    signed int return_value_1;
    return_value_1=Comp(d, data);
    if(return_value_1 == 0)
      return 1;

    else
      return 0;
  }
}

// Q_First
// file deque.c line 230
void * Q_First(struct anonymous$37 *q)
{
  signed int return_value_Q_Empty$1;
  return_value_Q_Empty$1=Q_Empty(q);
  if(!(return_value_Q_Empty$1 == 0))
    return (void *)0;

  else
  {
    q->cursor = q->head;
    return q->cursor->data;
  }
}

// Q_Get
// file deque.c line 587
void * Q_Get(struct anonymous$37 *q)
{
  if(q->cursor == ((struct nodeptr *)NULL))
    return (void *)0;

  else
    return q->cursor->data;
}

// Q_Init
// file deque.c line 127
signed int Q_Init(struct anonymous$37 *q)
{
  q->tail = (struct nodeptr *)(void *)0;
  q->head = q->tail;
  q->cursor = q->head;
  q->size = 0;
  q->sorted = 0;
  return 1;
}

// Q_Insert
// file deque.c line 891
signed int Q_Insert(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *))
{
  Q_PushHead(q, data);
  signed int return_value_Q_Sort$1;
  return_value_Q_Sort$1=Q_Sort(q, Comp);
  if(return_value_Q_Sort$1 == 0)
    return 0;

  else
    return 1;
}

// Q_Last
// file deque.c line 255
void * Q_Last(struct anonymous$37 *q)
{
  signed int return_value_Q_Empty$1;
  return_value_Q_Empty$1=Q_Empty(q);
  if(!(return_value_Q_Empty$1 == 0))
    return (void *)0;

  else
  {
    q->cursor = q->tail;
    return q->cursor->data;
  }
}

// Q_Next
// file deque.c line 486
void * Q_Next(struct anonymous$37 *q)
{
  if(q->cursor->next == ((struct nodeptr *)NULL))
    return (void *)0;

  else
  {
    q->cursor = (struct nodeptr *)q->cursor->next;
    return q->cursor->data;
  }
}

// Q_PopHead
// file deque.c line 397
void * Q_PopHead(struct anonymous$37 *q)
{
  struct nodeptr *n;
  void *d;
  signed int return_value_Q_Empty$1;
  return_value_Q_Empty$1=Q_Empty(q);
  if(!(return_value_Q_Empty$1 == 0))
    return (void *)0;

  else
  {
    d = q->head->data;
    n = q->head->next;
    free((void *)q->head);
    q->size = q->size - 1;
    if(q->size == 0)
    {
      q->cursor = (struct nodeptr *)(void *)0;
      q->tail = q->cursor;
      q->head = q->tail;
    }

    else
    {
      q->head = (struct nodeptr *)n;
      q->head->prev = (struct nodeptr *)(void *)0;
      q->cursor = q->head;
    }
    q->sorted = 0;
    return d;
  }
}

// Q_PopTail
// file deque.c line 441
void * Q_PopTail(struct anonymous$37 *q)
{
  struct nodeptr *p;
  void *d;
  signed int return_value_Q_Empty$1;
  return_value_Q_Empty$1=Q_Empty(q);
  if(!(return_value_Q_Empty$1 == 0))
    return (void *)0;

  else
  {
    d = q->tail->data;
    p = q->tail->prev;
    free((void *)q->tail);
    q->size = q->size - 1;
    if(q->size == 0)
    {
      q->cursor = (struct nodeptr *)(void *)0;
      q->tail = q->cursor;
      q->head = q->tail;
    }

    else
    {
      q->tail = (struct nodeptr *)p;
      q->tail->next = (struct nodeptr *)(void *)0;
      q->cursor = q->tail;
    }
    q->sorted = 0;
    return d;
  }
}

// Q_Previous
// file deque.c line 513
void * Q_Previous(struct anonymous$37 *q)
{
  if(q->cursor->prev == ((struct nodeptr *)NULL))
    return (void *)0;

  else
  {
    q->cursor = (struct nodeptr *)q->cursor->prev;
    return q->cursor->data;
  }
}

// Q_PushHead
// file deque.c line 280
signed int Q_PushHead(struct anonymous$37 *q, void *d)
{
  struct nodeptr *n = (struct nodeptr *)(void *)0;
  struct nodeptr *p;
  if(q->head == ((struct nodeptr *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct nodeptr) /*24ul*/ );
    q->head = (struct nodeptr *)return_value_malloc$1;
    if(q->head == ((struct nodeptr *)NULL))
      return 0;

  }

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct nodeptr) /*24ul*/ );
    q->head->prev = (struct nodeptr *)return_value_malloc$2;
    if(q->head->prev == ((struct nodeptr *)NULL))
      return 0;

    n = q->head;
    p = q->head->prev;
    q->head = (struct nodeptr *)p;
  }
  q->head->prev = (struct nodeptr *)(void *)0;
  if(q->size == 0)
  {
    q->head->next = (struct nodeptr *)(void *)0;
    q->tail = q->head;
  }

  else
    q->head->next = (struct nodeptr *)n;
  q->head->data = d;
  q->size = q->size + 1;
  q->cursor = q->head;
  q->sorted = 0;
  return 1;
}

// Q_PushTail
// file deque.c line 339
signed int Q_PushTail(struct anonymous$37 *q, void *d)
{
  struct nodeptr *p = (struct nodeptr *)(void *)0;
  struct nodeptr *n;
  if(q->tail == ((struct nodeptr *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct nodeptr) /*24ul*/ );
    q->tail = (struct nodeptr *)return_value_malloc$1;
    if(q->tail == ((struct nodeptr *)NULL))
      return 0;

  }

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct nodeptr) /*24ul*/ );
    q->tail->next = (struct nodeptr *)return_value_malloc$2;
    if(q->tail->next == ((struct nodeptr *)NULL))
      return 0;

    p = q->tail;
    n = q->tail->next;
    q->tail = (struct nodeptr *)n;
  }
  if(q->size == 0)
  {
    q->tail->prev = (struct nodeptr *)(void *)0;
    q->head = q->tail;
  }

  else
    q->tail->prev = (struct nodeptr *)p;
  q->tail->next = (struct nodeptr *)(void *)0;
  q->tail->data = d;
  q->cursor = q->tail;
  q->size = q->size + 1;
  q->sorted = 0;
  return 1;
}

// Q_Put
// file deque.c line 610
signed int Q_Put(struct anonymous$37 *q, void *data)
{
  if(q->cursor == ((struct nodeptr *)NULL))
    return 0;

  else
  {
    q->cursor->data = data;
    return 1;
  }
}

// Q_Seek
// file deque.c line 850
void * Q_Seek(struct anonymous$37 *q, void *data, signed int (*Comp)(const void *, const void *))
{
  signed int idx;
  if(q->sorted == 0)
  {
    signed int return_value_Q_Sort$1;
    return_value_Q_Sort$1=Q_Sort(q, Comp);
    if(return_value_Q_Sort$1 == 0)
      return (void *)0;

  }

  idx=Q_BSearch(q, data, Comp);
  if(!(idx >= 0))
    return (void *)0;

  else
  {
    q->cursor = posn_index[(signed long int)idx];
    return Q_index[(signed long int)idx];
  }
}

// Q_Size
// file deque.c line 210
signed int Q_Size(struct anonymous$37 *q)
{
  return q->size;
}

// Q_Sort
// file deque.c line 725
signed int Q_Sort(struct anonymous$37 *q, signed int (*Comp)(const void *, const void *))
{
  signed int i;
  void *d;
  struct nodeptr *dn;
  if(!(q->sorted == 0))
  {
    free((void *)Q_index);
    free((void *)posn_index);
    q->sorted = 0;
  }

  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)q->size * sizeof(void *) /*8ul*/ );
  Q_index = (void **)return_value_malloc$1;
  signed int tmp_post$3;
  if(Q_index == ((void **)NULL))
    return 0;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)q->size * sizeof(struct nodeptr *) /*8ul*/ );
    posn_index = (struct nodeptr **)return_value_malloc$2;
    if(posn_index == ((struct nodeptr **)NULL))
    {
      free((void *)Q_index);
      return 0;
    }

    else
    {
      d=Q_First(q);
      i = 0;
      for( ; !(i >= q->size); i = i + 1)
      {
        Q_index[(signed long int)i] = d;
        posn_index[(signed long int)i] = q->cursor;
        d=Q_Next(q);
      }
      QuickSort(Q_index, 0, q->size - 1, Comp);
      dn = q->head;
      i = 0;
      for( ; !(dn == ((struct nodeptr *)NULL)); dn = dn->next)
      {
        tmp_post$3 = i;
        i = i + 1;
        dn->data = Q_index[(signed long int)tmp_post$3];
      }
      if(!(d == NULL))
        Q_Find(q, d, Comp);

      else
        Q_First(q);
      q->sorted = 1;
      return 1;
    }
  }
}

// Q_Start
// file deque.c line 151
signed int Q_Start(struct anonymous$37 *q)
{
  return (signed int)(q->cursor == q->head);
}

// QuickSort
// file deque.c line 660
static void QuickSort(void **list, signed int low, signed int high, signed int (*Comp)(const void *, const void *))
{
  signed int flag = 1;
  signed int i;
  signed int j;
  void *key;
  void *temp;
  if(!(low >= high))
  {
    i = low;
    j = high + 1;
    key = list[(signed long int)low];
    if(!(flag == 0))
    {
      i = i + 1;
      signed int return_value;
      return_value=Comp(list[(signed long int)i], key);
      if(!(return_value >= 0))
        i = i + 1;

      j = j - 1;
      signed int return_value_1;
      return_value_1=Comp(list[(signed long int)j], key);
      if(return_value_1 >= 1)
        j = j - 1;

      if(!(i >= j))
      {
        temp = list[(signed long int)i];
        list[(signed long int)i] = list[(signed long int)j];
        list[(signed long int)j] = temp;
      }

      else
        flag = 0;
    }

    temp = list[(signed long int)low];
    list[(signed long int)low] = list[(signed long int)j];
    list[(signed long int)j] = temp;
    QuickSort(list, low, j - 1, Comp);
    QuickSort(list, j + 1, high, Comp);
  }

}

// RetrieveBrokerList
// file tsp_client.c line 698
signed int RetrieveBrokerList(struct __BROKER_LIST **ppBrokerList)
{
  struct stBrokerList *tspBrokerList = (struct stBrokerList *)(void *)0;
  struct __BROKER_LIST *pList;
  /* assertion *ppBrokerList == ((void *)0) */
  assert(*ppBrokerList == (struct __BROKER_LIST *)(void *)0);
  enum anonymous$27 return_value_tspReadBrokerListFromFile$1;
  void *return_value_malloc$4;
  if(!(gszBrokerListFile == ((char *)NULL)))
  {
    return_value_tspReadBrokerListFromFile$1=tspReadBrokerListFromFile(gszBrokerListFile, &tspBrokerList);
    if((signed int)return_value_tspReadBrokerListFromFile$1 == TSP_REDIRECT_OK)
      goto __CPROVER_DUMP_L1;

    return (signed int)0x00000016;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(tspBrokerList == ((struct stBrokerList *)NULL)))
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct __BROKER_LIST) /*24ul*/ );
      pList = (struct __BROKER_LIST *)return_value_malloc$2;
      *ppBrokerList = pList;
      while(!(tspBrokerList == ((struct stBrokerList *)NULL)))
      {
        char *return_value___strdup$3;
        return_value___strdup$3=__strdup(tspBrokerList->address);
        pList->szAddress = return_value___strdup$3;
        pList->nDistance = (signed int)tspBrokerList->distance;
        tspBrokerList = tspBrokerList->next;
        if(!(tspBrokerList == ((struct stBrokerList *)NULL)))
        {
          return_value_malloc$4=malloc(sizeof(struct __BROKER_LIST) /*24ul*/ );
          pList->next = (struct __BROKER_LIST *)return_value_malloc$4;
          pList = pList->next;
        }

        else
          pList->next = (struct __BROKER_LIST *)(void *)0;
      }
    }

    return (signed int)0x00000000;
  }
}

// RetrieveHACCESSStatusInfo
// file tsp_client.c line 753
signed int RetrieveHACCESSStatusInfo(struct __HACCESS_STATUS_INFO **ppHACCESSStatusInfo)
{
  return (signed int)0x00000015;
}

// RetrieveStatusInfo
// file tsp_client.c line 649
signed int RetrieveStatusInfo(struct __STATUS_INFO **ppStatusInfo)
{
  /* assertion *ppStatusInfo == ((void *)0) */
  assert(*ppStatusInfo == (struct __STATUS_INFO *)(void *)0);
  *ppStatusInfo = &gStatusInfo;
  return (signed int)0x00000000;
}

// RetrieveTunnelInfo
// file tsp_client.c line 673
signed int RetrieveTunnelInfo(struct __TUNNEL_INFO **ppTunnelInfo)
{
  /* assertion *ppTunnelInfo == ((void *)0) */
  assert(*ppTunnelInfo == (struct __TUNNEL_INFO *)(void *)0);
  *ppTunnelInfo = &gTunnelInfo;
  return (signed int)0x00000000;
}

// RotateLogFile
// file log.c line 198
static signed int RotateLogFile(char *filename, signed int max_size, char *log_line)
{
  char backup_file_name[256l];
  unsigned long int delta = (unsigned long int)0;
  signed long int pos;
  if(Logfp == ((struct _IO_FILE *)NULL))
    return 1;

  else
    if(filename == ((char *)NULL))
      return 1;

    else
    {
      signed int return_value_fflush$1;
      return_value_fflush$1=fflush(Logfp);
      if(!(return_value_fflush$1 == 0))
        return 1;

      else
      {
        pos=ftell(Logfp);
        if(pos == -1l)
          return 1;

        else
        {
          if(!(log_line == ((char *)NULL)))
          {
            unsigned long int return_value_strlen$2;
            return_value_strlen$2=strlen(log_line);
            delta = (unsigned long int)(unsigned int)return_value_strlen$2;
          }

          if((signed int)delta + (signed int)(unsigned long int)pos >= 1024 * max_size)
          {
            signed int return_value_RotationPendingHook$3;
            return_value_RotationPendingHook$3=RotationPendingHook();
            fclose(Logfp);
            if(LogConfiguration->delete_rotated_log == FALSE)
            {
              signed int return_value_GetLogFileBackupName$4;
              return_value_GetLogFileBackupName$4=GetLogFileBackupName(filename, backup_file_name);
              if(!(return_value_GetLogFileBackupName$4 == 0))
                return 1;

              signed int return_value_CopyLogFileToBackup$5;
              return_value_CopyLogFileToBackup$5=CopyLogFileToBackup(filename, backup_file_name);
              if(!(return_value_CopyLogFileToBackup$5 == 0))
                return 1;

            }

            Logfp=fopen(filename, "w");
            if(Logfp == ((struct _IO_FILE *)NULL))
              return 1;

          }

          return 0;
        }
      }
    }
}

// RotationPendingHook
// file log.c line 151
static signed int RotationPendingHook()
{
  signed long int t;
  struct tm *tm;
  char concat_buffer[4096l];
  t=time((signed long int *)(void *)0);
  _Bool tmp_if_expr$1;
  char *tmp_if_expr$2;
  if(t == -1l)
    return 1;

  else
  {
    tm=localtime(&t);
    if(tm == ((struct tm *)NULL))
      return 1;

    else
    {
      if(LogConfiguration == ((struct stLogConfiguration *)NULL))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = LogConfiguration->identity == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        tmp_if_expr$2 = "gogoc";

      else
        tmp_if_expr$2 = LogConfiguration->identity;
      snprintf(concat_buffer, sizeof(char [4096l]) /*4096ul*/ , "%04d/%02d/%02d %02d:%02d:%02d %s: %s\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, tmp_if_expr$2, (const void *)"** ROTATING LOG FILE **");
      if(!(Logfp == ((struct _IO_FILE *)NULL)))
      {
        signed int return_value_fprintf$3;
        return_value_fprintf$3=fprintf(Logfp, "%s", (const void *)concat_buffer);
        if(!(return_value_fprintf$3 >= 0))
          return 1;

        else
        {
          fflush(Logfp);
          return 0;
        }
      }

      else
        return 1;
    }
  }
}

// SeverityToChar
// file log.c line 30
char SeverityToChar(const enum tSeverityLevel sLvl)
{
  switch((signed int)sLvl)
  {
    case ELError:
      return (char)69;
    case ELWarning:
      return (char)87;
    case ELInfo:
      return (char)73;
    case ELDebug:
      return (char)68;
    default:
      return (char)69;
  }
}

// ShowList
// file xml_tun.c line 382
void ShowList(struct stLinkedList *l)
{
  signed int first = 1;
  for( ; !(l == ((struct stLinkedList *)NULL)); first = 0)
  {
    if(first == 0)
      printf(", ");

    if(!(l->Value == ((char *)NULL)))
      printf("%s", l->Value);

    l = l->next;
  }
}

// SkipBlanks
// file xmlparse.c line 50
static signed int SkipBlanks(char *str, signed int pos)
{
  for( ; !(str[(signed long int)pos] == 0); pos = pos + 1)
    if(!((signed int)str[(signed long int)pos] == 32))
    {
      if(!((signed int)str[(signed long int)pos] == 9))
      {
        if(!((signed int)str[(signed long int)pos] == 13))
        {
          if(!((signed int)str[(signed long int)pos] == 10))
            break;

        }

      }

    }

  return pos;
}

// TunInit
// file tsp_tun.c line 37
signed int TunInit(char *TunDevice)
{
  signed int tunfd;
  struct ifreq ifr;
  char iftun[128l];
  unsigned long int ioctl_nochecksum = (unsigned long int)1;
  strcpy(iftun, "/dev/net/tun");
  tunfd=open(iftun, 02);
  _Bool tmp_if_expr$5;
  signed int return_value_ioctl$4;
  if(tunfd == -1)
  {
    Display(1, (enum tSeverityLevel)ELError, "TunInit", "Failed to open device: %s.", (const void *)iftun);
    Display(1, (enum tSeverityLevel)ELError, "TunInit", "Try \"modprobe tun\".");
    return -1;
  }

  else
  {
    memset((void *)&ifr, 0, sizeof(struct ifreq) /*40ul*/ );
    ifr.ifr_ifru.ifru_flags = (signed short int)0x0001;
    __builtin_strncpy(ifr.ifr_ifrn.ifrn_name, TunDevice, (unsigned long int)16);
    signed int return_value_ioctl$3;
    return_value_ioctl$3=ioctl(tunfd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(84 << 0 + 8) | (unsigned int)(202 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, (void *)&ifr);
    if(return_value_ioctl$3 == -1)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value_ioctl$4=ioctl(tunfd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(84 << 0 + 8) | (unsigned int)(200 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, (void *)ioctl_nochecksum);
      tmp_if_expr$5 = return_value_ioctl$4 == -1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      Display(1, (enum tSeverityLevel)ELError, "TunInit", "Failed to configure tun device %s : %s.", (const void *)iftun, return_value_strerror$2);
      close(tunfd);
      return -1;
    }

    return tunfd;
  }
}

// TunMainLoop
// file tsp_tun.c line 76
unsigned int TunMainLoop(signed int tunfd, signed int Socket, enum anonymous$0 keepalive, signed int keepalive_interval, char *local_address_ipv6, char *keepalive_address)
{
  struct anonymous$4 rfds;
  signed int count;
  signed int maxfd;
  signed int ret;
  unsigned char bufin[2048l] = { (unsigned char)0x00, (unsigned char)0x00, (unsigned char)0x86, (unsigned char)0xDD, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned char bufout[2048l];
  struct timeval timeout;
  void *p_ka_engine = (void *)0;
  enum anonymous$9 ka_status;
  enum anonymous$8 ka_ret;
  signed int ongoing = 1;
  unsigned int status;
  keepalive = (enum anonymous$0)(keepalive_interval != 0 ? TRUE : FALSE);
  if((signed int)keepalive == TRUE)
  {
    ka_ret=KA_init(&p_ka_engine, (unsigned int)(keepalive_interval * 1000), local_address_ipv6, keepalive_address, 10);
    if(!((signed int)ka_ret == KA_SUCCESS))
      return (unsigned int)(20 | 8 << 16);

    ka_ret=KA_start(p_ka_engine);
    if((signed int)ka_ret == KA_SUCCESS)
      goto __CPROVER_DUMP_L2;

    KA_destroy(&p_ka_engine);
    return (unsigned int)(20 | 8 << 16);
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    while(ongoing == 1)
    {
      status = (unsigned int)(0 | 0 << 16);
      signed int return_value_tspCheckForStopOrWait$1;
      return_value_tspCheckForStopOrWait$1=tspCheckForStopOrWait((const unsigned int)0);
      if(!(return_value_tspCheckForStopOrWait$1 == 0))
        ongoing = 0;

      if((signed int)keepalive == TRUE)
      {
        if(ongoing == 0)
          KA_stop(p_ka_engine);

        ka_status=KA_qry_status(p_ka_engine);
        switch((signed int)ka_status)
        {
          case KA_STAT_ONGOING:

          case KA_STAT_FIN_SUCCESS:
            break;
          case KA_STAT_FIN_TIMEOUT:
          {
            KA_stop(p_ka_engine);
            status = (unsigned int)(21 | 8 << 16);
            break;
          }
          case KA_STAT_INVALID:

          case KA_STAT_FIN_ERROR:

          default:
          {
            KA_stop(p_ka_engine);
            status = (unsigned int)(20 | 8 << 16);
          }
        }
        timeout.tv_sec = (signed long int)0;
        timeout.tv_usec = (signed long int)500000;
      }

      else
      {
        timeout.tv_sec = (signed long int)(7 * 24 * 60 * 60);
        timeout.tv_usec = (signed long int)0;
      }
      if(!((65535u & status) == 0u) || !(ongoing == 1))
        goto done;

      do
      {
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$4) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rfds)->__fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      (&rfds)->__fds_bits[(signed long int)(tunfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rfds)->__fds_bits[(signed long int)(tunfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)1 << tunfd % (8 * (signed int)sizeof(signed long int) /*8ul*/ );
      (&rfds)->__fds_bits[(signed long int)(Socket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rfds)->__fds_bits[(signed long int)(Socket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)1 << Socket % (8 * (signed int)sizeof(signed long int) /*8ul*/ );
      maxfd = tunfd > Socket ? tunfd : Socket;
      ret=select(maxfd + 1, &rfds, (struct anonymous$4 *)(void *)0, (struct anonymous$4 *)(void *)0, &timeout);
      if(ret >= 1)
      {
        if(!((rfds.__fds_bits[(signed long int)(tunfd / 8)] & 1l << tunfd % 8) == 0l))
        {
          signed long int return_value_read$2;
          return_value_read$2=read(tunfd, (void *)bufout, sizeof(unsigned char [2048l]) /*2048ul*/ );
          count = (signed int)return_value_read$2;
          if(count == -1)
          {
            Display(1, (enum tSeverityLevel)ELError, "TunMainLoop", "Failed to read from tunnel device.");
            status = (unsigned int)(23 | 8 << 16);
            goto done;
          }

          signed long int return_value_send$3;
          return_value_send$3=send(Socket, (const void *)(bufout + (signed long int)4), (unsigned long int)(count - 4), 0);
          if(!(return_value_send$3 == (signed long int)(count + -4)))
          {
            Display(1, (enum tSeverityLevel)ELError, "TunMainLoop", "Failed to write on network socket.");
            status = (unsigned int)(23 | 8 << 16);
            goto done;
          }

        }

        if(!((rfds.__fds_bits[(signed long int)(Socket / 8)] & 1l << Socket % 8) == 0l))
        {
          signed long int return_value_recvfrom$4;
          return_value_recvfrom$4=recvfrom(Socket, (void *)(bufin + (signed long int)4), (unsigned long int)(2048 - 4), 0, (struct sockaddr *)(void *)0, (unsigned int *)(void *)0);
          count = (signed int)return_value_recvfrom$4;
          signed long int return_value_write$5;
          return_value_write$5=write(tunfd, (const void *)bufin, (unsigned long int)(count + 4));
          if(!(return_value_write$5 == (signed long int)(4 + count)))
          {
            Display(1, (enum tSeverityLevel)ELError, "TunMainLoop", "Failed to write to tunnel device.");
            status = (unsigned int)(23 | 8 << 16);
            goto done;
          }

        }

      }

    }
    status = (unsigned int)(0 | 0 << 16);

  done:
    ;
    if((signed int)keepalive == TRUE)
      KA_destroy(&p_ka_engine);

    return status;
  }
}

// XMLParse
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xmlparse.h line 67
extern signed int XMLParse(char *str, struct stNode *nodes)
{
  char *string;
  signed int pos;
  signed int simple;
  char *tagName;
  char *attrName;
  char *attrValue;
  char *endTag;
  struct stNode *n;
  struct stAttribute *a;
  char endToken[100l];
  signed int res;
  if(!(debug == 0))
    printf("Beginning of XMLParse\n");

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
  string = (char *)return_value_malloc$2;
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  const unsigned short int **return_value___ctype_b_loc$6;
  if(string == ((char *)NULL))
  {
    fprintf(stderr, "xmlparse: Error malloc\n");
    return -1;
  }

  else
  {
    strcpy(string, str);
    pos = 0;
    while(!(string[(signed long int)pos] == 0))
    {
      simple = 0;
      pos=SkipBlanks(string, pos);
      if((signed int)string[(signed long int)pos] == 0)
      {
        free((void *)string);
        return 0;
      }

      if(!((signed int)string[(signed long int)pos] == 60))
      {
        free((void *)string);
        return pos;
      }

      pos = pos + 1;
      const unsigned short int **return_value___ctype_b_loc$3;
      return_value___ctype_b_loc$3=__ctype_b_loc();
      if((1024 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)string[(signed long int)pos]]) == 0)
      {
        free((void *)string);
        return pos;
      }

      tagName = &string[(signed long int)pos];
      for( ; !(string[(signed long int)pos] == 0); pos = pos + 1)
      {
        return_value___ctype_b_loc$4=__ctype_b_loc();
        if((8 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)string[(signed long int)pos]]) == 0)
        {
          if(!((signed int)string[(signed long int)pos] == 95))
            break;

        }

      }
      if(string[(signed long int)pos] == 0)
      {
        free((void *)string);
        return pos;
      }

      if((signed int)string[(signed long int)pos] == 47)
      {
        simple = 1;
        string[(signed long int)pos] = (char)0;
        pos = pos + 1;
        if(!((signed int)string[(signed long int)pos] == 62))
        {
          free((void *)string);
          return pos;
        }

        string[(signed long int)pos] = (char)0;
      }

      else
        if((signed int)string[(signed long int)pos] == 32)
        {
          string[(signed long int)pos] = (char)0;
          pos = pos + 1;
        }

        else
          if((signed int)string[(signed long int)pos] == 62)
            string[(signed long int)pos] = (char)0;

          else
          {
            free((void *)string);
            return pos;
          }
      if(*tagName == 0)
      {
        free((void *)string);
        return pos;
      }

      if(!(debug == 0))
        printf("tagName = %s\n", tagName);

      n=findNode(tagName, nodes);
      if(!(n == ((struct stNode *)NULL)))
      {
        if(!(debug == 0))
          printf("Found corresponding structure: %s\n", n->name);

        if((signed int)string[(signed long int)pos] == 0)
          pos = pos + 1;

        else
        {
          pos=SkipBlanks(string, pos);
          do
          {
            return_value___ctype_b_loc$5=__ctype_b_loc();
            if((1024 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)string[(signed long int)pos]]) == 0)
              break;

            attrName = &string[(signed long int)pos];
            for( ; !(string[(signed long int)pos] == 0); pos = pos + 1)
            {
              return_value___ctype_b_loc$6=__ctype_b_loc();
              if((8 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)string[(signed long int)pos]]) == 0)
              {
                if(!((signed int)string[(signed long int)pos] == 95))
                  break;

              }

            }
            if(!((signed int)string[(signed long int)pos] == 61))
            {
              free((void *)string);
              return pos;
            }

            string[(signed long int)pos] = (char)0;
            pos = pos + 1;
            a=findAttribute(attrName, n->attributes);
            if(!(debug == 0))
              printf("Attribute %sfound in structure: %s", a == (struct stAttribute *)(void *)0 ? "not " : "", attrName);

            if(!((signed int)string[(signed long int)pos] == 34))
            {
              free((void *)string);
              return pos;
            }

            pos = pos + 1;
            attrValue = &string[(signed long int)pos];
            for( ; !(string[(signed long int)pos] == 0); pos = pos + 1)
            {
              if((signed int)string[(signed long int)pos] == 10)
                break;

              if((signed int)string[(signed long int)pos] == 13)
                break;

              if((signed int)string[(signed long int)pos] == 62)
                break;

              if((signed int)string[(signed long int)pos] == 34)
                break;

            }
            if(!((signed int)string[(signed long int)pos] == 34))
            {
              free((void *)string);
              return pos;
            }

            string[(signed long int)pos] = (char)0;
            pos = pos + 1;
            if(!(a == ((struct stAttribute *)NULL)))
              a->value = attrValue;

            pos=SkipBlanks(string, pos);
          }
          while((_Bool)1);
          if((signed int)string[(signed long int)pos] == 47)
          {
            simple = 1;
            pos = pos + 1;
          }

          if((signed int)string[(signed long int)pos] == 62)
            pos = pos + 1;

          else
          {
            free((void *)string);
            return pos;
          }
        }
      }

      else
      {
        if(!(debug == 0))
          printf("No structure definition: %s\n", tagName);

        if((signed int)string[(signed long int)pos] == 0)
          pos = pos + 1;

        else
        {
          for( ; !(string[(signed long int)pos] == 0); pos = pos + 1)
            if((signed int)string[(signed long int)pos] == 62)
              break;

          if((signed int)string[(signed long int)pos] == 62)
            pos = pos + 1;

        }
        if((signed int)string[(signed long int)pos] == 0)
        {
          if(simple == 0)
          {
            free((void *)string);
            return pos;
          }

        }

      }
      if(!(simple == 0))
      {
        if(!(n == ((struct stNode *)NULL)))
        {
          if(!(n->p == ((signed int (*)(struct stNode *, char *))NULL)))
          {
            res=n->p(n, &string[(signed long int)pos]);
            if(!(res == 0))
            {
              free((void *)string);
              if(res >= 1)
                res = res + pos;

              return res;
            }

          }

        }

      }

      else
      {
        strcpy(endToken, "</");
        strcat(endToken, tagName);
        strcat(endToken, ">");
        endTag=strstr(&string[(signed long int)pos], endToken);
        if(!(debug == 0))
          printf("Computed end tag: %s\n", (const void *)endToken);

        if(!(endTag == ((char *)NULL)))
        {
          if(!(debug == 0))
            printf("Found node end: %s\n", (const void *)endToken);

          *endTag = (char)0;
          if(!(n == ((struct stNode *)NULL)))
          {
            if(!(n->p == ((signed int (*)(struct stNode *, char *))NULL)))
            {
              res=n->p(n, &string[(signed long int)pos]);
              if(!(res == 0))
              {
                free((void *)string);
                if(res >= 1)
                  res = res + pos;

                return res;
              }

            }

          }

          unsigned long int return_value_strlen$7;
          return_value_strlen$7=strlen(endToken);
          pos = (signed int)(endTag - string) + (signed int)return_value_strlen$7;
        }

        else
        {
          free((void *)string);
          return pos;
        }
      }
    }
    free((void *)string);
    return 0;
  }
}

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32$1;
  return_value___builtin_bswap32$1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32$1;
}

// __bswap_32$link1
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link1(unsigned int __bsx$link1)
{
  signed long int return_value___builtin_bswap32$1$link1;
  return_value___builtin_bswap32$1$link1=__builtin_bswap32((signed long int)__bsx$link1);
  return (unsigned int)return_value___builtin_bswap32$1$link1;
}

// __bswap_32$link2
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link2(unsigned int __bsx$link2)
{
  signed long int return_value___builtin_bswap32$1$link2;
  return_value___builtin_bswap32$1$link2=__builtin_bswap32((signed long int)__bsx$link2);
  return (unsigned int)return_value___builtin_bswap32$1$link2;
}

// __bswap_32$link3
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32$link3(unsigned int __bsx$link3)
{
  signed long int return_value___builtin_bswap32$1$link3;
  return_value___builtin_bswap32$1$link3=__builtin_bswap32((signed long int)__bsx$link3);
  return (unsigned int)return_value___builtin_bswap32$1$link3;
}

// _calc_icmp_csum
// file icmp_echo_engine.c line 604
void _calc_icmp_csum(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct __ICMP_ECHO_HEADER *icmp_hdr)
{
  struct __IP6_PSEUDO_HEADER *ip6_pseudo;
  unsigned char pseudo_buf[(signed long int)(sizeof(struct timeval) * 4) /*64l*/ ];
  const unsigned short int pseudo_buf_len = (const unsigned short int)sizeof(unsigned char [64l]) /*64ul*/ ;
  if(p_engine->icmp_saf == 10)
  {
    memset((void *)pseudo_buf, 0, (unsigned long int)pseudo_buf_len);
    ip6_pseudo = (struct __IP6_PSEUDO_HEADER *)pseudo_buf;
    memcpy((void *)&ip6_pseudo->ip6_src, (const void *)&p_engine->echo_addr_src.in6.sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
    memcpy((void *)&ip6_pseudo->ip6_dst, (const void *)&p_engine->echo_addr_dst.in6.sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
    ip6_pseudo->hdr_len=__bswap_32$link2((unsigned int)(sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/  + sizeof(struct timeval) /*16ul*/ ));
    ip6_pseudo->nxt_hdr = (unsigned char)58;
    memcpy((void *)ip6_pseudo->icmp_hdr, (const void *)icmp_hdr, sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/  + sizeof(struct timeval) /*16ul*/ );
    icmp_hdr->icmp_cksm=in_cksum((unsigned short int *)ip6_pseudo, (signed int)pseudo_buf_len);
  }

  else
    icmp_hdr->icmp_cksm=in_cksum((unsigned short int *)icmp_hdr, (signed int)(sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/  + sizeof(struct timeval) /*16ul*/ ));
}

// _compare_tv
// file icmp_echo_engine.c line 1334
double _compare_tv(struct timeval *tv_1, struct timeval *tv_2)
{
  return (double)(tv_1->tv_sec - tv_2->tv_sec) * 1000.0 + (double)(tv_1->tv_usec - tv_2->tv_usec) / 1000.0;
}

// _compute_echo_timeout
// file icmp_echo_engine.c line 1251
void _compute_echo_timeout(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_timeout)
{
  if((signed int)p_engine->eng_mode == IEE_MODE_ACD)
    p_engine->echo_timeout = p_engine->send_interval * (p_engine->echo_num - p_engine->count_send);

  tv_timeout->tv_sec = tv_timeout->tv_sec + (signed long int)(p_engine->echo_timeout / (unsigned int)1000);
  tv_timeout->tv_usec = tv_timeout->tv_usec + (signed long int)((p_engine->echo_timeout % (unsigned int)1000) * (unsigned int)1000);
  for( ; tv_timeout->tv_usec >= 1000001l; tv_timeout->tv_sec = tv_timeout->tv_sec + 1l)
    tv_timeout->tv_usec = tv_timeout->tv_usec - (signed long int)1000000;
}

// _compute_next_send
// file icmp_echo_engine.c line 1233
void _compute_next_send(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_next_send)
{
  tv_next_send->tv_sec = tv_next_send->tv_sec + (signed long int)(p_engine->send_interval / (unsigned int)1000);
  tv_next_send->tv_usec = tv_next_send->tv_usec + (signed long int)((p_engine->send_interval % (unsigned int)1000) * (unsigned int)1000);
}

// _compute_tv_diff_now
// file icmp_echo_engine.c line 1312
double _compute_tv_diff_now(struct timeval *tv_diff)
{
  struct timeval tv_now;
  gettimeofday(&tv_now, (struct timezone *)(void *)0);
  double return_value__compare_tv$1;
  return_value__compare_tv$1=_compare_tv(tv_diff, &tv_now);
  return return_value__compare_tv$1;
}

// _conv_ms_to_tv
// file icmp_echo_engine.c line 1286
void _conv_ms_to_tv(double ms, struct timeval *tv)
{
  if(ms > 0.0)
  {
    tv->tv_sec = (signed long int)((unsigned int)ms / (unsigned int)1000);
    tv->tv_usec = (signed long int)(unsigned int)((ms - (double)(tv->tv_sec * (signed long int)1000)) * 1000.0);
  }

  else
    memset((void *)tv, 0, sizeof(struct timeval) /*16ul*/ );
}

// _create_insert_echo_event
// file icmp_echo_engine.c line 1090
struct __ECHO_EVENT * _create_insert_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_sent, unsigned int echo_seq)
{
  struct __ECHO_EVENT *p_event = (struct __ECHO_EVENT *)(void *)0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct __ECHO_EVENT) /*32ul*/ );
  p_event = (struct __ECHO_EVENT *)return_value_malloc$1;
  if(!(p_event == ((struct __ECHO_EVENT *)NULL)))
  {
    p_event->next = (struct __ECHO_EVENT *)(void *)0;
    p_event->echo_seq = echo_seq;
    memcpy((void *)&p_event->tv_timeout, (const void *)tv_sent, sizeof(struct timeval) /*16ul*/ );
    _compute_echo_timeout(p_engine, &p_event->tv_timeout);
    _insert_echo_event(p_engine, p_event);
  }

  return p_event;
}

// _create_ka_engine
// file net_ka.c line 323
enum anonymous$25 _create_ka_engine(struct __KA_ENGINE_PARMS **pp_engine)
{
  _Bool tmp_if_expr$1;
  if(pp_engine == ((struct __KA_ENGINE_PARMS **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *pp_engine != (struct __KA_ENGINE_PARMS *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (enum anonymous$25)KA_INVALID_PARMS;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct __KA_ENGINE_PARMS) /*24ul*/ );
    *pp_engine = (struct __KA_ENGINE_PARMS *)return_value_malloc$2;
    if(*pp_engine == ((struct __KA_ENGINE_PARMS *)NULL))
      return (enum anonymous$25)KA_RESOURCE_STARVATION;

    else
    {
      (*pp_engine)->ka_thread_id = (unsigned long int)0;
      (*pp_engine)->ka_status = (enum anonymous$9)KA_STAT_INVALID;
      (*pp_engine)->p_echo_engine = (void *)0;
      return (enum anonymous$25)KA_PRIV_SUCCESS;
    }
  }
}

// _decode_icmp_packet
// file icmp_echo_engine.c line 902
enum anonymous$32 _decode_icmp_packet(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, unsigned char *pkt_data, unsigned int pkt_len, unsigned int *echo_seq)
{
  struct __ICMP_ECHO_HEADER *icmp_hdr = (struct __ICMP_ECHO_HEADER *)(void *)0;
  unsigned char ip_ver;
  unsigned char ip_len = (unsigned char)0;
  double rtt;
  enum anonymous$32 priv_retval = (enum anonymous$32)ANAL_PACKET_PINGIN_ONTIME;
  do
  {
    if(p_engine->icmp_saf == 2)
    {
      ip_ver = (unsigned char)(((signed int)pkt_data[(signed long int)0] & 0xF0) >> 4);
      if(!((signed int)ip_ver == 0x04))
      {
        priv_retval = (enum anonymous$32)ANAL_PACKET_BAD;
        goto __CPROVER_DUMP_L21;
      }

      ip_len = (unsigned char)(((signed int)pkt_data[(signed long int)0] & 0x0F) << 2);
      if(!((unsigned long int)(pkt_len + -((unsigned int)ip_len)) >= sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/ ))
      {
        priv_retval = (enum anonymous$32)ANAL_PACKET_BAD;
        goto __CPROVER_DUMP_L21;
      }

      icmp_hdr = (struct __ICMP_ECHO_HEADER *)(pkt_data + (signed long int)ip_len);
      switch((signed int)icmp_hdr->icmp_type)
      {
        case 0:
          break;
        case 8:
        {
          priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
          break;
        }
        default:
          priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
      }
    }

    else
      if(p_engine->icmp_saf == 10)
      {
        if(!((unsigned long int)pkt_len >= sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/ ))
        {
          priv_retval = (enum anonymous$32)ANAL_PACKET_BAD;
          goto __CPROVER_DUMP_L21;
        }

        icmp_hdr = (struct __ICMP_ECHO_HEADER *)pkt_data;
        switch((signed int)icmp_hdr->icmp_type)
        {
          case 129:
            break;
          case 128:
          {
            priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
            break;
          }
          case 134:
          {
            priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
            break;
          }
          case 135:
          {
            priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
            break;
          }
          case 136:
          {
            priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
            break;
          }
          default:
            priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
        }
      }

    if(!((signed int)priv_retval == ANAL_PACKET_PINGIN_ONTIME))
      break;

    if(!((signed int)icmp_hdr->icmp_code == 0))
    {
      priv_retval = (enum anonymous$32)IEE_GENERAL_ECHO_ERROR;
      break;
    }

    if(!((unsigned int)icmp_hdr->echo_id == p_engine->icmp_echo_id))
    {
      priv_retval = (enum anonymous$32)ANAL_PACKET_IGNORED;
      break;
    }

    *echo_seq = (unsigned int)icmp_hdr->echo_seq;
    double return_value__compute_tv_diff_now$1;
    return_value__compute_tv_diff_now$1=_compute_tv_diff_now((struct timeval *)icmp_hdr->echo_data);
    rtt = -return_value__compute_tv_diff_now$1;
    if(rtt > (double)p_engine->echo_timeout)
      priv_retval = (enum anonymous$32)ANAL_PACKET_PINGIN_LATE;

    if(!(p_engine->clbk_recv == ((void (*)(double))NULL)))
      p_engine->clbk_recv(rtt);

  }
  while((_Bool)0);

__CPROVER_DUMP_L21:
  ;
  return priv_retval;
}

// _destroy_ka_engine
// file net_ka.c line 358
enum anonymous$25 _destroy_ka_engine(struct __KA_ENGINE_PARMS **pp_engine)
{
  _Bool tmp_if_expr$1;
  if(pp_engine == ((struct __KA_ENGINE_PARMS **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *pp_engine == (struct __KA_ENGINE_PARMS *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (enum anonymous$25)KA_INVALID_PARMS;

  else
  {
    free((void *)*pp_engine);
    *pp_engine = (struct __KA_ENGINE_PARMS *)(void *)0;
    return (enum anonymous$25)KA_PRIV_SUCCESS;
  }
}

// _do_read
// file icmp_echo_engine.c line 812
enum anonymous$32 _do_read(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_delay, unsigned int *echo_seq)
{
  unsigned char read_buf[2048l];
  struct anonymous$4 fs;
  signed int ret;
  enum anonymous$32 retval;
  do
  {
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$4) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fs)->__fds_bits[(signed long int)0]) : "memory");
  }
  while((_Bool)0);
  (&fs)->__fds_bits[(signed long int)(p_engine->icmp_sfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fs)->__fds_bits[(signed long int)(p_engine->icmp_sfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)1 << p_engine->icmp_sfd % (8 * (signed int)sizeof(signed long int) /*8ul*/ );
  ret=select((signed int)p_engine->icmp_sfd + 1, &fs, (struct anonymous$4 *)(void *)0, (struct anonymous$4 *)(void *)0, tv_delay);
  signed long int return_value_recv$1;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$3;
  _Bool tmp_if_expr$4;
  switch(ret)
  {
    case 0:
    {
      retval = (enum anonymous$32)READ_SELECT_TIMEOUT;
      break;
    }
    case 1:
    {
      return_value_recv$1=recv(p_engine->icmp_sfd, (void *)read_buf, sizeof(unsigned char [2048l]) /*2048ul*/ , 0);
      ret = (signed int)return_value_recv$1;
      if(ret >= 1)
        retval=_decode_icmp_packet(p_engine, read_buf, (unsigned int)ret, echo_seq);

      else
      {
        if(ret == -1)
          tmp_if_expr$2 = (signed int)p_engine->eng_ongoing == 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
          retval = (enum anonymous$32)READ_SOCKET_CLOSED;

        else
          retval = (enum anonymous$32)READ_RECV_ERROR;
      }
      break;
    }
    default:
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      if(*return_value___errno_location$5 == 4)
        retval = (enum anonymous$32)READ_SELECT_TIMEOUT;

      else
      {
        return_value___errno_location$3=__errno_location();
        if(*return_value___errno_location$3 == 9)
          tmp_if_expr$4 = (signed int)p_engine->eng_ongoing == 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
          retval = (enum anonymous$32)READ_SOCKET_CLOSED;

        else
          retval = (enum anonymous$32)READ_SELECT_ERROR;
      }
    }
  }
  return retval;
}

// _do_read_wrap
// file icmp_echo_engine.c line 661
enum anonymous$26 _do_read_wrap(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct timeval *tv_ref)
{
  double time_left_ms;
  double read_delay;
  struct timeval tv_delay;
  unsigned int echo_seq_read;
  enum anonymous$32 priv_retval;
  enum anonymous$26 retval = (enum anonymous$26)IEE_SUCCESS;
  time_left_ms=_compute_tv_diff_now(tv_ref);
  _Bool tmp_if_expr$1;
  if(time_left_ms <= 0.0)
    return (enum anonymous$26)IEE_SUCCESS;

  else
  {
    while((_Bool)1)
    {
      if(!(p_engine->event_list == ((struct __ECHO_EVENT *)NULL)))
        read_delay=_compute_tv_diff_now(&p_engine->event_list->tv_timeout);

      else
        read_delay = (double)p_engine->send_interval;
      _conv_ms_to_tv(time_left_ms < read_delay ? time_left_ms : read_delay, &tv_delay);
      priv_retval=_do_read(p_engine, &tv_delay, &echo_seq_read);
      switch((signed int)priv_retval)
      {
        case ANAL_PACKET_BAD:

        case ANAL_PACKET_IGNORED:
          break;
        case READ_SELECT_TIMEOUT:
        {
          if(time_left_ms > read_delay)
          {
            if(!(p_engine->event_list == ((struct __ECHO_EVENT *)NULL)))
            {
              p_engine->count_late = p_engine->count_late + 1u;
              p_engine->count_consec_late = p_engine->count_consec_late + 1;
              _remove_free_echo_event(p_engine, p_engine->event_list->echo_seq);
            }

          }

          break;
        }
        case ANAL_PACKET_PINGIN_ONTIME:
        {
          p_engine->count_consec_late = (unsigned char)0;
          p_engine->count_ontime = p_engine->count_ontime + 1u;
          priv_retval=_remove_free_echo_event(p_engine, echo_seq_read);
          if(!((signed int)priv_retval == ECHO_EVENT_REMOVED))
            p_engine->count_late = p_engine->count_late - 1u;

          if((signed int)(enum anonymous$28)p_engine->eng_mode == IEE_MODE_ACD)
          {
            p_engine->eng_ongoing = (unsigned char)0;
            retval = (enum anonymous$26)IEE_CONNECTIVITY_ASSESSED;
          }

        }
        case ANAL_PACKET_PINGIN_LATE:
        {
          if(!(p_engine->echo_num == 0u))
          {
            if(p_engine->count_send >= p_engine->echo_num)
              p_engine->eng_ongoing = (unsigned char)0;

          }

          break;
        }
        case READ_SOCKET_CLOSED:
        {
          p_engine->eng_ongoing = (unsigned char)0;
          retval = (enum anonymous$26)IEE_SUCCESS;
          break;
        }
        case READ_SELECT_ERROR:

        case READ_RECV_ERROR:

        default:
        {
          p_engine->eng_ongoing = (unsigned char)0;
          retval = (enum anonymous$26)IEE_GENERAL_ECHO_ERROR;
        }
      }
      if((unsigned int)p_engine->count_consec_late >= p_engine->echo_timeout_threshold)
      {
        retval = (enum anonymous$26)IEE_GENERAL_ECHO_TIMEOUT;
        p_engine->eng_ongoing = (unsigned char)0;
      }

      time_left_ms=_compute_tv_diff_now(tv_ref);
      if(time_left_ms > 0.0)
        tmp_if_expr$1 = (signed int)p_engine->eng_ongoing == 1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
        break;

    }
    return retval;
  }
}

// _do_send
// file icmp_echo_engine.c line 533
enum anonymous$32 _do_send(struct __ICMP_ECHO_ENGINE_PARMS *p_engine)
{
  struct __ICMP_ECHO_HEADER *icmp_hdr;
  unsigned char send_buf[(signed long int)(sizeof(struct __ICMP_ECHO_HEADER) * 3) /*24l*/ ];
  const unsigned short int send_buf_len = (const unsigned short int)(sizeof(struct __ICMP_ECHO_HEADER) /*8ul*/  + sizeof(struct timeval) /*16ul*/ );
  enum anonymous$32 retval = (enum anonymous$32)SEND_PINGOUT_SUCCESS;
  signed int ret;
  icmp_hdr = (struct __ICMP_ECHO_HEADER *)send_buf;
  if(p_engine->icmp_saf == 2)
    icmp_hdr->icmp_type = (unsigned char)8;

  else
    icmp_hdr->icmp_type = (unsigned char)128;
  icmp_hdr->icmp_code = (unsigned char)0;
  icmp_hdr->icmp_cksm = (unsigned short int)0;
  icmp_hdr->echo_id = (unsigned short int)p_engine->icmp_echo_id;
  unsigned int tmp_post$1 = p_engine->count_send;
  p_engine->count_send = p_engine->count_send + 1u;
  icmp_hdr->echo_seq = (unsigned short int)tmp_post$1;
  gettimeofday((struct timeval *)icmp_hdr->echo_data, (struct timezone *)(void *)0);
  _calc_icmp_csum(p_engine, icmp_hdr);
  struct __ECHO_EVENT *return_value__create_insert_echo_event$3;
  return_value__create_insert_echo_event$3=_create_insert_echo_event(p_engine, (struct timeval *)icmp_hdr->echo_data, (unsigned int)icmp_hdr->echo_seq);
  if(!(return_value__create_insert_echo_event$3 == ((struct __ECHO_EVENT *)NULL)))
  {
    signed long int return_value_sendto$2;
    return_value_sendto$2=sendto(p_engine->icmp_sfd, (const void *)send_buf, (unsigned long int)send_buf_len, 0, (struct sockaddr *)&p_engine->echo_addr_dst, (unsigned int)sizeof(union anonymous$31) /*28ul*/ );
    ret = (signed int)return_value_sendto$2;
    if(!(ret == (signed int)send_buf_len))
      retval = (enum anonymous$32)SEND_PINGOUT_ERROR;

    else
      if(!(p_engine->clbk_send == ((void (*)(void))NULL)))
        p_engine->clbk_send();

  }

  else
    retval = (enum anonymous$32)SEND_MEMORY_STARVATION;
  return retval;
}

// _do_send_wrap
// file icmp_echo_engine.c line 490
enum anonymous$26 _do_send_wrap(struct __ICMP_ECHO_ENGINE_PARMS *p_engine)
{
  enum anonymous$32 priv_retval;
  enum anonymous$26 retval;
  priv_retval=_do_send(p_engine);
  switch((signed int)priv_retval)
  {
    case SEND_PINGOUT_SUCCESS:
    {
      retval = (enum anonymous$26)IEE_SUCCESS;
      break;
    }
    case SEND_MEMORY_STARVATION:
    {
      retval = (enum anonymous$26)IEE_RESOURCE_STARVATION;
      break;
    }
    case SEND_PINGOUT_ERROR:

    default:
      retval = (enum anonymous$26)IEE_GENERAL_ECHO_ERROR;
  }
  return retval;
}

// _free_echo_event_list
// file icmp_echo_engine.c line 1209
void _free_echo_event_list(struct __ECHO_EVENT *p_event)
{
  if(!(p_event == ((struct __ECHO_EVENT *)NULL)))
  {
    _free_echo_event_list(p_event->next);
    free((void *)p_event);
  }

}

// _insert_echo_event
// file icmp_echo_engine.c line 1124
void _insert_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, struct __ECHO_EVENT *p_event_insert)
{
  struct __ECHO_EVENT **pp_event = &p_engine->event_list;
  while((_Bool)1)
  {
    if(*pp_event == ((struct __ECHO_EVENT *)NULL))
    {
      *pp_event = p_event_insert;
      p_event_insert->next = (struct __ECHO_EVENT *)(void *)0;
      goto __CPROVER_DUMP_L5;
    }

    double return_value__compare_tv$1;
    return_value__compare_tv$1=_compare_tv(&p_event_insert->tv_timeout, &(*pp_event)->tv_timeout);
    if(return_value__compare_tv$1 > 0.0)
      pp_event = &(*pp_event)->next;

    else
    {
      p_event_insert->next = *pp_event;
      (*pp_event)->next = p_event_insert;
      break;
    }
  }

__CPROVER_DUMP_L5:
  ;
}

// _ka_recv_callback
// file net_ka.c line 464
void _ka_recv_callback(double rtt)
{
  Display(3, (enum tSeverityLevel)ELInfo, "_ka_recv_callback", "Keepalive reply received. Roundtrip time: %.3fms", rtt);
}

// _ka_send_callback
// file net_ka.c line 449
void _ka_send_callback(void)
{
  Display(3, (enum tSeverityLevel)ELInfo, "_ka_send_callback", "Keepalive request sent.");
}

// _ka_start_thread
// file net_ka.c line 384
void * _ka_start_thread(void *arg)
{
  struct __KA_ENGINE_PARMS *p_ka_engine = (struct __KA_ENGINE_PARMS *)arg;
  enum anonymous$26 iee_ret;
  if(!(p_ka_engine == ((struct __KA_ENGINE_PARMS *)NULL)))
  {
    iee_ret=IEE_process(p_ka_engine->p_echo_engine);
    switch((signed int)iee_ret)
    {
      case IEE_SUCCESS:
      {
        p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_FIN_SUCCESS;
        Display(3, (enum tSeverityLevel)ELInfo, "_ka_start_thread", "Keepalive processing stopped: Keepalive engine was explicitly stopped.");
        break;
      }
      case IEE_GENERAL_ECHO_TIMEOUT:
      {
        p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_FIN_TIMEOUT;
        Display(1, (enum tSeverityLevel)ELWarning, "_ka_start_thread", "Keepalive processing stopped: General timeout detected.");
        break;
      }
      case IEE_INVALID_PARMS:
      {
        p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_FIN_ERROR;
        Display(1, (enum tSeverityLevel)ELError, "_ka_start_thread", "Keepalive processing stopped: Invalid pointer.");
        break;
      }
      case IEE_GENERAL_ECHO_ERROR:
      {
        p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_FIN_ERROR;
        Display(1, (enum tSeverityLevel)ELError, "_ka_start_thread", "Keepalive processing stopped: Networking error.");
        break;
      }
      default:
      {
        p_ka_engine->ka_status = (enum anonymous$9)KA_STAT_FIN_ERROR;
        Display(1, (enum tSeverityLevel)ELError, "_ka_start_thread", "Keepalive processing stopped: Unknown or unhandled error.");
      }
    }
  }

  else
    Display(1, (enum tSeverityLevel)ELError, "_ka_start_thread", "Keepalive processing stopped: Invalid pointer.");
  pthread_exit(NULL);
  return NULL;
}

// _remove_free_echo_event
// file icmp_echo_engine.c line 1171
enum anonymous$32 _remove_free_echo_event(struct __ICMP_ECHO_ENGINE_PARMS *p_engine, unsigned int echo_seq)
{
  enum anonymous$32 priv_retval = (enum anonymous$32)ECHO_EVENT_NOTFOUND;
  struct __ECHO_EVENT **pp_event = &p_engine->event_list;
  struct __ECHO_EVENT *p_event_to_free = (struct __ECHO_EVENT *)(void *)0;
  for( ; !(*pp_event == ((struct __ECHO_EVENT *)NULL)); pp_event = &(*pp_event)->next)
    if((*pp_event)->echo_seq == echo_seq)
    {
      p_event_to_free = *pp_event;
      *pp_event = (*pp_event)->next;
      free((void *)p_event_to_free);
      priv_retval = (enum anonymous$32)ECHO_EVENT_REMOVED;
      break;
    }

  return priv_retval;
}

// add_dsakey_to_keyfile
// file tsp_auth_passdss.c line 228
signed int add_dsakey_to_keyfile(struct dsa_st *dsa, char *host, char *filename, enum anonymous$0 autoaccept)
{
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  struct anonymous buf;
  char *str = (char *)(void *)0;
  signed int ret = 0;
  signed int return_value_is_dsakey_in_keyfile$1;
  return_value_is_dsakey_in_keyfile$1=is_dsakey_in_keyfile(dsa, host, filename);
  unsigned long int return_value_buffer_len$3;
  void *return_value_malloc$4;
  void *return_value_buffer_ptr$5;
  unsigned long int return_value_buffer_len$6;
  signed int return_value_base64encode$7;
  switch(return_value_is_dsakey_in_keyfile$1)
  {
    case 0:
    {
      Display(3, (enum tSeverityLevel)ELInfo, "PASSDSS-3DES-1", "Failed key verification.");
      Display(3, (enum tSeverityLevel)ELWarning, "PASSDSS-3DES-1", "Server key rejected.");
      break;
    }
    case 1:
    {
      if(autoaccept == /*enum*/FALSE)
      {
        signed int return_value_ask$2;
        return_value_ask$2=ask("%s is an unknown host, do you want to add its key?", host);
        if(return_value_ask$2 == 0)
        {
          Display(3, (enum tSeverityLevel)ELWarning, "PASSDSS-3DES-1", "Server key rejected by the user.");
          break;
        }

      }

      else
        Display(1, (enum tSeverityLevel)ELWarning, "PASSDSS-3DES-1", "Server key has been automatically added.");
      Display(2, (enum tSeverityLevel)ELInfo, "PASSDSS-3DES-1", "Server key accepted and added.");
      buffer_init(&buf);
      if(buf.buf == ((unsigned char *)NULL))
        break;

      buffer_put_cstring(&buf, "ssh-dss");
      buffer_put_bignum(&buf, dsa->p);
      buffer_put_bignum(&buf, dsa->q);
      buffer_put_bignum(&buf, dsa->g);
      buffer_put_bignum(&buf, dsa->pub_key);
      return_value_buffer_len$3=buffer_len(&buf);
      return_value_malloc$4=malloc((unsigned long int)2 * return_value_buffer_len$3);
      str = (char *)return_value_malloc$4;
      if(str == ((char *)NULL))
        break;

      return_value_buffer_ptr$5=buffer_ptr(&buf);
      return_value_buffer_len$6=buffer_len(&buf);
      return_value_base64encode$7=base64encode(str, (const char *)return_value_buffer_ptr$5, (signed int)return_value_buffer_len$6);
      if(!(return_value_base64encode$7 >= 1))
        break;

      fp=fopen(filename, "a");
      if(!(fp == ((struct _IO_FILE *)NULL)))
      {
        fprintf(fp, "%s ssh-dss %s\n", host, str);
        fclose(fp);
        ret = 1;
      }

      buffer_free(&buf);
      free((void *)str);
      break;
    }
    case 2:
    {
      Display(2, (enum tSeverityLevel)ELInfo, "PASSDSS-3DES-1", "Matching server key found and used.");
      ret = 1;
      break;
    }
    case 3:
    {
      Display(1, (enum tSeverityLevel)ELError, "PASSDSS-3DES-1", "Local key stored in %s for host %s doesn't match host key. *NOT CONNECTING*", filename, host);
      Display(3, (enum tSeverityLevel)ELWarning, "PASSDSS-3DES-1", "Server key rejected.");
      ret = 0;
    }
  }
  return ret;
}

// ask
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/cli.h line 14
signed int ask(char *question, ...)
{
  void **ap;
  char *buf;
  signed int c;
  signed int ret;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)1024);
  buf = (char *)return_value_malloc$1;
  signed int tmp_statement_expression$2;
  signed int tmp_if_expr$4;
  const signed int **return_value___ctype_tolower_loc$3;
  const signed int **return_value___ctype_tolower_loc$5;
  if(buf == ((char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "ask", "Failed memory allocation.");
    return 0;
  }

  else
  {
    ap = (void **)&question;
    vsnprintf(buf, (unsigned long int)1024, question, ap);
    ap = ((void **)NULL);
    do
    {

    ask_again:
      ;
      printf("%s? (Y/N) ", buf);
      c=fgetc(stdin);
      fflush(stdin);
      signed int __res;
      __res=tolower$link1(c);
      tmp_statement_expression$2 = __res;
      c = tmp_statement_expression$2;
      if((signed int)(char)c == 121)
      {
        ret = 1;
        break;
      }

      if((signed int)(char)c == 110)
      {
        ret = 0;
        break;
      }

    }
    while((_Bool)1);
    free((void *)buf);
    return ret;
  }
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// atoi$link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link1(const char *__nptr$link1)
{
  signed long int return_value_strtol$1$link1;
  return_value_strtol$1$link1=strtol(__nptr$link1, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1$link1;
}

// atoi$link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link2(const char *__nptr$link2)
{
  signed long int return_value_strtol$1$link2;
  return_value_strtol$1$link2=strtol(__nptr$link2, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1$link2;
}

// atoi$link3
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link3(const char *__nptr$link3)
{
  signed long int return_value_strtol$1$link3;
  return_value_strtol$1$link3=strtol(__nptr$link3, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1$link3;
}

// atoi$link4
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link4(const char *__nptr$link4)
{
  signed long int return_value_strtol$1$link4;
  return_value_strtol$1$link4=strtol(__nptr$link4, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1$link4;
}

// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return return_value_strtol$1;
}

// base64decode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/base64.h line 14
signed int base64decode(char *bufplain, const char *bufcoded)
{
  signed int len;
  len=base64decode_binary((unsigned char *)bufplain, bufcoded);
  bufplain[(signed long int)len] = (char)0;
  return len;
}

// base64decode_binary
// file base64.c line 120
signed int base64decode_binary(unsigned char *bufplain, const char *bufcoded)
{
  signed int nbytesdecoded;
  const unsigned char *bufin;
  unsigned char *bufout;
  signed int nprbytes;
  bufin = (const unsigned char *)bufcoded;
  const unsigned char *tmp_post$1;
  do
  {
    tmp_post$1 = bufin;
    bufin = bufin + 1l;
    if((signed int)pr2six[(signed long int)*tmp_post$1] >= 64)
      break;

  }
  while((_Bool)1);
  nprbytes = (signed int)(bufin - (const unsigned char *)bufcoded) - 1;
  nbytesdecoded = ((nprbytes + 3) / 4) * 3;
  bufout = (unsigned char *)bufplain;
  bufin = (const unsigned char *)bufcoded;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  for( ; nprbytes >= 5; nprbytes = nprbytes - 4)
  {
    tmp_post$2 = bufout;
    bufout = bufout + 1l;
    *tmp_post$2 = (unsigned char)((signed int)pr2six[(signed long int)*bufin] << 2 | (signed int)pr2six[(signed long int)bufin[(signed long int)1]] >> 4);
    tmp_post$3 = bufout;
    bufout = bufout + 1l;
    *tmp_post$3 = (unsigned char)((signed int)pr2six[(signed long int)bufin[(signed long int)1]] << 4 | (signed int)pr2six[(signed long int)bufin[(signed long int)2]] >> 2);
    tmp_post$4 = bufout;
    bufout = bufout + 1l;
    *tmp_post$4 = (unsigned char)((signed int)pr2six[(signed long int)bufin[(signed long int)2]] << 6 | (signed int)pr2six[(signed long int)bufin[(signed long int)3]]);
    bufin = bufin + (signed long int)4;
  }
  unsigned char *tmp_post$5;
  if(nprbytes >= 2)
  {
    tmp_post$5 = bufout;
    bufout = bufout + 1l;
    *tmp_post$5 = (unsigned char)((signed int)pr2six[(signed long int)*bufin] << 2 | (signed int)pr2six[(signed long int)bufin[(signed long int)1]] >> 4);
  }

  unsigned char *tmp_post$6;
  if(nprbytes >= 3)
  {
    tmp_post$6 = bufout;
    bufout = bufout + 1l;
    *tmp_post$6 = (unsigned char)((signed int)pr2six[(signed long int)bufin[(signed long int)1]] << 4 | (signed int)pr2six[(signed long int)bufin[(signed long int)2]] >> 2);
  }

  unsigned char *tmp_post$7;
  if(nprbytes >= 4)
  {
    tmp_post$7 = bufout;
    bufout = bufout + 1l;
    *tmp_post$7 = (unsigned char)((signed int)pr2six[(signed long int)bufin[(signed long int)2]] << 6 | (signed int)pr2six[(signed long int)bufin[(signed long int)3]]);
  }

  nbytesdecoded = nbytesdecoded - (4 - nprbytes & 3);
  return nbytesdecoded;
}

// base64decode_len
// file base64.c line 93
signed int base64decode_len(const char *bufcoded)
{
  signed int nbytesdecoded;
  const unsigned char *bufin;
  signed int nprbytes;
  bufin = (const unsigned char *)bufcoded;
  const unsigned char *tmp_post$1;
  do
  {
    tmp_post$1 = bufin;
    bufin = bufin + 1l;
    if((signed int)pr2six[(signed long int)*tmp_post$1] >= 64)
      break;

  }
  while((_Bool)1);
  nprbytes = (signed int)(bufin - (const unsigned char *)bufcoded) - 1;
  nbytesdecoded = ((nprbytes + 3) / 4) * 3;
  return nbytesdecoded + 1;
}

// base64encode
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/base64.h line 17
signed int base64encode(char *encoded, const char *string, signed int len)
{
  signed int return_value_base64encode_binary$1;
  return_value_base64encode_binary$1=base64encode_binary(encoded, (const unsigned char *)string, len);
  return return_value_base64encode_binary$1;
}

// base64encode_binary
// file base64.c line 181
signed int base64encode_binary(char *encoded, const unsigned char *string, signed int len)
{
  signed int i;
  char *p = encoded;
  i = 0;
  char *tmp_post$1;
  char *tmp_post$2;
  char *tmp_post$3;
  char *tmp_post$4;
  for( ; !(i >= len + -2); i = i + 3)
  {
    tmp_post$1 = p;
    p = p + 1l;
    *tmp_post$1 = basis_64[(signed long int)((signed int)string[(signed long int)i] >> 2 & 0x3F)];
    tmp_post$2 = p;
    p = p + 1l;
    *tmp_post$2 = basis_64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4 | (signed int)((signed int)string[(signed long int)(i + 1)] & 0xF0) >> 4)];
    tmp_post$3 = p;
    p = p + 1l;
    *tmp_post$3 = basis_64[(signed long int)(((signed int)string[(signed long int)(i + 1)] & 0xF) << 2 | (signed int)((signed int)string[(signed long int)(i + 2)] & 0xC0) >> 6)];
    tmp_post$4 = p;
    p = p + 1l;
    *tmp_post$4 = basis_64[(signed long int)((signed int)string[(signed long int)(i + 2)] & 0x3F)];
  }
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  char *tmp_post$10;
  if(!(i >= len))
  {
    tmp_post$5 = p;
    p = p + 1l;
    *tmp_post$5 = basis_64[(signed long int)((signed int)string[(signed long int)i] >> 2 & 0x3F)];
    if(i == len + -1)
    {
      tmp_post$6 = p;
      p = p + 1l;
      *tmp_post$6 = basis_64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4)];
      tmp_post$7 = p;
      p = p + 1l;
      *tmp_post$7 = (char)61;
    }

    else
    {
      tmp_post$8 = p;
      p = p + 1l;
      *tmp_post$8 = basis_64[(signed long int)(((signed int)string[(signed long int)i] & 0x3) << 4 | (signed int)((signed int)string[(signed long int)(i + 1)] & 0xF0) >> 4)];
      tmp_post$9 = p;
      p = p + 1l;
      *tmp_post$9 = basis_64[(signed long int)(((signed int)string[(signed long int)(i + 1)] & 0xF) << 2)];
    }
    tmp_post$10 = p;
    p = p + 1l;
    *tmp_post$10 = (char)61;
  }

  char *tmp_post$11 = p;
  p = p + 1l;
  *tmp_post$11 = (char)0;
  return (signed int)(p - encoded);
}

// base64encode_len
// file base64.c line 168
signed int base64encode_len(signed int len)
{
  return ((len + 2) / 3) * 4 + 1;
}

// buffer_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 45
void buffer_append(struct anonymous *buffer, const void *data, unsigned long int len)
{
  void *p;
  p=buffer_append_space(buffer, len);
  memcpy(p, data, len);
}

// buffer_append_space
// file buffer.c line 81
void * buffer_append_space(struct anonymous *buffer, unsigned long int len)
{
  unsigned long int newlen;
  void *p;
  if(len >= 1048577ul)
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_append_space", "len %u not supported.", len);
    exit(-1);
  }

  if(buffer->offset == buffer->end)
  {
    buffer->offset = (unsigned long int)0;
    buffer->end = (unsigned long int)0;
  }


restart:
  ;
  void *return_value_realloc$1;
  for( ; (_Bool)1; buffer->alloc = newlen)
  {
    if(!(buffer->end + len >= buffer->alloc))
    {
      p = (void *)(buffer->buf + (signed long int)buffer->end);
      buffer->end = buffer->end + len;
      return p;
    }

    if(!(buffer->alloc / 2ul >= buffer->offset))
    {
      memmove((void *)buffer->buf, (const void *)(buffer->buf + (signed long int)buffer->offset), buffer->end - buffer->offset);
      buffer->end = buffer->end - buffer->offset;
      buffer->offset = (unsigned long int)0;
      goto restart;
    }

    newlen = buffer->alloc + len + (unsigned long int)32768;
    if(newlen >= 10485761ul)
    {
      Display(1, (enum tSeverityLevel)ELError, "buffer_append_space", "alloc %u not supported.", newlen);
      exit(-1);
    }

    return_value_realloc$1=realloc((void *)buffer->buf, newlen);
    buffer->buf = (unsigned char *)return_value_realloc$1;
  }
}

// buffer_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 39
void buffer_clear(struct anonymous *buffer)
{
  buffer->offset = (unsigned long int)0;
  buffer->end = (unsigned long int)0;
}

// buffer_consume
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 50
void buffer_consume(struct anonymous *buffer, unsigned int bytes)
{
  if(buffer->end + -buffer->offset >= (unsigned long int)bytes)
    buffer->offset = buffer->offset + (unsigned long int)bytes;

}

// buffer_consume_end
// file buffer.c line 157
void buffer_consume_end(struct anonymous *buffer, unsigned int bytes)
{
  if(buffer->end + -buffer->offset >= (unsigned long int)bytes)
    buffer->end = buffer->end - (unsigned long int)bytes;

}

// buffer_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 40
void buffer_free(struct anonymous *buffer)
{
  if(buffer->alloc >= 1ul)
  {
    memset((void *)buffer->buf, 0, buffer->alloc);
    free((void *)buffer->buf);
    buffer->buf = (unsigned char *)(void *)0;
    buffer->alloc = (unsigned long int)0;
  }

}

// buffer_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 48
void buffer_get(struct anonymous *buffer, void *buf, unsigned int len)
{
  if(buffer->end + -buffer->offset >= (unsigned long int)len)
  {
    memcpy(buf, (const void *)(buffer->buf + (signed long int)buffer->offset), (unsigned long int)len);
    buffer->offset = buffer->offset + (unsigned long int)len;
  }

}

// buffer_get_bignum
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 35
void buffer_get_bignum(struct anonymous *buffer, struct bignum_st *value)
{
  signed int bytes;
  unsigned char *bin;
  unsigned int return_value_buffer_get_int$1;
  return_value_buffer_get_int$1=buffer_get_int(buffer);
  bytes = (signed int)return_value_buffer_get_int$1;
  if(bytes >= 8193)
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_get_bignum", "Failed to handle BN of size %d.", bytes);
    exit(1);
  }

  unsigned long int return_value_buffer_len$2;
  return_value_buffer_len$2=buffer_len(buffer);
  if(!((signed int)return_value_buffer_len$2 >= bytes))
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_get_bignum", "Input buffer too small.");
    exit(1);
  }

  void *return_value_buffer_ptr$3;
  return_value_buffer_ptr$3=buffer_ptr(buffer);
  bin = (unsigned char *)return_value_buffer_ptr$3;
  BN_bin2bn(bin, bytes, value);
  buffer_consume(buffer, (unsigned int)bytes);
}

// buffer_get_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 36
unsigned int buffer_get_int(struct anonymous *buffer)
{
  unsigned char buf[4l];
  buffer_get(buffer, (void *)(char *)buf, (unsigned int)4);
  return (unsigned int)((unsigned long int)(unsigned char)buf[(signed long int)0] << 24 | (unsigned long int)(unsigned char)buf[(signed long int)1] << 16 | (unsigned long int)(unsigned char)buf[(signed long int)2] << 8 | (unsigned long int)(unsigned char)buf[(signed long int)3]);
}

// buffer_get_octet
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 39
signed int buffer_get_octet(struct anonymous *buffer)
{
  char ch;
  buffer_get(buffer, (void *)&ch, (unsigned int)1);
  return (signed int)(unsigned char)ch;
}

// buffer_get_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 42
void * buffer_get_string(struct anonymous *buffer, unsigned int *length_ptr)
{
  unsigned char *value;
  unsigned int len;
  len=buffer_get_int(buffer);
  if(len >= 262145u)
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_get_string", "Invalid string length %u.", len);
    exit(1);
  }

  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(len + (unsigned int)1));
  value = (unsigned char *)return_value_malloc$1;
  buffer_get(buffer, (void *)value, len);
  value[(signed long int)len] = (unsigned char)0;
  if(!(length_ptr == ((unsigned int *)NULL)))
    *length_ptr = len;

  return (void *)value;
}

// buffer_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 38
void buffer_init(struct anonymous *buffer)
{
  const unsigned int len = (const unsigned int)4096;
  buffer->alloc = (unsigned long int)0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)len);
  buffer->buf = (unsigned char *)return_value_malloc$1;
  buffer->alloc = (unsigned long int)len;
  buffer->offset = (unsigned long int)0;
  buffer->end = (unsigned long int)0;
}

// buffer_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 42
unsigned long int buffer_len(struct anonymous *buffer)
{
  return buffer->end - buffer->offset;
}

// buffer_ptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/buffer.h line 43
void * buffer_ptr(struct anonymous *buffer)
{
  return (void *)(buffer->buf + (signed long int)buffer->offset);
}

// buffer_put_bignum
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 34
void buffer_put_bignum(struct anonymous *buffer, struct bignum_st *value)
{
  signed int bits;
  bits=BN_num_bits(value);
  signed int bin_size = (bits + 7) / 8;
  unsigned char *buf;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)bin_size);
  buf = (unsigned char *)return_value_malloc$1;
  signed int oi;
  if(buf == ((unsigned char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_put_bignum", "Failed memory allocation.");
    exit(-1);
  }

  oi=BN_bn2bin(value, buf);
  if(!(oi == bin_size))
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_put_bignum", "oi %d != bin_size %d.", oi, bin_size);
    exit(1);
  }

  buffer_put_int(buffer, (unsigned int)bin_size);
  buffer_append(buffer, (const void *)(char *)buf, (unsigned long int)oi);
  memset((void *)buf, 0, (unsigned long int)bin_size);
  free((void *)buf);
}

// buffer_put_cstring
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 44
void buffer_put_cstring(struct anonymous *buffer, const char *s)
{
  if(s == ((const char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "buffer_put_cstring", "Invalid pointer.");
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s);
  buffer_put_string(buffer, (const void *)s, (unsigned int)return_value_strlen$1);
}

// buffer_put_int
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 37
void buffer_put_int(struct anonymous *buffer, unsigned int value)
{
  char buf[4l];
  do
  {
    buf[(signed long int)0] = (char)(value >> 24);
    buf[(signed long int)1] = (char)(value >> 16);
    buf[(signed long int)2] = (char)(value >> 8);
    buf[(signed long int)3] = (char)value;
  }
  while((_Bool)0);
  buffer_append(buffer, (const void *)buf, (unsigned long int)4);
}

// buffer_put_octet
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/bufaux.h line 40
void buffer_put_octet(struct anonymous *buffer, signed int value)
{
  char ch = (char)value;
  buffer_append(buffer, (const void *)&ch, (unsigned long int)1);
}

// buffer_put_string
// file bufaux.c line 201
void buffer_put_string(struct anonymous *buffer, const void *buf, unsigned int len)
{
  buffer_put_int(buffer, len);
  buffer_append(buffer, buf, (unsigned long int)len);
}

// createConnectedSocket
// file net_echo_request.c line 43
signed int createConnectedSocket(struct addrinfo *address_info)
{
  signed int sfd;
  struct sockaddr_in sai;
  struct sockaddr_in6 sai6;
  struct sockaddr *sa = (struct sockaddr *)(void *)0;
  signed int sa_len = 0;
  memset((void *)&sai, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  memset((void *)&sai6, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
  unsigned short int tmp_statement_expression$1;
  unsigned short int tmp_statement_expression$2;
  if(address_info->ai_family == 2)
  {
    memcpy((void *)&sai.sin_addr, (const void *)&((struct sockaddr_in *)address_info->ai_addr)->sin_addr, sizeof(struct in_addr) /*4ul*/ );
    sai.sin_family = (unsigned short int)2;
    unsigned short int createConnectedSocket$$1$$1$$1$$__v;
    unsigned short int __x = (unsigned short int)3653;
    asm("rorw $8, %w0" : "=r"(createConnectedSocket$$1$$1$$1$$__v) : "0"(__x) : "cc");
    tmp_statement_expression$1 = createConnectedSocket$$1$$1$$1$$__v;
    sai.sin_port = tmp_statement_expression$1;
    sa = (struct sockaddr *)&sai;
    sa_len = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
  }

  else
    if(address_info->ai_family == 10)
    {
      memcpy((void *)&sai6.sin6_addr, (const void *)&((struct sockaddr_in6 *)address_info->ai_addr)->sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
      sai6.sin6_family = (unsigned short int)10;
      unsigned short int __v;
      unsigned short int createConnectedSocket$$1$$2$$1$$__x = (unsigned short int)3653;
      asm("rorw $8, %w0" : "=r"(__v) : "0"(createConnectedSocket$$1$$2$$1$$__x) : "cc");
      tmp_statement_expression$2 = __v;
      sai6.sin6_port = tmp_statement_expression$2;
      sa = (struct sockaddr *)&sai6;
      sa_len = (signed int)sizeof(struct sockaddr_in6) /*28ul*/ ;
    }

    else
      return (signed int)-1;
  signed int return_value_socket$3;
  return_value_socket$3=socket(address_info->ai_family, address_info->ai_socktype, 0);
  sfd = (signed int)return_value_socket$3;
  if(sfd == -1)
    return (signed int)-1;

  else
  {
    signed int return_value_connect$4;
    return_value_connect$4=connect(sfd, sa, (unsigned int)sa_len);
    if(return_value_connect$4 == -1)
      return (signed int)-1;

    else
      return sfd;
  }
}

// createStatEngine
// file net_echo_request.c line 25
struct rttengine_statistics * createStatEngine()
{
  struct rttengine_statistics *engine = (struct rttengine_statistics *)(void *)0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rttengine_statistics) /*56ul*/ );
  engine = (struct rttengine_statistics *)return_value_malloc$1;
  if(engine == ((struct rttengine_statistics *)NULL))
    return (struct rttengine_statistics *)(void *)0;

  else
  {
    memset((void *)engine, 0, sizeof(struct rttengine_statistics) /*56ul*/ );
    return engine;
  }
}

// destroySocket
// file net_echo_request.c line 101
signed int destroySocket(signed int sfd)
{
  shutdown(sfd, 2);
  close(sfd);
  return 0;
}

// execScript
// file tsp_setup.c line 37
signed int execScript(const char *cmd)
{
  char buf[1024l];
  struct _IO_FILE *f_log;
  signed int retVal;
  memset((void *)buf, 0, sizeof(char [1024l]) /*1024ul*/ );
  snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "%s > %s", cmd, (const void *)"/tmp/gogoc-tmp.log");
  retVal=system(buf);
  f_log=fopen("/tmp/gogoc-tmp.log", "r");
  signed int return_value_feof$1;
  if(f_log == ((struct _IO_FILE *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "execScript", "Failed to open temporary file./tmp/gogoc-tmp.log");
    return -1;
  }

  else
  {
    do
    {
      return_value_feof$1=feof(f_log);
      if(!(return_value_feof$1 == 0))
        break;

      char *return_value_fgets$2;
      return_value_fgets$2=fgets(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , f_log);
      if(!(return_value_fgets$2 == ((char *)NULL)))
        Display(3, (enum tSeverityLevel)ELInfo, "execScript", "%s", (const void *)buf);

    }
    while((_Bool)1);
    fclose(f_log);
    unlink("/tmp/gogoc-tmp.log");
    return retVal;
  }
}

// findAttribute
// file xmlparse.c line 36
static struct stAttribute * findAttribute(char *name, struct stAttribute *attributes)
{
  struct stAttribute *a = attributes;
  signed int tmp_statement_expression$1;
  for( ; !(*a->name == 0); a = a + 1l)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(name, a->name);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
      return a;

  }
  return ((struct stAttribute *)NULL);
}

// findNode
// file xmlparse.c line 22
static struct stNode * findNode(char *name, struct stNode *nodes)
{
  struct stNode *n = nodes;
  signed int tmp_statement_expression$1;
  for( ; !(*n->name == 0); n = n + 1l)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(name, n->name);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
      return n;

  }
  return ((struct stNode *)NULL);
}

// freadline
// file tsp_auth_passdss.c line 42
static signed int freadline(char *buf, signed int max_len, struct _IO_FILE *fp)
{
  signed int pos;
  char c;
  pos = 0;
  signed int return_value_fgetc$1;
  signed int tmp_post$2;
  signed int tmp_post$3;
  do
  {
    return_value_fgetc$1=fgetc(fp);
    c = (char)return_value_fgetc$1;
    if((signed int)c == -1)
      break;

    if(pos >= max_len)
      break;

    if((signed int)c == 10)
    {
      tmp_post$2 = pos;
      pos = pos + 1;
      buf[(signed long int)tmp_post$2] = c;
      buf[(signed long int)pos] = (char)10;
      return 1;
    }

    else
    {
      tmp_post$3 = pos;
      pos = pos + 1;
      buf[(signed long int)tmp_post$3] = c;
    }
  }
  while((_Bool)1);
  return -1;
}

// getSocketAddress
// file net_echo_request.c line 388
enum anonymous$38 getSocketAddress(char *server, enum anonymous$29 address_type, enum anonymous$23 tunnel_mode, struct addrinfo **address_info_root, struct addrinfo **address_info)
{
  struct addrinfo hints;
  struct addrinfo *result = (struct addrinfo *)(void *)0;
  enum anonymous$38 status = (enum anonymous$38)SOCKET_ADDRESS_OK;
  struct addrinfo *result_index = (struct addrinfo *)(void *)0;
  signed int need_v6_endpoint = 0;
  signed int found_family_address = 0;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_socktype = 2;
  if((signed int)tunnel_mode == V4V6)
    need_v6_endpoint = 1;

  signed int return_value_getaddrinfo$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  switch((signed int)address_type)
  {
    case TSP_REDIRECT_BROKER_TYPE_NONE:
      return (enum anonymous$38)SOCKET_ADDRESS_ERROR;
    case TSP_REDIRECT_BROKER_TYPE_IPV4:
    {
      hints.ai_family = 2;
      hints.ai_flags = hints.ai_flags | 0x0004;
      goto __CPROVER_DUMP_L6;
    }
    case TSP_REDIRECT_BROKER_TYPE_IPV6:
    {
      hints.ai_family = 10;
      hints.ai_flags = hints.ai_flags | 0x0004;
      goto __CPROVER_DUMP_L6;
    }
    case TSP_REDIRECT_BROKER_TYPE_FQDN:
      hints.ai_family = 0;
    default:
    {

    __CPROVER_DUMP_L6:
      ;
      return_value_getaddrinfo$1=getaddrinfo(server, "3653", &hints, &result);
      if(!(return_value_getaddrinfo$1 == 0))
      {
        if(!(result == ((struct addrinfo *)NULL)))
          freeaddrinfo(result);

        return (enum anonymous$38)SOCKET_ADDRESS_PROBLEM_RESOLVING;
      }

      result_index = result;
      switch((signed int)address_type)
      {
        case TSP_REDIRECT_BROKER_TYPE_NONE:
          return (enum anonymous$38)SOCKET_ADDRESS_ERROR;
        case TSP_REDIRECT_BROKER_TYPE_IPV4:
        {
          if(!(need_v6_endpoint == 0))
            status = (enum anonymous$38)SOCKET_ADDRESS_WRONG_FAMILY;

          else
            status = (enum anonymous$38)SOCKET_ADDRESS_OK;
          goto __CPROVER_DUMP_L27;
        }
        case TSP_REDIRECT_BROKER_TYPE_IPV6:
        {
          if(!(need_v6_endpoint == 0))
            status = (enum anonymous$38)SOCKET_ADDRESS_OK;

          else
            status = (enum anonymous$38)SOCKET_ADDRESS_WRONG_FAMILY;
          goto __CPROVER_DUMP_L27;
        }
        case TSP_REDIRECT_BROKER_TYPE_FQDN:
        {
          result_index = result;
          for( ; !(result_index == ((struct addrinfo *)NULL)); result_index = result_index->ai_next)
          {
            if(!(need_v6_endpoint == 0))
              tmp_if_expr$2 = result_index->ai_family == 10 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$2 = (_Bool)0;
            if(tmp_if_expr$2)
              tmp_if_expr$4 = (_Bool)1;

            else
            {
              if(need_v6_endpoint == 0)
                tmp_if_expr$3 = result_index->ai_family == 2 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$3 = (_Bool)0;
              tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$4)
            {
              found_family_address = 1;
              break;
            }

          }
          if(!(found_family_address == 0))
            status = (enum anonymous$38)SOCKET_ADDRESS_OK;

          else
          {
            status = (enum anonymous$38)SOCKET_ADDRESS_WRONG_FAMILY;
            result_index = result;
          }
        }
        default:
        {

        __CPROVER_DUMP_L27:
          ;
          *address_info_root = result;
          *address_info = result_index;
          return status;
        }
      }
    }
  }
}

// get_mui_string
// file src/gogocuistrings.c line 144
const char * get_mui_string(const signed int id)
{
  const unsigned int n = (const unsigned int)(sizeof(const struct anonymous$3 [44l]) /*704ul*/  / sizeof(const struct anonymous$3) /*16ul*/ );
  unsigned int i = (unsigned int)0;
  for( ; !(i >= n); i = i + 1u)
    if(gogocUIStrings$link1[(signed long int)i]._id == id)
      return gogocUIStrings$link1[(signed long int)i]._str;

  return (const char *)0;
}

// get_pal_version
// file src/pal_version.c line 21
const char * get_pal_version(void)
{
  return "gogoCLIENT PAL for linux built on Oct  5 2015";
}

// get_template_script
// file tsp_setup.c line 268
static char * get_template_script(const struct stConf *pConfig)
{
  struct _IO_FILE *f_test;
  static char buffer[1024l] = { (char)0x00, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if((signed int)buffer[0l] == 0x00)
  {
    snprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , "%s%c%s.%s", ScriptDir, DirSeparator, pConfig->template, ScriptExtension);
    f_test=fopen(buffer, "r");
    if(f_test == ((struct _IO_FILE *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspSetupInterface", "Failed to find \"%s\" template.", (const void *)buffer);
      return (char *)(void *)0;
    }

    fclose(f_test);
    memset((void *)buffer, 0, sizeof(char [1024l]) /*1024ul*/ );
    if(!(ScriptInterpretor == ((char *)NULL)))
      snprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , "%s \"%s%c%s.%s\"", ScriptInterpretor, ScriptDir, DirSeparator, pConfig->template, ScriptExtension);

    else
      snprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , "\"%s%c%s.%s\"", ScriptDir, DirSeparator, pConfig->template, ScriptExtension);
  }

  return buffer;
}

// get_ui_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-config/gogocconfig/gogocuistrings.h line 108
const char * get_ui_string(const signed int id)
{
  const unsigned int n = (const unsigned int)(sizeof(const struct anonymous$3 [70l]) /*1120ul*/  / sizeof(const struct anonymous$3) /*16ul*/ );
  unsigned int i = (unsigned int)0;
  for( ; !(i >= n); i = i + 1u)
    if(gogocUIStrings[(signed long int)i]._id == id)
      return gogocUIStrings[(signed long int)i]._str;

  return (const char *)0;
}

// in_cksum
// file net_cksm.c line 15
unsigned short int in_cksum(unsigned short int *addr, signed int len)
{
  signed int nleft = len;
  signed int sum = 0;
  unsigned short int *w = addr;
  unsigned short int answer = (unsigned short int)0;
  unsigned short int *tmp_post$1;
  for( ; nleft >= 2; nleft = nleft - 2)
  {
    tmp_post$1 = w;
    w = w + 1l;
    sum = sum + (signed int)*tmp_post$1;
  }
  if(nleft == 1)
  {
    *((unsigned char *)&answer) = *((unsigned char *)w);
    sum = sum + (signed int)answer;
  }

  sum = (sum >> 16) + (sum & 0xffff);
  sum = sum + (sum >> 16);
  answer = (unsigned short int)~sum;
  return answer;
}

// internal_discard_message
// file net_rudp.c line 420
extern void internal_discard_message(void *m)
{
  if(!(m == NULL))
    free(m);

}

// internal_get_adjusted_rto
// file net_rudp.c line 441
extern float internal_get_adjusted_rto(float rto)
{
  if(rto < 2.000000f)
    return (float)2;

  else
    if(rto > 30.000000f)
      return (float)30;

    else
      return rto;
}

// internal_get_sai
// file net_rudp.c line 453
static struct sockaddr_in * internal_get_sai(struct rttengine_statistics *s, char *Host, unsigned short int Port)
{
  struct sockaddr_in *sai;
  struct in_addr addr;
  unsigned short int tmp_statement_expression$3;
  if(!(s->sai == ((struct sockaddr *)NULL)))
    return (struct sockaddr_in *)s->sai;

  else
  {
    struct in_addr *return_value_NetText2Addr$1;
    return_value_NetText2Addr$1=NetText2Addr(Host, &addr);
    if(return_value_NetText2Addr$1 == ((struct in_addr *)NULL))
      return (struct sockaddr_in *)(void *)0;

    else
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct sockaddr_in) /*16ul*/ );
      sai = (struct sockaddr_in *)return_value_malloc$2;
      if(sai == ((struct sockaddr_in *)NULL))
        return (struct sockaddr_in *)(void *)0;

      else
      {
        memset((void *)sai, 0, sizeof(struct sockaddr_in) /*16ul*/ );
        sai->sin_family = (unsigned short int)2;
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)Port;
        asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression$3 = __v;
        sai->sin_port = tmp_statement_expression$3;
        sai->sin_addr.s_addr = addr.s_addr;
        s->sai = (struct sockaddr *)sai;
        return sai;
      }
    }
  }
}

// internal_get_timestamp
// file net_rudp.c line 429
extern unsigned int internal_get_timestamp(struct rttengine_statistics *s)
{
  struct timeval tv;
  signed int return_value_gettimeofday$1;
  return_value_gettimeofday$1=gettimeofday(&tv, (struct timezone *)(void *)0);
  if(return_value_gettimeofday$1 == -1)
    return (unsigned int)0;

  else
    return (unsigned int)((tv.tv_sec - (signed long int)s->initial_timestamp) * (signed long int)1000 + tv.tv_usec / (signed long int)1000);
}

// internal_prepare_message
// file net_rudp.c line 404
extern void * internal_prepare_message(struct rudp_message_struct **hdr, unsigned long int msglen)
{
  void *buf;
  void *return_value_malloc$1;
  void *return_value_malloc$2;
  if(msglen == 0ul)
  {
    return_value_malloc$1=malloc(sizeof(struct rudp_message_struct) /*8ul*/ );
    buf = (void *)(struct rudp_message_struct *)return_value_malloc$1;
  }

  else
  {
    return_value_malloc$2=malloc(msglen + sizeof(struct rudp_message_struct) /*8ul*/ );
    buf = (void *)return_value_malloc$2;
  }
  if(!(buf == NULL))
    *hdr = (struct rudp_message_struct *)buf;

  return buf;
}

// internal_send_recv
// file net_rudp.c line 130
extern signed int internal_send_recv(signed int fd, void *in, signed int il, void *out, signed int ol)
{
  struct anonymous$4 fs;
  signed int ret;
  signed int ls;
  struct rudp_message_struct *omh = (struct rudp_message_struct *)(void *)0;
  struct rudp_message_struct *imh = (struct rudp_message_struct *)(void *)0;
  void *om = (void *)0;
  void *im = (void *)0;
  struct timeval tv_sel;
  struct timeval tv_beg;
  unsigned int tmp_post$1;
  unsigned int return_value_internal_get_timestamp$2;
  unsigned int return_value___bswap_32$3;
  unsigned int return_value___bswap_32$4;
  signed long int return_value_send$5;
  if(rttengine_stats.initiated == 0)
    return -1;

  else
  {
    om=internal_prepare_message(&omh, (unsigned long int)il);
    im=internal_prepare_message(&imh, (unsigned long int)ol);
    memset(om, 0, (unsigned long int)il);
    memset(im, 0, (unsigned long int)ol);
    if(im == NULL || om == NULL)
    {
      rttengine_deinit(&rttengine_stats, om, im);
      return -1;
    }

    else
    {
      memcpy((void *)((char *)om + (signed long int)sizeof(struct rudp_message_struct) /*8ul*/ ), in, (unsigned long int)il);
      tmp_post$1 = rttengine_stats.sequence;
      rttengine_stats.sequence = rttengine_stats.sequence + 1u;
      omh->sequence=__bswap_32$link1(tmp_post$1 | 0xf0000000);

    sendloop:
      ;
      for( ; (_Bool)1; rttengine_stats.retries = rttengine_stats.retries + 1)
      {
        if(rttengine_stats.retries == 3)
        {
          if(rttengine_stats.has_peer == 0)
          {
            rttengine_deinit(&rttengine_stats, om, im);
            return -1;
          }

          else
            rttengine_stats.apply_backoff = 1;
        }

        if(rttengine_stats.retries == 8)
        {
          rttengine_deinit(&rttengine_stats, om, im);
          return -1;
        }

        return_value_internal_get_timestamp$2=internal_get_timestamp(&rttengine_stats);
        omh->timestamp=__bswap_32$link1(return_value_internal_get_timestamp$2);
        return_value___bswap_32$3=__bswap_32$link1(omh->sequence);
        return_value___bswap_32$4=__bswap_32$link1(omh->timestamp);
        Display(3, (enum tSeverityLevel)ELInfo, "internal_send_recv", "RUDP packet %i, RTO %f, sequence 0x%x timestamp %i.", rttengine_stats.retries, rttengine_stats.rto, return_value___bswap_32$3, return_value___bswap_32$4);
        return_value_send$5=send(fd, om, (unsigned long int)il + sizeof(struct rudp_message_struct) /*8ul*/ , 0);
        ls = (signed int)return_value_send$5;
        if(ls == -1)
        {
          rttengine_deinit(&rttengine_stats, om, im);
          return -1;
        }

        tv_sel.tv_sec = (signed long int)(signed int)rttengine_stats.rto;
        tv_sel.tv_usec = (signed long int)(signed int)((rttengine_stats.rto - (float)tv_sel.tv_sec) * (float)1000);
        gettimeofday(&tv_beg, (struct timezone *)(void *)0);

      selectloop:
        ;
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$4) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fs)->__fds_bits[(signed long int)0]) : "memory");
        (&fs)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fs)->__fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)1 << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ );
        ret=select((signed int)fd + 1, &fs, (struct anonymous$4 *)(void *)0, (struct anonymous$4 *)(void *)0, &tv_sel);
        if(!(ret == 0))
        {
          if(ret == 1)
            break;

          goto __CPROVER_DUMP_L15;
        }

        Display(3, (enum tSeverityLevel)ELInfo, "internal_send_recv", "No RUDP reply.");
        if(rttengine_stats.apply_backoff == 1)
        {
          rttengine_stats.rto = rttengine_stats.rto * (float)2;
          rttengine_stats.rto=internal_get_adjusted_rto(rttengine_stats.rto);
        }

      }
      signed long int return_value_recv$6;
      return_value_recv$6=recv(fd, im, sizeof(struct rudp_message_struct) /*8ul*/  + (unsigned long int)ol, 0);
      ret = (signed int)return_value_recv$6;
      unsigned int return_value___bswap_32$7;
      return_value___bswap_32$7=__bswap_32$link1(imh->sequence);
      unsigned int return_value___bswap_32$8;
      return_value___bswap_32$8=__bswap_32$link1(imh->timestamp);
      Display(3, (enum tSeverityLevel)ELInfo, "internal_send_recv", "Reply: RUDP packet %i, RTO %f, sequence 0x%x timestamp %i.", rttengine_stats.retries, rttengine_stats.rto, return_value___bswap_32$7, return_value___bswap_32$8);
      if(ret == -1)
      {
        rttengine_deinit(&rttengine_stats, om, im);
        return -1;
      }

      else
      {
        if(imh->sequence == omh->sequence)
        {
          ret = (signed int)((unsigned long int)ret - sizeof(struct rudp_message_struct) /*8ul*/ );
          goto __CPROVER_DUMP_L16;
        }

        else
        {
          struct timeval tv_now;
          gettimeofday(&tv_now, (struct timezone *)(void *)0);
          tv_sel.tv_sec = tv_sel.tv_sec - (tv_now.tv_sec - tv_beg.tv_sec);
          tv_beg = tv_now;
          goto selectloop;
        }

      __CPROVER_DUMP_L15:
        ;
        rttengine_deinit(&rttengine_stats, om, im);
        return -1;

      __CPROVER_DUMP_L16:
        ;
        unsigned int return_value_internal_get_timestamp$9;
        return_value_internal_get_timestamp$9=internal_get_timestamp(&rttengine_stats);
        unsigned int return_value___bswap_32$10;
        return_value___bswap_32$10=__bswap_32$link1(imh->timestamp);
        rttengine_update(&rttengine_stats, return_value_internal_get_timestamp$9 - return_value___bswap_32$10);
        memcpy(out, (const void *)((char *)im + (signed long int)sizeof(struct rudp_message_struct) /*8ul*/ ), (unsigned long int)ret);
        internal_discard_message(om);
        internal_discard_message(im);
        rttengine_stats.has_peer = 1;
        rttengine_stats.retries = 0;
        return ret;
      }
    }
  }
}

// is_dsakey_in_keyfile
// file tsp_auth_passdss.c line 72
static signed int is_dsakey_in_keyfile(struct dsa_st *dsa_1, char *host, char *filename)
{
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  char *line_buf = (char *)(void *)0;
  char *str = (char *)(void *)0;
  char *str_base64 = (char *)(void *)0;
  struct anonymous keyfile_buf;
  struct bignum_st *bn_p = (struct bignum_st *)(void *)0;
  struct bignum_st *bn_q = (struct bignum_st *)(void *)0;
  struct bignum_st *bn_g = (struct bignum_st *)(void *)0;
  struct bignum_st *bn_pub_key = (struct bignum_st *)(void *)0;
  signed int ret = 1;
  unsigned long int str_size = (unsigned long int)0;
  signed int i;
  void *return_value_malloc$1;
  signed int return_value_freadline$2;
  signed int tmp_statement_expression$3;
  signed int tmp_statement_expression$5;
  _Bool tmp_if_expr$11;
  signed int return_value_BN_cmp$10;
  _Bool tmp_if_expr$13;
  signed int return_value_BN_cmp$12;
  _Bool tmp_if_expr$15;
  signed int return_value_BN_cmp$14;
  if(filename == ((char *)NULL) || host == ((char *)NULL) || dsa_1 == ((struct dsa_st *)NULL))
    return 0;

  else
  {
    memset((void *)&keyfile_buf, 0, sizeof(struct anonymous) /*32ul*/ );
    fp=fopen(filename, "r");
    if(fp == ((struct _IO_FILE *)NULL))
      ret = 1;

    else
    {
      return_value_malloc$1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)4096);
      line_buf = (char *)return_value_malloc$1;
      if(line_buf == ((char *)NULL))
        ret = 0;

      else
        do
        {
          return_value_freadline$2=freadline(line_buf, 4095, fp);
          if(return_value_freadline$2 == -1)
            break;

          signed int len;
          str_base64=strtok(line_buf, " ");
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp$4;
          return_value___builtin_strcmp$4=__builtin_strcmp(host, str_base64);
          tmp_statement_expression$3 = return_value___builtin_strcmp$4;
          if(tmp_statement_expression$3 == 0)
          {
            str_base64=strtok((char *)(void *)0, " ");
            unsigned long int is_dsakey_in_keyfile$$1$$3$$2$$__s1_len;
            unsigned long int is_dsakey_in_keyfile$$1$$3$$2$$__s2_len;
            signed int return_value___builtin_strcmp$6;
            return_value___builtin_strcmp$6=__builtin_strcmp("ssh-dss", str_base64);
            tmp_statement_expression$5 = return_value___builtin_strcmp$6;
            if(tmp_statement_expression$5 == 0)
            {
              str_base64=strtok((char *)(void *)0, " ");
              unsigned long int return_value_strlen$7;
              return_value_strlen$7=strlen(str_base64);
              str_size = (unsigned long int)(unsigned int)return_value_strlen$7 * sizeof(char) /*1ul*/ ;
              void *return_value_malloc$8;
              return_value_malloc$8=malloc(str_size);
              str = (char *)return_value_malloc$8;
              if(str == ((char *)NULL))
              {
                ret = 0;
                break;
              }

              len=base64decode(str, str_base64);
              if(!(len >= 1))
              {
                ret = 0;
                break;
              }

              buffer_init(&keyfile_buf);
              if(keyfile_buf.buf == ((unsigned char *)NULL))
              {
                ret = 0;
                break;
              }

              buffer_append(&keyfile_buf, (const void *)str, str_size);
              bn_p=BN_new();
              bn_q=BN_new();
              bn_g=BN_new();
              bn_pub_key=BN_new();
              if(bn_g == ((struct bignum_st *)NULL) || bn_p == ((struct bignum_st *)NULL) || bn_pub_key == ((struct bignum_st *)NULL) || bn_q == ((struct bignum_st *)NULL))
              {
                ret = 0;
                break;
              }

              buffer_get_string(&keyfile_buf, (unsigned int *)&i);
              buffer_get_bignum(&keyfile_buf, bn_p);
              buffer_get_bignum(&keyfile_buf, bn_q);
              buffer_get_bignum(&keyfile_buf, bn_g);
              buffer_get_bignum(&keyfile_buf, bn_pub_key);
              signed int return_value_BN_cmp$9;
              return_value_BN_cmp$9=BN_cmp(dsa_1->p, bn_p);
              if(return_value_BN_cmp$9 == 0)
              {
                return_value_BN_cmp$10=BN_cmp(dsa_1->q, bn_q);
                tmp_if_expr$11 = !(return_value_BN_cmp$10 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$11 = (_Bool)0;
              if(tmp_if_expr$11)
              {
                return_value_BN_cmp$12=BN_cmp(dsa_1->g, bn_g);
                tmp_if_expr$13 = !(return_value_BN_cmp$12 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$13 = (_Bool)0;
              if(tmp_if_expr$13)
              {
                return_value_BN_cmp$14=BN_cmp(dsa_1->pub_key, bn_pub_key);
                tmp_if_expr$15 = !(return_value_BN_cmp$14 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$15 = (_Bool)0;
              if(tmp_if_expr$15)
                ret = 2;

              else
                ret = 3;
            }

          }

        }
        while((_Bool)1);
    }

  is_dsakey_in_keyfile_cleanup:
    ;
    if(!(str == ((char *)NULL)))
      free((void *)str);

    if(!(line_buf == ((char *)NULL)))
      free((void *)line_buf);

    if(!(fp == ((struct _IO_FILE *)NULL)))
      fclose(fp);

    if(!(bn_p == ((struct bignum_st *)NULL)))
      BN_clear_free(bn_p);

    if(!(bn_q == ((struct bignum_st *)NULL)))
      BN_clear_free(bn_q);

    if(!(bn_g == ((struct bignum_st *)NULL)))
      BN_clear_free(bn_g);

    if(!(bn_pub_key == ((struct bignum_st *)NULL)))
      BN_clear_free(bn_pub_key);

    if(!(keyfile_buf.buf == ((unsigned char *)NULL)))
      buffer_free(&keyfile_buf);

    return ret;
  }
}

// main
// file unix-main.c line 58
signed int main(signed int argc, char **argv)
{
  signed int rc;
  signal(1, signal_handler);
  rc=tspMain(argc, argv);
  return rc;
}

// md5
// file md5c.c line 338
char * md5(char *string, unsigned long int len)
{
  struct MD5Context context;
  unsigned char digest[16l];
  signed int i;
  MD5Init(&context);
  MD5Update(&context, (const unsigned char *)string, (unsigned int)(signed int)len);
  MD5Final(digest, &context);
  static char output[33l];
  memset((void *)output, 0, (unsigned long int)33);
  i = 0;
  for( ; !(i >= 16); i = i + 1)
    sprintf(output + (signed long int)(i * 2), "%02x", (unsigned char)digest[(signed long int)i]);
  return output;
}

// md5digest
// file md5c.c line 356
void md5digest(char *string, unsigned long int len, char *digest)
{
  struct MD5Context context;
  MD5Init(&context);
  MD5Update(&context, (const unsigned char *)string, (unsigned int)(signed int)len);
  MD5Final((unsigned char *)digest, &context);
}

// p_address
// file xml_tun.c line 280
signed int p_address(struct stNode *n, char *content)
{
  signed int tmp_statement_expression$1;
  _Bool tmp_if_expr$5;
  signed int tmp_statement_expression$3;
  signed int tmp_statement_expression$8;
  signed int tmp_statement_expression$6;
  signed int tmp_statement_expression$10;
  signed int tmp_statement_expression$16;
  signed int tmp_statement_expression$14;
  signed int tmp_statement_expression$12;
  signed int tmp_statement_expression$20;
  signed int tmp_statement_expression$18;
  signed int tmp_statement_expression$26;
  signed int tmp_statement_expression$24;
  signed int tmp_statement_expression$22;
  if(!(client == 0))
  {
    if(!(keepalive == 0))
    {
      unsigned long int p_address$$1$$1$$1$$1$$__s1_len;
      unsigned long int p_address$$1$$1$$1$$1$$__s2_len;
      signed int return_value___builtin_strcmp$2;
      return_value___builtin_strcmp$2=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
      tmp_statement_expression$1 = return_value___builtin_strcmp$2;
      if(tmp_statement_expression$1 == 0)
        tmp_if_expr$5 = (_Bool)1;

      else
      {
        unsigned long int p_address$$1$$1$$1$$2$$__s1_len;
        unsigned long int p_address$$1$$1$$1$$2$$__s2_len;
        signed int return_value___builtin_strcmp$4;
        return_value___builtin_strcmp$4=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv4");
        tmp_statement_expression$3 = return_value___builtin_strcmp$4;
        tmp_if_expr$5 = !(tmp_statement_expression$3 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$5)
        Assign(content, &theTunnelInfo->keepalive_address);

    }

    else
      if(!(router == 0))
      {
        if(!(dns_server == 0))
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp$9;
          return_value___builtin_strcmp$9=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv4");
          tmp_statement_expression$8 = return_value___builtin_strcmp$9;
          if(tmp_statement_expression$8 == 0)
            AssignToList(content, &theTunnelInfo->dns_server_address_ipv4);

          else
          {
            unsigned long int p_address$$1$$1$$2$$1$$3$$__s1_len;
            unsigned long int p_address$$1$$1$$2$$1$$3$$__s2_len;
            signed int return_value___builtin_strcmp$7;
            return_value___builtin_strcmp$7=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
            tmp_statement_expression$6 = return_value___builtin_strcmp$7;
            if(tmp_statement_expression$6 == 0)
              AssignToList(content, &theTunnelInfo->dns_server_address_ipv6);

          }
        }

      }

      else
        if(!(dns_server == 0))
        {
          unsigned long int p_address$$1$$1$$3$$1$$__s1_len;
          unsigned long int p_address$$1$$1$$3$$1$$__s2_len;
          signed int return_value___builtin_strcmp$11;
          return_value___builtin_strcmp$11=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
          tmp_statement_expression$10 = return_value___builtin_strcmp$11;
          if(tmp_statement_expression$10 == 0)
            Assign(content, &theTunnelInfo->client_dns_server_address_ipv6);

        }

        else
        {
          unsigned long int p_address$$1$$1$$4$$1$$__s1_len;
          unsigned long int p_address$$1$$1$$4$$1$$__s2_len;
          signed int return_value___builtin_strcmp$17;
          return_value___builtin_strcmp$17=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv4");
          tmp_statement_expression$16 = return_value___builtin_strcmp$17;
          if(tmp_statement_expression$16 == 0)
            Assign(content, &theTunnelInfo->client_address_ipv4);

          else
          {
            unsigned long int p_address$$1$$1$$4$$3$$__s1_len;
            unsigned long int p_address$$1$$1$$4$$3$$__s2_len;
            signed int return_value___builtin_strcmp$15;
            return_value___builtin_strcmp$15=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
            tmp_statement_expression$14 = return_value___builtin_strcmp$15;
            if(tmp_statement_expression$14 == 0)
              Assign(content, &theTunnelInfo->client_address_ipv6);

            else
            {
              unsigned long int p_address$$1$$1$$4$$5$$__s1_len;
              unsigned long int p_address$$1$$1$$4$$5$$__s2_len;
              signed int return_value___builtin_strcmp$13;
              return_value___builtin_strcmp$13=__builtin_strcmp(n->attributes[(signed long int)0].value, "dn");
              tmp_statement_expression$12 = return_value___builtin_strcmp$13;
              if(tmp_statement_expression$12 == 0)
                Assign(content, &theTunnelInfo->client_dns_name);

            }
          }
        }
  }

  else
    if(!(server == 0))
    {
      unsigned long int p_address$$1$$2$$1$$__s1_len;
      unsigned long int p_address$$1$$2$$1$$__s2_len;
      signed int return_value___builtin_strcmp$21;
      return_value___builtin_strcmp$21=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv4");
      tmp_statement_expression$20 = return_value___builtin_strcmp$21;
      if(tmp_statement_expression$20 == 0)
        Assign(content, &theTunnelInfo->server_address_ipv4);

      else
      {
        unsigned long int p_address$$1$$2$$3$$__s1_len;
        unsigned long int p_address$$1$$2$$3$$__s2_len;
        signed int return_value___builtin_strcmp$19;
        return_value___builtin_strcmp$19=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
        tmp_statement_expression$18 = return_value___builtin_strcmp$19;
        if(tmp_statement_expression$18 == 0)
          Assign(content, &theTunnelInfo->server_address_ipv6);

      }
    }

    else
      if(!(broker == 0))
      {
        unsigned long int p_address$$1$$3$$1$$__s1_len;
        unsigned long int p_address$$1$$3$$1$$__s2_len;
        signed int return_value___builtin_strcmp$27;
        return_value___builtin_strcmp$27=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv4");
        tmp_statement_expression$26 = return_value___builtin_strcmp$27;
        if(tmp_statement_expression$26 == 0)
          AssignToList(content, &theTunnelInfo->broker_redirect_ipv4);

        else
        {
          unsigned long int p_address$$1$$3$$3$$__s1_len;
          unsigned long int p_address$$1$$3$$3$$__s2_len;
          signed int return_value___builtin_strcmp$25;
          return_value___builtin_strcmp$25=__builtin_strcmp(n->attributes[(signed long int)0].value, "ipv6");
          tmp_statement_expression$24 = return_value___builtin_strcmp$25;
          if(tmp_statement_expression$24 == 0)
            AssignToList(content, &theTunnelInfo->broker_redirect_ipv6);

          else
          {
            unsigned long int p_address$$1$$3$$5$$__s1_len;
            unsigned long int p_address$$1$$3$$5$$__s2_len;
            signed int return_value___builtin_strcmp$23;
            return_value___builtin_strcmp$23=__builtin_strcmp(n->attributes[(signed long int)0].value, "dn");
            tmp_statement_expression$22 = return_value___builtin_strcmp$23;
            if(tmp_statement_expression$22 == 0)
              AssignToList(content, &theTunnelInfo->broker_redirect_dn);

          }
        }
      }

  return 0;
}

// p_as
// file xml_tun.c line 253
signed int p_as(struct stNode *n, char *content)
{
  if(!(client == 0))
    Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->client_as);

  else
    if(!(server == 0))
      Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->server_as);

  return 0;
}

// p_broker
// file xml_tun.c line 209
signed int p_broker(struct stNode *n, char *content)
{
  signed int res;
  broker = 1;
  res=XMLParse(content, Broker);
  broker = 0;
  return res;
}

// p_client
// file xml_tun.c line 219
signed int p_client(struct stNode *n, char *content)
{
  signed int res;
  client = 1;
  res=XMLParse(content, Client);
  client = 0;
  return res;
}

// p_default
// file xml_tun.c line 182
signed int p_default(struct stNode *n, char *content)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(content);
  printf("Found <%s>%.10s%s</%s>\n", n->name, content, return_value_strlen$1 > (unsigned long int)10 ? "..." : "", n->name);
  return 0;
}

// p_dns_server
// file xml_tun.c line 230
signed int p_dns_server(struct stNode *n, char *content)
{
  signed int res;
  dns_server = 1;
  res=XMLParse(content, DNSServer);
  dns_server = 0;
  return res;
}

// p_keepalive
// file xml_tun.c line 263
signed int p_keepalive(struct stNode *n, char *content)
{
  signed int res;
  Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->keepalive_interval);
  keepalive = 1;
  res=XMLParse(content, Keepalive);
  keepalive = 0;
  return res;
}

// p_prefix
// file xml_tun.c line 274
signed int p_prefix(struct stNode *n, char *content)
{
  Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->prefix_length);
  Assign(content, &theTunnelInfo->prefix);
  return 0;
}

// p_router
// file xml_tun.c line 241
signed int p_router(struct stNode *n, char *content)
{
  signed int res;
  router = 1;
  Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->router_protocol);
  res=XMLParse(content, Router);
  router = 0;
  return res;
}

// p_server
// file xml_tun.c line 199
signed int p_server(struct stNode *n, char *content)
{
  signed int res;
  server = 1;
  res=XMLParse(content, Server);
  server = 0;
  return res;
}

// p_tunnel
// file xml_tun.c line 188
signed int p_tunnel(struct stNode *n, char *content)
{
  Assign(n->attributes[(signed long int)0].value, &theTunnelInfo->action);
  Assign(n->attributes[(signed long int)1].value, &theTunnelInfo->type);
  Assign(n->attributes[(signed long int)2].value, &theTunnelInfo->lifetime);
  Assign(n->attributes[(signed long int)3].value, &theTunnelInfo->proxy);
  Assign(n->attributes[(signed long int)4].value, &theTunnelInfo->mtu);
  signed int return_value_XMLParse$1;
  return_value_XMLParse$1=XMLParse(content, Tunnel);
  return return_value_XMLParse$1;
}

// parse_addr_port
// file net.c line 35
signed int parse_addr_port(const char *addr_port, char **addr, unsigned short int *port, unsigned short int dflt_port)
{
  char buffer[1024l];
  char *srvname = (char *)(void *)0;
  char *srvport = (char *)(void *)0;
  if(addr == ((char **)NULL))
    return -1;

  else
  {
    snprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , "%s", addr_port);
    char *return_value___builtin_strchr$1;
    return_value___builtin_strchr$1=__builtin_strchr(buffer, 91);
    srvname = return_value___builtin_strchr$1;
    if(!(srvname == ((char *)NULL)))
    {
      srvname=strtok(buffer, "]");
      srvname = buffer + (signed long int)1;
    }

    else
      srvname=strtok(buffer, ":");
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(srvname);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)((unsigned int)return_value_strlen$2 + (unsigned int)1));
    *addr = (char *)return_value_malloc$3;
    if(*addr == ((char *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "parse_addr_port", "Failed memory allocation.");
      return -1;
    }

    else
    {
      strcpy(*addr, srvname);
      srvport=strtok((char *)(void *)0, ":");
      if(!(srvport == ((char *)NULL)))
      {
        signed int si32_port;
        si32_port=atoi(srvport);
        if(si32_port >= 65536 || !(si32_port >= 1))
        {
          Display(1, (enum tSeverityLevel)ELError, "parse_addr_port", "Service port not valid: %s.", srvport);
          free((void *)*addr);
          return -1;
        }

        *port = (unsigned short int)si32_port;
      }

      else
        *port = dflt_port;
      return 0;
    }
  }
}

// rttengine_deinit
// file net_rudp.c line 360
extern signed int rttengine_deinit(struct rttengine_statistics *s, void *im, void *om)
{
  if(!(s->sai == ((struct sockaddr *)NULL)))
  {
    free((void *)s->sai);
    s->sai = (struct sockaddr *)(void *)0;
  }

  if(!(im == NULL))
  {
    internal_discard_message(im);
    im = (void *)0;
  }

  if(!(om == NULL))
  {
    internal_discard_message(om);
    om = (void *)0;
  }

  s->initiated = 0;
  return s->initiated;
}

// rttengine_init
// file net_rudp.c line 294
extern signed int rttengine_init(struct rttengine_statistics *s)
{
  struct timeval tv;
  if(s == ((struct rttengine_statistics *)NULL))
    return 0;

  else
    if(s->initiated == 1)
      return s->initiated;

    else
    {
      signed int return_value_gettimeofday$1;
      return_value_gettimeofday$1=gettimeofday(&tv, (struct timezone *)(void *)0);
      if(return_value_gettimeofday$1 == -1)
        memset((void *)&tv, 0, sizeof(struct timeval) /*16ul*/ );

      s->rtt = (float)0;
      s->srtt = (float)0;
      s->rttvar = (float)0.50;
      s->rto = (float)2;
      s->sequence = (unsigned int)240;
      s->retries = 0;
      s->last_recv_sequence = 0xBAD;
      s->initial_timestamp = (signed int)tv.tv_sec;
      s->has_peer = 0;
      s->apply_backoff = 0;
      s->initiated = 1;
      return s->initiated;
    }
}

// rttengine_update
// file net_rudp.c line 383
extern float rttengine_update(struct rttengine_statistics *s, unsigned int rtt)
{
  float delta;
  if(s == ((struct rttengine_statistics *)NULL))
    return (float)0;

  else
  {
    s->rtt = (float)rtt / 1000.0f;
    delta = s->rtt - s->srtt;
    s->srtt = s->srtt + ((float)1 / (float)8) * delta;
    s->rttvar = s->rttvar + ((float)1 / (float)4) * (delta < (float)0 ? -delta : delta);
    s->rto = s->srtt + (float)4 * s->rttvar;
    s->rto=internal_get_adjusted_rto(s->rto);
    s->retries = 0;
    return s->rto;
  }
}

// send_broker_list
// file tsp_local.c line 51
signed int send_broker_list(void)
{
  return (signed int)0x00000000;
}

// send_haccess_status_info
// file tsp_local.c line 52
signed int send_haccess_status_info(void)
{
  return (signed int)0x00000000;
}

// send_status_info
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/../gogoc-messaging/gogocmessaging/gogoc_c_wrapper.h line 37
signed int send_status_info(void)
{
  return (signed int)0x00000000;
}

// send_tunnel_info
// file tsp_local.c line 50
signed int send_tunnel_info(void)
{
  return (signed int)0x00000000;
}

// set_tsp_env_variables
// file tsp_setup.c line 139
void set_tsp_env_variables(const struct stConf *pConfig, const struct stTunnel *pTunnelInfo)
{
  char buffer[8l];
  snprintf(buffer, sizeof(char [8l]) /*8ul*/ , "%d", 3);
  tspSetEnv("TSP_VERBOSE", buffer, 1);
  tspSetEnv("TSP_HOME_DIR", TspHomeDir, 1);
  tspSetEnv("TSP_TUNNEL_MODE", pTunnelInfo->type, 1);
  tspSetEnv("TSP_HOST_TYPE", pConfig->host_type, 1);
  signed int return_value_strcasecmp$2;
  return_value_strcasecmp$2=strcasecmp(pTunnelInfo->type, "v6v4");
  signed int return_value_strcasecmp$1;
  if(return_value_strcasecmp$2 == 0)
  {
    tspSetEnv("TSP_TUNNEL_INTERFACE", pConfig->if_tunnel_v6v4, 1);
    gTunnelInfo.eTunnelType = (enum anonymous$22)TUNTYPE_V6V4;
  }

  else
  {
    return_value_strcasecmp$1=strcasecmp(pTunnelInfo->type, "v6udpv4");
    if(return_value_strcasecmp$1 == 0)
    {
      tspSetEnv("TSP_TUNNEL_INTERFACE", pConfig->if_tunnel_v6udpv4, 1);
      gTunnelInfo.eTunnelType = (enum anonymous$22)TUNTYPE_V6UDPV4;
    }

  }
  tspSetEnv("TSP_HOME_INTERFACE", pConfig->if_prefix, 1);
  tspSetEnv("TSP_CLIENT_ADDRESS_IPV4", pTunnelInfo->client_address_ipv4, 1);
  gTunnelInfo.szIPV4AddrLocalEndpoint = pTunnelInfo->client_address_ipv4;
  tspSetEnv("TSP_CLIENT_ADDRESS_IPV6", pTunnelInfo->client_address_ipv6, 1);
  gTunnelInfo.szIPV6AddrLocalEndpoint = pTunnelInfo->client_address_ipv6;
  tspSetEnv("TSP_CLIENT_DNS_ADDRESS_IPV6", pTunnelInfo->client_dns_server_address_ipv6, 1);
  gTunnelInfo.szIPV6AddrDns = pTunnelInfo->client_dns_server_address_ipv6;
  if(!(pTunnelInfo->client_dns_name == ((char *)NULL)))
  {
    tspSetEnv("TSP_CLIENT_DNS_NAME", pTunnelInfo->client_dns_name, 1);
    gTunnelInfo.szUserDomain = pTunnelInfo->client_dns_name;
  }

  tspSetEnv("TSP_SERVER_ADDRESS_IPV4", pTunnelInfo->server_address_ipv4, 1);
  gTunnelInfo.szIPV4AddrRemoteEndpoint = pTunnelInfo->server_address_ipv4;
  tspSetEnv("TSP_SERVER_ADDRESS_IPV6", pTunnelInfo->server_address_ipv6, 1);
  gTunnelInfo.szIPV6AddrRemoteEndpoint = pTunnelInfo->server_address_ipv6;
  signed int return_value_strcasecmp$3;
  return_value_strcasecmp$3=strcasecmp(pTunnelInfo->type, "v6v4");
  _Bool tmp_if_expr$5;
  signed int return_value_strcasecmp$4;
  if(return_value_strcasecmp$3 == 0)
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    return_value_strcasecmp$4=strcasecmp(pTunnelInfo->type, "v6udpv4");
    tmp_if_expr$5 = return_value_strcasecmp$4 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$5)
    tspSetEnv("TSP_TUNNEL_PREFIXLEN", "128", 1);

  if(!(gTunnelInfo.szDelegatedPrefix == ((char *)NULL)))
  {
    free((void *)gTunnelInfo.szDelegatedPrefix);
    gTunnelInfo.szDelegatedPrefix = (char *)(void *)0;
  }

  _Bool tmp_if_expr$17;
  signed int return_value_strcasecmp$16;
  signed int tmp_if_expr$9;
  signed int return_value_atoi$7;
  signed int return_value_atoi$8;
  signed int tmp_if_expr$13;
  signed int return_value_atoi$11;
  signed int return_value_atoi$12;
  if(!(pTunnelInfo->prefix == ((char *)NULL)))
  {
    char chPrefix[128l];
    unsigned long int len;
    unsigned long int sep;
    signed int return_value_strcasecmp$15;
    return_value_strcasecmp$15=strcasecmp(pTunnelInfo->type, "v6v4");
    if(return_value_strcasecmp$15 == 0)
      tmp_if_expr$17 = (_Bool)1;

    else
    {
      return_value_strcasecmp$16=strcasecmp(pTunnelInfo->type, "v6udpv4");
      tmp_if_expr$17 = return_value_strcasecmp$16 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$17)
    {
      signed int return_value_atoi$6;
      return_value_atoi$6=atoi$link4(pTunnelInfo->prefix_length);
      if(!(return_value_atoi$6 % 16 == 0))
      {
        return_value_atoi$7=atoi$link4(pTunnelInfo->prefix_length);
        tmp_if_expr$9 = (return_value_atoi$7 / 16 + 1) * 4;
      }

      else
      {
        return_value_atoi$8=atoi$link4(pTunnelInfo->prefix_length);
        tmp_if_expr$9 = (return_value_atoi$8 / 16) * 4;
      }
      len = (unsigned long int)tmp_if_expr$9;
      signed int return_value_atoi$10;
      return_value_atoi$10=atoi$link4(pTunnelInfo->prefix_length);
      if(!(return_value_atoi$10 % 16 == 0))
      {
        return_value_atoi$11=atoi$link4(pTunnelInfo->prefix_length);
        tmp_if_expr$13 = return_value_atoi$11 / 16;
      }

      else
      {
        return_value_atoi$12=atoi$link4(pTunnelInfo->prefix_length);
        tmp_if_expr$13 = return_value_atoi$12 / 16 - 1;
      }
      sep = (unsigned long int)tmp_if_expr$13;
    }

    else
    {
      unsigned long int return_value_strlen$14;
      return_value_strlen$14=strlen(pTunnelInfo->prefix);
      len = (unsigned long int)(unsigned int)return_value_strlen$14;
      sep = (unsigned long int)0;
    }
    memset((void *)chPrefix, 0, (unsigned long int)128);
    memcpy((void *)chPrefix, (const void *)pTunnelInfo->prefix, len + sep);
    tspSetEnv("TSP_PREFIX", chPrefix, 1);
    unsigned long int return_value_strlen$18;
    return_value_strlen$18=strlen(chPrefix);
    void *return_value_malloc$19;
    return_value_malloc$19=malloc((unsigned long int)((unsigned int)return_value_strlen$18 + (unsigned int)10));
    gTunnelInfo.szDelegatedPrefix = (char *)return_value_malloc$19;
    strcpy(gTunnelInfo.szDelegatedPrefix, chPrefix);
    tspSetEnv("TSP_PREFIXLEN", pTunnelInfo->prefix_length, 1);
    strcat(gTunnelInfo.szDelegatedPrefix, "/");
    strcat(gTunnelInfo.szDelegatedPrefix, pTunnelInfo->prefix_length);
  }

}

// signal_handler
// file unix-main.c line 32
void signal_handler(signed int sigraised)
{
  if(sigraised == 1)
    indSigHUP = 1;

}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 453
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// timeEchoRequestReply
// file net_echo_request.c line 238
enum anonymous$27 timeEchoRequestReply(signed int sfd, char *address, struct rttengine_statistics *engine, unsigned int *distance)
{
  char data_in[4096l];
  char data_out[4096l];
  signed int data_in_size = 0;
  unsigned long int data_out_size = (unsigned long int)0;
  struct rudp_message_struct *imh = (struct rudp_message_struct *)(void *)0;
  struct rudp_message_struct *omh = (struct rudp_message_struct *)(void *)0;
  void *om = (void *)0;
  void *im = (void *)0;
  signed int length_sent = 0;
  signed int ret = 0;
  struct anonymous$4 fs;
  struct timeval tv_select;
  memset((void *)data_in, 0, sizeof(char [4096l]) /*4096ul*/ );
  snprintf(data_out, sizeof(char [4096l]) /*4096ul*/ , "ECHO REQUEST");
  data_in_size = (signed int)sizeof(char [4096l]) /*4096ul*/ ;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(data_out);
  data_out_size = (unsigned long int)(unsigned int)return_value_strlen$1;
  im=internal_prepare_message(&imh, (unsigned long int)data_in_size);
  om=internal_prepare_message(&omh, data_out_size);
  unsigned int tmp_post$2;
  unsigned int return_value_internal_get_timestamp$3;
  signed long int return_value_send$4;
  if(im == NULL || om == NULL)
  {
    rttengine_deinit(engine, im, om);
    *distance = *distance + (unsigned int)(10 * 1000 * 2);
    Display(1, (enum tSeverityLevel)ELError, "timeEchoRequestReply", "Failed to create an RUDP message to send an echo request to %s.", address);
    return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
  }

  else
  {
    memset(im, 0, (unsigned long int)data_in_size);
    memset(om, 0, data_out_size);
    memcpy((void *)((char *)om + (signed long int)sizeof(struct rudp_message_struct) /*8ul*/ ), (const void *)data_out, data_out_size);
    tmp_post$2 = engine->sequence;
    engine->sequence = engine->sequence + 1u;
    omh->sequence=__bswap_32$link3(tmp_post$2 | 0xf0000000);

  send_loop:
    ;
    for( ; (_Bool)1; engine->retries = engine->retries + 1)
    {
      if(engine->retries == 3)
      {
        rttengine_deinit(engine, im, om);
        *distance = *distance + (unsigned int)(10 * 1000 * 2);
        Display(3, (enum tSeverityLevel)ELWarning, "timeEchoRequestReply", "Maximal number of echo request attempts (%u) reached for %s.", 3, address);
        return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_TIMEOUT;
      }

      return_value_internal_get_timestamp$3=internal_get_timestamp(engine);
      omh->timestamp=__bswap_32$link3(return_value_internal_get_timestamp$3);
      Display(3, (enum tSeverityLevel)ELInfo, "timeEchoRequestReply", "Sending echo request message #%u to %s.", engine->retries + 1, address);
      return_value_send$4=send(sfd, om, (unsigned long int)(signed int)(data_out_size + sizeof(struct rudp_message_struct) /*8ul*/ ), 0);
      length_sent = (signed int)return_value_send$4;
      if(length_sent == -1)
      {
        rttengine_deinit(engine, im, om);
        *distance = *distance + (unsigned int)(10 * 1000 * 2);
        Display(1, (enum tSeverityLevel)ELError, "timeEchoRequestReply", "Failed to send an echo request message to %s.", address);
        return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
      }

      tv_select.tv_sec = (signed long int)((10 * 1000) / 1000);
      tv_select.tv_usec = (signed long int)(((10 * 1000) % 1000) * 1000);

    select_loop:
      ;
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$4) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fs)->__fds_bits[(signed long int)0]) : "memory");
      (&fs)->__fds_bits[(signed long int)(sfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fs)->__fds_bits[(signed long int)(sfd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)1 << sfd % (8 * (signed int)sizeof(signed long int) /*8ul*/ );
      Display(3, (enum tSeverityLevel)ELInfo, "timeEchoRequestReply", "Waiting for an echo reply from %s.", address);
      ret=select((signed int)sfd + 1, &fs, (struct anonymous$4 *)(void *)0, (struct anonymous$4 *)(void *)0, &tv_select);
      if(!(ret == 0))
      {
        if(ret == 1)
          break;

        goto __CPROVER_DUMP_L10;
      }

      Display(3, (enum tSeverityLevel)ELWarning, "timeEchoRequestReply", "Timed out waiting for an echo reply from %s.", address);
    }
    Display(3, (enum tSeverityLevel)ELWarning, "timeEchoRequestReply", "Receiving an RUDP message from %s.", address);
    signed long int return_value_recv$5;
    return_value_recv$5=recv(sfd, im, sizeof(struct rudp_message_struct) /*8ul*/  + (unsigned long int)data_in_size, 0);
    ret = (signed int)return_value_recv$5;
    if(ret == -1)
    {
      rttengine_deinit(engine, im, om);
      *distance = *distance + (unsigned int)(10 * 1000 * 2);
      Display(1, (enum tSeverityLevel)ELError, "timeEchoRequestReply", "Failed to receive an RUDP message from %s.", address);
      return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
    }

    else
    {
      if(imh->sequence == omh->sequence)
      {
        unsigned int return_value_internal_get_timestamp$6;
        return_value_internal_get_timestamp$6=internal_get_timestamp(engine);
        unsigned int return_value___bswap_32$7;
        return_value___bswap_32$7=__bswap_32$link3(omh->timestamp);
        *distance = *distance + (return_value_internal_get_timestamp$6 - return_value___bswap_32$7);
        ret = (signed int)((unsigned long int)ret - sizeof(struct rudp_message_struct) /*8ul*/ );
        Display(3, (enum tSeverityLevel)ELInfo, "timeEchoRequestReply", "Received RUDP message from %s correctly.", address);
        goto __CPROVER_DUMP_L11;
      }

      else
      {
        Display(3, (enum tSeverityLevel)ELWarning, "timeEchoRequestReply", "Sequence number of RUDP message from %s differs.", address);
        goto select_loop;
      }

    __CPROVER_DUMP_L10:
      ;
      rttengine_deinit(engine, im, om);
      *distance = *distance + (unsigned int)(10 * 1000 * 2);
      Display(1, (enum tSeverityLevel)ELError, "timeEchoRequestReply", "Failed to wait for an echo reply from %s.", address);
      return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;

    __CPROVER_DUMP_L11:
      ;
      unsigned int return_value_internal_get_timestamp$8;
      return_value_internal_get_timestamp$8=internal_get_timestamp(engine);
      unsigned int return_value___bswap_32$9;
      return_value___bswap_32$9=__bswap_32$link3(imh->timestamp);
      rttengine_update(engine, return_value_internal_get_timestamp$8 - return_value___bswap_32$9);
      memcpy((void *)data_in, (const void *)((char *)im + (signed long int)sizeof(struct rudp_message_struct) /*8ul*/ ), (unsigned long int)ret);
      internal_discard_message(im);
      internal_discard_message(om);
      engine->retries = 0;
      signed int return_value_tspGetStatusCode$10;
      return_value_tspGetStatusCode$10=tspGetStatusCode(data_in);
      if(!(return_value_tspGetStatusCode$10 == 200))
      {
        Display(1, (enum tSeverityLevel)ELError, "timeEchoRequestReply", "Received unexpected echo reply from %s: %s.", address, (const void *)data_in);
        return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
      }

      else
      {
        Display(3, (enum tSeverityLevel)ELInfo, "timeEchoRequestReply", "Received expected echo reply from %s: %s.", address, (const void *)data_in);
        return (enum anonymous$27)TSP_REDIRECT_OK;
      }
    }
  }
}

// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c)
{
  signed int tmp_if_expr$2;
  const signed int **return_value___ctype_tolower_loc$1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_tolower_loc$1=__ctype_tolower_loc();
    tmp_if_expr$2 = (*return_value___ctype_tolower_loc$1)[(signed long int)__c];
  }

  else
    tmp_if_expr$2 = __c;
  return tmp_if_expr$2;
}

// tolower$link1
// file /usr/include/ctype.h line 215
static inline signed int tolower$link1(signed int __c$link1)
{
  signed int tmp_if_expr$2$link1;
  const signed int **return_value___ctype_tolower_loc$1$link1;
  if(__c$link1 >= -128 && !(__c$link1 >= 256))
  {
    return_value___ctype_tolower_loc$1$link1=__ctype_tolower_loc();
    tmp_if_expr$2$link1 = (*return_value___ctype_tolower_loc$1$link1)[(signed long int)__c$link1];
  }

  else
    tmp_if_expr$2$link1 = __c$link1;
  return tmp_if_expr$2$link1;
}

// tspAddBrokerToList
// file tsp_redirect.c line 42
enum anonymous$27 tspAddBrokerToList(struct stBrokerList **broker_list, char *address, enum anonymous$29 address_type, unsigned int distance)
{
  struct stBrokerList *new_broker = (struct stBrokerList *)(void *)0;
  if(broker_list == ((struct stBrokerList **)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspAddBrokerToList", "Internal error trying to add a server address to the server redirection list.");
    return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
  }

  else
    if(address == ((char *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspAddBrokerToList", "Internal error trying to add a server address to the server redirection list.");
      return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
    }

    else
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc(sizeof(struct stBrokerList) /*272ul*/ );
      new_broker = (struct stBrokerList *)return_value_malloc$1;
      if(new_broker == ((struct stBrokerList *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspAddBrokerToList", "Failed to allocate memory for a new server address in the server redirection list.");
        return (enum anonymous$27)TSP_REDIRECT_CANT_ALLOCATE_MEM;
      }

      else
      {
        snprintf(new_broker->address, (unsigned long int)255, address);
        unsigned long int return_value_strlen$2;
        return_value_strlen$2=strlen(new_broker->address);
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen(address);
        if(!(return_value_strlen$2 == return_value_strlen$3))
        {
          free((void *)new_broker);
          Display(1, (enum tSeverityLevel)ELError, "tspAddBrokerToList", "Failed to set server Address in server redirection list: address too long.");
          return (enum anonymous$27)TSP_REDIRECT_ADDRESS_TRUNCATED;
        }

        else
        {
          new_broker->distance = distance;
          new_broker->address_type = address_type;
          new_broker->next = (struct stBrokerList *)(void *)0;
          if(*broker_list == ((struct stBrokerList *)NULL))
            *broker_list = new_broker;

          else
          {
            for( ; !((*broker_list)->next == ((struct stBrokerList *)NULL)); broker_list = &(*broker_list)->next)
              ;
            (*broker_list)->next = new_broker;
          }
          return (enum anonymous$27)TSP_REDIRECT_OK;
        }
      }
    }
}

// tspAddPayloadString
// file tsp_client.c line 173
char * tspAddPayloadString(struct stPayload *Payload, char *Addition)
{
  char *NewPayload;
  if(!(Addition == ((char *)NULL)))
  {
    if(Payload->PayloadCapacity == 0l)
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)2048);
      Payload->payload = (char *)return_value_malloc$1;
      NewPayload = Payload->payload;
      if(NewPayload == ((char *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspAddPayloadString", "Failed memory allocation.");
        return (char *)(void *)0;
      }

      *Payload->payload = (char)0;
      Payload->PayloadCapacity = (signed long int)2048;
    }

    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(Addition);
    if(!(Payload->PayloadCapacity >= 1l + Payload->size + (signed long int)(unsigned int)return_value_strlen$3))
    {
      Payload->PayloadCapacity = Payload->PayloadCapacity + (signed long int)2048;
      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)Payload->PayloadCapacity);
      NewPayload = (char *)return_value_malloc$2;
      if(NewPayload == ((char *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspAddPayloadString", "Failed memory allocation.");
        return (char *)(void *)0;
      }

      memcpy((void *)NewPayload, (const void *)Payload->payload, (unsigned long int)(Payload->size + (signed long int)1));
      free((void *)Payload->payload);
      Payload->payload = NewPayload;
    }

    strcat(Payload->payload, Addition);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(Addition);
    Payload->size = Payload->size + (signed long int)(unsigned int)return_value_strlen$4;
  }

  return Payload->payload;
}

// tspAuthenticate
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_auth.h line 27
unsigned int tspAuthenticate(signed int socket, unsigned int cap, struct net_tools *nt, struct stConf *conf, struct stBrokerList **broker_list, signed int version_index)
{
  unsigned int status = (unsigned int)(17 | 5 << 16);
  unsigned int Mechanism;
  signed int return_value_strcasecmp$1;
  return_value_strcasecmp$1=strcasecmp(conf->auth_method, "any");
  if(return_value_strcasecmp$1 == 0)
    Mechanism = (unsigned int)0x00F0;

  else
    Mechanism=tspSetCapability("AUTH", conf->auth_method);
  signed int return_value_strcasecmp$2;
  return_value_strcasecmp$2=strcasecmp(conf->auth_method, "anonymous");
  if(!(return_value_strcasecmp$2 == 0))
  {
    if(!((128u & Mechanism & cap) == 0u))
    {
      Display(3, (enum tSeverityLevel)ELInfo, "tspAuthenticate", "Using PASSDSS-3DES-1 authentication mechanism.");
      status=AuthPASSDSS_3DES_1(socket, nt, conf, broker_list);
      goto EndAuthenticate;
    }

    if(!((64u & Mechanism & cap) == 0u))
    {
      Display(3, (enum tSeverityLevel)ELInfo, "tspAuthenticate", "Using DIGEST-MD5 authentication mechanism.");
      status=AuthDIGEST_MD5(socket, nt, conf, broker_list, version_index);
      goto EndAuthenticate;
    }

    if(!((32u & Mechanism & cap) == 0u))
    {
      Display(3, (enum tSeverityLevel)ELInfo, "tspAuthenticate", "Using AUTH-PLAIN authentication mechanism.");
      status=AuthPLAIN(socket, nt, conf, broker_list);
      goto EndAuthenticate;
    }

  }

  else
    if(!((16u & Mechanism & cap) == 0u))
    {
      Display(3, (enum tSeverityLevel)ELInfo, "tspAuthenticate", "Using AUTH-ANONYMOUS authentication mechanism.");
      status=AuthANONYMOUS(socket, nt, conf, broker_list);
    }


EndAuthenticate:
  ;
  if((65535u & status) == 17u)
  {
    const char *szStrings[2l] = { "Server Authentication Capabilities: ", "Your Configured Authentication:     " };
    unsigned long int nWritten;
    char bufDisplay[256l];
    snprintf(bufDisplay, sizeof(char [256l]) /*256ul*/ , "%s", szStrings[(signed long int)0]);
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(szStrings[(signed long int)0]);
    nWritten = (unsigned long int)(unsigned int)return_value_strlen$3;
    tspFormatCapabilities(bufDisplay + (signed long int)nWritten, sizeof(char [256l]) /*256ul*/  - nWritten, cap);
    Display(1, (enum tSeverityLevel)ELWarning, "tspAuthenticate", bufDisplay);
    snprintf(bufDisplay, sizeof(char [256l]) /*256ul*/ , "%s", szStrings[(signed long int)1]);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(szStrings[(signed long int)1]);
    nWritten = (unsigned long int)(unsigned int)return_value_strlen$4;
    tspFormatCapabilities(bufDisplay + (signed long int)nWritten, sizeof(char [256l]) /*256ul*/  - nWritten, Mechanism);
    Display(1, (enum tSeverityLevel)ELWarning, "tspAuthenticate", bufDisplay);
    Display(1, (enum tSeverityLevel)ELError, "tspAuthenticate", "Failed to find common authentication method with server.");
  }

  return status;
}

// tspBuildCreateAcknowledge
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_req.h line 17
char * tspBuildCreateAcknowledge(void)
{
  static char *Request[5000l];
  memset((void *)Request, 0, sizeof(char *[5000l]) /*40000ul*/ );
  strcpy((char *)Request, "<tunnel action=\"accept\"></tunnel>\r\n");
  return (char *)Request;
}

// tspBuildCreateRequest
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/xml_req.h line 16
char * tspBuildCreateRequest(struct stConf *conf)
{
  static char *Request[5000l];
  memset((void *)Request, 0, sizeof(char *[5000l]) /*40000ul*/ );
  strcpy((char *)Request, "<tunnel action=\"create\" type=\"");
  if((signed int)conf->tunnel_mode == V6UDPV4)
    strcat((char *)Request, "v6udpv4");

  else
    if((signed int)conf->tunnel_mode == V6V4)
      strcat((char *)Request, "v6v4");

    else
      strcat((char *)Request, "v6anyv4");
  if((signed int)conf->proxy_client == TRUE)
    strcat((char *)Request, "\" proxy=\"yes\">\r\n");

  else
    strcat((char *)Request, "\" proxy=\"no\">\r\n");
  strcat((char *)Request, " <client>\r\n");
  static char Buffer[1024l];
  if(!((signed int)conf->tunnel_mode == V4V6))
    snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , "  <address type=\"ipv4\">%s</address>\r\n", conf->client_v4);

  strcat((char *)Request, Buffer);
  if((signed int)conf->keepalive == TRUE)
  {
    if(!((signed int)conf->tunnel_mode == V4V6))
      snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , "  <keepalive interval=\"%d\">\r\n    <address type=\"ipv6\">::</address>\r\n  </keepalive>\r\n", conf->keepalive_interval);

    strcat((char *)Request, Buffer);
  }

  signed int tmp_statement_expression$7;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$8;
  return_value___builtin_strcmp$8=__builtin_strcmp(conf->host_type, "router");
  tmp_statement_expression$7 = return_value___builtin_strcmp$8;
  signed int tmp_statement_expression$1;
  signed int tmp_statement_expression$5;
  if(tmp_statement_expression$7 == 0)
  {
    strcat((char *)Request, "  <router");
    unsigned long int tspBuildCreateRequest$$1$$3$$1$$__s1_len;
    unsigned long int tspBuildCreateRequest$$1$$3$$1$$__s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(conf->protocol, "default_route");
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(!(tmp_statement_expression$1 == 0))
    {
      snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , " protocol=\"%s\"", conf->protocol);
      strcat((char *)Request, Buffer);
    }

    strcat((char *)Request, ">\r\n");
    if(conf->prefixlen == 0)
    {
      if(!((signed int)conf->tunnel_mode == V4V6))
        conf->prefixlen = 48;

    }

    snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , "   <prefix length=\"%d\"/>\r\n", conf->prefixlen);
    strcat((char *)Request, Buffer);
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(conf->dns_server);
    if(!(return_value_strlen$3 == 0ul))
    {
      char *tspBuildCreateRequest$$1$$3$$4$$Server;
      strcat((char *)Request, "   <dns_server>\r\n");
      tspBuildCreateRequest$$1$$3$$4$$Server=strtok(conf->dns_server, ":");
      while(!(tspBuildCreateRequest$$1$$3$$4$$Server == ((char *)NULL)))
      {
        snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , "     <address type=\"dn\">%s</address>\r\n", tspBuildCreateRequest$$1$$3$$4$$Server);
        strcat((char *)Request, Buffer);
        tspBuildCreateRequest$$1$$3$$4$$Server=strtok((char *)(void *)0, ":");
      }
      strcat((char *)Request, "   </dns_server>\r\n");
    }

    unsigned long int tspBuildCreateRequest$$1$$3$$5$$__s1_len;
    unsigned long int tspBuildCreateRequest$$1$$3$$5$$__s2_len;
    signed int return_value___builtin_strcmp$6;
    return_value___builtin_strcmp$6=__builtin_strcmp(conf->protocol, "default_route");
    tmp_statement_expression$5 = return_value___builtin_strcmp$6;
    if(tmp_statement_expression$5 == 0)
    {
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(conf->routing_info);
      if(return_value_strlen$4 >= 1ul)
      {
        snprintf(Buffer, sizeof(char [1024l]) /*1024ul*/ , "    %s\r\n", conf->routing_info);
        strcat((char *)Request, Buffer);
      }

    }

    strcat((char *)Request, "  </router>\r\n");
  }

  strcat((char *)Request, " </client>\r\n");
  strcat((char *)Request, "</tunnel>\r\n");
  return (char *)Request;
}

// tspCheckForStopOrWait
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 56
extern signed int tspCheckForStopOrWait(const unsigned int uiWaitMs)
{
  if(indSigHUP == 0)
    usleep(uiWaitMs * (unsigned int)1000);

  return indSigHUP;
}

// tspClearTunnelInfo
// file xml_tun.c line 352
void tspClearTunnelInfo(struct stTunnel *Tunnel)
{
  if(!(Tunnel == ((struct stTunnel *)NULL)))
  {
    tspFree(Tunnel->action);
    tspFree(Tunnel->type);
    tspFree(Tunnel->lifetime);
    tspFree(Tunnel->proxy);
    tspFree(Tunnel->mtu);
    tspFree(Tunnel->client_address_ipv4);
    tspFree(Tunnel->client_address_ipv6);
    tspFree(Tunnel->client_dns_server_address_ipv6);
    tspFree(Tunnel->client_dns_name);
    tspFree(Tunnel->server_address_ipv4);
    tspFree(Tunnel->server_address_ipv6);
    tspFree(Tunnel->router_protocol);
    tspFree(Tunnel->prefix_length);
    tspFree(Tunnel->prefix);
    tspFree(Tunnel->client_as);
    tspFree(Tunnel->server_as);
    tspFree(Tunnel->keepalive_interval);
    tspFree(Tunnel->keepalive_address);
    tspFreeLinkedList(Tunnel->dns_server_address_ipv4);
    tspFreeLinkedList(Tunnel->dns_server_address_ipv6);
    tspFreeLinkedList(Tunnel->broker_address_ipv4);
    tspFreeLinkedList(Tunnel->broker_redirect_ipv4);
    tspFreeLinkedList(Tunnel->broker_redirect_ipv6);
    tspFreeLinkedList(Tunnel->broker_redirect_dn);
  }

}

// tspClose
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 45
unsigned int tspClose(signed int sock, struct net_tools *nt)
{
  signed int ret;
  ret=nt->netclose(sock);
  return (unsigned int)(ret == 0 ? 0 : 10 | 0 << 16);
}

// tspConnect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 44
unsigned int tspConnect(signed int *p_sock, char *srvname, unsigned short int srvport, struct net_tools *nt)
{
  signed int ret;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  ret=nt->netopen(p_sock, srvname, srvport);
  if(ret == 0)
  {
    status = (unsigned int)(0 | 3 << 16);
    status = (unsigned int)(8 | 3 << 16);
    status = (unsigned int)(9 | 3 << 16);
  }

  return status;
}

// tspCreateBrokerList
// file tsp_redirect.c line 166
enum anonymous$27 tspCreateBrokerList(struct stTunnel *tunnel_info, struct stBrokerList **broker_list, signed int *broker_count)
{
  struct stLinkedList *current_broker = (struct stLinkedList *)(void *)0;
  tspFreeBrokerList(*broker_list);
  *broker_list = (struct stBrokerList *)(void *)0;
  *broker_count = 0;
  current_broker = tunnel_info->broker_redirect_ipv4;
  for( ; !(current_broker == ((struct stLinkedList *)NULL)); current_broker = current_broker->next)
    if(!(*broker_count >= 50))
    {
      enum anonymous$27 return_value_tspAddBrokerToList$1;
      return_value_tspAddBrokerToList$1=tspAddBrokerToList(broker_list, current_broker->Value, (enum anonymous$29)TSP_REDIRECT_BROKER_TYPE_IPV4, (unsigned int)0);
      if(!((signed int)return_value_tspAddBrokerToList$1 == TSP_REDIRECT_OK))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Failed to add a new server address while creating the server redirection list.");
        tspFreeBrokerList(*broker_list);
        *broker_list = (struct stBrokerList *)(void *)0;
        return (enum anonymous$27)TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST;
      }

      else
        *broker_count = *broker_count + 1;
    }

    else
    {
      Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Too many entries in the server redirection list than the allowed limit (%u). Discarding.", 50);
      tspFreeBrokerList(*broker_list);
      *broker_list = (struct stBrokerList *)(void *)0;
      return (enum anonymous$27)TSP_REDIRECT_TOO_MANY_BROKERS;
    }
  current_broker = tunnel_info->broker_redirect_ipv6;
  for( ; !(current_broker == ((struct stLinkedList *)NULL)); current_broker = current_broker->next)
    if(!(*broker_count >= 50))
    {
      enum anonymous$27 return_value_tspAddBrokerToList$2;
      return_value_tspAddBrokerToList$2=tspAddBrokerToList(broker_list, current_broker->Value, (enum anonymous$29)TSP_REDIRECT_BROKER_TYPE_IPV6, (unsigned int)0);
      if(!((signed int)return_value_tspAddBrokerToList$2 == TSP_REDIRECT_OK))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Failed to add a new server address while creating the server redirection list.");
        tspFreeBrokerList(*broker_list);
        *broker_list = (struct stBrokerList *)(void *)0;
        return (enum anonymous$27)TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST;
      }

      else
        *broker_count = *broker_count + 1;
    }

    else
    {
      Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Too many entries in the server redirection list than the allowed limit (%u). Discarding.", 50);
      tspFreeBrokerList(*broker_list);
      *broker_list = (struct stBrokerList *)(void *)0;
      return (enum anonymous$27)TSP_REDIRECT_TOO_MANY_BROKERS;
    }
  current_broker = tunnel_info->broker_redirect_dn;
  for( ; !(current_broker == ((struct stLinkedList *)NULL)); current_broker = current_broker->next)
    if(!(*broker_count >= 50))
    {
      enum anonymous$27 return_value_tspAddBrokerToList$3;
      return_value_tspAddBrokerToList$3=tspAddBrokerToList(broker_list, current_broker->Value, (enum anonymous$29)TSP_REDIRECT_BROKER_TYPE_FQDN, (unsigned int)0);
      if(!((signed int)return_value_tspAddBrokerToList$3 == TSP_REDIRECT_OK))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Failed to add a new server address while creating the server redirection list.");
        tspFreeBrokerList(*broker_list);
        *broker_list = (struct stBrokerList *)(void *)0;
        return (enum anonymous$27)TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST;
      }

      else
        *broker_count = *broker_count + 1;
    }

    else
    {
      Display(1, (enum tSeverityLevel)ELError, "tspCreateBrokerList", "Too many entries in the server redirection list than the allowed limit (%u). Discarding.", 50);
      tspFreeBrokerList(*broker_list);
      *broker_list = (struct stBrokerList *)(void *)0;
      return (enum anonymous$27)TSP_REDIRECT_TOO_MANY_BROKERS;
    }
  return (enum anonymous$27)TSP_REDIRECT_OK;
}

// tspDoEchoRequest
// file net_echo_request.c line 495
extern enum anonymous$27 tspDoEchoRequest(char *address, enum anonymous$29 address_type, struct stConf *conf, unsigned int *distance)
{
  struct rttengine_statistics *engine = (struct rttengine_statistics *)(void *)0;
  struct addrinfo *address_info = (struct addrinfo *)(void *)0;
  struct addrinfo *address_info_root = (struct addrinfo *)(void *)0;
  signed int sfd;
  enum anonymous$38 socket_address_status = (enum anonymous$38)SOCKET_ADDRESS_OK;
  enum anonymous$27 status = (enum anonymous$27)TSP_REDIRECT_OK;
  *distance = (unsigned int)0;
  socket_address_status=getSocketAddress(address, address_type, conf->tunnel_mode, &address_info_root, &address_info);
  if((signed int)socket_address_status == SOCKET_ADDRESS_WRONG_FAMILY)
  {
    *distance = (unsigned int)(10 * 1000 * 3);
    Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Server address %s is not compatible with the configured tunnel mode.", address);
  }

  else
    if((signed int)socket_address_status == SOCKET_ADDRESS_ERROR)
    {
      *distance = (unsigned int)(10 * 1000 * 2);
      if(!(address_info_root == ((struct addrinfo *)NULL)))
        freeaddrinfo(address_info_root);

      Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Failed to create an address structure to send an echo request to %s.", address);
      return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
    }

    else
      if((signed int)socket_address_status == SOCKET_ADDRESS_PROBLEM_RESOLVING)
      {
        *distance = (unsigned int)(10 * 1000 * 2);
        if(!(address_info_root == ((struct addrinfo *)NULL)))
          freeaddrinfo(address_info_root);

        Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Failed to resolve %s to an IP address.", address);
        return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
      }

  sfd=createConnectedSocket(address_info);
  if(sfd == -1)
  {
    *distance = *distance + (unsigned int)(10 * 1000 * 2);
    if(!(address_info_root == ((struct addrinfo *)NULL)))
      freeaddrinfo(address_info_root);

    destroySocket(sfd);
    Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Failed to create a connected socket to send an echo request to %s.", address);
    return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
  }

  else
  {
    if(!(address_info_root == ((struct addrinfo *)NULL)))
      freeaddrinfo(address_info_root);

    engine=createStatEngine();
    if(engine == ((struct rttengine_statistics *)NULL))
    {
      *distance = *distance + (unsigned int)(10 * 1000 * 2);
      destroySocket(sfd);
      Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Failed to allocate a stat engine to send an echo request to %s.", address);
      return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
    }

    else
    {
      signed int return_value_rttengine_init$1;
      return_value_rttengine_init$1=rttengine_init(engine);
      if(!(return_value_rttengine_init$1 == 1))
      {
        *distance = *distance + (unsigned int)(10 * 1000 * 2);
        destroySocket(sfd);
        free((void *)engine);
        Display(1, (enum tSeverityLevel)ELError, "tspDoEchoRequest", "Failed to initialize a stat engine to send an echo request to %s.", address);
        return (enum anonymous$27)TSP_REDIRECT_ECHO_REQUEST_ERROR;
      }

      else
      {
        status=timeEchoRequestReply(sfd, address, engine, distance);
        destroySocket(sfd);
        rttengine_deinit(engine, (void *)0, (void *)0);
        free((void *)engine);
        return status;
      }
    }
  }
}

// tspExtractCapability
// file tsp_cap.c line 26
unsigned int tspExtractCapability(char *String)
{
  unsigned int flags = (unsigned int)0;
  char *s;
  char *e;
  char *Token;
  char *Value;
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(String);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)1);
  Token = (char *)return_value_malloc$2;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(String);
  void *return_value_malloc$4;
  return_value_malloc$4=malloc(return_value_strlen$3 + (unsigned long int)1);
  Value = (char *)return_value_malloc$4;
  *Value = (char)0;
  *Token = *Value;
  e = String + (signed long int)11;
  s = e;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  for( ; !(*e == 0); e = e + 1l)
  {
    if((signed int)*e == 32)
      tmp_if_expr$6 = (_Bool)1;

    else
      tmp_if_expr$6 = (signed int)*e == 13 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (_Bool)1;

    else
      tmp_if_expr$7 = (signed int)*e == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$7)
      tmp_if_expr$8 = (_Bool)1;

    else
      tmp_if_expr$8 = (signed int)*e == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$8)
    {
      if(!(s == e))
      {
        if(!(*Token == 0))
        {
          if((signed int)*Value == 0)
          {
            len = (signed int)((char *)e - (char *)s);
            memcpy((void *)Value, (const void *)s, (unsigned long int)len);
            Value[(signed long int)len] = (char)0;
          }

        }

        if(!(*Token == 0))
        {
          if(!(*Value == 0))
          {
            unsigned int return_value_tspSetCapability$5;
            return_value_tspSetCapability$5=tspSetCapability(Token, Value);
            flags = flags | return_value_tspSetCapability$5;
            *Token = (char)0;
            *Value = *Token;
          }

        }

      }

      e = e + 1l;
      s = e;
    }

    if((signed int)*e == 61)
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = (signed int)*e == 32 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
      tmp_if_expr$10 = (_Bool)1;

    else
      tmp_if_expr$10 = (signed int)*e == 13 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$10)
      tmp_if_expr$11 = (_Bool)1;

    else
      tmp_if_expr$11 = (signed int)*e == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$11)
      tmp_if_expr$12 = (_Bool)1;

    else
      tmp_if_expr$12 = (signed int)*e == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$12)
    {
      if(!(e == s))
      {
        len = (signed int)((char *)e - (char *)s);
        memcpy((void *)Token, (const void *)s, (unsigned long int)len);
        Token[(signed long int)len] = (char)0;
        e = e + 1l;
        s = e;
      }

    }

  }
  free((void *)Token);
  free((void *)Value);
  return flags;
}

// tspExtractPayload
// file tsp_client.c line 126
signed int tspExtractPayload(char *Payload, struct stTunnel *t)
{
  char *p;
  signed int rc;
  memset((void *)t, 0, sizeof(struct stTunnel) /*200ul*/ );
  Display(3, (enum tSeverityLevel)ELInfo, "tspExtractPayload", "Processing server reply.");
  char *return_value___builtin_strchr$1;
  return_value___builtin_strchr$1=__builtin_strchr(Payload, 10);
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(return_value___builtin_strchr$1, 60);
  p = return_value___builtin_strchr$2;
  if(p == ((char *)NULL))
    return 1;

  else
  {
    rc=tspXMLParse(p, t);
    if(!(rc == 0))
      return 1;

    else
      return 0;
  }
}

// tspFormatCapabilities
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 46
char * tspFormatCapabilities(char *szBuffer, const unsigned long int bufLen, const unsigned int cap)
{
  unsigned long int nWritten = (unsigned long int)0;
  static const char *authTab[5l] = { "Any, ", "Passdss-3des-1, ", "Digest MD5, ", "Anonymous, ", "Plain, " };
  if((128u & cap) == 128u)
  {
    __builtin_strncpy(szBuffer + (signed long int)nWritten, authTab[(signed long int)1], bufLen - nWritten);
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(authTab[(signed long int)1]);
    nWritten = nWritten + return_value_strlen$1;
  }

  if((64u & cap) == 64u)
  {
    __builtin_strncpy(szBuffer + (signed long int)nWritten, authTab[(signed long int)2], bufLen - nWritten);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(authTab[(signed long int)2]);
    nWritten = nWritten + return_value_strlen$2;
  }

  if((16u & cap) == 16u && !((240u & cap) == 240u))
  {
    __builtin_strncpy(szBuffer + (signed long int)nWritten, authTab[(signed long int)3], bufLen - nWritten);
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(authTab[(signed long int)3]);
    nWritten = nWritten + return_value_strlen$3;
  }

  if((32u & cap) == 32u)
  {
    __builtin_strncpy(szBuffer + (signed long int)nWritten, authTab[(signed long int)4], bufLen - nWritten);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(authTab[(signed long int)4]);
    nWritten = nWritten + return_value_strlen$4;
  }

  if(nWritten >= 3ul)
    szBuffer[(signed long int)(nWritten - (unsigned long int)2)] = (char)0;

  return szBuffer;
}

// tspFree
// file xml_tun.c line 332
void tspFree(char *var)
{
  if(!(var == ((char *)NULL)))
    free((void *)var);

}

// tspFreeBrokerList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 92
extern enum anonymous$27 tspFreeBrokerList(struct stBrokerList *broker_list)
{
  struct stBrokerList *next_broker = (struct stBrokerList *)(void *)0;
  for( ; !(broker_list == ((struct stBrokerList *)NULL)); broker_list = next_broker)
  {
    next_broker = broker_list->next;
    free((void *)broker_list);
  }
  return (enum anonymous$27)TSP_REDIRECT_OK;
}

// tspFreeLinkedList
// file xml_tun.c line 337
void tspFreeLinkedList(struct stLinkedList *list)
{
  if(!(list == ((struct stLinkedList *)NULL)))
  {
    if(!(list->next == ((struct stLinkedList *)NULL)))
    {
      tspFreeLinkedList(list->next);
      free((void *)list->next);
      list->next = (struct stLinkedList *)(void *)0;
    }

    if(!(list->Value == ((char *)NULL)))
    {
      free((void *)list->Value);
      list->Value = (char *)(void *)0;
    }

  }

}

// tspGetBrokerDistance
// file net_echo_request.c line 110
void * tspGetBrokerDistance(void *threadarg)
{
  struct stBrokerTimingThreadArg *arguments = (struct stBrokerTimingThreadArg *)(void *)0;
  struct stBrokerList *tspGetBrokerDistance$$1$$broker = (struct stBrokerList *)(void *)0;
  struct stConf *conf = (struct stConf *)(void *)0;
  enum anonymous$27 status = (enum anonymous$27)TSP_REDIRECT_OK;
  unsigned int distance = (unsigned int)0;
  if(threadarg == NULL)
  {
    pthread_exit((void *)-1);
    return (void *)-1;
  }

  else
  {
    arguments = (struct stBrokerTimingThreadArg *)threadarg;
    tspGetBrokerDistance$$1$$broker = (struct stBrokerList *)arguments->broker;
    conf = (struct stConf *)arguments->conf;
    status=tspDoEchoRequest(tspGetBrokerDistance$$1$$broker->address, tspGetBrokerDistance$$1$$broker->address_type, conf, &distance);
    tspGetBrokerDistance$$1$$broker->distance = distance;
    pthread_exit((void *)status);
    return (void *)status;
  }
}

// tspGetBrokerDistances
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 88
extern enum anonymous$27 tspGetBrokerDistances(struct stBrokerList *broker_list, signed int broker_count, struct stConf *conf)
{
  signed int rc = 0;
  signed int t = 0;
  enum anonymous$27 status = (enum anonymous$27)TSP_REDIRECT_OK;
  void *thread_status = NULL;
  unsigned long int *threads = (unsigned long int *)(void *)0;
  struct stBrokerTimingThreadArg *thread_arguments = (struct stBrokerTimingThreadArg *)(void *)0;
  struct stBrokerList *broker_list_index = (struct stBrokerList *)(void *)0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)broker_count * sizeof(unsigned long int) /*8ul*/ );
  threads = (unsigned long int *)return_value_malloc$1;
  if(threads == ((unsigned long int *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspGetBrokerDistances", "Failed to allocate memory for the server timing threads.");
    return (enum anonymous$27)TSP_REDIRECT_CANT_MALLOC_THREAD_ARRAY;
  }

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)broker_count * sizeof(struct stBrokerTimingThreadArg) /*16ul*/ );
    thread_arguments = (struct stBrokerTimingThreadArg *)return_value_malloc$2;
    if(thread_arguments == ((struct stBrokerTimingThreadArg *)NULL))
    {
      free((void *)threads);
      Display(1, (enum tSeverityLevel)ELError, "tspGetBrokerDistances", "Failed to allocate memory for the server timing thread arguments.");
      return (enum anonymous$27)TSP_REDIRECT_CANT_MALLOC_THREAD_ARGS;
    }

    else
    {
      broker_list_index = broker_list;
      t = 0;
      for( ; !(broker_list_index == ((struct stBrokerList *)NULL)) && !(t >= broker_count); t = t + 1)
      {
        Display(3, (enum tSeverityLevel)ELInfo, "tspGetBrokerDistances", "Creating server timing thread for %s.", (const void *)broker_list_index->address);
        (thread_arguments + (signed long int)t)->broker = broker_list_index;
        (thread_arguments + (signed long int)t)->conf = conf;
        rc=pthread_create(&threads[(signed long int)t], (const union pthread_attr_t *)(void *)0, tspGetBrokerDistance, (void *)&thread_arguments[(signed long int)t]);
        if(!(rc == 0))
        {
          free((void *)threads);
          free((void *)thread_arguments);
          Display(1, (enum tSeverityLevel)ELError, "tspGetBrokerDistances", "Failed to create timing thread for %s.", (const void *)broker_list_index->address);
          return (enum anonymous$27)TSP_REDIRECT_CANT_CREATE_THREAD;
        }

        broker_list_index = broker_list_index->next;
      }
      broker_list_index = broker_list;
      t = 0;
      for( ; !(broker_list_index == ((struct stBrokerList *)NULL)) && !(t >= broker_count); t = t + 1)
      {
        Display(3, (enum tSeverityLevel)ELInfo, "tspGetBrokerDistances", "Waiting for %s timing thread to complete.", (const void *)broker_list_index->address);
        rc=pthread_join(threads[(signed long int)t], (void **)&thread_status);
        if(!(rc == 0))
        {
          free((void *)threads);
          free((void *)thread_arguments);
          Display(1, (enum tSeverityLevel)ELError, "tspGetBrokerDistances", "Failed to wait for %s timing thread to complete.", (const void *)broker_list_index->address);
          return (enum anonymous$27)TSP_REDIRECT_CANT_WAIT_FOR_THREAD;
        }

        status = (enum anonymous$27)thread_status;
        if((signed int)status == TSP_REDIRECT_OK)
          Display(3, (enum tSeverityLevel)ELInfo, "tspGetBrokerDistances", "server timing for %s completed successfully (%u ms).", (const void *)broker_list_index->address, broker_list_index->distance);

        else
          if((signed int)status == TSP_REDIRECT_ECHO_REQUEST_TIMEOUT)
            Display(3, (enum tSeverityLevel)ELInfo, "tspGetBrokerDistances", "A timeout occurred during server timing for %s.", (const void *)broker_list_index->address);

          else
            Display(1, (enum tSeverityLevel)ELError, "tspGetBrokerDistances", "An error occurred during server timing for %s.", (const void *)broker_list_index->address);
        broker_list_index = broker_list_index->next;
      }
      free((void *)threads);
      free((void *)thread_arguments);
      return (enum anonymous$27)TSP_REDIRECT_OK;
    }
  }
}

// tspGetCapabilities
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 45
unsigned int tspGetCapabilities(signed int socket, struct net_tools *nt, unsigned int *capability, signed int version_index, struct stConf *conf, struct stBrokerList **broker_list)
{
  char dataout[256l];
  char datain[4096l];
  signed int tsp_status;
  unsigned int status = (unsigned int)(0 | 4 << 16);
  memset((void *)datain, 0, sizeof(char [4096l]) /*4096ul*/ );
  snprintf(dataout, sizeof(char [256l]) /*256ul*/ , "VERSION=%s\r\n", TSPProtoVerStr[(signed long int)version_index]);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(dataout);
  signed int return_value;
  return_value=nt->netsendrecv(socket, dataout, (signed int)(unsigned int)return_value_strlen$1, datain, (signed int)sizeof(char [4096l]) /*4096ul*/ );
  if(return_value == -1)
    return (unsigned int)(10 | 4 << 16);

  else
  {
    signed int return_value_memcmp$5;
    return_value_memcmp$5=memcmp((const void *)"CAPABILITY ", (const void *)datain, (unsigned long int)11);
    if(return_value_memcmp$5 == 0)
      *capability=tspExtractCapability(datain);

    else
    {
      tsp_status=tspGetStatusCode(datain);
      signed int return_value_tspIsRedirectStatus$4;
      return_value_tspIsRedirectStatus$4=tspIsRedirectStatus(tsp_status);
      if(!(return_value_tspIsRedirectStatus$4 == 0))
      {
        enum anonymous$27 return_value_tspHandleRedirect$2;
        return_value_tspHandleRedirect$2=tspHandleRedirect(datain, conf, broker_list);
        if((signed int)return_value_tspHandleRedirect$2 == TSP_REDIRECT_OK)
          status = (unsigned int)(57345 | 4 << 16);

        else
          status = (unsigned int)(14 | 4 << 16);
      }

      else
      {
        if(tsp_status == 530)
        {
          Display(1, (enum tSeverityLevel)ELWarning, "tspGetCapabilities", "The server is too busy to process your TSP request.");
          status = (unsigned int)(12 | 4 << 16);
          Display(1, (enum tSeverityLevel)ELWarning, "tspGetCapabilities", "TSP version not supported by server: %s.", TSPProtoVerStr[(signed long int)version_index]);
          status = (unsigned int)(11 | 4 << 16);
        }

        const char *return_value_tspGetTspStatusStr$3;
        return_value_tspGetTspStatusStr$3=tspGetTspStatusStr(tsp_status);
        Display(1, (enum tSeverityLevel)ELError, "tspGetCapabilities", "A TSP error occurred. Status: %d. Info: %s", tsp_status, return_value_tspGetTspStatusStr$3);
        status = (unsigned int)(13 | 4 << 16);
        Display(1, (enum tSeverityLevel)ELError, "tspGetCapabilities", "Failed to retrieve TSP capabilities.");
      }
    }
    return status;
  }
}

// tspGetErrorByCode
// file lib.c line 102
char * tspGetErrorByCode(signed int code)
{
  signed int i;
  i=GetSizeOfNullTerminatedArray(TspErrorCodesArray);
  static char buf[1024l];
  if(code >= 0 && !(code >= i))
    return TspErrorCodesArray[(signed long int)code];

  else
    snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "%i is not defined as a client error. Might be a TSP error?", code);
  return buf;
}

// tspGetLocalAddress
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 58
extern char * tspGetLocalAddress(signed int socket, char *buffer, signed int size)
{
  struct sockaddr_in6 addr;
  struct sockaddr_in *addr_v4 = (struct sockaddr_in *)&addr;
  struct sockaddr_in6 *addr_v6 = (struct sockaddr_in6 *)&addr;
  unsigned int len = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;
  signed int return_value_getsockname$1;
  return_value_getsockname$1=getsockname(socket, (struct sockaddr *)&addr, &len);
  const char *return_value_inet_ntop$2;
  const char *return_value_inet_ntop$3;
  if(!(return_value_getsockname$1 >= 0))
  {
    Display(1, (enum tSeverityLevel)ELError, "TryServer", "Failed to find source IP address.");
    return (char *)(void *)0;
  }

  else
    if((signed int)addr.sin6_family == 10)
    {
      return_value_inet_ntop$2=inet_ntop(10, (const void *)&addr_v6->sin6_addr, buffer, (unsigned int)size);
      return (char *)return_value_inet_ntop$2;
    }

    else
    {
      return_value_inet_ntop$3=inet_ntop(2, (const void *)&addr_v4->sin_addr, buffer, (unsigned int)size);
      return (char *)return_value_inet_ntop$3;
    }
}

// tspGetOSInfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 57
extern void tspGetOSInfo(const unsigned long int len, char *buf)
{
  if(len >= 1ul && !(buf == ((char *)NULL)))
    snprintf(buf, len, "Built on ///%s///", (const void *)"Linux mt-farm02 3.16.0-4-amd64 #1 SMP Debian 3.16.7-ckt9-3~deb8u1 (2015-04-24) x86_64 GNU/Linux");

}

// tspGetStatusCode
// file tsp_client.c line 147
signed int tspGetStatusCode(char *payload)
{
  signed int tmp_if_expr$2;
  signed int return_value_atoi$1;
  if(!(payload == ((char *)NULL)))
  {
    return_value_atoi$1=atoi$link1(payload);
    tmp_if_expr$2 = return_value_atoi$1;
  }

  else
    tmp_if_expr$2 = 0;
  return tmp_if_expr$2;
}

// tspGetTspStatusStr
// file tsp_client.c line 156
const char * tspGetTspStatusStr(signed int tsp_status)
{
  unsigned int i = (unsigned int)0;
  for( ; !(TSP_PROTOCOL_CODES_STR[(signed long int)i].status == 0); i = i + 1u)
    if(TSP_PROTOCOL_CODES_STR[(signed long int)i].status == tsp_status)
      return TSP_PROTOCOL_CODES_STR[(signed long int)i].status_str;

  return (const char *)(void *)0;
}

// tspGoDaemon
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 63
extern signed int tspGoDaemon(struct stConf *c)
{
  signed int return_value_getppid$2;
  if(c->nodaemon == /*enum*/FALSE)
  {
    return_value_getppid$2=getppid();
    if(!(return_value_getppid$2 == 1))
    {
      Display(3, (enum tSeverityLevel)ELInfo, "tspGoDaemon", "Going daemon.");
      signed int return_value_daemon$1;
      return_value_daemon$1=daemon(1, 0);
      if(return_value_daemon$1 == -1)
      {
        Display(1, (enum tSeverityLevel)ELError, "tspGoDaemon", "Failed to fork.");
        return -1;
      }

    }

  }

  return 0;
}

// tspHandleRedirect
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 93
extern enum anonymous$27 tspHandleRedirect(char *payload, struct stConf *conf, struct stBrokerList **broker_list)
{
  struct stTunnel tunnel_info;
  signed int broker_count = 0;
  tspLogReceivedRedirection(payload, conf);
  signed int return_value_tspExtractPayload$1;
  return_value_tspExtractPayload$1=tspExtractPayload(payload, &tunnel_info);
  if(!(return_value_tspExtractPayload$1 == 0))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to parse the XML payload while handling server redirection.");
    return (enum anonymous$27)TSP_REDIRECT_CANT_EXTRACT_PAYLOAD;
  }

  else
  {
    enum anonymous$27 return_value_tspCreateBrokerList$2;
    return_value_tspCreateBrokerList$2=tspCreateBrokerList(&tunnel_info, broker_list, &broker_count);
    if(!((signed int)return_value_tspCreateBrokerList$2 == TSP_REDIRECT_OK))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to create the server redirection list.");
      return (enum anonymous$27)TSP_REDIRECT_CANT_CREATE_LIST;
    }

    else
    {
      enum anonymous$27 return_value_tspLogRedirectionList$3;
      return_value_tspLogRedirectionList$3=tspLogRedirectionList(*broker_list, 0);
      if(!((signed int)return_value_tspLogRedirectionList$3 == TSP_REDIRECT_OK))
        Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to log server redirection details.");

      if(broker_count >= 2)
      {
        enum anonymous$27 return_value_tspSortBrokerList$4;
        return_value_tspSortBrokerList$4=tspSortBrokerList(broker_list, conf, broker_count);
        if(!((signed int)return_value_tspSortBrokerList$4 == TSP_REDIRECT_OK))
        {
          Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to sort the server redirection list.");
          return (enum anonymous$27)TSP_REDIRECT_CANT_SORT_LIST;
        }

        enum anonymous$27 return_value_tspLogRedirectionList$5;
        return_value_tspLogRedirectionList$5=tspLogRedirectionList(*broker_list, 1);
        if(!((signed int)return_value_tspLogRedirectionList$5 == TSP_REDIRECT_OK))
          Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to log server redirection details.");

        enum anonymous$27 return_value_tspWriteBrokerListToFile$6;
        return_value_tspWriteBrokerListToFile$6=tspWriteBrokerListToFile(conf->broker_list_file, *broker_list);
        if(!((signed int)return_value_tspWriteBrokerListToFile$6 == TSP_REDIRECT_OK))
          Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Failed to write the server redirection list to file.");

      }

      if(broker_count == 0)
      {
        Display(1, (enum tSeverityLevel)ELError, "tspHandleRedirect", "Received an empty server address list while handling server redirection.");
        return (enum anonymous$27)TSP_REDIRECT_EMPTY_BROKER_LIST;
      }

      else
        return (enum anonymous$27)TSP_REDIRECT_OK;
    }
  }
}

// tspInitialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/config.h line 148
unsigned int tspInitialize(signed int argc, char **argv, struct stConf *pConf)
{
  struct stConf CmdLine;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  const char *cszTemplDir = "template";
  pConf->syslog = (enum anonymous$0)FALSE;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup("default_route");
  pConf->protocol = return_value___strdup$1;
  char *return_value___strdup$2;
  return_value___strdup$2=__strdup("");
  pConf->routing_info = return_value___strdup$2;
  memset((void *)&CmdLine, 0, sizeof(struct stConf) /*360ul*/ );
  if(argc >= 2)
    ParseArguments(argc, argv, &CmdLine);

  status=tspReadConfigFile(FileName, pConf);
  if(!((65535u & status) == 0u))
    return status;

  else
  {
    if(!(CmdLine.if_tunnel_v6v4 == ((char *)NULL)))
      pConf->if_tunnel_v6v4 = CmdLine.if_tunnel_v6v4;

    if(!(CmdLine.if_tunnel_v6udpv4 == ((char *)NULL)))
      pConf->if_tunnel_v6udpv4 = CmdLine.if_tunnel_v6udpv4;

    if(!(CmdLine.client_v4 == ((char *)NULL)))
      pConf->client_v4 = CmdLine.client_v4;

    pConf->boot_mode = CmdLine.boot_mode;
    pConf->nodaemon = CmdLine.nodaemon;
    pConf->no_questions = CmdLine.no_questions;
    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(pConf->tsp_dir);
    if(!(return_value_strlen$9 == 0ul))
    {
      TspHomeDir = pConf->tsp_dir;
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(pConf->tsp_dir);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(cszTemplDir);
      void *return_value_malloc$5;
      return_value_malloc$5=malloc((unsigned long int)(return_value_strlen$3 + return_value_strlen$4 + (unsigned long int)2));
      ScriptDir = (char *)return_value_malloc$5;
      if(ScriptDir == ((char *)NULL))
      {
        DirectErrorMessage("Failed memory allocation.");
        return (unsigned int)(2 | 1 << 16);
      }

      sprintf(ScriptDir, "%s%c%s", pConf->tsp_dir, DirSeparator, cszTemplDir);
    }

    else
    {
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(TspHomeDir);
      unsigned long int return_value_strlen$7;
      return_value_strlen$7=strlen(cszTemplDir);
      void *return_value_malloc$8;
      return_value_malloc$8=malloc((unsigned long int)(return_value_strlen$6 + return_value_strlen$7 + (unsigned long int)2));
      ScriptDir = (char *)return_value_malloc$8;
      if(ScriptDir == ((char *)NULL))
      {
        DirectErrorMessage("Failed memory allocation.");
        return (unsigned int)(2 | 1 << 16);
      }

      sprintf(ScriptDir, "%s%c%s", TspHomeDir, DirSeparator, cszTemplDir);
    }
    return (unsigned int)(0 | 1 << 16);
  }
}

// tspInsertInBrokerList
// file tsp_redirect.c line 246
enum anonymous$27 tspInsertInBrokerList(struct stBrokerList *new_element, struct stBrokerList **sorted_list)
{
  struct stBrokerList *compared_broker = (struct stBrokerList *)(void *)0;
  struct stBrokerList *precedent_broker = (struct stBrokerList *)(void *)0;
  if(*sorted_list == ((struct stBrokerList *)NULL))
    *sorted_list = new_element;

  else
  {
    compared_broker = *sorted_list;
    for( ; !(compared_broker == ((struct stBrokerList *)NULL)); compared_broker = compared_broker->next)
    {
      if(compared_broker->distance >= new_element->distance)
        break;

      precedent_broker = compared_broker;
    }
    new_element->next = compared_broker;
    if(!(precedent_broker == ((struct stBrokerList *)NULL)))
      precedent_broker->next = new_element;

    else
      *sorted_list = new_element;
  }
  return (enum anonymous$27)TSP_REDIRECT_OK;
}

// tspIsRedirectStatus
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 90
extern signed int tspIsRedirectStatus(signed int status)
{
  return (signed int)(status > 1000);
}

// tspLeaseCheckExp
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_lease.h line 16
signed int tspLeaseCheckExp(const signed long int tun_expiration)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  if(!(tun_expiration >= tv.tv_sec))
    return 1;

  else
    return 0;
}

// tspLeaseGetExpTime
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_lease.h line 14
signed long int tspLeaseGetExpTime(const signed long int tun_lifetime)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  return tv.tv_sec + tun_lifetime;
}

// tspLogOSInfo
// file tsp_client.c line 1906
void tspLogOSInfo(void)
{
  char bufOSInfo[256l];
  char *return_value_tsp_get_version$1;
  return_value_tsp_get_version$1=tsp_get_version();
  Display(1, (enum tSeverityLevel)ELInfo, "tspLogOSInfo", "%s", return_value_tsp_get_version$1);
  tspGetOSInfo(sizeof(char [256l]) /*256ul*/ , bufOSInfo);
  Display(1, (enum tSeverityLevel)ELInfo, "tspLogOSInfo", "%s", (const void *)bufOSInfo);
}

// tspLogReceivedRedirection
// file tsp_redirect.c line 331
enum anonymous$27 tspLogReceivedRedirection(char *payload, struct stConf *conf)
{
  char status[1024l];
  memset((void *)status, 0, sizeof(char [1024l]) /*1024ul*/ );
  sscanf(payload, "%[^\n]", (const void *)status);
  Display(1, (enum tSeverityLevel)ELInfo, "tspLogReceivedRedirection", "Received a TSP redirection message from server %s (%s).", conf->server, (const void *)status);
  return (enum anonymous$27)TSP_REDIRECT_OK;
}

// tspLogRedirectionList
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 91
extern enum anonymous$27 tspLogRedirectionList(struct stBrokerList *broker_list, signed int sorted)
{
  char broker_list_string[4096l];
  char *index = broker_list_string;
  signed int first_broker = 1;
  unsigned long int space_left = (unsigned long int)(4096 - 1);
  unsigned long int space_needed = (unsigned long int)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen("[ ");
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(", ");
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen("...");
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(" ]");
  space_left = space_left - (return_value_strlen$1 + return_value_strlen$2 + return_value_strlen$3 + return_value_strlen$4);
  signed int return_value_sprintf$5;
  return_value_sprintf$5=sprintf(index, "%s", (const void *)"[ ");
  index = index + (signed long int)return_value_sprintf$5;
  for( ; !(broker_list == ((struct stBrokerList *)NULL)); broker_list = broker_list->next)
    if(!(first_broker == 0))
    {
      space_needed=strlen(broker_list->address);
      if(space_left >= space_needed)
      {
        signed int return_value_sprintf$6;
        return_value_sprintf$6=sprintf(index, "%s", (const void *)broker_list->address);
        index = index + (signed long int)return_value_sprintf$6;
      }

      else
      {
        signed int return_value_sprintf$7;
        return_value_sprintf$7=sprintf(index, "%s", (const void *)"...");
        index = index + (signed long int)return_value_sprintf$7;
        break;
      }
      first_broker = 0;
    }

    else
    {
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(", ");
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(broker_list->address);
      space_needed = return_value_strlen$8 + return_value_strlen$9;
      if(space_left >= space_needed)
      {
        signed int return_value_sprintf$10;
        return_value_sprintf$10=sprintf(index, "%s%s", (const void *)", ", (const void *)broker_list->address);
        index = index + (signed long int)return_value_sprintf$10;
      }

      else
      {
        signed int return_value_sprintf$11;
        return_value_sprintf$11=sprintf(index, "%s%s", (const void *)", ", (const void *)"...");
        index = index + (signed long int)return_value_sprintf$11;
        break;
      }
    }
  signed int return_value_sprintf$12;
  return_value_sprintf$12=sprintf(index, "%s", (const void *)" ]");
  index = index + (signed long int)return_value_sprintf$12;
  if(!(sorted == 0))
    Display(1, (enum tSeverityLevel)ELInfo, "tspLogRedirection", "The optimized server redirection list is %s.", (const void *)broker_list_string);

  else
    Display(1, (enum tSeverityLevel)ELInfo, "tspLogRedirection", "The server redirection list is %s.", (const void *)broker_list_string);
  return (enum anonymous$27)TSP_REDIRECT_OK;
}

// tspMain
// file tsp_client.c line 921
signed int tspMain(signed int argc, char **argv)
{
  struct stConf c;
  signed int log_display_ok = 0;
  struct stBrokerList *broker_list = (struct stBrokerList *)(void *)0;
  signed int trying_original_server = 0;
  signed int read_last_server = 0;
  char original_server[255l];
  char last_server[255l];
  enum anonymous$27 last_server_status = (enum anonymous$27)TSP_REDIRECT_OK;
  unsigned int status;
  signed int loop_delay;
  gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDIDLE;
  gStatusInfo.nStatus = (signed int)0x00000000;
  memset((void *)&c, 0, sizeof(struct stConf) /*360ul*/ );
  status=tspInitialize(argc, argv, &c);
  signed int return_value_InitLogSystem$1;
  signed int return_value_tspGoDaemon$2;
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strlen$4;
  char *return_value___strdup$3;
  signed int tmp_post$12;
  signed int return_value_tspCheckForStopOrWait$13;
  unsigned int tmp_post$14;
  signed int return_value_tspCheckForStopOrWait$15;
  if(!((65535u & status) == 0u))
    gStatusInfo.nStatus = (signed int)0x00000017;

  else
  {
    return_value_InitLogSystem$1=InitLogSystem(&c);
    if(!(return_value_InitLogSystem$1 == 0))
    {
      status = (unsigned int)(6 | 1 << 16);
      gStatusInfo.nStatus = (signed int)0x00000017;
    }

    else
    {
      log_display_ok = 1;
      tspLogOSInfo();
      return_value_tspGoDaemon$2=tspGoDaemon(&c);
      if(return_value_tspGoDaemon$2 == 0)
      {
        gszBrokerListFile = c.broker_list_file;
        strcpy(original_server, c.server);
        if((signed int)c.always_use_same_server == TRUE)
        {
          return_value_strlen$4=strlen(c.last_server_file);
          tmp_if_expr$5 = (unsigned int)return_value_strlen$4 > (unsigned int)0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
        {
          last_server_status=tspReadLastServerFromFile(c.last_server_file, last_server);
          switch((signed int)last_server_status)
          {
            case TSP_REDIRECT_OK:
            {
              free((void *)c.server);
              return_value___strdup$3=__strdup(last_server);
              c.server = return_value___strdup$3;
              read_last_server = 1;
              trying_original_server = 0;
              Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Trying last server address %s.", (const void *)last_server);
              break;
            }
            case TSP_REDIRECT_NO_LAST_SERVER:
            {
              trying_original_server = 1;
              Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Failed to find last server in last_server file %s. Trying server address %s instead.", c.last_server_file, (const void *)original_server);
              break;
            }
            case TSP_REDIRECT_CANT_OPEN_FILE:
            {
              trying_original_server = 1;
              Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Failed to open last_server file %s. Trying server %s instead.", c.last_server_file, (const void *)original_server);
              break;
            }
            default:
            {
              Display(1, (enum tSeverityLevel)ELError, "tspMain", "Failed to read the last_server file %s.", c.last_server_file);
              status = (unsigned int)(7 | 1 << 16);
              gStatusInfo.nStatus = (signed int)0x0000001C;
              goto endtspc;
            }
          }
        }

        else
          trying_original_server = 1;
        loop_delay = c.retry_delay;
        do
        {
          struct net_tools nt[5l];
          signed int version_index = 0;
          signed int connected = 1;
          signed int cycle = 0;
          signed int tsp_version_fallback = 0;
          signed int quick_cycle = 0;
          struct stBrokerList *current_broker_in_list = (struct stBrokerList *)(void *)0;
          signed int trying_broker_list = 0;
          enum anonymous$27 broker_list_status = (enum anonymous$27)TSP_REDIRECT_OK;
          unsigned short int effective_retry_delay;
          unsigned char consec_retry = (unsigned char)0;
          memset((void *)nt, 0, sizeof(struct net_tools [5l]) /*280ul*/ );
          InitNetToolsArray(nt);
          while(!(connected == 0))
          {
            signed int return_value_tspCheckForStopOrWait$6;
            return_value_tspCheckForStopOrWait$6=tspCheckForStopOrWait((const unsigned int)0);
            if(!(return_value_tspCheckForStopOrWait$6 == 0))
              goto endtspc;

            if(!(gStatusInfo.nStatus == 0x00000000) && !((signed int)gStatusInfo.eStatus == GOGOC_CLISTAT__DISCONNECTEDIDLE))
              send_status_info();

            switch((signed int)c.tunnel_mode)
            {
              case V6UDPV4:
              {
                if(!(cycle == 0))
                  cycle = 0;

                if(!(tsp_version_fallback == 0))
                {
                  if(!(version_index >= 2) && !(version_index >= 3))
                    version_index = version_index + 1;

                  else
                  {
                    connected = 0;
                    break;
                  }
                  tsp_version_fallback = 0;
                }

                else
                  version_index = 0;
                c.transport = 0;
                goto __CPROVER_DUMP_L32;
              }
              case V6ANYV4:

              case V6V4:
              {
                if(!(cycle == 0))
                {
                  if(cycle == 1)
                    goto __CPROVER_DUMP_L27;

                  cycle = 0;
                }

                if(!(tsp_version_fallback == 0))
                {
                  if(!(version_index >= 3))
                    version_index = version_index + 1;

                  else
                  {
                    connected = 0;
                    break;
                  }
                  tsp_version_fallback = 0;
                }

                else
                  version_index = 0;
                c.transport = 0;
                goto __CPROVER_DUMP_L32;

              __CPROVER_DUMP_L27:
                ;
                if(!(tsp_version_fallback == 0))
                {
                  if(!(version_index >= 3))
                    version_index = version_index + 1;

                  else
                  {
                    connected = 0;
                    break;
                  }
                  tsp_version_fallback = 0;
                }

                else
                  version_index = 0;
                c.transport = 2;
              }
              case V4V6:

              default:
              {

              __CPROVER_DUMP_L32:
                ;
                quick_cycle = 0;
                if(c.transport == 0 && ((signed int)c.tunnel_mode == V6V4 || (signed int)c.tunnel_mode == V6ANYV4))
                  quick_cycle = 1;

                status=tspSetupTunnel(&c, &nt[(signed long int)c.transport], version_index, &broker_list);
                switch((unsigned int)(status & (unsigned int)0x0000FFFF))
                {
                  case (unsigned int)0:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDIDLE;
                    gStatusInfo.nStatus = (signed int)0x00000000;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)21:
                  {
                    Display(1, (enum tSeverityLevel)ELError, "tspMain", "General timeout detected.");
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000024;
                    consec_retry = (unsigned char)0;
                    if((signed int)c.auto_retry_connect == FALSE)
                    {
                      gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDNORETRY;
                      connected = 0;
                      goto __CPROVER_DUMP_L85;
                    }

                    break;
                  }
                  case (unsigned int)16:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000021;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)17:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000020;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)18:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000023;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)22:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDIDLE;
                    gStatusInfo.nStatus = (signed int)0x00000027;
                    Display(1, (enum tSeverityLevel)ELWarning, "tspMain", "Tunnel allocation lease expired. Sending back TSP request.");
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)11:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000001D;
                    tsp_version_fallback = 1;
                    if(version_index == 2)
                      cycle = 1;

                    if(c.transport == 0 && !(version_index == 2))
                      usleep((unsigned int)(5 * 1000));

                    Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Disconnected. Retrying.");
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)10:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000019;
                    consec_retry = (unsigned char)0;
                    if(!(quick_cycle == 0))
                    {
                      Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Disconnected. Retrying.");
                      goto __CPROVER_DUMP_L85;
                    }

                    break;
                  }
                  case (unsigned int)12:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000002A;
                    effective_retry_delay = (unsigned short int)c.retry_delay;
                    consec_retry = (unsigned char)1;
                    break;
                  }
                  case (unsigned int)13:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000001E;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)9:
                  {
                    if(!(c.boot_mode == /*enum*/FALSE))
                    {
                      connected = 0;
                      goto __CPROVER_DUMP_L85;
                    }

                    if(quick_cycle == 1)
                    {
                      cycle = cycle + 1;
                      Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Disconnected. Retrying.");
                      goto __CPROVER_DUMP_L85;
                    }

                    if(read_last_server == 1)
                    {
                      cycle = cycle + 1;
                      break;
                    }

                    effective_retry_delay = (unsigned short int)c.retry_delay;
                    consec_retry = (unsigned char)1;
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000001A;
                    if(trying_original_server == 1)
                    {
                      tspFreeBrokerList(broker_list);
                      broker_list = (struct stBrokerList *)(void *)0;
                      unsigned long int return_value_strlen$8;
                      return_value_strlen$8=strlen(c.broker_list_file);
                      if((unsigned int)return_value_strlen$8 >= 1u)
                      {
                        Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Trying to read the server redirection list from broker_list file %s.", c.broker_list_file);
                        broker_list_status=tspReadBrokerListFromFile(c.broker_list_file, &broker_list);
                        switch((signed int)broker_list_status)
                        {
                          case TSP_REDIRECT_OK:
                          {
                            if(broker_list == ((struct stBrokerList *)NULL))
                            {
                              Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "The server redirection list is empty.");
                              cycle = cycle + 1;
                            }

                            else
                            {
                              Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "The server redirection list was created successfully.");
                              tspLogRedirectionList(broker_list, 0);
                              trying_broker_list = 1;
                              trying_original_server = 0;
                              current_broker_in_list = broker_list;
                              signed int return_value_FormatBrokerListAddr$7;
                              return_value_FormatBrokerListAddr$7=FormatBrokerListAddr(current_broker_in_list, &c.server);
                              if(!(return_value_FormatBrokerListAddr$7 == 0))
                              {
                                tspFreeBrokerList(broker_list);
                                broker_list = (struct stBrokerList *)(void *)0;
                                status = (unsigned int)((unsigned int)14 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
                                gStatusInfo.nStatus = (signed int)0x0000001C;
                                connected = 0;
                                goto endtspc;
                              }

                              cycle = 0;
                              goto __CPROVER_DUMP_L85;
                            }
                            break;
                          }
                          case TSP_REDIRECT_CANT_OPEN_FILE:
                          {
                            Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Failed to open broker_list file %s.", c.broker_list_file);
                            cycle = cycle + 1;
                            tspFreeBrokerList(broker_list);
                            broker_list = (struct stBrokerList *)(void *)0;
                            break;
                          }
                          case TSP_REDIRECT_TOO_MANY_BROKERS:
                          {
                            Display(1, (enum tSeverityLevel)ELError, "tspMain", "Too many entries in the server redirection list than the allowed limit (%u). Discarding.", 50);
                            cycle = cycle + 1;
                            tspFreeBrokerList(broker_list);
                            broker_list = (struct stBrokerList *)(void *)0;
                            break;
                          }
                          default:
                          {
                            Display(1, (enum tSeverityLevel)ELError, "tspMain", "Failed to create the server redirection list from broker_list file %s.", c.broker_list_file);
                            cycle = cycle + 1;
                            tspFreeBrokerList(broker_list);
                            broker_list = (struct stBrokerList *)(void *)0;
                          }
                        }
                      }

                      else
                        cycle = cycle + 1;
                    }

                    else
                      if(trying_broker_list == 1)
                      {
                        if(current_broker_in_list == ((struct stBrokerList *)NULL) || broker_list == ((struct stBrokerList *)NULL))
                        {
                          Display(1, (enum tSeverityLevel)ELError, "tspMain", "Internal error processing the server redirection list.", (const void *)current_broker_in_list->address);
                          gStatusInfo.nStatus = (signed int)0x0000001C;
                          status = (unsigned int)((unsigned int)14 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
                          tspFreeBrokerList(broker_list);
                          broker_list = (struct stBrokerList *)(void *)0;
                          connected = 0;
                          goto __CPROVER_DUMP_L85;
                        }

                        if(current_broker_in_list->next == ((struct stBrokerList *)NULL))
                        {
                          Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Reached the end of the server redirection list.");
                          free((void *)c.server);
                          char *return_value___strdup$9;
                          return_value___strdup$9=__strdup(original_server);
                          c.server = return_value___strdup$9;
                          cycle = 0;
                          trying_original_server = 1;
                          break;
                        }

                        current_broker_in_list = current_broker_in_list->next;
                        signed int return_value_FormatBrokerListAddr$10;
                        return_value_FormatBrokerListAddr$10=FormatBrokerListAddr(current_broker_in_list, &c.server);
                        if(!(return_value_FormatBrokerListAddr$10 == 0))
                        {
                          tspFreeBrokerList(broker_list);
                          broker_list = (struct stBrokerList *)(void *)0;
                          status = (unsigned int)((unsigned int)14 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
                          gStatusInfo.nStatus = (signed int)0x0000001C;
                          connected = 0;
                          goto endtspc;
                        }

                        Display(2, (enum tSeverityLevel)ELInfo, "tspMain", "Moving to the next server address in the server redirection list (%s).", (const void *)current_broker_in_list->address);
                        cycle = 0;
                        goto __CPROVER_DUMP_L85;
                      }

                    break;
                  }
                  case (unsigned int)57345:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDIDLE;
                    gStatusInfo.nStatus = (signed int)0x0000001B;
                    if(!(broker_list == ((struct stBrokerList *)NULL)))
                    {
                      trying_broker_list = 1;
                      trying_original_server = 0;
                      current_broker_in_list = broker_list;
                      cycle = 0;
                      signed int return_value_FormatBrokerListAddr$11;
                      return_value_FormatBrokerListAddr$11=FormatBrokerListAddr(current_broker_in_list, &c.server);
                      if(!(return_value_FormatBrokerListAddr$11 == 0))
                      {
                        gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                        gStatusInfo.nStatus = (signed int)0x0000001C;
                        status = (unsigned int)((unsigned int)14 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
                        connected = 0;
                      }

                    }

                    else
                    {
                      gStatusInfo.nStatus = (signed int)0x0000001C;
                      status = (unsigned int)((unsigned int)14 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
                      connected = 0;
                    }
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)14:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000001C;
                    Display(1, (enum tSeverityLevel)ELError, "tspMain", "Failed to process a TSP redirection message from %s.", c.server);
                    tspFreeBrokerList(broker_list);
                    broker_list = (struct stBrokerList *)(void *)0;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)2:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000018;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)15:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000001F;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)23:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000026;
                    consec_retry = (unsigned char)0;
                    break;
                  }
                  case (unsigned int)20:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000025;
                    consec_retry = (unsigned char)0;
                    break;
                  }
                  case (unsigned int)19:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000022;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)4:

                  case (unsigned int)8:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x0000002B;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                  case (unsigned int)3:

                  case (unsigned int)5:

                  default:
                  {
                    gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__DISCONNECTEDERROR;
                    gStatusInfo.nStatus = (signed int)0x00000015;
                    connected = 0;
                    goto __CPROVER_DUMP_L85;
                  }
                }
                send_status_info();
                if((signed int)consec_retry >= 1)
                {
                  signed int tspMain$$1$$6$$1$$5$$sleepTime = c.retry_delay;
                  if((signed int)consec_retry % 3 == 0)
                  {
                    effective_retry_delay = effective_retry_delay * (unsigned short int)2;
                    if(!(c.retry_delay_max >= (signed int)effective_retry_delay))
                      effective_retry_delay = (unsigned short int)c.retry_delay_max;

                  }

                  consec_retry = consec_retry + 1;
                  tspMain$$1$$6$$1$$5$$sleepTime = (signed int)effective_retry_delay;
                  Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Disconnected. Retrying in %d seconds.", effective_retry_delay);
                  do
                  {
                    tmp_post$12 = tspMain$$1$$6$$1$$5$$sleepTime;
                    tspMain$$1$$6$$1$$5$$sleepTime = tspMain$$1$$6$$1$$5$$sleepTime - 1;
                    if(!(tmp_post$12 >= 1))
                      break;

                    return_value_tspCheckForStopOrWait$13=tspCheckForStopOrWait((const unsigned int)1000);
                    if(!(return_value_tspCheckForStopOrWait$13 == 0))
                      break;

                  }
                  while((_Bool)1);
                }

                else
                {
                  consec_retry = consec_retry + 1;
                  effective_retry_delay = (unsigned short int)c.retry_delay;
                  Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Disconnected. Retrying.");
                }
              }
            }

          __CPROVER_DUMP_L85:
            ;
          }
          unsigned int sleepTime = (unsigned int)loop_delay;
          do
          {
            tmp_post$14 = sleepTime;
            sleepTime = sleepTime - 1u;
            if(!(tmp_post$14 >= 1u))
              break;

            return_value_tspCheckForStopOrWait$15=tspCheckForStopOrWait((const unsigned int)1000);
            if(!(return_value_tspCheckForStopOrWait$15 == 0))
              break;

          }
          while((_Bool)1);
          loop_delay = loop_delay * 2;
          if(!(c.retry_delay_max >= loop_delay))
            loop_delay = c.retry_delay_max;

        }
        while(c.boot_mode == /*enum*/FALSE);
      }

    }
  }

endtspc:
  ;
  send_status_info();
  tspFreeBrokerList(broker_list);
  if(!((65535u & status) == 0u))
  {
    if(log_display_ok == 0)
      DirectErrorMessage("Last status context is: %s.", GOGOCStatusContext[(signed long int)(unsigned int)((status & 0xFFFF0000) >> 16)]);

    else
      Display(1, (enum tSeverityLevel)ELWarning, "tspMain", "Last status context is: %s.", GOGOCStatusContext[(signed long int)(unsigned int)((status & 0xFFFF0000) >> 16)]);
  }

  if(log_display_ok == 0)
    DirectErrorMessage("Finished.");

  else
    Display(1, (enum tSeverityLevel)ELInfo, "tspMain", "Finished.");
  LogClose();
  return (signed int)(unsigned int)(status & (unsigned int)0x0000FFFF);
}

// tspPerformTunnelLoop
// file tsp_tun_mgt.c line 46
unsigned int tspPerformTunnelLoop(struct __TUNNEL_LOOP_CONFIG * const pTunLoopCfg)
{
  void *p_ka_engine = (void *)0;
  enum anonymous$9 ka_status;
  enum anonymous$8 ka_ret;
  unsigned char ongoing = (unsigned char)1;
  signed long int tun_expiration = (signed long int)0;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  if(!(pTunLoopCfg->tun_lifetime == 0l))
    tun_expiration=tspLeaseGetExpTime(pTunLoopCfg->tun_lifetime);

  signed int return_value_tspLeaseCheckExp$2;
  if(pTunLoopCfg->ka_interval >= 1u)
  {
    ka_ret=KA_init(&p_ka_engine, pTunLoopCfg->ka_interval * (unsigned int)1000, pTunLoopCfg->ka_src_addr, pTunLoopCfg->ka_dst_addr, pTunLoopCfg->sa_family);
    if(!((signed int)ka_ret == KA_SUCCESS))
      return (unsigned int)(20 | 8 << 16);

    ka_ret=KA_start(p_ka_engine);
    if((signed int)ka_ret == KA_SUCCESS)
      goto __CPROVER_DUMP_L3;

    KA_destroy(&p_ka_engine);
    return (unsigned int)(20 | 8 << 16);
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    while((65535u & status) == 0u && (signed int)ongoing == 1)
    {
      signed int return_value_tspCheckForStopOrWait$1;
      return_value_tspCheckForStopOrWait$1=tspCheckForStopOrWait((const unsigned int)500);
      if(!(return_value_tspCheckForStopOrWait$1 == 0))
        ongoing = (unsigned char)0;

      if(pTunLoopCfg->ka_interval >= 1u)
      {
        if((signed int)ongoing == 0)
          KA_stop(p_ka_engine);

        ka_status=KA_qry_status(p_ka_engine);
        switch((signed int)ka_status)
        {
          case KA_STAT_FIN_SUCCESS:

          case KA_STAT_ONGOING:
            break;
          case KA_STAT_FIN_ERROR:

          case KA_STAT_INVALID:
          {
            status = (unsigned int)(20 | 8 << 16);
            KA_stop(p_ka_engine);
            break;
          }
          case KA_STAT_FIN_TIMEOUT:
          {
            status = (unsigned int)(21 | 8 << 16);
            KA_stop(p_ka_engine);
          }
        }
      }

      if(!(tun_expiration == 0l))
      {
        return_value_tspLeaseCheckExp$2=tspLeaseCheckExp(tun_expiration);
        if(return_value_tspLeaseCheckExp$2 == 1)
          status = (unsigned int)(22 | 8 << 16);

      }

    }
    if(pTunLoopCfg->ka_interval >= 1u)
      KA_destroy(&p_ka_engine);

    return status;
  }
}

// tspReadBrokerListFromFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 96
extern enum anonymous$27 tspReadBrokerListFromFile(char *broker_list_file, struct stBrokerList **broker_list)
{
  struct _IO_FILE *file;
  char line[255l];
  signed int broker_count = 0;
  char *return_value_fgets$1;
  unsigned long int return_value_strlen$3;
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strlen$4;
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$8;
  _Bool tmp_if_expr$10;
  unsigned long int return_value_strlen$9;
  unsigned long int return_value_strlen$7;
  if(broker_list_file == ((char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspReadBrokerListFromFile", "Internal error trying to write the server redirection list to the broker_list file.");
    return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
  }

  else
    if(broker_list == ((struct stBrokerList **)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspReadBrokerListFromFile", "Internal error trying to write the server redirection list to the broker_list file.");
      return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
    }

    else
    {
      *broker_list = (struct stBrokerList *)(void *)0;
      file=fopen(broker_list_file, "r");
      if(file == ((struct _IO_FILE *)NULL))
        return (enum anonymous$27)TSP_REDIRECT_CANT_OPEN_FILE;

      else
      {
        do
        {
          return_value_fgets$1=fgets(line, (signed int)sizeof(char [255l]) /*255ul*/ , file);
          if(return_value_fgets$1 == ((char *)NULL))
            break;

          unsigned long int return_value_strlen$6;
          return_value_strlen$6=strlen(line);
          if(!(return_value_strlen$6 == 0ul))
          {
            return_value_strlen$3=strlen(line);
            if((signed int)line[-1l + (signed long int)return_value_strlen$3] == 10)
              tmp_if_expr$5 = (_Bool)1;

            else
            {
              return_value_strlen$4=strlen(line);
              tmp_if_expr$5 = (signed int)line[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] == 13 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$5)
            {
              return_value_strlen$2=strlen(line);
              line[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
            }

          }

          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(line);
          if(!(return_value_strlen$11 == 0ul))
          {
            return_value_strlen$8=strlen(line);
            if((signed int)line[-1l + (signed long int)return_value_strlen$8] == 10)
              tmp_if_expr$10 = (_Bool)1;

            else
            {
              return_value_strlen$9=strlen(line);
              tmp_if_expr$10 = (signed int)line[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] == 13 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$10)
            {
              return_value_strlen$7=strlen(line);
              line[(signed long int)(return_value_strlen$7 - (unsigned long int)1)] = (char)0;
            }

          }

          unsigned long int return_value_strlen$13;
          return_value_strlen$13=strlen(line);
          if(return_value_strlen$13 >= 1ul)
          {
            if(!(broker_count >= 50))
            {
              enum anonymous$27 return_value_tspAddBrokerToList$12;
              return_value_tspAddBrokerToList$12=tspAddBrokerToList(broker_list, line, (enum anonymous$29)TSP_REDIRECT_BROKER_TYPE_NONE, (unsigned int)0);
              if(!((signed int)return_value_tspAddBrokerToList$12 == TSP_REDIRECT_OK))
              {
                Display(1, (enum tSeverityLevel)ELError, "tspReadBrokerListFromFile", "Failed to add a new server address while creating the server redirection list from file %s.", broker_list_file);
                fclose(file);
                return (enum anonymous$27)TSP_REDIRECT_CANT_ADD_BROKER_TO_LIST;
              }

              else
                broker_count = broker_count + 1;
            }

            else
            {
              fclose(file);
              return (enum anonymous$27)TSP_REDIRECT_TOO_MANY_BROKERS;
            }
          }

        }
        while((_Bool)1);
        fclose(file);
        return (enum anonymous$27)TSP_REDIRECT_OK;
      }
    }
}

// tspReadConfigFile
// file config.c line 92
unsigned int tspReadConfigFile(char *szFile, struct stConf *pConf)
{
  signed int i;
  signed int nErrors;
  signed int iRet;
  unsigned int *tErrors = (unsigned int *)(void *)0;
  char *szValue = (char *)(void *)0;
  const char *return_value_get_ui_string$1;
  signed int tmp_statement_expression$9;
  signed int tmp_statement_expression$7;
  signed int tmp_statement_expression$5;
  if(szFile == ((char *)NULL) || pConf == ((struct stConf *)NULL))
    return (unsigned int)(3 | 1 << 16);

  else
  {
    iRet=initialize(szFile);
    if(!(iRet == 0))
    {
      if(iRet == -1)
      {
        get_config_errors(&nErrors, &tErrors);
        i = 0;
        for( ; !(i >= nErrors); i = i + 1)
        {
          return_value_get_ui_string$1=get_ui_string((const signed int)tErrors[(signed long int)i]);
          DirectErrorMessage((char *)return_value_get_ui_string$1);
        }
      }

      else
      {
        const char *return_value_get_ui_string$2;
        return_value_get_ui_string$2=get_ui_string(iRet);
        DirectErrorMessage((char *)return_value_get_ui_string$2);
      }
      return (unsigned int)(3 | 1 << 16);
    }

    else
    {
      get_server(&pConf->server);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(pConf->server);
      if(return_value_strlen$4 == 0ul)
      {
        free((void *)pConf->server);
        const char *return_value_get_ui_string$3;
        return_value_get_ui_string$3=get_ui_string((signed int)0x00040004);
        DirectErrorMessage((char *)return_value_get_ui_string$3);
        return (unsigned int)(3 | 1 << 16);
      }

      get_gogoc_dir(&pConf->tsp_dir);
      get_client_v4(&pConf->client_v4);
      get_user_id(&pConf->userid);
      get_passwd(&pConf->passwd);
      get_auth_method(&pConf->auth_method);
      get_host_type(&pConf->host_type);
      get_template(&pConf->template);
      get_if_tun_v6v4(&pConf->if_tunnel_v6v4);
      get_if_tun_v6udpv4(&pConf->if_tunnel_v6udpv4);
      get_tunnel_mode(&szValue);
      unsigned long int __s1_len;
      unsigned long int tspReadConfigFile$$1$$4$$__s2_len;
      signed int return_value___builtin_strcmp$10;
      return_value___builtin_strcmp$10=__builtin_strcmp(szValue, "v6anyv4");
      tmp_statement_expression$9 = return_value___builtin_strcmp$10;
      if(tmp_statement_expression$9 == 0)
        pConf->tunnel_mode = (enum anonymous$23)V6ANYV4;

      else
      {
        unsigned long int tspReadConfigFile$$1$$6$$__s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$8;
        return_value___builtin_strcmp$8=__builtin_strcmp(szValue, "v6v4");
        tmp_statement_expression$7 = return_value___builtin_strcmp$8;
        if(tmp_statement_expression$7 == 0)
          pConf->tunnel_mode = (enum anonymous$23)V6V4;

        else
        {
          unsigned long int tspReadConfigFile$$1$$8$$__s1_len;
          unsigned long int tspReadConfigFile$$1$$8$$__s2_len;
          signed int return_value___builtin_strcmp$6;
          return_value___builtin_strcmp$6=__builtin_strcmp(szValue, "v6udpv4");
          tmp_statement_expression$5 = return_value___builtin_strcmp$6;
          if(tmp_statement_expression$5 == 0)
            pConf->tunnel_mode = (enum anonymous$23)V6UDPV4;

        }
      }
      free((void *)szValue);
      szValue = (char *)(void *)0;
      get_dns_server(&pConf->dns_server);
      get_ifprefix(&pConf->if_prefix);
      get_prefixlen(&pConf->prefixlen);
      get_retry_delay(&pConf->retry_delay);
      get_retry_delay_max(&pConf->retry_delay_max);
      get_keepalive(&pConf->keepalive);
      get_keepalive_interval(&pConf->keepalive_interval);
      get_proxy_client(&pConf->proxy_client);
      get_syslog_facility(&szValue);
      ParseSyslogFacility(pConf, szValue);
      free((void *)szValue);
      szValue = (char *)(void *)0;
      get_log_filename(&pConf->log_filename);
      get_log_rotation(&pConf->log_rotation);
      get_log_rotation_sz(&pConf->log_rotation_size);
      get_log_rotation_del(&pConf->log_rotation_delete);
      get_log("stderr", &pConf->log_level_stderr);
      get_log("syslog", &pConf->log_level_syslog);
      get_log("console", &pConf->log_level_console);
      get_log("file", &pConf->log_level_file);
      get_auto_retry_connect(&pConf->auto_retry_connect);
      get_last_server_file(&pConf->last_server_file);
      get_always_use_last_server(&pConf->always_use_same_server);
      get_broker_list_file(&pConf->broker_list_file);
      get_haccess_web_enabled(&pConf->haccess_web_enabled);
      get_haccess_proxy_enabled(&pConf->haccess_proxy_enabled);
      get_haccess_document_root(&pConf->haccess_document_root);
      un_initialize();
      return (unsigned int)(0 | 1 << 16);
    }
  }
}

// tspReadLastServerFromFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 94
extern enum anonymous$27 tspReadLastServerFromFile(char *last_server_file, char *buffer)
{
  struct _IO_FILE *file;
  char line[255l];
  signed int found_server = 0;
  char *return_value_fgets$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$5;
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$6;
  unsigned long int return_value_strlen$4;
  unsigned long int return_value_strlen$10;
  _Bool tmp_if_expr$12;
  unsigned long int return_value_strlen$11;
  unsigned long int return_value_strlen$9;
  if(last_server_file == ((char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspReadLastServerFromFile", "Internal error trying to read the last server address from the last_server file.");
    return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
  }

  else
    if(buffer == ((char *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspReadLastServerFromFile", "Internal error trying to read the last server address from the last_server file.");
      return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
    }

    else
    {
      file=fopen(last_server_file, "r");
      if(file == ((struct _IO_FILE *)NULL))
        return (enum anonymous$27)TSP_REDIRECT_CANT_OPEN_FILE;

      else
      {
        do
        {
          return_value_fgets$1=fgets(line, (signed int)sizeof(char [255l]) /*255ul*/ , file);
          if(return_value_fgets$1 == ((char *)NULL))
            break;

          if((signed int)line[0l] == 35)
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = (signed int)line[0l] == 13 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$2)
            tmp_if_expr$3 = (_Bool)1;

          else
            tmp_if_expr$3 = (signed int)line[0l] == 10 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr$3)
          {
            unsigned long int return_value_strlen$8;
            return_value_strlen$8=strlen(line);
            if(!(return_value_strlen$8 == 0ul))
            {
              return_value_strlen$5=strlen(line);
              if((signed int)line[-1l + (signed long int)return_value_strlen$5] == 10)
                tmp_if_expr$7 = (_Bool)1;

              else
              {
                return_value_strlen$6=strlen(line);
                tmp_if_expr$7 = (signed int)line[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] == 13 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$7)
              {
                return_value_strlen$4=strlen(line);
                line[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
              }

            }

            unsigned long int return_value_strlen$13;
            return_value_strlen$13=strlen(line);
            if(!(return_value_strlen$13 == 0ul))
            {
              return_value_strlen$10=strlen(line);
              if((signed int)line[-1l + (signed long int)return_value_strlen$10] == 10)
                tmp_if_expr$12 = (_Bool)1;

              else
              {
                return_value_strlen$11=strlen(line);
                tmp_if_expr$12 = (signed int)line[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] == 13 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$12)
              {
                return_value_strlen$9=strlen(line);
                line[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] = (char)0;
              }

            }

            sprintf(buffer, line);
            found_server = 1;
            break;
          }

        }
        while((_Bool)1);
        fclose(file);
        if(!(found_server == 0))
          return (enum anonymous$27)TSP_REDIRECT_OK;

        else
          return (enum anonymous$27)TSP_REDIRECT_NO_LAST_SERVER;
      }
    }
}

// tspSend
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 48
signed int tspSend(signed int socket, struct stPayload *pl, struct net_tools *nt)
{
  char buffer[4096l];
  signed long int ClSize;
  signed int ret;
  snprintf(buffer, (unsigned long int)4096, "Content-length: %ld\r\n", pl->size);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(buffer);
  ClSize = (signed long int)(unsigned int)return_value_strlen$1;
  if(pl->size + ClSize >= 4097l)
  {
    Display(1, (enum tSeverityLevel)ELError, "tspSend", "Payload size is bigger than PROTOCOLFRAMESIZE.");
    return -1;
  }

  else
  {
    memcpy((void *)(buffer + ClSize), (const void *)pl->payload, (unsigned long int)pl->size);
    buffer[ClSize + pl->size] = (char)0;
    Display(3, (enum tSeverityLevel)ELInfo, "tspSend", "Sending: '%s'", (const void *)buffer);
    ret=nt->netsend(socket, buffer, (signed int)(ClSize + pl->size));
    if(!(ret >= 0))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspSend", "Failed to write on network socket.");
      return ret;
    }

    else
      return ret;
  }
}

// tspSendRecv
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_net.h line 47
signed int tspSendRecv(signed int socket, struct stPayload *plin, struct stPayload *plout, struct net_tools *nt)
{
  char string[22l] = { 'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'l', 'e', 'n', 'g', 't', 'h', ':', ' ', '%', 'l', 'd', '\r', '\n', 0 };
  char buffer[4096l];
  char *ptr_b;
  char *ptr_c;
  signed int tspSendRecv$$1$$read;
  signed int ret;
  signed int size;
  signed int left;
  snprintf(buffer, (unsigned long int)4096, string, plin->size);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(buffer);
  size = (signed int)(unsigned int)return_value_strlen$1;
  memcpy((void *)(buffer + (signed long int)size), (const void *)plin->payload, (unsigned long int)plin->size);
  buffer[(signed long int)size + plin->size] = (char)0;
  Display(3, (enum tSeverityLevel)ELInfo, "tspSendRecv", "Sending: '%s'", (const void *)buffer);
  ret=nt->netsendrecv(socket, buffer, (signed int)((signed long int)size + plin->size), plout->payload, (signed int)plout->size);
  _Bool tmp_if_expr$5;
  if(!(ret >= 1))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspSendRecv", "Failed to write/read on network socket.");
    return ret;
  }

  else
  {
    signed int return_value_memcmp$2;
    return_value_memcmp$2=memcmp((const void *)plout->payload, (const void *)"Content-length:", (unsigned long int)15);
    if(!(return_value_memcmp$2 == 0))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspSendRecv", "Was expecting 'Content-length:'. Received %s.", plout->payload);
      return -1;
    }

    else
    {
      char *return_value___builtin_strchr$3;
      return_value___builtin_strchr$3=__builtin_strchr(plout->payload, 10);
      ptr_c = return_value___builtin_strchr$3;
      if(ptr_c == ((char *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspSendRecv", "Received invalid TSP data.");
        return -1;
      }

      else
      {
        ptr_c = ptr_c + 1l;
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(ptr_c);
        size = (signed int)(unsigned int)return_value_strlen$4;
        plout->size=atol(plout->payload + (signed long int)15);
        if(!(plout->size >= 1l))
          tmp_if_expr$5 = (_Bool)1;

        else
          tmp_if_expr$5 = (signed long int)size > plout->size ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$5)
        {
          Display(1, (enum tSeverityLevel)ELError, "tspSendRecv", "Invalid payload size.");
          return -1;
        }

        else
        {
          left = (signed int)(plout->size - (signed long int)size);
          if(left >= 1)
          {
            tspSendRecv$$1$$read=nt->netrecv(socket, ptr_c + (signed long int)size, left);
            if(!(tspSendRecv$$1$$read >= 1))
            {
              Display(1, (enum tSeverityLevel)ELError, "tspSendRecv", "Failed to read from network socket.");
              return 1;
            }

            size = size + tspSendRecv$$1$$read;
            left = left - tspSendRecv$$1$$read;
          }

          size = size + 1;
          void *return_value_malloc$6;
          return_value_malloc$6=malloc((unsigned long int)size);
          ptr_b = (char *)return_value_malloc$6;
          memset((void *)ptr_b, 0, (unsigned long int)size);
          size = size - 1;
          memcpy((void *)ptr_b, (const void *)ptr_c, (unsigned long int)size);
          free((void *)plout->payload);
          plout->payload = ptr_b;
          Display(3, (enum tSeverityLevel)ELInfo, "tspSendRecv", "Received: '%s'", plout->payload);
          return ret;
        }
      }
    }
  }
}

// tspSetCapability
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_cap.h line 44
unsigned int tspSetCapability(char *Token, char *Value)
{
  signed int tmp_statement_expression$5;
  unsigned long int tspSetCapability$$1$$1$$__s1_len;
  unsigned long int tspSetCapability$$1$$1$$__s2_len;
  signed int return_value___builtin_strcmp$6;
  return_value___builtin_strcmp$6=__builtin_strcmp("TUNNEL", Token);
  tmp_statement_expression$5 = return_value___builtin_strcmp$6;
  signed int tmp_statement_expression$1;
  signed int tmp_statement_expression$3;
  signed int tmp_statement_expression$11;
  if(tmp_statement_expression$5 == 0)
  {
    unsigned long int tspSetCapability$$1$$2$$1$$__s1_len;
    unsigned long int tspSetCapability$$1$$2$$1$$__s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp("V6V4", Value);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
      return (unsigned int)0x0001;

    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$4;
    return_value___builtin_strcmp$4=__builtin_strcmp("V6UDPV4", Value);
    tmp_statement_expression$3 = return_value___builtin_strcmp$4;
    if(!(tmp_statement_expression$3 == 0))
      goto __CPROVER_DUMP_L2;

    return (unsigned int)0x0002;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    unsigned long int tspSetCapability$$1$$3$$__s1_len;
    unsigned long int tspSetCapability$$1$$3$$__s2_len;
    signed int return_value___builtin_strcmp$12;
    return_value___builtin_strcmp$12=__builtin_strcmp("AUTH", Token);
    tmp_statement_expression$11 = return_value___builtin_strcmp$12;
    if(tmp_statement_expression$11 == 0)
    {
      signed int return_value_strcasecmp$7;
      return_value_strcasecmp$7=strcasecmp("PASSDSS-3DES-1", Value);
      if(return_value_strcasecmp$7 == 0)
        return (unsigned int)0x0080;

      signed int return_value_strcasecmp$8;
      return_value_strcasecmp$8=strcasecmp("DIGEST-MD5", Value);
      if(return_value_strcasecmp$8 == 0)
        return (unsigned int)0x0040;

      signed int return_value_strcasecmp$9;
      return_value_strcasecmp$9=strcasecmp("ANONYMOUS", Value);
      if(return_value_strcasecmp$9 == 0)
        return (unsigned int)0x0010;

      signed int return_value_strcasecmp$10;
      return_value_strcasecmp$10=strcasecmp("PLAIN", Value);
      if(return_value_strcasecmp$10 == 0)
        return (unsigned int)0x0020;

    }

    return (unsigned int)0;
  }
}

// tspSetEnv
// file tsp_local.c line 76
extern void tspSetEnv(char *Variable, char *Value, signed int Flag)
{
  setenv(Variable, Value, Flag);
  Display(3, (enum tSeverityLevel)ELInfo, "tspSetEnv", "%s=%s", Variable, Value);
}

// tspSetupInterface
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_setup.h line 18
unsigned int tspSetupInterface(struct stConf *c, struct stTunnel *t)
{
  unsigned int status = (unsigned int)(0 | 0 << 16);
  char *template_script;
  signed int return_value_validate_tunnel_info$1;
  return_value_validate_tunnel_info$1=validate_tunnel_info(t);
  _Bool tmp_if_expr$6;
  signed int return_value_strcasecmp$5;
  if(!(return_value_validate_tunnel_info$1 == 0))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspSetupInterface", "Errors in tunnel parameters in server response.");
    return (unsigned int)(19 | 7 << 16);
  }

  else
  {
    tspSetEnv("TSP_OPERATION", "TSP_TUNNEL_CREATION", 1);
    set_tsp_env_variables(c, t);
    signed int return_value_tspSetupInterfaceLocal$2;
    return_value_tspSetupInterfaceLocal$2=tspSetupInterfaceLocal(c, t);
    if(!(return_value_tspSetupInterfaceLocal$2 == 0))
      return (unsigned int)(18 | 7 << 16);

    else
    {
      template_script=get_template_script(c);
      if(template_script == ((char *)NULL))
        return (unsigned int)(3 | 7 << 16);

      else
      {
        Display(2, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Executing interface configuration script: %s.", template_script);
        signed int return_value_execScript$3;
        return_value_execScript$3=execScript(template_script);
        if(!(return_value_execScript$3 == 0))
        {
          Display(1, (enum tSeverityLevel)ELError, "tspSetupInterface", "Interface configuration script completed with errors.");
          return (unsigned int)(18 | 7 << 16);
        }

        else
        {
          Display(2, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Interface configuration script completed successfully.");
          Display(2, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "The host type is '%s'.", c->host_type);
          Display(2, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "The tunnel type is %s.", t->type);
          Display(3, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Client proxying is %s.", (signed int)c->proxy_client == TRUE ? "enabled" : "disabled");
          signed int return_value_strcasecmp$4;
          return_value_strcasecmp$4=strcasecmp(t->type, "v6v4");
          if(return_value_strcasecmp$4 == 0)
            tmp_if_expr$6 = (_Bool)1;

          else
          {
            return_value_strcasecmp$5=strcasecmp(t->type, "v6udpv4");
            tmp_if_expr$6 = return_value_strcasecmp$5 == 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$6)
          {
            Display(1, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Your IPv6 address is %s.", t->client_address_ipv6);
            if(!(t->prefix == ((char *)NULL)))
            {
              if(!(t->prefix_length == ((char *)NULL)))
                Display(1, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Your IPv6 prefix is %s/%s.", t->prefix, t->prefix_length);

            }

            if(!(t->client_dns_server_address_ipv6 == ((char *)NULL)))
              Display(1, (enum tSeverityLevel)ELInfo, "tspSetupInterface", "Your IPv6 DNS address is %s.", t->client_dns_server_address_ipv6);

          }

          gTunnelInfo.szBrokerName = c->server;
          gTunnelInfo.tunnelUpTime=time((signed long int *)(void *)0);
          send_tunnel_info();
          return status;
        }
      }
    }
  }
}

// tspSetupInterfaceLocal
// file tsp_local.c line 107
extern signed int tspSetupInterfaceLocal(struct stConf *pConf, struct stTunnel *pTun)
{
  return 0;
}

// tspSetupTunnel
// file tsp_client.c line 408
unsigned int tspSetupTunnel(struct stConf *conf, struct net_tools *nt, signed int version_index, struct stBrokerList **broker_list)
{
  signed int tspSetupTunnel$$1$$socket;
  unsigned int cap;
  struct stTunnel tunnel_params;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  switch(conf->transport)
  {
    case 2:
    {
      Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Establishing connection to server %s using TCP.", conf->server);
      break;
    }
    case 0:
    {
      Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Establishing connection to server %s using reliable UDP.", conf->server);
      break;
    }
    case 3:
    {
      Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Establishing connection to server %s using TCPv6.", conf->server);
      break;
    }
    case 4:
      Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Establishing connection to server %s using reliable UDPv6.", conf->server);
  }
  gStatusInfo.eStatus = (enum anonymous$21)GOGOC_CLISTAT__CONNECTING;
  gStatusInfo.nStatus = (signed int)0x00000000;
  send_status_info();
  char *srvname;
  signed int return_value_parse_addr_port$1;
  return_value_parse_addr_port$1=parse_addr_port(conf->server, &srvname, &conf->port_remote_v4, (unsigned short int)3653);
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(!(return_value_parse_addr_port$1 == 0))
    return (unsigned int)(4 | 3 << 16);

  else
  {
    status=tspConnect(&tspSetupTunnel$$1$$socket, srvname, conf->port_remote_v4, nt);
    if(!((65535u & status) == 0u))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Failed to connect to server %s on port %d.", srvname, conf->port_remote_v4);
      free((void *)srvname);
      return status;
    }

    else
    {
      free((void *)srvname);
      if(conf->transport == 2)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = conf->transport == 3 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Connection to server %s successful.", conf->server);

      Display(3, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Using TSP protocol version %s.", TSPProtoVerStr[(signed long int)version_index]);
      Display(3, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Retrieving TSP capabilities from Server.");
      status=tspGetCapabilities(tspSetupTunnel$$1$$socket, nt, &cap, version_index, conf, broker_list);
      switch((unsigned int)(status & (unsigned int)0x0000FFFF))
      {
        case (unsigned int)0:
          break;
        case (unsigned int)57345:
        {
          tspClose(tspSetupTunnel$$1$$socket, nt);
          return status;
        }
        case (unsigned int)10:
        {
          if(conf->transport == 0)
            tmp_if_expr$3 = (_Bool)1;

          else
            tmp_if_expr$3 = conf->transport == 4 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$3)
          {
            Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Failed to contact TSP listener at %s.", conf->server);
            status = (unsigned int)((unsigned int)9 | (unsigned int)((status & 0xFFFF0000) >> 16) << 16);
          }

          else
            Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Failed to write/read on network socket.");
        }
        default:
        {
          tspClose(tspSetupTunnel$$1$$socket, nt);
          return status;
        }
      }
      if((cap & (unsigned int)conf->tunnel_mode) == 0u)
      {
        Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Requested tunnel mode not available on server %s.", conf->server);
        tspClose(tspSetupTunnel$$1$$socket, nt);
        return (unsigned int)(15 | 4 << 16);
      }

      else
      {
        Display(3, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Authenticating...");
        status=tspAuthenticate(tspSetupTunnel$$1$$socket, cap, nt, conf, broker_list, version_index);
        switch((unsigned int)(status & (unsigned int)0x0000FFFF))
        {
          case (unsigned int)0:
            break;
          case (unsigned int)57345:
          {
            tspClose(tspSetupTunnel$$1$$socket, nt);
            return status;
          }
          default:
          {
            tspClose(tspSetupTunnel$$1$$socket, nt);
            return status;
          }
        }
        Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Authentication successful.");
        status=tspUpdateSourceAddr(conf, tspSetupTunnel$$1$$socket);
        if(!((65535u & status) == 0u))
        {
          Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Failed to get source address to communicate with server.");
          tspClose(tspSetupTunnel$$1$$socket, nt);
          return status;
        }

        else
        {
          Display(3, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Negotiating tunnel parameters with server");
          status=tspTunnelNegotiation(tspSetupTunnel$$1$$socket, &tunnel_params, conf, nt, version_index, broker_list);
          switch((unsigned int)(status & (unsigned int)0x0000FFFF))
          {
            case (unsigned int)0:
              break;
            case (unsigned int)57345:
            {
              tspClose(tspSetupTunnel$$1$$socket, nt);
              return status;
            }
            default:
            {
              Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Tunnel negotiation failed. Status: %d", status);
              tspClose(tspSetupTunnel$$1$$socket, nt);
              return status;
            }
          }
          Display(2, (enum tSeverityLevel)ELInfo, "tspSetupTunnel", "Tunnel negotiation successful. Accepted offer.");
          enum anonymous$27 return_value_tspWriteLastServerToFile$4;
          return_value_tspWriteLastServerToFile$4=tspWriteLastServerToFile(conf->last_server_file, conf->server);
          if(!((signed int)return_value_tspWriteLastServerToFile$4 == TSP_REDIRECT_OK))
            Display(1, (enum tSeverityLevel)ELError, "tspSetupTunnel", "Failed to write the last server address (%s) to the last server file %s.", conf->server, conf->last_server_file);

          status=tspStartLocal(tspSetupTunnel$$1$$socket, conf, &tunnel_params, nt);
          free((void *)gTunnelInfo.szDelegatedPrefix);
          memset((void *)&gTunnelInfo, 0x00, sizeof(struct __TUNNEL_INFO) /*80ul*/ );
          tspClearTunnelInfo(&tunnel_params);
          tspClose(tspSetupTunnel$$1$$socket, nt);
          return status;
        }
      }
    }
  }
}

// tspSortBrokerList
// file tsp_redirect.c line 278
enum anonymous$27 tspSortBrokerList(struct stBrokerList **broker_list, struct stConf *conf, signed int broker_count)
{
  struct stBrokerList *sorted_list = (struct stBrokerList *)(void *)0;
  struct stBrokerList *current_broker = (struct stBrokerList *)(void *)0;
  struct stBrokerList *new_element = (struct stBrokerList *)(void *)0;
  Display(2, (enum tSeverityLevel)ELInfo, "tspSortBrokerList", "Sorting the server redirection list.");
  enum anonymous$27 return_value_tspGetBrokerDistances$1;
  return_value_tspGetBrokerDistances$1=tspGetBrokerDistances(*broker_list, broker_count, conf);
  if(!((signed int)return_value_tspGetBrokerDistances$1 == TSP_REDIRECT_OK))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspSortBrokerList", "Failed to get server timing information while sorting the server redirection list.");
    return (enum anonymous$27)TSP_REDIRECT_CANT_GET_DISTANCES;
  }

  else
  {
    current_broker = *broker_list;
    while(!(current_broker == ((struct stBrokerList *)NULL)))
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct stBrokerList) /*272ul*/ );
      new_element = (struct stBrokerList *)return_value_malloc$2;
      if(new_element == ((struct stBrokerList *)NULL))
      {
        tspFreeBrokerList(sorted_list);
        Display(1, (enum tSeverityLevel)ELError, "tspSortBrokerList", "Failed to allocate memory for a new server address while sorting the server redirection list.");
        return (enum anonymous$27)TSP_REDIRECT_CANT_ALLOCATE_MEM;
      }

      strcpy(new_element->address, current_broker->address);
      new_element->distance = current_broker->distance;
      new_element->address_type = current_broker->address_type;
      new_element->next = (struct stBrokerList *)(void *)0;
      enum anonymous$27 return_value_tspInsertInBrokerList$3;
      return_value_tspInsertInBrokerList$3=tspInsertInBrokerList(new_element, &sorted_list);
      if(!((signed int)return_value_tspInsertInBrokerList$3 == TSP_REDIRECT_OK))
      {
        tspFreeBrokerList(sorted_list);
        Display(1, (enum tSeverityLevel)ELError, "tspSortBrokerList", "Failed to insert a new server address while sorting the server redirection list.");
        return (enum anonymous$27)TSP_REDIRECT_CANT_INSERT_BROKER_IN_LIST;
      }

      current_broker = current_broker->next;
    }
    tspFreeBrokerList(*broker_list);
    *broker_list = sorted_list;
    return (enum anonymous$27)TSP_REDIRECT_OK;
  }
}

// tspStartLocal
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_client.h line 52
extern unsigned int tspStartLocal(signed int socket, struct stConf *c, struct stTunnel *t, struct net_tools *nt)
{
  struct __TUNNEL_LOOP_CONFIG tun_loop_cfg;
  unsigned int status = (unsigned int)(0 | 0 << 16);
  signed int ka_interval = 0;
  signed int tunfd = -1;
  signed int pid;
  unsigned int return_value_geteuid$1;
  return_value_geteuid$1=geteuid();
  signed int return_value_strcasecmp$2;
  signed int return_value_strcasecmp$5;
  if(!(return_value_geteuid$1 == 0u))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspStartLocal", "You must be root to setup a tunnel.");
    return (unsigned int)(18 | 7 << 16);
  }

  else
  {
    Display(2, (enum tSeverityLevel)ELInfo, "tspStartLocal", "Checking for Linux IPv6 support...");
    status=tspTestIPv6Support();
    if(!((65535u & status) == 0u))
      return status;

    else
    {
      signed int return_value_strcasecmp$3;
      return_value_strcasecmp$3=strcasecmp(t->type, "v4v6");
      if(return_value_strcasecmp$3 == 0)
      {
        Display(1, (enum tSeverityLevel)ELError, "tspStartLocal", "v4v6 is not supported on this platform.");
        return (unsigned int)(18 | 7 << 16);
      }

      else
      {
        return_value_strcasecmp$2=strcasecmp(t->type, "v6udpv4");
        if(return_value_strcasecmp$2 == 0)
        {
          tunfd=TunInit(c->if_tunnel_v6udpv4);
          if(tunfd == -1)
          {
            Display(1, (enum tSeverityLevel)ELError, "tspStartLocal", "Failed to initialize TUN device.");
            return (unsigned int)(18 | 7 << 16);
          }

        }

      }
      {
        pid=fork();
        if(!(pid >= 0))
        {
          status = (unsigned int)(18 | 7 << 16);
          goto __CPROVER_DUMP_L15;
        }

        else
          if(pid == 0)
          {
            if(!(tunfd == -1))
              close(tunfd);

            status=tspSetupInterface(c, t);
            exit((signed int)status);
          }

          else
          {
            signed int s = 0;
            Display(3, (enum tSeverityLevel)ELInfo, "tspStartLocal", "Waiting for setup script to complete.");
            signed int return_value_wait$4;
            return_value_wait$4=wait(&s);
            if(!(return_value_wait$4 == pid))
            {
              Display(1, (enum tSeverityLevel)ELError, "tspStartLocal", "Failed to wait for the script to complete.");
              status = (unsigned int)(18 | 7 << 16);
              goto __CPROVER_DUMP_L15;
            }

            if(!((0x7f & s) == 0))
            {
              Display(1, (enum tSeverityLevel)ELError, "tspStartLocal", "Interface configuration script completed with errors.");
              status = (unsigned int)(18 | 7 << 16);
              goto __CPROVER_DUMP_L15;
            }

            /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$35
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
            ;
            status = (unsigned int)((((union anonymous$35){ .__in=s }).__i & 0xff00) >> 8);
            if(!((65535u & status) == 0u))
              goto __CPROVER_DUMP_L15;

          }
        if(!(t->keepalive_interval == ((char *)NULL)))
          ka_interval=atoi$link2(t->keepalive_interval);

        signed int return_value_strcasecmp$6;
        return_value_strcasecmp$6=strcasecmp(t->type, "v6udpv4");
        if(return_value_strcasecmp$6 == 0)
        {
          status=TunMainLoop(tunfd, socket, c->keepalive, ka_interval, t->client_address_ipv6, t->keepalive_address);
          tspClose(socket, nt);
        }

        else
        {
          return_value_strcasecmp$5=strcasecmp(t->type, "v6v4");
          if(return_value_strcasecmp$5 == 0)
          {
            memset((void *)&tun_loop_cfg, 0x00, sizeof(struct __TUNNEL_LOOP_CONFIG) /*32ul*/ );
            tun_loop_cfg.ka_interval = (unsigned int)ka_interval;
            tun_loop_cfg.ka_src_addr = t->client_address_ipv6;
            tun_loop_cfg.ka_dst_addr = t->keepalive_address;
            tun_loop_cfg.sa_family = 10;
            tun_loop_cfg.tun_lifetime = (signed long int)0;
            status=tspPerformTunnelLoop(&tun_loop_cfg);
          }

        }
        goto __CPROVER_DUMP_L15;
      }

    __CPROVER_DUMP_L15:
      ;
      if(!(tunfd == -1))
        close(tunfd);

      tspTearDownTunnel(c, t);
      return status;
    }
  }
}

// tspTearDownTunnel
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_setup.h line 19
unsigned int tspTearDownTunnel(struct stConf *pConf, struct stTunnel *pTunInfo)
{
  char *scriptName;
  tspSetEnv("TSP_OPERATION", "TSP_TUNNEL_TEARDOWN", 1);
  set_tsp_env_variables(pConf, pTunInfo);
  scriptName=get_template_script(pConf);
  if(scriptName == ((char *)NULL))
    return (unsigned int)(3 | 9 << 16);

  else
  {
    Display(2, (enum tSeverityLevel)ELInfo, "tspTearDownTunnel", "Executing interface configuration script: %s.", scriptName);
    signed int return_value_execScript$1;
    return_value_execScript$1=execScript(scriptName);
    if(!(return_value_execScript$1 == 0))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspTearDownTunnel", "Interface configuration script completed with errors.");
      return (unsigned int)(18 | 9 << 16);
    }

    else
    {
      Display(2, (enum tSeverityLevel)ELInfo, "tspTearDownTunnel", "Interface configuration script completed successfully.");
      return (unsigned int)(0 | 0 << 16);
    }
  }
}

// tspTestIPv6Support
// file tsp_local.c line 58
unsigned int tspTestIPv6Support()
{
  struct stat buf;
  signed int return_value_stat$1;
  return_value_stat$1=stat("/proc/net/if_inet6", &buf);
  if(return_value_stat$1 == -1)
  {
    Display(1, (enum tSeverityLevel)ELError, "tspTestIPv6Support", "No IPv6 support found.");
    Display(1, (enum tSeverityLevel)ELError, "tspTestIPv6Support", "Try \"modprobe ipv6\".");
    return (unsigned int)(18 | 7 << 16);
  }

  else
  {
    Display(2, (enum tSeverityLevel)ELInfo, "tspTestIPv6Support", "IPv6 support found.");
    return (unsigned int)(0 | 0 << 16);
  }
}

// tspTunnelNegotiation
// file tsp_client.c line 309
unsigned int tspTunnelNegotiation(signed int socket, struct stTunnel *tunnel_info, struct stConf *conf, struct net_tools *nt, signed int version_index, struct stBrokerList **broker_list)
{
  struct stPayload plin;
  struct stPayload plout;
  signed int tsp_status;
  signed int ret;
  memset((void *)&plin, 0, sizeof(struct stPayload) /*24ul*/ );
  memset((void *)&plout, 0, sizeof(struct stPayload) /*24ul*/ );
  char *return_value_tspBuildCreateRequest$1;
  return_value_tspBuildCreateRequest$1=tspBuildCreateRequest(conf);
  plin.payload=tspAddPayloadString(&plin, return_value_tspBuildCreateRequest$1);
  plout.size = (signed long int)4096;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)4096);
  plout.payload = (char *)return_value_malloc$2;
  if(plout.payload == ((char *)NULL))
    return (unsigned int)(2 | 6 << 16);

  else
  {
    memset((void *)plout.payload, 0, (unsigned long int)plout.size);
    ret=tspSendRecv(socket, &plin, &plout, nt);
    if(!(ret >= 1))
    {
      free((void *)plout.payload);
      free((void *)plin.payload);
      plin.size = (signed long int)0;
      plout.size = plin.size;
      Display(1, (enum tSeverityLevel)ELError, "tspTunnelNegotiation", "Failed to write/read on network socket.");
      return (unsigned int)(10 | 6 << 16);
    }

    else
    {
      tsp_status=tspGetStatusCode(plout.payload);
      signed int return_value_tspIsRedirectStatus$5;
      return_value_tspIsRedirectStatus$5=tspIsRedirectStatus(tsp_status);
      if(!(return_value_tspIsRedirectStatus$5 == 0))
      {
        enum anonymous$27 return_value_tspHandleRedirect$3;
        return_value_tspHandleRedirect$3=tspHandleRedirect(plout.payload, conf, broker_list);
        if((signed int)return_value_tspHandleRedirect$3 == TSP_REDIRECT_OK)
        {
          free((void *)plout.payload);
          free((void *)plin.payload);
          plin.size = (signed long int)0;
          plout.size = plin.size;
          return (unsigned int)(57345 | 6 << 16);
        }

        else
        {
          free((void *)plout.payload);
          free((void *)plin.payload);
          plin.size = (signed long int)0;
          plout.size = plin.size;
          return (unsigned int)(14 | 6 << 16);
        }
      }

      else
        if(!(tsp_status == 200))
        {
          const char *return_value_tspGetTspStatusStr$4;
          return_value_tspGetTspStatusStr$4=tspGetTspStatusStr(tsp_status);
          Display(1, (enum tSeverityLevel)ELError, "tspTunnelNegotiation", "A TSP error occurred. Status: %d. Info: %s", tsp_status, return_value_tspGetTspStatusStr$4);
          return (unsigned int)(13 | 6 << 16);
        }

      tspExtractPayload(plout.payload, tunnel_info);
      free((void *)plout.payload);
      free((void *)plin.payload);
      plin.size = (signed long int)0;
      plout.size = plin.size;
      if(version_index == 3)
        return (unsigned int)(0 | 6 << 16);

      else
      {
        memset((void *)&plin, 0, sizeof(struct stPayload) /*24ul*/ );
        char *return_value_tspBuildCreateAcknowledge$6;
        return_value_tspBuildCreateAcknowledge$6=tspBuildCreateAcknowledge();
        plin.payload=tspAddPayloadString(&plin, return_value_tspBuildCreateAcknowledge$6);
        signed int return_value_tspSend$7;
        return_value_tspSend$7=tspSend(socket, &plin, nt);
        if(return_value_tspSend$7 == -1)
        {
          Display(1, (enum tSeverityLevel)ELError, "tspTunnelNegotiation", "Failed to write on network socket.");
          return (unsigned int)(10 | 6 << 16);
        }

        else
        {
          free((void *)plin.payload);
          plin.size = (signed long int)0;
          return (unsigned int)(0 | 6 << 16);
        }
      }
    }
  }
}

// tspUpdateSourceAddr
// file tsp_client.c line 224
unsigned int tspUpdateSourceAddr(struct stConf *pConf, signed int fd)
{
  unsigned long int return_value_strlen$6;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  char *return_value_tspGetLocalAddress$3;
  if(!((signed int)pConf->tunnel_mode == V4V6))
  {
    if(!((signed int)pConf->tunnel_mode == DSLITE))
    {
      if(!(pConf->client_v4 == ((char *)NULL)))
      {
        return_value_strlen$6=strlen(pConf->client_v4);
        if(!((unsigned int)return_value_strlen$6 == 0u))
        {
          signed int return_value_strcasecmp$5;
          return_value_strcasecmp$5=strcasecmp(pConf->client_v4, "auto");
          if(return_value_strcasecmp$5 == 0)
          {
            char addr_str[17l];
            if(pConf->transport == 0)
              tmp_if_expr$2 = (_Bool)1;

            else
              tmp_if_expr$2 = pConf->transport == 2 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$2)
            {
              return_value_tspGetLocalAddress$3=tspGetLocalAddress(fd, addr_str, 16);
              tmp_if_expr$4 = return_value_tspGetLocalAddress$3 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$4 = (_Bool)0;
            if(tmp_if_expr$4)
            {
              char *return_value___strdup$1;
              return_value___strdup$1=__strdup(addr_str);
              pConf->client_v4 = return_value___strdup$1;
              Display(3, (enum tSeverityLevel)ELInfo, "tspUpdateSourceAddr", "Using [%s] as source IPv4 address.", pConf->client_v4);
            }

            else
            {
              Display(1, (enum tSeverityLevel)ELError, "tspUpdateSourceAddr", "Failed to find localhost IPv4 address. (because client_v4=auto)");
              return (unsigned int)(5 | 0 << 16);
            }
          }

        }

      }

    }

  }

  return (unsigned int)(0 | 0 << 16);
}

// tspWriteBrokerListToFile
// file tsp_redirect.c line 489
extern enum anonymous$27 tspWriteBrokerListToFile(char *broker_list_file, struct stBrokerList *broker_list)
{
  struct _IO_FILE *file;
  struct stBrokerList *current_broker = (struct stBrokerList *)(void *)0;
  if(broker_list_file == ((char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspWriteBrokerListToFile", "Internal error trying to write the server redirection list to the broker_list file.");
    return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
  }

  else
  {
    file=fopen(broker_list_file, "w");
    if(file == ((struct _IO_FILE *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspWriteBrokerListToFile", "Failed to open %s to save the server redirection list.", broker_list_file);
      return (enum anonymous$27)TSP_REDIRECT_CANT_OPEN_FILE;
    }

    else
    {
      current_broker = broker_list;
      for( ; !(current_broker == ((struct stBrokerList *)NULL)); current_broker = current_broker->next)
      {
        signed int return_value_fprintf$1;
        return_value_fprintf$1=fprintf(file, "%s\n", (const void *)current_broker->address);
        if(!(return_value_fprintf$1 >= 0))
        {
          Display(1, (enum tSeverityLevel)ELError, "tspWriteBrokerListToFile", "Failed to write the server redirection list to %s.", broker_list_file);
          fclose(file);
          return (enum anonymous$27)TSP_REDIRECT_CANT_WRITE_TO_FILE;
        }

      }
      fclose(file);
      return (enum anonymous$27)TSP_REDIRECT_OK;
    }
  }
}

// tspWriteLastServerToFile
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/tsp_redirect.h line 95
extern enum anonymous$27 tspWriteLastServerToFile(char *last_server_file, char *last_server)
{
  struct _IO_FILE *file;
  if(last_server_file == ((char *)NULL))
  {
    Display(1, (enum tSeverityLevel)ELError, "tspWriteLastServerToFile", "Internal error trying to write the last server address to the last_server file.");
    return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
  }

  else
    if(last_server == ((char *)NULL))
    {
      Display(1, (enum tSeverityLevel)ELError, "tspWriteLastServerToFile", "Internal error trying to write the last server address to the last_server file.");
      return (enum anonymous$27)TSP_REDIRECT_INTERNAL_ERR;
    }

    else
    {
      file=fopen(last_server_file, "w");
      if(file == ((struct _IO_FILE *)NULL))
      {
        Display(1, (enum tSeverityLevel)ELError, "tspWriteLastServerToFile", "Failed to open %s to save the last server address.", last_server_file);
        return (enum anonymous$27)TSP_REDIRECT_CANT_OPEN_FILE;
      }

      else
      {
        signed int return_value_fprintf$1;
        return_value_fprintf$1=fprintf(file, "%s\n", last_server);
        if(!(return_value_fprintf$1 >= 0))
        {
          Display(1, (enum tSeverityLevel)ELError, "tspWriteLastServerToFile", "Failed to write last server address %s to %s.", last_server, last_server_file);
          fclose(file);
          return (enum anonymous$27)TSP_REDIRECT_CANT_WRITE_TO_FILE;
        }

        else
        {
          fclose(file);
          return (enum anonymous$27)TSP_REDIRECT_OK;
        }
      }
    }
}

// tspXMLParse
// file xml_tun.c line 425
signed int tspXMLParse(char *Data, struct stTunnel *Tunnel)
{
  tspClearTunnelInfo(Tunnel);
  broker = 0;
  dns_server = broker;
  router = dns_server;
  server = router;
  client = server;
  theTunnelInfo = Tunnel;
  signed int return_value_XMLParse$1;
  return_value_XMLParse$1=XMLParse(Data, Root);
  return return_value_XMLParse$1;
}

// tspXMLShowInfo
// file xml_tun.c line 394
void tspXMLShowInfo(struct stTunnel *Tunnel)
{
  printf("Parsed Info:\n\n");
  char *tmp_if_expr$1;
  if(Tunnel->action == ((char *)NULL))
    tmp_if_expr$1 = "";

  else
    tmp_if_expr$1 = Tunnel->action;
  printf("  action                         = [%s]\n", tmp_if_expr$1);
  char *tmp_if_expr$2;
  if(Tunnel->type == ((char *)NULL))
    tmp_if_expr$2 = "";

  else
    tmp_if_expr$2 = Tunnel->type;
  printf("  type                           = [%s]\n", tmp_if_expr$2);
  char *tmp_if_expr$3;
  if(Tunnel->lifetime == ((char *)NULL))
    tmp_if_expr$3 = "";

  else
    tmp_if_expr$3 = Tunnel->lifetime;
  printf("  lifetime                       = [%s]\n", tmp_if_expr$3);
  char *tmp_if_expr$4;
  if(Tunnel->proxy == ((char *)NULL))
    tmp_if_expr$4 = "";

  else
    tmp_if_expr$4 = Tunnel->proxy;
  printf("  proxy                          = [%s]\n", tmp_if_expr$4);
  char *tmp_if_expr$5;
  if(Tunnel->mtu == ((char *)NULL))
    tmp_if_expr$5 = "";

  else
    tmp_if_expr$5 = Tunnel->mtu;
  printf("  mtu                            = [%s]\n", tmp_if_expr$5);
  char *tmp_if_expr$6;
  if(Tunnel->client_address_ipv4 == ((char *)NULL))
    tmp_if_expr$6 = "";

  else
    tmp_if_expr$6 = Tunnel->client_address_ipv4;
  printf("  client address ipv4            = [%s]\n", tmp_if_expr$6);
  char *tmp_if_expr$7;
  if(Tunnel->client_address_ipv6 == ((char *)NULL))
    tmp_if_expr$7 = "";

  else
    tmp_if_expr$7 = Tunnel->client_address_ipv6;
  printf("  client address ipv6            = [%s]\n", tmp_if_expr$7);
  char *tmp_if_expr$8;
  if(Tunnel->client_dns_server_address_ipv6 == ((char *)NULL))
    tmp_if_expr$8 = "";

  else
    tmp_if_expr$8 = Tunnel->client_dns_server_address_ipv6;
  printf("  client dns server address ipv6 = [%s]\n", tmp_if_expr$8);
  char *tmp_if_expr$9;
  if(Tunnel->client_dns_name == ((char *)NULL))
    tmp_if_expr$9 = "";

  else
    tmp_if_expr$9 = Tunnel->client_dns_name;
  printf("  client dns name                = [%s]\n", tmp_if_expr$9);
  char *tmp_if_expr$10;
  if(Tunnel->server_address_ipv4 == ((char *)NULL))
    tmp_if_expr$10 = "";

  else
    tmp_if_expr$10 = Tunnel->server_address_ipv4;
  printf("  server address ipv4            = [%s]\n", tmp_if_expr$10);
  char *tmp_if_expr$11;
  if(Tunnel->server_address_ipv6 == ((char *)NULL))
    tmp_if_expr$11 = "";

  else
    tmp_if_expr$11 = Tunnel->server_address_ipv6;
  printf("  server address ipv6            = [%s]\n", tmp_if_expr$11);
  char *tmp_if_expr$12;
  if(Tunnel->router_protocol == ((char *)NULL))
    tmp_if_expr$12 = "";

  else
    tmp_if_expr$12 = Tunnel->router_protocol;
  printf("  router protocol                = [%s]\n", tmp_if_expr$12);
  char *tmp_if_expr$13;
  if(Tunnel->prefix_length == ((char *)NULL))
    tmp_if_expr$13 = "";

  else
    tmp_if_expr$13 = Tunnel->prefix_length;
  printf("  prefix length                  = [%s]\n", tmp_if_expr$13);
  char *tmp_if_expr$14;
  if(Tunnel->prefix == ((char *)NULL))
    tmp_if_expr$14 = "";

  else
    tmp_if_expr$14 = Tunnel->prefix;
  printf("  prefix                         = [%s]\n", tmp_if_expr$14);
  char *tmp_if_expr$15;
  if(Tunnel->client_as == ((char *)NULL))
    tmp_if_expr$15 = "";

  else
    tmp_if_expr$15 = Tunnel->client_as;
  printf("  client as number               = [%s]\n", tmp_if_expr$15);
  char *tmp_if_expr$16;
  if(Tunnel->server_as == ((char *)NULL))
    tmp_if_expr$16 = "";

  else
    tmp_if_expr$16 = Tunnel->server_as;
  printf("  server as number               = [%s]\n", tmp_if_expr$16);
  char *tmp_if_expr$17;
  if(Tunnel->keepalive_interval == ((char *)NULL))
    tmp_if_expr$17 = "";

  else
    tmp_if_expr$17 = Tunnel->keepalive_interval;
  printf("  keepalive interval             = [%s]\n", tmp_if_expr$17);
  char *tmp_if_expr$18;
  if(Tunnel->keepalive_address == ((char *)NULL))
    tmp_if_expr$18 = "";

  else
    tmp_if_expr$18 = Tunnel->keepalive_address;
  printf("  keepalive address              = [%s]\n", tmp_if_expr$18);
  printf("  dns server addresse(s) ipv4    = [");
  ShowList(Tunnel->dns_server_address_ipv4);
  printf("]\n");
  printf("  dns server addresse(s) ipv6    = [");
  ShowList(Tunnel->dns_server_address_ipv6);
  printf("]\n");
  printf("  broker addresse(s) ipv4        = [");
  ShowList(Tunnel->broker_address_ipv4);
  printf("]\n");
  printf("  broker redirect ipv4           = [");
  ShowList(Tunnel->broker_redirect_ipv4);
  printf("]\n");
  printf("  broker redirect ipv6           = [");
  ShowList(Tunnel->broker_redirect_ipv6);
  printf("]\n");
  printf("  broker redirect dn             = [");
  ShowList(Tunnel->broker_redirect_dn);
  printf("]\n");
}

// tsp_get_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-gogoc/gogoc-1.2/gogoc-tsp/include/version.h line 42
char * tsp_get_version(void)
{
  return "gogoCLIENT v1.1-RELEASE build Oct  5 2015-02:54:12  ";
}

// validate_tunnel_info
// file tsp_setup.c line 79
signed int validate_tunnel_info(const struct stTunnel *pTunnelInfo)
{
  signed int err_num = 0;
  signed int return_value_IsAll$1;
  return_value_IsAll$1=IsAll(".0123456789", pTunnelInfo->client_address_ipv4);
  if(return_value_IsAll$1 == 0)
  {
    Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for client_address_ipv4.");
    err_num = err_num + 1;
  }

  signed int return_value_IsAll$2;
  return_value_IsAll$2=IsAll("ABCDEFabcdef:0123456789", pTunnelInfo->client_address_ipv6);
  if(return_value_IsAll$2 == 0)
  {
    Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for client_address_ipv6.");
    err_num = err_num + 1;
  }

  if(!(pTunnelInfo->client_dns_server_address_ipv6 == ((char *)NULL)))
  {
    signed int return_value_IsAll$3;
    return_value_IsAll$3=IsAll("ABCDEFabcdef:0123456789", pTunnelInfo->client_dns_server_address_ipv6);
    if(return_value_IsAll$3 == 0)
    {
      Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for client_dns_server_address_ipv6.");
      err_num = err_num + 1;
    }

  }

  signed int return_value_IsAll$4;
  return_value_IsAll$4=IsAll(".0123456789", pTunnelInfo->server_address_ipv4);
  if(return_value_IsAll$4 == 0)
  {
    Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for server_address_ipv4.");
    err_num = err_num + 1;
  }

  signed int return_value_IsAll$5;
  return_value_IsAll$5=IsAll("ABCDEFabcdef:0123456789", pTunnelInfo->server_address_ipv6);
  if(return_value_IsAll$5 == 0)
  {
    Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for server_address_ipv6.");
    err_num = err_num + 1;
  }

  if(!(pTunnelInfo->prefix == ((char *)NULL)))
  {
    signed int return_value_IsAll$6;
    return_value_IsAll$6=IsAll("ABCDEFabcdef:.0123456789", pTunnelInfo->prefix);
    if(return_value_IsAll$6 == 0)
    {
      Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for prefix.");
      err_num = err_num + 1;
    }

    signed int return_value_IsAll$7;
    return_value_IsAll$7=IsAll("0123456789", pTunnelInfo->prefix_length);
    if(return_value_IsAll$7 == 0)
    {
      Display(1, (enum tSeverityLevel)ELError, "validate_tunnel_info", "Bad value received from server for prefix_length.");
      err_num = err_num + 1;
    }

  }

  return err_num;
}

