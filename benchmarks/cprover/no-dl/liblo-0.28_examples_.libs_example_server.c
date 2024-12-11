// #anon_enum_LO_ELEMENT_MESSAGE=1_LO_ELEMENT_BUNDLE=2
// file ../lo/lo_osc_types.h line 59
enum anonymous_13 { LO_ELEMENT_MESSAGE=1, LO_ELEMENT_BUNDLE=2 };

// #anon_enum_LO_INT32=105_LO_FLOAT=102_LO_STRING=115_LO_BLOB=98_LO_INT64=104_LO_TIMETAG=116_LO_DOUBLE=100_LO_SYMBOL=83_LO_CHAR=99_LO_MIDI=109_LO_TRUE=84_LO_FALSE=70_LO_NIL=78_LO_INFINITUM=73
// file ../lo/lo_osc_types.h line 72
enum anonymous_5 { LO_INT32=105, LO_FLOAT=102, LO_STRING=115, LO_BLOB=98, LO_INT64=104, LO_TIMETAG=116, LO_DOUBLE=100, LO_SYMBOL=83, LO_CHAR=99, LO_MIDI=109, LO_TRUE=84, LO_FALSE=70, LO_NIL=78, LO_INFINITUM=73 };

// #anon_enum_LO_SERVER_COERCE=1_LO_SERVER_ENQUEUE=2
// file lo_types_internal.h line 51
enum anonymous_2 { LO_SERVER_COERCE=1, LO_SERVER_ENQUEUE=2 };

// #anon_enum_LO_SLIP=1_LO_NODELAY=2
// file lo_types_internal.h line 45
enum anonymous_10 { LO_SLIP=1, LO_NODELAY=2 };

// tag-#anon#ST[*{SYM#tag-_lo_message#}_SYM#tag-_lo_message#_'msg'||*{cS8}_cS8_'path'|]
// file lo_types_internal.h line 190
struct anonymous_14;

// tag-#anon#ST[SYM#tag-#anon#ST[U32'sec'||U32'frac'|]#'ts'||*{S8}_S8_'path'||*{SYM#tag-_lo_message#}_SYM#tag-_lo_message#_'msg'||S32'sock'||U32'_pad0'||*{V}_V_'next'|]
// file server.c line 72
struct anonymous_4;

// tag-#anon#ST[U32'a'||U32'b'|]
// file ../lo/lo_endian.h line 95
struct anonymous_8;

// tag-#anon#ST[U32'sec'||U32'frac'|]
// file ../lo/lo_osc_types.h line 46
struct anonymous_3;

// tag-#anon#UN[*{SYM#tag-_lo_bundle#}_SYM#tag-_lo_bundle#_'bundle'||SYM#tag-#anon#ST[*{SYM#tag-_lo_message#}_SYM#tag-_lo_message#_'msg'||*{cS8}_cS8_'path'|]#'message'|]
// file lo_types_internal.h line 188
union anonymous_15;

// tag-#anon#UN[*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'ifu_broadaddr'||*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'ifu_dstaddr'|]
// file /usr/include/ifaddrs.h line 38
union anonymous_11;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_0;

// tag-#anon#UN[S32'i'||F32'f'||S8'c'||U32'nl'|]
// file lo_types_internal.h line 210
union anonymous_6;

// tag-#anon#UN[S32'i'||S32'i32'||S64'h'||S64'i64'||F32'f'||F32'f32'||F64'd'||F64'f64'||S8's'||S8'S'||U8'c'||ARR4{U8}_U8_'m'||SYM#tag-#anon#ST[U32'sec'||U32'frac'|]#'t'|]
// file ../lo/lo_osc_types.h line 115
union anonymous;

// tag-#anon#UN[S64'i'||F64'f'||U64'nl'|]
// file lo_types_internal.h line 217
union anonymous_7;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_16;

// tag-#anon#UN[SYM#tag-in_addr#'addr'||SYM#tag-in6_addr#'addr6'|]
// file lo_types_internal.h line 66
union anonymous_1;

// tag-#anon#UN[U64'all'||SYM#tag-#anon#ST[U32'a'||U32'b'|]#'part'|]
// file ../lo/lo_endian.h line 93
union anonymous_9;

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

// tag-_lo_address
// file lo_types_internal.h line 74
struct _lo_address;

// tag-_lo_blob
// file lo_types_internal.h line 93
struct _lo_blob;

// tag-_lo_bundle
// file lo_types_internal.h line 184
struct _lo_bundle;

// tag-_lo_element
// file lo_types_internal.h line 186
struct _lo_element;

// tag-_lo_inaddr
// file lo_types_internal.h line 65
struct _lo_inaddr;

// tag-_lo_message
// file lo_types_internal.h line 98
struct _lo_message;

// tag-_lo_method
// file lo_types_internal.h line 63
struct _lo_method;

// tag-_lo_server
// file lo_types_internal.h line 87
struct _lo_server;

// tag-_lo_server_thread
// file lo_types_internal.h line 174
struct _lo_server_thread;

// tag-_lo_strlist
// file lo_types_internal.h line 205
struct _lo_strlist;

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-ifaddrs
// file /usr/include/ifaddrs.h line 29
struct ifaddrs;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-ip_mreq
// file /usr/include/netinet/in.h line 264
struct ip_mreq;

// tag-lo_cs
// file lo_types_internal.h line 223
struct lo_cs;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

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

// tag-socket_context
// file lo_types_internal.h line 128
struct socket_context;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
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
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cleanup_context
// file server.c line 902
static void cleanup_context(struct socket_context *sc);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// collect_element
// file bundle.c line 324
static void collect_element(struct _lo_element *elmnt);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// create_socket
// file send.c line 307
static signed int create_socket(struct _lo_address *a);
// detect_slip
// file server.c line 868
static signed int detect_slip(unsigned char *bytes);
// dispatch_data
// file server.c line 1594
static signed int dispatch_data(struct _lo_server *s, void *data, unsigned long int size, signed int sock);
// dispatch_method
// file server.c line 1708
static void dispatch_method(struct _lo_server *s, const char *path, struct _lo_message *msg, signed int sock);
// dispatch_queued
// file server.c line 1916
static signed int dispatch_queued(struct _lo_server *s, signed int dispatch_all);
// error
// file example_server.c line 66
void error(signed int num, const char *msg, const char *path);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// foo_handler
// file example_server.c line 91
signed int foo_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// freeifaddrs
// file /usr/include/ifaddrs.h line 69
extern void freeifaddrs(struct ifaddrs *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// generic_handler
// file example_server.c line 74
signed int generic_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data);
// get_protocol_name
// file address.c line 231
static const char * get_protocol_name(signed int proto);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getifaddrs
// file /usr/include/ifaddrs.h line 66
extern signed int getifaddrs(struct ifaddrs **);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// index
// file /usr/include/string.h line 488
extern char * index(const char *, signed int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// init_context
// file server.c line 892
static void init_context(struct socket_context *sc);
// is_in_list
// file bundle.c line 67
static signed int is_in_list(struct _lo_bundle **list, struct _lo_bundle *ptr, unsigned long int *len);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// lo_address_copy
// file address.c line 519
void lo_address_copy(struct _lo_address *to, struct _lo_address *from);
// lo_address_errno
// file address.c line 317
signed int lo_address_errno(struct _lo_address *a);
// lo_address_errstr
// file address.c line 322
const char * lo_address_errstr(struct _lo_address *a);
// lo_address_free
// file address.c line 286
void lo_address_free(struct _lo_address *a);
// lo_address_free_mem
// file address.c line 300
void lo_address_free_mem(struct _lo_address *a);
// lo_address_get_hostname
// file address.c line 198
const char * lo_address_get_hostname(struct _lo_address *a);
// lo_address_get_iface
// file address.c line 820
const char * lo_address_get_iface(struct _lo_address *t);
// lo_address_get_port
// file address.c line 219
const char * lo_address_get_port(struct _lo_address *a);
// lo_address_get_protocol
// file address.c line 210
signed int lo_address_get_protocol(struct _lo_address *a);
// lo_address_get_ttl
// file address.c line 474
signed int lo_address_get_ttl(struct _lo_address *t);
// lo_address_get_url
// file address.c line 247
char * lo_address_get_url(struct _lo_address *a);
// lo_address_init_with_sockaddr
// file address.c line 540
void lo_address_init_with_sockaddr(struct _lo_address *a, void *sa, unsigned long int sa_len, signed int sock, signed int prot);
// lo_address_new
// file address.c line 98
struct _lo_address * lo_address_new(const char *host, const char *port);
// lo_address_new_from_url
// file address.c line 103
struct _lo_address * lo_address_new_from_url(const char *url);
// lo_address_new_with_proto
// file address.c line 51
struct _lo_address * lo_address_new_with_proto(signed int proto, const char *host, const char *port);
// lo_address_resolve
// file address.c line 564
signed int lo_address_resolve(struct _lo_address *a);
// lo_address_resolve_source
// file address.c line 143
static void lo_address_resolve_source(struct _lo_address *a);
// lo_address_set_flags
// file address.c line 498
static void lo_address_set_flags(struct _lo_address *t, signed int flags);
// lo_address_set_iface
// file address.c line 608
signed int lo_address_set_iface(struct _lo_address *t, const char *iface, const char *ip);
// lo_address_set_stream_slip
// file address.c line 488
signed int lo_address_set_stream_slip(struct _lo_address *t, signed int enable);
// lo_address_set_tcp_nodelay
// file address.c line 479
signed int lo_address_set_tcp_nodelay(struct _lo_address *t, signed int enable);
// lo_address_set_ttl
// file address.c line 468
void lo_address_set_ttl(struct _lo_address *t, signed int ttl);
// lo_arg_host_endian
// file message.c line 706
void lo_arg_host_endian(enum anonymous_5 type, void *data);
// lo_arg_network_endian
// file message.c line 746
void lo_arg_network_endian(enum anonymous_5 type, void *data);
// lo_arg_pp
// file ../lo/lo_lowlevel.h line 1054
void lo_arg_pp(enum anonymous_5 type, void *data);
// lo_arg_pp_internal
// file message.c line 1009
void lo_arg_pp_internal(enum anonymous_5 type, void *data, signed int bigendian);
// lo_arg_size
// file message.c line 530
unsigned long int lo_arg_size(enum anonymous_5 type, void *data);
// lo_blob_dataptr
// file ../lo/lo.h line 217
void * lo_blob_dataptr(struct _lo_blob *b);
// lo_blob_datasize
// file ../lo/lo.h line 211
unsigned int lo_blob_datasize(struct _lo_blob *b);
// lo_blob_free
// file blob.c line 42
void lo_blob_free(struct _lo_blob *b);
// lo_blob_new
// file blob.c line 23
struct _lo_blob * lo_blob_new(signed int size, const void *data);
// lo_blobsize
// file ../lo/lo_lowlevel.h line 962
unsigned int lo_blobsize(struct _lo_blob *b);
// lo_bundle_add_bundle
// file bundle.c line 176
signed int lo_bundle_add_bundle(struct _lo_bundle *b, struct _lo_bundle *n);
// lo_bundle_add_element
// file bundle.c line 123
static signed int lo_bundle_add_element(struct _lo_bundle *b, signed int type, const char *path, void *elmnt);
// lo_bundle_add_message
// file ../lo/lo_lowlevel.h line 512
signed int lo_bundle_add_message(struct _lo_bundle *b, const char *path, struct _lo_message *m);
// lo_bundle_circular
// file bundle.c line 108
static signed int lo_bundle_circular(struct _lo_bundle *b);
// lo_bundle_count
// file bundle.c line 216
unsigned int lo_bundle_count(struct _lo_bundle *b);
// lo_bundle_decref
// file bundle.c line 43
static void lo_bundle_decref(struct _lo_bundle *b);
// lo_bundle_free
// file ../lo/lo_lowlevel.h line 598
void lo_bundle_free(struct _lo_bundle *b);
// lo_bundle_free_messages
// file bundle.c line 341
void lo_bundle_free_messages(struct _lo_bundle *b);
// lo_bundle_free_recursive
// file bundle.c line 346
void lo_bundle_free_recursive(struct _lo_bundle *b);
// lo_bundle_get_bundle
// file bundle.c line 192
struct _lo_bundle * lo_bundle_get_bundle(struct _lo_bundle *b, signed int index);
// lo_bundle_get_message
// file bundle.c line 200
struct _lo_message * lo_bundle_get_message(struct _lo_bundle *b, signed int index, const char **path);
// lo_bundle_get_timestamp
// file bundle.c line 211
struct anonymous_3 lo_bundle_get_timestamp(struct _lo_bundle *b);
// lo_bundle_get_type
// file bundle.c line 184
enum anonymous_13 lo_bundle_get_type(struct _lo_bundle *b, signed int index);
// lo_bundle_incref
// file bundle.c line 37
void lo_bundle_incref(struct _lo_bundle *b);
// lo_bundle_length
// file bundle.c line 221
unsigned long int lo_bundle_length(struct _lo_bundle *b);
// lo_bundle_new
// file ../lo/lo_lowlevel.h line 492
struct _lo_bundle * lo_bundle_new(struct anonymous_3 tt);
// lo_bundle_pp
// file bundle.c line 410
void lo_bundle_pp(struct _lo_bundle *b);
// lo_bundle_pp_internal
// file bundle.c line 381
static signed int * lo_bundle_pp_internal(struct _lo_bundle *b, signed int offset, signed int *state, unsigned long int *len);
// lo_bundle_serialise
// file ../lo/lo_lowlevel.h line 591
void * lo_bundle_serialise(struct _lo_bundle *b, void *to, unsigned long int *size);
// lo_can_coerce
// file server.c line 2152
static signed int lo_can_coerce(char a, char b);
// lo_can_coerce_spec
// file server.c line 2135
static signed int lo_can_coerce_spec(const char *a, const char *b);
// lo_coerce
// file message.c line 1128
signed int lo_coerce(enum anonymous_5 type_to, union anonymous *to, enum anonymous_5 type_from, union anonymous *from);
// lo_error_get_context
// file server.c line 2180
void * lo_error_get_context();
// lo_get_path
// file message.c line 567
char * lo_get_path(void *data, signed long int size);
// lo_hires_val
// file message.c line 1172
long double lo_hires_val(enum anonymous_5 type, union anonymous *p);
// lo_inaddr_find_iface
// file address.c line 621
signed int lo_inaddr_find_iface(struct _lo_inaddr *t, signed int fam, const char *iface, const char *ip);
// lo_is_numerical_type
// file message.c line 1118
signed int lo_is_numerical_type(enum anonymous_5 a);
// lo_is_string_type
// file message.c line 1123
signed int lo_is_string_type(enum anonymous_5 a);
// lo_message_add_blob
// file message.c line 353
signed int lo_message_add_blob(struct _lo_message *m, struct _lo_blob *a);
// lo_message_add_char
// file message.c line 426
signed int lo_message_add_char(struct _lo_message *m, char a);
// lo_message_add_data
// file message.c line 498
static void * lo_message_add_data(struct _lo_message *m, unsigned long int s);
// lo_message_add_double
// file message.c line 399
signed int lo_message_add_double(struct _lo_message *m, double a);
// lo_message_add_false
// file message.c line 460
signed int lo_message_add_false(struct _lo_message *m);
// lo_message_add_float
// file message.c line 326
signed int lo_message_add_float(struct _lo_message *m, float a);
// lo_message_add_infinitum
// file message.c line 470
signed int lo_message_add_infinitum(struct _lo_message *m);
// lo_message_add_int32
// file message.c line 312
signed int lo_message_add_int32(struct _lo_message *m, signed int a);
// lo_message_add_int64
// file message.c line 371
signed int lo_message_add_int64(struct _lo_message *m, signed long int a);
// lo_message_add_internal
// file message.c line 304
signed int lo_message_add_internal(struct _lo_message *msg, const char *file, const signed int line, const char *types, ...);
// lo_message_add_midi
// file message.c line 442
signed int lo_message_add_midi(struct _lo_message *m, unsigned char *a);
// lo_message_add_nil
// file message.c line 465
signed int lo_message_add_nil(struct _lo_message *m);
// lo_message_add_string
// file message.c line 340
signed int lo_message_add_string(struct _lo_message *m, const char *a);
// lo_message_add_symbol
// file message.c line 413
signed int lo_message_add_symbol(struct _lo_message *m, const char *a);
// lo_message_add_timetag
// file message.c line 385
signed int lo_message_add_timetag(struct _lo_message *m, struct anonymous_3 a);
// lo_message_add_true
// file message.c line 455
signed int lo_message_add_true(struct _lo_message *m);
// lo_message_add_typechar
// file message.c line 475
static signed int lo_message_add_typechar(struct _lo_message *m, char t);
// lo_message_add_varargs_internal
// file ../lo/lo_lowlevel.h line 173
signed int lo_message_add_varargs_internal(struct _lo_message *msg, const char *types, __builtin_va_list ap, const char *file, signed int line);
// lo_message_clone
// file message.c line 94
struct _lo_message * lo_message_clone(struct _lo_message *m);
// lo_message_deserialise
// file message.c line 868
struct _lo_message * lo_message_deserialise(void *data, unsigned long int size, signed int *result);
// lo_message_free
// file ../lo/lo_lowlevel.h line 131
void lo_message_free(struct _lo_message *m);
// lo_message_get_argc
// file message.c line 800
signed int lo_message_get_argc(struct _lo_message *m);
// lo_message_get_argv
// file message.c line 805
union anonymous ** lo_message_get_argv(struct _lo_message *m);
// lo_message_get_source
// file message.c line 785
struct _lo_address * lo_message_get_source(struct _lo_message *m);
// lo_message_get_timestamp
// file message.c line 790
struct anonymous_3 lo_message_get_timestamp(struct _lo_message *m);
// lo_message_get_types
// file message.c line 829
char * lo_message_get_types(struct _lo_message *m);
// lo_message_incref
// file message.c line 89
void lo_message_incref(struct _lo_message *m);
// lo_message_length
// file ../lo/lo_lowlevel.h line 334
unsigned long int lo_message_length(struct _lo_message *m, const char *path);
// lo_message_new
// file ../lo/lo_lowlevel.h line 110
struct _lo_message * lo_message_new();
// lo_message_pp
// file message.c line 981
void lo_message_pp(struct _lo_message *m);
// lo_message_serialise
// file ../lo/lo_lowlevel.h line 350
void * lo_message_serialise(struct _lo_message *m, const char *path, void *to, unsigned long int *size);
// lo_method_pp
// file method.c line 22
void lo_method_pp(struct _lo_method *m);
// lo_method_pp_prefix
// file ../lo/lo_lowlevel.h line 1064
void lo_method_pp_prefix(struct _lo_method *m, const char *p);
// lo_pattern_match
// file ../lo/lo_lowlevel.h line 970
signed int lo_pattern_match(const char *str, const char *p);
// lo_send_bundle
// file send.c line 580
signed int lo_send_bundle(struct _lo_address *a, struct _lo_bundle *b);
// lo_send_bundle_from
// file send.c line 586
signed int lo_send_bundle_from(struct _lo_address *a, struct _lo_server *from, struct _lo_bundle *b);
// lo_send_from_internal
// file send.c line 225
signed int lo_send_from_internal(struct _lo_address *to, struct _lo_server *from, const char *file, const signed int line, const struct anonymous_3 ts, const char *path, const char *types, ...);
// lo_send_from_varargs_internal
// file send.c line 174
static signed int lo_send_from_varargs_internal(struct _lo_address *to, struct _lo_server *from, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, void **ap);
// lo_send_internal
// file send.c line 113
signed int lo_send_internal(struct _lo_address *t, const char *file, const signed int line, const char *path, const char *types, ...);
// lo_send_message
// file send.c line 552
signed int lo_send_message(struct _lo_address *a, const char *path, struct _lo_message *msg);
// lo_send_message_from
// file send.c line 557
signed int lo_send_message_from(struct _lo_address *a, struct _lo_server *from, const char *path, struct _lo_message *msg);
// lo_send_timestamped_internal
// file send.c line 163
signed int lo_send_timestamped_internal(struct _lo_address *t, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, ...);
// lo_send_timestamped_varargs_internal
// file send.c line 122
static signed int lo_send_timestamped_varargs_internal(struct _lo_address *t, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, void **ap);
// lo_send_varargs_internal
// file send.c line 71
static signed int lo_send_varargs_internal(struct _lo_address *t, const char *file, const signed int line, const char *path, const char *types, void **ap);
// lo_server_add_bundle_handlers
// file server.c line 2038
signed int lo_server_add_bundle_handlers(struct _lo_server *s, signed int (*sh)(struct anonymous_3, void *), signed int (*eh)(void *), void *user_data);
// lo_server_add_bundle_handlers::eh_object
//
signed int eh_object(void *);
// lo_server_add_bundle_handlers::sh_object
//
signed int sh_object(struct anonymous_3, void *);
// lo_server_add_method
// file server.c line 1951
struct _lo_method * lo_server_add_method(struct _lo_server *s, const char *path, const char *typespec, signed int (*h)(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *), void *user_data);
// lo_server_add_method::h_object
//
signed int h_object(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *);
// lo_server_add_socket
// file lo_internal.h line 83
signed int lo_server_add_socket(struct _lo_server *s, signed int socket, struct _lo_address *a, struct sockaddr_storage *addr, unsigned int addr_len);
// lo_server_buffer_contains_msg
// file server.c line 912
static unsigned int lo_server_buffer_contains_msg(struct _lo_server *s, signed int isock);
// lo_server_buffer_copy_for_dispatch
// file server.c line 925
static void * lo_server_buffer_copy_for_dispatch(struct _lo_server *s, signed int isock, unsigned long int *psize);
// lo_server_del_method
// file server.c line 1993
void lo_server_del_method(struct _lo_server *s, const char *path, const char *typespec);
// lo_server_del_socket
// file lo_internal.h line 93
void lo_server_del_socket(struct _lo_server *s, signed int index, signed int socket);
// lo_server_dispatch_data
// file server.c line 1684
signed int lo_server_dispatch_data(struct _lo_server *s, void *data, unsigned long int size);
// lo_server_enable_coercion
// file server.c line 694
signed int lo_server_enable_coercion(struct _lo_server *s, signed int enable);
// lo_server_enable_queue
// file server.c line 781
signed int lo_server_enable_queue(struct _lo_server *s, signed int enable, signed int dispatch_remaining);
// lo_server_events_pending
// file server.c line 1873
signed int lo_server_events_pending(struct _lo_server *s);
// lo_server_free
// file server.c line 707
void lo_server_free(struct _lo_server *s);
// lo_server_get_port
// file server.c line 2061
signed int lo_server_get_port(struct _lo_server *s);
// lo_server_get_protocol
// file server.c line 2070
signed int lo_server_get_protocol(struct _lo_server *s);
// lo_server_get_socket_fd
// file server.c line 2049
signed int lo_server_get_socket_fd(struct _lo_server *s);
// lo_server_get_url
// file server.c line 2080
char * lo_server_get_url(struct _lo_server *s);
// lo_server_join_multicast_group
// file server.c line 643
static signed int lo_server_join_multicast_group(struct _lo_server *s, const char *group, signed int fam, const char *iface, const char *ip);
// lo_server_new
// file server.c line 221
struct _lo_server * lo_server_new(const char *port, void (*err_h)(signed int, const char *, const char *));
// lo_server_new::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_new_from_url
// file server.c line 247
struct _lo_server * lo_server_new_from_url(const char *url, void (*err_h)(signed int, const char *, const char *));
// lo_server_new_from_url::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_new_multicast
// file server.c line 226
struct _lo_server * lo_server_new_multicast(const char *group, const char *port, void (*err_h)(signed int, const char *, const char *));
// lo_server_new_multicast::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_new_multicast_iface
// file server.c line 233
struct _lo_server * lo_server_new_multicast_iface(const char *group, const char *port, const char *iface, const char *ip, void (*err_h)(signed int, const char *, const char *));
// lo_server_new_multicast_iface::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_new_with_proto
// file server.c line 241
struct _lo_server * lo_server_new_with_proto(const char *port, signed int proto, void (*err_h)(signed int, const char *, const char *));
// lo_server_new_with_proto::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_new_with_proto_internal
// file server.c line 290
static struct _lo_server * lo_server_new_with_proto_internal(const char *group, const char *port, const char *iface, const char *ip, signed int proto, void (*err_h)(signed int, const char *, const char *));
// lo_server_new_with_proto_internal::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_next_event_delay
// file server.c line 1690
double lo_server_next_event_delay(struct _lo_server *s);
// lo_server_pp
// file server.c line 2123
void lo_server_pp(struct _lo_server *s);
// lo_server_recv
// file server.c line 1403
signed int lo_server_recv(struct _lo_server *s);
// lo_server_recv_noblock
// file server.c line 1393
signed int lo_server_recv_noblock(struct _lo_server *s, signed int timeout);
// lo_server_recv_raw
// file server.c line 794
void * lo_server_recv_raw(struct _lo_server *s, unsigned long int *size);
// lo_server_recv_raw_stream
// file server.c line 1125
static void * lo_server_recv_raw_stream(struct _lo_server *s, unsigned long int *size, signed int *psock);
// lo_server_recv_raw_stream_socket
// file server.c line 953
static signed int lo_server_recv_raw_stream_socket(struct _lo_server *s, signed int isock, unsigned long int *psize, void **pdata);
// lo_server_set_error_context
// file server.c line 2185
void lo_server_set_error_context(struct _lo_server *s, void *user_data);
// lo_server_set_iface
// file server.c line 611
static signed int lo_server_set_iface(struct _lo_server *s, signed int fam, const char *iface, const char *ip);
// lo_server_setsock_reuseaddr
// file server.c line 193
static signed int lo_server_setsock_reuseaddr(struct _lo_server *s, signed int do_throw);
// lo_server_setsock_reuseport
// file server.c line 206
static signed int lo_server_setsock_reuseport(struct _lo_server *s, signed int do_throw);
// lo_server_should_coerce_args
// file server.c line 702
signed int lo_server_should_coerce_args(struct _lo_server *s);
// lo_server_thread_add_method
// file server_thread.c line 116
struct _lo_method * lo_server_thread_add_method(struct _lo_server_thread *st, const char *path, const char *typespec, signed int (*h)(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *), void *user_data);
// lo_server_thread_add_method::h_object
//
signed int h_object(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *);
// lo_server_thread_del_method
// file server_thread.c line 124
void lo_server_thread_del_method(struct _lo_server_thread *st, const char *path, const char *typespec);
// lo_server_thread_events_pending
// file server_thread.c line 188
signed int lo_server_thread_events_pending(struct _lo_server_thread *st);
// lo_server_thread_free
// file server_thread.c line 105
void lo_server_thread_free(struct _lo_server_thread *st);
// lo_server_thread_get_port
// file server_thread.c line 173
signed int lo_server_thread_get_port(struct _lo_server_thread *st);
// lo_server_thread_get_server
// file server_thread.c line 183
struct _lo_server * lo_server_thread_get_server(struct _lo_server_thread *st);
// lo_server_thread_get_url
// file server_thread.c line 178
char * lo_server_thread_get_url(struct _lo_server_thread *st);
// lo_server_thread_new
// file server_thread.c line 40
struct _lo_server_thread * lo_server_thread_new(const char *port, void (*err_h)(signed int, const char *, const char *));
// lo_server_thread_new::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_thread_new_from_url
// file server_thread.c line 82
struct _lo_server_thread * lo_server_thread_new_from_url(const char *url, void (*err_h)(signed int, const char *, const char *));
// lo_server_thread_new_from_url::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_thread_new_multicast
// file server_thread.c line 46
struct _lo_server_thread * lo_server_thread_new_multicast(const char *group, const char *port, void (*err_h)(signed int, const char *, const char *));
// lo_server_thread_new_multicast::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_thread_new_with_proto
// file server_thread.c line 64
struct _lo_server_thread * lo_server_thread_new_with_proto(const char *port, signed int proto, void (*err_h)(signed int, const char *, const char *));
// lo_server_thread_new_with_proto::err_h_object
//
void err_h_object(signed int, const char *, const char *);
// lo_server_thread_pp
// file server_thread.c line 205
void lo_server_thread_pp(struct _lo_server_thread *st);
// lo_server_thread_set_error_context
// file server_thread.c line 99
void lo_server_thread_set_error_context(struct _lo_server_thread *st, void *user_data);
// lo_server_thread_start
// file server_thread.c line 130
signed int lo_server_thread_start(struct _lo_server_thread *st);
// lo_server_thread_stop
// file server_thread.c line 152
signed int lo_server_thread_stop(struct _lo_server_thread *st);
// lo_server_wait
// file server.c line 1243
signed int lo_server_wait(struct _lo_server *s, signed int timeout);
// lo_strsize
// file message.c line 525
signed int lo_strsize(const char *s);
// lo_swap64
// file ../lo/lo_endian.h line 106
static inline unsigned long int lo_swap64(unsigned long int x);
// lo_throw
// file ../lo/lo_throw.h line 24
void lo_throw(struct _lo_server *s, signed int errnum, const char *message, const char *path);
// lo_timetag_diff
// file ../lo/lo_lowlevel.h line 988
double lo_timetag_diff(struct anonymous_3 a, struct anonymous_3 b);
// lo_timetag_now
// file ../lo/lo_lowlevel.h line 995
void lo_timetag_now(struct anonymous_3 *t);
// lo_url_get_hostname
// file address.c line 390
char * lo_url_get_hostname(const char *url);
// lo_url_get_path
// file address.c line 439
char * lo_url_get_path(const char *url);
// lo_url_get_port
// file address.c line 410
char * lo_url_get_port(const char *url);
// lo_url_get_protocol
// file address.c line 343
char * lo_url_get_protocol(const char *url);
// lo_url_get_protocol_id
// file address.c line 369
signed int lo_url_get_protocol_id(const char *url);
// lo_validate_arg
// file message.c line 669
signed long int lo_validate_arg(enum anonymous_5 type, void *data, signed long int size);
// lo_validate_blob
// file message.c line 602
signed long int lo_validate_blob(void *data, signed long int size);
// lo_validate_bundle
// file message.c line 629
signed long int lo_validate_bundle(void *data, signed long int size);
// lo_validate_string
// file message.c line 573
signed long int lo_validate_string(void *data, signed long int size);
// lo_version
// file version.c line 25
void lo_version(char *verstr, signed int verstr_size, signed int *major, signed int *minor, char *extra, signed int extra_size, signed int *lt_major, signed int *lt_minor, signed int *lt_bug);
// log
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 109
extern double log(double);
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
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// offset_pp
// file bundle.c line 364
static void offset_pp(signed int offset, signed int *state);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// pop_from_list
// file bundle.c line 61
static struct _lo_bundle ** pop_from_list(struct _lo_bundle **list, unsigned long int *len, unsigned long int *size);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_16 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_16 *);
// push_to_list
// file bundle.c line 48
static struct _lo_bundle ** push_to_list(struct _lo_bundle **list, struct _lo_bundle *ptr, unsigned long int *len, unsigned long int *size);
// putchar
// file /usr/include/stdio.h line 580
extern signed int putchar(signed int);
// queue_data
// file server.c line 1878
static void queue_data(struct _lo_server *s, struct anonymous_3 ts, const char *path, struct _lo_message *msg, signed int sock);
// quit_handler
// file example_server.c line 101
signed int quit_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int, struct sockaddr *, unsigned int *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_data
// file send.c line 427
static signed int send_data(struct _lo_address *a, struct _lo_server *from, char *data, const unsigned long int data_len);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, struct sockaddr *, unsigned int);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// slip_decode
// file server.c line 832
static signed int slip_decode(unsigned char **buffer, unsigned char *from, unsigned long int size, signed int *state, unsigned long int *bytesread);
// slip_encode
// file send.c line 401
static unsigned char * slip_encode(const unsigned char *data, unsigned long int *data_len);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
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
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
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
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// thread_func
// file server_thread.c line 193
static void thread_func(void *data);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// walk_tree
// file bundle.c line 78
static struct _lo_bundle ** walk_tree(struct _lo_bundle **B, struct _lo_bundle *b, unsigned long int *len, unsigned long int *size, signed int *ret);

