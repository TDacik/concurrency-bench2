// #anon_enum$BASIC=0$DIGEST=1
// file ./auth.h line 35
enum anonymous$29 { BASIC=0, DIGEST=1 };

// #anon_enum$DEBUG=0$WARNING=1$ERROR=2$FATAL=3
// file ../include/joedog/joedog.h line 40
enum anonymous$19 { DEBUG=0, WARNING=1, ERROR=2, FATAL=3 };

// #anon_enum$NOMETHOD=0$HEAD=1$GET=2$POST=3$PUT=4$DELETE=5$TRACE=6$OPTIONS=7$CONNECT=8
// file ./url.h line 43
enum anonymous$2 { NOMETHOD=0, HEAD=1, GET=2, POST=3, PUT=4, DELETE=5, TRACE=6, OPTIONS=7, CONNECT=8 };

// #anon_enum$NONE=0$CHUNKED=1$TRAILER=2
// file ./sock.h line 73
enum anonymous$32 { NONE=0, CHUNKED=1, TRAILER=2 };

// #anon_enum$REALM=0$DOMAIN=1$NONCE=2$OPAQUE=3$STALE=4$ALGORITHM=5$QOP=6$UNKNOWN=7
// file auth.c line 72
enum anonymous$16 { REALM=0, DOMAIN=1, NONCE=2, OPAQUE=3, STALE=4, ALGORITHM=5, QOP=6, UNKNOWN=7 };

// #anon_enum$S_CONNECTING=1$S_READING=2$S_WRITING=4$S_DONE=8
// file ./sock.h line 54
enum anonymous$31 { S_CONNECTING=1, S_READING=2, S_WRITING=4, S_DONE=8 };

// #anon_enum$UNDEF=0$READ=1$WRITE=2$RDWR=3
// file ./sock.h line 62
enum anonymous$7 { UNDEF=0, READ=1, WRITE=2, RDWR=3 };

// #anon_enum$UNSUPPORTED=0$HTTP=1$HTTPS=2$FTP=3$PROXY=4
// file ./url.h line 58
enum anonymous$3 { UNSUPPORTED=0, HTTP=1, HTTPS=2, FTP=3, PROXY=4 };

// #anon_enum$__LOG=1$__OUT=2
// file notify.c line 56
enum anonymous$22 { __LOG=1, __OUT=2 };

// #anon_enum$boolean_false=0$boolean_true=1
// file ../include/joedog/boolean.h line 24
enum anonymous { boolean_false=0, boolean_true=1 };

// tag-#anon#ST[*{S8}$S8$'encode']
// file auth.c line 38
struct anonymous$20;

// tag-#anon#ST[*{S8}$S8$'name'|*{S8}$S8$'value'|*{S8}$S8$'domain'|*{S8}$S8$'path'|S64'expires'|S32'secure'|U32'$pad0']
// file cookie.c line 29
struct anonymous$12;

// tag-#anon#ST[*{S8}$S8$'www'|*{S8}$S8$'proxy']
// file ./http.h line 60
struct anonymous$36;

// tag-#anon#ST[*{SYM#tag-CNODE#}$SYM#tag-CNODE#$'first'|SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}$S8$'__size'|S64'__align']#'mutex']
// file ./cookie.h line 54
struct anonymous$11;

// tag-#anon#ST[*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'wchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'wcred'|S32'www'|U32'$pad0'|*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'pchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'pcred'|S32'proxy'|SYM#tag-#anon#ST[S32'www'|S32'proxy']#'bids'|SYM#tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']#'type'|U32'$pad1']
// file ./client.h line 60
struct anonymous$24;

// tag-#anon#ST[*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'wchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'wcred'|S32'www'|U32'$pad0'|*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'pchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'pcred'|S32'proxy'|SYM#tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']#'type'|U32'$pad1']
// file ./sock.h line 99
struct anonymous$35;

// tag-#anon#ST[*{cS8}$cS8$'keyname'|SYM##anon_enum$REALM=0$DOMAIN=1$NONCE=2$OPAQUE=3$STALE=4$ALGORITHM=5$QOP=6$UNKNOWN=7#'keyval'|U32'$pad0']
// file auth.c line 414
struct anonymous$17;

// tag-#anon#ST[ARR128{U8}$U8$'cert_verify_md'|ARR128{U8}$U8$'finish_md'|S32'finish_md_len'|ARR128{U8}$U8$'peer_finish_md'|S32'peer_finish_md_len'|U64'message_size'|S32'message_type'|U32'$pad0'|*{cSYM#tag-ssl_cipher_st#}$cSYM#tag-ssl_cipher_st#$'new_cipher'|*{SYM#tag-dh_st#}$SYM#tag-dh_st#$'dh'|*{SYM#tag-ec_key_st#}$SYM#tag-ec_key_st#$'ecdh'|S32'next_state'|S32'reuse_message'|S32'cert_req'|S32'ctype_num'|ARR9{S8}$S8$'ctype'|U56'$pad1'|*{SYM#tag-stack_st_X509_NAME#}$SYM#tag-stack_st_X509_NAME#$'ca_names'|S32'use_rsa_tmp'|S32'key_block_length'|*{U8}$U8$'key_block'|*{cSYM#tag-evp_cipher_st#}$cSYM#tag-evp_cipher_st#$'new_sym_enc'|*{cSYM#tag-env_md_st#}$cSYM#tag-env_md_st#$'new_hash'|S32'new_mac_pkey_type'|S32'new_mac_secret_size'|*{cSYM#tag-ssl_comp_st#}$cSYM#tag-ssl_comp_st#$'new_compression'|S32'cert_request'|U32'$pad2']
// file /usr/include/openssl/ssl3.h line 553
struct anonymous$27;

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits']
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$5;

// tag-#anon#ST[ARR16{U64}$U64$'__val']
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$23;

// tag-#anon#ST[ARR1{SYM#tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'|S32'__mask_was_saved'|U32'$pad0']#}$SYM#tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'|S32'__mask_was_saved'|U32'$pad0']#$'__cancel_jmp_buf'|ARR4{*{V}$V$}$*{V}$V$$'__pad']
// file /usr/include/pthread.h line 523
struct anonymous$6;

// tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'|S32'__mask_was_saved'|U32'$pad0']
// file /usr/include/pthread.h line 525
struct anonymous$8;

// tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}$V$'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$14;

// tag-#anon#ST[S32'code'|ARR64{S8}$S8$'host'|S32'port'|U64'size'|SYM##anon_enum$boolean_false=0$boolean_true=1#'pasv'|U32'$pad0']
// file ./sock.h line 126
struct anonymous$9;

// tag-#anon#ST[S32'id'|U32'$pad0'|U64'hits'|U64'bytes'|U32'code'|U32'fail'|U32'ok200'|U32'$pad1'|*{SYM#tag-ARRAY_T#}$SYM#tag-ARRAY_T#$'urls'|SYM#tag-#anon#ST[*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'wchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'wcred'|S32'www'|U32'$pad0'|*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'pchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'pcred'|S32'proxy'|SYM#tag-#anon#ST[S32'www'|S32'proxy']#'bids'|SYM#tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']#'type'|U32'$pad1']#'auth'|S32'status'|F32'time'|U32'rand_r_SEED'|F32'himark'|F32'lomark'|U32'$pad2']
// file ./client.h line 51
struct anonymous$4;

// tag-#anon#ST[S32'index'|U32'$pad0'|*{*{S8}$S8$}$*{S8}$S8$$'line']
// file ./setup.h line 227
struct anonymous$15;

// tag-#anon#ST[S32'max'|S32'timeout'|S32'reuse'|S32'status'|S32'keepalive'|S32'tested']
// file ./sock.h line 91
struct anonymous$34;

// tag-#anon#ST[S32'sess_connect'|S32'sess_connect_renegotiate'|S32'sess_connect_good'|S32'sess_accept'|S32'sess_accept_renegotiate'|S32'sess_accept_good'|S32'sess_miss'|S32'sess_timeout'|S32'sess_cache_full'|S32'sess_hit'|S32'sess_cb_hit']
// file /usr/include/openssl/ssl.h line 964
struct anonymous$25;

// tag-#anon#ST[S32'sock'|SYM##anon_enum$S_CONNECTING=1$S_READING=2$S_WRITING=4$S_DONE=8#'status'|SYM##anon_enum$boolean_false=0$boolean_true=1#'encrypt'|SYM##anon_enum$UNSUPPORTED=0$HTTP=1$HTTPS=2$FTP=3$PROXY=4#'scheme'|SYM#tag-#anon#ST[SYM##anon_enum$NONE=0$CHUNKED=1$TRAILER=2#'transfer'|U32'$pad0'|U64'length']#'content'|SYM#tag-#anon#ST[S32'max'|S32'timeout'|S32'reuse'|S32'status'|S32'keepalive'|S32'tested']#'connection'|SYM#tag-#anon#ST[*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'wchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'wcred'|S32'www'|U32'$pad0'|*{SYM#tag-DIGEST_CHLG#}$SYM#tag-DIGEST_CHLG#$'pchlg'|*{SYM#tag-DIGEST_CRED#}$SYM#tag-DIGEST_CRED#$'pcred'|S32'proxy'|SYM#tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']#'type'|U32'$pad1']#'auth'|*{SYM#tag-ssl_st#}$SYM#tag-ssl_st#$'ssl'|*{SYM#tag-ssl_ctx_st#}$SYM#tag-ssl_ctx_st#$'ctx'|*{SYM#tag-ssl_method_st#}$SYM#tag-ssl_method_st#$'method'|*{SYM#tag-x509_st#}$SYM#tag-x509_st#$'cert'|U64'inbuffer'|S32'pos_ini'|ARR4096{S8}$S8$'buffer'|ARR1024{S8}$S8$'chkbuf'|U32'$pad0'|*{SYM#tag-#anon#ST[ARR16{S64}$S64$'__fds_bits']#}$SYM#tag-#anon#ST[ARR16{S64}$S64$'__fds_bits']#$'ws'|*{SYM#tag-#anon#ST[ARR16{S64}$S64$'__fds_bits']#}$SYM#tag-#anon#ST[ARR16{S64}$S64$'__fds_bits']#$'rs'|SYM##anon_enum$UNDEF=0$READ=1$WRITE=2$RDWR=3#'state'|U32'$pad1'|SYM#tag-#anon#ST[S32'code'|ARR64{S8}$S8$'host'|S32'port'|U64'size'|SYM##anon_enum$boolean_false=0$boolean_true=1#'pasv'|U32'$pad0']#'ftp']
// file ./sock.h line 81
struct anonymous$0;

// tag-#anon#ST[S32'www'|S32'proxy']
// file ./client.h line 67
struct anonymous$28;

// tag-#anon#ST[S32'www'|S32'proxy'|SYM#tag-#anon#ST[*{S8}$S8$'www'|*{S8}$S8$'proxy']#'realm'|SYM#tag-#anon#ST[*{S8}$S8$'www'|*{S8}$S8$'proxy']#'challenge'|SYM#tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']#'type']
// file ./http.h line 57
struct anonymous$1;

// tag-#anon#ST[SYM##anon_enum$BASIC=0$DIGEST=1#'www'|SYM##anon_enum$BASIC=0$DIGEST=1#'proxy']
// file ./client.h line 71
struct anonymous$30;

// tag-#anon#ST[SYM##anon_enum$NONE=0$CHUNKED=1$TRAILER=2#'transfer'|U32'$pad0'|U64'length']
// file ./sock.h line 87
struct anonymous$33;

// tag-#anon#ST[SYM##anon_enum$boolean_false=0$boolean_true=1#'required'|U32'$pad0'|*{S8}$S8$'hostname'|S32'port'|U32'$pad1'|*{S8}$S8$'encode']
// file auth.c line 44
struct anonymous$21;

// tag-#anon#ST[U32'conn_id_length'|U32'cert_type'|U32'cert_length'|U32'csl'|U32'clear'|U32'enc'|ARR32{U8}$U8$'ccl'|U32'cipher_spec_length'|U32'session_id_length'|U32'clen'|U32'rlen']
// file /usr/include/openssl/ssl2.h line 203
struct anonymous$26;

// tag-#anon#UN[*{S8}$S8$'ptr'|*{SYM#tag-rsa_st#}$SYM#tag-rsa_st#$'rsa'|*{SYM#tag-dsa_st#}$SYM#tag-dsa_st#$'dsa'|*{SYM#tag-dh_st#}$SYM#tag-dh_st#$'dh'|*{SYM#tag-ec_key_st#}$SYM#tag-ec_key_st#$'ec']
// file /usr/include/openssl/evp.h line 135
union anonymous$39;

// tag-#anon#UN[*{S8}$S8$'ptr'|S32'boolean'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'asn1_string'|*{SYM#tag-asn1_object_st#}$SYM#tag-asn1_object_st#$'object'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'integer'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'enumerated'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'bit_string'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'octet_string'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'printablestring'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'t61string'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'ia5string'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'generalstring'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'bmpstring'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'universalstring'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'utctime'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'generalizedtime'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'visiblestring'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'utf8string'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'set'|*{SYM#tag-asn1_string_st#}$SYM#tag-asn1_string_st#$'sequence'|*{SYM#tag-ASN1_VALUE_st#}$SYM#tag-ASN1_VALUE_st#$'asn1_value']
// file /usr/include/openssl/asn1.h line 526
union anonymous$38;

// tag-#anon#UN[*{V(S32|S32|*{V}$V$)->V}$V(S32|S32|*{V}$V$)->V$'cb_1'|*{S32(S32|S32|*{SYM#tag-bn_gencb_st#}$SYM#tag-bn_gencb_st#$)->S32}$S32(S32|S32|*{SYM#tag-bn_gencb_st#}$SYM#tag-bn_gencb_st#$)->S32$'cb_2']
// file /usr/include/openssl/bn.h line 352
union anonymous$37;

// tag-#anon#UN[ARR4{S8}$S8$'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$18;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}$V$'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']#'__data'|ARR48{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$13;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$10;

// tag-ARRAY_T
// file ./array.h line 29
struct ARRAY_T;

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

// tag-AUTH_T
// file ./auth.h line 30
struct AUTH_T;

// tag-CNODE
// file ./cookie.h line 38
struct CNODE;

// tag-CONFIG
// file ./setup.h line 152
struct CONFIG;

// tag-CREDS_T
// file ./creds.h line 28
struct CREDS_T;

// tag-CREW_T
// file ./crew.h line 37
struct CREW_T;

// tag-ContentType
// file load.c line 38
struct ContentType;

// tag-DATA_T
// file ./data.h line 44
struct DATA_T;

// tag-DIGEST_CHLG
// file ./auth.h line 34
struct DIGEST_CHLG;

// tag-DIGEST_CRED
// file ./auth.h line 33
struct DIGEST_CRED;

// tag-DSA_SIG_st
// file /usr/include/openssl/dsa.h line 124
struct DSA_SIG_st;

// tag-HASH_T
// file ./hash.h line 32
struct HASH_T;

// tag-ISSUING_DIST_POINT_st
// file /usr/include/openssl/ossl_typ.h line 188
struct ISSUING_DIST_POINT_st;

// tag-NAME_CONSTRAINTS_st
// file /usr/include/openssl/ossl_typ.h line 189
struct NAME_CONSTRAINTS_st;

// tag-NODE
// file hash.c line 33
struct NODE;

// tag-URL_T
// file ./url.h line 32
struct URL_T;

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
// file /usr/include/libio.h line 156
struct _IO_marker;

// tag-__jmp_buf_tag
// file /usr/include/pthread.h line 742
struct __jmp_buf_tag;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_pqueue
// file /usr/include/openssl/pqueue.h line 70
struct _pqueue;

// tag-asn1_object_st
// file /usr/include/openssl/ossl_typ.h line 103
struct asn1_object_st;

// tag-asn1_string_st
// file /usr/include/openssl/ossl_typ.h line 83
struct asn1_string_st;

// tag-asn1_type_st
// file /usr/include/openssl/asn1.h line 524
struct asn1_type_st;

// tag-assume
// file date.c line 49
enum assume { DATE_MDAY=0, DATE_YEAR=1, DATE_TIME=2 };

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

// tag-copy_method
// file url.c line 1002
enum copy_method { CM_DECODE=0, CM_ENCODE=1, CM_PASSTHROUGH=2 };

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

// tag-headers
// file ./http.h line 50
struct headers;

// tag-hm_header_st
// file /usr/include/openssl/dtls1.h line 147
struct hm_header_st;

// tag-hmac_ctx_st
// file /usr/include/openssl/hmac.h line 75
struct hmac_ctx_st;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-lhash_st_SSL_SESSION
// file /usr/include/openssl/ssl.h line 923
struct lhash_st_SSL_SESSION;

// tag-md5_ctx
// file ./md5.h line 81
struct md5_ctx;

// tag-option
// file ../include/joedog/getopt.h line 85
struct option;

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

// tag-sess_cert_st
// file /usr/include/openssl/ssl.h line 531
struct sess_cert_st;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 153
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

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

// tag-tms
// file /usr/include/x86_64-linux-gnu/sys/times.h line 34
struct tms;

// tag-tzinfo
// file date.c line 67
struct tzinfo;

// tag-work
// file ./crew.h line 30
struct work;

// tag-x509_cert_aux_st
// file /usr/include/openssl/x509.h line 262
struct x509_cert_aux_st;

// tag-x509_cinf_st
// file /usr/include/openssl/x509.h line 242
struct x509_cinf_st;

// tag-x509_crl_method_st
// file /usr/include/openssl/ossl_typ.h line 157
struct x509_crl_method_st;

// tag-x509_st
// file /usr/include/openssl/ossl_typ.h line 154
struct x509_st;

// tag-x509_store_ctx_st
// file /usr/include/openssl/ossl_typ.h line 162
struct x509_store_ctx_st;

// tag-x509_store_st
// file /usr/include/openssl/ossl_typ.h line 161
struct x509_store_st;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// CLOSELOG
// file notify.c line 71
void CLOSELOG(void);
// CRYPTO_free
// file /usr/include/openssl/crypto.h line 536
void CRYPTO_free(void *);
// CRYPTO_malloc
// file /usr/include/openssl/crypto.h line 534
void * CRYPTO_malloc(signed int, const char *, signed int);
// CRYPTO_num_locks
// file /usr/include/openssl/crypto.h line 435
signed int CRYPTO_num_locks(void);
// CRYPTO_set_id_callback
// file /usr/include/openssl/crypto.h line 462
void CRYPTO_set_id_callback(unsigned long int (*)(void));
// CRYPTO_set_locking_callback
// file /usr/include/openssl/crypto.h line 437
void CRYPTO_set_locking_callback(void (*)(signed int, signed int, const char *, signed int));
// CRYPTO_thread_id
// file /usr/include/openssl/crypto.h line 464
unsigned long int CRYPTO_thread_id(void);
// DISPLAY
// file ../include/joedog/joedog.h line 51
void DISPLAY(signed int color, const char *fmt, ...);
// ERR_error_string
// file /usr/include/openssl/err.h line 334
char * ERR_error_string(unsigned long int, char *);
// ERR_get_error
// file /usr/include/openssl/err.h line 321
unsigned long int ERR_get_error(void);
// ERR_peek_error
// file /usr/include/openssl/err.h line 325
unsigned long int ERR_peek_error(void);
// NOTIFY
// file ../include/joedog/joedog.h line 50
void NOTIFY(enum anonymous$19 L, const char *fmt, ...);
// OPENLOG
// file notify.c line 64
void OPENLOG(char *program);
// SSL_CTX_check_private_key
// file /usr/include/openssl/ssl.h line 2285
signed int SSL_CTX_check_private_key(const struct ssl_ctx_st *);
// SSL_CTX_ctrl
// file /usr/include/openssl/ssl.h line 2339
signed long int SSL_CTX_ctrl(struct ssl_ctx_st *, signed int, signed long int, void *);
// SSL_CTX_free
// file /usr/include/openssl/ssl.h line 2132
void SSL_CTX_free(struct ssl_ctx_st *);
// SSL_CTX_new
// file /usr/include/openssl/ssl.h line 2131
struct ssl_ctx_st * SSL_CTX_new(const struct ssl_method_st *);
// SSL_CTX_set_cipher_list
// file /usr/include/openssl/ssl.h line 2130
signed int SSL_CTX_set_cipher_list(struct ssl_ctx_st *, const char *);
// SSL_CTX_set_timeout
// file /usr/include/openssl/ssl.h line 2133
signed long int SSL_CTX_set_timeout(struct ssl_ctx_st *, signed long int);
// SSL_CTX_use_PrivateKey_file
// file /usr/include/openssl/ssl.h line 2199
signed int SSL_CTX_use_PrivateKey_file(struct ssl_ctx_st *, const char *, signed int);
// SSL_CTX_use_certificate_chain_file
// file /usr/include/openssl/ssl.h line 2202
signed int SSL_CTX_use_certificate_chain_file(struct ssl_ctx_st *, const char *);
// SSL_connect
// file /usr/include/openssl/ssl.h line 2333
signed int SSL_connect(struct ssl_st *);
// SSL_error_stack
// file ssl.c line 235
static void SSL_error_stack(void);
// SSL_free
// file /usr/include/openssl/ssl.h line 2331
void SSL_free(struct ssl_st *);
// SSL_get_error
// file /usr/include/openssl/ssl.h line 2342
signed int SSL_get_error(const struct ssl_st *, signed int);
// SSL_initialize
// file ./ssl.h line 52
enum anonymous SSL_initialize(struct anonymous$0 *C);
// SSL_library_init
// file /usr/include/openssl/ssl.h line 2419
signed int SSL_library_init(void);
// SSL_load_error_strings
// file /usr/include/openssl/ssl.h line 2216
void SSL_load_error_strings(void);
// SSL_new
// file /usr/include/openssl/ssl.h line 2291
struct ssl_st * SSL_new(struct ssl_ctx_st *);
// SSL_pthreads_locking_callback
// file ssl.c line 208
static void SSL_pthreads_locking_callback(signed int mode, signed int type, char *file, signed int line);
// SSL_pthreads_thread_id
// file ssl.c line 226
unsigned long int SSL_pthreads_thread_id(void);
// SSL_read
// file /usr/include/openssl/ssl.h line 2334
signed int SSL_read(struct ssl_st *, void *, signed int);
// SSL_set_fd
// file /usr/include/openssl/ssl.h line 2156
signed int SSL_set_fd(struct ssl_st *, signed int);
// SSL_shutdown
// file /usr/include/openssl/ssl.h line 2397
signed int SSL_shutdown(struct ssl_st *);
// SSL_thread_cleanup
// file ./ssl.h line 54
void SSL_thread_cleanup(void);
// SSL_thread_setup
// file ./ssl.h line 53
void SSL_thread_setup(void);
// SSL_write
// file /usr/include/openssl/ssl.h line 2336
signed int SSL_write(struct ssl_st *, const void *, signed int);
// SSLv23_client_method
// file /usr/include/openssl/ssl.h line 2364
const struct ssl_method_st * SSLv23_client_method(void);
// SYSLOG
// file notify.c line 129
void SYSLOG(enum anonymous$19 L, const char *fmt, ...);
// __basic_header
// file auth.c line 379
static enum anonymous __basic_header(struct AUTH_T *this, enum anonymous$3 scheme, struct CREDS_T *creds);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __ctype_toupper_loc
// file /usr/include/ctype.h line 83
extern const signed int ** __ctype_toupper_loc(void);
// __dequote
// file http.c line 804
static char * __dequote(char *str);
// __digest_challenge
// file auth.c line 486
static struct DIGEST_CHLG * __digest_challenge(const char *challenge);
// __digest_credentials
// file auth.c line 469
static struct DIGEST_CRED * __digest_credentials(struct CREDS_T *creds, unsigned long int *randseed);
// __display
// file notify.c line 153
void __display(signed int color, const char *fmt, void **ap);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __fdelt_chk
// file /usr/include/x86_64-linux-gnu/bits/select2.h line 24
extern signed long int __fdelt_chk(signed long int);
// __fdelt_warn
// file /usr/include/x86_64-linux-gnu/bits/select2.h line 25
extern signed long int __fdelt_warn(signed long int);
// __fgets_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 241
extern char * __fgets_chk(char *, unsigned long int, signed int, struct _IO_FILE *);
// __fprintf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 85
extern signed int __fprintf_chk(struct _IO_FILE *, signed int, const char *, ...);
// __fread_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 266
extern unsigned long int __fread_chk(void *, unsigned long int, unsigned long int, unsigned long int, struct _IO_FILE *);
// __ftp
// file client.c line 478
static enum anonymous __ftp(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client);
// __genkey
// file hash.c line 280
static unsigned int __genkey(signed int size, char *str);
// __get_h_a1
// file auth.c line 628
static char * __get_h_a1(const struct DIGEST_CHLG *chlg, struct DIGEST_CRED *cred, const char *nonce_value);
// __get_keyval
// file auth.c line 434
static enum anonymous$16 __get_keyval(const char *key);
// __get_md5_str
// file auth.c line 602
static char * __get_md5_str(const char *buf);
// __get_random_string
// file auth.c line 447
static char * __get_random_string(unsigned long int length, unsigned int *randseed);
// __http
// file client.c line 205
static enum anonymous __http(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client);
// __in_range
// file ftp.c line 319
static enum anonymous __in_range(signed int code, signed int lower, signed int upper);
// __increment_failures
// file client.c line 697
static void __increment_failures();
// __init_connection
// file client.c line 622
static enum anonymous __init_connection(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client);
// __isoc99_sscanf
// file /usr/include/stdio.h line 448
extern signed int __isoc99_sscanf(const char *, const char *, ...);
// __lookup
// file hash.c line 295
static enum anonymous __lookup(struct HASH_T *this, char *key);
// __lquote
// file http.c line 790
char * __lquote(char *str);
// __message
// file notify.c line 78
static void __message(enum anonymous$22 M, enum anonymous$19 L, const char *fmt, void **ap);
// __open_2
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 26
extern signed int __open_2(const char *, signed int);
// __open_missing_mode
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 37
extern void __open_missing_mode(void);
// __open_too_many_args
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 35
extern void __open_too_many_args(void);
// __parse_input
// file creds.c line 122
static void __parse_input(struct CREDS_T *this, char *str);
// __parse_pair
// file http.c line 739
static char * __parse_pair(char **str);
// __parse_post_data
// file url.c line 549
static void __parse_post_data(struct URL_T *this, char *datap);
// __printf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 87
extern signed int __printf_chk(signed int, const char *, ...);
// __pthread_register_cancel
// file /usr/include/pthread.h line 680
extern void __pthread_register_cancel(struct anonymous$6 *);
// __pthread_unregister_cancel
// file /usr/include/pthread.h line 692
extern void __pthread_unregister_cancel(struct anonymous$6 *);
// __pthread_unwind_next
// file /usr/include/pthread.h line 733
extern void __pthread_unwind_next(struct anonymous$6 *);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __read_chk
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 23
extern signed long int __read_chk(signed int, void *, unsigned long int, unsigned long int);
// __request
// file client.c line 185
static enum anonymous __request(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client);
// __request$link1
// file ftp.c line 241
static signed int __request$link1(struct anonymous$0 *C$link1, char *fmt, ...);
// __resize
// file hash.c line 101
static void __resize(struct HASH_T *this);
// __response
// file ftp.c line 274
static signed int __response(struct anonymous$0 *C);
// __response_code
// file ftp.c line 307
static signed int __response_code(const char *buf);
// __rquote
// file http.c line 776
char * __rquote(char *str);
// __select_color
// file client.c line 707
static signed int __select_color(signed int code);
// __sigsetjmp
// file /usr/include/pthread.h line 743
extern signed int __sigsetjmp(struct __jmp_buf_tag *, signed int);
// __socket_block
// file sock.c line 309
static signed int __socket_block(signed int sock, enum anonymous block);
// __socket_check
// file sock.c line 248
static enum anonymous __socket_check(struct anonymous$0 *C, enum anonymous$7 mode);
// __socket_write
// file sock.c line 361
static signed long int __socket_write(signed int sock, const void *vbuf, unsigned long int len);
// __ssl_socket_write
// file sock.c line 390
static signed long int __ssl_socket_write(struct anonymous$0 *C, const void *vbuf, unsigned long int len);
// __str_list_contains
// file auth.c line 661
static enum anonymous __str_list_contains(const char *str, const char *pattern, unsigned long int pattern_len);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __strpbrk_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1100
static inline char * __strpbrk_c2(const char *__s, signed int __accept1, signed int __accept2);
// __strpbrk_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1111
static inline char * __strpbrk_c3(const char *__s, signed int __accept1, signed int __accept2, signed int __accept3);
// __syslog_chk
// file /usr/include/x86_64-linux-gnu/bits/syslog.h line 24
extern void __syslog_chk(signed int, signed int, const char *, ...);
// __url_default_port
// file url.c line 638
static signed int __url_default_port(struct URL_T *this);
// __url_escape
// file url.c line 1050
static char * __url_escape(const char *s);
// __url_has_credentials
// file url.c line 626
static enum anonymous __url_has_credentials(char *url);
// __url_has_method
// file url.c line 1033
static enum anonymous$2 __url_has_method(const char *url);
// __url_has_scheme
// file url.c line 610
static enum anonymous __url_has_scheme(char *url);
// __url_parse
// file url.c line 493
static void __url_parse(struct URL_T *this, char *url);
// __url_set_absolute
// file url.c line 579
static char * __url_set_absolute(struct URL_T *this, char *url);
// __url_set_file
// file url.c line 837
static char * __url_set_file(struct URL_T *this, char *str);
// __url_set_fragment
// file url.c line 930
static char * __url_set_fragment(struct URL_T *this, char *str);
// __url_set_hostname
// file url.c line 744
static char * __url_set_hostname(struct URL_T *this, char *str);
// __url_set_parameters
// file url.c line 867
static char * __url_set_parameters(struct URL_T *this, char *str);
// __url_set_password
// file url.c line 713
static char * __url_set_password(struct URL_T *this, char *str);
// __url_set_path
// file url.c line 798
static char * __url_set_path(struct URL_T *this, char *str);
// __url_set_port
// file url.c line 770
static char * __url_set_port(struct URL_T *this, char *str);
// __url_set_query
// file url.c line 899
static char * __url_set_query(struct URL_T *this, char *str);
// __url_set_scheme
// file url.c line 658
static char * __url_set_scheme(struct URL_T *this, char *url);
// __url_set_username
// file url.c line 681
static char * __url_set_username(struct URL_T *this, char *str);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// add_cookie
// file cookie.c line 135
signed int add_cookie(unsigned long int id, char *host, char *cookiestr);
// adjust
// file date.c line 159
signed long int adjust(signed long int tvalue, signed int secs);
// array_destroy
// file array.c line 53
struct ARRAY_T * array_destroy(struct ARRAY_T *this);
// array_get
// file array.c line 96
void * array_get(struct ARRAY_T *this, signed int index);
// array_length
// file array.c line 118
unsigned long int array_length(struct ARRAY_T *this);
// array_next
// file array.c line 104
void * array_next(struct ARRAY_T *this);
// array_npush
// file array.c line 78
void array_npush(struct ARRAY_T *this, void *thing, unsigned long int len);
// array_prev
// file array.c line 111
void * array_prev(struct ARRAY_T *this);
// array_push
// file array.c line 66
void array_push(struct ARRAY_T *this, void *thing);
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
// atoi$link5
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link5(const char *__nptr$link5);
// auth_add
// file auth.c line 116
void auth_add(struct AUTH_T *this, struct CREDS_T *creds);
// auth_destroy
// file auth.c line 108
struct AUTH_T * auth_destroy(struct AUTH_T *this);
// auth_display
// file auth.c line 123
void auth_display(struct AUTH_T *this, enum anonymous$3 scheme);
// auth_get_basic_header
// file auth.c line 136
char * auth_get_basic_header(struct AUTH_T *this, enum anonymous$3 scheme);
// auth_get_digest_header
// file auth.c line 173
char * auth_get_digest_header(struct AUTH_T *this, enum anonymous$3 scheme, struct DIGEST_CHLG *chlg, struct DIGEST_CRED *cred, const char *method, const char *uri);
// auth_get_ftp_password
// file auth.c line 353
char * auth_get_ftp_password(struct AUTH_T *this, char *realm);
// auth_get_ftp_username
// file auth.c line 327
char * auth_get_ftp_username(struct AUTH_T *this, char *realm);
// auth_get_proxy_host
// file auth.c line 296
char * auth_get_proxy_host(struct AUTH_T *this);
// auth_get_proxy_port
// file auth.c line 302
signed int auth_get_proxy_port(struct AUTH_T *this);
// auth_get_proxy_required
// file auth.c line 290
enum anonymous auth_get_proxy_required(struct AUTH_T *this);
// auth_set_basic_header
// file auth.c line 146
enum anonymous auth_set_basic_header(struct AUTH_T *this, enum anonymous$3 scheme, char *realm);
// auth_set_digest_header
// file auth.c line 263
enum anonymous auth_set_digest_header(struct AUTH_T *this, struct DIGEST_CHLG **chlg, struct DIGEST_CRED **cred, unsigned long int *rand, char *realm, char *str);
// auth_set_proxy_host
// file auth.c line 314
void auth_set_proxy_host(struct AUTH_T *this, char *host);
// auth_set_proxy_port
// file auth.c line 321
void auth_set_proxy_port(struct AUTH_T *this, signed int port);
// auth_set_proxy_required
// file auth.c line 308
void auth_set_proxy_required(struct AUTH_T *this, enum anonymous required);
// base64_decode
// file base64.c line 96
signed int base64_decode(const char *str, void *data);
// base64_encode
// file ./base64.h line 37
signed int base64_encode(const void *data, signed int size, char **str);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// checkday
// file date.c line 180
static signed int checkday(char *check, unsigned long int len);
// checkmonth
// file date.c line 203
static signed int checkmonth(char *check);
// checktz
// file date.c line 224
static signed int checktz(char *check);
// chomp
// file ../include/joedog/joedog.h line 103
char * chomp(char *str);
// chomp_line
// file init.c line 222
static char * chomp_line(struct _IO_FILE *fp, char **mystr, signed int *line_num);
// clean_up
// file client.c line 615
void clean_up();
// close
// file /usr/include/unistd.h line 356
extern signed int close(signed int);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// create_logfile
// file log.c line 168
enum anonymous create_logfile(const char *file);
// creds_destroy
// file creds.c line 54
struct CREDS_T * creds_destroy(struct CREDS_T *this);
// creds_get_password
// file ./creds.h line 35
char * creds_get_password(struct CREDS_T *this);
// creds_get_realm
// file ./creds.h line 36
char * creds_get_realm(struct CREDS_T *this);
// creds_get_scheme
// file ./creds.h line 33
enum anonymous$3 creds_get_scheme(struct CREDS_T *this);
// creds_get_username
// file ./creds.h line 34
char * creds_get_username(struct CREDS_T *this);
// creds_set_password
// file creds.c line 99
void creds_set_password(struct CREDS_T *this, char *password);
// creds_set_realm
// file creds.c line 110
void creds_set_realm(struct CREDS_T *this, char *realm);
// creds_set_username
// file creds.c line 88
void creds_set_username(struct CREDS_T *this, char *username);
// crew_add
// file crew.c line 143
enum anonymous crew_add(struct CREW_T *crew, void (*routine)(), void *arg);
// crew_add::routine$object
//
void routine$object();
// crew_cancel
// file crew.c line 196
enum anonymous crew_cancel(struct CREW_T *this);
// crew_destroy
// file crew.c line 281
void crew_destroy(struct CREW_T *crew);
// crew_get_shutdown
// file crew.c line 323
enum anonymous crew_get_shutdown(struct CREW_T *this);
// crew_get_size
// file crew.c line 311
signed int crew_get_size(struct CREW_T *this);
// crew_get_total
// file crew.c line 317
signed int crew_get_total(struct CREW_T *this);
// crew_join
// file crew.c line 218
enum anonymous crew_join(struct CREW_T *crew, enum anonymous finish, void **payload);
// crew_set_shutdown
// file crew.c line 298
void crew_set_shutdown(struct CREW_T *this, enum anonymous shutdown);
// crew_thread
// file crew.c line 91
static void * crew_thread(void *crew);
// data_destroy
// file data.c line 82
void data_destroy(struct DATA_T *this);
// data_get_availability
// file data.c line 233
float data_get_availability(struct DATA_T *this);
// data_get_bytes
// file data.c line 193
float data_get_bytes(struct DATA_T *this);
// data_get_code
// file data.c line 169
unsigned int data_get_code(struct DATA_T *this);
// data_get_concurrency
// file data.c line 264
float data_get_concurrency(struct DATA_T *this);
// data_get_count
// file data.c line 163
unsigned int data_get_count(struct DATA_T *this);
// data_get_elapsed
// file data.c line 221
float data_get_elapsed(struct DATA_T *this);
// data_get_fail
// file data.c line 175
unsigned int data_get_fail(struct DATA_T *this);
// data_get_highest
// file data.c line 199
float data_get_highest(struct DATA_T *this);
// data_get_lowest
// file data.c line 205
float data_get_lowest(struct DATA_T *this);
// data_get_megabytes
// file data.c line 215
float data_get_megabytes(struct DATA_T *this);
// data_get_ok200
// file data.c line 181
unsigned int data_get_ok200(struct DATA_T *this);
// data_get_response_time
// file data.c line 240
float data_get_response_time(struct DATA_T *this);
// data_get_throughput
// file data.c line 256
float data_get_throughput(struct DATA_T *this);
// data_get_total
// file data.c line 187
float data_get_total(struct DATA_T *this);
// data_get_transaction_rate
// file data.c line 248
float data_get_transaction_rate(struct DATA_T *this);
// data_increment_bytes
// file data.c line 89
void data_increment_bytes(struct DATA_T *this, unsigned long int bytes);
// data_increment_code
// file data.c line 110
void data_increment_code(struct DATA_T *this, signed int code);
// data_increment_count
// file data.c line 96
void data_increment_count(struct DATA_T *this, unsigned long int count);
// data_increment_fail
// file data.c line 117
void data_increment_fail(struct DATA_T *this, signed int fail);
// data_increment_ok200
// file data.c line 124
void data_increment_ok200(struct DATA_T *this, signed int ok200);
// data_increment_total
// file data.c line 103
void data_increment_total(struct DATA_T *this, float total);
// data_set_highest
// file data.c line 145
void data_set_highest(struct DATA_T *this, float highest);
// data_set_lowest
// file data.c line 154
void data_set_lowest(struct DATA_T *this, float lowest);
// data_set_start
// file data.c line 131
void data_set_start(struct DATA_T *this);
// data_set_stop
// file data.c line 138
void data_set_stop(struct DATA_T *this);
// debug
// file ./util.h line 36
void debug(const char *fmt, ...);
// decide_copy_method
// file url.c line 1009
static inline enum copy_method decide_copy_method(const char *p);
// delete_all_cookies
// file ./cookie.h line 62
signed int delete_all_cookies(unsigned long int id);
// delete_cookie
// file cookie.c line 195
enum anonymous delete_cookie(unsigned long int id, char *name);
// display_cookies
// file cookie.c line 329
void display_cookies();
// display_help
// file ./setup.h line 143
void display_help();
// display_version
// file main.c line 92
void display_version(enum anonymous b);
// ds_module_check
// file init.c line 546
void ds_module_check(void);
// echo
// file ./util.h line 35
void echo(const char *fmt, ...);
// elapsed_time
// file ../include/joedog/joedog.h line 70
float elapsed_time(signed long int time);
// empty
// file ../include/joedog/joedog.h line 138
signed int empty(const char *s);
// evaluate
// file ./eval.h line 31
char * evaluate(struct HASH_T *hash_table, char *buf);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 146
extern signed int fcntl(signed int, signed int, ...);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// fgets
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 253
static inline char * fgets(char * restrict __s, signed int __n, struct _IO_FILE * restrict __stream);
// fgets$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 253
static inline char * fgets$link1(char * restrict __s$link1, signed int __n$link1, struct _IO_FILE * restrict __stream$link1);
// file_exists
// file log.c line 142
enum anonymous file_exists(char *file);
// fnv_32_buf
// file hash.c line 260
static unsigned int fnv_32_buf(void *buf, unsigned long int len, unsigned int hval);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf(struct _IO_FILE * restrict __stream, const char * restrict __fmt, ...);
// fprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link1(struct _IO_FILE * restrict __stream$link1, const char * restrict __fmt$link1, ...);
// fprintf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link2(struct _IO_FILE * restrict __stream$link2, const char * restrict __fmt$link2, ...);
// fprintf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link3(struct _IO_FILE * restrict __stream$link3, const char * restrict __fmt$link3, ...);
// fprintf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link4(struct _IO_FILE * restrict __stream$link4, const char * restrict __fmt$link4, ...);
// fprintf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link5(struct _IO_FILE * restrict __stream$link5, const char * restrict __fmt$link5, ...);
// fprintf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link6(struct _IO_FILE * restrict __stream$link6, const char * restrict __fmt$link6, ...);
// fprintf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link7(struct _IO_FILE * restrict __stream$link7, const char * restrict __fmt$link7, ...);
// fread
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 282
static inline unsigned long int fread(void * restrict __ptr, unsigned long int __size, unsigned long int __n, struct _IO_FILE * restrict __stream);
// fread$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 282
static inline unsigned long int fread$link1(void * restrict __ptr$link1, unsigned long int __size$link1, unsigned long int __n$link1, struct _IO_FILE * restrict __stream$link1);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_cookie
// file cookie.c line 40
void free_cookie(struct anonymous$12 *ck);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// ftp_ascii
// file ftp.c line 99
enum anonymous ftp_ascii(struct anonymous$0 *C);
// ftp_binary
// file ftp.c line 106
enum anonymous ftp_binary(struct anonymous$0 *C);
// ftp_cwd
// file ftp.c line 90
enum anonymous ftp_cwd(struct anonymous$0 *C, struct URL_T *U);
// ftp_get
// file ./ftp.h line 38
unsigned long int ftp_get(struct anonymous$0 *D, struct URL_T *U, unsigned long int size);
// ftp_list
// file ftp.c line 217
enum anonymous ftp_list(struct anonymous$0 *C, struct anonymous$0 *D, struct URL_T *U);
// ftp_login
// file ./ftp.h line 29
enum anonymous ftp_login(struct anonymous$0 *C, struct URL_T *U);
// ftp_pasv
// file ./ftp.h line 34
enum anonymous ftp_pasv(struct anonymous$0 *C);
// ftp_put
// file ./ftp.h line 39
unsigned long int ftp_put(struct anonymous$0 *D, struct URL_T *U);
// ftp_quit
// file ./ftp.h line 40
enum anonymous ftp_quit(struct anonymous$0 *C);
// ftp_retr
// file ./ftp.h line 37
enum anonymous ftp_retr(struct anonymous$0 *C, struct URL_T *U);
// ftp_size
// file ./ftp.h line 32
enum anonymous ftp_size(struct anonymous$0 *C, struct URL_T *U);
// ftp_stor
// file ./ftp.h line 36
enum anonymous ftp_stor(struct anonymous$0 *C, struct URL_T *U);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_content_type
// file load.c line 210
char * get_content_type(char *file);
// get_cookie_header
// file cookie.c line 270
char * get_cookie_header(unsigned long int id, char *host, char *newton);
// get_line
// file init.c line 199
static char * get_line(struct _IO_FILE *fp);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gethostbyname_r
// file /usr/include/netdb.h line 179
extern signed int gethostbyname_r(const char *, struct hostent *, char *, unsigned long int, struct hostent ** restrict , signed int *);
// getopt_long
// file ../include/joedog/getopt.h line 142
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// gmtime
// file /usr/include/time.h line 239
extern struct tm * gmtime(const signed long int *);
// hash_add
// file ./hash.h line 35
void hash_add(struct HASH_T *this, char *key, char *value);
// hash_destroy
// file ./hash.h line 39
void hash_destroy(struct HASH_T *this);
// hash_free_keys
// file hash.c line 206
void hash_free_keys(struct HASH_T *this, char **keys);
// hash_get
// file ./hash.h line 36
char * hash_get(struct HASH_T *this, char *key);
// hash_get_entries
// file hash.c line 251
signed int hash_get_entries(struct HASH_T *this);
// hash_get_keys
// file hash.c line 185
char ** hash_get_keys(struct HASH_T *this);
// hash_lookup
// file ./hash.h line 38
enum anonymous hash_lookup(struct HASH_T *this, char *key);
// hash_reset
// file hash.c line 81
void hash_reset(struct HASH_T *this, signed long int size);
// http_chunk_size
// file http.c line 619
signed int http_chunk_size(struct anonymous$0 *C);
// http_free_headers
// file ./http.h line 79
void http_free_headers(struct headers *h);
// http_get
// file ./http.h line 77
enum anonymous http_get(struct anonymous$0 *C, struct URL_T *U);
// http_post
// file ./http.h line 78
enum anonymous http_post(struct anonymous$0 *C, struct URL_T *U);
// http_read
// file ./http.h line 81
signed long int http_read(struct anonymous$0 *C);
// http_read_headers
// file ./http.h line 80
struct headers * http_read_headers(struct anonymous$0 *C, struct URL_T *U);
// https_tunnel_request
// file ./http.h line 82
enum anonymous https_tunnel_request(struct anonymous$0 *C, char *host, signed int port);
// https_tunnel_response
// file ./http.h line 83
signed int https_tunnel_response(struct anonymous$0 *C);
// init_config
// file init.c line 39
signed int init_config(void);
// is_ascii
// file load.c line 225
enum anonymous is_ascii(char *file);
// is_variable_line
// file cfg.c line 169
enum anonymous is_variable_line(char *line);
// itoa
// file util.c line 76
void itoa(signed int n, char *s);
// load_conf
// file init.c line 239
signed int load_conf(char *filename);
// load_file
// file load.c line 244
void load_file(struct URL_T *U, char *file);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// log_transaction
// file log.c line 37
void log_transaction(struct DATA_T *D);
// lowercase
// file util.c line 105
char * lowercase(char *s, unsigned long int len);
// ltrim
// file perl.c line 70
char * ltrim(char *str);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mark_log_file
// file log.c line 112
void mark_log_file(char *message);
// md5_buffer
// file md5.c line 187
extern void * md5_buffer(const char *buffer, unsigned long int len, void *resblock);
// md5_finish_ctx
// file ./md5.h line 123
extern void * md5_finish_ctx(struct md5_ctx *ctx, void *resbuf);
// md5_init_ctx
// file ./md5.h line 100
extern void md5_init_ctx(struct md5_ctx *ctx);
// md5_process_block
// file md5.c line 264
extern void md5_process_block(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// md5_process_bytes
// file ./md5.h line 113
extern void md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// md5_read_ctx
// file md5.c line 81
extern void * md5_read_ctx(struct md5_ctx *ctx, void *resbuf);
// md5_stream
// file md5.c line 130
extern signed int md5_stream(struct _IO_FILE *stream, void *resblock);
// memchr
// file /usr/include/string.h line 92
extern void * memchr(const void *, signed int, unsigned long int);
// memcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy(void * restrict __dest, const void * restrict __src, unsigned long int __len);
// memcpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link1(void * restrict __dest$link1, const void * restrict __src$link1, unsigned long int __len$link1);
// memcpy$link10
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link10(void * restrict __dest$link10, const void * restrict __src$link10, unsigned long int __len$link10);
// memcpy$link11
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link11(void * restrict __dest$link11, const void * restrict __src$link11, unsigned long int __len$link11);
// memcpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link2(void * restrict __dest$link2, const void * restrict __src$link2, unsigned long int __len$link2);
// memcpy$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link3(void * restrict __dest$link3, const void * restrict __src$link3, unsigned long int __len$link3);
// memcpy$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link4(void * restrict __dest$link4, const void * restrict __src$link4, unsigned long int __len$link4);
// memcpy$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link5(void * restrict __dest$link5, const void * restrict __src$link5, unsigned long int __len$link5);
// memcpy$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link6(void * restrict __dest$link6, const void * restrict __src$link6, unsigned long int __len$link6);
// memcpy$link7
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link7(void * restrict __dest$link7, const void * restrict __src$link7, unsigned long int __len$link7);
// memcpy$link8
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link8(void * restrict __dest$link8, const void * restrict __src$link8, unsigned long int __len$link8);
// memcpy$link9
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link9(void * restrict __dest$link9, const void * restrict __src$link9, unsigned long int __len$link9);
// memmove
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove(void *__dest, const void *__src, unsigned long int __len);
// memmove$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove$link1(void *__dest$link1, const void *__src$link1, unsigned long int __len$link1);
// memmove$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove$link2(void *__dest$link2, const void *__src$link2, unsigned long int __len$link2);
// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len);
// memset$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link1(void *__dest$link1, signed int __ch$link1, unsigned long int __len$link1);
// memset$link10
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link10(void *__dest$link10, signed int __ch$link10, unsigned long int __len$link10);
// memset$link11
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link11(void *__dest$link11, signed int __ch$link11, unsigned long int __len$link11);
// memset$link12
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link12(void *__dest$link12, signed int __ch$link12, unsigned long int __len$link12);
// memset$link13
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link13(void *__dest$link13, signed int __ch$link13, unsigned long int __len$link13);
// memset$link14
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link14(void *__dest$link14, signed int __ch$link14, unsigned long int __len$link14);
// memset$link15
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link15(void *__dest$link15, signed int __ch$link15, unsigned long int __len$link15);
// memset$link16
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link16(void *__dest$link16, signed int __ch$link16, unsigned long int __len$link16);
// memset$link17
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link17(void *__dest$link17, signed int __ch$link17, unsigned long int __len$link17);
// memset$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link2(void *__dest$link2, signed int __ch$link2, unsigned long int __len$link2);
// memset$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link3(void *__dest$link3, signed int __ch$link3, unsigned long int __len$link3);
// memset$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link4(void *__dest$link4, signed int __ch$link4, unsigned long int __len$link4);
// memset$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link5(void *__dest$link5, signed int __ch$link5, unsigned long int __len$link5);
// memset$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link6(void *__dest$link6, signed int __ch$link6, unsigned long int __len$link6);
// memset$link7
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link7(void *__dest$link7, signed int __ch$link7, unsigned long int __len$link7);
// memset$link8
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link8(void *__dest$link8, signed int __ch$link8, unsigned long int __len$link8);
// memset$link9
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link9(void *__dest$link9, signed int __ch$link9, unsigned long int __len$link9);
// mktime
// file /usr/include/time.h line 199
extern signed long int mktime(struct tm *);
// my_random
// file util.c line 69
signed int my_random(signed int max, signed int seed);
// new_array
// file array.c line 43
struct ARRAY_T * new_array();
// new_auth
// file auth.c line 95
struct AUTH_T * new_auth();
// new_creds
// file creds.c line 43
struct CREDS_T * new_creds(enum anonymous$3 scheme, char *str);
// new_crew
// file crew.c line 51
struct CREW_T * new_crew(signed int size, signed int maxsize, enum anonymous block);
// new_data
// file data.c line 64
struct DATA_T * new_data();
// new_hash
// file ./hash.h line 34
struct HASH_T * new_hash();
// new_socket
// file ./sock.h line 135
signed int new_socket(struct anonymous$0 *C, const char *hostparam, signed int portparam);
// new_url
// file ./url.h line 68
struct URL_T * new_url(char *str);
// okay
// file ./util.h line 34
enum anonymous okay(signed int code);
// open
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open(const char *__path, signed int __oflag, ...);
// open$link1
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open$link1(const char *__path$link1, signed int __oflag$link1, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse
// file cfg.c line 38
void parse(char *str);
// parse_cmdline
// file main.c line 189
void parse_cmdline(signed int argc, char **argv);
// parse_cookie
// file cookie.c line 51
void parse_cookie(char *cookiestr, struct anonymous$12 *ck);
// parse_rc_cmdline
// file main.c line 168
void parse_rc_cmdline(signed int argc, char **argv);
// parse_time
// file ./util.h line 28
void parse_time(char *p);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pos
// file base64.c line 48
static signed int pos(char c);
// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...);
// printf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link1(const char * restrict __fmt$link1, ...);
// printf$link10
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link10(const char * restrict __fmt$link10, ...);
// printf$link11
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link11(const char * restrict __fmt$link11, ...);
// printf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link2(const char * restrict __fmt$link2, ...);
// printf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link3(const char * restrict __fmt$link3, ...);
// printf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link4(const char * restrict __fmt$link4, ...);
// printf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link5(const char * restrict __fmt$link5, ...);
// printf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link6(const char * restrict __fmt$link6, ...);
// printf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link7(const char * restrict __fmt$link7, ...);
// printf$link8
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link8(const char * restrict __fmt$link8, ...);
// printf$link9
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link9(const char * restrict __fmt$link9, ...);
// pthread_attr_init
// file /usr/include/pthread.h line 287
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setscope
// file /usr/include/pthread.h line 351
extern signed int pthread_attr_setscope(union pthread_attr_t *, signed int);
// pthread_cancel
// file /usr/include/pthread.h line 513
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 981
extern signed int pthread_cond_broadcast(union anonymous$13 *);
// pthread_cond_init
// file /usr/include/pthread.h line 968
extern signed int pthread_cond_init(union anonymous$13 *, const union anonymous$18 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 977
extern signed int pthread_cond_signal(union anonymous$13 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1000
extern signed int pthread_cond_timedwait(union anonymous$13 *, union anonymous$10 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 989
extern signed int pthread_cond_wait(union anonymous$13 *, union anonymous$10 *);
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 242
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 250
extern signed int pthread_join(unsigned long int, void **);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 754
extern signed int pthread_mutex_destroy(union anonymous$10 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous$10 *, const union anonymous$18 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous$10 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous$10 *);
// pthread_rand_np
// file ./util.h line 31
signed int pthread_rand_np(unsigned int *ctx);
// pthread_self
// file /usr/include/pthread.h line 275
extern unsigned long int pthread_self(void);
// pthread_setcancelstate
// file /usr/include/pthread.h line 506
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 510
extern signed int pthread_setcanceltype(signed int, signed int *);
// pthread_sleep_np
// file ./util.h line 29
void pthread_sleep_np(unsigned int secs);
// pthread_testcancel
// file /usr/include/pthread.h line 518
extern void pthread_testcancel(void);
// pthread_usleep_np
// file ./util.h line 30
void pthread_usleep_np(unsigned long int usec);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// rand_r
// file /usr/include/stdlib.h line 381
extern signed int rand_r(unsigned int *);
// read
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read(signed int __fd, void *__buf, unsigned long int __nbytes);
// read$link1
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read$link1(signed int __fd$link1, void *__buf$link1, unsigned long int __nbytes$link1);
// read$link2
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read$link2(signed int __fd$link2, void *__buf$link2, unsigned long int __nbytes$link2);
// read_cfg_file
// file cfg.c line 53
signed int read_cfg_file(struct anonymous$15 *l, char *filename);
// read_cmd_line
// file cfg.c line 140
signed int read_cmd_line(struct anonymous$15 *l, char *url);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reverse
// file util.c line 93
void reverse(char *s);
// rtrim
// file perl.c line 53
char * rtrim(char *str);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$5 *, struct anonymous$5 *, struct anonymous$5 *, struct timeval *);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// show_config
// file init.c line 136
signed int show_config(signed int EXIT);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// siege_timer
// file ./timer.h line 28
void siege_timer(unsigned long int handler);
// sig_handler
// file handler.c line 57
void sig_handler(struct CREW_T *crew);
// sigaddset
// file /usr/include/signal.h line 219
extern signed int sigaddset(struct anonymous$23 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 213
extern signed int sigemptyset(struct anonymous$23 *);
// sigprocmask
// file /usr/include/signal.h line 246
extern signed int sigprocmask(signed int, const struct anonymous$23 *, struct anonymous$23 *);
// sigwait
// file /usr/include/signal.h line 268
extern signed int sigwait(const struct anonymous$23 *, signed int *);
// skip
// file date.c line 244
static void skip(const char **date);
// sleep
// file /usr/include/unistd.h line 447
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, ...);
// snprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link1(char * restrict __s$link1, unsigned long int __n$link1, const char * restrict __fmt$link1, ...);
// snprintf$link10
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link10(char * restrict __s$link10, unsigned long int __n$link10, const char * restrict __fmt$link10, ...);
// snprintf$link11
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link11(char * restrict __s$link11, unsigned long int __n$link11, const char * restrict __fmt$link11, ...);
// snprintf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link2(char * restrict __s$link2, unsigned long int __n$link2, const char * restrict __fmt$link2, ...);
// snprintf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link3(char * restrict __s$link3, unsigned long int __n$link3, const char * restrict __fmt$link3, ...);
// snprintf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link4(char * restrict __s$link4, unsigned long int __n$link4, const char * restrict __fmt$link4, ...);
// snprintf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link5(char * restrict __s$link5, unsigned long int __n$link5, const char * restrict __fmt$link5, ...);
// snprintf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link6(char * restrict __s$link6, unsigned long int __n$link6, const char * restrict __fmt$link6, ...);
// snprintf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link7(char * restrict __s$link7, unsigned long int __n$link7, const char * restrict __fmt$link7, ...);
// snprintf$link8
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link8(char * restrict __s$link8, unsigned long int __n$link8, const char * restrict __fmt$link8, ...);
// snprintf$link9
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link9(char * restrict __s$link9, unsigned long int __n$link9, const char * restrict __fmt$link9, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socket_close
// file ./sock.h line 140
void socket_close(struct anonymous$0 *C);
// socket_read
// file ./sock.h line 138
signed long int socket_read(struct anonymous$0 *C, void *vbuf, unsigned long int len);
// socket_readline
// file ./sock.h line 139
signed long int socket_readline(struct anonymous$0 *C, char *ptr, unsigned long int maxlen);
// socket_write
// file ./sock.h line 137
signed int socket_write(struct anonymous$0 *C, const void *buf, unsigned long int len);
// spin_doctor
// file handler.c line 38
void spin_doctor(struct CREW_T *crew);
// split
// file ../include/joedog/joedog.h line 127
char ** split(char pattern, char *s, signed int *n_words);
// split_free
// file ../include/joedog/joedog.h line 132
void split_free(char **split, signed int length);
// sprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 31
static inline signed int sprintf(char * restrict __s, const char * restrict __fmt, ...);
// sprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 31
static inline signed int sprintf$link1(char * restrict __s$link1, const char * restrict __fmt$link1, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// start_routine
// file client.c line 81
void * start_routine(struct anonymous$4 *client);
// start_routine::1::1::__cancel_routine$object
//
void __cancel_routine$object(void *);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stralloc
// file ../include/joedog/joedog.h line 148
char * stralloc(char *str);
// strcasecmp
// file /usr/include/string.h line 529
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat(char * restrict __dest, const char * restrict __src);
// strcat$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat$link1(char * restrict __dest$link1, const char * restrict __src$link1);
// strcat$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat$link2(char * restrict __dest$link2, const char * restrict __src$link2);
// strcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy(char * restrict __dest, const char * restrict __src);
// strcpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy$link1(char * restrict __dest$link1, const char * restrict __src$link1);
// strcpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy$link2(char * restrict __dest$link2, const char * restrict __src$link2);
// strerror
// file /usr/include/string.h line 408
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 394
extern unsigned long int strlen(const char *);
// strmatch
// file ./util.h line 33
enum anonymous strmatch(char *option, char *param);
// strncasecmp
// file /usr/include/string.h line 533
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncasestr
// file ./util.h line 43
const char * strncasestr(const char *str1, const char *str2, unsigned long int len);
// strncat
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 153
static inline char * strncat(char * restrict __dest, const char * restrict __src, unsigned long int __len);
// strncmp
// file /usr/include/string.h line 143
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy(char * restrict __dest, const char * restrict __src, unsigned long int __len);
// strncpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link1(char * restrict __dest$link1, const char * restrict __src$link1, unsigned long int __len$link1);
// strncpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link2(char * restrict __dest$link2, const char * restrict __src$link2, unsigned long int __len$link2);
// strncpy$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link3(char * restrict __dest$link3, const char * restrict __src$link3, unsigned long int __len$link3);
// strncpy$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link4(char * restrict __dest$link4, const char * restrict __src$link4, unsigned long int __len$link4);
// strncpy$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link5(char * restrict __dest$link5, const char * restrict __src$link5, unsigned long int __len$link5);
// strncpy$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link6(char * restrict __dest$link6, const char * restrict __src$link6, unsigned long int __len$link6);
// strnlen
// file util.c line 310
extern unsigned long int strnlen(const char *str, unsigned long int len);
// strstr
// file /usr/include/string.h line 337
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtotime
// file ./date.h line 29
signed long int strtotime(const char *string);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// substring
// file ../include/joedog/joedog.h line 69
char * substring(char *str, signed int start, signed int len);
// sysconf
// file /usr/include/unistd.h line 622
extern signed long int sysconf(signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/bits/syslog.h line 29
static inline void syslog(signed int __pri, const char *__fmt, ...);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// times
// file /usr/include/x86_64-linux-gnu/sys/times.h line 48
extern signed long int times(struct tms *);
// timestamp
// file ./date.h line 31
char * timestamp();
// timetostr
// file date.c line 120
char * timetostr(const signed long int *T);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c);
// toupper$link1
// file /usr/include/ctype.h line 221
static inline signed int toupper$link1(signed int __c$link1);
// trim
// file ../include/joedog/joedog.h line 121
char * trim(char *str);
// uppercase
// file ./util.h line 37
char * uppercase(char *s, unsigned long int len);
// urandom
// file ./util.h line 32
signed int urandom();
// url_destroy
// file ./url.h line 69
struct URL_T * url_destroy(struct URL_T *this);
// url_dump
// file url.c line 410
void url_dump(struct URL_T *this);
// url_get_ID
// file ./url.h line 80
signed int url_get_ID(struct URL_T *this);
// url_get_absolute
// file url.c line 204
char * url_get_absolute(struct URL_T *this);
// url_get_conttype
// file ./url.h line 134
char * url_get_conttype(struct URL_T *this);
// url_get_display
// file ./url.h line 125
char * url_get_display(struct URL_T *this);
// url_get_etag
// file ./url.h line 136
char * url_get_etag(struct URL_T *this);
// url_get_file
// file ./url.h line 107
char * url_get_file(struct URL_T *this);
// url_get_fragment
// file url.c line 301
char * url_get_fragment(struct URL_T *this);
// url_get_hostname
// file ./url.h line 98
char * url_get_hostname(struct URL_T *this);
// url_get_if_modified_since
// file ./url.h line 135
char * url_get_if_modified_since(struct URL_T *this);
// url_get_method
// file ./url.h line 81
enum anonymous$2 url_get_method(struct URL_T *this);
// url_get_method_name
// file ./url.h line 82
char * url_get_method_name(struct URL_T *this);
// url_get_parameters
// file url.c line 289
char * url_get_parameters(struct URL_T *this);
// url_get_password
// file ./url.h line 95
char * url_get_password(struct URL_T *this);
// url_get_path
// file ./url.h line 104
char * url_get_path(struct URL_T *this);
// url_get_port
// file ./url.h line 101
signed int url_get_port(struct URL_T *this);
// url_get_postdata
// file ./url.h line 132
char * url_get_postdata(struct URL_T *this);
// url_get_postlen
// file ./url.h line 131
unsigned long int url_get_postlen(struct URL_T *this);
// url_get_posttemp
// file url.c line 317
char * url_get_posttemp(struct URL_T *this);
// url_get_query
// file url.c line 295
char * url_get_query(struct URL_T *this);
// url_get_realm
// file url.c line 376
char * url_get_realm(struct URL_T *this);
// url_get_request
// file ./url.h line 108
char * url_get_request(struct URL_T *this);
// url_get_scheme
// file ./url.h line 88
enum anonymous$3 url_get_scheme(struct URL_T *this);
// url_get_scheme_name
// file url.c line 228
char * url_get_scheme_name(struct URL_T *this);
// url_get_username
// file ./url.h line 92
char * url_get_username(struct URL_T *this);
// url_normalize
// file ./url.h line 141
struct URL_T * url_normalize(struct URL_T *req, char *location);
// url_set_ID
// file ./url.h line 72
void url_set_ID(struct URL_T *this, signed int ID);
// url_set_conttype
// file ./url.h line 76
void url_set_conttype(struct URL_T *this, char *type);
// url_set_etag
// file ./url.h line 75
void url_set_etag(struct URL_T *this, char *etag);
// url_set_hostname
// file ./url.h line 73
void url_set_hostname(struct URL_T *this, char *hostname);
// url_set_last_modified
// file ./url.h line 74
void url_set_last_modified(struct URL_T *this, char *date);
// url_set_method
// file ./url.h line 78
void url_set_method(struct URL_T *this, enum anonymous$2 method);
// url_set_password
// file ./url.h line 140
void url_set_password(struct URL_T *this, char *password);
// url_set_postdata
// file ./url.h line 77
void url_set_postdata(struct URL_T *this, char *postdata, unsigned long int postlen);
// url_set_realm
// file ./url.h line 138
void url_set_realm(struct URL_T *this, char *realm);
// url_set_username
// file ./url.h line 139
void url_set_username(struct URL_T *this, char *username);
// usleep
// file /usr/include/unistd.h line 463
extern signed int usleep(unsigned int);
// valid
// file perl.c line 96
signed int valid(const char *s);
// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap);
// vsnprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf$link1(char * restrict __s$link1, unsigned long int __n$link1, const char * restrict __fmt$link1, void **__ap$link1);
// vsprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 43
static inline signed int vsprintf(char * restrict __s, const char * restrict __fmt, void **__ap);
// word_count
// file perl.c line 125
signed int word_count(char pattern, char *s);
// write
// file /usr/include/unistd.h line 369
extern signed long int write(signed int, const void *, unsigned long int);
// write_file
// file ./load.h line 28
void write_file(struct URL_T *U, char *buf, unsigned long int len);
// write_to_log
// file log.c line 51
void write_to_log(signed int count, float elapsed, signed int bytes, float ttime, signed int code, signed int failed);
// xcalloc
// file ../include/joedog/joedog.h line 58
void * xcalloc(unsigned long int num, unsigned long int size);
// xfree
// file ../include/joedog/joedog.h line 61
void xfree(void *ptr);
// xmalloc
// file ../include/joedog/joedog.h line 57
void * xmalloc(unsigned long int size);
// xrealloc
// file ../include/joedog/joedog.h line 56
void * xrealloc(void *ptr, unsigned long int size);
// xstrcat
// file ../include/joedog/joedog.h line 60
char * xstrcat(const char *arg1, ...);
// xstrdup
// file ../include/joedog/joedog.h line 59
char * xstrdup(const char *str);

struct anonymous$20
{
  // encode
  char *encode;
};

struct anonymous$12
{
  // name
  char *name;
  // value
  char *value;
  // domain
  char *domain;
  // path
  char *path;
  // expires
  signed long int expires;
  // secure
  signed int secure;
};

struct anonymous$36
{
  // www
  char *www;
  // proxy
  char *proxy;
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

union anonymous$10
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous$11
{
  // first
  struct CNODE *first;
  // mutex
  union anonymous$10 mutex;
};

struct anonymous$28
{
  // www
  signed int www;
  // proxy
  signed int proxy;
};

struct anonymous$30
{
  // www
  enum anonymous$29 www;
  // proxy
  enum anonymous$29 proxy;
};

struct anonymous$24
{
  // wchlg
  struct DIGEST_CHLG *wchlg;
  // wcred
  struct DIGEST_CRED *wcred;
  // www
  signed int www;
  // pchlg
  struct DIGEST_CHLG *pchlg;
  // pcred
  struct DIGEST_CRED *pcred;
  // proxy
  signed int proxy;
  // bids
  struct anonymous$28 bids;
  // type
  struct anonymous$30 type;
};

struct anonymous$35
{
  // wchlg
  struct DIGEST_CHLG *wchlg;
  // wcred
  struct DIGEST_CRED *wcred;
  // www
  signed int www;
  // pchlg
  struct DIGEST_CHLG *pchlg;
  // pcred
  struct DIGEST_CRED *pcred;
  // proxy
  signed int proxy;
  // type
  struct anonymous$30 type;
};

struct anonymous$17
{
  // keyname
  const char *keyname;
  // keyval
  enum anonymous$16 keyval;
};

struct anonymous$27
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

struct anonymous$5
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous$23
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$8
{
  // __cancel_jmp_buf
  signed long int __cancel_jmp_buf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
};

struct anonymous$6
{
  // __cancel_jmp_buf
  struct anonymous$8 __cancel_jmp_buf[1l];
  // __pad
  void *__pad[4l];
};

struct anonymous$14
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

struct anonymous$9
{
  // code
  signed int code;
  // host
  char host[64l];
  // port
  signed int port;
  // size
  unsigned long int size;
  // pasv
  enum anonymous pasv;
};

struct anonymous$4
{
  // id
  signed int id;
  // hits
  unsigned long int hits;
  // bytes
  unsigned long int bytes;
  // code
  unsigned int code;
  // fail
  unsigned int fail;
  // ok200
  unsigned int ok200;
  // urls
  struct ARRAY_T *urls;
  // auth
  struct anonymous$24 auth;
  // status
  signed int status;
  // time
  float time;
  // rand_r_SEED
  unsigned int rand_r_SEED;
  // himark
  float himark;
  // lomark
  float lomark;
};

struct anonymous$15
{
  // index
  signed int index;
  // line
  char **line;
};

struct anonymous$34
{
  // max
  signed int max;
  // timeout
  signed int timeout;
  // reuse
  signed int reuse;
  // status
  signed int status;
  // keepalive
  signed int keepalive;
  // tested
  signed int tested;
};

struct anonymous$25
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

struct anonymous$33
{
  // transfer
  enum anonymous$32 transfer;
  // length
  unsigned long int length;
};

struct anonymous$0
{
  // sock
  signed int sock;
  // status
  enum anonymous$31 status;
  // encrypt
  enum anonymous encrypt;
  // scheme
  enum anonymous$3 scheme;
  // content
  struct anonymous$33 content;
  // connection
  struct anonymous$34 connection;
  // auth
  struct anonymous$35 auth;
  // ssl
  struct ssl_st *ssl;
  // ctx
  struct ssl_ctx_st *ctx;
  // method
  struct ssl_method_st *method;
  // cert
  struct x509_st *cert;
  // inbuffer
  unsigned long int inbuffer;
  // pos_ini
  signed int pos_ini;
  // buffer
  char buffer[4096l];
  // chkbuf
  char chkbuf[1024l];
  // ws
  struct anonymous$5 *ws;
  // rs
  struct anonymous$5 *rs;
  // state
  enum anonymous$7 state;
  // ftp
  struct anonymous$9 ftp;
};

struct anonymous$1
{
  // www
  signed int www;
  // proxy
  signed int proxy;
  // realm
  struct anonymous$36 realm;
  // challenge
  struct anonymous$36 challenge;
  // type
  struct anonymous$30 type;
};

struct anonymous$21
{
  // required
  enum anonymous required;
  // hostname
  char *hostname;
  // port
  signed int port;
  // encode
  char *encode;
};

struct anonymous$26
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

union anonymous$39
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

union anonymous$38
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

union anonymous$37
{
  // cb_1
  void (*cb_1)(signed int, signed int, void *);
  // cb_2
  signed int (*cb_2)(signed int, signed int, struct bn_gencb_st *);
};

union anonymous$18
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$13
{
  // __data
  struct anonymous$14 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct ARRAY_T
{
  // index
  signed int index;
  // length
  signed int length;
  // data
  void **data;
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

struct AUTH_T
{
  // creds
  struct ARRAY_T *creds;
  // okay
  enum anonymous okay;
  // basic
  struct anonymous$20 basic;
  // digest
  struct anonymous$20 digest;
  // proxy
  struct anonymous$21 proxy;
  // lock
  union anonymous$10 lock;
};

struct CNODE
{
  // index
  signed int index;
  // threadID
  unsigned long int threadID;
  // name
  char *name;
  // value
  char *value;
  // path
  char *path;
  // domain
  char *domain;
  // expires
  signed long int expires;
  // expirestr
  char *expirestr;
  // version
  char *version;
  // max
  char *max;
  // secure
  signed int secure;
  // next
  struct CNODE *next;
};

struct CONFIG
{
  // logging
  enum anonymous logging;
  // shlog
  enum anonymous shlog;
  // url
  char *url;
  // logfile
  char logfile[128l];
  // verbose
  enum anonymous verbose;
  // quiet
  enum anonymous quiet;
  // csv
  enum anonymous csv;
  // fullurl
  enum anonymous fullurl;
  // display
  enum anonymous display;
  // config
  enum anonymous config;
  // cusers
  signed int cusers;
  // delay
  signed int delay;
  // timeout
  signed int timeout;
  // bench
  enum anonymous bench;
  // internet
  enum anonymous internet;
  // timestamp
  enum anonymous timestamp;
  // time
  signed int time;
  // secs
  signed int secs;
  // reps
  signed int reps;
  // file
  char file[128l];
  // length
  signed int length;
  // debug
  enum anonymous debug;
  // chunked
  enum anonymous chunked;
  // unique
  enum anonymous unique;
  // get
  enum anonymous get;
  // mark
  enum anonymous mark;
  // markstr
  char *markstr;
  // protocol
  signed int protocol;
  // cookies
  enum anonymous cookies;
  // uagent
  char uagent[256l];
  // encoding
  char encoding[256l];
  // conttype
  char conttype[256l];
  // username
  char *username;
  // password
  char *password;
  // bids
  signed int bids;
  // auth
  struct AUTH_T *auth;
  // keepalive
  enum anonymous keepalive;
  // signaled
  signed int signaled;
  // extra
  char extra[2048l];
  // login
  enum anonymous login;
  // loginurl
  char *loginurl;
  // lurl
  struct ARRAY_T *lurl;
  // failures
  signed int failures;
  // failed
  signed int failed;
  // escape
  enum anonymous escape;
  // expire
  enum anonymous expire;
  // follow
  enum anonymous follow;
  // zero_ok
  enum anonymous zero_ok;
  // spinner
  enum anonymous spinner;
  // cache
  enum anonymous cache;
  // rc
  char rc[256l];
  // ssl_timeout
  signed int ssl_timeout;
  // ssl_cert
  char *ssl_cert;
  // ssl_key
  char *ssl_key;
  // ssl_ciphers
  char *ssl_ciphers;
  // method
  enum anonymous$2 method;
  // cond
  union anonymous$13 cond;
  // lock
  union anonymous$10 lock;
};

struct CREDS_T
{
  // scheme
  enum anonymous$3 scheme;
  // username
  char *username;
  // password
  char *password;
  // realm
  char *realm;
};

struct CREW_T
{
  // size
  signed int size;
  // maxsize
  signed int maxsize;
  // cursize
  signed int cursize;
  // total
  signed int total;
  // head
  struct work *head;
  // tail
  struct work *tail;
  // block
  enum anonymous block;
  // closed
  enum anonymous closed;
  // shutdown
  enum anonymous shutdown;
  // threads
  unsigned long int *threads;
  // lock
  union anonymous$10 lock;
  // not_empty
  union anonymous$13 not_empty;
  // not_full
  union anonymous$13 not_full;
  // empty
  union anonymous$13 empty;
};

struct ContentType
{
  // ext
  char *ext;
  // ascii
  enum anonymous ascii;
  // type
  char *type;
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

struct DATA_T
{
  // total
  float total;
  // available
  float available;
  // failed
  float failed;
  // lowest
  float lowest;
  // highest
  float highest;
  // elapsed
  float elapsed;
  // start
  signed long int start;
  // stop
  signed long int stop;
  // t_start
  struct tms t_start;
  // t_stop
  struct tms t_stop;
  // code
  unsigned int code;
  // count
  unsigned int count;
  // ok200
  unsigned int ok200;
  // fail
  unsigned int fail;
  // bytes
  unsigned long long int bytes;
};

struct DIGEST_CHLG
{
  // realm
  char *realm;
  // domain
  char *domain;
  // nonce
  char *nonce;
  // opaque
  char *opaque;
  // stale
  char *stale;
  // algorithm
  char *algorithm;
  // qop
  char *qop;
};

struct DIGEST_CRED
{
  // username
  char *username;
  // password
  char *password;
  // cnonce_value
  char *cnonce_value;
  // h_a1
  char *h_a1;
  // nc
  char nc[9l];
  // nc_value
  unsigned int nc_value;
};

struct DSA_SIG_st
{
  // r
  struct bignum_st *r;
  // s
  struct bignum_st *s;
};

struct HASH_T
{
  // size
  signed int size;
  // entries
  signed int entries;
  // index
  signed int index;
  // table
  struct NODE **table;
};

struct NODE
{
  // key
  char *key;
  // value
  char *value;
  // next
  struct NODE *next;
};

struct URL_T
{
  // ID
  signed int ID;
  // url
  char *url;
  // scheme
  enum anonymous$3 scheme;
  // method
  enum anonymous$2 method;
  // username
  char *username;
  // password
  char *password;
  // hostname
  char *hostname;
  // port
  signed int port;
  // path
  char *path;
  // file
  char *file;
  // params
  char *params;
  // hasparams
  enum anonymous hasparams;
  // query
  char *query;
  // frag
  char *frag;
  // request
  char *request;
  // postlen
  unsigned long int postlen;
  // postdata
  char *postdata;
  // posttemp
  char *posttemp;
  // conttype
  char *conttype;
  // expires
  signed long int expires;
  // modified
  signed long int modified;
  // cached
  enum anonymous cached;
  // etag
  char *etag;
  // realm
  char *realm;
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
  union anonymous$38 value;
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
  union anonymous$37 cb;
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
  union anonymous$39 pkey;
  // save_parameters
  signed int save_parameters;
  // attributes
  struct stack_st_X509_ATTRIBUTE *attributes;
};

struct headers
{
  // head
  char head[64l];
  // code
  signed int code;
  // length
  unsigned long int length;
  // cookie
  char cookie[8192l];
  // redirect
  char *redirect;
  // auth
  struct anonymous$1 auth;
  // keepalive
  signed int keepalive;
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

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct lhash_st_SSL_SESSION
{
  // dummy
  signed int dummy;
};

struct md5_ctx
{
  // A
  unsigned int A;
  // B
  unsigned int B;
  // C
  unsigned int C;
  // D
  unsigned int D;
  // total
  unsigned int total[2l];
  // buflen
  unsigned int buflen;
  // buffer
  char buffer[128l];
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
  struct anonymous$26 tmp;
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
  struct anonymous$27 tmp;
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
  struct anonymous$25 stats;
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

struct tzinfo
{
  // name
  const char *name;
  // offset
  signed int offset;
};

struct work
{
  // routine
  void (*routine)();
  // arg
  void *arg;
  // next
  struct work *next;
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


// ARRAYSIZE
// file array.c line 39
unsigned long int ARRAYSIZE = sizeof(struct ARRAY_T) /*16ul*/ ;
// AUTHSIZE
// file auth.c line 83
unsigned long int AUTHSIZE = sizeof(struct AUTH_T) /*104ul*/ ;
// CREDSIZE
// file creds.c line 37
unsigned long int CREDSIZE = sizeof(struct CREDS_T) /*32ul*/ ;
// URLSIZE
// file url.c line 62
unsigned long int URLSIZE = sizeof(struct URL_T) /*184ul*/ ;
// author_name
// file version.c line 9
const char *author_name = "Jeffrey Fulmer, et al.";
// base64
// file base64.c line 46
static char base64[65l] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/', 0 };
// cookie
// file cookie.c line 48
struct anonymous$11 *cookie;
// copyright
// file version.c line 12
char *copyright = "Copyright (C) 2014 by Jeffrey Fulmer, et al.\nThis is free software; see the source for copying conditions.\nThere is NO warranty; not even for MERCHANTABILITY or FITNESS\nFOR A PARTICULAR PURPOSE.\n";
// email_address
// file version.c line 10
const char *email_address = "jeff@joedog.org";
// fillbuf
// file md5.c line 57
static const unsigned char fillbuf[64l] = { (const unsigned char)0x80, (const unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// himark
// file client.c line 65
float himark = (float)0;
// keyparser
// file auth.c line 420
static const struct anonymous$17 keyparser[8l] = { { .keyname="realm", .keyval=(enum anonymous$16)REALM },
    { .keyname="domain", .keyval=(enum anonymous$16)DOMAIN },
    { .keyname="nonce", .keyval=(enum anonymous$16)NONCE },
    { .keyname="opaque", .keyval=(enum anonymous$16)OPAQUE },
    { .keyname="stale", .keyval=(enum anonymous$16)STALE },
    { .keyname="algorithm", .keyval=(enum anonymous$16)ALGORITHM },
    { .keyname="qop", .keyval=(enum anonymous$16)QOP },
    { .keyname=(const char *)(void *)0, .keyval=(enum anonymous$16)UNKNOWN } };
// lock_count
// file ssl.c line 56
static signed long int *lock_count;
// lock_cs
// file ssl.c line 55
static union anonymous$10 *lock_cs;
// lomark
// file client.c line 66
float lomark = (float)-1;
// long_options
// file main.c line 59
static struct option long_options[21l] = { { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="quiet", .has_arg=0, .flag=(signed int *)(void *)0, .val=113 },
    { .name="config", .has_arg=0, .flag=(signed int *)(void *)0, .val=67 },
    { .name="debug", .has_arg=0, .flag=(signed int *)(void *)0, .val=68 },
    { .name="get", .has_arg=0, .flag=(signed int *)(void *)0, .val=103 },
    { .name="concurrent", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="internet", .has_arg=0, .flag=(signed int *)(void *)0, .val=105 },
    { .name="benchmark", .has_arg=0, .flag=(signed int *)(void *)0, .val=98 },
    { .name="reps", .has_arg=1, .flag=(signed int *)(void *)0, .val=114 },
    { .name="time", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 },
    { .name="delay", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="log", .has_arg=2, .flag=(signed int *)(void *)0, .val=108 },
    { .name="file", .has_arg=1, .flag=(signed int *)(void *)0, .val=102 },
    { .name="rc", .has_arg=1, .flag=(signed int *)(void *)0, .val=82 },
    { .name="mark", .has_arg=1, .flag=(signed int *)(void *)0, .val=109 },
    { .name="header", .has_arg=1, .flag=(signed int *)(void *)0, .val=72 },
    { .name="user-agent", .has_arg=1, .flag=(signed int *)(void *)0, .val=65 },
    { .name="content-type", .has_arg=1, .flag=(signed int *)(void *)0, .val=84 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// month
// file date.c line 63
const char * const month[12l] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
// my
// file ./setup.h line 239
struct CONFIG my;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// program_name
// file version.c line 8
char *program_name = "siege";
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tmap
// file load.c line 44
static struct ContentType tmap[162l] = { { .ext="default", .ascii=(enum anonymous)boolean_true, .type="application/x-www-form-urlencoded" },
    { .ext="ai", .ascii=(enum anonymous)boolean_false, .type="application/postscript" },
    { .ext="aif", .ascii=(enum anonymous)boolean_false, .type="audio/x-aiff" },
    { .ext="aifc", .ascii=(enum anonymous)boolean_false, .type="audio/x-aiff" },
    { .ext="aiff", .ascii=(enum anonymous)boolean_false, .type="audio/x-aiff" },
    { .ext="asc", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="au", .ascii=(enum anonymous)boolean_false, .type="audio/basic" },
    { .ext="avi", .ascii=(enum anonymous)boolean_false, .type="video/x-msvideo" },
    { .ext="bcpio", .ascii=(enum anonymous)boolean_false, .type="application/x-bcpio" },
    { .ext="bin", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="c", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="cc", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="ccad", .ascii=(enum anonymous)boolean_false, .type="application/clariscad" },
    { .ext="cdf", .ascii=(enum anonymous)boolean_false, .type="application/x-netcdf" },
    { .ext="class", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="cpio", .ascii=(enum anonymous)boolean_false, .type="application/x-cpio" },
    { .ext="cpt", .ascii=(enum anonymous)boolean_false, .type="application/mac-compactpro" },
    { .ext="csh", .ascii=(enum anonymous)boolean_false, .type="application/x-csh" },
    { .ext="css", .ascii=(enum anonymous)boolean_true, .type="text/css" },
    { .ext="dcr", .ascii=(enum anonymous)boolean_false, .type="application/x-director" },
    { .ext="dir", .ascii=(enum anonymous)boolean_false, .type="application/x-director" },
    { .ext="dms", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="doc", .ascii=(enum anonymous)boolean_false, .type="application/msword" },
    { .ext="drw", .ascii=(enum anonymous)boolean_false, .type="application/drafting" },
    { .ext="dvi", .ascii=(enum anonymous)boolean_false, .type="application/x-dvi" },
    { .ext="dwg", .ascii=(enum anonymous)boolean_false, .type="application/acad" },
    { .ext="dxf", .ascii=(enum anonymous)boolean_false, .type="application/dxf" },
    { .ext="dxr", .ascii=(enum anonymous)boolean_false, .type="application/x-director" },
    { .ext="eps", .ascii=(enum anonymous)boolean_false, .type="application/postscript" },
    { .ext="etx", .ascii=(enum anonymous)boolean_true, .type="text/x-setext" },
    { .ext="exe", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="ez", .ascii=(enum anonymous)boolean_false, .type="application/andrew-inset" },
    { .ext="f", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="f90", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="fli", .ascii=(enum anonymous)boolean_false, .type="video/x-fli" },
    { .ext="gif", .ascii=(enum anonymous)boolean_false, .type="image/gif" },
    { .ext="gtar", .ascii=(enum anonymous)boolean_false, .type="application/x-gtar" },
    { .ext="gz", .ascii=(enum anonymous)boolean_false, .type="application/x-gzip" },
    { .ext="h", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="hdf", .ascii=(enum anonymous)boolean_false, .type="application/x-hdf" },
    { .ext="hh", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="hqx", .ascii=(enum anonymous)boolean_false, .type="application/mac-binhex40" },
    { .ext="htm", .ascii=(enum anonymous)boolean_true, .type="text/html" },
    { .ext="html", .ascii=(enum anonymous)boolean_true, .type="text/html" },
    { .ext="ice", .ascii=(enum anonymous)boolean_false, .type="x-conference/x-cooltalk" },
    { .ext="ief", .ascii=(enum anonymous)boolean_false, .type="image/ief" },
    { .ext="iges", .ascii=(enum anonymous)boolean_false, .type="model/iges" },
    { .ext="igs", .ascii=(enum anonymous)boolean_false, .type="model/iges" },
    { .ext="ips", .ascii=(enum anonymous)boolean_false, .type="application/x-ipscript" },
    { .ext="ipx", .ascii=(enum anonymous)boolean_false, .type="application/x-ipix" },
    { .ext="jpe", .ascii=(enum anonymous)boolean_false, .type="image/jpeg" },
    { .ext="jpeg", .ascii=(enum anonymous)boolean_false, .type="image/jpeg" },
    { .ext="jpg", .ascii=(enum anonymous)boolean_false, .type="image/jpeg" },
    { .ext="js", .ascii=(enum anonymous)boolean_false, .type="application/x-javascript" },
    { .ext="json", .ascii=(enum anonymous)boolean_false, .type="application/json" },
    { .ext="kar", .ascii=(enum anonymous)boolean_false, .type="audio/midi" },
    { .ext="latex", .ascii=(enum anonymous)boolean_false, .type="application/x-latex" },
    { .ext="lha", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="lsp", .ascii=(enum anonymous)boolean_false, .type="application/x-lisp" },
    { .ext="lzh", .ascii=(enum anonymous)boolean_false, .type="application/octet-stream" },
    { .ext="m", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="man", .ascii=(enum anonymous)boolean_false, .type="application/x-troff-man" },
    { .ext="me", .ascii=(enum anonymous)boolean_false, .type="application/x-troff-me" },
    { .ext="mesh", .ascii=(enum anonymous)boolean_false, .type="model/mesh" },
    { .ext="mid", .ascii=(enum anonymous)boolean_false, .type="audio/midi" },
    { .ext="midi", .ascii=(enum anonymous)boolean_false, .type="audio/midi" },
    { .ext="mif", .ascii=(enum anonymous)boolean_false, .type="application/vnd.mif" },
    { .ext="mime", .ascii=(enum anonymous)boolean_false, .type="www/mime" },
    { .ext="mov", .ascii=(enum anonymous)boolean_false, .type="video/quicktime" },
    { .ext="movie", .ascii=(enum anonymous)boolean_false, .type="video/x-sgi-movie" },
    { .ext="mp2", .ascii=(enum anonymous)boolean_false, .type="audio/mpeg" },
    { .ext="mp3", .ascii=(enum anonymous)boolean_false, .type="audio/mpeg" },
    { .ext="mpe", .ascii=(enum anonymous)boolean_false, .type="video/mpeg" },
    { .ext="mpeg", .ascii=(enum anonymous)boolean_false, .type="video/mpeg" },
    { .ext="mpg", .ascii=(enum anonymous)boolean_false, .type="video/mpeg" },
    { .ext="mpga", .ascii=(enum anonymous)boolean_false, .type="audio/mpeg" },
    { .ext="ms", .ascii=(enum anonymous)boolean_false, .type="application/x-troff-ms" },
    { .ext="msh", .ascii=(enum anonymous)boolean_false, .type="model/mesh" },
    { .ext="nc", .ascii=(enum anonymous)boolean_false, .type="application/x-netcdf" },
    { .ext="oda", .ascii=(enum anonymous)boolean_false, .type="application/oda" },
    { .ext="pbm", .ascii=(enum anonymous)boolean_false, .type="image/x-portable-bitmap" },
    { .ext="pdb", .ascii=(enum anonymous)boolean_false, .type="chemical/x-pdb" },
    { .ext="pdf", .ascii=(enum anonymous)boolean_false, .type="application/pdf" },
    { .ext="pgm", .ascii=(enum anonymous)boolean_false, .type="image/x-portable-graymap" },
    { .ext="pgn", .ascii=(enum anonymous)boolean_false, .type="application/x-chess-pgn" },
    { .ext="png", .ascii=(enum anonymous)boolean_false, .type="image/png" },
    { .ext="pnm", .ascii=(enum anonymous)boolean_false, .type="image/x-portable-anymap" },
    { .ext="pot", .ascii=(enum anonymous)boolean_false, .type="application/mspowerpoint" },
    { .ext="ppm", .ascii=(enum anonymous)boolean_false, .type="image/x-portable-pixmap" },
    { .ext="pps", .ascii=(enum anonymous)boolean_false, .type="application/mspowerpoint" },
    { .ext="ppt", .ascii=(enum anonymous)boolean_false, .type="application/mspowerpoint" },
    { .ext="ppz", .ascii=(enum anonymous)boolean_false, .type="application/mspowerpoint" },
    { .ext="pre", .ascii=(enum anonymous)boolean_false, .type="application/x-freelance" },
    { .ext="prt", .ascii=(enum anonymous)boolean_false, .type="application/pro_eng" },
    { .ext="ps", .ascii=(enum anonymous)boolean_false, .type="application/postscript" },
    { .ext="qt", .ascii=(enum anonymous)boolean_false, .type="video/quicktime" },
    { .ext="ra", .ascii=(enum anonymous)boolean_false, .type="audio/x-realaudio" },
    { .ext="ram", .ascii=(enum anonymous)boolean_false, .type="audio/x-pn-realaudio" },
    { .ext="ras", .ascii=(enum anonymous)boolean_false, .type="image/cmu-raster" },
    { .ext="rgb", .ascii=(enum anonymous)boolean_false, .type="image/x-rgb" },
    { .ext="rm", .ascii=(enum anonymous)boolean_false, .type="audio/x-pn-realaudio" },
    { .ext="roff", .ascii=(enum anonymous)boolean_false, .type="application/x-troff" },
    { .ext="rpm", .ascii=(enum anonymous)boolean_false, .type="audio/x-pn-realaudio-plugin" },
    { .ext="rtf", .ascii=(enum anonymous)boolean_false, .type="text/rtf" },
    { .ext="rtx", .ascii=(enum anonymous)boolean_false, .type="text/richtext" },
    { .ext="scm", .ascii=(enum anonymous)boolean_false, .type="application/x-lotusscreencam" },
    { .ext="set", .ascii=(enum anonymous)boolean_false, .type="application/set" },
    { .ext="sgm", .ascii=(enum anonymous)boolean_true, .type="text/sgml" },
    { .ext="sgml", .ascii=(enum anonymous)boolean_true, .type="text/sgml" },
    { .ext="sh", .ascii=(enum anonymous)boolean_false, .type="application/x-sh" },
    { .ext="shar", .ascii=(enum anonymous)boolean_false, .type="application/x-shar" },
    { .ext="silo", .ascii=(enum anonymous)boolean_false, .type="model/mesh" },
    { .ext="sit", .ascii=(enum anonymous)boolean_false, .type="application/x-stuffit" },
    { .ext="skd", .ascii=(enum anonymous)boolean_false, .type="application/x-koan" },
    { .ext="skm", .ascii=(enum anonymous)boolean_false, .type="application/x-koan" },
    { .ext="skp", .ascii=(enum anonymous)boolean_false, .type="application/x-koan" },
    { .ext="skt", .ascii=(enum anonymous)boolean_false, .type="application/x-koan" },
    { .ext="smi", .ascii=(enum anonymous)boolean_false, .type="application/smil" },
    { .ext="smil", .ascii=(enum anonymous)boolean_false, .type="application/smil" },
    { .ext="snd", .ascii=(enum anonymous)boolean_false, .type="audio/basic" },
    { .ext="sol", .ascii=(enum anonymous)boolean_false, .type="application/solids" },
    { .ext="spl", .ascii=(enum anonymous)boolean_false, .type="application/x-futuresplash" },
    { .ext="src", .ascii=(enum anonymous)boolean_false, .type="application/x-wais-source" },
    { .ext="step", .ascii=(enum anonymous)boolean_false, .type="application/STEP" },
    { .ext="stl", .ascii=(enum anonymous)boolean_false, .type="application/SLA" },
    { .ext="stp", .ascii=(enum anonymous)boolean_false, .type="application/STEP" },
    { .ext="sv4cpio", .ascii=(enum anonymous)boolean_false, .type="application/x-sv4cpio" },
    { .ext="sv4crc", .ascii=(enum anonymous)boolean_false, .type="application/x-sv4crc" },
    { .ext="swf", .ascii=(enum anonymous)boolean_false, .type="application/x-shockwave-flash" },
    { .ext="t", .ascii=(enum anonymous)boolean_false, .type="application/x-troff" },
    { .ext="tar", .ascii=(enum anonymous)boolean_false, .type="application/x-tar" },
    { .ext="tcl", .ascii=(enum anonymous)boolean_false, .type="application/x-tcl" },
    { .ext="tex", .ascii=(enum anonymous)boolean_false, .type="application/x-tex" },
    { .ext="texi", .ascii=(enum anonymous)boolean_false, .type="application/x-texinfo" },
    { .ext="texinfo", .ascii=(enum anonymous)boolean_false, .type="application/x-texinfo" },
    { .ext="tif", .ascii=(enum anonymous)boolean_false, .type="image/tiff" },
    { .ext="tiff", .ascii=(enum anonymous)boolean_false, .type="image/tiff" },
    { .ext="tr", .ascii=(enum anonymous)boolean_false, .type="application/x-troff" },
    { .ext="tsi", .ascii=(enum anonymous)boolean_false, .type="audio/TSP-audio" },
    { .ext="tsp", .ascii=(enum anonymous)boolean_false, .type="application/dsptype" },
    { .ext="tsv", .ascii=(enum anonymous)boolean_true, .type="text/tab-separated-values" },
    { .ext="txt", .ascii=(enum anonymous)boolean_true, .type="text/plain" },
    { .ext="unv", .ascii=(enum anonymous)boolean_false, .type="application/i-deas" },
    { .ext="ustar", .ascii=(enum anonymous)boolean_false, .type="application/x-ustar" },
    { .ext="vcd", .ascii=(enum anonymous)boolean_false, .type="application/x-cdlink" },
    { .ext="vda", .ascii=(enum anonymous)boolean_false, .type="application/vda" },
    { .ext="viv", .ascii=(enum anonymous)boolean_false, .type="video/vnd.vivo" },
    { .ext="vivo", .ascii=(enum anonymous)boolean_false, .type="video/vnd.vivo" },
    { .ext="vrml", .ascii=(enum anonymous)boolean_false, .type="model/vrml" },
    { .ext="wav", .ascii=(enum anonymous)boolean_false, .type="audio/x-wav" },
    { .ext="wrl", .ascii=(enum anonymous)boolean_false, .type="model/vrml" },
    { .ext="xbm", .ascii=(enum anonymous)boolean_false, .type="image/x-xbitmap" },
    { .ext="xlc", .ascii=(enum anonymous)boolean_false, .type="application/vnd.ms-excel" },
    { .ext="xll", .ascii=(enum anonymous)boolean_false, .type="application/vnd.ms-excel" },
    { .ext="xlm", .ascii=(enum anonymous)boolean_false, .type="application/vnd.ms-excel" },
    { .ext="xls", .ascii=(enum anonymous)boolean_false, .type="application/vnd.ms-excel" },
    { .ext="xlw", .ascii=(enum anonymous)boolean_false, .type="application/vnd.ms-excel" },
    { .ext="xml", .ascii=(enum anonymous)boolean_true, .type="text/xml" },
    { .ext="xpm", .ascii=(enum anonymous)boolean_false, .type="image/x-xpixmap" },
    { .ext="xwd", .ascii=(enum anonymous)boolean_false, .type="image/x-xwindowdump" },
    { .ext="xyz", .ascii=(enum anonymous)boolean_false, .type="chemical/x-pdb" },
    { .ext="zip", .ascii=(enum anonymous)boolean_false, .type="application/zip" } };
// tz
// file date.c line 73
static struct tzinfo tz[43l] = { { .name="GMT", .offset=0 }, { .name="UTC", .offset=0 }, { .name="WET", .offset=0 }, { .name="BST", .offset=0 - 60 }, { .name="WAT", .offset=60 }, { .name="AST", .offset=240 }, { .name="ADT", .offset=240 - 60 }, { .name="EST", .offset=300 }, { .name="EDT", .offset=300 - 60 }, { .name="CST", .offset=360 }, { .name="CDT", .offset=360 - 60 }, { .name="MST", .offset=420 }, { .name="MDT", .offset=420 - 60 }, { .name="PST", .offset=480 }, { .name="PDT", .offset=480 - 60 }, { .name="YST", .offset=540 }, { .name="YDT", .offset=540 - 60 }, { .name="HST", .offset=600 }, { .name="HDT", .offset=600 - 60 }, { .name="CAT", .offset=600 }, { .name="AHST", .offset=600 }, { .name="NT", .offset=660 }, { .name="IDLW", .offset=720 }, { .name="CET", .offset=-60 }, { .name="MET", .offset=-60 }, { .name="MEWT", .offset=-60 }, { .name="MEST", .offset=-60 - 60 }, { .name="CEST", .offset=-60 - 60 }, { .name="MESZ", .offset=-60 - 60 }, { .name="FWT", .offset=-60 }, { .name="FST", .offset=-60 - 60 }, { .name="EET", .offset=-120 }, { .name="WAST", .offset=-420 }, { .name="WADT", .offset=-420 - 60 }, { .name="CCT", .offset=-480 }, { .name="JST", .offset=-540 }, { .name="EAST", .offset=-600 }, { .name="EADT", .offset=-600 - 60 }, { .name="GST", .offset=-600 }, { .name="NZT", .offset=-720 }, { .name="NZST", .offset=-720 }, { .name="NZDT", .offset=-720 - 60 }, { .name="IDLE", .offset=-720 } };
// urlchr_table
// file url.c line 969
static const unsigned char urlchr_table[256l] = { (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)0, (const unsigned char)2, (const unsigned char)(1 | 2), (const unsigned char)0, (const unsigned char)2, (const unsigned char)1, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)(1 | 2), (const unsigned char)1, (const unsigned char)2, (const unsigned char)1, (const unsigned char)2, (const unsigned char)1, (const unsigned char)(1 | 2), (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)(1 | 2), (const unsigned char)2, (const unsigned char)(1 | 2), (const unsigned char)2, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2 };
// version_string
// file version.c line 7
char *version_string = "3.0.8";
// wday
// file date.c line 55
const char * const wday[7l] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
// weekday
// file date.c line 59
const char * const weekday[7l] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
// years
// file version.c line 11
const char *years = "1999-2014";

// CLOSELOG
// file notify.c line 71
void CLOSELOG(void)
{
  closelog();
}

// DISPLAY
// file ../include/joedog/joedog.h line 51
void DISPLAY(signed int color, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  __display(color, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// NOTIFY
// file ../include/joedog/joedog.h line 50
void NOTIFY(enum anonymous$19 L, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  __message((enum anonymous$22)__OUT, L, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// OPENLOG
// file notify.c line 64
void OPENLOG(char *program)
{
  openlog(program, 0x01, 3 << 3);
}

// SSL_error_stack
// file ssl.c line 235
static void SSL_error_stack(void)
{
  unsigned long int err;
  char string[120l];
  err=ERR_get_error();
  if(!(err == 0ul))
  {
    SSL_error_stack();
    ERR_error_string(err, string);
    NOTIFY((enum anonymous$19)ERROR, "stack: %lX : %s", err, (const void *)string);
  }

}

// SSL_initialize
// file ./ssl.h line 52
enum anonymous SSL_initialize(struct anonymous$0 *C)
{
  signed int i;
  signed int serr;
  unsigned long int return_value_ERR_peek_error$4;
  if(!(C->ssl == ((struct ssl_st *)NULL)))
    return (enum anonymous)boolean_true;

  else
  {
    C->ssl = (struct ssl_st *)(void *)0;
    C->ctx = (struct ssl_ctx_st *)(void *)0;
    C->method = (struct ssl_method_st *)(void *)0;
    C->cert = (struct x509_st *)(void *)0;
    if(my.ssl_key == ((char *)NULL) && !(my.ssl_cert == ((char *)NULL)))
      my.ssl_key = my.ssl_cert;

    if(my.ssl_ciphers == ((char *)NULL))
      my.ssl_ciphers=stralloc("ALL:!EXPORT:!aNULL:!eNULL:!SSLv2");

    C->method=SSLv23_client_method();
    if(C->method == ((struct ssl_method_st *)NULL))
    {
      SSL_error_stack();
      return (enum anonymous)boolean_false;
    }

    else
    {
      C->ctx=SSL_CTX_new(C->method);
      if(C->ctx == ((struct ssl_ctx_st *)NULL))
      {
        SSL_error_stack();
        return (enum anonymous)boolean_false;
      }

      else
      {
        SSL_CTX_ctrl(C->ctx, 33, 0x00000001L | 0x00000002L, (void *)0);
        SSL_CTX_ctrl(C->ctx, 44, (signed long int)(0x0001 | 0x0002), (void *)0);
        SSL_CTX_set_timeout(C->ctx, (signed long int)my.ssl_timeout);
        if(!(my.ssl_ciphers == ((char *)NULL)))
        {
          signed int return_value_SSL_CTX_set_cipher_list$1;
          return_value_SSL_CTX_set_cipher_list$1=SSL_CTX_set_cipher_list(C->ctx, my.ssl_ciphers);
          if(return_value_SSL_CTX_set_cipher_list$1 == 0)
          {
            NOTIFY((enum anonymous$19)ERROR, "SSL_CTX_set_cipher_list");
            return (enum anonymous)boolean_false;
          }

        }

        if(!(my.ssl_cert == ((char *)NULL)))
        {
          signed int return_value_SSL_CTX_use_certificate_chain_file$2;
          return_value_SSL_CTX_use_certificate_chain_file$2=SSL_CTX_use_certificate_chain_file(C->ctx, my.ssl_cert);
          if(return_value_SSL_CTX_use_certificate_chain_file$2 == 0)
          {
            SSL_error_stack();
            NOTIFY((enum anonymous$19)ERROR, "Error reading certificate file: %s", my.ssl_cert);
          }

          i = 0;
          for( ; !(i >= 3); i = i + 1)
          {
            signed int return_value_SSL_CTX_use_PrivateKey_file$3;
            return_value_SSL_CTX_use_PrivateKey_file$3=SSL_CTX_use_PrivateKey_file(C->ctx, my.ssl_key, 1);
            if(!(return_value_SSL_CTX_use_PrivateKey_file$3 == 0))
              break;

            if(!(i >= 2))
            {
              return_value_ERR_peek_error$4=ERR_peek_error();
              if((4095 & (signed int)return_value_ERR_peek_error$4) == 100)
              {
                SSL_error_stack();
                NOTIFY((enum anonymous$19)WARNING, "Wrong pass phrase: retrying");
                goto __CPROVER_DUMP_L12;
              }

            }


          __CPROVER_DUMP_L12:
            ;
          }
          signed int return_value_SSL_CTX_check_private_key$5;
          return_value_SSL_CTX_check_private_key$5=SSL_CTX_check_private_key(C->ctx);
          if(return_value_SSL_CTX_check_private_key$5 == 0)
          {
            NOTIFY((enum anonymous$19)ERROR, "Private key does not match the certificate");
            return (enum anonymous)boolean_false;
          }

        }

        C->ssl=SSL_new(C->ctx);
        if(C->ssl == ((struct ssl_st *)NULL))
        {
          SSL_error_stack();
          return (enum anonymous)boolean_false;
        }

        else
        {
          SSL_set_fd(C->ssl, C->sock);
          serr=SSL_connect(C->ssl);
          return (enum anonymous)boolean_true;
        }
      }
    }
  }
}

// SSL_pthreads_locking_callback
// file ssl.c line 208
static void SSL_pthreads_locking_callback(signed int mode, signed int type, char *file, signed int line)
{
  if((signed int)my.debug == 4)
  {
    unsigned long int return_value_CRYPTO_thread_id$1;
    return_value_CRYPTO_thread_id$1=CRYPTO_thread_id();
    fprintf$link6(stderr, "thread=%4d mode=%s lock=%s %s:%d\n", (signed int)return_value_CRYPTO_thread_id$1, (mode & 1) != 0 ? "l" : "u", (type & 4) != 0 ? "r" : "w", file, line);
  }

  if(!((1 & mode) == 0))
  {
    pthread_mutex_lock(&lock_cs[(signed long int)type]);
    lock_count[(signed long int)type] = lock_count[(signed long int)type] + 1l;
  }

  else
    pthread_mutex_unlock(&lock_cs[(signed long int)type]);
}

// SSL_pthreads_thread_id
// file ssl.c line 226
unsigned long int SSL_pthreads_thread_id(void)
{
  unsigned long int ret;
  unsigned long int return_value_pthread_self$1;
  return_value_pthread_self$1=pthread_self();
  ret = (unsigned long int)return_value_pthread_self$1;
  return ret;
}

// SSL_thread_cleanup
// file ./ssl.h line 54
void SSL_thread_cleanup(void)
{
  signed int x;
  CRYPTO_set_locking_callback((void (*)(signed int, signed int, const char *, signed int))(void *)0);
  x = 0;
  signed int return_value_CRYPTO_num_locks$1;
  do
  {
    return_value_CRYPTO_num_locks$1=CRYPTO_num_locks();
    if(x >= return_value_CRYPTO_num_locks$1)
      break;

    pthread_mutex_destroy(&lock_cs[(signed long int)x]);
    x = x + 1;
  }
  while((_Bool)1);
  if(!(lock_cs == ((union anonymous$10 *)NULL)))
  {
    CRYPTO_free((void *)lock_cs);
    lock_cs = (union anonymous$10 *)(void *)0;
  }

  if(!(lock_count == ((signed long int *)NULL)))
  {
    CRYPTO_free((void *)lock_count);
    lock_count = (signed long int *)(void *)0;
  }

}

// SSL_thread_setup
// file ./ssl.h line 53
void SSL_thread_setup(void)
{
  signed int x;
  SSL_library_init();
  SSL_load_error_strings();
  signed int return_value_CRYPTO_num_locks$1;
  return_value_CRYPTO_num_locks$1=CRYPTO_num_locks();
  void *return_value_CRYPTO_malloc$2;
  return_value_CRYPTO_malloc$2=CRYPTO_malloc((signed int)((unsigned long int)(signed int)return_value_CRYPTO_num_locks$1 * sizeof(union anonymous$10) /*40ul*/ ), "ssl.c", 175);
  lock_cs = (union anonymous$10 *)return_value_CRYPTO_malloc$2;
  signed int return_value_CRYPTO_num_locks$3;
  return_value_CRYPTO_num_locks$3=CRYPTO_num_locks();
  void *return_value_CRYPTO_malloc$4;
  return_value_CRYPTO_malloc$4=CRYPTO_malloc((signed int)((unsigned long int)(signed int)return_value_CRYPTO_num_locks$3 * sizeof(signed long int) /*8ul*/ ), "ssl.c", 178);
  lock_count = (signed long int *)return_value_CRYPTO_malloc$4;
  x = 0;
  signed int return_value_CRYPTO_num_locks$5;
  do
  {
    return_value_CRYPTO_num_locks$5=CRYPTO_num_locks();
    if(x >= return_value_CRYPTO_num_locks$5)
      break;

    lock_count[(signed long int)x] = (signed long int)0;
    pthread_mutex_init(&lock_cs[(signed long int)x], (const union anonymous$18 *)(void *)0);
    x = x + 1;
  }
  while((_Bool)1);
  CRYPTO_set_id_callback((unsigned long int (*)())SSL_pthreads_thread_id);
  CRYPTO_set_locking_callback((void (*)(signed int, signed int, const char *, signed int))(void (*)())SSL_pthreads_locking_callback);
}

// SYSLOG
// file notify.c line 129
void SYSLOG(enum anonymous$19 L, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  __message((enum anonymous$22)__LOG, L, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// __basic_header
// file auth.c line 379
static enum anonymous __basic_header(struct AUTH_T *this, enum anonymous$3 scheme, struct CREDS_T *creds)
{
  char buf[256l];
  char *hdr;
  unsigned long int len;
  enum anonymous ret = (enum anonymous)boolean_true;
  memset$link1((void *)buf, 0, sizeof(char [256l]) /*256ul*/ );
  pthread_mutex_lock(&this->lock);
  char *return_value_creds_get_username$1;
  return_value_creds_get_username$1=creds_get_username(creds);
  char *return_value_creds_get_password$2;
  return_value_creds_get_password$2=creds_get_password(creds);
  snprintf(buf, sizeof(char [256l]) /*256ul*/ , "%s:%s", return_value_creds_get_username$1, return_value_creds_get_password$2);
  if((signed int)scheme == PROXY)
  {
    xfree((void *)this->proxy.encode);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(buf);
    signed int return_value_base64_encode$6;
    return_value_base64_encode$6=base64_encode((const void *)buf, (signed int)return_value_strlen$5, &hdr);
    if(!(return_value_base64_encode$6 >= 0))
      ret = (enum anonymous)boolean_false;

    else
    {
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(hdr);
      len = return_value_strlen$3 + (unsigned long int)32;
      void *return_value_xmalloc$4;
      return_value_xmalloc$4=xmalloc(len);
      this->proxy.encode = (char *)return_value_xmalloc$4;
      memset$link1((void *)this->proxy.encode, 0, len);
      snprintf(this->proxy.encode, len, "Proxy-Authorization: Basic %s\r\n", hdr);
    }
  }

  else
  {
    xfree((void *)this->basic.encode);
    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(buf);
    signed int return_value_base64_encode$10;
    return_value_base64_encode$10=base64_encode((const void *)buf, (signed int)return_value_strlen$9, &hdr);
    if(!(return_value_base64_encode$10 >= 0))
      ret = (enum anonymous)boolean_false;

    else
    {
      unsigned long int return_value_strlen$7;
      return_value_strlen$7=strlen(hdr);
      len = return_value_strlen$7 + (unsigned long int)32;
      void *return_value_xmalloc$8;
      return_value_xmalloc$8=xmalloc(len);
      this->basic.encode = (char *)return_value_xmalloc$8;
      memset$link1((void *)this->basic.encode, 0, len);
      snprintf(this->basic.encode, len, "Authorization: Basic %s\r\n", hdr);
    }
  }
  pthread_mutex_unlock(&this->lock);
  return ret;
}

// __dequote
// file http.c line 804
static char * __dequote(char *str)
{
  char *ptr;
  ptr=__rquote(str);
  str=__lquote(ptr);
  return str;
}

// __digest_challenge
// file auth.c line 486
static struct DIGEST_CHLG * __digest_challenge(const char *challenge)
{
  struct DIGEST_CHLG *result;
  char *key;
  char *val;
  const char *beg;
  const char *end;
  enum anonymous$16 keyval;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct DIGEST_CHLG) /*56ul*/ );
  result = (struct DIGEST_CHLG *)return_value_xcalloc$1;
  end = challenge;
  beg = end;
  const unsigned short int **return_value___ctype_b_loc$2;
  _Bool tmp_if_expr$3;
  do
  {
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*end]) == 0)
      tmp_if_expr$3 = *end != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(!tmp_if_expr$3)
      break;

    end = end + 1l;
  }
  while((_Bool)1);
  signed int return_value_strncasecmp$4;
  return_value_strncasecmp$4=strncasecmp("Digest", beg, (unsigned long int)(end - beg));
  const unsigned short int **return_value___ctype_b_loc$5;
  const unsigned short int **return_value___ctype_b_loc$6;
  const unsigned short int **return_value___ctype_b_loc$7;
  const unsigned short int **return_value___ctype_b_loc$9;
  const unsigned short int **return_value___ctype_b_loc$10;
  const unsigned short int **return_value___ctype_b_loc$12;
  if(!(return_value_strncasecmp$4 == 0))
  {
    fprintf(stderr, "no Digest keyword in challenge [%s]\n", challenge);
    return (struct DIGEST_CHLG *)(void *)0;
  }

  else
  {
    beg = end;
    do
    {
      return_value___ctype_b_loc$5=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*beg]) == 0)
        break;

      beg = beg + 1l;
    }
    while((_Bool)1);
    while(!((signed int)*beg == 0))
    {
      do
      {
        return_value___ctype_b_loc$6=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)*beg]) == 0)
          break;

        beg = beg + 1l;
      }
      while((_Bool)1);
      end = beg;
      for( ; !((signed int)*end == 61); end = end + 1l)
      {
        if((signed int)*end == 44)
          break;

        if((signed int)*end == 0)
          break;

        return_value___ctype_b_loc$7=__ctype_b_loc();
        if(!((8192 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)*end]) == 0))
          break;

      }
      void *return_value_xmalloc$8;
      return_value_xmalloc$8=xmalloc((unsigned long int)(((signed long int)1 + end) - beg) * sizeof(char) /*1ul*/ );
      key = (char *)return_value_xmalloc$8;
      memcpy$link1((void *)key, (const void *)beg, (unsigned long int)(end - beg));
      key[end - beg] = (char)0;
      beg = end;
      do
      {
        return_value___ctype_b_loc$9=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$9)[(signed long int)(signed int)*beg]) == 0)
          break;

        beg = beg + 1l;
      }
      while((_Bool)1);
      val = (char *)(void *)0;
      if((signed int)*beg == 61)
      {
        beg = beg + 1l;
        do
        {
          return_value___ctype_b_loc$10=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$10)[(signed long int)(signed int)*beg]) == 0)
            break;

          beg = beg + 1l;
        }
        while((_Bool)1);
        if((signed int)*beg == 34)
        {
          beg = beg + 1l;
          end = beg;
          for( ; !((signed int)*end == 34); end = end + 1l)
          {
            if((signed int)*end == 0)
              break;

            if((signed int)*end == 92)
            {
              if(!((signed int)end[1l] == 0))
                end = end + 1l;

            }

          }
          void *return_value_xmalloc$11;
          return_value_xmalloc$11=xmalloc((unsigned long int)(((signed long int)1 + end) - beg) * sizeof(char) /*1ul*/ );
          val = (char *)return_value_xmalloc$11;
          memcpy$link1((void *)val, (const void *)beg, (unsigned long int)(end - beg));
          val[end - beg] = (char)0;
          beg = end;
          if(!((signed int)*beg == 0))
            beg = beg + 1l;

        }

        else
        {
          end = beg;
          for( ; !((signed int)*end == 44); end = end + 1l)
          {
            if((signed int)*end == 0)
              break;

            return_value___ctype_b_loc$12=__ctype_b_loc();
            if(!((8192 & (signed int)(*return_value___ctype_b_loc$12)[(signed long int)(signed int)*end]) == 0))
              break;

          }
          void *return_value_xmalloc$13;
          return_value_xmalloc$13=xmalloc((unsigned long int)(((signed long int)1 + end) - beg) * sizeof(char) /*1ul*/ );
          val = (char *)return_value_xmalloc$13;
          memcpy$link1((void *)val, (const void *)beg, (unsigned long int)(end - beg));
          val[end - beg] = (char)0;
          beg = end;
        }
      }

      for( ; !((signed int)*beg == 44); beg = beg + 1l)
        if((signed int)*beg == 0)
          break;

      if(!((signed int)*beg == 0))
        beg = beg + 1l;

      keyval=__get_keyval(key);
      switch((signed int)keyval)
      {
        case REALM:
        {
          result->realm = val;
          break;
        }
        case DOMAIN:
        {
          result->domain = val;
          break;
        }
        case NONCE:
        {
          result->nonce = val;
          break;
        }
        case OPAQUE:
        {
          result->opaque = val;
          break;
        }
        case STALE:
        {
          result->stale = val;
          break;
        }
        case ALGORITHM:
        {
          result->algorithm = val;
          break;
        }
        case QOP:
        {
          result->qop = val;
          break;
        }
        default:
        {
          fprintf(stderr, "unknown key [%s]\n", key);
          xfree((void *)val);
        }
      }
      xfree((void *)key);
    }
    return result;
  }
}

// __digest_credentials
// file auth.c line 469
static struct DIGEST_CRED * __digest_credentials(struct CREDS_T *creds, unsigned long int *randseed)
{
  struct DIGEST_CRED *result;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct DIGEST_CRED) /*48ul*/ );
  result = (struct DIGEST_CRED *)return_value_xcalloc$1;
  char *return_value_creds_get_username$2;
  return_value_creds_get_username$2=creds_get_username(creds);
  result->username=xstrdup(return_value_creds_get_username$2);
  char *return_value_creds_get_password$3;
  return_value_creds_get_password$3=creds_get_password(creds);
  result->password=xstrdup(return_value_creds_get_password$3);
  result->cnonce_value=__get_random_string((unsigned long int)16, (unsigned int *)randseed);
  result->nc_value = 1U;
  snprintf(result->nc, sizeof(char [9l]) /*9ul*/ , "%.8x", result->nc_value);
  result->h_a1 = (char *)(void *)0;
  return result;
}

// __display
// file notify.c line 153
void __display(signed int color, const char *fmt, void **ap)
{
  char buf[40000l];
  char msg[41024l];
  vsprintf(buf, fmt, ap);
  snprintf$link11(msg, sizeof(char [41024l]) /*41024ul*/ , "%c[%d;%dm%s%c[%dm\n", 0x1B, 0, color + 30, (const void *)buf, 0x1B, 0);
  printf("%s", (const void *)msg);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// __ftp
// file client.c line 478
static enum anonymous __ftp(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client)
{
  signed int pass;
  signed int fail;
  signed int code = 0;
  float etime;
  struct anonymous$0 *D = (struct anonymous$0 *)(void *)0;
  unsigned long int bytes = (unsigned long int)0;
  signed long int start;
  signed long int stop;
  struct tms t_start;
  struct tms t_stop;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct anonymous$0) /*5392ul*/ , (unsigned long int)1);
  D = (struct anonymous$0 *)return_value_xcalloc$1;
  D->sock = -1;
  enum anonymous return_value___init_connection$4;
  return_value___init_connection$4=__init_connection(C, U, client);
  if(return_value___init_connection$4 == /*enum*/boolean_false)
  {
    char *return_value_url_get_hostname$2;
    return_value_url_get_hostname$2=url_get_hostname(U);
    signed int return_value_url_get_port$3;
    return_value_url_get_port$3=url_get_port(U);
    NOTIFY((enum anonymous$19)ERROR, "%s:%d connection failed %s:%d", (const void *)"client.c", 495, return_value_url_get_hostname$2, return_value_url_get_port$3);
    xfree((void *)D);
    return (enum anonymous)boolean_false;
  }

  start=times(&t_start);
  if(!(C->sock >= 0))
  {
    char *return_value_url_get_hostname$5;
    return_value_url_get_hostname$5=url_get_hostname(U);
    signed int return_value_url_get_port$6;
    return_value_url_get_port$6=url_get_port(U);
    NOTIFY((enum anonymous$19)ERROR, "%s:%d connection failed %s:%d", (const void *)"client.c", 505, return_value_url_get_hostname$5, return_value_url_get_port$6);
    socket_close(C);
    xfree((void *)D);
    return (enum anonymous)boolean_false;
  }

  char *return_value_url_get_username$9;
  return_value_url_get_username$9=url_get_username(U);
  _Bool tmp_if_expr$12;
  char *return_value_url_get_username$10;
  unsigned long int return_value_strlen$11;
  if(return_value_url_get_username$9 == ((char *)NULL))
    tmp_if_expr$12 = (_Bool)1;

  else
  {
    return_value_url_get_username$10=url_get_username(U);
    return_value_strlen$11=strlen(return_value_url_get_username$10);
    tmp_if_expr$12 = return_value_strlen$11 < (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$12)
  {
    char *return_value_url_get_hostname$7;
    return_value_url_get_hostname$7=url_get_hostname(U);
    char *return_value_auth_get_ftp_username$8;
    return_value_auth_get_ftp_username$8=auth_get_ftp_username(my.auth, return_value_url_get_hostname$7);
    url_set_username(U, return_value_auth_get_ftp_username$8);
  }

  char *return_value_url_get_password$15;
  return_value_url_get_password$15=url_get_password(U);
  _Bool tmp_if_expr$18;
  char *return_value_url_get_password$16;
  unsigned long int return_value_strlen$17;
  if(return_value_url_get_password$15 == ((char *)NULL))
    tmp_if_expr$18 = (_Bool)1;

  else
  {
    return_value_url_get_password$16=url_get_password(U);
    return_value_strlen$17=strlen(return_value_url_get_password$16);
    tmp_if_expr$18 = return_value_strlen$17 < (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$18)
  {
    char *return_value_url_get_hostname$13;
    return_value_url_get_hostname$13=url_get_hostname(U);
    char *return_value_auth_get_ftp_password$14;
    return_value_auth_get_ftp_password$14=auth_get_ftp_password(my.auth, return_value_url_get_hostname$13);
    url_set_password(U, return_value_auth_get_ftp_password$14);
  }

  enum anonymous return_value_ftp_login$21;
  return_value_ftp_login$21=ftp_login(C, U);
  enum anonymous$2 return_value_url_get_method$28;
  if((signed int)return_value_ftp_login$21 == boolean_false)
  {
    if(!(my.verbose == /*enum*/boolean_false))
    {
      signed int __ftp$$1$$5$$1$$color;
      __ftp$$1$$5$$1$$color=__select_color(C->ftp.code);
      char *return_value_url_get_method_name$19;
      return_value_url_get_method_name$19=url_get_method_name(U);
      char *return_value_url_get_request$20;
      return_value_url_get_request$20=url_get_request(U);
      DISPLAY(__ftp$$1$$5$$1$$color, "FTP/%d %6.2f secs: %7lu bytes ==> %-6s %s", C->ftp.code, 0.0, bytes, return_value_url_get_method_name$19, return_value_url_get_request$20);
    }

    xfree((void *)D);
    client->fail = client->fail + (unsigned int)1;
    return (enum anonymous)boolean_false;
  }

  else
  {
    ftp_pasv(C);
    if((signed int)C->ftp.pasv == boolean_true)
    {
      debug("Connecting to: %s:%d", (const void *)C->ftp.host, C->ftp.port);
      D->sock=new_socket(D, C->ftp.host, C->ftp.port);
      if(!(D->sock >= 0))
      {
        signed int *return_value___errno_location$22;
        return_value___errno_location$22=__errno_location();
        signed int *return_value___errno_location$23;
        return_value___errno_location$23=__errno_location();
        char *return_value_strerror$24;
        return_value_strerror$24=strerror(*return_value___errno_location$23);
        debug("%s:%d connection failed. error %d(%s)", (const void *)"client.c", 539, *return_value___errno_location$22, return_value_strerror$24);
        client->fail = client->fail + (unsigned int)1;
        socket_close(D);
        xfree((void *)D);
        return (enum anonymous)boolean_false;
      }

    }

    enum anonymous$2 return_value_url_get_method$27;
    return_value_url_get_method$27=url_get_method(U);
    _Bool tmp_if_expr$29;
    if((signed int)return_value_url_get_method$27 == POST)
      tmp_if_expr$29 = (_Bool)1;

    else
    {
      return_value_url_get_method$28=url_get_method(U);
      tmp_if_expr$29 = (signed int)return_value_url_get_method$28 == PUT ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$29)
    {
      ftp_stor(C, U);
      bytes=ftp_put(D, U);
      code = C->ftp.code;
    }

    else
    {
      enum anonymous return_value_ftp_size$26;
      return_value_ftp_size$26=ftp_size(C, U);
      if((signed int)return_value_ftp_size$26 == boolean_true)
      {
        enum anonymous return_value_ftp_retr$25;
        return_value_ftp_retr$25=ftp_retr(C, U);
        if((signed int)return_value_ftp_retr$25 == boolean_true)
          bytes=ftp_get(D, U, C->ftp.size);

      }

      code = C->ftp.code;
    }
    socket_close(D);
    ftp_quit(C);
    pass = bytes == C->ftp.size ? 1 : 0;
    fail = pass == 0 ? 1 : 0;
    stop=times(&t_stop);
    etime=elapsed_time(stop - start);
    client->bytes = client->bytes + bytes;
    client->time = client->time + etime;
    client->code = client->code + (unsigned int)pass;
    client->fail = client->fail + (unsigned int)fail;
    if(etime > himark)
      himark = etime;

    if(etime < lomark || lomark < 0.000000f)
      lomark = etime;

    client->himark = himark;
    client->lomark = lomark;
    if(!(my.verbose == /*enum*/boolean_false))
    {
      signed int color;
      color=__select_color(code);
      char *return_value_url_get_method_name$30;
      return_value_url_get_method_name$30=url_get_method_name(U);
      char *return_value_url_get_request$31;
      return_value_url_get_request$31=url_get_request(U);
      DISPLAY(color, "FTP/%d %6.2f secs: %7lu bytes ==> %-6s %s", code, etime, bytes, return_value_url_get_method_name$30, return_value_url_get_request$31);
    }

    client->hits = client->hits + 1ul;
    xfree((void *)D);
    return (enum anonymous)boolean_true;
  }
}

// __genkey
// file hash.c line 280
static unsigned int __genkey(signed int size, char *str)
{
  unsigned int hash;
  void *data = (void *)str;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  hash=fnv_32_buf(data, return_value_strlen$1, (unsigned int)2166136261LL);
  hash = hash % (unsigned int)size;
  return hash;
}

// __get_h_a1
// file auth.c line 628
static char * __get_h_a1(const struct DIGEST_CHLG *chlg, struct DIGEST_CRED *cred, const char *nonce_value)
{
  char *h_usrepa;
  char *result;
  char *tmp;
  signed int return_value_strcasecmp$2;
  return_value_strcasecmp$2=strcasecmp("MD5", chlg->algorithm);
  signed int return_value_strcasecmp$1;
  if(return_value_strcasecmp$2 == 0)
  {
    tmp=xstrcat(cred->username, (const void *)":", chlg->realm, (const void *)":", cred->password, (void *)0);
    h_usrepa=__get_md5_str(tmp);
    xfree((void *)tmp);
    result = h_usrepa;
  }

  else
  {
    return_value_strcasecmp$1=strcasecmp("MD5-sess", chlg->algorithm);
    if(return_value_strcasecmp$1 == 0)
    {
      if(cred->h_a1 == ((char *)NULL))
      {
        tmp=xstrcat(cred->username, (const void *)":", chlg->realm, (const void *)":", cred->password, (void *)0);
        h_usrepa=__get_md5_str(tmp);
        xfree((void *)tmp);
        tmp=xstrcat(h_usrepa, (const void *)":", nonce_value, (const void *)":", cred->cnonce_value, (void *)0);
        result=__get_md5_str(tmp);
        xfree((void *)tmp);
        cred->h_a1 = result;
      }

      else
        return cred->h_a1;
    }

    else
    {
      fprintf(stderr, "invalid call to %s algorithm is [%s]\n", (const void *)"__get_h_a1", chlg->algorithm);
      return (char *)(void *)0;
    }
  }
  return result;
}

// __get_keyval
// file auth.c line 434
static enum anonymous$16 __get_keyval(const char *key)
{
  signed int i = 0;
  for( ; !(keyparser[(signed long int)i].keyname == ((const char *)NULL)); i = i + 1)
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp(key, keyparser[(signed long int)i].keyname);
    if(return_value_strcasecmp$1 == 0)
      return keyparser[(signed long int)i].keyval;

  }
  return (enum anonymous$16)UNKNOWN;
}

// __get_md5_str
// file auth.c line 602
static char * __get_md5_str(const char *buf)
{
  const char *hex = "0123456789abcdef";
  struct md5_ctx ctx;
  unsigned char hash[16l];
  char *r;
  char *result;
  unsigned long int length;
  signed int i;
  length=strlen(buf);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)33 * sizeof(char) /*1ul*/ );
  result = (char *)return_value_xmalloc$1;
  md5_init_ctx(&ctx);
  md5_process_bytes((const void *)buf, length, &ctx);
  md5_finish_ctx(&ctx, (void *)hash);
  i = 0;
  r = result;
  for( ; !(i >= 16); i = i + 1)
  {
    char *tmp_post$2 = r;
    r = r + 1l;
    *tmp_post$2 = hex[(signed long int)((signed int)hash[(signed long int)i] >> 4)];
    char *tmp_post$3 = r;
    r = r + 1l;
    *tmp_post$3 = hex[(signed long int)((signed int)hash[(signed long int)i] & 0xF)];
  }
  *r = (char)0;
  return result;
}

// __get_random_string
// file auth.c line 447
static char * __get_random_string(unsigned long int length, unsigned int *randseed)
{
  const unsigned char b64_alphabet[65l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', '/', 0 };
  unsigned char *result;
  unsigned long int i;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(unsigned char) /*1ul*/  * (length + (unsigned long int)1));
  result = (unsigned char *)return_value_xmalloc$1;
  i = (unsigned long int)0;
  signed int return_value_pthread_rand_np$2;
  for( ; !(i >= length); i = i + 1ul)
  {
    return_value_pthread_rand_np$2=pthread_rand_np(randseed);
    result[(signed long int)i] = (unsigned char)(signed int)(255.0 * ((double)return_value_pthread_rand_np$2 / ((double)2147483647 + 1.0)));
  }
  i = (unsigned long int)0;
  for( ; !(i >= length); i = i + 1ul)
    result[(signed long int)i] = b64_alphabet[(signed long int)((unsigned long int)result[(signed long int)i] % ((sizeof(const unsigned char [65l]) /*65ul*/  - (unsigned long int)1) / sizeof(unsigned char) /*1ul*/ ))];
  result[(signed long int)length] = (unsigned char)0;
  return (char *)result;
}

// __http
// file client.c line 205
static enum anonymous __http(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client)
{
  unsigned long int bytes = (unsigned long int)0;
  signed int code;
  signed int fail;
  float etime;
  signed long int start;
  signed long int stop;
  struct tms t_start;
  struct tms t_stop;
  struct headers *head;
  struct tm keepsake;
  signed long int now;
  struct tm *tmp;
  unsigned long int len;
  char fmtime[65l];
  struct URL_T *redirect_url = (struct URL_T *)(void *)0;
  if(!(my.csv == /*enum*/boolean_false))
  {
    now=time((signed long int *)(void *)0);
    struct tm *return_value_localtime_r$1;
    return_value_localtime_r$1=localtime_r(&now, &keepsake);
    tmp = (struct tm *)return_value_localtime_r$1;
    if(!(tmp == ((struct tm *)NULL)))
      len=strftime(fmtime, (unsigned long int)64, "%Y-%m-%d %H:%M:%S", tmp);

    else
      snprintf$link1(fmtime, (unsigned long int)64, "n/a");
  }

  enum anonymous$3 return_value_url_get_scheme$2;
  return_value_url_get_scheme$2=url_get_scheme(U);
  enum anonymous$2 return_value_url_get_method$8;
  char *return_value_timestamp$15;
  char *return_value_url_get_display$17;
  signed int return_value_url_get_ID$18;
  char *return_value_url_get_display$19;
  signed int return_value_url_get_ID$20;
  char *return_value_url_get_method_name$21;
  char *return_value_url_get_display$22;
  char *return_value_url_get_method_name$23;
  char *return_value_url_get_display$24;
  if((signed int)return_value_url_get_scheme$2 == UNSUPPORTED)
  {
    if(my.get == /*enum*/boolean_false && !(my.verbose == /*enum*/boolean_false))
      NOTIFY((enum anonymous$19)ERROR, "%s %d %6.2f secs: %7d bytes ==> %s\n", (const void *)"UNSPPRTD", 501, 0.00, 0, (const void *)"PROTOCOL NOT SUPPORTED BY SIEGE");

    return (enum anonymous)boolean_false;
  }

  else
  {
    if(!(my.delay == 0))
    {
      signed int return_value_pthread_rand_np$3;
      return_value_pthread_rand_np$3=pthread_rand_np(&client->rand_r_SEED);
      pthread_sleep_np((unsigned int)(((double)return_value_pthread_rand_np$3 / ((double)2147483647 + (double)1)) * (double)my.delay + .5));
    }

    start=times(&t_start);
    enum anonymous return_value___init_connection$4;
    return_value___init_connection$4=__init_connection(C, U, client);
    if(return_value___init_connection$4 == /*enum*/boolean_false)
      return (enum anonymous)boolean_false;

    else
    {
      enum anonymous$2 return_value_url_get_method$7;
      return_value_url_get_method$7=url_get_method(U);
      _Bool tmp_if_expr$9;
      if((signed int)return_value_url_get_method$7 == GET)
        tmp_if_expr$9 = (_Bool)1;

      else
      {
        return_value_url_get_method$8=url_get_method(U);
        tmp_if_expr$9 = (signed int)return_value_url_get_method$8 == HEAD ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$9)
      {
        enum anonymous return_value_http_get$5;
        return_value_http_get$5=http_get(C, U);
        if((signed int)return_value_http_get$5 == boolean_false)
        {
          C->connection.reuse = 0;
          socket_close(C);
          return (enum anonymous)boolean_false;
        }

      }

      else
      {
        enum anonymous return_value_http_post$6;
        return_value_http_post$6=http_post(C, U);
        if((signed int)return_value_http_post$6 == boolean_false)
        {
          C->connection.reuse = 0;
          socket_close(C);
          return (enum anonymous)boolean_false;
        }

      }
      head=http_read_headers(C, U);
      if(head == ((struct headers *)NULL))
      {
        C->connection.reuse = 0;
        socket_close(C);
        echo("%s:%d NULL headers", (const void *)"client.c", 279);
        return (enum anonymous)boolean_false;
      }

      else
      {
        signed long int return_value_http_read$10;
        return_value_http_read$10=http_read(C);
        bytes = (unsigned long int)return_value_http_read$10;
        if(my.zero_ok == /*enum*/boolean_false && !(bytes >= 1ul))
        {
          C->connection.reuse = 0;
          socket_close(C);
          http_free_headers(head);
          echo("%s:%d zero bytes back from server", (const void *)"client.c", 289);
          return (enum anonymous)boolean_false;
        }

        else
        {
          stop=times(&t_stop);
          etime=elapsed_time(stop - start);
          _Bool tmp_if_expr$11;
          if(!(head->code >= 400))
            tmp_if_expr$11 = (_Bool)1;

          else
            tmp_if_expr$11 = head->code == 401 ? (_Bool)1 : (_Bool)0;
          _Bool tmp_if_expr$12;
          if(tmp_if_expr$11)
            tmp_if_expr$12 = (_Bool)1;

          else
            tmp_if_expr$12 = head->code == 407 ? (_Bool)1 : (_Bool)0;
          code = tmp_if_expr$12 ? 1 : 0;
          _Bool tmp_if_expr$13;
          if(head->code >= 400)
            tmp_if_expr$13 = head->code != 401 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$13 = (_Bool)0;
          _Bool tmp_if_expr$14;
          if(tmp_if_expr$13)
            tmp_if_expr$14 = head->code != 407 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$14 = (_Bool)0;
          fail = tmp_if_expr$14 ? 1 : 0;
          client->bytes = client->bytes + bytes;
          client->time = client->time + etime;
          client->code = client->code + (unsigned int)code;
          client->fail = client->fail + (unsigned int)fail;
          if(head->code == 200)
            client->ok200 = client->ok200 + 1u;

          if(etime > himark)
            himark = etime;

          if(etime < lomark || lomark < 0.000000f)
            lomark = etime;

          client->himark = himark;
          client->lomark = lomark;
          if(my.debug == /*enum*/boolean_false && my.get == /*enum*/boolean_false && !(my.verbose == /*enum*/boolean_false))
          {
            signed int color;
            color=__select_color(head->code);
            char *time_str;
            char *tmp_if_expr$16;
            if((signed int)my.timestamp == boolean_true)
            {
              return_value_timestamp$15=timestamp();
              tmp_if_expr$16 = return_value_timestamp$15;
            }

            else
              tmp_if_expr$16 = "";
            time_str = tmp_if_expr$16;
            if(!(my.csv == /*enum*/boolean_false))
            {
              if(!(my.display == /*enum*/boolean_false))
              {
                return_value_url_get_display$17=url_get_display(U);
                return_value_url_get_ID$18=url_get_ID(U);
                DISPLAY(color, "%s%s%s%4d,%s,%d,%6.2f,%7lu,%s,%d,%s", time_str, my.mark != (enum anonymous)0 ? my.markstr : "", my.mark != (enum anonymous)0 ? "," : "", client->id, (const void *)head->head, head->code, etime, bytes, return_value_url_get_display$17, return_value_url_get_ID$18, (const void *)fmtime);
              }

              else
              {
                return_value_url_get_display$19=url_get_display(U);
                return_value_url_get_ID$20=url_get_ID(U);
                DISPLAY(color, "%s%s%s%s,%d,%6.2f,%7lu,%s,%d,%s", time_str, my.mark != (enum anonymous)0 ? my.markstr : "", my.mark != (enum anonymous)0 ? "," : "", (const void *)head->head, head->code, etime, bytes, return_value_url_get_display$19, return_value_url_get_ID$20, (const void *)fmtime);
              }
            }

            else
              if(!(my.display == /*enum*/boolean_false))
              {
                return_value_url_get_method_name$21=url_get_method_name(U);
                return_value_url_get_display$22=url_get_display(U);
                DISPLAY(color, "%s%4d: %s %d %6.2f secs: %7lu bytes ==> %-4s %s", client->id, time_str, (const void *)head->head, head->code, etime, bytes, return_value_url_get_method_name$21, return_value_url_get_display$22);
              }

              else
              {
                return_value_url_get_method_name$23=url_get_method_name(U);
                return_value_url_get_display$24=url_get_display(U);
                DISPLAY(color, "%s%s %d %6.2f secs: %7lu bytes ==> %-4s %s", time_str, (const void *)head->head, head->code, etime, bytes, return_value_url_get_method_name$23, return_value_url_get_display$24);
              }
            if(!(my.timestamp == /*enum*/boolean_false))
              xfree((void *)time_str);

          }

          if(my.keepalive == /*enum*/boolean_false)
            socket_close(C);

          switch(head->code)
          {
            case 301:

            case 302:

            case 303:

            case 307:
            {
              if(!(my.follow == /*enum*/boolean_false))
              {
                if(!(*head->redirect == 0))
                {
                  redirect_url=url_normalize(U, head->redirect);
                  char *return_value_url_get_hostname$26;
                  return_value_url_get_hostname$26=url_get_hostname(redirect_url);
                  signed int return_value_empty$27;
                  return_value_empty$27=empty(return_value_url_get_hostname$26);
                  if(!(return_value_empty$27 == 0))
                  {
                    char *return_value_url_get_hostname$25;
                    return_value_url_get_hostname$25=url_get_hostname(U);
                    url_set_hostname(redirect_url, return_value_url_get_hostname$25);
                  }

                  if(head->code == 307)
                  {
                    char *return_value_url_get_conttype$28;
                    return_value_url_get_conttype$28=url_get_conttype(U);
                    url_set_conttype(redirect_url, return_value_url_get_conttype$28);
                    enum anonymous$2 return_value_url_get_method$29;
                    return_value_url_get_method$29=url_get_method(U);
                    url_set_method(redirect_url, return_value_url_get_method$29);
                    enum anonymous$2 return_value_url_get_method$32;
                    return_value_url_get_method$32=url_get_method(redirect_url);
                    if((signed int)return_value_url_get_method$32 == POST)
                    {
                      char *return_value_url_get_postdata$30;
                      return_value_url_get_postdata$30=url_get_postdata(U);
                      unsigned long int return_value_url_get_postlen$31;
                      return_value_url_get_postlen$31=url_get_postlen(U);
                      url_set_postdata(redirect_url, return_value_url_get_postdata$30, return_value_url_get_postlen$31);
                    }

                  }

                  enum anonymous return_value___request$33;
                  return_value___request$33=__request(C, redirect_url, client);
                  if((signed int)return_value___request$33 == boolean_false)
                  {
                    redirect_url=url_destroy(redirect_url);
                    return (enum anonymous)boolean_false;
                  }

                }

              }

              redirect_url=url_destroy(redirect_url);
              goto __CPROVER_DUMP_L60;
            }
            case 401:
            {
              signed int tmp_if_expr$34;
              if(client->auth.www == 0)
                tmp_if_expr$34 = 1;

              else
                tmp_if_expr$34 = client->auth.www;
              client->auth.www = tmp_if_expr$34;
              signed int tmp_post$36 = client->auth.bids.www;
              client->auth.bids.www = client->auth.bids.www + 1;
              if(!(tmp_post$36 >= my.bids + -1))
              {
                enum anonymous b;
                if((signed int)head->auth.type.www == DIGEST)
                {
                  client->auth.type.www = (enum anonymous$29)DIGEST;
                  b=auth_set_digest_header(my.auth, &client->auth.wchlg, &client->auth.wcred, (unsigned long int *)&client->rand_r_SEED, head->auth.realm.www, head->auth.challenge.www);
                  if((signed int)b == boolean_false)
                  {
                    NOTIFY((enum anonymous$19)ERROR, "unable to set digest header");
                    return (enum anonymous)boolean_false;
                  }

                }

                if((signed int)head->auth.type.www == BASIC)
                {
                  client->auth.type.www = (enum anonymous$29)BASIC;
                  auth_set_basic_header(my.auth, (enum anonymous$3)HTTP, head->auth.realm.www);
                }

                enum anonymous return_value___request$35;
                return_value___request$35=__request(C, U, client);
                if((signed int)return_value___request$35 == boolean_false)
                {
                  fprintf$link1(stderr, "ERROR from http_request\n");
                  return (enum anonymous)boolean_false;
                }

              }

              goto __CPROVER_DUMP_L60;
            }
            case 407:
            {
              signed int tmp_if_expr$37;
              if(client->auth.proxy == 0)
                tmp_if_expr$37 = 1;

              else
                tmp_if_expr$37 = client->auth.proxy;
              client->auth.proxy = tmp_if_expr$37;
              signed int tmp_post$39 = client->auth.bids.proxy;
              client->auth.bids.proxy = client->auth.bids.proxy + 1;
              if(!(tmp_post$39 >= my.bids + -1))
              {
                if((signed int)head->auth.type.proxy == DIGEST)
                {
                  enum anonymous __http$$1$$13$$3$$1$$b;
                  client->auth.type.proxy = (enum anonymous$29)DIGEST;
                  __http$$1$$13$$3$$1$$b=auth_set_digest_header(my.auth, &client->auth.pchlg, &client->auth.pcred, (unsigned long int *)&client->rand_r_SEED, head->auth.realm.proxy, head->auth.challenge.proxy);
                  if((signed int)__http$$1$$13$$3$$1$$b == boolean_false)
                  {
                    NOTIFY((enum anonymous$19)ERROR, "unable to set digest header");
                    return (enum anonymous)boolean_false;
                  }

                }

                if((signed int)head->auth.type.proxy == BASIC)
                {
                  client->auth.type.proxy = (enum anonymous$29)BASIC;
                  auth_set_basic_header(my.auth, (enum anonymous$3)PROXY, head->auth.realm.proxy);
                }

                enum anonymous return_value___request$38;
                return_value___request$38=__request(C, U, client);
                if((signed int)return_value___request$38 == boolean_false)
                  return (enum anonymous)boolean_false;

              }

              goto __CPROVER_DUMP_L60;
            }
            case 408:

            case 500:

            case 501:

            case 502:

            case 503:

            case 504:

            case 505:

            case 506:

            case 507:

            case 508:

            case 509:
              return (enum anonymous)boolean_false;
            default:
            {

            __CPROVER_DUMP_L60:
              ;
              client->hits = client->hits + 1ul;
              http_free_headers(head);
              return (enum anonymous)boolean_true;
            }
          }
        }
      }
    }
  }
}

// __in_range
// file ftp.c line 319
static enum anonymous __in_range(signed int code, signed int lower, signed int upper)
{
  return (enum anonymous)(code >= lower && code <= upper);
}

// __increment_failures
// file client.c line 697
static void __increment_failures()
{
  pthread_mutex_lock(&my.lock);
  my.failed = my.failed + 1;
  pthread_mutex_unlock(&my.lock);
  pthread_testcancel();
}

// __init_connection
// file client.c line 622
static enum anonymous __init_connection(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client)
{
  C->pos_ini = 0;
  C->inbuffer = (unsigned long int)0;
  C->content.transfer = (enum anonymous$32)NONE;
  C->content.length = (unsigned long int)0;
  C->connection.keepalive = C->connection.max == 1 ? 0 : (signed int)my.keepalive;
  C->connection.reuse = C->connection.max == 1 ? 0 : (signed int)my.keepalive;
  signed int tmp_if_expr$1;
  if(C->connection.tested == 0)
    tmp_if_expr$1 = 1;

  else
    tmp_if_expr$1 = C->connection.tested;
  C->connection.tested = tmp_if_expr$1;
  C->auth.www = client->auth.www;
  C->auth.wchlg = client->auth.wchlg;
  C->auth.wcred = client->auth.wcred;
  C->auth.proxy = client->auth.proxy;
  C->auth.pchlg = client->auth.pchlg;
  C->auth.pcred = client->auth.pcred;
  C->auth.type.www = client->auth.type.www;
  C->auth.type.proxy = client->auth.type.proxy;
  memset$link2((void *)C->buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
  enum anonymous return_value_auth_get_proxy_required$2;
  return_value_auth_get_proxy_required$2=auth_get_proxy_required(my.auth);
  char *tmp_if_expr$5;
  char *return_value_auth_get_proxy_host$3;
  char *return_value_url_get_hostname$4;
  if(!(return_value_auth_get_proxy_required$2 == /*enum*/boolean_false))
  {
    return_value_auth_get_proxy_host$3=auth_get_proxy_host(my.auth);
    tmp_if_expr$5 = return_value_auth_get_proxy_host$3;
  }

  else
  {
    return_value_url_get_hostname$4=url_get_hostname(U);
    tmp_if_expr$5 = return_value_url_get_hostname$4;
  }
  enum anonymous return_value_auth_get_proxy_required$6;
  return_value_auth_get_proxy_required$6=auth_get_proxy_required(my.auth);
  signed int tmp_if_expr$9;
  signed int return_value_auth_get_proxy_port$7;
  signed int return_value_url_get_port$8;
  if(!(return_value_auth_get_proxy_required$6 == /*enum*/boolean_false))
  {
    return_value_auth_get_proxy_port$7=auth_get_proxy_port(my.auth);
    tmp_if_expr$9 = return_value_auth_get_proxy_port$7;
  }

  else
  {
    return_value_url_get_port$8=url_get_port(U);
    tmp_if_expr$9 = return_value_url_get_port$8;
  }
  debug("%s:%d attempting connection to %s:%d", (const void *)"client.c", 643, tmp_if_expr$5, tmp_if_expr$9);
  _Bool tmp_if_expr$19;
  if(C->connection.reuse == 0)
    tmp_if_expr$19 = (_Bool)1;

  else
    tmp_if_expr$19 = C->connection.status == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$19)
  {
    enum anonymous return_value_auth_get_proxy_required$18;
    return_value_auth_get_proxy_required$18=auth_get_proxy_required(my.auth);
    if(!(return_value_auth_get_proxy_required$18 == /*enum*/boolean_false))
    {
      char *return_value_auth_get_proxy_host$10;
      return_value_auth_get_proxy_host$10=auth_get_proxy_host(my.auth);
      signed int return_value_auth_get_proxy_port$11;
      return_value_auth_get_proxy_port$11=auth_get_proxy_port(my.auth);
      debug("%s:%d creating new socket:     %s:%d", (const void *)"client.c", 652, return_value_auth_get_proxy_host$10, return_value_auth_get_proxy_port$11);
      char *return_value_auth_get_proxy_host$12;
      return_value_auth_get_proxy_host$12=auth_get_proxy_host(my.auth);
      signed int return_value_auth_get_proxy_port$13;
      return_value_auth_get_proxy_port$13=auth_get_proxy_port(my.auth);
      C->sock=new_socket(C, return_value_auth_get_proxy_host$12, return_value_auth_get_proxy_port$13);
    }

    else
    {
      char *return_value_url_get_hostname$14;
      return_value_url_get_hostname$14=url_get_hostname(U);
      signed int return_value_url_get_port$15;
      return_value_url_get_port$15=url_get_port(U);
      debug("%s:%d creating new socket:     %s:%d", (const void *)"client.c", 658, return_value_url_get_hostname$14, return_value_url_get_port$15);
      char *return_value_url_get_hostname$16;
      return_value_url_get_hostname$16=url_get_hostname(U);
      signed int return_value_url_get_port$17;
      return_value_url_get_port$17=url_get_port(U);
      C->sock=new_socket(C, return_value_url_get_hostname$16, return_value_url_get_port$17);
    }
  }

  if(!(my.keepalive == /*enum*/boolean_false))
    C->connection.reuse = boolean_true;

  if(!(C->sock >= 0))
  {
    signed int *return_value___errno_location$20;
    return_value___errno_location$20=__errno_location();
    signed int *return_value___errno_location$21;
    return_value___errno_location$21=__errno_location();
    char *return_value_strerror$22;
    return_value_strerror$22=strerror(*return_value___errno_location$21);
    debug("%s:%d connection failed. error %d(%s)", (const void *)"client.c", 670, *return_value___errno_location$20, return_value_strerror$22);
    socket_close(C);
    return (enum anonymous)boolean_false;
  }

  enum anonymous return_value_auth_get_proxy_required$23;
  return_value_auth_get_proxy_required$23=auth_get_proxy_required(my.auth);
  char *tmp_if_expr$26;
  char *return_value_auth_get_proxy_host$24;
  char *return_value_url_get_hostname$25;
  if(!(return_value_auth_get_proxy_required$23 == /*enum*/boolean_false))
  {
    return_value_auth_get_proxy_host$24=auth_get_proxy_host(my.auth);
    tmp_if_expr$26 = return_value_auth_get_proxy_host$24;
  }

  else
  {
    return_value_url_get_hostname$25=url_get_hostname(U);
    tmp_if_expr$26 = return_value_url_get_hostname$25;
  }
  enum anonymous return_value_auth_get_proxy_required$27;
  return_value_auth_get_proxy_required$27=auth_get_proxy_required(my.auth);
  signed int tmp_if_expr$30;
  signed int return_value_auth_get_proxy_port$28;
  signed int return_value_url_get_port$29;
  if(!(return_value_auth_get_proxy_required$27 == /*enum*/boolean_false))
  {
    return_value_auth_get_proxy_port$28=auth_get_proxy_port(my.auth);
    tmp_if_expr$30 = return_value_auth_get_proxy_port$28;
  }

  else
  {
    return_value_url_get_port$29=url_get_port(U);
    tmp_if_expr$30 = return_value_url_get_port$29;
  }
  debug("%s:%d good socket connection:  %s:%d", (const void *)"client.c", 678, tmp_if_expr$26, tmp_if_expr$30);
  if((signed int)C->encrypt == boolean_true)
  {
    enum anonymous return_value_auth_get_proxy_required$33;
    return_value_auth_get_proxy_required$33=auth_get_proxy_required(my.auth);
    if(!(return_value_auth_get_proxy_required$33 == /*enum*/boolean_false))
    {
      char *return_value_url_get_hostname$31;
      return_value_url_get_hostname$31=url_get_hostname(U);
      signed int return_value_url_get_port$32;
      return_value_url_get_port$32=url_get_port(U);
      https_tunnel_request(C, return_value_url_get_hostname$31, return_value_url_get_port$32);
      https_tunnel_response(C);
    }

    C->encrypt = (enum anonymous)boolean_true;
    enum anonymous return_value_SSL_initialize$34;
    return_value_SSL_initialize$34=SSL_initialize(C);
    if((signed int)return_value_SSL_initialize$34 == boolean_false)
      return (enum anonymous)boolean_false;

  }

  return (enum anonymous)boolean_true;
}

// __lookup
// file hash.c line 295
static enum anonymous __lookup(struct HASH_T *this, char *key)
{
  signed int x;
  struct NODE *node;
  if(key == ((char *)NULL))
    return (enum anonymous)boolean_false;

  else
  {
    unsigned int return_value___genkey$1;
    return_value___genkey$1=__genkey(this->size, key);
    x = (signed int)return_value___genkey$1;
    node = this->table[(signed long int)x];
    for( ; !(node == ((struct NODE *)NULL)); node = node->next)
    {
      signed int tmp_statement_expression$2;
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp$3;
      return_value___builtin_strcmp$3=__builtin_strcmp(node->key, key);
      tmp_statement_expression$2 = return_value___builtin_strcmp$3;
      if(tmp_statement_expression$2 == 0)
        return (enum anonymous)boolean_true;

    }
    return (enum anonymous)boolean_false;
  }
}

// __lquote
// file http.c line 790
char * __lquote(char *str)
{
  char *ptr;
  signed int len;
  ptr = str;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  do
  {
    if(!(*ptr == 0))
    {
      if((signed int)*ptr == 34)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)*ptr == 39 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr$2 = tmp_if_expr$1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    ptr = ptr + 1l;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(ptr);
  len = (signed int)return_value_strlen$3;
  memmove((void *)str, (const void *)ptr, (unsigned long int)(len + 1));
  return str;
}

// __message
// file notify.c line 78
static void __message(enum anonymous$22 M, enum anonymous$19 L, const char *fmt, void **ap)
{
  char buf[40000l];
  char msg[41024l];
  enum anonymous$19 level = (enum anonymous$19)WARNING;
  char pmode[64l];
  char lmode[64l];
  memset$link16((void *)lmode, 0, (unsigned long int)64);
  memset$link16((void *)pmode, 0, (unsigned long int)64);
  vsprintf(buf, fmt, ap);
  signed int *return_value___errno_location$3;
  return_value___errno_location$3=__errno_location();
  _Bool tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  if(*return_value___errno_location$3 == 0)
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    return_value___errno_location$4=__errno_location();
    tmp_if_expr$5 = *return_value___errno_location$4 == 38 ? (_Bool)1 : (_Bool)0;
  }
  if((signed int)L == DEBUG || tmp_if_expr$5)
    snprintf$link11(msg, sizeof(char [41024l]) /*41024ul*/ , "%s\n", (const void *)buf);

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    snprintf$link11(msg, sizeof(char [41024l]) /*41024ul*/ , "%s: %s\n", (const void *)buf, return_value_strerror$2);
  }
  switch((signed int)L)
  {
    case DEBUG:
    {
      sprintf$link1(pmode, "[%c[%d;%dmdebug%c[%dm]", 0x1B, 1, 4 + 30, 0x1B, 0);
      strcpy$link1(lmode, "[debug]");
      level = (enum anonymous$19)4;
      break;
    }
    case WARNING:
    {
      sprintf$link1(pmode, "[%c[%d;%dmalert%c[%dm]", 0x1B, 1, 2 + 30, 0x1B, 0);
      strcpy$link1(lmode, "[alert] ");
      level = (enum anonymous$19)4;
      break;
    }
    case ERROR:
    {
      sprintf$link1(pmode, "[%c[%d;%dmerror%c[%dm]", 0x1B, 1, 3 + 30, 0x1B, 0);
      strcpy$link1(lmode, "[error]");
      level = (enum anonymous$19)3;
      break;
    }
    case FATAL:
    {
      sprintf$link1(pmode, "[%c[%d;%dmfatal%c[%dm]", 0x1B, 1, 1 + 30, 0x1B, 0);
      strcpy$link1(lmode, "[fatal]");
      level = (enum anonymous$19)2;
    }
  }
  if((signed int)M == __LOG)
    syslog((signed int)level, "%s %s", (const void *)lmode, (const void *)msg);

  else
  {
    fflush(stdout);
    fprintf$link7(stderr, "%s %s", (const void *)pmode, (const void *)msg);
  }
  if((signed int)L == FATAL)
    exit(1);

  goto __CPROVER_DUMP_L13;

__CPROVER_DUMP_L13:
  ;
}

// __parse_input
// file creds.c line 122
static void __parse_input(struct CREDS_T *this, char *str)
{
  char *usr;
  char *pwd;
  char *rlm;
  char *tmp;
  char any[5l] = { 'a', 'n', 'y', 0, 0 };
  tmp = str;
  usr = tmp;
  for( ; !(*tmp == 0); tmp = tmp + 1l)
  {
    if((signed int)*tmp == 58)
      break;

    if((signed int)*tmp == 0)
      break;

  }
  char *tmp_post$1 = tmp;
  tmp = tmp + 1l;
  *tmp_post$1 = (char)0;
  pwd = tmp;
  for( ; !(*tmp == 0); tmp = tmp + 1l)
  {
    if((signed int)*tmp == 58)
      break;

    if((signed int)*tmp == 0)
      break;

  }
  if(!((signed int)*tmp == 0))
  {
    char *tmp_post$2 = tmp;
    tmp = tmp + 1l;
    *tmp_post$2 = (char)0;
    rlm = tmp;
  }

  else
    rlm = (char *)(void *)0;
  creds_set_username(this, usr);
  creds_set_password(this, pwd);
  char *tmp_if_expr$3;
  if(rlm == ((char *)NULL))
    tmp_if_expr$3 = any;

  else
    tmp_if_expr$3 = rlm;
  creds_set_realm(this, tmp_if_expr$3);
}

// __parse_pair
// file http.c line 739
static char * __parse_pair(char **str)
{
  signed int __parse_pair$$1$$okay = 0;
  char *p = *str;
  char *pair = (char *)(void *)0;
  _Bool tmp_if_expr$1;
  if(str == ((char **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = !(*str != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    for( ; !(*p == 0); p = p + 1l)
      if((signed int)*p == 32)
        break;

    char *tmp_post$2 = p;
    p = p + 1l;
    *tmp_post$2 = (char)0;
    if(*p == 0)
    {
      *str = p;
      return (char *)(void *)0;
    }

    else
    {
      pair = p;
      for( ; !(*p == 0); p = p + 1l)
      {
        if((signed int)*p == 59)
          break;

        if((signed int)*p == 44)
          break;

        if(*p == 0)
        {
          *str = p;
          return (char *)(void *)0;
        }

        if((signed int)*p == 61)
          __parse_pair$$1$$okay = 1;

      }
      char *tmp_post$3 = p;
      p = p + 1l;
      *tmp_post$3 = (char)0;
      *str = p;
      if(!(__parse_pair$$1$$okay == 0))
        return pair;

      else
        return (char *)(void *)0;
    }
  }
}

// __parse_post_data
// file url.c line 549
static void __parse_post_data(struct URL_T *this, char *datap)
{
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned int)*datap]) == 0)
      break;

    datap = datap + 1l;
  }
  while((_Bool)1);
  if((signed int)*datap == 60)
  {
    datap = datap + 1l;
    load_file(this, datap);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(datap);
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(return_value_strlen$2 + (unsigned long int)1);
    this->file = (char *)return_value_xmalloc$3;
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(datap);
    memset$link14((void *)this->file, 0, return_value_strlen$4 + (unsigned long int)1);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(datap);
    memcpy$link9((void *)this->file, (const void *)datap, return_value_strlen$5);
    goto __CPROVER_DUMP_L6;
  }

  else
  {
    this->postdata=xstrdup(datap);
    this->postlen=strlen(this->postdata);
    signed int return_value_empty$6;
    return_value_empty$6=empty(my.conttype);
    if(return_value_empty$6 == 0)
      this->conttype=xstrdup(my.conttype);

    else
      this->conttype=xstrdup("application/x-www-form-urlencoded");
    goto __CPROVER_DUMP_L6;
  }

__CPROVER_DUMP_L6:
  ;
}

// __request
// file client.c line 185
static enum anonymous __request(struct anonymous$0 *C, struct URL_T *U, struct anonymous$4 *client)
{
  C->scheme=url_get_scheme(U);
  enum anonymous return_value___ftp$1;
  if(!((signed int)C->scheme == FTP))
  {
    if((signed int)C->scheme == HTTP || (signed int)C->scheme == HTTPS)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    return_value___ftp$1=__ftp(C, U, client);
    return return_value___ftp$1;
  }

__CPROVER_DUMP_L2:
  ;
  enum anonymous return_value___http$2;
  return_value___http$2=__http(C, U, client);
  return return_value___http$2;
}

// __request$link1
// file ftp.c line 241
static signed int __request$link1(struct anonymous$0 *C$link1, char *fmt, ...)
{
  signed int code = 0;
  char buf[1024l];
  char cmd[1032l];
  unsigned long int len;
  unsigned long int n;
  void **ap;
  memset$link7((void *)buf, 0, sizeof(char [1024l]) /*1024ul*/ );
  memset$link7((void *)cmd, 0, sizeof(char [1032l]) /*1032ul*/ );
  ap = (void **)&fmt;
  vsnprintf(buf, sizeof(char [1024l]) /*1024ul*/ , fmt, ap);
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf$link4(cmd, sizeof(char [1032l]) /*1032ul*/ , "%s\r\n", (const void *)buf);
  len = (unsigned long int)return_value_snprintf$1;
  signed int return_value_socket_write$2;
  return_value_socket_write$2=socket_write(C$link1, (const void *)cmd, len);
  n = (unsigned long int)return_value_socket_write$2;
  if(!(n == len))
  {
    NOTIFY((enum anonymous$19)ERROR, "FTP: unable to write to socket.");
    code = 500;
  }

  ap = ((void **)NULL);
  char *return_value_chomp$3;
  return_value_chomp$3=chomp(cmd);
  debug(return_value_chomp$3);
  if(code == 500)
  {
    C$link1->ftp.code = 500;
    return C$link1->ftp.code;
  }

  else
  {
    C$link1->ftp.code=__response(C$link1);
    return C$link1->ftp.code;
  }
}

// __resize
// file hash.c line 101
static void __resize(struct HASH_T *this)
{
  struct NODE *tmp;
  struct NODE *last_node;
  struct NODE **last_table;
  signed int x;
  signed int hash;
  signed int size = this->size;
  last_table = this->table;
  hash_reset(this, (signed long int)(size * 2));
  x = 0;
  for( ; !(x >= size); x = x + 1)
  {
    last_node = last_table[(signed long int)x];
    while(!(last_node == ((struct NODE *)NULL)))
    {
      tmp = last_node;
      last_node = last_node->next;
      unsigned int return_value___genkey$1;
      return_value___genkey$1=__genkey(this->size, (char *)tmp->key);
      hash = (signed int)return_value___genkey$1;
      tmp->next = this->table[(signed long int)hash];
      this->table[(signed long int)hash] = tmp;
      this->entries = this->entries + 1;
    }
  }
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// __response
// file ftp.c line 274
static signed int __response(struct anonymous$0 *C)
{
  signed int n;
  char c;
  signed int code = 120;
  enum anonymous cont = (enum anonymous)boolean_true;
  signed long int return_value_socket_read$1;
  while(!(cont == /*enum*/boolean_false))
  {
    signed int x;
    while((_Bool)1)
    {
      x = 0;
      memset$link7((void *)C->chkbuf, 0, sizeof(char [1024l]) /*1024ul*/ );
      do
      {
        return_value_socket_read$1=socket_read(C, (void *)&c, (unsigned long int)1);
        n = (signed int)return_value_socket_read$1;
        if(!(n == 1))
          break;

        echo("%c", c);
        C->chkbuf[(signed long int)x] = c;
        if((signed int)C->chkbuf[(signed long int)x] == 10)
          break;

        x = x + 1;
      }
      while((_Bool)1);
      const unsigned short int **return_value___ctype_b_loc$2;
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)C->chkbuf[0l]]) == 0))
      {
        if(!((signed int)C->chkbuf[3l] == 45))
          break;

      }

    }
    code=__response_code(C->chkbuf);
    if((signed int)C->chkbuf[3l] == 32)
      cont = (enum anonymous)boolean_false;

  }
  if(my.quiet == /*enum*/boolean_false && code >= 500)
  {
    char *return_value_chomp$3;
    return_value_chomp$3=chomp(C->chkbuf);
    printf("%s\n", return_value_chomp$3);
  }

  return code;
}

// __response_code
// file ftp.c line 307
static signed int __response_code(const char *buf)
{
  signed int ret;
  char code[4l];
  memset$link7((void *)code, 0, sizeof(char [4l]) /*4ul*/ );
  strncpy$link2(code, buf, (unsigned long int)3);
  code[(signed long int)3] = (char)0;
  ret=atoi(code);
  return ret;
}

// __rquote
// file http.c line 776
char * __rquote(char *str)
{
  char *ptr;
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  len = (signed int)return_value_strlen$1;
  ptr = (str + (signed long int)len) - (signed long int)1;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  do
  {
    if(ptr >= str)
    {
      if((signed int)*ptr == 34)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed int)*ptr == 39 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
    if(!tmp_if_expr$3)
      break;

    ptr = ptr - 1l;
  }
  while((_Bool)1);
  ptr[(signed long int)1] = (char)0;
  return str;
}

// __select_color
// file client.c line 707
static signed int __select_color(signed int code)
{
  switch(code)
  {
    case 150:

    case 200:

    case 201:

    case 202:

    case 203:

    case 204:

    case 205:

    case 206:

    case 226:
      return 4;
    case 300:

    case 301:

    case 302:

    case 303:

    case 304:

    case 305:

    case 306:

    case 307:
      return 6;
    case 400:

    case 401:

    case 402:

    case 403:

    case 404:

    case 405:

    case 406:

    case 407:

    case 408:

    case 409:

    case 410:

    case 411:

    case 412:

    case 413:

    case 414:

    case 415:

    case 416:

    case 417:
      return 5;
    case 500:

    case 501:

    case 502:

    case 503:

    case 504:

    case 505:

    default:
      return 1;
  }
  return 1;
}

// __socket_block
// file sock.c line 309
static signed int __socket_block(signed int sock, enum anonymous block)
{
  signed int flags;
  signed int retval;
  return sock;
  if(sock == -1)
    return sock;

  else
  {
    flags=fcntl(sock, 3, 0);
    if(!(flags >= 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(*return_value___errno_location$1 == 13)
      {
        NOTIFY((enum anonymous$19)ERROR, "EACCES %s:%d", (const void *)"sock.c", 327);
        NOTIFY((enum anonymous$19)ERROR, "bad file descriptor %s:%d", (const void *)"sock.c", 328);
        NOTIFY((enum anonymous$19)ERROR, "address is unavailable %s:%d", (const void *)"sock.c", 329);
      }

      NOTIFY((enum anonymous$19)ERROR, "unknown network error %s:%d", (const void *)"sock.c", 330);
      return -1;
    }

    if(!(block == /*enum*/boolean_false))
      flags = flags & ~04000;

    else
    {
      flags = flags | 04000;
      flags = flags | 04000;
    }
    retval=fcntl(sock, 4, flags);
    if(!(retval >= 0))
    {
      NOTIFY((enum anonymous$19)ERROR, "unable to set fcntl flags %s:%d", (const void *)"sock.c", 345);
      return -1;
    }

    else
      return retval;
  }
}

// __socket_check
// file sock.c line 248
static enum anonymous __socket_check(struct anonymous$0 *C, enum anonymous$7 mode)
{
  signed int res;
  struct anonymous$5 fds;
  struct anonymous$5 *rs = (struct anonymous$5 *)(void *)0;
  struct anonymous$5 *ws = (struct anonymous$5 *)(void *)0;
  double timo;
  struct timeval timeout;
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  if(C->state == mode)
    return (enum anonymous)boolean_true;

  else
  {
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fds)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    signed long int tmp_statement_expression$1;
    signed long int __d = (signed long int)C->sock;
    signed long int return_value___fdelt_chk$2;
    return_value___fdelt_chk$2=__fdelt_chk(__d);
    tmp_statement_expression$1 = return_value___fdelt_chk$2;
    (&fds)->__fds_bits[tmp_statement_expression$1] = (&fds)->__fds_bits[tmp_statement_expression$1] | (signed long int)(1UL << C->sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    if((signed int)mode == WRITE)
      *(&ws) = &fds;

    else
      *(&rs) = &fds;
    timo = (double)(my.timeout != 0 ? my.timeout : 15);
    timeout.tv_sec = (signed long int)timo;
    timeout.tv_usec = (signed long int)((double)1000000L * (timo - (double)(signed long int)timo));
    if((signed int)mode == WRITE)
      __socket_block(C->sock, (enum anonymous)boolean_false);

    do
    {
      res=select(C->sock + 1, rs, ws, (struct anonymous$5 *)(void *)0, &timeout);
      pthread_testcancel();
      if(!(res >= 0))
      {
        return_value___errno_location$3=__errno_location();
        tmp_if_expr$4 = *return_value___errno_location$3 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
    }
    while(tmp_if_expr$4);
    if((signed int)mode == WRITE)
      __socket_block(C->sock, (enum anonymous)boolean_true);

    if(res == 0)
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      *return_value___errno_location$5 = 110;
    }

    if(!(res >= 1))
    {
      unsigned long int return_value_pthread_self$6;
      return_value_pthread_self$6=pthread_self();
      NOTIFY((enum anonymous$19)WARNING, "socket: %d select timed out", return_value_pthread_self$6);
    }

    if(!(res >= 1))
    {
      C->state = (enum anonymous$7)UNDEF;
      return (enum anonymous)boolean_false;
    }

    else
    {
      C->state = mode;
      return (enum anonymous)boolean_true;
    }
  }
}

// __socket_write
// file sock.c line 361
static signed long int __socket_write(signed int sock, const void *vbuf, unsigned long int len)
{
  unsigned long int n;
  signed long int w;
  const char *buf = (const char *)vbuf;
  n = len;
  for( ; n >= 1ul; buf = buf + w)
  {
    w=write(sock, (const void *)buf, n);
    if(!(w >= 1l))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(*return_value___errno_location$1 == 4)
        w = (signed long int)0;

      else
        return (signed long int)-1;
    }

    n = n - (unsigned long int)w;
  }
  return (signed long int)len;
}

// __ssl_socket_write
// file sock.c line 390
static signed long int __ssl_socket_write(struct anonymous$0 *C, const void *vbuf, unsigned long int len)
{
  unsigned long int n;
  signed long int w;
  const char *buf;
  signed int err;
  buf = (const char *)vbuf;
  n = len;
  while(n >= 1ul)
  {
    signed int return_value_SSL_write$1;
    return_value_SSL_write$1=SSL_write(C->ssl, (const void *)buf, (signed int)n);
    w = (signed long int)return_value_SSL_write$1;
    if(!(w >= 1l))
    {
      if(!(w >= 0l))
      {
        err=SSL_get_error(C->ssl, (signed int)w);
        switch(err)
        {
          case 2:

          case 3:
            return (signed long int)0;
          case 5:
          {
            NOTIFY((enum anonymous$19)ERROR, "SSL_write() failed (syscall)");
            return (signed long int)-1;
          }
          case 1:
            return (signed long int)-1;
          default:
            ;
        }
      }

      NOTIFY((enum anonymous$19)ERROR, "SSL_write() failed.");
      return (signed long int)-1;
    }

    n = n - (unsigned long int)w;
    buf = buf + w;
  }
  return (signed long int)len;
}

// __str_list_contains
// file auth.c line 661
static enum anonymous __str_list_contains(const char *str, const char *pattern, unsigned long int pattern_len)
{
  const char *ptr = str;
  do
  {
    signed int return_value_strncmp$2;
    return_value_strncmp$2=strncmp(ptr, pattern, pattern_len);
    if(return_value_strncmp$2 == 0)
    {
      _Bool tmp_if_expr$1;
      if((signed int)ptr[(signed long int)pattern_len] == 44)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = 0 == (signed int)ptr[(signed long int)pattern_len] ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        return (enum anonymous)boolean_true;

    }

    char *return_value___builtin_strchr$3;
    return_value___builtin_strchr$3=__builtin_strchr(ptr, 44);
    ptr = return_value___builtin_strchr$3;
    if(!(ptr == ((const char *)NULL)))
      ptr = ptr + 1l;

  }
  while(!(ptr == ((const char *)NULL)));
  return (enum anonymous)boolean_false;
}

// __strpbrk_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1100
static inline char * __strpbrk_c2(const char *__s, signed int __accept1, signed int __accept2)
{
  for( ; !((signed int)*__s == 0); __s = __s + 1l)
  {
    if((signed int)*__s == __accept1)
      break;

    if((signed int)*__s == __accept2)
      break;

  }
  return (signed int)*__s == 0 ? (char *)(void *)0 : (char *)(unsigned long int)__s;
}

// __strpbrk_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1111
static inline char * __strpbrk_c3(const char *__s, signed int __accept1, signed int __accept2, signed int __accept3)
{
  for( ; !((signed int)*__s == 0); __s = __s + 1l)
  {
    if((signed int)*__s == __accept1)
      break;

    if((signed int)*__s == __accept2)
      break;

    if((signed int)*__s == __accept3)
      break;

  }
  return (signed int)*__s == 0 ? (char *)(void *)0 : (char *)(unsigned long int)__s;
}

// __url_default_port
// file url.c line 638
static signed int __url_default_port(struct URL_T *this)
{
  switch((signed int)this->scheme)
  {
    case FTP:
      return 21;
    case HTTP:
      return 80;
    case HTTPS:
      return 443;
    case UNSUPPORTED:

    default:
      return 80;
  }
}

// __url_escape
// file url.c line 1050
static char * __url_escape(const char *s)
{
  const char *p1;
  char *newstr;
  char *p2;
  signed int oldlen;
  signed int newlen;
  signed int encode_count = 0;
  signed int decode_count = 0;
  enum anonymous$2 return_value___url_has_method$1;
  return_value___url_has_method$1=__url_has_method(s);
  signed int tmp_statement_expression$10;
  const signed int **return_value___ctype_toupper_loc$11;
  const signed int **return_value___ctype_toupper_loc$13;
  signed int tmp_statement_expression$15;
  const signed int **return_value___ctype_toupper_loc$16;
  const signed int **return_value___ctype_toupper_loc$18;
  if(!((signed int)return_value___url_has_method$1 == NOMETHOD))
    return (char *)s;

  else
  {
    p1 = s;
    while(!(*p1 == 0))
    {
      enum copy_method return_value_decide_copy_method$2;
      return_value_decide_copy_method$2=decide_copy_method(p1);
      switch((signed int)return_value_decide_copy_method$2)
      {
        case CM_ENCODE:
        {
          encode_count = encode_count + 1;
          goto __CPROVER_DUMP_L5;
        }
        case CM_DECODE:
          decode_count = decode_count + 1;
        case CM_PASSTHROUGH:

        default:
        {

        __CPROVER_DUMP_L5:
          ;
          p1 = p1 + 1l;
        }
      }
    }
    if(decode_count == 0 && encode_count == 0)
      return (char *)s;

    else
    {
      oldlen = (signed int)(p1 - s);
      newlen = oldlen + 2 * (encode_count - decode_count);
      void *return_value_xmalloc$3;
      return_value_xmalloc$3=xmalloc((unsigned long int)(newlen + 1));
      newstr = (char *)return_value_xmalloc$3;
      p1 = s;
      p2 = newstr;
      while(!(*p1 == 0))
      {
        enum copy_method return_value_decide_copy_method$4;
        return_value_decide_copy_method$4=decide_copy_method(p1);
        switch((signed int)return_value_decide_copy_method$4)
        {
          case CM_ENCODE:
          {
            unsigned char c;
            const char *tmp_post$5 = p1;
            p1 = p1 + 1l;
            c = (unsigned char)*tmp_post$5;
            char *tmp_post$6 = p2;
            p2 = p2 + 1l;
            *tmp_post$6 = (char)37;
            char *tmp_post$7 = p2;
            p2 = p2 + 1l;
            *tmp_post$7 = "0123456789ABCDEF"[(signed long int)((signed int)c >> 4)];
            char *tmp_post$8 = p2;
            p2 = p2 + 1l;
            *tmp_post$8 = "0123456789ABCDEF"[(signed long int)((signed int)c & 0xf)];
            break;
          }
          case CM_DECODE:
          {
            char *tmp_post$9 = p2;
            p2 = p2 + 1l;
            signed int tmp_if_expr$14;
            if(!((signed int)p1[1l] >= 65))
              tmp_if_expr$14 = (signed int)p1[(signed long int)1] - 48;

            else
            {
              signed int __res;
              return_value___ctype_toupper_loc$13=__ctype_toupper_loc();
              __res = (*return_value___ctype_toupper_loc$13)[(signed long int)(signed int)p1[(signed long int)1]];
              tmp_statement_expression$10 = __res;
              tmp_if_expr$14 = (tmp_statement_expression$10 - 65) + 10;
            }
            signed int tmp_if_expr$19;
            if(!((signed int)p1[2l] >= 65))
              tmp_if_expr$19 = (signed int)p1[(signed long int)2] - 48;

            else
            {
              signed int __url_escape$$1$$3$$1$$3$$__res;
              return_value___ctype_toupper_loc$18=__ctype_toupper_loc();
              __url_escape$$1$$3$$1$$3$$__res = (*return_value___ctype_toupper_loc$18)[(signed long int)(signed int)p1[(signed long int)2]];
              tmp_statement_expression$15 = __url_escape$$1$$3$$1$$3$$__res;
              tmp_if_expr$19 = (tmp_statement_expression$15 - 65) + 10;
            }
            *tmp_post$9 = (char)((tmp_if_expr$14 << 4) + tmp_if_expr$19);
            p1 = p1 + (signed long int)3;
            break;
          }
          case CM_PASSTHROUGH:
          {
            char *tmp_post$20 = p2;
            p2 = p2 + 1l;
            const char *tmp_post$21 = p1;
            p1 = p1 + 1l;
            *tmp_post$20 = *tmp_post$21;
          }
        }
      }
      *p2 = (char)0;
      return newstr;
    }
  }
}

// __url_has_credentials
// file url.c line 626
static enum anonymous __url_has_credentials(char *url)
{
  const char *p;
  char *tmp_statement_expression$1;
  char __a0;
  char __a1;
  char __a2;
  char *return_value___builtin_strpbrk$2;
  return_value___builtin_strpbrk$2=__builtin_strpbrk(url, "@/?#;");
  tmp_statement_expression$1 = return_value___builtin_strpbrk$2;
  p = (const char *)tmp_statement_expression$1;
  _Bool tmp_if_expr$3;
  if(p == ((const char *)NULL))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = (signed int)*p != 64 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
    return (enum anonymous)boolean_false;

  else
    return (enum anonymous)boolean_true;
}

// __url_has_method
// file url.c line 1033
static enum anonymous$2 __url_has_method(const char *url)
{
  unsigned int i = (unsigned int)0;
  const char *r = (const char *)(void *)0;
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 8ul); i = i + 1u)
  {
    static const char * const methods[8l] = { " GET", " HEAD", " POST", " PUT", " TRACE", " DELETE", " OPTIONS", " CONNECT" };
    r=strstr(url, methods[(signed long int)i]);
    if(!(r == ((const char *)NULL)))
      return (enum anonymous$2)i;

  }
  return (enum anonymous$2)NOMETHOD;
}

// __url_has_scheme
// file url.c line 610
static enum anonymous __url_has_scheme(char *url)
{
  const char *p = url;
  _Bool tmp_if_expr$4;
  const unsigned short int **return_value___ctype_b_loc$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(*p == 0)
    tmp_if_expr$4 = (_Bool)1;

  else
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((8 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*p]) == 0))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)*p == 45 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (signed int)*p == 43 ? (_Bool)1 : (_Bool)0;
    tmp_if_expr$4 = !tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
  }
  const unsigned short int **return_value___ctype_b_loc$5;
  if(tmp_if_expr$4)
    return (enum anonymous)boolean_false;

  else
  {
    p = p + 1l;
    for( ; !(*p == 0); p = p + 1l)
    {
      return_value___ctype_b_loc$5=__ctype_b_loc();
      if((8 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*p]) == 0)
      {
        if(!((signed int)*p == 45))
        {
          if(!((signed int)*p == 43))
            break;

        }

      }

    }
    return (enum anonymous)((signed int)*p == 58);
  }
}

// __url_parse
// file url.c line 493
static void __url_parse(struct URL_T *this, char *url)
{
  char *ptr = (char *)(void *)0;
  char *esc = (char *)(void *)0;
  char *post;
  esc=__url_escape(url);
  if(!(my.escape == /*enum*/boolean_false))
    ptr=__url_set_absolute(this, esc);

  else
    ptr=__url_set_absolute(this, url);
  ptr=__url_set_scheme(this, ptr);
  post=strstr(this->url, " POST");
  if(post == ((char *)NULL))
    post=strstr(this->url, " PUT");

  if(!(post == ((char *)NULL)))
  {
    signed int return_value_strncasecmp$1;
    return_value_strncasecmp$1=strncasecmp(post, " PUT", (unsigned long int)4);
    if(return_value_strncasecmp$1 == 0)
    {
      this->method = (enum anonymous$2)PUT;
      post = post + (signed long int)4;
    }

    else
    {
      this->method = (enum anonymous$2)POST;
      post = post + (signed long int)5;
    }
    __parse_post_data(this, post);
  }

  else
  {
    this->method = (enum anonymous$2)GET;
    this->postdata = (char *)(void *)0;
    this->posttemp = (char *)(void *)0;
    this->postlen = (unsigned long int)0;
  }
  enum anonymous return_value___url_has_credentials$2;
  return_value___url_has_credentials$2=__url_has_credentials(ptr);
  if(!(return_value___url_has_credentials$2 == /*enum*/boolean_false))
  {
    ptr=__url_set_username(this, ptr);
    ptr=__url_set_password(this, ptr);
  }

  ptr=__url_set_hostname(this, ptr);
  ptr=__url_set_port(this, ptr);
  ptr=__url_set_path(this, ptr);
  ptr=__url_set_file(this, ptr);
  ptr=__url_set_parameters(this, ptr);
  ptr=__url_set_query(this, ptr);
  ptr=__url_set_fragment(this, ptr);
  goto __CPROVER_DUMP_L9;

__CPROVER_DUMP_L9:
  ;
}

// __url_set_absolute
// file url.c line 579
static char * __url_set_absolute(struct URL_T *this, char *url)
{
  unsigned long int len;
  char *slash;
  signed int return_value_empty$1;
  return_value_empty$1=empty(url);
  if(!(return_value_empty$1 == 0))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(url);
    len = return_value_strlen$2 + (unsigned long int)5;
    enum anonymous return_value___url_has_scheme$5;
    return_value___url_has_scheme$5=__url_has_scheme(url);
    if(return_value___url_has_scheme$5 == /*enum*/boolean_false)
    {
      void *return_value_xmalloc$3;
      return_value_xmalloc$3=xmalloc(len + (unsigned long int)7);
      this->url = (char *)return_value_xmalloc$3;
      memset$link14((void *)this->url, 0, sizeof(char *) /*8ul*/ );
      slash=strstr(url, "/");
      if(!(slash == ((char *)NULL)))
        snprintf$link10(this->url, len + (unsigned long int)7, "http://%s", url);

      else
        snprintf$link10(this->url, len + (unsigned long int)7, "http://%s/", url);
    }

    else
    {
      void *return_value_xmalloc$4;
      return_value_xmalloc$4=xmalloc(len);
      this->url = (char *)return_value_xmalloc$4;
      memset$link14((void *)this->url, 0, sizeof(char *) /*8ul*/ );
      snprintf$link10(this->url, len, "%s", url);
    }
    return this->url;
  }
}

// __url_set_file
// file url.c line 837
static char * __url_set_file(struct URL_T *this, char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  const unsigned short int **return_value___ctype_b_loc$3;
  if(str == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    if(!(this->file == ((char *)NULL)))
    {
      return_value_strlen$1=strlen(this->file);
      if(return_value_strlen$1 >= 2ul)
        return str;

    }

    i = 0;
    do
    {
      if(!(str[(signed long int)i] == 0))
      {
        if(!((signed int)str[(signed long int)i] == 59))
          tmp_if_expr$2 = (signed int)str[(signed long int)i] != 63 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
        {
          return_value___ctype_b_loc$3=__ctype_b_loc();
          tmp_if_expr$4 = !(((signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)str[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4 = (_Bool)0;
        tmp_if_expr$5 = tmp_if_expr$4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$5 = (_Bool)0;
      if(!tmp_if_expr$5)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    void *return_value_xmalloc$6;
    return_value_xmalloc$6=xmalloc((unsigned long int)(i + 1));
    this->file = (char *)return_value_xmalloc$6;
    memset$link14((void *)this->file, 0, (unsigned long int)(i + 1));
    memcpy$link9((void *)this->file, (const void *)str, (unsigned long int)i);
    trim(this->file);
    if((signed int)str[(signed long int)i] == 59)
    {
      this->hasparams = (enum anonymous)boolean_true;
      str = str + (signed long int)(i + 1);
    }

    else
      if((signed int)str[(signed long int)i] == 63)
        str = str + (signed long int)(i + 1);

      else
        str = str + (signed long int)i;
    return str;
  }
}

// __url_set_fragment
// file url.c line 930
static char * __url_set_fragment(struct URL_T *this, char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  if(str == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    if(!(this->frag == ((char *)NULL)))
    {
      return_value_strlen$1=strlen(this->frag);
      if(return_value_strlen$1 >= 2ul)
        return str;

    }

    i = 0;
    do
    {
      if(!(str[(signed long int)i] == 0))
      {
        return_value___ctype_b_loc$2=__ctype_b_loc();
        tmp_if_expr$3 = !(((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)str[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
      if(!tmp_if_expr$3)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    void *return_value_xmalloc$4;
    return_value_xmalloc$4=xmalloc((unsigned long int)(i + 1));
    this->frag = (char *)return_value_xmalloc$4;
    memcpy$link9((void *)this->frag, (const void *)str, (unsigned long int)i);
    str = str + (signed long int)(i + 1);
    return str;
  }
}

// __url_set_hostname
// file url.c line 744
static char * __url_set_hostname(struct URL_T *this, char *str)
{
  signed int i = 0;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  do
  {
    if(!(str[(signed long int)i] == 0))
      tmp_if_expr$1 = (signed int)str[(signed long int)i] != 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$2 = (signed int)str[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  void *return_value_xmalloc$3;
  return_value_xmalloc$3=xmalloc((unsigned long int)(i + 1));
  this->hostname = (char *)return_value_xmalloc$3;
  memcpy$link9((void *)this->hostname, (const void *)str, (unsigned long int)i);
  this->hostname[(signed long int)i] = (char)0;
  if((signed int)str[(signed long int)i] == 58)
    str = str + (signed long int)(i + 1);

  else
    str = str + (signed long int)i;
  return str;
}

// __url_set_parameters
// file url.c line 867
static char * __url_set_parameters(struct URL_T *this, char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  if(str == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    if(!(this->params == ((char *)NULL)))
    {
      return_value_strlen$1=strlen(this->params);
      if(return_value_strlen$1 >= 2ul)
        return str;

    }

    if((signed int)this->hasparams == boolean_false)
    {
      this->params = "";
      return str;
    }

    else
    {
      i = 0;
      do
      {
        if(!(str[(signed long int)i] == 0))
        {
          if(!((signed int)str[(signed long int)i] == 63))
          {
            return_value___ctype_b_loc$2=__ctype_b_loc();
            tmp_if_expr$3 = !(((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)str[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$3 = (_Bool)0;
          tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4 = (_Bool)0;
        if(!tmp_if_expr$4)
          break;

        i = i + 1;
      }
      while((_Bool)1);
      void *return_value_xmalloc$5;
      return_value_xmalloc$5=xmalloc((unsigned long int)(i + 1));
      this->params = (char *)return_value_xmalloc$5;
      memset$link14((void *)this->params, 0, (unsigned long int)(i + 1));
      memcpy$link9((void *)this->params, (const void *)str, (unsigned long int)i);
      if((signed int)str[(signed long int)i] == 63)
        str = str + (signed long int)(i + 1);

      else
        str = str + (signed long int)i;
      return str;
    }
  }
}

// __url_set_password
// file url.c line 713
static char * __url_set_password(struct URL_T *this, char *str)
{
  signed int i;
  char *a;
  char *s;
  char *return_value___builtin_strchr$1;
  return_value___builtin_strchr$1=__builtin_strchr(str, 64);
  a = return_value___builtin_strchr$1;
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(str, 47);
  s = return_value___builtin_strchr$2;
  if(a == ((char *)NULL) || a >= s && !(s == ((char *)NULL)))
    return str;

  else
  {
    i = 0;
    for( ; !((signed int)str[(signed long int)i] == 64); i = i + 1)
      ;
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc((unsigned long int)(i + 1));
    this->password = (char *)return_value_xmalloc$3;
    memcpy$link9((void *)this->password, (const void *)str, (unsigned long int)i);
    this->password[(signed long int)i] = (char)0;
    str = str + (signed long int)(i + 1);
    return str;
  }
}

// __url_set_path
// file url.c line 798
static char * __url_set_path(struct URL_T *this, char *str)
{
  signed int i;
  signed int j;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  i = (signed int)return_value_strlen$1;
  _Bool tmp_if_expr$2;
  do
  {
    if(i >= 1)
      tmp_if_expr$2 = (signed int)str[(signed long int)i] != 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i - 1;
  }
  while((_Bool)1);
  j = 0;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$4;
  const unsigned short int **return_value___ctype_b_loc$3;
  do
  {
    if(!(str[(signed long int)j] == 0))
    {
      if(!((signed int)str[(signed long int)j] == 35))
      {
        return_value___ctype_b_loc$3=__ctype_b_loc();
        tmp_if_expr$4 = !(((signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)str[(signed long int)j]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      tmp_if_expr$5 = tmp_if_expr$4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(!tmp_if_expr$5)
      break;

    j = j + 1;
  }
  while((_Bool)1);
  if(!((signed int)str[(signed long int)i] == 47))
  {
    void *return_value_xmalloc$6;
    return_value_xmalloc$6=xmalloc((unsigned long int)2);
    this->path = (char *)return_value_xmalloc$6;
    void *return_value_xmalloc$7;
    return_value_xmalloc$7=xmalloc((unsigned long int)2);
    this->request = (char *)return_value_xmalloc$7;
    strncpy$link6(this->path, "/", (unsigned long int)2);
    strncpy$link6(this->request, "/", (unsigned long int)2);
    this->path[(signed long int)1] = (char)0;
    this->request[(signed long int)1] = (char)0;
  }

  else
  {
    void *return_value_xmalloc$8;
    return_value_xmalloc$8=xmalloc((unsigned long int)(i + 2));
    this->path = (char *)return_value_xmalloc$8;
    void *return_value_xmalloc$9;
    return_value_xmalloc$9=xmalloc((unsigned long int)(j + 2));
    this->request = (char *)return_value_xmalloc$9;
    memcpy$link9((void *)this->path, (const void *)str, (unsigned long int)(i + 1));
    memcpy$link9((void *)this->request, (const void *)str, (unsigned long int)(j + 1));
    this->path[(signed long int)i] = (char)47;
    this->path[(signed long int)(i + 1)] = (char)0;
    if((signed int)this->request[(signed long int)j] == 35)
      this->request[(signed long int)j] = (char)0;

    else
      this->request[(signed long int)(j + 1)] = (char)0;
  }
  trim(this->request);
  str = str + (signed long int)(i + 1);
  return str;
}

// __url_set_port
// file url.c line 770
static char * __url_set_port(struct URL_T *this, char *str)
{
  char *portstr;
  signed int i;
  this->port=__url_default_port(this);
  i = 0;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)str[(signed long int)i]]) == 0)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  if(i == 0)
    return str;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)(i + 1));
    portstr = (char *)return_value_malloc$2;
    memcpy$link9((void *)portstr, (const void *)str, (unsigned long int)(i + 1));
    portstr[(signed long int)i] = (char)0;
    this->port=atoi$link4(portstr);
    xfree((void *)portstr);
    str = str + (signed long int)i;
    return str;
  }
}

// __url_set_query
// file url.c line 899
static char * __url_set_query(struct URL_T *this, char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  if(str == ((char *)NULL))
  {
    this->query=xstrcat("");
    return (char *)(void *)0;
  }

  else
  {
    if(!(this->query == ((char *)NULL)))
    {
      return_value_strlen$1=strlen(this->query);
      if(return_value_strlen$1 >= 2ul)
        return str;

    }

    i = 0;
    do
    {
      if(!(str[(signed long int)i] == 0))
      {
        if(!((signed int)str[(signed long int)i] == 35))
        {
          return_value___ctype_b_loc$2=__ctype_b_loc();
          tmp_if_expr$3 = !(((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)str[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$3 = (_Bool)0;
        tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      if(!tmp_if_expr$4)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    void *return_value_xmalloc$5;
    return_value_xmalloc$5=xmalloc((unsigned long int)(i + 1));
    this->query = (char *)return_value_xmalloc$5;
    memset$link14((void *)this->query, 0, (unsigned long int)(i + 1));
    memcpy$link9((void *)this->query, (const void *)str, (unsigned long int)i);
    if((signed int)str[(signed long int)i] == 35)
      str = str + (signed long int)(i + 1);

    else
      str = str + (signed long int)i;
    return str;
  }
}

// __url_set_scheme
// file url.c line 658
static char * __url_set_scheme(struct URL_T *this, char *url)
{
  signed int return_value_strncasecmp$1;
  return_value_strncasecmp$1=strncasecmp(this->url, "http:", (unsigned long int)5);
  if(return_value_strncasecmp$1 == 0)
  {
    this->scheme = (enum anonymous$3)HTTP;
    return url + (signed long int)7;
  }

  else
  {
    signed int return_value_strncasecmp$2;
    return_value_strncasecmp$2=strncasecmp(this->url, "https:", (unsigned long int)6);
    if(return_value_strncasecmp$2 == 0)
    {
      this->scheme = (enum anonymous$3)HTTPS;
      return url + (signed long int)8;
    }

    else
    {
      signed int return_value_strncasecmp$3;
      return_value_strncasecmp$3=strncasecmp(this->url, "ftp:", (unsigned long int)4);
      if(return_value_strncasecmp$3 == 0)
      {
        this->scheme = (enum anonymous$3)FTP;
        return url + (signed long int)6;
      }

      else
      {
        this->scheme = (enum anonymous$3)UNSUPPORTED;
        return url;
      }
    }
  }
}

// __url_set_username
// file url.c line 681
static char * __url_set_username(struct URL_T *this, char *str)
{
  signed int i;
  char *a;
  char *s;
  char *return_value___builtin_strchr$1;
  return_value___builtin_strchr$1=__builtin_strchr(str, 64);
  a = return_value___builtin_strchr$1;
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(str, 47);
  s = return_value___builtin_strchr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  if(a == ((char *)NULL) || a >= s && !(s == ((char *)NULL)))
    return str;

  else
  {
    i = 0;
    do
    {
      if(!(str[(signed long int)i] == 0))
        tmp_if_expr$3 = (signed int)str[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(tmp_if_expr$3)
        tmp_if_expr$4 = (signed int)str[(signed long int)i] != 64 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$4 = (_Bool)0;
      if(tmp_if_expr$4)
        tmp_if_expr$5 = (signed int)str[(signed long int)i] != 47 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      if(!tmp_if_expr$5)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    if(!((signed int)str[(signed long int)i] == 64))
    {
      if((signed int)str[(signed long int)i] == 58)
        goto __CPROVER_DUMP_L10;

      return str;
    }

    else
    {

    __CPROVER_DUMP_L10:
      ;
      void *return_value_malloc$6;
      return_value_malloc$6=malloc((unsigned long int)(i + 1));
      this->username = (char *)return_value_malloc$6;
      memcpy$link9((void *)this->username, (const void *)str, (unsigned long int)(i + 1));
      this->username[(signed long int)i] = (char)0;
      str = str + (signed long int)(i + 1);
      return str;
    }
  }
}

// add_cookie
// file cookie.c line 135
signed int add_cookie(unsigned long int id, char *host, char *cookiestr)
{
  char *name;
  char *value;
  signed int found = boolean_false;
  struct CNODE *cur;
  struct CNODE *pre;
  struct CNODE *fresh = (struct CNODE *)(void *)0;
  struct anonymous$12 ck;
  parse_cookie(cookiestr, &ck);
  name = ck.name;
  value = ck.value;
  signed int return_value_strcasecmp$1;
  if(name == ((char *)NULL) || value == ((char *)NULL))
    return -1;

  else
  {
    pthread_mutex_lock(&cookie->mutex);
    pre = cookie->first;
    cur = pre;
    for( ; !(cur == ((struct CNODE *)NULL)); cur = cur->next)
    {
      if(cur->threadID == id)
      {
        return_value_strcasecmp$1=strcasecmp(cur->name, name);
        if(return_value_strcasecmp$1 == 0)
        {
          xfree((void *)cur->value);
          cur->value=xstrdup(value);
          found = boolean_true;
          break;
        }

      }

      pre = cur;
    }
    if(found == 0)
    {
      void *return_value_xmalloc$2;
      return_value_xmalloc$2=xmalloc(sizeof(struct CNODE) /*96ul*/ );
      fresh = (struct CNODE *)return_value_xmalloc$2;
      if(fresh == ((struct CNODE *)NULL))
        NOTIFY((enum anonymous$19)FATAL, "out of memory!");

      fresh->threadID = id;
      fresh->name=xstrdup(name);
      fresh->value=xstrdup(value);
      fresh->expires = ck.expires;
      if(ck.domain == ((char *)NULL))
        fresh->domain=xstrdup(host);

      else
        fresh->domain=xstrdup(ck.domain);
      fresh->next = cur;
      if(cur == cookie->first)
        cookie->first = fresh;

      else
        pre->next = fresh;
    }

    if(!(name == ((char *)NULL)))
      xfree((void *)name);

    if(!(value == ((char *)NULL)))
      xfree((void *)value);

    pthread_mutex_unlock(&cookie->mutex);
    return 0;
  }
}

// adjust
// file date.c line 159
signed long int adjust(signed long int tvalue, signed int secs)
{
  struct tm *tp;
  signed long int ret = (signed long int)(tvalue != (signed long int)-1);
  if(!(ret == 0l))
  {
    tp=localtime(&tvalue);
    if(!(0x7fffffff + -tp->tm_sec >= secs))
      ret = (signed long int)-1;

    else
    {
      tp->tm_sec = tp->tm_sec + secs;
      ret=mktime(tp);
    }
  }

  return ret;
}

// array_destroy
// file array.c line 53
struct ARRAY_T * array_destroy(struct ARRAY_T *this)
{
  signed int i = 0;
  for( ; !(i >= this->length); i = i + 1)
    xfree(this->data[(signed long int)i]);
  xfree((void *)this->data);
  this = (struct ARRAY_T *)(void *)0;
  return this;
}

// array_get
// file array.c line 96
void * array_get(struct ARRAY_T *this, signed int index)
{
  if(!(this->length >= index))
    return (void *)0;

  else
    return this->data[(signed long int)index];
}

// array_length
// file array.c line 118
unsigned long int array_length(struct ARRAY_T *this)
{
  return (unsigned long int)this->length;
}

// array_next
// file array.c line 104
void * array_next(struct ARRAY_T *this)
{
  this->index = this->index + 1;
  return this->data[(signed long int)(this->index % this->length)];
}

// array_npush
// file array.c line 78
void array_npush(struct ARRAY_T *this, void *thing, unsigned long int len)
{
  void *arr;
  if(!(thing == NULL))
  {
    if(this->length == 0)
    {
      void *return_value_xmalloc$1;
      return_value_xmalloc$1=xmalloc(sizeof(void *) /*8ul*/ );
      this->data = (void **)return_value_xmalloc$1;
    }

    else
    {
      void *return_value_realloc$2;
      return_value_realloc$2=realloc((void *)this->data, (unsigned long int)(this->length + 1) * sizeof(void *) /*8ul*/ );
      this->data = (void **)return_value_realloc$2;
    }
    arr=xmalloc(len + (unsigned long int)1);
    memset(arr, 0, len);
    memcpy(arr, thing, len);
    this->data[(signed long int)this->length] = arr;
    this->length = this->length + 1;
    goto __CPROVER_DUMP_L4;
  }


__CPROVER_DUMP_L4:
  ;
}

// array_prev
// file array.c line 111
void * array_prev(struct ARRAY_T *this)
{
  this->index = this->index - 1;
  return this->data[(signed long int)((this->index + (this->length - 1)) % this->length)];
}

// array_push
// file array.c line 66
void array_push(struct ARRAY_T *this, void *thing)
{
  signed int len = 0;
  if(!(thing == NULL))
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen((const char *)thing);
    len = (signed int)(return_value_strlen$1 + (unsigned long int)1);
    array_npush(this, (void *)thing, (unsigned long int)len);
    goto __CPROVER_DUMP_L2;
  }


__CPROVER_DUMP_L2:
  ;
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

// atoi$link5
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link5(const char *__nptr$link5)
{
  signed long int return_value_strtol$1$link5;
  return_value_strtol$1$link5=strtol(__nptr$link5, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1$link5;
}

// auth_add
// file auth.c line 116
void auth_add(struct AUTH_T *this, struct CREDS_T *creds)
{
  array_npush(this->creds, (void *)creds, CREDSIZE);
}

// auth_destroy
// file auth.c line 108
struct AUTH_T * auth_destroy(struct AUTH_T *this)
{
  this->creds=array_destroy(this->creds);
  xfree((void *)this);
  return (struct AUTH_T *)(void *)0;
}

// auth_display
// file auth.c line 123
void auth_display(struct AUTH_T *this, enum anonymous$3 scheme)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_array_length$1;
  do
  {
    return_value_array_length$1=array_length(this->creds);
    if(i >= return_value_array_length$1)
      break;

    struct CREDS_T *tmp;
    void *return_value_array_get$2;
    return_value_array_get$2=array_get(this->creds, (signed int)i);
    tmp = (struct CREDS_T *)return_value_array_get$2;
    enum anonymous$3 return_value_creds_get_scheme$6;
    return_value_creds_get_scheme$6=creds_get_scheme(tmp);
    if(return_value_creds_get_scheme$6 == scheme)
    {
      char *return_value_creds_get_username$3;
      return_value_creds_get_username$3=creds_get_username(tmp);
      char *return_value_creds_get_password$4;
      return_value_creds_get_password$4=creds_get_password(tmp);
      char *return_value_creds_get_realm$5;
      return_value_creds_get_realm$5=creds_get_realm(tmp);
      printf("credentials:  %s:%s:%s\n", return_value_creds_get_username$3, return_value_creds_get_password$4, return_value_creds_get_realm$5);
    }

    i = i + 1ul;
  }
  while((_Bool)1);
}

// auth_get_basic_header
// file auth.c line 136
char * auth_get_basic_header(struct AUTH_T *this, enum anonymous$3 scheme)
{
  if((signed int)scheme == PROXY)
    return this->proxy.encode;

  else
    return this->basic.encode;
}

// auth_get_digest_header
// file auth.c line 173
char * auth_get_digest_header(struct AUTH_T *this, enum anonymous$3 scheme, struct DIGEST_CHLG *chlg, struct DIGEST_CRED *cred, const char *method, const char *uri)
{
  unsigned long int len;
  char *cnonce = (char *)(void *)0;
  char *nonce_count = (char *)(void *)0;
  char *qop = (char *)(void *)0;
  char *response = (char *)(void *)0;
  char *request_digest = (char *)(void *)0;
  char *h_a1 = (char *)(void *)0;
  char *h_a2 = (char *)(void *)0;
  char *opaque = (char *)(void *)0;
  char *result;
  char *tmp;
  if(!(chlg->qop == ((char *)NULL)))
  {
    nonce_count=xstrcat(", nc=", (const void *)cred->nc, (void *)0);
    cnonce=xstrcat(", cnonce=\"", cred->cnonce_value, (const void *)"\"", (void *)0);
    h_a1=__get_h_a1(chlg, cred, chlg->nonce);
    if(h_a1 == ((char *)NULL))
    {
      fprintf(stderr, "error calling __get_h_a1\n");
      return (char *)(void *)0;
    }

    enum anonymous return_value___str_list_contains$1;
    return_value___str_list_contains$1=__str_list_contains(chlg->qop, "auth", (unsigned long int)4);
    if(!(return_value___str_list_contains$1 == /*enum*/boolean_false))
    {
      qop=xstrdup(", qop=auth");
      tmp=xstrcat(method, (const void *)":", uri, (void *)0);
      h_a2=__get_md5_str(tmp);
      xfree((void *)tmp);
      tmp=xstrcat(h_a1, (const void *)":", chlg->nonce, (const void *)":", (const void *)cred->nc, (const void *)":", cred->cnonce_value, (const void *)":auth:", h_a2, (void *)0);
      request_digest=__get_md5_str(tmp);
      xfree((void *)tmp);
      response=xstrcat(", response=\"", request_digest, (const void *)"\"", (void *)0);
    }

    else
    {
      fprintf(stderr, "error quality of protection not supported: %s\n", chlg->qop);
      return (char *)(void *)0;
    }
  }

  else
  {
    h_a1=__get_h_a1(chlg, cred, "");
    if(h_a1 == ((char *)NULL))
    {
      NOTIFY((enum anonymous$19)ERROR, "__get_h_a1\n");
      return (char *)(void *)0;
    }

    tmp=xstrcat(method, (const void *)":", uri, (void *)0);
    h_a2=__get_md5_str(tmp);
    xfree((void *)tmp);
    tmp=xstrcat(h_a1, (const void *)":", chlg->nonce, (const void *)":", h_a2, (void *)0);
    request_digest=__get_md5_str(tmp);
    xfree((void *)tmp);
    response=xstrcat(" response=\"", request_digest, (const void *)"\"", (void *)0);
  }
  if(!(chlg->opaque == ((char *)NULL)))
    opaque=xstrcat(", opaque=\"", chlg->opaque, (const void *)"\"", (void *)0);

  result=xstrcat("Digest username=\"", cred->username, (const void *)"\", realm=\"", chlg->realm, (const void *)"\", nonce=\"", chlg->nonce, (const void *)"\", uri=\"", uri, (const void *)"\", algorithm=", chlg->algorithm, response, opaque != ((char *)NULL) ? opaque : "", qop != ((char *)NULL) ? qop : "", nonce_count != ((char *)NULL) ? nonce_count : "", cnonce != ((char *)NULL) ? cnonce : "", (void *)0);
  cred->nc_value = cred->nc_value + 1u;
  snprintf(cred->nc, sizeof(char [9l]) /*9ul*/ , "%.8x", cred->nc_value);
  signed int return_value_strcasecmp$2;
  return_value_strcasecmp$2=strcasecmp("MD5", chlg->algorithm);
  if(return_value_strcasecmp$2 == 0)
    xfree((void *)h_a1);

  xfree((void *)nonce_count);
  xfree((void *)cnonce);
  xfree((void *)qop);
  xfree((void *)response);
  xfree((void *)request_digest);
  xfree((void *)h_a2);
  xfree((void *)opaque);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(result);
  len = return_value_strlen$3 + (unsigned long int)32;
  if((signed int)scheme == PROXY)
  {
    void *return_value_xmalloc$4;
    return_value_xmalloc$4=xmalloc(len);
    this->proxy.encode = (char *)return_value_xmalloc$4;
    memset$link1((void *)this->proxy.encode, 0, len);
    snprintf(this->proxy.encode, len, "Proxy-Authorization: %s\r\n", result);
    xfree((void *)result);
    return this->proxy.encode;
  }

  else
  {
    void *return_value_xmalloc$5;
    return_value_xmalloc$5=xmalloc(len);
    this->digest.encode = (char *)return_value_xmalloc$5;
    memset$link1((void *)this->digest.encode, 0, len);
    snprintf(this->digest.encode, len, "Authorization: %s\r\n", result);
    xfree((void *)result);
    return this->digest.encode;
  }
}

// auth_get_ftp_password
// file auth.c line 353
char * auth_get_ftp_password(struct AUTH_T *this, char *realm)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_array_length$1;
  do
  {
    return_value_array_length$1=array_length(this->creds);
    if(i >= return_value_array_length$1)
      break;

    struct CREDS_T *auth_get_ftp_password$$1$$1$$1$$tmp;
    void *return_value_array_get$2;
    return_value_array_get$2=array_get(this->creds, (signed int)i);
    auth_get_ftp_password$$1$$1$$1$$tmp = (struct CREDS_T *)return_value_array_get$2;
    char *return_value_creds_get_realm$5;
    return_value_creds_get_realm$5=creds_get_realm(auth_get_ftp_password$$1$$1$$1$$tmp);
    enum anonymous return_value_strmatch$6;
    return_value_strmatch$6=strmatch(return_value_creds_get_realm$5, realm);
    if(!(return_value_strmatch$6 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$4;
      return_value_creds_get_scheme$4=creds_get_scheme(auth_get_ftp_password$$1$$1$$1$$tmp);
      if((signed int)return_value_creds_get_scheme$4 == FTP)
      {
        char *return_value_creds_get_password$3;
        return_value_creds_get_password$3=creds_get_password(auth_get_ftp_password$$1$$1$$1$$tmp);
        return return_value_creds_get_password$3;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  i = (unsigned long int)0;
  unsigned long int return_value_array_length$7;
  do
  {
    return_value_array_length$7=array_length(this->creds);
    if(i >= return_value_array_length$7)
      break;

    struct CREDS_T *tmp;
    void *return_value_array_get$8;
    return_value_array_get$8=array_get(this->creds, (signed int)i);
    tmp = (struct CREDS_T *)return_value_array_get$8;
    char *return_value_creds_get_realm$11;
    return_value_creds_get_realm$11=creds_get_realm(tmp);
    enum anonymous return_value_strmatch$12;
    return_value_strmatch$12=strmatch(return_value_creds_get_realm$11, "any");
    if(!(return_value_strmatch$12 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$10;
      return_value_creds_get_scheme$10=creds_get_scheme(tmp);
      if((signed int)return_value_creds_get_scheme$10 == FTP)
      {
        char *return_value_creds_get_password$9;
        return_value_creds_get_password$9=creds_get_password(tmp);
        return return_value_creds_get_password$9;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return "";
}

// auth_get_ftp_username
// file auth.c line 327
char * auth_get_ftp_username(struct AUTH_T *this, char *realm)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_array_length$1;
  do
  {
    return_value_array_length$1=array_length(this->creds);
    if(i >= return_value_array_length$1)
      break;

    struct CREDS_T *auth_get_ftp_username$$1$$1$$1$$tmp;
    void *return_value_array_get$2;
    return_value_array_get$2=array_get(this->creds, (signed int)i);
    auth_get_ftp_username$$1$$1$$1$$tmp = (struct CREDS_T *)return_value_array_get$2;
    char *return_value_creds_get_realm$5;
    return_value_creds_get_realm$5=creds_get_realm(auth_get_ftp_username$$1$$1$$1$$tmp);
    enum anonymous return_value_strmatch$6;
    return_value_strmatch$6=strmatch(return_value_creds_get_realm$5, realm);
    if(!(return_value_strmatch$6 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$4;
      return_value_creds_get_scheme$4=creds_get_scheme(auth_get_ftp_username$$1$$1$$1$$tmp);
      if((signed int)return_value_creds_get_scheme$4 == FTP)
      {
        char *return_value_creds_get_username$3;
        return_value_creds_get_username$3=creds_get_username(auth_get_ftp_username$$1$$1$$1$$tmp);
        return return_value_creds_get_username$3;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  i = (unsigned long int)0;
  unsigned long int return_value_array_length$7;
  do
  {
    return_value_array_length$7=array_length(this->creds);
    if(i >= return_value_array_length$7)
      break;

    struct CREDS_T *tmp;
    void *return_value_array_get$8;
    return_value_array_get$8=array_get(this->creds, (signed int)i);
    tmp = (struct CREDS_T *)return_value_array_get$8;
    char *return_value_creds_get_realm$11;
    return_value_creds_get_realm$11=creds_get_realm(tmp);
    enum anonymous return_value_strmatch$12;
    return_value_strmatch$12=strmatch(return_value_creds_get_realm$11, "any");
    if(!(return_value_strmatch$12 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$10;
      return_value_creds_get_scheme$10=creds_get_scheme(tmp);
      if((signed int)return_value_creds_get_scheme$10 == FTP)
      {
        char *return_value_creds_get_username$9;
        return_value_creds_get_username$9=creds_get_username(tmp);
        return return_value_creds_get_username$9;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return "";
}

// auth_get_proxy_host
// file auth.c line 296
char * auth_get_proxy_host(struct AUTH_T *this)
{
  return this->proxy.hostname;
}

// auth_get_proxy_port
// file auth.c line 302
signed int auth_get_proxy_port(struct AUTH_T *this)
{
  return this->proxy.port;
}

// auth_get_proxy_required
// file auth.c line 290
enum anonymous auth_get_proxy_required(struct AUTH_T *this)
{
  return this->proxy.required;
}

// auth_set_basic_header
// file auth.c line 146
enum anonymous auth_set_basic_header(struct AUTH_T *this, enum anonymous$3 scheme, char *realm)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_array_length$1;
  enum anonymous$3 return_value_creds_get_scheme$5;
  do
  {
    return_value_array_length$1=array_length(this->creds);
    if(i >= return_value_array_length$1)
      break;

    struct CREDS_T *tmp;
    void *return_value_array_get$2;
    return_value_array_get$2=array_get(this->creds, (signed int)i);
    tmp = (struct CREDS_T *)return_value_array_get$2;
    char *return_value_creds_get_realm$7;
    return_value_creds_get_realm$7=creds_get_realm(tmp);
    enum anonymous return_value_strmatch$8;
    return_value_strmatch$8=strmatch(return_value_creds_get_realm$7, realm);
    if(!(return_value_strmatch$8 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$4;
      return_value_creds_get_scheme$4=creds_get_scheme(tmp);
      _Bool tmp_if_expr$6;
      if((signed int)return_value_creds_get_scheme$4 == HTTP)
        tmp_if_expr$6 = (_Bool)1;

      else
      {
        return_value_creds_get_scheme$5=creds_get_scheme(tmp);
        tmp_if_expr$6 = (signed int)return_value_creds_get_scheme$5 == HTTPS ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$6)
      {
        enum anonymous return_value___basic_header$3;
        return_value___basic_header$3=__basic_header(this, scheme, tmp);
        return return_value___basic_header$3;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  i = (unsigned long int)0;
  unsigned long int return_value_array_length$9;
  enum anonymous$3 return_value_creds_get_scheme$13;
  do
  {
    return_value_array_length$9=array_length(this->creds);
    if(i >= return_value_array_length$9)
      break;

    struct CREDS_T *auth_set_basic_header$$1$$2$$1$$tmp;
    void *return_value_array_get$10;
    return_value_array_get$10=array_get(this->creds, (signed int)i);
    auth_set_basic_header$$1$$2$$1$$tmp = (struct CREDS_T *)return_value_array_get$10;
    char *return_value_creds_get_realm$15;
    return_value_creds_get_realm$15=creds_get_realm(auth_set_basic_header$$1$$2$$1$$tmp);
    enum anonymous return_value_strmatch$16;
    return_value_strmatch$16=strmatch(return_value_creds_get_realm$15, "any");
    if(!(return_value_strmatch$16 == /*enum*/boolean_false))
    {
      enum anonymous$3 return_value_creds_get_scheme$12;
      return_value_creds_get_scheme$12=creds_get_scheme(auth_set_basic_header$$1$$2$$1$$tmp);
      _Bool tmp_if_expr$14;
      if((signed int)return_value_creds_get_scheme$12 == HTTP)
        tmp_if_expr$14 = (_Bool)1;

      else
      {
        return_value_creds_get_scheme$13=creds_get_scheme(auth_set_basic_header$$1$$2$$1$$tmp);
        tmp_if_expr$14 = (signed int)return_value_creds_get_scheme$13 == HTTPS ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$14)
      {
        enum anonymous return_value___basic_header$11;
        return_value___basic_header$11=__basic_header(this, scheme, auth_set_basic_header$$1$$2$$1$$tmp);
        return return_value___basic_header$11;
      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return (enum anonymous)boolean_false;
}

// auth_set_digest_header
// file auth.c line 263
enum anonymous auth_set_digest_header(struct AUTH_T *this, struct DIGEST_CHLG **chlg, struct DIGEST_CRED **cred, unsigned long int *rand, char *realm, char *str)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_array_length$1;
  do
  {
    return_value_array_length$1=array_length(this->creds);
    if(i >= return_value_array_length$1)
      break;

    struct CREDS_T *tmp;
    void *return_value_array_get$2;
    return_value_array_get$2=array_get(this->creds, (signed int)i);
    tmp = (struct CREDS_T *)return_value_array_get$2;
    char *return_value_creds_get_realm$4;
    return_value_creds_get_realm$4=creds_get_realm(tmp);
    enum anonymous return_value_strmatch$5;
    return_value_strmatch$5=strmatch(return_value_creds_get_realm$4, realm);
    if(!(return_value_strmatch$5 == /*enum*/boolean_false))
    {
      *chlg=__digest_challenge(str);
      *cred=__digest_credentials(tmp, rand);
      _Bool tmp_if_expr$3;
      if(*cred == ((struct DIGEST_CRED *)NULL))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = *chlg == (struct DIGEST_CHLG *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
        return (enum anonymous)boolean_false;

      return (enum anonymous)boolean_true;
    }

    i = i + 1ul;
  }
  while((_Bool)1);
  i = (unsigned long int)0;
  unsigned long int return_value_array_length$6;
  do
  {
    return_value_array_length$6=array_length(this->creds);
    if(i >= return_value_array_length$6)
      break;

    struct CREDS_T *auth_set_digest_header$$1$$2$$1$$tmp;
    void *return_value_array_get$7;
    return_value_array_get$7=array_get(this->creds, (signed int)i);
    auth_set_digest_header$$1$$2$$1$$tmp = (struct CREDS_T *)return_value_array_get$7;
    char *return_value_creds_get_realm$9;
    return_value_creds_get_realm$9=creds_get_realm(auth_set_digest_header$$1$$2$$1$$tmp);
    enum anonymous return_value_strmatch$10;
    return_value_strmatch$10=strmatch(return_value_creds_get_realm$9, "any");
    if(!(return_value_strmatch$10 == /*enum*/boolean_false))
    {
      *chlg=__digest_challenge(str);
      *cred=__digest_credentials(auth_set_digest_header$$1$$2$$1$$tmp, rand);
      _Bool tmp_if_expr$8;
      if(*cred == ((struct DIGEST_CRED *)NULL))
        tmp_if_expr$8 = (_Bool)1;

      else
        tmp_if_expr$8 = *chlg == (struct DIGEST_CHLG *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$8)
        return (enum anonymous)boolean_false;

      return (enum anonymous)boolean_true;
    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return (enum anonymous)boolean_false;
}

// auth_set_proxy_host
// file auth.c line 314
void auth_set_proxy_host(struct AUTH_T *this, char *host)
{
  this->proxy.hostname=xstrdup(host);
  this->proxy.required = (enum anonymous)boolean_true;
}

// auth_set_proxy_port
// file auth.c line 321
void auth_set_proxy_port(struct AUTH_T *this, signed int port)
{
  this->proxy.port = port;
}

// auth_set_proxy_required
// file auth.c line 308
void auth_set_proxy_required(struct AUTH_T *this, enum anonymous required)
{
  this->proxy.required = required;
}

// base64_decode
// file base64.c line 96
signed int base64_decode(const char *str, void *data)
{
  const char *p;
  unsigned char *q;
  signed int c;
  signed int x;
  signed int done = 0;
  q = (unsigned char *)data;
  p = str;
  for( ; done == 0 && !(*p == 0); p = p + (signed long int)4)
  {
    x=pos(p[(signed long int)0]);
    if(x >= 0)
      c = x;

    else
    {
      done = 3;
      break;
    }
    c = c * 64;
    x=pos(p[(signed long int)1]);
    if(x >= 0)
      c = c + x;

    else
      return -1;
    c = c * 64;
    if((signed int)p[2l] == 61)
      done = done + 1;

    else
    {
      x=pos(p[(signed long int)2]);
      if(x >= 0)
        c = c + x;

      else
        return -1;
    }
    c = c * 64;
    if((signed int)p[3l] == 61)
      done = done + 1;

    else
    {
      if(!(done == 0))
        return -1;

      x=pos(p[(signed long int)3]);
      if(x >= 0)
        c = c + x;

      else
        return -1;
    }
    if(!(done >= 3))
    {
      unsigned char *tmp_post$1 = q;
      q = q + 1l;
      *tmp_post$1 = (unsigned char)((c & 0x00ff0000) >> 16);
    }

    if(!(done >= 2))
    {
      unsigned char *tmp_post$2 = q;
      q = q + 1l;
      *tmp_post$2 = (unsigned char)((c & 0x0000ff00) >> 8);
    }

    if(!(done >= 1))
    {
      unsigned char *tmp_post$3 = q;
      q = q + 1l;
      *tmp_post$3 = (unsigned char)((c & 0x000000ff) >> 0);
    }

  }
  return (signed int)(q - (unsigned char *)data);
}

// base64_encode
// file ./base64.h line 37
signed int base64_encode(const void *data, signed int size, char **str)
{
  char *s;
  char *p;
  signed int i;
  signed int c;
  const unsigned char *q;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)((size * 4) / 3 + 4));
  s = (char *)return_value_malloc$1;
  p = s;
  if(p == ((char *)NULL))
    return -1;

  else
  {
    q = (const unsigned char *)data;
    i = 0;
    i = 0;
    for( ; !(i >= size); p = p + (signed long int)4)
    {
      signed int tmp_post$2 = i;
      i = i + 1;
      c = (signed int)q[(signed long int)tmp_post$2];
      c = c * 256;
      if(!(i >= size))
        c = c + (signed int)q[(signed long int)i];

      i = i + 1;
      c = c * 256;
      if(!(i >= size))
        c = c + (signed int)q[(signed long int)i];

      i = i + 1;
      p[(signed long int)0] = base64[(signed long int)((c & 0x00fc0000) >> 18)];
      p[(signed long int)1] = base64[(signed long int)((c & 0x0003f000) >> 12)];
      p[(signed long int)2] = base64[(signed long int)((c & 0x00000fc0) >> 6)];
      p[(signed long int)3] = base64[(signed long int)((c & 0x0000003f) >> 0)];
      if(!(size >= i))
        p[(signed long int)3] = (char)61;

      if(!(1 + size >= i))
        p[(signed long int)2] = (char)61;

    }
    *p = (char)0;
    *str = s;
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(s);
    return (signed int)return_value_strlen$3;
  }
}

// checkday
// file date.c line 180
static signed int checkday(char *check, unsigned long int len)
{
  signed int i;
  const char * const *what;
  enum anonymous found = (enum anonymous)boolean_false;
  if(len >= 4ul)
    what = &weekday[(signed long int)0];

  else
    what = &wday[(signed long int)0];
  i = 0;
  for( ; !(i >= 7); i = i + 1)
  {
    enum anonymous return_value_strmatch$1;
    return_value_strmatch$1=strmatch(check, (char *)what[(signed long int)0]);
    if(!(return_value_strmatch$1 == /*enum*/boolean_false))
    {
      found = (enum anonymous)boolean_true;
      break;
    }

    what = what + 1l;
  }
  return found != (enum anonymous)0 ? i : -1;
}

// checkmonth
// file date.c line 203
static signed int checkmonth(char *check)
{
  signed int i;
  const char * const *what;
  enum anonymous found = (enum anonymous)boolean_false;
  what = &month[(signed long int)0];
  i = 0;
  for( ; !(i >= 12); i = i + 1)
  {
    enum anonymous return_value_strmatch$1;
    return_value_strmatch$1=strmatch(check, (char *)what[(signed long int)0]);
    if(!(return_value_strmatch$1 == /*enum*/boolean_false))
    {
      found = (enum anonymous)boolean_true;
      break;
    }

    what = what + 1l;
  }
  return found != (enum anonymous)0 ? i : -1;
}

// checktz
// file date.c line 224
static signed int checktz(char *check)
{
  unsigned int i;
  struct tzinfo *what;
  enum anonymous found = (enum anonymous)boolean_false;
  what = tz;
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 43ul); i = i + 1u)
  {
    enum anonymous return_value_strmatch$1;
    return_value_strmatch$1=strmatch(check, (char *)what->name);
    if(!(return_value_strmatch$1 == /*enum*/boolean_false))
    {
      found = (enum anonymous)boolean_true;
      break;
    }

    what = what + 1l;
  }
  signed int tmp_if_expr$2;
  if(!(found == /*enum*/boolean_false))
    tmp_if_expr$2 = what->offset * 60;

  else
    tmp_if_expr$2 = -1;
  return tmp_if_expr$2;
}

// chomp
// file ../include/joedog/joedog.h line 103
char * chomp(char *str)
{
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$1;
  if(!(*str == 0))
  {
    return_value_strlen$2=strlen(str);
    if((signed int)str[-1l + (signed long int)return_value_strlen$2] == 10)
    {
      return_value_strlen$1=strlen(str);
      str[(signed long int)(return_value_strlen$1 - (unsigned long int)1)] = (char)0;
    }

  }

  return str;
}

// chomp_line
// file init.c line 222
static char * chomp_line(struct _IO_FILE *fp, char **mystr, signed int *line_num)
{
  char *ptr;
  while((_Bool)1)
  {
    *mystr=get_line(fp);
    if(*mystr == ((char *)NULL))
      return (char *)(void *)0;

    *line_num = *line_num + 1;
    ptr=chomp(*mystr);
    _Bool tmp_if_expr$1;
    if(!((signed int)*ptr == 35))
      tmp_if_expr$1 = (signed int)*ptr != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      return ptr;

    else
      xfree((void *)ptr);
  }
}

// clean_up
// file client.c line 615
void clean_up()
{
  ;
}

// create_logfile
// file log.c line 168
enum anonymous create_logfile(const char *file)
{
  signed int fd;
  char *head = (char *)"      Date & Time,  Trans,  Elap Time,  Data Trans,  Resp Time,  Trans Rate,  Throughput,  Concurrent,    OKAY,   Failed\n";
  fd=open(file, 0100 | 01, 0644);
  if(!(fd >= 0))
    return (enum anonymous)boolean_false;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(head);
    write(fd, (const void *)head, return_value_strlen$1);
    close(fd);
    return (enum anonymous)boolean_true;
  }
}

// creds_destroy
// file creds.c line 54
struct CREDS_T * creds_destroy(struct CREDS_T *this)
{
  free((void *)this->username);
  free((void *)this->password);
  free((void *)this->realm);
  free((void *)this);
  return (struct CREDS_T *)(void *)0;
}

// creds_get_password
// file ./creds.h line 35
char * creds_get_password(struct CREDS_T *this)
{
  return this->password;
}

// creds_get_realm
// file ./creds.h line 36
char * creds_get_realm(struct CREDS_T *this)
{
  return this->realm;
}

// creds_get_scheme
// file ./creds.h line 33
enum anonymous$3 creds_get_scheme(struct CREDS_T *this)
{
  return this->scheme;
}

// creds_get_username
// file ./creds.h line 34
char * creds_get_username(struct CREDS_T *this)
{
  return this->username;
}

// creds_set_password
// file creds.c line 99
void creds_set_password(struct CREDS_T *this, char *password)
{
  unsigned long int len;
  len=strlen(password);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  this->password = (char *)return_value_malloc$1;
  memset$link5((void *)this->password, 0, len + (unsigned long int)1);
  memcpy$link3((void *)this->password, (const void *)password, len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// creds_set_realm
// file creds.c line 110
void creds_set_realm(struct CREDS_T *this, char *realm)
{
  unsigned long int len;
  len=strlen(realm);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  this->realm = (char *)return_value_malloc$1;
  memset$link5((void *)this->realm, 0, len + (unsigned long int)1);
  memcpy$link3((void *)this->realm, (const void *)realm, len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// creds_set_username
// file creds.c line 88
void creds_set_username(struct CREDS_T *this, char *username)
{
  unsigned long int len;
  len=strlen(username);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  this->username = (char *)return_value_malloc$1;
  memset$link5((void *)this->username, 0, len + (unsigned long int)1);
  memcpy$link3((void *)this->username, (const void *)username, len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// crew_add
// file crew.c line 143
enum anonymous crew_add(struct CREW_T *crew, void (*routine)(), void *arg)
{
  signed int c;
  struct work *workptr;
  c=pthread_mutex_lock(&crew->lock);
  if(!(c == 0))
    NOTIFY((enum anonymous$19)FATAL, "pthread lock");

  if(crew->cursize == crew->maxsize)
  {
    if(crew->block != /*enum*/boolean_false)
      goto __CPROVER_DUMP_L3;

    c=pthread_mutex_unlock(&crew->lock);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread unlock");

    return (enum anonymous)boolean_false;
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    while(crew->cursize == crew->maxsize)
    {
      if(crew->shutdown != /*enum*/boolean_false)
        break;

      if(crew->closed != /*enum*/boolean_false)
        break;

      c=pthread_cond_wait(&crew->not_full, &crew->lock);
      if(!(c == 0))
        NOTIFY((enum anonymous$19)FATAL, "pthread wait");

    }
    _Bool tmp_if_expr$1;
    if(!(crew->shutdown == /*enum*/boolean_false))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = crew->closed != (enum anonymous)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      c=pthread_mutex_unlock(&crew->lock);
      if(!(c == 0))
        NOTIFY((enum anonymous$19)FATAL, "pthread unlock");

      return (enum anonymous)boolean_false;
    }

    else
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct work) /*24ul*/ );
      workptr = (struct work *)return_value_malloc$2;
      if(workptr == ((struct work *)NULL))
        NOTIFY((enum anonymous$19)FATAL, "out of memory");

      workptr->routine = routine;
      workptr->arg = arg;
      workptr->next = (struct work *)(void *)0;
      if(crew->cursize == 0)
      {
        crew->head = workptr;
        crew->tail = crew->head;
        c=pthread_cond_broadcast(&crew->not_empty);
        if(!(c == 0))
          NOTIFY((enum anonymous$19)FATAL, "pthread signal");

      }

      else
      {
        crew->tail->next = workptr;
        crew->tail = workptr;
      }
      crew->cursize = crew->cursize + 1;
      crew->total = crew->total + 1;
      c=pthread_mutex_unlock(&crew->lock);
      if(!(c == 0))
        NOTIFY((enum anonymous$19)FATAL, "pthread unlock");

      return (enum anonymous)boolean_true;
    }
  }
}

// crew_cancel
// file crew.c line 196
enum anonymous crew_cancel(struct CREW_T *this)
{
  signed int x;
  signed int size = this->size;
  crew_set_shutdown(this, (enum anonymous)boolean_true);
  x = 0;
  for( ; !(x >= size); x = x + 1)
    pthread_cancel(this->threads[(signed long int)x]);
  return (enum anonymous)boolean_true;
}

// crew_destroy
// file crew.c line 281
void crew_destroy(struct CREW_T *crew)
{
  struct work *workptr;
  xfree((void *)crew->threads);
  while(!(crew->head == ((struct work *)NULL)))
  {
    workptr = crew->head;
    crew->head = crew->head->next;
    xfree((void *)workptr);
  }
  xfree((void *)crew);
}

// crew_get_shutdown
// file crew.c line 323
enum anonymous crew_get_shutdown(struct CREW_T *this)
{
  return this->shutdown;
}

// crew_get_size
// file crew.c line 311
signed int crew_get_size(struct CREW_T *this)
{
  return this->size;
}

// crew_get_total
// file crew.c line 317
signed int crew_get_total(struct CREW_T *this)
{
  return this->total;
}

// crew_join
// file crew.c line 218
enum anonymous crew_join(struct CREW_T *crew, enum anonymous finish, void **payload)
{
  signed int x;
  signed int c;
  c=pthread_mutex_lock(&crew->lock);
  if(!(c == 0))
    NOTIFY((enum anonymous$19)FATAL, "pthread lock");

  _Bool tmp_if_expr$1;
  if(!(crew->closed == /*enum*/boolean_false))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = crew->shutdown != (enum anonymous)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    c=pthread_mutex_unlock(&crew->lock);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread unlock");

    return (enum anonymous)boolean_false;
  }

  else
  {
    crew->closed = (enum anonymous)boolean_true;
    if((signed int)finish == boolean_true)
      while(!(crew->cursize == 0))
      {
        if(crew->shutdown != /*enum*/boolean_false)
          break;

        signed int rc;
        struct timespec ts;
        struct timeval tp;
        rc=gettimeofday(&tp, (struct timezone *)(void *)0);
        if(!(rc == 0))
          perror("gettimeofday");

        ts.tv_sec = tp.tv_sec + (signed long int)60;
        ts.tv_nsec = tp.tv_usec * (signed long int)1000;
        rc=pthread_cond_timedwait(&crew->empty, &crew->lock, &ts);
        if(rc == 110)
          pthread_mutex_unlock(&crew->lock);

        if(!(rc == 0))
          NOTIFY((enum anonymous$19)FATAL, "pthread wait");

      }

    crew->shutdown = (enum anonymous)boolean_true;
    c=pthread_mutex_unlock(&crew->lock);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread_mutex_unlock");

    c=pthread_cond_broadcast(&crew->not_empty);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread broadcast");

    c=pthread_cond_broadcast(&crew->not_full);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread broadcast");

    x = 0;
    for( ; !(x >= crew->size); x = x + 1)
    {
      c=pthread_join(crew->threads[(signed long int)x], payload);
      if(!(c == 0))
        NOTIFY((enum anonymous$19)FATAL, "pthread_join");

    }
    return (enum anonymous)boolean_true;
  }
}

// crew_set_shutdown
// file crew.c line 298
void crew_set_shutdown(struct CREW_T *this, enum anonymous shutdown)
{
  this->shutdown = shutdown;
  pthread_cond_broadcast(&this->not_empty);
  pthread_cond_broadcast(&this->not_full);
  pthread_cond_broadcast(&this->empty);
}

// crew_thread
// file crew.c line 91
static void * crew_thread(void *crew)
{
  signed int c;
  struct work *workptr;
  struct CREW_T *this = (struct CREW_T *)crew;
  c=pthread_mutex_lock(&this->lock);
  if(!(c == 0))
    NOTIFY((enum anonymous$19)FATAL, "mutex lock");

  while(this->cursize == 0)
  {
    if(this->shutdown != /*enum*/boolean_false)
      break;

    c=pthread_cond_wait(&this->not_empty, &this->lock);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread wait");

  }
  if((signed int)this->shutdown == boolean_true)
  {
    c=pthread_mutex_unlock(&this->lock);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "mutex unlock");

    pthread_exit((void *)0);
  }

  workptr = this->head;
  this->cursize = this->cursize - 1;
  if(this->cursize == 0)
  {
    this->tail = (struct work *)(void *)0;
    this->head = this->tail;
  }

  else
    this->head = workptr->next;
  if(!(this->block == /*enum*/boolean_false))
  {
    if(this->cursize == this->maxsize + -1)
    {
      c=pthread_cond_broadcast(&this->not_full);
      if(!(c == 0))
        NOTIFY((enum anonymous$19)FATAL, "pthread broadcast");

    }

  }

  if(this->cursize == 0)
  {
    c=pthread_cond_signal(&this->empty);
    if(!(c == 0))
      NOTIFY((enum anonymous$19)FATAL, "pthread signal");

  }

  c=pthread_mutex_unlock(&this->lock);
  if(!(c == 0))
    NOTIFY((enum anonymous$19)FATAL, "pthread unlock");

  workptr->routine(workptr->arg);
  xfree((void *)workptr);
  return (void *)0;
}

// data_destroy
// file data.c line 82
void data_destroy(struct DATA_T *this)
{
  xfree((void *)this);
}

// data_get_availability
// file data.c line 233
float data_get_availability(struct DATA_T *this)
{
  float tmp_if_expr$1;
  if(this->count == 0u)
    tmp_if_expr$1 = (float)0;

  else
    tmp_if_expr$1 = ((float)this->count / ((float)this->count + this->failed)) * (float)100;
  this->available = tmp_if_expr$1;
  return this->available;
}

// data_get_bytes
// file data.c line 193
float data_get_bytes(struct DATA_T *this)
{
  return (float)this->bytes;
}

// data_get_code
// file data.c line 169
unsigned int data_get_code(struct DATA_T *this)
{
  return this->code;
}

// data_get_concurrency
// file data.c line 264
float data_get_concurrency(struct DATA_T *this)
{
  if(IEEE_FLOAT_EQUAL(this->elapsed, 0.000000f))
    return (float)0;

  else
    return this->total / this->elapsed;
}

// data_get_count
// file data.c line 163
unsigned int data_get_count(struct DATA_T *this)
{
  return this->count;
}

// data_get_elapsed
// file data.c line 221
float data_get_elapsed(struct DATA_T *this)
{
  signed long int tps;
  signed long int data_get_elapsed$$1$$time = this->stop - this->start;
  tps=sysconf(2);
  this->elapsed = (float)data_get_elapsed$$1$$time / (float)tps;
  return this->elapsed;
}

// data_get_fail
// file data.c line 175
unsigned int data_get_fail(struct DATA_T *this)
{
  return this->fail;
}

// data_get_highest
// file data.c line 199
float data_get_highest(struct DATA_T *this)
{
  return this->highest;
}

// data_get_lowest
// file data.c line 205
float data_get_lowest(struct DATA_T *this)
{
  if(!(this->code == 0u))
    return this->lowest;

  else
    return (float)this->code;
}

// data_get_megabytes
// file data.c line 215
float data_get_megabytes(struct DATA_T *this)
{
  return (float)((double)(float)this->bytes / (1024.0 * 1024.0));
}

// data_get_ok200
// file data.c line 181
unsigned int data_get_ok200(struct DATA_T *this)
{
  return this->ok200;
}

// data_get_response_time
// file data.c line 240
float data_get_response_time(struct DATA_T *this)
{
  _Bool tmp_if_expr$1;
  if(IEEE_FLOAT_EQUAL(this->total, 0.000000f))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = this->count == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (float)0;

  else
    return this->total / (float)this->count;
}

// data_get_throughput
// file data.c line 256
float data_get_throughput(struct DATA_T *this)
{
  if(IEEE_FLOAT_EQUAL(this->elapsed, 0.000000f))
    return (float)0;

  else
    return (float)((double)this->bytes / ((double)this->elapsed * 1024.0 * 1024.0));
}

// data_get_total
// file data.c line 187
float data_get_total(struct DATA_T *this)
{
  return this->total;
}

// data_get_transaction_rate
// file data.c line 248
float data_get_transaction_rate(struct DATA_T *this)
{
  _Bool tmp_if_expr$1;
  if(this->count == 0u)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = IEEE_FLOAT_EQUAL(this->elapsed, (float)0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (float)0;

  else
    return (float)this->count / this->elapsed;
}

// data_increment_bytes
// file data.c line 89
void data_increment_bytes(struct DATA_T *this, unsigned long int bytes)
{
  this->bytes = this->bytes + bytes;
}

// data_increment_code
// file data.c line 110
void data_increment_code(struct DATA_T *this, signed int code)
{
  this->code = this->code + (unsigned int)code;
}

// data_increment_count
// file data.c line 96
void data_increment_count(struct DATA_T *this, unsigned long int count)
{
  this->count = this->count + (unsigned int)count;
}

// data_increment_fail
// file data.c line 117
void data_increment_fail(struct DATA_T *this, signed int fail)
{
  this->fail = this->fail + (unsigned int)fail;
}

// data_increment_ok200
// file data.c line 124
void data_increment_ok200(struct DATA_T *this, signed int ok200)
{
  this->ok200 = this->ok200 + (unsigned int)ok200;
}

// data_increment_total
// file data.c line 103
void data_increment_total(struct DATA_T *this, float total)
{
  this->total = this->total + total;
}

// data_set_highest
// file data.c line 145
void data_set_highest(struct DATA_T *this, float highest)
{
  if(this->highest < highest)
    this->highest = highest;

}

// data_set_lowest
// file data.c line 154
void data_set_lowest(struct DATA_T *this, float lowest)
{
  _Bool tmp_if_expr$1;
  if(this->lowest <= 0.000000f)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = this->lowest > lowest ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    this->lowest = lowest;

}

// data_set_start
// file data.c line 131
void data_set_start(struct DATA_T *this)
{
  this->start=times(&this->t_start);
}

// data_set_stop
// file data.c line 138
void data_set_stop(struct DATA_T *this)
{
  this->stop=times(&this->t_stop);
}

// debug
// file ./util.h line 36
void debug(const char *fmt, ...)
{
  char buf[256l];
  void **ap;
  if(my.quiet == /*enum*/boolean_false)
  {
    if(!(my.debug == /*enum*/boolean_false))
    {
      ap = (void **)&fmt;
      vsnprintf$link1(buf, sizeof(char [256l]) /*256ul*/ , fmt, ap);
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(buf);
      if(return_value_strlen$1 == 1ul)
        printf("%s", (const void *)buf);

      else
        NOTIFY((enum anonymous$19)DEBUG, buf);
      ap = ((void **)NULL);
    }

    goto __CPROVER_DUMP_L5;
  }


__CPROVER_DUMP_L5:
  ;
}

// decide_copy_method
// file url.c line 1009
static inline enum copy_method decide_copy_method(const char *p)
{
  signed int tmp_statement_expression$1;
  const signed int **return_value___ctype_toupper_loc$2;
  const signed int **return_value___ctype_toupper_loc$4;
  signed int tmp_statement_expression$6;
  const signed int **return_value___ctype_toupper_loc$7;
  const signed int **return_value___ctype_toupper_loc$9;
  if((signed int)*p == 37)
  {
    _Bool tmp_if_expr$12;
    if(!((((((((((((((((((((((unsigned int)p[1l] + 4294967248u & 255u) * 18u) / 17u) * 52u) / 51u) * 58u) / 114u) * 13u) / 11u) * 14u) / 13u) * 35u + 35u) / 36u) * 35u) / 33u) * 34u) / 33u) * 35u) / 170u ^ 4u) + 4294967293u & 255u ^ 1u) >= 3u))
      tmp_if_expr$12 = (((((((((((((((((((((unsigned int)p[(signed long int)2] - 48U & (unsigned int)255) * (unsigned int)18) / (unsigned int)17) * (unsigned int)52) / (unsigned int)51) * (unsigned int)58) / (unsigned int)114) * (unsigned int)13) / (unsigned int)11) * (unsigned int)14) / (unsigned int)13) * (unsigned int)35 + (unsigned int)35) / (unsigned int)36) * (unsigned int)35) / (unsigned int)33) * (unsigned int)34) / (unsigned int)33) * (unsigned int)35) / (unsigned int)170 ^ (unsigned int)4) - (unsigned int)3 & (unsigned int)255 ^ (unsigned int)1) <= 2U ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$12 = (_Bool)0;
    if(tmp_if_expr$12)
    {
      char preempt;
      signed int tmp_if_expr$5;
      if(!((signed int)p[1l] >= 65))
        tmp_if_expr$5 = (signed int)p[(signed long int)1] - 48;

      else
      {
        signed int __res;
        return_value___ctype_toupper_loc$4=__ctype_toupper_loc();
        __res = (*return_value___ctype_toupper_loc$4)[(signed long int)(signed int)p[(signed long int)1]];
        tmp_statement_expression$1 = __res;
        tmp_if_expr$5 = (tmp_statement_expression$1 - 65) + 10;
      }
      signed int tmp_if_expr$10;
      if(!((signed int)p[2l] >= 65))
        tmp_if_expr$10 = (signed int)p[(signed long int)2] - 48;

      else
      {
        signed int decide_copy_method$$1$$1$$1$$2$$__res;
        return_value___ctype_toupper_loc$9=__ctype_toupper_loc();
        decide_copy_method$$1$$1$$1$$2$$__res = (*return_value___ctype_toupper_loc$9)[(signed long int)(signed int)p[(signed long int)2]];
        tmp_statement_expression$6 = decide_copy_method$$1$$1$$1$$2$$__res;
        tmp_if_expr$10 = (tmp_statement_expression$6 - 65) + 10;
      }
      preempt = (char)((tmp_if_expr$5 << 4) + tmp_if_expr$10);
      _Bool tmp_if_expr$11;
      if(!((2 & (signed int)urlchr_table[(signed long int)(unsigned char)preempt]) == 0))
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = ((signed int)urlchr_table[(signed long int)(unsigned char)preempt] & 1) != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$11)
        return (enum copy_method)CM_PASSTHROUGH;

      else
        return (enum copy_method)CM_DECODE;
    }

    else
      return (enum copy_method)CM_ENCODE;
  }

  else
  {
    _Bool tmp_if_expr$13;
    if(!((2 & (signed int)urlchr_table[(signed long int)(unsigned char)*p]) == 0))
      tmp_if_expr$13 = !(((signed int)urlchr_table[(signed long int)(unsigned char)*p] & 1) != 0) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$13 = (_Bool)0;
    if(tmp_if_expr$13)
      return (enum copy_method)CM_ENCODE;

    else
      return (enum copy_method)CM_PASSTHROUGH;
  }
}

// delete_all_cookies
// file ./cookie.h line 62
signed int delete_all_cookies(unsigned long int id)
{
  struct CNODE *cur;
  struct CNODE *pre;
  pthread_mutex_lock(&cookie->mutex);
  pre = (struct CNODE *)(void *)0;
  cur = cookie->first;
  for( ; !(cur == ((struct CNODE *)NULL)); cur = cur->next)
  {
    if(cur->threadID == id)
    {
      echo("%s:%d cookie deleted: %ld => %s\n", (const void *)"cookie.c", 238, (signed long int)id, cur->name);
      if(cur == cookie->first)
      {
        cookie->first = cur->next;
        pre = cookie->first;
      }

      else
        pre->next = cur->next;
      xfree((void *)cur->name);
      xfree((void *)cur->value);
      xfree((void *)cur->domain);
      xfree((void *)cur);
      cur = pre;
      if(cur == ((struct CNODE *)NULL))
        break;

    }

    pre = cur;
  }
  pthread_mutex_unlock(&cookie->mutex);
  return 0;
}

// delete_cookie
// file cookie.c line 195
enum anonymous delete_cookie(unsigned long int id, char *name)
{
  struct CNODE *cur;
  struct CNODE *pre;
  enum anonymous res = (enum anonymous)boolean_false;
  pre = cookie->first;
  cur = pre;
  for( ; !(cur == ((struct CNODE *)NULL)); cur = cur->next)
  {
    if(cur->threadID == id)
    {
      signed int return_value_strcasecmp$1;
      return_value_strcasecmp$1=strcasecmp(cur->name, name);
      if(return_value_strcasecmp$1 == 0)
      {
        pre->next = cur->next;
        if(cur == cookie->first)
        {
          cookie->first = cur->next;
          pre = cookie->first;
        }

        else
          pre->next = cur->next;
        res = (enum anonymous)boolean_true;
        echo("%s:%d cookie deleted: %ld => %s\n", (const void *)"cookie.c", 215, (signed long int)id, name);
        break;
      }

    }

    pre = cur;
  }
  return res;
}

// display_cookies
// file cookie.c line 329
void display_cookies()
{
  struct CNODE *cur;
  pthread_mutex_lock(&cookie->mutex);
  printf("Linked list contains:\n");
  cur = cookie->first;
  for( ; !(cur == ((struct CNODE *)NULL)); cur = cur->next)
    printf("Index: %ld\tName: %s Value: %s\n", (signed long int)cur->threadID, cur->name, cur->value);
  pthread_mutex_unlock(&cookie->mutex);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// display_help
// file ./setup.h line 143
void display_help()
{
  display_version((enum anonymous)boolean_false);
  printf("Usage: %s [options]\n", program_name);
  printf("       %s [options] URL\n", program_name);
  printf("       %s -g URL\n", program_name);
  printf("Options:\n");
  puts("  -V, --version             VERSION, prints the version number.");
  puts("  -h, --help                HELP, prints this section.");
  puts("  -C, --config              CONFIGURATION, show the current config.");
  puts("  -v, --verbose             VERBOSE, prints notification to screen.");
  puts("  -q, --quiet               QUIET turns verbose off and suppresses output.");
  puts("  -g, --get                 GET, pull down HTTP headers and display the");
  puts("                            transaction. Great for application debugging.");
  puts("  -c, --concurrent=NUM      CONCURRENT users, default is 10");
  puts("  -i, --internet            INTERNET user simulation, hits URLs randomly.");
  puts("  -b, --benchmark           BENCHMARK: no delays between requests.");
  puts("  -t, --time=NUMm           TIMED testing where \"m\" is modifier S, M, or H");
  puts("                            ex: --time=1H, one hour test.");
  puts("  -r, --reps=NUM            REPS, number of times to run the test.");
  puts("  -f, --file=FILE           FILE, select a specific URLS FILE.");
  printf("  -R, --rc=FILE             RC, specify an %src file\n", program_name);
  puts("  -l, --log[=FILE]          LOG to FILE. If FILE is not specified, the");
  printf("                            default is used: /var/%s.log\n", program_name);
  puts("  -m, --mark=\"text\"         MARK, mark the log file with a string.");
  puts("  -d, --delay=NUM           Time DELAY, random delay before each requst");
  puts("                            between 1 and NUM. (NOT COUNTED IN STATS)");
  puts("  -H, --header=\"text\"       Add a header to request (can be many)");
  puts("  -A, --user-agent=\"text\"   Sets User-Agent in request");
  puts("  -T, --content-type=\"text\" Sets Content-Type in request");
  puts("");
  puts(copyright);
  exit(0);
}

// display_version
// file main.c line 92
void display_version(enum anonymous b)
{
  char name[128l];
  memset$link12((void *)name, 0, sizeof(char [128l]) /*128ul*/ );
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(program_name);
  strncpy$link5(name, program_name, return_value_strlen$1);
  if(!(my.debug == /*enum*/boolean_false))
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(name);
    char *return_value_uppercase$3;
    return_value_uppercase$3=uppercase(name, return_value_strlen$2);
    fprintf$link4(stderr, "%s %s: debugging enabled\n\n%s\n", return_value_uppercase$3, version_string, copyright);
  }

  else
    if((signed int)b == boolean_true)
    {
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(name);
      char *return_value_uppercase$5;
      return_value_uppercase$5=uppercase(name, return_value_strlen$4);
      fprintf$link4(stderr, "%s %s\n\n%s\n", return_value_uppercase$5, version_string, copyright);
      exit(0);
    }

    else
    {
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(name);
      char *return_value_uppercase$7;
      return_value_uppercase$7=uppercase(name, return_value_strlen$6);
      fprintf$link4(stderr, "%s %s\n", return_value_uppercase$7, version_string);
    }
}

// ds_module_check
// file init.c line 546
void ds_module_check(void)
{
  if(!(my.bench == /*enum*/boolean_false))
    my.delay = 0;

  if(my.reps >= 1 && my.secs >= 1 && !(my.reps == 10301062))
  {
    NOTIFY((enum anonymous$19)ERROR, "CONFIG conflict: selected time and repetition based testing");
    fprintf$link3(stderr, "defaulting to time-based testing: %d seconds\n", my.secs);
    my.reps = 10301062;
  }

  if(!(my.cusers >= 1))
    my.cusers = 1;

  if(!(my.get == /*enum*/boolean_false))
  {
    my.cusers = 1;
    my.reps = 1;
    my.logging = (enum anonymous)boolean_false;
    my.bench = (enum anonymous)boolean_true;
  }

  if(!(my.quiet == /*enum*/boolean_false))
  {
    my.verbose = (enum anonymous)boolean_false;
    my.debug = (enum anonymous)boolean_false;
  }

}

// echo
// file ./util.h line 35
void echo(const char *fmt, ...)
{
  char buf[256l];
  void **ap;
  if(my.quiet == /*enum*/boolean_false)
  {
    if(!(my.get == /*enum*/boolean_false))
    {
      ap = (void **)&fmt;
      vsnprintf$link1(buf, sizeof(char [256l]) /*256ul*/ , fmt, ap);
      printf("%s", (const void *)buf);
      ap = ((void **)NULL);
      fflush(stdout);
    }

    else
    {
      if(!(my.debug == /*enum*/boolean_false))
      {
        ap = (void **)&fmt;
        vsnprintf$link1(buf, sizeof(char [256l]) /*256ul*/ , fmt, ap);
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen(buf);
        if(return_value_strlen$1 == 1ul)
          printf("%s", (const void *)buf);

        else
          NOTIFY((enum anonymous$19)DEBUG, buf);
        ap = ((void **)NULL);
      }

      goto __CPROVER_DUMP_L6;
    }
  }


__CPROVER_DUMP_L6:
  ;
}

// elapsed_time
// file ../include/joedog/joedog.h line 70
float elapsed_time(signed long int time)
{
  signed long int tps;
  tps=sysconf(2);
  return (float)time / (float)tps;
}

// empty
// file ../include/joedog/joedog.h line 138
signed int empty(const char *s)
{
  const unsigned short int **return_value___ctype_b_loc$2;
  if(s == ((const char *)NULL))
    return 1;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(s);
    if(!(return_value_strlen$1 >= 1ul))
      return 1;

    else
    {
      do
      {
        return_value___ctype_b_loc$2=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*s]) == 0)
          break;

        s = s + 1l;
      }
      while((_Bool)1);
      return (signed int)((signed int)*s == 0);
    }
  }
}

// evaluate
// file ./eval.h line 31
char * evaluate(struct HASH_T *hash_table, char *buf)
{
  signed int x = 0;
  signed int ENV = 0;
  signed int len = 0;
  char final[40000l];
  char *ptr;
  char *string;
  const char *scan;
  char *result;
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc((void *)buf, (unsigned long int)40000 * sizeof(char) /*1ul*/ );
  result = (char *)return_value_xrealloc$1;
  if(!(result == ((char *)NULL)))
    buf = result;

  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(buf, 36);
  scan = return_value___builtin_strchr$2 + (signed long int)1;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(buf);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(scan);
  len = (signed int)((return_value_strlen$3 - return_value_strlen$4) - (unsigned long int)1);
  _Bool tmp_if_expr$5;
  if((signed int)*scan == 123)
    tmp_if_expr$5 = (_Bool)1;

  else
    tmp_if_expr$5 = (signed int)scan[(signed long int)0] == 40 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$5)
    scan = scan + 1l;

  ptr = (char *)scan;
  for( ; !(*scan == 0); x = x + 1)
  {
    if((signed int)*scan == 125)
      break;

    if((signed int)*scan == 41)
      break;

    if((signed int)*scan == 47)
      break;

    scan = scan + 1l;
  }
  _Bool tmp_if_expr$6;
  if((signed int)*scan == 125)
    tmp_if_expr$6 = (_Bool)1;

  else
    tmp_if_expr$6 = (signed int)scan[(signed long int)0] == 41 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$6)
    scan = scan + 1l;

  string=substring(ptr, 0, x);
  enum anonymous return_value_hash_lookup$8;
  return_value_hash_lookup$8=hash_lookup(hash_table, string);
  if((signed int)return_value_hash_lookup$8 == 0)
  {
    char *return_value_getenv$7;
    return_value_getenv$7=getenv(string);
    if(!(return_value_getenv$7 == ((char *)NULL)))
      ENV = 1;

    else
      string = ((char *)NULL);
  }

  memset$link6((void *)final, 0, sizeof(char [40000l]) /*40000ul*/ );
  strncpy$link1(final, buf, (unsigned long int)len);
  char *return_value_hash_get$9;
  char *return_value_getenv$10;
  if(!(string == ((char *)NULL)))
  {
    char *tmp_if_expr$11;
    if(ENV == 0)
    {
      return_value_hash_get$9=hash_get(hash_table, string);
      tmp_if_expr$11 = return_value_hash_get$9;
    }

    else
    {
      return_value_getenv$10=getenv(string);
      tmp_if_expr$11 = return_value_getenv$10;
    }
    strcat(final, tmp_if_expr$11);
  }

  strcat(final, scan);
  memset$link6((void *)result, 0, (unsigned long int)40000 * sizeof(char) /*1ul*/ );
  unsigned long int return_value_strlen$12;
  return_value_strlen$12=strlen(final);
  strncpy$link1(result, final, return_value_strlen$12);
  xfree((void *)string);
  return result;
}

// fgets
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 253
static inline char * fgets(char * restrict __s, signed int __n, struct _IO_FILE * restrict __stream)
{
  char *return_value___fgets_chk$1;
  char *return_value___fgets_chk$2;
  char *return_value_fgets$3;
  return_value_fgets$3=fgets(__s, __n, __stream);
  return return_value_fgets$3;
}

// fgets$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 253
static inline char * fgets$link1(char * restrict __s$link1, signed int __n$link1, struct _IO_FILE * restrict __stream$link1)
{
  char *return_value___fgets_chk$1$link1;
  char *return_value___fgets_chk$2$link1;
  char *return_value_fgets$3$link1;
  return_value_fgets$3$link1=fgets$link1(__s$link1, __n$link1, __stream$link1);
  return return_value_fgets$3$link1;
}

// file_exists
// file log.c line 142
enum anonymous file_exists(char *file)
{
  signed int fd;
  fd=open(file, 00);
  if(!(fd >= 0))
  {
    close(fd);
    return (enum anonymous)boolean_false;
  }

  else
  {
    close(fd);
    return (enum anonymous)boolean_true;
  }
  return (enum anonymous)boolean_false;
}

// fnv_32_buf
// file hash.c line 260
static unsigned int fnv_32_buf(void *buf, unsigned long int len, unsigned int hval)
{
  unsigned char *bp = (unsigned char *)buf;
  unsigned char *be = bp + (signed long int)len;
  for( ; !(bp >= be); hval = hval + (hval << 1) + (hval << 4) + (hval << 7) + (hval << 8) + (hval << 24))
  {
    unsigned char *tmp_post$1 = bp;
    bp = bp + 1l;
    hval = hval ^ (unsigned int)*tmp_post$1;
  }
  return hval;
}

// fprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf(struct _IO_FILE * restrict __stream, const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2;
  return_value___fprintf_chk$2=__fprintf_chk(__stream, 2 - 1, __fmt, return_value___builtin_va_arg_pack$1);
  return return_value___fprintf_chk$2;
}

// fprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link1(struct _IO_FILE * restrict __stream$link1, const char * restrict __fmt$link1, ...)
{
  void *return_value___builtin_va_arg_pack$1$link1;
  return_value___builtin_va_arg_pack$1$link1=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link1;
  return_value___fprintf_chk$2$link1=__fprintf_chk(__stream$link1, 2 - 1, __fmt$link1, return_value___builtin_va_arg_pack$1$link1);
  return return_value___fprintf_chk$2$link1;
}

// fprintf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link2(struct _IO_FILE * restrict __stream$link2, const char * restrict __fmt$link2, ...)
{
  void *return_value___builtin_va_arg_pack$1$link2;
  return_value___builtin_va_arg_pack$1$link2=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link2;
  return_value___fprintf_chk$2$link2=__fprintf_chk(__stream$link2, 2 - 1, __fmt$link2, return_value___builtin_va_arg_pack$1$link2);
  return return_value___fprintf_chk$2$link2;
}

// fprintf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link3(struct _IO_FILE * restrict __stream$link3, const char * restrict __fmt$link3, ...)
{
  void *return_value___builtin_va_arg_pack$1$link3;
  return_value___builtin_va_arg_pack$1$link3=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link3;
  return_value___fprintf_chk$2$link3=__fprintf_chk(__stream$link3, 2 - 1, __fmt$link3, return_value___builtin_va_arg_pack$1$link3);
  return return_value___fprintf_chk$2$link3;
}

// fprintf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link4(struct _IO_FILE * restrict __stream$link4, const char * restrict __fmt$link4, ...)
{
  void *return_value___builtin_va_arg_pack$1$link4;
  return_value___builtin_va_arg_pack$1$link4=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link4;
  return_value___fprintf_chk$2$link4=__fprintf_chk(__stream$link4, 2 - 1, __fmt$link4, return_value___builtin_va_arg_pack$1$link4);
  return return_value___fprintf_chk$2$link4;
}

// fprintf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link5(struct _IO_FILE * restrict __stream$link5, const char * restrict __fmt$link5, ...)
{
  void *return_value___builtin_va_arg_pack$1$link5;
  return_value___builtin_va_arg_pack$1$link5=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link5;
  return_value___fprintf_chk$2$link5=__fprintf_chk(__stream$link5, 2 - 1, __fmt$link5, return_value___builtin_va_arg_pack$1$link5);
  return return_value___fprintf_chk$2$link5;
}

// fprintf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link6(struct _IO_FILE * restrict __stream$link6, const char * restrict __fmt$link6, ...)
{
  void *return_value___builtin_va_arg_pack$1$link6;
  return_value___builtin_va_arg_pack$1$link6=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link6;
  return_value___fprintf_chk$2$link6=__fprintf_chk(__stream$link6, 2 - 1, __fmt$link6, return_value___builtin_va_arg_pack$1$link6);
  return return_value___fprintf_chk$2$link6;
}

// fprintf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf$link7(struct _IO_FILE * restrict __stream$link7, const char * restrict __fmt$link7, ...)
{
  void *return_value___builtin_va_arg_pack$1$link7;
  return_value___builtin_va_arg_pack$1$link7=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk$2$link7;
  return_value___fprintf_chk$2$link7=__fprintf_chk(__stream$link7, 2 - 1, __fmt$link7, return_value___builtin_va_arg_pack$1$link7);
  return return_value___fprintf_chk$2$link7;
}

// fread
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 282
static inline unsigned long int fread(void * restrict __ptr, unsigned long int __size, unsigned long int __n, struct _IO_FILE * restrict __stream)
{
  unsigned long int return_value___fread_chk$1;
  unsigned long int return_value___fread_chk$2;
  unsigned long int return_value_fread$3;
  return_value_fread$3=fread(__ptr, __size, __n, __stream);
  return return_value_fread$3;
}

// fread$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 282
static inline unsigned long int fread$link1(void * restrict __ptr$link1, unsigned long int __size$link1, unsigned long int __n$link1, struct _IO_FILE * restrict __stream$link1)
{
  unsigned long int return_value___fread_chk$1$link1;
  unsigned long int return_value___fread_chk$2$link1;
  unsigned long int return_value_fread$3$link1;
  return_value_fread$3$link1=fread$link1(__ptr$link1, __size$link1, __n$link1, __stream$link1);
  return return_value_fread$3$link1;
}

// free_cookie
// file cookie.c line 40
void free_cookie(struct anonymous$12 *ck)
{
  xfree((void *)ck->name);
  xfree((void *)ck->value);
  xfree((void *)ck->domain);
  xfree((void *)ck->path);
}

// ftp_ascii
// file ftp.c line 99
enum anonymous ftp_ascii(struct anonymous$0 *C)
{
  C->ftp.code=__request$link1(C, "TYPE A");
  enum anonymous return_value_okay$1;
  return_value_okay$1=okay(C->ftp.code);
  return return_value_okay$1;
}

// ftp_binary
// file ftp.c line 106
enum anonymous ftp_binary(struct anonymous$0 *C)
{
  C->ftp.code=__request$link1(C, "TYPE I");
  enum anonymous return_value_okay$1;
  return_value_okay$1=okay(C->ftp.code);
  return return_value_okay$1;
}

// ftp_cwd
// file ftp.c line 90
enum anonymous ftp_cwd(struct anonymous$0 *C, struct URL_T *U)
{
  signed int code;
  char *return_value_url_get_path$1;
  return_value_url_get_path$1=url_get_path(U);
  code=__request$link1(C, "CWD %s", return_value_url_get_path$1);
  enum anonymous return_value_okay$2;
  return_value_okay$2=okay(code);
  return return_value_okay$2;
}

// ftp_get
// file ./ftp.h line 38
unsigned long int ftp_get(struct anonymous$0 *D, struct URL_T *U, unsigned long int size)
{
  signed int n;
  char c;
  unsigned long int bytes = (unsigned long int)0;
  char *file;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(size);
  file = (char *)return_value_xmalloc$1;
  memset$link7((void *)file, 0, size);
  do
  {
    signed long int return_value_socket_read$2;
    return_value_socket_read$2=socket_read(D, (void *)&c, (unsigned long int)1);
    n = (signed int)return_value_socket_read$2;
    if(n == 0)
      break;

    file[(signed long int)bytes] = c;
    bytes = bytes + (unsigned long int)n;
  }
  while(!(bytes >= size));
  if(!(my.get == /*enum*/boolean_false))
    write_file(U, file, size);

  xfree((void *)file);
  return bytes;
}

// ftp_list
// file ftp.c line 217
enum anonymous ftp_list(struct anonymous$0 *C, struct anonymous$0 *D, struct URL_T *U)
{
  signed int n;
  char c;
  signed int bytes;
  char *return_value_url_get_file$1;
  return_value_url_get_file$1=url_get_file(U);
  char *tmp_if_expr$4;
  char *return_value_url_get_path$2;
  char *return_value_url_get_file$3;
  if(return_value_url_get_file$1 == ((char *)NULL))
  {
    return_value_url_get_path$2=url_get_path(U);
    tmp_if_expr$4 = return_value_url_get_path$2;
  }

  else
  {
    return_value_url_get_file$3=url_get_file(U);
    tmp_if_expr$4 = return_value_url_get_file$3;
  }
  C->ftp.code=__request$link1(C, "LIST %s", tmp_if_expr$4);
  if(C->ftp.code == 150)
  {
    if(!(D->sock >= 1))
    {
      NOTIFY((enum anonymous$19)ERROR, "unable to read from socket: %s:%d", (const void *)C->ftp.host, C->ftp.port);
      return (enum anonymous)boolean_false;
    }

    do
    {
      signed long int return_value_socket_read$5;
      return_value_socket_read$5=socket_read(D, (void *)&c, (unsigned long int)1);
      n = (signed int)return_value_socket_read$5;
      if(n == 0)
        break;

      if(!(my.verbose == /*enum*/boolean_false))
        printf("%c", c);

      bytes = bytes + n;
    }
    while((_Bool)1);
  }

  return (enum anonymous)boolean_true;
}

// ftp_login
// file ./ftp.h line 29
enum anonymous ftp_login(struct anonymous$0 *C, struct URL_T *U)
{
  signed int code = 120;
  char tmp[128l];
  code=__response(C);
  enum anonymous return_value_okay$1;
  return_value_okay$1=okay(code);
  char *return_value_url_get_username$3;
  char *return_value_url_get_password$7;
  if(return_value_okay$1 == /*enum*/boolean_false)
  {
    NOTIFY((enum anonymous$19)ERROR, "FTP: Server responded: %d", code);
    return (enum anonymous)boolean_false;
  }

  else
  {
    char *return_value_url_get_username$2;
    return_value_url_get_username$2=url_get_username(U);
    char *tmp_if_expr$4;
    if(return_value_url_get_username$2 == ((char *)NULL))
      tmp_if_expr$4 = "anonymous";

    else
    {
      return_value_url_get_username$3=url_get_username(U);
      tmp_if_expr$4 = return_value_url_get_username$3;
    }
    snprintf$link4(tmp, sizeof(char [128l]) /*128ul*/ , "%s", tmp_if_expr$4);
    code=__request$link1(C, "USER %s", (const void *)tmp);
    if(!(code == 331))
    {
      enum anonymous return_value_okay$5;
      return_value_okay$5=okay(code);
      if(!(return_value_okay$5 == /*enum*/boolean_false))
        return (enum anonymous)boolean_true;

    }

    memset$link7((void *)tmp, 0, sizeof(char [128l]) /*128ul*/ );
    char *return_value_url_get_password$6;
    return_value_url_get_password$6=url_get_password(U);
    char *tmp_if_expr$8;
    if(return_value_url_get_password$6 == ((char *)NULL))
      tmp_if_expr$8 = "siege@joedog.org";

    else
    {
      return_value_url_get_password$7=url_get_password(U);
      tmp_if_expr$8 = return_value_url_get_password$7;
    }
    snprintf$link4(tmp, sizeof(char [128l]) /*128ul*/ , "%s", tmp_if_expr$8);
    code=__request$link1(C, "PASS %s", (const void *)tmp);
    enum anonymous return_value___in_range$9;
    return_value___in_range$9=__in_range(code, 200, 299);
    return return_value___in_range$9;
  }
}

// ftp_pasv
// file ./ftp.h line 34
enum anonymous ftp_pasv(struct anonymous$0 *C)
{
  signed int i;
  signed int code;
  char *ptr;
  unsigned char addr[6l];
  code=__request$link1(C, "PASV");
  enum anonymous return_value_okay$1;
  return_value_okay$1=okay(code);
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$4;
  if(return_value_okay$1 == /*enum*/boolean_false)
    return (enum anonymous)boolean_false;

  else
  {
    ptr = (char *)C->chkbuf;
    ptr = ptr + (signed long int)4;
    do
    {
      if(!(*ptr == 0))
      {
        return_value___ctype_b_loc$2=__ctype_b_loc();
        tmp_if_expr$3 = !(((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*ptr] & (signed int)(unsigned short int)2048) != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
      if(!tmp_if_expr$3)
        break;

      ptr = ptr + 1l;
    }
    while((_Bool)1);
    if(*ptr == 0)
      return (enum anonymous)boolean_false;

    else
    {
      i = 0;
      for( ; !(i >= 6); i = i + 1)
      {
        addr[(signed long int)i] = (unsigned char)0;
        do
        {
          return_value___ctype_b_loc$4=__ctype_b_loc();
          if((2048 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)*ptr]) == 0)
            break;

          addr[(signed long int)i] = (unsigned char)(((signed int)*ptr - 48) + 10 * (signed int)addr[(signed long int)i]);
          ptr = ptr + 1l;
        }
        while((_Bool)1);
        if((signed int)*ptr == 44)
          ptr = ptr + 1l;

        else
          if(!(i >= 5))
            return (enum anonymous)boolean_false;

      }
      snprintf$link4(C->ftp.host, sizeof(char [64l]) /*64ul*/ , "%d.%d.%d.%d", addr[(signed long int)0], addr[(signed long int)1], addr[(signed long int)2], addr[(signed long int)3]);
      C->ftp.port = ((signed int)addr[(signed long int)4] << 8) + (signed int)addr[(signed long int)5];
      return (enum anonymous)boolean_true;
    }
  }
}

// ftp_put
// file ./ftp.h line 39
unsigned long int ftp_put(struct anonymous$0 *D, struct URL_T *U)
{
  unsigned long int n;
  char *return_value_url_get_postdata$1;
  return_value_url_get_postdata$1=url_get_postdata(U);
  unsigned long int return_value_url_get_postlen$2;
  return_value_url_get_postlen$2=url_get_postlen(U);
  signed int return_value_socket_write$3;
  return_value_socket_write$3=socket_write(D, (const void *)return_value_url_get_postdata$1, return_value_url_get_postlen$2);
  n = (unsigned long int)return_value_socket_write$3;
  unsigned long int return_value_url_get_postlen$4;
  return_value_url_get_postlen$4=url_get_postlen(U);
  if(!(n == return_value_url_get_postlen$4))
  {
    NOTIFY((enum anonymous$19)ERROR, "HTTP: unable to write to socket.");
    return (unsigned long int)-1;
  }

  else
  {
    unsigned long int return_value_url_get_postlen$5;
    return_value_url_get_postlen$5=url_get_postlen(U);
    return return_value_url_get_postlen$5;
  }
}

// ftp_quit
// file ./ftp.h line 40
enum anonymous ftp_quit(struct anonymous$0 *C)
{
  C->ftp.code=__request$link1(C, "QUIT");
  enum anonymous return_value_okay$1;
  return_value_okay$1=okay(C->ftp.code);
  return return_value_okay$1;
}

// ftp_retr
// file ./ftp.h line 37
enum anonymous ftp_retr(struct anonymous$0 *C, struct URL_T *U)
{
  char *return_value_url_get_path$1;
  return_value_url_get_path$1=url_get_path(U);
  char *return_value_url_get_file$2;
  return_value_url_get_file$2=url_get_file(U);
  C->ftp.code=__request$link1(C, "RETR %s%s", return_value_url_get_path$1, return_value_url_get_file$2);
  enum anonymous return_value_okay$3;
  return_value_okay$3=okay(C->ftp.code);
  return return_value_okay$3;
}

// ftp_size
// file ./ftp.h line 32
enum anonymous ftp_size(struct anonymous$0 *C, struct URL_T *U)
{
  signed int size;
  signed int resp;
  enum anonymous return_value_ftp_binary$1;
  return_value_ftp_binary$1=ftp_binary(C);
  if(!((signed int)return_value_ftp_binary$1 == boolean_true))
    return (enum anonymous)boolean_false;

  else
  {
    char *return_value_url_get_path$2;
    return_value_url_get_path$2=url_get_path(U);
    char *return_value_url_get_file$3;
    return_value_url_get_file$3=url_get_file(U);
    C->ftp.code=__request$link1(C, "SIZE %s%s", return_value_url_get_path$2, return_value_url_get_file$3);
    enum anonymous return_value_okay$5;
    return_value_okay$5=okay(C->ftp.code);
    if(return_value_okay$5 == /*enum*/boolean_false)
      return (enum anonymous)boolean_false;

    else
    {
      signed int return_value___isoc99_sscanf$4;
      return_value___isoc99_sscanf$4=__isoc99_sscanf(C->chkbuf, "%d %d", &resp, &size);
      if(return_value___isoc99_sscanf$4 == 2)
      {
        C->ftp.size = (unsigned long int)size;
        return (enum anonymous)boolean_true;
      }

      else
        return (enum anonymous)boolean_false;
    }
    return (enum anonymous)boolean_true;
  }
}

// ftp_stor
// file ./ftp.h line 36
enum anonymous ftp_stor(struct anonymous$0 *C, struct URL_T *U)
{
  unsigned long int len;
  char *file;
  unsigned long int id;
  id=pthread_self();
  signed int num = 2;
  char **parts;
  if((double)id < 0.0)
    id = -id;

  char *return_value_url_get_file$1;
  return_value_url_get_file$1=url_get_file(U);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(return_value_url_get_file$1);
  len = return_value_strlen$2 + (unsigned long int)16;
  char *return_value_url_get_file$3;
  return_value_url_get_file$3=url_get_file(U);
  parts=split((char)46, return_value_url_get_file$3, &num);
  void *return_value_xmalloc$4;
  return_value_xmalloc$4=xmalloc(len);
  file = (char *)return_value_xmalloc$4;
  memset$link7((void *)file, 0, len);
  char *tmp_if_expr$5;
  if(parts[1l] == ((char *)NULL))
    tmp_if_expr$5 = "";

  else
    tmp_if_expr$5 = parts[(signed long int)1];
  snprintf$link4(file, len, "%s-%u.%s", parts[(signed long int)0], id, tmp_if_expr$5);
  if(!(my.unique == /*enum*/boolean_false))
    C->ftp.code=__request$link1(C, "STOR %s", file);

  else
  {
    char *return_value_url_get_file$6;
    return_value_url_get_file$6=url_get_file(U);
    C->ftp.code=__request$link1(C, "STOR %s", return_value_url_get_file$6);
  }
  xfree((void *)file);
  split_free(parts, num);
  enum anonymous return_value_okay$7;
  return_value_okay$7=okay(C->ftp.code);
  return return_value_okay$7;
}

// get_content_type
// file load.c line 210
char * get_content_type(char *file)
{
  signed int i = 0;
  for( ; !(i >= 162); i = i + 1)
  {
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(file);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(tmap[(signed long int)i].ext);
    if(return_value_strlen$4 >= return_value_strlen$5)
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(file);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tmap[(signed long int)i].ext);
      enum anonymous return_value_strmatch$3;
      return_value_strmatch$3=strmatch(((char *)file + (signed long int)return_value_strlen$1) - (signed long int)return_value_strlen$2, (char *)tmap[(signed long int)i].ext);
      if(!(return_value_strmatch$3 == /*enum*/boolean_false))
        return tmap[(signed long int)i].type;

    }

  }
  return tmap[(signed long int)0].type;
}

// get_cookie_header
// file cookie.c line 270
char * get_cookie_header(unsigned long int id, char *host, char *newton)
{
  signed int dlen;
  signed int hlen;
  struct CNODE *pre;
  struct CNODE *cur;
  signed long int now;
  char oreo[8192l];
  memset$link3((void *)oreo, 0, sizeof(char [8192l]) /*8192ul*/ );
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(host);
  hlen = (signed int)return_value_strlen$1;
  pthread_mutex_lock(&cookie->mutex);
  now=time((signed long int *)(void *)0);
  pre = cookie->first;
  cur = pre;
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$4;
  signed int return_value_strcasecmp$15;
  unsigned long int return_value_strlen$10;
  for( ; !(cur == ((struct CNODE *)NULL)); cur = cur->next)
  {
    const char *domainptr = cur->domain;
    if((signed int)*domainptr == 46)
      domainptr = domainptr + 1l;

    unsigned long int tmp_if_expr$3;
    if(!(domainptr == ((const char *)NULL)))
    {
      return_value_strlen$2=strlen(domainptr);
      tmp_if_expr$3 = return_value_strlen$2;
    }

    else
      tmp_if_expr$3 = (unsigned long int)0;
    dlen = (signed int)tmp_if_expr$3;
    if(cur->threadID == id)
    {
      signed int return_value_strcasecmp$9;
      return_value_strcasecmp$9=strcasecmp(domainptr, host);
      if(return_value_strcasecmp$9 == 0)
      {
        if(now >= cur->expires)
        {
          delete_cookie(cur->threadID, cur->name);
          goto __CPROVER_DUMP_L13;
        }

        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(oreo);
        if(return_value_strlen$5 >= 1ul)
        {
          return_value_strlen$4=strlen(oreo);
          strncat(oreo, ";", (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$4);
        }

        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(oreo);
        strncat(oreo, cur->name, (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$6);
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(oreo);
        strncat(oreo, "=", (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$7);
        unsigned long int return_value_strlen$8;
        return_value_strlen$8=strlen(oreo);
        strncat(oreo, cur->value, (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$8);
      }

      if(!(dlen >= hlen))
      {
        return_value_strcasecmp$15=strcasecmp(host + (signed long int)(hlen - dlen), domainptr);
        if(return_value_strcasecmp$15 == 0)
        {
          if(now >= cur->expires)
          {
            delete_cookie(cur->threadID, cur->name);
            goto __CPROVER_DUMP_L13;
          }

          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(oreo);
          if(return_value_strlen$11 >= 1ul)
          {
            return_value_strlen$10=strlen(oreo);
            strncat(oreo, ";", (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$10);
          }

          unsigned long int return_value_strlen$12;
          return_value_strlen$12=strlen(oreo);
          strncat(oreo, cur->name, (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$12);
          unsigned long int return_value_strlen$13;
          return_value_strlen$13=strlen(oreo);
          strncat(oreo, "=", (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$13);
          unsigned long int return_value_strlen$14;
          return_value_strlen$14=strlen(oreo);
          strncat(oreo, cur->value, (sizeof(char [8192l]) /*8192ul*/  - (unsigned long int)10) - return_value_strlen$14);
        }

      }

    }


  __CPROVER_DUMP_L13:
    ;
    pre = cur;
  }
  unsigned long int return_value_strlen$16;
  return_value_strlen$16=strlen(oreo);
  if(return_value_strlen$16 >= 1ul)
  {
    strncpy(newton, "Cookie: ", (unsigned long int)8);
    strncat(newton, oreo, (unsigned long int)8192);
    strncat(newton, "\r\n", (unsigned long int)2);
  }

  pthread_mutex_unlock(&cookie->mutex);
  return newton;
}

// get_line
// file init.c line 199
static char * get_line(struct _IO_FILE *fp)
{
  char *ptr = (char *)(void *)0;
  char *newline;
  char tmp[256l];
  memset$link10((void *)tmp, 0, sizeof(char [256l]) /*256ul*/ );
  do
  {
    char *return_value_fgets$1;
    return_value_fgets$1=fgets$link1(tmp, (signed int)sizeof(char [256l]) /*256ul*/ , fp);
    if(return_value_fgets$1 == ((char *)NULL))
      return (char *)(void *)0;

    if(ptr == ((char *)NULL))
      ptr=xstrdup(tmp);

    else
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(ptr);
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(tmp);
      void *return_value_xrealloc$4;
      return_value_xrealloc$4=xrealloc((void *)ptr, return_value_strlen$2 + return_value_strlen$3 + (unsigned long int)1);
      ptr = (char *)return_value_xrealloc$4;
      strcat$link1(ptr, tmp);
    }
    char *return_value___builtin_strchr$5;
    return_value___builtin_strchr$5=__builtin_strchr(ptr, 10);
    newline = return_value___builtin_strchr$5;
  }
  while(newline == ((char *)NULL));
  *newline = (char)0;
  return ptr;
}

// hash_add
// file ./hash.h line 35
void hash_add(struct HASH_T *this, char *key, char *value)
{
  signed int x;
  struct NODE *node;
  enum anonymous return_value___lookup$1;
  return_value___lookup$1=__lookup(this, key);
  if(!((signed int)return_value___lookup$1 == boolean_true))
  {
    if(this->entries >= this->size / 4)
      __resize(this);

    unsigned int return_value___genkey$2;
    return_value___genkey$2=__genkey(this->size, key);
    x = (signed int)return_value___genkey$2;
    void *return_value_malloc$3;
    return_value_malloc$3=malloc(sizeof(struct NODE) /*24ul*/ );
    node = (struct NODE *)return_value_malloc$3;
    char *return_value___strdup$4;
    return_value___strdup$4=__strdup(key);
    node->key = return_value___strdup$4;
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup(value);
    node->value = return_value___strdup$5;
    node->next = this->table[(signed long int)x];
    this->table[(signed long int)x] = node;
    this->entries = this->entries + 1;
    goto __CPROVER_DUMP_L3;
  }


__CPROVER_DUMP_L3:
  ;
}

// hash_destroy
// file ./hash.h line 39
void hash_destroy(struct HASH_T *this)
{
  signed int x;
  struct NODE *t1;
  struct NODE *t2;
  x = 0;
  for( ; !(x >= this->size); x = x + 1)
  {
    t1 = this->table[(signed long int)x];
    for( ; !(t1 == ((struct NODE *)NULL)); t1 = t2)
    {
      t2 = t1->next;
      if(!(t1->key == ((char *)NULL)))
        free((void *)t1->key);

      if(!(t1->value == ((char *)NULL)))
        free((void *)t1->value);

      free((void *)t1);
    }
    this->table[(signed long int)x] = (struct NODE *)(void *)0;
  }
  if(!(this->table == ((struct NODE **)NULL)))
  {
    free((void *)this->table);
    memset$link8((void *)this, 0, sizeof(struct HASH_T *) /*8ul*/ );
  }

  free((void *)this);
  goto __CPROVER_DUMP_L8;

__CPROVER_DUMP_L8:
  ;
}

// hash_free_keys
// file hash.c line 206
void hash_free_keys(struct HASH_T *this, char **keys)
{
  signed int x = 0;
  for( ; !(x >= this->entries); x = x + 1)
    if(!(keys[(signed long int)x] == ((char *)NULL)))
    {
      char *tmp = keys[(signed long int)x];
      free((void *)tmp);
    }

  free((void *)keys);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// hash_get
// file ./hash.h line 36
char * hash_get(struct HASH_T *this, char *key)
{
  signed int x;
  struct NODE *node;
  unsigned int return_value___genkey$1;
  return_value___genkey$1=__genkey(this->size, key);
  x = (signed int)return_value___genkey$1;
  node = this->table[(signed long int)x];
  for( ; !(node == ((struct NODE *)NULL)); node = node->next)
  {
    signed int tmp_statement_expression$2;
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$3;
    return_value___builtin_strcmp$3=__builtin_strcmp(node->key, key);
    tmp_statement_expression$2 = return_value___builtin_strcmp$3;
    if(tmp_statement_expression$2 == 0)
      return node->value;

  }
  return (char *)(void *)0;
}

// hash_get_entries
// file hash.c line 251
signed int hash_get_entries(struct HASH_T *this)
{
  return this->entries;
}

// hash_get_keys
// file hash.c line 185
char ** hash_get_keys(struct HASH_T *this)
{
  signed int x;
  signed int i = 0;
  struct NODE *node;
  char **keys;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)this->entries);
  keys = (char **)return_value_malloc$1;
  x = 0;
  for( ; !(x >= this->size); x = x + 1)
  {
    node = this->table[(signed long int)x];
    for( ; !(node == ((struct NODE *)NULL)); node = node->next)
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)128);
      keys[(signed long int)i] = (char *)return_value_malloc$2;
      memset$link8((void *)keys[(signed long int)i], 0, sizeof(char *) /*8ul*/ );
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(node->key);
      memcpy$link4((void *)keys[(signed long int)i], (const void *)(char *)node->key, return_value_strlen$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(node->key);
      keys[(signed long int)i][(signed long int)return_value_strlen$4] = (char)0;
      i = i + 1;
    }
  }
  return keys;
}

// hash_lookup
// file ./hash.h line 38
enum anonymous hash_lookup(struct HASH_T *this, char *key)
{
  enum anonymous return_value___lookup$1;
  return_value___lookup$1=__lookup(this, key);
  return return_value___lookup$1;
}

// hash_reset
// file hash.c line 81
void hash_reset(struct HASH_T *this, signed long int size)
{
  this->size = 2;
  this->entries = 0;
  for( ; !((signed long int)this->size >= size); this->size = this->size << 1)
    ;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)this->size * sizeof(struct NODE *) /*8ul*/ , (unsigned long int)1);
  this->table = (struct NODE **)return_value_calloc$1;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// http_chunk_size
// file http.c line 619
signed int http_chunk_size(struct anonymous$0 *C)
{
  signed int n;
  char *end;
  unsigned long int length;
  memset$link9((void *)C->chkbuf, 0, sizeof(char [1024l]) /*1024ul*/ );
  signed long int return_value_socket_readline$1;
  return_value_socket_readline$1=socket_readline(C, C->chkbuf, sizeof(char [1024l]) /*1024ul*/ );
  n = (signed int)return_value_socket_readline$1;
  unsigned long int return_value_strlen$2;
  if(!(n >= 1))
  {
    NOTIFY((enum anonymous$19)WARNING, "HTTP: unable to determine chunk size");
    return -1;
  }

  else
  {
    _Bool tmp_if_expr$3;
    if((signed int)C->chkbuf[0l] == 10)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strlen$2=strlen(C->chkbuf);
      tmp_if_expr$3 = return_value_strlen$2 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    }
    _Bool tmp_if_expr$4;
    if(tmp_if_expr$3)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)C->chkbuf[(signed long int)0] == 13 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
      return -1;

    else
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      *return_value___errno_location$5 = 0;
      const unsigned short int **return_value___ctype_b_loc$6;
      return_value___ctype_b_loc$6=__ctype_b_loc();
      if((4096 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)(unsigned int)C->chkbuf[0l]]) == 0)
        return -1;

      else
      {
        length=strtoul(C->chkbuf, &end, 16);
        signed int *return_value___errno_location$7;
        return_value___errno_location$7=__errno_location();
        _Bool tmp_if_expr$8;
        if(*return_value___errno_location$7 == 34)
          tmp_if_expr$8 = (_Bool)1;

        else
          tmp_if_expr$8 = end == C->chkbuf ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$8)
        {
          NOTIFY((enum anonymous$19)WARNING, "HTTP: invalid chunk line %s\n", (const void *)C->chkbuf);
          return 0;
        }

        else
          return (signed int)length;
        return -1;
      }
    }
  }
}

// http_free_headers
// file ./http.h line 79
void http_free_headers(struct headers *h)
{
  xfree((void *)h->redirect);
  xfree((void *)h->auth.realm.proxy);
  xfree((void *)h->auth.realm.www);
  xfree((void *)h);
}

// http_get
// file ./http.h line 77
enum anonymous http_get(struct anonymous$0 *C, struct URL_T *U)
{
  unsigned long int rlen;
  unsigned long int mlen;
  char protocol[16l];
  char keepalive[16l];
  char hoststr[512l];
  char authwww[512l];
  char authpxy[512l];
  char accept[14l] = { 'A', 'c', 'c', 'e', 'p', 't', ':', ' ', '*', '/', '*', '\r', '\n', 0 };
  char encoding[512l];
  char *request;
  char portstr[16l];
  char fullpath[4096l];
  char http_get$$1$$cookie[8200l];
  signed long int now;
  char *ifmod;
  ifmod=url_get_if_modified_since(U);
  char *ifnon;
  ifnon=url_get_etag(U);
  now=time((signed long int *)(void *)0);
  memset$link9((void *)hoststr, 0, sizeof(char [512l]) /*512ul*/ );
  memset$link9((void *)http_get$$1$$cookie, 0, sizeof(char [8200l]) /*8200ul*/ );
  memset$link9((void *)portstr, 0, sizeof(char [16l]) /*16ul*/ );
  enum anonymous return_value_auth_get_proxy_required$5;
  return_value_auth_get_proxy_required$5=auth_get_proxy_required(my.auth);
  if(!(return_value_auth_get_proxy_required$5 == /*enum*/boolean_false))
  {
    char *return_value_url_get_hostname$1;
    return_value_url_get_hostname$1=url_get_hostname(U);
    signed int return_value_url_get_port$2;
    return_value_url_get_port$2=url_get_port(U);
    char *return_value_url_get_request$3;
    return_value_url_get_request$3=url_get_request(U);
    sprintf(fullpath, "%s://%s:%d%s", (signed int)C->encrypt == boolean_false ? "http" : "https", return_value_url_get_hostname$1, return_value_url_get_port$2, return_value_url_get_request$3);
  }

  else
  {
    char *return_value_url_get_request$4;
    return_value_url_get_request$4=url_get_request(U);
    sprintf(fullpath, "%s", return_value_url_get_request$4);
  }
  signed int return_value_url_get_port$7;
  return_value_url_get_port$7=url_get_port(U);
  _Bool tmp_if_expr$8;
  if(return_value_url_get_port$7 == 80)
    tmp_if_expr$8 = (signed int)C->encrypt == boolean_false ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$8 = (_Bool)0;
  _Bool tmp_if_expr$11;
  signed int return_value_url_get_port$9;
  _Bool tmp_if_expr$10;
  if(tmp_if_expr$8)
    tmp_if_expr$11 = (_Bool)1;

  else
  {
    return_value_url_get_port$9=url_get_port(U);
    if(return_value_url_get_port$9 == 443)
      tmp_if_expr$10 = (signed int)C->encrypt == boolean_false ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$10 = (_Bool)0;
    tmp_if_expr$11 = tmp_if_expr$10 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$11)
    portstr[(signed long int)0] = (char)0;

  else
  {
    signed int return_value_url_get_port$6;
    return_value_url_get_port$6=url_get_port(U);
    snprintf$link5(portstr, sizeof(char [16l]) /*16ul*/ , ":%d", return_value_url_get_port$6);
  }
  if(my.protocol == boolean_false || (signed int)my.get == boolean_true)
    snprintf$link5(protocol, sizeof(char [16l]) /*16ul*/ , "HTTP/1.0");

  else
    snprintf$link5(protocol, sizeof(char [16l]) /*16ul*/ , "HTTP/1.1");
  if(C->connection.keepalive == boolean_true)
    snprintf$link5(keepalive, sizeof(char [16l]) /*16ul*/ , "keep-alive");

  else
    snprintf$link5(keepalive, sizeof(char [16l]) /*16ul*/ , "close");
  unsigned long int return_value_pthread_self$12;
  return_value_pthread_self$12=pthread_self();
  char *return_value_url_get_hostname$13;
  return_value_url_get_hostname$13=url_get_hostname(U);
  get_cookie_header(return_value_pthread_self$12, return_value_url_get_hostname$13, http_get$$1$$cookie);
  if(!(C->auth.www == 0))
  {
    if((signed int)C->auth.type.www == DIGEST)
    {
      char *return_value_url_get_method_name$14;
      return_value_url_get_method_name$14=url_get_method_name(U);
      char *return_value_auth_get_digest_header$15;
      return_value_auth_get_digest_header$15=auth_get_digest_header(my.auth, (enum anonymous$3)HTTP, C->auth.wchlg, C->auth.wcred, return_value_url_get_method_name$14, fullpath);
      snprintf$link5(authwww, sizeof(char [512l]) /*512ul*/ , "%s", return_value_auth_get_digest_header$15);
    }

    else
    {
      char *return_value_auth_get_basic_header$16;
      return_value_auth_get_basic_header$16=auth_get_basic_header(my.auth, (enum anonymous$3)HTTP);
      snprintf$link5(authwww, sizeof(char [512l]) /*512ul*/ , "%s", return_value_auth_get_basic_header$16);
    }
  }

  if(!(C->auth.proxy == 0))
  {
    if((signed int)C->auth.type.proxy == DIGEST)
    {
      char *return_value_url_get_method_name$17;
      return_value_url_get_method_name$17=url_get_method_name(U);
      char *return_value_auth_get_digest_header$18;
      return_value_auth_get_digest_header$18=auth_get_digest_header(my.auth, (enum anonymous$3)HTTP, C->auth.wchlg, C->auth.wcred, return_value_url_get_method_name$17, fullpath);
      snprintf$link5(authwww, sizeof(char [512l]) /*512ul*/ , "%s", return_value_auth_get_digest_header$18);
    }

    else
    {
      char *return_value_auth_get_basic_header$19;
      return_value_auth_get_basic_header$19=auth_get_basic_header(my.auth, (enum anonymous$3)PROXY);
      snprintf$link5(authpxy, sizeof(char [512l]) /*512ul*/ , "%s", return_value_auth_get_basic_header$19);
    }
  }

  char *return_value_strncasestr$32;
  return_value_strncasestr$32=strncasestr(my.extra, "host:", sizeof(char [2048l]) /*2048ul*/ );
  signed int return_value_url_get_port$26;
  enum anonymous$3 return_value_url_get_scheme$28;
  _Bool tmp_if_expr$30;
  signed int return_value_url_get_port$29;
  if(return_value_strncasestr$32 == ((char *)NULL))
  {
    enum anonymous$3 return_value_url_get_scheme$25;
    return_value_url_get_scheme$25=url_get_scheme(U);
    _Bool tmp_if_expr$27;
    if((signed int)return_value_url_get_scheme$25 == HTTP)
    {
      return_value_url_get_port$26=url_get_port(U);
      tmp_if_expr$27 = return_value_url_get_port$26 != 80 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$27 = (_Bool)0;
    _Bool tmp_if_expr$31;
    if(tmp_if_expr$27)
      tmp_if_expr$31 = (_Bool)1;

    else
    {
      return_value_url_get_scheme$28=url_get_scheme(U);
      if((signed int)return_value_url_get_scheme$28 == HTTPS)
      {
        return_value_url_get_port$29=url_get_port(U);
        tmp_if_expr$30 = return_value_url_get_port$29 != 443 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$30 = (_Bool)0;
      tmp_if_expr$31 = tmp_if_expr$30 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$31)
    {
      char *return_value_url_get_hostname$20;
      return_value_url_get_hostname$20=url_get_hostname(U);
      signed int return_value_url_get_port$21;
      return_value_url_get_port$21=url_get_port(U);
      signed int return_value_snprintf$22;
      return_value_snprintf$22=snprintf$link5(hoststr, sizeof(char [512l]) /*512ul*/ , "Host: %s:%d\r\n", return_value_url_get_hostname$20, return_value_url_get_port$21);
      rlen = (unsigned long int)return_value_snprintf$22;
    }

    else
    {
      char *return_value_url_get_hostname$23;
      return_value_url_get_hostname$23=url_get_hostname(U);
      signed int return_value_snprintf$24;
      return_value_snprintf$24=snprintf$link5(hoststr, sizeof(char [512l]) /*512ul*/ , "Host: %s\r\n", return_value_url_get_hostname$23);
      rlen = (unsigned long int)return_value_snprintf$24;
    }
  }

  char *return_value_url_get_method_name$33;
  return_value_url_get_method_name$33=url_get_method_name(U);
  unsigned long int return_value_strlen$34;
  return_value_strlen$34=strlen(return_value_url_get_method_name$33);
  unsigned long int return_value_strlen$35;
  return_value_strlen$35=strlen(fullpath);
  unsigned long int return_value_strlen$36;
  return_value_strlen$36=strlen(protocol);
  unsigned long int return_value_strlen$37;
  return_value_strlen$37=strlen(hoststr);
  char *tmp_if_expr$38;
  if(C->auth.www == boolean_true)
    tmp_if_expr$38 = authwww;

  else
    tmp_if_expr$38 = "";
  unsigned long int return_value_strlen$39;
  return_value_strlen$39=strlen(tmp_if_expr$38);
  char *tmp_if_expr$40;
  if(C->auth.proxy == boolean_true)
    tmp_if_expr$40 = authpxy;

  else
    tmp_if_expr$40 = "";
  unsigned long int return_value_strlen$41;
  return_value_strlen$41=strlen(tmp_if_expr$40);
  unsigned long int return_value_strlen$42;
  return_value_strlen$42=strlen(http_get$$1$$cookie);
  unsigned long int return_value_strlen$43;
  return_value_strlen$43=strlen(ifmod != (char *)(void *)0 ? ifmod : "");
  unsigned long int return_value_strlen$44;
  return_value_strlen$44=strlen(ifnon != (char *)(void *)0 ? ifnon : "");
  signed int return_value_strncasecmp$45;
  return_value_strncasecmp$45=strncasecmp(my.extra, "Accept:", (unsigned long int)7);
  char *tmp_if_expr$46;
  if(return_value_strncasecmp$45 == 0)
    tmp_if_expr$46 = "";

  else
    tmp_if_expr$46 = accept;
  unsigned long int return_value_strlen$47;
  return_value_strlen$47=strlen(tmp_if_expr$46);
  unsigned long int return_value_strlen$48;
  return_value_strlen$48=strlen(my.uagent);
  unsigned long int return_value_strlen$49;
  return_value_strlen$49=strlen(my.extra);
  unsigned long int return_value_strlen$50;
  return_value_strlen$50=strlen(keepalive);
  mlen = return_value_strlen$34 + return_value_strlen$35 + return_value_strlen$36 + return_value_strlen$37 + return_value_strlen$39 + return_value_strlen$41 + return_value_strlen$42 + return_value_strlen$43 + return_value_strlen$44 + return_value_strlen$47 + sizeof(char [512l]) /*512ul*/  + return_value_strlen$48 + return_value_strlen$49 + return_value_strlen$50 + (unsigned long int)128;
  void *return_value_xmalloc$51;
  return_value_xmalloc$51=xmalloc(mlen);
  request = (char *)return_value_xmalloc$51;
  memset$link9((void *)request, 0, mlen);
  memset$link9((void *)encoding, 0, sizeof(char [512l]) /*512ul*/ );
  if(my.get == /*enum*/boolean_false)
    snprintf$link5(encoding, sizeof(char [512l]) /*512ul*/ , "Accept-Encoding: %s\r\n", (const void *)my.encoding);

  char *return_value_url_get_method_name$52;
  return_value_url_get_method_name$52=url_get_method_name(U);
  char *tmp_if_expr$53;
  if(C->auth.www == boolean_true)
    tmp_if_expr$53 = authwww;

  else
    tmp_if_expr$53 = "";
  char *tmp_if_expr$54;
  if(C->auth.proxy == boolean_true)
    tmp_if_expr$54 = authpxy;

  else
    tmp_if_expr$54 = "";
  unsigned long int return_value_strlen$55;
  return_value_strlen$55=strlen(http_get$$1$$cookie);
  char *tmp_if_expr$56;
  if(return_value_strlen$55 >= 9ul)
    tmp_if_expr$56 = http_get$$1$$cookie;

  else
    tmp_if_expr$56 = "";
  signed int return_value_strncasecmp$57;
  return_value_strncasecmp$57=strncasecmp(my.extra, "Accept:", (unsigned long int)7);
  char *tmp_if_expr$58;
  if(return_value_strncasecmp$57 == 0)
    tmp_if_expr$58 = "";

  else
    tmp_if_expr$58 = accept;
  signed int return_value_snprintf$59;
  return_value_snprintf$59=snprintf$link5(request, mlen, "%s %s %s\r\n%s%s%s%s%s%s%s%sUser-Agent: %s\r\n%sConnection: %s\r\n\r\n", return_value_url_get_method_name$52, (const void *)fullpath, (const void *)protocol, (const void *)hoststr, tmp_if_expr$53, tmp_if_expr$54, tmp_if_expr$56, ifmod != (char *)(void *)0 ? ifmod : "", ifnon != (char *)(void *)0 ? ifnon : "", tmp_if_expr$58, (const void *)encoding, (const void *)my.uagent, (const void *)my.extra, (const void *)keepalive);
  rlen = (unsigned long int)return_value_snprintf$59;
  if(my.quiet == /*enum*/boolean_false && (!(my.debug == /*enum*/boolean_false) || !(my.get == /*enum*/boolean_false)))
  {
    printf("%s\n", request);
    fflush(stdout);
  }

  if(rlen == 0ul || !(mlen >= rlen))
  {
    char *return_value_url_get_method_name$60;
    return_value_url_get_method_name$60=url_get_method_name(U);
    NOTIFY((enum anonymous$19)FATAL, "HTTP %s: request buffer overrun!", return_value_url_get_method_name$60);
  }

  signed int return_value_socket_write$61;
  return_value_socket_write$61=socket_write(C, (const void *)request, rlen);
  if(!(return_value_socket_write$61 >= 0))
  {
    xfree((void *)ifmod);
    xfree((void *)ifnon);
    return (enum anonymous)boolean_false;
  }

  else
  {
    xfree((void *)ifmod);
    xfree((void *)ifnon);
    xfree((void *)request);
    return (enum anonymous)boolean_true;
  }
}

// http_post
// file ./http.h line 78
enum anonymous http_post(struct anonymous$0 *C, struct URL_T *U)
{
  unsigned long int rlen;
  unsigned long int mlen;
  char hoststr[128l];
  char authwww[128l];
  char authpxy[128l];
  char accept[14l] = { 'A', 'c', 'c', 'e', 'p', 't', ':', ' ', '*', '/', '*', '\r', '\n', 0 };
  char encoding[512l];
  char *request;
  char portstr[16l];
  char protocol[16l];
  char keepalive[16l];
  char http_post$$1$$cookie[8192l];
  char fullpath[4096l];
  memset$link9((void *)hoststr, 0, sizeof(char [128l]) /*128ul*/ );
  memset$link9((void *)http_post$$1$$cookie, 0, sizeof(char [8192l]) /*8192ul*/ );
  memset$link9((void *)portstr, 0, sizeof(char [16l]) /*16ul*/ );
  memset$link9((void *)protocol, 0, sizeof(char [16l]) /*16ul*/ );
  memset$link9((void *)keepalive, 0, sizeof(char [16l]) /*16ul*/ );
  enum anonymous return_value_auth_get_proxy_required$5;
  return_value_auth_get_proxy_required$5=auth_get_proxy_required(my.auth);
  if(!(return_value_auth_get_proxy_required$5 == /*enum*/boolean_false))
  {
    char *return_value_url_get_hostname$1;
    return_value_url_get_hostname$1=url_get_hostname(U);
    signed int return_value_url_get_port$2;
    return_value_url_get_port$2=url_get_port(U);
    char *return_value_url_get_request$3;
    return_value_url_get_request$3=url_get_request(U);
    sprintf(fullpath, "%s://%s:%d%s", (signed int)C->encrypt == boolean_false ? "http" : "https", return_value_url_get_hostname$1, return_value_url_get_port$2, return_value_url_get_request$3);
  }

  else
  {
    char *return_value_url_get_request$4;
    return_value_url_get_request$4=url_get_request(U);
    sprintf(fullpath, "%s", return_value_url_get_request$4);
  }
  signed int return_value_url_get_port$7;
  return_value_url_get_port$7=url_get_port(U);
  _Bool tmp_if_expr$8;
  if(return_value_url_get_port$7 == 80)
    tmp_if_expr$8 = (signed int)C->encrypt == boolean_false ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$8 = (_Bool)0;
  _Bool tmp_if_expr$11;
  signed int return_value_url_get_port$9;
  _Bool tmp_if_expr$10;
  if(tmp_if_expr$8)
    tmp_if_expr$11 = (_Bool)1;

  else
  {
    return_value_url_get_port$9=url_get_port(U);
    if(return_value_url_get_port$9 == 443)
      tmp_if_expr$10 = (signed int)C->encrypt == boolean_true ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$10 = (_Bool)0;
    tmp_if_expr$11 = tmp_if_expr$10 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$11)
    portstr[(signed long int)0] = (char)0;

  else
  {
    signed int return_value_url_get_port$6;
    return_value_url_get_port$6=url_get_port(U);
    snprintf$link5(portstr, sizeof(char [16l]) /*16ul*/ , ":%d", return_value_url_get_port$6);
  }
  if(my.protocol == boolean_false || (signed int)my.get == boolean_true)
    snprintf$link5(protocol, sizeof(char [16l]) /*16ul*/ , "HTTP/1.0");

  else
    snprintf$link5(protocol, sizeof(char [16l]) /*16ul*/ , "HTTP/1.1");
  if(C->connection.keepalive == boolean_true)
    snprintf$link5(keepalive, sizeof(char [16l]) /*16ul*/ , "keep-alive");

  else
    snprintf$link5(keepalive, sizeof(char [16l]) /*16ul*/ , "close");
  unsigned long int return_value_pthread_self$12;
  return_value_pthread_self$12=pthread_self();
  char *return_value_url_get_hostname$13;
  return_value_url_get_hostname$13=url_get_hostname(U);
  get_cookie_header(return_value_pthread_self$12, return_value_url_get_hostname$13, http_post$$1$$cookie);
  if(!(C->auth.www == 0))
  {
    if((signed int)C->auth.type.www == DIGEST)
    {
      char *return_value_url_get_method_name$14;
      return_value_url_get_method_name$14=url_get_method_name(U);
      char *return_value_auth_get_digest_header$15;
      return_value_auth_get_digest_header$15=auth_get_digest_header(my.auth, (enum anonymous$3)HTTP, C->auth.wchlg, C->auth.wcred, return_value_url_get_method_name$14, fullpath);
      snprintf$link5(authwww, sizeof(char [128l]) /*128ul*/ , "%s", return_value_auth_get_digest_header$15);
    }

    else
    {
      char *return_value_auth_get_basic_header$16;
      return_value_auth_get_basic_header$16=auth_get_basic_header(my.auth, (enum anonymous$3)HTTP);
      snprintf$link5(authwww, sizeof(char [128l]) /*128ul*/ , "%s", return_value_auth_get_basic_header$16);
    }
  }

  if(!(C->auth.proxy == 0))
  {
    if((signed int)C->auth.type.proxy == DIGEST)
    {
      char *return_value_url_get_method_name$17;
      return_value_url_get_method_name$17=url_get_method_name(U);
      char *return_value_auth_get_digest_header$18;
      return_value_auth_get_digest_header$18=auth_get_digest_header(my.auth, (enum anonymous$3)HTTP, C->auth.wchlg, C->auth.wcred, return_value_url_get_method_name$17, fullpath);
      snprintf$link5(authwww, sizeof(char [128l]) /*128ul*/ , "%s", return_value_auth_get_digest_header$18);
    }

    else
    {
      char *return_value_auth_get_basic_header$19;
      return_value_auth_get_basic_header$19=auth_get_basic_header(my.auth, (enum anonymous$3)PROXY);
      snprintf$link5(authpxy, sizeof(char [128l]) /*128ul*/ , "%s", return_value_auth_get_basic_header$19);
    }
  }

  char *return_value_strncasestr$32;
  return_value_strncasestr$32=strncasestr(my.extra, "host:", sizeof(char [2048l]) /*2048ul*/ );
  signed int return_value_url_get_port$26;
  enum anonymous$3 return_value_url_get_scheme$28;
  _Bool tmp_if_expr$30;
  signed int return_value_url_get_port$29;
  if(return_value_strncasestr$32 == ((char *)NULL))
  {
    enum anonymous$3 return_value_url_get_scheme$25;
    return_value_url_get_scheme$25=url_get_scheme(U);
    _Bool tmp_if_expr$27;
    if((signed int)return_value_url_get_scheme$25 == HTTP)
    {
      return_value_url_get_port$26=url_get_port(U);
      tmp_if_expr$27 = return_value_url_get_port$26 != 80 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$27 = (_Bool)0;
    _Bool tmp_if_expr$31;
    if(tmp_if_expr$27)
      tmp_if_expr$31 = (_Bool)1;

    else
    {
      return_value_url_get_scheme$28=url_get_scheme(U);
      if((signed int)return_value_url_get_scheme$28 == HTTPS)
      {
        return_value_url_get_port$29=url_get_port(U);
        tmp_if_expr$30 = return_value_url_get_port$29 != 443 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$30 = (_Bool)0;
      tmp_if_expr$31 = tmp_if_expr$30 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$31)
    {
      char *return_value_url_get_hostname$20;
      return_value_url_get_hostname$20=url_get_hostname(U);
      signed int return_value_url_get_port$21;
      return_value_url_get_port$21=url_get_port(U);
      signed int return_value_snprintf$22;
      return_value_snprintf$22=snprintf$link5(hoststr, sizeof(char [128l]) /*128ul*/ , "Host: %s:%d\r\n", return_value_url_get_hostname$20, return_value_url_get_port$21);
      rlen = (unsigned long int)return_value_snprintf$22;
    }

    else
    {
      char *return_value_url_get_hostname$23;
      return_value_url_get_hostname$23=url_get_hostname(U);
      signed int return_value_snprintf$24;
      return_value_snprintf$24=snprintf$link5(hoststr, sizeof(char [128l]) /*128ul*/ , "Host: %s\r\n", return_value_url_get_hostname$23);
      rlen = (unsigned long int)return_value_snprintf$24;
    }
  }

  char *return_value_url_get_method_name$33;
  return_value_url_get_method_name$33=url_get_method_name(U);
  unsigned long int return_value_strlen$34;
  return_value_strlen$34=strlen(return_value_url_get_method_name$33);
  unsigned long int return_value_strlen$35;
  return_value_strlen$35=strlen(fullpath);
  unsigned long int return_value_strlen$36;
  return_value_strlen$36=strlen(protocol);
  unsigned long int return_value_strlen$37;
  return_value_strlen$37=strlen(hoststr);
  char *tmp_if_expr$38;
  if(C->auth.www == boolean_true)
    tmp_if_expr$38 = authwww;

  else
    tmp_if_expr$38 = "";
  unsigned long int return_value_strlen$39;
  return_value_strlen$39=strlen(tmp_if_expr$38);
  char *tmp_if_expr$40;
  if(C->auth.proxy == boolean_true)
    tmp_if_expr$40 = authpxy;

  else
    tmp_if_expr$40 = "";
  unsigned long int return_value_strlen$41;
  return_value_strlen$41=strlen(tmp_if_expr$40);
  unsigned long int return_value_strlen$42;
  return_value_strlen$42=strlen(http_post$$1$$cookie);
  signed int return_value_strncasecmp$43;
  return_value_strncasecmp$43=strncasecmp(my.extra, "Accept:", (unsigned long int)7);
  char *tmp_if_expr$44;
  if(return_value_strncasecmp$43 == 0)
    tmp_if_expr$44 = "";

  else
    tmp_if_expr$44 = accept;
  unsigned long int return_value_strlen$45;
  return_value_strlen$45=strlen(tmp_if_expr$44);
  unsigned long int return_value_strlen$46;
  return_value_strlen$46=strlen(my.uagent);
  char *return_value_url_get_conttype$47;
  return_value_url_get_conttype$47=url_get_conttype(U);
  unsigned long int return_value_strlen$48;
  return_value_strlen$48=strlen(return_value_url_get_conttype$47);
  unsigned long int return_value_strlen$49;
  return_value_strlen$49=strlen(my.extra);
  unsigned long int return_value_strlen$50;
  return_value_strlen$50=strlen(keepalive);
  unsigned long int return_value_url_get_postlen$51;
  return_value_url_get_postlen$51=url_get_postlen(U);
  mlen = return_value_strlen$34 + return_value_strlen$35 + return_value_strlen$36 + return_value_strlen$37 + return_value_strlen$39 + return_value_strlen$41 + return_value_strlen$42 + return_value_strlen$45 + sizeof(char [512l]) /*512ul*/  + return_value_strlen$46 + return_value_strlen$48 + return_value_strlen$49 + return_value_strlen$50 + return_value_url_get_postlen$51 + (unsigned long int)128;
  void *return_value_xmalloc$52;
  return_value_xmalloc$52=xmalloc(mlen);
  request = (char *)return_value_xmalloc$52;
  memset$link9((void *)request, 0, mlen);
  memset$link9((void *)encoding, 0, sizeof(char [512l]) /*512ul*/ );
  if(my.get == /*enum*/boolean_false)
    snprintf$link5(encoding, sizeof(char [512l]) /*512ul*/ , "Accept-Encoding: %s\r\n", (const void *)my.encoding);

  char *return_value_url_get_method_name$53;
  return_value_url_get_method_name$53=url_get_method_name(U);
  char *tmp_if_expr$54;
  if(C->auth.www == boolean_true)
    tmp_if_expr$54 = authwww;

  else
    tmp_if_expr$54 = "";
  char *tmp_if_expr$55;
  if(C->auth.proxy == boolean_true)
    tmp_if_expr$55 = authpxy;

  else
    tmp_if_expr$55 = "";
  unsigned long int return_value_strlen$56;
  return_value_strlen$56=strlen(http_post$$1$$cookie);
  char *tmp_if_expr$57;
  if(return_value_strlen$56 >= 9ul)
    tmp_if_expr$57 = http_post$$1$$cookie;

  else
    tmp_if_expr$57 = "";
  signed int return_value_strncasecmp$58;
  return_value_strncasecmp$58=strncasecmp(my.extra, "Accept:", (unsigned long int)7);
  char *tmp_if_expr$59;
  if(return_value_strncasecmp$58 == 0)
    tmp_if_expr$59 = "";

  else
    tmp_if_expr$59 = accept;
  char *return_value_url_get_conttype$60;
  return_value_url_get_conttype$60=url_get_conttype(U);
  unsigned long int return_value_url_get_postlen$61;
  return_value_url_get_postlen$61=url_get_postlen(U);
  signed int return_value_snprintf$62;
  return_value_snprintf$62=snprintf$link5(request, mlen, "%s %s %s\r\n%s%s%s%s%s%sUser-Agent: %s\r\n%sConnection: %s\r\nContent-type: %s\r\nContent-length: %ld\r\n\r\n", return_value_url_get_method_name$53, (const void *)fullpath, (const void *)protocol, (const void *)hoststr, tmp_if_expr$54, tmp_if_expr$55, tmp_if_expr$57, tmp_if_expr$59, (const void *)encoding, (const void *)my.uagent, (const void *)my.extra, (const void *)keepalive, return_value_url_get_conttype$60, (signed long int)return_value_url_get_postlen$61);
  rlen = (unsigned long int)return_value_snprintf$62;
  if(!(rlen >= mlen))
  {
    char *return_value_url_get_postdata$63;
    return_value_url_get_postdata$63=url_get_postdata(U);
    unsigned long int return_value_url_get_postlen$64;
    return_value_url_get_postlen$64=url_get_postlen(U);
    memcpy$link5((void *)(request + (signed long int)rlen), (const void *)return_value_url_get_postdata$63, return_value_url_get_postlen$64);
    unsigned long int return_value_url_get_postlen$65;
    return_value_url_get_postlen$65=url_get_postlen(U);
    request[(signed long int)(rlen + return_value_url_get_postlen$65)] = (char)0;
  }

  unsigned long int return_value_url_get_postlen$66;
  return_value_url_get_postlen$66=url_get_postlen(U);
  rlen = rlen + return_value_url_get_postlen$66;
  if(!(my.debug == /*enum*/boolean_false) || !(my.get == /*enum*/boolean_false))
    printf("%s\n\n", request);

  if(rlen == 0ul || !(mlen >= rlen))
  {
    char *return_value_url_get_method_name$67;
    return_value_url_get_method_name$67=url_get_method_name(U);
    NOTIFY((enum anonymous$19)FATAL, "HTTP %s: request buffer overrun! Unable to continue...", return_value_url_get_method_name$67);
  }

  signed int return_value_socket_write$68;
  return_value_socket_write$68=socket_write(C, (const void *)request, rlen);
  if(!(return_value_socket_write$68 >= 0))
    return (enum anonymous)boolean_false;

  else
  {
    xfree((void *)request);
    return (enum anonymous)boolean_true;
  }
}

// http_read
// file ./http.h line 81
signed long int http_read(struct anonymous$0 *C)
{
  signed int n = 0;
  char c;
  signed int chunk = 0;
  unsigned long int bytes = (unsigned long int)0;
  unsigned long int length = (unsigned long int)0;
  if(C == ((struct anonymous$0 *)NULL))
    NOTIFY((enum anonymous$19)FATAL, "Connection is NULL! Unable to proceed");

  static char body[10240l];
  if(!(my.debug == /*enum*/boolean_false) || !(my.get == /*enum*/boolean_false))
  {
    if(C->content.length >= 1ul)
    {
      unsigned long int tmp_if_expr$1;
      if(!(C->content.length >= 10240ul))
        tmp_if_expr$1 = C->content.length;

      else
        tmp_if_expr$1 = (unsigned long int)10240;
      length = tmp_if_expr$1;
      do
      {
        signed long int return_value_socket_read$2;
        return_value_socket_read$2=socket_read(C, (void *)&c, (unsigned long int)1);
        n = (signed int)return_value_socket_read$2;
        if(n == 0)
          break;

        echo("%c", c);
        bytes = bytes + (unsigned long int)n;
        unsigned long int tmp_if_expr$3;
        if(!(C->content.length + -bytes >= 10240ul))
          tmp_if_expr$3 = C->content.length - bytes;

        else
          tmp_if_expr$3 = (unsigned long int)10240;
        length = tmp_if_expr$3;
      }
      while(!(bytes >= C->content.length));
    }

    else
      do
      {
        signed long int return_value_socket_read$4;
        return_value_socket_read$4=socket_read(C, (void *)&c, (unsigned long int)1);
        n = (signed int)return_value_socket_read$4;
        if(n == 0)
          break;

        echo("%c", c);
        bytes = bytes + (unsigned long int)n;
      }
      while((_Bool)1);
  }

  else
    if(C->content.length >= 1ul)
    {
      unsigned long int tmp_if_expr$5;
      if(!(C->content.length >= 10240ul))
        tmp_if_expr$5 = C->content.length;

      else
        tmp_if_expr$5 = (unsigned long int)10240;
      length = tmp_if_expr$5;
      do
      {
        memset$link9((void *)body, 0, sizeof(char [10240l]) /*10240ul*/ );
        signed long int return_value_socket_read$6;
        return_value_socket_read$6=socket_read(C, (void *)body, length);
        n = (signed int)return_value_socket_read$6;
        if(n == 0)
          break;

        bytes = bytes + (unsigned long int)n;
        unsigned long int tmp_if_expr$7;
        if(!(C->content.length + -bytes >= 10240ul))
          tmp_if_expr$7 = C->content.length - bytes;

        else
          tmp_if_expr$7 = (unsigned long int)10240;
        length = tmp_if_expr$7;
      }
      while(!(bytes >= C->content.length));
    }

    else
    {
      _Bool tmp_if_expr$10;
      if(!(my.chunked == /*enum*/boolean_false))
        tmp_if_expr$10 = (signed int)C->content.transfer == CHUNKED ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$10 = (_Bool)0;
      if(tmp_if_expr$10)
      {
        signed int tries = 0;
        while(!(tries >= 128))
        {
          chunk=http_chunk_size(C);
          if(chunk == 0)
            break;

          else
            if(!(chunk >= 0))
            {
              tries = tries + 1;
              continue;
            }

          do
          {
            signed int http_read$$1$$2$$2$$1$$2$$n;
            memset$link9((void *)body, 0, (unsigned long int)10240);
            signed long int return_value_socket_read$8;
            return_value_socket_read$8=socket_read(C, (void *)body, (unsigned long int)(chunk > 10240 ? 10240 : chunk));
            http_read$$1$$2$$2$$1$$2$$n = (signed int)return_value_socket_read$8;
            chunk = chunk - http_read$$1$$2$$2$$1$$2$$n;
            bytes = bytes + (unsigned long int)http_read$$1$$2$$2$$1$$2$$n;
          }
          while(chunk >= 1);
        }
      }

      else
        do
        {
          memset$link9((void *)body, 0, sizeof(char [10240l]) /*10240ul*/ );
          signed long int return_value_socket_read$9;
          return_value_socket_read$9=socket_read(C, (void *)body, sizeof(char [10240l]) /*10240ul*/ );
          n = (signed int)return_value_socket_read$9;
          if(n == 0)
            break;

          bytes = bytes + (unsigned long int)n;
        }
        while((_Bool)1);
    }
  echo("\n");
  return (signed long int)bytes;
}

// http_read_headers
// file ./http.h line 80
struct headers * http_read_headers(struct anonymous$0 *C, struct URL_T *U)
{
  signed int x;
  signed int n;
  char c;
  struct headers *h;
  char line[8192l];
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct headers) /*8336ul*/ , (unsigned long int)1);
  h = (struct headers *)return_value_xcalloc$1;
  signed long int return_value_socket_read$2;
  signed int return_value_strncasecmp$11;
  const unsigned short int **return_value___ctype_b_loc$14;
  const unsigned short int **return_value___ctype_b_loc$16;
  const unsigned short int **return_value___ctype_b_loc$27;
  const unsigned short int **return_value___ctype_b_loc$29;
  const unsigned short int **return_value___ctype_b_loc$35;
  const unsigned short int **return_value___ctype_b_loc$37;
  signed int return_value_strncasecmp$41;
  while((_Bool)1)
  {
    x = 0;
    memset$link9((void *)&line, 0, (unsigned long int)8192);
    do
    {
      return_value_socket_read$2=socket_read(C, (void *)&c, (unsigned long int)1);
      n = (signed int)return_value_socket_read$2;
      if(!(n == 1))
        break;

      if(!(x >= 8192))
        line[(signed long int)x] = c;

      else
        line[(signed long int)x] = (char)10;
      echo("%c", c);
      _Bool tmp_if_expr$3;
      if((signed int)line[0l] == 10)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (signed int)line[(signed long int)1] == 10 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
        return h;

      if((signed int)line[(signed long int)x] == 10)
        break;

      x = x + 1;
    }
    while((_Bool)1);
    line[(signed long int)x] = (char)0;
    if(x >= 1)
    {
      if((signed int)line[(signed long int)(x + -1)] == 13)
        line[(signed long int)(x - 1)] = (char)0;

    }

    signed int return_value_strncasecmp$4;
    return_value_strncasecmp$4=strncasecmp(line, "http", (unsigned long int)4);
    if(return_value_strncasecmp$4 == 0)
    {
      strncpy$link3(h->head, line, (unsigned long int)8);
      h->code=atoi$link1(line + (signed long int)9);
    }

    signed int return_value_strncasecmp$6;
    return_value_strncasecmp$6=strncasecmp(line, "content-length: ", (unsigned long int)16);
    if(return_value_strncasecmp$6 == 0)
    {
      signed int return_value_atoi$5;
      return_value_atoi$5=atoi$link1(line + (signed long int)16);
      C->content.length = (unsigned long int)return_value_atoi$5;
    }

    signed int return_value_strncasecmp$10;
    return_value_strncasecmp$10=strncasecmp(line, "set-cookie: ", (unsigned long int)12);
    if(return_value_strncasecmp$10 == 0)
    {
      if(!(my.cookies == /*enum*/boolean_false))
      {
        memset$link9((void *)h->cookie, 0, sizeof(char [8192l]) /*8192ul*/ );
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(line);
        strncpy$link3(h->cookie, line + (signed long int)12, return_value_strlen$7);
        unsigned long int return_value_pthread_self$8;
        return_value_pthread_self$8=pthread_self();
        char *return_value_url_get_hostname$9;
        return_value_url_get_hostname$9=url_get_hostname(U);
        add_cookie(return_value_pthread_self$8, return_value_url_get_hostname$9, h->cookie);
      }

    }

    signed int return_value_strncasecmp$13;
    return_value_strncasecmp$13=strncasecmp(line, "connection: ", (unsigned long int)12);
    if(return_value_strncasecmp$13 == 0)
    {
      signed int return_value_strncasecmp$12;
      return_value_strncasecmp$12=strncasecmp(line + (signed long int)12, "keep-alive", (unsigned long int)10);
      if(return_value_strncasecmp$12 == 0)
        h->keepalive = 1;

      else
      {
        return_value_strncasecmp$11=strncasecmp(line + (signed long int)12, "close", (unsigned long int)5);
        if(return_value_strncasecmp$11 == 0)
          h->keepalive = 0;

      }
    }

    signed int return_value_strncasecmp$19;
    return_value_strncasecmp$19=strncasecmp(line, "keep-alive: ", (unsigned long int)12);
    if(return_value_strncasecmp$19 == 0)
    {
      char *tmp = "";
      char *option = "";
      char *value = "";
      char *newline = (char *)line;
      do
      {
        tmp=__parse_pair(&newline);
        if(tmp == ((char *)NULL))
          break;

        option = tmp;
        for( ; !(*tmp == 0); tmp = tmp + 1l)
        {
          return_value___ctype_b_loc$14=__ctype_b_loc();
          if(!((8192 & (signed int)(*return_value___ctype_b_loc$14)[(signed long int)(signed int)(unsigned char)(signed int)*tmp]) == 0))
            break;

          if((signed int)*tmp == 61)
            break;

          if((signed int)*tmp == 58)
            break;

        }
        char *tmp_post$15 = tmp;
        tmp = tmp + 1l;
        *tmp_post$15 = (char)0;
        do
        {
          return_value___ctype_b_loc$16=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$16)[(signed long int)(signed int)(unsigned char)(signed int)*tmp]) == 0)
          {
            if(!((signed int)*tmp == 61))
            {
              if(!((signed int)*tmp == 58))
                break;

            }

          }

          tmp = tmp + 1l;
        }
        while((_Bool)1);
        value = tmp;
        for( ; !(*tmp == 0); tmp = tmp + 1l)
          ;
        signed int return_value_strncasecmp$17;
        return_value_strncasecmp$17=strncasecmp(option, "timeout", (unsigned long int)7);
        if(return_value_strncasecmp$17 == 0)
        {
          if(!(value == ((char *)NULL)))
            C->connection.timeout=atoi$link1(value);

          else
            C->connection.timeout = 15;
        }

        signed int return_value_strncasecmp$18;
        return_value_strncasecmp$18=strncasecmp(option, "max", (unsigned long int)3);
        if(return_value_strncasecmp$18 == 0)
        {
          if(!(value == ((char *)NULL)))
            C->connection.max=atoi$link1(value);

          else
            C->connection.max = 0;
        }

      }
      while((_Bool)1);
    }

    signed int return_value_strncasecmp$21;
    return_value_strncasecmp$21=strncasecmp(line, "location: ", (unsigned long int)10);
    if(return_value_strncasecmp$21 == 0)
    {
      unsigned long int len;
      len=strlen(line);
      void *return_value_xmalloc$20;
      return_value_xmalloc$20=xmalloc(len);
      h->redirect = (char *)return_value_xmalloc$20;
      memcpy$link5((void *)h->redirect, (const void *)(line + (signed long int)10), len - (unsigned long int)10);
      h->redirect[(signed long int)(len - (unsigned long int)10)] = (char)0;
    }

    signed int return_value_strncasecmp$23;
    return_value_strncasecmp$23=strncasecmp(line, "last-modified: ", (unsigned long int)15);
    if(return_value_strncasecmp$23 == 0)
    {
      char *date;
      unsigned long int http_read_headers$$1$$1$$8$$len;
      http_read_headers$$1$$1$$8$$len=strlen(line);
      if(!(my.cache == /*enum*/boolean_false))
      {
        void *return_value_xmalloc$22;
        return_value_xmalloc$22=xmalloc(http_read_headers$$1$$1$$8$$len);
        date = (char *)return_value_xmalloc$22;
        memcpy$link5((void *)date, (const void *)(line + (signed long int)15), http_read_headers$$1$$1$$8$$len - (unsigned long int)14);
        url_set_last_modified(U, date);
        xfree((void *)date);
      }

    }

    signed int return_value_strncasecmp$25;
    return_value_strncasecmp$25=strncasecmp(line, "etag: ", (unsigned long int)6);
    if(return_value_strncasecmp$25 == 0)
    {
      char *etag;
      unsigned long int http_read_headers$$1$$1$$9$$len;
      http_read_headers$$1$$1$$9$$len=strlen(line);
      if(!(my.cache == /*enum*/boolean_false))
      {
        void *return_value_xmalloc$24;
        return_value_xmalloc$24=xmalloc(http_read_headers$$1$$1$$9$$len);
        etag = (char *)return_value_xmalloc$24;
        memcpy$link5((void *)etag, (const void *)(line + (signed long int)6), http_read_headers$$1$$1$$9$$len - (unsigned long int)5);
        etag[(signed long int)(http_read_headers$$1$$1$$9$$len - (unsigned long int)1)] = (char)0;
        url_set_etag(U, etag);
        xfree((void *)etag);
      }

    }

    signed int return_value_strncasecmp$33;
    return_value_strncasecmp$33=strncasecmp(line, "www-authenticate: ", (unsigned long int)18);
    if(return_value_strncasecmp$33 == 0)
    {
      char *http_read_headers$$1$$1$$10$$tmp = "";
      char *http_read_headers$$1$$1$$10$$option = "";
      char *http_read_headers$$1$$1$$10$$value = "";
      char *http_read_headers$$1$$1$$10$$newline = (char *)line;
      signed int return_value_strncasecmp$26;
      return_value_strncasecmp$26=strncasecmp(line + (signed long int)18, "digest", (unsigned long int)6);
      if(return_value_strncasecmp$26 == 0)
      {
        http_read_headers$$1$$1$$10$$newline = http_read_headers$$1$$1$$10$$newline + (signed long int)24;
        h->auth.type.www = (enum anonymous$29)DIGEST;
        h->auth.challenge.www=xstrdup(line + (signed long int)18);
      }

      else
      {
        http_read_headers$$1$$1$$10$$newline = http_read_headers$$1$$1$$10$$newline + (signed long int)23;
        h->auth.type.www = (enum anonymous$29)BASIC;
      }
      do
      {
        http_read_headers$$1$$1$$10$$tmp=__parse_pair(&http_read_headers$$1$$1$$10$$newline);
        if(http_read_headers$$1$$1$$10$$tmp == ((char *)NULL))
          break;

        http_read_headers$$1$$1$$10$$option = http_read_headers$$1$$1$$10$$tmp;
        for( ; !(*http_read_headers$$1$$1$$10$$tmp == 0); http_read_headers$$1$$1$$10$$tmp = http_read_headers$$1$$1$$10$$tmp + 1l)
        {
          return_value___ctype_b_loc$27=__ctype_b_loc();
          if(!((8192 & (signed int)(*return_value___ctype_b_loc$27)[(signed long int)(signed int)(unsigned char)(signed int)*http_read_headers$$1$$1$$10$$tmp]) == 0))
            break;

          if((signed int)*http_read_headers$$1$$1$$10$$tmp == 61)
            break;

          if((signed int)*http_read_headers$$1$$1$$10$$tmp == 58)
            break;

        }
        char *tmp_post$28 = http_read_headers$$1$$1$$10$$tmp;
        http_read_headers$$1$$1$$10$$tmp = http_read_headers$$1$$1$$10$$tmp + 1l;
        *tmp_post$28 = (char)0;
        do
        {
          return_value___ctype_b_loc$29=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$29)[(signed long int)(signed int)(unsigned char)(signed int)*http_read_headers$$1$$1$$10$$tmp]) == 0)
          {
            if(!((signed int)*http_read_headers$$1$$1$$10$$tmp == 61))
            {
              if(!((signed int)*http_read_headers$$1$$1$$10$$tmp == 58))
                break;

            }

          }

          http_read_headers$$1$$1$$10$$tmp = http_read_headers$$1$$1$$10$$tmp + 1l;
        }
        while((_Bool)1);
        http_read_headers$$1$$1$$10$$value = http_read_headers$$1$$1$$10$$tmp;
        for( ; !(*http_read_headers$$1$$1$$10$$tmp == 0); http_read_headers$$1$$1$$10$$tmp = http_read_headers$$1$$1$$10$$tmp + 1l)
          ;
        signed int return_value_strncasecmp$32;
        return_value_strncasecmp$32=strncasecmp(http_read_headers$$1$$1$$10$$option, "realm", (unsigned long int)5);
        if(return_value_strncasecmp$32 == 0)
        {
          if(!(http_read_headers$$1$$1$$10$$value == ((char *)NULL)))
          {
            char *return_value___dequote$30;
            return_value___dequote$30=__dequote(http_read_headers$$1$$1$$10$$value);
            h->auth.realm.www=xstrdup(return_value___dequote$30);
            char *return_value___dequote$31;
            return_value___dequote$31=__dequote(http_read_headers$$1$$1$$10$$value);
            url_set_realm(U, return_value___dequote$31);
          }

          else
            h->auth.realm.www=xstrdup("");
        }

      }
      while((_Bool)1);
    }

    signed int return_value_strncasecmp$40;
    return_value_strncasecmp$40=strncasecmp(line, "proxy-authenticate: ", (unsigned long int)20);
    if(return_value_strncasecmp$40 == 0)
    {
      char *http_read_headers$$1$$1$$11$$tmp = "";
      char *http_read_headers$$1$$1$$11$$option = "";
      char *http_read_headers$$1$$1$$11$$value = "";
      char *http_read_headers$$1$$1$$11$$newline = (char *)line;
      signed int return_value_strncasecmp$34;
      return_value_strncasecmp$34=strncasecmp(line + (signed long int)20, "digest", (unsigned long int)6);
      if(return_value_strncasecmp$34 == 0)
      {
        http_read_headers$$1$$1$$11$$newline = http_read_headers$$1$$1$$11$$newline + (signed long int)26;
        h->auth.type.proxy = (enum anonymous$29)DIGEST;
        h->auth.challenge.proxy=xstrdup(line + (signed long int)20);
      }

      else
      {
        http_read_headers$$1$$1$$11$$newline = http_read_headers$$1$$1$$11$$newline + (signed long int)25;
        h->auth.type.proxy = (enum anonymous$29)BASIC;
      }
      do
      {
        http_read_headers$$1$$1$$11$$tmp=__parse_pair(&http_read_headers$$1$$1$$11$$newline);
        if(http_read_headers$$1$$1$$11$$tmp == ((char *)NULL))
          break;

        http_read_headers$$1$$1$$11$$option = http_read_headers$$1$$1$$11$$tmp;
        for( ; !(*http_read_headers$$1$$1$$11$$tmp == 0); http_read_headers$$1$$1$$11$$tmp = http_read_headers$$1$$1$$11$$tmp + 1l)
        {
          return_value___ctype_b_loc$35=__ctype_b_loc();
          if(!((8192 & (signed int)(*return_value___ctype_b_loc$35)[(signed long int)(signed int)(unsigned char)(signed int)*http_read_headers$$1$$1$$11$$tmp]) == 0))
            break;

          if((signed int)*http_read_headers$$1$$1$$11$$tmp == 61)
            break;

          if((signed int)*http_read_headers$$1$$1$$11$$tmp == 58)
            break;

        }
        char *tmp_post$36 = http_read_headers$$1$$1$$11$$tmp;
        http_read_headers$$1$$1$$11$$tmp = http_read_headers$$1$$1$$11$$tmp + 1l;
        *tmp_post$36 = (char)0;
        do
        {
          return_value___ctype_b_loc$37=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$37)[(signed long int)(signed int)(unsigned char)(signed int)*http_read_headers$$1$$1$$11$$tmp]) == 0)
          {
            if(!((signed int)*http_read_headers$$1$$1$$11$$tmp == 61))
            {
              if(!((signed int)*http_read_headers$$1$$1$$11$$tmp == 58))
                break;

            }

          }

          http_read_headers$$1$$1$$11$$tmp = http_read_headers$$1$$1$$11$$tmp + 1l;
        }
        while((_Bool)1);
        http_read_headers$$1$$1$$11$$value = http_read_headers$$1$$1$$11$$tmp;
        for( ; !(*http_read_headers$$1$$1$$11$$tmp == 0); http_read_headers$$1$$1$$11$$tmp = http_read_headers$$1$$1$$11$$tmp + 1l)
          ;
        signed int return_value_strncasecmp$39;
        return_value_strncasecmp$39=strncasecmp(http_read_headers$$1$$1$$11$$option, "realm", (unsigned long int)5);
        if(return_value_strncasecmp$39 == 0)
        {
          if(!(http_read_headers$$1$$1$$11$$value == ((char *)NULL)))
          {
            char *return_value___dequote$38;
            return_value___dequote$38=__dequote(http_read_headers$$1$$1$$11$$value);
            h->auth.realm.proxy=xstrdup(return_value___dequote$38);
          }

          else
            h->auth.realm.proxy=xstrdup("");
        }

      }
      while((_Bool)1);
    }

    signed int return_value_strncasecmp$43;
    return_value_strncasecmp$43=strncasecmp(line, "transfer-encoding: ", (unsigned long int)19);
    if(return_value_strncasecmp$43 == 0)
    {
      signed int return_value_strncasecmp$42;
      return_value_strncasecmp$42=strncasecmp(line + (signed long int)20, "chunked", (unsigned long int)7);
      if(!(return_value_strncasecmp$42 == 0))
        C->content.transfer = (enum anonymous$32)CHUNKED;

      else
      {
        return_value_strncasecmp$41=strncasecmp(line + (signed long int)20, "trailer", (unsigned long int)7);
        if(!(return_value_strncasecmp$41 == 0))
          C->content.transfer = (enum anonymous$32)TRAILER;

        else
          C->content.transfer = (enum anonymous$32)NONE;
      }
    }

    signed int return_value_strncasecmp$44;
    return_value_strncasecmp$44=strncasecmp(line, "expires: ", (unsigned long int)9);
    signed int return_value_strncasecmp$45;
    return_value_strncasecmp$45=strncasecmp(line, "cache-control: ", (unsigned long int)15);
    if(!(n >= 1))
    {
      echo("read error: %s:%d", (const void *)"http.c", 609);
      http_free_headers(h);
      return (struct headers *)(void *)0;
    }

  }
  return h;
}

// https_tunnel_request
// file ./http.h line 82
enum anonymous https_tunnel_request(struct anonymous$0 *C, char *host, signed int port)
{
  unsigned long int rlen;
  unsigned long int n;
  char request[256l];
  _Bool tmp_if_expr$3;
  enum anonymous return_value_auth_get_proxy_required$2;
  if((signed int)C->encrypt == boolean_true)
  {
    return_value_auth_get_proxy_required$2=auth_get_proxy_required(my.auth);
    tmp_if_expr$3 = return_value_auth_get_proxy_required$2 != (enum anonymous)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    snprintf$link5(request, sizeof(char [256l]) /*256ul*/ , "CONNECT %s:%d HTTP/1.0\r\nUser-agent: Proxy-User\r\n\r\n", host, port);
    rlen=strlen(request);
    echo("%s", (const void *)request);
    signed int return_value_socket_write$1;
    return_value_socket_write$1=socket_write(C, (const void *)request, rlen);
    n = (unsigned long int)return_value_socket_write$1;
    if(!(n == rlen))
    {
      NOTIFY((enum anonymous$19)ERROR, "HTTP: unable to write to socket.");
      return (enum anonymous)boolean_false;
    }

  }

  else
    return (enum anonymous)boolean_false;
  return (enum anonymous)boolean_true;
}

// https_tunnel_response
// file ./http.h line 83
signed int https_tunnel_response(struct anonymous$0 *C)
{
  signed int x;
  signed int n;
  char c;
  char line[256l];
  signed int code = 100;
  signed long int return_value_read$1;
  while((_Bool)1)
  {
    x = 0;
    memset$link9((void *)&line, 0, sizeof(char [256l]) /*256ul*/ );
    do
    {
      return_value_read$1=read(C->sock, (void *)&c, (unsigned long int)1);
      n = (signed int)return_value_read$1;
      if(!(n == 1))
        break;

      line[(signed long int)x] = c;
      echo("%c", c);
      _Bool tmp_if_expr$2;
      if((signed int)line[0l] == 10)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed int)line[(signed long int)1] == 10 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        return code;

      if((signed int)line[(signed long int)x] == 10)
        break;

      x = x + 1;
    }
    while((_Bool)1);
    line[(signed long int)x] = (char)0;
    signed int return_value_strncasecmp$3;
    return_value_strncasecmp$3=strncasecmp(line, "http", (unsigned long int)4);
    if(return_value_strncasecmp$3 == 0)
      code=atoi$link1(line + (signed long int)9);

  }
}

// init_config
// file init.c line 39
signed int init_config(void)
{
  char *e;
  signed int res;
  struct stat buf;
  signed int tmp_statement_expression$4;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$5;
  return_value___builtin_strcmp$5=__builtin_strcmp(my.rc, "");
  tmp_statement_expression$4 = return_value___builtin_strcmp$5;
  signed int *return_value___errno_location$2;
  if(tmp_statement_expression$4 == 0)
  {
    e=getenv("SIEGERC");
    if(!(e == ((char *)NULL)))
      snprintf$link6(my.rc, sizeof(char [256l]) /*256ul*/ , "%s", e);

    else
    {
      char *return_value_getenv$1;
      return_value_getenv$1=getenv("HOME");
      snprintf$link6(my.rc, sizeof(char [256l]) /*256ul*/ , "%s/.siegerc", return_value_getenv$1);
      signed int return_value_stat$3;
      return_value_stat$3=stat(my.rc, &buf);
      if(!(return_value_stat$3 >= 0))
      {
        return_value___errno_location$2=__errno_location();
        if(*return_value___errno_location$2 == 2)
          snprintf$link6(my.rc, sizeof(char [256l]) /*256ul*/ , "/etc/siege/siegerc");

      }

    }
  }

  my.debug = (enum anonymous)boolean_false;
  my.quiet = (enum anonymous)boolean_false;
  my.internet = (enum anonymous)boolean_false;
  my.config = (enum anonymous)boolean_false;
  my.cookies = (enum anonymous)boolean_true;
  my.csv = (enum anonymous)boolean_false;
  my.fullurl = (enum anonymous)boolean_false;
  my.escape = (enum anonymous)boolean_true;
  my.secs = -1;
  my.reps = 10301062;
  my.bids = 5;
  my.login = (enum anonymous)boolean_false;
  my.failures = 1024;
  my.failed = 0;
  my.auth=new_auth();
  auth_set_proxy_required(my.auth, (enum anonymous)boolean_false);
  auth_set_proxy_port(my.auth, 3128);
  my.timeout = 30;
  my.timestamp = (enum anonymous)boolean_false;
  my.chunked = (enum anonymous)boolean_false;
  my.unique = (enum anonymous)boolean_true;
  my.extra[(signed long int)0] = (char)0;
  my.follow = (enum anonymous)boolean_true;
  my.zero_ok = (enum anonymous)boolean_true;
  my.signaled = 0;
  my.ssl_timeout = 300;
  my.ssl_cert = (char *)(void *)0;
  my.ssl_key = (char *)(void *)0;
  my.ssl_ciphers = (char *)(void *)0;
  my.lurl=new_array();
  res=pthread_mutex_init(&my.lock, (const union anonymous$18 *)(void *)0);
  if(!(res == 0))
    NOTIFY((enum anonymous$19)FATAL, "unable to initiate lock");

  res=pthread_cond_init(&my.cond, (const union anonymous$18 *)(void *)0);
  if(!(res == 0))
    NOTIFY((enum anonymous$19)FATAL, "unable to initiate condition");

  signed int return_value_load_conf$6;
  return_value_load_conf$6=load_conf(my.rc);
  if(!(return_value_load_conf$6 >= 0))
  {
    fprintf$link3(stderr, "****************************************************\n");
    fprintf$link3(stderr, "siege: could not open %s\n", (const void *)my.rc);
    fprintf$link3(stderr, "run 'siege.config' to generate a new .siegerc file\n");
    fprintf$link3(stderr, "****************************************************\n");
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen$7;
    return_value_strlen$7=strlen(my.file);
    if(!(return_value_strlen$7 >= 1ul))
      snprintf$link6(my.file, sizeof(char [128l]) /*128ul*/ , "%s", (const void *)"/etc/siege/urls.txt");

    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(my.uagent);
    if(!(return_value_strlen$8 >= 1ul))
      snprintf$link6(my.uagent, sizeof(char [256l]) /*256ul*/ , "Mozilla/5.0 (%s) Siege/%s", (const void *)"pc-x86_64-linux-gnu", version_string);

    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(my.conttype);
    if(!(return_value_strlen$9 >= 1ul))
      snprintf$link6(my.conttype, sizeof(char [256l]) /*256ul*/ , "application/x-www-form-urlencoded");

    unsigned long int return_value_strlen$10;
    return_value_strlen$10=strlen(my.encoding);
    if(!(return_value_strlen$10 >= 1ul))
      snprintf$link6(my.encoding, sizeof(char [256l]) /*256ul*/ , "*");

    unsigned long int return_value_strlen$11;
    return_value_strlen$11=strlen(my.logfile);
    if(!(return_value_strlen$11 >= 1ul))
      snprintf$link6(my.logfile, sizeof(char [128l]) /*128ul*/ , "%s", (const void *)"/var/log/siege.log");

    return 0;
  }
}

// is_ascii
// file load.c line 225
enum anonymous is_ascii(char *file)
{
  signed int i = 0;
  for( ; !(i >= 162); i = i + 1)
  {
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(file);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(tmap[(signed long int)i].ext);
    if(return_value_strlen$4 >= return_value_strlen$5)
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(file);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tmap[(signed long int)i].ext);
      enum anonymous return_value_strmatch$3;
      return_value_strmatch$3=strmatch(((char *)file + (signed long int)return_value_strlen$1) - (signed long int)return_value_strlen$2, (char *)tmap[(signed long int)i].ext);
      if(!(return_value_strmatch$3 == /*enum*/boolean_false))
        return tmap[(signed long int)i].ascii;

    }

  }
  return tmap[(signed long int)0].ascii;
}

// is_variable_line
// file cfg.c line 169
enum anonymous is_variable_line(char *line)
{
  char *is_variable_line$$1$$pos;
  char *x;
  char c;
  is_variable_line$$1$$pos=strstr(line, "=");
  if(!(is_variable_line$$1$$pos == ((char *)NULL)))
  {
    x = line;
    for( ; !(x >= is_variable_line$$1$$pos); x = x + 1l)
    {
      c = *x;
      if(!((signed int)c == 95) && ((signed int)c >= 58 || !((signed int)c >= 48)) && ((signed int)c >= 91 || !((signed int)c >= 65)) && ((signed int)c >= 123 || !((signed int)c >= 97)))
        return (enum anonymous)boolean_false;

    }
  }

  else
    return (enum anonymous)boolean_false;
  return (enum anonymous)boolean_true;
}

// itoa
// file util.c line 76
void itoa(signed int n, char *s)
{
  signed int i;
  signed int sign = n;
  if(!(sign >= 0))
    n = -n;

  i = 0;
  do
  {
    signed int tmp_post$1 = i;
    i = i + 1;
    s[(signed long int)tmp_post$1] = (char)(n % 10 + 48);
    n = n / 10;
  }
  while(n >= 1);
  if(!(sign >= 0))
  {
    signed int tmp_post$2 = i;
    i = i + 1;
    s[(signed long int)tmp_post$2] = (char)45;
  }

  s[(signed long int)i] = (char)0;
  reverse(s);
}

// load_conf
// file init.c line 239
signed int load_conf(char *filename)
{
  struct _IO_FILE *fp;
  struct HASH_T *H;
  signed int line_num = 0;
  char *line;
  char *tmp;
  char *option;
  char *optionptr;
  char *value;
  fp=fopen(filename, "r");
  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *return_value_strstr$4;
  char *return_value_strstr$5;
  enum anonymous return_value_strmatch$85;
  enum anonymous return_value_strmatch$84;
  enum anonymous return_value_strmatch$83;
  enum anonymous return_value_strmatch$82;
  enum anonymous return_value_strmatch$81;
  enum anonymous return_value_strmatch$80;
  enum anonymous return_value_strmatch$79;
  enum anonymous return_value_strmatch$78;
  enum anonymous return_value_strmatch$77;
  enum anonymous return_value_strmatch$76;
  enum anonymous return_value_strmatch$75;
  enum anonymous return_value_strmatch$74;
  enum anonymous return_value_strmatch$73;
  enum anonymous return_value_strmatch$72;
  enum anonymous return_value_strmatch$71;
  enum anonymous return_value_strmatch$70;
  enum anonymous return_value_strmatch$69;
  enum anonymous return_value_strmatch$68;
  enum anonymous return_value_strmatch$67;
  enum anonymous return_value_strmatch$66;
  enum anonymous return_value_strmatch$65;
  enum anonymous return_value_strmatch$64;
  enum anonymous return_value_strmatch$63;
  signed int return_value_strncasecmp$62;
  enum anonymous return_value_strmatch$61;
  enum anonymous return_value_strmatch$60;
  enum anonymous return_value_strmatch$59;
  enum anonymous return_value_strmatch$58;
  enum anonymous return_value_strmatch$57;
  enum anonymous return_value_strmatch$56;
  enum anonymous return_value_strmatch$55;
  enum anonymous return_value_strmatch$54;
  enum anonymous return_value_strmatch$53;
  enum anonymous return_value_strmatch$52;
  enum anonymous return_value_strmatch$51;
  enum anonymous return_value_strmatch$50;
  enum anonymous return_value_strmatch$49;
  enum anonymous return_value_strmatch$48;
  enum anonymous return_value_strmatch$47;
  enum anonymous return_value_strmatch$46;
  enum anonymous return_value_strmatch$45;
  enum anonymous return_value_strmatch$44;
  enum anonymous return_value_strmatch$43;
  enum anonymous return_value_strmatch$42;
  enum anonymous return_value_strmatch$41;
  enum anonymous return_value_strmatch$40;
  if(fp == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    H=new_hash();
    do
    {
      line=chomp_line(fp, &line, &line_num);
      if(line == ((char *)NULL))
        break;

      tmp=trim(line);
      option=xstrdup(line);
      optionptr = option;
      for( ; !(*optionptr == 0); optionptr = optionptr + 1l)
      {
        return_value___ctype_b_loc$1=__ctype_b_loc();
        if(!((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)(signed int)*optionptr]) == 0))
          break;

        if((signed int)*optionptr == 61)
          break;

        if((signed int)*optionptr == 58)
          break;

      }
      char *tmp_post$2 = optionptr;
      optionptr = optionptr + 1l;
      *tmp_post$2 = (char)0;
      do
      {
        return_value___ctype_b_loc$3=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)(signed int)*optionptr]) == 0)
        {
          if(!((signed int)*optionptr == 61))
          {
            if(!((signed int)*optionptr == 58))
              break;

          }

        }

        optionptr = optionptr + 1l;
      }
      while((_Bool)1);
      value=xstrdup(optionptr);
      for( ; !(*line == 0); line = line + 1l)
        ;
      do
      {
        return_value_strstr$4=strstr(option, "$");
        if(return_value_strstr$4 == ((char *)NULL))
          break;

        option=evaluate(H, option);
      }
      while((_Bool)1);
      do
      {
        return_value_strstr$5=strstr(value, "$");
        if(return_value_strstr$5 == ((char *)NULL))
          break;

        value=evaluate(H, value);
      }
      while((_Bool)1);
      enum anonymous return_value_strmatch$86;
      return_value_strmatch$86=strmatch(option, "verbose");
      if(!(return_value_strmatch$86 == /*enum*/boolean_false))
      {
        signed int return_value_strncasecmp$6;
        return_value_strncasecmp$6=strncasecmp(value, "true", (unsigned long int)4);
        if(return_value_strncasecmp$6 == 0)
          my.verbose = (enum anonymous)boolean_true;

        else
          my.verbose = (enum anonymous)boolean_false;
      }

      else
      {
        return_value_strmatch$85=strmatch(option, "quiet");
        if(!(return_value_strmatch$85 == /*enum*/boolean_false))
        {
          signed int return_value_strncasecmp$7;
          return_value_strncasecmp$7=strncasecmp(value, "true", (unsigned long int)4);
          if(return_value_strncasecmp$7 == 0)
            my.quiet = (enum anonymous)boolean_true;

          else
            my.quiet = (enum anonymous)boolean_false;
        }

        else
        {
          return_value_strmatch$84=strmatch(option, "csv");
          if(!(return_value_strmatch$84 == /*enum*/boolean_false))
          {
            signed int return_value_strncasecmp$8;
            return_value_strncasecmp$8=strncasecmp(value, "true", (unsigned long int)4);
            if(return_value_strncasecmp$8 == 0)
              my.csv = (enum anonymous)boolean_true;

            else
              my.csv = (enum anonymous)boolean_false;
          }

          else
          {
            return_value_strmatch$83=strmatch(option, "fullurl");
            if(!(return_value_strmatch$83 == /*enum*/boolean_false))
            {
              signed int return_value_strncasecmp$9;
              return_value_strncasecmp$9=strncasecmp(value, "true", (unsigned long int)4);
              if(return_value_strncasecmp$9 == 0)
                my.fullurl = (enum anonymous)boolean_true;

              else
                my.fullurl = (enum anonymous)boolean_false;
            }

            else
            {
              return_value_strmatch$82=strmatch(option, "display-id");
              if(!(return_value_strmatch$82 == /*enum*/boolean_false))
              {
                signed int return_value_strncasecmp$10;
                return_value_strncasecmp$10=strncasecmp(value, "true", (unsigned long int)4);
                if(return_value_strncasecmp$10 == 0)
                  my.display = (enum anonymous)boolean_true;

                else
                  my.display = (enum anonymous)boolean_false;
              }

              else
              {
                return_value_strmatch$81=strmatch(option, "logging");
                if(!(return_value_strmatch$81 == /*enum*/boolean_false))
                {
                  signed int return_value_strncasecmp$11;
                  return_value_strncasecmp$11=strncasecmp(value, "true", (unsigned long int)4);
                  if(return_value_strncasecmp$11 == 0)
                    my.logging = (enum anonymous)boolean_true;

                  else
                    my.logging = (enum anonymous)boolean_false;
                }

                else
                {
                  return_value_strmatch$80=strmatch(option, "show-logfile");
                  if(!(return_value_strmatch$80 == /*enum*/boolean_false))
                  {
                    signed int return_value_strncasecmp$12;
                    return_value_strncasecmp$12=strncasecmp(value, "true", (unsigned long int)4);
                    if(return_value_strncasecmp$12 == 0)
                      my.shlog = (enum anonymous)boolean_true;

                    else
                      my.shlog = (enum anonymous)boolean_false;
                  }

                  else
                  {
                    return_value_strmatch$79=strmatch(option, "logfile");
                    if(!(return_value_strmatch$79 == /*enum*/boolean_false))
                      strncpy$link4(my.logfile, value, sizeof(char [128l]) /*128ul*/ );

                    else
                    {
                      return_value_strmatch$78=strmatch(option, "cookies");
                      if(!(return_value_strmatch$78 == /*enum*/boolean_false))
                      {
                        enum anonymous return_value_strmatch$13;
                        return_value_strmatch$13=strmatch(value, "true");
                        if(!(return_value_strmatch$13 == /*enum*/boolean_false))
                          my.cookies = (enum anonymous)boolean_true;

                        else
                          my.cookies = (enum anonymous)boolean_false;
                      }

                      else
                      {
                        return_value_strmatch$77=strmatch(option, "concurrent");
                        if(!(return_value_strmatch$77 == /*enum*/boolean_false))
                        {
                          if(!(value == ((char *)NULL)))
                            my.cusers=atoi$link2(value);

                          else
                            my.cusers = 10;
                        }

                        else
                        {
                          return_value_strmatch$76=strmatch(option, "reps");
                          if(!(return_value_strmatch$76 == /*enum*/boolean_false))
                          {
                            if(!(value == ((char *)NULL)))
                              my.reps=atoi$link2(value);

                            else
                              my.reps = 5;
                          }

                          else
                          {
                            return_value_strmatch$75=strmatch(option, "time");
                            if(!(return_value_strmatch$75 == /*enum*/boolean_false))
                              parse_time(value);

                            else
                            {
                              return_value_strmatch$74=strmatch(option, "delay");
                              if(!(return_value_strmatch$74 == /*enum*/boolean_false))
                              {
                                if(!(value == ((char *)NULL)))
                                  my.delay=atoi$link2(value);

                                else
                                  my.delay = 1;
                              }

                              else
                              {
                                return_value_strmatch$73=strmatch(option, "timeout");
                                if(!(return_value_strmatch$73 == /*enum*/boolean_false))
                                {
                                  if(!(value == ((char *)NULL)))
                                    my.timeout=atoi$link2(value);

                                  else
                                    my.timeout = 15;
                                }

                                else
                                {
                                  return_value_strmatch$72=strmatch(option, "timestamp");
                                  if(!(return_value_strmatch$72 == /*enum*/boolean_false))
                                  {
                                    signed int return_value_strncasecmp$14;
                                    return_value_strncasecmp$14=strncasecmp(value, "true", (unsigned long int)4);
                                    if(return_value_strncasecmp$14 == 0)
                                      my.timestamp = (enum anonymous)boolean_true;

                                    else
                                      my.timestamp = (enum anonymous)boolean_false;
                                  }

                                  else
                                  {
                                    return_value_strmatch$71=strmatch(option, "internet");
                                    if(!(return_value_strmatch$71 == /*enum*/boolean_false))
                                    {
                                      signed int return_value_strncasecmp$15;
                                      return_value_strncasecmp$15=strncasecmp(value, "true", (unsigned long int)4);
                                      if(return_value_strncasecmp$15 == 0)
                                        my.internet = (enum anonymous)boolean_true;

                                      else
                                        my.internet = (enum anonymous)boolean_false;
                                    }

                                    else
                                    {
                                      return_value_strmatch$70=strmatch(option, "benchmark");
                                      if(!(return_value_strmatch$70 == /*enum*/boolean_false))
                                      {
                                        signed int return_value_strncasecmp$16;
                                        return_value_strncasecmp$16=strncasecmp(value, "true", (unsigned long int)4);
                                        if(return_value_strncasecmp$16 == 0)
                                          my.bench = (enum anonymous)boolean_true;

                                        else
                                          my.bench = (enum anonymous)boolean_false;
                                      }

                                      else
                                      {
                                        return_value_strmatch$69=strmatch(option, "cache");
                                        if(!(return_value_strmatch$69 == /*enum*/boolean_false))
                                        {
                                          signed int return_value_strncasecmp$17;
                                          return_value_strncasecmp$17=strncasecmp(value, "true", (unsigned long int)4);
                                          if(return_value_strncasecmp$17 == 0)
                                            my.cache = (enum anonymous)boolean_true;

                                          else
                                            my.cache = (enum anonymous)boolean_false;
                                        }

                                        else
                                        {
                                          return_value_strmatch$68=strmatch(option, "debug");
                                          if(!(return_value_strmatch$68 == /*enum*/boolean_false))
                                          {
                                            signed int return_value_strncasecmp$18;
                                            return_value_strncasecmp$18=strncasecmp(value, "true", (unsigned long int)4);
                                            if(return_value_strncasecmp$18 == 0)
                                              my.debug = (enum anonymous)boolean_true;

                                            else
                                              my.debug = (enum anonymous)boolean_false;
                                          }

                                          else
                                          {
                                            return_value_strmatch$67=strmatch(option, "gmethod");
                                            if(!(return_value_strmatch$67 == /*enum*/boolean_false))
                                            {
                                              enum anonymous return_value_strmatch$19;
                                              return_value_strmatch$19=strmatch(value, "GET");
                                              if(!(return_value_strmatch$19 == /*enum*/boolean_false))
                                                my.method = (enum anonymous$2)GET;

                                              else
                                                my.method = (enum anonymous$2)HEAD;
                                            }

                                            else
                                            {
                                              return_value_strmatch$66=strmatch(option, "file");
                                              if(!(return_value_strmatch$66 == /*enum*/boolean_false))
                                              {
                                                memset$link10((void *)my.file, 0, sizeof(char [128l]) /*128ul*/ );
                                                strncpy$link4(my.file, value, sizeof(char [128l]) /*128ul*/ );
                                              }

                                              else
                                              {
                                                return_value_strmatch$65=strmatch(option, "url");
                                                if(!(return_value_strmatch$65 == /*enum*/boolean_false))
                                                  my.url=stralloc(value);

                                                else
                                                {
                                                  return_value_strmatch$64=strmatch(option, "user-agent");
                                                  if(!(return_value_strmatch$64 == /*enum*/boolean_false))
                                                    strncpy$link4(my.uagent, value, sizeof(char [256l]) /*256ul*/ );

                                                  else
                                                  {
                                                    return_value_strmatch$63=strmatch(option, "accept-encoding");
                                                    if(!(return_value_strmatch$63 == /*enum*/boolean_false))
                                                      strncpy$link4(my.encoding, value, sizeof(char [256l]) /*256ul*/ );

                                                    else
                                                    {
                                                      return_value_strncasecmp$62=strncasecmp(option, "login", (unsigned long int)5);
                                                      if(return_value_strncasecmp$62 == 0)
                                                      {
                                                        enum anonymous return_value_strmatch$21;
                                                        return_value_strmatch$21=strmatch(option, "login-url");
                                                        if(!(return_value_strmatch$21 == /*enum*/boolean_false))
                                                        {
                                                          my.login = (enum anonymous)boolean_true;
                                                          array_push(my.lurl, (void *)value);
                                                        }

                                                        else
                                                        {
                                                          struct CREDS_T *return_value_new_creds$20;
                                                          return_value_new_creds$20=new_creds((enum anonymous$3)HTTP, value);
                                                          auth_add(my.auth, return_value_new_creds$20);
                                                        }
                                                      }

                                                      else
                                                      {
                                                        return_value_strmatch$61=strmatch(option, "attempts");
                                                        if(!(return_value_strmatch$61 == /*enum*/boolean_false))
                                                        {
                                                          if(!(value == ((char *)NULL)))
                                                            my.bids=atoi$link2(value);

                                                          else
                                                            my.bids = 3;
                                                        }

                                                        else
                                                        {
                                                          return_value_strmatch$60=strmatch(option, "username");
                                                          if(!(return_value_strmatch$60 == /*enum*/boolean_false))
                                                          {
                                                            char *return_value_trim$22;
                                                            return_value_trim$22=trim(value);
                                                            my.username=stralloc(return_value_trim$22);
                                                          }

                                                          else
                                                          {
                                                            return_value_strmatch$59=strmatch(option, "password");
                                                            if(!(return_value_strmatch$59 == /*enum*/boolean_false))
                                                            {
                                                              char *return_value_trim$23;
                                                              return_value_trim$23=trim(value);
                                                              my.password=stralloc(return_value_trim$23);
                                                            }

                                                            else
                                                            {
                                                              return_value_strmatch$58=strmatch(option, "connection");
                                                              if(!(return_value_strmatch$58 == /*enum*/boolean_false))
                                                              {
                                                                signed int return_value_strncasecmp$24;
                                                                return_value_strncasecmp$24=strncasecmp(value, "keep-alive", (unsigned long int)10);
                                                                if(return_value_strncasecmp$24 == 0)
                                                                  my.keepalive = (enum anonymous)boolean_true;

                                                                else
                                                                  my.keepalive = (enum anonymous)boolean_false;
                                                              }

                                                              else
                                                              {
                                                                return_value_strmatch$57=strmatch(option, "protocol");
                                                                if(!(return_value_strmatch$57 == /*enum*/boolean_false))
                                                                {
                                                                  signed int return_value_strncasecmp$25;
                                                                  return_value_strncasecmp$25=strncasecmp(value, "HTTP/1.1", (unsigned long int)8);
                                                                  if(return_value_strncasecmp$25 == 0)
                                                                    my.protocol = boolean_true;

                                                                  else
                                                                    my.protocol = boolean_false;
                                                                }

                                                                else
                                                                {
                                                                  return_value_strmatch$56=strmatch(option, "proxy-host");
                                                                  if(!(return_value_strmatch$56 == /*enum*/boolean_false))
                                                                  {
                                                                    char *return_value_trim$26;
                                                                    return_value_trim$26=trim(value);
                                                                    auth_set_proxy_host(my.auth, return_value_trim$26);
                                                                  }

                                                                  else
                                                                  {
                                                                    return_value_strmatch$55=strmatch(option, "proxy-port");
                                                                    if(!(return_value_strmatch$55 == /*enum*/boolean_false))
                                                                    {
                                                                      if(!(value == ((char *)NULL)))
                                                                      {
                                                                        signed int return_value_atoi$27;
                                                                        return_value_atoi$27=atoi$link2(value);
                                                                        auth_set_proxy_port(my.auth, return_value_atoi$27);
                                                                      }

                                                                      else
                                                                        auth_set_proxy_port(my.auth, 3128);
                                                                    }

                                                                    else
                                                                    {
                                                                      return_value_strmatch$54=strmatch(option, "ftp-login");
                                                                      if(!(return_value_strmatch$54 == /*enum*/boolean_false))
                                                                      {
                                                                        struct CREDS_T *return_value_new_creds$28;
                                                                        return_value_new_creds$28=new_creds((enum anonymous$3)FTP, value);
                                                                        auth_add(my.auth, return_value_new_creds$28);
                                                                      }

                                                                      else
                                                                      {
                                                                        return_value_strmatch$53=strmatch(option, "proxy-login");
                                                                        if(!(return_value_strmatch$53 == /*enum*/boolean_false))
                                                                        {
                                                                          struct CREDS_T *return_value_new_creds$29;
                                                                          return_value_new_creds$29=new_creds((enum anonymous$3)PROXY, value);
                                                                          auth_add(my.auth, return_value_new_creds$29);
                                                                        }

                                                                        else
                                                                        {
                                                                          return_value_strmatch$52=strmatch(option, "failures");
                                                                          if(!(return_value_strmatch$52 == /*enum*/boolean_false))
                                                                          {
                                                                            if(!(value == ((char *)NULL)))
                                                                              my.failures=atoi$link2(value);

                                                                            else
                                                                              my.failures = 30;
                                                                          }

                                                                          else
                                                                          {
                                                                            return_value_strmatch$51=strmatch(option, "chunked");
                                                                            if(!(return_value_strmatch$51 == /*enum*/boolean_false))
                                                                            {
                                                                              signed int return_value_strncasecmp$30;
                                                                              return_value_strncasecmp$30=strncasecmp(value, "true", (unsigned long int)4);
                                                                              if(return_value_strncasecmp$30 == 0)
                                                                                my.chunked = (enum anonymous)boolean_true;

                                                                              else
                                                                                my.chunked = (enum anonymous)boolean_false;
                                                                            }

                                                                            else
                                                                            {
                                                                              return_value_strmatch$50=strmatch(option, "unique");
                                                                              if(!(return_value_strmatch$50 == /*enum*/boolean_false))
                                                                              {
                                                                                signed int return_value_strncasecmp$31;
                                                                                return_value_strncasecmp$31=strncasecmp(value, "true", (unsigned long int)4);
                                                                                if(return_value_strncasecmp$31 == 0)
                                                                                  my.unique = (enum anonymous)boolean_true;

                                                                                else
                                                                                  my.unique = (enum anonymous)boolean_false;
                                                                              }

                                                                              else
                                                                              {
                                                                                return_value_strmatch$49=strmatch(option, "header");
                                                                                if(!(return_value_strmatch$49 == /*enum*/boolean_false))
                                                                                {
                                                                                  char *return_value___builtin_strchr$32;
                                                                                  return_value___builtin_strchr$32=__builtin_strchr(value, 58);
                                                                                  if(return_value___builtin_strchr$32 == ((char *)NULL))
                                                                                    NOTIFY((enum anonymous$19)FATAL, "no ':' in http-header");

                                                                                  unsigned long int return_value_strlen$33;
                                                                                  return_value_strlen$33=strlen(value);
                                                                                  unsigned long int return_value_strlen$34;
                                                                                  return_value_strlen$34=strlen(my.extra);
                                                                                  if(3ul + return_value_strlen$33 + return_value_strlen$34 >= 513ul)
                                                                                    NOTIFY((enum anonymous$19)FATAL, "too many headers");

                                                                                  strcat$link1(my.extra, value);
                                                                                  strcat$link1(my.extra, "\r\n");
                                                                                }

                                                                                else
                                                                                {
                                                                                  return_value_strmatch$48=strmatch(option, "expire-session");
                                                                                  if(!(return_value_strmatch$48 == /*enum*/boolean_false))
                                                                                  {
                                                                                    signed int return_value_strncasecmp$35;
                                                                                    return_value_strncasecmp$35=strncasecmp(value, "true", (unsigned long int)4);
                                                                                    if(return_value_strncasecmp$35 == 0)
                                                                                      my.expire = (enum anonymous)boolean_true;

                                                                                    else
                                                                                      my.expire = (enum anonymous)boolean_false;
                                                                                  }

                                                                                  else
                                                                                  {
                                                                                    return_value_strmatch$47=strmatch(option, "follow-location");
                                                                                    if(!(return_value_strmatch$47 == /*enum*/boolean_false))
                                                                                    {
                                                                                      signed int return_value_strncasecmp$36;
                                                                                      return_value_strncasecmp$36=strncasecmp(value, "true", (unsigned long int)4);
                                                                                      if(return_value_strncasecmp$36 == 0)
                                                                                        my.follow = (enum anonymous)boolean_true;

                                                                                      else
                                                                                        my.follow = (enum anonymous)boolean_false;
                                                                                    }

                                                                                    else
                                                                                    {
                                                                                      return_value_strmatch$46=strmatch(option, "url-escaping");
                                                                                      if(!(return_value_strmatch$46 == /*enum*/boolean_false))
                                                                                      {
                                                                                        signed int return_value_strncasecmp$37;
                                                                                        return_value_strncasecmp$37=strncasecmp(value, "true", (unsigned long int)4);
                                                                                        if(return_value_strncasecmp$37 == 0)
                                                                                          my.escape = (enum anonymous)boolean_true;

                                                                                        else
                                                                                          my.escape = (enum anonymous)boolean_false;
                                                                                      }

                                                                                      else
                                                                                      {
                                                                                        return_value_strmatch$45=strmatch(option, "zero-data-ok");
                                                                                        if(!(return_value_strmatch$45 == /*enum*/boolean_false))
                                                                                        {
                                                                                          signed int return_value_strncasecmp$38;
                                                                                          return_value_strncasecmp$38=strncasecmp(value, "true", (unsigned long int)4);
                                                                                          if(return_value_strncasecmp$38 == 0)
                                                                                            my.zero_ok = (enum anonymous)boolean_true;

                                                                                          else
                                                                                            my.zero_ok = (enum anonymous)boolean_false;
                                                                                        }

                                                                                        else
                                                                                        {
                                                                                          return_value_strmatch$44=strmatch(option, "ssl-cert");
                                                                                          if(!(return_value_strmatch$44 == /*enum*/boolean_false))
                                                                                            my.ssl_cert=stralloc(value);

                                                                                          else
                                                                                          {
                                                                                            return_value_strmatch$43=strmatch(option, "ssl-key");
                                                                                            if(!(return_value_strmatch$43 == /*enum*/boolean_false))
                                                                                              my.ssl_key=stralloc(value);

                                                                                            else
                                                                                            {
                                                                                              return_value_strmatch$42=strmatch(option, "ssl-timeout");
                                                                                              if(!(return_value_strmatch$42 == /*enum*/boolean_false))
                                                                                              {
                                                                                                if(!(value == ((char *)NULL)))
                                                                                                  my.ssl_timeout=atoi$link2(value);

                                                                                                else
                                                                                                  my.ssl_timeout = 15;
                                                                                              }

                                                                                              else
                                                                                              {
                                                                                                return_value_strmatch$41=strmatch(option, "ssl-ciphers");
                                                                                                if(!(return_value_strmatch$41 == /*enum*/boolean_false))
                                                                                                  my.ssl_ciphers=stralloc(value);

                                                                                                else
                                                                                                {
                                                                                                  return_value_strmatch$40=strmatch(option, "spinner");
                                                                                                  if(!(return_value_strmatch$40 == /*enum*/boolean_false))
                                                                                                  {
                                                                                                    signed int return_value_strncasecmp$39;
                                                                                                    return_value_strncasecmp$39=strncasecmp(value, "true", (unsigned long int)4);
                                                                                                    if(return_value_strncasecmp$39 == 0)
                                                                                                      my.spinner = (enum anonymous)boolean_true;

                                                                                                    else
                                                                                                      my.spinner = (enum anonymous)boolean_false;
                                                                                                  }

                                                                                                  else
                                                                                                    hash_add(H, option, value);
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
      xfree((void *)value);
      xfree((void *)option);
      free((void *)tmp);
    }
    while((_Bool)1);
    hash_destroy(H);
    fclose(fp);
    return 0;
  }
}

// load_file
// file load.c line 244
void load_file(struct URL_T *U, char *file)
{
  struct _IO_FILE *fp;
  unsigned long int len;
  char *buf;
  char *filename;
  char mode[8l];
  filename=trim(file);
  memset$link11((void *)mode, 0, sizeof(char [8l]) /*8ul*/ );
  enum anonymous return_value_is_ascii$1;
  return_value_is_ascii$1=is_ascii(filename);
  snprintf$link7(mode, sizeof(char [8l]) /*8ul*/ , "%s", return_value_is_ascii$1 != (enum anonymous)0 ? "r" : "rb");
  fp=fopen(filename, mode);
  if(fp == ((struct _IO_FILE *)NULL))
    NOTIFY((enum anonymous$19)ERROR, "unable to open file: %s", filename);

  else
  {
    fseek(fp, (signed long int)0, 2);
    signed long int return_value_ftell$2;
    return_value_ftell$2=ftell(fp);
    len = (unsigned long int)return_value_ftell$2;
    fseek(fp, (signed long int)0, 0);
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(len + (unsigned long int)1);
    buf = (char *)return_value_xmalloc$3;
    unsigned long int return_value_fread$5;
    return_value_fread$5=fread((void *)buf, (unsigned long int)1, len, fp);
    if(return_value_fread$5 == len)
    {
      enum anonymous return_value_is_ascii$4;
      return_value_is_ascii$4=is_ascii(filename);
      if(!(return_value_is_ascii$4 == /*enum*/boolean_false))
      {
        trim(buf);
        len=strlen(buf);
      }

    }

    else
      NOTIFY((enum anonymous$19)ERROR, "unable to read file: %s", filename);
    fclose(fp);
    if(len >= 1ul)
    {
      char *return_value_get_content_type$6;
      return_value_get_content_type$6=get_content_type(filename);
      url_set_conttype(U, return_value_get_content_type$6);
      url_set_postdata(U, buf, len);
    }

    xfree((void *)buf);
    goto __CPROVER_DUMP_L6;
  }

__CPROVER_DUMP_L6:
  ;
}

// log_transaction
// file log.c line 37
void log_transaction(struct DATA_T *D)
{
  unsigned int return_value_data_get_count$1;
  return_value_data_get_count$1=data_get_count(D);
  float return_value_data_get_elapsed$2;
  return_value_data_get_elapsed$2=data_get_elapsed(D);
  float return_value_data_get_megabytes$3;
  return_value_data_get_megabytes$3=data_get_megabytes(D);
  float return_value_data_get_total$4;
  return_value_data_get_total$4=data_get_total(D);
  unsigned int return_value_data_get_code$5;
  return_value_data_get_code$5=data_get_code(D);
  write_to_log((signed int)return_value_data_get_count$1, return_value_data_get_elapsed$2, (signed int)return_value_data_get_megabytes$3, return_value_data_get_total$4, (signed int)return_value_data_get_code$5, my.failed);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// lowercase
// file util.c line 105
char * lowercase(char *s, unsigned long int len)
{
  unsigned char *c;
  unsigned char *e;
  c = (unsigned char *)s;
  e = c + (signed long int)len;
  const signed int **return_value___ctype_tolower_loc$2;
  const signed int **return_value___ctype_tolower_loc$4;
  for( ; !(c >= e); c = c + 1l)
  {
    signed int tmp_statement_expression$1;
    signed int __res;
    return_value___ctype_tolower_loc$4=__ctype_tolower_loc();
    __res = (*return_value___ctype_tolower_loc$4)[(signed long int)(signed int)(unsigned char)*c];
    tmp_statement_expression$1 = __res;
    *c = (unsigned char)tmp_statement_expression$1;
  }
  return s;
}

// ltrim
// file perl.c line 70
char * ltrim(char *str)
{
  char *ptr;
  signed int len;
  ptr = str;
  _Bool tmp_if_expr$2;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    if(!(*ptr == 0))
    {
      return_value___ctype_b_loc$1=__ctype_b_loc();
      tmp_if_expr$2 = ((signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*ptr] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    ptr = ptr + 1l;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(ptr);
  len = (signed int)return_value_strlen$3;
  memmove$link2((void *)str, (const void *)ptr, (unsigned long int)(len + 1));
  return str;
}

// main
// file main.c line 294
signed int main(signed int argc, char **argv)
{
  signed int x;
  signed int j = 0;
  signed int result;
  struct DATA_T *D;
  D=new_data();
  struct ARRAY_T *urls;
  urls=new_array();
  struct CREW_T *crew;
  struct anonymous$15 *lines;
  struct anonymous$4 *client;
  unsigned long int cease;
  unsigned long int timer;
  union pthread_attr_t scope_attr;
  void *statusp;
  struct anonymous$23 sigs;
  sigemptyset(&sigs);
  sigaddset(&sigs, 1);
  sigaddset(&sigs, 2);
  sigaddset(&sigs, 14);
  sigaddset(&sigs, 15);
  sigprocmask(0, &sigs, (struct anonymous$23 *)(void *)0);
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct anonymous$15) /*16ul*/ );
  lines = (struct anonymous$15 *)return_value_xcalloc$1;
  lines->index = 0;
  lines->line = (char **)(void *)0;
  memset$link12((void *)&my, 0, sizeof(struct CONFIG) /*3672ul*/ );
  parse_rc_cmdline(argc, argv);
  signed int return_value_init_config$2;
  return_value_init_config$2=init_config();
  if(!(return_value_init_config$2 >= 0))
    exit(1);

  parse_cmdline(argc, argv);
  ds_module_check();
  if(!(my.config == /*enum*/boolean_false))
    show_config(boolean_true);

  if(!(my.url == ((char *)NULL)))
    my.length = 1;

  else
    my.length=read_cfg_file(lines, my.file);
  if(my.length == 0)
    display_help();

  void *return_value_xcalloc$3;
  return_value_xcalloc$3=xcalloc(sizeof(struct anonymous$11) /*48ul*/ , (unsigned long int)1);
  cookie = (struct anonymous$11 *)return_value_xcalloc$3;
  cookie->first = (struct CNODE *)(void *)0;
  result=pthread_mutex_init(&cookie->mutex, (const union anonymous$18 *)(void *)0);
  if(!(result == 0))
    NOTIFY((enum anonymous$19)FATAL, "pthread_mutex_init");

  void *return_value_xcalloc$4;
  return_value_xcalloc$4=xcalloc((unsigned long int)my.cusers, sizeof(struct anonymous$4) /*136ul*/ );
  client = (struct anonymous$4 *)return_value_xcalloc$4;
  crew=new_crew(my.cusers, my.cusers, (enum anonymous)boolean_false);
  if(crew == ((struct CREW_T *)NULL))
    NOTIFY((enum anonymous$19)FATAL, "unable to allocate memory for %d simulated browser", my.cusers);

  enum anonymous$2 return_value_url_get_method$6;
  enum anonymous$2 return_value_url_get_method$5;
  if(!(my.url == ((char *)NULL)))
  {
    struct URL_T *tmp;
    tmp=new_url(my.url);
    url_set_ID(tmp, 0);
    if(!(my.get == /*enum*/boolean_false))
    {
      return_value_url_get_method$6=url_get_method(tmp);
      if(!((signed int)return_value_url_get_method$6 == POST))
      {
        return_value_url_get_method$5=url_get_method(tmp);
        if(!((signed int)return_value_url_get_method$5 == PUT))
          url_set_method(tmp, my.method);

      }

    }

    array_npush(urls, (void *)tmp, URLSIZE);
  }

  else
  {
    x = 0;
    for( ; !(x >= my.length); x = x + 1)
    {
      struct URL_T *main$$1$$9$$1$$1$$tmp;
      main$$1$$9$$1$$1$$tmp=new_url(lines->line[(signed long int)x]);
      url_set_ID(main$$1$$9$$1$$1$$tmp, x);
      array_npush(urls, (void *)main$$1$$9$$1$$1$$tmp, URLSIZE);
    }
  }
  if(my.get == /*enum*/boolean_false && my.quiet == /*enum*/boolean_false)
  {
    fprintf$link4(stderr, "** ");
    display_version((enum anonymous)boolean_false);
    fprintf$link4(stderr, "** Preparing %d concurrent users for battle.\n", my.cusers);
    fprintf$link4(stderr, "The server is now under siege...");
    if(!(my.verbose == /*enum*/boolean_false))
      fprintf$link4(stderr, "\n");

  }

  data_set_start(D);
  pthread_attr_init(&scope_attr);
  pthread_attr_setscope(&scope_attr, 0);
  SSL_thread_setup();
  result=pthread_create(&cease, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)sig_handler, (void *)crew);
  if(!(result >= 0))
    NOTIFY((enum anonymous$19)FATAL, "failed to create handler: %d\n", result);

  if(my.secs >= 1)
  {
    result=pthread_create(&timer, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)siege_timer, (void *)cease);
    if(!(result >= 0))
      NOTIFY((enum anonymous$19)FATAL, "failed to create handler: %d\n", result);

  }

  x = 0;
  _Bool tmp_if_expr$8;
  enum anonymous return_value_crew_get_shutdown$7;
  _Bool tmp_if_expr$11;
  unsigned long int return_value_array_length$10;
  char *return_value_url_get_hostname$16;
  char *return_value_url_get_hostname$14;
  unsigned long int return_value_strlen$15;
  do
  {
    if(!(x >= my.cusers))
    {
      return_value_crew_get_shutdown$7=crew_get_shutdown(crew);
      tmp_if_expr$8 = (signed int)return_value_crew_get_shutdown$7 != boolean_true ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$8 = (_Bool)0;
    if(!tmp_if_expr$8)
      break;

    (client + (signed long int)x)->id = x;
    (client + (signed long int)x)->bytes = (unsigned long int)0;
    (client + (signed long int)x)->time = (float)0.0;
    (client + (signed long int)x)->hits = (unsigned long int)0;
    (client + (signed long int)x)->code = (unsigned int)0;
    (client + (signed long int)x)->ok200 = (unsigned int)0;
    (client + (signed long int)x)->fail = (unsigned int)0;
    if(my.reps >= 1)
      (client + (signed long int)x)->urls = urls;

    else
    {
      signed int len;
      unsigned long int return_value_array_length$9;
      return_value_array_length$9=array_length(urls);
      len = (signed int)(return_value_array_length$9 / (unsigned long int)my.cusers);
      struct ARRAY_T *main$$1$$13$$1$$2$$tmp;
      main$$1$$13$$1$$2$$tmp=new_array();
      do
      {
        if(!(j >= (1 + x) * len))
        {
          return_value_array_length$10=array_length(urls);
          tmp_if_expr$11 = j < (signed int)return_value_array_length$10 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$11 = (_Bool)0;
        if(!tmp_if_expr$11)
          break;

        struct URL_T *u;
        void *return_value_array_get$12;
        return_value_array_get$12=array_get(urls, j);
        u = (struct URL_T *)return_value_array_get$12;
        if(!(u == ((struct URL_T *)NULL)))
        {
          return_value_url_get_hostname$16=url_get_hostname(u);
          if(!(return_value_url_get_hostname$16 == ((char *)NULL)))
          {
            return_value_url_get_hostname$14=url_get_hostname(u);
            return_value_strlen$15=strlen(return_value_url_get_hostname$14);
            if(return_value_strlen$15 >= 2ul)
            {
              void *return_value_array_get$13;
              return_value_array_get$13=array_get(urls, j);
              array_npush(main$$1$$13$$1$$2$$tmp, return_value_array_get$13, URLSIZE);
            }

          }

        }

        j = j + 1;
      }
      while((_Bool)1);
      (client + (signed long int)x)->urls = main$$1$$13$$1$$2$$tmp;
    }
    (client + (signed long int)x)->auth.www = 0;
    (client + (signed long int)x)->auth.proxy = 0;
    (client + (signed long int)x)->auth.type.www = (enum anonymous$29)BASIC;
    (client + (signed long int)x)->auth.type.proxy = (enum anonymous$29)BASIC;
    signed int return_value_urandom$17;
    return_value_urandom$17=urandom();
    (client + (signed long int)x)->rand_r_SEED = (unsigned int)return_value_urandom$17;
    enum anonymous return_value_crew_add$18;
    return_value_crew_add$18=crew_add(crew, (void (*)())(void *)start_routine, (void *)&client[(signed long int)x]);
    result = (signed int)return_value_crew_add$18;
    if(result == boolean_false)
    {
      my.verbose = (enum anonymous)boolean_false;
      fprintf$link4(stderr, "Unable to spawn additional threads; you may need to\n");
      fprintf$link4(stderr, "upgrade your libraries or tune your system in order\n");
      fprintf$link4(stderr, "to exceed %d users.\n", my.cusers);
      NOTIFY((enum anonymous$19)FATAL, "system resources exhausted");
    }

    x = x + 1;
  }
  while((_Bool)1);
  crew_join(crew, (enum anonymous)boolean_true, &statusp);
  SSL_thread_cleanup();
  x = 0;
  signed int return_value_crew_get_total$19;
  _Bool tmp_if_expr$21;
  signed int return_value_crew_get_total$20;
  signed int tmp_if_expr$23;
  signed int return_value_crew_get_total$22;
  do
  {
    return_value_crew_get_total$19=crew_get_total(crew);
    if(!(my.cusers >= return_value_crew_get_total$19))
      tmp_if_expr$21 = (_Bool)1;

    else
    {
      return_value_crew_get_total$20=crew_get_total(crew);
      tmp_if_expr$21 = return_value_crew_get_total$20 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$21)
      tmp_if_expr$23 = my.cusers;

    else
    {
      return_value_crew_get_total$22=crew_get_total(crew);
      tmp_if_expr$23 = return_value_crew_get_total$22;
    }
    if(x >= tmp_if_expr$23)
      break;

    data_increment_count(D, (client + (signed long int)x)->hits);
    data_increment_bytes(D, (client + (signed long int)x)->bytes);
    data_increment_total(D, (client + (signed long int)x)->time);
    data_increment_code(D, (signed int)(client + (signed long int)x)->code);
    data_increment_ok200(D, (signed int)(client + (signed long int)x)->ok200);
    data_increment_fail(D, (signed int)(client + (signed long int)x)->fail);
    data_set_highest(D, (client + (signed long int)x)->himark);
    data_set_lowest(D, (client + (signed long int)x)->lomark);
    signed int return_value_urandom$24;
    return_value_urandom$24=urandom();
    (client + (signed long int)x)->rand_r_SEED = (unsigned int)return_value_urandom$24;
    x = x + 1;
  }
  while((_Bool)1);
  data_set_stop(D);
  crew_destroy(crew);
  x = 0;
  for( ; !(x >= my.cusers); x = x + 1)
    ;
  array_destroy(my.lurl);
  xfree((void *)client);
  if(!(my.get == /*enum*/boolean_false))
  {
    unsigned int return_value_data_get_ok200$25;
    return_value_data_get_ok200$25=data_get_ok200(D);
    if(return_value_data_get_ok200$25 >= 1u)
      exit(0);

    else
    {
      if(my.quiet == /*enum*/boolean_false)
        echo("[done]\n");

      exit(1);
    }
  }

  pthread_usleep_np((unsigned long int)10000);
  if(!(my.verbose == /*enum*/boolean_false))
    fprintf$link4(stderr, "done.\n");

  else
    fprintf$link4(stderr, "\b      done.\n");
  if(my.failed >= my.failures && my.failures >= 1)
  {
    fprintf$link4(stderr, "%s aborted due to excessive socket failure; you\n", program_name);
    fprintf$link4(stderr, "can change the failure threshold in $HOME/.%src\n", program_name);
  }

  unsigned int return_value_data_get_count$26;
  return_value_data_get_count$26=data_get_count(D);
  fprintf$link4(stderr, "\nTransactions:\t\t%12u hits\n", return_value_data_get_count$26);
  unsigned int return_value_data_get_count$27;
  return_value_data_get_count$27=data_get_count(D);
  double tmp_if_expr$30;
  unsigned int return_value_data_get_count$28;
  unsigned int return_value_data_get_count$29;
  if(return_value_data_get_count$27 == 0u)
    tmp_if_expr$30 = (double)0;

  else
  {
    return_value_data_get_count$28=data_get_count(D);
    return_value_data_get_count$29=data_get_count(D);
    tmp_if_expr$30 = ((double)return_value_data_get_count$28 / (double)(return_value_data_get_count$29 + (unsigned int)my.failed)) * (double)100;
  }
  fprintf$link4(stderr, "Availability:\t\t%12.2f %%\n", tmp_if_expr$30);
  float return_value_data_get_elapsed$31;
  return_value_data_get_elapsed$31=data_get_elapsed(D);
  fprintf$link4(stderr, "Elapsed time:\t\t%12.2f secs\n", return_value_data_get_elapsed$31);
  float return_value_data_get_megabytes$32;
  return_value_data_get_megabytes$32=data_get_megabytes(D);
  fprintf$link4(stderr, "Data transferred:\t%12.2f MB\n", return_value_data_get_megabytes$32);
  float return_value_data_get_response_time$33;
  return_value_data_get_response_time$33=data_get_response_time(D);
  fprintf$link4(stderr, "Response time:\t\t%12.2f secs\n", return_value_data_get_response_time$33);
  float return_value_data_get_transaction_rate$34;
  return_value_data_get_transaction_rate$34=data_get_transaction_rate(D);
  fprintf$link4(stderr, "Transaction rate:\t%12.2f trans/sec\n", return_value_data_get_transaction_rate$34);
  float return_value_data_get_throughput$35;
  return_value_data_get_throughput$35=data_get_throughput(D);
  fprintf$link4(stderr, "Throughput:\t\t%12.2f MB/sec\n", return_value_data_get_throughput$35);
  float return_value_data_get_concurrency$36;
  return_value_data_get_concurrency$36=data_get_concurrency(D);
  fprintf$link4(stderr, "Concurrency:\t\t%12.2f\n", return_value_data_get_concurrency$36);
  unsigned int return_value_data_get_code$37;
  return_value_data_get_code$37=data_get_code(D);
  fprintf$link4(stderr, "Successful transactions:%12u\n", return_value_data_get_code$37);
  if(!(my.debug == /*enum*/boolean_false))
  {
    unsigned int return_value_data_get_ok200$38;
    return_value_data_get_ok200$38=data_get_ok200(D);
    fprintf$link4(stderr, "HTTP OK received:\t%12u\n", return_value_data_get_ok200$38);
  }

  fprintf$link4(stderr, "Failed transactions:\t%12u\n", my.failed);
  float return_value_data_get_highest$39;
  return_value_data_get_highest$39=data_get_highest(D);
  fprintf$link4(stderr, "Longest transaction:\t%12.2f\n", return_value_data_get_highest$39);
  float return_value_data_get_lowest$40;
  return_value_data_get_lowest$40=data_get_lowest(D);
  fprintf$link4(stderr, "Shortest transaction:\t%12.2f\n", return_value_data_get_lowest$40);
  fprintf$link4(stderr, " \n");
  if(!(my.mark == /*enum*/boolean_false))
    mark_log_file(my.markstr);

  if(!(my.logging == /*enum*/boolean_false))
    log_transaction(D);

  data_destroy(D);
  if(my.url == ((char *)NULL))
  {
    x = 0;
    for( ; !(x >= my.length); x = x + 1)
      xfree((void *)lines->line[(signed long int)x]);
    xfree((void *)lines->line);
    xfree((void *)lines);
  }

  else
  {
    xfree((void *)lines->line);
    xfree((void *)lines);
  }
  pthread_mutex_destroy(&cookie->mutex);
  xfree((void *)cookie);
  xfree((void *)my.url);
  exit(0);
}

// mark_log_file
// file log.c line 112
void mark_log_file(char *message)
{
  signed int fd;
  char entry[512l];
  enum anonymous return_value_file_exists$2;
  return_value_file_exists$2=file_exists(my.logfile);
  if(return_value_file_exists$2 == /*enum*/boolean_false)
  {
    enum anonymous return_value_create_logfile$1;
    return_value_create_logfile$1=create_logfile(my.logfile);
    if(return_value_create_logfile$1 == /*enum*/boolean_false)
    {
      NOTIFY((enum anonymous$19)ERROR, "unable to create log file: %s", (const void *)my.logfile);
      goto __CPROVER_DUMP_L4;
    }

  }

  snprintf$link8(entry, sizeof(char [512l]) /*512ul*/ , "**** %s ****\n", message);
  fd=open(my.logfile, 01 | 02000, 0644);
  if(!(fd >= 0))
    NOTIFY((enum anonymous$19)ERROR, "Unable to write to file: %s", (const void *)my.logfile);

  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(entry);
  write(fd, (const void *)entry, return_value_strlen$3);
  close(fd);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// md5_buffer
// file md5.c line 187
extern void * md5_buffer(const char *buffer, unsigned long int len, void *resblock)
{
  struct md5_ctx ctx;
  md5_init_ctx(&ctx);
  md5_process_bytes((const void *)buffer, len, &ctx);
  void *return_value_md5_finish_ctx$1;
  return_value_md5_finish_ctx$1=md5_finish_ctx(&ctx, resblock);
  return return_value_md5_finish_ctx$1;
}

// md5_finish_ctx
// file ./md5.h line 123
extern void * md5_finish_ctx(struct md5_ctx *ctx, void *resbuf)
{
  unsigned int bytes = ctx->buflen;
  unsigned long int pad;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + bytes;
  if(!(ctx->total[0l] >= bytes))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  pad = (unsigned long int)(bytes >= (unsigned int)56 ? (unsigned int)(64 + 56) - bytes : (unsigned int)56 - bytes);
  memcpy$link7((void *)&ctx->buffer[(signed long int)bytes], (const void *)fillbuf, pad);
  *((unsigned int *)&ctx->buffer[(signed long int)((unsigned long int)bytes + pad)]) = ctx->total[(signed long int)0] << 3;
  *((unsigned int *)&ctx->buffer[(signed long int)((unsigned long int)bytes + pad + (unsigned long int)4)]) = ctx->total[(signed long int)1] << 3 | ctx->total[(signed long int)0] >> 29;
  md5_process_block((const void *)ctx->buffer, (unsigned long int)bytes + pad + (unsigned long int)8, ctx);
  void *return_value_md5_read_ctx$1;
  return_value_md5_read_ctx$1=md5_read_ctx(ctx, resbuf);
  return return_value_md5_read_ctx$1;
}

// md5_init_ctx
// file ./md5.h line 100
extern void md5_init_ctx(struct md5_ctx *ctx)
{
  ctx->A = (unsigned int)0x67452301;
  ctx->B = 0xefcdab89;
  ctx->C = 0x98badcfe;
  ctx->D = (unsigned int)0x10325476;
  ctx->total[(signed long int)1] = (unsigned int)0;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)1];
  ctx->buflen = (unsigned int)0;
}

// md5_process_block
// file md5.c line 264
extern void md5_process_block(const void *buffer, unsigned long int len, struct md5_ctx *ctx)
{
  unsigned int correct_words[16l];
  const unsigned int *words = (const unsigned int *)buffer;
  unsigned long int nwords = len / sizeof(unsigned int) /*4ul*/ ;
  const unsigned int *endp = words + (signed long int)nwords;
  unsigned int A = ctx->A;
  unsigned int B = ctx->B;
  unsigned int C = ctx->C;
  unsigned int D = ctx->D;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + (unsigned int)len;
  if(!((unsigned long int)ctx->total[0l] >= len))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  while(!(words >= endp))
  {
    unsigned int *cwp = correct_words;
    unsigned int A_save = A;
    unsigned int B_save = B;
    unsigned int C_save = C;
    unsigned int D_save = D;
    do
    {
      unsigned int *tmp_post$1 = cwp;
      cwp = cwp + 1l;
      *tmp_post$1 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post$1 + 0xd76aa478;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$2 = cwp;
      cwp = cwp + 1l;
      *tmp_post$2 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post$2 + 0xe8c7b756;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$3 = cwp;
      cwp = cwp + 1l;
      *tmp_post$3 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post$3 + (unsigned int)0x242070db;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$4 = cwp;
      cwp = cwp + 1l;
      *tmp_post$4 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post$4 + 0xc1bdceee;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$5 = cwp;
      cwp = cwp + 1l;
      *tmp_post$5 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post$5 + 0xf57c0faf;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$6 = cwp;
      cwp = cwp + 1l;
      *tmp_post$6 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post$6 + (unsigned int)0x4787c62a;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$7 = cwp;
      cwp = cwp + 1l;
      *tmp_post$7 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post$7 + 0xa8304613;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$8 = cwp;
      cwp = cwp + 1l;
      *tmp_post$8 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post$8 + 0xfd469501;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$9 = cwp;
      cwp = cwp + 1l;
      *tmp_post$9 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post$9 + (unsigned int)0x698098d8;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$10 = cwp;
      cwp = cwp + 1l;
      *tmp_post$10 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post$10 + 0x8b44f7af;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$11 = cwp;
      cwp = cwp + 1l;
      *tmp_post$11 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post$11 + 0xffff5bb1;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$12 = cwp;
      cwp = cwp + 1l;
      *tmp_post$12 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post$12 + 0x895cd7be;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$13 = cwp;
      cwp = cwp + 1l;
      *tmp_post$13 = *words;
      A = A + (D ^ B & (C ^ D)) + *tmp_post$13 + (unsigned int)0x6b901122;
      words = words + 1l;
      A = A << 7 | A >> 32 - 7;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$14 = cwp;
      cwp = cwp + 1l;
      *tmp_post$14 = *words;
      D = D + (C ^ A & (B ^ C)) + *tmp_post$14 + 0xfd987193;
      words = words + 1l;
      D = D << 12 | D >> 32 - 12;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$15 = cwp;
      cwp = cwp + 1l;
      *tmp_post$15 = *words;
      C = C + (B ^ D & (A ^ B)) + *tmp_post$15 + 0xa679438e;
      words = words + 1l;
      C = C << 17 | C >> 32 - 17;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      unsigned int *tmp_post$16 = cwp;
      cwp = cwp + 1l;
      *tmp_post$16 = *words;
      B = B + (A ^ C & (D ^ A)) + *tmp_post$16 + (unsigned int)0x49b40821;
      words = words + 1l;
      B = B << 22 | B >> 32 - 22;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)1] + 0xf61e2562;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)6] + 0xc040b340;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)11] + (unsigned int)0x265e5a51;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)0] + 0xe9b6c7aa;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)5] + 0xd62f105d;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)10] + (unsigned int)0x02441453;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)15] + 0xd8a1e681;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)4] + 0xe7d3fbc8;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)9] + (unsigned int)0x21e1cde6;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)14] + 0xc33707d6;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)3] + 0xf4d50d87;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)8] + (unsigned int)0x455a14ed;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ D & (B ^ C)) + correct_words[(signed long int)13] + 0xa9e3e905;
      A = A << 5 | A >> 32 - 5;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ C & (A ^ B)) + correct_words[(signed long int)2] + 0xfcefa3f8;
      D = D << 9 | D >> 32 - 9;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ B & (D ^ A)) + correct_words[(signed long int)7] + (unsigned int)0x676f02d9;
      C = C << 14 | C >> 32 - 14;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ A & (C ^ D)) + correct_words[(signed long int)12] + 0x8d2a4c8a;
      B = B << 20 | B >> 32 - 20;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)5] + 0xfffa3942;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)8] + 0x8771f681;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)11] + (unsigned int)0x6d9d6122;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)14] + 0xfde5380c;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)1] + 0xa4beea44;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)4] + (unsigned int)0x4bdecfa9;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)7] + 0xf6bb4b60;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)10] + 0xbebfbc70;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)13] + (unsigned int)0x289b7ec6;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)0] + 0xeaa127fa;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)3] + 0xd4ef3085;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)6] + (unsigned int)0x04881d05;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (B ^ C ^ D) + correct_words[(signed long int)9] + 0xd9d4d039;
      A = A << 4 | A >> 32 - 4;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (A ^ B ^ C) + correct_words[(signed long int)12] + 0xe6db99e5;
      D = D << 11 | D >> 32 - 11;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (D ^ A ^ B) + correct_words[(signed long int)15] + (unsigned int)0x1fa27cf8;
      C = C << 16 | C >> 32 - 16;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (C ^ D ^ A) + correct_words[(signed long int)2] + 0xc4ac5665;
      B = B << 23 | B >> 32 - 23;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)0] + 0xf4292244;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)7] + (unsigned int)0x432aff97;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)14] + 0xab9423a7;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)5] + 0xfc93a039;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)12] + (unsigned int)0x655b59c3;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)3] + 0x8f0ccc92;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)10] + 0xffeff47d;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)1] + 0x85845dd1;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)8] + (unsigned int)0x6fa87e4f;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)15] + 0xfe2ce6e0;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)6] + 0xa3014314;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)13] + (unsigned int)0x4e0811a1;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    do
    {
      A = A + (C ^ (B | ~D)) + correct_words[(signed long int)4] + 0xf7537e82;
      A = A << 6 | A >> 32 - 6;
      A = A + B;
    }
    while((_Bool)0);
    do
    {
      D = D + (B ^ (A | ~C)) + correct_words[(signed long int)11] + 0xbd3af235;
      D = D << 10 | D >> 32 - 10;
      D = D + A;
    }
    while((_Bool)0);
    do
    {
      C = C + (A ^ (D | ~B)) + correct_words[(signed long int)2] + (unsigned int)0x2ad7d2bb;
      C = C << 15 | C >> 32 - 15;
      C = C + D;
    }
    while((_Bool)0);
    do
    {
      B = B + (D ^ (C | ~A)) + correct_words[(signed long int)9] + 0xeb86d391;
      B = B << 21 | B >> 32 - 21;
      B = B + C;
    }
    while((_Bool)0);
    A = A + A_save;
    B = B + B_save;
    C = C + C_save;
    D = D + D_save;
  }
  ctx->A = A;
  ctx->B = B;
  ctx->C = C;
  ctx->D = D;
}

// md5_process_bytes
// file ./md5.h line 113
extern void md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx)
{
  if(!(ctx->buflen == 0u))
  {
    unsigned long int left_over = (unsigned long int)ctx->buflen;
    unsigned long int add = (unsigned long int)128 - left_over > len ? len : (unsigned long int)128 - left_over;
    memcpy$link7((void *)&ctx->buffer[(signed long int)left_over], buffer, add);
    ctx->buflen = ctx->buflen + (unsigned int)add;
    if(add + left_over >= 65ul)
    {
      md5_process_block((const void *)ctx->buffer, left_over + add & (unsigned long int)~63, ctx);
      memcpy$link7((void *)ctx->buffer, (const void *)&ctx->buffer[(signed long int)(left_over + add & (unsigned long int)~63)], left_over + add & (unsigned long int)63);
      ctx->buflen = (unsigned int)(left_over + add & (unsigned long int)63);
    }

    buffer = (const void *)((const char *)buffer + (signed long int)add);
    len = len - add;
  }

  if(len >= 65ul)
  {
    md5_process_block(buffer, len & (unsigned long int)~63, ctx);
    buffer = (const void *)((const char *)buffer + (signed long int)(len & (unsigned long int)~63));
    len = len & (unsigned long int)63;
  }

  if(len >= 1ul)
  {
    memcpy$link7((void *)ctx->buffer, buffer, len);
    ctx->buflen = (unsigned int)len;
  }

}

// md5_read_ctx
// file md5.c line 81
extern void * md5_read_ctx(struct md5_ctx *ctx, void *resbuf)
{
  ((unsigned int *)resbuf)[(signed long int)0] = ctx->A;
  ((unsigned int *)resbuf)[(signed long int)1] = ctx->B;
  ((unsigned int *)resbuf)[(signed long int)2] = ctx->C;
  ((unsigned int *)resbuf)[(signed long int)3] = ctx->D;
  return resbuf;
}

// md5_stream
// file md5.c line 130
extern signed int md5_stream(struct _IO_FILE *stream, void *resblock)
{
  struct md5_ctx ctx;
  char buffer[4168l];
  unsigned long int sum;
  md5_init_ctx(&ctx);
  signed int return_value_ferror$1;
  while((_Bool)1)
  {
    unsigned long int n;
    sum = (unsigned long int)0;
    do
    {
      n=fread$link1((void *)(buffer + (signed long int)sum), (unsigned long int)1, (unsigned long int)4096 - sum, stream);
      sum = sum + n;
    }
    while(!(n == 0ul) && !(sum >= 4096ul));
    if(n == 0ul)
    {
      return_value_ferror$1=ferror(stream);
      if(!(return_value_ferror$1 == 0))
        return 1;

    }

    if(n == 0ul)
      break;

    md5_process_block((const void *)buffer, (unsigned long int)4096, &ctx);
  }
  if(sum >= 1ul)
    md5_process_bytes((const void *)buffer, sum, &ctx);

  md5_finish_ctx(&ctx, resblock);
  return 0;
}

// memcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy(void * restrict __dest, const void * restrict __src, unsigned long int __len)
{
  void *return_value___builtin___memcpy_chk$1;
  return_value___builtin___memcpy_chk$1=__builtin___memcpy_chk(__dest, __src, __len, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1;
}

// memcpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link1(void * restrict __dest$link1, const void * restrict __src$link1, unsigned long int __len$link1)
{
  void *return_value___builtin___memcpy_chk$1$link1;
  return_value___builtin___memcpy_chk$1$link1=__builtin___memcpy_chk(__dest$link1, __src$link1, __len$link1, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link1;
}

// memcpy$link10
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link10(void * restrict __dest$link10, const void * restrict __src$link10, unsigned long int __len$link10)
{
  void *return_value___builtin___memcpy_chk$1$link10;
  return_value___builtin___memcpy_chk$1$link10=__builtin___memcpy_chk(__dest$link10, __src$link10, __len$link10, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link10;
}

// memcpy$link11
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link11(void * restrict __dest$link11, const void * restrict __src$link11, unsigned long int __len$link11)
{
  void *return_value___builtin___memcpy_chk$1$link11;
  return_value___builtin___memcpy_chk$1$link11=__builtin___memcpy_chk(__dest$link11, __src$link11, __len$link11, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link11;
}

// memcpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link2(void * restrict __dest$link2, const void * restrict __src$link2, unsigned long int __len$link2)
{
  void *return_value___builtin___memcpy_chk$1$link2;
  return_value___builtin___memcpy_chk$1$link2=__builtin___memcpy_chk(__dest$link2, __src$link2, __len$link2, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link2;
}

// memcpy$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link3(void * restrict __dest$link3, const void * restrict __src$link3, unsigned long int __len$link3)
{
  void *return_value___builtin___memcpy_chk$1$link3;
  return_value___builtin___memcpy_chk$1$link3=__builtin___memcpy_chk(__dest$link3, __src$link3, __len$link3, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link3;
}

// memcpy$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link4(void * restrict __dest$link4, const void * restrict __src$link4, unsigned long int __len$link4)
{
  void *return_value___builtin___memcpy_chk$1$link4;
  return_value___builtin___memcpy_chk$1$link4=__builtin___memcpy_chk(__dest$link4, __src$link4, __len$link4, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link4;
}

// memcpy$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link5(void * restrict __dest$link5, const void * restrict __src$link5, unsigned long int __len$link5)
{
  void *return_value___builtin___memcpy_chk$1$link5;
  return_value___builtin___memcpy_chk$1$link5=__builtin___memcpy_chk(__dest$link5, __src$link5, __len$link5, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link5;
}

// memcpy$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link6(void * restrict __dest$link6, const void * restrict __src$link6, unsigned long int __len$link6)
{
  void *return_value___builtin___memcpy_chk$1$link6;
  return_value___builtin___memcpy_chk$1$link6=__builtin___memcpy_chk(__dest$link6, __src$link6, __len$link6, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link6;
}

// memcpy$link7
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link7(void * restrict __dest$link7, const void * restrict __src$link7, unsigned long int __len$link7)
{
  void *return_value___builtin___memcpy_chk$1$link7;
  return_value___builtin___memcpy_chk$1$link7=__builtin___memcpy_chk(__dest$link7, __src$link7, __len$link7, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link7;
}

// memcpy$link8
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link8(void * restrict __dest$link8, const void * restrict __src$link8, unsigned long int __len$link8)
{
  void *return_value___builtin___memcpy_chk$1$link8;
  return_value___builtin___memcpy_chk$1$link8=__builtin___memcpy_chk(__dest$link8, __src$link8, __len$link8, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link8;
}

// memcpy$link9
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy$link9(void * restrict __dest$link9, const void * restrict __src$link9, unsigned long int __len$link9)
{
  void *return_value___builtin___memcpy_chk$1$link9;
  return_value___builtin___memcpy_chk$1$link9=__builtin___memcpy_chk(__dest$link9, __src$link9, __len$link9, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk$1$link9;
}

// memmove
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove(void *__dest, const void *__src, unsigned long int __len)
{
  char *return_value___builtin___memmove_chk$1;
  return_value___builtin___memmove_chk$1=__builtin___memmove_chk(__dest, __src, __len, 18446744073709551615ul);
  return (void *)return_value___builtin___memmove_chk$1;
}

// memmove$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove$link1(void *__dest$link1, const void *__src$link1, unsigned long int __len$link1)
{
  char *return_value___builtin___memmove_chk$1$link1;
  return_value___builtin___memmove_chk$1$link1=__builtin___memmove_chk(__dest$link1, __src$link1, __len$link1, 18446744073709551615ul);
  return (void *)return_value___builtin___memmove_chk$1$link1;
}

// memmove$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 57
static inline void * memmove$link2(void *__dest$link2, const void *__src$link2, unsigned long int __len$link2)
{
  char *return_value___builtin___memmove_chk$1$link2;
  return_value___builtin___memmove_chk$1$link2=__builtin___memmove_chk(__dest$link2, __src$link2, __len$link2, 18446744073709551615ul);
  return (void *)return_value___builtin___memmove_chk$1$link2;
}

// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len)
{
  void *return_value___builtin___memset_chk$1;
  return_value___builtin___memset_chk$1=__builtin___memset_chk(__dest, __ch, __len, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1;
}

// memset$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link1(void *__dest$link1, signed int __ch$link1, unsigned long int __len$link1)
{
  void *return_value___builtin___memset_chk$1$link1;
  return_value___builtin___memset_chk$1$link1=__builtin___memset_chk(__dest$link1, __ch$link1, __len$link1, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link1;
}

// memset$link10
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link10(void *__dest$link10, signed int __ch$link10, unsigned long int __len$link10)
{
  void *return_value___builtin___memset_chk$1$link10;
  return_value___builtin___memset_chk$1$link10=__builtin___memset_chk(__dest$link10, __ch$link10, __len$link10, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link10;
}

// memset$link11
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link11(void *__dest$link11, signed int __ch$link11, unsigned long int __len$link11)
{
  void *return_value___builtin___memset_chk$1$link11;
  return_value___builtin___memset_chk$1$link11=__builtin___memset_chk(__dest$link11, __ch$link11, __len$link11, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link11;
}

// memset$link12
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link12(void *__dest$link12, signed int __ch$link12, unsigned long int __len$link12)
{
  void *return_value___builtin___memset_chk$1$link12;
  return_value___builtin___memset_chk$1$link12=__builtin___memset_chk(__dest$link12, __ch$link12, __len$link12, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link12;
}

// memset$link13
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link13(void *__dest$link13, signed int __ch$link13, unsigned long int __len$link13)
{
  void *return_value___builtin___memset_chk$1$link13;
  return_value___builtin___memset_chk$1$link13=__builtin___memset_chk(__dest$link13, __ch$link13, __len$link13, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link13;
}

// memset$link14
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link14(void *__dest$link14, signed int __ch$link14, unsigned long int __len$link14)
{
  void *return_value___builtin___memset_chk$1$link14;
  return_value___builtin___memset_chk$1$link14=__builtin___memset_chk(__dest$link14, __ch$link14, __len$link14, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link14;
}

// memset$link15
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link15(void *__dest$link15, signed int __ch$link15, unsigned long int __len$link15)
{
  void *return_value___builtin___memset_chk$1$link15;
  return_value___builtin___memset_chk$1$link15=__builtin___memset_chk(__dest$link15, __ch$link15, __len$link15, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link15;
}

// memset$link16
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link16(void *__dest$link16, signed int __ch$link16, unsigned long int __len$link16)
{
  void *return_value___builtin___memset_chk$1$link16;
  return_value___builtin___memset_chk$1$link16=__builtin___memset_chk(__dest$link16, __ch$link16, __len$link16, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link16;
}

// memset$link17
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link17(void *__dest$link17, signed int __ch$link17, unsigned long int __len$link17)
{
  void *return_value___builtin___memset_chk$1$link17;
  return_value___builtin___memset_chk$1$link17=__builtin___memset_chk(__dest$link17, __ch$link17, __len$link17, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link17;
}

// memset$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link2(void *__dest$link2, signed int __ch$link2, unsigned long int __len$link2)
{
  void *return_value___builtin___memset_chk$1$link2;
  return_value___builtin___memset_chk$1$link2=__builtin___memset_chk(__dest$link2, __ch$link2, __len$link2, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link2;
}

// memset$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link3(void *__dest$link3, signed int __ch$link3, unsigned long int __len$link3)
{
  void *return_value___builtin___memset_chk$1$link3;
  return_value___builtin___memset_chk$1$link3=__builtin___memset_chk(__dest$link3, __ch$link3, __len$link3, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link3;
}

// memset$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link4(void *__dest$link4, signed int __ch$link4, unsigned long int __len$link4)
{
  void *return_value___builtin___memset_chk$1$link4;
  return_value___builtin___memset_chk$1$link4=__builtin___memset_chk(__dest$link4, __ch$link4, __len$link4, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link4;
}

// memset$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link5(void *__dest$link5, signed int __ch$link5, unsigned long int __len$link5)
{
  void *return_value___builtin___memset_chk$1$link5;
  return_value___builtin___memset_chk$1$link5=__builtin___memset_chk(__dest$link5, __ch$link5, __len$link5, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link5;
}

// memset$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link6(void *__dest$link6, signed int __ch$link6, unsigned long int __len$link6)
{
  void *return_value___builtin___memset_chk$1$link6;
  return_value___builtin___memset_chk$1$link6=__builtin___memset_chk(__dest$link6, __ch$link6, __len$link6, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link6;
}

// memset$link7
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link7(void *__dest$link7, signed int __ch$link7, unsigned long int __len$link7)
{
  void *return_value___builtin___memset_chk$1$link7;
  return_value___builtin___memset_chk$1$link7=__builtin___memset_chk(__dest$link7, __ch$link7, __len$link7, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link7;
}

// memset$link8
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link8(void *__dest$link8, signed int __ch$link8, unsigned long int __len$link8)
{
  void *return_value___builtin___memset_chk$1$link8;
  return_value___builtin___memset_chk$1$link8=__builtin___memset_chk(__dest$link8, __ch$link8, __len$link8, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link8;
}

// memset$link9
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset$link9(void *__dest$link9, signed int __ch$link9, unsigned long int __len$link9)
{
  void *return_value___builtin___memset_chk$1$link9;
  return_value___builtin___memset_chk$1$link9=__builtin___memset_chk(__dest$link9, __ch$link9, __len$link9, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1$link9;
}

// my_random
// file util.c line 69
signed int my_random(signed int max, signed int seed)
{
  signed long int return_value_time$1;
  return_value_time$1=time((signed long int *)(void *)0);
  srand((unsigned int)return_value_time$1 * (unsigned int)seed);
  signed int return_value_rand$2;
  return_value_rand$2=rand();
  return (signed int)(((double)return_value_rand$2 / ((double)2147483647 + (double)1)) * (double)max);
}

// new_array
// file array.c line 43
struct ARRAY_T * new_array()
{
  struct ARRAY_T *this;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct ARRAY_T) /*16ul*/ , (unsigned long int)1);
  this = (struct ARRAY_T *)return_value_xcalloc$1;
  this->index = -1;
  this->length = 0;
  return this;
}

// new_auth
// file auth.c line 95
struct AUTH_T * new_auth()
{
  struct AUTH_T *this;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(AUTHSIZE, (unsigned long int)1);
  this = (struct AUTH_T *)return_value_calloc$1;
  this->creds=new_array();
  this->basic.encode=xstrdup("");
  this->digest.encode=xstrdup("");
  this->proxy.encode=xstrdup("");
  return this;
}

// new_creds
// file creds.c line 43
struct CREDS_T * new_creds(enum anonymous$3 scheme, char *str)
{
  struct CREDS_T *this;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(struct CREDS_T) /*32ul*/ , (unsigned long int)1);
  this = (struct CREDS_T *)return_value_calloc$1;
  this->scheme = scheme;
  __parse_input(this, str);
  return this;
}

// new_crew
// file crew.c line 51
struct CREW_T * new_crew(signed int size, signed int maxsize, enum anonymous block)
{
  signed int x;
  signed int c;
  struct CREW_T *this;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(struct CREW_T) /*240ul*/ , (unsigned long int)1);
  this = (struct CREW_T *)return_value_calloc$1;
  if(this == ((struct CREW_T *)NULL))
    return (struct CREW_T *)(void *)0;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)size);
    this->threads = (unsigned long int *)return_value_malloc$2;
    if(this->threads == ((unsigned long int *)NULL))
      return (struct CREW_T *)(void *)0;

    else
    {
      this->size = size;
      this->maxsize = maxsize;
      this->cursize = 0;
      this->total = 0;
      this->block = block;
      this->head = (struct work *)(void *)0;
      this->tail = (struct work *)(void *)0;
      this->closed = (enum anonymous)boolean_false;
      this->shutdown = (enum anonymous)boolean_false;
      c=pthread_mutex_init(&this->lock, (const union anonymous$18 *)(void *)0);
      if(!(c == 0))
        return (struct CREW_T *)(void *)0;

      else
      {
        c=pthread_cond_init(&this->not_empty, (const union anonymous$18 *)(void *)0);
        if(!(c == 0))
          return (struct CREW_T *)(void *)0;

        else
        {
          c=pthread_cond_init(&this->not_full, (const union anonymous$18 *)(void *)0);
          if(!(c == 0))
            return (struct CREW_T *)(void *)0;

          else
          {
            c=pthread_cond_init(&this->empty, (const union anonymous$18 *)(void *)0);
            if(!(c == 0))
              return (struct CREW_T *)(void *)0;

            else
            {
              x = 0;
              for( ; !(x == size); x = x + 1)
              {
                c=pthread_create(&this->threads[(signed long int)x], (const union pthread_attr_t *)(void *)0, crew_thread, (void *)this);
                if(!(c == 0))
                  return (struct CREW_T *)(void *)0;

              }
              return this;
            }
          }
        }
      }
    }
  }
}

// new_data
// file data.c line 64
struct DATA_T * new_data()
{
  struct DATA_T *this;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(struct DATA_T) /*128ul*/ , (unsigned long int)1);
  this = (struct DATA_T *)return_value_calloc$1;
  this->total = (float)0.0;
  this->available = (float)0.0;
  this->count = (unsigned int)0.0;
  this->ok200 = (unsigned int)0;
  this->failed = (float)0.0;
  this->lowest = (float)-1;
  this->highest = (float)0.0;
  this->elapsed = (float)0.0;
  this->bytes = (unsigned long long int)0.0;
  return this;
}

// new_hash
// file ./hash.h line 34
struct HASH_T * new_hash()
{
  struct HASH_T *this;
  signed int size = 10240;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(struct HASH_T) /*24ul*/ , (unsigned long int)1);
  this = (struct HASH_T *)return_value_calloc$1;
  this->size = size;
  this->entries = 0;
  this->index = 0;
  for( ; !(this->size >= size); this->size = this->size << 1)
    ;
  void *return_value_calloc$2;
  return_value_calloc$2=calloc((unsigned long int)this->size * sizeof(struct NODE *) /*8ul*/ , (unsigned long int)1);
  this->table = (struct NODE **)return_value_calloc$2;
  return this;
}

// new_socket
// file ./sock.h line 135
signed int new_socket(struct anonymous$0 *C, const char *hostparam, signed int portparam)
{
  signed int conn;
  signed int res;
  signed int opt;
  signed int herrno;
  struct sockaddr_in cli;
  struct hostent *hp;
  char hn[512l];
  signed int port;
  struct hostent hent;
  char hbf[8192l];
  C->encrypt = (enum anonymous)((signed int)C->scheme == HTTPS ? boolean_true : boolean_false);
  C->state = (enum anonymous$7)UNDEF;
  C->ftp.pasv = (enum anonymous)boolean_true;
  C->ftp.size = (unsigned long int)0;
  memset$link13((void *)hn, 0, sizeof(char [512l]) /*512ul*/ );
  enum anonymous return_value_auth_get_proxy_required$2;
  return_value_auth_get_proxy_required$2=auth_get_proxy_required(my.auth);
  if(!(return_value_auth_get_proxy_required$2 == /*enum*/boolean_false))
  {
    char *return_value_auth_get_proxy_host$1;
    return_value_auth_get_proxy_host$1=auth_get_proxy_host(my.auth);
    snprintf$link9(hn, sizeof(char [512l]) /*512ul*/ , "%s", return_value_auth_get_proxy_host$1);
    port=auth_get_proxy_port(my.auth);
  }

  else
  {
    snprintf$link9(hn, sizeof(char [512l]) /*512ul*/ , "%s", hostparam);
    port = portparam;
  }
  C->sock=socket(2, 1, 0);
  if(!(C->sock >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    switch(*return_value___errno_location$3)
    {
      case 93:
      {
        NOTIFY((enum anonymous$19)ERROR, "unsupported protocol %s:%d", (const void *)"sock.c", 118);
        break;
      }
      case 24:
      {
        NOTIFY((enum anonymous$19)ERROR, "descriptor table full %s:%d", (const void *)"sock.c", 119);
        break;
      }
      case 23:
      {
        NOTIFY((enum anonymous$19)ERROR, "file table full %s:%d", (const void *)"sock.c", 120);
        break;
      }
      case 13:
      {
        NOTIFY((enum anonymous$19)ERROR, "permission denied %s:%d", (const void *)"sock.c", 121);
        break;
      }
      case 105:
      {
        NOTIFY((enum anonymous$19)ERROR, "insufficient buffer %s:%d", (const void *)"sock.c", 122);
        break;
      }
      default:
        NOTIFY((enum anonymous$19)ERROR, "unknown socket error %s:%d", (const void *)"sock.c", 123);
    }
    socket_close(C);
    return -1;
  }

  signed int return_value_fcntl$4;
  return_value_fcntl$4=fcntl(C->sock, 2, 04000);
  if(!(return_value_fcntl$4 >= 0))
    NOTIFY((enum anonymous$19)ERROR, "unable to set close control %s:%d", (const void *)"sock.c", 127);

  memset$link13((void *)hbf, 0, sizeof(char [8192l]) /*8192ul*/ );
  signed int return_value_gethostbyname_r$5;
  return_value_gethostbyname_r$5=gethostbyname_r(hostparam, &hent, hbf, sizeof(char [8192l]) /*8192ul*/ , &hp, &herrno);
  if(!(return_value_gethostbyname_r$5 >= 0))
    hp = (struct hostent *)(void *)0;

  signed int *return_value___errno_location$25;
  unsigned long int return_value_pthread_self$11;
  unsigned long int return_value_pthread_self$12;
  unsigned long int return_value_pthread_self$13;
  unsigned long int return_value_pthread_self$14;
  unsigned long int return_value_pthread_self$15;
  unsigned long int return_value_pthread_self$16;
  unsigned long int return_value_pthread_self$17;
  signed int *return_value___errno_location$23;
  signed int *return_value___errno_location$22;
  if(hp == ((struct hostent *)NULL))
    return -1;

  else
  {
    memset$link13((void *)&cli, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    memcpy$link8((void *)&cli.sin_addr, (const void *)hp->h_addr_list[(signed long int)0], (unsigned long int)hp->h_length);
    cli.sin_family = (unsigned short int)2;
    unsigned short int tmp_statement_expression$6;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)port;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression$6 = __v;
    cli.sin_port = tmp_statement_expression$6;
    if(!(C->connection.keepalive == 0))
    {
      opt = 1;
      signed int return_value_setsockopt$8;
      return_value_setsockopt$8=setsockopt(C->sock, 1, 9, (const void *)(char *)&opt, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(!(return_value_setsockopt$8 >= 0))
      {
        signed int *return_value___errno_location$7;
        return_value___errno_location$7=__errno_location();
        switch(*return_value___errno_location$7)
        {
          case 9:
          {
            NOTIFY((enum anonymous$19)ERROR, "invalid descriptor %s:%d", (const void *)"sock.c", 176);
            break;
          }
          case 88:
          {
            NOTIFY((enum anonymous$19)ERROR, "not a socket %s:%d", (const void *)"sock.c", 177);
            break;
          }
          case 92:
          {
            NOTIFY((enum anonymous$19)ERROR, "not a protocol option %s:%d", (const void *)"sock.c", 178);
            break;
          }
          case 14:
          {
            NOTIFY((enum anonymous$19)ERROR, "setsockopt unknown %s:%d", (const void *)"sock.c", 179);
            break;
          }
          default:
            NOTIFY((enum anonymous$19)ERROR, "unknown sockopt error %s:%d", (const void *)"sock.c", 180);
        }
        socket_close(C);
        return -1;
      }

    }

    signed int return_value___socket_block$9;
    return_value___socket_block$9=__socket_block(C->sock, (enum anonymous)boolean_false);
    if(!(return_value___socket_block$9 >= 0))
    {
      NOTIFY((enum anonymous$19)ERROR, "socket: unable to set socket to non-blocking %s:%d", (const void *)"sock.c", 186);
      return -1;
    }

    else
    {
      conn=connect(C->sock, (struct sockaddr *)&cli, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      pthread_testcancel();
      _Bool tmp_if_expr$26;
      if(!(conn >= 0))
      {
        return_value___errno_location$25=__errno_location();
        tmp_if_expr$26 = *return_value___errno_location$25 != 115 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$26 = (_Bool)0;
      if(tmp_if_expr$26)
      {
        signed int *return_value___errno_location$10;
        return_value___errno_location$10=__errno_location();
        switch(*return_value___errno_location$10)
        {
          case 13:
          {
            return_value_pthread_self$11=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d EACCES", return_value_pthread_self$11);
            break;
          }
          case 99:
          {
            return_value_pthread_self$12=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d address is unavailable.", return_value_pthread_self$12);
            break;
          }
          case 110:
          {
            return_value_pthread_self$13=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d connection timed out.", return_value_pthread_self$13);
            break;
          }
          case 111:
          {
            return_value_pthread_self$14=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d connection refused.", return_value_pthread_self$14);
            break;
          }
          case 101:
          {
            return_value_pthread_self$15=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d network is unreachable.", return_value_pthread_self$15);
            break;
          }
          case 106:
          {
            return_value_pthread_self$16=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d already connected.", return_value_pthread_self$16);
            break;
          }
          default:
          {
            return_value_pthread_self$17=pthread_self();
            NOTIFY((enum anonymous$19)ERROR, "socket: %d unknown network error.", return_value_pthread_self$17);
          }
        }
        socket_close(C);
        return -1;
      }

      else
      {
        struct timeval timeout;
        struct anonymous$5 rs;
        struct anonymous$5 ws;
        do
        {
          signed int __d0;
          signed int new_socket$$1$$11$$1$$__d1;
          asm("cld; rep; stosq" : "=c"(__d0), "=D"(new_socket$$1$$11$$1$$__d1) : "a"(0), "0"(sizeof(struct anonymous$5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rs)->__fds_bits[(signed long int)0]) : "memory");
        }
        while((_Bool)0);
        do
        {
          signed int new_socket$$1$$11$$2$$__d0;
          signed int __d1;
          asm("cld; rep; stosq" : "=c"(new_socket$$1$$11$$2$$__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$5) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&ws)->__fds_bits[(signed long int)0]) : "memory");
        }
        while((_Bool)0);
        signed long int tmp_statement_expression$18;
        signed long int __d = (signed long int)C->sock;
        signed long int return_value___fdelt_chk$19;
        return_value___fdelt_chk$19=__fdelt_chk(__d);
        tmp_statement_expression$18 = return_value___fdelt_chk$19;
        (&rs)->__fds_bits[tmp_statement_expression$18] = (&rs)->__fds_bits[tmp_statement_expression$18] | (signed long int)(1UL << C->sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        signed long int tmp_statement_expression$20;
        signed long int new_socket$$1$$11$$4$$__d = (signed long int)C->sock;
        signed long int return_value___fdelt_chk$21;
        return_value___fdelt_chk$21=__fdelt_chk(new_socket$$1$$11$$4$$__d);
        tmp_statement_expression$20 = return_value___fdelt_chk$21;
        (&ws)->__fds_bits[tmp_statement_expression$20] = (&ws)->__fds_bits[tmp_statement_expression$20] | (signed long int)(1UL << C->sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        memset$link13((void *)&timeout, 0, sizeof(struct timeval) /*16ul*/ );
        timeout.tv_sec = (signed long int)(my.timeout > 0 ? my.timeout : 30);
        timeout.tv_usec = (signed long int)0;
        res=select(C->sock + 1, &rs, &ws, (struct anonymous$5 *)(void *)0, &timeout);
        _Bool tmp_if_expr$24;
        if(res == -1)
        {
          return_value___errno_location$23=__errno_location();
          tmp_if_expr$24 = *return_value___errno_location$23 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$24 = (_Bool)0;
        if(tmp_if_expr$24)
        {
          pthread_testcancel();
          fprintf$link5(stderr, "socket: connection timed out\n");
          socket_close(C);
          return -1;
        }

        else
        {
          res=connect(C->sock, (struct sockaddr *)&cli, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
          if(!(res >= 0))
          {
            return_value___errno_location$22=__errno_location();
            if(!(*return_value___errno_location$22 == 106))
            {
              NOTIFY((enum anonymous$19)ERROR, "socket: unable to connect %s:%d", (const void *)"sock.c", 230);
              socket_close(C);
              return -1;
            }

          }

          C->status = (enum anonymous$31)S_READING;
        }
      }
      signed int return_value___socket_block$27;
      return_value___socket_block$27=__socket_block(C->sock, (enum anonymous)boolean_true);
      if(!(return_value___socket_block$27 >= 0))
      {
        NOTIFY((enum anonymous$19)ERROR, "socket: unable to set socket to non-blocking %s:%d", (const void *)"sock.c", 239);
        return -1;
      }

      else
      {
        C->connection.status = 1;
        return C->sock;
      }
    }
  }
}

// new_url
// file ./url.h line 68
struct URL_T * new_url(char *str)
{
  struct URL_T *this;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct URL_T) /*184ul*/ , (unsigned long int)1);
  this = (struct URL_T *)return_value_xcalloc$1;
  this->ID = 0;
  this->hasparams = (enum anonymous)boolean_false;
  __url_parse(this, str);
  return this;
}

// okay
// file ./util.h line 34
enum anonymous okay(signed int code)
{
  return (enum anonymous)(code >= 100 && code <= 299);
}

// open
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open(const char *__path, signed int __oflag, ...)
{
  signed int return_value___builtin_va_arg_pack_len$1;
  return_value___builtin_va_arg_pack_len$1=__builtin_va_arg_pack_len();
  if(return_value___builtin_va_arg_pack_len$1 >= 2)
    __open_too_many_args();

  signed int return_value___builtin_va_arg_pack_len$3;
  signed int return_value___builtin_va_arg_pack_len$7;
  return_value___builtin_va_arg_pack_len$7=__builtin_va_arg_pack_len();
  signed int return_value___open_2$6;
  if(!(return_value___builtin_va_arg_pack_len$7 >= 1))
  {
    return_value___open_2$6=__open_2(__path, __oflag);
    return return_value___open_2$6;
  }

  void *return_value___builtin_va_arg_pack$8;
  return_value___builtin_va_arg_pack$8=__builtin_va_arg_pack();
  signed int return_value_open$9;
  return_value_open$9=open(__path, __oflag, return_value___builtin_va_arg_pack$8);
  return return_value_open$9;
}

// open$link1
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open$link1(const char *__path$link1, signed int __oflag$link1, ...)
{
  signed int return_value___builtin_va_arg_pack_len$1$link1;
  return_value___builtin_va_arg_pack_len$1$link1=__builtin_va_arg_pack_len();
  if(return_value___builtin_va_arg_pack_len$1$link1 >= 2)
    __open_too_many_args();

  signed int return_value___builtin_va_arg_pack_len$3$link1;
  signed int return_value___builtin_va_arg_pack_len$7$link1;
  return_value___builtin_va_arg_pack_len$7$link1=__builtin_va_arg_pack_len();
  signed int return_value___open_2$6$link1;
  if(!(return_value___builtin_va_arg_pack_len$7$link1 >= 1))
  {
    return_value___open_2$6$link1=__open_2(__path$link1, __oflag$link1);
    return return_value___open_2$6$link1;
  }

  void *return_value___builtin_va_arg_pack$8$link1;
  return_value___builtin_va_arg_pack$8$link1=__builtin_va_arg_pack();
  signed int return_value_open$9$link1;
  return_value_open$9$link1=open$link1(__path$link1, __oflag$link1, return_value___builtin_va_arg_pack$8$link1);
  return return_value_open$9$link1;
}

// parse
// file cfg.c line 38
void parse(char *str)
{
  char *ch;
  char *return_value_strstr$1;
  return_value_strstr$1=strstr(str, "#");
  ch = (char *)return_value_strstr$1;
  if(!(ch == ((char *)NULL)))
    *ch = (char)0;

  char *return_value_strstr$2;
  return_value_strstr$2=strstr(str, "\n");
  ch = (char *)return_value_strstr$2;
  if(!(ch == ((char *)NULL)))
    *ch = (char)0;

}

// parse_cmdline
// file main.c line 189
void parse_cmdline(signed int argc, char **argv)
{
  signed int c = 0;
  signed int nargs;
  enum anonymous return_value_strmatch$3;
  unsigned long int return_value_strlen$4;
  do
  {
    c=getopt_long(argc, argv, "VhvqCDgl::ibr:t:f:d:c:m:H:R:A:T:", long_options, (signed int *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 86:
      {
        display_version((enum anonymous)boolean_true);
        break;
      }
      case 104:
      {
        display_help();
        exit(0);
      }
      case 68:
      {
        my.debug = (enum anonymous)boolean_true;
        break;
      }
      case 67:
      {
        my.config = (enum anonymous)boolean_true;
        my.get = (enum anonymous)boolean_false;
        break;
      }
      case 99:
      {
        my.cusers=atoi$link3(optarg);
        break;
      }
      case 105:
      {
        my.internet = (enum anonymous)boolean_true;
        break;
      }
      case 98:
      {
        my.bench = (enum anonymous)boolean_true;
        break;
      }
      case 100:
      {
        my.delay=atoi$link3(optarg);
        if(!(my.delay >= 0))
          my.delay = 0;

        break;
      }
      case 103:
      {
        my.get = (enum anonymous)boolean_true;
        break;
      }
      case 108:
      {
        my.logging = (enum anonymous)boolean_true;
        if(!(optarg == ((char *)NULL)))
        {
          unsigned long int return_value_strlen$1;
          return_value_strlen$1=strlen(optarg);
          my.logfile[(signed long int)return_value_strlen$1] = (char)0;
          unsigned long int return_value_strlen$2;
          return_value_strlen$2=strlen(optarg);
          strncpy$link5(my.logfile, optarg, return_value_strlen$2);
        }

        break;
      }
      case 109:
      {
        my.mark = (enum anonymous)boolean_true;
        my.markstr = optarg;
        my.logging = (enum anonymous)boolean_true;
        break;
      }
      case 113:
      {
        my.quiet = (enum anonymous)boolean_true;
        break;
      }
      case 118:
      {
        my.verbose = (enum anonymous)boolean_true;
        break;
      }
      case 114:
      {
        return_value_strmatch$3=strmatch(optarg, "once");
        if(!(return_value_strmatch$3 == /*enum*/boolean_false))
          my.reps = -1;

        else
          my.reps=atoi$link3(optarg);
        break;
      }
      case 116:
      {
        parse_time(optarg);
        break;
      }
      case 102:
      {
        memset$link12((void *)my.file, 0, sizeof(char [128l]) /*128ul*/ );
        if(optarg == ((char *)NULL))
          break;

        return_value_strlen$4=strlen(optarg);
        strncpy$link5(my.file, optarg, return_value_strlen$4);
        break;
      }
      case 65:
      {
        strncpy$link5(my.uagent, optarg, (unsigned long int)255);
        break;
      }
      case 84:
      {
        strncpy$link5(my.conttype, optarg, (unsigned long int)255);
        break;
      }
      case 82:
        break;
      case 72:
      {
        char *return_value___builtin_strchr$5;
        return_value___builtin_strchr$5=__builtin_strchr(optarg, 58);
        if(return_value___builtin_strchr$5 == ((char *)NULL))
          NOTIFY((enum anonymous$19)FATAL, "no ':' in http-header");

        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(optarg);
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(my.extra);
        if(3ul + return_value_strlen$6 + return_value_strlen$7 >= 2049ul)
          NOTIFY((enum anonymous$19)FATAL, "header is too large");

        strcat$link2(my.extra, optarg);
        strcat$link2(my.extra, "\r\n");
      }
    }
  }
  while((_Bool)1);
  nargs = argc - optind;
  if(!(nargs == 0))
    my.url=xstrdup(argv[(signed long int)(argc - 1)]);

  if(my.url == ((char *)NULL) && !(my.get == /*enum*/boolean_false))
  {
    puts("ERROR: -g/--get requires a commandline URL");
    exit(1);
  }

  goto __CPROVER_DUMP_L33;

__CPROVER_DUMP_L33:
  ;
}

// parse_cookie
// file cookie.c line 51
void parse_cookie(char *cookiestr, struct anonymous$12 *ck)
{
  char *lval;
  char *rval;
  char *return_value_xstrdup$3;
  char *return_value_xstrdup$5;
  const unsigned short int **return_value___ctype_b_loc$7;
  char *return_value_xstrdup$11;
  signed int return_value_strcasecmp$16;
  signed int return_value_strcasecmp$15;
  char *return_value_xstrdup$13;
  if(!(cookiestr == ((char *)NULL)) && !(ck == ((struct anonymous$12 *)NULL)))
  {
    ck->path = (char *)(void *)0;
    ck->domain = ck->path;
    ck->value = ck->domain;
    ck->name = ck->value;
    ck->secure = 0;
    ck->expires = (signed long int)ck->secure;
    lval = cookiestr;
    for( ; !(*cookiestr == 0); cookiestr = cookiestr + 1l)
      if((signed int)*cookiestr == 61)
        break;

    if(!(*cookiestr == 0))
    {
      char *tmp_post$1 = cookiestr;
      cookiestr = cookiestr + 1l;
      *tmp_post$1 = (char)0;
      rval = cookiestr;
      for( ; !(*cookiestr == 0); cookiestr = cookiestr + 1l)
        if((signed int)*cookiestr == 59)
          break;

      char *tmp_post$2 = cookiestr;
      cookiestr = cookiestr + 1l;
      *tmp_post$2 = (char)0;
      if(!(lval == ((char *)NULL)))
        debug("%s:%d accepting cookie name:  %s", (const void *)"cookie.c", 74, lval);

      if(!(rval == ((char *)NULL)))
        debug("%s:%d accepting cookie value: %s", (const void *)"cookie.c", 75, rval);

      char *tmp_if_expr$4;
      if(!(lval == ((char *)NULL)))
      {
        return_value_xstrdup$3=xstrdup(lval);
        tmp_if_expr$4 = return_value_xstrdup$3;
      }

      else
        tmp_if_expr$4 = (char *)(void *)0;
      ck->name = tmp_if_expr$4;
      char *tmp_if_expr$6;
      if(!(rval == ((char *)NULL)))
      {
        return_value_xstrdup$5=xstrdup(rval);
        tmp_if_expr$6 = return_value_xstrdup$5;
      }

      else
        tmp_if_expr$6 = (char *)(void *)0;
      ck->value = tmp_if_expr$6;
      ck->expires = (signed long int)0;
      ck->expires = ~ck->expires;
      if(!(ck->expires >= 0l))
        ck->expires = (signed long int)~(1UL << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)1);

      if(!(ck->expires >= 0l))
        ck->expires = (ck->expires >> 1) * (signed long int)-1;

      if(!(*cookiestr == 0))
      {
        while(!(*cookiestr == 0))
        {
          do
          {
            return_value___ctype_b_loc$7=__ctype_b_loc();
            if((8192 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)*cookiestr]) == 0)
              break;

            cookiestr = cookiestr + 1l;
          }
          while((_Bool)1);
          if(*cookiestr == 0)
            break;

          lval = cookiestr;
          for( ; !(*cookiestr == 0); cookiestr = cookiestr + 1l)
            if((signed int)*cookiestr == 61)
              break;

          signed int return_value_strcasecmp$10;
          return_value_strcasecmp$10=strcasecmp(lval, "secure");
          if(return_value_strcasecmp$10 == 0)
          {
            ck->secure = 1;
            rval = (char *)(void *)0;
          }

          else
          {
            if(*cookiestr == 0)
              goto __CPROVER_DUMP_L35;

            char *tmp_post$8 = cookiestr;
            cookiestr = cookiestr + 1l;
            *tmp_post$8 = (char)0;
            rval = cookiestr;
            for( ; !(*cookiestr == 0); cookiestr = cookiestr + 1l)
              if((signed int)*cookiestr == 59)
                break;

            char *tmp_post$9 = cookiestr;
            cookiestr = cookiestr + 1l;
            *tmp_post$9 = (char)0;
          }
          signed int return_value_strcasecmp$17;
          return_value_strcasecmp$17=strcasecmp(lval, "domain");
          if(return_value_strcasecmp$17 == 0)
          {
            char *tmp_if_expr$12;
            if(!(rval == ((char *)NULL)))
            {
              return_value_xstrdup$11=xstrdup(rval);
              tmp_if_expr$12 = return_value_xstrdup$11;
            }

            else
              tmp_if_expr$12 = (char *)(void *)0;
            ck->domain = tmp_if_expr$12;
          }

          else
          {
            return_value_strcasecmp$16=strcasecmp(lval, "expires");
            if(return_value_strcasecmp$16 == 0)
              ck->expires=strtotime(rval);

            else
            {
              return_value_strcasecmp$15=strcasecmp(lval, "path");
              if(return_value_strcasecmp$15 == 0)
              {
                char *tmp_if_expr$14;
                if(!(rval == ((char *)NULL)))
                {
                  return_value_xstrdup$13=xstrdup(rval);
                  tmp_if_expr$14 = return_value_xstrdup$13;
                }

                else
                  tmp_if_expr$14 = (char *)(void *)0;
                ck->path = tmp_if_expr$14;
              }

            }
          }
        }
        goto __CPROVER_DUMP_L35;
      }

    }

  }


__CPROVER_DUMP_L35:
  ;
}

// parse_rc_cmdline
// file main.c line 168
void parse_rc_cmdline(signed int argc, char **argv)
{
  signed int a = 0;
  strcpy(my.rc, "");
  while(a >= 0)
  {
    a=getopt_long(argc, argv, "VhvqCDgl::ibr:t:f:d:c:m:H:R:A:T:", long_options, (signed int *)0);
    if(a == 82)
    {
      strcpy(my.rc, optarg);
      a = -1;
    }

  }
  optind = 0;
}

// parse_time
// file ./util.h line 28
void parse_time(char *p)
{
  unsigned long int x = (unsigned long int)0;
  my.secs = 0;
  my.time = my.secs;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)p[(signed long int)x]]) == 0)
      break;

    x = x + 1ul;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen$3;
  const signed int **return_value___ctype_tolower_loc$5;
  const signed int **return_value___ctype_tolower_loc$7;
  if(!(x == 0ul))
  {
    char *return_value_substring$2;
    return_value_substring$2=substring(p, 0, (signed int)x);
    my.time=atoi$link5(return_value_substring$2);
    do
    {
      return_value_strlen$3=strlen(p);
      if(x >= return_value_strlen$3)
        break;

      signed int tmp_statement_expression$4;
      signed int __res;
      return_value___ctype_tolower_loc$7=__ctype_tolower_loc();
      __res = (*return_value___ctype_tolower_loc$7)[(signed long int)(signed int)p[(signed long int)x]];
      tmp_statement_expression$4 = __res;
      switch(tmp_statement_expression$4)
      {
        case 115:
        {
          my.secs = my.time;
          my.time = 1;
          goto __CPROVER_DUMP_L17;
        }
        case 109:
        {
          my.secs = my.time * 60;
          my.time = 1;
          goto __CPROVER_DUMP_L17;
        }
        case 104:
        {
          my.secs = my.time * 3600;
          my.time = 1;
          goto __CPROVER_DUMP_L17;
        }
        default:
          x = x + 1ul;
      }
    }
    while((_Bool)1);
    if(my.time >= 1 && !(my.secs >= 1))
      my.secs = my.time * 60;

    goto __CPROVER_DUMP_L17;
  }


__CPROVER_DUMP_L17:
  ;
}

// pos
// file base64.c line 48
static signed int pos(char c)
{
  char *p = base64;
  for( ; !(*p == 0); p = p + 1l)
    if(*p == c)
      return (signed int)(p - base64);

  return -1;
}

// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2;
  return_value___printf_chk$2=__printf_chk(2 - 1, __fmt, return_value___builtin_va_arg_pack$1);
  return return_value___printf_chk$2;
}

// printf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link1(const char * restrict __fmt$link1, ...)
{
  void *return_value___builtin_va_arg_pack$1$link1;
  return_value___builtin_va_arg_pack$1$link1=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link1;
  return_value___printf_chk$2$link1=__printf_chk(2 - 1, __fmt$link1, return_value___builtin_va_arg_pack$1$link1);
  return return_value___printf_chk$2$link1;
}

// printf$link10
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link10(const char * restrict __fmt$link10, ...)
{
  void *return_value___builtin_va_arg_pack$1$link10;
  return_value___builtin_va_arg_pack$1$link10=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link10;
  return_value___printf_chk$2$link10=__printf_chk(2 - 1, __fmt$link10, return_value___builtin_va_arg_pack$1$link10);
  return return_value___printf_chk$2$link10;
}

// printf$link11
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link11(const char * restrict __fmt$link11, ...)
{
  void *return_value___builtin_va_arg_pack$1$link11;
  return_value___builtin_va_arg_pack$1$link11=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link11;
  return_value___printf_chk$2$link11=__printf_chk(2 - 1, __fmt$link11, return_value___builtin_va_arg_pack$1$link11);
  return return_value___printf_chk$2$link11;
}

// printf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link2(const char * restrict __fmt$link2, ...)
{
  void *return_value___builtin_va_arg_pack$1$link2;
  return_value___builtin_va_arg_pack$1$link2=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link2;
  return_value___printf_chk$2$link2=__printf_chk(2 - 1, __fmt$link2, return_value___builtin_va_arg_pack$1$link2);
  return return_value___printf_chk$2$link2;
}

// printf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link3(const char * restrict __fmt$link3, ...)
{
  void *return_value___builtin_va_arg_pack$1$link3;
  return_value___builtin_va_arg_pack$1$link3=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link3;
  return_value___printf_chk$2$link3=__printf_chk(2 - 1, __fmt$link3, return_value___builtin_va_arg_pack$1$link3);
  return return_value___printf_chk$2$link3;
}

// printf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link4(const char * restrict __fmt$link4, ...)
{
  void *return_value___builtin_va_arg_pack$1$link4;
  return_value___builtin_va_arg_pack$1$link4=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link4;
  return_value___printf_chk$2$link4=__printf_chk(2 - 1, __fmt$link4, return_value___builtin_va_arg_pack$1$link4);
  return return_value___printf_chk$2$link4;
}

// printf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link5(const char * restrict __fmt$link5, ...)
{
  void *return_value___builtin_va_arg_pack$1$link5;
  return_value___builtin_va_arg_pack$1$link5=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link5;
  return_value___printf_chk$2$link5=__printf_chk(2 - 1, __fmt$link5, return_value___builtin_va_arg_pack$1$link5);
  return return_value___printf_chk$2$link5;
}

// printf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link6(const char * restrict __fmt$link6, ...)
{
  void *return_value___builtin_va_arg_pack$1$link6;
  return_value___builtin_va_arg_pack$1$link6=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link6;
  return_value___printf_chk$2$link6=__printf_chk(2 - 1, __fmt$link6, return_value___builtin_va_arg_pack$1$link6);
  return return_value___printf_chk$2$link6;
}

// printf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link7(const char * restrict __fmt$link7, ...)
{
  void *return_value___builtin_va_arg_pack$1$link7;
  return_value___builtin_va_arg_pack$1$link7=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link7;
  return_value___printf_chk$2$link7=__printf_chk(2 - 1, __fmt$link7, return_value___builtin_va_arg_pack$1$link7);
  return return_value___printf_chk$2$link7;
}

// printf$link8
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link8(const char * restrict __fmt$link8, ...)
{
  void *return_value___builtin_va_arg_pack$1$link8;
  return_value___builtin_va_arg_pack$1$link8=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link8;
  return_value___printf_chk$2$link8=__printf_chk(2 - 1, __fmt$link8, return_value___builtin_va_arg_pack$1$link8);
  return return_value___printf_chk$2$link8;
}

// printf$link9
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf$link9(const char * restrict __fmt$link9, ...)
{
  void *return_value___builtin_va_arg_pack$1$link9;
  return_value___builtin_va_arg_pack$1$link9=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2$link9;
  return_value___printf_chk$2$link9=__printf_chk(2 - 1, __fmt$link9, return_value___builtin_va_arg_pack$1$link9);
  return return_value___printf_chk$2$link9;
}

// pthread_rand_np
// file ./util.h line 31
signed int pthread_rand_np(unsigned int *ctx)
{
  signed int return_value_rand_r$1;
  return_value_rand_r$1=rand_r(ctx);
  return (signed int)return_value_rand_r$1;
}

// pthread_sleep_np
// file ./util.h line 29
void pthread_sleep_np(unsigned int secs)
{
  sleep(secs);
}

// pthread_usleep_np
// file ./util.h line 30
void pthread_usleep_np(unsigned long int usec)
{
  usleep((unsigned int)usec);
}

// read
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read(signed int __fd, void *__buf, unsigned long int __nbytes)
{
  signed long int return_value___read_chk$1;
  signed long int return_value___read_chk$2;
  signed long int return_value_read$3;
  return_value_read$3=read(__fd, __buf, __nbytes);
  return return_value_read$3;
}

// read$link1
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read$link1(signed int __fd$link1, void *__buf$link1, unsigned long int __nbytes$link1)
{
  signed long int return_value___read_chk$1$link1;
  signed long int return_value___read_chk$2$link1;
  signed long int return_value_read$3$link1;
  return_value_read$3$link1=read$link1(__fd$link1, __buf$link1, __nbytes$link1);
  return return_value_read$3$link1;
}

// read$link2
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 34
static inline signed long int read$link2(signed int __fd$link2, void *__buf$link2, unsigned long int __nbytes$link2)
{
  signed long int return_value___read_chk$1$link2;
  signed long int return_value___read_chk$2$link2;
  signed long int return_value_read$3$link2;
  return_value_read$3$link2=read$link2(__fd$link2, __buf$link2, __nbytes$link2);
  return return_value_read$3$link2;
}

// read_cfg_file
// file cfg.c line 53
signed int read_cfg_file(struct anonymous$15 *l, char *filename)
{
  struct _IO_FILE *file;
  struct HASH_T *H;
  char *line;
  char *option;
  char *value;
  char *return_value_fgets$2;
  enum anonymous return_value_is_variable_line$11;
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$6;
  char *return_value_strstr$8;
  if(l == ((struct anonymous$15 *)NULL))
  {
    printf("Structure not initialized!\n");
    return -1;
  }

  else
  {
    file=fopen(filename, "r");
    if(file == ((struct _IO_FILE *)NULL))
    {
      NOTIFY((enum anonymous$19)WARNING, "unable to open file: %s", filename);
      display_help();
      exit(1);
    }

    void *return_value_xmalloc$1;
    return_value_xmalloc$1=xmalloc((unsigned long int)40000);
    line = (char *)return_value_xmalloc$1;
    H=new_hash();
    l->index = 0;
    memset$link4((void *)line, 0, sizeof(char *) /*8ul*/ );
    do
    {
      return_value_fgets$2=fgets(line, 40000, file);
      if(return_value_fgets$2 == ((char *)NULL))
        break;

      signed int num;
      char *p;
      char *return_value___builtin_strchr$3;
      return_value___builtin_strchr$3=__builtin_strchr(line, 10);
      p = return_value___builtin_strchr$3;
      if(!(p == ((char *)NULL)))
        *p = (char)0;

      else
      {
        num=fgetc(file);
        if(!(num == -1))
        {
          do
          {
            num=fgetc(file);
            if(num == -1)
              break;

            if(num == 10)
              break;

          }
          while((_Bool)1);
          line[(signed long int)0] = (char)0;
        }

      }
      parse(line);
      chomp(line);
      unsigned long int return_value_strlen$12;
      return_value_strlen$12=strlen(line);
      if(!(return_value_strlen$12 == 0ul))
      {
        return_value_is_variable_line$11=is_variable_line(line);
        if(!(return_value_is_variable_line$11 == /*enum*/boolean_false))
        {
          char *tmp = line;
          option = tmp;
          for( ; !(*tmp == 0); tmp = tmp + 1l)
          {
            return_value___ctype_b_loc$4=__ctype_b_loc();
            if(!((8192 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)(unsigned char)(signed int)*tmp]) == 0))
              break;

            if((signed int)*tmp == 61)
              break;

            if((signed int)*tmp == 58)
              break;

          }
          char *tmp_post$5 = tmp;
          tmp = tmp + 1l;
          *tmp_post$5 = (char)0;
          do
          {
            return_value___ctype_b_loc$6=__ctype_b_loc();
            if((8192 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)(unsigned char)(signed int)*tmp]) == 0)
            {
              if(!((signed int)*tmp == 61))
              {
                if(!((signed int)*tmp == 58))
                  break;

              }

            }

            tmp = tmp + 1l;
          }
          while((_Bool)1);
          value = tmp;
          for( ; !(*tmp == 0); tmp = tmp + 1l)
            ;
          char *tmp_post$7 = tmp;
          tmp = tmp + 1l;
          *tmp_post$7 = (char)0;
          hash_add(H, option, value);
        }

        else
        {
          char *read_cfg_file$$1$$3$$4$$tmp;
          read_cfg_file$$1$$3$$4$$tmp=xstrdup(line);
          do
          {
            return_value_strstr$8=strstr(read_cfg_file$$1$$3$$4$$tmp, "$");
            if(return_value_strstr$8 == ((char *)NULL))
              break;

            read_cfg_file$$1$$3$$4$$tmp=evaluate(H, read_cfg_file$$1$$3$$4$$tmp);
          }
          while((_Bool)1);
          void *return_value_realloc$9;
          return_value_realloc$9=realloc((void *)l->line, sizeof(char *) /*8ul*/  * (unsigned long int)(l->index + 1));
          l->line = (char **)return_value_realloc$9;
          char *return_value___strdup$10;
          return_value___strdup$10=__strdup(read_cfg_file$$1$$3$$4$$tmp);
          l->line[(signed long int)l->index] = (char *)return_value___strdup$10;
          l->index = l->index + 1;
          free((void *)read_cfg_file$$1$$3$$4$$tmp);
        }
      }

      memset$link4((void *)line, 0, sizeof(char *) /*8ul*/ );
    }
    while((_Bool)1);
    fclose(file);
    xfree((void *)line);
    hash_destroy(H);
    return l->index;
  }
}

// read_cmd_line
// file cfg.c line 140
signed int read_cmd_line(struct anonymous$15 *l, char *url)
{
  signed int x = 0;
  char head[40000l];
  if(l == ((struct anonymous$15 *)NULL))
  {
    printf("Structure not initialized!\n");
    return -1;
  }

  else
  {
    l->index = 0;
    while(!(x >= 4))
    {
      snprintf$link2(head, sizeof(char [40000l]) /*40000ul*/ , "%s", url);
      parse(head);
      chomp(head);
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(head);
      if(!(return_value_strlen$3 == 0ul))
      {
        void *return_value_realloc$1;
        return_value_realloc$1=realloc((void *)l->line, sizeof(char *) /*8ul*/  * (unsigned long int)(l->index + 1));
        l->line = (char **)return_value_realloc$1;
        char *return_value___strdup$2;
        return_value___strdup$2=__strdup(head);
        l->line[(signed long int)l->index] = (char *)return_value___strdup$2;
        l->index = l->index + 1;
      }

      x = x + 1;
    }
    return l->index;
  }
}

// reverse
// file util.c line 93
void reverse(char *s)
{
  signed int c;
  signed int i;
  signed int j;
  i = 0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s);
  j = (signed int)(return_value_strlen$1 - (unsigned long int)1);
  for( ; !(i >= j); j = j - 1)
  {
    c = (signed int)s[(signed long int)i];
    s[(signed long int)i] = s[(signed long int)j];
    s[(signed long int)j] = (char)c;
    i = i + 1;
  }
}

// rtrim
// file perl.c line 53
char * rtrim(char *str)
{
  char *ptr;
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  len = (signed int)return_value_strlen$1;
  ptr = (str + (signed long int)len) - (signed long int)1;
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  do
  {
    if(ptr >= str)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      tmp_if_expr$3 = ((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*ptr] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
    if(!tmp_if_expr$3)
      break;

    ptr = ptr - 1l;
  }
  while((_Bool)1);
  ptr[(signed long int)1] = (char)0;
  return str;
}

// show_config
// file init.c line 136
signed int show_config(signed int EXIT)
{
  char *method;
  char *return_value___strdup$1;
  if(!((signed int)my.method == GET))
  {
    if((signed int)my.method == HEAD)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    return_value___strdup$1=__strdup("GET");
    method = return_value___strdup$1;
    goto __CPROVER_DUMP_L3;
  }

__CPROVER_DUMP_L2:
  ;
  char *return_value___strdup$2;
  return_value___strdup$2=__strdup("HEAD");
  method = return_value___strdup$2;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
  printf("CURRENT  SIEGE  CONFIGURATION\n");
  printf("%s\n", (const void *)my.uagent);
  printf("Edit the resource file to change the settings.\n");
  printf("----------------------------------------------\n");
  printf("version:                        %s\n", version_string);
  printf("verbose:                        %s\n", my.verbose != (enum anonymous)0 ? "true" : "false");
  printf("quiet:                          %s\n", my.quiet != (enum anonymous)0 ? "true" : "false");
  printf("debug:                          %s\n", my.debug != (enum anonymous)0 ? "true" : "false");
  printf("protocol:                       %s\n", my.protocol != 0 ? "HTTP/1.1" : "HTTP/1.0");
  printf("get method:                     %s\n", method);
  enum anonymous return_value_auth_get_proxy_required$5;
  return_value_auth_get_proxy_required$5=auth_get_proxy_required(my.auth);
  if(!(return_value_auth_get_proxy_required$5 == /*enum*/boolean_false))
  {
    char *return_value_auth_get_proxy_host$3;
    return_value_auth_get_proxy_host$3=auth_get_proxy_host(my.auth);
    printf("proxy-host:                     %s\n", return_value_auth_get_proxy_host$3);
    signed int return_value_auth_get_proxy_port$4;
    return_value_auth_get_proxy_port$4=auth_get_proxy_port(my.auth);
    printf("proxy-port:                     %d\n", return_value_auth_get_proxy_port$4);
  }

  printf("connection:                     %s\n", my.keepalive != (enum anonymous)0 ? "keep-alive" : "close");
  printf("concurrent users:               %d\n", my.cusers);
  if(my.secs >= 1)
    printf("time to run:                    %d seconds\n", my.secs);

  else
    printf("time to run:                    n/a\n");
  if(my.reps >= 1 && !(my.reps == 10301062))
    printf("repetitions:                    %d\n", my.reps);

  else
    printf("repetitions:                    n/a\n");
  printf("socket timeout:                 %d\n", my.timeout);
  printf("accept-encoding:                %s\n", (const void *)my.encoding);
  printf("delay:                          %d sec%s\n", my.delay, my.delay > 1 ? "s" : "");
  printf("internet simulation:            %s\n", my.internet != (enum anonymous)0 ? "true" : "false");
  printf("benchmark mode:                 %s\n", my.bench != (enum anonymous)0 ? "true" : "false");
  printf("failures until abort:           %d\n", my.failures);
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$6;
  if(my.url == ((char *)NULL))
    tmp_if_expr$7 = (_Bool)1;

  else
  {
    return_value_strlen$6=strlen(my.url);
    tmp_if_expr$7 = return_value_strlen$6 < (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
  }
  printf("named URL:                      %s\n", tmp_if_expr$7 ? "none" : my.url);
  unsigned long int return_value_strlen$8;
  return_value_strlen$8=strlen(my.file);
  char *tmp_if_expr$9;
  if(return_value_strlen$8 >= 2ul)
    tmp_if_expr$9 = my.file;

  else
    tmp_if_expr$9 = "/etc/siege/urls.txt";
  printf("URLs file:                      %s\n", tmp_if_expr$9);
  printf("logging:                        %s\n", my.logging != (enum anonymous)0 ? "true" : "false");
  printf("log file:                       %s\n", my.logfile);
  printf("resource file:                  %s\n", (const void *)my.rc);
  printf("timestamped output:             %s\n", my.timestamp != (enum anonymous)0 ? "true" : "false");
  printf("comma separated output:         %s\n", my.csv != (enum anonymous)0 ? "true" : "false");
  printf("allow redirects:                %s\n", my.follow != (enum anonymous)0 ? "true" : "false");
  printf("allow zero byte data:           %s\n", my.zero_ok != (enum anonymous)0 ? "true" : "false");
  printf("allow chunked encoding:         %s\n", my.chunked != (enum anonymous)0 ? "true" : "false");
  printf("upload unique files:            %s\n", my.unique != (enum anonymous)0 ? "true" : "false");
  printf("\n");
  xfree((void *)method);
  if(!(EXIT == 0))
    exit(0);

  else
    return 0;
}

// siege_timer
// file ./timer.h line 28
void siege_timer(unsigned long int handler)
{
  signed int err;
  signed long int now;
  struct timespec timeout;
  union anonymous$10 timer_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
  union anonymous$13 timer_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
  signed long int return_value_time$1;
  return_value_time$1=time(&now);
  if(!(return_value_time$1 >= 0l))
    NOTIFY((enum anonymous$19)FATAL, "unable to set the siege timer!");

  timeout.tv_sec = now + (signed long int)my.secs;
  timeout.tv_nsec = (signed long int)0;
  pthread_mutex_lock(&timer_mutex);
  do
  {
    err=pthread_cond_timedwait(&timer_cond, &timer_mutex, &timeout);
    if(err == 110)
    {
      if(!(my.debug == /*enum*/boolean_false))
      {
        printf("TIMED OUT!!\n");
        fflush(stdout);
      }

      my.verbose = (enum anonymous)boolean_false;
      pthread_kill(handler, 15);
      break;
    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&timer_mutex);
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// sig_handler
// file handler.c line 57
void sig_handler(struct CREW_T *crew)
{
  signed int gotsig = 0;
  struct anonymous$23 sigs;
  signed int result;
  unsigned long int spinner;
  sigemptyset(&sigs);
  sigaddset(&sigs, 1);
  sigaddset(&sigs, 2);
  sigaddset(&sigs, 15);
  sigprocmask(0, &sigs, (struct anonymous$23 *)(void *)0);
  sigwait(&sigs, &gotsig);
  my.verbose = (enum anonymous)boolean_false;
  fprintf$link2(stderr, "\nLifting the server siege...");
  crew_cancel(crew);
  result=pthread_create(&spinner, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)spin_doctor, (void *)crew);
  if(!(result >= 0))
    NOTIFY((enum anonymous$19)ERROR, "failed to create handler: %d\n", result);

  pthread_usleep_np((unsigned long int)501125);
  pthread_join(spinner, (void **)(void *)0);
  pthread_exit((void *)0);
}

// skip
// file date.c line 244
static void skip(const char **date)
{
  const unsigned short int **return_value___ctype_b_loc$1;
  for( ; !(*(*date) == 0); *date = *date + 1l)
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((8 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)*(*date)]) == 0))
      break;

  }
}

// snprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2;
  return_value___builtin___snprintf_chk$2=__builtin___snprintf_chk(__s, __n, 2 - 1, 18446744073709551615ul, __fmt, return_value___builtin_va_arg_pack$1);
  return return_value___builtin___snprintf_chk$2;
}

// snprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link1(char * restrict __s$link1, unsigned long int __n$link1, const char * restrict __fmt$link1, ...)
{
  void *return_value___builtin_va_arg_pack$1$link1;
  return_value___builtin_va_arg_pack$1$link1=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link1;
  return_value___builtin___snprintf_chk$2$link1=__builtin___snprintf_chk(__s$link1, __n$link1, 2 - 1, 18446744073709551615ul, __fmt$link1, return_value___builtin_va_arg_pack$1$link1);
  return return_value___builtin___snprintf_chk$2$link1;
}

// snprintf$link10
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link10(char * restrict __s$link10, unsigned long int __n$link10, const char * restrict __fmt$link10, ...)
{
  void *return_value___builtin_va_arg_pack$1$link10;
  return_value___builtin_va_arg_pack$1$link10=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link10;
  return_value___builtin___snprintf_chk$2$link10=__builtin___snprintf_chk(__s$link10, __n$link10, 2 - 1, 18446744073709551615ul, __fmt$link10, return_value___builtin_va_arg_pack$1$link10);
  return return_value___builtin___snprintf_chk$2$link10;
}

// snprintf$link11
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link11(char * restrict __s$link11, unsigned long int __n$link11, const char * restrict __fmt$link11, ...)
{
  void *return_value___builtin_va_arg_pack$1$link11;
  return_value___builtin_va_arg_pack$1$link11=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link11;
  return_value___builtin___snprintf_chk$2$link11=__builtin___snprintf_chk(__s$link11, __n$link11, 2 - 1, 18446744073709551615ul, __fmt$link11, return_value___builtin_va_arg_pack$1$link11);
  return return_value___builtin___snprintf_chk$2$link11;
}

// snprintf$link2
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link2(char * restrict __s$link2, unsigned long int __n$link2, const char * restrict __fmt$link2, ...)
{
  void *return_value___builtin_va_arg_pack$1$link2;
  return_value___builtin_va_arg_pack$1$link2=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link2;
  return_value___builtin___snprintf_chk$2$link2=__builtin___snprintf_chk(__s$link2, __n$link2, 2 - 1, 18446744073709551615ul, __fmt$link2, return_value___builtin_va_arg_pack$1$link2);
  return return_value___builtin___snprintf_chk$2$link2;
}

// snprintf$link3
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link3(char * restrict __s$link3, unsigned long int __n$link3, const char * restrict __fmt$link3, ...)
{
  void *return_value___builtin_va_arg_pack$1$link3;
  return_value___builtin_va_arg_pack$1$link3=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link3;
  return_value___builtin___snprintf_chk$2$link3=__builtin___snprintf_chk(__s$link3, __n$link3, 2 - 1, 18446744073709551615ul, __fmt$link3, return_value___builtin_va_arg_pack$1$link3);
  return return_value___builtin___snprintf_chk$2$link3;
}

// snprintf$link4
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link4(char * restrict __s$link4, unsigned long int __n$link4, const char * restrict __fmt$link4, ...)
{
  void *return_value___builtin_va_arg_pack$1$link4;
  return_value___builtin_va_arg_pack$1$link4=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link4;
  return_value___builtin___snprintf_chk$2$link4=__builtin___snprintf_chk(__s$link4, __n$link4, 2 - 1, 18446744073709551615ul, __fmt$link4, return_value___builtin_va_arg_pack$1$link4);
  return return_value___builtin___snprintf_chk$2$link4;
}

// snprintf$link5
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link5(char * restrict __s$link5, unsigned long int __n$link5, const char * restrict __fmt$link5, ...)
{
  void *return_value___builtin_va_arg_pack$1$link5;
  return_value___builtin_va_arg_pack$1$link5=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link5;
  return_value___builtin___snprintf_chk$2$link5=__builtin___snprintf_chk(__s$link5, __n$link5, 2 - 1, 18446744073709551615ul, __fmt$link5, return_value___builtin_va_arg_pack$1$link5);
  return return_value___builtin___snprintf_chk$2$link5;
}

// snprintf$link6
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link6(char * restrict __s$link6, unsigned long int __n$link6, const char * restrict __fmt$link6, ...)
{
  void *return_value___builtin_va_arg_pack$1$link6;
  return_value___builtin_va_arg_pack$1$link6=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link6;
  return_value___builtin___snprintf_chk$2$link6=__builtin___snprintf_chk(__s$link6, __n$link6, 2 - 1, 18446744073709551615ul, __fmt$link6, return_value___builtin_va_arg_pack$1$link6);
  return return_value___builtin___snprintf_chk$2$link6;
}

// snprintf$link7
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link7(char * restrict __s$link7, unsigned long int __n$link7, const char * restrict __fmt$link7, ...)
{
  void *return_value___builtin_va_arg_pack$1$link7;
  return_value___builtin_va_arg_pack$1$link7=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link7;
  return_value___builtin___snprintf_chk$2$link7=__builtin___snprintf_chk(__s$link7, __n$link7, 2 - 1, 18446744073709551615ul, __fmt$link7, return_value___builtin_va_arg_pack$1$link7);
  return return_value___builtin___snprintf_chk$2$link7;
}

// snprintf$link8
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link8(char * restrict __s$link8, unsigned long int __n$link8, const char * restrict __fmt$link8, ...)
{
  void *return_value___builtin_va_arg_pack$1$link8;
  return_value___builtin_va_arg_pack$1$link8=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link8;
  return_value___builtin___snprintf_chk$2$link8=__builtin___snprintf_chk(__s$link8, __n$link8, 2 - 1, 18446744073709551615ul, __fmt$link8, return_value___builtin_va_arg_pack$1$link8);
  return return_value___builtin___snprintf_chk$2$link8;
}

// snprintf$link9
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 61
static inline signed int snprintf$link9(char * restrict __s$link9, unsigned long int __n$link9, const char * restrict __fmt$link9, ...)
{
  void *return_value___builtin_va_arg_pack$1$link9;
  return_value___builtin_va_arg_pack$1$link9=__builtin_va_arg_pack();
  signed int return_value___builtin___snprintf_chk$2$link9;
  return_value___builtin___snprintf_chk$2$link9=__builtin___snprintf_chk(__s$link9, __n$link9, 2 - 1, 18446744073709551615ul, __fmt$link9, return_value___builtin_va_arg_pack$1$link9);
  return return_value___builtin___snprintf_chk$2$link9;
}

// socket_close
// file ./sock.h line 140
void socket_close(struct anonymous$0 *C)
{
  signed int type;
  signed int ret = 0;
  signed int tries = 0;
  if(!(C == ((struct anonymous$0 *)NULL)))
  {
    pthread_setcanceltype(0, &type);
    if((signed int)C->encrypt == boolean_true)
    {
      _Bool tmp_if_expr$1;
      if(C->connection.reuse == 0)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = C->connection.max == 1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
      {
        if(!(C->ssl == ((struct ssl_st *)NULL)))
          do
          {
            ret=SSL_shutdown(C->ssl);
            if(ret == 1)
              break;

            tries = tries + 1;
          }
          while(!(tries >= 5));

        SSL_free(C->ssl);
        C->ssl = (struct ssl_st *)(void *)0;
        SSL_CTX_free(C->ctx);
        C->ctx = (struct ssl_ctx_st *)(void *)0;
        close(C->sock);
        C->sock = -1;
        C->connection.status = 0;
        C->connection.max = 0;
        C->connection.tested = 0;
      }

    }

    else
    {
      _Bool tmp_if_expr$3;
      if(C->connection.reuse == 0)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = C->connection.max == 1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        if(!(C->sock == -1))
        {
          signed int return_value___socket_block$2;
          return_value___socket_block$2=__socket_block(C->sock, (enum anonymous)boolean_false);
          if(!(return_value___socket_block$2 >= 0))
            NOTIFY((enum anonymous$19)ERROR, "unable to set to non-blocking %s:%d", (const void *)"sock.c", 636);

          if(C->connection.status >= 2)
          {
            ret=shutdown(C->sock, 2);
            if(!(ret >= 0))
              NOTIFY((enum anonymous$19)ERROR, "unable to shutdown the socket %s:%d", (const void *)"sock.c", 638);

          }

          ret=close(C->sock);
          if(!(ret >= 0))
            NOTIFY((enum anonymous$19)ERROR, "unable to close the socket %s:%d", (const void *)"sock.c", 640);

        }

        C->sock = -1;
        C->connection.status = 0;
        C->connection.max = 0;
        C->connection.tested = 0;
      }

    }
    C = (struct anonymous$0 *)(void *)0;
    pthread_setcanceltype(type, (signed int *)(void *)0);
    pthread_testcancel();
    goto __CPROVER_DUMP_L16;
  }


__CPROVER_DUMP_L16:
  ;
}

// socket_read
// file ./sock.h line 138
signed long int socket_read(struct anonymous$0 *C, void *vbuf, unsigned long int len)
{
  signed int type;
  unsigned long int n;
  signed long int r;
  char *buf;
  signed int ret_eof = 0;
  pthread_setcanceltype(0, &type);
  buf = (char *)vbuf;
  n = len;
  signed int *return_value___errno_location$8;
  if((signed int)C->encrypt == boolean_true)
    while(n >= 1ul)
    {
      enum anonymous return_value___socket_check$1;
      return_value___socket_check$1=__socket_check(C, (enum anonymous$7)READ);
      if((signed int)return_value___socket_check$1 == boolean_false)
        return (signed long int)-1;

      signed int return_value_SSL_read$3;
      return_value_SSL_read$3=SSL_read(C->ssl, (void *)buf, (signed int)n);
      r = (signed long int)return_value_SSL_read$3;
      if(!(r >= 0l))
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        if(*return_value___errno_location$2 == 4)
          r = (signed long int)0;

        else
          return (signed long int)-1;
      }

      else
        if(r == 0l)
          break;

      n = n - (unsigned long int)r;
      buf = buf + r;
    }

  else
    while(n >= 1ul)
    {
      if(!(C->inbuffer >= len))
      {
        enum anonymous return_value___socket_check$4;
        return_value___socket_check$4=__socket_check(C, (enum anonymous$7)READ);
        if((signed int)return_value___socket_check$4 == boolean_false)
          return (signed long int)-1;

      }

      if(!(C->inbuffer >= n))
      {
        signed int lidos;
        memmove$link1((void *)C->buffer, (const void *)&C->buffer[(signed long int)C->pos_ini], C->inbuffer);
        C->pos_ini = 0;
        enum anonymous return_value___socket_check$5;
        return_value___socket_check$5=__socket_check(C, (enum anonymous$7)READ);
        if((signed int)return_value___socket_check$5 == boolean_false)
          return (signed long int)-1;

        signed long int return_value_read$6;
        return_value_read$6=read$link1(C->sock, (void *)&C->buffer[(signed long int)C->inbuffer], sizeof(char [4096l]) /*4096ul*/  - C->inbuffer);
        lidos = (signed int)return_value_read$6;
        if(lidos == 0)
          ret_eof = 1;

        if(!(lidos >= 0))
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          _Bool tmp_if_expr$9;
          if(*return_value___errno_location$7 == 4)
            tmp_if_expr$9 = (_Bool)1;

          else
          {
            return_value___errno_location$8=__errno_location();
            tmp_if_expr$9 = *return_value___errno_location$8 == 11 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$9)
            lidos = 0;

          signed int *return_value___errno_location$12;
          return_value___errno_location$12=__errno_location();
          if(*return_value___errno_location$12 == 32)
            return (signed long int)0;

          else
          {
            signed int *return_value___errno_location$10;
            return_value___errno_location$10=__errno_location();
            char *return_value_strerror$11;
            return_value_strerror$11=strerror(*return_value___errno_location$10);
            NOTIFY((enum anonymous$19)ERROR, "socket: read error %s %s:%d", return_value_strerror$11, (const void *)"sock.c", 479);
            return (signed long int)0;
          }
        }

        C->inbuffer = C->inbuffer + (unsigned long int)lidos;
      }

      if(C->inbuffer >= n)
        r = (signed long int)n;

      else
        r = (signed long int)C->inbuffer;
      if(r == 0l)
        break;

      memmove$link1((void *)buf, (const void *)&C->buffer[(signed long int)C->pos_ini], (unsigned long int)r);
      C->pos_ini = C->pos_ini + (signed int)r;
      C->inbuffer = C->inbuffer - (unsigned long int)r;
      n = n - (unsigned long int)r;
      buf = buf + r;
      if(!(ret_eof == 0))
        break;

    }
  pthread_setcanceltype(type, (signed int *)(void *)0);
  pthread_testcancel();
  return (signed long int)(len - n);
}

// socket_readline
// file ./sock.h line 139
signed long int socket_readline(struct anonymous$0 *C, char *ptr, unsigned long int maxlen)
{
  signed int type;
  signed int n;
  signed int len;
  signed int res;
  char c;
  len = (signed int)maxlen;
  pthread_setcanceltype(0, &type);
  n = 1;
  for( ; !(n >= len); n = n + 1)
  {
    signed long int return_value_socket_read$2;
    return_value_socket_read$2=socket_read(C, (void *)&c, (unsigned long int)1);
    res = (signed int)return_value_socket_read$2;
    if(res == 1)
    {
      char *tmp_post$1 = ptr;
      ptr = ptr + 1l;
      *tmp_post$1 = c;
      if((signed int)c == 10)
        break;

    }

    else
      if(res == 0)
      {
        if(n == 1)
          return (signed long int)0;

        else
          break;
      }

      else
        return (signed long int)-1;
  }
  *ptr = (char)0;
  pthread_setcanceltype(type, (signed int *)(void *)0);
  pthread_testcancel();
  return (signed long int)n;
}

// socket_write
// file ./sock.h line 137
signed int socket_write(struct anonymous$0 *C, const void *buf, unsigned long int len)
{
  signed int type;
  unsigned long int bytes;
  pthread_setcanceltype(0, &type);
  if((signed int)C->encrypt == boolean_true)
    do
    {
      signed long int return_value___ssl_socket_write$1;
      return_value___ssl_socket_write$1=__ssl_socket_write(C, buf, len);
      bytes = (unsigned long int)return_value___ssl_socket_write$1;
      if(!(bytes == len))
      {
        if(!(bytes == 0ul))
          return -1;

      }

    }
    while(bytes == 0ul);

  else
  {
    signed long int return_value___socket_write$2;
    return_value___socket_write$2=__socket_write(C->sock, buf, len);
    bytes = (unsigned long int)return_value___socket_write$2;
    if(!(bytes == len))
    {
      NOTIFY((enum anonymous$19)ERROR, "unable to write to socket %s:%d", (const void *)"sock.c", 581);
      return -1;
    }

  }
  pthread_setcanceltype(type, (signed int *)(void *)0);
  pthread_testcancel();
  return (signed int)bytes;
}

// spin_doctor
// file handler.c line 38
void spin_doctor(struct CREW_T *crew)
{
  signed long int x;
  char h[4l] = { (char)45, (char)92, (char)124, (char)47 };
  signed int return_value_crew_get_total$1;
  if(!((signed int)my.spinner == boolean_false))
  {
    x = (signed long int)0;
    do
    {
      return_value_crew_get_total$1=crew_get_total(crew);
      if(!(return_value_crew_get_total$1 >= 2) && x >= 55l)
        break;

      fflush(stderr);
      fprintf$link2(stderr, "%c", h[x % (signed long int)4]);
      pthread_usleep_np((unsigned long int)20000);
      fprintf$link2(stderr, "\b");
      x = x + 1l;
    }
    while((_Bool)1);
    goto __CPROVER_DUMP_L4;
  }


__CPROVER_DUMP_L4:
  ;
}

// split
// file ../include/joedog/joedog.h line 127
char ** split(char pattern, char *s, signed int *n_words)
{
  char **words;
  char *str0;
  char *str1;
  signed int i;
  *n_words=word_count(pattern, s);
  if(*n_words == 0)
    return (char **)(void *)0;

  else
  {
    void *return_value_xmalloc$1;
    return_value_xmalloc$1=xmalloc((unsigned long int)*n_words * sizeof(char *) /*8ul*/ );
    words = (char **)return_value_xmalloc$1;
    if(words == ((char **)NULL))
      return (char **)(void *)0;

    else
    {
      str0 = s;
      i = 0;
      while(!(*str0 == 0))
      {
        unsigned long int len;
        char *return_value___builtin_strchr$2;
        return_value___builtin_strchr$2=__builtin_strchr(str0, (signed int)pattern);
        str1 = return_value___builtin_strchr$2;
        if(!(str1 == ((char *)NULL)))
          len = (unsigned long int)(str1 - str0);

        else
          len=strlen(str0);
        if(len == 0ul)
          i = i - 1;

        else
        {
          void *return_value_xmalloc$3;
          return_value_xmalloc$3=xmalloc((unsigned long int)256);
          words[(signed long int)i] = (char *)return_value_xmalloc$3;
          memset$link17((void *)words[(signed long int)i], 0, (unsigned long int)256);
          memcpy$link11((void *)words[(signed long int)i], (const void *)(char *)str0, (unsigned long int)256);
          words[(signed long int)i][(signed long int)len] = (char)0;
        }
        if(!(str1 == ((char *)NULL)))
        {
          str1 = str1 + 1l;
          str0 = str1;
        }

        else
          break;
        i = i + 1;
      }
      return words;
    }
  }
}

// split_free
// file ../include/joedog/joedog.h line 132
void split_free(char **split, signed int length)
{
  signed int x = 0;
  for( ; !(x >= length); x = x + 1)
    if(!(split[(signed long int)x] == ((char *)NULL)))
    {
      char *tmp = split[(signed long int)x];
      xfree((void *)tmp);
    }

  free((void *)split);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// sprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 31
static inline signed int sprintf(char * restrict __s, const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  signed int return_value___builtin___sprintf_chk$2;
  return_value___builtin___sprintf_chk$2=__builtin___sprintf_chk(__s, 2 - 1, 18446744073709551615ul, __fmt, return_value___builtin_va_arg_pack$1);
  return return_value___builtin___sprintf_chk$2;
}

// sprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 31
static inline signed int sprintf$link1(char * restrict __s$link1, const char * restrict __fmt$link1, ...)
{
  void *return_value___builtin_va_arg_pack$1$link1;
  return_value___builtin_va_arg_pack$1$link1=__builtin_va_arg_pack();
  signed int return_value___builtin___sprintf_chk$2$link1;
  return_value___builtin___sprintf_chk$2$link1=__builtin___sprintf_chk(__s$link1, 2 - 1, 18446744073709551615ul, __fmt$link1, return_value___builtin_va_arg_pack$1$link1);
  return return_value___builtin___sprintf_chk$2$link1;
}

// start_routine
// file client.c line 81
void * start_routine(struct anonymous$4 *client)
{
  signed int x;
  signed int y;
  signed int ret;
  signed int len;
  struct anonymous$0 *C = (struct anonymous$0 *)(void *)0;
  signed int type;
  signed int state;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc(sizeof(struct anonymous$0) /*5392ul*/ , (unsigned long int)1);
  C = (struct anonymous$0 *)return_value_xcalloc$1;
  C->sock = -1;
  unsigned long int return_value_array_length$3;
  char *return_value_url_get_hostname$10;
  do
  {
    struct anonymous$6 __cancel_buf;
    void (*__cancel_routine)(void *) = (void (*)(void *))(void *)clean_up;
    void *__cancel_arg = (void *)C;
    signed int __not_first_call;
    __not_first_call=__sigsetjmp((struct __jmp_buf_tag *)(void *)__cancel_buf.__cancel_jmp_buf, 0);
    if(!((signed long int)__not_first_call == 0l))
    {
      __cancel_routine(__cancel_arg);
      __pthread_unwind_next(&__cancel_buf);
    }

    __pthread_register_cancel(&__cancel_buf);
    do
    {
      pthread_setcanceltype(1, &type);
      pthread_setcancelstate(0, &state);
      if((signed int)my.login == boolean_true)
      {
        struct URL_T *tmp;
        void *return_value_array_next$2;
        return_value_array_next$2=array_next(my.lurl);
        tmp=new_url((char *)return_value_array_next$2);
        url_set_ID(tmp, 0);
        __request(C, tmp, client);
      }

      signed int tmp_if_expr$4;
      if(my.reps == -1)
      {
        return_value_array_length$3=array_length(client->urls);
        tmp_if_expr$4 = (signed int)return_value_array_length$3;
      }

      else
        tmp_if_expr$4 = my.reps;
      len = tmp_if_expr$4;
      signed int tmp_if_expr$5;
      if(my.reps == -1)
        tmp_if_expr$5 = 0;

      else
        tmp_if_expr$5 = client->id * (my.length / my.cusers);
      y = tmp_if_expr$5;
      x = 0;
      for( ; !(x >= len); y = y + 1)
      {
        x = my.secs > 0 && (my.reps <= 0 || my.reps == 10301062) ? 0 : x;
        if((signed int)my.internet == boolean_true)
        {
          signed int return_value_pthread_rand_np$6;
          return_value_pthread_rand_np$6=pthread_rand_np(&client->rand_r_SEED);
          y = (signed int)(unsigned int)(((double)return_value_pthread_rand_np$6 / ((double)2147483647 + (double)1)) * (double)my.length + .5);
          y = y >= my.length ? my.length - 1 : y;
          y = y < 0 ? 0 : y;
        }

        else
          if(y >= my.length)
          {
            y = 0;
            if(!(my.expire == /*enum*/boolean_false))
            {
              unsigned long int return_value_pthread_self$7;
              return_value_pthread_self$7=pthread_self();
              delete_all_cookies(return_value_pthread_self$7);
            }

          }

        if(y >= my.length || !(y >= 0))
          y = 0;

        struct URL_T *start_routine$$1$$1$$2$$2$$1$$tmp;
        void *return_value_array_get$8;
        return_value_array_get$8=array_get(client->urls, y);
        start_routine$$1$$1$$2$$2$$1$$tmp = (struct URL_T *)return_value_array_get$8;
        if(!(start_routine$$1$$1$$2$$2$$1$$tmp == ((struct URL_T *)NULL)))
        {
          return_value_url_get_hostname$10=url_get_hostname(start_routine$$1$$1$$2$$2$$1$$tmp);
          if(!(return_value_url_get_hostname$10 == ((char *)NULL)))
          {
            client->auth.bids.www = 0;
            enum anonymous return_value___request$9;
            return_value___request$9=__request(C, start_routine$$1$$1$$2$$2$$1$$tmp, client);
            ret = (signed int)return_value___request$9;
            if(ret == boolean_false)
              __increment_failures();

          }

        }

        if(my.failed >= my.failures && my.failures >= 1)
          break;

        x = x + 1;
      }

    __CPROVER_DUMP_L17:
      ;
    }
    while((_Bool)0);
    __pthread_unregister_cancel(&__cancel_buf);
  }
  while((_Bool)0);
  if(C->sock >= 0)
  {
    C->connection.reuse = 0;
    socket_close(C);
  }

  xfree((void *)C);
  C = (struct anonymous$0 *)(void *)0;
  return (void *)0;
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// stralloc
// file ../include/joedog/joedog.h line 148
char * stralloc(char *str)
{
  char *retval;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  void *return_value_calloc$2;
  return_value_calloc$2=calloc(return_value_strlen$1 + (unsigned long int)1, (unsigned long int)1);
  retval = (char *)return_value_calloc$2;
  if(retval == ((char *)NULL))
    NOTIFY((enum anonymous$19)FATAL, "Fatal memory allocation error");

  strcpy$link2(retval, str);
  return retval;
}

// strcat
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat(char * restrict __dest, const char * restrict __src)
{
  char *return_value___builtin___strcat_chk$1;
  return_value___builtin___strcat_chk$1=__builtin___strcat_chk(__dest, __src, 18446744073709551615ul);
  return return_value___builtin___strcat_chk$1;
}

// strcat$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat$link1(char * restrict __dest$link1, const char * restrict __src$link1)
{
  char *return_value___builtin___strcat_chk$1$link1;
  return_value___builtin___strcat_chk$1$link1=__builtin___strcat_chk(__dest$link1, __src$link1, 18446744073709551615ul);
  return return_value___builtin___strcat_chk$1$link1;
}

// strcat$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 146
static inline char * strcat$link2(char * restrict __dest$link2, const char * restrict __src$link2)
{
  char *return_value___builtin___strcat_chk$1$link2;
  return_value___builtin___strcat_chk$1$link2=__builtin___strcat_chk(__dest$link2, __src$link2, 18446744073709551615ul);
  return return_value___builtin___strcat_chk$1$link2;
}

// strcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy(char * restrict __dest, const char * restrict __src)
{
  char *return_value___builtin___strcpy_chk$1;
  return_value___builtin___strcpy_chk$1=__builtin___strcpy_chk(__dest, __src, 18446744073709551615ul);
  return return_value___builtin___strcpy_chk$1;
}

// strcpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy$link1(char * restrict __dest$link1, const char * restrict __src$link1)
{
  char *return_value___builtin___strcpy_chk$1$link1;
  return_value___builtin___strcpy_chk$1$link1=__builtin___strcpy_chk(__dest$link1, __src$link1, 18446744073709551615ul);
  return return_value___builtin___strcpy_chk$1$link1;
}

// strcpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy$link2(char * restrict __dest$link2, const char * restrict __src$link2)
{
  char *return_value___builtin___strcpy_chk$1$link2;
  return_value___builtin___strcpy_chk$1$link2=__builtin___strcpy_chk(__dest$link2, __src$link2, 18446744073709551615ul);
  return return_value___builtin___strcpy_chk$1$link2;
}

// strmatch
// file ./util.h line 33
enum anonymous strmatch(char *option, char *param)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(param);
  signed int return_value_strncasecmp$2;
  return_value_strncasecmp$2=strncasecmp(option, param, return_value_strlen$1);
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strlen$3;
  unsigned long int return_value_strlen$4;
  if(return_value_strncasecmp$2 == 0)
  {
    return_value_strlen$3=strlen(option);
    return_value_strlen$4=strlen(param);
    tmp_if_expr$5 = return_value_strlen$3 == return_value_strlen$4 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$5 = (_Bool)0;
  if(tmp_if_expr$5)
    return (enum anonymous)boolean_true;

  else
    return (enum anonymous)boolean_false;
}

// strncasestr
// file ./util.h line 43
const char * strncasestr(const char *str1, const char *str2, unsigned long int len)
{
  unsigned long int str1_len;
  str1_len=strnlen(str1, len);
  unsigned long int str2_len;
  str2_len=strlen(str2);
  unsigned long int i;
  if(!(str1_len >= 1ul) || !(str2_len >= 1ul))
    return (const char *)(void *)0;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= 1ul + str1_len + -str2_len); i = i + 1ul)
    {
      signed int return_value_strncasecmp$1;
      return_value_strncasecmp$1=strncasecmp(str1, str2, str2_len);
      if(return_value_strncasecmp$1 == 0)
        return str1;

      str1 = str1 + 1l;
    }
    return (const char *)(void *)0;
  }
}

// strncat
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 153
static inline char * strncat(char * restrict __dest, const char * restrict __src, unsigned long int __len)
{
  char *return_value___builtin___strncat_chk$1;
  return_value___builtin___strncat_chk$1=__builtin___strncat_chk(__dest, __src, __len, 18446744073709551615ul);
  return return_value___builtin___strncat_chk$1;
}

// strncpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy(char * restrict __dest, const char * restrict __src, unsigned long int __len)
{
  char *return_value___builtin___strncpy_chk$1;
  return_value___builtin___strncpy_chk$1=__builtin___strncpy_chk(__dest, __src, __len, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1;
}

// strncpy$link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link1(char * restrict __dest$link1, const char * restrict __src$link1, unsigned long int __len$link1)
{
  char *return_value___builtin___strncpy_chk$1$link1;
  return_value___builtin___strncpy_chk$1$link1=__builtin___strncpy_chk(__dest$link1, __src$link1, __len$link1, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link1;
}

// strncpy$link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link2(char * restrict __dest$link2, const char * restrict __src$link2, unsigned long int __len$link2)
{
  char *return_value___builtin___strncpy_chk$1$link2;
  return_value___builtin___strncpy_chk$1$link2=__builtin___strncpy_chk(__dest$link2, __src$link2, __len$link2, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link2;
}

// strncpy$link3
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link3(char * restrict __dest$link3, const char * restrict __src$link3, unsigned long int __len$link3)
{
  char *return_value___builtin___strncpy_chk$1$link3;
  return_value___builtin___strncpy_chk$1$link3=__builtin___strncpy_chk(__dest$link3, __src$link3, __len$link3, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link3;
}

// strncpy$link4
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link4(char * restrict __dest$link4, const char * restrict __src$link4, unsigned long int __len$link4)
{
  char *return_value___builtin___strncpy_chk$1$link4;
  return_value___builtin___strncpy_chk$1$link4=__builtin___strncpy_chk(__dest$link4, __src$link4, __len$link4, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link4;
}

// strncpy$link5
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link5(char * restrict __dest$link5, const char * restrict __src$link5, unsigned long int __len$link5)
{
  char *return_value___builtin___strncpy_chk$1$link5;
  return_value___builtin___strncpy_chk$1$link5=__builtin___strncpy_chk(__dest$link5, __src$link5, __len$link5, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link5;
}

// strncpy$link6
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 123
static inline char * strncpy$link6(char * restrict __dest$link6, const char * restrict __src$link6, unsigned long int __len$link6)
{
  char *return_value___builtin___strncpy_chk$1$link6;
  return_value___builtin___strncpy_chk$1$link6=__builtin___strncpy_chk(__dest$link6, __src$link6, __len$link6, 18446744073709551615ul);
  return return_value___builtin___strncpy_chk$1$link6;
}

// strnlen
// file util.c line 310
extern unsigned long int strnlen(const char *str, unsigned long int len)
{
  const char *end;
  void *return_value_memchr$1;
  return_value_memchr$1=memchr((const void *)str, 0, len);
  end = (const char *)return_value_memchr$1;
  return end != (const char *)(void *)0 ? (unsigned long int)(end - str) : len;
}

// strtotime
// file ./date.h line 29
signed long int strtotime(const char *string)
{
  signed int sec = -1;
  signed int min = -1;
  signed int hour = -1;
  signed int mday = -1;
  signed int mon = -1;
  signed int year = -1;
  signed int strtotime$$1$$wday = -1;
  signed int tzoff = -1;
  signed int part = 0;
  signed long int t = (signed long int)0;
  signed long int now = (signed long int)0;
  struct tm tm;
  const char *date;
  const char *indate = string;
  enum assume dignext = (enum assume)DATE_MDAY;
  enum anonymous found = (enum anonymous)boolean_false;
  _Bool tmp_if_expr$1;
  if(!(string == ((const char *)NULL)))
    tmp_if_expr$1 = *string != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  const unsigned short int **return_value___ctype_b_loc$6;
  signed int return_value___isoc99_sscanf$4;
  if(!tmp_if_expr$1)
    return (signed long int)0;

  else
  {
    date = string;
    while(!(*date == 0))
    {
      if(part >= 6)
        break;

      found = (enum anonymous)boolean_false;
      skip(&date);
      const unsigned short int **return_value___ctype_b_loc$7;
      return_value___ctype_b_loc$7=__ctype_b_loc();
      if(!((1024 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)*date]) == 0))
      {
        char buf[32l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        unsigned long int len;
        __isoc99_sscanf(date, "%31[A-Za-z]", (const void *)buf);
        len=strlen(buf);
        if(strtotime$$1$$wday == -1)
        {
          strtotime$$1$$wday=checkday(buf, len);
          if(!(strtotime$$1$$wday == -1))
            found = (enum anonymous)boolean_true;

        }

        if(found == /*enum*/boolean_false && mon == -1)
        {
          mon=checkmonth(buf);
          if(!(mon == -1))
            found = (enum anonymous)boolean_true;

        }

        if(found == /*enum*/boolean_false && tzoff == -1)
        {
          tzoff=checktz(buf);
          if(!(tzoff == -1))
            found = (enum anonymous)boolean_true;

        }

        if(found == /*enum*/boolean_false)
          return (signed long int)-1;

        date = date + (signed long int)len;
      }

      else
      {
        return_value___ctype_b_loc$6=__ctype_b_loc();
        if(!((2048 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)(unsigned char)*date]) == 0))
        {
          signed int val;
          char *end;
          _Bool tmp_if_expr$5;
          if(sec == -1)
          {
            return_value___isoc99_sscanf$4=__isoc99_sscanf(date, "%02d:%02d:%02d", &hour, &min, &sec);
            tmp_if_expr$5 = 3 == return_value___isoc99_sscanf$4 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(tmp_if_expr$5)
          {
            date = date + (signed long int)8;
            found = (enum anonymous)boolean_true;
          }

          else
          {
            signed long int return_value_strtol$2;
            return_value_strtol$2=strtol(date, &end, 10);
            val = (signed int)return_value_strtol$2;
            if(end - date == 4l && tzoff == -1 && !(indate >= date) && !(val >= 1300))
            {
              _Bool tmp_if_expr$3;
              if((signed int)date[-1l] == 43)
                tmp_if_expr$3 = (_Bool)1;

              else
                tmp_if_expr$3 = (signed int)date[(signed long int)-1] == 45 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$3)
              {
                found = (enum anonymous)boolean_true;
                tzoff = ((val / 100) * 60 + val % 100) * 60;
                tzoff = (signed int)date[(signed long int)-1] == 43 ? -tzoff : tzoff;
              }

            }

            if(end - date == 8l && mday == -1 && mon == -1 && year == -1)
            {
              found = (enum anonymous)boolean_true;
              year = val / 10000;
              mon = (val % 10000) / 100 - 1;
              mday = val % 100;
            }

            if(found == /*enum*/boolean_false && mday == -1 && (signed int)dignext == DATE_MDAY)
            {
              if(val >= 1 && !(val >= 32))
              {
                mday = val;
                found = (enum anonymous)boolean_true;
              }

              dignext = (enum assume)DATE_YEAR;
            }

            if(found == /*enum*/boolean_false && year == -1 && (signed int)dignext == DATE_YEAR)
            {
              year = val;
              found = (enum anonymous)boolean_true;
              if(!(year >= 1900))
              {
                if(year >= 71)
                  year = year + 1900;

                else
                  year = year + 2000;
              }

              if(mday == -1)
                dignext = (enum assume)DATE_MDAY;

            }

            if(found == /*enum*/boolean_false)
              return (signed long int)-1;

            date = end;
          }
        }

      }
      part = part + 1;
    }
    if(sec == -1)
    {
      hour = 0;
      min = hour;
      sec = min;
    }

    if(mday == -1 || mon == -1 || year == -1)
      return (signed long int)-1;

    else
      if(year >= 2038)
        return (signed long int)0x7fffffff;

      else
      {
        tm.tm_sec = sec;
        tm.tm_min = min;
        tm.tm_hour = hour;
        tm.tm_mday = mday;
        tm.tm_mon = mon;
        tm.tm_year = year - 1900;
        tm.tm_wday = 0;
        tm.tm_yday = 0;
        tm.tm_isdst = 0;
        t=mktime(&tm);
        if(!((signed int)t == -1))
        {
          struct tm *gmt;
          signed long int delta;
          signed long int t2;
          struct tm gmt2;
          gmt=gmtime(&t);
          if(gmt == ((struct tm *)NULL))
            return (signed long int)-1;

          gmt2 = *gmt;
          t2=mktime(&gmt2);
          delta = (signed long int)((signed long int)(tzoff != -1 ? tzoff : 0) + (t - t2));
          if(delta >= 1l && !(delta + t >= t))
            return (signed long int)-1;

          t = t + delta;
        }

        now=time((signed long int *)(void *)0);
        return t;
      }
  }
}

// substring
// file ../include/joedog/joedog.h line 69
char * substring(char *str, signed int start, signed int len)
{
  signed int i;
  char *ret;
  char *res;
  char *ptr;
  char *end;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(!(len >= 1) || !(start >= 0))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strlen$1=strlen(str);
    tmp_if_expr$2 = start > (signed int)return_value_strlen$1 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int return_value_strlen$3;
  if(tmp_if_expr$2)
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(str);
    if(!((signed int)return_value_strlen$4 >= len + start))
    {
      return_value_strlen$3=strlen(str);
      len = (signed int)(return_value_strlen$3 - (unsigned long int)start);
    }

    void *return_value_xmalloc$5;
    return_value_xmalloc$5=xmalloc((unsigned long int)(len + 1));
    ret = (char *)return_value_xmalloc$5;
    res = ret;
    ptr = str;
    end = str;
    i = 0;
    for( ; !(i >= start); ptr = ptr + 1l)
      i = i + 1;
    i = 0;
    for( ; !(i >= len + start); end = end + 1l)
      i = i + 1;
    while(!(ptr >= end))
    {
      char *tmp_post$6 = res;
      res = res + 1l;
      char *tmp_post$7 = ptr;
      ptr = ptr + 1l;
      *tmp_post$6 = *tmp_post$7;
    }
    *res = (char)0;
    return ret;
  }
}

// syslog
// file /usr/include/x86_64-linux-gnu/bits/syslog.h line 29
static inline void syslog(signed int __pri, const char *__fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  __syslog_chk(__pri, 2 - 1, __fmt, return_value___builtin_va_arg_pack$1);
}

// timestamp
// file ./date.h line 31
char * timestamp()
{
  char *line;
  signed long int ltime;
  struct tm *tm;
  ltime=time((signed long int *)(void *)0);
  tm=localtime(&ltime);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)64);
  line = (char *)return_value_xmalloc$1;
  strftime(line, (unsigned long int)64, "[%a, %F %T] ", tm);
  return line;
}

// timetostr
// file date.c line 120
char * timetostr(const signed long int *T)
{
  char *line;
  struct tm *tm;
  tm=gmtime(T);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)64);
  line = (char *)return_value_xmalloc$1;
  snprintf$link3(line, (unsigned long int)64, "If-Modified-Since: %s, %d %s %d %d:%d:%d GMT\r\n", wday[(signed long int)tm->tm_wday], tm->tm_mday, month[(signed long int)tm->tm_mon], tm->tm_year, tm->tm_hour, tm->tm_min, tm->tm_sec);
  return line;
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

// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c)
{
  signed int tmp_if_expr$2;
  const signed int **return_value___ctype_toupper_loc$1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_toupper_loc$1=__ctype_toupper_loc();
    tmp_if_expr$2 = (*return_value___ctype_toupper_loc$1)[(signed long int)__c];
  }

  else
    tmp_if_expr$2 = __c;
  return tmp_if_expr$2;
}

// toupper$link1
// file /usr/include/ctype.h line 221
static inline signed int toupper$link1(signed int __c$link1)
{
  signed int tmp_if_expr$2$link1;
  const signed int **return_value___ctype_toupper_loc$1$link1;
  if(__c$link1 >= -128 && !(__c$link1 >= 256))
  {
    return_value___ctype_toupper_loc$1$link1=__ctype_toupper_loc();
    tmp_if_expr$2$link1 = (*return_value___ctype_toupper_loc$1$link1)[(signed long int)__c$link1];
  }

  else
    tmp_if_expr$2$link1 = __c$link1;
  return tmp_if_expr$2$link1;
}

// trim
// file ../include/joedog/joedog.h line 121
char * trim(char *str)
{
  char *ptr;
  ptr=rtrim(str);
  str=ltrim(ptr);
  return str;
}

// uppercase
// file ./util.h line 37
char * uppercase(char *s, unsigned long int len)
{
  unsigned char *c;
  unsigned char *e;
  c = (unsigned char *)s;
  e = c + (signed long int)len;
  const signed int **return_value___ctype_toupper_loc$2;
  const signed int **return_value___ctype_toupper_loc$4;
  for( ; !(c >= e); c = c + 1l)
  {
    signed int tmp_statement_expression$1;
    signed int __res;
    return_value___ctype_toupper_loc$4=__ctype_toupper_loc();
    __res = (*return_value___ctype_toupper_loc$4)[(signed long int)(signed int)(unsigned char)*c];
    tmp_statement_expression$1 = __res;
    *c = (unsigned char)tmp_statement_expression$1;
  }
  return s;
}

// urandom
// file ./util.h line 32
signed int urandom()
{
  signed int urandom$$1$$rand = -1;
  signed int fd;
  fd=open$link1("/dev/urandom", 00);
  if(fd >= 0)
  {
    read$link2(fd, (void *)&urandom$$1$$rand, sizeof(signed int) /*4ul*/ );
    close(fd);
  }

  return urandom$$1$$rand;
}

// url_destroy
// file ./url.h line 69
struct URL_T * url_destroy(struct URL_T *this)
{
  if(!(this == ((struct URL_T *)NULL)))
  {
    xfree((void *)this->username);
    xfree((void *)this->password);
    xfree((void *)this->hostname);
    xfree((void *)this->path);
    xfree((void *)this->file);
    xfree((void *)this->query);
    xfree((void *)this->frag);
    xfree((void *)this->request);
    xfree((void *)this->conttype);
    xfree((void *)this->postdata);
    xfree((void *)this->etag);
    xfree((void *)this);
  }

  return (struct URL_T *)(void *)0;
}

// url_dump
// file url.c line 410
void url_dump(struct URL_T *this)
{
  printf("URL ID:    %d\n", this->ID);
  printf("Abolute:   %s\n", this->url);
  char *return_value_url_get_scheme_name$1;
  return_value_url_get_scheme_name$1=url_get_scheme_name(this);
  printf("Scheme:    %s\n", return_value_url_get_scheme_name$1);
  char *return_value_url_get_method_name$2;
  return_value_url_get_method_name$2=url_get_method_name(this);
  printf("Method:    %s\n", return_value_url_get_method_name$2);
  char *return_value_url_get_username$3;
  return_value_url_get_username$3=url_get_username(this);
  printf("Username:  %s\n", return_value_url_get_username$3);
  char *return_value_url_get_password$4;
  return_value_url_get_password$4=url_get_password(this);
  printf("Password:  %s\n", return_value_url_get_password$4);
  char *return_value_url_get_hostname$5;
  return_value_url_get_hostname$5=url_get_hostname(this);
  printf("Hostname:  %s\n", return_value_url_get_hostname$5);
  signed int return_value_url_get_port$6;
  return_value_url_get_port$6=url_get_port(this);
  printf("Port:      %d\n", return_value_url_get_port$6);
  char *return_value_url_get_path$7;
  return_value_url_get_path$7=url_get_path(this);
  printf("Path:      %s\n", return_value_url_get_path$7);
  char *return_value_url_get_file$8;
  return_value_url_get_file$8=url_get_file(this);
  printf("File:      %s\n", return_value_url_get_file$8);
  char *return_value_url_get_request$9;
  return_value_url_get_request$9=url_get_request(this);
  printf("Request:   %s\n", return_value_url_get_request$9);
  char *return_value_url_get_parameters$10;
  if((signed int)this->hasparams == boolean_true)
  {
    return_value_url_get_parameters$10=url_get_parameters(this);
    printf("Params:   %s\n", return_value_url_get_parameters$10);
  }

  char *return_value_url_get_query$11;
  return_value_url_get_query$11=url_get_query(this);
  printf("Query:     %s\n", return_value_url_get_query$11);
  char *return_value_url_get_fragment$12;
  return_value_url_get_fragment$12=url_get_fragment(this);
  printf("Fragment:  %s\n", return_value_url_get_fragment$12);
  unsigned long int return_value_url_get_postlen$13;
  return_value_url_get_postlen$13=url_get_postlen(this);
  printf("Post Len:  %d\n", return_value_url_get_postlen$13);
  char *return_value_url_get_postdata$14;
  return_value_url_get_postdata$14=url_get_postdata(this);
  printf("Post Data: %s\n", return_value_url_get_postdata$14);
  char *return_value_url_get_conttype$15;
  return_value_url_get_conttype$15=url_get_conttype(this);
  printf("Cont Type: %s\n", return_value_url_get_conttype$15);
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// url_get_ID
// file ./url.h line 80
signed int url_get_ID(struct URL_T *this)
{
  return this->ID;
}

// url_get_absolute
// file url.c line 204
char * url_get_absolute(struct URL_T *this)
{
  return this->url;
}

// url_get_conttype
// file ./url.h line 134
char * url_get_conttype(struct URL_T *this)
{
  return this->conttype;
}

// url_get_display
// file ./url.h line 125
char * url_get_display(struct URL_T *this)
{
  char *return_value_url_get_absolute$1;
  if(!(my.fullurl == /*enum*/boolean_false))
  {
    return_value_url_get_absolute$1=url_get_absolute(this);
    return return_value_url_get_absolute$1;
  }

  char *return_value_url_get_request$2;
  if((signed int)this->method == GET)
  {
    return_value_url_get_request$2=url_get_request(this);
    return return_value_url_get_request$2;
  }

  char *return_value_url_get_absolute$3;
  return_value_url_get_absolute$3=url_get_absolute(this);
  return return_value_url_get_absolute$3;
}

// url_get_etag
// file ./url.h line 136
char * url_get_etag(struct URL_T *this)
{
  char *tag;
  unsigned long int len;
  signed int return_value_empty$1;
  return_value_empty$1=empty(this->etag);
  if(!(return_value_empty$1 == 0))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(this->etag);
    len = return_value_strlen$2 + (unsigned long int)18;
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(len);
    tag = (char *)return_value_xmalloc$3;
    memset$link14((void *)tag, 0, sizeof(char *) /*8ul*/ );
    snprintf$link10(tag, len, "If-None-Match: %s\r\n", this->etag);
    return tag;
  }
}

// url_get_file
// file ./url.h line 107
char * url_get_file(struct URL_T *this)
{
  return this->file;
}

// url_get_fragment
// file url.c line 301
char * url_get_fragment(struct URL_T *this)
{
  return this->frag;
}

// url_get_hostname
// file ./url.h line 98
char * url_get_hostname(struct URL_T *this)
{
  return this->hostname;
}

// url_get_if_modified_since
// file ./url.h line 135
char * url_get_if_modified_since(struct URL_T *this)
{
  if((signed int)this->cached == boolean_false)
    return (char *)(void *)0;

  else
  {
    char *return_value_timetostr$1;
    return_value_timetostr$1=timetostr(&this->modified);
    return return_value_timetostr$1;
  }
}

// url_get_method
// file ./url.h line 81
enum anonymous$2 url_get_method(struct URL_T *this)
{
  return this->method;
}

// url_get_method_name
// file ./url.h line 82
char * url_get_method_name(struct URL_T *this)
{
  switch((signed int)this->method)
  {
    case POST:
      return "POST";
    case PUT:
      return "PUT";
    case DELETE:
      return "DELETE";
    case HEAD:
      return "HEAD";
    case GET:

    default:
      return "GET";
  }
  return "GET";
}

// url_get_parameters
// file url.c line 289
char * url_get_parameters(struct URL_T *this)
{
  return this->params;
}

// url_get_password
// file ./url.h line 95
char * url_get_password(struct URL_T *this)
{
  return this->password;
}

// url_get_path
// file ./url.h line 104
char * url_get_path(struct URL_T *this)
{
  return this->path;
}

// url_get_port
// file ./url.h line 101
signed int url_get_port(struct URL_T *this)
{
  return this->port;
}

// url_get_postdata
// file ./url.h line 132
char * url_get_postdata(struct URL_T *this)
{
  return this->postdata;
}

// url_get_postlen
// file ./url.h line 131
unsigned long int url_get_postlen(struct URL_T *this)
{
  return this->postlen;
}

// url_get_posttemp
// file url.c line 317
char * url_get_posttemp(struct URL_T *this)
{
  return this->posttemp;
}

// url_get_query
// file url.c line 295
char * url_get_query(struct URL_T *this)
{
  return this->query;
}

// url_get_realm
// file url.c line 376
char * url_get_realm(struct URL_T *this)
{
  char *tmp_if_expr$1;
  if(!(this->realm == ((char *)NULL)))
    tmp_if_expr$1 = this->realm;

  else
    tmp_if_expr$1 = "";
  return tmp_if_expr$1;
}

// url_get_request
// file ./url.h line 108
char * url_get_request(struct URL_T *this)
{
  return this->request;
}

// url_get_scheme
// file ./url.h line 88
enum anonymous$3 url_get_scheme(struct URL_T *this)
{
  return this->scheme;
}

// url_get_scheme_name
// file url.c line 228
char * url_get_scheme_name(struct URL_T *this)
{
  switch((signed int)this->scheme)
  {
    case HTTP:
      return "http";
    case HTTPS:
      return "https";
    case FTP:
      return "ftp";
    case PROXY:
      return "proxy";
    case UNSUPPORTED:

    default:
      return "unsupported";
  }
  return "unsupported";
}

// url_get_username
// file ./url.h line 92
char * url_get_username(struct URL_T *this)
{
  return this->username;
}

// url_normalize
// file ./url.h line 141
struct URL_T * url_normalize(struct URL_T *req, char *location)
{
  struct URL_T *ret;
  char *url;
  unsigned long int len;
  char *return_value_url_get_absolute$1;
  return_value_url_get_absolute$1=url_get_absolute(req);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(return_value_url_get_absolute$1);
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(location);
  len = return_value_strlen$2 + return_value_strlen$3 + (unsigned long int)32;
  char *return_value___builtin_strchr$6;
  return_value___builtin_strchr$6=__builtin_strchr(location, 58);
  if(!(return_value___builtin_strchr$6 == ((char *)NULL)))
  {
    ret=new_url(location);
    char *return_value_url_get_hostname$4;
    return_value_url_get_hostname$4=url_get_hostname(ret);
    char *return_value___builtin_strchr$5;
    return_value___builtin_strchr$5=__builtin_strchr(return_value_url_get_hostname$4, 46);
    if(!(return_value___builtin_strchr$5 == ((char *)NULL)))
      return ret;

  }

  char *return_value___builtin_strchr$9;
  return_value___builtin_strchr$9=__builtin_strchr(location, 46);
  if(!(return_value___builtin_strchr$9 == ((char *)NULL)))
  {
    ret=new_url(location);
    char *return_value_url_get_hostname$7;
    return_value_url_get_hostname$7=url_get_hostname(ret);
    char *return_value___builtin_strchr$8;
    return_value___builtin_strchr$8=__builtin_strchr(return_value_url_get_hostname$7, 46);
    if(!(return_value___builtin_strchr$8 == ((char *)NULL)))
      return ret;

  }

  char *return_value_strstr$12;
  return_value_strstr$12=strstr(location, "localhost");
  if(!(return_value_strstr$12 == ((char *)NULL)))
  {
    ret=new_url(location);
    char *return_value_url_get_hostname$10;
    return_value_url_get_hostname$10=url_get_hostname(ret);
    unsigned long int return_value_strlen$11;
    return_value_strlen$11=strlen(return_value_url_get_hostname$10);
    if(return_value_strlen$11 == 9ul)
      return ret;

  }

  void *return_value_malloc$13;
  return_value_malloc$13=malloc(len);
  url = (char *)return_value_malloc$13;
  memset$link14((void *)url, 0, len);
  if((signed int)*location == 47)
  {
    unsigned long int return_value_strlen$18;
    return_value_strlen$18=strlen(location);
    _Bool tmp_if_expr$19;
    if(return_value_strlen$18 >= 2ul)
      tmp_if_expr$19 = (signed int)location[(signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$19 = (_Bool)0;
    if(tmp_if_expr$19)
    {
      char *return_value_url_get_scheme_name$14;
      return_value_url_get_scheme_name$14=url_get_scheme_name(req);
      snprintf$link10(url, len, "%s:%s", return_value_url_get_scheme_name$14, location);
    }

    else
    {
      char *return_value_url_get_scheme_name$15;
      return_value_url_get_scheme_name$15=url_get_scheme_name(req);
      char *return_value_url_get_hostname$16;
      return_value_url_get_hostname$16=url_get_hostname(req);
      signed int return_value_url_get_port$17;
      return_value_url_get_port$17=url_get_port(req);
      snprintf$link10(url, len, "%s://%s:%d%s", return_value_url_get_scheme_name$15, return_value_url_get_hostname$16, return_value_url_get_port$17, location);
    }
  }

  else
  {
    char *return_value_url_get_scheme_name$20;
    return_value_url_get_scheme_name$20=url_get_scheme_name(req);
    char *return_value_url_get_hostname$21;
    return_value_url_get_hostname$21=url_get_hostname(req);
    signed int return_value_url_get_port$22;
    return_value_url_get_port$22=url_get_port(req);
    snprintf$link10(url, len, "%s://%s:%d/%s", return_value_url_get_scheme_name$20, return_value_url_get_hostname$21, return_value_url_get_port$22, location);
  }
  ret=new_url(url);
  free((void *)url);
  return ret;
}

// url_set_ID
// file ./url.h line 72
void url_set_ID(struct URL_T *this, signed int ID)
{
  this->ID = ID;
}

// url_set_conttype
// file ./url.h line 76
void url_set_conttype(struct URL_T *this, char *type)
{
  this->conttype=xstrdup(type);
}

// url_set_etag
// file ./url.h line 75
void url_set_etag(struct URL_T *this, char *etag)
{
  unsigned long int len;
  signed int return_value_empty$1;
  return_value_empty$1=empty(etag);
  if(return_value_empty$1 == 0)
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(etag);
    len = return_value_strlen$2 + (unsigned long int)1;
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(len);
    this->etag = (char *)return_value_xmalloc$3;
    memset$link14((void *)this->etag, 0, sizeof(char *) /*8ul*/ );
    strncpy$link6(this->etag, etag, len);
    goto __CPROVER_DUMP_L2;
  }


__CPROVER_DUMP_L2:
  ;
}

// url_set_hostname
// file ./url.h line 73
void url_set_hostname(struct URL_T *this, char *hostname)
{
  unsigned long int len;
  signed int return_value_empty$1;
  return_value_empty$1=empty(hostname);
  if(return_value_empty$1 == 0)
  {
    xfree((void *)this->hostname);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(hostname);
    len = return_value_strlen$2 + (unsigned long int)1;
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(len);
    this->hostname = (char *)return_value_xmalloc$3;
    memset$link14((void *)this->hostname, 0, sizeof(char *) /*8ul*/ );
    strncpy$link6(this->hostname, hostname, len);
    goto __CPROVER_DUMP_L2;
  }


__CPROVER_DUMP_L2:
  ;
}

// url_set_last_modified
// file ./url.h line 74
void url_set_last_modified(struct URL_T *this, char *date)
{
  this->modified=strtotime(date);
}

// url_set_method
// file ./url.h line 78
void url_set_method(struct URL_T *this, enum anonymous$2 method)
{
  this->method = method;
}

// url_set_password
// file ./url.h line 140
void url_set_password(struct URL_T *this, char *password)
{
  unsigned long int len;
  len=strlen(password);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  this->password = (char *)return_value_malloc$1;
  memset$link14((void *)this->password, 0, len + (unsigned long int)1);
  memcpy$link9((void *)this->password, (const void *)password, len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// url_set_postdata
// file ./url.h line 77
void url_set_postdata(struct URL_T *this, char *postdata, unsigned long int postlen)
{
  this->postlen = postlen;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(postdata);
  if(return_value_strlen$2 >= 1ul)
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(this->postlen);
    this->postdata = (char *)return_value_malloc$1;
    memcpy$link9((void *)this->postdata, (const void *)postdata, this->postlen);
    this->postdata[(signed long int)this->postlen] = (char)0;
  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// url_set_realm
// file ./url.h line 138
void url_set_realm(struct URL_T *this, char *realm)
{
  this->realm=xstrdup(realm);
}

// url_set_username
// file ./url.h line 139
void url_set_username(struct URL_T *this, char *username)
{
  unsigned long int len;
  len=strlen(username);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  this->username = (char *)return_value_malloc$1;
  memset$link14((void *)this->username, 0, len + (unsigned long int)1);
  memcpy$link9((void *)this->username, (const void *)username, len);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// valid
// file perl.c line 96
signed int valid(const char *s)
{
  signed int flag = 0;
  signed int i = 0;
  i = 0;
  for( ; !(i >= 256); i = i + 1)
  {
    _Bool tmp_if_expr$1;
    if(!(flag == 0))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)s[(signed long int)i] == 0 ? (_Bool)1 : (_Bool)0;
    flag = (signed int)tmp_if_expr$1;
  }
  if(!(flag == 0))
    return 1;

  else
    return 0;
}

// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap)
{
  signed int return_value___builtin___vsnprintf_chk$1;
  return_value___builtin___vsnprintf_chk$1=__builtin___vsnprintf_chk(__s, __n, 2 - 1, 18446744073709551615ul, __fmt, __ap);
  return return_value___builtin___vsnprintf_chk$1;
}

// vsnprintf$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf$link1(char * restrict __s$link1, unsigned long int __n$link1, const char * restrict __fmt$link1, void **__ap$link1)
{
  signed int return_value___builtin___vsnprintf_chk$1$link1;
  return_value___builtin___vsnprintf_chk$1$link1=__builtin___vsnprintf_chk(__s$link1, __n$link1, 2 - 1, 18446744073709551615ul, __fmt$link1, __ap$link1);
  return return_value___builtin___vsnprintf_chk$1$link1;
}

// vsprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 43
static inline signed int vsprintf(char * restrict __s, const char * restrict __fmt, void **__ap)
{
  signed int return_value___builtin___vsprintf_chk$1;
  return_value___builtin___vsprintf_chk$1=__builtin___vsprintf_chk(__s, 2 - 1, 18446744073709551615ul, __fmt, __ap);
  return return_value___builtin___vsprintf_chk$1;
}

// word_count
// file perl.c line 125
signed int word_count(char pattern, char *s)
{
  signed int in_word_flag = 0;
  signed int count = 0;
  char *ptr = s;
  for( ; !(*ptr == 0); ptr = ptr + 1l)
    if(!(*ptr == pattern))
    {
      if(in_word_flag == 0)
        count = count + 1;

      in_word_flag = 1;
    }

    else
      in_word_flag = 0;
  return count;
}

// write_file
// file ./load.h line 28
void write_file(struct URL_T *U, char *buf, unsigned long int len)
{
  struct _IO_FILE *fp;
  char mode[8l];
  memset$link11((void *)mode, 0, sizeof(char [8l]) /*8ul*/ );
  char *return_value_url_get_file$1;
  return_value_url_get_file$1=url_get_file(U);
  snprintf$link7(mode, sizeof(char [8l]) /*8ul*/ , "%s", return_value_url_get_file$1 != ((char *)NULL) ? "w" : "wb");
  char *return_value_url_get_file$2;
  return_value_url_get_file$2=url_get_file(U);
  fp=fopen(return_value_url_get_file$2, mode);
  if(!(fp == ((struct _IO_FILE *)NULL)))
    fwrite((const void *)buf, len, (unsigned long int)1, fp);

  else
    NOTIFY((enum anonymous$19)ERROR, "unable to write to file");
  fclose(fp);
}

// write_to_log
// file log.c line 51
void write_to_log(signed int count, float elapsed, signed int bytes, float ttime, signed int code, signed int failed)
{
  signed int fd;
  char entry[512l];
  struct tm keepsake;
  struct tm *tmp;
  signed long int now;
  unsigned long int len;
  char date[65l];
  now=time((signed long int *)(void *)0);
  struct tm *return_value_localtime_r$1;
  return_value_localtime_r$1=localtime_r(&now, &keepsake);
  tmp = (struct tm *)return_value_localtime_r$1;
  setlocale(2, "C");
  len=strftime(date, sizeof(char [65l]) /*65ul*/ , "%Y-%m-%d %H:%M:%S", tmp);
  if(!(my.shlog == /*enum*/boolean_false))
  {
    printf("FILE: %s\n", (const void *)my.logfile);
    puts("You can disable this annoying message by editing");
    puts("the .siegerc file in your home directory; change");
    puts("the directive 'show-logfile' to false.");
  }

  enum anonymous return_value_file_exists$3;
  return_value_file_exists$3=file_exists(my.logfile);
  if(return_value_file_exists$3 == /*enum*/boolean_false)
  {
    enum anonymous return_value_create_logfile$2;
    return_value_create_logfile$2=create_logfile(my.logfile);
    if(return_value_create_logfile$2 == /*enum*/boolean_false)
    {
      NOTIFY((enum anonymous$19)ERROR, "unable to create log file: %s", (const void *)my.logfile);
      goto __CPROVER_DUMP_L5;
    }

  }

  snprintf$link8(entry, sizeof(char [512l]) /*512ul*/ , "%s,%7d,%11.2f,%12u,%11.2f,%12.2f,%12.2f,%12.2f,%8d,%8d\n", (const void *)date, count, elapsed, bytes, ttime / (float)count, (float)count / elapsed, (float)bytes / elapsed, ttime / elapsed, code, failed);
  fd=open(my.logfile, 01 | 02000, 0644);
  if(!(fd >= 0))
    NOTIFY((enum anonymous$19)ERROR, "Unable to write to file: %s", (const void *)my.logfile);

  else
  {
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(entry);
    write(fd, (const void *)entry, return_value_strlen$4);
    close(fd);
    goto __CPROVER_DUMP_L5;
  }

__CPROVER_DUMP_L5:
  ;
}

// xcalloc
// file ../include/joedog/joedog.h line 58
void * xcalloc(unsigned long int num, unsigned long int size)
{
  void *tmp;
  tmp=xmalloc(num * size);
  memset$link15(tmp, 0, num * size);
  return tmp;
}

// xfree
// file ../include/joedog/joedog.h line 61
void xfree(void *ptr)
{
  if(!(ptr == NULL))
  {
    free(ptr);
    ptr = (void *)0;
  }

}

// xmalloc
// file ../include/joedog/joedog.h line 57
void * xmalloc(unsigned long int size)
{
  void *tmp;
  tmp=malloc(size);
  if(tmp == NULL)
    NOTIFY((enum anonymous$19)FATAL, "Unable to allocate additional memory.");

  return tmp;
}

// xrealloc
// file ../include/joedog/joedog.h line 56
void * xrealloc(void *ptr, unsigned long int size)
{
  void *tmp;
  if(!(ptr == NULL))
    tmp=realloc(ptr, size);

  else
    tmp=malloc(size);
  if(tmp == NULL)
    NOTIFY((enum anonymous$19)FATAL, "Memory exhausted; unable to continue.");

  return tmp;
}

// xstrcat
// file ../include/joedog/joedog.h line 60
char * xstrcat(const char *arg1, ...)
{
  const char *argptr;
  char *resptr;
  char *result;
  signed int nargs = 0;
  unsigned long int len = (unsigned long int)0;
  __builtin_va_list valist;
  va_start(valist, arg1);
  argptr = arg1;
  unsigned long int return_value_strlen$1;
  while(!(argptr == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(argptr);
    len = len + return_value_strlen$1;
    argptr=va_arg(valist, __typeof__(argptr));
  }
  va_end(valist);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc(len + (unsigned long int)1);
  result = (char *)return_value_xmalloc$2;
  resptr = result;
  va_start(valist, arg1);
  nargs = 0;
  argptr = arg1;
  while(!(argptr == ((const char *)NULL)))
  {
    len=strlen(argptr);
    memcpy$link10((void *)resptr, (const void *)argptr, len);
    resptr = resptr + (signed long int)len;
    argptr=va_arg(valist, __typeof__(argptr));
  }
  va_end(valist);
  *resptr = (char)0;
  return result;
}

// xstrdup
// file ../include/joedog/joedog.h line 59
char * xstrdup(const char *str)
{
  char *ret;
  if(str == ((const char *)NULL))
  {
    NOTIFY((enum anonymous$19)ERROR, "string has no value!");
    return (char *)(void *)0;
  }

  else
  {
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(str);
    ret = return_value___strdup$1;
    if(ret == ((char *)NULL))
      NOTIFY((enum anonymous$19)FATAL, "xstrdup: unable to allocate additional memory");

    return ret;
  }
}

