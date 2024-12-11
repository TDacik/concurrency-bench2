// #anon_enum_CTRL_LST=0_CTRL_EN_LSTN=1_CTRL_DE_LSTN=2_CTRL_EN_SVC=3_CTRL_DE_SVC=4_CTRL_EN_BE=5_CTRL_DE_BE=6_CTRL_ADD_SESS=7_CTRL_DEL_SESS=8
// file pound.h line 443
enum anonymous_10 { CTRL_LST=0, CTRL_EN_LSTN=1, CTRL_DE_LSTN=2, CTRL_EN_SVC=3, CTRL_DE_SVC=4, CTRL_EN_BE=5, CTRL_DE_BE=6, CTRL_ADD_SESS=7, CTRL_DEL_SESS=8 };

// #anon_enum_RENEG_INIT=0_RENEG_REJECT=1_RENEG_ALLOW=2_RENEG_ABORT=3
// file pound.h line 426
enum anonymous_3 { RENEG_INIT=0, RENEG_REJECT=1, RENEG_ALLOW=2, RENEG_ABORT=3 };

// #anon_enum_SESS_NONE=0_SESS_IP=1_SESS_COOKIE=2_SESS_URL=3_SESS_PARM=4_SESS_HEADER=5_SESS_BASIC=6
// file pound.h line 312
enum anonymous_18 { SESS_NONE=0, SESS_IP=1, SESS_COOKIE=2, SESS_URL=3, SESS_PARM=4, SESS_HEADER=5, SESS_BASIC=6 };

// tag-#anon#ST[*{SYM#tag-lhash_st_TABNODE#}_SYM#tag-lhash_st_TABNODE#_'tab'||S64'lim'||*{V}_V_'content'||S32'cont_len'||U32'_pad0'|]
// file svc.c line 113
struct anonymous_11;

// tag-#anon#ST[*{V}_V_'re_pcre'||U64're_nsub'||U64're_erroffset'|]
// file /usr/include/pcreposix.h line 97
struct anonymous_8;

// tag-#anon#ST[ARR128{U8}_U8_'cert_verify_md'||ARR128{U8}_U8_'finish_md'||S32'finish_md_len'||ARR128{U8}_U8_'peer_finish_md'||S32'peer_finish_md_len'||U64'message_size'||S32'message_type'||U32'_pad0'||*{cSYM#tag-ssl_cipher_st#}_cSYM#tag-ssl_cipher_st#_'new_cipher'||*{SYM#tag-dh_st#}_SYM#tag-dh_st#_'dh'||*{SYM#tag-ec_key_st#}_SYM#tag-ec_key_st#_'ecdh'||S32'next_state'||S32'reuse_message'||S32'cert_req'||S32'ctype_num'||ARR9{S8}_S8_'ctype'||U56'_pad1'||*{SYM#tag-stack_st_X509_NAME#}_SYM#tag-stack_st_X509_NAME#_'ca_names'||S32'use_rsa_tmp'||S32'key_block_length'||*{U8}_U8_'key_block'||*{cSYM#tag-evp_cipher_st#}_cSYM#tag-evp_cipher_st#_'new_sym_enc'||*{cSYM#tag-env_md_st#}_cSYM#tag-env_md_st#_'new_hash'||S32'new_mac_pkey_type'||S32'new_mac_secret_size'||*{cSYM#tag-ssl_comp_st#}_cSYM#tag-ssl_comp_st#_'new_compression'||S32'cert_request'||U32'_pad2'|]
// file /usr/include/openssl/ssl3.h line 553
struct anonymous_17;

// tag-#anon#ST[BF{U32}_U32_'__w_stopval'||BF{U32}_U32_'__w_stopsig'||BF{U32}_U32_'_anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 84
struct anonymous_14;

// tag-#anon#ST[BF{U32}_U32_'__w_termsig'||BF{U32}_U32_'__w_coredump'||BF{U32}_U32_'__w_retcode'||BF{U32}_U32_'_anon0'|]
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 69
struct anonymous_13;

// tag-#anon#ST[EN#anon_enum_CTRL_LST=0_CTRL_EN_LSTN=1_CTRL_DE_LSTN=2_CTRL_EN_SVC=3_CTRL_DE_SVC=4_CTRL_EN_BE=5_CTRL_DE_BE=6_CTRL_ADD_SESS=7_CTRL_DEL_SESS=8#{U32}_U32_'cmd'||S32'listener'||S32'service'||S32'backend'||ARR128{S8}_S8_'key'|]
// file pound.h line 451
struct anonymous_0;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_1;

// tag-#anon#ST[S32'control_sock'||U32'_pad0'||*{SYM#tag-_backend#}_SYM#tag-_backend#_'backends'|]
// file svc.c line 1527
struct anonymous;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/pcreposix.h line 107
struct anonymous_4;

// tag-#anon#ST[S32'sess_connect'||S32'sess_connect_renegotiate'||S32'sess_connect_good'||S32'sess_accept'||S32'sess_accept_renegotiate'||S32'sess_accept_good'||S32'sess_miss'||S32'sess_timeout'||S32'sess_cache_full'||S32'sess_hit'||S32'sess_cb_hit'|]
// file /usr/include/openssl/ssl.h line 964
struct anonymous_19;

// tag-#anon#ST[S32'timeout'||U32'_pad0'||*{EN#anon_enum_RENEG_INIT=0_RENEG_REJECT=1_RENEG_ALLOW=2_RENEG_ABORT=3#{U32}_U32_}_EN#anon_enum_RENEG_INIT=0_RENEG_REJECT=1_RENEG_ALLOW=2_RENEG_ABORT=3#{U32}_U32__'reneg_state'|]
// file http.c line 276
struct anonymous_6;

// tag-#anon#ST[U32'conn_id_length'||U32'cert_type'||U32'cert_length'||U32'csl'||U32'clear'||U32'enc'||ARR32{U8}_U8_'ccl'||U32'cipher_spec_length'||U32'session_id_length'||U32'clen'||U32'rlen'|]
// file /usr/include/openssl/ssl2.h line 203
struct anonymous_16;

// tag-#anon#UN[*{S8}_S8_'ptr'||*{SYM#tag-rsa_st#}_SYM#tag-rsa_st#_'rsa'||*{SYM#tag-dsa_st#}_SYM#tag-dsa_st#_'dsa'||*{SYM#tag-dh_st#}_SYM#tag-dh_st#_'dh'||*{SYM#tag-ec_key_st#}_SYM#tag-ec_key_st#_'ec'|]
// file /usr/include/openssl/evp.h line 135
union anonymous_25;

// tag-#anon#UN[*{S8}_S8_'ptr'||*{SYM#tag-x509_st#}_SYM#tag-x509_st#_'x509'||*{SYM#tag-X509_crl_st#}_SYM#tag-X509_crl_st#_'crl'||*{SYM#tag-evp_pkey_st#}_SYM#tag-evp_pkey_st#_'pkey'|]
// file /usr/include/openssl/x509_vfy.h line 126
union anonymous_23;

// tag-#anon#UN[*{S8}_S8_'ptr'||S32'boolean'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'asn1_string'||*{SYM#tag-asn1_object_st#}_SYM#tag-asn1_object_st#_'object'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'integer'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'enumerated'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'bit_string'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'octet_string'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'printablestring'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'t61string'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'ia5string'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'generalstring'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'bmpstring'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'universalstring'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'utctime'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'generalizedtime'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'visiblestring'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'utf8string'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'set'||*{SYM#tag-asn1_string_st#}_SYM#tag-asn1_string_st#_'sequence'||*{SYM#tag-ASN1_VALUE_st#}_SYM#tag-ASN1_VALUE_st#_'asn1_value'|]
// file /usr/include/openssl/asn1.h line 526
union anonymous_24;

// tag-#anon#UN[*{SYM#tag-wait#}_SYM#tag-wait#_'__uptr'||*{S32}_S32_'__iptr'|]
// file /usr/include/stdlib.h line 67
union anonymous_15;

// tag-#anon#UN[*{SYM#tag-wait#}_SYM#tag-wait#_'__uptr'||*{S32}_S32_'__iptr'|]_transparent
// file /usr/include/stdlib.h line 67
union anonymous_5;

// tag-#anon#UN[*{V(S32|S32|*{V}_V_)->V}_V(S32|S32|*{V}_V_)->V_'cb_1'||*{S32(S32|S32|*{SYM#tag-bn_gencb_st#}_SYM#tag-bn_gencb_st#_)->S32}_S32(S32|S32|*{SYM#tag-bn_gencb_st#}_SYM#tag-bn_gencb_st#_)->S32_'cb_2'|]
// file /usr/include/openssl/bn.h line 351
union anonymous_22;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_7;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_9;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_20;

// tag-ASIdentifiers_st
// file /usr/include/openssl/x509.h line 293
struct ASIdentifiers_st;

// tag-ASN1_ENCODING_st
// file /usr/include/openssl/asn1.h line 257
struct ASN1_ENCODING_st;

// tag-ASN1_VALUE_st
// file /usr/include/openssl/asn1.h line 299
struct ASN1_VALUE_st;

// tag-AUTHORITY_KEYID_st
// file /usr/include/openssl/ossl_typ.h line 186
struct AUTHORITY_KEYID_st;

// tag-DSA_SIG_st
// file /usr/include/openssl/dsa.h line 124
struct DSA_SIG_st;

// tag-ISSUING_DIST_POINT_st
// file /usr/include/openssl/ossl_typ.h line 188
struct ISSUING_DIST_POINT_st;

// tag-NAME_CONSTRAINTS_st
// file /usr/include/openssl/ossl_typ.h line 189
struct NAME_CONSTRAINTS_st;

// tag-X509_POLICY_CACHE_st
// file /usr/include/openssl/ossl_typ.h line 184
struct X509_POLICY_CACHE_st;

// tag-X509_POLICY_TREE_st
// file /usr/include/openssl/ossl_typ.h line 183
struct X509_POLICY_TREE_st;

// tag-X509_VERIFY_PARAM_ID_st
// file /usr/include/openssl/x509_vfy.h line 159
struct X509_VERIFY_PARAM_ID_st;

// tag-X509_VERIFY_PARAM_st
// file /usr/include/openssl/x509_vfy.h line 167
struct X509_VERIFY_PARAM_st;

// tag-X509_algor_st
// file /usr/include/openssl/ossl_typ.h line 155
struct X509_algor_st;

// tag-X509_crl_info_st
// file /usr/include/openssl/x509.h line 441
struct X509_crl_info_st;

// tag-X509_crl_st
// file /usr/include/openssl/ossl_typ.h line 156
struct X509_crl_st;

// tag-X509_name_st
// file /usr/include/openssl/ossl_typ.h line 159
struct X509_name_st;

// tag-X509_pubkey_st
// file /usr/include/openssl/ossl_typ.h line 160
struct X509_pubkey_st;

// tag-X509_val_st
// file /usr/include/openssl/x509.h line 152
struct X509_val_st;

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

// tag-_backend
// file pound.h line 315
struct _backend;

// tag-_code
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 69
struct _code;

// tag-_listener
// file pound.h line 386
struct _listener;

// tag-_matcher
// file pound.h line 306
struct _matcher;

// tag-_pound_ctx
// file pound.h line 379
struct _pound_ctx;

// tag-_pqueue
// file /usr/include/openssl/pqueue.h line 70
struct _pqueue;

// tag-_service
// file pound.h line 351
struct _service;

// tag-_thr_arg
// file pound.h line 418
struct _thr_arg;

// tag-_tn
// file pound.h line 335
struct _tn;

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

// tag-bn_blinding_st
// file /usr/include/openssl/ossl_typ.h line 122
struct bn_blinding_st;

// tag-bn_gencb_st
// file /usr/include/openssl/ossl_typ.h line 125
struct bn_gencb_st;

// tag-bn_mont_ctx_st
// file /usr/include/openssl/ossl_typ.h line 123
struct bn_mont_ctx_st;

// tag-buf_mem_st
// file /usr/include/openssl/ossl_typ.h line 127
struct buf_mem_st;

// tag-cert_st
// file /usr/include/openssl/ssl.h line 1035
struct cert_st;

// tag-comp_ctx_st
// file /usr/include/openssl/comp.h line 11
struct comp_ctx_st;

// tag-comp_method_st
// file /usr/include/openssl/comp.h line 13
struct comp_method_st;

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

// tag-dtls1_bitmap_st
// file /usr/include/openssl/dtls1.h line 128
struct dtls1_bitmap_st;

// tag-dtls1_retransmit_state
// file /usr/include/openssl/dtls1.h line 135
struct dtls1_retransmit_state;

// tag-dtls1_state_st
// file /usr/include/openssl/ssl.h line 1493
struct dtls1_state_st;

// tag-dtls1_timeout_st
// file /usr/include/openssl/dtls1.h line 162
struct dtls1_timeout_st;

// tag-ec_key_st
// file /usr/include/openssl/evp.h line 147
struct ec_key_st;

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

// tag-evp_pkey_asn1_method_st
// file /usr/include/openssl/ossl_typ.h line 135
struct evp_pkey_asn1_method_st;

// tag-evp_pkey_ctx_st
// file /usr/include/openssl/ossl_typ.h line 138
struct evp_pkey_ctx_st;

// tag-evp_pkey_st
// file /usr/include/openssl/ossl_typ.h line 133
struct evp_pkey_st;

// tag-group
// file /usr/include/grp.h line 42
struct group;

// tag-hm_header_st
// file /usr/include/openssl/dtls1.h line 147
struct hm_header_st;

// tag-hmac_ctx_st
// file /usr/include/openssl/hmac.h line 75
struct hmac_ctx_st;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-lhash_node_st
// file /usr/include/openssl/lhash.h line 79
struct lhash_node_st;

// tag-lhash_st
// file /usr/include/openssl/lhash.h line 139
struct lhash_st;

// tag-lhash_st_SSL_SESSION
// file /usr/include/openssl/ssl.h line 923
struct lhash_st_SSL_SESSION;

// tag-lhash_st_TABNODE
// file pound.h line 347
struct lhash_st_TABNODE;

// tag-linger
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 379
struct linger;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-record_pqueue_st
// file /usr/include/openssl/dtls1.h line 171
struct record_pqueue_st;

// tag-rsa_meth_st
// file /usr/include/openssl/ossl_typ.h line 147
struct rsa_meth_st;

// tag-rsa_st
// file /usr/include/openssl/ossl_typ.h line 146
struct rsa_st;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-sess_cert_st
// file /usr/include/openssl/ssl.h line 531
struct sess_cert_st;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-srp_ctx_st
// file /usr/include/openssl/ssl.h line 849
struct srp_ctx_st;

// tag-srtp_protection_profile_st
// file /usr/include/openssl/ssl.h line 383
struct srtp_protection_profile_st;

// tag-ssl2_state_st
// file /usr/include/openssl/ssl.h line 1491
struct ssl2_state_st;

// tag-ssl3_buf_freelist_st
// file /usr/include/openssl/ssl.h line 1114
struct ssl3_buf_freelist_st;

// tag-ssl3_buffer_st
// file /usr/include/openssl/ssl3.h line 438
struct ssl3_buffer_st;

// tag-ssl3_enc_method
// file /usr/include/openssl/ssl.h line 466
struct ssl3_enc_method;

// tag-ssl3_record_st
// file /usr/include/openssl/ssl3.h line 403
struct ssl3_record_st;

// tag-ssl3_state_st
// file /usr/include/openssl/ssl.h line 1492
struct ssl3_state_st;

// tag-ssl_cipher_st
// file /usr/include/openssl/ssl.h line 375
struct ssl_cipher_st;

// tag-ssl_comp_st
// file /usr/include/openssl/ssl.h line 908
struct ssl_comp_st;

// tag-ssl_ctx_st
// file /usr/include/openssl/ossl_typ.h line 179
struct ssl_ctx_st;

// tag-ssl_method_st
// file /usr/include/openssl/ssl.h line 374
struct ssl_method_st;

// tag-ssl_session_st
// file /usr/include/openssl/ssl.h line 376
struct ssl_session_st;

// tag-ssl_st
// file /usr/include/openssl/ossl_typ.h line 178
struct ssl_st;

// tag-stack_st
// file /usr/include/openssl/stack.h line 66
struct stack_st;

// tag-stack_st_ASN1_OBJECT
// file /usr/include/openssl/asn1.h line 793
struct stack_st_ASN1_OBJECT;

// tag-stack_st_DIST_POINT
// file /usr/include/openssl/x509.h line 288
struct stack_st_DIST_POINT;

// tag-stack_st_GENERAL_NAME
// file /usr/include/openssl/x509.h line 289
struct stack_st_GENERAL_NAME;

// tag-stack_st_GENERAL_NAMES
// file /usr/include/openssl/x509.h line 471
struct stack_st_GENERAL_NAMES;

// tag-stack_st_IPAddressFamily
// file /usr/include/openssl/x509.h line 292
struct stack_st_IPAddressFamily;

// tag-stack_st_OCSP_RESPID
// file /usr/include/openssl/ssl.h line 1610
struct stack_st_OCSP_RESPID;

// tag-stack_st_SRTP_PROTECTION_PROFILE
// file /usr/include/openssl/ssl.h line 388
struct stack_st_SRTP_PROTECTION_PROFILE;

// tag-stack_st_SSL_CIPHER
// file /usr/include/openssl/ssl.h line 380
struct stack_st_SSL_CIPHER;

// tag-stack_st_SSL_COMP
// file /usr/include/openssl/ssl.h line 922
struct stack_st_SSL_COMP;

// tag-stack_st_X509
// file /usr/include/openssl/x509.h line 301
struct stack_st_X509;

// tag-stack_st_X509_ALGOR
// file /usr/include/openssl/asn1.h line 162
struct stack_st_X509_ALGOR;

// tag-stack_st_X509_ATTRIBUTE
// file /usr/include/openssl/evp.h line 151
struct stack_st_X509_ATTRIBUTE;

// tag-stack_st_X509_CRL
// file /usr/include/openssl/x509.h line 476
struct stack_st_X509_CRL;

// tag-stack_st_X509_EXTENSION
// file /usr/include/openssl/x509.h line 202
struct stack_st_X509_EXTENSION;

// tag-stack_st_X509_LOOKUP
// file /usr/include/openssl/x509_vfy.h line 136
struct stack_st_X509_LOOKUP;

// tag-stack_st_X509_NAME
// file /usr/include/openssl/x509.h line 192
struct stack_st_X509_NAME;

// tag-stack_st_X509_NAME_ENTRY
// file /usr/include/openssl/x509.h line 175
struct stack_st_X509_NAME_ENTRY;

// tag-stack_st_X509_OBJECT
// file /usr/include/openssl/x509_vfy.h line 137
struct stack_st_X509_OBJECT;

// tag-stack_st_X509_REVOKED
// file /usr/include/openssl/x509.h line 438
struct stack_st_X509_REVOKED;

// tag-stack_st_void
// file /usr/include/openssl/crypto.h line 293
struct stack_st_void;

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

// tag-tls_session_ticket_ext_st
// file /usr/include/openssl/ssl.h line 373
struct tls_session_ticket_ext_st;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-wait
// file /usr/include/x86_64-linux-gnu/bits/waitstatus.h line 66
union wait;

// tag-x509_cert_aux_st
// file /usr/include/openssl/x509.h line 262
struct x509_cert_aux_st;

// tag-x509_cinf_st
// file /usr/include/openssl/x509.h line 242
struct x509_cinf_st;

// tag-x509_crl_method_st
// file /usr/include/openssl/ossl_typ.h line 157
struct x509_crl_method_st;

// tag-x509_lookup_method_st
// file /usr/include/openssl/x509_vfy.h line 140
struct x509_lookup_method_st;

// tag-x509_lookup_st
// file /usr/include/openssl/x509_vfy.h line 134
struct x509_lookup_st;

// tag-x509_object_st
// file /usr/include/openssl/x509_vfy.h line 123
struct x509_object_st;

// tag-x509_st
// file /usr/include/openssl/ossl_typ.h line 154
struct x509_st;

// tag-x509_store_ctx_st
// file /usr/include/openssl/ossl_typ.h line 162
struct x509_store_ctx_st;

// tag-x509_store_st
// file /usr/include/openssl/ossl_typ.h line 161
struct x509_store_st;

#ifndef NULL
#define NULL ((void*)0)
#endif

// ASN1_INTEGER_get
// file /usr/include/openssl/asn1.h line 928
signed long int ASN1_INTEGER_get(const struct asn1_string_st *);
// ASN1_TIME_print
// file /usr/include/openssl/asn1.h line 1037
signed int ASN1_TIME_print(struct bio_st *, const struct asn1_string_st *);
// BIO_ctrl
// file /usr/include/openssl/bio.h line 664
signed long int BIO_ctrl(struct bio_st *, signed int, signed long int, void *);
// BIO_f_base64
// file /usr/include/openssl/evp.h line 701
struct bio_method_st * BIO_f_base64(void);
// BIO_f_buffer
// file /usr/include/openssl/bio.h line 699
struct bio_method_st * BIO_f_buffer(void);
// BIO_f_ssl
// file /usr/include/openssl/ssl.h line 2121
struct bio_method_st * BIO_f_ssl(void);
// BIO_find_type
// file /usr/include/openssl/bio.h line 673
struct bio_st * BIO_find_type(struct bio_st *, signed int);
// BIO_free
// file /usr/include/openssl/bio.h line 657
signed int BIO_free(struct bio_st *);
// BIO_free_all
// file /usr/include/openssl/bio.h line 672
void BIO_free_all(struct bio_st *);
// BIO_get_callback_arg
// file /usr/include/openssl/bio.h line 303
char * BIO_get_callback_arg(const struct bio_st *);
// BIO_gets
// file /usr/include/openssl/bio.h line 660
signed int BIO_gets(struct bio_st *, char *, signed int);
// BIO_new
// file /usr/include/openssl/bio.h line 655
struct bio_st * BIO_new(struct bio_method_st *);
// BIO_new_socket
// file /usr/include/openssl/bio.h line 753
struct bio_st * BIO_new_socket(signed int, signed int);
// BIO_printf
// file /usr/include/openssl/bio.h line 790
signed int BIO_printf(struct bio_st *, const char *, ...);
// BIO_push
// file /usr/include/openssl/bio.h line 670
struct bio_st * BIO_push(struct bio_st *, struct bio_st *);
// BIO_puts
// file /usr/include/openssl/bio.h line 662
signed int BIO_puts(struct bio_st *, const char *);
// BIO_read
// file /usr/include/openssl/bio.h line 659
signed int BIO_read(struct bio_st *, void *, signed int);
// BIO_s_mem
// file /usr/include/openssl/bio.h line 687
struct bio_method_st * BIO_s_mem(void);
// BIO_set_callback
// file /usr/include/openssl/bio.h line 300
void BIO_set_callback(struct bio_st *, signed long int (*)(struct bio_st *, signed int, const char *, signed int, signed long int, signed long int));
// BIO_set_callback_arg
// file /usr/include/openssl/bio.h line 304
void BIO_set_callback_arg(struct bio_st *, char *);
// BIO_ssl_shutdown
// file /usr/include/openssl/ssl.h line 2126
void BIO_ssl_shutdown(struct bio_st *);
// BIO_write
// file /usr/include/openssl/bio.h line 661
signed int BIO_write(struct bio_st *, const void *, signed int);
// BN_bin2bn
// file /usr/include/openssl/bn.h line 441
struct bignum_st * BN_bin2bn(const unsigned char *, signed int, struct bignum_st *);
// CRYPTO_num_locks
// file /usr/include/openssl/crypto.h line 435
signed int CRYPTO_num_locks(void);
// CRYPTO_set_id_callback
// file /usr/include/openssl/crypto.h line 462
void CRYPTO_set_id_callback(unsigned long int (*)(void));
// CRYPTO_set_locking_callback
// file /usr/include/openssl/crypto.h line 437
void CRYPTO_set_locking_callback(void (*)(signed int, signed int, const char *, signed int));
// DH_free
// file /usr/include/openssl/dh.h line 201
void DH_free(struct dh_st *);
// DH_new
// file /usr/include/openssl/dh.h line 200
struct dh_st * DH_new(void);
// DH_tmp_callback
// file pound.h line 597
extern struct dh_st * DH_tmp_callback(struct ssl_st *s, signed int is_export, signed int keylength);
// ENGINE_by_id
// file /usr/include/openssl/engine.h line 393
struct engine_st * ENGINE_by_id(const char *);
// ENGINE_finish
// file /usr/include/openssl/engine.h line 657
signed int ENGINE_finish(struct engine_st *);
// ENGINE_free
// file /usr/include/openssl/engine.h line 551
signed int ENGINE_free(struct engine_st *);
// ENGINE_init
// file /usr/include/openssl/engine.h line 651
signed int ENGINE_init(struct engine_st *);
// ENGINE_load_builtin_engines
// file /usr/include/openssl/engine.h line 417
void ENGINE_load_builtin_engines(void);
// ENGINE_set_default
// file /usr/include/openssl/engine.h line 721
signed int ENGINE_set_default(struct engine_st *, unsigned int);
// ERR_clear_error
// file /usr/include/openssl/err.h line 333
void ERR_clear_error(void);
// ERR_error_string
// file /usr/include/openssl/err.h line 334
char * ERR_error_string(unsigned long int, char *);
// ERR_get_error
// file /usr/include/openssl/err.h line 321
unsigned long int ERR_get_error(void);
// ERR_remove_state
// file /usr/include/openssl/err.h line 357
void ERR_remove_state(unsigned long int);
// OPENSSL_add_all_algorithms_noconf
// file /usr/include/openssl/evp.h line 905
void OPENSSL_add_all_algorithms_noconf(void);
// PEM_read_X509
// file /usr/include/openssl/pem.h line 451
struct x509_st * PEM_read_X509(struct _IO_FILE *, struct x509_st **, signed int (*)(char *, signed int, signed int, void *), void *);
// PEM_write_bio_X509
// file /usr/include/openssl/pem.h line 451
signed int PEM_write_bio_X509(struct bio_st *, struct x509_st *);
// RSA_free
// file /usr/include/openssl/rsa.h line 343
void RSA_free(struct rsa_st *);
// RSA_generate_key
// file /usr/include/openssl/rsa.h line 326
struct rsa_st * RSA_generate_key(signed int, unsigned long int, void (*)(signed int, signed int, void *), void *);
// RSA_tmp_callback
// file pound.h line 592
extern struct rsa_st * RSA_tmp_callback(struct ssl_st *ssl, signed int is_export, signed int keylength);
// SNI_server_name
// file config.c line 809
static signed int SNI_server_name(struct ssl_st *ssl, signed int *dummy, struct _pound_ctx *ctx);
// SSLINFO_callback
// file pound.h line 602
extern void SSLINFO_callback(const struct ssl_st *ssl, signed int where, signed int rc);
// SSL_CIPHER_description
// file /usr/include/openssl/ssl.h line 2421
char * SSL_CIPHER_description(const struct ssl_cipher_st *, char *, signed int);
// SSL_CTX_callback_ctrl
// file /usr/include/openssl/ssl.h line 2340
signed long int SSL_CTX_callback_ctrl(struct ssl_ctx_st *, signed int, void (*)(void));
// SSL_CTX_check_private_key
// file /usr/include/openssl/ssl.h line 2285
signed int SSL_CTX_check_private_key(const struct ssl_ctx_st *);
// SSL_CTX_ctrl
// file /usr/include/openssl/ssl.h line 2339
signed long int SSL_CTX_ctrl(struct ssl_ctx_st *, signed int, signed long int, void *);
// SSL_CTX_get_cert_store
// file /usr/include/openssl/ssl.h line 2135
struct x509_store_st * SSL_CTX_get_cert_store(const struct ssl_ctx_st *);
// SSL_CTX_load_verify_locations
// file /usr/include/openssl/ssl.h line 2442
signed int SSL_CTX_load_verify_locations(struct ssl_ctx_st *, const char *, const char *);
// SSL_CTX_new
// file /usr/include/openssl/ssl.h line 2131
struct ssl_ctx_st * SSL_CTX_new(const struct ssl_method_st *);
// SSL_CTX_set_cipher_list
// file /usr/include/openssl/ssl.h line 2130
signed int SSL_CTX_set_cipher_list(struct ssl_ctx_st *, const char *);
// SSL_CTX_set_client_CA_list
// file /usr/include/openssl/ssl.h line 2408
void SSL_CTX_set_client_CA_list(struct ssl_ctx_st *, struct stack_st_X509_NAME *);
// SSL_CTX_set_ex_data
// file /usr/include/openssl/ssl.h line 2471
signed int SSL_CTX_set_ex_data(struct ssl_ctx_st *, signed int, void *);
// SSL_CTX_set_info_callback
// file /usr/include/openssl/ssl.h line 1246
void SSL_CTX_set_info_callback(struct ssl_ctx_st *, void (*)(const struct ssl_st *, signed int, signed int));
// SSL_CTX_set_session_id_context
// file /usr/include/openssl/ssl.h line 2288
signed int SSL_CTX_set_session_id_context(struct ssl_ctx_st *, const unsigned char *, unsigned int);
// SSL_CTX_set_tmp_dh_callback
// file /usr/include/openssl/ssl.h line 2519
void SSL_CTX_set_tmp_dh_callback(struct ssl_ctx_st *, struct dh_st * (*)(struct ssl_st *, signed int, signed int));
// SSL_CTX_set_tmp_rsa_callback
// file /usr/include/openssl/ssl.h line 2510
void SSL_CTX_set_tmp_rsa_callback(struct ssl_ctx_st *, struct rsa_st * (*)(struct ssl_st *, signed int, signed int));
// SSL_CTX_set_verify
// file /usr/include/openssl/ssl.h line 2262
void SSL_CTX_set_verify(struct ssl_ctx_st *, signed int, signed int (*)(signed int, struct x509_store_ctx_st *));
// SSL_CTX_set_verify_depth
// file /usr/include/openssl/ssl.h line 2264
void SSL_CTX_set_verify_depth(struct ssl_ctx_st *, signed int);
// SSL_CTX_use_PrivateKey_file
// file /usr/include/openssl/ssl.h line 2199
signed int SSL_CTX_use_PrivateKey_file(struct ssl_ctx_st *, const char *, signed int);
// SSL_CTX_use_certificate_chain_file
// file /usr/include/openssl/ssl.h line 2202
signed int SSL_CTX_use_certificate_chain_file(struct ssl_ctx_st *, const char *);
// SSL_get_current_cipher
// file /usr/include/openssl/ssl.h line 2142
const struct ssl_cipher_st * SSL_get_current_cipher(const struct ssl_st *);
// SSL_get_ex_data
// file /usr/include/openssl/ssl.h line 2460
void * SSL_get_ex_data(const struct ssl_st *, signed int);
// SSL_get_peer_certificate
// file /usr/include/openssl/ssl.h line 2253
struct x509_st * SSL_get_peer_certificate(const struct ssl_st *);
// SSL_get_servername
// file /usr/include/openssl/tls1.h line 309
const char * SSL_get_servername(const struct ssl_st *, const signed int);
// SSL_get_verify_result
// file /usr/include/openssl/ssl.h line 2457
signed long int SSL_get_verify_result(const struct ssl_st *);
// SSL_library_init
// file /usr/include/openssl/ssl.h line 2419
signed int SSL_library_init(void);
// SSL_load_client_CA_file
// file /usr/include/openssl/ssl.h line 2203
struct stack_st_X509_NAME * SSL_load_client_CA_file(const char *);
// SSL_load_error_strings
// file /usr/include/openssl/ssl.h line 2216
void SSL_load_error_strings(void);
// SSL_new
// file /usr/include/openssl/ssl.h line 2291
struct ssl_st * SSL_new(struct ssl_ctx_st *);
// SSL_set_SSL_CTX
// file /usr/include/openssl/ssl.h line 2448
struct ssl_ctx_st * SSL_set_SSL_CTX(struct ssl_st *, struct ssl_ctx_st *);
// SSL_set_bio
// file /usr/include/openssl/ssl.h line 2161
void SSL_set_bio(struct ssl_st *, struct bio_st *, struct bio_st *);
// SSL_set_ex_data
// file /usr/include/openssl/ssl.h line 2459
signed int SSL_set_ex_data(struct ssl_st *, signed int, void *);
// SSL_set_shutdown
// file /usr/include/openssl/ssl.h line 2438
void SSL_set_shutdown(struct ssl_st *, signed int);
// SSL_state
// file /usr/include/openssl/ssl.h line 2453
signed int SSL_state(const struct ssl_st *);
// SSLv23_client_method
// file /usr/include/openssl/ssl.h line 2364
const struct ssl_method_st * SSLv23_client_method(void);
// SSLv23_server_method
// file /usr/include/openssl/ssl.h line 2362
const struct ssl_method_st * SSLv23_server_method(void);
// X509_LOOKUP_file
// file /usr/include/openssl/x509_vfy.h line 495
struct x509_lookup_method_st * X509_LOOKUP_file(void);
// X509_NAME_oneline
// file /usr/include/openssl/x509.h line 875
char * X509_NAME_oneline(struct X509_name_st *, char *, signed int);
// X509_NAME_print_ex
// file /usr/include/openssl/x509.h line 997
signed int X509_NAME_print_ex(struct bio_st *, struct X509_name_st *, signed int, unsigned long int);
// X509_STORE_add_lookup
// file /usr/include/openssl/x509_vfy.h line 492
struct x509_lookup_st * X509_STORE_add_lookup(struct x509_store_st *, struct x509_lookup_method_st *);
// X509_STORE_set_flags
// file /usr/include/openssl/x509_vfy.h line 467
signed int X509_STORE_set_flags(struct x509_store_st *, unsigned long int);
// X509_free
// file /usr/include/openssl/x509.h line 823
void X509_free(struct x509_st *);
// X509_get_issuer_name
// file /usr/include/openssl/x509.h line 905
struct X509_name_st * X509_get_issuer_name(struct x509_st *);
// X509_get_serialNumber
// file /usr/include/openssl/x509.h line 903
struct asn1_string_st * X509_get_serialNumber(struct x509_st *);
// X509_get_subject_name
// file /usr/include/openssl/x509.h line 907
struct X509_name_st * X509_get_subject_name(struct x509_st *);
// X509_load_crl_file
// file /usr/include/openssl/x509_vfy.h line 508
signed int X509_load_crl_file(struct x509_lookup_st *, const char *, signed int);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// addr2str
// file pound.h line 502
extern void addr2str(char * const res, const signed int res_len, struct addrinfo *addr, const signed int no_port);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atoll
// file /usr/include/stdlib.h line 157
extern signed long long int atoll(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// bio_callback
// file http.c line 286
static signed long int bio_callback(struct bio_st * const bio, const signed int cmd, const char *argp, signed int argi, signed long int argl, signed long int ret);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// check_header
// file pound.h line 539
extern signed int check_header(const char *header, char * const content);
// chroot
// file /usr/include/unistd.h line 944
extern signed int chroot(const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// conf_err
// file config.c line 124
void conf_err(const char *msg);
// conf_fgets
// file config.c line 131
static char * conf_fgets(char *buf, const signed int max);
// conf_init
// file config.c line 108
static signed int conf_init(const char *name);
// config_parse
// file pound.h line 579
extern void config_parse(const signed int argc, char ** const argv);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// connect_nb
// file pound.h line 574
extern signed int connect_nb(const signed int sockfd, struct addrinfo *serv_addr, const signed int to);
// copy_bin
// file http.c line 111
static signed int copy_bin(struct bio_st * const cl, struct bio_st * const be, signed long long int cont, signed long long int *res_bytes, const signed int no_write);
// copy_chunks
// file http.c line 194
static signed int copy_chunks(struct bio_st * const cl, struct bio_st * const be, signed long long int *res_bytes, const signed int no_write, const signed long long int max_size);
// cpURL
// file pound.h line 497
extern signed int cpURL(char *res, char *src, signed int len);
// cur_time
// file http.c line 484
static double cur_time(void);
// do_RSAgen
// file svc.c line 1414
static void do_RSAgen(void);
// do_expire
// file svc.c line 1218
static void do_expire(void);
// do_http
// file http.c line 532
void do_http(struct _thr_arg *arg);
// do_rescale
// file svc.c line 1259
static void do_rescale(void);
// do_resurect
// file svc.c line 985
static void do_resurect(void);
// dump_sess
// file svc.c line 1563
static void dump_sess(const signed int control_sock, struct lhash_st_TABNODE * const sess, struct _backend * const backends);
// err_reply
// file http.c line 42
static void err_reply(struct bio_st * const c, const char *head, const char *txt);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// file2str
// file config.c line 633
static char * file2str(const char *fname);
// fnmatch
// file /usr/include/fnmatch.h line 56
extern signed int fnmatch(const char *, const char *, signed int);
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
// free_headers
// file http.c line 389
static void free_headers(char **headers);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// get_HEADERS
// file svc.c line 499
static signed int get_HEADERS(char *res, const struct _service *svc, char ** const headers);
// get_REQUEST
// file svc.c line 477
static signed int get_REQUEST(char *res, const struct _service *svc, const char *request);
// get_backend
// file pound.h line 517
extern struct _backend * get_backend(struct _service * const svc, struct addrinfo *from_host, const char *request, char ** const headers);
// get_dh1024
// file dh1024.h line 4
struct dh_st * get_dh1024();
// get_dh512
// file dh512.h line 4
struct dh_st * get_dh512();
// get_headers
// file http.c line 401
static char ** get_headers(struct bio_st * const in, struct bio_st * const cl, const struct _listener *lstn);
// get_host
// file pound.h line 522
extern signed int get_host(char * const name, struct addrinfo *res);
// get_line
// file http.c line 140
static signed int get_line(struct bio_st * const in, char * const buf, const signed int bufsize);
// get_service
// file pound.h line 512
extern struct _service * get_service(const struct _listener *lstn, const char *request, char ** const headers);
// get_thr_arg
// file pound.c line 153
extern struct _thr_arg * get_thr_arg(void);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getgrnam
// file /usr/include/grp.h line 110
extern struct group * getgrnam(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 219
extern signed int getsockopt(signed int, signed int, signed int, void *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// h_shut
// file pound.c line 187
static void h_shut(const signed int sig);
// h_term
// file pound.c line 173
static void h_term(const signed int sig);
// hash_backend
// file svc.c line 548
static struct _backend * hash_backend(struct _backend *be, signed int abs_pri, char *key);
// hexchar
// file http.c line 53
static char hexchar(char a);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// init_thr_arg
// file pound.c line 116
static void init_thr_arg(void);
// init_timer
// file pound.h line 620
extern void init_timer(void);
// is_readable
// file http.c line 376
static signed int is_readable(struct bio_st * const bio, const signed int to_wait);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// kill_be
// file pound.h line 548
extern void kill_be(struct _service * const svc, const struct _backend *be, const signed int disable_mode);
// l_id
// file pound.c line 102
static unsigned long int l_id(void);
// l_init
// file pound.c line 71
static void l_init(void);
// l_lock
// file pound.c line 87
static void l_lock(const signed int mode, const signed int n, const char *file, signed int line);
// lh_delete
// file /usr/include/openssl/lhash.h line 178
void * lh_delete(struct lhash_st *, const void *);
// lh_doall_arg
// file /usr/include/openssl/lhash.h line 181
void lh_doall_arg(struct lhash_st *, void (*)(void *, void *), void *);
// lh_insert
// file /usr/include/openssl/lhash.h line 177
void * lh_insert(struct lhash_st *, void *);
// lh_new
// file /usr/include/openssl/lhash.h line 175
struct lhash_st * lh_new(unsigned long int (*)(const void *), signed int (*)(const void *, const void *));
// lh_retrieve
// file /usr/include/openssl/lhash.h line 179
void * lh_retrieve(struct lhash_st *, const void *);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// log_bytes
// file http.c line 505
static void log_bytes(char *res, const signed long long int cnt);
// log_time
// file http.c line 468
static void log_time(char *res);
// logmsg
// file pound.h line 492
extern void logmsg(const signed int priority, const char *fmt, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// match_service
// file svc.c line 415
static signed int match_service(const struct _service *svc, const char *request, char ** const headers);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// need_rewrite
// file pound.h line 530
extern signed int need_rewrite(const signed int rewr_loc, char * const location, char * const path, const char *v_host, const struct _listener *lstn, const struct _backend *be);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_HTTP
// file config.c line 656
static struct _listener * parse_HTTP(void);
// parse_HTTPS
// file config.c line 837
static struct _listener * parse_HTTPS(void);
// parse_be
// file config.c line 174
static struct _backend * parse_be(const signed int is_emergency);
// parse_file
// file config.c line 1184
static void parse_file(void);
// parse_service
// file config.c line 472
static struct _service * parse_service(const char *svc_name);
// parse_sess
// file config.c line 349
static void parse_sess(struct _service * const svc);
// pcreposix_regcomp
// file /usr/include/pcreposix.h line 136
extern signed int pcreposix_regcomp(struct anonymous_8 *, const char *, signed int);
// pcreposix_regexec
// file /usr/include/pcreposix.h line 137
extern signed int pcreposix_regexec(const struct anonymous_8 *, const char *, unsigned long int, struct anonymous_4 *, signed int);
// pcreposix_regfree
// file /usr/include/pcreposix.h line 140
extern void pcreposix_regfree(struct anonymous_8 *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_2 *, const union anonymous_9 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_2 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_2 *, union anonymous_20 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_20 *, const union anonymous_9 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_20 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_20 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// put_thr_arg
// file pound.c line 127
extern signed int put_thr_arg(struct _thr_arg *arg);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// rand_backend
// file svc.c line 526
static struct _backend * rand_backend(struct _backend *be, signed int pri);
// random
// file /usr/include/stdlib.h line 321
extern signed long int random(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// redirect_reply
// file http.c line 63
static void redirect_reply(struct bio_st * const c, const char *url, const signed int code);
// sel_be
// file svc.c line 1619
static struct _backend * sel_be(const struct anonymous_0 *cmd);
// sel_lstn
// file svc.c line 1581
static struct _listener * sel_lstn(const struct anonymous_0 *cmd);
// sel_svc
// file svc.c line 1597
static struct _service * sel_svc(const struct anonymous_0 *cmd);
// setegid
// file /usr/include/unistd.h line 727
extern signed int setegid(unsigned int);
// seteuid
// file /usr/include/unistd.h line 710
extern signed int seteuid(unsigned int);
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
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// srandom
// file /usr/include/stdlib.h line 324
extern void srandom(unsigned int);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
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
// strip_eol
// file http.c line 179
static signed int strip_eol(char *lin);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// t_LHASH_COMP
// file config.c line 462
static signed int t_LHASH_COMP(const void *arg1, const void *arg2);
// t_LHASH_HASH
// file config.c line 450
static unsigned long int t_LHASH_HASH(const void *arg);
// t_add
// file svc.c line 40
static void t_add(struct lhash_st_TABNODE * const tab, const char *key, const void *content, const unsigned long int cont_len);
// t_clean
// file svc.c line 194
static void t_clean(struct lhash_st_TABNODE * const tab, void * const content, const unsigned long int cont_len);
// t_cmp
// file config.c line 456
static signed int t_cmp(const struct _tn *d1, const struct _tn *d2);
// t_cont_LHASH_DOALL_ARG
// file svc.c line 184
void t_cont_LHASH_DOALL_ARG(void *arg1, void *arg2);
// t_cont_doall_arg
// file svc.c line 167
static void t_cont_doall_arg(struct _tn *t, struct anonymous_11 *arg);
// t_dump_LHASH_DOALL_ARG
// file svc.c line 1553
void t_dump_LHASH_DOALL_ARG(void *arg1, void *arg2);
// t_dump_doall_arg
// file svc.c line 1533
static void t_dump_doall_arg(struct _tn *t, struct anonymous *arg);
// t_expire
// file svc.c line 148
static void t_expire(struct lhash_st_TABNODE * const tab, const signed long int lim);
// t_find
// file svc.c line 80
static void * t_find(struct lhash_st_TABNODE * const tab, char * const key);
// t_hash
// file config.c line 437
static unsigned long int t_hash(const struct _tn *e);
// t_old_LHASH_DOALL_ARG
// file svc.c line 138
void t_old_LHASH_DOALL_ARG(void *arg1, void *arg2);
// t_old_doall_arg
// file svc.c line 121
static void t_old_doall_arg(struct _tn *t, struct anonymous_11 *a);
// t_remove
// file svc.c line 96
static void t_remove(struct lhash_st_TABNODE * const tab, char * const key);
// thr_control
// file pound.h line 635
extern void * thr_control(void *arg);
// thr_http
// file pound.h line 487
extern void * thr_http(void *dummy);
// thr_timer
// file pound.h line 629
extern void * thr_timer(void *arg);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// upd_be
// file pound.h line 568
extern void upd_be(struct _service * const svc, struct _backend * const be, const double elapsed);
// upd_session
// file pound.h line 534
extern void upd_session(struct _service * const svc, char ** const headers, struct _backend * const be);
// verify_OK
// file config.c line 802
static signed int verify_OK(signed int pre_ok, struct x509_store_ctx_st *ctx);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// wait
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 102
extern signed int wait(union anonymous_5);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_11
{
  // tab
  struct lhash_st_TABNODE *tab;
  // lim
  signed long int lim;
  // content
  void *content;
  // cont_len
  signed int cont_len;
};

struct anonymous_8
{
  // re_pcre
  void *re_pcre;
  // re_nsub
  unsigned long int re_nsub;
  // re_erroffset
  unsigned long int re_erroffset;
};

struct anonymous_17
{
  // cert_verify_md
  unsigned char cert_verify_md[128l];
  // finish_md
  unsigned char finish_md[128l];
  // finish_md_len
  signed int finish_md_len;
  // peer_finish_md
  unsigned char peer_finish_md[128l];
  // peer_finish_md_len
  signed int peer_finish_md_len;
  // message_size
  unsigned long int message_size;
  // message_type
  signed int message_type;
  // new_cipher
  const struct ssl_cipher_st *new_cipher;
  // dh
  struct dh_st *dh;
  // ecdh
  struct ec_key_st *ecdh;
  // next_state
  signed int next_state;
  // reuse_message
  signed int reuse_message;
  // cert_req
  signed int cert_req;
  // ctype_num
  signed int ctype_num;
  // ctype
  char ctype[9l];
  // ca_names
  struct stack_st_X509_NAME *ca_names;
  // use_rsa_tmp
  signed int use_rsa_tmp;
  // key_block_length
  signed int key_block_length;
  // key_block
  unsigned char *key_block;
  // new_sym_enc
  const struct evp_cipher_st *new_sym_enc;
  // new_hash
  const struct env_md_st *new_hash;
  // new_mac_pkey_type
  signed int new_mac_pkey_type;
  // new_mac_secret_size
  signed int new_mac_secret_size;
  // new_compression
  const struct ssl_comp_st *new_compression;
  // cert_request
  signed int cert_request;
};

struct anonymous_14
{
  // __w_stopval
  unsigned int __w_stopval : 8;
  // __w_stopsig
  unsigned int __w_stopsig : 8;
  // _anon0
  unsigned int _anon0 : 16;
};

struct anonymous_13
{
  // __w_termsig
  unsigned int __w_termsig : 7;
  // __w_coredump
  unsigned int __w_coredump : 1;
  // __w_retcode
  unsigned int __w_retcode : 8;
  // _anon0
  unsigned int _anon0 : 16;
};

struct anonymous_0
{
  // cmd
  enum anonymous_10 cmd;
  // listener
  signed int listener;
  // service
  signed int service;
  // backend
  signed int backend;
  // key
  char key[128l];
};

struct anonymous_1
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

struct anonymous
{
  // control_sock
  signed int control_sock;
  // backends
  struct _backend *backends;
};

struct anonymous_4
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous_19
{
  // sess_connect
  signed int sess_connect;
  // sess_connect_renegotiate
  signed int sess_connect_renegotiate;
  // sess_connect_good
  signed int sess_connect_good;
  // sess_accept
  signed int sess_accept;
  // sess_accept_renegotiate
  signed int sess_accept_renegotiate;
  // sess_accept_good
  signed int sess_accept_good;
  // sess_miss
  signed int sess_miss;
  // sess_timeout
  signed int sess_timeout;
  // sess_cache_full
  signed int sess_cache_full;
  // sess_hit
  signed int sess_hit;
  // sess_cb_hit
  signed int sess_cb_hit;
};

struct anonymous_6
{
  // timeout
  signed int timeout;
  // reneg_state
  enum anonymous_3 *reneg_state;
};

struct anonymous_16
{
  // conn_id_length
  unsigned int conn_id_length;
  // cert_type
  unsigned int cert_type;
  // cert_length
  unsigned int cert_length;
  // csl
  unsigned int csl;
  // clear
  unsigned int clear;
  // enc
  unsigned int enc;
  // ccl
  unsigned char ccl[32l];
  // cipher_spec_length
  unsigned int cipher_spec_length;
  // session_id_length
  unsigned int session_id_length;
  // clen
  unsigned int clen;
  // rlen
  unsigned int rlen;
};

union anonymous_25
{
  // ptr
  char *ptr;
  // rsa
  struct rsa_st *rsa;
  // dsa
  struct dsa_st *dsa;
  // dh
  struct dh_st *dh;
  // ec
  struct ec_key_st *ec;
};

union anonymous_23
{
  // ptr
  char *ptr;
  // x509
  struct x509_st *x509;
  // crl
  struct X509_crl_st *crl;
  // pkey
  struct evp_pkey_st *pkey;
};

union anonymous_24
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

union anonymous_15
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
};

union anonymous_5
{
  // __uptr
  union wait *__uptr;
  // __iptr
  signed int *__iptr;
} __attribute__ ((__transparent_union__));

union anonymous_22
{
  // cb_1
  void (*cb_1)(signed int, signed int, void *);
  // cb_2
  signed int (*cb_2)(signed int, signed int, struct bn_gencb_st *);
};

union anonymous_7
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_9
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // __data
  struct anonymous_1 __data;
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

union anonymous_20
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct ASN1_ENCODING_st
{
  // enc
  unsigned char *enc;
  // len
  signed long int len;
  // modified
  signed int modified;
};

struct DSA_SIG_st
{
  // r
  struct bignum_st *r;
  // s
  struct bignum_st *s;
};

struct X509_VERIFY_PARAM_st
{
  // name
  char *name;
  // check_time
  signed long int check_time;
  // inh_flags
  unsigned long int inh_flags;
  // flags
  unsigned long int flags;
  // purpose
  signed int purpose;
  // trust
  signed int trust;
  // depth
  signed int depth;
  // policies
  struct stack_st_ASN1_OBJECT *policies;
  // id
  struct X509_VERIFY_PARAM_ID_st *id;
};

struct X509_algor_st
{
  // algorithm
  struct asn1_object_st *algorithm;
  // parameter
  struct asn1_type_st *parameter;
};

struct X509_crl_info_st
{
  // version
  struct asn1_string_st *version;
  // sig_alg
  struct X509_algor_st *sig_alg;
  // issuer
  struct X509_name_st *issuer;
  // lastUpdate
  struct asn1_string_st *lastUpdate;
  // nextUpdate
  struct asn1_string_st *nextUpdate;
  // revoked
  struct stack_st_X509_REVOKED *revoked;
  // extensions
  struct stack_st_X509_EXTENSION *extensions;
  // enc
  struct ASN1_ENCODING_st enc;
};

struct X509_crl_st
{
  // crl
  struct X509_crl_info_st *crl;
  // sig_alg
  struct X509_algor_st *sig_alg;
  // signature
  struct asn1_string_st *signature;
  // references
  signed int references;
  // flags
  signed int flags;
  // akid
  struct AUTHORITY_KEYID_st *akid;
  // idp
  struct ISSUING_DIST_POINT_st *idp;
  // idp_flags
  signed int idp_flags;
  // idp_reasons
  signed int idp_reasons;
  // crl_number
  struct asn1_string_st *crl_number;
  // base_crl_number
  struct asn1_string_st *base_crl_number;
  // sha1_hash
  unsigned char sha1_hash[20l];
  // issuers
  struct stack_st_GENERAL_NAMES *issuers;
  // meth
  const struct x509_crl_method_st *meth;
  // meth_data
  void *meth_data;
};

struct X509_name_st
{
  // entries
  struct stack_st_X509_NAME_ENTRY *entries;
  // modified
  signed int modified;
  // bytes
  struct buf_mem_st *bytes;
  // canon_enc
  unsigned char *canon_enc;
  // canon_enclen
  signed int canon_enclen;
};

struct X509_pubkey_st
{
  // algor
  struct X509_algor_st *algor;
  // public_key
  struct asn1_string_st *public_key;
  // pkey
  struct evp_pkey_st *pkey;
};

struct X509_val_st
{
  // notBefore
  struct asn1_string_st *notBefore;
  // notAfter
  struct asn1_string_st *notAfter;
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

struct _backend
{
  // be_type
  signed int be_type;
  // addr
  struct addrinfo addr;
  // priority
  signed int priority;
  // to
  signed int to;
  // conn_to
  signed int conn_to;
  // ha_addr
  struct addrinfo ha_addr;
  // url
  char *url;
  // redir_req
  signed int redir_req;
  // ctx
  struct ssl_ctx_st *ctx;
  // mut
  union anonymous_20 mut;
  // n_requests
  signed int n_requests;
  // t_requests
  double t_requests;
  // t_average
  double t_average;
  // alive
  signed int alive;
  // resurrect
  signed int resurrect;
  // disabled
  signed int disabled;
  // next
  struct _backend *next;
};

struct _code
{
  // c_name
  char *c_name;
  // c_val
  signed int c_val;
};

struct _listener
{
  // addr
  struct addrinfo addr;
  // sock
  signed int sock;
  // ctx
  struct _pound_ctx *ctx;
  // clnt_check
  signed int clnt_check;
  // noHTTPS11
  signed int noHTTPS11;
  // add_head
  char *add_head;
  // verb
  struct anonymous_8 verb;
  // to
  signed int to;
  // has_pat
  signed int has_pat;
  // url_pat
  struct anonymous_8 url_pat;
  // err414
  char *err414;
  // err500
  char *err500;
  // err501
  char *err501;
  // err503
  char *err503;
  // max_req
  signed long long int max_req;
  // head_off
  struct _matcher *head_off;
  // rewr_loc
  signed int rewr_loc;
  // rewr_dest
  signed int rewr_dest;
  // disabled
  signed int disabled;
  // log_level
  signed int log_level;
  // allow_client_reneg
  signed int allow_client_reneg;
  // disable_ssl_v2
  signed int disable_ssl_v2;
  // disable_ssl_v3
  signed int disable_ssl_v3;
  // services
  struct _service *services;
  // next
  struct _listener *next;
};

struct _matcher
{
  // pat
  struct anonymous_8 pat;
  // next
  struct _matcher *next;
};

struct _pound_ctx
{
  // ctx
  struct ssl_ctx_st *ctx;
  // server_name
  char *server_name;
  // next
  struct _pound_ctx *next;
};

struct _service
{
  // name
  char name[128l];
  // url
  struct _matcher *url;
  // req_head
  struct _matcher *req_head;
  // deny_head
  struct _matcher *deny_head;
  // backends
  struct _backend *backends;
  // emergency
  struct _backend *emergency;
  // abs_pri
  signed int abs_pri;
  // tot_pri
  signed int tot_pri;
  // mut
  union anonymous_20 mut;
  // sess_type
  enum anonymous_18 sess_type;
  // sess_ttl
  signed int sess_ttl;
  // sess_start
  struct anonymous_8 sess_start;
  // sess_pat
  struct anonymous_8 sess_pat;
  // sessions
  struct lhash_st_TABNODE *sessions;
  // dynscale
  signed int dynscale;
  // disabled
  signed int disabled;
  // next
  struct _service *next;
};

struct _thr_arg
{
  // sock
  signed int sock;
  // lstn
  struct _listener *lstn;
  // from_host
  struct addrinfo from_host;
  // next
  struct _thr_arg *next;
};

struct _tn
{
  // key
  char *key;
  // content
  void *content;
  // last_acc
  signed long int last_acc;
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
  union anonymous_24 value;
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
  union anonymous_22 cb;
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

struct buf_mem_st
{
  // length
  unsigned long int length;
  // data
  char *data;
  // max
  unsigned long int max;
};

struct comp_ctx_st
{
  // meth
  struct comp_method_st *meth;
  // compress_in
  unsigned long int compress_in;
  // compress_out
  unsigned long int compress_out;
  // expand_in
  unsigned long int expand_in;
  // expand_out
  unsigned long int expand_out;
  // ex_data
  struct crypto_ex_data_st ex_data;
};

struct comp_method_st
{
  // type
  signed int type;
  // name
  const char *name;
  // init
  signed int (*init)(struct comp_ctx_st *);
  // finish
  void (*finish)(struct comp_ctx_st *);
  // compress
  signed int (*compress)(struct comp_ctx_st *, unsigned char *, unsigned int, unsigned char *, unsigned int);
  // expand
  signed int (*expand)(struct comp_ctx_st *, unsigned char *, unsigned int, unsigned char *, unsigned int);
  // ctrl
  signed long int (*ctrl)(void);
  // callback_ctrl
  signed long int (*callback_ctrl)(void);
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

struct dtls1_bitmap_st
{
  // map
  unsigned long int map;
  // max_seq_num
  unsigned char max_seq_num[8l];
};

struct dtls1_retransmit_state
{
  // enc_write_ctx
  struct evp_cipher_ctx_st *enc_write_ctx;
  // write_hash
  struct env_md_ctx_st *write_hash;
  // compress
  struct comp_ctx_st *compress;
  // session
  struct ssl_session_st *session;
  // epoch
  unsigned short int epoch;
};

struct record_pqueue_st
{
  // epoch
  unsigned short int epoch;
  // q
  struct _pqueue *q;
};

struct hm_header_st
{
  // type
  unsigned char type;
  // msg_len
  unsigned long int msg_len;
  // seq
  unsigned short int seq;
  // frag_off
  unsigned long int frag_off;
  // frag_len
  unsigned long int frag_len;
  // is_ccs
  unsigned int is_ccs;
  // saved_retransmit_state
  struct dtls1_retransmit_state saved_retransmit_state;
};

struct dtls1_timeout_st
{
  // read_timeouts
  unsigned int read_timeouts;
  // write_timeouts
  unsigned int write_timeouts;
  // num_alerts
  unsigned int num_alerts;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct dtls1_state_st
{
  // send_cookie
  unsigned int send_cookie;
  // cookie
  unsigned char cookie[256l];
  // rcvd_cookie
  unsigned char rcvd_cookie[256l];
  // cookie_len
  unsigned int cookie_len;
  // r_epoch
  unsigned short int r_epoch;
  // w_epoch
  unsigned short int w_epoch;
  // bitmap
  struct dtls1_bitmap_st bitmap;
  // next_bitmap
  struct dtls1_bitmap_st next_bitmap;
  // handshake_write_seq
  unsigned short int handshake_write_seq;
  // next_handshake_write_seq
  unsigned short int next_handshake_write_seq;
  // handshake_read_seq
  unsigned short int handshake_read_seq;
  // last_write_sequence
  unsigned char last_write_sequence[8l];
  // unprocessed_rcds
  struct record_pqueue_st unprocessed_rcds;
  // processed_rcds
  struct record_pqueue_st processed_rcds;
  // buffered_messages
  struct _pqueue *buffered_messages;
  // sent_messages
  struct _pqueue *sent_messages;
  // buffered_app_data
  struct record_pqueue_st buffered_app_data;
  // listen
  unsigned int listen;
  // link_mtu
  unsigned int link_mtu;
  // mtu
  unsigned int mtu;
  // w_msg_hdr
  struct hm_header_st w_msg_hdr;
  // r_msg_hdr
  struct hm_header_st r_msg_hdr;
  // timeout
  struct dtls1_timeout_st timeout;
  // next_timeout
  struct timeval next_timeout;
  // timeout_duration
  unsigned short int timeout_duration;
  // alert_fragment
  unsigned char alert_fragment[2l];
  // alert_fragment_len
  unsigned int alert_fragment_len;
  // handshake_fragment
  unsigned char handshake_fragment[12l];
  // handshake_fragment_len
  unsigned int handshake_fragment_len;
  // retransmitting
  unsigned int retransmitting;
  // change_cipher_spec_ok
  unsigned int change_cipher_spec_ok;
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

struct evp_pkey_st
{
  // type
  signed int type;
  // save_type
  signed int save_type;
  // references
  signed int references;
  // ameth
  const struct evp_pkey_asn1_method_st *ameth;
  // engine
  struct engine_st *engine;
  // pkey
  union anonymous_25 pkey;
  // save_parameters
  signed int save_parameters;
  // attributes
  struct stack_st_X509_ATTRIBUTE *attributes;
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

struct hmac_ctx_st
{
  // md
  const struct env_md_st *md;
  // md_ctx
  struct env_md_ctx_st md_ctx;
  // i_ctx
  struct env_md_ctx_st i_ctx;
  // o_ctx
  struct env_md_ctx_st o_ctx;
  // key_length
  unsigned int key_length;
  // key
  unsigned char key[128l];
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

struct in6_addr
{
  // __in6_u
  union anonymous_7 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct lhash_node_st
{
  // data
  void *data;
  // next
  struct lhash_node_st *next;
  // hash
  unsigned long int hash;
};

struct lhash_st
{
  // b
  struct lhash_node_st **b;
  // comp
  signed int (*comp)(const void *, const void *);
  // hash
  unsigned long int (*hash)(const void *);
  // num_nodes
  unsigned int num_nodes;
  // num_alloc_nodes
  unsigned int num_alloc_nodes;
  // p
  unsigned int p;
  // pmax
  unsigned int pmax;
  // up_load
  unsigned long int up_load;
  // down_load
  unsigned long int down_load;
  // num_items
  unsigned long int num_items;
  // num_expands
  unsigned long int num_expands;
  // num_expand_reallocs
  unsigned long int num_expand_reallocs;
  // num_contracts
  unsigned long int num_contracts;
  // num_contract_reallocs
  unsigned long int num_contract_reallocs;
  // num_hash_calls
  unsigned long int num_hash_calls;
  // num_comp_calls
  unsigned long int num_comp_calls;
  // num_insert
  unsigned long int num_insert;
  // num_replace
  unsigned long int num_replace;
  // num_delete
  unsigned long int num_delete;
  // num_no_delete
  unsigned long int num_no_delete;
  // num_retrieve
  unsigned long int num_retrieve;
  // num_retrieve_miss
  unsigned long int num_retrieve_miss;
  // num_hash_comps
  unsigned long int num_hash_comps;
  // error
  signed int error;
};

struct lhash_st_SSL_SESSION
{
  // dummy
  signed int dummy;
};

struct lhash_st_TABNODE
{
  // dummy
  signed int dummy;
};

struct linger
{
  // l_onoff
  signed int l_onoff;
  // l_linger
  signed int l_linger;
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

struct rsa_meth_st
{
  // name
  const char *name;
  // rsa_pub_enc
  signed int (*rsa_pub_enc)(signed int, const unsigned char *, unsigned char *, struct rsa_st *, signed int);
  // rsa_pub_dec
  signed int (*rsa_pub_dec)(signed int, const unsigned char *, unsigned char *, struct rsa_st *, signed int);
  // rsa_priv_enc
  signed int (*rsa_priv_enc)(signed int, const unsigned char *, unsigned char *, struct rsa_st *, signed int);
  // rsa_priv_dec
  signed int (*rsa_priv_dec)(signed int, const unsigned char *, unsigned char *, struct rsa_st *, signed int);
  // rsa_mod_exp
  signed int (*rsa_mod_exp)(struct bignum_st *, const struct bignum_st *, struct rsa_st *, struct bignum_ctx *);
  // bn_mod_exp
  signed int (*bn_mod_exp)(struct bignum_st *, const struct bignum_st *, const struct bignum_st *, const struct bignum_st *, struct bignum_ctx *, struct bn_mont_ctx_st *);
  // init
  signed int (*init)(struct rsa_st *);
  // finish
  signed int (*finish)(struct rsa_st *);
  // flags
  signed int flags;
  // app_data
  char *app_data;
  // rsa_sign
  signed int (*rsa_sign)(signed int, const unsigned char *, unsigned int, unsigned char *, unsigned int *, const struct rsa_st *);
  // rsa_verify
  signed int (*rsa_verify)(signed int, const unsigned char *, unsigned int, const unsigned char *, unsigned int, const struct rsa_st *);
  // rsa_keygen
  signed int (*rsa_keygen)(struct rsa_st *, signed int, struct bignum_st *, struct bn_gencb_st *);
};

struct rsa_st
{
  // pad
  signed int pad;
  // version
  signed long int version;
  // meth
  const struct rsa_meth_st *meth;
  // engine
  struct engine_st *engine;
  // n
  struct bignum_st *n;
  // e
  struct bignum_st *e;
  // d
  struct bignum_st *d;
  // p
  struct bignum_st *p;
  // q
  struct bignum_st *q;
  // dmp1
  struct bignum_st *dmp1;
  // dmq1
  struct bignum_st *dmq1;
  // iqmp
  struct bignum_st *iqmp;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // references
  signed int references;
  // flags
  signed int flags;
  // _method_mod_n
  struct bn_mont_ctx_st *_method_mod_n;
  // _method_mod_p
  struct bn_mont_ctx_st *_method_mod_p;
  // _method_mod_q
  struct bn_mont_ctx_st *_method_mod_q;
  // bignum_data
  char *bignum_data;
  // blinding
  struct bn_blinding_st *blinding;
  // mt_blinding
  struct bn_blinding_st *mt_blinding;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
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

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
};

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
};

struct srp_ctx_st
{
  // SRP_cb_arg
  void *SRP_cb_arg;
  // TLS_ext_srp_username_callback
  signed int (*TLS_ext_srp_username_callback)(struct ssl_st *, signed int *, void *);
  // SRP_verify_param_callback
  signed int (*SRP_verify_param_callback)(struct ssl_st *, void *);
  // SRP_give_srp_client_pwd_callback
  char * (*SRP_give_srp_client_pwd_callback)(struct ssl_st *, void *);
  // login
  char *login;
  // N
  struct bignum_st *N;
  // g
  struct bignum_st *g;
  // s
  struct bignum_st *s;
  // B
  struct bignum_st *B;
  // A
  struct bignum_st *A;
  // a
  struct bignum_st *a;
  // b
  struct bignum_st *b;
  // v
  struct bignum_st *v;
  // info
  char *info;
  // strength
  signed int strength;
  // srp_Mask
  unsigned long int srp_Mask;
};

struct srtp_protection_profile_st
{
  // name
  const char *name;
  // id
  unsigned long int id;
};

struct ssl2_state_st
{
  // three_byte_header
  signed int three_byte_header;
  // clear_text
  signed int clear_text;
  // escape
  signed int escape;
  // ssl2_rollback
  signed int ssl2_rollback;
  // wnum
  unsigned int wnum;
  // wpend_tot
  signed int wpend_tot;
  // wpend_buf
  const unsigned char *wpend_buf;
  // wpend_off
  signed int wpend_off;
  // wpend_len
  signed int wpend_len;
  // wpend_ret
  signed int wpend_ret;
  // rbuf_left
  signed int rbuf_left;
  // rbuf_offs
  signed int rbuf_offs;
  // rbuf
  unsigned char *rbuf;
  // wbuf
  unsigned char *wbuf;
  // write_ptr
  unsigned char *write_ptr;
  // padding
  unsigned int padding;
  // rlength
  unsigned int rlength;
  // ract_data_length
  signed int ract_data_length;
  // wlength
  unsigned int wlength;
  // wact_data_length
  signed int wact_data_length;
  // ract_data
  unsigned char *ract_data;
  // wact_data
  unsigned char *wact_data;
  // mac_data
  unsigned char *mac_data;
  // read_key
  unsigned char *read_key;
  // write_key
  unsigned char *write_key;
  // challenge_length
  unsigned int challenge_length;
  // challenge
  unsigned char challenge[32l];
  // conn_id_length
  unsigned int conn_id_length;
  // conn_id
  unsigned char conn_id[16l];
  // key_material_length
  unsigned int key_material_length;
  // key_material
  unsigned char key_material[48l];
  // read_sequence
  unsigned long int read_sequence;
  // write_sequence
  unsigned long int write_sequence;
  // tmp
  struct anonymous_16 tmp;
};

struct ssl3_buffer_st
{
  // buf
  unsigned char *buf;
  // len
  unsigned long int len;
  // offset
  signed int offset;
  // left
  signed int left;
};

struct ssl3_record_st
{
  // type
  signed int type;
  // length
  unsigned int length;
  // off
  unsigned int off;
  // data
  unsigned char *data;
  // input
  unsigned char *input;
  // comp
  unsigned char *comp;
  // epoch
  unsigned long int epoch;
  // seq_num
  unsigned char seq_num[8l];
};

struct ssl3_state_st
{
  // flags
  signed long int flags;
  // delay_buf_pop_ret
  signed int delay_buf_pop_ret;
  // read_sequence
  unsigned char read_sequence[8l];
  // read_mac_secret_size
  signed int read_mac_secret_size;
  // read_mac_secret
  unsigned char read_mac_secret[64l];
  // write_sequence
  unsigned char write_sequence[8l];
  // write_mac_secret_size
  signed int write_mac_secret_size;
  // write_mac_secret
  unsigned char write_mac_secret[64l];
  // server_random
  unsigned char server_random[32l];
  // client_random
  unsigned char client_random[32l];
  // need_empty_fragments
  signed int need_empty_fragments;
  // empty_fragment_done
  signed int empty_fragment_done;
  // init_extra
  signed int init_extra;
  // rbuf
  struct ssl3_buffer_st rbuf;
  // wbuf
  struct ssl3_buffer_st wbuf;
  // rrec
  struct ssl3_record_st rrec;
  // wrec
  struct ssl3_record_st wrec;
  // alert_fragment
  unsigned char alert_fragment[2l];
  // alert_fragment_len
  unsigned int alert_fragment_len;
  // handshake_fragment
  unsigned char handshake_fragment[4l];
  // handshake_fragment_len
  unsigned int handshake_fragment_len;
  // wnum
  unsigned int wnum;
  // wpend_tot
  signed int wpend_tot;
  // wpend_type
  signed int wpend_type;
  // wpend_ret
  signed int wpend_ret;
  // wpend_buf
  const unsigned char *wpend_buf;
  // handshake_buffer
  struct bio_st *handshake_buffer;
  // handshake_dgst
  struct env_md_ctx_st **handshake_dgst;
  // change_cipher_spec
  signed int change_cipher_spec;
  // warn_alert
  signed int warn_alert;
  // fatal_alert
  signed int fatal_alert;
  // alert_dispatch
  signed int alert_dispatch;
  // send_alert
  unsigned char send_alert[2l];
  // renegotiate
  signed int renegotiate;
  // total_renegotiations
  signed int total_renegotiations;
  // num_renegotiations
  signed int num_renegotiations;
  // in_read_app_data
  signed int in_read_app_data;
  // client_opaque_prf_input
  void *client_opaque_prf_input;
  // client_opaque_prf_input_len
  unsigned long int client_opaque_prf_input_len;
  // server_opaque_prf_input
  void *server_opaque_prf_input;
  // server_opaque_prf_input_len
  unsigned long int server_opaque_prf_input_len;
  // tmp
  struct anonymous_17 tmp;
  // previous_client_finished
  unsigned char previous_client_finished[64l];
  // previous_client_finished_len
  unsigned char previous_client_finished_len;
  // previous_server_finished
  unsigned char previous_server_finished[64l];
  // previous_server_finished_len
  unsigned char previous_server_finished_len;
  // send_connection_binding
  signed int send_connection_binding;
  // next_proto_neg_seen
  signed int next_proto_neg_seen;
  // is_probably_safari
  char is_probably_safari;
  // alpn_selected
  unsigned char *alpn_selected;
  // alpn_selected_len
  unsigned int alpn_selected_len;
};

struct ssl_cipher_st
{
  // valid
  signed int valid;
  // name
  const char *name;
  // id
  unsigned long int id;
  // algorithm_mkey
  unsigned long int algorithm_mkey;
  // algorithm_auth
  unsigned long int algorithm_auth;
  // algorithm_enc
  unsigned long int algorithm_enc;
  // algorithm_mac
  unsigned long int algorithm_mac;
  // algorithm_ssl
  unsigned long int algorithm_ssl;
  // algo_strength
  unsigned long int algo_strength;
  // algorithm2
  unsigned long int algorithm2;
  // strength_bits
  signed int strength_bits;
  // alg_bits
  signed int alg_bits;
};

struct ssl_comp_st
{
  // id
  signed int id;
  // name
  const char *name;
  // method
  struct comp_method_st *method;
};

struct ssl_ctx_st
{
  // method
  const struct ssl_method_st *method;
  // cipher_list
  struct stack_st_SSL_CIPHER *cipher_list;
  // cipher_list_by_id
  struct stack_st_SSL_CIPHER *cipher_list_by_id;
  // cert_store
  struct x509_store_st *cert_store;
  // sessions
  struct lhash_st_SSL_SESSION *sessions;
  // session_cache_size
  unsigned long int session_cache_size;
  // session_cache_head
  struct ssl_session_st *session_cache_head;
  // session_cache_tail
  struct ssl_session_st *session_cache_tail;
  // session_cache_mode
  signed int session_cache_mode;
  // session_timeout
  signed long int session_timeout;
  // new_session_cb
  signed int (*new_session_cb)(struct ssl_st *, struct ssl_session_st *);
  // remove_session_cb
  void (*remove_session_cb)(struct ssl_ctx_st *, struct ssl_session_st *);
  // get_session_cb
  struct ssl_session_st * (*get_session_cb)(struct ssl_st *, unsigned char *, signed int, signed int *);
  // stats
  struct anonymous_19 stats;
  // references
  signed int references;
  // app_verify_callback
  signed int (*app_verify_callback)(struct x509_store_ctx_st *, void *);
  // app_verify_arg
  void *app_verify_arg;
  // default_passwd_callback
  signed int (*default_passwd_callback)(char *, signed int, signed int, void *);
  // default_passwd_callback_userdata
  void *default_passwd_callback_userdata;
  // client_cert_cb
  signed int (*client_cert_cb)(struct ssl_st *, struct x509_st **, struct evp_pkey_st **);
  // app_gen_cookie_cb
  signed int (*app_gen_cookie_cb)(struct ssl_st *, unsigned char *, unsigned int *);
  // app_verify_cookie_cb
  signed int (*app_verify_cookie_cb)(struct ssl_st *, unsigned char *, unsigned int);
  // ex_data
  struct crypto_ex_data_st ex_data;
  // rsa_md5
  const struct env_md_st *rsa_md5;
  // md5
  const struct env_md_st *md5;
  // sha1
  const struct env_md_st *sha1;
  // extra_certs
  struct stack_st_X509 *extra_certs;
  // comp_methods
  struct stack_st_SSL_COMP *comp_methods;
  // info_callback
  void (*info_callback)(const struct ssl_st *, signed int, signed int);
  // client_CA
  struct stack_st_X509_NAME *client_CA;
  // options
  unsigned long int options;
  // mode
  unsigned long int mode;
  // max_cert_list
  signed long int max_cert_list;
  // cert
  struct cert_st *cert;
  // read_ahead
  signed int read_ahead;
  // msg_callback
  void (*msg_callback)(signed int, signed int, signed int, const void *, unsigned long int, struct ssl_st *, void *);
  // msg_callback_arg
  void *msg_callback_arg;
  // verify_mode
  signed int verify_mode;
  // sid_ctx_length
  unsigned int sid_ctx_length;
  // sid_ctx
  unsigned char sid_ctx[32l];
  // default_verify_callback
  signed int (*default_verify_callback)(signed int, struct x509_store_ctx_st *);
  // generate_session_id
  signed int (*generate_session_id)(const struct ssl_st *, unsigned char *, unsigned int *);
  // param
  struct X509_VERIFY_PARAM_st *param;
  // quiet_shutdown
  signed int quiet_shutdown;
  // max_send_fragment
  unsigned int max_send_fragment;
  // client_cert_engine
  struct engine_st *client_cert_engine;
  // tlsext_servername_callback
  signed int (*tlsext_servername_callback)(struct ssl_st *, signed int *, void *);
  // tlsext_servername_arg
  void *tlsext_servername_arg;
  // tlsext_tick_key_name
  unsigned char tlsext_tick_key_name[16l];
  // tlsext_tick_hmac_key
  unsigned char tlsext_tick_hmac_key[16l];
  // tlsext_tick_aes_key
  unsigned char tlsext_tick_aes_key[16l];
  // tlsext_ticket_key_cb
  signed int (*tlsext_ticket_key_cb)(struct ssl_st *, unsigned char *, unsigned char *, struct evp_cipher_ctx_st *, struct hmac_ctx_st *, signed int);
  // tlsext_status_cb
  signed int (*tlsext_status_cb)(struct ssl_st *, void *);
  // tlsext_status_arg
  void *tlsext_status_arg;
  // tlsext_opaque_prf_input_callback
  signed int (*tlsext_opaque_prf_input_callback)(struct ssl_st *, void *, unsigned long int, void *);
  // tlsext_opaque_prf_input_callback_arg
  void *tlsext_opaque_prf_input_callback_arg;
  // psk_identity_hint
  char *psk_identity_hint;
  // psk_client_callback
  unsigned int (*psk_client_callback)(struct ssl_st *, const char *, char *, unsigned int, unsigned char *, unsigned int);
  // psk_server_callback
  unsigned int (*psk_server_callback)(struct ssl_st *, const char *, unsigned char *, unsigned int);
  // freelist_max_len
  unsigned int freelist_max_len;
  // wbuf_freelist
  struct ssl3_buf_freelist_st *wbuf_freelist;
  // rbuf_freelist
  struct ssl3_buf_freelist_st *rbuf_freelist;
  // srp_ctx
  struct srp_ctx_st srp_ctx;
  // next_protos_advertised_cb
  signed int (*next_protos_advertised_cb)(struct ssl_st *, const unsigned char **, unsigned int *, void *);
  // next_protos_advertised_cb_arg
  void *next_protos_advertised_cb_arg;
  // next_proto_select_cb
  signed int (*next_proto_select_cb)(struct ssl_st *, unsigned char **, unsigned char *, const unsigned char *, unsigned int, void *);
  // next_proto_select_cb_arg
  void *next_proto_select_cb_arg;
  // srtp_profiles
  struct stack_st_SRTP_PROTECTION_PROFILE *srtp_profiles;
  // alpn_select_cb
  signed int (*alpn_select_cb)(struct ssl_st *, const unsigned char **, unsigned char *, const unsigned char *, unsigned int, void *);
  // alpn_select_cb_arg
  void *alpn_select_cb_arg;
  // alpn_client_proto_list
  unsigned char *alpn_client_proto_list;
  // alpn_client_proto_list_len
  unsigned int alpn_client_proto_list_len;
  // tlsext_ecpointformatlist_length
  unsigned long int tlsext_ecpointformatlist_length;
  // tlsext_ecpointformatlist
  unsigned char *tlsext_ecpointformatlist;
  // tlsext_ellipticcurvelist_length
  unsigned long int tlsext_ellipticcurvelist_length;
  // tlsext_ellipticcurvelist
  unsigned char *tlsext_ellipticcurvelist;
};

struct ssl_method_st
{
  // version
  signed int version;
  // ssl_new
  signed int (*ssl_new)(struct ssl_st *);
  // ssl_clear
  void (*ssl_clear)(struct ssl_st *);
  // ssl_free
  void (*ssl_free)(struct ssl_st *);
  // ssl_accept
  signed int (*ssl_accept)(struct ssl_st *);
  // ssl_connect
  signed int (*ssl_connect)(struct ssl_st *);
  // ssl_read
  signed int (*ssl_read)(struct ssl_st *, void *, signed int);
  // ssl_peek
  signed int (*ssl_peek)(struct ssl_st *, void *, signed int);
  // ssl_write
  signed int (*ssl_write)(struct ssl_st *, const void *, signed int);
  // ssl_shutdown
  signed int (*ssl_shutdown)(struct ssl_st *);
  // ssl_renegotiate
  signed int (*ssl_renegotiate)(struct ssl_st *);
  // ssl_renegotiate_check
  signed int (*ssl_renegotiate_check)(struct ssl_st *);
  // ssl_get_message
  signed long int (*ssl_get_message)(struct ssl_st *, signed int, signed int, signed int, signed long int, signed int *);
  // ssl_read_bytes
  signed int (*ssl_read_bytes)(struct ssl_st *, signed int, unsigned char *, signed int, signed int);
  // ssl_write_bytes
  signed int (*ssl_write_bytes)(struct ssl_st *, signed int, const void *, signed int);
  // ssl_dispatch_alert
  signed int (*ssl_dispatch_alert)(struct ssl_st *);
  // ssl_ctrl
  signed long int (*ssl_ctrl)(struct ssl_st *, signed int, signed long int, void *);
  // ssl_ctx_ctrl
  signed long int (*ssl_ctx_ctrl)(struct ssl_ctx_st *, signed int, signed long int, void *);
  // get_cipher_by_char
  const struct ssl_cipher_st * (*get_cipher_by_char)(const unsigned char *);
  // put_cipher_by_char
  signed int (*put_cipher_by_char)(const struct ssl_cipher_st *, unsigned char *);
  // ssl_pending
  signed int (*ssl_pending)(const struct ssl_st *);
  // num_ciphers
  signed int (*num_ciphers)(void);
  // get_cipher
  const struct ssl_cipher_st * (*get_cipher)(unsigned int);
  // get_ssl_method
  struct ssl_method_st * (*get_ssl_method)(signed int);
  // get_timeout
  signed long int (*get_timeout)(void);
  // ssl3_enc
  struct ssl3_enc_method *ssl3_enc;
  // ssl_version
  signed int (*ssl_version)(void);
  // ssl_callback_ctrl
  signed long int (*ssl_callback_ctrl)(struct ssl_st *, signed int, void (*)(void));
  // ssl_ctx_callback_ctrl
  signed long int (*ssl_ctx_callback_ctrl)(struct ssl_ctx_st *, signed int, void (*)(void));
};

struct ssl_session_st
{
  // ssl_version
  signed int ssl_version;
  // key_arg_length
  unsigned int key_arg_length;
  // key_arg
  unsigned char key_arg[8l];
  // master_key_length
  signed int master_key_length;
  // master_key
  unsigned char master_key[48l];
  // session_id_length
  unsigned int session_id_length;
  // session_id
  unsigned char session_id[32l];
  // sid_ctx_length
  unsigned int sid_ctx_length;
  // sid_ctx
  unsigned char sid_ctx[32l];
  // psk_identity_hint
  char *psk_identity_hint;
  // psk_identity
  char *psk_identity;
  // not_resumable
  signed int not_resumable;
  // sess_cert
  struct sess_cert_st *sess_cert;
  // peer
  struct x509_st *peer;
  // verify_result
  signed long int verify_result;
  // references
  signed int references;
  // timeout
  signed long int timeout;
  // time
  signed long int time;
  // compress_meth
  unsigned int compress_meth;
  // cipher
  const struct ssl_cipher_st *cipher;
  // cipher_id
  unsigned long int cipher_id;
  // ciphers
  struct stack_st_SSL_CIPHER *ciphers;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // prev
  struct ssl_session_st *prev;
  // next
  struct ssl_session_st *next;
  // tlsext_hostname
  char *tlsext_hostname;
  // tlsext_ecpointformatlist_length
  unsigned long int tlsext_ecpointformatlist_length;
  // tlsext_ecpointformatlist
  unsigned char *tlsext_ecpointformatlist;
  // tlsext_ellipticcurvelist_length
  unsigned long int tlsext_ellipticcurvelist_length;
  // tlsext_ellipticcurvelist
  unsigned char *tlsext_ellipticcurvelist;
  // tlsext_tick
  unsigned char *tlsext_tick;
  // tlsext_ticklen
  unsigned long int tlsext_ticklen;
  // tlsext_tick_lifetime_hint
  signed long int tlsext_tick_lifetime_hint;
  // srp_username
  char *srp_username;
};

struct ssl_st
{
  // version
  signed int version;
  // type
  signed int type;
  // method
  const struct ssl_method_st *method;
  // rbio
  struct bio_st *rbio;
  // wbio
  struct bio_st *wbio;
  // bbio
  struct bio_st *bbio;
  // rwstate
  signed int rwstate;
  // in_handshake
  signed int in_handshake;
  // handshake_func
  signed int (*handshake_func)(struct ssl_st *);
  // server
  signed int server;
  // new_session
  signed int new_session;
  // quiet_shutdown
  signed int quiet_shutdown;
  // shutdown
  signed int shutdown;
  // state
  signed int state;
  // rstate
  signed int rstate;
  // init_buf
  struct buf_mem_st *init_buf;
  // init_msg
  void *init_msg;
  // init_num
  signed int init_num;
  // init_off
  signed int init_off;
  // packet
  unsigned char *packet;
  // packet_length
  unsigned int packet_length;
  // s2
  struct ssl2_state_st *s2;
  // s3
  struct ssl3_state_st *s3;
  // d1
  struct dtls1_state_st *d1;
  // read_ahead
  signed int read_ahead;
  // msg_callback
  void (*msg_callback)(signed int, signed int, signed int, const void *, unsigned long int, struct ssl_st *, void *);
  // msg_callback_arg
  void *msg_callback_arg;
  // hit
  signed int hit;
  // param
  struct X509_VERIFY_PARAM_st *param;
  // cipher_list
  struct stack_st_SSL_CIPHER *cipher_list;
  // cipher_list_by_id
  struct stack_st_SSL_CIPHER *cipher_list_by_id;
  // mac_flags
  signed int mac_flags;
  // enc_read_ctx
  struct evp_cipher_ctx_st *enc_read_ctx;
  // read_hash
  struct env_md_ctx_st *read_hash;
  // expand
  struct comp_ctx_st *expand;
  // enc_write_ctx
  struct evp_cipher_ctx_st *enc_write_ctx;
  // write_hash
  struct env_md_ctx_st *write_hash;
  // compress
  struct comp_ctx_st *compress;
  // cert
  struct cert_st *cert;
  // sid_ctx_length
  unsigned int sid_ctx_length;
  // sid_ctx
  unsigned char sid_ctx[32l];
  // session
  struct ssl_session_st *session;
  // generate_session_id
  signed int (*generate_session_id)(const struct ssl_st *, unsigned char *, unsigned int *);
  // verify_mode
  signed int verify_mode;
  // verify_callback
  signed int (*verify_callback)(signed int, struct x509_store_ctx_st *);
  // info_callback
  void (*info_callback)(const struct ssl_st *, signed int, signed int);
  // error
  signed int error;
  // error_code
  signed int error_code;
  // psk_client_callback
  unsigned int (*psk_client_callback)(struct ssl_st *, const char *, char *, unsigned int, unsigned char *, unsigned int);
  // psk_server_callback
  unsigned int (*psk_server_callback)(struct ssl_st *, const char *, unsigned char *, unsigned int);
  // ctx
  struct ssl_ctx_st *ctx;
  // debug
  signed int debug;
  // verify_result
  signed long int verify_result;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // client_CA
  struct stack_st_X509_NAME *client_CA;
  // references
  signed int references;
  // options
  unsigned long int options;
  // mode
  unsigned long int mode;
  // max_cert_list
  signed long int max_cert_list;
  // first_packet
  signed int first_packet;
  // client_version
  signed int client_version;
  // max_send_fragment
  unsigned int max_send_fragment;
  // tlsext_debug_cb
  void (*tlsext_debug_cb)(struct ssl_st *, signed int, signed int, unsigned char *, signed int, void *);
  // tlsext_debug_arg
  void *tlsext_debug_arg;
  // tlsext_hostname
  char *tlsext_hostname;
  // servername_done
  signed int servername_done;
  // tlsext_status_type
  signed int tlsext_status_type;
  // tlsext_status_expected
  signed int tlsext_status_expected;
  // tlsext_ocsp_ids
  struct stack_st_OCSP_RESPID *tlsext_ocsp_ids;
  // tlsext_ocsp_exts
  struct stack_st_X509_EXTENSION *tlsext_ocsp_exts;
  // tlsext_ocsp_resp
  unsigned char *tlsext_ocsp_resp;
  // tlsext_ocsp_resplen
  signed int tlsext_ocsp_resplen;
  // tlsext_ticket_expected
  signed int tlsext_ticket_expected;
  // tlsext_ecpointformatlist_length
  unsigned long int tlsext_ecpointformatlist_length;
  // tlsext_ecpointformatlist
  unsigned char *tlsext_ecpointformatlist;
  // tlsext_ellipticcurvelist_length
  unsigned long int tlsext_ellipticcurvelist_length;
  // tlsext_ellipticcurvelist
  unsigned char *tlsext_ellipticcurvelist;
  // tlsext_opaque_prf_input
  void *tlsext_opaque_prf_input;
  // tlsext_opaque_prf_input_len
  unsigned long int tlsext_opaque_prf_input_len;
  // tlsext_session_ticket
  struct tls_session_ticket_ext_st *tlsext_session_ticket;
  // tls_session_ticket_ext_cb
  signed int (*tls_session_ticket_ext_cb)(struct ssl_st *, const unsigned char *, signed int, void *);
  // tls_session_ticket_ext_cb_arg
  void *tls_session_ticket_ext_cb_arg;
  // tls_session_secret_cb
  signed int (*tls_session_secret_cb)(struct ssl_st *, void *, signed int *, struct stack_st_SSL_CIPHER *, struct ssl_cipher_st **, void *);
  // tls_session_secret_cb_arg
  void *tls_session_secret_cb_arg;
  // initial_ctx
  struct ssl_ctx_st *initial_ctx;
  // next_proto_negotiated
  unsigned char *next_proto_negotiated;
  // next_proto_negotiated_len
  unsigned char next_proto_negotiated_len;
  // srtp_profiles
  struct stack_st_SRTP_PROTECTION_PROFILE *srtp_profiles;
  // srtp_profile
  struct srtp_protection_profile_st *srtp_profile;
  // tlsext_heartbeat
  unsigned int tlsext_heartbeat;
  // tlsext_hb_pending
  unsigned int tlsext_hb_pending;
  // tlsext_hb_seq
  unsigned int tlsext_hb_seq;
  // renegotiate
  signed int renegotiate;
  // srp_ctx
  struct srp_ctx_st srp_ctx;
  // alpn_client_proto_list
  unsigned char *alpn_client_proto_list;
  // alpn_client_proto_list_len
  unsigned int alpn_client_proto_list_len;
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

struct stack_st_ASN1_OBJECT
{
  // stack
  struct stack_st stack;
};

struct stack_st_SRTP_PROTECTION_PROFILE
{
  // stack
  struct stack_st stack;
};

struct stack_st_SSL_CIPHER
{
  // stack
  struct stack_st stack;
};

struct stack_st_SSL_COMP
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_ALGOR
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_ATTRIBUTE
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_CRL
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_EXTENSION
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_LOOKUP
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_NAME
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_NAME_ENTRY
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_OBJECT
{
  // stack
  struct stack_st stack;
};

struct stack_st_X509_REVOKED
{
  // stack
  struct stack_st stack;
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct tls_session_ticket_ext_st
{
  // length
  unsigned short int length;
  // data
  void *data;
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
  struct anonymous_13 __wait_terminated;
  // __wait_stopped
  struct anonymous_14 __wait_stopped;
};

struct x509_cert_aux_st
{
  // trust
  struct stack_st_ASN1_OBJECT *trust;
  // reject
  struct stack_st_ASN1_OBJECT *reject;
  // alias
  struct asn1_string_st *alias;
  // keyid
  struct asn1_string_st *keyid;
  // other
  struct stack_st_X509_ALGOR *other;
};

struct x509_cinf_st
{
  // version
  struct asn1_string_st *version;
  // serialNumber
  struct asn1_string_st *serialNumber;
  // signature
  struct X509_algor_st *signature;
  // issuer
  struct X509_name_st *issuer;
  // validity
  struct X509_val_st *validity;
  // subject
  struct X509_name_st *subject;
  // key
  struct X509_pubkey_st *key;
  // issuerUID
  struct asn1_string_st *issuerUID;
  // subjectUID
  struct asn1_string_st *subjectUID;
  // extensions
  struct stack_st_X509_EXTENSION *extensions;
  // enc
  struct ASN1_ENCODING_st enc;
};

struct x509_lookup_method_st
{
  // name
  const char *name;
  // new_item
  signed int (*new_item)(struct x509_lookup_st *);
  // free
  void (*free)(struct x509_lookup_st *);
  // init
  signed int (*init)(struct x509_lookup_st *);
  // shutdown
  signed int (*shutdown)(struct x509_lookup_st *);
  // ctrl
  signed int (*ctrl)(struct x509_lookup_st *, signed int, const char *, signed long int, char **);
  // get_by_subject
  signed int (*get_by_subject)(struct x509_lookup_st *, signed int, struct X509_name_st *, struct x509_object_st *);
  // get_by_issuer_serial
  signed int (*get_by_issuer_serial)(struct x509_lookup_st *, signed int, struct X509_name_st *, struct asn1_string_st *, struct x509_object_st *);
  // get_by_fingerprint
  signed int (*get_by_fingerprint)(struct x509_lookup_st *, signed int, unsigned char *, signed int, struct x509_object_st *);
  // get_by_alias
  signed int (*get_by_alias)(struct x509_lookup_st *, signed int, char *, signed int, struct x509_object_st *);
};

struct x509_lookup_st
{
  // init
  signed int init;
  // skip
  signed int skip;
  // method
  struct x509_lookup_method_st *method;
  // method_data
  char *method_data;
  // store_ctx
  struct x509_store_st *store_ctx;
};

struct x509_object_st
{
  // type
  signed int type;
  // data
  union anonymous_23 data;
};

struct x509_st
{
  // cert_info
  struct x509_cinf_st *cert_info;
  // sig_alg
  struct X509_algor_st *sig_alg;
  // signature
  struct asn1_string_st *signature;
  // valid
  signed int valid;
  // references
  signed int references;
  // name
  char *name;
  // ex_data
  struct crypto_ex_data_st ex_data;
  // ex_pathlen
  signed long int ex_pathlen;
  // ex_pcpathlen
  signed long int ex_pcpathlen;
  // ex_flags
  unsigned long int ex_flags;
  // ex_kusage
  unsigned long int ex_kusage;
  // ex_xkusage
  unsigned long int ex_xkusage;
  // ex_nscert
  unsigned long int ex_nscert;
  // skid
  struct asn1_string_st *skid;
  // akid
  struct AUTHORITY_KEYID_st *akid;
  // policy_cache
  struct X509_POLICY_CACHE_st *policy_cache;
  // crldp
  struct stack_st_DIST_POINT *crldp;
  // altname
  struct stack_st_GENERAL_NAME *altname;
  // nc
  struct NAME_CONSTRAINTS_st *nc;
  // rfc3779_addr
  struct stack_st_IPAddressFamily *rfc3779_addr;
  // rfc3779_asid
  struct ASIdentifiers_st *rfc3779_asid;
  // sha1_hash
  unsigned char sha1_hash[20l];
  // aux
  struct x509_cert_aux_st *aux;
};

struct x509_store_ctx_st
{
  // ctx
  struct x509_store_st *ctx;
  // current_method
  signed int current_method;
  // cert
  struct x509_st *cert;
  // untrusted
  struct stack_st_X509 *untrusted;
  // crls
  struct stack_st_X509_CRL *crls;
  // param
  struct X509_VERIFY_PARAM_st *param;
  // other_ctx
  void *other_ctx;
  // verify
  signed int (*verify)(struct x509_store_ctx_st *);
  // verify_cb
  signed int (*verify_cb)(signed int, struct x509_store_ctx_st *);
  // get_issuer
  signed int (*get_issuer)(struct x509_st **, struct x509_store_ctx_st *, struct x509_st *);
  // check_issued
  signed int (*check_issued)(struct x509_store_ctx_st *, struct x509_st *, struct x509_st *);
  // check_revocation
  signed int (*check_revocation)(struct x509_store_ctx_st *);
  // get_crl
  signed int (*get_crl)(struct x509_store_ctx_st *, struct X509_crl_st **, struct x509_st *);
  // check_crl
  signed int (*check_crl)(struct x509_store_ctx_st *, struct X509_crl_st *);
  // cert_crl
  signed int (*cert_crl)(struct x509_store_ctx_st *, struct X509_crl_st *, struct x509_st *);
  // check_policy
  signed int (*check_policy)(struct x509_store_ctx_st *);
  // lookup_certs
  struct stack_st_X509 * (*lookup_certs)(struct x509_store_ctx_st *, struct X509_name_st *);
  // lookup_crls
  struct stack_st_X509_CRL * (*lookup_crls)(struct x509_store_ctx_st *, struct X509_name_st *);
  // cleanup
  signed int (*cleanup)(struct x509_store_ctx_st *);
  // valid
  signed int valid;
  // last_untrusted
  signed int last_untrusted;
  // chain
  struct stack_st_X509 *chain;
  // tree
  struct X509_POLICY_TREE_st *tree;
  // explicit_policy
  signed int explicit_policy;
  // error_depth
  signed int error_depth;
  // error
  signed int error;
  // current_cert
  struct x509_st *current_cert;
  // current_issuer
  struct x509_st *current_issuer;
  // current_crl
  struct X509_crl_st *current_crl;
  // current_crl_score
  signed int current_crl_score;
  // current_reasons
  unsigned int current_reasons;
  // parent
  struct x509_store_ctx_st *parent;
  // ex_data
  struct crypto_ex_data_st ex_data;
};

struct x509_store_st
{
  // cache
  signed int cache;
  // objs
  struct stack_st_X509_OBJECT *objs;
  // get_cert_methods
  struct stack_st_X509_LOOKUP *get_cert_methods;
  // param
  struct X509_VERIFY_PARAM_st *param;
  // verify
  signed int (*verify)(struct x509_store_ctx_st *);
  // verify_cb
  signed int (*verify_cb)(signed int, struct x509_store_ctx_st *);
  // get_issuer
  signed int (*get_issuer)(struct x509_st **, struct x509_store_ctx_st *, struct x509_st *);
  // check_issued
  signed int (*check_issued)(struct x509_store_ctx_st *, struct x509_st *, struct x509_st *);
  // check_revocation
  signed int (*check_revocation)(struct x509_store_ctx_st *);
  // get_crl
  signed int (*get_crl)(struct x509_store_ctx_st *, struct X509_crl_st **, struct x509_st *);
  // check_crl
  signed int (*check_crl)(struct x509_store_ctx_st *, struct X509_crl_st *);
  // cert_crl
  signed int (*cert_crl)(struct x509_store_ctx_st *, struct X509_crl_st *, struct x509_st *);
  // lookup_certs
  struct stack_st_X509 * (*lookup_certs)(struct x509_store_ctx_st *, struct X509_name_st *);
  // lookup_crls
  struct stack_st_X509_CRL * (*lookup_crls)(struct x509_store_ctx_st *, struct X509_name_st *);
  // cleanup
  signed int (*cleanup)(struct x509_store_ctx_st *);
  // ex_data
  struct crypto_ex_data_st ex_data;
  // references
  signed int references;
};


// AUTHORIZATION
// file pound.c line 53
struct anonymous_8 AUTHORIZATION;
// AddHeader
// file config.c line 79
static struct anonymous_8 AddHeader;
// Address
// file config.c line 75
static struct anonymous_8 Address;
// Alive
// file config.c line 74
static struct anonymous_8 Alive;
// BackEnd
// file config.c line 77
static struct anonymous_8 BackEnd;
// CAlist
// file config.c line 79
static struct anonymous_8 CAlist;
// CHUNK_HEAD
// file pound.c line 49
struct anonymous_8 CHUNK_HEAD;
// CNName
// file config.c line 80
static struct anonymous_8 CNName;
// CRLlist
// file config.c line 79
static struct anonymous_8 CRLlist;
// Cert
// file config.c line 75
static struct anonymous_8 Cert;
// CheckURL
// file config.c line 75
static struct anonymous_8 CheckURL;
// Ciphers
// file config.c line 79
static struct anonymous_8 Ciphers;
// Client
// file config.c line 75
static struct anonymous_8 Client;
// ClientCert
// file config.c line 79
static struct anonymous_8 ClientCert;
// Comment
// file config.c line 74
static struct anonymous_8 Comment;
// ConnTO
// file config.c line 80
static struct anonymous_8 ConnTO;
// Control
// file config.c line 74
static struct anonymous_8 Control;
// DH1024_params
// file svc.c line 1440
static struct dh_st *DH1024_params;
// DH512_params
// file svc.c line 1440
static struct dh_st *DH512_params;
// Daemon
// file config.c line 74
static struct anonymous_8 Daemon;
// DisableSSLv2
// file config.c line 79
static struct anonymous_8 DisableSSLv2;
// DisableSSLv3
// file config.c line 79
static struct anonymous_8 DisableSSLv3;
// Disabled
// file config.c line 80
static struct anonymous_8 Disabled;
// DynScale
// file config.c line 78
static struct anonymous_8 DynScale;
// Emergency
// file config.c line 77
static struct anonymous_8 Emergency;
// Empty
// file config.c line 74
static struct anonymous_8 Empty;
// End
// file config.c line 75
static struct anonymous_8 End;
// Err414
// file config.c line 76
static struct anonymous_8 Err414;
// Err500
// file config.c line 76
static struct anonymous_8 Err500;
// Err501
// file config.c line 76
static struct anonymous_8 Err501;
// Err503
// file config.c line 76
static struct anonymous_8 Err503;
// Grace
// file config.c line 80
static struct anonymous_8 Grace;
// Group
// file config.c line 74
static struct anonymous_8 Group;
// HAport
// file config.c line 77
static struct anonymous_8 HAport;
// HAportAddr
// file config.c line 77
static struct anonymous_8 HAportAddr;
// HEADER
// file pound.c line 48
struct anonymous_8 HEADER;
// HTTPS
// file config.c line 80
static struct anonymous_8 HTTPS;
// HTTPSCert
// file config.c line 80
static struct anonymous_8 HTTPSCert;
// HeadDeny
// file config.c line 77
static struct anonymous_8 HeadDeny;
// HeadRemove
// file config.c line 76
static struct anonymous_8 HeadRemove;
// HeadRequire
// file config.c line 77
static struct anonymous_8 HeadRequire;
// ID
// file config.c line 78
static struct anonymous_8 ID;
// IgnoreCase
// file config.c line 80
static struct anonymous_8 IgnoreCase;
// Include
// file config.c line 80
static struct anonymous_8 Include;
// LOCATION
// file pound.c line 52
struct anonymous_8 LOCATION;
// ListenHTTP
// file config.c line 75
static struct anonymous_8 ListenHTTP;
// ListenHTTPS
// file config.c line 75
static struct anonymous_8 ListenHTTPS;
// LogFacility
// file config.c line 74
static struct anonymous_8 LogFacility;
// LogLevel
// file config.c line 74
static struct anonymous_8 LogLevel;
// MaxRequest
// file config.c line 76
static struct anonymous_8 MaxRequest;
// NoHTTPS11
// file config.c line 79
static struct anonymous_8 NoHTTPS11;
// Port
// file config.c line 75
static struct anonymous_8 Port;
// Priority
// file config.c line 77
static struct anonymous_8 Priority;
// RESP_IGN
// file pound.c line 51
struct anonymous_8 RESP_IGN;
// RESP_SKIP
// file pound.c line 50
struct anonymous_8 RESP_SKIP;
// RSA1024_keys
// file svc.c line 1390
static struct rsa_st *RSA1024_keys[11l];
// RSA512_keys
// file svc.c line 1389
static struct rsa_st *RSA512_keys[11l];
// RSA_mut
// file svc.c line 1388
static union anonymous_20 RSA_mut;
// Redirect
// file config.c line 78
static struct anonymous_8 Redirect;
// RedirectN
// file config.c line 78
static struct anonymous_8 RedirectN;
// RewriteDestination
// file config.c line 76
static struct anonymous_8 RewriteDestination;
// RewriteLocation
// file config.c line 76
static struct anonymous_8 RewriteLocation;
// RootJail
// file config.c line 74
static struct anonymous_8 RootJail;
// SSLAllowClientRenegotiation
// file config.c line 79
static struct anonymous_8 SSLAllowClientRenegotiation;
// SSLEngine
// file config.c line 74
static struct anonymous_8 SSLEngine;
// SSLHonorCipherOrder
// file config.c line 79
static struct anonymous_8 SSLHonorCipherOrder;
// Service
// file config.c line 77
static struct anonymous_8 Service;
// ServiceName
// file config.c line 77
static struct anonymous_8 ServiceName;
// Session
// file config.c line 78
static struct anonymous_8 Session;
// TTL
// file config.c line 78
static struct anonymous_8 TTL;
// Threads
// file config.c line 80
static struct anonymous_8 Threads;
// TimeOut
// file config.c line 78
static struct anonymous_8 TimeOut;
// Type
// file config.c line 78
static struct anonymous_8 Type;
// URL
// file config.c line 77
static struct anonymous_8 URL;
// User
// file config.c line 74
static struct anonymous_8 User;
// VerifyList
// file config.c line 79
static struct anonymous_8 VerifyList;
// alive_to
// file pound.c line 37
signed int alive_to;
// arg_cond
// file pound.c line 111
static union anonymous_2 arg_cond;
// arg_mut
// file pound.c line 112
static union anonymous_20 arg_mut;
// be_connto
// file config.c line 96
static signed int be_connto = 15;
// be_to
// file config.c line 95
static signed int be_to = 15;
// clnt_to
// file config.c line 94
static signed int clnt_to = 10;
// control_sock
// file pound.c line 42
signed int control_sock;
// ctrl_name
// file pound.c line 35
char *ctrl_name;
// cur_fin
// file config.c line 105
static signed int cur_fin;
// daemonize
// file pound.c line 38
signed int daemonize;
// def_facility
// file config.c line 93
static signed int def_facility = 3 << 3;
// dynscale
// file config.c line 97
static signed int dynscale = 0;
// err_response
// file http.c line 36
static char *err_response = "HTTP/1.0 %s\r\nContent-Type: text/html\r\nContent-Length: %d\r\nExpires: now\r\nPragma: no-cache\r\nCache-control: no-cache,no-store\r\n\r\n%s";
// err_to
// file http.c line 274
static signed int err_to = -1;
// f_in
// file config.c line 102
static struct _IO_FILE *f_in[8l];
// f_name
// file config.c line 103
static char *f_name[8l];
// facilitynames
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 122
struct _code facilitynames[23l] = { { .c_name="auth", .c_val=4 << 3 }, { .c_name="authpriv", .c_val=10 << 3 }, { .c_name="cron", .c_val=9 << 3 }, { .c_name="daemon", .c_val=3 << 3 }, { .c_name="ftp", .c_val=11 << 3 }, { .c_name="kern", .c_val=0 << 3 }, { .c_name="lpr", .c_val=6 << 3 }, { .c_name="mail", .c_val=2 << 3 }, { .c_name="mark", .c_val=24 << 3 | 0 }, { .c_name="news", .c_val=7 << 3 }, { .c_name="security", .c_val=4 << 3 }, { .c_name="syslog", .c_val=5 << 3 }, { .c_name="user", .c_val=1 << 3 }, { .c_name="uucp", .c_val=8 << 3 }, { .c_name="local0", .c_val=16 << 3 }, { .c_name="local1", .c_val=17 << 3 }, { .c_name="local2", .c_val=18 << 3 }, { .c_name="local3", .c_val=19 << 3 }, { .c_name="local4", .c_val=20 << 3 }, { .c_name="local5", .c_val=21 << 3 }, { .c_name="local6", .c_val=22 << 3 }, { .c_name="local7", .c_val=23 << 3 }, { .c_name=(char *)(void *)0, .c_val=-1 } };
// first
// file pound.c line 110
static struct _thr_arg *first = (struct _thr_arg *)(void *)0;
// grace
// file pound.c line 41
signed int grace;
// group
// file pound.c line 32
char *group;
// h414
// file http.c line 34
static char *h414 = "414 Request URI too long";
// h500
// file http.c line 31
static char *h500 = "500 Internal Server Error";
// h501
// file http.c line 32
static char *h501 = "501 Not Implemented";
// h503
// file http.c line 33
static char *h503 = "503 Service Unavailable";
// ignore_case
// file config.c line 98
static signed int ignore_case = 0;
// l_array
// file pound.c line 68
static union anonymous_20 *l_array;
// last
// file pound.c line 110
static struct _thr_arg *last = (struct _thr_arg *)(void *)0;
// last_RSA
// file svc.c line 1448
static signed long int last_RSA;
// last_alive
// file svc.c line 1448
static signed long int last_alive;
// last_expire
// file svc.c line 1448
static signed long int last_expire;
// last_rescale
// file svc.c line 1448
static signed long int last_rescale;
// listeners
// file pound.c line 46
struct _listener *listeners;
// log_facility
// file pound.c line 39
signed int log_facility;
// log_level
// file config.c line 92
static signed int log_level = 1;
// matches
// file config.c line 82
static struct anonymous_4 matches[5l];
// n_lin
// file config.c line 104
static signed int n_lin[8l];
// numthreads
// file pound.c line 113
signed int numthreads;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// optopt
// file /usr/include/getopt.h line 80
extern signed int optopt;
// pid_name
// file pound.c line 34
char *pid_name;
// print_log
// file pound.c line 40
signed int print_log;
// prioritynames
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 74
struct _code prioritynames[13l] = { { .c_name="alert", .c_val=1 }, { .c_name="crit", .c_val=2 }, { .c_name="debug", .c_val=7 }, { .c_name="emerg", .c_val=0 }, { .c_name="err", .c_val=3 }, { .c_name="error", .c_val=3 }, { .c_name="info", .c_val=6 }, { .c_name="none", .c_val=0x10 }, { .c_name="notice", .c_val=5 }, { .c_name="panic", .c_val=0 }, { .c_name="warn", .c_val=4 }, { .c_name="warning", .c_val=4 }, { .c_name=(char *)(void *)0, .c_val=-1 } };
// redir_post
// file http.c line 51
static char *redir_post = "\">here</a></p></body></html>";
// redir_pre
// file http.c line 50
static char *redir_pre = "<html><head><title>Redirect</title></head><body><h1>Redirect</h1><p>You should go to <a href=\"";
// root_jail
// file pound.c line 33
char *root_jail;
// services
// file pound.c line 44
struct _service *services;
// shut_down
// file pound.c line 55
static signed int shut_down = 0;
// son
// file pound.c line 63
static signed int son = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// user
// file pound.c line 31
char *user;
// xHTTP
// file config.c line 75
static struct anonymous_8 xHTTP;
// xhttp
// file config.c line 84
static char *xhttp[5l] = { "^(GET|POST|HEAD) ([^ ]+) HTTP/1.[01]_",
    "^(GET|POST|HEAD|PUT|PATCH|DELETE) ([^ ]+) HTTP/1.[01]_",
    "^(GET|POST|HEAD|PUT|PATCH|DELETE|LOCK|UNLOCK|PROPFIND|PROPPATCH|SEARCH|MKCOL|MKCALENDAR|MOVE|COPY|OPTIONS|TRACE|MKACTIVITY|CHECKOUT|MERGE|REPORT) ([^ ]+) HTTP/1.[01]_",
    "^(GET|POST|HEAD|PUT|PATCH|DELETE|LOCK|UNLOCK|PROPFIND|PROPPATCH|SEARCH|MKCOL|MKCALENDAR|MOVE|COPY|OPTIONS|TRACE|MKACTIVITY|CHECKOUT|MERGE|REPORT|SUBSCRIBE|UNSUBSCRIBE|BPROPPATCH|POLL|BMOVE|BCOPY|BDELETE|BPROPFIND|NOTIFY|CONNECT) ([^ ]+) HTTP/1.[01]_",
    "^(GET|POST|HEAD|PUT|PATCH|DELETE|LOCK|UNLOCK|PROPFIND|PROPPATCH|SEARCH|MKCOL|MKCALENDAR|MOVE|COPY|OPTIONS|TRACE|MKACTIVITY|CHECKOUT|MERGE|REPORT|SUBSCRIBE|UNSUBSCRIBE|BPROPPATCH|POLL|BMOVE|BCOPY|BDELETE|BPROPFIND|NOTIFY|CONNECT|RPC_IN_DATA|RPC_OUT_DATA) ([^ ]+) HTTP/1.[01]_" };

// DH_tmp_callback
// file pound.h line 597
extern struct dh_st * DH_tmp_callback(struct ssl_st *s, signed int is_export, signed int keylength)
{
  return keylength == 512 ? DH512_params : DH1024_params;
}

// RSA_tmp_callback
// file pound.h line 592
extern struct rsa_st * RSA_tmp_callback(struct ssl_st *ssl, signed int is_export, signed int keylength)
{
  struct rsa_st *res;
  signed int ret_val;
  ret_val=pthread_mutex_lock(&RSA_mut);
  char *return_value_strerror_1;
  if(!(ret_val == 0))
  {
    return_value_strerror_1=strerror(ret_val);
    logmsg(4, "RSA_tmp_callback() lock: %s", return_value_strerror_1);
  }

  struct rsa_st *tmp_if_expr_4;
  signed int return_value_rand_2;
  signed int return_value_rand_3;
  if(!(keylength >= 513))
  {
    return_value_rand_2=rand();
    tmp_if_expr_4 = RSA512_keys[(signed long int)(return_value_rand_2 % 11)];
  }

  else
  {
    return_value_rand_3=rand();
    tmp_if_expr_4 = RSA1024_keys[(signed long int)(return_value_rand_3 % 11)];
  }
  res = tmp_if_expr_4;
  ret_val=pthread_mutex_unlock(&RSA_mut);
  char *return_value_strerror_5;
  if(!(ret_val == 0))
  {
    return_value_strerror_5=strerror(ret_val);
    logmsg(4, "RSA_tmp_callback() unlock: %s", return_value_strerror_5);
  }

  return res;
}

// SNI_server_name
// file config.c line 809
static signed int SNI_server_name(struct ssl_st *ssl, signed int *dummy, struct _pound_ctx *ctx)
{
  const char *server_name;
  struct _pound_ctx *pc;
  server_name=SSL_get_servername(ssl, 0);
  signed int return_value_fnmatch_1;
  if(server_name == ((const char *)NULL))
    return 3;

  else
  {
    SSL_set_SSL_CTX(ssl, (struct ssl_ctx_st *)(void *)0);
    pc = ctx;
    for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
    {
      return_value_fnmatch_1=fnmatch(pc->server_name, server_name, 0);
      if(return_value_fnmatch_1 == 0)
      {
        SSL_set_SSL_CTX(ssl, pc->ctx);
        return 0;
      }

    }
    SSL_set_SSL_CTX(ssl, ctx->ctx);
    return 0;
  }
}

// SSLINFO_callback
// file pound.h line 602
extern void SSLINFO_callback(const struct ssl_st *ssl, signed int where, signed int rc)
{
  enum anonymous_3 *reneg_state;
  void *return_value_SSL_get_ex_data_1;
  return_value_SSL_get_ex_data_1=SSL_get_ex_data(ssl, 0);
  reneg_state = (enum anonymous_3 *)return_value_SSL_get_ex_data_1;
  _Bool tmp_if_expr_2;
  if(!(reneg_state == ((enum anonymous_3 *)NULL)))
  {
    if(!((8193 & where) == 0))
      tmp_if_expr_2 = (signed int)*reneg_state == RENEG_REJECT ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      signed int state;
      state=SSL_state(ssl);
      if(state == 8464 || state == 8720)
      {
        *reneg_state = (enum anonymous_3)RENEG_ABORT;
        logmsg(4, "rejecting client initiated renegotiation");
      }

    }

    else
      if(!((0x20 & where) == 0))
      {
        if((signed int)*reneg_state == RENEG_INIT)
          *reneg_state = (enum anonymous_3)RENEG_REJECT;

      }

  }

}

// addr2str
// file pound.h line 502
extern void addr2str(char * const res, const signed int res_len, struct addrinfo *addr, const signed int no_port)
{
  char buf[8192l];
  signed int port;
  void *src;
  memset((void *)res, 0, (unsigned long int)res_len);
  unsigned short int return_value_ntohs_1;
  const char *return_value_inet_ntop_2;
  unsigned short int return_value_ntohs_3;
  const char *return_value_inet_ntop_4;
  switch(addr->ai_family)
  {
    case 2:
    {
      src = (void *)&((struct sockaddr_in *)addr->ai_addr)->sin_addr.s_addr;
      return_value_ntohs_1=ntohs(((struct sockaddr_in *)addr->ai_addr)->sin_port);
      port = (signed int)return_value_ntohs_1;
      return_value_inet_ntop_2=inet_ntop(2, src, buf, (unsigned int)(8192 - 1));
      if(return_value_inet_ntop_2 == ((const char *)NULL))
        strncpy(buf, "(UNKNOWN)", (unsigned long int)(8192 - 1));

      break;
    }
    case 10:
    {
      src = (void *)&((struct sockaddr_in6 *)addr->ai_addr)->sin6_addr.__in6_u.__u6_addr8;
      return_value_ntohs_3=ntohs(((struct sockaddr_in6 *)addr->ai_addr)->sin6_port);
      port = (signed int)return_value_ntohs_3;
      return_value_inet_ntop_4=inet_ntop(10, src, buf, (unsigned int)(8192 - 1));
      if(return_value_inet_ntop_4 == ((const char *)NULL))
        strncpy(buf, "(UNKNOWN)", (unsigned long int)(8192 - 1));

      break;
    }
    case 1:
    {
      strncpy(buf, (char *)addr->ai_addr, (unsigned long int)(8192 - 1));
      port = 0;
      break;
    }
    default:
    {
      strncpy(buf, "(UNKNOWN)", (unsigned long int)(8192 - 1));
      port = 0;
    }
  }
  if(!(no_port == 0))
    snprintf(res, (unsigned long int)res_len, "%s", (const void *)buf);

  else
    snprintf(res, (unsigned long int)res_len, "%s:%d", (const void *)buf, port);
  goto __CPROVER_DUMP_L10;

__CPROVER_DUMP_L10:
  ;
}

// bio_callback
// file http.c line 286
static signed long int bio_callback(struct bio_st * const bio, const signed int cmd, const char *argp, signed int argi, signed long int argl, signed long int ret)
{
  struct anonymous_6 *bio_arg;
  struct pollfd p;
  signed int to;
  signed int p_res;
  signed int p_err;
  signed int *return_value___errno_location_7;
  if(!(cmd == 0x02) && !(cmd == 0x03))
    return ret;

  else
  {
    char *return_value_BIO_get_callback_arg_1;
    return_value_BIO_get_callback_arg_1=BIO_get_callback_arg(bio);
    bio_arg = (struct anonymous_6 *)return_value_BIO_get_callback_arg_1;
    if(bio_arg == ((struct anonymous_6 *)NULL))
      return ret;

    else
    {
      to = bio_arg->timeout * 1000;
      if(!(to >= 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 110;
        return (signed long int)-1;
      }

      if(!(bio_arg->reneg_state == ((enum anonymous_3 *)NULL)))
      {
        if((signed int)*bio_arg->reneg_state == RENEG_ABORT)
        {
          logmsg(5, "REJECTING renegotiated session");
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 103;
          return (signed long int)-1;
        }

      }

      if(to == 0)
        return ret;

      else
        do
        {
          memset((void *)&p, 0, sizeof(struct pollfd) /*8ul*/ );
          BIO_ctrl(bio, 105, (signed long int)0, (void *)(char *)&p.fd);
          p.events = (signed short int)(cmd == 0x02 ? 0x001 | 0x002 : 0x004);
          p_res=poll(&p, (unsigned long int)1, to);
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          p_err = *return_value___errno_location_4;
          switch(p_res)
          {
            case 1:
            {
              if(cmd == 0x02)
              {
                if(!((0x001 & (signed int)p.revents) == 0) || !((0x002 & (signed int)p.revents) == 0))
                  return ret;

                else
                {
                  signed int *return_value___errno_location_5;
                  return_value___errno_location_5=__errno_location();
                  *return_value___errno_location_5 = 5;
                }
              }

              else
                if(!((0x004 & (signed int)p.revents) == 0))
                  return ret;

                else
                {
                  signed int *return_value___errno_location_6;
                  return_value___errno_location_6=__errno_location();
                  *return_value___errno_location_6 = 104;
                }
              return (signed long int)-1;
            }
            case 0:
            {
              bio_arg->timeout = err_to;
              return_value___errno_location_7=__errno_location();
              *return_value___errno_location_7 = 110;
              return (signed long int)0;
            }
            default:
              if(!(p_err == 4))
                return (signed long int)-2;

          }
        }
        while((_Bool)1);
    }
  }
}

// check_header
// file pound.h line 539
extern signed int check_header(const char *header, char * const content)
{
  struct anonymous_4 check_header__1__matches[4l];
  signed int i;
  signed int return_value_pcreposix_regexec_3;
  return_value_pcreposix_regexec_3=pcreposix_regexec(&HEADER, header, (unsigned long int)4, check_header__1__matches, 0);
  signed int return_value_strncasecmp_1;
  _Bool tmp_if_expr_2;
  if(return_value_pcreposix_regexec_3 == 0)
  {
    i = 0;
    /* tag-#anon#lST[lARR32{S8}_S8_'header'||S32'len'||S32'val'|] */
struct anonymous_12
{
  // header
  char header[32l];
  // len
  signed int len;
  // val
  signed int val;
};

/* */
    ;
    static struct anonymous_12 hd_types[10l] = { { .header={ 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', '-', 'e', 'n', 'c', 'o', 'd', 'i', 'n', 'g', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=17,
    .val=1 },
    { .header={ 'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'l', 'e', 'n', 'g', 't', 'h', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=14,
    .val=2 },
    { .header={ 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=10,
    .val=3 },
    { .header={ 'L', 'o', 'c', 'a', 't', 'i', 'o', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=8,
    .val=4 },
    { .header={ 'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=16,
    .val=5 },
    { .header={ 'H', 'o', 's', 't', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=4,
    .val=6 },
    { .header={ 'R', 'e', 'f', 'e', 'r', 'e', 'r', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=7,
    .val=7 },
    { .header={ 'U', 's', 'e', 'r', '-', 'a', 'g', 'e', 'n', 't', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=10,
    .val=8 },
    { .header={ 'D', 'e', 's', 't', 'i', 'n', 'a', 't', 'i', 'o', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=11,
    .val=10 },
    { .header={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .len=0,
    .val=0 } };
    for( ; hd_types[(signed long int)i].len >= 1; i = i + 1)
      if(check_header__1__matches[1l].rm_eo + -check_header__1__matches[1l].rm_so == hd_types[(signed long int)i].len)
      {
        return_value_strncasecmp_1=strncasecmp(header + (signed long int)check_header__1__matches[(signed long int)1].rm_so, hd_types[(signed long int)i].header, (unsigned long int)hd_types[(signed long int)i].len);
        if(return_value_strncasecmp_1 == 0)
        {
          strncpy(content, header + (signed long int)check_header__1__matches[(signed long int)2].rm_so, (unsigned long int)(check_header__1__matches[(signed long int)2].rm_eo - check_header__1__matches[(signed long int)2].rm_so));
          content[(signed long int)(check_header__1__matches[(signed long int)2].rm_eo - check_header__1__matches[(signed long int)2].rm_so)] = (char)0;
          return hd_types[(signed long int)i].val;
        }

      }

    return 0;
  }

  else
  {
    if((signed int)*header == 32)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)header[(signed long int)0] == 9 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
    {
      *content = (char)0;
      return 0;
    }

    else
      return -1;
  }
}

// conf_err
// file config.c line 124
void conf_err(const char *msg)
{
  logmsg(3, "%s line %d: %s", f_name[(signed long int)cur_fin], n_lin[(signed long int)cur_fin], msg);
  exit(1);
}

// conf_fgets
// file config.c line 131
static char * conf_fgets(char *buf, const signed int max)
{
  signed int i;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_5;
  signed int return_value_pcreposix_regexec_4;
  do
  {
    char *return_value_fgets_1;
    return_value_fgets_1=fgets(buf, max, f_in[(signed long int)cur_fin]);
    if(return_value_fgets_1 == ((char *)NULL))
    {
      fclose(f_in[(signed long int)cur_fin]);
      free((void *)f_name[(signed long int)cur_fin]);
      if(cur_fin >= 1)
      {
        cur_fin = cur_fin - 1;
        continue;
      }

      else
        return (char *)(void *)0;
    }

    n_lin[(signed long int)cur_fin] = n_lin[(signed long int)cur_fin] + 1;
    i = 0;
    for( ; !(i >= max); i = i + 1)
    {
      if((signed int)buf[(signed long int)i] == 10)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)buf[(signed long int)i] == 13 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        buf[(signed long int)i] = (char)0;
        break;
      }

    }
    signed int return_value_pcreposix_regexec_3;
    return_value_pcreposix_regexec_3=pcreposix_regexec(&Empty, buf, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_3 == 0)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_pcreposix_regexec_4=pcreposix_regexec(&Comment, buf, (unsigned long int)4, matches, 0);
      tmp_if_expr_5 = !(return_value_pcreposix_regexec_4 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_5)
    {
      signed int return_value_pcreposix_regexec_6;
      return_value_pcreposix_regexec_6=pcreposix_regexec(&Include, buf, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_6 == 0)
      {
        buf[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
        if(cur_fin == 8)
          conf_err("Include nesting too deep");

        cur_fin = cur_fin + 1;
        f_name[(signed long int)cur_fin]=strdup(&buf[(signed long int)matches[(signed long int)1].rm_so]);
        if(f_name[(signed long int)cur_fin] == ((char *)NULL))
          conf_err("Include out of memory");

        f_in[(signed long int)cur_fin]=fopen(&buf[(signed long int)matches[(signed long int)1].rm_so], "rt");
        if(f_in[(signed long int)cur_fin] == ((struct _IO_FILE *)NULL))
          conf_err("can't open included file");

        n_lin[(signed long int)cur_fin] = 0;
      }

      else
        return buf;
    }

  }
  while((_Bool)1);
}

// conf_init
// file config.c line 108
static signed int conf_init(const char *name)
{
  f_name[(signed long int)0]=strdup(name);
  if(f_name[0l] == ((char *)NULL))
  {
    logmsg(3, "open %s: out of memory", name);
    exit(1);
  }

  f_in[(signed long int)0]=fopen(name, "rt");
  if(f_in[0l] == ((struct _IO_FILE *)NULL))
  {
    logmsg(3, "can't open open %s", name);
    exit(1);
  }

  n_lin[(signed long int)0] = 0;
  cur_fin = 0;
  return 0;
}

// config_parse
// file pound.h line 579
extern void config_parse(const signed int argc, char ** const argv)
{
  char *conf_name;
  struct _IO_FILE *f_conf;
  signed int c_opt;
  signed int check_only;
  signed int return_value_pcreposix_regcomp_1;
  return_value_pcreposix_regcomp_1=pcreposix_regcomp(&Empty, "^[ \t]*_", 0x0001 | 0x0002 | 0);
  _Bool tmp_if_expr_3;
  signed int return_value_pcreposix_regcomp_2;
  if(!(return_value_pcreposix_regcomp_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_2=pcreposix_regcomp(&Comment, "^[ \t]*#.*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_3 = return_value_pcreposix_regcomp_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_pcreposix_regcomp_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_4=pcreposix_regcomp(&User, "^[ \t]*User[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_5 = return_value_pcreposix_regcomp_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_pcreposix_regcomp_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_6=pcreposix_regcomp(&Group, "^[ \t]*Group[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_7 = return_value_pcreposix_regcomp_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_pcreposix_regcomp_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_8=pcreposix_regcomp(&RootJail, "^[ \t]*RootJail[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_9 = return_value_pcreposix_regcomp_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_pcreposix_regcomp_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_10=pcreposix_regcomp(&Daemon, "^[ \t]*Daemon[ \t]+([01])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_11 = return_value_pcreposix_regcomp_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  signed int return_value_pcreposix_regcomp_12;
  if(tmp_if_expr_11)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_12=pcreposix_regcomp(&Threads, "^[ \t]*Threads[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_13 = return_value_pcreposix_regcomp_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_pcreposix_regcomp_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_14=pcreposix_regcomp(&LogFacility, "^[ \t]*LogFacility[ \t]+([a-z0-9-]+)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_15 = return_value_pcreposix_regcomp_14 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_17;
  signed int return_value_pcreposix_regcomp_16;
  if(tmp_if_expr_15)
    tmp_if_expr_17 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_16=pcreposix_regcomp(&LogLevel, "^[ \t]*LogLevel[ \t]+([0-5])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_17 = return_value_pcreposix_regcomp_16 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_19;
  signed int return_value_pcreposix_regcomp_18;
  if(tmp_if_expr_17)
    tmp_if_expr_19 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_18=pcreposix_regcomp(&Grace, "^[ \t]*Grace[ \t]+([0-9]+)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_19 = return_value_pcreposix_regcomp_18 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_21;
  signed int return_value_pcreposix_regcomp_20;
  if(tmp_if_expr_19)
    tmp_if_expr_21 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_20=pcreposix_regcomp(&Alive, "^[ \t]*Alive[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_21 = return_value_pcreposix_regcomp_20 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_23;
  signed int return_value_pcreposix_regcomp_22;
  if(tmp_if_expr_21)
    tmp_if_expr_23 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_22=pcreposix_regcomp(&SSLEngine, "^[ \t]*SSLEngine[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_23 = return_value_pcreposix_regcomp_22 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_25;
  signed int return_value_pcreposix_regcomp_24;
  if(tmp_if_expr_23)
    tmp_if_expr_25 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_24=pcreposix_regcomp(&Control, "^[ \t]*Control[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_25 = return_value_pcreposix_regcomp_24 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_27;
  signed int return_value_pcreposix_regcomp_26;
  if(tmp_if_expr_25)
    tmp_if_expr_27 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_26=pcreposix_regcomp(&ListenHTTP, "^[ \t]*ListenHTTP[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_27 = return_value_pcreposix_regcomp_26 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_29;
  signed int return_value_pcreposix_regcomp_28;
  if(tmp_if_expr_27)
    tmp_if_expr_29 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_28=pcreposix_regcomp(&ListenHTTPS, "^[ \t]*ListenHTTPS[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_29 = return_value_pcreposix_regcomp_28 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_31;
  signed int return_value_pcreposix_regcomp_30;
  if(tmp_if_expr_29)
    tmp_if_expr_31 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_30=pcreposix_regcomp(&End, "^[ \t]*End[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_31 = return_value_pcreposix_regcomp_30 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_33;
  signed int return_value_pcreposix_regcomp_32;
  if(tmp_if_expr_31)
    tmp_if_expr_33 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_32=pcreposix_regcomp(&Address, "^[ \t]*Address[ \t]+([^ \t]+)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_33 = return_value_pcreposix_regcomp_32 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_35;
  signed int return_value_pcreposix_regcomp_34;
  if(tmp_if_expr_33)
    tmp_if_expr_35 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_34=pcreposix_regcomp(&Port, "^[ \t]*Port[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_35 = return_value_pcreposix_regcomp_34 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_37;
  signed int return_value_pcreposix_regcomp_36;
  if(tmp_if_expr_35)
    tmp_if_expr_37 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_36=pcreposix_regcomp(&Cert, "^[ \t]*Cert[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_37 = return_value_pcreposix_regcomp_36 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_39;
  signed int return_value_pcreposix_regcomp_38;
  if(tmp_if_expr_37)
    tmp_if_expr_39 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_38=pcreposix_regcomp(&xHTTP, "^[ \t]*xHTTP[ \t]+([01234])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_39 = return_value_pcreposix_regcomp_38 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_41;
  signed int return_value_pcreposix_regcomp_40;
  if(tmp_if_expr_39)
    tmp_if_expr_41 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_40=pcreposix_regcomp(&Client, "^[ \t]*Client[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_41 = return_value_pcreposix_regcomp_40 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_43;
  signed int return_value_pcreposix_regcomp_42;
  if(tmp_if_expr_41)
    tmp_if_expr_43 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_42=pcreposix_regcomp(&CheckURL, "^[ \t]*CheckURL[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_43 = return_value_pcreposix_regcomp_42 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_45;
  signed int return_value_pcreposix_regcomp_44;
  if(tmp_if_expr_43)
    tmp_if_expr_45 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_44=pcreposix_regcomp(&Err414, "^[ \t]*Err414[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_45 = return_value_pcreposix_regcomp_44 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_47;
  signed int return_value_pcreposix_regcomp_46;
  if(tmp_if_expr_45)
    tmp_if_expr_47 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_46=pcreposix_regcomp(&Err500, "^[ \t]*Err500[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_47 = return_value_pcreposix_regcomp_46 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_49;
  signed int return_value_pcreposix_regcomp_48;
  if(tmp_if_expr_47)
    tmp_if_expr_49 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_48=pcreposix_regcomp(&Err501, "^[ \t]*Err501[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_49 = return_value_pcreposix_regcomp_48 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_51;
  signed int return_value_pcreposix_regcomp_50;
  if(tmp_if_expr_49)
    tmp_if_expr_51 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_50=pcreposix_regcomp(&Err503, "^[ \t]*Err503[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_51 = return_value_pcreposix_regcomp_50 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_53;
  signed int return_value_pcreposix_regcomp_52;
  if(tmp_if_expr_51)
    tmp_if_expr_53 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_52=pcreposix_regcomp(&MaxRequest, "^[ \t]*MaxRequest[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_53 = return_value_pcreposix_regcomp_52 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_55;
  signed int return_value_pcreposix_regcomp_54;
  if(tmp_if_expr_53)
    tmp_if_expr_55 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_54=pcreposix_regcomp(&HeadRemove, "^[ \t]*HeadRemove[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_55 = return_value_pcreposix_regcomp_54 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_57;
  signed int return_value_pcreposix_regcomp_56;
  if(tmp_if_expr_55)
    tmp_if_expr_57 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_56=pcreposix_regcomp(&RewriteLocation, "^[ \t]*RewriteLocation[ \t]+([012])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_57 = return_value_pcreposix_regcomp_56 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_59;
  signed int return_value_pcreposix_regcomp_58;
  if(tmp_if_expr_57)
    tmp_if_expr_59 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_58=pcreposix_regcomp(&RewriteDestination, "^[ \t]*RewriteDestination[ \t]+([01])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_59 = return_value_pcreposix_regcomp_58 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_61;
  signed int return_value_pcreposix_regcomp_60;
  if(tmp_if_expr_59)
    tmp_if_expr_61 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_60=pcreposix_regcomp(&Service, "^[ \t]*Service[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_61 = return_value_pcreposix_regcomp_60 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_63;
  signed int return_value_pcreposix_regcomp_62;
  if(tmp_if_expr_61)
    tmp_if_expr_63 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_62=pcreposix_regcomp(&ServiceName, "^[ \t]*Service[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_63 = return_value_pcreposix_regcomp_62 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_65;
  signed int return_value_pcreposix_regcomp_64;
  if(tmp_if_expr_63)
    tmp_if_expr_65 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_64=pcreposix_regcomp(&URL, "^[ \t]*URL[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_65 = return_value_pcreposix_regcomp_64 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_67;
  signed int return_value_pcreposix_regcomp_66;
  if(tmp_if_expr_65)
    tmp_if_expr_67 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_66=pcreposix_regcomp(&HeadRequire, "^[ \t]*HeadRequire[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_67 = return_value_pcreposix_regcomp_66 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_69;
  signed int return_value_pcreposix_regcomp_68;
  if(tmp_if_expr_67)
    tmp_if_expr_69 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_68=pcreposix_regcomp(&HeadDeny, "^[ \t]*HeadDeny[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_69 = return_value_pcreposix_regcomp_68 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_71;
  signed int return_value_pcreposix_regcomp_70;
  if(tmp_if_expr_69)
    tmp_if_expr_71 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_70=pcreposix_regcomp(&BackEnd, "^[ \t]*BackEnd[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_71 = return_value_pcreposix_regcomp_70 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_73;
  signed int return_value_pcreposix_regcomp_72;
  if(tmp_if_expr_71)
    tmp_if_expr_73 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_72=pcreposix_regcomp(&Emergency, "^[ \t]*Emergency[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_73 = return_value_pcreposix_regcomp_72 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_75;
  signed int return_value_pcreposix_regcomp_74;
  if(tmp_if_expr_73)
    tmp_if_expr_75 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_74=pcreposix_regcomp(&Priority, "^[ \t]*Priority[ \t]+([1-9])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_75 = return_value_pcreposix_regcomp_74 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_77;
  signed int return_value_pcreposix_regcomp_76;
  if(tmp_if_expr_75)
    tmp_if_expr_77 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_76=pcreposix_regcomp(&TimeOut, "^[ \t]*TimeOut[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_77 = return_value_pcreposix_regcomp_76 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_79;
  signed int return_value_pcreposix_regcomp_78;
  if(tmp_if_expr_77)
    tmp_if_expr_79 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_78=pcreposix_regcomp(&HAport, "^[ \t]*HAport[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_79 = return_value_pcreposix_regcomp_78 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_81;
  signed int return_value_pcreposix_regcomp_80;
  if(tmp_if_expr_79)
    tmp_if_expr_81 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_80=pcreposix_regcomp(&HAportAddr, "^[ \t]*HAport[ \t]+([^ \t]+)[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_81 = return_value_pcreposix_regcomp_80 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_83;
  signed int return_value_pcreposix_regcomp_82;
  if(tmp_if_expr_81)
    tmp_if_expr_83 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_82=pcreposix_regcomp(&Redirect, "^[ \t]*Redirect[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_83 = return_value_pcreposix_regcomp_82 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_85;
  signed int return_value_pcreposix_regcomp_84;
  if(tmp_if_expr_83)
    tmp_if_expr_85 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_84=pcreposix_regcomp(&RedirectN, "^[ \t]*Redirect[ \t]+(30[127])[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_85 = return_value_pcreposix_regcomp_84 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_87;
  signed int return_value_pcreposix_regcomp_86;
  if(tmp_if_expr_85)
    tmp_if_expr_87 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_86=pcreposix_regcomp(&Session, "^[ \t]*Session[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_87 = return_value_pcreposix_regcomp_86 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_89;
  signed int return_value_pcreposix_regcomp_88;
  if(tmp_if_expr_87)
    tmp_if_expr_89 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_88=pcreposix_regcomp(&Type, "^[ \t]*Type[ \t]+([^ \t]+)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_89 = return_value_pcreposix_regcomp_88 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_91;
  signed int return_value_pcreposix_regcomp_90;
  if(tmp_if_expr_89)
    tmp_if_expr_91 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_90=pcreposix_regcomp(&TTL, "^[ \t]*TTL[ \t]+([1-9-][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_91 = return_value_pcreposix_regcomp_90 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_93;
  signed int return_value_pcreposix_regcomp_92;
  if(tmp_if_expr_91)
    tmp_if_expr_93 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_92=pcreposix_regcomp(&ID, "^[ \t]*ID[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_93 = return_value_pcreposix_regcomp_92 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_95;
  signed int return_value_pcreposix_regcomp_94;
  if(tmp_if_expr_93)
    tmp_if_expr_95 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_94=pcreposix_regcomp(&DynScale, "^[ \t]*DynScale[ \t]+([01])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_95 = return_value_pcreposix_regcomp_94 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_97;
  signed int return_value_pcreposix_regcomp_96;
  if(tmp_if_expr_95)
    tmp_if_expr_97 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_96=pcreposix_regcomp(&ClientCert, "^[ \t]*ClientCert[ \t]+([0-3])[ \t]+([1-9])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_97 = return_value_pcreposix_regcomp_96 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_99;
  signed int return_value_pcreposix_regcomp_98;
  if(tmp_if_expr_97)
    tmp_if_expr_99 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_98=pcreposix_regcomp(&AddHeader, "^[ \t]*AddHeader[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_99 = return_value_pcreposix_regcomp_98 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_101;
  signed int return_value_pcreposix_regcomp_100;
  if(tmp_if_expr_99)
    tmp_if_expr_101 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_100=pcreposix_regcomp(&SSLAllowClientRenegotiation, "^[ \t]*SSLAllowClientRenegotiation[ \t]+([012])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_101 = return_value_pcreposix_regcomp_100 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_103;
  signed int return_value_pcreposix_regcomp_102;
  if(tmp_if_expr_101)
    tmp_if_expr_103 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_102=pcreposix_regcomp(&DisableSSLv2, "^[ \t]*DisableSSLv2[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_103 = return_value_pcreposix_regcomp_102 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_105;
  signed int return_value_pcreposix_regcomp_104;
  if(tmp_if_expr_103)
    tmp_if_expr_105 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_104=pcreposix_regcomp(&DisableSSLv3, "^[ \t]*DisableSSLv3[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_105 = return_value_pcreposix_regcomp_104 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_107;
  signed int return_value_pcreposix_regcomp_106;
  if(tmp_if_expr_105)
    tmp_if_expr_107 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_106=pcreposix_regcomp(&SSLHonorCipherOrder, "^[ \t]*SSLHonorCipherOrder[ \t]+([01])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_107 = return_value_pcreposix_regcomp_106 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_109;
  signed int return_value_pcreposix_regcomp_108;
  if(tmp_if_expr_107)
    tmp_if_expr_109 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_108=pcreposix_regcomp(&Ciphers, "^[ \t]*Ciphers[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_109 = return_value_pcreposix_regcomp_108 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_111;
  signed int return_value_pcreposix_regcomp_110;
  if(tmp_if_expr_109)
    tmp_if_expr_111 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_110=pcreposix_regcomp(&CAlist, "^[ \t]*CAlist[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_111 = return_value_pcreposix_regcomp_110 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_113;
  signed int return_value_pcreposix_regcomp_112;
  if(tmp_if_expr_111)
    tmp_if_expr_113 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_112=pcreposix_regcomp(&VerifyList, "^[ \t]*VerifyList[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_113 = return_value_pcreposix_regcomp_112 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_115;
  signed int return_value_pcreposix_regcomp_114;
  if(tmp_if_expr_113)
    tmp_if_expr_115 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_114=pcreposix_regcomp(&CRLlist, "^[ \t]*CRLlist[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_115 = return_value_pcreposix_regcomp_114 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_117;
  signed int return_value_pcreposix_regcomp_116;
  if(tmp_if_expr_115)
    tmp_if_expr_117 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_116=pcreposix_regcomp(&NoHTTPS11, "^[ \t]*NoHTTPS11[ \t]+([0-2])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_117 = return_value_pcreposix_regcomp_116 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_119;
  signed int return_value_pcreposix_regcomp_118;
  if(tmp_if_expr_117)
    tmp_if_expr_119 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_118=pcreposix_regcomp(&Include, "^[ \t]*Include[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_119 = return_value_pcreposix_regcomp_118 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_121;
  signed int return_value_pcreposix_regcomp_120;
  if(tmp_if_expr_119)
    tmp_if_expr_121 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_120=pcreposix_regcomp(&ConnTO, "^[ \t]*ConnTO[ \t]+([1-9][0-9]*)[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_121 = return_value_pcreposix_regcomp_120 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_123;
  signed int return_value_pcreposix_regcomp_122;
  if(tmp_if_expr_121)
    tmp_if_expr_123 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_122=pcreposix_regcomp(&IgnoreCase, "^[ \t]*IgnoreCase[ \t]+([01])[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_123 = return_value_pcreposix_regcomp_122 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_125;
  signed int return_value_pcreposix_regcomp_124;
  if(tmp_if_expr_123)
    tmp_if_expr_125 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_124=pcreposix_regcomp(&HTTPS, "^[ \t]*HTTPS[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_125 = return_value_pcreposix_regcomp_124 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_127;
  signed int return_value_pcreposix_regcomp_126;
  if(tmp_if_expr_125)
    tmp_if_expr_127 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_126=pcreposix_regcomp(&HTTPSCert, "^[ \t]*HTTPS[ \t]+\"(.+)\"[ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_127 = return_value_pcreposix_regcomp_126 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_129;
  signed int return_value_pcreposix_regcomp_128;
  if(tmp_if_expr_127)
    tmp_if_expr_129 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_128=pcreposix_regcomp(&Disabled, "^[ \t]*Disabled[ \t]+[01][ \t]*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_129 = return_value_pcreposix_regcomp_128 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_131;
  signed int return_value_pcreposix_regcomp_130;
  if(tmp_if_expr_129)
    tmp_if_expr_131 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_130=pcreposix_regcomp(&CNName, ".*[Cc][Nn]=([-*.A-Za-z0-9]+).*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_131 = return_value_pcreposix_regcomp_130 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_131)
  {
    logmsg(3, "bad config Regex - aborted");
    exit(1);
  }

  opterr = 0;
  check_only = 0;
  conf_name = "/etc/pound/pound.cfg";
  pid_name = "/var/run/pound.pid";
  signed int return_value_strcmp_132;
  signed int return_value_strcmp_133;
  signed int return_value_strcmp_134;
  signed int return_value_strcmp_135;
  signed int return_value_strcmp_136;
  signed int return_value_strcmp_137;
  signed int return_value_strcmp_138;
  do
  {
    c_opt=getopt(argc, argv, "f:cvVp:");
    if(!(c_opt >= 1))
      break;

    switch(c_opt)
    {
      case 102:
      {
        conf_name = optarg;
        break;
      }
      case 112:
      {
        pid_name = optarg;
        break;
      }
      case 99:
      {
        check_only = 1;
        break;
      }
      case 118:
      {
        print_log = 1;
        break;
      }
      case 86:
      {
        print_log = 1;
        logmsg(7, "Version %s", (const void *)"2.6");
        logmsg(7, "  Configuration switches:");
        return_value_strcmp_132=strcmp("0", "0");
        if(!(return_value_strcmp_132 == 0))
          logmsg(7, "    --disable-super");

        return_value_strcmp_133=strcmp("", "1");
        if(!(return_value_strcmp_133 == 0))
          logmsg(7, "    --enable-cert1l");

        return_value_strcmp_134=strcmp("", "");
        if(!(return_value_strcmp_134 == 0))
          logmsg(7, "    --with-ssl=%s", (const void *)"");

        return_value_strcmp_135=strcmp("0", "0");
        if(!(return_value_strcmp_135 == 0))
          logmsg(7, "    --with-t_rsa=%s", (const void *)"0");

        return_value_strcmp_136=strcmp("8192", "0");
        if(!(return_value_strcmp_136 == 0))
          logmsg(7, "    --with-maxbuf=%s", (const void *)"8192");

        return_value_strcmp_137=strcmp("", "");
        if(!(return_value_strcmp_137 == 0))
          logmsg(7, "    --with-owner=%s", (const void *)"");

        return_value_strcmp_138=strcmp("", "");
        if(!(return_value_strcmp_138 == 0))
          logmsg(7, "    --with-group=%s", (const void *)"");

        logmsg(7, "Exiting...");
        exit(0);
        break;
      }
      default:
      {
        logmsg(3, "bad flag -%c", optopt);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  if(!(optind >= argc))
  {
    logmsg(3, "unknown extra arguments (%s...)", argv[(signed long int)optind]);
    exit(1);
  }

  conf_init(conf_name);
  user = (char *)(void *)0;
  group = (char *)(void *)0;
  root_jail = (char *)(void *)0;
  ctrl_name = (char *)(void *)0;
  numthreads = 128;
  alive_to = 30;
  daemonize = 1;
  grace = 30;
  services = (struct _service *)(void *)0;
  listeners = (struct _listener *)(void *)0;
  parse_file();
  if(!(check_only == 0))
  {
    logmsg(6, "Config file %s is OK", conf_name);
    exit(0);
  }

  if(listeners == ((struct _listener *)NULL))
  {
    logmsg(3, "no listeners defined - aborted");
    exit(1);
  }

  pcreposix_regfree(&Empty);
  pcreposix_regfree(&Comment);
  pcreposix_regfree(&User);
  pcreposix_regfree(&Group);
  pcreposix_regfree(&RootJail);
  pcreposix_regfree(&Daemon);
  pcreposix_regfree(&Threads);
  pcreposix_regfree(&LogFacility);
  pcreposix_regfree(&LogLevel);
  pcreposix_regfree(&Grace);
  pcreposix_regfree(&Alive);
  pcreposix_regfree(&SSLEngine);
  pcreposix_regfree(&Control);
  pcreposix_regfree(&ListenHTTP);
  pcreposix_regfree(&ListenHTTPS);
  pcreposix_regfree(&End);
  pcreposix_regfree(&Address);
  pcreposix_regfree(&Port);
  pcreposix_regfree(&Cert);
  pcreposix_regfree(&xHTTP);
  pcreposix_regfree(&Client);
  pcreposix_regfree(&CheckURL);
  pcreposix_regfree(&Err414);
  pcreposix_regfree(&Err500);
  pcreposix_regfree(&Err501);
  pcreposix_regfree(&Err503);
  pcreposix_regfree(&MaxRequest);
  pcreposix_regfree(&HeadRemove);
  pcreposix_regfree(&RewriteLocation);
  pcreposix_regfree(&RewriteDestination);
  pcreposix_regfree(&Service);
  pcreposix_regfree(&ServiceName);
  pcreposix_regfree(&URL);
  pcreposix_regfree(&HeadRequire);
  pcreposix_regfree(&HeadDeny);
  pcreposix_regfree(&BackEnd);
  pcreposix_regfree(&Emergency);
  pcreposix_regfree(&Priority);
  pcreposix_regfree(&TimeOut);
  pcreposix_regfree(&HAport);
  pcreposix_regfree(&HAportAddr);
  pcreposix_regfree(&Redirect);
  pcreposix_regfree(&RedirectN);
  pcreposix_regfree(&Session);
  pcreposix_regfree(&Type);
  pcreposix_regfree(&TTL);
  pcreposix_regfree(&ID);
  pcreposix_regfree(&DynScale);
  pcreposix_regfree(&ClientCert);
  pcreposix_regfree(&AddHeader);
  pcreposix_regfree(&SSLAllowClientRenegotiation);
  pcreposix_regfree(&DisableSSLv2);
  pcreposix_regfree(&DisableSSLv3);
  pcreposix_regfree(&SSLHonorCipherOrder);
  pcreposix_regfree(&Ciphers);
  pcreposix_regfree(&CAlist);
  pcreposix_regfree(&VerifyList);
  pcreposix_regfree(&CRLlist);
  pcreposix_regfree(&NoHTTPS11);
  pcreposix_regfree(&Include);
  pcreposix_regfree(&ConnTO);
  pcreposix_regfree(&IgnoreCase);
  pcreposix_regfree(&HTTPS);
  pcreposix_regfree(&HTTPSCert);
  pcreposix_regfree(&Disabled);
  pcreposix_regfree(&CNName);
  log_facility = def_facility;
  goto __CPROVER_DUMP_L151;

__CPROVER_DUMP_L151:
  ;
}

// connect_nb
// file pound.h line 574
extern signed int connect_nb(const signed int sockfd, struct addrinfo *serv_addr, const signed int to)
{
  signed int flags;
  signed int res;
  signed int error;
  unsigned int len;
  struct pollfd p;
  flags=fcntl(sockfd, 3, 0);
  if(!(flags >= 0))
  {
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    logmsg(4, "(%lx) connect_nb: fcntl GETFL failed: %s", return_value_pthread_self_1, return_value_strerror_3);
    return -1;
  }

  signed int return_value_fcntl_7;
  return_value_fcntl_7=fcntl(sockfd, 4, flags | 04000);
  if(!(return_value_fcntl_7 >= 0))
  {
    unsigned long int return_value_pthread_self_4;
    return_value_pthread_self_4=pthread_self();
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    logmsg(4, "(%lx) connect_nb: fcntl SETFL failed: %s", return_value_pthread_self_4, return_value_strerror_6);
    return -1;
  }

  error = 0;
  res=connect(sockfd, serv_addr->ai_addr, serv_addr->ai_addrlen);
  signed int *return_value___errno_location_11;
  if(!(res >= 0))
  {
    return_value___errno_location_11=__errno_location();
    if(!(*return_value___errno_location_11 == 115))
    {
      unsigned long int return_value_pthread_self_8;
      return_value_pthread_self_8=pthread_self();
      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(*return_value___errno_location_9);
      logmsg(4, "(%lx) connect_nb: connect failed: %s", return_value_pthread_self_8, return_value_strerror_10);
      return -1;
    }

  }

  if(res == 0)
  {
    signed int return_value_fcntl_15;
    return_value_fcntl_15=fcntl(sockfd, 4, flags);
    if(!(return_value_fcntl_15 >= 0))
    {
      unsigned long int return_value_pthread_self_12;
      return_value_pthread_self_12=pthread_self();
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      char *return_value_strerror_14;
      return_value_strerror_14=strerror(*return_value___errno_location_13);
      logmsg(4, "(%lx) connect_nb: fcntl reSETFL failed: %s", return_value_pthread_self_12, return_value_strerror_14);
      return -1;
    }

    return 0;
  }

  memset((void *)&p, 0, sizeof(struct pollfd) /*8ul*/ );
  p.fd = sockfd;
  p.events = (signed short int)0x004;
  res=poll(&p, (unsigned long int)1, to * 1000);
  unsigned long int return_value_pthread_self_18;
  signed int *return_value___errno_location_19;
  char *return_value_strerror_20;
  if(!(res == 1))
  {
    if(res == 0)
    {
      unsigned long int return_value_pthread_self_16;
      return_value_pthread_self_16=pthread_self();
      logmsg(4, "(%lx) connect_nb: poll timed out", return_value_pthread_self_16);
      signed int *return_value___errno_location_17;
      return_value___errno_location_17=__errno_location();
      *return_value___errno_location_17 = 110;
    }

    else
    {
      return_value_pthread_self_18=pthread_self();
      return_value___errno_location_19=__errno_location();
      return_value_strerror_20=strerror(*return_value___errno_location_19);
      logmsg(4, "(%lx) connect_nb: poll failed: %s", return_value_pthread_self_18, return_value_strerror_20);
    }
    return -1;
  }

  len = (unsigned int)sizeof(signed int) /*4ul*/ ;
  signed int return_value_getsockopt_24;
  return_value_getsockopt_24=getsockopt(sockfd, 1, 4, (void *)&error, &len);
  if(!(return_value_getsockopt_24 >= 0))
  {
    unsigned long int return_value_pthread_self_21;
    return_value_pthread_self_21=pthread_self();
    signed int *return_value___errno_location_22;
    return_value___errno_location_22=__errno_location();
    char *return_value_strerror_23;
    return_value_strerror_23=strerror(*return_value___errno_location_22);
    logmsg(4, "(%lx) connect_nb: getsockopt failed: %s", return_value_pthread_self_21, return_value_strerror_23);
    return -1;
  }

  signed int return_value_fcntl_28;
  return_value_fcntl_28=fcntl(sockfd, 4, flags);
  if(!(return_value_fcntl_28 >= 0))
  {
    unsigned long int return_value_pthread_self_25;
    return_value_pthread_self_25=pthread_self();
    signed int *return_value___errno_location_26;
    return_value___errno_location_26=__errno_location();
    char *return_value_strerror_27;
    return_value_strerror_27=strerror(*return_value___errno_location_26);
    logmsg(4, "(%lx) connect_nb: fcntl reSETFL failed: %s", return_value_pthread_self_25, return_value_strerror_27);
    return -1;
  }

  if(!(error == 0))
  {
    signed int *return_value___errno_location_29;
    return_value___errno_location_29=__errno_location();
    *return_value___errno_location_29 = error;
    unsigned long int return_value_pthread_self_30;
    return_value_pthread_self_30=pthread_self();
    signed int *return_value___errno_location_31;
    return_value___errno_location_31=__errno_location();
    char *return_value_strerror_32;
    return_value_strerror_32=strerror(*return_value___errno_location_31);
    logmsg(4, "(%lx) connect_nb: error after getsockopt: %s", return_value_pthread_self_30, return_value_strerror_32);
    return -1;
  }

  return 0;
}

// copy_bin
// file http.c line 111
static signed int copy_bin(struct bio_st * const cl, struct bio_st * const be, signed long long int cont, signed long long int *res_bytes, const signed int no_write)
{
  char buf[8192l];
  signed int res;
  signed int return_value_BIO_write_1;
  while(cont >= 1ll)
  {
    res=BIO_read(cl, (void *)buf, (signed int)(cont > (signed long int)8192 ? (signed long int)8192 : cont));
    if(!(res >= 0))
      return -1;

    else
      if(res == 0)
        return -2;

    if(no_write == 0)
    {
      return_value_BIO_write_1=BIO_write(be, (const void *)buf, res);
      if(!(return_value_BIO_write_1 == res))
        return -3;

    }

    cont = cont - (signed long long int)res;
    if(!(res_bytes == ((signed long long int *)NULL)))
      *res_bytes = *res_bytes + (signed long long int)res;

  }
  signed long int return_value_BIO_ctrl_2;
  if(no_write == 0)
  {
    return_value_BIO_ctrl_2=BIO_ctrl(be, 11, (signed long int)0, (void *)0);
    if((signed int)return_value_BIO_ctrl_2 == 1)
      goto __CPROVER_DUMP_L7;

    return -4;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    return 0;
  }
}

// copy_chunks
// file http.c line 194
static signed int copy_chunks(struct bio_st * const cl, struct bio_st * const be, signed long long int *res_bytes, const signed int no_write, const signed long long int max_size)
{
  char buf[8192l];
  signed long long int cont;
  signed long long int tot_size;
  struct anonymous_4 copy_chunks__1__matches[2l];
  signed int res;
  tot_size = 0L;
  signed int return_value_BIO_printf_11;
  unsigned long int return_value_pthread_self_12;
  signed int *return_value___errno_location_13;
  char *return_value_strerror_14;
  unsigned long int return_value_pthread_self_21;
  signed int return_value_BIO_printf_25;
  do
  {
    res=get_line(cl, buf, 8192);
    if(!(res >= 0))
    {
      unsigned long int return_value_pthread_self_1;
      return_value_pthread_self_1=pthread_self();
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      logmsg(5, "(%lx) chunked read error: %s", return_value_pthread_self_1, return_value_strerror_3);
      return -1;
    }

    else
      if(res >= 1)
        return 0;

    signed int return_value_pcreposix_regexec_7;
    return_value_pcreposix_regexec_7=pcreposix_regexec(&CHUNK_HEAD, buf, (unsigned long int)2, copy_chunks__1__matches, 0);
    if(return_value_pcreposix_regexec_7 == 0)
      cont=strtoll(buf, (char ** restrict )(void *)0, 16);

    else
    {
      unsigned long int return_value_pthread_self_4;
      return_value_pthread_self_4=pthread_self();
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      char *return_value_strerror_6;
      return_value_strerror_6=strerror(*return_value___errno_location_5);
      logmsg(5, "(%lx) bad chunk header <%s>: %s", return_value_pthread_self_4, (const void *)buf, return_value_strerror_6);
      return -2;
    }
    if(no_write == 0)
    {
      return_value_BIO_printf_11=BIO_printf(be, "%s\r\n", (const void *)buf);
      if(!(return_value_BIO_printf_11 >= 1))
      {
        unsigned long int return_value_pthread_self_8;
        return_value_pthread_self_8=pthread_self();
        signed int *return_value___errno_location_9;
        return_value___errno_location_9=__errno_location();
        char *return_value_strerror_10;
        return_value_strerror_10=strerror(*return_value___errno_location_9);
        logmsg(5, "(%lx) error write chunked: %s", return_value_pthread_self_8, return_value_strerror_10);
        return -3;
      }

    }

    tot_size = tot_size + cont;
    if(max_size >= 1ll && !(max_size >= tot_size))
    {
      logmsg(4, "(%lx) chunk content too large", pthread_self);
      return -4;
    }

    if(cont >= 1ll)
    {
      signed int return_value_copy_bin_16;
      return_value_copy_bin_16=copy_bin(cl, be, cont, res_bytes, no_write);
      if(!(return_value_copy_bin_16 == 0))
      {
        signed int *return_value___errno_location_15;
        return_value___errno_location_15=__errno_location();
        if(!(*return_value___errno_location_15 == 0))
        {
          return_value_pthread_self_12=pthread_self();
          return_value___errno_location_13=__errno_location();
          return_value_strerror_14=strerror(*return_value___errno_location_13);
          logmsg(5, "(%lx) error copy chunk cont: %s", return_value_pthread_self_12, return_value_strerror_14);
        }

        return -4;
      }

    }

    else
      break;
    res=get_line(cl, buf, 8192);
    if(!(res >= 0))
    {
      unsigned long int return_value_pthread_self_17;
      return_value_pthread_self_17=pthread_self();
      signed int *return_value___errno_location_18;
      return_value___errno_location_18=__errno_location();
      char *return_value_strerror_19;
      return_value_strerror_19=strerror(*return_value___errno_location_18);
      logmsg(5, "(%lx) error after chunk: %s", return_value_pthread_self_17, return_value_strerror_19);
      return -5;
    }

    else
      if(res >= 1)
      {
        unsigned long int return_value_pthread_self_20;
        return_value_pthread_self_20=pthread_self();
        logmsg(5, "(%lx) unexpected EOF after chunk", return_value_pthread_self_20);
        return -5;
      }

    if(!(buf[0l] == 0))
    {
      return_value_pthread_self_21=pthread_self();
      logmsg(5, "(%lx) unexpected after chunk \"%s\"", return_value_pthread_self_21, (const void *)buf);
    }

    if(no_write == 0)
    {
      return_value_BIO_printf_25=BIO_printf(be, "%s\r\n", (const void *)buf);
      if(!(return_value_BIO_printf_25 >= 1))
      {
        unsigned long int return_value_pthread_self_22;
        return_value_pthread_self_22=pthread_self();
        signed int *return_value___errno_location_23;
        return_value___errno_location_23=__errno_location();
        char *return_value_strerror_24;
        return_value_strerror_24=strerror(*return_value___errno_location_23);
        logmsg(5, "(%lx) error after chunk write: %s", return_value_pthread_self_22, return_value_strerror_24);
        return -6;
      }

    }

  }
  while((_Bool)1);
  signed int return_value_BIO_printf_32;
  do
  {
    res=get_line(cl, buf, 8192);
    if(!(res >= 0))
    {
      unsigned long int return_value_pthread_self_26;
      return_value_pthread_self_26=pthread_self();
      signed int *return_value___errno_location_27;
      return_value___errno_location_27=__errno_location();
      char *return_value_strerror_28;
      return_value_strerror_28=strerror(*return_value___errno_location_27);
      logmsg(5, "(%lx) error post-chunk: %s", return_value_pthread_self_26, return_value_strerror_28);
      return -7;
    }

    else
      if(res >= 1)
        break;

    if(no_write == 0)
    {
      return_value_BIO_printf_32=BIO_printf(be, "%s\r\n", (const void *)buf);
      if(!(return_value_BIO_printf_32 >= 1))
      {
        unsigned long int return_value_pthread_self_29;
        return_value_pthread_self_29=pthread_self();
        signed int *return_value___errno_location_30;
        return_value___errno_location_30=__errno_location();
        char *return_value_strerror_31;
        return_value_strerror_31=strerror(*return_value___errno_location_30);
        logmsg(5, "(%lx) error post-chunk write: %s", return_value_pthread_self_29, return_value_strerror_31);
        return -8;
      }

    }

    if(buf[0l] == 0)
      break;

  }
  while((_Bool)1);
  signed long int return_value_BIO_ctrl_36;
  if(no_write == 0)
  {
    return_value_BIO_ctrl_36=BIO_ctrl(be, 11, (signed long int)0, (void *)0);
    if(!((signed int)return_value_BIO_ctrl_36 == 1))
    {
      unsigned long int return_value_pthread_self_33;
      return_value_pthread_self_33=pthread_self();
      signed int *return_value___errno_location_34;
      return_value___errno_location_34=__errno_location();
      char *return_value_strerror_35;
      return_value_strerror_35=strerror(*return_value___errno_location_34);
      logmsg(5, "(%lx) copy_chunks flush error: %s", return_value_pthread_self_33, return_value_strerror_35);
      return -4;
    }

  }

  return 0;
}

// cpURL
// file pound.h line 497
extern signed int cpURL(char *res, char *src, signed int len)
{
  signed int state;
  char *kp_res = res;
  state = 0;
  _Bool tmp_if_expr_9;
  char *tmp_post_1;
  _Bool tmp_if_expr_8;
  char *tmp_post_2;
  _Bool tmp_if_expr_7;
  char *tmp_post_3;
  char *tmp_post_4;
  char *tmp_post_5;
  char *tmp_post_6;
  _Bool tmp_if_expr_19;
  char *tmp_post_10;
  _Bool tmp_if_expr_18;
  char *tmp_post_11;
  _Bool tmp_if_expr_17;
  char *tmp_post_12;
  char *tmp_post_13;
  char *tmp_post_14;
  char *tmp_post_15;
  char *tmp_post_16;
  char *tmp_post_20;
  char *tmp_post_21;
  for( ; len >= 1; len = len - 1)
    switch(state)
    {
      case 1:
      {
        if((signed int)*src >= 48)
          tmp_if_expr_9 = (signed int)*src <= 57 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_9 = (_Bool)0;
        if(tmp_if_expr_9)
        {
          tmp_post_1 = src;
          src = src + 1l;
          *res = (char)((signed int)*tmp_post_1 - 48);
          state = 2;
        }

        else
        {
          if((signed int)*src >= 65)
            tmp_if_expr_8 = (signed int)*src <= 70 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_8 = (_Bool)0;
          if(tmp_if_expr_8)
          {
            tmp_post_2 = src;
            src = src + 1l;
            *res = (char)(((signed int)*tmp_post_2 - 65) + 10);
            state = 2;
          }

          else
          {
            if((signed int)*src >= 97)
              tmp_if_expr_7 = (signed int)*src <= 102 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_7 = (_Bool)0;
            if(tmp_if_expr_7)
            {
              tmp_post_3 = src;
              src = src + 1l;
              *res = (char)(((signed int)*tmp_post_3 - 97) + 10);
              state = 2;
            }

            else
            {
              tmp_post_4 = res;
              res = res + 1l;
              *tmp_post_4 = (char)37;
              tmp_post_5 = res;
              res = res + 1l;
              tmp_post_6 = src;
              src = src + 1l;
              *tmp_post_5 = *tmp_post_6;
              state = 0;
            }
          }
        }
        break;
      }
      case 2:
      {
        if((signed int)*src >= 48)
          tmp_if_expr_19 = (signed int)*src <= 57 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_19 = (_Bool)0;
        if(tmp_if_expr_19)
        {
          tmp_post_10 = src;
          src = src + 1l;
          *res = (char)(((signed int)*res * 16 + (signed int)*tmp_post_10) - 48);
          res = res + 1l;
          state = 0;
        }

        else
        {
          if((signed int)*src >= 65)
            tmp_if_expr_18 = (signed int)*src <= 70 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_18 = (_Bool)0;
          if(tmp_if_expr_18)
          {
            tmp_post_11 = src;
            src = src + 1l;
            *res = (char)((((signed int)*res * 16 + (signed int)*tmp_post_11) - 65) + 10);
            res = res + 1l;
            state = 0;
          }

          else
          {
            if((signed int)*src >= 97)
              tmp_if_expr_17 = (signed int)*src <= 102 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_17 = (_Bool)0;
            if(tmp_if_expr_17)
            {
              tmp_post_12 = src;
              src = src + 1l;
              *res = (char)((((signed int)*res * 16 + (signed int)*tmp_post_12) - 97) + 10);
              res = res + 1l;
              state = 0;
            }

            else
            {
              tmp_post_13 = res;
              res = res + 1l;
              *tmp_post_13 = (char)37;
              tmp_post_14 = res;
              res = res + 1l;
              *tmp_post_14 = *(src - (signed long int)1);
              tmp_post_15 = res;
              res = res + 1l;
              tmp_post_16 = src;
              src = src + 1l;
              *tmp_post_15 = *tmp_post_16;
              state = 0;
            }
          }
        }
        break;
      }
      default:
        if(!((signed int)*src == 37))
        {
          tmp_post_20 = res;
          res = res + 1l;
          tmp_post_21 = src;
          src = src + 1l;
          *tmp_post_20 = *tmp_post_21;
        }

        else
        {
          src = src + 1l;
          state = 1;
        }
    }
  char *tmp_post_22;
  if(state >= 1)
  {
    tmp_post_22 = res;
    res = res + 1l;
    *tmp_post_22 = (char)37;
  }

  char *tmp_post_23;
  if(state >= 2)
  {
    tmp_post_23 = res;
    res = res + 1l;
    *tmp_post_23 = *(src - (signed long int)1);
  }

  *res = (char)0;
  return (signed int)(res - kp_res);
}

// cur_time
// file http.c line 484
static double cur_time(void)
{
  struct timeval tv;
  struct timezone tz;
  signed int sv_errno;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  sv_errno = *return_value___errno_location_1;
  gettimeofday(&tv, &tz);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  *return_value___errno_location_2 = sv_errno;
  return (double)tv.tv_sec * 1000000.0 + (double)tv.tv_usec;
}

// do_RSAgen
// file svc.c line 1414
static void do_RSAgen(void)
{
  signed int n;
  signed int ret_val;
  struct rsa_st *t_RSA512_keys[11l];
  struct rsa_st *t_RSA1024_keys[11l];
  n = 0;
  for( ; !(n >= 11); n = n + 1)
  {
    t_RSA512_keys[(signed long int)n]=RSA_generate_key(512, (unsigned long int)0x10001L, (void (*)(signed int, signed int, void *))(void *)0, (void *)0);
    t_RSA1024_keys[(signed long int)n]=RSA_generate_key(1024, (unsigned long int)0x10001L, (void (*)(signed int, signed int, void *))(void *)0, (void *)0);
  }
  ret_val=pthread_mutex_lock(&RSA_mut);
  char *return_value_strerror_1;
  if(!(ret_val == 0))
  {
    return_value_strerror_1=strerror(ret_val);
    logmsg(4, "thr_RSAgen() lock: %s", return_value_strerror_1);
  }

  n = 0;
  for( ; !(n >= 11); n = n + 1)
  {
    RSA_free(RSA512_keys[(signed long int)n]);
    RSA512_keys[(signed long int)n] = t_RSA512_keys[(signed long int)n];
    RSA_free(RSA1024_keys[(signed long int)n]);
    RSA1024_keys[(signed long int)n] = t_RSA1024_keys[(signed long int)n];
  }
  ret_val=pthread_mutex_unlock(&RSA_mut);
  char *return_value_strerror_2;
  if(!(ret_val == 0))
  {
    return_value_strerror_2=strerror(ret_val);
    logmsg(4, "thr_RSAgen() unlock: %s", return_value_strerror_2);
  }

  goto __CPROVER_DUMP_L7;

__CPROVER_DUMP_L7:
  ;
}

// do_expire
// file svc.c line 1218
static void do_expire(void)
{
  struct _listener *lstn;
  struct _service *svc;
  signed long int do_expire__1__cur_time;
  signed int ret_val;
  do_expire__1__cur_time=time((signed long int *)(void *)0);
  lstn = listeners;
  char *return_value_strerror_2;
  for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
  {
    svc = lstn->services;
    for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    {
      if(!((signed int)svc->sess_type == SESS_NONE))
      {
        ret_val=pthread_mutex_lock(&svc->mut);
        if(!(ret_val == 0))
        {
          char *return_value_strerror_1;
          return_value_strerror_1=strerror(ret_val);
          logmsg(4, "do_expire() lock: %s", return_value_strerror_1);
          goto __CPROVER_DUMP_L5;
        }

        t_expire(svc->sessions, do_expire__1__cur_time - (signed long int)svc->sess_ttl);
        ret_val=pthread_mutex_unlock(&svc->mut);
        if(!(ret_val == 0))
        {
          return_value_strerror_2=strerror(ret_val);
          logmsg(4, "do_expire() unlock: %s", return_value_strerror_2);
        }

      }


    __CPROVER_DUMP_L5:
      ;
    }
  }
  svc = services;
  char *return_value_strerror_4;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
  {
    if(!((signed int)svc->sess_type == SESS_NONE))
    {
      ret_val=pthread_mutex_lock(&svc->mut);
      if(!(ret_val == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(ret_val);
        logmsg(4, "do_expire() lock: %s", return_value_strerror_3);
        goto __CPROVER_DUMP_L11;
      }

      t_expire(svc->sessions, do_expire__1__cur_time - (signed long int)svc->sess_ttl);
      ret_val=pthread_mutex_unlock(&svc->mut);
      if(!(ret_val == 0))
      {
        return_value_strerror_4=strerror(ret_val);
        logmsg(4, "do_expire() unlock: %s", return_value_strerror_4);
      }

    }


  __CPROVER_DUMP_L11:
    ;
  }
  goto __CPROVER_DUMP_L13;

__CPROVER_DUMP_L13:
  ;
}

// do_http
// file http.c line 532
void do_http(struct _thr_arg *arg)
{
  signed int cl_11;
  signed int be_11;
  signed int res;
  signed int chunked;
  signed int n;
  signed int sock;
  signed int no_cont;
  signed int skip;
  signed int conn_closed;
  signed int force_10;
  signed int sock_proto;
  signed int is_rpc;
  struct _listener *lstn;
  struct _service *svc;
  struct _backend *backend;
  struct _backend *cur_backend;
  struct _backend *old_backend;
  struct addrinfo from_host;
  struct addrinfo z_addr;
  struct sockaddr_storage from_host_addr;
  struct bio_st *cl;
  struct bio_st *be;
  struct bio_st *bb;
  struct bio_st *b64;
  struct x509_st *x509;
  char request[8192l];
  char response[8192l];
  char buf[8192l];
  char url[8192l];
  char loc_path[8192l];
  char **headers;
  char headers_ok[128l];
  char v_host[8192l];
  char referer[8192l];
  char u_agent[8192l];
  char u_name[8192l];
  char caddr[8192l];
  char req_time[32l];
  char s_res_bytes[32l];
  char *mh;
  struct ssl_st *ssl;
  struct ssl_st *be_ssl;
  signed long long int cont;
  signed long long int res_bytes;
  struct anonymous_4 do_http__1__matches[4l];
  struct linger l;
  double start_req;
  double end_req;
  enum anonymous_3 reneg_state;
  struct anonymous_6 ba1;
  struct anonymous_6 ba2;
  reneg_state = (enum anonymous_3)RENEG_INIT;
  ba1.reneg_state = &reneg_state;
  ba2.reneg_state = &reneg_state;
  ba1.timeout = 0;
  ba2.timeout = 0;
  from_host = ((struct _thr_arg *)arg)->from_host;
  memcpy((void *)&from_host_addr, (const void *)from_host.ai_addr, (unsigned long int)from_host.ai_addrlen);
  from_host.ai_addr = (struct sockaddr *)&from_host_addr;
  lstn = ((struct _thr_arg *)arg)->lstn;
  sock = ((struct _thr_arg *)arg)->sock;
  free((void *)((struct _thr_arg *)arg)->from_host.ai_addr);
  free((void *)arg);
  if(!(lstn->allow_client_reneg == 0))
    reneg_state = (enum anonymous_3)RENEG_ALLOW;

  n = 1;
  setsockopt(sock, 1, 9, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
  l.l_onoff = 1;
  l.l_linger = 10;
  setsockopt(sock, 1, 13, (void *)&l, (unsigned int)sizeof(struct linger) /*8ul*/ );
  n = 5;
  setsockopt(sock, 6, 8, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
  n = 1;
  setsockopt(sock, 6, 1, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
  cl = (struct bio_st *)(void *)0;
  be = (struct bio_st *)(void *)0;
  ssl = (struct ssl_st *)(void *)0;
  x509 = (struct x509_st *)(void *)0;
  cl=BIO_new_socket(sock, 1);
  if(cl == ((struct bio_st *)NULL))
  {
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    logmsg(4, "(%lx) BIO_new_socket failed", return_value_pthread_self_1);
    shutdown(sock, 2);
    close(sock);
    goto __CPROVER_DUMP_L488;
  }

  ba1.timeout = lstn->to;
  BIO_set_callback_arg(cl, (char *)&ba1);
  BIO_set_callback(cl, bio_callback);
  signed long int return_value_SSL_get_verify_result_5;
  if(!(lstn->ctx == ((struct _pound_ctx *)NULL)))
  {
    ssl=SSL_new(lstn->ctx->ctx);
    if(ssl == ((struct ssl_st *)NULL))
    {
      unsigned long int return_value_pthread_self_2;
      return_value_pthread_self_2=pthread_self();
      logmsg(4, "(%lx) SSL_new: failed", return_value_pthread_self_2);
      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
      BIO_free_all(cl);
      goto __CPROVER_DUMP_L488;
    }

    SSL_set_ex_data(ssl, 0, (void *)(char *)&reneg_state);
    SSL_set_bio(ssl, cl, cl);
    struct bio_method_st *return_value_BIO_f_ssl_4;
    return_value_BIO_f_ssl_4=BIO_f_ssl();
    bb=BIO_new(return_value_BIO_f_ssl_4);
    if(bb == ((struct bio_st *)NULL))
    {
      unsigned long int return_value_pthread_self_3;
      return_value_pthread_self_3=pthread_self();
      logmsg(4, "(%lx) BIO_new(Bio_f_ssl()) failed", return_value_pthread_self_3);
      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
      BIO_free_all(cl);
      goto __CPROVER_DUMP_L488;
    }

    BIO_ctrl(bb, 109, (signed long int)0x01, (void *)(char *)ssl);
    BIO_ctrl(bb, 119, (signed long int)0, (void *)0);
    cl = bb;
    signed long int return_value_BIO_ctrl_6;
    return_value_BIO_ctrl_6=BIO_ctrl(cl, 101, (signed long int)0, (void *)0);
    if(!(return_value_BIO_ctrl_6 >= 1l))
    {
      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
      BIO_free_all(cl);
      goto __CPROVER_DUMP_L488;
    }

    else
    {
      x509=SSL_get_peer_certificate(ssl);
      if(!(x509 == ((struct x509_st *)NULL)))
      {
        if(!(lstn->clnt_check >= 3))
        {
          return_value_SSL_get_verify_result_5=SSL_get_verify_result(ssl);
          if(!(return_value_SSL_get_verify_result_5 == 0l))
          {
            addr2str(caddr, 8192 - 1, &from_host, 1);
            logmsg(5, "Bad certificate from %s", (const void *)caddr);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            goto __CPROVER_DUMP_L488;
          }

        }

      }

    }
  }

  else
    x509 = (struct x509_st *)(void *)0;
  cur_backend = (struct _backend *)(void *)0;
  struct bio_method_st *return_value_BIO_f_buffer_8;
  return_value_BIO_f_buffer_8=BIO_f_buffer();
  bb=BIO_new(return_value_BIO_f_buffer_8);
  if(bb == ((struct bio_st *)NULL))
  {
    unsigned long int return_value_pthread_self_7;
    return_value_pthread_self_7=pthread_self();
    logmsg(4, "(%lx) BIO_new(buffer) failed", return_value_pthread_self_7);
    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
    BIO_free_all(cl);
    goto __CPROVER_DUMP_L488;
  }

  BIO_ctrl(cl, 9, (signed long int)0x01, (void *)0);
  BIO_ctrl(cl, 117, (signed long int)8192, (void *)0);
  cl=BIO_push(bb, cl);
  be_11 = 0;
  cl_11 = be_11;
  signed int return_value_strncasecmp_14;
  signed int return_value_pcreposix_regexec_22;
  _Bool tmp_if_expr_23;
  signed int return_value_strcasecmp_26;
  signed int return_value_pcreposix_regexec_28;
  char *tmp_if_expr_39;
  char *tmp_if_expr_41;
  unsigned long int return_value_pthread_self_42;
  _Bool tmp_if_expr_61;
  signed int return_value_check_header_67;
  signed int return_value_BIO_printf_75;
  struct bio_method_st *return_value_BIO_s_mem_113;
  signed int return_value_get_line_108;
  signed int return_value_is_readable_140;
  signed long int return_value_BIO_ctrl_120;
  unsigned long int return_value_pthread_self_126;
  signed int *return_value___errno_location_127;
  char *return_value_strerror_128;
  unsigned long int return_value_pthread_self_135;
  signed int *return_value___errno_location_136;
  char *return_value_strerror_137;
  signed long int return_value_BIO_ctrl_144;
  _Bool tmp_if_expr_146;
  char *return_value_strstr_145;
  char *tmp_if_expr_147;
  char *tmp_if_expr_148;
  char *tmp_if_expr_149;
  char *tmp_if_expr_150;
  char *tmp_if_expr_151;
  char *tmp_if_expr_152;
  char *tmp_if_expr_153;
  char *tmp_if_expr_154;
  char *tmp_if_expr_155;
  char *tmp_if_expr_156;
  char *tmp_if_expr_157;
  signed int return_value_pcreposix_regexec_162;
  _Bool tmp_if_expr_163;
  signed int return_value_strcasecmp_165;
  signed int return_value_strcasecmp_166;
  signed int return_value_need_rewrite_170;
  signed int return_value_need_rewrite_174;
  _Bool tmp_if_expr_175;
  unsigned long int return_value_pthread_self_187;
  signed int *return_value___errno_location_188;
  char *return_value_strerror_189;
  signed long int return_value_BIO_ctrl_192;
  unsigned long int return_value_pthread_self_197;
  signed int *return_value___errno_location_198;
  char *return_value_strerror_199;
  unsigned long int return_value_pthread_self_205;
  signed int *return_value___errno_location_206;
  char *return_value_strerror_207;
  char *tmp_if_expr_216;
  char *tmp_if_expr_217;
  char *tmp_if_expr_218;
  char *tmp_if_expr_219;
  char *tmp_if_expr_220;
  char *tmp_if_expr_221;
  char *tmp_if_expr_222;
  char *tmp_if_expr_223;
  do
  {
    res_bytes = 0LL;
    is_rpc = -1;
    u_name[(signed long int)0] = (char)0;
    u_agent[(signed long int)0] = u_name[(signed long int)0];
    referer[(signed long int)0] = u_agent[(signed long int)0];
    v_host[(signed long int)0] = referer[(signed long int)0];
    conn_closed = 0;
    n = 0;
    for( ; !(n >= 128); n = n + 1)
      headers_ok[(signed long int)n] = (char)1;
    headers=get_headers(cl, cl, lstn);
    if(headers == ((char **)NULL))
    {
      if(cl_11 == 0)
      {
        signed int *return_value___errno_location_12;
        return_value___errno_location_12=__errno_location();
        if(!(*return_value___errno_location_12 == 0))
        {
          addr2str(caddr, 8192 - 1, &from_host, 1);
          unsigned long int return_value_pthread_self_9;
          return_value_pthread_self_9=pthread_self();
          signed int *return_value___errno_location_10;
          return_value___errno_location_10=__errno_location();
          char *return_value_strerror_11;
          return_value_strerror_11=strerror(*return_value___errno_location_10);
          logmsg(5, "(%lx) error read from %s: %s", return_value_pthread_self_9, (const void *)caddr, return_value_strerror_11);
        }

      }

      if(!(ssl == ((struct ssl_st *)NULL)))
        BIO_ssl_shutdown(cl);

      if(!(be == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(be, 11, (signed long int)0, (void *)0);
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

      if(!(cl == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
        BIO_free_all(cl);
        cl = (struct bio_st *)(void *)0;
      }

      if(!(x509 == ((struct x509_st *)NULL)))
      {
        X509_free(x509);
        x509 = (struct x509_st *)(void *)0;
      }

      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        ERR_clear_error();
        ERR_remove_state((unsigned long int)0);
      }

      goto __CPROVER_DUMP_L488;
    }

    memset((void *)req_time, 0, (unsigned long int)32);
    start_req=cur_time();
    log_time(req_time);
    strncpy(request, headers[(signed long int)0], (unsigned long int)8192);
    signed int return_value_pcreposix_regexec_17;
    return_value_pcreposix_regexec_17=pcreposix_regexec(&lstn->verb, request, (unsigned long int)3, do_http__1__matches, 0);
    if(return_value_pcreposix_regexec_17 == 0)
    {
      signed int return_value_strncasecmp_13;
      return_value_strncasecmp_13=strncasecmp(request + (signed long int)do_http__1__matches[(signed long int)1].rm_so, "HEAD", (unsigned long int)(do_http__1__matches[(signed long int)1].rm_eo - do_http__1__matches[(signed long int)1].rm_so));
      no_cont = (signed int)!(return_value_strncasecmp_13 != 0);
      signed int return_value_strncasecmp_15;
      return_value_strncasecmp_15=strncasecmp(request + (signed long int)do_http__1__matches[(signed long int)1].rm_so, "RPC_IN_DATA", (unsigned long int)(do_http__1__matches[(signed long int)1].rm_eo - do_http__1__matches[(signed long int)1].rm_so));
      if(return_value_strncasecmp_15 == 0)
        is_rpc = 1;

      else
      {
        return_value_strncasecmp_14=strncasecmp(request + (signed long int)do_http__1__matches[(signed long int)1].rm_so, "RPC_OUT_DATA", (unsigned long int)(do_http__1__matches[(signed long int)1].rm_eo - do_http__1__matches[(signed long int)1].rm_so));
        if(return_value_strncasecmp_14 == 0)
          is_rpc = 0;

      }
    }

    else
    {
      addr2str(caddr, 8192 - 1, &from_host, 1);
      unsigned long int return_value_pthread_self_16;
      return_value_pthread_self_16=pthread_self();
      logmsg(4, "(%lx) e501 bad request \"%s\" from %s", return_value_pthread_self_16, (const void *)request, (const void *)caddr);
      err_reply(cl, h501, lstn->err501);
      free_headers(headers);
      if(!(ssl == ((struct ssl_st *)NULL)))
        BIO_ssl_shutdown(cl);

      if(!(be == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(be, 11, (signed long int)0, (void *)0);
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

      if(!(cl == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
        BIO_free_all(cl);
        cl = (struct bio_st *)(void *)0;
      }

      if(!(x509 == ((struct x509_st *)NULL)))
      {
        X509_free(x509);
        x509 = (struct x509_st *)(void *)0;
      }

      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        ERR_clear_error();
        ERR_remove_state((unsigned long int)0);
      }

      goto __CPROVER_DUMP_L488;
    }
    unsigned long int return_value_strlen_18;
    return_value_strlen_18=strlen(request);
    cl_11 = (signed int)((signed int)request[(signed long int)(return_value_strlen_18 - (unsigned long int)1)] == 49);
    n=cpURL(url, request + (signed long int)do_http__1__matches[(signed long int)2].rm_so, do_http__1__matches[(signed long int)2].rm_eo - do_http__1__matches[(signed long int)2].rm_so);
    unsigned long int return_value_strlen_20;
    return_value_strlen_20=strlen(url);
    if(!((unsigned long int)n == return_value_strlen_20))
    {
      addr2str(caddr, 8192 - 1, &from_host, 1);
      unsigned long int return_value_pthread_self_19;
      return_value_pthread_self_19=pthread_self();
      logmsg(5, "(%lx) e501 URL \"%s\" (contains NULL) from %s", return_value_pthread_self_19, (const void *)url, (const void *)caddr);
      err_reply(cl, h501, lstn->err501);
      free_headers(headers);
      if(!(ssl == ((struct ssl_st *)NULL)))
        BIO_ssl_shutdown(cl);

      if(!(be == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(be, 11, (signed long int)0, (void *)0);
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

      if(!(cl == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
        BIO_free_all(cl);
        cl = (struct bio_st *)(void *)0;
      }

      if(!(x509 == ((struct x509_st *)NULL)))
      {
        X509_free(x509);
        x509 = (struct x509_st *)(void *)0;
      }

      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        ERR_clear_error();
        ERR_remove_state((unsigned long int)0);
      }

      goto __CPROVER_DUMP_L488;
    }

    if(!(lstn->has_pat == 0))
    {
      return_value_pcreposix_regexec_22=pcreposix_regexec(&lstn->url_pat, url, (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
      if(!(return_value_pcreposix_regexec_22 == 0))
      {
        addr2str(caddr, 8192 - 1, &from_host, 1);
        unsigned long int return_value_pthread_self_21;
        return_value_pthread_self_21=pthread_self();
        logmsg(5, "(%lx) e501 bad URL \"%s\" from %s", return_value_pthread_self_21, (const void *)url, (const void *)caddr);
        err_reply(cl, h501, lstn->err501);
        free_headers(headers);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

    }

    chunked = 0;
    cont = -1LL;
    n = 1;
    do
    {
      if(!(n >= 128))
        tmp_if_expr_23 = headers[(signed long int)n] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_23 = (_Bool)0;
      if(!tmp_if_expr_23)
        break;

      signed int return_value_check_header_24;
      return_value_check_header_24=check_header(headers[(signed long int)n], buf);
      if(!(return_value_check_header_24 == 6))
      {
        if(return_value_check_header_24 == 7)
          goto __CPROVER_DUMP_L47;

        if(return_value_check_header_24 == 8)
          goto __CPROVER_DUMP_L48;

        if(return_value_check_header_24 == 3)
          goto __CPROVER_DUMP_L49;

        if(return_value_check_header_24 == 1)
          goto __CPROVER_DUMP_L51;

        if(return_value_check_header_24 == 2)
          goto __CPROVER_DUMP_L55;

        if(return_value_check_header_24 == -1)
          goto __CPROVER_DUMP_L58;

      }

      else
      {
        strcpy(v_host, buf);
        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L47:
        ;
        strcpy(referer, buf);
        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L48:
        ;
        strcpy(u_agent, buf);
        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L49:
        ;
        signed int return_value_strcasecmp_25;
        return_value_strcasecmp_25=strcasecmp("close", buf);
        if(return_value_strcasecmp_25 == 0)
          conn_closed = 1;

        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L51:
        ;
        if(cont >= 0LL)
          headers_ok[(signed long int)n] = (char)0;

        else
        {
          return_value_strcasecmp_26=strcasecmp("chunked", buf);
          if(return_value_strcasecmp_26 == 0)
          {
            if(!(chunked == 0))
              headers_ok[(signed long int)n] = (char)0;

            else
              chunked = 1;
          }

        }
        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L55:
        ;
        if(cont >= 0L || !(chunked == 0))
          headers_ok[(signed long int)n] = (char)0;

        else
        {
          cont=atoll(buf);
          if(!(cont >= 0L))
            headers_ok[(signed long int)n] = (char)0;

        }
        goto __CPROVER_DUMP_L60;

      __CPROVER_DUMP_L58:
        ;
        if(lstn->log_level >= 1)
        {
          addr2str(caddr, 8192 - 1, &from_host, 1);
          unsigned long int return_value_pthread_self_27;
          return_value_pthread_self_27=pthread_self();
          logmsg(5, "(%lx) bad header from %s (%s)", return_value_pthread_self_27, (const void *)caddr, headers[(signed long int)n]);
        }

        headers_ok[(signed long int)n] = (char)0;
      }

    __CPROVER_DUMP_L60:
      ;
      if(!(headers_ok[(signed long int)n] == 0))
      {
        if(!(lstn->head_off == ((struct _matcher *)NULL)))
        {
          struct _matcher *m = lstn->head_off;
          for( ; !(m == ((struct _matcher *)NULL)); m = m->next)
          {
            return_value_pcreposix_regexec_28=pcreposix_regexec(&m->pat, headers[(signed long int)n], (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
            headers_ok[(signed long int)n] = (char)return_value_pcreposix_regexec_28;
            if(headers_ok[(signed long int)n] == 0)
              break;

          }
        }

      }

      signed int return_value_pcreposix_regexec_35;
      return_value_pcreposix_regexec_35=pcreposix_regexec(&AUTHORIZATION, headers[(signed long int)n], (unsigned long int)2, do_http__1__matches, 0);
      if(return_value_pcreposix_regexec_35 == 0)
      {
        signed int inlen;
        struct bio_method_st *return_value_BIO_s_mem_30;
        return_value_BIO_s_mem_30=BIO_s_mem();
        bb=BIO_new(return_value_BIO_s_mem_30);
        if(bb == ((struct bio_st *)NULL))
        {
          unsigned long int return_value_pthread_self_29;
          return_value_pthread_self_29=pthread_self();
          logmsg(4, "(%lx) Can't alloc BIO_s_mem", return_value_pthread_self_29);
          goto __CPROVER_DUMP_L69;
        }

        struct bio_method_st *return_value_BIO_f_base64_32;
        return_value_BIO_f_base64_32=BIO_f_base64();
        b64=BIO_new(return_value_BIO_f_base64_32);
        if(b64 == ((struct bio_st *)NULL))
        {
          unsigned long int return_value_pthread_self_31;
          return_value_pthread_self_31=pthread_self();
          logmsg(4, "(%lx) Can't alloc BIO_f_base64", return_value_pthread_self_31);
          BIO_free(bb);
          goto __CPROVER_DUMP_L69;
        }

        b64=BIO_push(b64, bb);
        BIO_write(bb, (const void *)(headers[(signed long int)n] + (signed long int)do_http__1__matches[(signed long int)1].rm_so), do_http__1__matches[(signed long int)1].rm_eo - do_http__1__matches[(signed long int)1].rm_so);
        BIO_write(bb, (const void *)"\n", 1);
        inlen=BIO_read(b64, (void *)buf, 8192 - 1);
        if(!(inlen >= 1))
        {
          unsigned long int return_value_pthread_self_33;
          return_value_pthread_self_33=pthread_self();
          logmsg(4, "(%lx) Can't read BIO_f_base64", return_value_pthread_self_33);
          BIO_free_all(b64);
          goto __CPROVER_DUMP_L69;
        }

        BIO_free_all(b64);
        mh=strchr(buf, 58);
        if(mh == ((char *)NULL))
        {
          unsigned long int return_value_pthread_self_34;
          return_value_pthread_self_34=pthread_self();
          logmsg(4, "(%lx) Unknown authentication", return_value_pthread_self_34);
          goto __CPROVER_DUMP_L69;
        }

        *mh = (char)0;
        strcpy(u_name, buf);
      }


    __CPROVER_DUMP_L69:
      ;
      n = n + 1;
    }
    while((_Bool)1);
    if(lstn->max_req >= 1ll)
    {
      if(cont >= 1ll)
      {
        if(!(lstn->max_req >= cont))
        {
          if(!(is_rpc == 1))
          {
            addr2str(caddr, 8192 - 1, &from_host, 1);
            unsigned long int return_value_pthread_self_36;
            return_value_pthread_self_36=pthread_self();
            logmsg(5, "(%lx) e501 request too large (%ld) from %s", return_value_pthread_self_36, cont, (const void *)caddr);
            err_reply(cl, h501, lstn->err501);
            free_headers(headers);
            if(!(ssl == ((struct ssl_st *)NULL)))
              BIO_ssl_shutdown(cl);

            if(!(be == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(be, 11, (signed long int)0, (void *)0);
              BIO_ctrl(be, 1, (signed long int)0, (void *)0);
              BIO_free_all(be);
              be = (struct bio_st *)(void *)0;
            }

            if(!(cl == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
              BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
              BIO_free_all(cl);
              cl = (struct bio_st *)(void *)0;
            }

            if(!(x509 == ((struct x509_st *)NULL)))
            {
              X509_free(x509);
              x509 = (struct x509_st *)(void *)0;
            }

            if(!(ssl == ((struct ssl_st *)NULL)))
            {
              ERR_clear_error();
              ERR_remove_state((unsigned long int)0);
            }

            goto __CPROVER_DUMP_L488;
          }

        }

      }

    }

    if(!(be == ((struct bio_st *)NULL)))
    {
      signed int return_value_is_readable_37;
      return_value_is_readable_37=is_readable(be, 0);
      if(!(return_value_is_readable_37 == 0))
      {
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

    }

    svc=get_service(lstn, url, &headers[(signed long int)1]);
    if(svc == ((struct _service *)NULL))
    {
      addr2str(caddr, 8192 - 1, &from_host, 1);
      unsigned long int return_value_pthread_self_38;
      return_value_pthread_self_38=pthread_self();
      if(!(v_host[0l] == 0))
        tmp_if_expr_39 = v_host;

      else
        tmp_if_expr_39 = "-";
      logmsg(5, "(%lx) e503 no service \"%s\" from %s %s", return_value_pthread_self_38, (const void *)request, (const void *)caddr, tmp_if_expr_39);
      err_reply(cl, h503, lstn->err503);
      free_headers(headers);
      if(!(ssl == ((struct ssl_st *)NULL)))
        BIO_ssl_shutdown(cl);

      if(!(be == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(be, 11, (signed long int)0, (void *)0);
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

      if(!(cl == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
        BIO_free_all(cl);
        cl = (struct bio_st *)(void *)0;
      }

      if(!(x509 == ((struct x509_st *)NULL)))
      {
        X509_free(x509);
        x509 = (struct x509_st *)(void *)0;
      }

      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        ERR_clear_error();
        ERR_remove_state((unsigned long int)0);
      }

      goto __CPROVER_DUMP_L488;
    }

    backend=get_backend(svc, &from_host, url, &headers[(signed long int)1]);
    if(backend == ((struct _backend *)NULL))
    {
      addr2str(caddr, 8192 - 1, &from_host, 1);
      unsigned long int return_value_pthread_self_40;
      return_value_pthread_self_40=pthread_self();
      if(!(v_host[0l] == 0))
        tmp_if_expr_41 = v_host;

      else
        tmp_if_expr_41 = "-";
      logmsg(5, "(%lx) e503 no back-end \"%s\" from %s %s", return_value_pthread_self_40, (const void *)request, (const void *)caddr, tmp_if_expr_41);
      err_reply(cl, h503, lstn->err503);
      free_headers(headers);
      if(!(ssl == ((struct ssl_st *)NULL)))
        BIO_ssl_shutdown(cl);

      if(!(be == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(be, 11, (signed long int)0, (void *)0);
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

      if(!(cl == ((struct bio_st *)NULL)))
      {
        BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
        BIO_free_all(cl);
        cl = (struct bio_st *)(void *)0;
      }

      if(!(x509 == ((struct x509_st *)NULL)))
      {
        X509_free(x509);
        x509 = (struct x509_st *)(void *)0;
      }

      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        ERR_clear_error();
        ERR_remove_state((unsigned long int)0);
      }

      goto __CPROVER_DUMP_L488;
    }

    if(!(backend == cur_backend) && !(be == ((struct bio_st *)NULL)))
    {
      BIO_ctrl(be, 1, (signed long int)0, (void *)0);
      BIO_free_all(be);
      be = (struct bio_st *)(void *)0;
    }

    while(be == ((struct bio_st *)NULL))
    {
      if(!(backend->be_type == 0))
        break;

      switch(backend->addr.ai_family)
      {
        case 2:
        {
          sock_proto = 2;
          break;
        }
        case 10:
        {
          sock_proto = 10;
          break;
        }
        case 1:
        {
          sock_proto = 1;
          break;
        }
        default:
        {
          return_value_pthread_self_42=pthread_self();
          logmsg(4, "(%lx) e503 backend: unknown family %d", return_value_pthread_self_42, backend->addr.ai_family);
          err_reply(cl, h503, lstn->err503);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }
      }
      sock=socket(sock_proto, 1, 0);
      if(!(sock >= 0))
      {
        addr2str(buf, 8192 - 1, &backend->addr, 0);
        unsigned long int return_value_pthread_self_43;
        return_value_pthread_self_43=pthread_self();
        signed int *return_value___errno_location_44;
        return_value___errno_location_44=__errno_location();
        char *return_value_strerror_45;
        return_value_strerror_45=strerror(*return_value___errno_location_44);
        logmsg(4, "(%lx) e503 backend %s socket create: %s", return_value_pthread_self_43, (const void *)buf, return_value_strerror_45);
        err_reply(cl, h503, lstn->err503);
        free_headers(headers);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

      signed int return_value_connect_nb_51;
      return_value_connect_nb_51=connect_nb(sock, &backend->addr, backend->conn_to);
      if(!(return_value_connect_nb_51 >= 0))
      {
        addr2str(buf, 8192 - 1, &backend->addr, 0);
        unsigned long int return_value_pthread_self_46;
        return_value_pthread_self_46=pthread_self();
        signed int *return_value___errno_location_47;
        return_value___errno_location_47=__errno_location();
        char *return_value_strerror_48;
        return_value_strerror_48=strerror(*return_value___errno_location_47);
        logmsg(4, "(%lx) backend %s connect: %s", return_value_pthread_self_46, (const void *)buf, return_value_strerror_48);
        shutdown(sock, 2);
        close(sock);
        memset((void *)&z_addr, 0, sizeof(struct addrinfo) /*48ul*/ );
        signed int return_value_memcmp_49;
        return_value_memcmp_49=memcmp((const void *)&backend->ha_addr, (const void *)&z_addr, sizeof(struct addrinfo) /*48ul*/ );
        if(return_value_memcmp_49 == 0)
          kill_be(svc, backend, 1);

        old_backend = backend;
        backend=get_backend(svc, &from_host, url, &headers[(signed long int)1]);
        if(backend == ((struct _backend *)NULL) || backend == old_backend)
        {
          addr2str(caddr, 8192 - 1, &from_host, 1);
          unsigned long int return_value_pthread_self_50;
          return_value_pthread_self_50=pthread_self();
          logmsg(5, "(%lx) e503 no back-end \"%s\" from %s", return_value_pthread_self_50, (const void *)request, (const void *)caddr);
          err_reply(cl, h503, lstn->err503);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

        continue;
      }

      if(sock_proto == 2 || sock_proto == 10)
      {
        n = 1;
        setsockopt(sock, 1, 9, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
        l.l_onoff = 1;
        l.l_linger = 10;
        setsockopt(sock, 1, 13, (void *)&l, (unsigned int)sizeof(struct linger) /*8ul*/ );
        n = 5;
        setsockopt(sock, 6, 8, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
        n = 1;
        setsockopt(sock, 6, 1, (void *)&n, (unsigned int)sizeof(signed int) /*4ul*/ );
      }

      be=BIO_new_socket(sock, 1);
      if(be == ((struct bio_st *)NULL))
      {
        unsigned long int return_value_pthread_self_52;
        return_value_pthread_self_52=pthread_self();
        logmsg(4, "(%lx) e503 BIO_new_socket server failed", return_value_pthread_self_52);
        shutdown(sock, 2);
        close(sock);
        err_reply(cl, h503, lstn->err503);
        free_headers(headers);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

      BIO_ctrl(be, 9, (signed long int)0x01, (void *)0);
      if(backend->to >= 1)
      {
        ba2.timeout = backend->to;
        BIO_set_callback_arg(be, (char *)&ba2);
        BIO_set_callback(be, bio_callback);
      }

      if(!(backend->ctx == ((struct ssl_ctx_st *)NULL)))
      {
        be_ssl=SSL_new(backend->ctx);
        if(be_ssl == ((struct ssl_st *)NULL))
        {
          unsigned long int return_value_pthread_self_53;
          return_value_pthread_self_53=pthread_self();
          logmsg(4, "(%lx) be SSL_new: failed", return_value_pthread_self_53);
          err_reply(cl, h503, lstn->err503);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

        SSL_set_bio(be_ssl, be, be);
        struct bio_method_st *return_value_BIO_f_ssl_55;
        return_value_BIO_f_ssl_55=BIO_f_ssl();
        bb=BIO_new(return_value_BIO_f_ssl_55);
        if(bb == ((struct bio_st *)NULL))
        {
          unsigned long int return_value_pthread_self_54;
          return_value_pthread_self_54=pthread_self();
          logmsg(4, "(%lx) BIO_new(Bio_f_ssl()) failed", return_value_pthread_self_54);
          err_reply(cl, h503, lstn->err503);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

        BIO_ctrl(bb, 109, (signed long int)0x01, (void *)(char *)be_ssl);
        BIO_ctrl(bb, 119, (signed long int)1, (void *)0);
        be = bb;
        signed long int return_value_BIO_ctrl_58;
        return_value_BIO_ctrl_58=BIO_ctrl(be, 101, (signed long int)0, (void *)0);
        if(!(return_value_BIO_ctrl_58 >= 1l))
        {
          addr2str(buf, 8192 - 1, &backend->addr, 0);
          unsigned long int return_value_ERR_get_error_56;
          return_value_ERR_get_error_56=ERR_get_error();
          char *return_value_ERR_error_string_57;
          return_value_ERR_error_string_57=ERR_error_string(return_value_ERR_get_error_56, (char *)(void *)0);
          logmsg(5, "BIO_do_handshake with %s failed: %s", (const void *)buf, return_value_ERR_error_string_57);
          err_reply(cl, h503, lstn->err503);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

      }

      struct bio_method_st *return_value_BIO_f_buffer_60;
      return_value_BIO_f_buffer_60=BIO_f_buffer();
      bb=BIO_new(return_value_BIO_f_buffer_60);
      if(bb == ((struct bio_st *)NULL))
      {
        unsigned long int return_value_pthread_self_59;
        return_value_pthread_self_59=pthread_self();
        logmsg(4, "(%lx) e503 BIO_new(buffer) server failed", return_value_pthread_self_59);
        err_reply(cl, h503, lstn->err503);
        free_headers(headers);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

      BIO_ctrl(bb, 117, (signed long int)8192, (void *)0);
      BIO_ctrl(bb, 9, (signed long int)0x01, (void *)0);
      be=BIO_push(bb, be);
    }
    cur_backend = backend;
    if(!(be == ((struct bio_st *)NULL)))
    {
      if(!(cur_backend->be_type == 0))
      {
        BIO_ctrl(be, 1, (signed long int)0, (void *)0);
        BIO_free_all(be);
        be = (struct bio_st *)(void *)0;
      }

    }

    if(cur_backend->be_type == 0)
    {
      n = 0;
      do
      {
        if(!(n >= 128))
          tmp_if_expr_61 = headers[(signed long int)n] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_61 = (_Bool)0;
        if(!tmp_if_expr_61)
          break;

        if(!(headers_ok[(signed long int)n] == 0))
        {
          if(!(lstn->rewr_dest == 0))
          {
            return_value_check_header_67=check_header(headers[(signed long int)n], buf);
            if(return_value_check_header_67 == 10)
            {
              signed int return_value_pcreposix_regexec_63;
              return_value_pcreposix_regexec_63=pcreposix_regexec(&LOCATION, buf, (unsigned long int)4, do_http__1__matches, 0);
              if(!(return_value_pcreposix_regexec_63 == 0))
              {
                unsigned long int return_value_pthread_self_62;
                return_value_pthread_self_62=pthread_self();
                logmsg(5, "(%lx) Can't parse Destination %s", return_value_pthread_self_62, (const void *)buf);
                break;
              }

              addr2str(caddr, 8192 - 1, &cur_backend->addr, 0);
              strcpy(loc_path, buf + (signed long int)do_http__1__matches[(signed long int)3].rm_so);
              snprintf(buf, (unsigned long int)8192, "Destination: http://%s%s", (const void *)caddr, (const void *)loc_path);
              free((void *)headers[(signed long int)n]);
              headers[(signed long int)n]=strdup(buf);
              if(headers[(signed long int)n] == ((char *)NULL))
              {
                unsigned long int return_value_pthread_self_64;
                return_value_pthread_self_64=pthread_self();
                signed int *return_value___errno_location_65;
                return_value___errno_location_65=__errno_location();
                char *return_value_strerror_66;
                return_value_strerror_66=strerror(*return_value___errno_location_65);
                logmsg(4, "(%lx) rewrite Destination - out of memory: %s", return_value_pthread_self_64, return_value_strerror_66);
                free_headers(headers);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

            }

          }

          signed int return_value_BIO_printf_71;
          return_value_BIO_printf_71=BIO_printf(be, "%s\r\n", headers[(signed long int)n]);
          if(!(return_value_BIO_printf_71 >= 1))
          {
            addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
            end_req=cur_time();
            unsigned long int return_value_pthread_self_68;
            return_value_pthread_self_68=pthread_self();
            signed int *return_value___errno_location_69;
            return_value___errno_location_69=__errno_location();
            char *return_value_strerror_70;
            return_value_strerror_70=strerror(*return_value___errno_location_69);
            logmsg(4, "(%lx) e500 error write to %s/%s: %s (%.3f sec)", return_value_pthread_self_68, (const void *)buf, (const void *)request, return_value_strerror_70, (end_req - start_req) / 1000000.0);
            err_reply(cl, h500, lstn->err500);
            free_headers(headers);
            if(!(ssl == ((struct ssl_st *)NULL)))
              BIO_ssl_shutdown(cl);

            if(!(be == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(be, 11, (signed long int)0, (void *)0);
              BIO_ctrl(be, 1, (signed long int)0, (void *)0);
              BIO_free_all(be);
              be = (struct bio_st *)(void *)0;
            }

            if(!(cl == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
              BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
              BIO_free_all(cl);
              cl = (struct bio_st *)(void *)0;
            }

            if(!(x509 == ((struct x509_st *)NULL)))
            {
              X509_free(x509);
              x509 = (struct x509_st *)(void *)0;
            }

            if(!(ssl == ((struct ssl_st *)NULL)))
            {
              ERR_clear_error();
              ERR_remove_state((unsigned long int)0);
            }

            goto __CPROVER_DUMP_L488;
          }

        }

        n = n + 1;
      }
      while((_Bool)1);
      if(!(lstn->add_head == ((char *)NULL)))
      {
        return_value_BIO_printf_75=BIO_printf(be, "%s\r\n", lstn->add_head);
        if(!(return_value_BIO_printf_75 >= 1))
        {
          addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
          end_req=cur_time();
          unsigned long int return_value_pthread_self_72;
          return_value_pthread_self_72=pthread_self();
          signed int *return_value___errno_location_73;
          return_value___errno_location_73=__errno_location();
          char *return_value_strerror_74;
          return_value_strerror_74=strerror(*return_value___errno_location_73);
          logmsg(4, "(%lx) e500 error write AddHeader to %s: %s (%.3f sec)", return_value_pthread_self_72, (const void *)buf, return_value_strerror_74, (end_req - start_req) / 1000000.0);
          err_reply(cl, h500, lstn->err500);
          free_headers(headers);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

      }

    }

    free_headers(headers);
    if(cur_backend->be_type == 0)
    {
      if(!(ssl == ((struct ssl_st *)NULL)))
      {
        struct ssl_cipher_st *cipher;
        cipher=SSL_get_current_cipher(ssl);
        if(!(cipher == ((struct ssl_cipher_st *)NULL)))
        {
          SSL_CIPHER_description(cipher, buf, 8192 - 1);
          strip_eol(buf);
          signed int return_value_BIO_printf_79;
          return_value_BIO_printf_79=BIO_printf(be, "X-SSL-cipher: %s\r\n", (const void *)buf);
          if(!(return_value_BIO_printf_79 >= 1))
          {
            addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
            end_req=cur_time();
            unsigned long int return_value_pthread_self_76;
            return_value_pthread_self_76=pthread_self();
            signed int *return_value___errno_location_77;
            return_value___errno_location_77=__errno_location();
            char *return_value_strerror_78;
            return_value_strerror_78=strerror(*return_value___errno_location_77);
            logmsg(4, "(%lx) e500 error write X-SSL-cipher to %s: %s (%.3f sec)", return_value_pthread_self_76, (const void *)buf, return_value_strerror_78, (end_req - start_req) / 1000000.0);
            err_reply(cl, h500, lstn->err500);
            if(!(ssl == ((struct ssl_st *)NULL)))
              BIO_ssl_shutdown(cl);

            if(!(be == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(be, 11, (signed long int)0, (void *)0);
              BIO_ctrl(be, 1, (signed long int)0, (void *)0);
              BIO_free_all(be);
              be = (struct bio_st *)(void *)0;
            }

            if(!(cl == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
              BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
              BIO_free_all(cl);
              cl = (struct bio_st *)(void *)0;
            }

            if(!(x509 == ((struct x509_st *)NULL)))
            {
              X509_free(x509);
              x509 = (struct x509_st *)(void *)0;
            }

            if(!(ssl == ((struct ssl_st *)NULL)))
            {
              ERR_clear_error();
              ERR_remove_state((unsigned long int)0);
            }

            goto __CPROVER_DUMP_L488;
          }

        }

        if(lstn->clnt_check >= 1)
        {
          if(!(x509 == ((struct x509_st *)NULL)))
          {
            return_value_BIO_s_mem_113=BIO_s_mem();
            bb=BIO_new(return_value_BIO_s_mem_113);
            if(!(bb == ((struct bio_st *)NULL)))
            {
              struct X509_name_st *return_value_X509_get_subject_name_80;
              return_value_X509_get_subject_name_80=X509_get_subject_name(x509);
              X509_NAME_print_ex(bb, return_value_X509_get_subject_name_80, 8, (unsigned long int)((1 | 2 | 4 | 0x10 | 0x100 | 0x200 | 8 | 2 << 16 | 1 << 23 | 0) & ~4));
              get_line(bb, buf, 8192);
              signed int return_value_BIO_printf_84;
              return_value_BIO_printf_84=BIO_printf(be, "X-SSL-Subject: %s\r\n", (const void *)buf);
              if(!(return_value_BIO_printf_84 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_81;
                return_value_pthread_self_81=pthread_self();
                signed int *return_value___errno_location_82;
                return_value___errno_location_82=__errno_location();
                char *return_value_strerror_83;
                return_value_strerror_83=strerror(*return_value___errno_location_82);
                logmsg(4, "(%lx) e500 error write X-SSL-Subject to %s: %s (%.3f sec)", return_value_pthread_self_81, (const void *)buf, return_value_strerror_83, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              struct X509_name_st *return_value_X509_get_issuer_name_85;
              return_value_X509_get_issuer_name_85=X509_get_issuer_name(x509);
              X509_NAME_print_ex(bb, return_value_X509_get_issuer_name_85, 8, (unsigned long int)((1 | 2 | 4 | 0x10 | 0x100 | 0x200 | 8 | 2 << 16 | 1 << 23 | 0) & ~4));
              get_line(bb, buf, 8192);
              signed int return_value_BIO_printf_89;
              return_value_BIO_printf_89=BIO_printf(be, "X-SSL-Issuer: %s\r\n", (const void *)buf);
              if(!(return_value_BIO_printf_89 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_86;
                return_value_pthread_self_86=pthread_self();
                signed int *return_value___errno_location_87;
                return_value___errno_location_87=__errno_location();
                char *return_value_strerror_88;
                return_value_strerror_88=strerror(*return_value___errno_location_87);
                logmsg(4, "(%lx) e500 error write X-SSL-Issuer to %s: %s (%.3f sec)", return_value_pthread_self_86, (const void *)buf, return_value_strerror_88, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              ASN1_TIME_print(bb, x509->cert_info->validity->notBefore);
              get_line(bb, buf, 8192);
              signed int return_value_BIO_printf_93;
              return_value_BIO_printf_93=BIO_printf(be, "X-SSL-notBefore: %s\r\n", (const void *)buf);
              if(!(return_value_BIO_printf_93 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_90;
                return_value_pthread_self_90=pthread_self();
                signed int *return_value___errno_location_91;
                return_value___errno_location_91=__errno_location();
                char *return_value_strerror_92;
                return_value_strerror_92=strerror(*return_value___errno_location_91);
                logmsg(4, "(%lx) e500 error write X-SSL-notBefore to %s: %s (%.3f sec)", return_value_pthread_self_90, (const void *)buf, return_value_strerror_92, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              ASN1_TIME_print(bb, x509->cert_info->validity->notAfter);
              get_line(bb, buf, 8192);
              signed int return_value_BIO_printf_97;
              return_value_BIO_printf_97=BIO_printf(be, "X-SSL-notAfter: %s\r\n", (const void *)buf);
              if(!(return_value_BIO_printf_97 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_94;
                return_value_pthread_self_94=pthread_self();
                signed int *return_value___errno_location_95;
                return_value___errno_location_95=__errno_location();
                char *return_value_strerror_96;
                return_value_strerror_96=strerror(*return_value___errno_location_95);
                logmsg(4, "(%lx) e500 error write X-SSL-notAfter to %s: %s (%.3f sec)", return_value_pthread_self_94, (const void *)buf, return_value_strerror_96, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              struct asn1_string_st *return_value_X509_get_serialNumber_101;
              return_value_X509_get_serialNumber_101=X509_get_serialNumber(x509);
              signed long int return_value_ASN1_INTEGER_get_102;
              return_value_ASN1_INTEGER_get_102=ASN1_INTEGER_get(return_value_X509_get_serialNumber_101);
              signed int return_value_BIO_printf_103;
              return_value_BIO_printf_103=BIO_printf(be, "X-SSL-serial: %ld\r\n", return_value_ASN1_INTEGER_get_102);
              if(!(return_value_BIO_printf_103 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_98;
                return_value_pthread_self_98=pthread_self();
                signed int *return_value___errno_location_99;
                return_value___errno_location_99=__errno_location();
                char *return_value_strerror_100;
                return_value_strerror_100=strerror(*return_value___errno_location_99);
                logmsg(4, "(%lx) e500 error write X-SSL-serial to %s: %s (%.3f sec)", return_value_pthread_self_98, (const void *)buf, return_value_strerror_100, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              PEM_write_bio_X509(bb, x509);
              get_line(bb, buf, 8192);
              signed int return_value_BIO_printf_107;
              return_value_BIO_printf_107=BIO_printf(be, "X-SSL-certificate: %s\r\n", (const void *)buf);
              if(!(return_value_BIO_printf_107 >= 1))
              {
                addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                end_req=cur_time();
                unsigned long int return_value_pthread_self_104;
                return_value_pthread_self_104=pthread_self();
                signed int *return_value___errno_location_105;
                return_value___errno_location_105=__errno_location();
                char *return_value_strerror_106;
                return_value_strerror_106=strerror(*return_value___errno_location_105);
                logmsg(4, "(%lx) e500 error write X-SSL-certificate to %s: %s (%.3f sec)", return_value_pthread_self_104, (const void *)buf, return_value_strerror_106, (end_req - start_req) / 1000000.0);
                err_reply(cl, h500, lstn->err500);
                BIO_free_all(bb);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                goto __CPROVER_DUMP_L488;
              }

              do
              {
                return_value_get_line_108=get_line(bb, buf, 8192);
                if(!(return_value_get_line_108 == 0))
                  break;

                signed int return_value_BIO_printf_112;
                return_value_BIO_printf_112=BIO_printf(be, "\t%s\r\n", (const void *)buf);
                if(!(return_value_BIO_printf_112 >= 1))
                {
                  addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
                  end_req=cur_time();
                  unsigned long int return_value_pthread_self_109;
                  return_value_pthread_self_109=pthread_self();
                  signed int *return_value___errno_location_110;
                  return_value___errno_location_110=__errno_location();
                  char *return_value_strerror_111;
                  return_value_strerror_111=strerror(*return_value___errno_location_110);
                  logmsg(4, "(%lx) e500 error write X-SSL-certificate to %s: %s (%.3f sec)", return_value_pthread_self_109, (const void *)buf, return_value_strerror_111, (end_req - start_req) / 1000000.0);
                  err_reply(cl, h500, lstn->err500);
                  BIO_free_all(bb);
                  if(!(ssl == ((struct ssl_st *)NULL)))
                    BIO_ssl_shutdown(cl);

                  if(!(be == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                    BIO_free_all(be);
                    be = (struct bio_st *)(void *)0;
                  }

                  if(!(cl == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                    BIO_free_all(cl);
                    cl = (struct bio_st *)(void *)0;
                  }

                  if(!(x509 == ((struct x509_st *)NULL)))
                  {
                    X509_free(x509);
                    x509 = (struct x509_st *)(void *)0;
                  }

                  if(!(ssl == ((struct ssl_st *)NULL)))
                  {
                    ERR_clear_error();
                    ERR_remove_state((unsigned long int)0);
                  }

                  goto __CPROVER_DUMP_L488;
                }

              }
              while((_Bool)1);
              BIO_free_all(bb);
            }

          }

        }

      }

    }

    if(cur_backend->be_type == 0)
    {
      addr2str(caddr, 8192 - 1, &from_host, 1);
      BIO_printf(be, "X-Forwarded-For: %s\r\n", (const void *)caddr);
      BIO_puts(be, "\r\n");
    }

    if(!(chunked == 0) && !(cl_11 == 0))
    {
      signed int return_value_copy_chunks_115;
      return_value_copy_chunks_115=copy_chunks(cl, be, (signed long long int *)(void *)0, cur_backend->be_type, lstn->max_req);
      if(!(return_value_copy_chunks_115 == 0))
      {
        addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
        end_req=cur_time();
        addr2str(caddr, 8192 - 1, &from_host, 1);
        unsigned long int return_value_pthread_self_114;
        return_value_pthread_self_114=pthread_self();
        logmsg(5, "(%lx) e500 for %s copy_chunks to %s/%s (%.3f sec)", return_value_pthread_self_114, (const void *)caddr, (const void *)buf, (const void *)request, (end_req - start_req) / 1000000.0);
        err_reply(cl, h500, lstn->err500);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

    }

    else
      if(cont >= 1ll && !(is_rpc == 1))
      {
        signed int return_value_copy_bin_119;
        return_value_copy_bin_119=copy_bin(cl, be, cont, (signed long long int *)(void *)0, cur_backend->be_type);
        if(!(return_value_copy_bin_119 == 0))
        {
          addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
          end_req=cur_time();
          addr2str(caddr, 8192 - 1, &from_host, 1);
          unsigned long int return_value_pthread_self_116;
          return_value_pthread_self_116=pthread_self();
          signed int *return_value___errno_location_117;
          return_value___errno_location_117=__errno_location();
          char *return_value_strerror_118;
          return_value_strerror_118=strerror(*return_value___errno_location_117);
          logmsg(5, "(%lx) e500 for %s error copy client cont to %s/%s: %s (%.3f sec)", return_value_pthread_self_116, (const void *)caddr, (const void *)buf, (const void *)request, return_value_strerror_118, (end_req - start_req) / 1000000.0);
          err_reply(cl, h500, lstn->err500);
          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

      }

      else
        if(cont >= 1l)
        {
          return_value_is_readable_140=is_readable(cl, lstn->to);
          if(!(return_value_is_readable_140 == 0))
          {
            char one;
            struct bio_st *cl_unbuf;
            be_11 = 0;
            cl_11 = be_11;
            do
            {
              return_value_BIO_ctrl_120=BIO_ctrl(cl, 10, (signed long int)0, (void *)0);
              if((signed int)return_value_BIO_ctrl_120 == 0)
                break;

              signed int return_value_BIO_read_124;
              return_value_BIO_read_124=BIO_read(cl, (void *)&one, 1);
              if(!(return_value_BIO_read_124 == 1))
              {
                unsigned long int return_value_pthread_self_121;
                return_value_pthread_self_121=pthread_self();
                signed int *return_value___errno_location_122;
                return_value___errno_location_122=__errno_location();
                char *return_value_strerror_123;
                return_value_strerror_123=strerror(*return_value___errno_location_122);
                logmsg(5, "(%lx) error read request pending: %s", return_value_pthread_self_121, return_value_strerror_123);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                pthread_exit((void *)0);
              }

              res_bytes = res_bytes + 1ll;
              if(!(cont >= res_bytes))
              {
                unsigned long int return_value_pthread_self_125;
                return_value_pthread_self_125=pthread_self();
                logmsg(5, "(%lx) error read request pending: max. RPC length exceeded", return_value_pthread_self_125);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                pthread_exit((void *)0);
              }

              signed int return_value_BIO_write_130;
              return_value_BIO_write_130=BIO_write(be, (const void *)&one, 1);
              if(!(return_value_BIO_write_130 == 1))
              {
                signed int *return_value___errno_location_129;
                return_value___errno_location_129=__errno_location();
                if(!(*return_value___errno_location_129 == 0))
                {
                  return_value_pthread_self_126=pthread_self();
                  return_value___errno_location_127=__errno_location();
                  return_value_strerror_128=strerror(*return_value___errno_location_127);
                  logmsg(5, "(%lx) error write request pending: %s", return_value_pthread_self_126, return_value_strerror_128);
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                pthread_exit((void *)0);
              }

            }
            while((_Bool)1);
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            cl_unbuf=BIO_find_type(cl, lstn->ctx != ((struct _pound_ctx *)NULL) ? 7 | 0x0200 : 5 | 0x0400 | 0x0100);
            if(cl_unbuf == ((struct bio_st *)NULL))
            {
              unsigned long int return_value_pthread_self_131;
              return_value_pthread_self_131=pthread_self();
              signed int *return_value___errno_location_132;
              return_value___errno_location_132=__errno_location();
              char *return_value_strerror_133;
              return_value_strerror_133=strerror(*return_value___errno_location_132);
              logmsg(4, "(%lx) error get unbuffered: %s", return_value_pthread_self_131, return_value_strerror_133);
              if(!(ssl == ((struct ssl_st *)NULL)))
                BIO_ssl_shutdown(cl);

              if(!(be == ((struct bio_st *)NULL)))
              {
                BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                BIO_free_all(be);
                be = (struct bio_st *)(void *)0;
              }

              if(!(cl == ((struct bio_st *)NULL)))
              {
                BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                BIO_free_all(cl);
                cl = (struct bio_st *)(void *)0;
              }

              if(!(x509 == ((struct x509_st *)NULL)))
              {
                X509_free(x509);
                x509 = (struct x509_st *)(void *)0;
              }

              if(!(ssl == ((struct ssl_st *)NULL)))
              {
                ERR_clear_error();
                ERR_remove_state((unsigned long int)0);
              }

              pthread_exit((void *)0);
            }

            do
            {
              res=BIO_read(cl_unbuf, (void *)buf, 8192);
              if(!(res >= 1))
                break;

              res_bytes = res_bytes + (signed long long int)res;
              if(!(cont >= res_bytes))
              {
                unsigned long int return_value_pthread_self_134;
                return_value_pthread_self_134=pthread_self();
                logmsg(5, "(%lx) error copy request body: max. RPC length exceeded", return_value_pthread_self_134);
                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                pthread_exit((void *)0);
              }

              signed int return_value_BIO_write_139;
              return_value_BIO_write_139=BIO_write(be, (const void *)buf, res);
              if(!(return_value_BIO_write_139 == res))
              {
                signed int *return_value___errno_location_138;
                return_value___errno_location_138=__errno_location();
                if(!(*return_value___errno_location_138 == 0))
                {
                  return_value_pthread_self_135=pthread_self();
                  return_value___errno_location_136=__errno_location();
                  return_value_strerror_137=strerror(*return_value___errno_location_136);
                  logmsg(5, "(%lx) error copy request body: %s", return_value_pthread_self_135, return_value_strerror_137);
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                  BIO_ssl_shutdown(cl);

                if(!(be == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                  BIO_free_all(be);
                  be = (struct bio_st *)(void *)0;
                }

                if(!(cl == ((struct bio_st *)NULL)))
                {
                  BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                  BIO_free_all(cl);
                  cl = (struct bio_st *)(void *)0;
                }

                if(!(x509 == ((struct x509_st *)NULL)))
                {
                  X509_free(x509);
                  x509 = (struct x509_st *)(void *)0;
                }

                if(!(ssl == ((struct ssl_st *)NULL)))
                {
                  ERR_clear_error();
                  ERR_remove_state((unsigned long int)0);
                }

                pthread_exit((void *)0);
              }

              else
                BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            }
            while((_Bool)1);
          }

        }

    if(cur_backend->be_type == 0)
    {
      return_value_BIO_ctrl_144=BIO_ctrl(be, 11, (signed long int)0, (void *)0);
      if(!((signed int)return_value_BIO_ctrl_144 == 1))
      {
        addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
        end_req=cur_time();
        addr2str(caddr, 8192 - 1, &from_host, 1);
        unsigned long int return_value_pthread_self_141;
        return_value_pthread_self_141=pthread_self();
        signed int *return_value___errno_location_142;
        return_value___errno_location_142=__errno_location();
        char *return_value_strerror_143;
        return_value_strerror_143=strerror(*return_value___errno_location_142);
        logmsg(5, "(%lx) e500 for %s error flush to %s/%s: %s (%.3f sec)", return_value_pthread_self_141, (const void *)caddr, (const void *)buf, (const void *)request, return_value_strerror_143, (end_req - start_req) / 1000000.0);
        err_reply(cl, h500, lstn->err500);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

    }

    switch(lstn->noHTTPS11)
    {
      case 1:
      {
        force_10 = (signed int)(ssl != (struct ssl_st *)(void *)0);
        break;
      }
      case 2:
      {
        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          return_value_strstr_145=strstr(u_agent, "MSIE");
          tmp_if_expr_146 = return_value_strstr_145 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_146 = (_Bool)0;
        force_10 = (signed int)tmp_if_expr_146;
        break;
      }
      default:
        force_10 = 0;
    }
    if(!(cur_backend->be_type == 0))
    {
      memset((void *)buf, 0, sizeof(char [8192l]) /*8192ul*/ );
      if(cur_backend->redir_req == 0)
        snprintf(buf, sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)1, "%s%s", cur_backend->url, (const void *)url);

      else
        strncpy(buf, cur_backend->url, sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)1);
      redirect_reply(cl, buf, cur_backend->be_type);
      addr2str(caddr, 8192 - 1, &from_host, 1);
      switch(lstn->log_level)
      {
        case 0:
          goto __CPROVER_DUMP_L318;
        case 1:

        case 2:
        {
          logmsg(6, "%s %s - REDIRECT %s", (const void *)caddr, (const void *)request, (const void *)buf);
          goto __CPROVER_DUMP_L318;
        }
        case 3:
        {
          if(!(v_host[0l] == 0))
          {
            if(!(u_name[0l] == 0))
              tmp_if_expr_147 = u_name;

            else
              tmp_if_expr_147 = "-";
            logmsg(6, "%s %s - %s [%s] \"%s\" %d 0 \"%s\" \"%s\"", (const void *)v_host, (const void *)caddr, tmp_if_expr_147, (const void *)req_time, (const void *)request, cur_backend->be_type, (const void *)referer, (const void *)u_agent);
          }

          else
          {
            if(!(u_name[0l] == 0))
              tmp_if_expr_148 = u_name;

            else
              tmp_if_expr_148 = "-";
            logmsg(6, "%s - %s [%s] \"%s\" %d 0 \"%s\" \"%s\"", (const void *)caddr, tmp_if_expr_148, (const void *)req_time, (const void *)request, cur_backend->be_type, (const void *)referer, (const void *)u_agent);
          }
          goto __CPROVER_DUMP_L318;
        }
        case 4:

        case 5:
        {
          if(!(u_name[0l] == 0))
            tmp_if_expr_149 = u_name;

          else
            tmp_if_expr_149 = "-";
          logmsg(6, "%s - %s [%s] \"%s\" %d 0 \"%s\" \"%s\"", (const void *)caddr, tmp_if_expr_149, (const void *)req_time, (const void *)request, cur_backend->be_type, (const void *)referer, (const void *)u_agent);
        }
        default:
        {

        __CPROVER_DUMP_L318:
          ;
          if(cl_11 == 0 || !(conn_closed == 0) || !(force_10 == 0))
            goto __CPROVER_DUMP_L481;

          goto __CPROVER_DUMP_L480;
        }
      }
    }

    else
      if(is_rpc == 1)
      {
        end_req=cur_time();
        memset((void *)s_res_bytes, 0, (unsigned long int)32);
        log_bytes(s_res_bytes, res_bytes);
        addr2str(caddr, 8192 - 1, &from_host, 1);
        addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
        switch(lstn->log_level)
        {
          case 0:
            break;
          case 1:
          {
            logmsg(6, "%s %s - -", (const void *)caddr, (const void *)request);
            break;
          }
          case 2:
          {
            if(!(v_host[0l] == 0))
            {
              if(!(svc->name[0l] == 0))
                tmp_if_expr_150 = svc->name;

              else
                tmp_if_expr_150 = "-";
              logmsg(6, "%s %s - - (%s/%s -> %s) %.3f sec", (const void *)caddr, (const void *)request, (const void *)v_host, tmp_if_expr_150, (const void *)buf, (end_req - start_req) / 1000000.0);
            }

            else
            {
              if(!(svc->name[0l] == 0))
                tmp_if_expr_151 = svc->name;

              else
                tmp_if_expr_151 = "-";
              logmsg(6, "%s %s - - (%s -> %s) %.3f sec", (const void *)caddr, (const void *)request, tmp_if_expr_151, (const void *)buf, (end_req - start_req) / 1000000.0);
            }
            break;
          }
          case 3:
          {
            if(!(v_host[0l] == 0))
              tmp_if_expr_152 = v_host;

            else
              tmp_if_expr_152 = "-";
            if(!(u_name[0l] == 0))
              tmp_if_expr_153 = u_name;

            else
              tmp_if_expr_153 = "-";
            logmsg(6, "%s %s - %s [%s] \"%s\" 000 %s \"%s\" \"%s\"", tmp_if_expr_152, (const void *)caddr, tmp_if_expr_153, (const void *)req_time, (const void *)request, (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent);
            break;
          }
          case 4:
          {
            if(!(u_name[0l] == 0))
              tmp_if_expr_154 = u_name;

            else
              tmp_if_expr_154 = "-";
            logmsg(6, "%s - %s [%s] \"%s\" 000 %s \"%s\" \"%s\"", (const void *)caddr, tmp_if_expr_154, (const void *)req_time, (const void *)request, (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent);
            break;
          }
          case 5:
          {
            if(!(v_host[0l] == 0))
              tmp_if_expr_155 = v_host;

            else
              tmp_if_expr_155 = "-";
            if(!(u_name[0l] == 0))
              tmp_if_expr_156 = u_name;

            else
              tmp_if_expr_156 = "-";
            if(!(svc->name[0l] == 0))
              tmp_if_expr_157 = svc->name;

            else
              tmp_if_expr_157 = "-";
            logmsg(6, "%s %s - %s [%s] \"%s\" 000 %s \"%s\" \"%s\" (%s -> %s) %.3f sec", tmp_if_expr_155, (const void *)caddr, tmp_if_expr_156, (const void *)req_time, (const void *)request, (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent, tmp_if_expr_157, (const void *)buf, (end_req - start_req) / 1000000.0);
          }
        }
        break;
      }

    skip = 1;
    while(!(skip == 0))
    {
      headers=get_headers(be, cl, lstn);
      if(headers == ((char **)NULL))
      {
        addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
        end_req=cur_time();
        addr2str(caddr, 8192 - 1, &from_host, 1);
        unsigned long int return_value_pthread_self_158;
        return_value_pthread_self_158=pthread_self();
        signed int *return_value___errno_location_159;
        return_value___errno_location_159=__errno_location();
        char *return_value_strerror_160;
        return_value_strerror_160=strerror(*return_value___errno_location_159);
        logmsg(5, "(%lx) e500 for %s response error read from %s/%s: %s (%.3f secs)", return_value_pthread_self_158, (const void *)caddr, (const void *)buf, (const void *)request, return_value_strerror_160, (end_req - start_req) / 1000000.0);
        err_reply(cl, h500, lstn->err500);
        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

      strncpy(response, headers[(signed long int)0], (unsigned long int)8192);
      be_11 = (signed int)((signed int)response[(signed long int)7] == 49);
      signed int return_value_pcreposix_regexec_161;
      return_value_pcreposix_regexec_161=pcreposix_regexec(&RESP_SKIP, response, (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
      skip = (signed int)!(return_value_pcreposix_regexec_161 != 0);
      if(no_cont == 0)
      {
        return_value_pcreposix_regexec_162=pcreposix_regexec(&RESP_IGN, response, (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
        if(return_value_pcreposix_regexec_162 == 0)
          no_cont = 1;

      }

      chunked = 0;
      cont = -1L;
      n = 1;
      do
      {
        if(!(n >= 128))
          tmp_if_expr_163 = headers[(signed long int)n] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_163 = (_Bool)0;
        if(!tmp_if_expr_163)
          break;

        signed int return_value_check_header_164;
        return_value_check_header_164=check_header(headers[(signed long int)n], buf);
        switch(return_value_check_header_164)
        {
          case 3:
          {
            return_value_strcasecmp_165=strcasecmp("close", buf);
            if(return_value_strcasecmp_165 == 0)
              conn_closed = 1;

            break;
          }
          case 1:
          {
            return_value_strcasecmp_166=strcasecmp("chunked", buf);
            if(return_value_strcasecmp_166 == 0)
            {
              chunked = 1;
              no_cont = 0;
            }

            break;
          }
          case 2:
          {
            cont=atoll(buf);
            if(is_rpc == 0 && cont == 0x40000000L)
              cont = -1L;

            break;
          }
          case 4:
          {
            if(!(v_host[0l] == 0))
            {
              return_value_need_rewrite_170=need_rewrite(lstn->rewr_loc, buf, loc_path, v_host, lstn, cur_backend);
              if(!(return_value_need_rewrite_170 == 0))
              {
                snprintf(buf, (unsigned long int)8192, "Location: %s://%s/%s", ssl == (struct ssl_st *)(void *)0 ? "http" : "https", (const void *)v_host, (const void *)loc_path);
                free((void *)headers[(signed long int)n]);
                headers[(signed long int)n]=strdup(buf);
                if(headers[(signed long int)n] == ((char *)NULL))
                {
                  unsigned long int return_value_pthread_self_167;
                  return_value_pthread_self_167=pthread_self();
                  signed int *return_value___errno_location_168;
                  return_value___errno_location_168=__errno_location();
                  char *return_value_strerror_169;
                  return_value_strerror_169=strerror(*return_value___errno_location_168);
                  logmsg(4, "(%lx) rewrite Location - out of memory: %s", return_value_pthread_self_167, return_value_strerror_169);
                  free_headers(headers);
                  if(!(ssl == ((struct ssl_st *)NULL)))
                    BIO_ssl_shutdown(cl);

                  if(!(be == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                    BIO_free_all(be);
                    be = (struct bio_st *)(void *)0;
                  }

                  if(!(cl == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                    BIO_free_all(cl);
                    cl = (struct bio_st *)(void *)0;
                  }

                  if(!(x509 == ((struct x509_st *)NULL)))
                  {
                    X509_free(x509);
                    x509 = (struct x509_st *)(void *)0;
                  }

                  if(!(ssl == ((struct ssl_st *)NULL)))
                  {
                    ERR_clear_error();
                    ERR_remove_state((unsigned long int)0);
                  }

                  goto __CPROVER_DUMP_L488;
                }

              }

            }

            break;
          }
          case 5:
            if(!(v_host[0l] == 0))
            {
              return_value_need_rewrite_174=need_rewrite(lstn->rewr_loc, buf, loc_path, v_host, lstn, cur_backend);
              if(!(return_value_need_rewrite_174 == 0))
              {
                snprintf(buf, (unsigned long int)8192, "Content-location: %s://%s/%s", ssl == (struct ssl_st *)(void *)0 ? "http" : "https", (const void *)v_host, (const void *)loc_path);
                free((void *)headers[(signed long int)n]);
                headers[(signed long int)n]=strdup(buf);
                if(headers[(signed long int)n] == ((char *)NULL))
                {
                  unsigned long int return_value_pthread_self_171;
                  return_value_pthread_self_171=pthread_self();
                  signed int *return_value___errno_location_172;
                  return_value___errno_location_172=__errno_location();
                  char *return_value_strerror_173;
                  return_value_strerror_173=strerror(*return_value___errno_location_172);
                  logmsg(4, "(%lx) rewrite Content-location - out of memory: %s", return_value_pthread_self_171, return_value_strerror_173);
                  free_headers(headers);
                  if(!(ssl == ((struct ssl_st *)NULL)))
                    BIO_ssl_shutdown(cl);

                  if(!(be == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                    BIO_free_all(be);
                    be = (struct bio_st *)(void *)0;
                  }

                  if(!(cl == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                    BIO_free_all(cl);
                    cl = (struct bio_st *)(void *)0;
                  }

                  if(!(x509 == ((struct x509_st *)NULL)))
                  {
                    X509_free(x509);
                    x509 = (struct x509_st *)(void *)0;
                  }

                  if(!(ssl == ((struct ssl_st *)NULL)))
                  {
                    ERR_clear_error();
                    ERR_remove_state((unsigned long int)0);
                  }

                  goto __CPROVER_DUMP_L488;
                }

              }

            }

        }
        n = n + 1;
      }
      while((_Bool)1);
      upd_session(svc, &headers[(signed long int)1], cur_backend);
      if(skip == 0)
      {
        n = 0;
        do
        {
          if(!(n >= 128))
            tmp_if_expr_175 = headers[(signed long int)n] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_175 = (_Bool)0;
          if(!tmp_if_expr_175)
            break;

          signed int return_value_BIO_printf_180;
          return_value_BIO_printf_180=BIO_printf(cl, "%s\r\n", headers[(signed long int)n]);
          if(!(return_value_BIO_printf_180 >= 1))
          {
            signed int *return_value___errno_location_179;
            return_value___errno_location_179=__errno_location();
            if(!(*return_value___errno_location_179 == 0))
            {
              addr2str(caddr, 8192 - 1, &from_host, 1);
              unsigned long int return_value_pthread_self_176;
              return_value_pthread_self_176=pthread_self();
              signed int *return_value___errno_location_177;
              return_value___errno_location_177=__errno_location();
              char *return_value_strerror_178;
              return_value_strerror_178=strerror(*return_value___errno_location_177);
              logmsg(5, "(%lx) error write to %s: %s", return_value_pthread_self_176, (const void *)caddr, return_value_strerror_178);
            }

            free_headers(headers);
            if(!(ssl == ((struct ssl_st *)NULL)))
              BIO_ssl_shutdown(cl);

            if(!(be == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(be, 11, (signed long int)0, (void *)0);
              BIO_ctrl(be, 1, (signed long int)0, (void *)0);
              BIO_free_all(be);
              be = (struct bio_st *)(void *)0;
            }

            if(!(cl == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
              BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
              BIO_free_all(cl);
              cl = (struct bio_st *)(void *)0;
            }

            if(!(x509 == ((struct x509_st *)NULL)))
            {
              X509_free(x509);
              x509 = (struct x509_st *)(void *)0;
            }

            if(!(ssl == ((struct ssl_st *)NULL)))
            {
              ERR_clear_error();
              ERR_remove_state((unsigned long int)0);
            }

            goto __CPROVER_DUMP_L488;
          }

          n = n + 1;
        }
        while((_Bool)1);
      }

      free_headers(headers);
      if(skip == 0)
        BIO_puts(cl, "\r\n");

      signed long int return_value_BIO_ctrl_185;
      return_value_BIO_ctrl_185=BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
      if(!((signed int)return_value_BIO_ctrl_185 == 1))
      {
        signed int *return_value___errno_location_184;
        return_value___errno_location_184=__errno_location();
        if(!(*return_value___errno_location_184 == 0))
        {
          addr2str(caddr, 8192 - 1, &from_host, 1);
          unsigned long int return_value_pthread_self_181;
          return_value_pthread_self_181=pthread_self();
          signed int *return_value___errno_location_182;
          return_value___errno_location_182=__errno_location();
          char *return_value_strerror_183;
          return_value_strerror_183=strerror(*return_value___errno_location_182);
          logmsg(5, "(%lx) error flush headers to %s: %s", return_value_pthread_self_181, (const void *)caddr, return_value_strerror_183);
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
          BIO_ssl_shutdown(cl);

        if(!(be == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(be, 11, (signed long int)0, (void *)0);
          BIO_ctrl(be, 1, (signed long int)0, (void *)0);
          BIO_free_all(be);
          be = (struct bio_st *)(void *)0;
        }

        if(!(cl == ((struct bio_st *)NULL)))
        {
          BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
          BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
          BIO_free_all(cl);
          cl = (struct bio_st *)(void *)0;
        }

        if(!(x509 == ((struct x509_st *)NULL)))
        {
          X509_free(x509);
          x509 = (struct x509_st *)(void *)0;
        }

        if(!(ssl == ((struct ssl_st *)NULL)))
        {
          ERR_clear_error();
          ERR_remove_state((unsigned long int)0);
        }

        goto __CPROVER_DUMP_L488;
      }

      if(no_cont == 0)
      {
        if(!(be_11 == 0) && !(chunked == 0))
        {
          signed int return_value_copy_chunks_186;
          return_value_copy_chunks_186=copy_chunks(be, cl, &res_bytes, skip, 0LL);
          if(!(return_value_copy_chunks_186 == 0))
          {
            if(!(ssl == ((struct ssl_st *)NULL)))
              BIO_ssl_shutdown(cl);

            if(!(be == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(be, 11, (signed long int)0, (void *)0);
              BIO_ctrl(be, 1, (signed long int)0, (void *)0);
              BIO_free_all(be);
              be = (struct bio_st *)(void *)0;
            }

            if(!(cl == ((struct bio_st *)NULL)))
            {
              BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
              BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
              BIO_free_all(cl);
              cl = (struct bio_st *)(void *)0;
            }

            if(!(x509 == ((struct x509_st *)NULL)))
            {
              X509_free(x509);
              x509 = (struct x509_st *)(void *)0;
            }

            if(!(ssl == ((struct ssl_st *)NULL)))
            {
              ERR_clear_error();
              ERR_remove_state((unsigned long int)0);
            }

            goto __CPROVER_DUMP_L488;
          }

        }

        else
          if(cont >= 0LL)
          {
            signed int return_value_copy_bin_191;
            return_value_copy_bin_191=copy_bin(be, cl, cont, &res_bytes, skip);
            if(!(return_value_copy_bin_191 == 0))
            {
              signed int *return_value___errno_location_190;
              return_value___errno_location_190=__errno_location();
              if(!(*return_value___errno_location_190 == 0))
              {
                return_value_pthread_self_187=pthread_self();
                return_value___errno_location_188=__errno_location();
                return_value_strerror_189=strerror(*return_value___errno_location_188);
                logmsg(5, "(%lx) error copy server cont: %s", return_value_pthread_self_187, return_value_strerror_189);
              }

              if(!(ssl == ((struct ssl_st *)NULL)))
                BIO_ssl_shutdown(cl);

              if(!(be == ((struct bio_st *)NULL)))
              {
                BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                BIO_free_all(be);
                be = (struct bio_st *)(void *)0;
              }

              if(!(cl == ((struct bio_st *)NULL)))
              {
                BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                BIO_free_all(cl);
                cl = (struct bio_st *)(void *)0;
              }

              if(!(x509 == ((struct x509_st *)NULL)))
              {
                X509_free(x509);
                x509 = (struct x509_st *)(void *)0;
              }

              if(!(ssl == ((struct ssl_st *)NULL)))
              {
                ERR_clear_error();
                ERR_remove_state((unsigned long int)0);
              }

              goto __CPROVER_DUMP_L488;
            }

          }

          else
            if(skip == 0)
            {
              signed int return_value_is_readable_210;
              return_value_is_readable_210=is_readable(be, cur_backend->to);
              if(!(return_value_is_readable_210 == 0))
              {
                char do_http__1__5__1__25__1__5__3__1__one;
                struct bio_st *be_unbuf;
                be_11 = 0;
                cl_11 = be_11;
                do
                {
                  return_value_BIO_ctrl_192=BIO_ctrl(be, 10, (signed long int)0, (void *)0);
                  if((signed int)return_value_BIO_ctrl_192 == 0)
                    break;

                  signed int return_value_BIO_read_196;
                  return_value_BIO_read_196=BIO_read(be, (void *)&do_http__1__5__1__25__1__5__3__1__one, 1);
                  if(!(return_value_BIO_read_196 == 1))
                  {
                    unsigned long int return_value_pthread_self_193;
                    return_value_pthread_self_193=pthread_self();
                    signed int *return_value___errno_location_194;
                    return_value___errno_location_194=__errno_location();
                    char *return_value_strerror_195;
                    return_value_strerror_195=strerror(*return_value___errno_location_194);
                    logmsg(5, "(%lx) error read response pending: %s", return_value_pthread_self_193, return_value_strerror_195);
                    if(!(ssl == ((struct ssl_st *)NULL)))
                      BIO_ssl_shutdown(cl);

                    if(!(be == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                      BIO_free_all(be);
                      be = (struct bio_st *)(void *)0;
                    }

                    if(!(cl == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                      BIO_free_all(cl);
                      cl = (struct bio_st *)(void *)0;
                    }

                    if(!(x509 == ((struct x509_st *)NULL)))
                    {
                      X509_free(x509);
                      x509 = (struct x509_st *)(void *)0;
                    }

                    if(!(ssl == ((struct ssl_st *)NULL)))
                    {
                      ERR_clear_error();
                      ERR_remove_state((unsigned long int)0);
                    }

                    goto __CPROVER_DUMP_L488;
                  }

                  signed int return_value_BIO_write_201;
                  return_value_BIO_write_201=BIO_write(cl, (const void *)&do_http__1__5__1__25__1__5__3__1__one, 1);
                  if(!(return_value_BIO_write_201 == 1))
                  {
                    signed int *return_value___errno_location_200;
                    return_value___errno_location_200=__errno_location();
                    if(!(*return_value___errno_location_200 == 0))
                    {
                      return_value_pthread_self_197=pthread_self();
                      return_value___errno_location_198=__errno_location();
                      return_value_strerror_199=strerror(*return_value___errno_location_198);
                      logmsg(5, "(%lx) error write response pending: %s", return_value_pthread_self_197, return_value_strerror_199);
                    }

                    if(!(ssl == ((struct ssl_st *)NULL)))
                      BIO_ssl_shutdown(cl);

                    if(!(be == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                      BIO_free_all(be);
                      be = (struct bio_st *)(void *)0;
                    }

                    if(!(cl == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                      BIO_free_all(cl);
                      cl = (struct bio_st *)(void *)0;
                    }

                    if(!(x509 == ((struct x509_st *)NULL)))
                    {
                      X509_free(x509);
                      x509 = (struct x509_st *)(void *)0;
                    }

                    if(!(ssl == ((struct ssl_st *)NULL)))
                    {
                      ERR_clear_error();
                      ERR_remove_state((unsigned long int)0);
                    }

                    goto __CPROVER_DUMP_L488;
                  }

                  res_bytes = res_bytes + 1ll;
                }
                while((_Bool)1);
                BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                be_unbuf=BIO_find_type(be, cur_backend->ctx != ((struct ssl_ctx_st *)NULL) ? 7 | 0x0200 : 5 | 0x0400 | 0x0100);
                if(be_unbuf == ((struct bio_st *)NULL))
                {
                  unsigned long int return_value_pthread_self_202;
                  return_value_pthread_self_202=pthread_self();
                  signed int *return_value___errno_location_203;
                  return_value___errno_location_203=__errno_location();
                  char *return_value_strerror_204;
                  return_value_strerror_204=strerror(*return_value___errno_location_203);
                  logmsg(4, "(%lx) error get unbuffered: %s", return_value_pthread_self_202, return_value_strerror_204);
                  if(!(ssl == ((struct ssl_st *)NULL)))
                    BIO_ssl_shutdown(cl);

                  if(!(be == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                    BIO_free_all(be);
                    be = (struct bio_st *)(void *)0;
                  }

                  if(!(cl == ((struct bio_st *)NULL)))
                  {
                    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                    BIO_free_all(cl);
                    cl = (struct bio_st *)(void *)0;
                  }

                  if(!(x509 == ((struct x509_st *)NULL)))
                  {
                    X509_free(x509);
                    x509 = (struct x509_st *)(void *)0;
                  }

                  if(!(ssl == ((struct ssl_st *)NULL)))
                  {
                    ERR_clear_error();
                    ERR_remove_state((unsigned long int)0);
                  }

                  goto __CPROVER_DUMP_L488;
                }

                do
                {
                  res=BIO_read(be_unbuf, (void *)buf, 8192);
                  if(!(res >= 1))
                    break;

                  signed int return_value_BIO_write_209;
                  return_value_BIO_write_209=BIO_write(cl, (const void *)buf, res);
                  if(!(return_value_BIO_write_209 == res))
                  {
                    signed int *return_value___errno_location_208;
                    return_value___errno_location_208=__errno_location();
                    if(!(*return_value___errno_location_208 == 0))
                    {
                      return_value_pthread_self_205=pthread_self();
                      return_value___errno_location_206=__errno_location();
                      return_value_strerror_207=strerror(*return_value___errno_location_206);
                      logmsg(5, "(%lx) error copy response body: %s", return_value_pthread_self_205, return_value_strerror_207);
                    }

                    if(!(ssl == ((struct ssl_st *)NULL)))
                      BIO_ssl_shutdown(cl);

                    if(!(be == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(be, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(be, 1, (signed long int)0, (void *)0);
                      BIO_free_all(be);
                      be = (struct bio_st *)(void *)0;
                    }

                    if(!(cl == ((struct bio_st *)NULL)))
                    {
                      BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                      BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
                      BIO_free_all(cl);
                      cl = (struct bio_st *)(void *)0;
                    }

                    if(!(x509 == ((struct x509_st *)NULL)))
                    {
                      X509_free(x509);
                      x509 = (struct x509_st *)(void *)0;
                    }

                    if(!(ssl == ((struct ssl_st *)NULL)))
                    {
                      ERR_clear_error();
                      ERR_remove_state((unsigned long int)0);
                    }

                    goto __CPROVER_DUMP_L488;
                  }

                  else
                  {
                    res_bytes = res_bytes + (signed long long int)res;
                    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
                  }
                }
                while((_Bool)1);
              }

            }

        signed long int return_value_BIO_ctrl_215;
        return_value_BIO_ctrl_215=BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
        if(!((signed int)return_value_BIO_ctrl_215 == 1))
        {
          if(is_rpc == 0 && res_bytes >= 1l)
            break;

          signed int *return_value___errno_location_214;
          return_value___errno_location_214=__errno_location();
          if(!(*return_value___errno_location_214 == 0))
          {
            addr2str(caddr, 8192 - 1, &from_host, 1);
            unsigned long int return_value_pthread_self_211;
            return_value_pthread_self_211=pthread_self();
            signed int *return_value___errno_location_212;
            return_value___errno_location_212=__errno_location();
            char *return_value_strerror_213;
            return_value_strerror_213=strerror(*return_value___errno_location_212);
            logmsg(5, "(%lx) error final flush to %s: %s", return_value_pthread_self_211, (const void *)caddr, return_value_strerror_213);
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
            BIO_ssl_shutdown(cl);

          if(!(be == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(be, 11, (signed long int)0, (void *)0);
            BIO_ctrl(be, 1, (signed long int)0, (void *)0);
            BIO_free_all(be);
            be = (struct bio_st *)(void *)0;
          }

          if(!(cl == ((struct bio_st *)NULL)))
          {
            BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
            BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
            BIO_free_all(cl);
            cl = (struct bio_st *)(void *)0;
          }

          if(!(x509 == ((struct x509_st *)NULL)))
          {
            X509_free(x509);
            x509 = (struct x509_st *)(void *)0;
          }

          if(!(ssl == ((struct ssl_st *)NULL)))
          {
            ERR_clear_error();
            ERR_remove_state((unsigned long int)0);
          }

          goto __CPROVER_DUMP_L488;
        }

      }

    }
    end_req=cur_time();
    upd_be(svc, cur_backend, end_req - start_req);
    memset((void *)s_res_bytes, 0, (unsigned long int)32);
    log_bytes(s_res_bytes, res_bytes);
    addr2str(caddr, 8192 - 1, &from_host, 1);
    addr2str(buf, 8192 - 1, &cur_backend->addr, 0);
    switch(lstn->log_level)
    {
      case 0:
        break;
      case 1:
      {
        logmsg(6, "%s %s - %s", (const void *)caddr, (const void *)request, (const void *)response);
        break;
      }
      case 2:
      {
        if(!(v_host[0l] == 0))
        {
          if(!(svc->name[0l] == 0))
            tmp_if_expr_216 = svc->name;

          else
            tmp_if_expr_216 = "-";
          logmsg(6, "%s %s - %s (%s/%s -> %s) %.3f sec", (const void *)caddr, (const void *)request, (const void *)response, (const void *)v_host, tmp_if_expr_216, (const void *)buf, (end_req - start_req) / 1000000.0);
        }

        else
        {
          if(!(svc->name[0l] == 0))
            tmp_if_expr_217 = svc->name;

          else
            tmp_if_expr_217 = "-";
          logmsg(6, "%s %s - %s (%s -> %s) %.3f sec", (const void *)caddr, (const void *)request, (const void *)response, tmp_if_expr_217, (const void *)buf, (end_req - start_req) / 1000000.0);
        }
        break;
      }
      case 3:
      {
        if(!(v_host[0l] == 0))
          tmp_if_expr_218 = v_host;

        else
          tmp_if_expr_218 = "-";
        if(!(u_name[0l] == 0))
          tmp_if_expr_219 = u_name;

        else
          tmp_if_expr_219 = "-";
        logmsg(6, "%s %s - %s [%s] \"%s\" %c%c%c %s \"%s\" \"%s\"", tmp_if_expr_218, (const void *)caddr, tmp_if_expr_219, (const void *)req_time, (const void *)request, response[(signed long int)9], response[(signed long int)10], response[(signed long int)11], (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent);
        break;
      }
      case 4:
      {
        if(!(u_name[0l] == 0))
          tmp_if_expr_220 = u_name;

        else
          tmp_if_expr_220 = "-";
        logmsg(6, "%s - %s [%s] \"%s\" %c%c%c %s \"%s\" \"%s\"", (const void *)caddr, tmp_if_expr_220, (const void *)req_time, (const void *)request, response[(signed long int)9], response[(signed long int)10], response[(signed long int)11], (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent);
        break;
      }
      case 5:
      {
        if(!(v_host[0l] == 0))
          tmp_if_expr_221 = v_host;

        else
          tmp_if_expr_221 = "-";
        if(!(u_name[0l] == 0))
          tmp_if_expr_222 = u_name;

        else
          tmp_if_expr_222 = "-";
        if(!(svc->name[0l] == 0))
          tmp_if_expr_223 = svc->name;

        else
          tmp_if_expr_223 = "-";
        logmsg(6, "%s %s - %s [%s] \"%s\" %c%c%c %s \"%s\" \"%s\" (%s -> %s) %.3f sec", tmp_if_expr_221, (const void *)caddr, tmp_if_expr_222, (const void *)req_time, (const void *)request, response[(signed long int)9], response[(signed long int)10], response[(signed long int)11], (const void *)s_res_bytes, (const void *)referer, (const void *)u_agent, tmp_if_expr_223, (const void *)buf, (end_req - start_req) / 1000000.0);
      }
    }
    if(be_11 == 0)
    {
      BIO_ctrl(be, 1, (signed long int)0, (void *)0);
      BIO_free_all(be);
      be = (struct bio_st *)(void *)0;
    }

    if(cl_11 == 0 || !(conn_closed == 0) || !(force_10 == 0))
      break;


  __CPROVER_DUMP_L480:
    ;
  }
  while((_Bool)1);

__CPROVER_DUMP_L481:
  ;
  if(!(ssl == ((struct ssl_st *)NULL)))
    SSL_set_shutdown(ssl, 1 | 2);

  if(!(ssl == ((struct ssl_st *)NULL)))
    BIO_ssl_shutdown(cl);

  if(!(be == ((struct bio_st *)NULL)))
  {
    BIO_ctrl(be, 11, (signed long int)0, (void *)0);
    BIO_ctrl(be, 1, (signed long int)0, (void *)0);
    BIO_free_all(be);
    be = (struct bio_st *)(void *)0;
  }

  if(!(cl == ((struct bio_st *)NULL)))
  {
    BIO_ctrl(cl, 11, (signed long int)0, (void *)0);
    BIO_ctrl(cl, 1, (signed long int)0, (void *)0);
    BIO_free_all(cl);
    cl = (struct bio_st *)(void *)0;
  }

  if(!(x509 == ((struct x509_st *)NULL)))
  {
    X509_free(x509);
    x509 = (struct x509_st *)(void *)0;
  }

  if(!(ssl == ((struct ssl_st *)NULL)))
  {
    ERR_clear_error();
    ERR_remove_state((unsigned long int)0);
  }

  goto __CPROVER_DUMP_L488;

__CPROVER_DUMP_L488:
  ;
}

// do_rescale
// file svc.c line 1259
static void do_rescale(void)
{
  struct _listener *lstn;
  struct _service *svc;
  struct _backend *be;
  signed int n;
  signed int ret_val;
  double average;
  double sq_average;
  lstn = listeners;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  char *return_value_strerror_3;
  char *return_value_strerror_4;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  char *return_value_strerror_9;
  char *return_value_strerror_10;
  char *return_value_strerror_11;
  char *return_value_strerror_12;
  char *return_value_strerror_13;
  for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
  {
    svc = lstn->services;
    for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    {
      if(!(svc->dynscale == 0))
      {
        sq_average = 0.0;
        average = sq_average;
        n = 0;
        be = svc->backends;
        for( ; !(be == ((struct _backend *)NULL)); be = be->next)
        {
          if(!(be->be_type == 0))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = !(be->alive != 0) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = be->disabled != 0 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_2)
          {
            ret_val=pthread_mutex_lock(&be->mut);
            if(!(ret_val == 0))
            {
              return_value_strerror_3=strerror(ret_val);
              logmsg(4, "do_rescale() lock: %s", return_value_strerror_3);
            }

            average = average + be->t_average;
            sq_average = sq_average + be->t_average * be->t_average;
            ret_val=pthread_mutex_unlock(&be->mut);
            if(!(ret_val == 0))
            {
              return_value_strerror_4=strerror(ret_val);
              logmsg(4, "do_rescale() unlock: %s", return_value_strerror_4);
            }

            n = n + 1;
          }

        }
        if(n >= 2)
        {
          sq_average = sq_average / (double)n;
          average = average / (double)n;
          sq_average=sqrt(sq_average - average * average);
          sq_average = sq_average * (double)3;
          ret_val=pthread_mutex_lock(&svc->mut);
          if(!(ret_val == 0))
          {
            char *return_value_strerror_5;
            return_value_strerror_5=strerror(ret_val);
            logmsg(4, "thr_rescale() lock: %s", return_value_strerror_5);
            goto __CPROVER_DUMP_L30;
          }

          be = svc->backends;
          for( ; !(be == ((struct _backend *)NULL)); be = be->next)
          {
            if(!(be->be_type == 0))
              tmp_if_expr_6 = (_Bool)1;

            else
              tmp_if_expr_6 = !(be->alive != 0) ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_6)
              tmp_if_expr_7 = (_Bool)1;

            else
              tmp_if_expr_7 = be->disabled != 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_7)
              tmp_if_expr_8 = (_Bool)1;

            else
              tmp_if_expr_8 = be->n_requests < 8000 ? (_Bool)1 : (_Bool)0;
            if(!tmp_if_expr_8)
            {
              if(be->t_average < average + -sq_average)
              {
                be->priority = be->priority + 1;
                ret_val=pthread_mutex_lock(&be->mut);
                if(!(ret_val == 0))
                {
                  return_value_strerror_9=strerror(ret_val);
                  logmsg(4, "do_rescale() lock: %s", return_value_strerror_9);
                }

                for( ; be->n_requests >= 4001; be->t_requests = be->t_requests / (double)2)
                  be->n_requests = be->n_requests / 2;
                ret_val=pthread_mutex_unlock(&be->mut);
                if(!(ret_val == 0))
                {
                  return_value_strerror_10=strerror(ret_val);
                  logmsg(4, "do_rescale() unlock: %s", return_value_strerror_10);
                }

                svc->tot_pri = svc->tot_pri + 1;
              }

              if(be->t_average > average + sq_average)
              {
                if(be->priority >= 2)
                {
                  be->priority = be->priority - 1;
                  ret_val=pthread_mutex_lock(&be->mut);
                  if(!(ret_val == 0))
                  {
                    return_value_strerror_11=strerror(ret_val);
                    logmsg(4, "do_rescale() lock: %s", return_value_strerror_11);
                  }

                  for( ; be->n_requests >= 4001; be->t_requests = be->t_requests / (double)2)
                    be->n_requests = be->n_requests / 2;
                  ret_val=pthread_mutex_unlock(&be->mut);
                  if(!(ret_val == 0))
                  {
                    return_value_strerror_12=strerror(ret_val);
                    logmsg(4, "do_rescale() unlock: %s", return_value_strerror_12);
                  }

                  svc->tot_pri = svc->tot_pri - 1;
                }

              }

            }

          }
          ret_val=pthread_mutex_unlock(&svc->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_13=strerror(ret_val);
            logmsg(4, "thr_rescale() unlock: %s", return_value_strerror_13);
          }

        }

      }


    __CPROVER_DUMP_L30:
      ;
    }
  }
  svc = services;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  char *return_value_strerror_16;
  char *return_value_strerror_17;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  char *return_value_strerror_22;
  char *return_value_strerror_23;
  char *return_value_strerror_24;
  char *return_value_strerror_25;
  char *return_value_strerror_26;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
  {
    if(!(svc->dynscale == 0))
    {
      sq_average = 0.0;
      average = sq_average;
      n = 0;
      be = svc->backends;
      for( ; !(be == ((struct _backend *)NULL)); be = be->next)
      {
        if(!(be->be_type == 0))
          tmp_if_expr_14 = (_Bool)1;

        else
          tmp_if_expr_14 = !(be->alive != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_14)
          tmp_if_expr_15 = (_Bool)1;

        else
          tmp_if_expr_15 = be->disabled != 0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_15)
        {
          ret_val=pthread_mutex_lock(&be->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_16=strerror(ret_val);
            logmsg(4, "do_rescale() lock: %s", return_value_strerror_16);
          }

          average = average + be->t_average;
          sq_average = sq_average + be->t_average * be->t_average;
          ret_val=pthread_mutex_unlock(&be->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_17=strerror(ret_val);
            logmsg(4, "do_rescale() unlock: %s", return_value_strerror_17);
          }

          n = n + 1;
        }

      }
      if(n >= 2)
      {
        sq_average = sq_average / (double)n;
        average = average / (double)n;
        sq_average=sqrt(sq_average - average * average);
        sq_average = sq_average * (double)3;
        ret_val=pthread_mutex_lock(&svc->mut);
        if(!(ret_val == 0))
        {
          char *return_value_strerror_18;
          return_value_strerror_18=strerror(ret_val);
          logmsg(4, "thr_rescale() lock: %s", return_value_strerror_18);
          goto __CPROVER_DUMP_L61;
        }

        be = svc->backends;
        for( ; !(be == ((struct _backend *)NULL)); be = be->next)
        {
          if(!(be->be_type == 0))
            tmp_if_expr_19 = (_Bool)1;

          else
            tmp_if_expr_19 = !(be->alive != 0) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_19)
            tmp_if_expr_20 = (_Bool)1;

          else
            tmp_if_expr_20 = be->disabled != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_20)
            tmp_if_expr_21 = (_Bool)1;

          else
            tmp_if_expr_21 = be->n_requests < 8000 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_21)
          {
            if(be->t_average < average + -sq_average)
            {
              be->priority = be->priority + 1;
              ret_val=pthread_mutex_lock(&be->mut);
              if(!(ret_val == 0))
              {
                return_value_strerror_22=strerror(ret_val);
                logmsg(4, "do_rescale() lock: %s", return_value_strerror_22);
              }

              for( ; be->n_requests >= 4001; be->t_requests = be->t_requests / (double)2)
                be->n_requests = be->n_requests / 2;
              ret_val=pthread_mutex_unlock(&be->mut);
              if(!(ret_val == 0))
              {
                return_value_strerror_23=strerror(ret_val);
                logmsg(4, "do_rescale() unlock: %s", return_value_strerror_23);
              }

              svc->tot_pri = svc->tot_pri + 1;
            }

            if(be->t_average > average + sq_average)
            {
              if(be->priority >= 2)
              {
                be->priority = be->priority - 1;
                ret_val=pthread_mutex_lock(&be->mut);
                if(!(ret_val == 0))
                {
                  return_value_strerror_24=strerror(ret_val);
                  logmsg(4, "do_rescale() lock: %s", return_value_strerror_24);
                }

                for( ; be->n_requests >= 4001; be->t_requests = be->t_requests / (double)2)
                  be->n_requests = be->n_requests / 2;
                ret_val=pthread_mutex_unlock(&be->mut);
                if(!(ret_val == 0))
                {
                  return_value_strerror_25=strerror(ret_val);
                  logmsg(4, "do_rescale() unlock: %s", return_value_strerror_25);
                }

                svc->tot_pri = svc->tot_pri - 1;
              }

            }

          }

        }
        ret_val=pthread_mutex_unlock(&svc->mut);
        if(!(ret_val == 0))
        {
          return_value_strerror_26=strerror(ret_val);
          logmsg(4, "thr_rescale() unlock: %s", return_value_strerror_26);
        }

      }

    }


  __CPROVER_DUMP_L61:
    ;
  }
  goto __CPROVER_DUMP_L63;

__CPROVER_DUMP_L63:
  ;
}

// do_resurect
// file svc.c line 985
static void do_resurect(void)
{
  struct _listener *lstn;
  struct _service *svc;
  struct _backend *be;
  struct addrinfo z_addr;
  struct addrinfo *addr;
  signed int sock;
  signed int modified;
  char buf[8192l];
  signed int ret_val;
  memset((void *)&z_addr, 0, sizeof(struct addrinfo) /*48ul*/ );
  lstn = listeners;
  for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
  {
    svc = lstn->services;
    for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    {
      be = svc->backends;
      for( ; !(be == ((struct _backend *)NULL)); be = be->next)
      {
        if(be->be_type == 0)
        {
          if(!(be->alive == 0))
          {
            signed int return_value_memcmp_1;
            return_value_memcmp_1=memcmp((const void *)&be->ha_addr, (const void *)&z_addr, sizeof(struct addrinfo) /*48ul*/ );
            if(!(return_value_memcmp_1 == 0))
            {
              switch(be->ha_addr.ai_family)
              {
                case 2:
                {
                  sock=socket(2, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L13;

                  break;
                }
                case 10:
                {
                  sock=socket(10, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L13;

                  break;
                }
                case 1:
                {
                  sock=socket(1, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L13;

                  break;
                }
                default:
                  goto __CPROVER_DUMP_L13;
              }
              signed int return_value_connect_nb_2;
              return_value_connect_nb_2=connect_nb(sock, &be->ha_addr, be->conn_to);
              if(!(return_value_connect_nb_2 == 0))
              {
                kill_be(svc, be, 1);
                addr2str(buf, 8192 - 1, &be->addr, 0);
                logmsg(5, "BackEnd %s is dead (HA)", (const void *)buf);
              }

              shutdown(sock, 2);
              close(sock);
            }

          }

        }


      __CPROVER_DUMP_L13:
        ;
      }
    }
  }
  svc = services;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
  {
    be = svc->backends;
    for( ; !(be == ((struct _backend *)NULL)); be = be->next)
    {
      if(be->be_type == 0)
      {
        if(!(be->alive == 0))
        {
          signed int return_value_memcmp_3;
          return_value_memcmp_3=memcmp((const void *)&be->ha_addr, (const void *)&z_addr, sizeof(struct addrinfo) /*48ul*/ );
          if(!(return_value_memcmp_3 == 0))
          {
            switch(be->ha_addr.ai_family)
            {
              case 2:
              {
                sock=socket(2, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L28;

                break;
              }
              case 10:
              {
                sock=socket(10, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L28;

                break;
              }
              case 1:
              {
                sock=socket(1, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L28;

                break;
              }
              default:
                goto __CPROVER_DUMP_L28;
            }
            signed int return_value_connect_nb_4;
            return_value_connect_nb_4=connect_nb(sock, &be->ha_addr, be->conn_to);
            if(!(return_value_connect_nb_4 == 0))
            {
              kill_be(svc, be, 1);
              addr2str(buf, 8192 - 1, &be->addr, 0);
              logmsg(5, "BackEnd %s is dead (HA)", (const void *)buf);
            }

            shutdown(sock, 2);
            close(sock);
          }

        }

      }


    __CPROVER_DUMP_L28:
      ;
    }
  }
  lstn = listeners;
  char *return_value_strerror_7;
  char *return_value_strerror_8;
  for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
  {
    svc = lstn->services;
    for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    {
      modified = 0;
      be = svc->backends;
      for( ; !(be == ((struct _backend *)NULL)); be = be->next)
      {
        be->resurrect = 0;
        if(be->be_type == 0)
        {
          if(be->alive == 0)
          {
            signed int return_value_memcmp_5;
            return_value_memcmp_5=memcmp((const void *)&be->ha_addr, (const void *)&z_addr, sizeof(struct addrinfo) /*48ul*/ );
            if(return_value_memcmp_5 == 0)
            {
              switch(be->addr.ai_family)
              {
                case 2:
                {
                  sock=socket(2, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                case 10:
                {
                  sock=socket(10, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                case 1:
                {
                  sock=socket(1, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                default:
                  goto __CPROVER_DUMP_L47;
              }
              addr = &be->addr;
            }

            else
            {
              switch(be->ha_addr.ai_family)
              {
                case 2:
                {
                  sock=socket(2, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                case 10:
                {
                  sock=socket(10, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                case 1:
                {
                  sock=socket(1, 1, 0);
                  if(!(sock >= 0))
                    goto __CPROVER_DUMP_L47;

                  break;
                }
                default:
                  goto __CPROVER_DUMP_L47;
              }
              addr = &be->ha_addr;
            }
            signed int return_value_connect_nb_6;
            return_value_connect_nb_6=connect_nb(sock, addr, be->conn_to);
            if(return_value_connect_nb_6 == 0)
            {
              be->resurrect = 1;
              modified = 1;
            }

            shutdown(sock, 2);
            close(sock);
          }

        }


      __CPROVER_DUMP_L47:
        ;
      }
      if(!(modified == 0))
      {
        ret_val=pthread_mutex_lock(&svc->mut);
        if(!(ret_val == 0))
        {
          return_value_strerror_7=strerror(ret_val);
          logmsg(4, "do_resurect() lock: %s", return_value_strerror_7);
        }

        svc->tot_pri = 0;
        be = svc->backends;
        for( ; !(be == ((struct _backend *)NULL)); be = be->next)
        {
          if(!(be->resurrect == 0))
          {
            be->alive = 1;
            addr2str(buf, 8192 - 1, &be->addr, 0);
            logmsg(5, "BackEnd %s resurrect", (const void *)buf);
          }

          if(!(be->alive == 0))
          {
            if(be->disabled == 0)
              svc->tot_pri = svc->tot_pri + be->priority;

          }

        }
        ret_val=pthread_mutex_unlock(&svc->mut);
        if(!(ret_val == 0))
        {
          return_value_strerror_8=strerror(ret_val);
          logmsg(4, "do_resurect() unlock: %s", return_value_strerror_8);
        }

      }

    }
  }
  svc = services;
  char *return_value_strerror_11;
  char *return_value_strerror_12;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
  {
    modified = 0;
    be = svc->backends;
    for( ; !(be == ((struct _backend *)NULL)); be = be->next)
    {
      be->resurrect = 0;
      if(be->be_type == 0)
      {
        if(be->alive == 0)
        {
          signed int return_value_memcmp_9;
          return_value_memcmp_9=memcmp((const void *)&be->ha_addr, (const void *)&z_addr, sizeof(struct addrinfo) /*48ul*/ );
          if(return_value_memcmp_9 == 0)
          {
            switch(be->addr.ai_family)
            {
              case 2:
              {
                sock=socket(2, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              case 10:
              {
                sock=socket(10, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              case 1:
              {
                sock=socket(1, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              default:
                goto __CPROVER_DUMP_L73;
            }
            addr = &be->addr;
          }

          else
          {
            switch(be->ha_addr.ai_family)
            {
              case 2:
              {
                sock=socket(2, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              case 10:
              {
                sock=socket(10, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              case 1:
              {
                sock=socket(1, 1, 0);
                if(!(sock >= 0))
                  goto __CPROVER_DUMP_L73;

                break;
              }
              default:
                goto __CPROVER_DUMP_L73;
            }
            addr = &be->ha_addr;
          }
          signed int return_value_connect_nb_10;
          return_value_connect_nb_10=connect_nb(sock, addr, be->conn_to);
          if(return_value_connect_nb_10 == 0)
          {
            be->resurrect = 1;
            modified = 1;
          }

          shutdown(sock, 2);
          close(sock);
        }

      }


    __CPROVER_DUMP_L73:
      ;
    }
    if(!(modified == 0))
    {
      ret_val=pthread_mutex_lock(&svc->mut);
      if(!(ret_val == 0))
      {
        return_value_strerror_11=strerror(ret_val);
        logmsg(4, "do_resurect() lock: %s", return_value_strerror_11);
      }

      svc->tot_pri = 0;
      be = svc->backends;
      for( ; !(be == ((struct _backend *)NULL)); be = be->next)
      {
        if(!(be->resurrect == 0))
        {
          be->alive = 1;
          addr2str(buf, 8192 - 1, &be->addr, 0);
          logmsg(5, "BackEnd %s resurrect", (const void *)buf);
        }

        if(!(be->alive == 0))
        {
          if(be->disabled == 0)
            svc->tot_pri = svc->tot_pri + be->priority;

        }

      }
      ret_val=pthread_mutex_unlock(&svc->mut);
      if(!(ret_val == 0))
      {
        return_value_strerror_12=strerror(ret_val);
        logmsg(4, "do_resurect() unlock: %s", return_value_strerror_12);
      }

    }

  }
  goto __CPROVER_DUMP_L83;

__CPROVER_DUMP_L83:
  ;
}

// dump_sess
// file svc.c line 1563
static void dump_sess(const signed int control_sock, struct lhash_st_TABNODE * const sess, struct _backend * const backends)
{
  struct anonymous a;
  a.control_sock = control_sock;
  a.backends = backends;
  lh_doall_arg((struct lhash_st *)(void *)(1 != 0 ? sess : (struct lhash_st_TABNODE *)0), t_dump_LHASH_DOALL_ARG, (void *)(1 != 0 ? &a : (struct anonymous *)0));
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_reply
// file http.c line 42
static void err_reply(struct bio_st * const c, const char *head, const char *txt)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(txt);
  BIO_printf(c, err_response, head, return_value_strlen_1, txt);
  BIO_ctrl(c, 11, (signed long int)0, (void *)0);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// file2str
// file config.c line 633
static char * file2str(const char *fname)
{
  char *res;
  struct stat st;
  signed int fin;
  signed int return_value_stat_1;
  return_value_stat_1=stat(fname, &st);
  if(!(return_value_stat_1 == 0))
    conf_err("can't stat Err file - aborted");

  fin=open(fname, 00);
  if(!(fin >= 0))
    conf_err("can't open Err file - aborted");

  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)(st.st_size + (signed long int)1));
  res = (char *)return_value_malloc_2;
  if(res == ((char *)NULL))
    conf_err("can't alloc Err file (out of memory) - aborted");

  signed long int return_value_read_3;
  return_value_read_3=read(fin, (void *)res, (unsigned long int)st.st_size);
  if(!(return_value_read_3 == st.st_size))
    conf_err("can't read Err file - aborted");

  res[st.st_size] = (char)0;
  close(fin);
  return res;
}

// free_headers
// file http.c line 389
static void free_headers(char **headers)
{
  signed int i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(!(headers[(signed long int)i] == ((char *)NULL)))
      free((void *)headers[(signed long int)i]);

  free((void *)headers);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// get_HEADERS
// file svc.c line 499
static signed int get_HEADERS(char *res, const struct _service *svc, char ** const headers)
{
  signed int i;
  signed int n;
  signed int s;
  struct anonymous_4 get_HEADERS__1__matches[4l];
  res[(signed long int)0] = (char)0;
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(!(headers[(signed long int)i] == ((char *)NULL)))
    {
      signed int return_value_pcreposix_regexec_1;
      return_value_pcreposix_regexec_1=pcreposix_regexec(&svc->sess_start, headers[(signed long int)i], (unsigned long int)4, get_HEADERS__1__matches, 0);
      if(return_value_pcreposix_regexec_1 == 0)
      {
        s = get_HEADERS__1__matches[(signed long int)0].rm_eo;
        signed int return_value_pcreposix_regexec_2;
        return_value_pcreposix_regexec_2=pcreposix_regexec(&svc->sess_pat, headers[(signed long int)i] + (signed long int)s, (unsigned long int)4, get_HEADERS__1__matches, 0);
        if(return_value_pcreposix_regexec_2 == 0)
        {
          n = get_HEADERS__1__matches[(signed long int)1].rm_eo - get_HEADERS__1__matches[(signed long int)1].rm_so;
          if(n >= 128)
            n = 127;

          strncpy(res, headers[(signed long int)i] + (signed long int)s + (signed long int)get_HEADERS__1__matches[(signed long int)1].rm_so, (unsigned long int)n);
          res[(signed long int)n] = (char)0;
        }

      }

    }

  return (signed int)((signed int)res[(signed long int)0] != 0);
}

// get_REQUEST
// file svc.c line 477
static signed int get_REQUEST(char *res, const struct _service *svc, const char *request)
{
  signed int n;
  signed int s;
  struct anonymous_4 get_REQUEST__1__matches[4l];
  signed int return_value_pcreposix_regexec_1;
  return_value_pcreposix_regexec_1=pcreposix_regexec(&svc->sess_start, request, (unsigned long int)4, get_REQUEST__1__matches, 0);
  if(!(return_value_pcreposix_regexec_1 == 0))
  {
    res[(signed long int)0] = (char)0;
    return 0;
  }

  else
  {
    s = get_REQUEST__1__matches[(signed long int)0].rm_eo;
    signed int return_value_pcreposix_regexec_2;
    return_value_pcreposix_regexec_2=pcreposix_regexec(&svc->sess_pat, request + (signed long int)s, (unsigned long int)4, get_REQUEST__1__matches, 0);
    if(!(return_value_pcreposix_regexec_2 == 0))
    {
      res[(signed long int)0] = (char)0;
      return 0;
    }

    else
    {
      n = get_REQUEST__1__matches[(signed long int)1].rm_eo - get_REQUEST__1__matches[(signed long int)1].rm_so;
      if(n >= 128)
        n = 127;

      strncpy(res, request + (signed long int)s + (signed long int)get_REQUEST__1__matches[(signed long int)1].rm_so, (unsigned long int)n);
      res[(signed long int)n] = (char)0;
      return 1;
    }
  }
}

// get_backend
// file pound.h line 517
extern struct _backend * get_backend(struct _service * const svc, struct addrinfo *from_host, const char *request, char ** const headers)
{
  struct _backend *res;
  char key[128l];
  signed int ret_val;
  signed int no_be;
  void *vp;
  ret_val=pthread_mutex_lock(&svc->mut);
  char *return_value_strerror_1;
  if(!(ret_val == 0))
  {
    return_value_strerror_1=strerror(ret_val);
    logmsg(4, "get_backend() lock: %s", return_value_strerror_1);
  }

  no_be = (signed int)(svc->tot_pri <= 0);
  struct _backend *tmp_if_expr_4;
  signed long int return_value_random_2;
  struct _backend *return_value_rand_backend_3;
  struct _backend *tmp_if_expr_6;
  struct _backend *return_value_hash_backend_5;
  signed int return_value_get_REQUEST_14;
  struct _backend *tmp_if_expr_9;
  struct _backend *return_value_hash_backend_8;
  struct _backend *tmp_if_expr_13;
  signed long int return_value_random_11;
  struct _backend *return_value_rand_backend_12;
  signed int return_value_get_HEADERS_21;
  struct _backend *tmp_if_expr_16;
  struct _backend *return_value_hash_backend_15;
  struct _backend *tmp_if_expr_20;
  signed long int return_value_random_18;
  struct _backend *return_value_rand_backend_19;
  switch((signed int)svc->sess_type)
  {
    case SESS_NONE:
    {
      if(!(no_be == 0))
        tmp_if_expr_4 = svc->emergency;

      else
      {
        return_value_random_2=random();
        return_value_rand_backend_3=rand_backend(svc->backends, (signed int)(return_value_random_2 % (signed long int)svc->tot_pri));
        tmp_if_expr_4 = return_value_rand_backend_3;
      }
      res = tmp_if_expr_4;
      break;
    }
    case SESS_IP:
    {
      addr2str(key, 127, from_host, 1);
      if(!(svc->sess_ttl >= 0))
      {
        if(!(no_be == 0))
          tmp_if_expr_6 = svc->emergency;

        else
        {
          return_value_hash_backend_5=hash_backend(svc->backends, svc->abs_pri, key);
          tmp_if_expr_6 = return_value_hash_backend_5;
        }
        res = tmp_if_expr_6;
      }

      else
      {
        vp=t_find(svc->sessions, key);
        if(vp == NULL)
        {
          if(!(no_be == 0))
            res = svc->emergency;

          else
          {
            signed long int return_value_random_7;
            return_value_random_7=random();
            res=rand_backend(svc->backends, (signed int)(return_value_random_7 % (signed long int)svc->tot_pri));
            t_add(svc->sessions, key, (const void *)&res, sizeof(struct _backend *) /*8ul*/ );
          }
        }

        else
          memcpy((void *)&res, vp, sizeof(struct _backend *) /*8ul*/ );
      }
      break;
    }
    case SESS_URL:

    case SESS_PARM:
    {
      return_value_get_REQUEST_14=get_REQUEST(key, svc, request);
      if(!(return_value_get_REQUEST_14 == 0))
      {
        if(!(svc->sess_ttl >= 0))
        {
          if(!(no_be == 0))
            tmp_if_expr_9 = svc->emergency;

          else
          {
            return_value_hash_backend_8=hash_backend(svc->backends, svc->abs_pri, key);
            tmp_if_expr_9 = return_value_hash_backend_8;
          }
          res = tmp_if_expr_9;
        }

        else
        {
          vp=t_find(svc->sessions, key);
          if(vp == NULL)
          {
            if(!(no_be == 0))
              res = svc->emergency;

            else
            {
              signed long int return_value_random_10;
              return_value_random_10=random();
              res=rand_backend(svc->backends, (signed int)(return_value_random_10 % (signed long int)svc->tot_pri));
              t_add(svc->sessions, key, (const void *)&res, sizeof(struct _backend *) /*8ul*/ );
            }
          }

          else
            memcpy((void *)&res, vp, sizeof(struct _backend *) /*8ul*/ );
        }
      }

      else
      {
        if(!(no_be == 0))
          tmp_if_expr_13 = svc->emergency;

        else
        {
          return_value_random_11=random();
          return_value_rand_backend_12=rand_backend(svc->backends, (signed int)(return_value_random_11 % (signed long int)svc->tot_pri));
          tmp_if_expr_13 = return_value_rand_backend_12;
        }
        res = tmp_if_expr_13;
      }
      break;
    }
    default:
    {
      return_value_get_HEADERS_21=get_HEADERS(key, svc, headers);
      if(!(return_value_get_HEADERS_21 == 0))
      {
        if(!(svc->sess_ttl >= 0))
        {
          if(!(no_be == 0))
            tmp_if_expr_16 = svc->emergency;

          else
          {
            return_value_hash_backend_15=hash_backend(svc->backends, svc->abs_pri, key);
            tmp_if_expr_16 = return_value_hash_backend_15;
          }
          res = tmp_if_expr_16;
        }

        else
        {
          vp=t_find(svc->sessions, key);
          if(vp == NULL)
          {
            if(!(no_be == 0))
              res = svc->emergency;

            else
            {
              signed long int return_value_random_17;
              return_value_random_17=random();
              res=rand_backend(svc->backends, (signed int)(return_value_random_17 % (signed long int)svc->tot_pri));
              t_add(svc->sessions, key, (const void *)&res, sizeof(struct _backend *) /*8ul*/ );
            }
          }

          else
            memcpy((void *)&res, vp, sizeof(struct _backend *) /*8ul*/ );
        }
      }

      else
      {
        if(!(no_be == 0))
          tmp_if_expr_20 = svc->emergency;

        else
        {
          return_value_random_18=random();
          return_value_rand_backend_19=rand_backend(svc->backends, (signed int)(return_value_random_18 % (signed long int)svc->tot_pri));
          tmp_if_expr_20 = return_value_rand_backend_19;
        }
        res = tmp_if_expr_20;
      }
    }
  }
  ret_val=pthread_mutex_unlock(&svc->mut);
  char *return_value_strerror_22;
  if(!(ret_val == 0))
  {
    return_value_strerror_22=strerror(ret_val);
    logmsg(4, "get_backend() unlock: %s", return_value_strerror_22);
  }

  return res;
}

// get_dh1024
// file dh1024.h line 4
struct dh_st * get_dh1024()
{
  struct dh_st *dh;
  dh=DH_new();
  _Bool tmp_if_expr_1;
  if(dh == ((struct dh_st *)NULL))
    return (struct dh_st *)(void *)0;

  else
  {
    static unsigned char dh1024_p[128l] = { (unsigned char)0xC2, (unsigned char)0x27, (unsigned char)0xE6, (unsigned char)0x7F, (unsigned char)0xFC, (unsigned char)0x85, (unsigned char)0x3B, (unsigned char)0x8C, (unsigned char)0x02, (unsigned char)0x26, (unsigned char)0x60, (unsigned char)0xB5, (unsigned char)0xAC, (unsigned char)0xAF, (unsigned char)0xAC, (unsigned char)0x1B, (unsigned char)0x93, (unsigned char)0xE0, (unsigned char)0x28, (unsigned char)0x97, (unsigned char)0xD8, (unsigned char)0x4B, (unsigned char)0x6C, (unsigned char)0xEA, (unsigned char)0x50, (unsigned char)0xA3, (unsigned char)0x6F, (unsigned char)0x59, (unsigned char)0x6F, (unsigned char)0x79, (unsigned char)0xF7, (unsigned char)0xF7, (unsigned char)0x62, (unsigned char)0x72, (unsigned char)0x33, (unsigned char)0xF9, (unsigned char)0x99, (unsigned char)0x31, (unsigned char)0x7A, (unsigned char)0x51, (unsigned char)0x28, (unsigned char)0x0F, (unsigned char)0x5E, (unsigned char)0x6A, (unsigned char)0xCA, (unsigned char)0x4F, (unsigned char)0xB7, (unsigned char)0x4D, (unsigned char)0x50, (unsigned char)0x02, (unsigned char)0x69, (unsigned char)0x1A, (unsigned char)0xE2, (unsigned char)0xD1, (unsigned char)0x1C, (unsigned char)0x2F, (unsigned char)0x90, (unsigned char)0x84, (unsigned char)0xFE, (unsigned char)0xE3, (unsigned char)0xCA, (unsigned char)0x08, (unsigned char)0xB1, (unsigned char)0x4E, (unsigned char)0x64, (unsigned char)0xF1, (unsigned char)0x25, (unsigned char)0x39, (unsigned char)0x09, (unsigned char)0x83, (unsigned char)0xCC, (unsigned char)0x43, (unsigned char)0x79, (unsigned char)0xEF, (unsigned char)0xC7, (unsigned char)0x76, (unsigned char)0xD6, (unsigned char)0xDA, (unsigned char)0x33, (unsigned char)0xEE, (unsigned char)0xF6, (unsigned char)0xAB, (unsigned char)0xC5, (unsigned char)0xCF, (unsigned char)0x3A, (unsigned char)0x26, (unsigned char)0x33, (unsigned char)0x11, (unsigned char)0x9D, (unsigned char)0x13, (unsigned char)0xAD, (unsigned char)0xF6, (unsigned char)0xFA, (unsigned char)0x87, (unsigned char)0xE4, (unsigned char)0x42, (unsigned char)0x72, (unsigned char)0x99, (unsigned char)0x4C, (unsigned char)0x62, (unsigned char)0xAC, (unsigned char)0xDB, (unsigned char)0x95, (unsigned char)0x27, (unsigned char)0xA9, (unsigned char)0xE3, (unsigned char)0xE4, (unsigned char)0x9E, (unsigned char)0x33, (unsigned char)0xB9, (unsigned char)0xE2, (unsigned char)0xE7, (unsigned char)0x28, (unsigned char)0xFB, (unsigned char)0xA3, (unsigned char)0xBE, (unsigned char)0x2F, (unsigned char)0x22, (unsigned char)0x98, (unsigned char)0x7A, (unsigned char)0x00, (unsigned char)0x8E, (unsigned char)0x1F, (unsigned char)0xE7, (unsigned char)0x59, (unsigned char)0x0F, (unsigned char)0x4A, (unsigned char)0x23 };
    dh->p=BN_bin2bn(dh1024_p, (signed int)sizeof(unsigned char [128l]) /*128ul*/ , (struct bignum_st *)(void *)0);
    static unsigned char dh1024_g[1l] = { (unsigned char)0x05 };
    dh->g=BN_bin2bn(dh1024_g, (signed int)sizeof(unsigned char [1l]) /*1ul*/ , (struct bignum_st *)(void *)0);
    if(dh->p == ((struct bignum_st *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = dh->g == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      DH_free(dh);
      return (struct dh_st *)(void *)0;
    }

    else
      return dh;
  }
}

// get_dh512
// file dh512.h line 4
struct dh_st * get_dh512()
{
  struct dh_st *dh;
  dh=DH_new();
  _Bool tmp_if_expr_1;
  if(dh == ((struct dh_st *)NULL))
    return (struct dh_st *)(void *)0;

  else
  {
    static unsigned char dh512_p[64l] = { (unsigned char)0xB4, (unsigned char)0x9D, (unsigned char)0xF9, (unsigned char)0x67, (unsigned char)0x18, (unsigned char)0x23, (unsigned char)0xCF, (unsigned char)0x2B, (unsigned char)0xD7, (unsigned char)0x20, (unsigned char)0x30, (unsigned char)0xC5, (unsigned char)0x45, (unsigned char)0x9A, (unsigned char)0xAC, (unsigned char)0x04, (unsigned char)0x54, (unsigned char)0xC7, (unsigned char)0x5E, (unsigned char)0xD6, (unsigned char)0x0B, (unsigned char)0x11, (unsigned char)0x6A, (unsigned char)0xAE, (unsigned char)0xDB, (unsigned char)0x5D, (unsigned char)0xEE, (unsigned char)0x30, (unsigned char)0x43, (unsigned char)0xB2, (unsigned char)0x35, (unsigned char)0x41, (unsigned char)0x12, (unsigned char)0x74, (unsigned char)0x49, (unsigned char)0x07, (unsigned char)0xFE, (unsigned char)0xDE, (unsigned char)0x8A, (unsigned char)0x90, (unsigned char)0xF5, (unsigned char)0x82, (unsigned char)0x3F, (unsigned char)0xB3, (unsigned char)0xE0, (unsigned char)0xC5, (unsigned char)0xB0, (unsigned char)0xB2, (unsigned char)0x57, (unsigned char)0xCA, (unsigned char)0x7E, (unsigned char)0x41, (unsigned char)0xE6, (unsigned char)0x3D, (unsigned char)0x0C, (unsigned char)0x8E, (unsigned char)0x7F, (unsigned char)0x86, (unsigned char)0x3E, (unsigned char)0x67, (unsigned char)0xB7, (unsigned char)0xA6, (unsigned char)0x95, (unsigned char)0xFB };
    dh->p=BN_bin2bn(dh512_p, (signed int)sizeof(unsigned char [64l]) /*64ul*/ , (struct bignum_st *)(void *)0);
    static unsigned char dh512_g[1l] = { (unsigned char)0x05 };
    dh->g=BN_bin2bn(dh512_g, (signed int)sizeof(unsigned char [1l]) /*1ul*/ , (struct bignum_st *)(void *)0);
    if(dh->p == ((struct bignum_st *)NULL))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = dh->g == (struct bignum_st *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      DH_free(dh);
      return (struct dh_st *)(void *)0;
    }

    else
      return dh;
  }
}

// get_headers
// file http.c line 401
static char ** get_headers(struct bio_st * const in, struct bio_st * const cl, const struct _listener *lstn)
{
  char **headers;
  char buf[8192l];
  signed int res;
  signed int n;
  signed int has_eol;
  memset((void *)buf, 0, (unsigned long int)8192);
  do
  {
    res=BIO_gets(in, buf, 8192 - 1);
    if(!(res >= 1))
      break;

    has_eol=strip_eol(buf);
    if(!(buf[0l] == 0))
      break;

  }
  while((_Bool)1);
  if(!(res >= 1))
    return (char **)(void *)0;

  else
    if(has_eol == 0)
    {
      unsigned long int return_value_pthread_self_1;
      return_value_pthread_self_1=pthread_self();
      logmsg(4, "(%lx) e414 headers: request URI too long", return_value_pthread_self_1);
      err_reply(cl, h414, lstn->err414);
      return (char **)(void *)0;
    }

  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)128, sizeof(char *) /*8ul*/ );
  headers = (char **)return_value_calloc_3;
  if(headers == ((char **)NULL))
  {
    unsigned long int return_value_pthread_self_2;
    return_value_pthread_self_2=pthread_self();
    logmsg(4, "(%lx) e500 headers: out of memory", return_value_pthread_self_2);
    err_reply(cl, h500, lstn->err500);
    return (char **)(void *)0;
  }

  void *return_value_malloc_5;
  return_value_malloc_5=malloc((unsigned long int)8192);
  headers[(signed long int)0] = (char *)return_value_malloc_5;
  if(*headers == ((char *)NULL))
  {
    free_headers(headers);
    unsigned long int return_value_pthread_self_4;
    return_value_pthread_self_4=pthread_self();
    logmsg(4, "(%lx) e500 header: out of memory", return_value_pthread_self_4);
    err_reply(cl, h500, lstn->err500);
    return (char **)(void *)0;
  }

  memset((void *)headers[(signed long int)0], 0, (unsigned long int)8192);
  strncpy(headers[(signed long int)0], buf, (unsigned long int)(8192 - 1));
  n = 1;
  for( ; !(n >= 128); n = n + 1)
  {
    signed int return_value_get_line_7;
    return_value_get_line_7=get_line(in, buf, 8192);
    if(!(return_value_get_line_7 == 0))
    {
      free_headers(headers);
      unsigned long int return_value_pthread_self_6;
      return_value_pthread_self_6=pthread_self();
      logmsg(4, "(%lx) e500 can't read header", return_value_pthread_self_6);
      err_reply(cl, h500, lstn->err500);
      return (char **)(void *)0;
    }

    if(buf[0l] == 0)
      return headers;

    void *return_value_malloc_9;
    return_value_malloc_9=malloc((unsigned long int)8192);
    headers[(signed long int)n] = (char *)return_value_malloc_9;
    if(headers[(signed long int)n] == ((char *)NULL))
    {
      free_headers(headers);
      unsigned long int return_value_pthread_self_8;
      return_value_pthread_self_8=pthread_self();
      logmsg(4, "(%lx) e500 header: out of memory", return_value_pthread_self_8);
      err_reply(cl, h500, lstn->err500);
      return (char **)(void *)0;
    }

    memset((void *)headers[(signed long int)n], 0, (unsigned long int)8192);
    strncpy(headers[(signed long int)n], buf, (unsigned long int)(8192 - 1));
  }
  free_headers(headers);
  unsigned long int return_value_pthread_self_10;
  return_value_pthread_self_10=pthread_self();
  logmsg(5, "(%lx) e500 too many headers", return_value_pthread_self_10);
  err_reply(cl, h500, lstn->err500);
  return (char **)(void *)0;
}

// get_host
// file pound.h line 522
extern signed int get_host(char * const name, struct addrinfo *res)
{
  struct addrinfo *chain;
  struct addrinfo *ap;
  struct addrinfo hints;
  signed int ret_val;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 0;
  hints.ai_socktype = 1;
  hints.ai_flags = 0x0002;
  ret_val=getaddrinfo(name, (const char *)(void *)0, &hints, &chain);
  if(ret_val == 0)
  {
    ap = chain;
    for( ; !(ap == ((struct addrinfo *)NULL)); ap = ap->ai_next)
      if(ap->ai_socktype == 1)
        break;

    if(ap == ((struct addrinfo *)NULL))
    {
      freeaddrinfo(chain);
      return -2;
    }

    *res = *ap;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)ap->ai_addrlen);
    res->ai_addr = (struct sockaddr *)return_value_malloc_1;
    if(res->ai_addr == ((struct sockaddr *)NULL))
    {
      freeaddrinfo(chain);
      return -10;
    }

    memcpy((void *)res->ai_addr, (const void *)ap->ai_addr, (unsigned long int)ap->ai_addrlen);
    freeaddrinfo(chain);
  }

  return ret_val;
}

// get_line
// file http.c line 140
static signed int get_line(struct bio_st * const in, char * const buf, const signed int bufsize)
{
  char tmp;
  signed int i;
  signed int n_read;
  memset((void *)buf, 0, (unsigned long int)bufsize);
  n_read = 0;
  signed int return_value_BIO_gets_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  signed int return_value_BIO_read_5;
  do
  {
    return_value_BIO_gets_1=BIO_gets(in, buf + (signed long int)n_read, (bufsize - n_read) - 1);
    if(!(return_value_BIO_gets_1 == -2))
    {
      if(return_value_BIO_gets_1 == 0 || return_value_BIO_gets_1 == -1)
        goto __CPROVER_DUMP_L3;

    }

    else
    {
      return -1;

    __CPROVER_DUMP_L3:
      ;
      return 1;
    }
    i = n_read;
    do
    {
      if(!(i >= bufsize))
        tmp_if_expr_2 = buf[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      if((signed int)buf[(signed long int)i] == 10)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)buf[(signed long int)i] == 13 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        buf[(signed long int)i] = (char)0;
        return 0;
      }

      i = i + 1;
    }
    while((_Bool)1);
    if(!(i >= bufsize))
      n_read = i;

    else
    {
      unsigned long int return_value_pthread_self_4;
      return_value_pthread_self_4=pthread_self();
      logmsg(5, "(%lx) line too long: %s", return_value_pthread_self_4, buf);
      tmp = (char)0;
      while(!((signed int)tmp == 10))
      {
        return_value_BIO_read_5=BIO_read(in, (void *)&tmp, 1);
        if(!(return_value_BIO_read_5 == 1))
          return 1;

      }
    }
  }
  while((_Bool)1);
  return 0;
}

// get_service
// file pound.h line 512
extern struct _service * get_service(const struct _listener *lstn, const char *request, char ** const headers)
{
  struct _service *svc = lstn->services;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    if(svc->disabled == 0)
    {
      signed int return_value_match_service_1;
      return_value_match_service_1=match_service(svc, request, headers);
      if(!(return_value_match_service_1 == 0))
        return svc;

    }

  svc = services;
  for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
    if(svc->disabled == 0)
    {
      signed int return_value_match_service_2;
      return_value_match_service_2=match_service(svc, request, headers);
      if(!(return_value_match_service_2 == 0))
        return svc;

    }

  return (struct _service *)(void *)0;
}

// get_thr_arg
// file pound.c line 153
extern struct _thr_arg * get_thr_arg(void)
{
  struct _thr_arg *res;
  pthread_mutex_lock(&arg_mut);
  while(first == ((struct _thr_arg *)NULL))
    pthread_cond_wait(&arg_cond, &arg_mut);
  res = first;
  if(!(res == ((struct _thr_arg *)NULL)))
  {
    first = first->next;
    if(first == ((struct _thr_arg *)NULL))
      last = (struct _thr_arg *)(void *)0;

  }

  pthread_mutex_unlock(&arg_mut);
  if(!(first == ((struct _thr_arg *)NULL)))
    pthread_cond_signal(&arg_cond);

  return res;
}

// h_shut
// file pound.c line 187
static void h_shut(const signed int sig)
{
  signed int status;
  struct _listener *lstn;
  logmsg(5, "received signal %d - shutting down...", sig);
  if(son >= 1)
  {
    lstn = listeners;
    for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
      close(lstn->sock);
    kill(son, sig);
    wait(&status);
    if(!(ctrl_name == ((char *)NULL)))
      unlink(ctrl_name);

    exit(0);
  }

  else
    shut_down = 1;
}

// h_term
// file pound.c line 173
static void h_term(const signed int sig)
{
  logmsg(5, "received signal %d - exiting...", sig);
  if(son >= 1)
    kill(son, sig);

  if(!(ctrl_name == ((char *)NULL)))
    unlink(ctrl_name);

  exit(0);
}

// hash_backend
// file svc.c line 548
static struct _backend * hash_backend(struct _backend *be, signed int abs_pri, char *key)
{
  unsigned long int hv;
  struct _backend *res;
  struct _backend *tb;
  signed int pri;
  hv = (unsigned long int)2166136261;
  char *tmp_post_1;
  for( ; !(*key == 0); hv = (hv ^ (unsigned long int)*tmp_post_1) * (unsigned long int)16777619 & (unsigned long int)0xFFFFFFFF)
  {
    tmp_post_1 = key;
    key = key + 1l;
  }
  pri = (signed int)(hv % (unsigned long int)abs_pri);
  tb = be;
  for( ; !(tb == ((struct _backend *)NULL)); tb = tb->next)
  {
    pri = pri - tb->priority;
    if(!(pri >= 0))
      break;

  }
  _Bool tmp_if_expr_2;
  if(tb == ((struct _backend *)NULL))
    return (struct _backend *)(void *)0;

  else
  {
    res = tb;
    do
    {
      if(res->alive == 0)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = res->disabled != 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      res = res->next;
      if(res == ((struct _backend *)NULL))
        res = be;

      if(res == tb)
        return (struct _backend *)(void *)0;

    }
    while((_Bool)1);
    return res;
  }
}

// hexchar
// file http.c line 53
static char hexchar(char a)
{
  a = (char)((signed int)a & 0xF);
  if((signed int)a >= 10)
    return (char)(((signed int)a + 97) - 10);

  else
    return (char)((signed int)a + 48);
}

// init_thr_arg
// file pound.c line 116
static void init_thr_arg(void)
{
  pthread_cond_init(&arg_cond, (const union anonymous_9 *)(void *)0);
  pthread_mutex_init(&arg_mut, (const union anonymous_9 *)(void *)0);
}

// init_timer
// file pound.h line 620
extern void init_timer(void)
{
  signed int n;
  last_expire=time((signed long int *)(void *)0);
  last_alive = last_expire;
  last_rescale = last_alive;
  last_RSA = last_rescale;
  n = 0;
  for( ; !(n >= 11); n = n + 1)
  {
    RSA512_keys[(signed long int)n]=RSA_generate_key(512, (unsigned long int)0x10001L, (void (*)(signed int, signed int, void *))(void *)0, (void *)0);
    if(RSA512_keys[(signed long int)n] == ((struct rsa_st *)NULL))
    {
      logmsg(4, "RSA_generate(%d, 512) failed", n);
      goto __CPROVER_DUMP_L5;
    }

    RSA1024_keys[(signed long int)n]=RSA_generate_key(1024, (unsigned long int)0x10001L, (void (*)(signed int, signed int, void *))(void *)0, (void *)0);
    if(RSA1024_keys[(signed long int)n] == ((struct rsa_st *)NULL))
    {
      logmsg(4, "RSA_generate(%d, 1024) failed", n);
      goto __CPROVER_DUMP_L5;
    }

  }
  pthread_mutex_init(&RSA_mut, (const union anonymous_9 *)(void *)0);
  DH512_params=get_dh512();
  DH1024_params=get_dh1024();
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// is_readable
// file http.c line 376
static signed int is_readable(struct bio_st * const bio, const signed int to_wait)
{
  struct pollfd p;
  signed long int return_value_BIO_ctrl_1;
  return_value_BIO_ctrl_1=BIO_ctrl(bio, 10, (signed long int)0, (void *)0);
  if((signed int)return_value_BIO_ctrl_1 >= 1)
    return 1;

  else
  {
    memset((void *)&p, 0, sizeof(struct pollfd) /*8ul*/ );
    BIO_ctrl(bio, 105, (signed long int)0, (void *)(char *)&p.fd);
    p.events = (signed short int)(0x001 | 0x002);
    signed int return_value_poll_2;
    return_value_poll_2=poll(&p, (unsigned long int)1, to_wait * 1000);
    return (signed int)(return_value_poll_2 > 0);
  }
}

// kill_be
// file pound.h line 548
extern void kill_be(struct _service * const svc, const struct _backend *be, const signed int disable_mode)
{
  struct _backend *b;
  signed int ret_val;
  char buf[8192l];
  ret_val=pthread_mutex_lock(&svc->mut);
  char *return_value_strerror_1;
  if(!(ret_val == 0))
  {
    return_value_strerror_1=strerror(ret_val);
    logmsg(4, "kill_be() lock: %s", return_value_strerror_1);
  }

  svc->tot_pri = 0;
  b = svc->backends;
  unsigned long int return_value_pthread_self_2;
  unsigned long int return_value_pthread_self_3;
  unsigned long int return_value_pthread_self_4;
  for( ; !(b == ((struct _backend *)NULL)); b = b->next)
  {
    if(b == be)
    {
      if(!(disable_mode == -1))
      {
        if(disable_mode == 1)
          goto __CPROVER_DUMP_L4;

        if(disable_mode == 0)
          goto __CPROVER_DUMP_L5;

      }

      else
      {
        b->disabled = 1;
        addr2str(buf, 8192 - 1, &b->addr, 0);
        return_value_pthread_self_2=pthread_self();
        logmsg(5, "(%lx) BackEnd %s disabled", return_value_pthread_self_2, (const void *)buf);
        goto __CPROVER_DUMP_L7;

      __CPROVER_DUMP_L4:
        ;
        b->alive = 0;
        addr2str(buf, 8192 - 1, &b->addr, 0);
        return_value_pthread_self_3=pthread_self();
        logmsg(5, "(%lx) BackEnd %s dead (killed)", return_value_pthread_self_3, (const void *)buf);
        t_clean(svc->sessions, (void *)&be, sizeof(const struct _backend *) /*8ul*/ );
        goto __CPROVER_DUMP_L7;

      __CPROVER_DUMP_L5:
        ;
        addr2str(buf, 8192 - 1, &b->addr, 0);
        return_value_pthread_self_4=pthread_self();
        logmsg(5, "(%lx) BackEnd %s enabled", return_value_pthread_self_4, (const void *)buf);
        b->disabled = 0;
        goto __CPROVER_DUMP_L7;
      }
      logmsg(4, "kill_be(): unknown mode %d", disable_mode);
    }


  __CPROVER_DUMP_L7:
    ;
    if(!(b->alive == 0))
    {
      if(b->disabled == 0)
        svc->tot_pri = svc->tot_pri + b->priority;

    }

  }
  ret_val=pthread_mutex_unlock(&svc->mut);
  char *return_value_strerror_5;
  if(!(ret_val == 0))
  {
    return_value_strerror_5=strerror(ret_val);
    logmsg(4, "kill_be() unlock: %s", return_value_strerror_5);
  }

  goto __CPROVER_DUMP_L11;

__CPROVER_DUMP_L11:
  ;
}

// l_id
// file pound.c line 102
static unsigned long int l_id(void)
{
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  return (unsigned long int)return_value_pthread_self_1;
}

// l_init
// file pound.c line 71
static void l_init(void)
{
  signed int i;
  signed int n_locks;
  n_locks=CRYPTO_num_locks();
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)n_locks, sizeof(union anonymous_20) /*40ul*/ );
  l_array = (union anonymous_20 *)return_value_calloc_1;
  if(l_array == ((union anonymous_20 *)NULL))
  {
    logmsg(3, "lock init: out of memory - aborted...");
    exit(1);
  }

  i = 0;
  for( ; !(i >= n_locks); i = i + 1)
    pthread_mutex_init(&l_array[(signed long int)i], (const union anonymous_9 *)(void *)0);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// l_lock
// file pound.c line 87
static void l_lock(const signed int mode, const signed int n, const char *file, signed int line)
{
  signed int ret_val;
  char *return_value_strerror_1;
  char *return_value_strerror_2;
  if(!((1 & mode) == 0))
  {
    ret_val=pthread_mutex_lock(&l_array[(signed long int)n]);
    if(!(ret_val == 0))
    {
      return_value_strerror_1=strerror(ret_val);
      logmsg(3, "l_lock lock(): %s", return_value_strerror_1);
    }

  }

  else
  {
    ret_val=pthread_mutex_unlock(&l_array[(signed long int)n]);
    if(!(ret_val == 0))
    {
      return_value_strerror_2=strerror(ret_val);
      logmsg(3, "l_lock unlock(): %s", return_value_strerror_2);
    }

  }
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// log_bytes
// file http.c line 505
static void log_bytes(char *res, const signed long long int cnt)
{
  if(cnt >= 1ll)
    snprintf(res, (unsigned long int)(32 - 1), "%lld", cnt);

  else
    strcpy(res, "-");
}

// log_time
// file http.c line 468
static void log_time(char *res)
{
  signed long int now;
  struct tm *t_now;
  struct tm t_res;
  now=time((signed long int *)(void *)0);
  t_now=localtime_r(&now, &t_res);
  strftime(res, (unsigned long int)(32 - 1), "%d/%b/%Y:%H:%M:%S %z", t_now);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// logmsg
// file pound.h line 492
extern void logmsg(const signed int priority, const char *fmt, ...)
{
  char buf[8193l];
  void **ap;
  struct tm *t_now;
  struct tm t_res;
  buf[(signed long int)8192] = (char)0;
  ap = (void **)&fmt;
  vsnprintf(buf, (unsigned long int)8192, fmt, ap);
  ap = ((void **)NULL);
  if(log_facility == -1)
    fprintf(priority == 6 || priority == 7 ? stdout : stderr, "%s\n", (const void *)buf);

  else
    if(!(print_log == 0))
      printf("%s\n", (const void *)buf);

    else
      syslog(log_facility | priority, "%s", (const void *)buf);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// main
// file pound.c line 213
signed int main(const signed int argc, char **argv)
{
  signed int n_listeners;
  signed int i;
  signed int clnt_length;
  signed int clnt;
  struct pollfd *polls;
  struct _listener *lstn;
  unsigned long int thr;
  union pthread_attr_t attr;
  struct sched_param sp;
  unsigned int user_id;
  unsigned int group_id;
  struct _IO_FILE *fpid;
  struct sockaddr_storage clnt_addr;
  char tmp[8192l];
  print_log = 0;
  umask((unsigned int)077);
  control_sock = -1;
  log_facility = -1;
  logmsg(5, "starting...");
  signal(1, h_shut);
  signal(2, h_shut);
  signal(15, h_term);
  signal(3, h_term);
  signal(13, (void (*)(signed int))1);
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  srandom((unsigned int)return_value_getpid_1);
  SSL_load_error_strings();
  SSL_library_init();
  OPENSSL_add_all_algorithms_noconf();
  l_init();
  init_thr_arg();
  CRYPTO_set_id_callback(l_id);
  CRYPTO_set_locking_callback(l_lock);
  init_timer();
  signed int return_value_pcreposix_regcomp_2;
  return_value_pcreposix_regcomp_2=pcreposix_regcomp(&HEADER, "^([a-z0-9!#_%&'*+.^_`|~-]+):[ \t]*(.*)[ \t]*_", 0x0001 | 0x0002 | 0);
  _Bool tmp_if_expr_4;
  signed int return_value_pcreposix_regcomp_3;
  if(!(return_value_pcreposix_regcomp_2 == 0))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_3=pcreposix_regcomp(&CHUNK_HEAD, "^([0-9a-f]+).*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_4 = return_value_pcreposix_regcomp_3 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  signed int return_value_pcreposix_regcomp_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_5=pcreposix_regcomp(&RESP_SKIP, "^HTTP/1.1 100.*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_6 = return_value_pcreposix_regcomp_5 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_8;
  signed int return_value_pcreposix_regcomp_7;
  if(tmp_if_expr_6)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_7=pcreposix_regcomp(&RESP_IGN, "^HTTP/1.[01] (10[1-9]|1[1-9][0-9]|204|30[456]).*_", 0x0001 | 0x0002 | 0);
    tmp_if_expr_8 = return_value_pcreposix_regcomp_7 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_10;
  signed int return_value_pcreposix_regcomp_9;
  if(tmp_if_expr_8)
    tmp_if_expr_10 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_9=pcreposix_regcomp(&LOCATION, "(http|https)://([^/]+)(.*)", 0x0001 | 0x0002 | 0);
    tmp_if_expr_10 = return_value_pcreposix_regcomp_9 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_12;
  signed int return_value_pcreposix_regcomp_11;
  if(tmp_if_expr_10)
    tmp_if_expr_12 = (_Bool)1;

  else
  {
    return_value_pcreposix_regcomp_11=pcreposix_regcomp(&AUTHORIZATION, "Authorization:[ \t]*Basic[ \t]*\"?([^ \t]*)\"?[ \t]*", 0x0001 | 0x0002 | 0);
    tmp_if_expr_12 = return_value_pcreposix_regcomp_11 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_12)
  {
    logmsg(3, "bad essential Regex - aborted");
    exit(1);
  }

  config_parse(argc, argv);
  if(!(log_facility == -1))
    openlog("pound", 0x02 | 0x08, 3 << 3);

  if(!(ctrl_name == ((char *)NULL)))
  {
    struct sockaddr_un ctrl;
    memset((void *)&ctrl, 0, sizeof(struct sockaddr_un) /*110ul*/ );
    ctrl.sun_family = (unsigned short int)1;
    strncpy(ctrl.sun_path, ctrl_name, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
    unlink(ctrl.sun_path);
    control_sock=socket(1, 1, 0);
    if(!(control_sock >= 0))
    {
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      char *return_value_strerror_14;
      return_value_strerror_14=strerror(*return_value___errno_location_13);
      logmsg(3, "Control \"%s\" create: %s", (const void *)ctrl.sun_path, return_value_strerror_14);
      exit(1);
    }

    signed int return_value_bind_17;
    return_value_bind_17=bind(control_sock, (struct sockaddr *)&ctrl, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
    if(!(return_value_bind_17 >= 0))
    {
      signed int *return_value___errno_location_15;
      return_value___errno_location_15=__errno_location();
      char *return_value_strerror_16;
      return_value_strerror_16=strerror(*return_value___errno_location_15);
      logmsg(3, "Control \"%s\" bind: %s", (const void *)ctrl.sun_path, return_value_strerror_16);
      exit(1);
    }

    listen(control_sock, 512);
  }

  lstn = listeners;
  n_listeners = 0;
  for( ; !(lstn == ((struct _listener *)NULL)); n_listeners = n_listeners + 1)
  {
    signed int opt;
    lstn->sock=socket(lstn->addr.ai_family == 2 ? 2 : 10, 1, 0);
    if(!(lstn->sock >= 0))
    {
      addr2str(tmp, 8192 - 1, &lstn->addr, 0);
      signed int *return_value___errno_location_18;
      return_value___errno_location_18=__errno_location();
      char *return_value_strerror_19;
      return_value_strerror_19=strerror(*return_value___errno_location_18);
      logmsg(3, "HTTP socket %s create: %s - aborted", (const void *)tmp, return_value_strerror_19);
      exit(1);
    }

    opt = 1;
    setsockopt(lstn->sock, 1, 2, (void *)&opt, (unsigned int)sizeof(signed int) /*4ul*/ );
    signed int return_value_bind_22;
    return_value_bind_22=bind(lstn->sock, lstn->addr.ai_addr, (unsigned int)lstn->addr.ai_addrlen);
    if(!(return_value_bind_22 >= 0))
    {
      addr2str(tmp, 8192 - 1, &lstn->addr, 0);
      signed int *return_value___errno_location_20;
      return_value___errno_location_20=__errno_location();
      char *return_value_strerror_21;
      return_value_strerror_21=strerror(*return_value___errno_location_20);
      logmsg(3, "HTTP socket bind %s: %s - aborted", (const void *)tmp, return_value_strerror_21);
      exit(1);
    }

    listen(lstn->sock, 512);
    lstn = lstn->next;
  }
  void *return_value_calloc_23;
  return_value_calloc_23=calloc((unsigned long int)n_listeners, sizeof(struct pollfd) /*8ul*/ );
  polls = (struct pollfd *)return_value_calloc_23;
  if(polls == ((struct pollfd *)NULL))
  {
    logmsg(3, "Out of memory for poll - aborted");
    exit(1);
  }

  lstn = listeners;
  i = 0;
  for( ; !(lstn == ((struct _listener *)NULL)); i = i + 1)
  {
    (polls + (signed long int)i)->fd = lstn->sock;
    lstn = lstn->next;
  }
  if(!(user == ((char *)NULL)))
  {
    struct passwd *pw;
    pw=getpwnam(user);
    if(pw == ((struct passwd *)NULL))
    {
      logmsg(3, "no such user %s - aborted", user);
      exit(1);
    }

    user_id = pw->pw_uid;
  }

  if(!(group == ((char *)NULL)))
  {
    struct group *gr;
    gr=getgrnam(group);
    if(gr == ((struct group *)NULL))
    {
      logmsg(3, "no such group %s - aborted", group);
      exit(1);
    }

    group_id = gr->gr_gid;
  }

  print_log = 0;
  signed int *return_value___errno_location_25;
  char *return_value_strerror_26;
  if(!(daemonize == 0))
  {
    signed int return_value_fork_24;
    return_value_fork_24=fork();
    if(!(return_value_fork_24 == 0))
    {
      if(return_value_fork_24 == -1)
        goto __CPROVER_DUMP_L29;

    }

    else
    {
      if(!(log_facility == -1))
      {
        close(0);
        close(1);
        close(2);
      }

      goto __CPROVER_DUMP_L31;

    __CPROVER_DUMP_L29:
      ;
      return_value___errno_location_25=__errno_location();
      return_value_strerror_26=strerror(*return_value___errno_location_25);
      logmsg(3, "fork: %s - aborted", return_value_strerror_26);
      exit(1);
    }
    exit(0);

  __CPROVER_DUMP_L31:
    ;
    setsid();
  }

  fpid=fopen(pid_name, "wt");
  signed int *return_value___errno_location_28;
  char *return_value_strerror_29;
  if(!(fpid == ((struct _IO_FILE *)NULL)))
  {
    signed int return_value_getpid_27;
    return_value_getpid_27=getpid();
    fprintf(fpid, "%d\n", return_value_getpid_27);
    fclose(fpid);
  }

  else
  {
    return_value___errno_location_28=__errno_location();
    return_value_strerror_29=strerror(*return_value___errno_location_28);
    logmsg(5, "Create \"%s\": %s", pid_name, return_value_strerror_29);
  }
  if(!(root_jail == ((char *)NULL)))
  {
    signed int return_value_chroot_32;
    return_value_chroot_32=chroot(root_jail);
    if(!(return_value_chroot_32 == 0))
    {
      signed int *return_value___errno_location_30;
      return_value___errno_location_30=__errno_location();
      char *return_value_strerror_31;
      return_value_strerror_31=strerror(*return_value___errno_location_30);
      logmsg(3, "chroot: %s - aborted", return_value_strerror_31);
      exit(1);
    }

    signed int return_value_chdir_35;
    return_value_chdir_35=chdir("/");
    if(!(return_value_chdir_35 == 0))
    {
      signed int *return_value___errno_location_33;
      return_value___errno_location_33=__errno_location();
      char *return_value_strerror_34;
      return_value_strerror_34=strerror(*return_value___errno_location_33);
      logmsg(3, "chroot/chdir: %s - aborted", return_value_strerror_34);
      exit(1);
    }

  }

  signed int return_value_setgid_38;
  _Bool tmp_if_expr_40;
  signed int return_value_setegid_39;
  if(!(group == ((char *)NULL)))
  {
    return_value_setgid_38=setgid(group_id);
    if(!(return_value_setgid_38 == 0))
      tmp_if_expr_40 = (_Bool)1;

    else
    {
      return_value_setegid_39=setegid(group_id);
      tmp_if_expr_40 = return_value_setegid_39 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_40)
    {
      signed int *return_value___errno_location_36;
      return_value___errno_location_36=__errno_location();
      char *return_value_strerror_37;
      return_value_strerror_37=strerror(*return_value___errno_location_36);
      logmsg(3, "setgid: %s - aborted", return_value_strerror_37);
      exit(1);
    }

  }

  signed int return_value_setuid_43;
  _Bool tmp_if_expr_45;
  signed int return_value_seteuid_44;
  if(!(user == ((char *)NULL)))
  {
    return_value_setuid_43=setuid(user_id);
    if(!(return_value_setuid_43 == 0))
      tmp_if_expr_45 = (_Bool)1;

    else
    {
      return_value_seteuid_44=seteuid(user_id);
      tmp_if_expr_45 = return_value_seteuid_44 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_45)
    {
      signed int *return_value___errno_location_41;
      return_value___errno_location_41=__errno_location();
      char *return_value_strerror_42;
      return_value_strerror_42=strerror(*return_value___errno_location_41);
      logmsg(3, "setuid: %s - aborted", return_value_strerror_42);
      exit(1);
    }

  }

  signed int return_value_pthread_create_52;
  signed int return_value_pthread_create_55;
  _Bool tmp_if_expr_62;
  do
  {
    son=fork();
    if(son >= 1)
    {
      signed int status;
      wait(&status);
      /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous_21
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
      ;
      if((0x7f & status) == 0)
        logmsg(3, "MONITOR: worker exited normally %d, restarting...", (((union anonymous_21){ .__in=status }).__i & 0xff00) >> 8);

      else
        if((signed int)((127 & (signed char)status) + 1) >> 1 >= 1)
          logmsg(3, "MONITOR: worker exited on signal %d, restarting...", ((union anonymous_21){ .__in=status }).__i & 0x7f);

        else
          logmsg(3, "MONITOR: worker exited (stopped?) %d, restarting...", status);
    }

    else
      if(son == 0)
      {
        pthread_attr_init(&attr);
        pthread_attr_setdetachstate(&attr, 1);
        signed int return_value_pthread_attr_setstacksize_46;
        return_value_pthread_attr_setstacksize_46=pthread_attr_setstacksize(&attr, (unsigned long int)(1 << 18));
        if(!(return_value_pthread_attr_setstacksize_46 == 0))
        {
          logmsg(3, "can't set stack size - aborted");
          exit(1);
        }

        signed int return_value_pthread_create_49;
        return_value_pthread_create_49=pthread_create(&thr, &attr, thr_timer, (void *)0);
        if(!(return_value_pthread_create_49 == 0))
        {
          signed int *return_value___errno_location_47;
          return_value___errno_location_47=__errno_location();
          char *return_value_strerror_48;
          return_value_strerror_48=strerror(*return_value___errno_location_47);
          logmsg(3, "create thr_resurect: %s - aborted", return_value_strerror_48);
          exit(1);
        }

        if(control_sock >= 0)
        {
          return_value_pthread_create_52=pthread_create(&thr, &attr, thr_control, (void *)0);
          if(!(return_value_pthread_create_52 == 0))
          {
            signed int *return_value___errno_location_50;
            return_value___errno_location_50=__errno_location();
            char *return_value_strerror_51;
            return_value_strerror_51=strerror(*return_value___errno_location_50);
            logmsg(3, "create thr_control: %s - aborted", return_value_strerror_51);
            exit(1);
          }

        }

        sleep((unsigned int)1);
        i = 0;
        for( ; !(i >= numthreads); i = i + 1)
        {
          return_value_pthread_create_55=pthread_create(&thr, &attr, thr_http, (void *)0);
          if(!(return_value_pthread_create_55 == 0))
          {
            signed int *return_value___errno_location_53;
            return_value___errno_location_53=__errno_location();
            char *return_value_strerror_54;
            return_value_strerror_54=strerror(*return_value___errno_location_53);
            logmsg(3, "create thr_http: %s - aborted", return_value_strerror_54);
            exit(1);
          }

        }
        sleep((unsigned int)1);
        while((_Bool)1)
        {
          if(!(shut_down == 0))
          {
            logmsg(5, "shutting down...");
            lstn = listeners;
            for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
              close(lstn->sock);
            if(grace >= 1)
            {
              sleep((unsigned int)grace);
              logmsg(5, "grace period expired - exiting...");
            }

            if(!(ctrl_name == ((char *)NULL)))
              unlink(ctrl_name);

            exit(0);
          }

          lstn = listeners;
          i = 0;
          for( ; !(i >= n_listeners); i = i + 1)
          {
            (polls + (signed long int)i)->events = (signed short int)(0x001 | 0x002);
            (polls + (signed long int)i)->revents = (signed short int)0;
            lstn = lstn->next;
          }
          signed int return_value_poll_63;
          return_value_poll_63=poll(polls, (unsigned long int)n_listeners, -1);
          if(!(return_value_poll_63 >= 0))
          {
            signed int *return_value___errno_location_56;
            return_value___errno_location_56=__errno_location();
            char *return_value_strerror_57;
            return_value_strerror_57=strerror(*return_value___errno_location_56);
            logmsg(4, "poll: %s", return_value_strerror_57);
          }

          else
          {
            lstn = listeners;
            i = 0;
            for( ; !(lstn == ((struct _listener *)NULL)); i = i + 1)
            {
              if(!((3 & (signed int)(polls + (signed long int)i)->revents) == 0))
              {
                memset((void *)&clnt_addr, 0, sizeof(struct sockaddr_storage) /*128ul*/ );
                clnt_length = (signed int)sizeof(struct sockaddr_storage) /*128ul*/ ;
                clnt=accept(lstn->sock, (struct sockaddr *)&clnt_addr, (unsigned int *)&clnt_length);
                if(!(clnt >= 0))
                {
                  signed int *return_value___errno_location_58;
                  return_value___errno_location_58=__errno_location();
                  char *return_value_strerror_59;
                  return_value_strerror_59=strerror(*return_value___errno_location_58);
                  logmsg(4, "HTTP accept: %s", return_value_strerror_59);
                }

                else
                {
                  if((signed int)((struct sockaddr_in *)&clnt_addr)->sin_family == 2)
                    tmp_if_expr_62 = (_Bool)1;

                  else
                    tmp_if_expr_62 = (signed int)((struct sockaddr_in *)&clnt_addr)->sin_family == 10 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_62)
                  {
                    struct _thr_arg arg;
                    if(!(lstn->disabled == 0))
                      close(clnt);

                    arg.sock = clnt;
                    arg.lstn = lstn;
                    void *return_value_malloc_60;
                    return_value_malloc_60=malloc((unsigned long int)clnt_length);
                    arg.from_host.ai_addr = (struct sockaddr *)return_value_malloc_60;
                    if(arg.from_host.ai_addr == ((struct sockaddr *)NULL))
                    {
                      logmsg(4, "HTTP arg address: malloc");
                      close(clnt);
                      goto __CPROVER_DUMP_L73;
                    }

                    memcpy((void *)arg.from_host.ai_addr, (const void *)&clnt_addr, (unsigned long int)clnt_length);
                    arg.from_host.ai_addrlen = (unsigned int)clnt_length;
                    if((signed int)((struct sockaddr_in *)&clnt_addr)->sin_family == 2)
                      arg.from_host.ai_family = 2;

                    else
                      arg.from_host.ai_family = 10;
                    signed int return_value_put_thr_arg_61;
                    return_value_put_thr_arg_61=put_thr_arg(&arg);
                    if(!(return_value_put_thr_arg_61 == 0))
                      close(clnt);

                  }

                  else
                  {
                    logmsg(4, "HTTP connection prematurely closed by peer");
                    close(clnt);
                  }
                }
              }


            __CPROVER_DUMP_L73:
              ;
              lstn = lstn->next;
            }
          }
        }
      }

      else
      {
        signed int *return_value___errno_location_64;
        return_value___errno_location_64=__errno_location();
        char *return_value_strerror_65;
        return_value_strerror_65=strerror(*return_value___errno_location_64);
        logmsg(3, "Can't fork worker (%s) - aborted", return_value_strerror_65);
        exit(1);
      }
  }
  while((_Bool)1);
}

// match_service
// file svc.c line 415
static signed int match_service(const struct _service *svc, const char *request, char ** const headers)
{
  struct _matcher *m;
  signed int i;
  signed int found;
  m = svc->url;
  signed int return_value_pcreposix_regexec_1;
  for( ; !(m == ((struct _matcher *)NULL)); m = m->next)
  {
    return_value_pcreposix_regexec_1=pcreposix_regexec(&m->pat, request, (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
    if(!(return_value_pcreposix_regexec_1 == 0))
      return 0;

  }
  m = svc->req_head;
  signed int return_value_pcreposix_regexec_2;
  for( ; !(m == ((struct _matcher *)NULL)); m = m->next)
  {
    i = 0;
    found = i;
    for( ; found == 0 && !(i >= 128); i = i + 1)
      if(!(headers[(signed long int)i] == ((char *)NULL)))
      {
        return_value_pcreposix_regexec_2=pcreposix_regexec(&m->pat, headers[(signed long int)i], (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
        if(return_value_pcreposix_regexec_2 == 0)
          found = 1;

      }

    if(found == 0)
      return 0;

  }
  m = svc->deny_head;
  signed int return_value_pcreposix_regexec_3;
  for( ; !(m == ((struct _matcher *)NULL)); m = m->next)
  {
    i = 0;
    found = i;
    for( ; found == 0 && !(i >= 128); i = i + 1)
      if(!(headers[(signed long int)i] == ((char *)NULL)))
      {
        return_value_pcreposix_regexec_3=pcreposix_regexec(&m->pat, headers[(signed long int)i], (unsigned long int)0, (struct anonymous_4 *)(void *)0, 0);
        if(return_value_pcreposix_regexec_3 == 0)
          found = 1;

      }

    if(!(found == 0))
      return 0;

  }
  return 1;
}

// need_rewrite
// file pound.h line 530
extern signed int need_rewrite(const signed int rewr_loc, char * const location, char * const path, const char *v_host, const struct _listener *lstn, const struct _backend *be)
{
  struct addrinfo addr;
  struct sockaddr_in in_addr;
  struct sockaddr_in be_addr;
  struct sockaddr_in6 in6_addr;
  struct sockaddr_in6 be6_addr;
  struct anonymous_4 need_rewrite__1__matches[4l];
  char *proto;
  char *host;
  char *port;
  char *cp;
  char buf[8192l];
  signed int ret_val;
  char *tmp_post_2;
  _Bool tmp_if_expr_9;
  signed int return_value_strcasecmp_8;
  signed int return_value_memcmp_4;
  _Bool tmp_if_expr_6;
  signed int return_value_strcasecmp_5;
  _Bool tmp_if_expr_15;
  signed int return_value_strcasecmp_14;
  signed int return_value_memcmp_10;
  _Bool tmp_if_expr_12;
  signed int return_value_strcasecmp_11;
  _Bool tmp_if_expr_16;
  signed int return_value_memcmp_17;
  _Bool tmp_if_expr_19;
  signed int return_value_strcasecmp_18;
  signed int return_value_memcmp_21;
  _Bool tmp_if_expr_23;
  signed int return_value_strcasecmp_22;
  if(rewr_loc == 0)
    return 0;

  else
    if(!(be->addr.ai_family == 2))
    {
      if(be->addr.ai_family == 10)
        goto __CPROVER_DUMP_L2;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int return_value_pcreposix_regexec_1;
      return_value_pcreposix_regexec_1=pcreposix_regexec(&LOCATION, location, (unsigned long int)4, need_rewrite__1__matches, 0);
      if(!(return_value_pcreposix_regexec_1 == 0))
        return 0;

      else
      {
        proto = location + (signed long int)need_rewrite__1__matches[(signed long int)1].rm_so;
        host = location + (signed long int)need_rewrite__1__matches[(signed long int)2].rm_so;
        if((signed int)location[(signed long int)need_rewrite__1__matches[3l].rm_so] == 47)
          need_rewrite__1__matches[(signed long int)3].rm_so = need_rewrite__1__matches[(signed long int)3].rm_so + 1;

        strcpy(path, location + (signed long int)need_rewrite__1__matches[(signed long int)3].rm_so);
        location[(signed long int)need_rewrite__1__matches[(signed long int)2].rm_eo] = (char)0;
        location[(signed long int)need_rewrite__1__matches[(signed long int)1].rm_eo] = location[(signed long int)need_rewrite__1__matches[(signed long int)2].rm_eo];
        port=strchr(host, 58);
        if(!(port == ((char *)NULL)))
        {
          tmp_post_2 = port;
          port = port + 1l;
          *tmp_post_2 = (char)0;
        }

        memset((void *)&addr, 0, sizeof(struct addrinfo) /*48ul*/ );
        signed int return_value_get_host_3;
        return_value_get_host_3=get_host(host, &addr);
        if(!(return_value_get_host_3 == 0))
          return 0;

        else
          if(!(addr.ai_family == be->addr.ai_family))
          {
            free((void *)addr.ai_addr);
            return 0;
          }

          else
          {
            memset((void *)buf, 0, (unsigned long int)8192);
            strncpy(buf, v_host, (unsigned long int)(8192 - 1));
            cp=strchr(buf, 58);
            if(!(cp == ((char *)NULL)))
              *cp = (char)0;

            if(addr.ai_family == 2)
            {
              memcpy((void *)&be_addr, (const void *)lstn->addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
              signed int return_value_memcmp_7;
              return_value_memcmp_7=memcmp((const void *)&be_addr.sin_addr.s_addr, (const void *)&in_addr.sin_addr.s_addr, sizeof(unsigned int) /*4ul*/ );
              if(return_value_memcmp_7 == 0)
                tmp_if_expr_9 = (_Bool)1;

              else
              {
                return_value_strcasecmp_8=strcasecmp(host, buf);
                tmp_if_expr_9 = return_value_strcasecmp_8 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_9)
              {
                return_value_memcmp_4=memcmp((const void *)&be_addr.sin_port, (const void *)&in_addr.sin_port, sizeof(unsigned short int) /*2ul*/ );
                if(!(return_value_memcmp_4 == 0))
                  tmp_if_expr_6 = (_Bool)1;

                else
                {
                  return_value_strcasecmp_5=strcasecmp(proto, lstn->ctx == (struct _pound_ctx *)(void *)0 ? "http" : "https");
                  tmp_if_expr_6 = return_value_strcasecmp_5 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_6)
                {
                  free((void *)addr.ai_addr);
                  return 1;
                }

              }

            }

            else
            {
              memcpy((void *)&be6_addr, (const void *)lstn->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
              signed int return_value_memcmp_13;
              return_value_memcmp_13=memcmp((const void *)&be6_addr.sin6_addr.__in6_u.__u6_addr8, (const void *)&in6_addr.sin6_addr.__in6_u.__u6_addr8, sizeof(unsigned char [16l]) /*16ul*/ );
              if(return_value_memcmp_13 == 0)
                tmp_if_expr_15 = (_Bool)1;

              else
              {
                return_value_strcasecmp_14=strcasecmp(host, buf);
                tmp_if_expr_15 = return_value_strcasecmp_14 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_15)
              {
                return_value_memcmp_10=memcmp((const void *)&be6_addr.sin6_port, (const void *)&in6_addr.sin6_port, sizeof(unsigned short int) /*2ul*/ );
                if(!(return_value_memcmp_10 == 0))
                  tmp_if_expr_12 = (_Bool)1;

                else
                {
                  return_value_strcasecmp_11=strcasecmp(proto, lstn->ctx == (struct _pound_ctx *)(void *)0 ? "http" : "https");
                  tmp_if_expr_12 = return_value_strcasecmp_11 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr_12)
                {
                  free((void *)addr.ai_addr);
                  return 1;
                }

              }

            }
            if(!(rewr_loc == 1))
              tmp_if_expr_16 = (_Bool)1;

            else
              tmp_if_expr_16 = addr.ai_family != lstn->addr.ai_family ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_16)
            {
              free((void *)addr.ai_addr);
              return 0;
            }

            else
            {
              if(addr.ai_family == 2)
              {
                memcpy((void *)&in_addr, (const void *)addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
                memcpy((void *)&be_addr, (const void *)lstn->addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
                signed int return_value_memcmp_20;
                return_value_memcmp_20=memcmp((const void *)&be_addr.sin_addr.s_addr, (const void *)&in_addr.sin_addr.s_addr, sizeof(unsigned int) /*4ul*/ );
                if(return_value_memcmp_20 == 0)
                {
                  return_value_memcmp_17=memcmp((const void *)&be_addr.sin_port, (const void *)&in_addr.sin_port, sizeof(unsigned short int) /*2ul*/ );
                  if(!(return_value_memcmp_17 == 0))
                    tmp_if_expr_19 = (_Bool)1;

                  else
                  {
                    return_value_strcasecmp_18=strcasecmp(proto, lstn->ctx != ((struct _pound_ctx *)NULL) ? "http" : "https");
                    tmp_if_expr_19 = return_value_strcasecmp_18 != 0 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_19)
                  {
                    free((void *)addr.ai_addr);
                    return 1;
                  }

                }

              }

              else
              {
                memcpy((void *)&in6_addr, (const void *)addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
                memcpy((void *)&be6_addr, (const void *)lstn->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
                signed int return_value_memcmp_24;
                return_value_memcmp_24=memcmp((const void *)&be6_addr.sin6_addr.__in6_u.__u6_addr8, (const void *)&in6_addr.sin6_addr.__in6_u.__u6_addr8, sizeof(unsigned char [16l]) /*16ul*/ );
                if(return_value_memcmp_24 == 0)
                {
                  return_value_memcmp_21=memcmp((const void *)&be6_addr.sin6_port, (const void *)&in6_addr.sin6_port, sizeof(unsigned short int) /*2ul*/ );
                  if(!(return_value_memcmp_21 == 0))
                    tmp_if_expr_23 = (_Bool)1;

                  else
                  {
                    return_value_strcasecmp_22=strcasecmp(proto, lstn->ctx != ((struct _pound_ctx *)NULL) ? "http" : "https");
                    tmp_if_expr_23 = return_value_strcasecmp_22 != 0 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_23)
                  {
                    free((void *)addr.ai_addr);
                    return 1;
                  }

                }

              }
              free((void *)addr.ai_addr);
              return 0;
            }
          }
      }
    }
}

// parse_HTTP
// file config.c line 656
static struct _listener * parse_HTTP(void)
{
  char lin[8192l];
  struct _listener *res;
  struct _service *svc;
  struct _matcher *m;
  signed int has_addr;
  signed int has_port;
  struct sockaddr_in in;
  struct sockaddr_in6 in6;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _listener) /*232ul*/ );
  res = (struct _listener *)return_value_malloc_1;
  if(res == ((struct _listener *)NULL))
    conf_err("ListenHTTP config: out of memory - aborted");

  memset((void *)res, 0, sizeof(struct _listener) /*232ul*/ );
  res->to = clnt_to;
  res->rewr_loc = 1;
  res->err414 = "Request URI is too long";
  res->err500 = "An internal server error occurred. Please try again later.";
  res->err501 = "This method may not be used.";
  res->err503 = "The service is not available. Please try again later.";
  res->log_level = log_level;
  signed int return_value_pcreposix_regcomp_2;
  return_value_pcreposix_regcomp_2=pcreposix_regcomp(&res->verb, xhttp[(signed long int)0], 0x0001 | 0x0002 | 0);
  if(!(return_value_pcreposix_regcomp_2 == 0))
    conf_err("xHTTP bad default pattern - aborted");

  has_port = 0;
  has_addr = has_port;
  char *return_value_conf_fgets_3;
  unsigned long int return_value_strlen_5;
  unsigned long int return_value_strlen_4;
  signed int return_value_pcreposix_regexec_35;
  signed int return_value_atoi_8;
  unsigned short int return_value_htons_9;
  signed int return_value_atoi_10;
  signed int return_value_pcreposix_regexec_34;
  signed int return_value_pcreposix_regexec_33;
  signed int return_value_pcreposix_regexec_32;
  signed int return_value_pcreposix_regexec_31;
  signed int return_value_pcreposix_regexec_30;
  signed int return_value_pcreposix_regexec_29;
  signed int return_value_pcreposix_regexec_28;
  signed int return_value_pcreposix_regexec_27;
  signed int return_value_pcreposix_regexec_26;
  signed int return_value_pcreposix_regexec_25;
  signed int return_value_pcreposix_regexec_24;
  signed int return_value_pcreposix_regexec_23;
  signed int return_value_pcreposix_regexec_22;
  signed int return_value_pcreposix_regexec_21;
  signed int return_value_pcreposix_regexec_20;
  signed int return_value_pcreposix_regexec_19;
  do
  {
    return_value_conf_fgets_3=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_3 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(lin);
    if(return_value_strlen_6 >= 1ul)
    {
      return_value_strlen_5=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_5] == 10)
      {
        return_value_strlen_4=strlen(lin);
        lin[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_36;
    return_value_pcreposix_regexec_36=pcreposix_regexec(&Address, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_36 == 0)
    {
      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      signed int return_value_get_host_7;
      return_value_get_host_7=get_host(lin + (signed long int)matches[(signed long int)1].rm_so, &res->addr);
      if(!(return_value_get_host_7 == 0))
        conf_err("Unknown Listener address");

      if(!(res->addr.ai_family == 2))
      {
        if(!(res->addr.ai_family == 10))
          conf_err("Unknown Listener address family");

      }

      has_addr = 1;
    }

    else
    {
      return_value_pcreposix_regexec_35=pcreposix_regexec(&Port, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_35 == 0)
      {
        switch(res->addr.ai_family)
        {
          case 2:
          {
            memcpy((void *)&in, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
            return_value_atoi_8=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
            return_value_htons_9=htons((unsigned short int)return_value_atoi_8);
            in.sin_port = (unsigned short int)return_value_htons_9;
            memcpy((void *)res->addr.ai_addr, (const void *)&in, sizeof(struct sockaddr_in) /*16ul*/ );
            break;
          }
          case 10:
          {
            memcpy((void *)&in6, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
            return_value_atoi_10=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
            in6.sin6_port=htons((unsigned short int)return_value_atoi_10);
            memcpy((void *)res->addr.ai_addr, (const void *)&in6, sizeof(struct sockaddr_in6) /*28ul*/ );
            break;
          }
          default:
            conf_err("Unknown Listener address family");
        }
        has_port = 1;
      }

      else
      {
        return_value_pcreposix_regexec_34=pcreposix_regexec(&xHTTP, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_34 == 0)
        {
          signed int n;
          n=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
          pcreposix_regfree(&res->verb);
          signed int return_value_pcreposix_regcomp_11;
          return_value_pcreposix_regcomp_11=pcreposix_regcomp(&res->verb, xhttp[(signed long int)n], 0x0001 | 0x0002 | 0);
          if(!(return_value_pcreposix_regcomp_11 == 0))
            conf_err("xHTTP bad pattern - aborted");

        }

        else
        {
          return_value_pcreposix_regexec_33=pcreposix_regexec(&Client, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_33 == 0)
            res->to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

          else
          {
            return_value_pcreposix_regexec_32=pcreposix_regexec(&CheckURL, lin, (unsigned long int)4, matches, 0);
            if(return_value_pcreposix_regexec_32 == 0)
            {
              if(!(res->has_pat == 0))
                conf_err("CheckURL multiple pattern - aborted");

              lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
              signed int return_value_pcreposix_regcomp_12;
              return_value_pcreposix_regcomp_12=pcreposix_regcomp(&res->url_pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0002 | 0 | (ignore_case != 0 ? 0x0001 : 0));
              if(!(return_value_pcreposix_regcomp_12 == 0))
                conf_err("CheckURL bad pattern - aborted");

              res->has_pat = 1;
            }

            else
            {
              return_value_pcreposix_regexec_31=pcreposix_regexec(&Err414, lin, (unsigned long int)4, matches, 0);
              if(return_value_pcreposix_regexec_31 == 0)
              {
                lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                res->err414=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
              }

              else
              {
                return_value_pcreposix_regexec_30=pcreposix_regexec(&Err500, lin, (unsigned long int)4, matches, 0);
                if(return_value_pcreposix_regexec_30 == 0)
                {
                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                  res->err500=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                }

                else
                {
                  return_value_pcreposix_regexec_29=pcreposix_regexec(&Err501, lin, (unsigned long int)4, matches, 0);
                  if(return_value_pcreposix_regexec_29 == 0)
                  {
                    lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                    res->err501=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                  }

                  else
                  {
                    return_value_pcreposix_regexec_28=pcreposix_regexec(&Err503, lin, (unsigned long int)4, matches, 0);
                    if(return_value_pcreposix_regexec_28 == 0)
                    {
                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                      res->err503=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                    }

                    else
                    {
                      return_value_pcreposix_regexec_27=pcreposix_regexec(&MaxRequest, lin, (unsigned long int)4, matches, 0);
                      if(return_value_pcreposix_regexec_27 == 0)
                        res->max_req=atoll(lin + (signed long int)matches[(signed long int)1].rm_so);

                      else
                      {
                        return_value_pcreposix_regexec_26=pcreposix_regexec(&HeadRemove, lin, (unsigned long int)4, matches, 0);
                        if(return_value_pcreposix_regexec_26 == 0)
                        {
                          if(!(res->head_off == ((struct _matcher *)NULL)))
                          {
                            m = res->head_off;
                            for( ; !(m->next == ((struct _matcher *)NULL)); m = m->next)
                              ;
                            void *return_value_malloc_13;
                            return_value_malloc_13=malloc(sizeof(struct _matcher) /*32ul*/ );
                            m->next = (struct _matcher *)return_value_malloc_13;
                            if(m->next == ((struct _matcher *)NULL))
                              conf_err("HeadRemove config: out of memory - aborted");

                            m = m->next;
                          }

                          else
                          {
                            void *return_value_malloc_14;
                            return_value_malloc_14=malloc(sizeof(struct _matcher) /*32ul*/ );
                            res->head_off = (struct _matcher *)return_value_malloc_14;
                            if(res->head_off == ((struct _matcher *)NULL))
                              conf_err("HeadRemove config: out of memory - aborted");

                            m = res->head_off;
                          }
                          memset((void *)m, 0, sizeof(struct _matcher) /*32ul*/ );
                          lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                          signed int return_value_pcreposix_regcomp_15;
                          return_value_pcreposix_regcomp_15=pcreposix_regcomp(&m->pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0001 | 0x0002 | 0);
                          if(!(return_value_pcreposix_regcomp_15 == 0))
                            conf_err("HeadRemove bad pattern - aborted");

                        }

                        else
                        {
                          return_value_pcreposix_regexec_25=pcreposix_regexec(&AddHeader, lin, (unsigned long int)4, matches, 0);
                          if(return_value_pcreposix_regexec_25 == 0)
                          {
                            lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                            if(res->add_head == ((char *)NULL))
                            {
                              res->add_head=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
                              if(res->add_head == ((char *)NULL))
                                conf_err("AddHeader config: out of memory - aborted");

                            }

                            else
                            {
                              unsigned long int return_value_strlen_16;
                              return_value_strlen_16=strlen(res->add_head);
                              unsigned long int return_value_strlen_17;
                              return_value_strlen_17=strlen(lin + (signed long int)matches[(signed long int)1].rm_so);
                              void *return_value_realloc_18;
                              return_value_realloc_18=realloc((void *)res->add_head, return_value_strlen_16 + return_value_strlen_17 + (unsigned long int)3);
                              res->add_head = (char *)return_value_realloc_18;
                              if(res->add_head == ((char *)NULL))
                                conf_err("AddHeader config: out of memory - aborted");

                              strcat(res->add_head, "\r\n");
                              strcat(res->add_head, lin + (signed long int)matches[(signed long int)1].rm_so);
                            }
                          }

                          else
                          {
                            return_value_pcreposix_regexec_24=pcreposix_regexec(&RewriteLocation, lin, (unsigned long int)4, matches, 0);
                            if(return_value_pcreposix_regexec_24 == 0)
                              res->rewr_loc=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                            else
                            {
                              return_value_pcreposix_regexec_23=pcreposix_regexec(&RewriteDestination, lin, (unsigned long int)4, matches, 0);
                              if(return_value_pcreposix_regexec_23 == 0)
                                res->rewr_dest=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                              else
                              {
                                return_value_pcreposix_regexec_22=pcreposix_regexec(&LogLevel, lin, (unsigned long int)4, matches, 0);
                                if(return_value_pcreposix_regexec_22 == 0)
                                  res->log_level=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                                else
                                {
                                  return_value_pcreposix_regexec_21=pcreposix_regexec(&Service, lin, (unsigned long int)4, matches, 0);
                                  if(return_value_pcreposix_regexec_21 == 0)
                                  {
                                    if(res->services == ((struct _service *)NULL))
                                      res->services=parse_service((const char *)(void *)0);

                                    else
                                    {
                                      svc = res->services;
                                      for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                        ;
                                      svc->next=parse_service((const char *)(void *)0);
                                    }
                                  }

                                  else
                                  {
                                    return_value_pcreposix_regexec_20=pcreposix_regexec(&ServiceName, lin, (unsigned long int)4, matches, 0);
                                    if(return_value_pcreposix_regexec_20 == 0)
                                    {
                                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                      if(res->services == ((struct _service *)NULL))
                                        res->services=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);

                                      else
                                      {
                                        svc = res->services;
                                        for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                          ;
                                        svc->next=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);
                                      }
                                    }

                                    else
                                    {
                                      return_value_pcreposix_regexec_19=pcreposix_regexec(&End, lin, (unsigned long int)4, matches, 0);
                                      if(return_value_pcreposix_regexec_19 == 0)
                                      {
                                        if(has_addr == 0 || has_port == 0)
                                          conf_err("ListenHTTP missing Address or Port - aborted");

                                        return res;
                                      }

                                      else
                                        conf_err("unknown directive - aborted");
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
  while((_Bool)1);
  conf_err("ListenHTTP premature EOF");
  return (struct _listener *)(void *)0;
}

// parse_HTTPS
// file config.c line 837
static struct _listener * parse_HTTPS(void)
{
  char lin[8192l];
  struct _listener *res;
  struct _service *svc;
  struct _matcher *m;
  signed int has_addr;
  signed int has_port;
  signed int has_other;
  signed long int ssl_op_enable;
  signed long int ssl_op_disable;
  struct hostent *host;
  struct sockaddr_in in;
  struct sockaddr_in6 in6;
  struct _pound_ctx *pc;
  ssl_op_enable = 0x80000BFFL;
  ssl_op_enable = ssl_op_enable | 0x00020000L;
  ssl_op_disable = 0x00040000L | 0x00000004L;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _listener) /*232ul*/ );
  res = (struct _listener *)return_value_malloc_1;
  if(res == ((struct _listener *)NULL))
    conf_err("ListenHTTPS config: out of memory - aborted");

  memset((void *)res, 0, sizeof(struct _listener) /*232ul*/ );
  res->to = clnt_to;
  res->rewr_loc = 1;
  res->err414 = "Request URI is too long";
  res->err500 = "An internal server error occurred. Please try again later.";
  res->err501 = "This method may not be used.";
  res->err503 = "The service is not available. Please try again later.";
  res->allow_client_reneg = 0;
  res->disable_ssl_v2 = 0;
  res->disable_ssl_v3 = 0;
  res->log_level = log_level;
  signed int return_value_pcreposix_regcomp_2;
  return_value_pcreposix_regcomp_2=pcreposix_regcomp(&res->verb, xhttp[(signed long int)0], 0x0001 | 0x0002 | 0);
  if(!(return_value_pcreposix_regcomp_2 == 0))
    conf_err("xHTTP bad default pattern - aborted");

  has_other = 0;
  has_port = has_other;
  has_addr = has_port;
  char *return_value_conf_fgets_3;
  unsigned long int return_value_strlen_5;
  unsigned long int return_value_strlen_4;
  signed int return_value_pcreposix_regexec_68;
  signed int return_value_pcreposix_regexec_67;
  signed int return_value_pcreposix_regexec_66;
  signed int return_value_pcreposix_regexec_65;
  signed int return_value_pcreposix_regexec_64;
  signed int return_value_pcreposix_regexec_63;
  signed int return_value_pcreposix_regexec_62;
  signed int return_value_pcreposix_regexec_61;
  signed int return_value_pcreposix_regexec_60;
  signed int return_value_pcreposix_regexec_59;
  signed int return_value_pcreposix_regexec_58;
  signed int return_value_pcreposix_regexec_57;
  signed int return_value_pcreposix_regexec_56;
  signed int return_value_pcreposix_regexec_55;
  signed int return_value_pcreposix_regexec_54;
  signed int return_value_pcreposix_regexec_53;
  signed int return_value_pcreposix_regexec_52;
  signed int return_value_pcreposix_regexec_51;
  signed int return_value_pcreposix_regexec_50;
  signed int return_value_pcreposix_regexec_49;
  signed int return_value_pcreposix_regexec_48;
  signed int return_value_pcreposix_regexec_47;
  signed int return_value_pcreposix_regexec_46;
  signed int return_value_SSL_CTX_load_verify_locations_31;
  signed int return_value_pcreposix_regexec_45;
  signed int return_value_pcreposix_regexec_44;
  signed int return_value_pcreposix_regexec_43;
  signed int return_value_pcreposix_regexec_42;
  signed int return_value_pcreposix_regexec_41;
  _Bool tmp_if_expr_34;
  _Bool tmp_if_expr_37;
  signed long int return_value_SSL_CTX_ctrl_36;
  do
  {
    return_value_conf_fgets_3=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_3 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(lin);
    if(return_value_strlen_6 >= 1ul)
    {
      return_value_strlen_5=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_5] == 10)
      {
        return_value_strlen_4=strlen(lin);
        lin[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_69;
    return_value_pcreposix_regexec_69=pcreposix_regexec(&Address, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_69 == 0)
    {
      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      signed int return_value_get_host_7;
      return_value_get_host_7=get_host(lin + (signed long int)matches[(signed long int)1].rm_so, &res->addr);
      if(!(return_value_get_host_7 == 0))
        conf_err("Unknown Listener address");

      if(!(res->addr.ai_family == 2))
      {
        if(!(res->addr.ai_family == 10))
          conf_err("Unknown Listener address family");

      }

      has_addr = 1;
    }

    else
    {
      return_value_pcreposix_regexec_68=pcreposix_regexec(&Port, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_68 == 0)
      {
        if(res->addr.ai_family == 2)
        {
          memcpy((void *)&in, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
          signed int return_value_atoi_8;
          return_value_atoi_8=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
          unsigned short int return_value_htons_9;
          return_value_htons_9=htons((unsigned short int)return_value_atoi_8);
          in.sin_port = (unsigned short int)return_value_htons_9;
          memcpy((void *)res->addr.ai_addr, (const void *)&in, sizeof(struct sockaddr_in) /*16ul*/ );
        }

        else
        {
          memcpy((void *)&in6, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
          signed int return_value_atoi_10;
          return_value_atoi_10=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
          in6.sin6_port=htons((unsigned short int)return_value_atoi_10);
          memcpy((void *)res->addr.ai_addr, (const void *)&in6, sizeof(struct sockaddr_in6) /*28ul*/ );
        }
        has_port = 1;
      }

      else
      {
        return_value_pcreposix_regexec_67=pcreposix_regexec(&xHTTP, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_67 == 0)
        {
          signed int n;
          n=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
          pcreposix_regfree(&res->verb);
          signed int return_value_pcreposix_regcomp_11;
          return_value_pcreposix_regcomp_11=pcreposix_regcomp(&res->verb, xhttp[(signed long int)n], 0x0001 | 0x0002 | 0);
          if(!(return_value_pcreposix_regcomp_11 == 0))
            conf_err("xHTTP bad pattern - aborted");

        }

        else
        {
          return_value_pcreposix_regexec_66=pcreposix_regexec(&Client, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_66 == 0)
            res->to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

          else
          {
            return_value_pcreposix_regexec_65=pcreposix_regexec(&CheckURL, lin, (unsigned long int)4, matches, 0);
            if(return_value_pcreposix_regexec_65 == 0)
            {
              if(!(res->has_pat == 0))
                conf_err("CheckURL multiple pattern - aborted");

              lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
              signed int return_value_pcreposix_regcomp_12;
              return_value_pcreposix_regcomp_12=pcreposix_regcomp(&res->url_pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0002 | 0 | (ignore_case != 0 ? 0x0001 : 0));
              if(!(return_value_pcreposix_regcomp_12 == 0))
                conf_err("CheckURL bad pattern - aborted");

              res->has_pat = 1;
            }

            else
            {
              return_value_pcreposix_regexec_64=pcreposix_regexec(&Err414, lin, (unsigned long int)4, matches, 0);
              if(return_value_pcreposix_regexec_64 == 0)
              {
                lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                res->err414=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
              }

              else
              {
                return_value_pcreposix_regexec_63=pcreposix_regexec(&Err500, lin, (unsigned long int)4, matches, 0);
                if(return_value_pcreposix_regexec_63 == 0)
                {
                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                  res->err500=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                }

                else
                {
                  return_value_pcreposix_regexec_62=pcreposix_regexec(&Err501, lin, (unsigned long int)4, matches, 0);
                  if(return_value_pcreposix_regexec_62 == 0)
                  {
                    lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                    res->err501=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                  }

                  else
                  {
                    return_value_pcreposix_regexec_61=pcreposix_regexec(&Err503, lin, (unsigned long int)4, matches, 0);
                    if(return_value_pcreposix_regexec_61 == 0)
                    {
                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                      res->err503=file2str(lin + (signed long int)matches[(signed long int)1].rm_so);
                    }

                    else
                    {
                      return_value_pcreposix_regexec_60=pcreposix_regexec(&MaxRequest, lin, (unsigned long int)4, matches, 0);
                      if(return_value_pcreposix_regexec_60 == 0)
                        res->max_req=atoll(lin + (signed long int)matches[(signed long int)1].rm_so);

                      else
                      {
                        return_value_pcreposix_regexec_59=pcreposix_regexec(&HeadRemove, lin, (unsigned long int)4, matches, 0);
                        if(return_value_pcreposix_regexec_59 == 0)
                        {
                          if(!(res->head_off == ((struct _matcher *)NULL)))
                          {
                            m = res->head_off;
                            for( ; !(m->next == ((struct _matcher *)NULL)); m = m->next)
                              ;
                            void *return_value_malloc_13;
                            return_value_malloc_13=malloc(sizeof(struct _matcher) /*32ul*/ );
                            m->next = (struct _matcher *)return_value_malloc_13;
                            if(m->next == ((struct _matcher *)NULL))
                              conf_err("HeadRemove config: out of memory - aborted");

                            m = m->next;
                          }

                          else
                          {
                            void *return_value_malloc_14;
                            return_value_malloc_14=malloc(sizeof(struct _matcher) /*32ul*/ );
                            res->head_off = (struct _matcher *)return_value_malloc_14;
                            if(res->head_off == ((struct _matcher *)NULL))
                              conf_err("HeadRemove config: out of memory - aborted");

                            m = res->head_off;
                          }
                          memset((void *)m, 0, sizeof(struct _matcher) /*32ul*/ );
                          lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                          signed int return_value_pcreposix_regcomp_15;
                          return_value_pcreposix_regcomp_15=pcreposix_regcomp(&m->pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0001 | 0x0002 | 0);
                          if(!(return_value_pcreposix_regcomp_15 == 0))
                            conf_err("HeadRemove bad pattern - aborted");

                        }

                        else
                        {
                          return_value_pcreposix_regexec_58=pcreposix_regexec(&RewriteLocation, lin, (unsigned long int)4, matches, 0);
                          if(return_value_pcreposix_regexec_58 == 0)
                            res->rewr_loc=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                          else
                          {
                            return_value_pcreposix_regexec_57=pcreposix_regexec(&RewriteDestination, lin, (unsigned long int)4, matches, 0);
                            if(return_value_pcreposix_regexec_57 == 0)
                              res->rewr_dest=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                            else
                            {
                              return_value_pcreposix_regexec_56=pcreposix_regexec(&LogLevel, lin, (unsigned long int)4, matches, 0);
                              if(return_value_pcreposix_regexec_56 == 0)
                                res->log_level=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                              else
                              {
                                return_value_pcreposix_regexec_55=pcreposix_regexec(&Cert, lin, (unsigned long int)4, matches, 0);
                                if(return_value_pcreposix_regexec_55 == 0)
                                {
                                  struct _IO_FILE *fcert;
                                  char server_name[8192l];
                                  char *cp;
                                  struct x509_st *x509;
                                  if(!(has_other == 0))
                                    conf_err("Cert directives MUST precede other SSL-specific directives - aborted");

                                  if(!(res->ctx == ((struct _pound_ctx *)NULL)))
                                  {
                                    pc = res->ctx;
                                    for( ; !(pc->next == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                      ;
                                    void *return_value_malloc_16;
                                    return_value_malloc_16=malloc(sizeof(struct _pound_ctx) /*24ul*/ );
                                    pc->next = (struct _pound_ctx *)return_value_malloc_16;
                                    if(pc->next == ((struct _pound_ctx *)NULL))
                                      conf_err("ListenHTTPS new POUND_CTX: out of memory - aborted");

                                    pc = pc->next;
                                  }

                                  else
                                  {
                                    void *return_value_malloc_17;
                                    return_value_malloc_17=malloc(sizeof(struct _pound_ctx) /*24ul*/ );
                                    res->ctx = (struct _pound_ctx *)return_value_malloc_17;
                                    if(res->ctx == ((struct _pound_ctx *)NULL))
                                      conf_err("ListenHTTPS new POUND_CTX: out of memory - aborted");

                                    pc = res->ctx;
                                  }
                                  const struct ssl_method_st *return_value_SSLv23_server_method_18;
                                  return_value_SSLv23_server_method_18=SSLv23_server_method();
                                  pc->ctx=SSL_CTX_new(return_value_SSLv23_server_method_18);
                                  if(pc->ctx == ((struct ssl_ctx_st *)NULL))
                                    conf_err("SSL_CTX_new failed - aborted");

                                  pc->server_name = (char *)(void *)0;
                                  pc->next = (struct _pound_ctx *)(void *)0;
                                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                  signed int return_value_SSL_CTX_use_certificate_chain_file_19;
                                  return_value_SSL_CTX_use_certificate_chain_file_19=SSL_CTX_use_certificate_chain_file(pc->ctx, lin + (signed long int)matches[(signed long int)1].rm_so);
                                  if(!(return_value_SSL_CTX_use_certificate_chain_file_19 == 1))
                                    conf_err("SSL_CTX_use_certificate_chain_file failed - aborted");

                                  signed int return_value_SSL_CTX_use_PrivateKey_file_20;
                                  return_value_SSL_CTX_use_PrivateKey_file_20=SSL_CTX_use_PrivateKey_file(pc->ctx, lin + (signed long int)matches[(signed long int)1].rm_so, 1);
                                  if(!(return_value_SSL_CTX_use_PrivateKey_file_20 == 1))
                                    conf_err("SSL_CTX_use_PrivateKey_file failed - aborted");

                                  signed int return_value_SSL_CTX_check_private_key_21;
                                  return_value_SSL_CTX_check_private_key_21=SSL_CTX_check_private_key(pc->ctx);
                                  if(!(return_value_SSL_CTX_check_private_key_21 == 1))
                                    conf_err("SSL_CTX_check_private_key failed - aborted");

                                  fcert=fopen(lin + (signed long int)matches[(signed long int)1].rm_so, "r");
                                  if(fcert == ((struct _IO_FILE *)NULL))
                                    conf_err("ListenHTTPS: could not open certificate file");

                                  x509=PEM_read_X509(fcert, (struct x509_st **)(void *)0, (signed int (*)(char *, signed int, signed int, void *))(void *)0, (void *)0);
                                  if(x509 == ((struct x509_st *)NULL))
                                    conf_err("ListenHTTPS: could not get certificate subject");

                                  fclose(fcert);
                                  memset((void *)server_name, 0, (unsigned long int)8192);
                                  struct X509_name_st *return_value_X509_get_subject_name_22;
                                  return_value_X509_get_subject_name_22=X509_get_subject_name(x509);
                                  X509_NAME_oneline(return_value_X509_get_subject_name_22, server_name, 8192 - 1);
                                  X509_free(x509);
                                  signed int return_value_pcreposix_regexec_23;
                                  return_value_pcreposix_regexec_23=pcreposix_regexec(&CNName, server_name, (unsigned long int)4, matches, 0);
                                  if(return_value_pcreposix_regexec_23 == 0)
                                  {
                                    server_name[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                    pc->server_name=strdup(server_name + (signed long int)matches[(signed long int)1].rm_so);
                                    if(pc->server_name == ((char *)NULL))
                                      conf_err("ListenHTTPS: could not set certificate subject");

                                  }

                                  else
                                    conf_err("ListenHTTPS: could not get certificate CN");
                                }

                                else
                                {
                                  return_value_pcreposix_regexec_54=pcreposix_regexec(&ClientCert, lin, (unsigned long int)4, matches, 0);
                                  if(return_value_pcreposix_regexec_54 == 0)
                                  {
                                    has_other = 1;
                                    if(res->ctx == ((struct _pound_ctx *)NULL))
                                      conf_err("ClientCert may only be used after Cert - aborted");

                                    res->clnt_check=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
                                    switch(res->clnt_check)
                                    {
                                      case 0:
                                      {
                                        pc = res->ctx;
                                        for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                          SSL_CTX_set_verify(pc->ctx, 0x00, (signed int (*)(signed int, struct x509_store_ctx_st *))(void *)0);
                                        break;
                                      }
                                      case 1:
                                      {
                                        pc = res->ctx;
                                        for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                        {
                                          SSL_CTX_set_verify(pc->ctx, 0x01 | 0x04, (signed int (*)(signed int, struct x509_store_ctx_st *))(void *)0);
                                          signed int return_value_atoi_24;
                                          return_value_atoi_24=atoi(lin + (signed long int)matches[(signed long int)2].rm_so);
                                          SSL_CTX_set_verify_depth(pc->ctx, return_value_atoi_24);
                                        }
                                        break;
                                      }
                                      case 2:
                                      {
                                        pc = res->ctx;
                                        for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                        {
                                          SSL_CTX_set_verify(pc->ctx, 0x01 | 0x02, (signed int (*)(signed int, struct x509_store_ctx_st *))(void *)0);
                                          signed int return_value_atoi_25;
                                          return_value_atoi_25=atoi(lin + (signed long int)matches[(signed long int)2].rm_so);
                                          SSL_CTX_set_verify_depth(pc->ctx, return_value_atoi_25);
                                        }
                                        break;
                                      }
                                      case 3:
                                      {
                                        pc = res->ctx;
                                        for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                        {
                                          SSL_CTX_set_verify(pc->ctx, 0x01 | 0x04, verify_OK);
                                          signed int return_value_atoi_26;
                                          return_value_atoi_26=atoi(lin + (signed long int)matches[(signed long int)2].rm_so);
                                          SSL_CTX_set_verify_depth(pc->ctx, return_value_atoi_26);
                                        }
                                      }
                                      default:
                                        ;
                                    }
                                  }

                                  else
                                  {
                                    return_value_pcreposix_regexec_53=pcreposix_regexec(&AddHeader, lin, (unsigned long int)4, matches, 0);
                                    if(return_value_pcreposix_regexec_53 == 0)
                                    {
                                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                      if(res->add_head == ((char *)NULL))
                                      {
                                        res->add_head=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
                                        if(res->add_head == ((char *)NULL))
                                          conf_err("AddHeader config: out of memory - aborted");

                                      }

                                      else
                                      {
                                        unsigned long int return_value_strlen_27;
                                        return_value_strlen_27=strlen(res->add_head);
                                        unsigned long int return_value_strlen_28;
                                        return_value_strlen_28=strlen(lin + (signed long int)matches[(signed long int)1].rm_so);
                                        void *return_value_realloc_29;
                                        return_value_realloc_29=realloc((void *)res->add_head, return_value_strlen_27 + return_value_strlen_28 + (unsigned long int)3);
                                        res->add_head = (char *)return_value_realloc_29;
                                        if(res->add_head == ((char *)NULL))
                                          conf_err("AddHeader config: out of memory - aborted");

                                        strcat(res->add_head, "\r\n");
                                        strcat(res->add_head, lin + (signed long int)matches[(signed long int)1].rm_so);
                                      }
                                    }

                                    else
                                    {
                                      return_value_pcreposix_regexec_52=pcreposix_regexec(&DisableSSLv2, lin, (unsigned long int)4, matches, 0);
                                      if(return_value_pcreposix_regexec_52 == 0)
                                        res->disable_ssl_v2 = 1;

                                      else
                                      {
                                        return_value_pcreposix_regexec_51=pcreposix_regexec(&DisableSSLv3, lin, (unsigned long int)4, matches, 0);
                                        if(return_value_pcreposix_regexec_51 == 0)
                                          res->disable_ssl_v3 = 1;

                                        else
                                        {
                                          return_value_pcreposix_regexec_50=pcreposix_regexec(&SSLAllowClientRenegotiation, lin, (unsigned long int)4, matches, 0);
                                          if(return_value_pcreposix_regexec_50 == 0)
                                          {
                                            res->allow_client_reneg=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
                                            if(res->allow_client_reneg == 2)
                                            {
                                              ssl_op_enable = ssl_op_enable | 0x00040000L;
                                              ssl_op_disable = ssl_op_disable & ~0x00040000L;
                                            }

                                            else
                                            {
                                              ssl_op_disable = ssl_op_disable | 0x00040000L;
                                              ssl_op_enable = ssl_op_enable & ~0x00040000L;
                                            }
                                          }

                                          else
                                          {
                                            return_value_pcreposix_regexec_49=pcreposix_regexec(&SSLHonorCipherOrder, lin, (unsigned long int)4, matches, 0);
                                            if(return_value_pcreposix_regexec_49 == 0)
                                            {
                                              signed int return_value_atoi_30;
                                              return_value_atoi_30=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
                                              if(!(return_value_atoi_30 == 0))
                                              {
                                                ssl_op_enable = ssl_op_enable | 0x00400000L;
                                                ssl_op_disable = ssl_op_disable & ~0x00400000L;
                                              }

                                              else
                                              {
                                                ssl_op_disable = ssl_op_disable | 0x00400000L;
                                                ssl_op_enable = ssl_op_enable & ~0x00400000L;
                                              }
                                            }

                                            else
                                            {
                                              return_value_pcreposix_regexec_48=pcreposix_regexec(&Ciphers, lin, (unsigned long int)4, matches, 0);
                                              if(return_value_pcreposix_regexec_48 == 0)
                                              {
                                                has_other = 1;
                                                if(res->ctx == ((struct _pound_ctx *)NULL))
                                                  conf_err("Ciphers may only be used after Cert - aborted");

                                                lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                                pc = res->ctx;
                                                for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                                  SSL_CTX_set_cipher_list(pc->ctx, lin + (signed long int)matches[(signed long int)1].rm_so);
                                              }

                                              else
                                              {
                                                return_value_pcreposix_regexec_47=pcreposix_regexec(&CAlist, lin, (unsigned long int)4, matches, 0);
                                                if(return_value_pcreposix_regexec_47 == 0)
                                                {
                                                  struct stack_st_X509_NAME *cert_names;
                                                  has_other = 1;
                                                  if(res->ctx == ((struct _pound_ctx *)NULL))
                                                    conf_err("CAList may only be used after Cert - aborted");

                                                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                                  cert_names=SSL_load_client_CA_file(lin + (signed long int)matches[(signed long int)1].rm_so);
                                                  if(cert_names == ((struct stack_st_X509_NAME *)NULL))
                                                    conf_err("SSL_load_client_CA_file failed - aborted");

                                                  pc = res->ctx;
                                                  for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                                    SSL_CTX_set_client_CA_list(pc->ctx, cert_names);
                                                }

                                                else
                                                {
                                                  return_value_pcreposix_regexec_46=pcreposix_regexec(&VerifyList, lin, (unsigned long int)4, matches, 0);
                                                  if(return_value_pcreposix_regexec_46 == 0)
                                                  {
                                                    has_other = 1;
                                                    if(res->ctx == ((struct _pound_ctx *)NULL))
                                                      conf_err("VerifyList may only be used after Cert - aborted");

                                                    lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                                    pc = res->ctx;
                                                    for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                                    {
                                                      return_value_SSL_CTX_load_verify_locations_31=SSL_CTX_load_verify_locations(pc->ctx, lin + (signed long int)matches[(signed long int)1].rm_so, (const char *)(void *)0);
                                                      if(!(return_value_SSL_CTX_load_verify_locations_31 == 1))
                                                        conf_err("SSL_CTX_load_verify_locations failed - aborted");

                                                    }
                                                  }

                                                  else
                                                  {
                                                    return_value_pcreposix_regexec_45=pcreposix_regexec(&CRLlist, lin, (unsigned long int)4, matches, 0);
                                                    if(return_value_pcreposix_regexec_45 == 0)
                                                    {
                                                      struct x509_store_st *store;
                                                      struct x509_lookup_st *lookup;
                                                      has_other = 1;
                                                      if(res->ctx == ((struct _pound_ctx *)NULL))
                                                        conf_err("CRLlist may only be used after Cert - aborted");

                                                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                                      pc = res->ctx;
                                                      for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                                      {
                                                        store=SSL_CTX_get_cert_store(pc->ctx);
                                                        struct x509_lookup_method_st *return_value_X509_LOOKUP_file_32;
                                                        return_value_X509_LOOKUP_file_32=X509_LOOKUP_file();
                                                        lookup=X509_STORE_add_lookup(store, return_value_X509_LOOKUP_file_32);
                                                        if(lookup == ((struct x509_lookup_st *)NULL))
                                                          conf_err("X509_STORE_add_lookup failed - aborted");

                                                        signed int return_value_X509_load_crl_file_33;
                                                        return_value_X509_load_crl_file_33=X509_load_crl_file(lookup, lin + (signed long int)matches[(signed long int)1].rm_so, 1);
                                                        if(!(return_value_X509_load_crl_file_33 == 1))
                                                          conf_err("X509_load_crl_file failed - aborted");

                                                        X509_STORE_set_flags(store, (unsigned long int)(0x4 | 0x8));
                                                      }
                                                    }

                                                    else
                                                    {
                                                      return_value_pcreposix_regexec_44=pcreposix_regexec(&NoHTTPS11, lin, (unsigned long int)4, matches, 0);
                                                      if(return_value_pcreposix_regexec_44 == 0)
                                                        res->noHTTPS11=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                                                      else
                                                      {
                                                        return_value_pcreposix_regexec_43=pcreposix_regexec(&Service, lin, (unsigned long int)4, matches, 0);
                                                        if(return_value_pcreposix_regexec_43 == 0)
                                                        {
                                                          if(res->services == ((struct _service *)NULL))
                                                            res->services=parse_service((const char *)(void *)0);

                                                          else
                                                          {
                                                            svc = res->services;
                                                            for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                                              ;
                                                            svc->next=parse_service((const char *)(void *)0);
                                                          }
                                                        }

                                                        else
                                                        {
                                                          return_value_pcreposix_regexec_42=pcreposix_regexec(&ServiceName, lin, (unsigned long int)4, matches, 0);
                                                          if(return_value_pcreposix_regexec_42 == 0)
                                                          {
                                                            lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                                            if(res->services == ((struct _service *)NULL))
                                                              res->services=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);

                                                            else
                                                            {
                                                              svc = res->services;
                                                              for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                                                ;
                                                              svc->next=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);
                                                            }
                                                          }

                                                          else
                                                          {
                                                            return_value_pcreposix_regexec_41=pcreposix_regexec(&End, lin, (unsigned long int)4, matches, 0);
                                                            if(return_value_pcreposix_regexec_41 == 0)
                                                            {
                                                              struct x509_store_st *parse_HTTPS__1__1__29__store;
                                                              if(has_addr == 0 || has_port == 0)
                                                                tmp_if_expr_34 = (_Bool)1;

                                                              else
                                                                tmp_if_expr_34 = res->ctx == (struct _pound_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
                                                              if(tmp_if_expr_34)
                                                                conf_err("ListenHTTPS missing Address, Port or Certificate - aborted");

                                                              signed long int return_value_SSL_CTX_callback_ctrl_35;
                                                              return_value_SSL_CTX_callback_ctrl_35=SSL_CTX_callback_ctrl(res->ctx->ctx, 53, (void (*)(void))SNI_server_name);
                                                              if(return_value_SSL_CTX_callback_ctrl_35 == 0l)
                                                                tmp_if_expr_37 = (_Bool)1;

                                                              else
                                                              {
                                                                return_value_SSL_CTX_ctrl_36=SSL_CTX_ctrl(res->ctx->ctx, 54, (signed long int)0, (void *)res->ctx);
                                                                tmp_if_expr_37 = !(return_value_SSL_CTX_ctrl_36 != 0l) ? (_Bool)1 : (_Bool)0;
                                                              }
                                                              if(tmp_if_expr_37)
                                                                conf_err("ListenHTTPS: can't set SNI callback");

                                                              pc = res->ctx;
                                                              for( ; !(pc == ((struct _pound_ctx *)NULL)); pc = pc->next)
                                                              {
                                                                SSL_CTX_set_ex_data(pc->ctx, 0, (void *)(char *)res);
                                                                SSL_CTX_ctrl(pc->ctx, 33, 0x00000004L, (void *)0);
                                                                SSL_CTX_ctrl(pc->ctx, 32, ssl_op_enable, (void *)0);
                                                                SSL_CTX_ctrl(pc->ctx, 32, 0x00020000L, (void *)0);
                                                                SSL_CTX_ctrl(pc->ctx, 77, ssl_op_disable, (void *)0);
                                                                if(res->disable_ssl_v2 == 1)
                                                                  SSL_CTX_ctrl(pc->ctx, 32, 0x01000000L, (void *)0);

                                                                if(res->disable_ssl_v3 == 1)
                                                                  SSL_CTX_ctrl(pc->ctx, 32, 0x02000000L, (void *)0);

                                                                signed int return_value_getpid_38;
                                                                return_value_getpid_38=getpid();
                                                                signed long int return_value_random_39;
                                                                return_value_random_39=random();
                                                                sprintf(lin, "%d-Pound-%ld", return_value_getpid_38, return_value_random_39);
                                                                unsigned long int return_value_strlen_40;
                                                                return_value_strlen_40=strlen(lin);
                                                                SSL_CTX_set_session_id_context(pc->ctx, (unsigned char *)lin, (unsigned int)return_value_strlen_40);
                                                                SSL_CTX_set_tmp_rsa_callback(pc->ctx, RSA_tmp_callback);
                                                                SSL_CTX_set_tmp_dh_callback(pc->ctx, DH_tmp_callback);
                                                                SSL_CTX_set_info_callback(pc->ctx, SSLINFO_callback);
                                                              }
                                                              return res;
                                                            }

                                                            else
                                                              conf_err("unknown directive");
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
  while((_Bool)1);
  conf_err("ListenHTTPS premature EOF");
  return (struct _listener *)(void *)0;
}

// parse_be
// file config.c line 174
static struct _backend * parse_be(const signed int is_emergency)
{
  char lin[8192l];
  struct _backend *res;
  signed int has_addr;
  signed int has_port;
  struct hostent *host;
  struct sockaddr_in in;
  struct sockaddr_in6 in6;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _backend) /*232ul*/ );
  res = (struct _backend *)return_value_malloc_1;
  if(res == ((struct _backend *)NULL))
    conf_err("BackEnd config: out of memory - aborted");

  memset((void *)res, 0, sizeof(struct _backend) /*232ul*/ );
  res->be_type = 0;
  res->addr.ai_socktype = 1;
  res->to = is_emergency != 0 ? 120 : be_to;
  res->conn_to = is_emergency != 0 ? 120 : be_connto;
  res->alive = 1;
  memset((void *)&res->addr, 0, sizeof(struct addrinfo) /*48ul*/ );
  res->priority = 5;
  memset((void *)&res->ha_addr, 0, sizeof(struct addrinfo) /*48ul*/ );
  res->url = (char *)(void *)0;
  res->next = (struct _backend *)(void *)0;
  has_port = 0;
  has_addr = has_port;
  pthread_mutex_init(&res->mut, (const union anonymous_9 *)(void *)0);
  char *return_value_conf_fgets_2;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_3;
  signed int return_value_pcreposix_regexec_47;
  signed int return_value_atoi_10;
  unsigned short int return_value_htons_11;
  signed int return_value_atoi_12;
  unsigned short int return_value_htons_13;
  signed int return_value_pcreposix_regexec_46;
  signed int return_value_pcreposix_regexec_45;
  signed int return_value_pcreposix_regexec_44;
  signed int return_value_pcreposix_regexec_43;
  signed int return_value_atoi_15;
  unsigned short int return_value_htons_16;
  signed int return_value_atoi_17;
  unsigned short int return_value_htons_18;
  signed int return_value_pcreposix_regexec_42;
  signed int return_value_atoi_21;
  unsigned short int return_value_htons_22;
  signed int return_value_atoi_23;
  unsigned short int return_value_htons_24;
  signed int return_value_pcreposix_regexec_41;
  signed int return_value_pcreposix_regexec_40;
  signed int return_value_pcreposix_regexec_39;
  signed int return_value_pcreposix_regexec_38;
  _Bool tmp_if_expr_37;
  do
  {
    return_value_conf_fgets_2=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_2 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(lin);
    if(return_value_strlen_5 >= 1ul)
    {
      return_value_strlen_4=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_4] == 10)
      {
        return_value_strlen_3=strlen(lin);
        lin[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_48;
    return_value_pcreposix_regexec_48=pcreposix_regexec(&Address, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_48 == 0)
    {
      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      signed int return_value_get_host_9;
      return_value_get_host_9=get_host(lin + (signed long int)matches[(signed long int)1].rm_so, &res->addr);
      if(!(return_value_get_host_9 == 0))
      {
        res->addr.ai_socktype = 1;
        res->addr.ai_family = 1;
        res->addr.ai_protocol = 0;
        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(struct sockaddr_un) /*110ul*/ );
        res->addr.ai_addr = (struct sockaddr *)return_value_malloc_6;
        if(res->addr.ai_addr == ((struct sockaddr *)NULL))
          conf_err("out of memory");

        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(lin + (signed long int)matches[(signed long int)1].rm_so);
        if(1ul + return_value_strlen_7 >= 109ul)
          conf_err("UNIX path name too long");

        unsigned long int return_value_strlen_8;
        return_value_strlen_8=strlen(lin + (signed long int)matches[(signed long int)1].rm_so);
        res->addr.ai_addrlen = (unsigned int)(return_value_strlen_8 + (unsigned long int)1);
        res->addr.ai_addr->sa_family = (unsigned short int)1;
        strcpy(res->addr.ai_addr->sa_data, lin + (signed long int)matches[(signed long int)1].rm_so);
        res->addr.ai_addrlen = (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ ;
      }

      has_addr = 1;
    }

    else
    {
      return_value_pcreposix_regexec_47=pcreposix_regexec(&Port, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_47 == 0)
      {
        switch(res->addr.ai_family)
        {
          case 2:
          {
            memcpy((void *)&in, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
            return_value_atoi_10=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
            return_value_htons_11=htons((unsigned short int)return_value_atoi_10);
            in.sin_port = (unsigned short int)return_value_htons_11;
            memcpy((void *)res->addr.ai_addr, (const void *)&in, sizeof(struct sockaddr_in) /*16ul*/ );
            break;
          }
          case 10:
          {
            memcpy((void *)&in6, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
            return_value_atoi_12=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
            return_value_htons_13=htons((unsigned short int)return_value_atoi_12);
            in6.sin6_port = (unsigned short int)return_value_htons_13;
            memcpy((void *)res->addr.ai_addr, (const void *)&in6, sizeof(struct sockaddr_in6) /*28ul*/ );
            break;
          }
          default:
            conf_err("Port is supported only for INET/INET6 back-ends");
        }
        has_port = 1;
      }

      else
      {
        return_value_pcreposix_regexec_46=pcreposix_regexec(&Priority, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_46 == 0)
        {
          if(!(is_emergency == 0))
            conf_err("Priority is not supported for Emergency back-ends");

          res->priority=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
        }

        else
        {
          return_value_pcreposix_regexec_45=pcreposix_regexec(&TimeOut, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_45 == 0)
            res->to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

          else
          {
            return_value_pcreposix_regexec_44=pcreposix_regexec(&ConnTO, lin, (unsigned long int)4, matches, 0);
            if(return_value_pcreposix_regexec_44 == 0)
              res->conn_to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

            else
            {
              return_value_pcreposix_regexec_43=pcreposix_regexec(&HAport, lin, (unsigned long int)4, matches, 0);
              if(return_value_pcreposix_regexec_43 == 0)
              {
                if(!(is_emergency == 0))
                  conf_err("HAport is not supported for Emergency back-ends");

                res->ha_addr = res->addr;
                void *return_value_malloc_14;
                return_value_malloc_14=malloc((unsigned long int)res->addr.ai_addrlen);
                res->ha_addr.ai_addr = (struct sockaddr *)return_value_malloc_14;
                if(res->ha_addr.ai_addr == ((struct sockaddr *)NULL))
                  conf_err("out of memory");

                memcpy((void *)res->ha_addr.ai_addr, (const void *)res->addr.ai_addr, (unsigned long int)res->addr.ai_addrlen);
                switch(res->addr.ai_family)
                {
                  case 2:
                  {
                    memcpy((void *)&in, (const void *)res->ha_addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
                    return_value_atoi_15=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
                    return_value_htons_16=htons((unsigned short int)return_value_atoi_15);
                    in.sin_port = (unsigned short int)return_value_htons_16;
                    memcpy((void *)res->ha_addr.ai_addr, (const void *)&in, sizeof(struct sockaddr_in) /*16ul*/ );
                    break;
                  }
                  case 10:
                  {
                    memcpy((void *)&in6, (const void *)res->addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
                    return_value_atoi_17=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
                    return_value_htons_18=htons((unsigned short int)return_value_atoi_17);
                    in6.sin6_port = (unsigned short int)return_value_htons_18;
                    memcpy((void *)res->addr.ai_addr, (const void *)&in6, sizeof(struct sockaddr_in6) /*28ul*/ );
                    break;
                  }
                  default:
                    conf_err("HAport is supported only for INET/INET6 back-ends");
                }
              }

              else
              {
                return_value_pcreposix_regexec_42=pcreposix_regexec(&HAportAddr, lin, (unsigned long int)4, matches, 0);
                if(return_value_pcreposix_regexec_42 == 0)
                {
                  if(!(is_emergency == 0))
                    conf_err("HAportAddr is not supported for Emergency back-ends");

                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                  signed int return_value_get_host_25;
                  return_value_get_host_25=get_host(lin + (signed long int)matches[(signed long int)1].rm_so, &res->ha_addr);
                  if(!(return_value_get_host_25 == 0))
                  {
                    res->addr.ai_socktype = 1;
                    res->ha_addr.ai_family = 1;
                    res->ha_addr.ai_protocol = 0;
                    char *return_value_strdup_19;
                    return_value_strdup_19=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
                    res->ha_addr.ai_addr = (struct sockaddr *)return_value_strdup_19;
                    if(res->ha_addr.ai_addr == ((struct sockaddr *)NULL))
                      conf_err("out of memory");

                    unsigned long int return_value_strlen_20;
                    return_value_strlen_20=strlen(lin + (signed long int)matches[(signed long int)1].rm_so);
                    res->addr.ai_addrlen = (unsigned int)(return_value_strlen_20 + (unsigned long int)1);
                  }

                  else
                    switch(res->ha_addr.ai_family)
                    {
                      case 2:
                      {
                        memcpy((void *)&in, (const void *)res->ha_addr.ai_addr, sizeof(struct sockaddr_in) /*16ul*/ );
                        return_value_atoi_21=atoi(lin + (signed long int)matches[(signed long int)2].rm_so);
                        return_value_htons_22=htons((unsigned short int)return_value_atoi_21);
                        in.sin_port = (unsigned short int)return_value_htons_22;
                        memcpy((void *)res->ha_addr.ai_addr, (const void *)&in, sizeof(struct sockaddr_in) /*16ul*/ );
                        break;
                      }
                      case 10:
                      {
                        memcpy((void *)&in6, (const void *)res->ha_addr.ai_addr, sizeof(struct sockaddr_in6) /*28ul*/ );
                        return_value_atoi_23=atoi(lin + (signed long int)matches[(signed long int)2].rm_so);
                        return_value_htons_24=htons((unsigned short int)return_value_atoi_23);
                        in6.sin6_port = (unsigned short int)return_value_htons_24;
                        memcpy((void *)res->ha_addr.ai_addr, (const void *)&in6, sizeof(struct sockaddr_in6) /*28ul*/ );
                        break;
                      }
                      default:
                        conf_err("Unknown HA address type");
                    }
                }

                else
                {
                  return_value_pcreposix_regexec_41=pcreposix_regexec(&HTTPS, lin, (unsigned long int)4, matches, 0);
                  if(return_value_pcreposix_regexec_41 == 0)
                  {
                    const struct ssl_method_st *return_value_SSLv23_client_method_26;
                    return_value_SSLv23_client_method_26=SSLv23_client_method();
                    res->ctx=SSL_CTX_new(return_value_SSLv23_client_method_26);
                    if(res->ctx == ((struct ssl_ctx_st *)NULL))
                      conf_err("SSL_CTX_new failed - aborted");

                    SSL_CTX_set_ex_data(res->ctx, 0, (void *)(char *)res);
                    SSL_CTX_set_verify(res->ctx, 0x00, (signed int (*)(signed int, struct x509_store_ctx_st *))(void *)0);
                    SSL_CTX_ctrl(res->ctx, 33, 0x00000004L, (void *)0);
                    SSL_CTX_ctrl(res->ctx, 32, 0x80000BFFL, (void *)0);
                    SSL_CTX_ctrl(res->ctx, 32, 0x00020000L, (void *)0);
                    SSL_CTX_ctrl(res->ctx, 77, 0x00040000L, (void *)0);
                    SSL_CTX_ctrl(res->ctx, 77, 0x00000004L, (void *)0);
                    signed int return_value_getpid_27;
                    return_value_getpid_27=getpid();
                    signed long int return_value_random_28;
                    return_value_random_28=random();
                    sprintf(lin, "%d-Pound-%ld", return_value_getpid_27, return_value_random_28);
                    unsigned long int return_value_strlen_29;
                    return_value_strlen_29=strlen(lin);
                    SSL_CTX_set_session_id_context(res->ctx, (unsigned char *)lin, (unsigned int)return_value_strlen_29);
                    SSL_CTX_set_tmp_rsa_callback(res->ctx, RSA_tmp_callback);
                    SSL_CTX_set_tmp_dh_callback(res->ctx, DH_tmp_callback);
                  }

                  else
                  {
                    return_value_pcreposix_regexec_40=pcreposix_regexec(&HTTPSCert, lin, (unsigned long int)4, matches, 0);
                    if(return_value_pcreposix_regexec_40 == 0)
                    {
                      const struct ssl_method_st *return_value_SSLv23_client_method_30;
                      return_value_SSLv23_client_method_30=SSLv23_client_method();
                      res->ctx=SSL_CTX_new(return_value_SSLv23_client_method_30);
                      if(res->ctx == ((struct ssl_ctx_st *)NULL))
                        conf_err("SSL_CTX_new failed - aborted");

                      SSL_CTX_set_ex_data(res->ctx, 0, (void *)(char *)res);
                      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                      signed int return_value_SSL_CTX_use_certificate_chain_file_31;
                      return_value_SSL_CTX_use_certificate_chain_file_31=SSL_CTX_use_certificate_chain_file(res->ctx, lin + (signed long int)matches[(signed long int)1].rm_so);
                      if(!(return_value_SSL_CTX_use_certificate_chain_file_31 == 1))
                        conf_err("SSL_CTX_use_certificate_chain_file failed - aborted");

                      signed int return_value_SSL_CTX_use_PrivateKey_file_32;
                      return_value_SSL_CTX_use_PrivateKey_file_32=SSL_CTX_use_PrivateKey_file(res->ctx, lin + (signed long int)matches[(signed long int)1].rm_so, 1);
                      if(!(return_value_SSL_CTX_use_PrivateKey_file_32 == 1))
                        conf_err("SSL_CTX_use_PrivateKey_file failed - aborted");

                      signed int return_value_SSL_CTX_check_private_key_33;
                      return_value_SSL_CTX_check_private_key_33=SSL_CTX_check_private_key(res->ctx);
                      if(!(return_value_SSL_CTX_check_private_key_33 == 1))
                        conf_err("SSL_CTX_check_private_key failed - aborted");

                      SSL_CTX_set_verify(res->ctx, 0x00, (signed int (*)(signed int, struct x509_store_ctx_st *))(void *)0);
                      SSL_CTX_ctrl(res->ctx, 33, 0x00000004L, (void *)0);
                      SSL_CTX_ctrl(res->ctx, 32, 0x80000BFFL, (void *)0);
                      SSL_CTX_ctrl(res->ctx, 32, 0x00020000L, (void *)0);
                      SSL_CTX_ctrl(res->ctx, 77, 0x00040000L, (void *)0);
                      SSL_CTX_ctrl(res->ctx, 77, 0x00000004L, (void *)0);
                      signed int return_value_getpid_34;
                      return_value_getpid_34=getpid();
                      signed long int return_value_random_35;
                      return_value_random_35=random();
                      sprintf(lin, "%d-Pound-%ld", return_value_getpid_34, return_value_random_35);
                      unsigned long int return_value_strlen_36;
                      return_value_strlen_36=strlen(lin);
                      SSL_CTX_set_session_id_context(res->ctx, (unsigned char *)lin, (unsigned int)return_value_strlen_36);
                      SSL_CTX_set_tmp_rsa_callback(res->ctx, RSA_tmp_callback);
                      SSL_CTX_set_tmp_dh_callback(res->ctx, DH_tmp_callback);
                    }

                    else
                    {
                      return_value_pcreposix_regexec_39=pcreposix_regexec(&Disabled, lin, (unsigned long int)4, matches, 0);
                      if(return_value_pcreposix_regexec_39 == 0)
                        res->disabled=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                      else
                      {
                        return_value_pcreposix_regexec_38=pcreposix_regexec(&End, lin, (unsigned long int)4, matches, 0);
                        if(return_value_pcreposix_regexec_38 == 0)
                        {
                          if(has_addr == 0)
                            conf_err("BackEnd missing Address - aborted");

                          if(res->addr.ai_family == 2)
                            tmp_if_expr_37 = (_Bool)1;

                          else
                            tmp_if_expr_37 = res->addr.ai_family == 10 ? (_Bool)1 : (_Bool)0;
                          if(tmp_if_expr_37)
                          {
                            if(has_port == 0)
                              conf_err("BackEnd missing Port - aborted");

                          }

                          return res;
                        }

                        else
                          conf_err("unknown directive");
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
  while((_Bool)1);
  conf_err("BackEnd premature EOF");
  return (struct _backend *)(void *)0;
}

// parse_file
// file config.c line 1184
static void parse_file(void)
{
  char lin[8192l];
  struct _service *svc;
  struct _listener *lstn;
  signed int i;
  struct engine_st *e;
  char *return_value_conf_fgets_1;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_2;
  signed int return_value_pcreposix_regexec_26;
  signed int return_value_pcreposix_regexec_25;
  signed int return_value_pcreposix_regexec_24;
  signed int return_value_pcreposix_regexec_23;
  signed int return_value_pcreposix_regexec_22;
  signed int return_value_strcmp_5;
  signed int return_value_pcreposix_regexec_21;
  signed int return_value_pcreposix_regexec_20;
  signed int return_value_pcreposix_regexec_19;
  signed int return_value_pcreposix_regexec_18;
  signed int return_value_pcreposix_regexec_17;
  signed int return_value_pcreposix_regexec_16;
  signed int return_value_pcreposix_regexec_15;
  signed int return_value_pcreposix_regexec_14;
  signed int return_value_pcreposix_regexec_13;
  signed int return_value_pcreposix_regexec_12;
  signed int return_value_pcreposix_regexec_11;
  signed int return_value_pcreposix_regexec_10;
  signed int return_value_pcreposix_regexec_9;
  signed int return_value_pcreposix_regexec_8;
  do
  {
    return_value_conf_fgets_1=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_1 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(lin);
    if(return_value_strlen_4 >= 1ul)
    {
      return_value_strlen_3=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_3] == 10)
      {
        return_value_strlen_2=strlen(lin);
        lin[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_27;
    return_value_pcreposix_regexec_27=pcreposix_regexec(&User, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_27 == 0)
    {
      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      user=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
      if(user == ((char *)NULL))
        conf_err("User config: out of memory - aborted");

    }

    else
    {
      return_value_pcreposix_regexec_26=pcreposix_regexec(&Group, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_26 == 0)
      {
        lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
        group=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
        if(group == ((char *)NULL))
          conf_err("Group config: out of memory - aborted");

      }

      else
      {
        return_value_pcreposix_regexec_25=pcreposix_regexec(&RootJail, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_25 == 0)
        {
          lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
          root_jail=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
          if(root_jail == ((char *)NULL))
            conf_err("RootJail config: out of memory - aborted");

        }

        else
        {
          return_value_pcreposix_regexec_24=pcreposix_regexec(&Daemon, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_24 == 0)
            daemonize=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

          else
          {
            return_value_pcreposix_regexec_23=pcreposix_regexec(&Threads, lin, (unsigned long int)4, matches, 0);
            if(return_value_pcreposix_regexec_23 == 0)
              numthreads=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

            else
            {
              return_value_pcreposix_regexec_22=pcreposix_regexec(&LogFacility, lin, (unsigned long int)4, matches, 0);
              if(return_value_pcreposix_regexec_22 == 0)
              {
                lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                if((signed int)lin[(signed long int)matches[1l].rm_so] == 45)
                  def_facility = -1;

                else
                {
                  i = 0;
                  for( ; !(facilitynames[(signed long int)i].c_name == ((char *)NULL)); i = i + 1)
                  {
                    return_value_strcmp_5=strcmp(facilitynames[(signed long int)i].c_name, lin + (signed long int)matches[(signed long int)1].rm_so);
                    if(return_value_strcmp_5 == 0)
                    {
                      def_facility = facilitynames[(signed long int)i].c_val;
                      break;
                    }

                  }
                }
              }

              else
              {
                return_value_pcreposix_regexec_21=pcreposix_regexec(&Grace, lin, (unsigned long int)4, matches, 0);
                if(return_value_pcreposix_regexec_21 == 0)
                  grace=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                else
                {
                  return_value_pcreposix_regexec_20=pcreposix_regexec(&LogLevel, lin, (unsigned long int)4, matches, 0);
                  if(return_value_pcreposix_regexec_20 == 0)
                    log_level=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                  else
                  {
                    return_value_pcreposix_regexec_19=pcreposix_regexec(&Client, lin, (unsigned long int)4, matches, 0);
                    if(return_value_pcreposix_regexec_19 == 0)
                      clnt_to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                    else
                    {
                      return_value_pcreposix_regexec_18=pcreposix_regexec(&Alive, lin, (unsigned long int)4, matches, 0);
                      if(return_value_pcreposix_regexec_18 == 0)
                        alive_to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                      else
                      {
                        return_value_pcreposix_regexec_17=pcreposix_regexec(&DynScale, lin, (unsigned long int)4, matches, 0);
                        if(return_value_pcreposix_regexec_17 == 0)
                          dynscale=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                        else
                        {
                          return_value_pcreposix_regexec_16=pcreposix_regexec(&TimeOut, lin, (unsigned long int)4, matches, 0);
                          if(return_value_pcreposix_regexec_16 == 0)
                            be_to=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                          else
                          {
                            return_value_pcreposix_regexec_15=pcreposix_regexec(&ConnTO, lin, (unsigned long int)4, matches, 0);
                            if(return_value_pcreposix_regexec_15 == 0)
                              be_connto=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                            else
                            {
                              return_value_pcreposix_regexec_14=pcreposix_regexec(&IgnoreCase, lin, (unsigned long int)4, matches, 0);
                              if(return_value_pcreposix_regexec_14 == 0)
                                ignore_case=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                              else
                              {
                                return_value_pcreposix_regexec_13=pcreposix_regexec(&SSLEngine, lin, (unsigned long int)4, matches, 0);
                                if(return_value_pcreposix_regexec_13 == 0)
                                {
                                  lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                  ENGINE_load_builtin_engines();
                                  e=ENGINE_by_id(lin + (signed long int)matches[(signed long int)1].rm_so);
                                  if(e == ((struct engine_st *)NULL))
                                    conf_err("could not find engine");

                                  signed int return_value_ENGINE_init_6;
                                  return_value_ENGINE_init_6=ENGINE_init(e);
                                  if(return_value_ENGINE_init_6 == 0)
                                  {
                                    ENGINE_free(e);
                                    conf_err("could not init engine");
                                  }

                                  signed int return_value_ENGINE_set_default_7;
                                  return_value_ENGINE_set_default_7=ENGINE_set_default(e, (unsigned int)0xFFFF);
                                  if(return_value_ENGINE_set_default_7 == 0)
                                  {
                                    ENGINE_free(e);
                                    conf_err("could not set all defaults");
                                  }

                                  ENGINE_finish(e);
                                  ENGINE_free(e);
                                }

                                else
                                {
                                  return_value_pcreposix_regexec_12=pcreposix_regexec(&Control, lin, (unsigned long int)4, matches, 0);
                                  if(return_value_pcreposix_regexec_12 == 0)
                                  {
                                    if(!(ctrl_name == ((char *)NULL)))
                                      conf_err("Control multiply defined - aborted");

                                    lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                    ctrl_name=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
                                  }

                                  else
                                  {
                                    return_value_pcreposix_regexec_11=pcreposix_regexec(&ListenHTTP, lin, (unsigned long int)4, matches, 0);
                                    if(return_value_pcreposix_regexec_11 == 0)
                                    {
                                      if(listeners == ((struct _listener *)NULL))
                                        listeners=parse_HTTP();

                                      else
                                      {
                                        lstn = listeners;
                                        for( ; !(lstn->next == ((struct _listener *)NULL)); lstn = lstn->next)
                                          ;
                                        lstn->next=parse_HTTP();
                                      }
                                    }

                                    else
                                    {
                                      return_value_pcreposix_regexec_10=pcreposix_regexec(&ListenHTTPS, lin, (unsigned long int)4, matches, 0);
                                      if(return_value_pcreposix_regexec_10 == 0)
                                      {
                                        if(listeners == ((struct _listener *)NULL))
                                          listeners=parse_HTTPS();

                                        else
                                        {
                                          lstn = listeners;
                                          for( ; !(lstn->next == ((struct _listener *)NULL)); lstn = lstn->next)
                                            ;
                                          lstn->next=parse_HTTPS();
                                        }
                                      }

                                      else
                                      {
                                        return_value_pcreposix_regexec_9=pcreposix_regexec(&Service, lin, (unsigned long int)4, matches, 0);
                                        if(return_value_pcreposix_regexec_9 == 0)
                                        {
                                          if(services == ((struct _service *)NULL))
                                            services=parse_service((const char *)(void *)0);

                                          else
                                          {
                                            svc = services;
                                            for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                              ;
                                            svc->next=parse_service((const char *)(void *)0);
                                          }
                                        }

                                        else
                                        {
                                          return_value_pcreposix_regexec_8=pcreposix_regexec(&ServiceName, lin, (unsigned long int)4, matches, 0);
                                          if(return_value_pcreposix_regexec_8 == 0)
                                          {
                                            lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
                                            if(services == ((struct _service *)NULL))
                                              services=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);

                                            else
                                            {
                                              svc = services;
                                              for( ; !(svc->next == ((struct _service *)NULL)); svc = svc->next)
                                                ;
                                              svc->next=parse_service(lin + (signed long int)matches[(signed long int)1].rm_so);
                                            }
                                          }

                                          else
                                            conf_err("unknown directive - aborted");
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
  while((_Bool)1);
  goto __CPROVER_DUMP_L53;

__CPROVER_DUMP_L53:
  ;
}

// parse_service
// file config.c line 472
static struct _service * parse_service(const char *svc_name)
{
  char lin[8192l];
  struct _service *res;
  struct _backend *be;
  struct _matcher *m;
  signed int ign_case;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _service) /*296ul*/ );
  res = (struct _service *)return_value_malloc_1;
  if(res == ((struct _service *)NULL))
    conf_err("Service config: out of memory - aborted");

  memset((void *)res, 0, sizeof(struct _service) /*296ul*/ );
  res->sess_type = (enum anonymous_18)SESS_NONE;
  res->dynscale = dynscale;
  pthread_mutex_init(&res->mut, (const union anonymous_9 *)(void *)0);
  if(!(svc_name == ((const char *)NULL)))
    strncpy(res->name, svc_name, (unsigned long int)127);

  struct lhash_st *return_value_lh_new_2;
  return_value_lh_new_2=lh_new(t_LHASH_HASH, t_LHASH_COMP);
  res->sessions = (struct lhash_st_TABNODE *)return_value_lh_new_2;
  if(res->sessions == ((struct lhash_st_TABNODE *)NULL))
    conf_err("lh_new failed - aborted");

  ign_case = ignore_case;
  char *return_value_conf_fgets_3;
  unsigned long int return_value_strlen_5;
  unsigned long int return_value_strlen_4;
  signed int return_value_pcreposix_regexec_32;
  signed int return_value_pcreposix_regexec_31;
  signed int return_value_pcreposix_regexec_30;
  signed int return_value_pcreposix_regexec_29;
  signed int return_value_pcreposix_regexec_28;
  signed int return_value_pcreposix_regexec_27;
  signed int return_value_pcreposix_regexec_26;
  signed int return_value_pcreposix_regexec_25;
  signed int return_value_pcreposix_regexec_24;
  signed int return_value_pcreposix_regexec_23;
  signed int return_value_pcreposix_regexec_22;
  do
  {
    return_value_conf_fgets_3=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_3 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(lin);
    if(return_value_strlen_6 >= 1ul)
    {
      return_value_strlen_5=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_5] == 10)
      {
        return_value_strlen_4=strlen(lin);
        lin[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_33;
    return_value_pcreposix_regexec_33=pcreposix_regexec(&URL, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_33 == 0)
    {
      if(!(res->url == ((struct _matcher *)NULL)))
      {
        m = res->url;
        for( ; !(m->next == ((struct _matcher *)NULL)); m = m->next)
          ;
        void *return_value_malloc_7;
        return_value_malloc_7=malloc(sizeof(struct _matcher) /*32ul*/ );
        m->next = (struct _matcher *)return_value_malloc_7;
        if(m->next == ((struct _matcher *)NULL))
          conf_err("URL config: out of memory - aborted");

        m = m->next;
      }

      else
      {
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(struct _matcher) /*32ul*/ );
        res->url = (struct _matcher *)return_value_malloc_8;
        if(res->url == ((struct _matcher *)NULL))
          conf_err("URL config: out of memory - aborted");

        m = res->url;
      }
      memset((void *)m, 0, sizeof(struct _matcher) /*32ul*/ );
      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      signed int return_value_pcreposix_regcomp_9;
      return_value_pcreposix_regcomp_9=pcreposix_regcomp(&m->pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0002 | 0 | (ign_case != 0 ? 0x0001 : 0));
      if(!(return_value_pcreposix_regcomp_9 == 0))
        conf_err("URL bad pattern - aborted");

    }

    else
    {
      return_value_pcreposix_regexec_32=pcreposix_regexec(&HeadRequire, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_32 == 0)
      {
        if(!(res->req_head == ((struct _matcher *)NULL)))
        {
          m = res->req_head;
          for( ; !(m->next == ((struct _matcher *)NULL)); m = m->next)
            ;
          void *return_value_malloc_10;
          return_value_malloc_10=malloc(sizeof(struct _matcher) /*32ul*/ );
          m->next = (struct _matcher *)return_value_malloc_10;
          if(m->next == ((struct _matcher *)NULL))
            conf_err("HeadRequire config: out of memory - aborted");

          m = m->next;
        }

        else
        {
          void *return_value_malloc_11;
          return_value_malloc_11=malloc(sizeof(struct _matcher) /*32ul*/ );
          res->req_head = (struct _matcher *)return_value_malloc_11;
          if(res->req_head == ((struct _matcher *)NULL))
            conf_err("HeadRequire config: out of memory - aborted");

          m = res->req_head;
        }
        memset((void *)m, 0, sizeof(struct _matcher) /*32ul*/ );
        lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
        signed int return_value_pcreposix_regcomp_12;
        return_value_pcreposix_regcomp_12=pcreposix_regcomp(&m->pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0001 | 0x0002 | 0);
        if(!(return_value_pcreposix_regcomp_12 == 0))
          conf_err("HeadRequire bad pattern - aborted");

      }

      else
      {
        return_value_pcreposix_regexec_31=pcreposix_regexec(&HeadDeny, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_31 == 0)
        {
          if(!(res->deny_head == ((struct _matcher *)NULL)))
          {
            m = res->deny_head;
            for( ; !(m->next == ((struct _matcher *)NULL)); m = m->next)
              ;
            void *return_value_malloc_13;
            return_value_malloc_13=malloc(sizeof(struct _matcher) /*32ul*/ );
            m->next = (struct _matcher *)return_value_malloc_13;
            if(m->next == ((struct _matcher *)NULL))
              conf_err("HeadDeny config: out of memory - aborted");

            m = m->next;
          }

          else
          {
            void *return_value_malloc_14;
            return_value_malloc_14=malloc(sizeof(struct _matcher) /*32ul*/ );
            res->deny_head = (struct _matcher *)return_value_malloc_14;
            if(res->deny_head == ((struct _matcher *)NULL))
              conf_err("HeadDeny config: out of memory - aborted");

            m = res->deny_head;
          }
          memset((void *)m, 0, sizeof(struct _matcher) /*32ul*/ );
          lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
          signed int return_value_pcreposix_regcomp_15;
          return_value_pcreposix_regcomp_15=pcreposix_regcomp(&m->pat, lin + (signed long int)matches[(signed long int)1].rm_so, 0x0001 | 0x0002 | 0);
          if(!(return_value_pcreposix_regcomp_15 == 0))
            conf_err("HeadDeny bad pattern - aborted");

        }

        else
        {
          return_value_pcreposix_regexec_30=pcreposix_regexec(&Redirect, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_30 == 0)
          {
            if(!(res->backends == ((struct _backend *)NULL)))
            {
              be = res->backends;
              for( ; !(be->next == ((struct _backend *)NULL)); be = be->next)
                ;
              void *return_value_malloc_16;
              return_value_malloc_16=malloc(sizeof(struct _backend) /*232ul*/ );
              be->next = (struct _backend *)return_value_malloc_16;
              if(be->next == ((struct _backend *)NULL))
                conf_err("Redirect config: out of memory - aborted");

              be = be->next;
            }

            else
            {
              void *return_value_malloc_17;
              return_value_malloc_17=malloc(sizeof(struct _backend) /*232ul*/ );
              res->backends = (struct _backend *)return_value_malloc_17;
              if(res->backends == ((struct _backend *)NULL))
                conf_err("Redirect config: out of memory - aborted");

              be = res->backends;
            }
            memset((void *)be, 0, sizeof(struct _backend) /*232ul*/ );
            be->be_type = 302;
            be->priority = 1;
            be->alive = 1;
            pthread_mutex_init(&be->mut, (const union anonymous_9 *)(void *)0);
            lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
            be->url=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
            if(be->url == ((char *)NULL))
              conf_err("Redirector config: out of memory - aborted");

            signed int return_value_pcreposix_regexec_18;
            return_value_pcreposix_regexec_18=pcreposix_regexec(&LOCATION, be->url, (unsigned long int)4, matches, 0);
            if(!(return_value_pcreposix_regexec_18 == 0))
              conf_err("Redirect bad URL - aborted");

            be->redir_req = matches[(signed long int)3].rm_eo - matches[(signed long int)3].rm_so;
            if(be->redir_req == 1)
              be->url[(signed long int)matches[(signed long int)3].rm_so] = (char)0;

          }

          else
          {
            return_value_pcreposix_regexec_29=pcreposix_regexec(&RedirectN, lin, (unsigned long int)4, matches, 0);
            if(return_value_pcreposix_regexec_29 == 0)
            {
              if(!(res->backends == ((struct _backend *)NULL)))
              {
                be = res->backends;
                for( ; !(be->next == ((struct _backend *)NULL)); be = be->next)
                  ;
                void *return_value_malloc_19;
                return_value_malloc_19=malloc(sizeof(struct _backend) /*232ul*/ );
                be->next = (struct _backend *)return_value_malloc_19;
                if(be->next == ((struct _backend *)NULL))
                  conf_err("Redirect config: out of memory - aborted");

                be = be->next;
              }

              else
              {
                void *return_value_malloc_20;
                return_value_malloc_20=malloc(sizeof(struct _backend) /*232ul*/ );
                res->backends = (struct _backend *)return_value_malloc_20;
                if(res->backends == ((struct _backend *)NULL))
                  conf_err("Redirect config: out of memory - aborted");

                be = res->backends;
              }
              memset((void *)be, 0, sizeof(struct _backend) /*232ul*/ );
              be->be_type=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);
              be->priority = 1;
              be->alive = 1;
              pthread_mutex_init(&be->mut, (const union anonymous_9 *)(void *)0);
              lin[(signed long int)matches[(signed long int)2].rm_eo] = (char)0;
              be->url=strdup(lin + (signed long int)matches[(signed long int)2].rm_so);
              if(be->url == ((char *)NULL))
                conf_err("Redirector config: out of memory - aborted");

              signed int return_value_pcreposix_regexec_21;
              return_value_pcreposix_regexec_21=pcreposix_regexec(&LOCATION, be->url, (unsigned long int)4, matches, 0);
              if(!(return_value_pcreposix_regexec_21 == 0))
                conf_err("Redirect bad URL - aborted");

              be->redir_req = matches[(signed long int)3].rm_eo - matches[(signed long int)3].rm_so;
              if(be->redir_req == 1)
                be->url[(signed long int)matches[(signed long int)3].rm_so] = (char)0;

            }

            else
            {
              return_value_pcreposix_regexec_28=pcreposix_regexec(&BackEnd, lin, (unsigned long int)4, matches, 0);
              if(return_value_pcreposix_regexec_28 == 0)
              {
                if(!(res->backends == ((struct _backend *)NULL)))
                {
                  be = res->backends;
                  for( ; !(be->next == ((struct _backend *)NULL)); be = be->next)
                    ;
                  be->next=parse_be(0);
                }

                else
                  res->backends=parse_be(0);
              }

              else
              {
                return_value_pcreposix_regexec_27=pcreposix_regexec(&Emergency, lin, (unsigned long int)4, matches, 0);
                if(return_value_pcreposix_regexec_27 == 0)
                  res->emergency=parse_be(1);

                else
                {
                  return_value_pcreposix_regexec_26=pcreposix_regexec(&Session, lin, (unsigned long int)4, matches, 0);
                  if(return_value_pcreposix_regexec_26 == 0)
                    parse_sess(res);

                  else
                  {
                    return_value_pcreposix_regexec_25=pcreposix_regexec(&DynScale, lin, (unsigned long int)4, matches, 0);
                    if(return_value_pcreposix_regexec_25 == 0)
                      res->dynscale=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                    else
                    {
                      return_value_pcreposix_regexec_24=pcreposix_regexec(&IgnoreCase, lin, (unsigned long int)4, matches, 0);
                      if(return_value_pcreposix_regexec_24 == 0)
                        ign_case=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                      else
                      {
                        return_value_pcreposix_regexec_23=pcreposix_regexec(&Disabled, lin, (unsigned long int)4, matches, 0);
                        if(return_value_pcreposix_regexec_23 == 0)
                          res->disabled=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

                        else
                        {
                          return_value_pcreposix_regexec_22=pcreposix_regexec(&End, lin, (unsigned long int)4, matches, 0);
                          if(return_value_pcreposix_regexec_22 == 0)
                          {
                            be = res->backends;
                            for( ; !(be == ((struct _backend *)NULL)); be = be->next)
                              res->tot_pri = res->tot_pri + be->priority;
                            res->abs_pri = res->tot_pri;
                            return res;
                          }

                          else
                            conf_err("unknown directive");
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
  while((_Bool)1);
  conf_err("Service premature EOF");
  return (struct _service *)(void *)0;
}

// parse_sess
// file config.c line 349
static void parse_sess(struct _service * const svc)
{
  char lin[8192l];
  char *cp;
  char *parm = (char *)(void *)0;
  char *return_value_conf_fgets_1;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_2;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_8;
  signed int return_value_strcasecmp_7;
  signed int return_value_strcasecmp_6;
  signed int return_value_strcasecmp_5;
  signed int return_value_pcreposix_regexec_25;
  signed int return_value_pcreposix_regexec_24;
  signed int return_value_pcreposix_regexec_23;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  do
  {
    return_value_conf_fgets_1=conf_fgets(lin, 8192);
    if(return_value_conf_fgets_1 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(lin);
    if(return_value_strlen_4 >= 1ul)
    {
      return_value_strlen_3=strlen(lin);
      if((signed int)lin[-1l + (signed long int)return_value_strlen_3] == 10)
      {
        return_value_strlen_2=strlen(lin);
        lin[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      }

    }

    signed int return_value_pcreposix_regexec_26;
    return_value_pcreposix_regexec_26=pcreposix_regexec(&Type, lin, (unsigned long int)4, matches, 0);
    if(return_value_pcreposix_regexec_26 == 0)
    {
      if(!((signed int)svc->sess_type == SESS_NONE))
        conf_err("Multiple Session types in one Service - aborted");

      lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
      cp = lin + (signed long int)matches[(signed long int)1].rm_so;
      signed int return_value_strcasecmp_10;
      return_value_strcasecmp_10=strcasecmp(cp, "IP");
      if(return_value_strcasecmp_10 == 0)
        svc->sess_type = (enum anonymous_18)SESS_IP;

      else
      {
        return_value_strcasecmp_9=strcasecmp(cp, "COOKIE");
        if(return_value_strcasecmp_9 == 0)
          svc->sess_type = (enum anonymous_18)SESS_COOKIE;

        else
        {
          return_value_strcasecmp_8=strcasecmp(cp, "URL");
          if(return_value_strcasecmp_8 == 0)
            svc->sess_type = (enum anonymous_18)SESS_URL;

          else
          {
            return_value_strcasecmp_7=strcasecmp(cp, "PARM");
            if(return_value_strcasecmp_7 == 0)
              svc->sess_type = (enum anonymous_18)SESS_PARM;

            else
            {
              return_value_strcasecmp_6=strcasecmp(cp, "BASIC");
              if(return_value_strcasecmp_6 == 0)
                svc->sess_type = (enum anonymous_18)SESS_BASIC;

              else
              {
                return_value_strcasecmp_5=strcasecmp(cp, "HEADER");
                if(return_value_strcasecmp_5 == 0)
                  svc->sess_type = (enum anonymous_18)SESS_HEADER;

                else
                  conf_err("Unknown Session type");
              }
            }
          }
        }
      }
    }

    else
    {
      return_value_pcreposix_regexec_25=pcreposix_regexec(&TTL, lin, (unsigned long int)4, matches, 0);
      if(return_value_pcreposix_regexec_25 == 0)
        svc->sess_ttl=atoi(lin + (signed long int)matches[(signed long int)1].rm_so);

      else
      {
        return_value_pcreposix_regexec_24=pcreposix_regexec(&ID, lin, (unsigned long int)4, matches, 0);
        if(return_value_pcreposix_regexec_24 == 0)
        {
          if(!((signed int)svc->sess_type == SESS_COOKIE))
          {
            if(!((signed int)svc->sess_type == SESS_URL))
            {
              if(!((signed int)svc->sess_type == SESS_HEADER))
                conf_err("no ID permitted unless COOKIE/URL/HEADER Session - aborted");

            }

          }

          lin[(signed long int)matches[(signed long int)1].rm_eo] = (char)0;
          parm=strdup(lin + (signed long int)matches[(signed long int)1].rm_so);
          if(parm == ((char *)NULL))
            conf_err("ID config: out of memory - aborted");

        }

        else
        {
          return_value_pcreposix_regexec_23=pcreposix_regexec(&End, lin, (unsigned long int)4, matches, 0);
          if(return_value_pcreposix_regexec_23 == 0)
          {
            if((signed int)svc->sess_type == SESS_NONE)
              conf_err("Session type not defined - aborted");

            if(svc->sess_ttl == 0)
              conf_err("Session TTL not defined - aborted");

            if((signed int)svc->sess_type == SESS_COOKIE)
              tmp_if_expr_11 = (_Bool)1;

            else
              tmp_if_expr_11 = (signed int)svc->sess_type == SESS_URL ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_11)
              tmp_if_expr_12 = (_Bool)1;

            else
              tmp_if_expr_12 = (signed int)svc->sess_type == SESS_HEADER ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_12)
            {
              if(parm == ((char *)NULL))
                conf_err("Session ID not defined - aborted");

            }

            if((signed int)svc->sess_type == SESS_COOKIE)
            {
              snprintf(lin, (unsigned long int)(8192 - 1), "Cookie[^:]*:.*[ \t]%s=", parm);
              signed int return_value_pcreposix_regcomp_13;
              return_value_pcreposix_regcomp_13=pcreposix_regcomp(&svc->sess_start, lin, 0x0001 | 0x0002 | 0);
              if(!(return_value_pcreposix_regcomp_13 == 0))
                conf_err("COOKIE pattern failed - aborted");

              signed int return_value_pcreposix_regcomp_14;
              return_value_pcreposix_regcomp_14=pcreposix_regcomp(&svc->sess_pat, "([^;]*)", 0x0001 | 0x0002 | 0);
              if(!(return_value_pcreposix_regcomp_14 == 0))
                conf_err("COOKIE pattern failed - aborted");

            }

            else
              if((signed int)svc->sess_type == SESS_URL)
              {
                snprintf(lin, (unsigned long int)(8192 - 1), "[?&]%s=", parm);
                signed int return_value_pcreposix_regcomp_15;
                return_value_pcreposix_regcomp_15=pcreposix_regcomp(&svc->sess_start, lin, 0x0001 | 0x0002 | 0);
                if(!(return_value_pcreposix_regcomp_15 == 0))
                  conf_err("URL pattern failed - aborted");

                signed int return_value_pcreposix_regcomp_16;
                return_value_pcreposix_regcomp_16=pcreposix_regcomp(&svc->sess_pat, "([^&;#]*)", 0x0001 | 0x0002 | 0);
                if(!(return_value_pcreposix_regcomp_16 == 0))
                  conf_err("URL pattern failed - aborted");

              }

              else
                if((signed int)svc->sess_type == SESS_PARM)
                {
                  signed int return_value_pcreposix_regcomp_17;
                  return_value_pcreposix_regcomp_17=pcreposix_regcomp(&svc->sess_start, ";", 0x0001 | 0x0002 | 0);
                  if(!(return_value_pcreposix_regcomp_17 == 0))
                    conf_err("PARM pattern failed - aborted");

                  signed int return_value_pcreposix_regcomp_18;
                  return_value_pcreposix_regcomp_18=pcreposix_regcomp(&svc->sess_pat, "([^?]*)", 0x0001 | 0x0002 | 0);
                  if(!(return_value_pcreposix_regcomp_18 == 0))
                    conf_err("PARM pattern failed - aborted");

                }

                else
                  if((signed int)svc->sess_type == SESS_BASIC)
                  {
                    signed int return_value_pcreposix_regcomp_19;
                    return_value_pcreposix_regcomp_19=pcreposix_regcomp(&svc->sess_start, "Authorization:[ \t]*Basic[ \t]*", 0x0001 | 0x0002 | 0);
                    if(!(return_value_pcreposix_regcomp_19 == 0))
                      conf_err("BASIC pattern failed - aborted");

                    signed int return_value_pcreposix_regcomp_20;
                    return_value_pcreposix_regcomp_20=pcreposix_regcomp(&svc->sess_pat, "([^ \t]*)", 0x0001 | 0x0002 | 0);
                    if(!(return_value_pcreposix_regcomp_20 == 0))
                      conf_err("BASIC pattern failed - aborted");

                  }

                  else
                    if((signed int)svc->sess_type == SESS_HEADER)
                    {
                      snprintf(lin, (unsigned long int)(8192 - 1), "%s:[ \t]*", parm);
                      signed int return_value_pcreposix_regcomp_21;
                      return_value_pcreposix_regcomp_21=pcreposix_regcomp(&svc->sess_start, lin, 0x0001 | 0x0002 | 0);
                      if(!(return_value_pcreposix_regcomp_21 == 0))
                        conf_err("HEADER pattern failed - aborted");

                      signed int return_value_pcreposix_regcomp_22;
                      return_value_pcreposix_regcomp_22=pcreposix_regcomp(&svc->sess_pat, "([^ \t]*)", 0x0001 | 0x0002 | 0);
                      if(!(return_value_pcreposix_regcomp_22 == 0))
                        conf_err("HEADER pattern failed - aborted");

                    }

            if(!(parm == ((char *)NULL)))
              free((void *)parm);

            goto __CPROVER_DUMP_L42;
          }

          else
            conf_err("unknown directive");
        }
      }
    }
  }
  while((_Bool)1);
  conf_err("Session premature EOF");
  goto __CPROVER_DUMP_L42;

__CPROVER_DUMP_L42:
  ;
}

// put_thr_arg
// file pound.c line 127
extern signed int put_thr_arg(struct _thr_arg *arg)
{
  struct _thr_arg *res;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _thr_arg) /*72ul*/ );
  res = (struct _thr_arg *)return_value_malloc_1;
  if(res == ((struct _thr_arg *)NULL))
  {
    logmsg(4, "thr_arg malloc");
    return -1;
  }

  else
  {
    memcpy((void *)res, (const void *)arg, sizeof(struct _thr_arg) /*72ul*/ );
    res->next = (struct _thr_arg *)(void *)0;
    pthread_mutex_lock(&arg_mut);
    if(last == ((struct _thr_arg *)NULL))
    {
      last = res;
      first = last;
    }

    else
    {
      last->next = res;
      last = last->next;
    }
    pthread_mutex_unlock(&arg_mut);
    pthread_cond_signal(&arg_cond);
    return 0;
  }
}

// rand_backend
// file svc.c line 526
static struct _backend * rand_backend(struct _backend *be, signed int pri)
{
  _Bool tmp_if_expr_1;
  while(!(be == ((struct _backend *)NULL)))
  {
    if(be->alive == 0)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = be->disabled != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      be = be->next;

    else
    {
      pri = pri - be->priority;
      if(!(pri >= 0))
        break;

      be = be->next;
    }
  }
  return be;
}

// redirect_reply
// file http.c line 63
static void redirect_reply(struct bio_st * const c, const char *url, const signed int code)
{
  char rep[8192l];
  char urlbuf[8192l];
  char ch;
  char *code_msg;
  signed int i;
  signed int j;
  switch(code)
  {
    case 301:
    {
      code_msg = "Moved Permanently";
      break;
    }
    case 307:
    {
      code_msg = "Temporary Redirect";
      break;
    }
    default:
      code_msg = "Found";
  }
  i = 0;
  j = 0;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  for( ; !(url[(signed long int)i] == 0) && !(j >= 8192); i = i + 1)
  {
    ch = url[(signed long int)i];
    if((signed int)ch == 38 || (signed int)ch == 45 || (signed int)ch == 46 || (signed int)ch == 47 || (signed int)ch == 58 || (signed int)ch == 59 || (signed int)ch == 61 || (signed int)ch == 63 || (signed int)ch == 95 || (signed int)ch >= 48 && !((signed int)ch >= 58) || (signed int)ch >= 65 && !((signed int)ch >= 91) || (signed int)ch >= 97 && !((signed int)ch >= 123))
    {
      tmp_post_1 = j;
      j = j + 1;
      urlbuf[(signed long int)tmp_post_1] = ch;
    }

    else
    {
      if(j >= 8189)
        break;

      tmp_post_2 = j;
      j = j + 1;
      urlbuf[(signed long int)tmp_post_2] = (char)37;
      tmp_post_3 = j;
      j = j + 1;
      urlbuf[(signed long int)tmp_post_3]=hexchar((char)((signed int)ch >> 4));
      tmp_post_4 = j;
      j = j + 1;
      urlbuf[(signed long int)tmp_post_4]=hexchar(ch);
    }
  }
  signed int tmp_post_5 = j;
  j = j + 1;
  urlbuf[(signed long int)tmp_post_5] = (char)0;
  unsigned long int return_value_strlen_6;
  return_value_strlen_6=strlen(redir_pre);
  unsigned long int return_value_strlen_7;
  return_value_strlen_7=strlen(redir_post);
  unsigned long int return_value_strlen_8;
  return_value_strlen_8=strlen(urlbuf);
  snprintf(rep, sizeof(char [8192l]) /*8192ul*/ , "HTTP/1.0 %d %s\r\nLocation: %s\r\nContent-Type: text/html\r\nContent-Length: %u\r\n\r\n", code, code_msg, (const void *)urlbuf, (unsigned int)(return_value_strlen_6 + return_value_strlen_7 + return_value_strlen_8));
  unsigned long int return_value_strlen_9;
  return_value_strlen_9=strlen(rep);
  BIO_write(c, (const void *)rep, (signed int)return_value_strlen_9);
  unsigned long int return_value_strlen_10;
  return_value_strlen_10=strlen(redir_pre);
  BIO_write(c, (const void *)redir_pre, (signed int)return_value_strlen_10);
  unsigned long int return_value_strlen_11;
  return_value_strlen_11=strlen(urlbuf);
  BIO_write(c, (const void *)urlbuf, (signed int)return_value_strlen_11);
  unsigned long int return_value_strlen_12;
  return_value_strlen_12=strlen(redir_post);
  BIO_write(c, (const void *)redir_post, (signed int)return_value_strlen_12);
  BIO_ctrl(c, 11, (signed long int)0, (void *)0);
  goto __CPROVER_DUMP_L9;

__CPROVER_DUMP_L9:
  ;
}

// sel_be
// file svc.c line 1619
static struct _backend * sel_be(const struct anonymous_0 *cmd)
{
  struct _backend *be;
  struct _service *svc;
  signed int i;
  svc=sel_svc(cmd);
  _Bool tmp_if_expr_1;
  if(svc == ((struct _service *)NULL))
    return (struct _backend *)(void *)0;

  else
  {
    i = 0;
    be = svc->backends;
    do
    {
      if(!(be == ((struct _backend *)NULL)))
        tmp_if_expr_1 = i < cmd->backend ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      i = i + 1;
      be = be->next;
    }
    while((_Bool)1);
    return be;
  }
}

// sel_lstn
// file svc.c line 1581
static struct _listener * sel_lstn(const struct anonymous_0 *cmd)
{
  struct _listener *lstn;
  signed int i;
  _Bool tmp_if_expr_1;
  if(!(cmd->listener >= 0))
    return (struct _listener *)(void *)0;

  else
  {
    i = 0;
    lstn = listeners;
    do
    {
      if(!(lstn == ((struct _listener *)NULL)))
        tmp_if_expr_1 = i < cmd->listener ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      i = i + 1;
      lstn = lstn->next;
    }
    while((_Bool)1);
    return lstn;
  }
}

// sel_svc
// file svc.c line 1597
static struct _service * sel_svc(const struct anonymous_0 *cmd)
{
  struct _service *svc;
  struct _listener *lstn;
  signed int i;
  if(!(cmd->listener >= 0))
    svc = services;

  else
  {
    lstn=sel_lstn(cmd);
    if(lstn == ((struct _listener *)NULL))
      return (struct _service *)(void *)0;

    svc = lstn->services;
  }
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(svc == ((struct _service *)NULL)))
      tmp_if_expr_1 = i < cmd->service ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    i = i + 1;
    svc = svc->next;
  }
  while((_Bool)1);
  return svc;
}

// strip_eol
// file http.c line 179
static signed int strip_eol(char *lin)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  while(!(*lin == 0))
  {
    if((signed int)*lin == 10)
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if((signed int)*lin == 13)
        tmp_if_expr_1 = (signed int)lin[(signed long int)1] == 10 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      *lin = (char)0;
      return 1;
    }

    else
      lin = lin + 1l;
  }
  return 0;
}

// t_LHASH_COMP
// file config.c line 462
static signed int t_LHASH_COMP(const void *arg1, const void *arg2)
{
  const struct _tn *a = (const struct _tn *)arg1;
  const struct _tn *b = (const struct _tn *)arg2;
  signed int return_value_t_cmp_1;
  return_value_t_cmp_1=t_cmp(a, b);
  return return_value_t_cmp_1;
}

// t_LHASH_HASH
// file config.c line 450
static unsigned long int t_LHASH_HASH(const void *arg)
{
  const struct _tn *a = (const struct _tn *)arg;
  unsigned long int return_value_t_hash_1;
  return_value_t_hash_1=t_hash(a);
  return return_value_t_hash_1;
}

// t_add
// file svc.c line 40
static void t_add(struct lhash_st_TABNODE * const tab, const char *key, const void *content, const unsigned long int cont_len)
{
  struct _tn *t;
  struct _tn *old;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _tn) /*24ul*/ );
  t = (struct _tn *)return_value_malloc_1;
  if(t == ((struct _tn *)NULL))
    logmsg(4, "t_add() content malloc");

  else
  {
    t->key=strdup(key);
    if(t->key == ((char *)NULL))
    {
      free((void *)t);
      logmsg(4, "t_add() strdup");
    }

    else
    {
      t->content=malloc(cont_len);
      if(t->content == NULL)
      {
        free((void *)t->key);
        free((void *)t);
        logmsg(4, "t_add() content malloc");
      }

      else
      {
        memcpy(t->content, content, cont_len);
        t->last_acc=time((signed long int *)(void *)0);
        void *return_value_lh_insert_2;
        return_value_lh_insert_2=lh_insert((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0), (void *)(1 != 0 ? t : (struct _tn *)0));
        old = (struct _tn *)return_value_lh_insert_2;
        if(!(old == ((struct _tn *)NULL)))
        {
          free((void *)old->key);
          free(old->content);
          free((void *)old);
          logmsg(4, "t_add() DUP");
        }

        goto __CPROVER_DUMP_L5;
      }
    }
  }

__CPROVER_DUMP_L5:
  ;
}

// t_clean
// file svc.c line 194
static void t_clean(struct lhash_st_TABNODE * const tab, void * const content, const unsigned long int cont_len)
{
  struct anonymous_11 a;
  signed int down_load;
  a.tab = tab;
  a.content = content;
  a.cont_len = (signed int)cont_len;
  down_load = (signed int)((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load;
  ((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load = (unsigned long int)0;
  lh_doall_arg((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0), t_cont_LHASH_DOALL_ARG, (void *)(1 != 0 ? &a : (struct anonymous_11 *)0));
  ((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load = (unsigned long int)down_load;
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// t_cmp
// file config.c line 456
static signed int t_cmp(const struct _tn *d1, const struct _tn *d2)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(d1->key, d2->key);
  return return_value_strcmp_1;
}

// t_cont_LHASH_DOALL_ARG
// file svc.c line 184
void t_cont_LHASH_DOALL_ARG(void *arg1, void *arg2)
{
  struct _tn *a = (struct _tn *)arg1;
  struct anonymous_11 *b = (struct anonymous_11 *)arg2;
  t_cont_doall_arg(a, b);
}

// t_cont_doall_arg
// file svc.c line 167
static void t_cont_doall_arg(struct _tn *t, struct anonymous_11 *arg)
{
  struct _tn *res;
  signed int return_value_memcmp_2;
  return_value_memcmp_2=memcmp(t->content, arg->content, (unsigned long int)arg->cont_len);
  void *return_value_lh_delete_1;
  if(return_value_memcmp_2 == 0)
  {
    return_value_lh_delete_1=lh_delete((struct lhash_st *)(void *)arg->tab, (void *)(1 != 0 ? t : (struct _tn *)0));
    res = (struct _tn *)return_value_lh_delete_1;
    if(!(res == ((struct _tn *)NULL)))
    {
      free((void *)res->key);
      free(res->content);
      free((void *)res);
    }

  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// t_dump_LHASH_DOALL_ARG
// file svc.c line 1553
void t_dump_LHASH_DOALL_ARG(void *arg1, void *arg2)
{
  struct _tn *a = (struct _tn *)arg1;
  struct anonymous *b = (struct anonymous *)arg2;
  t_dump_doall_arg(a, b);
}

// t_dump_doall_arg
// file svc.c line 1533
static void t_dump_doall_arg(struct _tn *t, struct anonymous *arg)
{
  struct _backend *be;
  struct _backend *bep;
  signed int n_be;
  signed int sz;
  memcpy((void *)&bep, t->content, sizeof(struct _backend *) /*8ul*/ );
  n_be = 0;
  be = arg->backends;
  for( ; !(be == ((struct _backend *)NULL)); n_be = n_be + 1)
  {
    if(be == bep)
      break;

    be = be->next;
  }
  if(be == ((struct _backend *)NULL))
    n_be = 0;

  write(arg->control_sock, (const void *)t, sizeof(struct _tn) /*24ul*/ );
  write(arg->control_sock, (const void *)&n_be, sizeof(signed int) /*4ul*/ );
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(t->key);
  sz = (signed int)return_value_strlen_1;
  write(arg->control_sock, (const void *)&sz, sizeof(signed int) /*4ul*/ );
  write(arg->control_sock, (const void *)t->key, (unsigned long int)sz);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// t_expire
// file svc.c line 148
static void t_expire(struct lhash_st_TABNODE * const tab, const signed long int lim)
{
  struct anonymous_11 a;
  signed int down_load;
  a.tab = tab;
  a.lim = lim;
  down_load = (signed int)((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load;
  ((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load = (unsigned long int)0;
  lh_doall_arg((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0), t_old_LHASH_DOALL_ARG, (void *)(1 != 0 ? &a : (struct anonymous_11 *)0));
  ((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0))->down_load = (unsigned long int)down_load;
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// t_find
// file svc.c line 80
static void * t_find(struct lhash_st_TABNODE * const tab, char * const key)
{
  struct _tn t;
  struct _tn *res;
  t.key = key;
  void *return_value_lh_retrieve_1;
  return_value_lh_retrieve_1=lh_retrieve((struct lhash_st *)tab, (const void *)&t);
  res = (struct _tn *)return_value_lh_retrieve_1;
  if(!(res == ((struct _tn *)NULL)))
  {
    res->last_acc=time((signed long int *)(void *)0);
    return res->content;
  }

  else
    return (void *)0;
}

// t_hash
// file config.c line 437
static unsigned long int t_hash(const struct _tn *e)
{
  unsigned long int res;
  char *k = e->key;
  res = (unsigned long int)2166136261;
  char *tmp_post_1;
  for( ; !(*k == 0); res = (res ^ (unsigned long int)*tmp_post_1) * (unsigned long int)16777619 & (unsigned long int)0xFFFFFFFF)
  {
    tmp_post_1 = k;
    k = k + 1l;
  }
  return res;
}

// t_old_LHASH_DOALL_ARG
// file svc.c line 138
void t_old_LHASH_DOALL_ARG(void *arg1, void *arg2)
{
  struct _tn *a = (struct _tn *)arg1;
  struct anonymous_11 *b = (struct anonymous_11 *)arg2;
  t_old_doall_arg(a, b);
}

// t_old_doall_arg
// file svc.c line 121
static void t_old_doall_arg(struct _tn *t, struct anonymous_11 *a)
{
  struct _tn *res;
  void *return_value_lh_delete_1;
  if(!(t->last_acc >= a->lim))
  {
    return_value_lh_delete_1=lh_delete((struct lhash_st *)(void *)a->tab, (void *)(1 != 0 ? t : (struct _tn *)0));
    res = (struct _tn *)return_value_lh_delete_1;
    if(!(res == ((struct _tn *)NULL)))
    {
      free((void *)res->key);
      free(res->content);
      free((void *)res);
    }

  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// t_remove
// file svc.c line 96
static void t_remove(struct lhash_st_TABNODE * const tab, char * const key)
{
  struct _tn t;
  struct _tn *res;
  t.key = key;
  void *return_value_lh_delete_1;
  return_value_lh_delete_1=lh_delete((struct lhash_st *)(void *)(1 != 0 ? tab : (struct lhash_st_TABNODE *)0), (void *)(1 != 0 ? &t : (struct _tn *)0));
  res = (struct _tn *)return_value_lh_delete_1;
  if(!(res == ((struct _tn *)NULL)))
  {
    free((void *)res->key);
    free(res->content);
    free((void *)res);
  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// thr_control
// file pound.h line 635
extern void * thr_control(void *arg)
{
  struct anonymous_0 cmd;
  struct sockaddr sa;
  signed int ctl;
  signed int dummy;
  signed int ret_val;
  struct _listener *lstn;
  struct _listener dummy_lstn;
  struct _service *svc;
  struct _service dummy_svc;
  struct _backend *be;
  struct _backend dummy_be;
  struct _tn dummy_sess;
  struct pollfd polls;
  char *return_value_strerror_9;
  char *return_value_strerror_10;
  char *return_value_strerror_11;
  char *return_value_strerror_12;
  char *return_value_strerror_13;
  char *return_value_strerror_14;
  char *return_value_strerror_15;
  char *return_value_strerror_16;
  if(!(control_sock >= 0))
    return (void *)0;

  else
  {
    memset((void *)&dummy_lstn, 0, sizeof(struct _listener) /*232ul*/ );
    dummy_lstn.disabled = -1;
    memset((void *)&dummy_svc, 0, sizeof(struct _service) /*296ul*/ );
    dummy_svc.disabled = -1;
    memset((void *)&dummy_be, 0, sizeof(struct _backend) /*232ul*/ );
    dummy_be.disabled = -1;
    memset((void *)&dummy_sess, 0, sizeof(struct _tn) /*24ul*/ );
    dummy_sess.content = (void *)0;
    dummy = (signed int)sizeof(struct sockaddr) /*16ul*/ ;
    do
    {
      polls.fd = control_sock;
      polls.events = (signed short int)(0x001 | 0x002);
      polls.revents = (signed short int)0;
      signed int return_value_poll_3;
      return_value_poll_3=poll(&polls, (unsigned long int)1, -1);
      if(!(return_value_poll_3 >= 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(*return_value___errno_location_1);
        logmsg(4, "thr_control() poll: %s", return_value_strerror_2);
        continue;
      }

      ctl=accept(control_sock, &sa, (unsigned int *)&dummy);
      if(!(ctl >= 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        char *return_value_strerror_5;
        return_value_strerror_5=strerror(*return_value___errno_location_4);
        logmsg(4, "thr_control() accept: %s", return_value_strerror_5);
        continue;
      }

      signed long int return_value_read_8;
      return_value_read_8=read(ctl, (void *)&cmd, sizeof(struct anonymous_0) /*144ul*/ );
      if(!((unsigned long int)return_value_read_8 == sizeof(struct anonymous_0) /*144ul*/ ))
      {
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        char *return_value_strerror_7;
        return_value_strerror_7=strerror(*return_value___errno_location_6);
        logmsg(4, "thr_control() read: %s", return_value_strerror_7);
        continue;
      }

      switch((signed int)cmd.cmd)
      {
        case CTRL_LST:
        {
          lstn = listeners;
          for( ; !(lstn == ((struct _listener *)NULL)); lstn = lstn->next)
          {
            write(ctl, (void *)lstn, sizeof(struct _listener) /*232ul*/ );
            write(ctl, (const void *)lstn->addr.ai_addr, (unsigned long int)lstn->addr.ai_addrlen);
            svc = lstn->services;
            for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
            {
              write(ctl, (void *)svc, sizeof(struct _service) /*296ul*/ );
              be = svc->backends;
              for( ; !(be == ((struct _backend *)NULL)); be = be->next)
              {
                write(ctl, (void *)be, sizeof(struct _backend) /*232ul*/ );
                write(ctl, (const void *)be->addr.ai_addr, (unsigned long int)be->addr.ai_addrlen);
                if(be->ha_addr.ai_addrlen >= 1u)
                  write(ctl, (const void *)be->ha_addr.ai_addr, (unsigned long int)be->ha_addr.ai_addrlen);

              }
              write(ctl, (void *)&dummy_be, sizeof(struct _backend) /*232ul*/ );
              dummy=pthread_mutex_lock(&svc->mut);
              if(!(dummy == 0))
              {
                return_value_strerror_9=strerror(dummy);
                logmsg(4, "thr_control() lock: %s", return_value_strerror_9);
              }

              else
              {
                dump_sess(ctl, svc->sessions, svc->backends);
                dummy=pthread_mutex_unlock(&svc->mut);
                if(!(dummy == 0))
                {
                  return_value_strerror_10=strerror(dummy);
                  logmsg(4, "thr_control() unlock: %s", return_value_strerror_10);
                }

              }
              write(ctl, (void *)&dummy_sess, sizeof(struct _tn) /*24ul*/ );
            }
            write(ctl, (void *)&dummy_svc, sizeof(struct _service) /*296ul*/ );
          }
          write(ctl, (void *)&dummy_lstn, sizeof(struct _listener) /*232ul*/ );
          svc = services;
          for( ; !(svc == ((struct _service *)NULL)); svc = svc->next)
          {
            write(ctl, (void *)svc, sizeof(struct _service) /*296ul*/ );
            be = svc->backends;
            for( ; !(be == ((struct _backend *)NULL)); be = be->next)
            {
              write(ctl, (void *)be, sizeof(struct _backend) /*232ul*/ );
              write(ctl, (const void *)be->addr.ai_addr, (unsigned long int)be->addr.ai_addrlen);
              if(be->ha_addr.ai_addrlen >= 1u)
                write(ctl, (const void *)be->ha_addr.ai_addr, (unsigned long int)be->ha_addr.ai_addrlen);

            }
            write(ctl, (void *)&dummy_be, sizeof(struct _backend) /*232ul*/ );
            dummy=pthread_mutex_lock(&svc->mut);
            if(!(dummy == 0))
            {
              return_value_strerror_11=strerror(dummy);
              logmsg(4, "thr_control() lock: %s", return_value_strerror_11);
            }

            else
            {
              dump_sess(ctl, svc->sessions, svc->backends);
              dummy=pthread_mutex_unlock(&svc->mut);
              if(!(dummy == 0))
              {
                return_value_strerror_12=strerror(dummy);
                logmsg(4, "thr_control() unlock: %s", return_value_strerror_12);
              }

            }
            write(ctl, (void *)&dummy_sess, sizeof(struct _tn) /*24ul*/ );
          }
          write(ctl, (void *)&dummy_svc, sizeof(struct _service) /*296ul*/ );
          break;
        }
        case CTRL_EN_LSTN:
        {
          lstn=sel_lstn(&cmd);
          if(lstn == ((struct _listener *)NULL))
            logmsg(6, "thr_control() bad listener %d", cmd.listener);

          else
            lstn->disabled = 0;
          break;
        }
        case CTRL_DE_LSTN:
        {
          lstn=sel_lstn(&cmd);
          if(lstn == ((struct _listener *)NULL))
            logmsg(6, "thr_control() bad listener %d", cmd.listener);

          else
            lstn->disabled = 1;
          break;
        }
        case CTRL_EN_SVC:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);

          else
            svc->disabled = 0;
          break;
        }
        case CTRL_DE_SVC:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);

          else
            svc->disabled = 1;
          break;
        }
        case CTRL_EN_BE:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
          {
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);
            break;
          }

          be=sel_be(&cmd);
          if(be == ((struct _backend *)NULL))
            logmsg(6, "thr_control() bad backend %d/%d/%d", cmd.listener, cmd.service, cmd.backend);

          else
            kill_be(svc, be, 0);
          break;
        }
        case CTRL_DE_BE:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
          {
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);
            break;
          }

          be=sel_be(&cmd);
          if(be == ((struct _backend *)NULL))
            logmsg(6, "thr_control() bad backend %d/%d/%d", cmd.listener, cmd.service, cmd.backend);

          else
            kill_be(svc, be, -1);
          break;
        }
        case CTRL_ADD_SESS:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
          {
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);
            break;
          }

          be=sel_be(&cmd);
          if(be == ((struct _backend *)NULL))
          {
            logmsg(6, "thr_control() bad back-end %d/%d", cmd.listener, cmd.service);
            break;
          }

          ret_val=pthread_mutex_lock(&svc->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_13=strerror(ret_val);
            logmsg(4, "thr_control() add session lock: %s", return_value_strerror_13);
          }

          t_add(svc->sessions, cmd.key, (const void *)&be, sizeof(struct _backend *) /*8ul*/ );
          ret_val=pthread_mutex_unlock(&svc->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_14=strerror(ret_val);
            logmsg(4, "thr_control() add session unlock: %s", return_value_strerror_14);
          }

          break;
        }
        case CTRL_DEL_SESS:
        {
          svc=sel_svc(&cmd);
          if(svc == ((struct _service *)NULL))
          {
            logmsg(6, "thr_control() bad service %d/%d", cmd.listener, cmd.service);
            break;
          }

          ret_val=pthread_mutex_lock(&svc->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_15=strerror(ret_val);
            logmsg(4, "thr_control() del session lock: %s", return_value_strerror_15);
          }

          t_remove(svc->sessions, cmd.key);
          ret_val=pthread_mutex_unlock(&svc->mut);
          if(!(ret_val == 0))
          {
            return_value_strerror_16=strerror(ret_val);
            logmsg(4, "thr_control() del session unlock: %s", return_value_strerror_16);
          }

          break;
        }
        default:
          logmsg(4, "thr_control() unknown command");
      }
      close(ctl);
    }
    while((_Bool)1);
  }
}

// thr_http
// file pound.h line 487
extern void * thr_http(void *dummy)
{
  struct _thr_arg *arg;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    arg=get_thr_arg();
    if(arg == ((struct _thr_arg *)NULL))
    {
      logmsg(4, "NULL get_thr_arg");
      goto __CPROVER_DUMP_L1;
    }

    do_http(arg);
  }
  while((_Bool)1);
}

// thr_timer
// file pound.h line 629
extern void * thr_timer(void *arg)
{
  signed long int last_time;
  signed long int thr_timer__1__cur_time;
  signed int n_wait;
  signed int n_remain;
  n_wait = 60;
  if(!(alive_to >= n_wait))
    n_wait = alive_to;

  if(n_wait >= 301)
    n_wait = 300;

  if(n_wait >= 1801)
    n_wait = 1800;

  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  last_time = return_value_time_1 - (signed long int)n_wait;
  do
  {
    thr_timer__1__cur_time=time((signed long int *)(void *)0);
    n_remain = (signed int)((signed long int)n_wait - (thr_timer__1__cur_time - last_time));
    if(n_remain >= 1)
      sleep((unsigned int)n_remain);

    last_time=time((signed long int *)(void *)0);
    if(last_time + -last_RSA >= 1800l)
    {
      last_RSA=time((signed long int *)(void *)0);
      do_RSAgen();
    }

    if(last_time + -last_rescale >= 300l)
    {
      last_rescale=time((signed long int *)(void *)0);
      do_rescale();
    }

    if(last_time + -last_alive >= (signed long int)alive_to)
    {
      last_alive=time((signed long int *)(void *)0);
      do_resurect();
    }

    if(last_time + -last_expire >= 60l)
    {
      last_expire=time((signed long int *)(void *)0);
      do_expire();
    }

  }
  while((_Bool)1);
}

// upd_be
// file pound.h line 568
extern void upd_be(struct _service * const svc, struct _backend * const be, const double elapsed)
{
  signed int ret_val;
  char *return_value_strerror_1;
  char *return_value_strerror_2;
  if(!(svc->dynscale == 0))
  {
    ret_val=pthread_mutex_lock(&be->mut);
    if(!(ret_val == 0))
    {
      return_value_strerror_1=strerror(ret_val);
      logmsg(4, "upd_be() lock: %s", return_value_strerror_1);
    }

    be->t_requests = be->t_requests + elapsed;
    be->n_requests = be->n_requests + 1;
    if(be->n_requests >= 32001)
    {
      be->n_requests = be->n_requests / 2;
      be->t_requests = be->t_requests / (double)2;
    }

    be->t_average = be->t_requests / (double)be->n_requests;
    ret_val=pthread_mutex_unlock(&be->mut);
    if(!(ret_val == 0))
    {
      return_value_strerror_2=strerror(ret_val);
      logmsg(4, "upd_be() unlock: %s", return_value_strerror_2);
    }

  }

  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// upd_session
// file pound.h line 534
extern void upd_session(struct _service * const svc, char ** const headers, struct _backend * const be)
{
  char key[128l];
  signed int ret_val;
  char *return_value_strerror_1;
  void *return_value_t_find_2;
  char *return_value_strerror_4;
  if(!((signed int)svc->sess_type == SESS_HEADER))
  {
    if((signed int)svc->sess_type == SESS_COOKIE)
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    ret_val=pthread_mutex_lock(&svc->mut);
    if(!(ret_val == 0))
    {
      return_value_strerror_1=strerror(ret_val);
      logmsg(4, "upd_session() lock: %s", return_value_strerror_1);
    }

    signed int return_value_get_HEADERS_3;
    return_value_get_HEADERS_3=get_HEADERS(key, svc, headers);
    if(!(return_value_get_HEADERS_3 == 0))
    {
      return_value_t_find_2=t_find(svc->sessions, key);
      if(return_value_t_find_2 == NULL)
        t_add(svc->sessions, key, (const void *)&be, sizeof(struct _backend *) /*8ul*/ );

    }

    ret_val=pthread_mutex_unlock(&svc->mut);
    if(!(ret_val == 0))
    {
      return_value_strerror_4=strerror(ret_val);
      logmsg(4, "upd_session() unlock: %s", return_value_strerror_4);
    }

    goto __CPROVER_DUMP_L5;
  }

__CPROVER_DUMP_L5:
  ;
}

// verify_OK
// file config.c line 802
static signed int verify_OK(signed int pre_ok, struct x509_store_ctx_st *ctx)
{
  return 1;
}