struct anonymous_14
{
  // msg
  struct _lo_message *msg;
  // path
  const char *path;
};

struct anonymous_3
{
  // sec
  unsigned int sec;
  // frac
  unsigned int frac;
};

struct anonymous_4
{
  // ts
  struct anonymous_3 ts;
  // path
  char *path;
  // msg
  struct _lo_message *msg;
  // sock
  signed int sock;
  // next
  void *next;
};

struct anonymous_8
{
  // a
  unsigned int a;
  // b
  unsigned int b;
};

union anonymous_15
{
  // bundle
  struct _lo_bundle *bundle;
  // message
  struct anonymous_14 message;
};

union anonymous_11
{
  // ifu_broadaddr
  struct sockaddr *ifu_broadaddr;
  // ifu_dstaddr
  struct sockaddr *ifu_dstaddr;
};

union anonymous_0
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_6
{
  // i
  signed int i;
  // f
  float f;
  // c
  char c;
  // nl
  unsigned int nl;
};

union anonymous
{
  // i
  signed int i;
  // i32
  signed int i32;
  // h
  signed long int h;
  // i64
  signed long int i64;
  // f
  float f;
  // f32
  float f32;
  // d
  double d;
  // f64
  double f64;
  // s
  char s;
  // S
  char S;
  // c
  unsigned char c;
  // m
  unsigned char m[4l];
  // t
  struct anonymous_3 t;
};

union anonymous_7
{
  // i
  signed long int i;
  // f
  double f;
  // nl
  unsigned long int nl;
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

union anonymous_16
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
  union anonymous_0 __in6_u;
};

union anonymous_1
{
  // addr
  struct in_addr addr;
  // addr6
  struct in6_addr addr6;
};

union anonymous_9
{
  // all
  unsigned long int all;
  // part
  struct anonymous_8 part;
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

struct _lo_inaddr
{
  // a
  union anonymous_1 a;
  // size
  unsigned long int size;
  // iface
  char *iface;
};

struct _lo_address
{
  // host
  char *host;
  // socket
  signed int socket;
  // ownsocket
  signed int ownsocket;
  // port
  char *port;
  // protocol
  signed int protocol;
  // flags
  enum anonymous_10 flags;
  // ai
  struct addrinfo *ai;
  // ai_first
  struct addrinfo *ai_first;
  // errnum
  signed int errnum;
  // errstr
  const char *errstr;
  // ttl
  signed int ttl;
  // addr
  struct _lo_inaddr addr;
  // source_server
  struct _lo_server *source_server;
  // source_path
  const char *source_path;
};

struct _lo_blob
{
  // size
  unsigned int size;
  // data
  char *data;
};

struct _lo_bundle
{
  // size
  unsigned long int size;
  // len
  unsigned long int len;
  // ts
  struct anonymous_3 ts;
  // elmnts
  struct _lo_element *elmnts;
  // refcount
  signed int refcount;
};

struct _lo_element
{
  // type
  enum anonymous_13 type;
  // content
  union anonymous_15 content;
};

struct _lo_message
{
  // types
  char *types;
  // typelen
  unsigned long int typelen;
  // typesize
  unsigned long int typesize;
  // data
  void *data;
  // datalen
  unsigned long int datalen;
  // datasize
  unsigned long int datasize;
  // source
  struct _lo_address *source;
  // argv
  union anonymous **argv;
  // ts
  struct anonymous_3 ts;
  // refcount
  signed int refcount;
};

struct _lo_method
{
  // path
  const char *path;
  // typespec
  const char *typespec;
  // handler
  signed int (*handler)(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *);
  // user_data
  char *user_data;
  // next
  struct _lo_method *next;
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

struct _lo_server
{
  // ai
  struct addrinfo *ai;
  // first
  struct _lo_method *first;
  // err_h
  void (*err_h)(signed int, const char *, const char *);
  // port
  signed int port;
  // hostname
  char *hostname;
  // path
  char *path;
  // protocol
  signed int protocol;
  // flags
  enum anonymous_2 flags;
  // queued
  void *queued;
  // addr
  struct sockaddr_storage addr;
  // addr_len
  unsigned int addr_len;
  // sockets_len
  signed int sockets_len;
  // sockets_alloc
  signed int sockets_alloc;
  // sockets
  struct pollfd *sockets;
  // contexts
  struct socket_context *contexts;
  // sources
  struct _lo_address *sources;
  // sources_len
  signed int sources_len;
  // bundle_start_handler
  signed int (*bundle_start_handler)(struct anonymous_3, void *);
  // bundle_end_handler
  signed int (*bundle_end_handler)(void *);
  // bundle_handler_user_data
  void *bundle_handler_user_data;
  // addr_if
  struct _lo_inaddr addr_if;
  // error_user_data
  void *error_user_data;
};

struct _lo_server_thread
{
  // s
  struct _lo_server *s;
  // thread
  unsigned long int thread;
  // active
  volatile signed int active;
  // done
  volatile signed int done;
};

struct _lo_strlist
{
  // str
  char *str;
  // next
  struct _lo_strlist *next;
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
  union anonymous_11 ifa_ifu;
  // ifa_data
  void *ifa_data;
};

struct ip_mreq
{
  // imr_multiaddr
  struct in_addr imr_multiaddr;
  // imr_interface
  struct in_addr imr_interface;
};

struct lo_cs
{
  // udp
  signed int udp;
  // tcp
  signed int tcp;
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

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
};

struct socket_context
{
  // buffer
  char *buffer;
  // buffer_size
  unsigned long int buffer_size;
  // buffer_msg_offset
  unsigned int buffer_msg_offset;
  // buffer_read_offset
  unsigned int buffer_read_offset;
  // is_slip
  signed int is_slip;
  // slip_state
  signed int slip_state;
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


// done
// file example_server.c line 23
signed int done = 0;
// lo_client_sockets
// file server.c line 80
struct lo_cs lo_client_sockets = { .udp=-1, .tcp=-1 };
// lo_error_context
// file server.c line 2160
void *lo_error_context;
// lo_error_context_mutex
// file server.c line 2162
union anonymous_16 lo_error_context_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// lo_numerical_types
// file message.c line 37
static char lo_numerical_types[5l] = { (char)LO_INT32, (char)LO_FLOAT, (char)LO_INT64, (char)LO_DOUBLE, (char)0 };
// lo_string_types
// file message.c line 45
static char lo_string_types[3l] = { (char)LO_STRING, (char)LO_SYMBOL, (char)0 };
// reuseport_supported
// file server.c line 81
static signed int reuseport_supported = 1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// cleanup_context
// file server.c line 902
static void cleanup_context(struct socket_context *sc)
{
  if(!(sc->buffer == ((char *)NULL)))
    free((void *)sc->buffer);

  memset((void *)sc, 0, sizeof(struct socket_context) /*32ul*/ );
}

// collect_element
// file bundle.c line 324
static void collect_element(struct _lo_element *elmnt)
{
  struct _lo_message *msg;
  struct _lo_bundle *bndl;
  switch((signed int)elmnt->type)
  {
    case LO_ELEMENT_MESSAGE:
    {
      msg = elmnt->content.message.msg;
      lo_message_free(msg);
      break;
    }
    case LO_ELEMENT_BUNDLE:
    {
      bndl = elmnt->content.bundle;
      lo_bundle_free_recursive(bndl);
    }
  }
}

// create_socket
// file send.c line 307
static signed int create_socket(struct _lo_address *a)
{
  _Bool tmp_if_expr_7;
  if(a->protocol == 0x1)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = a->protocol == 0x4 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_7)
  {
    a->socket=socket(a->ai->ai_family, a->ai->ai_socktype, 0);
    if(a->socket == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      a->errnum = *return_value___errno_location_1;
      a->errstr = (const char *)(void *)0;
      return -1;
    }

    if(a->protocol == 0x4)
    {
      signed int return_value_connect_3;
      return_value_connect_3=connect(a->socket, a->ai->ai_addr, a->ai->ai_addrlen);
      if(!(return_value_connect_3 == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        a->errnum = *return_value___errno_location_2;
        a->errstr = (const char *)(void *)0;
        close(a->socket);
        a->socket = -1;
        return -1;
      }

    }

    else
      if(a->protocol == 0x1)
      {
        if(a->ai->ai_family == 2)
        {
          struct sockaddr_in *si = (struct sockaddr_in *)a->ai->ai_addr;
          unsigned char *ip = (unsigned char *)&si->sin_addr;
          if((signed int)*ip == 255)
          {
            if((signed int)ip[1l] == 255)
            {
              if((signed int)ip[2l] == 255)
              {
                if((signed int)ip[3l] == 255)
                {
                  signed int opt = 1;
                  setsockopt(a->socket, 1, 6, (const void *)(const char *)&opt, (unsigned int)sizeof(signed int) /*4ul*/ );
                }

              }

            }

          }

        }

      }

  }

  else
    if(a->protocol == 0x2)
    {
      struct sockaddr_un sa;
      a->socket=socket(1, 2, 0);
      if(a->socket == -1)
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        a->errnum = *return_value___errno_location_4;
        a->errstr = (const char *)(void *)0;
        return -1;
      }

      sa.sun_family = (unsigned short int)1;
      strncpy(sa.sun_path, a->port, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
      signed int return_value_connect_6;
      return_value_connect_6=connect(a->socket, (struct sockaddr *)&sa, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
      if(!(return_value_connect_6 >= 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        a->errnum = *return_value___errno_location_5;
        a->errstr = (const char *)(void *)0;
        close(a->socket);
        a->socket = -1;
        return -1;
      }

    }

    else
      return -2;
  if(!((LO_NODELAY & (signed int)a->flags) == 0))
  {
    signed int option = 1;
    setsockopt(a->socket, 6, 1, (const void *)(const char *)&option, (unsigned int)sizeof(signed int) /*4ul*/ );
  }

  return 0;
}

// detect_slip
// file server.c line 868
static signed int detect_slip(unsigned char *bytes)
{
  const unsigned short int **return_value___ctype_b_loc_3;
  _Bool tmp_if_expr_4;
  const unsigned short int **return_value___ctype_b_loc_1;
  _Bool tmp_if_expr_2;
  const unsigned short int **return_value___ctype_b_loc_9;
  _Bool tmp_if_expr_10;
  const unsigned short int **return_value___ctype_b_loc_7;
  _Bool tmp_if_expr_8;
  const unsigned short int **return_value___ctype_b_loc_5;
  _Bool tmp_if_expr_6;
  if((signed int)*bytes == 0300)
  {
    if(!((signed int)bytes[1l] == 47))
      goto __CPROVER_DUMP_L5;

    return_value___ctype_b_loc_3=__ctype_b_loc();
    if(!((16384 & (signed int)(*return_value___ctype_b_loc_3)[(signed long int)(signed int)bytes[2l]]) == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)bytes[(signed long int)2] == 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
      goto __CPROVER_DUMP_L5;

    return_value___ctype_b_loc_1=__ctype_b_loc();
    if(!((16384 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)bytes[3l]]) == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)bytes[(signed long int)3] == 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
      goto __CPROVER_DUMP_L5;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    if((signed int)*bytes == 47)
    {
      return_value___ctype_b_loc_9=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc_9)[(signed long int)(signed int)bytes[1l]]) == 0))
        tmp_if_expr_10 = (_Bool)1;

      else
        tmp_if_expr_10 = (signed int)bytes[(signed long int)1] == 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_10)
        goto __CPROVER_DUMP_L12;

      return_value___ctype_b_loc_7=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc_7)[(signed long int)(signed int)bytes[2l]]) == 0))
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = (signed int)bytes[(signed long int)2] == 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_8)
        goto __CPROVER_DUMP_L12;

      return_value___ctype_b_loc_5=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)bytes[3l]]) == 0))
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (signed int)bytes[(signed long int)3] == 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_6)
        goto __CPROVER_DUMP_L12;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L12:
      ;
      signed int return_value_memcmp_11;
      return_value_memcmp_11=memcmp((const void *)bytes, (const void *)"#bun", (unsigned long int)4);
      if(return_value_memcmp_11 == 0)
        return 1;

      else
        return 0;
    }
  }
}

// dispatch_data
// file server.c line 1594
static signed int dispatch_data(struct _lo_server *s, void *data, unsigned long int size, signed int sock)
{
  signed int result = 0;
  char *path = (char *)data;
  signed long int len;
  len=lo_validate_string(data, (signed long int)size);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  double return_value_lo_timetag_diff_2;
  _Bool tmp_if_expr_4;
  if(!(len >= 0l))
  {
    lo_throw(s, (signed int)-len, "Invalid message path", (const char *)(void *)0);
    return (signed int)len;
  }

  else
  {
    signed int return_value_strcmp_6;
    return_value_strcmp_6=strcmp((const char *)data, "#bundle");
    if(return_value_strcmp_6 == 0)
    {
      char *pos;
      signed int remain;
      unsigned int elem_len;
      struct anonymous_3 ts;
      struct anonymous_3 now;
      signed long int bundle_result;
      bundle_result=lo_validate_bundle(data, (signed long int)size);
      if(!(bundle_result >= 0l))
      {
        lo_throw(s, (signed int)-bundle_result, "Invalid bundle", (const char *)(void *)0);
        return (signed int)bundle_result;
      }

      pos = (char *)data + len;
      remain = (signed int)(size - (unsigned long int)len);
      lo_timetag_now(&now);
      ts.sec=htonl(*((unsigned int *)pos));
      pos = pos + (signed long int)4;
      ts.frac=htonl(*((unsigned int *)pos));
      pos = pos + (signed long int)4;
      remain = remain - 8;
      if(!(s->bundle_start_handler == ((signed int (*)(struct anonymous_3, void *))NULL)))
        s->bundle_start_handler(ts, s->bundle_handler_user_data);

      while(remain >= 4)
      {
        struct _lo_message *msg;
        elem_len=htonl(*((unsigned int *)pos));
        pos = pos + (signed long int)4;
        remain = remain - 4;
        signed int return_value_strcmp_5;
        return_value_strcmp_5=strcmp(pos, "#bundle");
        if(return_value_strcmp_5 == 0)
          dispatch_data(s, (void *)pos, (unsigned long int)elem_len, sock);

        else
        {
          msg=lo_message_deserialise((void *)pos, (unsigned long int)elem_len, &result);
          if(msg == ((struct _lo_message *)NULL))
          {
            lo_throw(s, result, "Invalid bundle element received", path);
            return -result;
          }

          msg->ts = ts;
          lo_message_incref(msg);
          if(ts.sec == 0U)
            tmp_if_expr_1 = ts.frac == ((struct anonymous_3){ .sec=0U, .frac=1U }).frac ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_1 = (_Bool)0;
          if(tmp_if_expr_1)
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            return_value_lo_timetag_diff_2=lo_timetag_diff(ts, now);
            tmp_if_expr_3 = return_value_lo_timetag_diff_2 <= 0.0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_3)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = ((signed int)s->flags & LO_SERVER_ENQUEUE) == 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
          {
            dispatch_method(s, pos, msg, sock);
            lo_message_free(msg);
          }

          else
            queue_data(s, ts, pos, msg, sock);
        }
        pos = pos + (signed long int)elem_len;
        remain = remain - (signed int)elem_len;
      }
      if(!(s->bundle_end_handler == ((signed int (*)(void *))NULL)))
        s->bundle_end_handler(s->bundle_handler_user_data);

    }

    else
    {
      struct _lo_message *dispatch_data__1__3__msg;
      dispatch_data__1__3__msg=lo_message_deserialise(data, size, &result);
      if(dispatch_data__1__3__msg == ((struct _lo_message *)NULL))
      {
        lo_throw(s, result, "Invalid message received", path);
        return -result;
      }

      lo_message_incref(dispatch_data__1__3__msg);
      dispatch_method(s, (const char *)data, dispatch_data__1__3__msg, sock);
      lo_message_free(dispatch_data__1__3__msg);
    }
    return (signed int)size;
  }
}

// dispatch_method
// file server.c line 1708
static void dispatch_method(struct _lo_server *s, const char *path, struct _lo_message *msg, signed int sock)
{
  char *types = msg->types + (signed long int)1;
  signed int argc;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(types);
  argc = (signed int)return_value_strlen_1;
  struct _lo_method *it;
  signed int ret = 1;
  signed int pattern;
  char *return_value_strpbrk_2;
  return_value_strpbrk_2=strpbrk(path, " #*,?[]{}");
  pattern = (signed int)(return_value_strpbrk_2 != (char *)(void *)0);
  struct _lo_address *src = ((struct _lo_address *)NULL);
  const char *pptr;
  if(s->protocol == 0x4 && sock >= 0)
    msg->source = &s->sources[(signed long int)sock];

  else
  {
    src=lo_address_new((const char *)(void *)0, (const char *)(void *)0);
    if(!(src->host == ((char *)NULL)))
    {
      free((void *)src->host);
      src->host = ((char *)NULL);
    }

    if(!(src->port == ((char *)NULL)))
    {
      free((void *)src->port);
      src->port = ((char *)NULL);
    }

    src->source_server = s;
    src->source_path = path;
    src->protocol = s->protocol;
    msg->source = src;
  }
  it = s->first;
  _Bool tmp_if_expr_14;
  signed int return_value_strcmp_13;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_16;
  signed int return_value_lo_pattern_match_15;
  _Bool tmp_if_expr_12;
  signed int return_value_strcmp_11;
  signed int return_value_lo_server_should_coerce_args_10;
  signed int return_value_lo_can_coerce_spec_9;
  for( ; !(it == ((struct _lo_method *)NULL)); it = it->next)
  {
    if(it->path == ((const char *)NULL))
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      return_value_strcmp_13=strcmp(path, it->path);
      tmp_if_expr_14 = !(return_value_strcmp_13 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_14)
      tmp_if_expr_17 = (_Bool)1;

    else
    {
      if(!(pattern == 0))
      {
        return_value_lo_pattern_match_15=lo_pattern_match(it->path, path);
        tmp_if_expr_16 = return_value_lo_pattern_match_15 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_16 = (_Bool)0;
      tmp_if_expr_17 = tmp_if_expr_16 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_17)
    {
      if(it->typespec == ((const char *)NULL))
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        return_value_strcmp_11=strcmp(types, it->typespec);
        tmp_if_expr_12 = !(return_value_strcmp_11 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
      {
        pptr = path;
        if(!(it->path == ((const char *)NULL)))
          pptr = it->path;

        ret=it->handler(pptr, types, msg->argv, argc, msg, (void *)it->user_data);
      }

      else
      {
        return_value_lo_server_should_coerce_args_10=lo_server_should_coerce_args(s);
        if(!(return_value_lo_server_should_coerce_args_10 == 0))
        {
          return_value_lo_can_coerce_spec_9=lo_can_coerce_spec(types, it->typespec);
          if(!(return_value_lo_can_coerce_spec_9 == 0))
          {
            union anonymous **argv = (union anonymous **)(void *)0;
            char *data_co = (char *)(void *)0;
            if(argc >= 1)
            {
              signed int i;
              signed int opsize = 0;
              char *ptr = (char *)msg->data;
              char *data_co_ptr = (char *)(void *)0;
              void *return_value_calloc_3;
              return_value_calloc_3=calloc((unsigned long int)argc, sizeof(union anonymous *) /*8ul*/ );
              argv = (union anonymous **)return_value_calloc_3;
              i = 0;
              for( ; !(i >= argc); i = i + 1)
              {
                unsigned long int return_value_lo_arg_size_4;
                return_value_lo_arg_size_4=lo_arg_size((enum anonymous_5)it->typespec[(signed long int)i], (void *)ptr);
                opsize = opsize + (signed int)return_value_lo_arg_size_4;
                unsigned long int return_value_lo_arg_size_5;
                return_value_lo_arg_size_5=lo_arg_size((enum anonymous_5)types[(signed long int)i], (void *)ptr);
                ptr = ptr + (signed long int)return_value_lo_arg_size_5;
              }
              void *return_value_malloc_6;
              return_value_malloc_6=malloc((unsigned long int)opsize);
              data_co = (char *)return_value_malloc_6;
              data_co_ptr = data_co;
              ptr = (char *)msg->data;
              i = 0;
              for( ; !(i >= argc); i = i + 1)
              {
                argv[(signed long int)i] = (union anonymous *)data_co_ptr;
                lo_coerce((enum anonymous_5)it->typespec[(signed long int)i], (union anonymous *)data_co_ptr, (enum anonymous_5)types[(signed long int)i], (union anonymous *)ptr);
                unsigned long int return_value_lo_arg_size_7;
                return_value_lo_arg_size_7=lo_arg_size((enum anonymous_5)it->typespec[(signed long int)i], (void *)data_co_ptr);
                data_co_ptr = data_co_ptr + (signed long int)return_value_lo_arg_size_7;
                unsigned long int return_value_lo_arg_size_8;
                return_value_lo_arg_size_8=lo_arg_size((enum anonymous_5)types[(signed long int)i], (void *)ptr);
                ptr = ptr + (signed long int)return_value_lo_arg_size_8;
              }
            }

            pptr = path;
            if(!(it->path == ((const char *)NULL)))
              pptr = it->path;

            ret=it->handler(pptr, it->typespec, argv, argc, msg, (void *)it->user_data);
            free((void *)argv);
            free((void *)data_co);
            argv = (union anonymous **)(void *)0;
          }

        }

      }
      if(pattern == 0 && ret == 0)
        break;

    }

  }
  signed int return_value_strncmp_24;
  if(ret == 1)
  {
    if(s->protocol == 0x1)
    {
      char *pos;
      pos=strrchr(path, 47);
      if(!(pos == ((char *)NULL)))
      {
        if((signed int)pos[1l] == 0)
        {
          struct _lo_message *reply;
          reply=lo_message_new();
          signed int len;
          unsigned long int return_value_strlen_18;
          return_value_strlen_18=strlen(path);
          len = (signed int)return_value_strlen_18;
          struct _lo_strlist *sl = (struct _lo_strlist *)(void *)0;
          struct _lo_strlist *slit;
          struct _lo_strlist *slnew;
          struct _lo_strlist *slend;
          union anonymous **dispatch_method__1__4__1__argv = msg->argv;
          signed int return_value_strcmp_19;
          return_value_strcmp_19=strcmp(types, "i");
          if(return_value_strcmp_19 == 0)
          {
            if(!(dispatch_method__1__4__1__argv == ((union anonymous **)NULL)))
              lo_message_add_int32(reply, dispatch_method__1__4__1__argv[(signed long int)0]->i);

          }

          lo_message_add_string(reply, path);
          it = s->first;
          for( ; !(it == ((struct _lo_method *)NULL)); it = it->next)
            if(!(it->path == ((const char *)NULL)))
            {
              return_value_strncmp_24=strncmp(path, it->path, (unsigned long int)len);
              if(return_value_strncmp_24 == 0)
              {
                char *tmp;
                char *sec;
                unsigned long int return_value_strlen_20;
                return_value_strlen_20=strlen(it->path + (signed long int)len);
                void *return_value_malloc_21;
                return_value_malloc_21=malloc(return_value_strlen_20 + (unsigned long int)1);
                tmp = (char *)return_value_malloc_21;
                strcpy(tmp, it->path + (signed long int)len);
                sec=index(tmp, 47);
                if(!(sec == ((char *)NULL)))
                  *sec = (char)0;

                slend = sl;
                slit = sl;
                for( ; !(slit == ((struct _lo_strlist *)NULL)); slit = slit->next)
                {
                  signed int return_value_strcmp_22;
                  return_value_strcmp_22=strcmp(slit->str, tmp);
                  if(return_value_strcmp_22 == 0)
                  {
                    free((void *)tmp);
                    tmp = (char *)(void *)0;
                    break;
                  }

                  slend = slit;
                }
                if(!(tmp == ((char *)NULL)))
                {
                  void *return_value_calloc_23;
                  return_value_calloc_23=calloc((unsigned long int)1, sizeof(struct _lo_strlist) /*16ul*/ );
                  slnew = (struct _lo_strlist *)return_value_calloc_23;
                  slnew->str = tmp;
                  slnew->next = (struct _lo_strlist *)(void *)0;
                  if(slend == ((struct _lo_strlist *)NULL))
                    sl = slnew;

                  else
                    slend->next = slnew;
                }

              }

            }

          slit = sl;
          while(!(slit == ((struct _lo_strlist *)NULL)))
          {
            lo_message_add_string(reply, slit->str);
            slnew = slit;
            slit = slit->next;
            free((void *)slnew->str);
            free((void *)slnew);
          }
          lo_send_message(src, "#reply", reply);
          lo_message_free(reply);
        }

      }

    }

  }

  if(!(src == ((struct _lo_address *)NULL)))
    lo_address_free(src);

  msg->source = (struct _lo_address *)(void *)0;
}

// dispatch_queued
// file server.c line 1916
static signed int dispatch_queued(struct _lo_server *s, signed int dispatch_all)
{
  struct anonymous_4 *head = (struct anonymous_4 *)s->queued;
  struct anonymous_4 *tailhead;
  struct anonymous_3 disp_time;
  _Bool tmp_if_expr_2;
  double return_value_lo_timetag_diff_1;
  if(head == ((struct anonymous_4 *)NULL))
  {
    lo_throw(s, 9906, "attempted to dispatch with empty queue", "timeout");
    return 1;
  }

  else
  {
    disp_time = head->ts;
    do
    {
      char *path;
      struct _lo_message *msg;
      signed int sock;
      tailhead = (struct anonymous_4 *)head->next;
      path = ((struct anonymous_4 *)s->queued)->path;
      msg = ((struct anonymous_4 *)s->queued)->msg;
      sock = ((struct anonymous_4 *)s->queued)->sock;
      dispatch_method(s, path, msg, sock);
      free((void *)path);
      lo_message_free(msg);
      free((void *)(struct anonymous_4 *)s->queued);
      s->queued = (void *)tailhead;
      head = tailhead;
      if(!(head == ((struct anonymous_4 *)NULL)))
      {
        return_value_lo_timetag_diff_1=lo_timetag_diff(head->ts, disp_time);
        tmp_if_expr_2 = (return_value_lo_timetag_diff_1 < (double)1.19209289550781250000e-7F ? (_Bool)1 : (dispatch_all != 0 ? (_Bool)1 : (_Bool)0)) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
    }
    while(tmp_if_expr_2);
    return 0;
  }
}

// error
// file example_server.c line 66
void error(signed int num, const char *msg, const char *path)
{
  printf("liblo server error %d in path %s: %s\n", num, path, msg);
  fflush(stdout);
}

// foo_handler
// file example_server.c line 91
signed int foo_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data)
{
  printf("%s <- f:%f, i:%d\n\n", path, argv[(signed long int)0]->f, argv[(signed long int)1]->i);
  fflush(stdout);
  return 0;
}

// generic_handler
// file example_server.c line 74
signed int generic_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data)
{
  signed int i;
  printf("path: <%s>\n", path);
  i = 0;
  for( ; !(i >= argc); i = i + 1)
  {
    printf("arg %d '%c' ", i, types[(signed long int)i]);
    lo_arg_pp((enum anonymous_5)types[(signed long int)i], (void *)argv[(signed long int)i]);
    printf("\n");
  }
  printf("\n");
  fflush(stdout);
  return 1;
}

// get_protocol_name
// file address.c line 231
static const char * get_protocol_name(signed int proto)
{
  switch(proto)
  {
    case 0x1:
      return "udp";
    case 0x4:
      return "tcp";
    case 0x2:
      return "unix";
    default:
      return (const char *)(void *)0;
  }
}

// init_context
// file server.c line 892
static void init_context(struct socket_context *sc)
{
  sc->is_slip = -1;
  sc->buffer = ((char *)NULL);
  sc->buffer_size = (unsigned long int)0;
  sc->buffer_msg_offset = (unsigned int)0;
  sc->buffer_read_offset = (unsigned int)0;
}

// is_in_list
// file bundle.c line 67
static signed int is_in_list(struct _lo_bundle **list, struct _lo_bundle *ptr, unsigned long int *len)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= *len); i = i + 1ul)
    if(list[(signed long int)i] == ptr)
      return -1;

  return 0;
}

// lo_address_copy
// file address.c line 519
void lo_address_copy(struct _lo_address *to, struct _lo_address *from)
{
  memset((void *)to, 0, sizeof(struct _lo_address) /*120ul*/ );
  to->socket = from->socket;
  if(!(from->host == ((char *)NULL)))
  {
    free((void *)to->host);
    to->host=strdup(from->host);
  }

  if(!(from->port == ((char *)NULL)))
  {
    free((void *)to->port);
    to->port=strdup(from->port);
  }

  to->protocol = from->protocol;
  to->ttl = from->ttl;
  to->addr = from->addr;
  if(!(from->addr.iface == ((char *)NULL)))
    to->addr.iface=strdup(from->addr.iface);

}

// lo_address_errno
// file address.c line 317
signed int lo_address_errno(struct _lo_address *a)
{
  return a->errnum;
}

// lo_address_errstr
// file address.c line 322
const char * lo_address_errstr(struct _lo_address *a)
{
  char *msg;
  if(!(a->errstr == ((const char *)NULL)))
    return a->errstr;

  else
    if(a->errnum == 0)
      return "Success";

    else
    {
      msg=strerror(a->errnum);
      if(!(msg == ((char *)NULL)))
        return msg;

      else
        return "unknown error";
      return "unknown error";
    }
}

// lo_address_free
// file address.c line 286
void lo_address_free(struct _lo_address *a)
{
  if(!(a == ((struct _lo_address *)NULL)))
  {
    if(!(a->socket == -1))
    {
      if(!(a->ownsocket == 0))
      {
        shutdown(a->socket, 1);
        close(a->socket);
      }

    }

    lo_address_free_mem(a);
    free((void *)a);
  }

}

// lo_address_free_mem
// file address.c line 300
void lo_address_free_mem(struct _lo_address *a)
{
  if(!(a == ((struct _lo_address *)NULL)))
  {
    if(!(a->host == ((char *)NULL)))
      free((void *)a->host);

    if(!(a->port == ((char *)NULL)))
      free((void *)a->port);

    if(!(a->ai_first == ((struct addrinfo *)NULL)))
      freeaddrinfo(a->ai_first);

    if(!(a->addr.iface == ((char *)NULL)))
      free((void *)a->addr.iface);

    memset((void *)a, 0, sizeof(struct _lo_address) /*120ul*/ );
    a->socket = -1;
  }

}

// lo_address_get_hostname
// file address.c line 198
const char * lo_address_get_hostname(struct _lo_address *a)
{
  if(a == ((struct _lo_address *)NULL))
    return (const char *)(void *)0;

  else
  {
    if(a->host == ((char *)NULL))
      lo_address_resolve_source(a);

    return a->host;
  }
}

// lo_address_get_iface
// file address.c line 820
const char * lo_address_get_iface(struct _lo_address *t)
{
  if(!(t == ((struct _lo_address *)NULL)))
    return t->addr.iface;

  else
    return ((const char *)NULL);
}

// lo_address_get_port
// file address.c line 219
const char * lo_address_get_port(struct _lo_address *a)
{
  if(a == ((struct _lo_address *)NULL))
    return (const char *)(void *)0;

  else
  {
    if(a->host == ((char *)NULL))
      lo_address_resolve_source(a);

    return a->port;
  }
}

// lo_address_get_protocol
// file address.c line 210
signed int lo_address_get_protocol(struct _lo_address *a)
{
  if(a == ((struct _lo_address *)NULL))
    return -1;

  else
    return a->protocol;
}

// lo_address_get_ttl
// file address.c line 474
signed int lo_address_get_ttl(struct _lo_address *t)
{
  return t->ttl;
}

// lo_address_get_url
// file address.c line 247
char * lo_address_get_url(struct _lo_address *a)
{
  char *buf;
  signed int ret = 0;
  signed int needquote = 0;
  const char *fmt;
  if(a->host == ((char *)NULL))
    lo_address_resolve_source(a);

  if(a->host == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    char *return_value_strchr_1;
    return_value_strchr_1=strchr(a->host, 58);
    needquote = return_value_strchr_1 != ((char *)NULL) ? 1 : 0;
    if(!(needquote == 0))
      fmt = "osc.%s://[%s]:%s/";

    else
      fmt = "osc.%s://%s:%s/";
    const char *return_value_get_protocol_name_2;
    return_value_get_protocol_name_2=get_protocol_name(a->protocol);
    ret=snprintf((char *)(void *)0, (unsigned long int)0, fmt, return_value_get_protocol_name_2, a->host, a->port);
    if(!(ret >= 1))
      ret = 1023;

    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)(ret + 2) * sizeof(char) /*1ul*/ );
    buf = (char *)return_value_malloc_3;
    const char *return_value_get_protocol_name_4;
    return_value_get_protocol_name_4=get_protocol_name(a->protocol);
    snprintf(buf, (unsigned long int)(ret + 1), fmt, return_value_get_protocol_name_4, a->host, a->port);
    if(a->protocol == 0x2)
      buf[(signed long int)(ret - 1)] = (char)0;

    return buf;
  }
}

// lo_address_init_with_sockaddr
// file address.c line 540
void lo_address_init_with_sockaddr(struct _lo_address *a, void *sa, unsigned long int sa_len, signed int sock, signed int prot)
{
  signed int err = 0;
  /* assertion a != ((void *)0) */
  assert(a != (struct _lo_address *)(void *)0);
  lo_address_free_mem(a);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)16);
  a->host = (char *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)8);
  a->port = (char *)return_value_malloc_2;
  err=getnameinfo((struct sockaddr *)sa, (unsigned int)sa_len, a->host, (unsigned int)16, a->port, (unsigned int)8, 1 | 2);
  if(!(err == 0))
  {
    free((void *)a->host);
    free((void *)a->port);
    a->port = ((char *)NULL);
    a->host = a->port;
  }

  a->socket = sock;
  a->protocol = prot;
}

// lo_address_new
// file address.c line 98
struct _lo_address * lo_address_new(const char *host, const char *port)
{
  struct _lo_address *return_value_lo_address_new_with_proto_1;
  return_value_lo_address_new_with_proto_1=lo_address_new_with_proto(0x1, host, port);
  return return_value_lo_address_new_with_proto_1;
}

// lo_address_new_from_url
// file address.c line 103
struct _lo_address * lo_address_new_from_url(const char *url)
{
  struct _lo_address *a;
  signed int protocol;
  char *host;
  char *port;
  char *proto;
  _Bool tmp_if_expr_1;
  if(url == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*url != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (struct _lo_address *)(void *)0;

  else
  {
    protocol=lo_url_get_protocol_id(url);
    if(protocol == 0x1 || protocol == 0x4)
    {
      host=lo_url_get_hostname(url);
      port=lo_url_get_port(url);
      a=lo_address_new_with_proto(protocol, host, port);
      if(!(host == ((char *)NULL)))
        free((void *)host);

      if(!(port == ((char *)NULL)))
        free((void *)port);

    }

    else
      if(protocol == 0x2)
      {
        port=lo_url_get_path(url);
        a=lo_address_new_with_proto(0x2, (const char *)(void *)0, port);
        if(!(port == ((char *)NULL)))
          free((void *)port);

      }

      else
      {
        proto=lo_url_get_protocol(url);
        fprintf(stderr, "liblo: protocol '%s' not supported by this version\n", proto);
        if(!(proto == ((char *)NULL)))
          free((void *)proto);

        return (struct _lo_address *)(void *)0;
      }
    return a;
  }
}

// lo_address_new_with_proto
// file address.c line 51
struct _lo_address * lo_address_new_with_proto(signed int proto, const char *host, const char *port)
{
  struct _lo_address *a;
  if(!(proto == 0x1) && !(proto == 0x2) && !(proto == 0x4))
    return (struct _lo_address *)(void *)0;

  else
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _lo_address) /*120ul*/ );
    a = (struct _lo_address *)return_value_calloc_1;
    if(a == ((struct _lo_address *)NULL))
      return (struct _lo_address *)(void *)0;

    else
    {
      a->ai = (struct addrinfo *)(void *)0;
      a->ai_first = (struct addrinfo *)(void *)0;
      a->socket = -1;
      a->ownsocket = 1;
      a->protocol = proto;
      a->flags = (enum anonymous_10)0;
      if(!(proto == 0x1) && !(proto == 0x4))
      {
        if(proto == 0x2)
          goto __CPROVER_DUMP_L6;

      }

      if(!(host == ((const char *)NULL)))
        a->host=strdup(host);

      else
        a->host=strdup("localhost");
      goto __CPROVER_DUMP_L7;

    __CPROVER_DUMP_L6:
      ;
      a->host=strdup("localhost");

    __CPROVER_DUMP_L7:
      ;
      if(!(port == ((const char *)NULL)))
        a->port=strdup(port);

      else
        a->port = (char *)(void *)0;
      a->ttl = -1;
      a->addr.size = (unsigned long int)0;
      a->addr.iface = ((char *)NULL);
      a->source_server = ((struct _lo_server *)NULL);
      a->source_path = ((const char *)NULL);
      return a;
    }
  }
}

// lo_address_resolve
// file address.c line 564
signed int lo_address_resolve(struct _lo_address *a)
{
  signed int ret;
  _Bool tmp_if_expr_2;
  if(a->protocol == 0x1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = a->protocol == 0x4 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    struct addrinfo *ai;
    struct addrinfo hints;
    const char *host;
    host=lo_address_get_hostname(a);
    memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
    hints.ai_family = 2;
    hints.ai_socktype = a->protocol == 0x1 ? 2 : 1;
    const char *return_value_lo_address_get_port_1;
    return_value_lo_address_get_port_1=lo_address_get_port(a);
    ret=getaddrinfo(host, return_value_lo_address_get_port_1, &hints, &ai);
    if(!(ret == 0))
    {
      a->errnum = ret;
      a->errstr=gai_strerror(ret);
      a->ai = (struct addrinfo *)(void *)0;
      a->ai_first = (struct addrinfo *)(void *)0;
      return -1;
    }

    a->ai = ai;
    a->ai_first = ai;
  }

  return 0;
}

// lo_address_resolve_source
// file address.c line 143
static void lo_address_resolve_source(struct _lo_address *a)
{
  char hostname[1024l];
  char portname[32l];
  signed int err;
  struct _lo_server *s = a->source_server;
  _Bool tmp_if_expr_2;
  if(a->protocol == 0x1 && !(s == ((struct _lo_server *)NULL)))
    tmp_if_expr_2 = s->addr_len > (unsigned int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  char *return_value_strerror_1;
  if(tmp_if_expr_2)
  {
    err=getnameinfo((struct sockaddr *)&s->addr, s->addr_len, hostname, (unsigned int)sizeof(char [1024l]) /*1024ul*/ , portname, (unsigned int)sizeof(char [32l]) /*32ul*/ , 1 | 2);
    if(!(err == 0))
    {
      if(!(err == -3))
      {
        if(err == -1)
          goto __CPROVER_DUMP_L4;

        if(err == -4)
          goto __CPROVER_DUMP_L5;

        if(err == -6)
          goto __CPROVER_DUMP_L6;

        if(err == -10)
          goto __CPROVER_DUMP_L7;

        if(err == -2)
          goto __CPROVER_DUMP_L8;

        if(err == -11)
          goto __CPROVER_DUMP_L9;

      }

      else
      {
        lo_throw(s, err, "Try again", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L4:
        ;
        lo_throw(s, err, "Bad flags", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L5:
        ;
        lo_throw(s, err, "Failed", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L6:
        ;
        lo_throw(s, err, "Cannot resolve address family", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L7:
        ;
        lo_throw(s, err, "Out of memory", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L8:
        ;
        lo_throw(s, err, "Cannot resolve", a->source_path);
        goto __CPROVER_DUMP_L11;

      __CPROVER_DUMP_L9:
        ;
        return_value_strerror_1=strerror(err);
        lo_throw(s, err, return_value_strerror_1, a->source_path);
        goto __CPROVER_DUMP_L11;
      }
      lo_throw(s, err, "Unknown error", a->source_path);
      goto __CPROVER_DUMP_L11;

    __CPROVER_DUMP_L11:
      ;
      goto __CPROVER_DUMP_L15;
    }

    a->host=strdup(hostname);
    a->port=strdup(portname);
  }

  else
  {
    a->host=strdup("");
    a->port=strdup("");
  }

__CPROVER_DUMP_L15:
  ;
}

// lo_address_set_flags
// file address.c line 498
static void lo_address_set_flags(struct _lo_address *t, signed int flags)
{
  if(!((LO_NODELAY & (signed int)t->flags) == (LO_NODELAY & flags)))
  {
    if(t->socket >= 1)
    {
      signed int option = (signed int)(((signed int)t->flags & LO_NODELAY) != 0);
      setsockopt(t->socket, 6, 1, (const void *)(const char *)&option, (unsigned int)sizeof(signed int) /*4ul*/ );
    }

  }

  t->flags = (enum anonymous_10)flags;
}

// lo_address_set_iface
// file address.c line 608
signed int lo_address_set_iface(struct _lo_address *t, const char *iface, const char *ip)
{
  signed int fam;
  if(t->ai == ((struct addrinfo *)NULL))
  {
    lo_address_resolve(t);
    if(!(t->ai == ((struct addrinfo *)NULL)))
      goto __CPROVER_DUMP_L1;

    return 2;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    fam = t->ai->ai_family;
    signed int return_value_lo_inaddr_find_iface_1;
    return_value_lo_inaddr_find_iface_1=lo_inaddr_find_iface(&t->addr, fam, iface, ip);
    return return_value_lo_inaddr_find_iface_1;
  }
}

// lo_address_set_stream_slip
// file address.c line 488
signed int lo_address_set_stream_slip(struct _lo_address *t, signed int enable)
{
  signed int r = (signed int)(((signed int)t->flags & LO_SLIP) != 0);
  signed int tmp_if_expr_1;
  if(!(enable == 0))
    tmp_if_expr_1 = (signed int)t->flags | LO_SLIP;

  else
    tmp_if_expr_1 = (signed int)t->flags & ~LO_SLIP;
  lo_address_set_flags(t, tmp_if_expr_1);
  return r;
}

// lo_address_set_tcp_nodelay
// file address.c line 479
signed int lo_address_set_tcp_nodelay(struct _lo_address *t, signed int enable)
{
  signed int r = (signed int)(((signed int)t->flags & LO_NODELAY) != 0);
  signed int tmp_if_expr_1;
  if(!(enable == 0))
    tmp_if_expr_1 = (signed int)t->flags | LO_NODELAY;

  else
    tmp_if_expr_1 = (signed int)t->flags & ~LO_NODELAY;
  lo_address_set_flags(t, tmp_if_expr_1);
  return r;
}

// lo_address_set_ttl
// file address.c line 468
void lo_address_set_ttl(struct _lo_address *t, signed int ttl)
{
  if(t->protocol == 0x1)
    t->ttl = ttl;

}

// lo_arg_host_endian
// file message.c line 706
void lo_arg_host_endian(enum anonymous_5 type, void *data)
{
  unsigned int return_value_htonl_1;
  unsigned int return_value_htonl_2;
  unsigned int return_value_htonl_3;
  unsigned long int return_value_lo_swap64_4;
  switch((signed int)type)
  {
    case LO_INT32:

    case LO_FLOAT:

    case LO_BLOB:

    case LO_CHAR:
    {
      return_value_htonl_1=htonl((unsigned int)*((signed int *)data));
      *((signed int *)data) = (signed int)return_value_htonl_1;
      break;
    }
    case LO_TIMETAG:
    {
      return_value_htonl_2=htonl((unsigned int)*((signed int *)data));
      *((signed int *)data) = (signed int)return_value_htonl_2;
      data = (void *)((signed int *)data + (signed long int)1);
      return_value_htonl_3=htonl((unsigned int)*((signed int *)data));
      *((signed int *)data) = (signed int)return_value_htonl_3;
      break;
    }
    case LO_INT64:

    case LO_DOUBLE:
    {
      return_value_lo_swap64_4=lo_swap64((unsigned long int)*((signed long int *)data));
      *((signed long int *)data) = (signed long int)return_value_lo_swap64_4;
      break;
    }
    case LO_STRING:

    case LO_SYMBOL:

    case LO_MIDI:

    case LO_TRUE:

    case LO_FALSE:

    case LO_NIL:

    case LO_INFINITUM:
      break;
    default:
      fprintf(stderr, "liblo warning: unhandled OSC type '%c' at %s:%d\n", type, (const void *)"message.c", 740);
  }
}

// lo_arg_network_endian
// file message.c line 746
void lo_arg_network_endian(enum anonymous_5 type, void *data)
{
  unsigned int return_value_htonl_1;
  unsigned long int return_value_lo_swap64_2;
  switch((signed int)type)
  {
    case LO_INT32:

    case LO_FLOAT:

    case LO_BLOB:

    case LO_CHAR:
    {
      return_value_htonl_1=htonl((unsigned int)*((signed int *)data));
      *((signed int *)data) = (signed int)return_value_htonl_1;
      break;
    }
    case LO_TIMETAG:
    {
      *((unsigned int *)data)=htonl(*((unsigned int *)data));
      data = (void *)((unsigned int *)data + (signed long int)1);
      *((unsigned int *)data)=htonl(*((unsigned int *)data));
      break;
    }
    case LO_INT64:

    case LO_DOUBLE:
    {
      return_value_lo_swap64_2=lo_swap64((unsigned long int)*((signed long int *)data));
      *((signed long int *)data) = (signed long int)return_value_lo_swap64_2;
      break;
    }
    case LO_STRING:

    case LO_SYMBOL:

    case LO_MIDI:

    case LO_TRUE:

    case LO_FALSE:

    case LO_NIL:

    case LO_INFINITUM:
      break;
    default:
      fprintf(stderr, "liblo warning: unhandled OSC type '%c' at %s:%d\n", type, (const void *)"message.c", 780);
  }
}

// lo_arg_pp
// file ../lo/lo_lowlevel.h line 1054
void lo_arg_pp(enum anonymous_5 type, void *data)
{
  lo_arg_pp_internal(type, data, 0);
}

// lo_arg_pp_internal
// file message.c line 1009
void lo_arg_pp_internal(enum anonymous_5 type, void *data, signed int bigendian)
{
  union anonymous_6 val32;
  union anonymous_7 val64;
  struct anonymous_3 valtt = { .sec=(unsigned int)0, .frac=(unsigned int)1 };
  signed int size;
  signed int i;
  unsigned long int return_value_lo_arg_size_1;
  return_value_lo_arg_size_1=lo_arg_size(type, data);
  size = (signed int)return_value_lo_arg_size_1;
  unsigned int tmp_if_expr_3;
  unsigned int return_value_htonl_2;
  unsigned int tmp_if_expr_5;
  unsigned int return_value_htonl_4;
  if(size == 4 || (signed int)type == LO_BLOB)
  {
    if(!(bigendian == 0))
      val32.nl=htonl((unsigned int)*((signed int *)data));

    else
      val32.nl = (unsigned int)*((signed int *)data);
  }

  else
    if((signed int)type == LO_TIMETAG)
    {
      if(!(bigendian == 0))
      {
        return_value_htonl_2=htonl(*((unsigned int *)data));
        tmp_if_expr_3 = return_value_htonl_2;
      }

      else
        tmp_if_expr_3 = *((unsigned int *)data);
      valtt.sec = tmp_if_expr_3;
      data = (void *)((unsigned int *)data + (signed long int)1);
      if(!(bigendian == 0))
      {
        return_value_htonl_4=htonl(*((unsigned int *)data));
        tmp_if_expr_5 = return_value_htonl_4;
      }

      else
        tmp_if_expr_5 = *((unsigned int *)data);
      valtt.frac = tmp_if_expr_5;
    }

    else
      if(size == 8)
      {
        if(!(bigendian == 0))
          val64.nl=lo_swap64((unsigned long int)*((signed long int *)data));

        else
          val64.nl = (unsigned long int)*((signed long int *)data);
      }

  switch((signed int)type)
  {
    case LO_INT32:
    {
      printf("%d", val32.i);
      break;
    }
    case LO_FLOAT:
    {
      printf("%f", val32.f);
      break;
    }
    case LO_STRING:
    {
      printf("\"%s\"", (char *)data);
      break;
    }
    case LO_BLOB:
    {
      printf("[");
      if(val32.i >= 13)
        printf("%d byte blob", val32.i);

      else
      {
        printf("%db ", val32.i);
        i = 0;
        for( ; !(i >= val32.i); i = i + 1)
        {
          printf("%#02x", (unsigned int)((unsigned char *)data + (signed long int)4)[(signed long int)i]);
          if(!(1 + i >= val32.i))
            printf(" ");

        }
      }
      printf("]");
      break;
    }
    case LO_INT64:
    {
      printf("%lld", (signed long long int)val64.i);
      break;
    }
    case LO_TIMETAG:
    {
      printf("%08x.%08x", valtt.sec, valtt.frac);
      break;
    }
    case LO_DOUBLE:
    {
      printf("%f", val64.f);
      break;
    }
    case LO_SYMBOL:
    {
      printf("'%s", (char *)data);
      break;
    }
    case LO_CHAR:
    {
      printf("'%c'", (char)val32.c);
      break;
    }
    case LO_MIDI:
    {
      printf("MIDI [");
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        printf("0x%02x", ((unsigned char *)data)[(signed long int)i]);
        if(!(1 + i >= 4))
          printf(" ");

      }
      printf("]");
      break;
    }
    case LO_TRUE:
    {
      printf("#T");
      break;
    }
    case LO_FALSE:
    {
      printf("#F");
      break;
    }
    case LO_NIL:
    {
      printf("Nil");
      break;
    }
    case LO_INFINITUM:
    {
      printf("Infinitum");
      break;
    }
    default:
      fprintf(stderr, "liblo warning: unhandled type: %c\n", type);
  }
}

// lo_arg_size
// file message.c line 530
unsigned long int lo_arg_size(enum anonymous_5 type, void *data)
{
  signed int return_value_lo_strsize_1;
  unsigned int return_value_lo_blobsize_2;
  switch((signed int)type)
  {
    case LO_TRUE:

    case LO_FALSE:

    case LO_NIL:

    case LO_INFINITUM:
      return (unsigned long int)0;
    case LO_INT32:

    case LO_FLOAT:

    case LO_MIDI:

    case LO_CHAR:
      return (unsigned long int)4;
    case LO_INT64:

    case LO_TIMETAG:

    case LO_DOUBLE:
      return (unsigned long int)8;
    case LO_STRING:

    case LO_SYMBOL:
    {
      return_value_lo_strsize_1=lo_strsize((char *)data);
      return (unsigned long int)return_value_lo_strsize_1;
    }
    case LO_BLOB:
    {
      return_value_lo_blobsize_2=lo_blobsize((struct _lo_blob *)data);
      return (unsigned long int)return_value_lo_blobsize_2;
    }
    default:
    {
      fprintf(stderr, "liblo warning: unhandled OSC type '%c' at %s:%d\n", type, (const void *)"message.c", 560);
      return (unsigned long int)0;
    }
  }
  return (unsigned long int)0;
}

// lo_blob_dataptr
// file ../lo/lo.h line 217
void * lo_blob_dataptr(struct _lo_blob *b)
{
  return (void *)((char *)b + (signed long int)sizeof(unsigned int) /*4ul*/ );
}

// lo_blob_datasize
// file ../lo/lo.h line 211
unsigned int lo_blob_datasize(struct _lo_blob *b)
{
  return b->size;
}

// lo_blob_free
// file blob.c line 42
void lo_blob_free(struct _lo_blob *b)
{
  free((void *)b);
}

// lo_blob_new
// file blob.c line 23
struct _lo_blob * lo_blob_new(signed int size, const void *data)
{
  struct _lo_blob *b;
  if(!(size >= 1))
    return (struct _lo_blob *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  + (unsigned long int)size);
    b = (struct _lo_blob *)return_value_malloc_1;
    b->size = (unsigned int)size;
    if(!(data == NULL))
      memcpy((void *)((char *)b + (signed long int)sizeof(unsigned int) /*4ul*/ ), data, (unsigned long int)size);

    return b;
  }
}

// lo_blobsize
// file ../lo/lo_lowlevel.h line 962
unsigned int lo_blobsize(struct _lo_blob *b)
{
  const unsigned int len = (const unsigned int)(sizeof(unsigned int) /*4ul*/  + (unsigned long int)b->size);
  return (unsigned int)4 * ((len + (unsigned int)3) / (unsigned int)4);
}

// lo_bundle_add_bundle
// file bundle.c line 176
signed int lo_bundle_add_bundle(struct _lo_bundle *b, struct _lo_bundle *n)
{
  if(n == ((struct _lo_bundle *)NULL))
    return 0;

  else
  {
    signed int return_value_lo_bundle_add_element_1;
    return_value_lo_bundle_add_element_1=lo_bundle_add_element(b, LO_ELEMENT_BUNDLE, (const char *)(void *)0, (void *)n);
    return return_value_lo_bundle_add_element_1;
  }
}

// lo_bundle_add_element
// file bundle.c line 123
static signed int lo_bundle_add_element(struct _lo_bundle *b, signed int type, const char *path, void *elmnt)
{
  if(b->len >= b->size)
  {
    b->size = b->size * (unsigned long int)2;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)b->elmnts, b->size * sizeof(struct _lo_element) /*24ul*/ );
    b->elmnts = (struct _lo_element *)return_value_realloc_1;
    if(b->elmnts == ((struct _lo_element *)NULL))
      return -1;

  }

  (b->elmnts + (signed long int)b->len)->type = (enum anonymous_13)type;
  struct _lo_message *msg;
  struct _lo_bundle *bndl;
  signed int return_value_lo_bundle_circular_2;
  switch(type)
  {
    case LO_ELEMENT_MESSAGE:
    {
      msg = (struct _lo_message *)elmnt;
      lo_message_incref(msg);
      (b->elmnts + (signed long int)b->len)->content.message.msg = msg;
      (b->elmnts + (signed long int)b->len)->content.message.path = path;
      b->len = b->len + 1ul;
      break;
    }
    case LO_ELEMENT_BUNDLE:
    {
      bndl = (struct _lo_bundle *)elmnt;
      lo_bundle_incref(bndl);
      (b->elmnts + (signed long int)b->len)->content.bundle = bndl;
      b->len = b->len + 1ul;
      return_value_lo_bundle_circular_2=lo_bundle_circular(b);
      if(!(return_value_lo_bundle_circular_2 == 0))
      {
        lo_bundle_decref(bndl);
        b->len = b->len - 1ul;
        return -1;
      }

    }
  }
  return 0;
}

// lo_bundle_add_message
// file ../lo/lo_lowlevel.h line 512
signed int lo_bundle_add_message(struct _lo_bundle *b, const char *path, struct _lo_message *m)
{
  if(m == ((struct _lo_message *)NULL))
    return 0;

  else
  {
    signed int return_value_lo_bundle_add_element_1;
    return_value_lo_bundle_add_element_1=lo_bundle_add_element(b, LO_ELEMENT_MESSAGE, path, (void *)m);
    return return_value_lo_bundle_add_element_1;
  }
}

// lo_bundle_circular
// file bundle.c line 108
static signed int lo_bundle_circular(struct _lo_bundle *b)
{
  unsigned long int len = (unsigned long int)0;
  unsigned long int size = (unsigned long int)4;
  signed int res;
  struct _lo_bundle **B;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(size, sizeof(struct _lo_bundle *) /*8ul*/ );
  B = (struct _lo_bundle **)return_value_calloc_1;
  B=walk_tree(B, b, &len, &size, &res);
  if(!(B == ((struct _lo_bundle **)NULL)))
    free((void *)B);

  return res;
}

// lo_bundle_count
// file bundle.c line 216
unsigned int lo_bundle_count(struct _lo_bundle *b)
{
  return (unsigned int)b->len;
}

// lo_bundle_decref
// file bundle.c line 43
static void lo_bundle_decref(struct _lo_bundle *b)
{
  b->refcount = b->refcount - 1;
}

// lo_bundle_free
// file ../lo/lo_lowlevel.h line 598
void lo_bundle_free(struct _lo_bundle *b)
{
  if(!(b == ((struct _lo_bundle *)NULL)))
  {
    lo_bundle_decref(b);
    if(!(b->refcount >= 1))
    {
      free((void *)b->elmnts);
      free((void *)b);
    }

  }

}

// lo_bundle_free_messages
// file bundle.c line 341
void lo_bundle_free_messages(struct _lo_bundle *b)
{
  lo_bundle_free_recursive(b);
}

// lo_bundle_free_recursive
// file bundle.c line 346
void lo_bundle_free_recursive(struct _lo_bundle *b)
{
  unsigned long int i;
  if(!(b == ((struct _lo_bundle *)NULL)))
  {
    lo_bundle_decref(b);
    if(!(b->refcount >= 1))
    {
      i = (unsigned long int)0;
      for( ; !(i >= b->len); i = i + 1ul)
        collect_element(&b->elmnts[(signed long int)i]);
      free((void *)b->elmnts);
      free((void *)b);
    }

  }

}

// lo_bundle_get_bundle
// file bundle.c line 192
struct _lo_bundle * lo_bundle_get_bundle(struct _lo_bundle *b, signed int index)
{
  if(!(index >= (signed int)b->len))
  {
    if(!((signed int)(b->elmnts + (signed long int)index)->type == LO_ELEMENT_BUNDLE))
      goto __CPROVER_DUMP_L1;

    return (b->elmnts + (signed long int)index)->content.bundle;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return ((struct _lo_bundle *)NULL);
  }
}

// lo_bundle_get_message
// file bundle.c line 200
struct _lo_message * lo_bundle_get_message(struct _lo_bundle *b, signed int index, const char **path)
{
  if(!(index >= (signed int)b->len))
  {
    if(!((signed int)(b->elmnts + (signed long int)index)->type == LO_ELEMENT_MESSAGE))
      goto __CPROVER_DUMP_L2;

    if(!(path == ((const char **)NULL)))
      *path = (b->elmnts + (signed long int)index)->content.message.path;

    return (b->elmnts + (signed long int)index)->content.message.msg;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    return ((struct _lo_message *)NULL);
  }
}

// lo_bundle_get_timestamp
// file bundle.c line 211
struct anonymous_3 lo_bundle_get_timestamp(struct _lo_bundle *b)
{
  return b->ts;
}

// lo_bundle_get_type
// file bundle.c line 184
enum anonymous_13 lo_bundle_get_type(struct _lo_bundle *b, signed int index)
{
  if(!(index >= (signed int)b->len))
    return (b->elmnts + (signed long int)index)->type;

  else
    return (enum anonymous_13)0;
}

// lo_bundle_incref
// file bundle.c line 37
void lo_bundle_incref(struct _lo_bundle *b)
{
  b->refcount = b->refcount + 1;
}

// lo_bundle_length
// file bundle.c line 221
unsigned long int lo_bundle_length(struct _lo_bundle *b)
{
  unsigned long int size = (unsigned long int)16;
  unsigned long int i;
  unsigned long int return_value_lo_bundle_length_1;
  unsigned long int return_value_lo_message_length_2;
  if(b == ((struct _lo_bundle *)NULL))
    return (unsigned long int)0;

  else
  {
    size = size + b->len * (unsigned long int)4;
    i = (unsigned long int)0;
    for( ; !(i >= b->len); i = i + 1ul)
      switch((signed int)(b->elmnts + (signed long int)i)->type)
      {
        case LO_ELEMENT_BUNDLE:
        {
          return_value_lo_bundle_length_1=lo_bundle_length((b->elmnts + (signed long int)i)->content.bundle);
          size = size + return_value_lo_bundle_length_1;
          break;
        }
        case LO_ELEMENT_MESSAGE:
        {
          return_value_lo_message_length_2=lo_message_length((b->elmnts + (signed long int)i)->content.message.msg, (b->elmnts + (signed long int)i)->content.message.path);
          size = size + return_value_lo_message_length_2;
        }
      }
    return size;
  }
}

// lo_bundle_new
// file ../lo/lo_lowlevel.h line 492
struct _lo_bundle * lo_bundle_new(struct anonymous_3 tt)
{
  struct _lo_bundle *b;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _lo_bundle) /*40ul*/ );
  b = (struct _lo_bundle *)return_value_calloc_1;
  b->size = (unsigned long int)4;
  b->len = (unsigned long int)0;
  b->ts = tt;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc(b->size, sizeof(struct _lo_element) /*24ul*/ );
  b->elmnts = (struct _lo_element *)return_value_calloc_2;
  b->refcount = 0;
  return b;
}

// lo_bundle_pp
// file bundle.c line 410
void lo_bundle_pp(struct _lo_bundle *b)
{
  unsigned long int len;
  signed int *state;
  if(!(b == ((struct _lo_bundle *)NULL)))
  {
    len = (unsigned long int)4;
    void *return_value_calloc_1;
    return_value_calloc_1=calloc(len, sizeof(signed int) /*4ul*/ );
    state = (signed int *)return_value_calloc_1;
    state[(signed long int)0] = 1;
    state=lo_bundle_pp_internal(b, 0, state, &len);
    free((void *)state);
  }

}

// lo_bundle_pp_internal
// file bundle.c line 381
static signed int * lo_bundle_pp_internal(struct _lo_bundle *b, signed int offset, signed int *state, unsigned long int *len)
{
  unsigned long int i;
  if(!(*len >= (unsigned long int)(2 + offset)))
  {
    *len = *len * (unsigned long int)2;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)state, *len * sizeof(signed int) /*4ul*/ );
    state = (signed int *)return_value_realloc_1;
  }

  offset_pp(offset, state);
  printf("bundle─┬─(%08x.%08x)\n", b->ts.sec, b->ts.frac);
  i = (unsigned long int)0;
  for( ; !(i >= b->len); i = i + 1ul)
  {
    state[(signed long int)(offset + 1)] = i != b->len - (unsigned long int)1 ? 0 : 1;
    switch((signed int)(b->elmnts + (signed long int)i)->type)
    {
      case LO_ELEMENT_MESSAGE:
      {
        offset_pp(offset + 1, state);
        printf("%s ", (b->elmnts + (signed long int)i)->content.message.path);
        lo_message_pp((b->elmnts + (signed long int)i)->content.message.msg);
        break;
      }
      case LO_ELEMENT_BUNDLE:
        state=lo_bundle_pp_internal((b->elmnts + (signed long int)i)->content.bundle, offset + 1, state, len);
    }
  }
  return state;
}

// lo_bundle_serialise
// file ../lo/lo_lowlevel.h line 591
void * lo_bundle_serialise(struct _lo_bundle *b, void *to, unsigned long int *size)
{
  unsigned long int s;
  unsigned long int skip;
  signed int *bes;
  unsigned long int i;
  char *pos;
  union anonymous_6 be;
  if(b == ((struct _lo_bundle *)NULL))
  {
    if(!(size == ((unsigned long int *)NULL)))
      *size = (unsigned long int)0;

    return (void *)0;
  }

  else
  {
    s=lo_bundle_length(b);
    if(!(size == ((unsigned long int *)NULL)))
      *size = s;

    if(to == NULL)
      to=calloc((unsigned long int)1, s);

    pos = (char *)to;
    strcpy(pos, "#bundle");
    pos = pos + (signed long int)8;
    be.nl=htonl(b->ts.sec);
    memcpy((void *)pos, (const void *)&be, (unsigned long int)4);
    pos = pos + (signed long int)4;
    be.nl=htonl(b->ts.frac);
    memcpy((void *)pos, (const void *)&be, (unsigned long int)4);
    pos = pos + (signed long int)4;
    i = (unsigned long int)0;
    for( ; !(i >= b->len); i = i + 1ul)
    {
      switch((signed int)(b->elmnts + (signed long int)i)->type)
      {
        case LO_ELEMENT_MESSAGE:
        {
          lo_message_serialise((b->elmnts + (signed long int)i)->content.message.msg, (b->elmnts + (signed long int)i)->content.message.path, (void *)(pos + (signed long int)4), &skip);
          break;
        }
        case LO_ELEMENT_BUNDLE:
          lo_bundle_serialise((b->elmnts + (signed long int)i)->content.bundle, (void *)(pos + (signed long int)4), &skip);
      }
      bes = (signed int *)(void *)pos;
      unsigned int return_value_htonl_1;
      return_value_htonl_1=htonl((unsigned int)skip);
      *bes = (signed int)return_value_htonl_1;
      pos = pos + (signed long int)(skip + (unsigned long int)4);
      if(!((char *)to + (signed long int)s >= pos))
      {
        fprintf(stderr, "liblo: data integrity error at message %lu\n", (unsigned long int)i);
        return (void *)0;
      }

    }
    if(!(pos == (char *)to + (signed long int)s))
    {
      fprintf(stderr, "liblo: data integrity error\n");
      if(!(to == NULL))
        free(to);

      return (void *)0;
    }

    else
      return to;
  }
}

// lo_can_coerce
// file server.c line 2152
static signed int lo_can_coerce(char a, char b)
{
  _Bool tmp_if_expr_4;
  signed int return_value_lo_is_numerical_type_1;
  _Bool tmp_if_expr_3;
  signed int return_value_lo_is_numerical_type_2;
  if(a == b)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_lo_is_numerical_type_1=lo_is_numerical_type((enum anonymous_5)a);
    if(!(return_value_lo_is_numerical_type_1 == 0))
    {
      return_value_lo_is_numerical_type_2=lo_is_numerical_type((enum anonymous_5)b);
      tmp_if_expr_3 = return_value_lo_is_numerical_type_2 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_8;
  signed int return_value_lo_is_string_type_5;
  _Bool tmp_if_expr_7;
  signed int return_value_lo_is_string_type_6;
  if(tmp_if_expr_4)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_lo_is_string_type_5=lo_is_string_type((enum anonymous_5)a);
    if(!(return_value_lo_is_string_type_5 == 0))
    {
      return_value_lo_is_string_type_6=lo_is_string_type((enum anonymous_5)b);
      tmp_if_expr_7 = return_value_lo_is_string_type_6 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
  }
  return (signed int)tmp_if_expr_8;
}

// lo_can_coerce_spec
// file server.c line 2135
static signed int lo_can_coerce_spec(const char *a, const char *b)
{
  unsigned int i;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(a);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(b);
  if(!(return_value_strlen_1 == return_value_strlen_2))
    return 0;

  else
  {
    i = (unsigned int)0;
    for( ; !(a[(signed long int)i] == 0); i = i + 1u)
    {
      signed int return_value_lo_can_coerce_3;
      return_value_lo_can_coerce_3=lo_can_coerce(a[(signed long int)i], b[(signed long int)i]);
      if(return_value_lo_can_coerce_3 == 0)
        return 0;

    }
    return 1;
  }
}

// lo_coerce
// file message.c line 1128
signed int lo_coerce(enum anonymous_5 type_to, union anonymous *to, enum anonymous_5 type_from, union anonymous *from)
{
  if(type_to == type_from)
  {
    unsigned long int return_value_lo_arg_size_1;
    return_value_lo_arg_size_1=lo_arg_size(type_from, (void *)from);
    memcpy((void *)to, (const void *)from, return_value_lo_arg_size_1);
    return 1;
  }

  signed int return_value_lo_is_string_type_3;
  return_value_lo_is_string_type_3=lo_is_string_type(type_to);
  signed int return_value_lo_is_string_type_2;
  signed int return_value_lo_is_numerical_type_8;
  long double return_value_lo_hires_val_4;
  long double return_value_lo_hires_val_5;
  long double return_value_lo_hires_val_6;
  long double return_value_lo_hires_val_7;
  if(!(return_value_lo_is_string_type_3 == 0))
  {
    return_value_lo_is_string_type_2=lo_is_string_type(type_from);
    if(return_value_lo_is_string_type_2 == 0)
      goto __CPROVER_DUMP_L2;

    strcpy((char *)to, (char *)from);
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    signed int return_value_lo_is_numerical_type_9;
    return_value_lo_is_numerical_type_9=lo_is_numerical_type(type_to);
    if(!(return_value_lo_is_numerical_type_9 == 0))
    {
      return_value_lo_is_numerical_type_8=lo_is_numerical_type(type_from);
      if(return_value_lo_is_numerical_type_8 == 0)
        goto __CPROVER_DUMP_L9;

      switch((signed int)type_to)
      {
        case LO_INT32:
        {
          return_value_lo_hires_val_4=lo_hires_val(type_from, from);
          to->i = (signed int)(unsigned int)return_value_lo_hires_val_4;
          break;
        }
        case LO_INT64:
        {
          return_value_lo_hires_val_5=lo_hires_val(type_from, from);
          to->i64 = (signed long int)(unsigned long int)return_value_lo_hires_val_5;
          break;
        }
        case LO_FLOAT:
        {
          return_value_lo_hires_val_6=lo_hires_val(type_from, from);
          to->f = (float)return_value_lo_hires_val_6;
          break;
        }
        case LO_DOUBLE:
        {
          return_value_lo_hires_val_7=lo_hires_val(type_from, from);
          to->d = (double)return_value_lo_hires_val_7;
          break;
        }
        default:
        {
          fprintf(stderr, "liblo: bad coercion: %c -> %c\n", type_from, type_to);
          return 0;
        }
      }
      return 1;
    }

    else
    {

    __CPROVER_DUMP_L9:
      ;
      return 0;
    }
  }
}

// lo_error_get_context
// file server.c line 2180
void * lo_error_get_context()
{
  return lo_error_context;
}

// lo_get_path
// file message.c line 567
char * lo_get_path(void *data, signed long int size)
{
  signed long int result;
  result=lo_validate_string(data, size);
  return result >= (signed long int)4 ? (char *)data : (char *)(void *)0;
}

// lo_hires_val
// file message.c line 1172
long double lo_hires_val(enum anonymous_5 type, union anonymous *p)
{
  switch((signed int)type)
  {
    case LO_INT32:
      return (long double)p->i;
    case LO_INT64:
      return (long double)p->h;
    case LO_FLOAT:
      return (long double)p->f;
    case LO_DOUBLE:
      return (long double)p->d;
    default:
    {
      fprintf(stderr, "liblo: hires val requested of non numerical type '%c' at %s:%d\n", type, (const void *)"message.c", 1186);
      return 0.0l;
    }
  }
}

// lo_inaddr_find_iface
// file address.c line 621
signed int lo_inaddr_find_iface(struct _lo_inaddr *t, signed int fam, const char *iface, const char *ip)
{
  /* tag-#anon#lUN[lSYM#tag-in_addr#'addr'|] */
union anonymous_12
{
  // addr
  struct in_addr addr;
};

/* */
  ;
  union anonymous_12 a;
  if(!(ip == ((const char *)NULL)))
  {
    signed int rc;
    rc=inet_pton(fam, ip, (void *)&a);
    if(!(rc == 1))
      return rc < 0 ? 3 : 4;

  }

  struct ifaddrs *ifa;
  struct ifaddrs *ifa_list;
  signed int return_value_getifaddrs_1;
  return_value_getifaddrs_1=getifaddrs(&ifa_list);
  signed int return_value_strcmp_3;
  if(return_value_getifaddrs_1 == -1)
    return 5;

  else
  {
    ifa = ifa_list;
    signed int found = 0;
    while(!(ifa == ((struct ifaddrs *)NULL)))
      if(ifa->ifa_addr == ((struct sockaddr *)NULL))
        ifa = ifa->ifa_next;

      else
      {
        if(!(ip == ((const char *)NULL)))
        {
          if((signed int)ifa->ifa_addr->sa_family == 2)
          {
            if(fam == 2)
            {
              signed int return_value_memcmp_2;
              return_value_memcmp_2=memcmp((const void *)&((struct sockaddr_in *)ifa->ifa_addr)->sin_addr, (const void *)&a.addr, sizeof(struct in_addr) /*4ul*/ );
              if(return_value_memcmp_2 == 0)
              {
                found = 1;
                t->size = sizeof(struct in_addr) /*4ul*/ ;
                memcpy((void *)&t->a, (const void *)&a, t->size);
                break;
              }

            }

          }

        }

        if(!(iface == ((const char *)NULL)))
        {
          if((signed int)ifa->ifa_addr->sa_family == fam)
          {
            return_value_strcmp_3=strcmp(ifa->ifa_name, iface);
            if(return_value_strcmp_3 == 0)
            {
              if(fam == 2)
              {
                found = 1;
                t->size = sizeof(struct in_addr) /*4ul*/ ;
                memcpy((void *)&t->a, (const void *)&((struct sockaddr_in *)ifa->ifa_addr)->sin_addr, t->size);
                break;
              }

            }

          }

        }

        ifa = ifa->ifa_next;
      }
    if(!(found == 0))
    {
      if(!(ifa->ifa_name == ((char *)NULL)))
      {
        if(!(t->iface == ((char *)NULL)))
          free((void *)t->iface);

        t->iface=strdup(ifa->ifa_name);
      }

    }

    freeifaddrs(ifa_list);
    return (signed int)!(found != 0);
  }
}

// lo_is_numerical_type
// file message.c line 1118
signed int lo_is_numerical_type(enum anonymous_5 a)
{
  char *return_value_strchr_1;
  return_value_strchr_1=strchr(lo_numerical_types, (signed int)a);
  return (signed int)(return_value_strchr_1 != ((char *)NULL));
}

// lo_is_string_type
// file message.c line 1123
signed int lo_is_string_type(enum anonymous_5 a)
{
  char *return_value_strchr_1;
  return_value_strchr_1=strchr(lo_string_types, (signed int)a);
  return (signed int)(return_value_strchr_1 != ((char *)NULL));
}

// lo_message_add_blob
// file message.c line 353
signed int lo_message_add_blob(struct _lo_message *m, struct _lo_blob *a)
{
  unsigned int size;
  size=lo_blobsize(a);
  unsigned int dsize;
  dsize=lo_blob_datasize(a);
  char *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, (unsigned long int)size);
  nptr = (char *)return_value_lo_message_add_data_1;
  if(nptr == ((char *)NULL))
    return -1;

  else
  {
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_BLOB);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      memset((void *)((nptr + (signed long int)size) - (signed long int)4), 0, (unsigned long int)4);
      memcpy((void *)nptr, (const void *)&dsize, sizeof(const unsigned int) /*4ul*/ );
      void *return_value_lo_blob_dataptr_3;
      return_value_lo_blob_dataptr_3=lo_blob_dataptr(a);
      unsigned int return_value_lo_blob_datasize_4;
      return_value_lo_blob_datasize_4=lo_blob_datasize(a);
      memcpy((void *)(nptr + (signed long int)sizeof(signed int) /*4ul*/ ), return_value_lo_blob_dataptr_3, (unsigned long int)return_value_lo_blob_datasize_4);
      return 0;
    }
  }
}

// lo_message_add_char
// file message.c line 426
signed int lo_message_add_char(struct _lo_message *m, char a)
{
  union anonymous_6 b;
  signed int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(signed int) /*4ul*/ );
  nptr = (signed int *)return_value_lo_message_add_data_1;
  if(nptr == ((signed int *)NULL))
    return -1;

  else
  {
    b.i = 0;
    b.c = a;
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_CHAR);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = (signed int)b.nl;
      return 0;
    }
  }
}

// lo_message_add_data
// file message.c line 498
static void * lo_message_add_data(struct _lo_message *m, unsigned long int s)
{
  unsigned int old_dlen = (unsigned int)m->datalen;
  signed int new_datasize = (signed int)m->datasize;
  signed int new_datalen = (signed int)(m->datalen + s);
  void *new_data = NULL;
  if(new_datasize == 0)
    new_datasize = 8;

  signed int tmp_if_expr_2;
  double return_value_log_1;
  if(!(new_datasize >= new_datalen))
  {
    return_value_log_1=log((double)new_datalen / (double)new_datasize);
    tmp_if_expr_2 = new_datasize << (signed int)(return_value_log_1 / 0.69315 + (double)1);
  }

  else
    tmp_if_expr_2 = new_datasize;
  new_datasize = tmp_if_expr_2;
  new_data=realloc(m->data, (unsigned long int)new_datasize);
  if(new_data == NULL)
    return NULL;

  else
  {
    m->datalen = (unsigned long int)new_datalen;
    m->datasize = (unsigned long int)new_datasize;
    m->data = new_data;
    if(!(m->argv == ((union anonymous **)NULL)))
    {
      free((void *)m->argv);
      m->argv = (union anonymous **)(void *)0;
    }

    return (void *)((char *)m->data + (signed long int)old_dlen);
  }
}

// lo_message_add_double
// file message.c line 399
signed int lo_message_add_double(struct _lo_message *m, double a)
{
  union anonymous_7 b;
  unsigned long int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(double) /*8ul*/ );
  nptr = (unsigned long int *)return_value_lo_message_add_data_1;
  if(nptr == ((unsigned long int *)NULL))
    return -1;

  else
  {
    b.f = a;
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_DOUBLE);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = b.nl;
      return 0;
    }
  }
}

// lo_message_add_false
// file message.c line 460
signed int lo_message_add_false(struct _lo_message *m)
{
  signed int return_value_lo_message_add_typechar_1;
  return_value_lo_message_add_typechar_1=lo_message_add_typechar(m, (char)LO_FALSE);
  return return_value_lo_message_add_typechar_1;
}

// lo_message_add_float
// file message.c line 326
signed int lo_message_add_float(struct _lo_message *m, float a)
{
  union anonymous_6 b;
  signed int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(float) /*4ul*/ );
  nptr = (signed int *)return_value_lo_message_add_data_1;
  if(nptr == ((signed int *)NULL))
    return -1;

  else
  {
    b.f = a;
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_FLOAT);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = (signed int)b.nl;
      return 0;
    }
  }
}

// lo_message_add_infinitum
// file message.c line 470
signed int lo_message_add_infinitum(struct _lo_message *m)
{
  signed int return_value_lo_message_add_typechar_1;
  return_value_lo_message_add_typechar_1=lo_message_add_typechar(m, (char)LO_INFINITUM);
  return return_value_lo_message_add_typechar_1;
}

// lo_message_add_int32
// file message.c line 312
signed int lo_message_add_int32(struct _lo_message *m, signed int a)
{
  union anonymous_6 b;
  signed int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(signed int) /*4ul*/ );
  nptr = (signed int *)return_value_lo_message_add_data_1;
  if(nptr == ((signed int *)NULL))
    return -1;

  else
  {
    b.i = a;
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_INT32);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = (signed int)b.nl;
      return 0;
    }
  }
}

// lo_message_add_int64
// file message.c line 371
signed int lo_message_add_int64(struct _lo_message *m, signed long int a)
{
  union anonymous_7 b;
  unsigned long int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(signed long int) /*8ul*/ );
  nptr = (unsigned long int *)return_value_lo_message_add_data_1;
  if(nptr == ((unsigned long int *)NULL))
    return -1;

  else
  {
    b.i = a;
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_INT64);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = b.nl;
      return 0;
    }
  }
}

// lo_message_add_internal
// file message.c line 304
signed int lo_message_add_internal(struct _lo_message *msg, const char *file, const signed int line, const char *types, ...)
{
  void **ap = (void **)&types;
  signed int return_value_lo_message_add_varargs_internal_1;
  return_value_lo_message_add_varargs_internal_1=lo_message_add_varargs_internal(msg, types, ap, file, line);
  return return_value_lo_message_add_varargs_internal_1;
}

// lo_message_add_midi
// file message.c line 442
signed int lo_message_add_midi(struct _lo_message *m, unsigned char *a)
{
  char *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, (unsigned long int)4);
  nptr = (char *)return_value_lo_message_add_data_1;
  if(nptr == ((char *)NULL))
    return -1;

  else
  {
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_MIDI);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      memcpy((void *)nptr, (const void *)a, (unsigned long int)4 * sizeof(unsigned char) /*1ul*/ );
      return 0;
    }
  }
}

// lo_message_add_nil
// file message.c line 465
signed int lo_message_add_nil(struct _lo_message *m)
{
  signed int return_value_lo_message_add_typechar_1;
  return_value_lo_message_add_typechar_1=lo_message_add_typechar(m, (char)LO_NIL);
  return return_value_lo_message_add_typechar_1;
}

// lo_message_add_string
// file message.c line 340
signed int lo_message_add_string(struct _lo_message *m, const char *a)
{
  signed int size;
  size=lo_strsize(a);
  char *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, (unsigned long int)size);
  nptr = (char *)return_value_lo_message_add_data_1;
  if(nptr == ((char *)NULL))
    return -1;

  else
  {
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_STRING);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      strncpy(nptr, a, (unsigned long int)size);
      return 0;
    }
  }
}

// lo_message_add_symbol
// file message.c line 413
signed int lo_message_add_symbol(struct _lo_message *m, const char *a)
{
  signed int size;
  size=lo_strsize(a);
  char *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, (unsigned long int)size);
  nptr = (char *)return_value_lo_message_add_data_1;
  if(nptr == ((char *)NULL))
    return -1;

  else
  {
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_SYMBOL);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      strncpy(nptr, a, (unsigned long int)size);
      return 0;
    }
  }
}

// lo_message_add_timetag
// file message.c line 385
signed int lo_message_add_timetag(struct _lo_message *m, struct anonymous_3 a)
{
  unsigned int *nptr;
  void *return_value_lo_message_add_data_1;
  return_value_lo_message_add_data_1=lo_message_add_data(m, sizeof(struct anonymous_3) /*8ul*/ );
  nptr = (unsigned int *)return_value_lo_message_add_data_1;
  if(nptr == ((unsigned int *)NULL))
    return -1;

  else
  {
    signed int return_value_lo_message_add_typechar_2;
    return_value_lo_message_add_typechar_2=lo_message_add_typechar(m, (char)LO_TIMETAG);
    if(!(return_value_lo_message_add_typechar_2 == 0))
      return -1;

    else
    {
      *nptr = a.sec;
      nptr = nptr + 1l;
      *nptr = a.frac;
      return 0;
    }
  }
}

// lo_message_add_true
// file message.c line 455
signed int lo_message_add_true(struct _lo_message *m)
{
  signed int return_value_lo_message_add_typechar_1;
  return_value_lo_message_add_typechar_1=lo_message_add_typechar(m, (char)LO_TRUE);
  return return_value_lo_message_add_typechar_1;
}

// lo_message_add_typechar
// file message.c line 475
static signed int lo_message_add_typechar(struct _lo_message *m, char t)
{
  if(1ul + m->typelen >= m->typesize)
  {
    signed int new_typesize = (signed int)(m->typesize * (unsigned long int)2);
    char *new_types = ((char *)NULL);
    if(new_typesize == 0)
      new_typesize = 8;

    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)m->types, (unsigned long int)new_typesize);
    new_types = (char *)return_value_realloc_1;
    if(new_types == ((char *)NULL))
      return -1;

    m->types = new_types;
    m->typesize = (unsigned long int)new_typesize;
  }

  m->types[(signed long int)m->typelen] = t;
  m->typelen = m->typelen + 1ul;
  m->types[(signed long int)m->typelen] = (char)0;
  if(!(m->argv == ((union anonymous **)NULL)))
  {
    free((void *)m->argv);
    m->argv = (union anonymous **)(void *)0;
  }

  return 0;
}

// lo_message_add_varargs_internal
// file ../lo/lo_lowlevel.h line 173
signed int lo_message_add_varargs_internal(struct _lo_message *msg, const char *types, __builtin_va_list ap, const char *file, signed int line)
{
  signed int count = 0;
  signed int ret = 0;
  const char *tmp_post_1;
  signed int i;
  float f;
  double return_value_gcc_builtin_va_arg_2;
  char *lo_message_add_varargs_internal__1__1__1__3__s;
  struct _lo_blob *b;
  signed long int i64;
  struct anonymous_3 tt;
  double d;
  char *s;
  char c;
  signed int return_value_gcc_builtin_va_arg_3;
  unsigned char *m;
  while(!(types == ((const char *)NULL)))
  {
    if(*types == 0)
      break;

    count = count + 1;
    tmp_post_1 = types;
    types = types + 1l;
    switch((signed int)*tmp_post_1)
    {
      case LO_INT32:
      {
        i=va_arg(ap, __typeof__(i));
        lo_message_add_int32(msg, i);
        break;
      }
      case LO_FLOAT:
      {
        return_value_gcc_builtin_va_arg_2=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg_2));
        f = (float)return_value_gcc_builtin_va_arg_2;
        lo_message_add_float(msg, f);
        break;
      }
      case LO_STRING:
      {
        lo_message_add_varargs_internal__1__1__1__3__s=va_arg(ap, __typeof__(lo_message_add_varargs_internal__1__1__1__3__s));
        if(lo_message_add_varargs_internal__1__1__1__3__s == (char *)0xdeadbeefdeadbeefL)
          fprintf(stderr, "liblo error: lo_send or lo_message_add called with invalid string pointer for arg %d, probably arg mismatch\nat %s:%d, exiting.\n", count, file, line);

        lo_message_add_string(msg, lo_message_add_varargs_internal__1__1__1__3__s);
        break;
      }
      case LO_BLOB:
      {
        b=va_arg(ap, __typeof__(b));
        lo_message_add_blob(msg, b);
        break;
      }
      case LO_INT64:
      {
        i64=va_arg(ap, __typeof__(i64));
        lo_message_add_int64(msg, i64);
        break;
      }
      case LO_TIMETAG:
      {
        tt=va_arg(ap, __typeof__(tt));
        lo_message_add_timetag(msg, tt);
        break;
      }
      case LO_DOUBLE:
      {
        d=va_arg(ap, __typeof__(d));
        lo_message_add_double(msg, d);
        break;
      }
      case LO_SYMBOL:
      {
        s=va_arg(ap, __typeof__(s));
        if(s == (char *)0xdeadbeefdeadbeefL)
        {
          fprintf(stderr, "liblo error: lo_send or lo_message_add called with invalid symbol pointer for arg %d, probably arg mismatch\nat %s:%d, exiting.\n", count, file, line);
          va_end(ap);
          return -2;
        }

        lo_message_add_symbol(msg, s);
        break;
      }
      case LO_CHAR:
      {
        return_value_gcc_builtin_va_arg_3=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg_3));
        c = (char)return_value_gcc_builtin_va_arg_3;
        lo_message_add_char(msg, c);
        break;
      }
      case LO_MIDI:
      {
        m=va_arg(ap, __typeof__(m));
        lo_message_add_midi(msg, m);
        break;
      }
      case LO_TRUE:
      {
        lo_message_add_true(msg);
        break;
      }
      case LO_FALSE:
      {
        lo_message_add_false(msg);
        break;
      }
      case LO_NIL:
      {
        lo_message_add_nil(msg);
        break;
      }
      case LO_INFINITUM:
      {
        lo_message_add_infinitum(msg);
        break;
      }
      case 36:
        if((signed int)*types == 36)
        {
          va_end(ap);
          return 0;
        }

      default:
      {
        ret = -1;
        fprintf(stderr, "liblo warning: unknown type '%c' at %s:%d\n", *(types - (signed long int)1), file, line);
      }
    }
  }
  void *lo_message_add_varargs_internal__1__i;
  lo_message_add_varargs_internal__1__i=va_arg(ap, __typeof__(lo_message_add_varargs_internal__1__i));
  if(!((0xFFFFFFFFUL & (unsigned long int)lo_message_add_varargs_internal__1__i) == 3735928559ul))
  {
    ret = -2;
    fprintf(stderr, "liblo error: lo_send, lo_message_add, or lo_message_add_varargs called with mismatching types and data at\n%s:%d, exiting.\n", file, line);
    va_end(ap);
    return ret;
  }

  else
  {
    lo_message_add_varargs_internal__1__i=va_arg(ap, __typeof__(lo_message_add_varargs_internal__1__i));
    if(!((0xFFFFFFFFUL & (unsigned long int)lo_message_add_varargs_internal__1__i) == 4027296291ul))
    {
      ret = -2;
      fprintf(stderr, "liblo error: lo_send, lo_message_add, or lo_message_add_varargs called with mismatching types and data at\n%s:%d, exiting.\n", file, line);
    }

    va_end(ap);
    return ret;
  }
}

// lo_message_clone
// file message.c line 94
struct _lo_message * lo_message_clone(struct _lo_message *m)
{
  struct _lo_message *c;
  if(m == ((struct _lo_message *)NULL))
    return (struct _lo_message *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _lo_message) /*80ul*/ );
    c = (struct _lo_message *)return_value_malloc_1;
    if(c == ((struct _lo_message *)NULL))
      return (struct _lo_message *)(void *)0;

    else
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc(m->typesize, sizeof(char) /*1ul*/ );
      c->types = (char *)return_value_calloc_2;
      strcpy(c->types, m->types);
      c->typelen = m->typelen;
      c->typesize = m->typesize;
      c->data=calloc(m->datasize, sizeof(unsigned char) /*1ul*/ );
      memcpy(c->data, m->data, m->datalen);
      c->datalen = m->datalen;
      c->datasize = m->datasize;
      c->source = (struct _lo_address *)(void *)0;
      c->argv = (union anonymous **)(void *)0;
      c->ts = (struct anonymous_3){ .sec=0U, .frac=1U };
      c->refcount = 0;
      return c;
    }
  }
}

// lo_message_deserialise
// file message.c line 868
struct _lo_message * lo_message_deserialise(void *data, unsigned long int size, signed int *result)
{
  struct _lo_message *msg = (struct _lo_message *)(void *)0;
  char *types = (char *)(void *)0;
  char *ptr = (char *)(void *)0;
  signed int i = 0;
  signed int argc = 0;
  signed int remain = (signed int)size;
  signed int res = 0;
  signed int len;
  void *return_value_malloc_1;
  signed long int return_value_lo_validate_string_2;
  signed long int return_value_lo_validate_string_3;
  void *return_value_malloc_4;
  if(!(remain >= 1))
    res = 9911;

  else
  {
    return_value_malloc_1=malloc(sizeof(struct _lo_message) /*80ul*/ );
    msg = (struct _lo_message *)return_value_malloc_1;
    if(msg == ((struct _lo_message *)NULL))
      res = 9907;

    else
    {
      msg->types = (char *)(void *)0;
      msg->typelen = (unsigned long int)0;
      msg->typesize = (unsigned long int)0;
      msg->data = (void *)0;
      msg->datalen = (unsigned long int)0;
      msg->datasize = (unsigned long int)0;
      msg->source = (struct _lo_address *)(void *)0;
      msg->argv = (union anonymous **)(void *)0;
      msg->ts = (struct anonymous_3){ .sec=0U, .frac=1U };
      msg->refcount = 0;
      return_value_lo_validate_string_2=lo_validate_string(data, (signed long int)remain);
      len = (signed int)return_value_lo_validate_string_2;
      if(!(len >= 0))
        res = 9908;

      else
      {
        remain = remain - len;
        if(!(remain >= 1))
          res = 9902;

        else
        {
          types = (char *)data + (signed long int)len;
          return_value_lo_validate_string_3=lo_validate_string((void *)types, (signed long int)remain);
          len = (signed int)return_value_lo_validate_string_3;
          if(!(len >= 0))
            res = 9909;

          else
            if(!((signed int)*types == 44))
              res = 9910;

            else
            {
              remain = remain - len;
              msg->typelen=strlen(types);
              msg->typesize = (unsigned long int)len;
              return_value_malloc_4=malloc(msg->typesize);
              msg->types = (char *)return_value_malloc_4;
              if(msg->types == ((char *)NULL))
                res = 9907;

              else
              {
                memcpy((void *)msg->types, (const void *)types, msg->typesize);
                msg->data=malloc((unsigned long int)remain);
                if(msg->data == NULL)
                  res = 9907;

                else
                {
                  memcpy(msg->data, (const void *)(types + (signed long int)len), (unsigned long int)remain);
                  msg->datasize = (unsigned long int)remain;
                  msg->datalen = msg->datasize;
                  ptr = (char *)msg->data;
                  types = types + 1l;
                  argc = (signed int)(msg->typelen - (unsigned long int)1);
                  if(!(argc == 0))
                  {
                    void *return_value_calloc_5;
                    return_value_calloc_5=calloc((unsigned long int)argc, sizeof(union anonymous *) /*8ul*/ );
                    msg->argv = (union anonymous **)return_value_calloc_5;
                    if(msg->argv == ((union anonymous **)NULL))
                    {
                      res = 9907;
                      goto fail;
                    }

                  }

                  i = 0;
                  for( ; remain >= 0 && !(i >= argc); i = i + 1)
                  {
                    signed long int return_value_lo_validate_arg_6;
                    return_value_lo_validate_arg_6=lo_validate_arg((enum anonymous_5)types[(signed long int)i], (void *)ptr, (signed long int)remain);
                    len = (signed int)return_value_lo_validate_arg_6;
                    if(!(len >= 0))
                    {
                      res = 9912;
                      goto fail;
                    }

                    lo_arg_host_endian((enum anonymous_5)types[(signed long int)i], (void *)ptr);
                    msg->argv[(signed long int)i] = len != 0 ? (union anonymous *)ptr : (union anonymous *)(void *)0;
                    remain = remain - len;
                    ptr = ptr + (signed long int)len;
                  }
                  if(!(i == argc) || !(remain == 0))
                    res = 9911;

                  else
                  {
                    if(!(result == ((signed int *)NULL)))
                      *result = res;

                    return msg;
                  }
                }
              }
            }
        }
      }
    }
  }

fail:
  ;
  if(!(msg == ((struct _lo_message *)NULL)))
    lo_message_free(msg);

  if(!(result == ((signed int *)NULL)))
    *result = res;

  return (struct _lo_message *)(void *)0;
}

// lo_message_free
// file ../lo/lo_lowlevel.h line 131
void lo_message_free(struct _lo_message *m)
{
  if(!(m == ((struct _lo_message *)NULL)))
  {
    m->refcount = m->refcount - 1;
    if(!(m->refcount >= 1))
    {
      free((void *)m->types);
      free(m->data);
      free((void *)m->argv);
      free((void *)m);
    }

  }

}

// lo_message_get_argc
// file message.c line 800
signed int lo_message_get_argc(struct _lo_message *m)
{
  return (signed int)(m->typelen - (unsigned long int)1);
}

// lo_message_get_argv
// file message.c line 805
union anonymous ** lo_message_get_argv(struct _lo_message *m)
{
  signed int i;
  signed int argc;
  char *types;
  char *ptr;
  union anonymous **argv;
  if(!(m->argv == ((union anonymous **)NULL)))
    return m->argv;

  else
  {
    argc = (signed int)(m->typelen - (unsigned long int)1);
    types = m->types + (signed long int)1;
    ptr = (char *)m->data;
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)argc, sizeof(union anonymous *) /*8ul*/ );
    argv = (union anonymous **)return_value_calloc_1;
    i = 0;
    for( ; !(i >= argc); i = i + 1)
    {
      unsigned long int len;
      len=lo_arg_size((enum anonymous_5)types[(signed long int)i], (void *)ptr);
      argv[(signed long int)i] = len != 0ul ? (union anonymous *)ptr : (union anonymous *)(void *)0;
      ptr = ptr + (signed long int)len;
    }
    m->argv = argv;
    return argv;
  }
}

// lo_message_get_source
// file message.c line 785
struct _lo_address * lo_message_get_source(struct _lo_message *m)
{
  return m->source;
}

// lo_message_get_timestamp
// file message.c line 790
struct anonymous_3 lo_message_get_timestamp(struct _lo_message *m)
{
  return m->ts;
}

// lo_message_get_types
// file message.c line 829
char * lo_message_get_types(struct _lo_message *m)
{
  return m->types + (signed long int)1;
}

// lo_message_incref
// file message.c line 89
void lo_message_incref(struct _lo_message *m)
{
  m->refcount = m->refcount + 1;
}

// lo_message_length
// file ../lo/lo_lowlevel.h line 334
unsigned long int lo_message_length(struct _lo_message *m, const char *path)
{
  signed int return_value_lo_strsize_1;
  return_value_lo_strsize_1=lo_strsize(path);
  signed int return_value_lo_strsize_2;
  return_value_lo_strsize_2=lo_strsize(m->types);
  return (unsigned long int)(return_value_lo_strsize_1 + return_value_lo_strsize_2) + m->datalen;
}

// lo_message_new
// file ../lo/lo_lowlevel.h line 110
struct _lo_message * lo_message_new()
{
  struct _lo_message *m;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _lo_message) /*80ul*/ );
  m = (struct _lo_message *)return_value_malloc_1;
  if(m == ((struct _lo_message *)NULL))
    return m;

  else
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)8, sizeof(char) /*1ul*/ );
    m->types = (char *)return_value_calloc_2;
    m->types[(signed long int)0] = (char)44;
    m->types[(signed long int)1] = (char)0;
    m->typelen = (unsigned long int)1;
    m->typesize = (unsigned long int)8;
    m->data = (void *)0;
    m->datalen = (unsigned long int)0;
    m->datasize = (unsigned long int)0;
    m->source = (struct _lo_address *)(void *)0;
    m->argv = (union anonymous **)(void *)0;
    m->ts = (struct anonymous_3){ .sec=0U, .frac=1U };
    m->refcount = 0;
    return m;
  }
}

// lo_message_pp
// file message.c line 981
void lo_message_pp(struct _lo_message *m)
{
  void *d = m->data;
  void *end = (void *)((char *)m->data + (signed long int)m->datalen);
  signed int i;
  printf("%s ", m->types);
  i = 1;
  for( ; !(m->types[(signed long int)i] == 0); i = i + 1)
  {
    if(i >= 2)
      printf(" ");

    lo_arg_pp_internal((enum anonymous_5)m->types[(signed long int)i], d, 0);
    unsigned long int return_value_lo_arg_size_1;
    return_value_lo_arg_size_1=lo_arg_size((enum anonymous_5)m->types[(signed long int)i], d);
    d = (void *)((char *)d + (signed long int)return_value_lo_arg_size_1);
  }
  putchar(10);
  if(!(d == end))
  {
    signed int return_value_abs_2;
    return_value_abs_2=abs((signed int)((char *)d - (char *)end));
    fprintf(stderr, "liblo warning: type and data do not match (off by %d) in message %p\n", return_value_abs_2, m);
  }

}

// lo_message_serialise
// file ../lo/lo_lowlevel.h line 350
void * lo_message_serialise(struct _lo_message *m, const char *path, void *to, unsigned long int *size)
{
  signed int i;
  signed int argc;
  char *types;
  char *ptr;
  unsigned long int s;
  s=lo_message_length(m, path);
  if(!(size == ((unsigned long int *)NULL)))
    *size = s;

  if(to == NULL)
    to=calloc((unsigned long int)1, s);

  signed int return_value_lo_strsize_1;
  return_value_lo_strsize_1=lo_strsize(path);
  memset((void *)(((char *)to + (signed long int)return_value_lo_strsize_1) - (signed long int)4), 0, (unsigned long int)4);
  strcpy((char *)to, path);
  signed int return_value_lo_strsize_2;
  return_value_lo_strsize_2=lo_strsize(path);
  signed int return_value_lo_strsize_3;
  return_value_lo_strsize_3=lo_strsize(m->types);
  memset((void *)(((char *)to + (signed long int)return_value_lo_strsize_2 + (signed long int)return_value_lo_strsize_3) - (signed long int)4), 0, (unsigned long int)4);
  signed int return_value_lo_strsize_4;
  return_value_lo_strsize_4=lo_strsize(path);
  strcpy((char *)to + (signed long int)return_value_lo_strsize_4, m->types);
  types = m->types + (signed long int)1;
  signed int return_value_lo_strsize_5;
  return_value_lo_strsize_5=lo_strsize(path);
  signed int return_value_lo_strsize_6;
  return_value_lo_strsize_6=lo_strsize(m->types);
  ptr = (char *)to + (signed long int)return_value_lo_strsize_5 + (signed long int)return_value_lo_strsize_6;
  memcpy((void *)ptr, m->data, m->datalen);
  argc = (signed int)(m->typelen - (unsigned long int)1);
  i = 0;
  for( ; !(i >= argc); i = i + 1)
  {
    unsigned long int len;
    len=lo_arg_size((enum anonymous_5)types[(signed long int)i], (void *)ptr);
    lo_arg_network_endian((enum anonymous_5)types[(signed long int)i], (void *)ptr);
    ptr = ptr + (signed long int)len;
  }
  return to;
}

// lo_method_pp
// file method.c line 22
void lo_method_pp(struct _lo_method *m)
{
  lo_method_pp_prefix(m, "");
}

// lo_method_pp_prefix
// file ../lo/lo_lowlevel.h line 1064
void lo_method_pp_prefix(struct _lo_method *m, const char *p)
{
  printf("%spath:      %s\n", p, m->path);
  printf("%stypespec:  %s\n", p, m->typespec);
  printf("%shandler:   %p\n", p, m->handler);
  printf("%suser-data: %p\n", p, m->user_data);
}

// lo_pattern_match
// file ../lo/lo_lowlevel.h line 970
signed int lo_pattern_match(const char *str, const char *p)
{
  signed int negate;
  signed int match;
  char c;
  const char *tmp_post_1;
  const char *tmp_post_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  const char *tmp_post_7;
  const char *tmp_post_8;
  const char *tmp_post_9;
  const char *tmp_post_10;
  const char *tmp_post_12;
  for( ; !(*p == 0); str = str + 1l)
  {
    if(*str == 0)
    {
      if(!((signed int)*p == 42))
        return 0;

    }

    tmp_post_1 = p;
    p = p + 1l;
    c = *tmp_post_1;
    switch((signed int)c)
    {
      case 42:
      {
        for( ; (signed int)*p == 42; p = p + 1l)
          if((signed int)*p == 47)
            break;

        if(*p == 0)
          return 1;

        if(!((signed int)*p == 63))
        {
          if(!((signed int)*p == 91))
          {
            if(!((signed int)*p == 123))
              for( ; !(*str == 0); str = str + 1l)
                if(*p == *str)
                  break;


          }

        }

        while(!(*str == 0))
        {
          signed int return_value_lo_pattern_match_2;
          return_value_lo_pattern_match_2=lo_pattern_match(str, p);
          if(!(return_value_lo_pattern_match_2 == 0))
            return 1;

          str = str + 1l;
        }
        return 0;
      }
      case 63:
      {
        if(!(*str == 0))
          break;

        return 0;
      }
      case 91:
      {
        if(!((signed int)*p == 33))
          negate = 0;

        else
        {
          negate = 1;
          p = p + 1l;
        }
        match = 0;
        while(match == 0)
        {
          tmp_post_3 = p;
          p = p + 1l;
          c = *tmp_post_3;
          if(c == 0)
            break;

          if(*p == 0)
            return 0;

          if((signed int)*p == 45)
          {
            p = p + 1l;
            if(*p == 0)
              return 0;

            if(!((signed int)*p == 93))
            {
              if(*str == c)
                tmp_if_expr_4 = (_Bool)1;

              else
                tmp_if_expr_4 = *str == *p ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_4)
                tmp_if_expr_6 = (_Bool)1;

              else
              {
                if(!((signed int)c >= (signed int)*str))
                  tmp_if_expr_5 = (signed int)*str < (signed int)*p ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_5 = (_Bool)0;
                tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_6)
                match = 1;

            }

            else
            {
              if((signed int)*str >= (signed int)c)
                match = 1;

              break;
            }
          }

          else
          {
            if(c == *str)
              match = 1;

            if(!((signed int)*p == 93))
            {
              if(*p == *str)
                match = 1;

            }

            else
              break;
          }
        }
        if(negate == match)
          return 0;

        for( ; !(*p == 0); p = p + 1l)
          if((signed int)*p == 93)
            break;

        tmp_post_7 = p;
        p = p + 1l;
        if(*tmp_post_7 == 0)
          return 0;

        break;
      }
      case 123:
      {
        const char *place = str;
        const char *remainder = p;
        for( ; !(*remainder == 0); remainder = remainder + 1l)
          if((signed int)*remainder == 125)
            break;

        tmp_post_8 = remainder;
        remainder = remainder + 1l;
        if(*tmp_post_8 == 0)
          return 0;

        tmp_post_9 = p;
        p = p + 1l;
        c = *tmp_post_9;
        for( ; !(c == 0); c = *tmp_post_12)
        {
          if((signed int)c == 44)
          {
            signed int return_value_lo_pattern_match_11;
            return_value_lo_pattern_match_11=lo_pattern_match(str, remainder);
            if(!(return_value_lo_pattern_match_11 == 0))
              return 1;

            else
            {
              str = place;
              tmp_post_10 = p;
              p = p + 1l;
              if(*tmp_post_10 == 0)
                return 0;

            }
          }

          else
            if((signed int)c == 125)
            {
              if(*p == 0)
              {
                if(*str == 0)
                  return 1;

              }

              str = str - 1l;
              break;
            }

            else
              if(c == *str)
              {
                str = str + 1l;
                if(*str == 0)
                {
                  if(!(*remainder == 0))
                    return 0;

                }

              }

              else
              {
                str = place;
                for( ; !((signed int)*p == 44); p = p + 1l)
                {
                  if((signed int)*p == 125)
                    break;

                  if(*p == 0)
                    break;

                }
                if((signed int)*p == 44)
                  p = p + 1l;

                else
                  if((signed int)*p == 125)
                    return 0;

              }
          tmp_post_12 = p;
          p = p + 1l;
        }
        break;
      }
      default:
        if(!(c == *str))
          return 0;

    }
  }
  return (signed int)!(*str != 0);
}

// lo_send_bundle
// file send.c line 580
signed int lo_send_bundle(struct _lo_address *a, struct _lo_bundle *b)
{
  signed int return_value_lo_send_bundle_from_1;
  return_value_lo_send_bundle_from_1=lo_send_bundle_from(a, (struct _lo_server *)(void *)0, b);
  return return_value_lo_send_bundle_from_1;
}

// lo_send_bundle_from
// file send.c line 586
signed int lo_send_bundle_from(struct _lo_address *a, struct _lo_server *from, struct _lo_bundle *b)
{
  unsigned long int data_len;
  char *data;
  void *return_value_lo_bundle_serialise_1;
  return_value_lo_bundle_serialise_1=lo_bundle_serialise(b, (void *)0, &data_len);
  data = (char *)return_value_lo_bundle_serialise_1;
  signed int ret;
  ret=send_data(a, from, data, data_len);
  if(!(data == ((char *)NULL)))
    free((void *)data);

  return ret;
}

// lo_send_from_internal
// file send.c line 225
signed int lo_send_from_internal(struct _lo_address *to, struct _lo_server *from, const char *file, const signed int line, const struct anonymous_3 ts, const char *path, const char *types, ...)
{
  void **ap = (void **)&types;
  signed int return_value_lo_send_from_varargs_internal_1;
  return_value_lo_send_from_varargs_internal_1=lo_send_from_varargs_internal(to, from, file, line, ts, path, types, ap);
  return return_value_lo_send_from_varargs_internal_1;
}

// lo_send_from_varargs_internal
// file send.c line 174
static signed int lo_send_from_varargs_internal(struct _lo_address *to, struct _lo_server *from, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, void **ap)
{
  struct _lo_bundle *b = (struct _lo_bundle *)(void *)0;
  signed int ret;
  struct _lo_message *msg;
  msg=lo_message_new();
  _Bool tmp_if_expr_1;
  if(!(ts.sec == 0U))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ts.frac != ((struct anonymous_3){ .sec=0U, .frac=1U }).frac ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    b=lo_bundle_new(ts);

  to->errnum = 0;
  to->errstr = (const char *)(void *)0;
  ret=lo_message_add_varargs_internal(msg, types, ap, file, line);
  if(ret == 0)
  {
    if(!(b == ((struct _lo_bundle *)NULL)))
    {
      lo_bundle_add_message(b, path, msg);
      ret=lo_send_bundle_from(to, from, b);
    }

    else
      ret=lo_send_message_from(to, from, path, msg);
  }

  lo_message_free(msg);
  if(!(b == ((struct _lo_bundle *)NULL)))
    lo_bundle_free(b);

  return ret;
}

// lo_send_internal
// file send.c line 113
signed int lo_send_internal(struct _lo_address *t, const char *file, const signed int line, const char *path, const char *types, ...)
{
  void **ap = (void **)&types;
  signed int return_value_lo_send_varargs_internal_1;
  return_value_lo_send_varargs_internal_1=lo_send_varargs_internal(t, file, line, path, types, ap);
  return return_value_lo_send_varargs_internal_1;
}

// lo_send_message
// file send.c line 552
signed int lo_send_message(struct _lo_address *a, const char *path, struct _lo_message *msg)
{
  signed int return_value_lo_send_message_from_1;
  return_value_lo_send_message_from_1=lo_send_message_from(a, (struct _lo_server *)(void *)0, path, msg);
  return return_value_lo_send_message_from_1;
}

// lo_send_message_from
// file send.c line 557
signed int lo_send_message_from(struct _lo_address *a, struct _lo_server *from, const char *path, struct _lo_message *msg)
{
  unsigned long int data_len;
  data_len=lo_message_length(msg, path);
  char *data;
  void *return_value_lo_message_serialise_1;
  return_value_lo_message_serialise_1=lo_message_serialise(msg, path, (void *)0, (unsigned long int *)(void *)0);
  data = (char *)return_value_lo_message_serialise_1;
  signed int ret;
  ret=send_data(a, from, data, data_len);
  if(ret == -1)
  {
    if(a->protocol == 0x4)
      ret=send_data(a, from, data, data_len);

  }

  if(!(data == ((char *)NULL)))
    free((void *)data);

  return ret;
}

// lo_send_timestamped_internal
// file send.c line 163
signed int lo_send_timestamped_internal(struct _lo_address *t, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, ...)
{
  void **ap = (void **)&types;
  signed int return_value_lo_send_timestamped_varargs_internal_1;
  return_value_lo_send_timestamped_varargs_internal_1=lo_send_timestamped_varargs_internal(t, file, line, ts, path, types, ap);
  return return_value_lo_send_timestamped_varargs_internal_1;
}

// lo_send_timestamped_varargs_internal
// file send.c line 122
static signed int lo_send_timestamped_varargs_internal(struct _lo_address *t, const char *file, const signed int line, struct anonymous_3 ts, const char *path, const char *types, void **ap)
{
  signed int ret;
  struct _lo_message *msg;
  msg=lo_message_new();
  struct _lo_bundle *b;
  b=lo_bundle_new(ts);
  t->errnum = 0;
  t->errstr = (const char *)(void *)0;
  ret=lo_message_add_varargs_internal(msg, types, ap, file, line);
  if(ret == 0)
  {
    lo_bundle_add_message(b, path, msg);
    ret=lo_send_bundle(t, b);
  }

  lo_message_free(msg);
  lo_bundle_free(b);
  return ret;
}

// lo_send_varargs_internal
// file send.c line 71
static signed int lo_send_varargs_internal(struct _lo_address *t, const char *file, const signed int line, const char *path, const char *types, void **ap)
{
  signed int ret;
  struct _lo_message *msg;
  msg=lo_message_new();
  t->errnum = 0;
  t->errstr = (const char *)(void *)0;
  ret=lo_message_add_varargs_internal(msg, types, ap, file, line);
  if(!(ret == 0))
  {
    lo_message_free(msg);
    t->errnum = ret;
    if(ret == -1)
      t->errstr = "unknown type";

    else
      t->errstr = "bad format/args";
    return ret;
  }

  else
  {
    ret=lo_send_message(t, path, msg);
    lo_message_free(msg);
    return ret;
  }
}

// lo_server_add_bundle_handlers
// file server.c line 2038
signed int lo_server_add_bundle_handlers(struct _lo_server *s, signed int (*sh)(struct anonymous_3, void *), signed int (*eh)(void *), void *user_data)
{
  s->bundle_start_handler = sh;
  s->bundle_end_handler = eh;
  s->bundle_handler_user_data = user_data;
  return 0;
}

// lo_server_add_method
// file server.c line 1951
struct _lo_method * lo_server_add_method(struct _lo_server *s, const char *path, const char *typespec, signed int (*h)(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *), void *user_data)
{
  struct _lo_method *m;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _lo_method) /*40ul*/ );
  m = (struct _lo_method *)return_value_calloc_1;
  struct _lo_method *it;
  char *return_value_strpbrk_2;
  if(!(path == ((const char *)NULL)))
  {
    return_value_strpbrk_2=strpbrk(path, " #*,?[]{}");
    if(return_value_strpbrk_2 == ((char *)NULL))
      goto __CPROVER_DUMP_L2;

    if(!(m == ((struct _lo_method *)NULL)))
      free((void *)m);

    return (struct _lo_method *)(void *)0;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if(!(path == ((const char *)NULL)))
      m->path=strdup(path);

    else
      m->path = (const char *)(void *)0;
    if(!(typespec == ((const char *)NULL)))
      m->typespec=strdup(typespec);

    else
      m->typespec = (const char *)(void *)0;
    m->handler = h;
    m->user_data = (char *)user_data;
    m->next = (struct _lo_method *)(void *)0;
    if(s->first == ((struct _lo_method *)NULL))
      s->first = m;

    else
    {
      it = s->first;
      for( ; !(it->next == ((struct _lo_method *)NULL)); it = it->next)
        ;
      it->next = m;
    }
    return m;
  }
}

// lo_server_add_socket
// file lo_internal.h line 83
signed int lo_server_add_socket(struct _lo_server *s, signed int socket, struct _lo_address *a, struct sockaddr_storage *addr, unsigned int addr_len)
{
  fcntl(socket, 4, 04000, 1);
  if(!(s->sockets_alloc >= 1 + s->sockets_len))
  {
    void *sc;
    void *sp;
    sp=realloc((void *)s->sockets, sizeof(struct pollfd) /*8ul*/  * (unsigned long int)(s->sockets_alloc * 2));
    if(sp == NULL)
      return -1;

    s->sockets = (struct pollfd *)sp;
    memset((void *)((char *)sp + (signed long int)((unsigned long int)s->sockets_alloc * sizeof(struct pollfd) /*8ul*/ )), 0, (unsigned long int)s->sockets_alloc * sizeof(struct pollfd) /*8ul*/ );
    sc=realloc((void *)s->contexts, sizeof(struct socket_context) /*32ul*/  * (unsigned long int)(s->sockets_alloc * 2));
    if(sc == NULL)
      return -1;

    s->contexts = (struct socket_context *)sc;
    memset((void *)((char *)sc + (signed long int)((unsigned long int)s->sockets_alloc * sizeof(struct socket_context) /*32ul*/ )), 0, (unsigned long int)s->sockets_alloc * sizeof(struct socket_context) /*32ul*/ );
    s->sockets_alloc = s->sockets_alloc * 2;
  }

  (s->sockets + (signed long int)s->sockets_len)->fd = socket;
  s->sockets_len = s->sockets_len + 1;
  if(socket >= s->sources_len)
  {
    signed int L = socket * 2;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)s->sources, sizeof(struct _lo_address) /*120ul*/  * (unsigned long int)L);
    s->sources = (struct _lo_address *)return_value_realloc_1;
    memset((void *)(s->sources + (signed long int)s->sources_len), 0, sizeof(struct _lo_address) /*120ul*/  * (unsigned long int)(L - s->sources_len));
    s->sources_len = L;
  }

  if(!(a == ((struct _lo_address *)NULL)))
    lo_address_copy(&s->sources[(signed long int)socket], a);

  else
    lo_address_init_with_sockaddr(&s->sources[(signed long int)socket], (void *)addr, (unsigned long int)addr_len, socket, 0x4);
  return s->sockets_len - 1;
}

// lo_server_buffer_contains_msg
// file server.c line 912
static unsigned int lo_server_buffer_contains_msg(struct _lo_server *s, signed int isock)
{
  struct socket_context *sc = &s->contexts[(signed long int)isock];
  if((unsigned long int)sc->buffer_read_offset >= 5ul)
  {
    unsigned int msg_len;
    msg_len=ntohl(*((unsigned int *)sc->buffer));
    return (unsigned long int)msg_len + sizeof(unsigned int) /*4ul*/  <= (unsigned long int)sc->buffer_read_offset ? msg_len : (unsigned int)0;
  }

  return (unsigned int)0;
}

// lo_server_buffer_copy_for_dispatch
// file server.c line 925
static void * lo_server_buffer_copy_for_dispatch(struct _lo_server *s, signed int isock, unsigned long int *psize)
{
  void *data;
  struct socket_context *sc = &s->contexts[(signed long int)isock];
  unsigned int msg_len;
  msg_len=lo_server_buffer_contains_msg(s, isock);
  if(msg_len == 0u)
    return (void *)0;

  else
  {
    data=malloc((unsigned long int)msg_len);
    memcpy(data, (const void *)(sc->buffer + (signed long int)sizeof(unsigned int) /*4ul*/ ), (unsigned long int)msg_len);
    *psize = (unsigned long int)msg_len;
    sc->buffer_read_offset = sc->buffer_read_offset - (unsigned int)((unsigned long int)msg_len + sizeof(unsigned int) /*4ul*/ );
    sc->buffer_msg_offset = sc->buffer_msg_offset - (unsigned int)((unsigned long int)msg_len + sizeof(unsigned int) /*4ul*/ );
    if(sc->buffer_read_offset >= 1u)
      memmove((void *)sc->buffer, (const void *)(sc->buffer + (signed long int)msg_len + (signed long int)sizeof(unsigned int) /*4ul*/ ), (unsigned long int)sc->buffer_read_offset);

    return data;
  }
}

// lo_server_del_method
// file server.c line 1993
void lo_server_del_method(struct _lo_server *s, const char *path, const char *typespec)
{
  struct _lo_method *it;
  struct _lo_method *prev;
  struct _lo_method *next;
  signed int pattern = 0;
  char *return_value_strpbrk_1;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_12;
  signed int return_value_lo_pattern_match_11;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(!(s->first == ((struct _lo_method *)NULL)))
  {
    if(!(path == ((const char *)NULL)))
    {
      return_value_strpbrk_1=strpbrk(path, " #*,?[]{}");
      pattern = (signed int)(return_value_strpbrk_1 != (char *)(void *)0);
    }

    it = s->first;
    prev = it;
    while(!(it == ((struct _lo_method *)NULL)))
    {
      next = it->next;
      if(it->path == path)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        if(!(path == ((const char *)NULL)))
          tmp_if_expr_6 = it->path != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
        {
          return_value_strcmp_7=strcmp(path, it->path);
          tmp_if_expr_8 = !(return_value_strcmp_7 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_8 = (_Bool)0;
        tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        tmp_if_expr_13 = (_Bool)1;

      else
      {
        if(!(pattern == 0))
          tmp_if_expr_10 = it->path != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_10 = (_Bool)0;
        if(tmp_if_expr_10)
        {
          return_value_lo_pattern_match_11=lo_pattern_match(it->path, path);
          tmp_if_expr_12 = return_value_lo_pattern_match_11 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_12 = (_Bool)0;
        tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_13)
      {
        if(it->typespec == typespec)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          if(!(typespec == ((const char *)NULL)))
            tmp_if_expr_2 = it->typespec != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_2 = (_Bool)0;
          if(tmp_if_expr_2)
          {
            return_value_strcmp_3=strcmp(typespec, it->typespec);
            tmp_if_expr_4 = !(return_value_strcmp_3 != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
        {
          if(it == s->first)
            s->first = it->next;

          else
            prev->next = it->next;
          next = it->next;
          free((void *)it->path);
          free((void *)it->typespec);
          free((void *)it);
          it = prev;
        }

      }

      prev = it;
      if(!(it == ((struct _lo_method *)NULL)))
        it = next;

    }
  }

}

// lo_server_del_socket
// file lo_internal.h line 93
void lo_server_del_socket(struct _lo_server *s, signed int index, signed int socket)
{
  signed int i;
  if(!(socket == -1) && !(index >= 0))
  {
    index = 0;
    for( ; !(index >= s->sockets_len); index = index + 1)
      if((s->sockets + (signed long int)index)->fd == socket)
        break;

  }

  _Bool tmp_if_expr_1;
  if(!(index >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = index >= s->sockets_len ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    lo_address_free_mem(&s->sources[(signed long int)(s->sockets + (signed long int)index)->fd]);
    cleanup_context(&s->contexts[(signed long int)index]);
    i = index + 1;
    for( ; !(i >= s->sockets_len); i = i + 1)
      s->sockets[(signed long int)(i - 1)] = s->sockets[(signed long int)i];
    s->sockets_len = s->sockets_len - 1;
  }

}

// lo_server_dispatch_data
// file server.c line 1684
signed int lo_server_dispatch_data(struct _lo_server *s, void *data, unsigned long int size)
{
  signed int return_value_dispatch_data_1;
  return_value_dispatch_data_1=dispatch_data(s, data, size, -1);
  return return_value_dispatch_data_1;
}

// lo_server_enable_coercion
// file server.c line 694
signed int lo_server_enable_coercion(struct _lo_server *s, signed int enable)
{
  signed int r = (signed int)(((signed int)s->flags & LO_SERVER_COERCE) != 0);
  s->flags = (enum anonymous_2)((signed int)s->flags & ~LO_SERVER_COERCE | (enable != 0 ? LO_SERVER_COERCE : 0));
  return r;
}

// lo_server_enable_queue
// file server.c line 781
signed int lo_server_enable_queue(struct _lo_server *s, signed int enable, signed int dispatch_remaining)
{
  signed int prev = (signed int)(((signed int)s->flags & LO_SERVER_ENQUEUE) != 0);
  s->flags = (enum anonymous_2)((signed int)s->flags & ~LO_SERVER_ENQUEUE | (enable != 0 ? LO_SERVER_ENQUEUE : 0));
  if(enable == 0 && !(dispatch_remaining == 0))
  {
    if(!(s->queued == NULL))
      dispatch_queued(s, 1);

  }

  return prev;
}

// lo_server_events_pending
// file server.c line 1873
signed int lo_server_events_pending(struct _lo_server *s)
{
  return (signed int)(s->queued != NULL);
}

// lo_server_free
// file server.c line 707
void lo_server_free(struct _lo_server *s)
{
  _Bool tmp_if_expr_1;
  if(!(s == ((struct _lo_server *)NULL)))
  {
    struct _lo_method *it;
    struct _lo_method *next;
    signed int i = s->sockets_len - 1;
    for( ; i >= 0; i = i - 1)
      if(!((s->sockets + (signed long int)i)->fd == -1))
      {
        if(s->protocol == 0x1)
          tmp_if_expr_1 = (s->sockets + (signed long int)i)->fd == lo_client_sockets.udp ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          lo_client_sockets.udp = -1;

        else
          if(s->protocol == 0x4)
          {
            if((s->sockets + (signed long int)i)->fd == lo_client_sockets.tcp)
              lo_client_sockets.tcp = -1;

          }

        close((s->sockets + (signed long int)i)->fd);
        (s->sockets + (signed long int)i)->fd = -1;
      }

    if(!(s->ai == ((struct addrinfo *)NULL)))
    {
      freeaddrinfo(s->ai);
      s->ai = (struct addrinfo *)(void *)0;
    }

    if(!(s->hostname == ((char *)NULL)))
    {
      free((void *)s->hostname);
      s->hostname = (char *)(void *)0;
    }

    if(!(s->path == ((char *)NULL)))
    {
      if(s->protocol == 0x2)
        unlink(s->path);

      free((void *)s->path);
      s->path = (char *)(void *)0;
    }

    while(!(s->queued == NULL))
    {
      struct anonymous_4 *q = (struct anonymous_4 *)s->queued;
      free((void *)q->path);
      lo_message_free(q->msg);
      s->queued = q->next;
      free((void *)q);
    }
    it = s->first;
    for( ; !(it == ((struct _lo_method *)NULL)); it = next)
    {
      next = it->next;
      free((void *)(char *)it->path);
      free((void *)(char *)it->typespec);
      free((void *)it);
    }
    if(!(s->addr_if.iface == ((char *)NULL)))
      free((void *)s->addr_if.iface);

    i = 0;
    for( ; !(i >= s->sockets_len); i = i + 1)
    {
      if((s->sockets + (signed long int)i)->fd >= 0)
      {
        shutdown((s->sockets + (signed long int)i)->fd, 1);
        close((s->sockets + (signed long int)i)->fd);
      }

      if(!((s->contexts + (signed long int)i)->buffer == ((char *)NULL)))
        free((void *)(s->contexts + (signed long int)i)->buffer);

    }
    free((void *)s->sockets);
    free((void *)s->contexts);
    i = 0;
    for( ; !(i >= s->sources_len); i = i + 1)
      if(!((s->sources + (signed long int)i)->host == ((char *)NULL)))
        lo_address_free_mem(&s->sources[(signed long int)i]);

    free((void *)s->sources);
    free((void *)s);
  }

}

// lo_server_get_port
// file server.c line 2061
signed int lo_server_get_port(struct _lo_server *s)
{
  if(s == ((struct _lo_server *)NULL))
    return 0;

  else
    return s->port;
}

// lo_server_get_protocol
// file server.c line 2070
signed int lo_server_get_protocol(struct _lo_server *s)
{
  if(s == ((struct _lo_server *)NULL))
    return -1;

  else
    return s->protocol;
}

// lo_server_get_socket_fd
// file server.c line 2049
signed int lo_server_get_socket_fd(struct _lo_server *s)
{
  if(!(s->protocol == 0x1))
  {
    if(s->protocol == 0x4)
      goto __CPROVER_DUMP_L1;

    if(s->protocol == 0x2)
      goto __CPROVER_DUMP_L1;

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return (s->sockets + (signed long int)0)->fd;
  }
}

// lo_server_get_url
// file server.c line 2080
char * lo_server_get_url(struct _lo_server *s)
{
  signed int ret = 0;
  char *buf;
  _Bool tmp_if_expr_3;
  if(s == ((struct _lo_server *)NULL))
    return (char *)(void *)0;

  else
  {
    if(s->protocol == 0x1)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = s->protocol == 0x4 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      const char *proto = s->protocol == 0x1 ? "udp" : "tcp";
      ret=snprintf((char *)(void *)0, (unsigned long int)0, "osc.%s://%s:%d/", proto, s->hostname, s->port);
      if(!(ret >= 1))
        ret = 1023;

      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)(ret + 2) * sizeof(char) /*1ul*/ );
      buf = (char *)return_value_malloc_1;
      snprintf(buf, (unsigned long int)(ret + 1), "osc.%s://%s:%d/", proto, s->hostname, s->port);
      return buf;
    }

    else
      if(s->protocol == 0x2)
      {
        ret=snprintf((char *)(void *)0, (unsigned long int)0, "osc.unix:///%s", s->path);
        if(!(ret >= 1))
          ret = 1023;

        void *return_value_malloc_2;
        return_value_malloc_2=malloc((unsigned long int)(ret + 2) * sizeof(char) /*1ul*/ );
        buf = (char *)return_value_malloc_2;
        snprintf(buf, (unsigned long int)(ret + 1), "osc.unix:///%s", s->path);
        return buf;
      }

    return (char *)(void *)0;
  }
}

// lo_server_join_multicast_group
// file server.c line 643
static signed int lo_server_join_multicast_group(struct _lo_server *s, const char *group, signed int fam, const char *iface, const char *ip)
{
  struct ip_mreq mreq;
  memset((void *)&mreq, 0, sizeof(struct ip_mreq) /*8ul*/ );
  if(fam == 2)
  {
    signed int return_value_inet_pton_3;
    return_value_inet_pton_3=inet_pton(2, group, (void *)&mreq.imr_multiaddr);
    if(return_value_inet_pton_3 == 0)
    {
      signed int lo_server_join_multicast_group__1__1__1__err;
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      lo_server_join_multicast_group__1__1__1__err = *return_value___errno_location_1;
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(lo_server_join_multicast_group__1__1__1__err);
      lo_throw(s, lo_server_join_multicast_group__1__1__1__err, return_value_strerror_2, "inet_aton()");
      lo_server_free(s);
      return lo_server_join_multicast_group__1__1__1__err != 0 ? lo_server_join_multicast_group__1__1__1__err : 1;
    }

  }

  if(!(iface == ((const char *)NULL)) || !(ip == ((const char *)NULL)))
  {
    signed int lo_server_join_multicast_group__1__2__err;
    lo_server_join_multicast_group__1__2__err=lo_server_set_iface(s, fam, iface, ip);
    if(!(lo_server_join_multicast_group__1__2__err == 0))
      return lo_server_join_multicast_group__1__2__err;

    mreq.imr_interface = s->addr_if.a.addr;
  }

  else
    mreq.imr_interface.s_addr=htonl((unsigned int)0x00000000);
  signed int return_value_setsockopt_6;
  return_value_setsockopt_6=setsockopt((s->sockets + (signed long int)0)->fd, 0, 35, (const void *)(char *)&mreq, (unsigned int)sizeof(struct ip_mreq) /*8ul*/ );
  if(!(return_value_setsockopt_6 >= 0))
  {
    signed int err;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    err = *return_value___errno_location_4;
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(err);
    lo_throw(s, err, return_value_strerror_5, "setsockopt(IP_ADD_MEMBERSHIP)");
    lo_server_free(s);
    return err != 0 ? err : 1;
  }

  return 0;
}

// lo_server_new
// file server.c line 221
struct _lo_server * lo_server_new(const char *port, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *return_value_lo_server_new_with_proto_1;
  return_value_lo_server_new_with_proto_1=lo_server_new_with_proto(port, 0x0, err_h);
  return return_value_lo_server_new_with_proto_1;
}

// lo_server_new_from_url
// file server.c line 247
struct _lo_server * lo_server_new_from_url(const char *url, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *s;
  signed int protocol;
  char *group;
  char *port;
  char *proto;
  _Bool tmp_if_expr_1;
  if(url == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(*url != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (struct _lo_server *)(void *)0;

  else
  {
    protocol=lo_url_get_protocol_id(url);
    if(protocol == 0x1 || protocol == 0x4)
    {
      group=lo_url_get_hostname(url);
      port=lo_url_get_port(url);
      s=lo_server_new_with_proto_internal(group, port, ((const char *)NULL), ((const char *)NULL), protocol, err_h);
      if(!(group == ((char *)NULL)))
        free((void *)group);

      if(!(port == ((char *)NULL)))
        free((void *)port);

    }

    else
      if(protocol == 0x2)
      {
        port=lo_url_get_path(url);
        s=lo_server_new_with_proto_internal(((const char *)NULL), port, ((const char *)NULL), ((const char *)NULL), 0x2, err_h);
        if(!(port == ((char *)NULL)))
          free((void *)port);

      }

      else
      {
        proto=lo_url_get_protocol(url);
        fprintf(stderr, "liblo: protocol '%s' not supported by this version\n", proto);
        if(!(proto == ((char *)NULL)))
          free((void *)proto);

        return (struct _lo_server *)(void *)0;
      }
    return s;
  }
}

// lo_server_new_multicast
// file server.c line 226
struct _lo_server * lo_server_new_multicast(const char *group, const char *port, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *return_value_lo_server_new_with_proto_internal_1;
  return_value_lo_server_new_with_proto_internal_1=lo_server_new_with_proto_internal(group, port, ((const char *)NULL), ((const char *)NULL), 0x1, err_h);
  return return_value_lo_server_new_with_proto_internal_1;
}

// lo_server_new_multicast_iface
// file server.c line 233
struct _lo_server * lo_server_new_multicast_iface(const char *group, const char *port, const char *iface, const char *ip, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *return_value_lo_server_new_with_proto_internal_1;
  return_value_lo_server_new_with_proto_internal_1=lo_server_new_with_proto_internal(group, port, iface, ip, 0x1, err_h);
  return return_value_lo_server_new_with_proto_internal_1;
}

// lo_server_new_with_proto
// file server.c line 241
struct _lo_server * lo_server_new_with_proto(const char *port, signed int proto, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *return_value_lo_server_new_with_proto_internal_1;
  return_value_lo_server_new_with_proto_internal_1=lo_server_new_with_proto_internal((const char *)(void *)0, port, ((const char *)NULL), ((const char *)NULL), proto, err_h);
  return return_value_lo_server_new_with_proto_internal_1;
}

// lo_server_new_with_proto_internal
// file server.c line 290
static struct _lo_server * lo_server_new_with_proto_internal(const char *group, const char *port, const char *iface, const char *ip, signed int proto, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server *s;
  struct addrinfo *ai = (struct addrinfo *)(void *)0;
  struct addrinfo *it;
  struct addrinfo *used;
  struct addrinfo hints;
  signed int tries = 0;
  char pnum[16l];
  const char *service;
  char hostname[1024l];
  signed int err = 0;
  _Bool tmp_if_expr_1;
  if(proto == 0x0)
  {
    if(!(port == ((const char *)NULL)))
      tmp_if_expr_1 = (signed int)*port == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      proto = 0x2;

    else
      proto = 0x1;
  }

  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _lo_server) /*304ul*/ );
  s = (struct _lo_server *)return_value_calloc_2;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_18;
  signed int return_value_lo_server_join_multicast_group_22;
  signed int return_value_bind_25;
  _Bool tmp_if_expr_14;
  signed int tmp_post_13;
  if(s == ((struct _lo_server *)NULL))
    return ((struct _lo_server *)NULL);

  else
  {
    s->err_h = err_h;
    s->first = (struct _lo_method *)(void *)0;
    s->ai = (struct addrinfo *)(void *)0;
    s->hostname = (char *)(void *)0;
    s->protocol = proto;
    s->flags = (enum anonymous_2)(LO_SERVER_COERCE | LO_SERVER_ENQUEUE);
    s->port = 0;
    s->path = (char *)(void *)0;
    s->queued = (void *)0;
    s->sockets_len = 1;
    s->sockets_alloc = 2;
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)2, sizeof(struct pollfd) /*8ul*/ );
    s->sockets = (struct pollfd *)return_value_calloc_3;
    void *return_value_calloc_4;
    return_value_calloc_4=calloc((unsigned long int)2, sizeof(struct socket_context) /*32ul*/ );
    s->contexts = (struct socket_context *)return_value_calloc_4;
    void *return_value_calloc_5;
    return_value_calloc_5=calloc((unsigned long int)2, sizeof(struct _lo_address) /*120ul*/ );
    s->sources = (struct _lo_address *)return_value_calloc_5;
    s->sources_len = 2;
    s->bundle_start_handler = (signed int (*)(struct anonymous_3, void *))(void *)0;
    s->bundle_end_handler = (signed int (*)(void *))(void *)0;
    s->bundle_handler_user_data = (void *)0;
    s->addr_if.iface = ((char *)NULL);
    s->addr_if.size = (unsigned long int)0;
    if(!(s->sockets == ((struct pollfd *)NULL)))
      tmp_if_expr_6 = s->contexts != ((struct socket_context *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = s->sources != ((struct _lo_address *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(!tmp_if_expr_7)
    {
      free((void *)s->sockets);
      free((void *)s->contexts);
      free((void *)s->sources);
      free((void *)s);
      return ((struct _lo_server *)NULL);
    }

    else
    {
      (s->sockets + (signed long int)0)->fd = -1;
      memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
      if(proto == 0x1)
        hints.ai_socktype = 2;

      else
        if(proto == 0x4)
          hints.ai_socktype = 1;

        else
          if(proto == 0x2)
          {
            struct sockaddr_un sa;
            (s->sockets + (signed long int)0)->fd=socket(1, 2, 0);
            if(s->sockets->fd == -1)
            {
              signed int *return_value___errno_location_8;
              return_value___errno_location_8=__errno_location();
              err = *return_value___errno_location_8;
              used = (struct addrinfo *)(void *)0;
              char *return_value_strerror_9;
              return_value_strerror_9=strerror(err);
              lo_throw(s, err, return_value_strerror_9, "socket()");
              lo_server_free(s);
              return (struct _lo_server *)(void *)0;
            }

            sa.sun_family = (unsigned short int)1;
            strncpy(sa.sun_path, port, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
            signed int return_value_bind_12;
            return_value_bind_12=bind((s->sockets + (signed long int)0)->fd, (struct sockaddr *)&sa, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
            if(!(return_value_bind_12 >= 0))
            {
              signed int *return_value___errno_location_10;
              return_value___errno_location_10=__errno_location();
              err = *return_value___errno_location_10;
              char *return_value_strerror_11;
              return_value_strerror_11=strerror(err);
              lo_throw(s, err, return_value_strerror_11, "bind()");
              lo_server_free(s);
              return (struct _lo_server *)(void *)0;
            }

            s->path=strdup(port);
            return s;
          }

          else
          {
            lo_throw(s, 9903, "Unknown protocol", (const char *)(void *)0);
            lo_server_free(s);
            return (struct _lo_server *)(void *)0;
          }
      hints.ai_family = 2;
      hints.ai_flags = 0x0001;
      if(port == ((const char *)NULL))
        service = pnum;

      else
        service = port;
      do
      {
        signed int ret;
        if(port == ((const char *)NULL))
        {
          signed int return_value_rand_15;
          return_value_rand_15=rand();
          signed long int return_value_time_16;
          return_value_time_16=time((signed long int *)(void *)0);
          snprintf(pnum, (unsigned long int)15, "%ld", (signed long int)10000 + ((signed long int)(unsigned int)return_value_rand_15 + (signed long int)return_value_time_16) % (signed long int)10000);
        }

        if(!(ai == ((struct addrinfo *)NULL)))
          freeaddrinfo(ai);

        ret=getaddrinfo((const char *)(void *)0, service, &hints, &ai);
        s->ai = ai;
        (s->sockets + (signed long int)0)->fd = -1;
        s->port = 0;
        if(!(ret == 0))
        {
          const char *return_value_gai_strerror_17;
          return_value_gai_strerror_17=gai_strerror(ret);
          lo_throw(s, ret, return_value_gai_strerror_17, (const char *)(void *)0);
          lo_server_free(s);
          return (struct _lo_server *)(void *)0;
        }

        used = (struct addrinfo *)(void *)0;
        it = ai;
        do
        {
          if(!(it == ((struct addrinfo *)NULL)))
            tmp_if_expr_18 = (s->sockets + (signed long int)0)->fd == -1 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_18 = (_Bool)0;
          if(!tmp_if_expr_18)
            break;

          used = it;
          (s->sockets + (signed long int)0)->fd=socket(it->ai_family, hints.ai_socktype, 0);
          if(!(s->sockets->fd == -1))
          {
            if(it->ai_family == 2)
            {
              if(hints.ai_socktype == 2)
              {
                signed int opt = 1;
                setsockopt((s->sockets + (signed long int)0)->fd, 1, 6, (const void *)(char *)&opt, (unsigned int)sizeof(signed int) /*4ul*/ );
              }

            }

          }

          it = it->ai_next;
        }
        while((_Bool)1);
        if(s->sockets->fd == -1)
        {
          signed int *return_value___errno_location_19;
          return_value___errno_location_19=__errno_location();
          err = *return_value___errno_location_19;
          used = (struct addrinfo *)(void *)0;
          char *return_value_strerror_20;
          return_value_strerror_20=strerror(err);
          lo_throw(s, err, return_value_strerror_20, "socket()");
          lo_server_free(s);
          return (struct _lo_server *)(void *)0;
        }

        if(proto == 0x4 || !(group == ((const char *)NULL)))
        {
          err=lo_server_setsock_reuseaddr(s, 1);
          if(!(err == 0))
          {
            lo_server_free(s);
            return (struct _lo_server *)(void *)0;
          }

        }

        if(!(group == ((const char *)NULL)) && !(reuseport_supported == 0))
        {
          signed int return_value_lo_server_setsock_reuseport_21;
          return_value_lo_server_setsock_reuseport_21=lo_server_setsock_reuseport(s, 0);
          if(!(return_value_lo_server_setsock_reuseport_21 == 0))
            reuseport_supported = 0;

        }

        if(!(group == ((const char *)NULL)))
        {
          return_value_lo_server_join_multicast_group_22=lo_server_join_multicast_group(s, group, used->ai_family, iface, ip);
          if(!(return_value_lo_server_join_multicast_group_22 == 0))
            return (struct _lo_server *)(void *)0;

        }

        if(!(used == ((struct addrinfo *)NULL)))
        {
          return_value_bind_25=bind((s->sockets + (signed long int)0)->fd, used->ai_addr, used->ai_addrlen);
          if(!(return_value_bind_25 >= 0))
          {
            signed int *return_value___errno_location_23;
            return_value___errno_location_23=__errno_location();
            err = *return_value___errno_location_23;
            if(err == 22 || err == 98)
            {
              used = (struct addrinfo *)(void *)0;
              goto __CPROVER_DUMP_L34;
            }

            char *return_value_strerror_24;
            return_value_strerror_24=strerror(err);
            lo_throw(s, err, return_value_strerror_24, "bind()");
            lo_server_free(s);
            return (struct _lo_server *)(void *)0;
          }

        }


      __CPROVER_DUMP_L34:
        ;
        if(used == ((struct addrinfo *)NULL))
        {
          tmp_post_13 = tries;
          tries = tries + 1;
          tmp_if_expr_14 = tmp_post_13 < 16 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_14 = (_Bool)0;
      }
      while(tmp_if_expr_14);
      if(used == ((struct addrinfo *)NULL))
      {
        lo_throw(s, 9904, "cannot find free port", (const char *)(void *)0);
        lo_server_free(s);
        return (struct _lo_server *)(void *)0;
      }

      else
      {
        if(proto == 0x4)
          listen((s->sockets + (signed long int)0)->fd, 8);

        if(proto == 0x1)
          lo_client_sockets.udp = (s->sockets + (signed long int)0)->fd;

        else
          if(proto == 0x4)
            lo_client_sockets.tcp = (s->sockets + (signed long int)0)->fd;

        hostname[(signed long int)0] = (char)0;
        if(hostname[0l] == 0)
        {
          struct hostent *he;
          gethostname(hostname, sizeof(char [1024l]) /*1024ul*/ );
          he=gethostbyname(hostname);
          if(!(he == ((struct hostent *)NULL)))
            strncpy(hostname, he->h_name, sizeof(char [1024l]) /*1024ul*/ );

        }

        if(hostname[0l] == 0)
          strcpy(hostname, "localhost");

        s->hostname=strdup(hostname);
        if(used->ai_family == 10)
        {
          struct sockaddr_in6 *addr = (struct sockaddr_in6 *)used->ai_addr;
          unsigned short int return_value_htons_26;
          return_value_htons_26=htons(addr->sin6_port);
          s->port = (signed int)return_value_htons_26;
        }

        else
          if(used->ai_family == 2)
          {
            struct sockaddr_in *lo_server_new_with_proto_internal__1__17__addr = (struct sockaddr_in *)used->ai_addr;
            unsigned short int return_value_htons_27;
            return_value_htons_27=htons(lo_server_new_with_proto_internal__1__17__addr->sin_port);
            s->port = (signed int)return_value_htons_27;
          }

          else
          {
            lo_throw(s, 9903, "unknown protocol family", (const char *)(void *)0);
            s->port=atoi(port);
          }
        return s;
      }
    }
  }
}

// lo_server_next_event_delay
// file server.c line 1690
double lo_server_next_event_delay(struct _lo_server *s)
{
  if(!(s->queued == NULL))
  {
    struct anonymous_3 now;
    double delay;
    lo_timetag_now(&now);
    delay=lo_timetag_diff(((struct anonymous_4 *)s->queued)->ts, now);
    delay = delay > 100.0 ? 100.0 : delay;
    delay = delay < 0.0 ? 0.0 : delay;
    return delay;
  }

  return 100.0;
}

// lo_server_pp
// file server.c line 2123
void lo_server_pp(struct _lo_server *s)
{
  struct _lo_method *it;
  printf("socket: %d\n\n", (s->sockets + (signed long int)0)->fd);
  printf("Methods\n");
  it = s->first;
  for( ; !(it == ((struct _lo_method *)NULL)); it = it->next)
  {
    printf("\n");
    lo_method_pp_prefix(it, "   ");
  }
}

// lo_server_recv
// file server.c line 1403
signed int lo_server_recv(struct _lo_server *s)
{
  void *data;
  unsigned long int size;
  double sched_time;
  sched_time=lo_server_next_event_delay(s);
  signed int sock = -1;
  signed int i;

again:
  ;
  _Bool tmp_if_expr_1;
  while((_Bool)1)
  {
    if(!(sched_time > 0.01))
      goto __CPROVER_DUMP_L12;

    if(sched_time > 10.0)
      sched_time = 10.0;

    i = 0;
    for( ; !(i >= s->sockets_len); i = i + 1)
    {
      (s->sockets + (signed long int)i)->events = (signed short int)(0x001 | 0x002 | 0x008 | 0x010);
      (s->sockets + (signed long int)i)->revents = (signed short int)0;
      if(s->protocol == 0x4)
      {
        data=lo_server_buffer_copy_for_dispatch(s, i, &size);
        if(!(data == NULL))
        {
          sock = (s->sockets + (signed long int)i)->fd;
          goto got_data;
        }

      }

    }
    poll(s->sockets, (unsigned long int)s->sockets_len, (signed int)(sched_time * 1000.0));
    i = 0;
    for( ; !(i >= s->sockets_len); i = i + 1)
    {
      if((signed int)(s->sockets + (signed long int)i)->revents == 0x008)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)(s->sockets + (signed long int)i)->revents == 0x010 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        return 0;

      if(!((s->sockets + (signed long int)i)->revents == 0))
        break;

    }
    if(!(i >= s->sockets_len))
      goto __CPROVER_DUMP_L11;

    sched_time=lo_server_next_event_delay(s);
    if(!(sched_time > 0.01))
      break;

  }
  signed int return_value_dispatch_queued_2;
  return_value_dispatch_queued_2=dispatch_queued(s, 0);
  return return_value_dispatch_queued_2;

__CPROVER_DUMP_L11:
  ;
  goto __CPROVER_DUMP_L13;

__CPROVER_DUMP_L12:
  ;
  signed int return_value_dispatch_queued_3;
  return_value_dispatch_queued_3=dispatch_queued(s, 0);
  return return_value_dispatch_queued_3;

__CPROVER_DUMP_L13:
  ;
  if(s->protocol == 0x4)
    data=lo_server_recv_raw_stream(s, &size, &sock);

  else
    data=lo_server_recv_raw(s, &size);
  if(data == NULL)
    return 0;

  else
  {

  got_data:
    ;
    signed int return_value_dispatch_data_4;
    return_value_dispatch_data_4=dispatch_data(s, data, size, sock);
    if(!(return_value_dispatch_data_4 >= 0))
    {
      free(data);
      return -1;
    }

    else
    {
      free(data);
      return (signed int)size;
    }
  }
}

// lo_server_recv_noblock
// file server.c line 1393
signed int lo_server_recv_noblock(struct _lo_server *s, signed int timeout)
{
  signed int result;
  result=lo_server_wait(s, timeout);
  if(result >= 1)
  {
    signed int return_value_lo_server_recv_1;
    return_value_lo_server_recv_1=lo_server_recv(s);
    return return_value_lo_server_recv_1;
  }

  else
    return 0;
}

// lo_server_recv_raw
// file server.c line 794
void * lo_server_recv_raw(struct _lo_server *s, unsigned long int *size)
{
  char buffer[32768l];
  signed int ret;
  void *data = (void *)0;
  s->addr_len = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
  signed long int return_value_recvfrom_1;
  return_value_recvfrom_1=recvfrom((s->sockets + (signed long int)0)->fd, (void *)buffer, (unsigned long int)32768, 0, (struct sockaddr *)&s->addr, &s->addr_len);
  ret = (signed int)return_value_recvfrom_1;
  if(!(ret >= 1))
    return (void *)0;

  else
  {
    data=malloc((unsigned long int)ret);
    memcpy(data, (const void *)buffer, (unsigned long int)ret);
    if(!(size == ((unsigned long int *)NULL)))
      *size = (unsigned long int)ret;

    return data;
  }
}

// lo_server_recv_raw_stream
// file server.c line 1125
static void * lo_server_recv_raw_stream(struct _lo_server *s, unsigned long int *size, signed int *psock)
{
  struct sockaddr_storage addr;
  unsigned int addr_len = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
  signed int i;
  void *data = (void *)0;
  signed int sock = -1;
  /* assertion psock != ((void *)0) */
  assert(psock != (signed int *)(void *)0);
  _Bool tmp_if_expr_1;
  do
  {

  again:
    ;
    i = 0;
    for( ; !(i >= s->sockets_len); i = i + 1)
    {
      (s->sockets + (signed long int)i)->events = (signed short int)(0x001 | 0x002);
      (s->sockets + (signed long int)i)->revents = (signed short int)0;
      data=lo_server_buffer_copy_for_dispatch(s, i, size);
      if(!(data == NULL))
      {
        *psock = (s->sockets + (signed long int)i)->fd;
        return data;
      }

    }
    poll(s->sockets, (unsigned long int)s->sockets_len, -1);
    i = (signed int)(s->sockets_len - 1 != 0 ? (!(data != NULL) ? (_Bool)1 : (_Bool)0) : (_Bool)0);

  __CPROVER_DUMP_L5:
    ;
    if(!(i >= 0))
      goto __CPROVER_DUMP_L15;

    if((signed int)(s->sockets + (signed long int)i)->revents == 0x008)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)(s->sockets + (signed long int)i)->revents == 0x010 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(i >= 1)
      {
        close((s->sockets + (signed long int)i)->fd);
        lo_server_del_socket(s, i, (s->sockets + (signed long int)i)->fd);
        goto __CPROVER_DUMP_L14;
      }

      else
        return (void *)0;
    }

    if((s->sockets + (signed long int)i)->revents == 0)
      goto __CPROVER_DUMP_L14;

    sock = (s->sockets + (signed long int)i)->fd;
    if(sock == -1)
      return (void *)0;

    if(!(sock == s->sockets->fd))
      break;

    sock=accept(sock, (struct sockaddr *)&addr, &addr_len);
    i=lo_server_add_socket(s, sock, ((struct _lo_address *)NULL), &addr, addr_len);
    init_context(&s->contexts[(signed long int)i]);
  }
  while((_Bool)1);
  if(!(i >= 0))
  {
    close(sock);
    return (void *)0;
  }

  else
  {
    signed int return_value_lo_server_recv_raw_stream_socket_2;
    return_value_lo_server_recv_raw_stream_socket_2=lo_server_recv_raw_stream_socket(s, i, size, &data);
    if(!(data == NULL))
      *psock = (s->sockets + (signed long int)i)->fd;


  __CPROVER_DUMP_L14:
    ;
    i = i - 1;
    goto __CPROVER_DUMP_L5;

  __CPROVER_DUMP_L15:
    ;
    *psock = sock;
    return data;
  }
}

// lo_server_recv_raw_stream_socket
// file server.c line 953
static signed int lo_server_recv_raw_stream_socket(struct _lo_server *s, signed int isock, unsigned long int *psize, void **pdata)
{
  struct socket_context *sc = &s->contexts[(signed long int)isock];
  char *stack_buffer = ((char *)NULL);
  char *read_into;
  unsigned int msg_len;
  signed int buffer_bytes_left;
  signed int size;
  signed int bytes_recv;
  unsigned long int bytes_wrote;
  *pdata = NULL;
  signed long int return_value_recv_3;
  signed int return_value_slip_decode_6;
  do
  {

  again:
    ;
    *pdata=lo_server_buffer_copy_for_dispatch(s, isock, psize);
    if(!(*pdata == NULL))
      return 1;

    buffer_bytes_left = (signed int)(sc->buffer_size - (unsigned long int)sc->buffer_read_offset);
    size = (signed int)sc->buffer_size;
    if(!(size >= 64))
      size = 64;

    for( ; !(buffer_bytes_left >= size / 2); buffer_bytes_left = (signed int)((unsigned int)size - sc->buffer_read_offset))
    {
      size = size * 2;
      if(size >= 32769)
        size = 32768;

    }
    if(!(sc->buffer_size >= (unsigned long int)size))
    {
      sc->buffer_size = (unsigned long int)size;
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)sc->buffer, sc->buffer_size);
      sc->buffer = (char *)return_value_realloc_1;
      if(sc->buffer == ((char *)NULL))
        return 0;

    }

    buffer_bytes_left = (signed int)(sc->buffer_size - (unsigned long int)sc->buffer_read_offset);
    read_into = sc->buffer + (signed long int)sc->buffer_read_offset;
    if(sc->is_slip == 1)
    {
      void *return_value___builtin_alloca_2;
      return_value___builtin_alloca_2=__builtin_alloca((unsigned long int)buffer_bytes_left - sizeof(unsigned int) /*4ul*/ );
      stack_buffer = (char *)return_value___builtin_alloca_2;
      read_into = stack_buffer;
    }

    return_value_recv_3=recv((s->sockets + (signed long int)isock)->fd, (void *)read_into, (unsigned long int)buffer_bytes_left, 0);
    bytes_recv = (signed int)return_value_recv_3;
    if(!(bytes_recv >= 1))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(*return_value___errno_location_4 == 11)
        return 0;

      close((s->sockets + (signed long int)isock)->fd);
      lo_server_del_socket(s, isock, (s->sockets + (signed long int)isock)->fd);
      return 0;
    }

    if(sc->is_slip == -1)
    {
      if(sc->buffer_read_offset + (unsigned int)bytes_recv >= 4u)
      {
        sc->is_slip=detect_slip((unsigned char *)(sc->buffer + (signed long int)sc->buffer_msg_offset));
        sc->slip_state = 0;
        if(!(sc->is_slip == 0))
        {
          void *return_value___builtin_alloca_5;
          return_value___builtin_alloca_5=__builtin_alloca((unsigned long int)bytes_recv);
          stack_buffer = (char *)return_value___builtin_alloca_5;
          memcpy((void *)stack_buffer, (const void *)read_into, (unsigned long int)bytes_recv);
          *((unsigned int *)(sc->buffer + (signed long int)sc->buffer_read_offset)) = (unsigned int)0;
          sc->buffer_read_offset = sc->buffer_read_offset + (unsigned int)sizeof(unsigned int) /*4ul*/ ;
        }

      }

    }

    if(sc->is_slip == 1)
    {
      unsigned long int bytes_read = (unsigned long int)0;
      char *buffer_after = sc->buffer + (signed long int)sc->buffer_read_offset;
      do
      {
        return_value_slip_decode_6=slip_decode((unsigned char **)&buffer_after, (unsigned char *)stack_buffer, (unsigned long int)bytes_recv, &sc->slip_state, &bytes_read);
        if(!(return_value_slip_decode_6 == 0))
          break;

        unsigned long int lo_server_recv_raw_stream_socket__1__6__1__bytes_wrote = (unsigned long int)((buffer_after - sc->buffer) - (signed long int)sc->buffer_read_offset);
        sc->buffer_read_offset = sc->buffer_read_offset + (unsigned int)lo_server_recv_raw_stream_socket__1__6__1__bytes_wrote;
        msg_len = (unsigned int)((unsigned long int)(sc->buffer_read_offset - sc->buffer_msg_offset) - sizeof(unsigned int) /*4ul*/ );
        *((unsigned int *)(sc->buffer + (signed long int)sc->buffer_msg_offset))=htonl(msg_len);
        sc->buffer_msg_offset = sc->buffer_msg_offset + (unsigned int)((unsigned long int)msg_len + sizeof(unsigned int) /*4ul*/ );
        sc->buffer_read_offset = sc->buffer_read_offset + (unsigned int)sizeof(unsigned int) /*4ul*/ ;
        buffer_after = buffer_after + (signed long int)sizeof(unsigned int) /*4ul*/ ;
        *((unsigned int *)(sc->buffer + (signed long int)sc->buffer_msg_offset)) = (unsigned int)0;
        bytes_recv = bytes_recv - (signed int)bytes_read;
        stack_buffer = stack_buffer + (signed long int)bytes_read;
        if(!(sc->buffer_size + -((unsigned long int)sc->buffer_read_offset) >= sizeof(unsigned int) /*4ul*/  + (unsigned long int)bytes_recv))
        {
          sc->buffer_size = sc->buffer_size * (unsigned long int)2;
          void *return_value_realloc_7;
          return_value_realloc_7=realloc((void *)sc->buffer, sc->buffer_size);
          sc->buffer = (char *)return_value_realloc_7;
        }

      }
      while((_Bool)1);
      bytes_wrote = (unsigned long int)((buffer_after - sc->buffer) - (signed long int)sc->buffer_read_offset);
      sc->buffer_read_offset = sc->buffer_read_offset + (unsigned int)bytes_wrote;
    }

    else
      sc->buffer_read_offset = sc->buffer_read_offset + (unsigned int)bytes_recv;
    *pdata=lo_server_buffer_copy_for_dispatch(s, isock, psize);
    if(!(*pdata == NULL))
      break;

  }
  while(bytes_recv == buffer_bytes_left);
  return (signed int)(bytes_recv == buffer_bytes_left);
}

// lo_server_set_error_context
// file server.c line 2185
void lo_server_set_error_context(struct _lo_server *s, void *user_data)
{
  s->error_user_data = user_data;
}

// lo_server_set_iface
// file server.c line 611
static signed int lo_server_set_iface(struct _lo_server *s, signed int fam, const char *iface, const char *ip)
{
  signed int err;
  err=lo_inaddr_find_iface(&s->addr_if, fam, iface, ip);
  if(!(err == 0))
    return err;

  else
  {
    if(s->addr_if.size == sizeof(struct in_addr) /*4ul*/ )
    {
      signed int return_value_setsockopt_3;
      return_value_setsockopt_3=setsockopt((s->sockets + (signed long int)0)->fd, 0, 32, (const void *)(const char *)&s->addr_if.a.addr, (unsigned int)s->addr_if.size);
      if(!(return_value_setsockopt_3 >= 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        err = *return_value___errno_location_1;
        char *return_value_strerror_2;
        return_value_strerror_2=strerror(err);
        lo_throw(s, err, return_value_strerror_2, "setsockopt(IP_MULTICAST_IF)");
        lo_server_free(s);
        return err;
      }

    }

    return 0;
  }
}

// lo_server_setsock_reuseaddr
// file server.c line 193
static signed int lo_server_setsock_reuseaddr(struct _lo_server *s, signed int do_throw)
{
  unsigned int yes = (unsigned int)1;
  signed int return_value_setsockopt_3;
  return_value_setsockopt_3=setsockopt((s->sockets + (signed long int)0)->fd, 1, 2, (const void *)(char *)&yes, (unsigned int)sizeof(unsigned int) /*4ul*/ );
  char *return_value_strerror_2;
  if(!(return_value_setsockopt_3 >= 0))
  {
    signed int err;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    err = *return_value___errno_location_1;
    if(!(do_throw == 0))
    {
      return_value_strerror_2=strerror(err);
      lo_throw(s, err, return_value_strerror_2, "setsockopt(SO_REUSEADDR)");
    }

    return err;
  }

  return 0;
}

// lo_server_setsock_reuseport
// file server.c line 206
static signed int lo_server_setsock_reuseport(struct _lo_server *s, signed int do_throw)
{
  unsigned int yes = (unsigned int)1;
  signed int return_value_setsockopt_3;
  return_value_setsockopt_3=setsockopt((s->sockets + (signed long int)0)->fd, 1, 15, (const void *)&yes, (unsigned int)sizeof(unsigned int) /*4ul*/ );
  char *return_value_strerror_2;
  if(!(return_value_setsockopt_3 >= 0))
  {
    signed int err;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    err = *return_value___errno_location_1;
    if(!(do_throw == 0))
    {
      return_value_strerror_2=strerror(err);
      lo_throw(s, err, return_value_strerror_2, "setsockopt(SO_REUSEPORT)");
    }

    return err;
  }

  return 0;
}

// lo_server_should_coerce_args
// file server.c line 702
signed int lo_server_should_coerce_args(struct _lo_server *s)
{
  return (signed int)(((signed int)s->flags & LO_SERVER_COERCE) != 0);
}

// lo_server_thread_add_method
// file server_thread.c line 116
struct _lo_method * lo_server_thread_add_method(struct _lo_server_thread *st, const char *path, const char *typespec, signed int (*h)(const char *, const char *, union anonymous **, signed int, struct _lo_message *, void *), void *user_data)
{
  struct _lo_method *return_value_lo_server_add_method_1;
  return_value_lo_server_add_method_1=lo_server_add_method(st->s, path, typespec, h, user_data);
  return return_value_lo_server_add_method_1;
}

// lo_server_thread_del_method
// file server_thread.c line 124
void lo_server_thread_del_method(struct _lo_server_thread *st, const char *path, const char *typespec)
{
  lo_server_del_method(st->s, path, typespec);
}

// lo_server_thread_events_pending
// file server_thread.c line 188
signed int lo_server_thread_events_pending(struct _lo_server_thread *st)
{
  signed int return_value_lo_server_events_pending_1;
  return_value_lo_server_events_pending_1=lo_server_events_pending(st->s);
  return return_value_lo_server_events_pending_1;
}

// lo_server_thread_free
// file server_thread.c line 105
void lo_server_thread_free(struct _lo_server_thread *st)
{
  if(!(st == ((struct _lo_server_thread *)NULL)))
  {
    if(!(st->active == 0))
      lo_server_thread_stop(st);

    lo_server_free(st->s);
  }

  free((void *)st);
}

// lo_server_thread_get_port
// file server_thread.c line 173
signed int lo_server_thread_get_port(struct _lo_server_thread *st)
{
  signed int return_value_lo_server_get_port_1;
  return_value_lo_server_get_port_1=lo_server_get_port(st->s);
  return return_value_lo_server_get_port_1;
}

// lo_server_thread_get_server
// file server_thread.c line 183
struct _lo_server * lo_server_thread_get_server(struct _lo_server_thread *st)
{
  return st->s;
}

// lo_server_thread_get_url
// file server_thread.c line 178
char * lo_server_thread_get_url(struct _lo_server_thread *st)
{
  char *return_value_lo_server_get_url_1;
  return_value_lo_server_get_url_1=lo_server_get_url(st->s);
  return return_value_lo_server_get_url_1;
}

// lo_server_thread_new
// file server_thread.c line 40
struct _lo_server_thread * lo_server_thread_new(const char *port, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server_thread *return_value_lo_server_thread_new_with_proto_1;
  return_value_lo_server_thread_new_with_proto_1=lo_server_thread_new_with_proto(port, 0x0, err_h);
  return return_value_lo_server_thread_new_with_proto_1;
}

// lo_server_thread_new_from_url
// file server_thread.c line 82
struct _lo_server_thread * lo_server_thread_new_from_url(const char *url, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server_thread *st;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _lo_server_thread) /*24ul*/ );
  st = (struct _lo_server_thread *)return_value_malloc_1;
  st->s=lo_server_new_from_url(url, err_h);
  st->active = 0;
  st->done = 0;
  if(st->s == ((struct _lo_server *)NULL))
  {
    free((void *)st);
    return (struct _lo_server_thread *)(void *)0;
  }

  else
    return st;
}

// lo_server_thread_new_multicast
// file server_thread.c line 46
struct _lo_server_thread * lo_server_thread_new_multicast(const char *group, const char *port, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server_thread *st;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _lo_server_thread) /*24ul*/ );
  st = (struct _lo_server_thread *)return_value_malloc_1;
  st->s=lo_server_new_multicast(group, port, err_h);
  st->active = 0;
  st->done = 0;
  if(st->s == ((struct _lo_server *)NULL))
  {
    free((void *)st);
    return (struct _lo_server_thread *)(void *)0;
  }

  else
    return st;
}

// lo_server_thread_new_with_proto
// file server_thread.c line 64
struct _lo_server_thread * lo_server_thread_new_with_proto(const char *port, signed int proto, void (*err_h)(signed int, const char *, const char *))
{
  struct _lo_server_thread *st;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _lo_server_thread) /*24ul*/ );
  st = (struct _lo_server_thread *)return_value_malloc_1;
  st->s=lo_server_new_with_proto(port, proto, err_h);
  st->active = 0;
  st->done = 0;
  if(st->s == ((struct _lo_server *)NULL))
  {
    free((void *)st);
    return (struct _lo_server_thread *)(void *)0;
  }

  else
    return st;
}

// lo_server_thread_pp
// file server_thread.c line 205
void lo_server_thread_pp(struct _lo_server_thread *st)
{
  lo_server_pp(st->s);
}

// lo_server_thread_set_error_context
// file server_thread.c line 99
void lo_server_thread_set_error_context(struct _lo_server_thread *st, void *user_data)
{
  lo_server_set_error_context(st->s, user_data);
}

// lo_server_thread_start
// file server_thread.c line 130
signed int lo_server_thread_start(struct _lo_server_thread *st)
{
  signed int result;
  if(st->active == 0)
  {
    st->active = 1;
    st->done = 0;
    result=pthread_create(&st->thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))thread_func, (void *)st);
    if(!(result == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(result);
      fprintf(stderr, "Failed to create thread: pthread_create(), %s", return_value_strerror_1);
      return -result;
    }

  }

  return 0;
}

// lo_server_thread_stop
// file server_thread.c line 152
signed int lo_server_thread_stop(struct _lo_server_thread *st)
{
  signed int result;
  if(!(st->active == 0))
  {
    st->active = 0;
    result=pthread_join(st->thread, (void **)(void *)0);
    if(!(result == 0))
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(result);
      fprintf(stderr, "Failed to stop thread: pthread_join(), %s", return_value_strerror_1);
      return -result;
    }

  }

  return 0;
}

// lo_server_wait
// file server.c line 1243
signed int lo_server_wait(struct _lo_server *s, signed int timeout)
{
  signed int sched_timeout;
  double return_value_lo_server_next_event_delay_1;
  return_value_lo_server_next_event_delay_1=lo_server_next_event_delay(s);
  sched_timeout = (signed int)(return_value_lo_server_next_event_delay_1 * (double)1000);
  signed int i;
  struct sockaddr_storage addr;
  unsigned int addr_len = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
  struct anonymous_3 now;
  struct anonymous_3 then;
  _Bool tmp_if_expr_3;
  signed int sock;
  double diff;
  double return_value_lo_server_next_event_delay_4;
  do
  {

  again:
    ;
    i = 0;
    for( ; !(i >= s->sockets_len); i = i + 1)
    {
      (s->sockets + (signed long int)i)->events = (signed short int)(0x001 | 0x002 | 0x008 | 0x010);
      (s->sockets + (signed long int)i)->revents = (signed short int)0;
      unsigned int return_value_lo_server_buffer_contains_msg_2;
      return_value_lo_server_buffer_contains_msg_2=lo_server_buffer_contains_msg(s, i);
      if(!(return_value_lo_server_buffer_contains_msg_2 == 0u))
        return 1;

    }
    lo_timetag_now(&then);
    poll(s->sockets, (unsigned long int)s->sockets_len, timeout > sched_timeout ? sched_timeout : timeout);
    if((signed int)s->sockets->revents == 0x008)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)(s->sockets + (signed long int)0)->revents == 0x010 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      return 0;

    if(s->sockets->revents == 0)
      goto __CPROVER_DUMP_L11;

    if(!(s->protocol == 0x4))
      break;

    sock=accept((s->sockets + (signed long int)0)->fd, (struct sockaddr *)&addr, &addr_len);
    i=lo_server_add_socket(s, sock, ((struct _lo_address *)NULL), &addr, addr_len);
    if(!(i >= 0))
      close(sock);

    init_context(&s->contexts[(signed long int)i]);
    lo_timetag_now(&now);
    diff=lo_timetag_diff(now, then);
    return_value_lo_server_next_event_delay_4=lo_server_next_event_delay(s);
    sched_timeout = (signed int)(return_value_lo_server_next_event_delay_4 * (double)1000);
    timeout = timeout - (signed int)(diff * (double)1000);
    if(!(timeout >= 0))
      timeout = 0;

  }
  while((_Bool)1);
  return 1;

__CPROVER_DUMP_L11:
  ;
  i = 1;
  _Bool tmp_if_expr_5;
  for( ; !(i >= s->sockets_len); i = i + 1)
  {
    if((signed int)(s->sockets + (signed long int)i)->revents == 0x008)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = (signed int)(s->sockets + (signed long int)i)->revents == 0x010 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      return 0;

    if(!((s->sockets + (signed long int)i)->revents == 0))
      return 1;

  }
  double return_value_lo_server_next_event_delay_6;
  return_value_lo_server_next_event_delay_6=lo_server_next_event_delay(s);
  if(return_value_lo_server_next_event_delay_6 < 0.01)
    return 1;

  else
    return 0;
}

// lo_strsize
// file message.c line 525
signed int lo_strsize(const char *s)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  return (signed int)((unsigned long int)4 * (return_value_strlen_1 / (unsigned long int)4 + (unsigned long int)1));
}

// lo_swap64
// file ../lo/lo_endian.h line 106
static inline unsigned long int lo_swap64(unsigned long int x)
{
  union anonymous_9 in;
  union anonymous_9 out;
  in.all = x;
  out.part.a=htonl(in.part.b);
  out.part.b=htonl(in.part.a);
  return out.all;
}

// lo_throw
// file ../lo/lo_throw.h line 24
void lo_throw(struct _lo_server *s, signed int errnum, const char *message, const char *path)
{
  if(!(s->err_h == ((void (*)(signed int, const char *, const char *))NULL)))
  {
    pthread_mutex_lock(&lo_error_context_mutex);
    lo_error_context = s->error_user_data;
    s->err_h(errnum, message, path);
    pthread_mutex_unlock(&lo_error_context_mutex);
  }

}

// lo_timetag_diff
// file ../lo/lo_lowlevel.h line 988
double lo_timetag_diff(struct anonymous_3 a, struct anonymous_3 b)
{
  return ((double)a.sec - (double)b.sec) + ((double)a.frac - (double)b.frac) * 0.00000000023283064365;
}

// lo_timetag_now
// file ../lo/lo_lowlevel.h line 995
void lo_timetag_now(struct anonymous_3 *t)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  t->sec = (unsigned int)(tv.tv_sec + (signed long int)0x83aa7e80);
  t->frac = (unsigned int)((double)tv.tv_usec * 4294.967295);
}

// lo_url_get_hostname
// file address.c line 390
char * lo_url_get_hostname(const char *url)
{
  char *hostname;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(return_value_strlen_1);
  hostname = (char *)return_value_malloc_2;
  signed int return_value_sscanf_3;
  return_value_sscanf_3=sscanf(url, "osc://%[^[:/]", hostname);
  if(!(return_value_sscanf_3 == 0))
    return hostname;

  else
  {
    signed int return_value_sscanf_4;
    return_value_sscanf_4=sscanf(url, "osc.%*[^:/]://[%[^]/]]", hostname);
    if(!(return_value_sscanf_4 == 0))
      return hostname;

    else
    {
      signed int return_value_sscanf_5;
      return_value_sscanf_5=sscanf(url, "osc.%*[^:/]://%[^[:/]", hostname);
      if(!(return_value_sscanf_5 == 0))
        return hostname;

      else
      {
        free((void *)hostname);
        return (char *)(void *)0;
      }
    }
  }
}

// lo_url_get_path
// file address.c line 439
char * lo_url_get_path(const char *url)
{
  char *path;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(return_value_strlen_1);
  path = (char *)return_value_malloc_2;
  signed int return_value_sscanf_3;
  return_value_sscanf_3=sscanf(url, "osc://%*[^:]:%*[0-9]%s", path);
  if(!(return_value_sscanf_3 == 0))
    return path;

  else
  {
    signed int return_value_sscanf_4;
    return_value_sscanf_4=sscanf(url, "osc.%*[^:]://%*[^:]:%*[0-9]%s", path);
    if(return_value_sscanf_4 == 1)
      return path;

    else
    {
      signed int return_value_sscanf_6;
      return_value_sscanf_6=sscanf(url, "osc.unix://%*[^/]%s", path);
      if(!(return_value_sscanf_6 == 0))
      {
        signed int lo_url_get_path__1__3__i;
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(path);
        lo_url_get_path__1__3__i = (signed int)(return_value_strlen_5 - (unsigned long int)1);
        if((signed int)path[(signed long int)lo_url_get_path__1__3__i] == 47)
          path[(signed long int)lo_url_get_path__1__3__i] = (char)0;

        return path;
      }

      signed int return_value_sscanf_8;
      return_value_sscanf_8=sscanf(url, "osc.%*[^:]://%s", path);
      if(!(return_value_sscanf_8 == 0))
      {
        signed int i;
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(path);
        i = (signed int)(return_value_strlen_7 - (unsigned long int)1);
        if((signed int)path[(signed long int)i] == 47)
          path[(signed long int)i] = (char)0;

        return path;
      }

      free((void *)path);
      return (char *)(void *)0;
    }
  }
}

// lo_url_get_port
// file address.c line 410
char * lo_url_get_port(const char *url)
{
  char *port;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(return_value_strlen_1);
  port = (char *)return_value_malloc_2;
  signed int return_value_sscanf_3;
  return_value_sscanf_3=sscanf(url, "osc://%*[^:]:%[0-9]", port);
  if(!(return_value_sscanf_3 == 0))
    return port;

  else
  {
    signed int return_value_sscanf_4;
    return_value_sscanf_4=sscanf(url, "osc.%*[^:]://%*[^:]:%[0-9]", port);
    if(!(return_value_sscanf_4 == 0))
      return port;

    else
    {
      signed int return_value_sscanf_5;
      return_value_sscanf_5=sscanf(url, "osc://[%*[^]]]:%[0-9]", port);
      if(!(return_value_sscanf_5 == 0))
        return port;

      else
      {
        signed int return_value_sscanf_6;
        return_value_sscanf_6=sscanf(url, "osc.%*[^:]://[%*[^]]]:%[0-9]", port);
        if(!(return_value_sscanf_6 == 0))
          return port;

        else
        {
          signed int return_value_sscanf_7;
          return_value_sscanf_7=sscanf(url, "osc://:%[0-9]", port);
          if(!(return_value_sscanf_7 == 0))
            return port;

          else
          {
            signed int return_value_sscanf_8;
            return_value_sscanf_8=sscanf(url, "osc.%*[^:]://:%[0-9]", port);
            if(!(return_value_sscanf_8 == 0))
              return port;

            else
            {
              free((void *)port);
              return (char *)(void *)0;
            }
          }
        }
      }
    }
  }
}

// lo_url_get_protocol
// file address.c line 343
char * lo_url_get_protocol(const char *url)
{
  char *protocol;
  char *ret;
  signed int return_value_sscanf_3;
  if(url == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(url);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(return_value_strlen_1);
    protocol = (char *)return_value_malloc_2;
    signed int return_value_sscanf_4;
    return_value_sscanf_4=sscanf(url, "osc://%s", protocol);
    if(!(return_value_sscanf_4 == 0))
    {
      fprintf(stderr, "liblo warning: no protocol specified in URL, assuming UDP.\n");
      ret=strdup("udp");
    }

    else
    {
      return_value_sscanf_3=sscanf(url, "osc.%[^:/[]", protocol);
      if(!(return_value_sscanf_3 == 0))
        ret=strdup(protocol);

      else
        ret = (char *)(void *)0;
    }
    free((void *)protocol);
    return ret;
  }
}

// lo_url_get_protocol_id
// file address.c line 369
signed int lo_url_get_protocol_id(const char *url)
{
  signed int return_value_strncmp_3;
  signed int return_value_strncmp_2;
  signed int return_value_strncmp_1;
  if(url == ((const char *)NULL))
    return -1;

  else
  {
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp(url, "osc:", (unsigned long int)4);
    if(return_value_strncmp_4 == 0)
    {
      fprintf(stderr, "liblo warning: no protocol specified in URL, assuming UDP.\n");
      return 0x1;
    }

    else
    {
      return_value_strncmp_3=strncmp(url, "osc.udp:", (unsigned long int)8);
      if(return_value_strncmp_3 == 0)
        return 0x1;

      else
      {
        return_value_strncmp_2=strncmp(url, "osc.tcp:", (unsigned long int)8);
        if(return_value_strncmp_2 == 0)
          return 0x4;

        else
        {
          return_value_strncmp_1=strncmp(url, "osc.unix:", (unsigned long int)9);
          if(return_value_strncmp_1 == 0)
            return 0x2;

        }
      }
    }
    return -1;
  }
}

// lo_validate_arg
// file message.c line 669
signed long int lo_validate_arg(enum anonymous_5 type, void *data, signed long int size)
{
  signed long int return_value_lo_validate_string_1;
  signed long int return_value_lo_validate_blob_2;
  if(!(size >= 0l))
    return (signed long int)-1;

  else
  {
    switch((signed int)type)
    {
      case LO_TRUE:

      case LO_FALSE:

      case LO_NIL:

      case LO_INFINITUM:
        return (signed long int)0;
      case LO_INT32:

      case LO_FLOAT:

      case LO_MIDI:

      case LO_CHAR:
        return (signed long int)(size >= (signed long int)4 ? 4 : -9911);
      case LO_INT64:

      case LO_TIMETAG:

      case LO_DOUBLE:
        return (signed long int)(size >= (signed long int)8 ? 8 : -9911);
      case LO_STRING:

      case LO_SYMBOL:
      {
        return_value_lo_validate_string_1=lo_validate_string((void *)(char *)data, size);
        return return_value_lo_validate_string_1;
      }
      case LO_BLOB:
      {
        return_value_lo_validate_blob_2=lo_validate_blob((void *)(struct _lo_blob *)data, size);
        return return_value_lo_validate_blob_2;
      }
      default:
        return (signed long int)-9909;
    }
    return (signed long int)-9906;
  }
}

// lo_validate_blob
// file message.c line 602
signed long int lo_validate_blob(void *data, signed long int size)
{
  signed long int i;
  signed long int end;
  signed long int len;
  unsigned int dsize;
  char *pos = (char *)data;
  if(!(size >= 0l))
    return (signed long int)-9911;

  else
  {
    dsize=htonl(*((unsigned int *)data));
    if(dsize >= 32769u)
      return (signed long int)-9911;

    else
    {
      end = (signed long int)(sizeof(unsigned int) /*4ul*/  + (unsigned long int)dsize);
      len = (signed long int)4 * ((end + (signed long int)3) / (signed long int)4);
      if(!(size >= len))
        return (signed long int)-9911;

      else
      {
        i = end;
        for( ; !(i >= len); i = i + 1l)
          if(!((signed int)pos[i] == 0))
            return (signed long int)-9914;

        return len;
      }
    }
  }
}

// lo_validate_bundle
// file message.c line 629
signed long int lo_validate_bundle(void *data, signed long int size)
{
  signed long int len = (signed long int)0;
  signed long int remain = size;
  char *pos = (char *)data;
  signed long int elem_len;
  len=lo_validate_string(data, size);
  if(!(len >= 0l))
    return (signed long int)-9911;

  else
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp((const char *)data, "#bundle");
    if(!(return_value_strcmp_1 == 0))
      return (signed long int)-9915;

    else
    {
      pos = pos + len;
      remain = remain - len;
      if(!(remain >= 8l))
        return (signed long int)-9911;

      else
      {
        pos = pos + (signed long int)8;
        remain = remain - (signed long int)8;
        while(remain >= 4l)
        {
          unsigned int return_value_htonl_2;
          return_value_htonl_2=htonl(*((unsigned int *)pos));
          elem_len = (signed long int)return_value_htonl_2;
          pos = pos + (signed long int)4;
          remain = remain - (signed long int)4;
          if(!(remain >= elem_len))
            return (signed long int)-9911;

          pos = pos + elem_len;
          remain = remain - elem_len;
        }
        if(!(remain == 0l))
          return (signed long int)-9911;

        else
          return size;
      }
    }
  }
}

// lo_validate_string
// file message.c line 573
signed long int lo_validate_string(void *data, signed long int size)
{
  signed long int i = (signed long int)0;
  signed long int len = (signed long int)0;
  char *pos = (char *)data;
  if(!(size >= 0l))
    return (signed long int)-9911;

  else
  {
    i = (signed long int)0;
    for( ; !(i >= size); i = i + 1l)
      if((signed int)pos[i] == 0)
      {
        len = (signed long int)4 * (i / (signed long int)4 + (signed long int)1);
        break;
      }

    if(len == 0l)
      return (signed long int)-9913;

    else
      if(!(size >= len))
        return (signed long int)-9911;

      else
      {
        for( ; !(i >= len); i = i + 1l)
          if(!((signed int)pos[i] == 0))
            return (signed long int)-9914;

        return len;
      }
  }
}

// lo_version
// file version.c line 25
void lo_version(char *verstr, signed int verstr_size, signed int *major, signed int *minor, char *extra, signed int extra_size, signed int *lt_major, signed int *lt_minor, signed int *lt_bug)
{
  signed int _maj;
  signed int _min;
  signed int _ltmaj;
  signed int _ltmin;
  signed int _ltbug;
  signed int _lt[3l] = { 9, 0, 2 };
  char ex[256l];
  signed int i;
  i=sscanf("0.28", "%d.%d%s", &_maj, &_min, (const void *)ex);
  if(extra_size >= 1 && !(extra == ((char *)NULL)))
    extra[(signed long int)0] = (char)0;

  if(!(major == ((signed int *)NULL)))
    *major = 0;

  if(!(minor == ((signed int *)NULL)))
    *minor = 0;

  if(i == 2 || i == 3)
  {
    if(!(major == ((signed int *)NULL)))
      *major = _maj;

    if(!(minor == ((signed int *)NULL)))
      *minor = _min;

    if(i == 3 && !(extra == ((char *)NULL)))
      strncpy(extra, ex, (unsigned long int)extra_size);

  }

  if(!(verstr == ((char *)NULL)))
    strncpy(verstr, "0.28", (unsigned long int)verstr_size);

  _ltmaj = _lt[(signed long int)0] - _lt[(signed long int)2];
  _ltmin = _lt[(signed long int)2];
  _ltbug = _lt[(signed long int)1];
  if(!(lt_major == ((signed int *)NULL)))
    *lt_major = _ltmaj;

  if(!(lt_minor == ((signed int *)NULL)))
    *lt_minor = _ltmin;

  if(!(lt_bug == ((signed int *)NULL)))
    *lt_bug = _ltbug;

}

// main
// file example_server.c line 36
signed int main()
{
  void *st;
  st=lo_server_thread_new("7770", error);
  lo_server_thread_add_method(st, (const char *)(void *)0, (const char *)(void *)0, generic_handler, (void *)0);
  lo_server_thread_add_method(st, "/foo/bar", "fi", foo_handler, (void *)0);
  lo_server_thread_add_method(st, "/quit", "", quit_handler, (void *)0);
  lo_server_thread_start(st);
  while(done == 0)
    usleep((unsigned int)1000);
  lo_server_thread_free(st);
  return 0;
}

// offset_pp
// file bundle.c line 364
static void offset_pp(signed int offset, signed int *state)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= (unsigned long int)offset); i = i + 1ul)
    if(state[(signed long int)i] == 0)
      printf("│        ");

    else
      printf("         ");
  if(state[(signed long int)offset] == 0)
    printf("├─");

  else
    printf("└─");
}

// pop_from_list
// file bundle.c line 61
static struct _lo_bundle ** pop_from_list(struct _lo_bundle **list, unsigned long int *len, unsigned long int *size)
{
  *len = *len - 1ul;
  return list;
}

// push_to_list
// file bundle.c line 48
static struct _lo_bundle ** push_to_list(struct _lo_bundle **list, struct _lo_bundle *ptr, unsigned long int *len, unsigned long int *size)
{
  if(*len >= *size)
  {
    *size = *size * (unsigned long int)2;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)list, *size * sizeof(struct _lo_bundle *) /*8ul*/ );
    list = (struct _lo_bundle **)return_value_realloc_1;
  }

  list[(signed long int)*len] = ptr;
  *len = *len + 1ul;
  return list;
}

// queue_data
// file server.c line 1878
static void queue_data(struct _lo_server *s, struct anonymous_3 ts, const char *path, struct _lo_message *msg, signed int sock)
{
  struct anonymous_4 *it = (struct anonymous_4 *)s->queued;
  struct anonymous_4 *prev = (struct anonymous_4 *)(void *)0;
  struct anonymous_4 *ins;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_4) /*40ul*/ );
  ins = (struct anonymous_4 *)return_value_calloc_1;
  ins->ts = ts;
  ins->path=strdup(path);
  ins->msg = msg;
  ins->sock = sock;
  while(!(it == ((struct anonymous_4 *)NULL)))
  {
    double return_value_lo_timetag_diff_2;
    return_value_lo_timetag_diff_2=lo_timetag_diff(it->ts, ts);
    if(return_value_lo_timetag_diff_2 > 0.0)
    {
      if(!(prev == ((struct anonymous_4 *)NULL)))
        prev->next = (void *)ins;

      else
      {
        s->queued = (void *)ins;
        ins->next = (void *)0;
      }
      ins->next = (void *)it;
      goto __CPROVER_DUMP_L8;
    }

    prev = it;
    it = (struct anonymous_4 *)it->next;
  }
  if(!(prev == ((struct anonymous_4 *)NULL)))
    prev->next = (void *)ins;

  else
    s->queued = (void *)ins;
  ins->next = (void *)0;

__CPROVER_DUMP_L8:
  ;
}

// quit_handler
// file example_server.c line 101
signed int quit_handler(const char *path, const char *types, union anonymous **argv, signed int argc, void *data, void *user_data)
{
  done = 1;
  printf("quiting\n\n");
  fflush(stdout);
  return 0;
}

// send_data
// file send.c line 427
static signed int send_data(struct _lo_address *a, struct _lo_server *from, char *data, const unsigned long int data_len)
{
  signed long int ret = (signed long int)0;
  signed int sock = -1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  unsigned char *return_value_slip_encode_6;
  if(data_len >= 32769ul)
  {
    a->errnum = 99;
    a->errstr = "Attempted to send message in excess of maximum message size";
    return -1;
  }

  else
  {
    if(a->ai == ((struct addrinfo *)NULL))
    {
      signed int return_value_lo_address_resolve_1;
      return_value_lo_address_resolve_1=lo_address_resolve(a);
      ret = (signed long int)return_value_lo_address_resolve_1;
      if(!(ret == 0l))
        return (signed int)ret;

    }

    if(!(from == ((struct _lo_server *)NULL)))
      tmp_if_expr_4 = a->protocol == 0x1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      sock = (from->sockets + (signed long int)0)->fd;

    else
      if(a->protocol == 0x1 && !(lo_client_sockets.udp == -1))
        sock = lo_client_sockets.udp;

      else
      {
        if(a->socket == -1)
        {
          signed int return_value_create_socket_2;
          return_value_create_socket_2=create_socket(a);
          ret = (signed long int)return_value_create_socket_2;
          if(!(ret == 0l))
            return (signed int)ret;

          if(!(from == ((struct _lo_server *)NULL)))
          {
            if(a->protocol == 0x4)
            {
              if(a->socket >= from->sources_len)
                tmp_if_expr_3 = (_Bool)1;

              else
                tmp_if_expr_3 = (from->sources + (signed long int)a->socket)->host == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_3)
              {
                lo_server_add_socket(from, a->socket, a, ((struct sockaddr_storage *)NULL), (unsigned int)0);
                a->ownsocket = 0;
              }

            }

          }

        }

        sock = a->socket;
      }
    if(a->protocol == 0x4)
    {
      if((LO_SLIP & (signed int)a->flags) == 0)
      {
        signed int size;
        unsigned int return_value_htonl_5;
        return_value_htonl_5=htonl((unsigned int)data_len);
        size = (signed int)return_value_htonl_5;
        ret=send(sock, (const void *)&size, sizeof(signed int) /*4ul*/ , 16384);
      }

    }

    if(!(ret == -1l))
    {
      if(a->protocol == 0x1)
      {
        struct addrinfo *ai;
        if(a->addr.size == sizeof(struct in_addr) /*4ul*/ )
          setsockopt(sock, 0, 32, (const void *)(const char *)&a->addr.a, (unsigned int)a->addr.size);

        if(a->ttl >= 0)
        {
          unsigned char ttl = (unsigned char)a->ttl;
          setsockopt(sock, 0, 33, (const void *)(const char *)&ttl, (unsigned int)sizeof(unsigned char) /*1ul*/ );
        }

        ai = a->ai;
        do
        {
          ret=sendto(sock, (const void *)data, data_len, 16384, ai->ai_addr, ai->ai_addrlen);
          ai = ai->ai_next;
        }
        while(ret == -1l && !(ai == ((struct addrinfo *)NULL)));
        if(ret == -1l && !(ai == ((struct addrinfo *)NULL)))
        {
          if(!(a->ai == ai))
            a->ai = ai;

        }

      }

      else
      {
        struct addrinfo *send_data__1__7__2__ai = a->ai;
        unsigned long int len = data_len;
        if(!((LO_SLIP & (signed int)a->flags) == 0))
        {
          return_value_slip_encode_6=slip_encode((unsigned char *)data, &len);
          data = (char *)return_value_slip_encode_6;
        }

        do
        {
          ret=send(sock, (const void *)data, len, 16384);
          if(a->protocol == 0x4)
            send_data__1__7__2__ai = send_data__1__7__2__ai->ai_next;

          else
            send_data__1__7__2__ai = ((struct addrinfo *)NULL);
        }
        while(ret == -1l && !(send_data__1__7__2__ai == ((struct addrinfo *)NULL)));
        if(ret == -1l && !(send_data__1__7__2__ai == ((struct addrinfo *)NULL)))
        {
          if(!(a->ai == send_data__1__7__2__ai))
            a->ai = send_data__1__7__2__ai;

        }

        if(!((LO_SLIP & (signed int)a->flags) == 0))
          free((void *)data);

      }
    }

    if(ret == -1l)
    {
      if(a->protocol == 0x4)
      {
        if(!(from == ((struct _lo_server *)NULL)))
          lo_server_del_socket(from, -1, a->socket);

        close(a->socket);
        a->socket = -1;
      }

      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      a->errnum = *return_value___errno_location_7;
      a->errstr = (const char *)(void *)0;
    }

    else
    {
      a->errnum = 0;
      a->errstr = (const char *)(void *)0;
    }
    return (signed int)ret;
  }
}

// slip_decode
// file server.c line 832
static signed int slip_decode(unsigned char **buffer, unsigned char *from, unsigned long int size, signed int *state, unsigned long int *bytesread)
{
  /* assertion from != ((void *)0) */
  assert(from != (unsigned char *)(void *)0);
  *bytesread = (unsigned long int)0;
  unsigned long int tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  do
  {
    tmp_post_1 = size;
    size = size - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    *bytesread = *bytesread + 1ul;
    switch(*state)
    {
      case 0:
        switch((signed int)*from)
        {
          case 0300:
            return 0;
          case 0333:
          {
            *state = 1;
            goto __CPROVER_DUMP_L10;
          }
          default:
          {
            tmp_post_2 = *buffer;
            *buffer = *buffer + 1l;
            tmp_post_3 = from;
            from = from + 1l;
            *tmp_post_2 = *tmp_post_3;
            goto __CPROVER_DUMP_L10;
          }
        }
      case 1:
      {
        switch((signed int)*from)
        {
          case 0334:
          {
            tmp_post_4 = *buffer;
            *buffer = *buffer + 1l;
            *tmp_post_4 = (unsigned char)0300;
            break;
          }
          case 0335:
          {
            tmp_post_5 = *buffer;
            *buffer = *buffer + 1l;
            *tmp_post_5 = (unsigned char)0333;
          }
        }
        *state = 0;
      }
    }

  __CPROVER_DUMP_L10:
    ;
  }
  while((_Bool)1);
  return 1;
}

// slip_encode
// file send.c line 401
static unsigned char * slip_encode(const unsigned char *data, unsigned long int *data_len)
{
  unsigned long int i;
  unsigned long int j = (unsigned long int)0;
  unsigned long int len = *data_len;
  unsigned char *slipdata;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(len * (unsigned long int)2);
  slipdata = (unsigned char *)return_value_malloc_1;
  i = (unsigned long int)0;
  unsigned long int tmp_post_2;
  unsigned long int tmp_post_3;
  unsigned long int tmp_post_4;
  unsigned long int tmp_post_5;
  unsigned long int tmp_post_6;
  for( ; !(i >= len); i = i + 1ul)
    switch((signed int)data[(signed long int)i])
    {
      case 0333:
      {
        tmp_post_2 = j;
        j = j + 1ul;
        slipdata[(signed long int)tmp_post_2] = (unsigned char)0333;
        tmp_post_3 = j;
        j = j + 1ul;
        slipdata[(signed long int)tmp_post_3] = (unsigned char)0335;
        break;
      }
      case 0300:
      {
        tmp_post_4 = j;
        j = j + 1ul;
        slipdata[(signed long int)tmp_post_4] = (unsigned char)0333;
        tmp_post_5 = j;
        j = j + 1ul;
        slipdata[(signed long int)tmp_post_5] = (unsigned char)0334;
        break;
      }
      default:
      {
        tmp_post_6 = j;
        j = j + 1ul;
        slipdata[(signed long int)tmp_post_6] = data[(signed long int)i];
      }
    }
  unsigned long int tmp_post_7 = j;
  j = j + 1ul;
  slipdata[(signed long int)tmp_post_7] = (unsigned char)0300;
  slipdata[(signed long int)j] = (unsigned char)0;
  *data_len = j;
  return slipdata;
}

// thread_func
// file server_thread.c line 193
static void thread_func(void *data)
{
  struct _lo_server_thread *st = (struct _lo_server_thread *)data;
  while(!(st->active == 0))
    lo_server_recv_noblock(st->s, 10);
  st->done = 1;
  pthread_exit((void *)0);
}

// walk_tree
// file bundle.c line 78
static struct _lo_bundle ** walk_tree(struct _lo_bundle **B, struct _lo_bundle *b, unsigned long int *len, unsigned long int *size, signed int *ret)
{
  unsigned long int i;
  signed int res;
  signed int return_value_is_in_list_1;
  return_value_is_in_list_1=is_in_list(B, b, len);
  if(!(return_value_is_in_list_1 == 0))
  {
    *ret = -1;
    return B;
  }

  else
  {
    B=push_to_list(B, b, len, size);
    res = 0;
    i = (unsigned long int)0;
    for( ; !(i >= b->len); i = i + 1ul)
      if((signed int)(b->elmnts + (signed long int)i)->type == LO_ELEMENT_BUNDLE)
      {
        B=walk_tree(B, (b->elmnts + (signed long int)i)->content.bundle, len, size, &res);
        if(!(res == 0))
          break;

      }

    B=pop_from_list(B, len, size);
    *ret = res;
    return B;
  }
}

