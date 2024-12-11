// #anon_enum$HLIST_NOALLOC=0$HLIST_ALLOC=1
// file utils.h line 74
enum anonymous$4 { HLIST_NOALLOC=0, HLIST_ALLOC=1 };

// tag-#anon#ST[ARR16{S64}$S64$'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$1;

// tag-#anon#ST[ARR32{U32}$U32$'encrypt_subkeys'||ARR32{U32}$U32$'decrypt_subkeys'|]
// file xcrypt.h line 60
struct anonymous;

// tag-#anon#ST[ARR64{S8}$S8$'hostname'||SYM#tag-auth_s#'creds'||SYM#tag-in_addr#'host'||S32'port'||S32'resolved'|]
// file globals.h line 54
struct anonymous$3;

// tag-#anon#ST[U32'ip'||S32'mask'|]
// file acl.h line 37
struct anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$2;

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

// tag-acl_t
// file acl.h line 32
enum acl_t { ACL_ALLOW=0, ACL_DENY=1 };

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-auth_s
// file auth.h line 34
struct auth_s;

// tag-config_s
// file config.h line 32
struct config_s;

// tag-hlist_s
// file utils.h line 59
struct hlist_s;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-md4_ctx
// file xcrypt.h line 66
struct md4_ctx;

// tag-md5_ctx
// file xcrypt.h line 77
struct md5_ctx;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-plist_s
// file utils.h line 67
struct plist_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rr_data_s
// file utils.h line 83
struct rr_data_s;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

// tag-thread_arg_s
// file utils.h line 105
struct thread_arg_s;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __ctype_toupper_loc
// file /usr/include/ctype.h line 83
extern const signed int ** __ctype_toupper_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject);
// __strcspn_c1$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link1(const char *__s$link1, signed int __reject$link1);
// __strcspn_c1$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link2(const char *__s$link2, signed int __reject$link2);
// __strcspn_c1$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link3(const char *__s$link3, signed int __reject$link3);
// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2);
// __strcspn_c2$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1);
// __strcspn_c2$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link2(const char *__s$link2, signed int __reject1$link2, signed int __reject2$link2);
// __strcspn_c2$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link3(const char *__s$link3, signed int __reject1$link3, signed int __reject2$link3);
// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3);
// __strcspn_c3$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1, signed int __reject3$link1);
// __strcspn_c3$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link2(const char *__s$link2, signed int __reject1$link2, signed int __reject2$link2, signed int __reject3$link2);
// __strcspn_c3$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link3(const char *__s$link3, signed int __reject1$link3, signed int __reject2$link3, signed int __reject3$link3);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __strtok_r
// file /usr/include/string.h line 353
extern char * __strtok_r(char *, const char *, char ** restrict );
// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp);
// __strtok_r_1c$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c$link1(char *__s$link1, char __sep$link1, char **__nextp$link1);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// acl_add
// file acl.c line 41
extern signed int acl_add(struct plist_s **rules, char *spec, enum acl_t acl);
// acl_check
// file acl.c line 101
extern enum acl_t acl_check(struct plist_s *rules, struct in_addr naddr);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoi$link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link1(const char *__nptr$link1);
// atoi$link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi$link2(const char *__nptr$link2);
// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr);
// atol$link1
// file /usr/include/stdlib.h line 283
static inline signed long int atol$link1(const char *__nptr$link1);
// atoll
// file /usr/include/stdlib.h line 292
static inline signed long long int atoll(const char *__nptr);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// chunked_data_send
// file http.c line 368
signed int chunked_data_send(signed int dst, signed int src);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// config_close
// file config.c line 169
extern void config_close(struct config_s *cf);
// config_count
// file config.c line 165
extern signed int config_count(struct config_s *cf);
// config_open
// file config.c line 43
extern struct config_s * config_open(const char *fname);
// config_pop
// file config.c line 153
extern char * config_pop(struct config_s *cf, const char *option);
// config_set
// file config.c line 149
extern void config_set(struct config_s *cf, char *option, char *value);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// copy_auth
// file auth.c line 50
extern struct auth_s * copy_auth(struct auth_s *dst, struct auth_s *src, signed int fullcopy);
// copy_rr_data
// file utils.c line 527
extern struct rr_data_s * copy_rr_data(struct rr_data_s *dst, struct rr_data_s *src);
// croak
// file utils.c line 53
extern void croak(const char *msg, signed int console);
// data_send
// file http.c line 316
signed int data_send(signed int dst, signed int src, signed long long int len);
// des_key_schedule
// file xcrypt.c line 415
static void des_key_schedule(const char *_rawkey, unsigned int *subkey);
// direct_request
// file direct.c line 179
extern struct rr_data_s * direct_request(void *cdata, struct rr_data_s *request);
// direct_tunnel
// file direct.c line 423
extern void direct_tunnel(void *thread_data);
// dump_auth
// file auth.h line 64
extern void dump_auth(struct auth_s *creds);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// dup_auth
// file auth.c line 77
extern struct auth_s * dup_auth(struct auth_s *creds, signed int fullcopy);
// dup_rr_data
// file utils.c line 564
extern struct rr_data_s * dup_rr_data(struct rr_data_s *data);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fnmatch
// file /usr/include/fnmatch.h line 56
extern signed int fnmatch(const char *, const char *, signed int);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// forward_request
// file forward.c line 318
extern struct rr_data_s * forward_request(void *thread_data, struct rr_data_s *request);
// forward_tunnel
// file forward.c line 796
extern void forward_tunnel(void *thread_data);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_rr_data
// file utils.c line 614
extern void free_rr_data(struct rr_data_s *data);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// from_base64
// file utils.c line 890
extern signed int from_base64(char *out, const char *in);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// gen_401_page
// file pages.c line 43
char * gen_401_page(const char *http, const char *host, signed int port);
// gen_407_page
// file pages.c line 29
char * gen_407_page(const char *http);
// gen_502_page
// file pages.c line 70
char * gen_502_page(const char *http, const char *msg);
// gen_denied_page
// file pages.c line 57
char * gen_denied_page(const char *ip);
// get_http_header_name
// file http.c line 54
extern char * get_http_header_name(const char *src);
// get_http_header_value
// file http.c line 67
extern char * get_http_header_value(const char *src);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// gl_des_ecb_crypt
// file xcrypt.h line 91
extern void gl_des_ecb_crypt(struct anonymous *ctx, const char *_from, char *_to, signed int mode);
// gl_des_is_weak_key
// file xcrypt.c line 306
extern _Bool gl_des_is_weak_key(const char *key);
// gl_des_makekey
// file xcrypt.c line 512
extern _Bool gl_des_makekey(struct anonymous *ctx, const char *key, unsigned long int keylen);
// gl_des_setkey
// file xcrypt.h line 89
extern void gl_des_setkey(struct anonymous *ctx, const char *key);
// headers_recv
// file http.c line 85
extern signed int headers_recv(signed int fd, struct rr_data_s *data);
// headers_send
// file http.c line 245
extern signed int headers_send(signed int fd, struct rr_data_s *data);
// hlist_add
// file utils.c line 259
extern struct hlist_s * hlist_add(struct hlist_s *list, char *key, char *value, enum anonymous$4 allockey, enum anonymous$4 allocvalue);
// hlist_count
// file utils.c line 370
extern signed int hlist_count(struct hlist_s *list);
// hlist_del
// file utils.c line 299
extern struct hlist_s * hlist_del(struct hlist_s *list, const char *key);
// hlist_dump
// file utils.c line 467
extern void hlist_dump(struct hlist_s *list);
// hlist_dup
// file utils.c line 285
extern struct hlist_s * hlist_dup(struct hlist_s *list);
// hlist_free
// file utils.c line 448
extern struct hlist_s * hlist_free(struct hlist_s *list);
// hlist_get
// file utils.c line 385
extern char * hlist_get(struct hlist_s *list, const char *key);
// hlist_in
// file utils.c line 355
extern signed int hlist_in(struct hlist_s *list, const char *key);
// hlist_mod
// file utils.c line 333
extern struct hlist_s * hlist_mod(struct hlist_s *list, char *key, char *value, signed int add);
// hlist_subcmp
// file utils.c line 401
extern signed int hlist_subcmp(struct hlist_s *list, const char *key, const char *substr);
// hlist_subcmp_all
// file utils.c line 423
extern signed int hlist_subcmp_all(struct hlist_s *list, const char *key, const char *substr);
// hmac_md5
// file xcrypt.h line 101
extern signed int hmac_md5(const void *key, unsigned long int keylen, const void *in, unsigned long int inlen, void *resbuf);
// host_connect
// file direct.c line 45
extern signed int host_connect(const char *hostname, signed int port);
// http_body_drop
// file http.c line 573
extern signed int http_body_drop(signed int fd, struct rr_data_s *response);
// http_body_send
// file http.c line 529
extern signed int http_body_send(signed int writefd, signed int readfd, struct rr_data_s *request, struct rr_data_s *response);
// http_has_body
// file http.c line 471
extern signed long long int http_has_body(struct rr_data_s *request, struct rr_data_s *response);
// http_parse_basic
// file http.c line 598
extern signed int http_parse_basic(struct hlist_s *headers, const char *header, struct auth_s *tcreds);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// is_http_header
// file http.c line 47
extern signed int is_http_header(const char *src);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// listen_add
// file main.c line 182
void listen_add(const char *service, struct plist_s **list, char *spec, signed int gateway);
// lowercase
// file utils.c line 734
extern char * lowercase(char *str);
// magic_auth_detect
// file forward.c line 827
extern void magic_auth_detect(const char *url);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// md4_buffer
// file xcrypt.h line 99
extern void * md4_buffer(const char *buffer, unsigned long int len, void *resblock);
// md4_finish_ctx
// file xcrypt.c line 665
extern void * md4_finish_ctx(struct md4_ctx *ctx, void *resbuf);
// md4_init_ctx
// file xcrypt.c line 636
extern void md4_init_ctx(struct md4_ctx *ctx);
// md4_process_block
// file xcrypt.c line 545
extern void md4_process_block(const void *buffer, unsigned long int len, struct md4_ctx *ctx);
// md4_process_bytes
// file xcrypt.c line 689
extern void md4_process_bytes(const void *buffer, unsigned long int len, struct md4_ctx *ctx);
// md4_read_ctx
// file xcrypt.c line 651
extern void * md4_read_ctx(struct md4_ctx *ctx, void *resbuf);
// md4_stream
// file xcrypt.c line 754
extern signed int md4_stream(struct _IO_FILE *stream, void *resblock);
// md5_buffer
// file xcrypt.h line 109
extern void * md5_buffer(const char *buffer, unsigned long int len, void *resblock);
// md5_finish_ctx
// file xcrypt.c line 929
extern void * md5_finish_ctx(struct md5_ctx *ctx, void *resbuf);
// md5_init_ctx
// file xcrypt.c line 896
extern void md5_init_ctx(struct md5_ctx *ctx);
// md5_process_block
// file xcrypt.c line 1117
extern void md5_process_block(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// md5_process_bytes
// file xcrypt.c line 1039
extern void md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx);
// md5_read_ctx
// file xcrypt.c line 913
extern void * md5_read_ctx(struct md5_ctx *ctx, void *resbuf);
// md5_stream
// file xcrypt.c line 956
extern signed int md5_stream(struct _IO_FILE *stream, void *resblock);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// memxor
// file xcrypt.c line 832
void * memxor(void *dest, const void *src, unsigned long int n);
// myexit
// file utils.c line 46
extern void myexit(signed int rc);
// new
// file utils.c line 722
extern char * new(unsigned long int size);
// new_auth
// file auth.c line 29
extern struct auth_s * new_auth(void);
// new_rr_data
// file utils.c line 501
extern struct rr_data_s * new_rr_data(void);
// noproxy_add
// file main.c line 276
struct plist_s * noproxy_add(struct plist_s *list, char *spec);
// noproxy_match
// file main.c line 290
signed int noproxy_match(const char *addr);
// ntlm2_calc_resp
// file ntlm.c line 67
static void ntlm2_calc_resp(char **nthash, signed int *ntlen, char **lmhash, signed int *lmlen, char *passnt2, char *challenge, signed int tbofs, signed int tblen);
// ntlm2_hash_password
// file ntlm.c line 189
extern char * ntlm2_hash_password(char *username, char *domain, char *password);
// ntlm2sr_calc_rest
// file ntlm.c line 126
static void ntlm2sr_calc_rest(char **nthash, signed int *ntlen, char **lmhash, signed int *lmlen, char *passnt, char *challenge);
// ntlm_calc_resp
// file ntlm.c line 50
static signed int ntlm_calc_resp(char **dst, char *keys, char *challenge);
// ntlm_hash_lm_password
// file ntlm.c line 152
extern char * ntlm_hash_lm_password(char *password);
// ntlm_hash_nt_password
// file ntlm.c line 174
extern char * ntlm_hash_nt_password(char *password);
// ntlm_request
// file ntlm.c line 211
extern signed int ntlm_request(char **dst, struct auth_s *creds);
// ntlm_response
// file ntlm.c line 298
extern signed int ntlm_response(char **dst, char *challenge, signed int challen, struct auth_s *creds);
// ntlm_set_key
// file ntlm.c line 35
static void ntlm_set_key(unsigned char *src, struct anonymous *context);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parent_add
// file main.c line 124
signed int parent_add(char *parent, signed int port);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// plist_add
// file utils.c line 71
extern struct plist_s * plist_add(struct plist_s *list, unsigned long int key, void *aux);
// plist_count
// file utils.c line 218
extern signed int plist_count(struct plist_s *list);
// plist_del
// file utils.c line 94
extern struct plist_s * plist_del(struct plist_s *list, unsigned long int key);
// plist_dump
// file utils.c line 138
extern void plist_dump(struct plist_s *list);
// plist_free
// file utils.c line 233
extern struct plist_s * plist_free(struct plist_s *list);
// plist_get
// file utils.c line 151
extern char * plist_get(struct plist_s *list, signed int key);
// plist_in
// file utils.c line 122
extern signed int plist_in(struct plist_s *list, unsigned long int key);
// plist_pop
// file utils.c line 178
extern signed int plist_pop(struct plist_s **list, void **aux);
// prepare_http_connect
// file forward.c line 722
extern signed int prepare_http_connect(signed int sd, struct auth_s *credentials, const char *thost);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// printmem
// file utils.c line 790
extern char * printmem(char *src, unsigned long int len, signed int bitwidth);
// printuc
// file ntlm.c line 271
static char * printuc(char *src, signed int len);
// proxy_authenticate
// file forward.c line 135
extern signed int proxy_authenticate(signed int *sd, struct rr_data_s *request, struct rr_data_s *response, struct auth_s *credentials);
// proxy_connect
// file forward.c line 52
extern signed int proxy_connect(struct auth_s *credentials);
// proxy_thread
// file main.c line 312
void * proxy_thread(void *thread_data);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setguardsize
// file /usr/include/pthread.h line 312
extern signed int pthread_attr_setguardsize(union pthread_attr_t *, unsigned long int);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$2 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// random
// file /usr/include/stdlib.h line 321
extern signed long int random(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// reset_rr_data
// file utils.c line 577
extern struct rr_data_s * reset_rr_data(struct rr_data_s *data);
// scanmem
// file utils.c line 803
extern char * scanmem(char *src, signed int bitwidth);
// scanner_hook
// file scanner.h line 39
extern signed int scanner_hook(struct rr_data_s *request, struct rr_data_s *response, struct auth_s *credentials, signed int cd, signed int *sd, signed long int maxKBs);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$1 *, struct anonymous$1 *, struct anonymous$1 *, struct timeval *);
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
// sighandler
// file main.c line 111
void sighandler(signed int p);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// so_closed
// file socket.c line 231
signed int so_closed(signed int fd);
// so_connect
// file socket.c line 95
signed int so_connect(struct in_addr host, signed int port);
// so_dataready
// file socket.c line 223
signed int so_dataready(signed int fd);
// so_listen
// file socket.c line 164
signed int so_listen(signed int port, struct in_addr source);
// so_recvln
// file socket.c line 252
signed int so_recvln(signed int fd, char **buf, signed int *size);
// so_recvtest
// file socket.c line 203
signed int so_recvtest(signed int fd);
// so_resolv
// file socket.c line 43
signed int so_resolv(struct in_addr *host, const char *name);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socks5_thread
// file main.c line 409
void * socks5_thread(void *thread_data);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srandom
// file /usr/include/stdlib.h line 324
extern void srandom(unsigned int);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlcat
// file utils.c line 691
extern unsigned long int strlcat(char *dst, const char *src, unsigned long int siz);
// strlcpy
// file utils.c line 664
extern unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// substr
// file utils.c line 481
extern char * substr(const char *src, signed int pos, signed int len);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// to_base64
// file utils.c line 862
extern void to_base64(unsigned char *out, const unsigned char *in, unsigned long int len, unsigned long int olen);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c);
// trimr
// file utils.c line 632
extern char * trimr(char *buf);
// tunnel
// file http.c line 425
extern signed int tunnel(signed int cd, signed int sd);
// tunnel_add
// file main.c line 217
void tunnel_add(struct plist_s **list, char *spec, signed int gateway);
// tunnel_thread
// file main.c line 380
void * tunnel_thread(void *thread_data);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unicode
// file utils.c line 755
extern signed int unicode(char **dst, char *src);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// uppercase
// file utils.c line 746
extern char * uppercase(char *str);
// urlencode
// file utils.c line 773
extern char * urlencode(const char *str);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// www_authenticate
// file direct.c line 59
signed int www_authenticate(signed int sd, struct rr_data_s *request, struct rr_data_s *response, struct auth_s *creds);

struct anonymous$1
{
  // fds_bits
  signed long int fds_bits[16l];
};

struct anonymous
{
  // encrypt_subkeys
  unsigned int encrypt_subkeys[32l];
  // decrypt_subkeys
  unsigned int decrypt_subkeys[32l];
};

struct auth_s
{
  // user
  char user[50l];
  // domain
  char domain[50l];
  // workstation
  char workstation[50l];
  // passlm
  char passlm[50l];
  // passnt
  char passnt[50l];
  // passntlm2
  char passntlm2[50l];
  // hashntlm2
  signed int hashntlm2;
  // hashnt
  signed int hashnt;
  // hashlm
  signed int hashlm;
  // flags
  unsigned int flags;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct anonymous$3
{
  // hostname
  char hostname[64l];
  // creds
  struct auth_s creds;
  // host
  struct in_addr host;
  // port
  signed int port;
  // resolved
  signed int resolved;
};

struct anonymous$0
{
  // ip
  unsigned int ip;
  // mask
  signed int mask;
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

union anonymous$2
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

struct config_s
{
  // options
  struct hlist_s *options;
};

struct hlist_s
{
  // key
  char *key;
  // value
  char *value;
  // islist
  signed int islist;
  // next
  struct hlist_s *next;
};

struct md4_ctx
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
  unsigned int buffer[32l];
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
  unsigned int buffer[32l];
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

struct plist_s
{
  // key
  unsigned long int key;
  // aux
  void *aux;
  // next
  struct plist_s *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rr_data_s
{
  // req
  signed int req;
  // headers
  struct hlist_s *headers;
  // code
  signed int code;
  // skip_http
  signed int skip_http;
  // body_len
  signed int body_len;
  // empty
  signed int empty;
  // port
  signed int port;
  // method
  char *method;
  // url
  char *url;
  // rel_url
  char *rel_url;
  // hostname
  char *hostname;
  // http
  char *http;
  // msg
  char *msg;
  // body
  char *body;
  // errmsg
  char *errmsg;
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

struct thread_arg_s
{
  // fd
  signed int fd;
  // target
  char *target;
  // addr
  struct sockaddr_in addr;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// base64
// file utils.c line 844
char base64[64l] = { (char)65, (char)66, (char)67, (char)68, (char)69, (char)70, (char)71, (char)72, (char)73, (char)74, (char)75, (char)76, (char)77, (char)78, (char)79, (char)80, (char)81, (char)82, (char)83, (char)84, (char)85, (char)86, (char)87, (char)88, (char)89, (char)90, (char)97, (char)98, (char)99, (char)100, (char)101, (char)102, (char)103, (char)104, (char)105, (char)106, (char)107, (char)108, (char)109, (char)110, (char)111, (char)112, (char)113, (char)114, (char)115, (char)116, (char)117, (char)118, (char)119, (char)120, (char)121, (char)122, (char)48, (char)49, (char)50, (char)51, (char)52, (char)53, (char)54, (char)55, (char)56, (char)57, (char)43, (char)47 };
// connection_list
// file main.c line 90
struct plist_s *connection_list = (struct plist_s *)(void *)0;
// connection_mtx
// file main.c line 91
union anonymous$2 connection_mtx = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// debug
// file main.c line 70
signed int debug = 0;
// encrypt_rotate_tab
// file xcrypt.c line 227
static const unsigned char encrypt_rotate_tab[16l] = { (const unsigned char)1, (const unsigned char)1, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)1, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)1 };
// fillbuf
// file xcrypt.c line 85
static const unsigned char fillbuf[64l] = { (const unsigned char)0x80, (const unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// g_creds
// file main.c line 72
struct auth_s *g_creds = (struct auth_s *)(void *)0;
// header_list
// file main.c line 103
struct hlist_s *header_list = (struct hlist_s *)(void *)0;
// hexindex
// file utils.c line 39
signed int hexindex[128l] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1, -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
// hextab
// file utils.c line 38
char hextab[17l] = { (char)48, (char)49, (char)50, (char)51, (char)52, (char)53, (char)54, (char)55, (char)56, (char)57, (char)65, (char)66, (char)67, (char)68, (char)69, (char)70, (char)0 };
// index64
// file utils.c line 852
signed int index64[128l] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1 };
// leftkey_swap
// file xcrypt.c line 207
static const unsigned int leftkey_swap[16l] = { (const unsigned int)0x00000000, (const unsigned int)0x00000001, (const unsigned int)0x00000100, (const unsigned int)0x00000101, (const unsigned int)0x00010000, (const unsigned int)0x00010001, (const unsigned int)0x00010100, (const unsigned int)0x00010101, (const unsigned int)0x01000000, (const unsigned int)0x01000001, (const unsigned int)0x01000100, (const unsigned int)0x01000101, (const unsigned int)0x01010000, (const unsigned int)0x01010001, (const unsigned int)0x01010100, (const unsigned int)0x01010101 };
// noproxy_list
// file main.c line 106
struct plist_s *noproxy_list = (struct plist_s *)(void *)0;
// ntlmbasic
// file main.c line 75
signed int ntlmbasic = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// parent_count
// file main.c line 96
signed int parent_count = 0;
// parent_curr
// file forward.c line 41
signed int parent_curr = 0;
// parent_list
// file main.c line 97
struct plist_s *parent_list = (struct plist_s *)(void *)0;
// parent_mtx
// file forward.c line 42
union anonymous$2 parent_mtx = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// quit
// file main.c line 74
signed int quit = 0;
// rightkey_swap
// file xcrypt.c line 214
static const unsigned int rightkey_swap[16l] = { (const unsigned int)0x00000000, (const unsigned int)0x01000000, (const unsigned int)0x00010000, (const unsigned int)0x01010000, (const unsigned int)0x00000100, (const unsigned int)0x01000100, (const unsigned int)0x00010100, (const unsigned int)0x01010100, (const unsigned int)0x00000001, (const unsigned int)0x01000001, (const unsigned int)0x00010001, (const unsigned int)0x01010001, (const unsigned int)0x00000101, (const unsigned int)0x01000101, (const unsigned int)0x00010101, (const unsigned int)0x01010101 };
// sbox1
// file xcrypt.c line 91
static const unsigned int sbox1[64l] = { (const unsigned int)0x01010400, (const unsigned int)0x00000000, (const unsigned int)0x00010000, (const unsigned int)0x01010404, (const unsigned int)0x01010004, (const unsigned int)0x00010404, (const unsigned int)0x00000004, (const unsigned int)0x00010000, (const unsigned int)0x00000400, (const unsigned int)0x01010400, (const unsigned int)0x01010404, (const unsigned int)0x00000400, (const unsigned int)0x01000404, (const unsigned int)0x01010004, (const unsigned int)0x01000000, (const unsigned int)0x00000004, (const unsigned int)0x00000404, (const unsigned int)0x01000400, (const unsigned int)0x01000400, (const unsigned int)0x00010400, (const unsigned int)0x00010400, (const unsigned int)0x01010000, (const unsigned int)0x01010000, (const unsigned int)0x01000404, (const unsigned int)0x00010004, (const unsigned int)0x01000004, (const unsigned int)0x01000004, (const unsigned int)0x00010004, (const unsigned int)0x00000000, (const unsigned int)0x00000404, (const unsigned int)0x00010404, (const unsigned int)0x01000000, (const unsigned int)0x00010000, (const unsigned int)0x01010404, (const unsigned int)0x00000004, (const unsigned int)0x01010000, (const unsigned int)0x01010400, (const unsigned int)0x01000000, (const unsigned int)0x01000000, (const unsigned int)0x00000400, (const unsigned int)0x01010004, (const unsigned int)0x00010000, (const unsigned int)0x00010400, (const unsigned int)0x01000004, (const unsigned int)0x00000400, (const unsigned int)0x00000004, (const unsigned int)0x01000404, (const unsigned int)0x00010404, (const unsigned int)0x01010404, (const unsigned int)0x00010004, (const unsigned int)0x01010000, (const unsigned int)0x01000404, (const unsigned int)0x01000004, (const unsigned int)0x00000404, (const unsigned int)0x00010404, (const unsigned int)0x01010400, (const unsigned int)0x00000404, (const unsigned int)0x01000400, (const unsigned int)0x01000400, (const unsigned int)0x00000000, (const unsigned int)0x00010004, (const unsigned int)0x00010400, (const unsigned int)0x00000000, (const unsigned int)0x01010004 };
// sbox2
// file xcrypt.c line 105
static const unsigned int sbox2[64l] = { 0x80108020, 0x80008000, (const unsigned int)0x00008000, (const unsigned int)0x00108020, (const unsigned int)0x00100000, (const unsigned int)0x00000020, 0x80100020, 0x80008020, 0x80000020, 0x80108020, 0x80108000, 0x80000000, 0x80008000, (const unsigned int)0x00100000, (const unsigned int)0x00000020, 0x80100020, (const unsigned int)0x00108000, (const unsigned int)0x00100020, 0x80008020, (const unsigned int)0x00000000, 0x80000000, (const unsigned int)0x00008000, (const unsigned int)0x00108020, 0x80100000, (const unsigned int)0x00100020, 0x80000020, (const unsigned int)0x00000000, (const unsigned int)0x00108000, (const unsigned int)0x00008020, 0x80108000, 0x80100000, (const unsigned int)0x00008020, (const unsigned int)0x00000000, (const unsigned int)0x00108020, 0x80100020, (const unsigned int)0x00100000, 0x80008020, 0x80100000, 0x80108000, (const unsigned int)0x00008000, 0x80100000, 0x80008000, (const unsigned int)0x00000020, 0x80108020, (const unsigned int)0x00108020, (const unsigned int)0x00000020, (const unsigned int)0x00008000, 0x80000000, (const unsigned int)0x00008020, 0x80108000, (const unsigned int)0x00100000, 0x80000020, (const unsigned int)0x00100020, 0x80008020, 0x80000020, (const unsigned int)0x00100020, (const unsigned int)0x00108000, (const unsigned int)0x00000000, 0x80008000, (const unsigned int)0x00008020, 0x80000000, 0x80100020, 0x80108020, (const unsigned int)0x00108000 };
// sbox3
// file xcrypt.c line 119
static const unsigned int sbox3[64l] = { (const unsigned int)0x00000208, (const unsigned int)0x08020200, (const unsigned int)0x00000000, (const unsigned int)0x08020008, (const unsigned int)0x08000200, (const unsigned int)0x00000000, (const unsigned int)0x00020208, (const unsigned int)0x08000200, (const unsigned int)0x00020008, (const unsigned int)0x08000008, (const unsigned int)0x08000008, (const unsigned int)0x00020000, (const unsigned int)0x08020208, (const unsigned int)0x00020008, (const unsigned int)0x08020000, (const unsigned int)0x00000208, (const unsigned int)0x08000000, (const unsigned int)0x00000008, (const unsigned int)0x08020200, (const unsigned int)0x00000200, (const unsigned int)0x00020200, (const unsigned int)0x08020000, (const unsigned int)0x08020008, (const unsigned int)0x00020208, (const unsigned int)0x08000208, (const unsigned int)0x00020200, (const unsigned int)0x00020000, (const unsigned int)0x08000208, (const unsigned int)0x00000008, (const unsigned int)0x08020208, (const unsigned int)0x00000200, (const unsigned int)0x08000000, (const unsigned int)0x08020200, (const unsigned int)0x08000000, (const unsigned int)0x00020008, (const unsigned int)0x00000208, (const unsigned int)0x00020000, (const unsigned int)0x08020200, (const unsigned int)0x08000200, (const unsigned int)0x00000000, (const unsigned int)0x00000200, (const unsigned int)0x00020008, (const unsigned int)0x08020208, (const unsigned int)0x08000200, (const unsigned int)0x08000008, (const unsigned int)0x00000200, (const unsigned int)0x00000000, (const unsigned int)0x08020008, (const unsigned int)0x08000208, (const unsigned int)0x00020000, (const unsigned int)0x08000000, (const unsigned int)0x08020208, (const unsigned int)0x00000008, (const unsigned int)0x00020208, (const unsigned int)0x00020200, (const unsigned int)0x08000008, (const unsigned int)0x08020000, (const unsigned int)0x08000208, (const unsigned int)0x00000208, (const unsigned int)0x08020000, (const unsigned int)0x00020208, (const unsigned int)0x00000008, (const unsigned int)0x08020008, (const unsigned int)0x00020200 };
// sbox4
// file xcrypt.c line 133
static const unsigned int sbox4[64l] = { (const unsigned int)0x00802001, (const unsigned int)0x00002081, (const unsigned int)0x00002081, (const unsigned int)0x00000080, (const unsigned int)0x00802080, (const unsigned int)0x00800081, (const unsigned int)0x00800001, (const unsigned int)0x00002001, (const unsigned int)0x00000000, (const unsigned int)0x00802000, (const unsigned int)0x00802000, (const unsigned int)0x00802081, (const unsigned int)0x00000081, (const unsigned int)0x00000000, (const unsigned int)0x00800080, (const unsigned int)0x00800001, (const unsigned int)0x00000001, (const unsigned int)0x00002000, (const unsigned int)0x00800000, (const unsigned int)0x00802001, (const unsigned int)0x00000080, (const unsigned int)0x00800000, (const unsigned int)0x00002001, (const unsigned int)0x00002080, (const unsigned int)0x00800081, (const unsigned int)0x00000001, (const unsigned int)0x00002080, (const unsigned int)0x00800080, (const unsigned int)0x00002000, (const unsigned int)0x00802080, (const unsigned int)0x00802081, (const unsigned int)0x00000081, (const unsigned int)0x00800080, (const unsigned int)0x00800001, (const unsigned int)0x00802000, (const unsigned int)0x00802081, (const unsigned int)0x00000081, (const unsigned int)0x00000000, (const unsigned int)0x00000000, (const unsigned int)0x00802000, (const unsigned int)0x00002080, (const unsigned int)0x00800080, (const unsigned int)0x00800081, (const unsigned int)0x00000001, (const unsigned int)0x00802001, (const unsigned int)0x00002081, (const unsigned int)0x00002081, (const unsigned int)0x00000080, (const unsigned int)0x00802081, (const unsigned int)0x00000081, (const unsigned int)0x00000001, (const unsigned int)0x00002000, (const unsigned int)0x00800001, (const unsigned int)0x00002001, (const unsigned int)0x00802080, (const unsigned int)0x00800081, (const unsigned int)0x00002001, (const unsigned int)0x00002080, (const unsigned int)0x00800000, (const unsigned int)0x00802001, (const unsigned int)0x00000080, (const unsigned int)0x00800000, (const unsigned int)0x00002000, (const unsigned int)0x00802080 };
// sbox5
// file xcrypt.c line 147
static const unsigned int sbox5[64l] = { (const unsigned int)0x00000100, (const unsigned int)0x02080100, (const unsigned int)0x02080000, (const unsigned int)0x42000100, (const unsigned int)0x00080000, (const unsigned int)0x00000100, (const unsigned int)0x40000000, (const unsigned int)0x02080000, (const unsigned int)0x40080100, (const unsigned int)0x00080000, (const unsigned int)0x02000100, (const unsigned int)0x40080100, (const unsigned int)0x42000100, (const unsigned int)0x42080000, (const unsigned int)0x00080100, (const unsigned int)0x40000000, (const unsigned int)0x02000000, (const unsigned int)0x40080000, (const unsigned int)0x40080000, (const unsigned int)0x00000000, (const unsigned int)0x40000100, (const unsigned int)0x42080100, (const unsigned int)0x42080100, (const unsigned int)0x02000100, (const unsigned int)0x42080000, (const unsigned int)0x40000100, (const unsigned int)0x00000000, (const unsigned int)0x42000000, (const unsigned int)0x02080100, (const unsigned int)0x02000000, (const unsigned int)0x42000000, (const unsigned int)0x00080100, (const unsigned int)0x00080000, (const unsigned int)0x42000100, (const unsigned int)0x00000100, (const unsigned int)0x02000000, (const unsigned int)0x40000000, (const unsigned int)0x02080000, (const unsigned int)0x42000100, (const unsigned int)0x40080100, (const unsigned int)0x02000100, (const unsigned int)0x40000000, (const unsigned int)0x42080000, (const unsigned int)0x02080100, (const unsigned int)0x40080100, (const unsigned int)0x00000100, (const unsigned int)0x02000000, (const unsigned int)0x42080000, (const unsigned int)0x42080100, (const unsigned int)0x00080100, (const unsigned int)0x42000000, (const unsigned int)0x42080100, (const unsigned int)0x02080000, (const unsigned int)0x00000000, (const unsigned int)0x40080000, (const unsigned int)0x42000000, (const unsigned int)0x00080100, (const unsigned int)0x02000100, (const unsigned int)0x40000100, (const unsigned int)0x00080000, (const unsigned int)0x00000000, (const unsigned int)0x40080000, (const unsigned int)0x02080100, (const unsigned int)0x40000100 };
// sbox6
// file xcrypt.c line 161
static const unsigned int sbox6[64l] = { (const unsigned int)0x20000010, (const unsigned int)0x20400000, (const unsigned int)0x00004000, (const unsigned int)0x20404010, (const unsigned int)0x20400000, (const unsigned int)0x00000010, (const unsigned int)0x20404010, (const unsigned int)0x00400000, (const unsigned int)0x20004000, (const unsigned int)0x00404010, (const unsigned int)0x00400000, (const unsigned int)0x20000010, (const unsigned int)0x00400010, (const unsigned int)0x20004000, (const unsigned int)0x20000000, (const unsigned int)0x00004010, (const unsigned int)0x00000000, (const unsigned int)0x00400010, (const unsigned int)0x20004010, (const unsigned int)0x00004000, (const unsigned int)0x00404000, (const unsigned int)0x20004010, (const unsigned int)0x00000010, (const unsigned int)0x20400010, (const unsigned int)0x20400010, (const unsigned int)0x00000000, (const unsigned int)0x00404010, (const unsigned int)0x20404000, (const unsigned int)0x00004010, (const unsigned int)0x00404000, (const unsigned int)0x20404000, (const unsigned int)0x20000000, (const unsigned int)0x20004000, (const unsigned int)0x00000010, (const unsigned int)0x20400010, (const unsigned int)0x00404000, (const unsigned int)0x20404010, (const unsigned int)0x00400000, (const unsigned int)0x00004010, (const unsigned int)0x20000010, (const unsigned int)0x00400000, (const unsigned int)0x20004000, (const unsigned int)0x20000000, (const unsigned int)0x00004010, (const unsigned int)0x20000010, (const unsigned int)0x20404010, (const unsigned int)0x00404000, (const unsigned int)0x20400000, (const unsigned int)0x00404010, (const unsigned int)0x20404000, (const unsigned int)0x00000000, (const unsigned int)0x20400010, (const unsigned int)0x00000010, (const unsigned int)0x00004000, (const unsigned int)0x20400000, (const unsigned int)0x00404010, (const unsigned int)0x00004000, (const unsigned int)0x00400010, (const unsigned int)0x20004010, (const unsigned int)0x00000000, (const unsigned int)0x20404000, (const unsigned int)0x20000000, (const unsigned int)0x00400010, (const unsigned int)0x20004010 };
// sbox7
// file xcrypt.c line 175
static const unsigned int sbox7[64l] = { (const unsigned int)0x00200000, (const unsigned int)0x04200002, (const unsigned int)0x04000802, (const unsigned int)0x00000000, (const unsigned int)0x00000800, (const unsigned int)0x04000802, (const unsigned int)0x00200802, (const unsigned int)0x04200800, (const unsigned int)0x04200802, (const unsigned int)0x00200000, (const unsigned int)0x00000000, (const unsigned int)0x04000002, (const unsigned int)0x00000002, (const unsigned int)0x04000000, (const unsigned int)0x04200002, (const unsigned int)0x00000802, (const unsigned int)0x04000800, (const unsigned int)0x00200802, (const unsigned int)0x00200002, (const unsigned int)0x04000800, (const unsigned int)0x04000002, (const unsigned int)0x04200000, (const unsigned int)0x04200800, (const unsigned int)0x00200002, (const unsigned int)0x04200000, (const unsigned int)0x00000800, (const unsigned int)0x00000802, (const unsigned int)0x04200802, (const unsigned int)0x00200800, (const unsigned int)0x00000002, (const unsigned int)0x04000000, (const unsigned int)0x00200800, (const unsigned int)0x04000000, (const unsigned int)0x00200800, (const unsigned int)0x00200000, (const unsigned int)0x04000802, (const unsigned int)0x04000802, (const unsigned int)0x04200002, (const unsigned int)0x04200002, (const unsigned int)0x00000002, (const unsigned int)0x00200002, (const unsigned int)0x04000000, (const unsigned int)0x04000800, (const unsigned int)0x00200000, (const unsigned int)0x04200800, (const unsigned int)0x00000802, (const unsigned int)0x00200802, (const unsigned int)0x04200800, (const unsigned int)0x00000802, (const unsigned int)0x04000002, (const unsigned int)0x04200802, (const unsigned int)0x04200000, (const unsigned int)0x00200800, (const unsigned int)0x00000000, (const unsigned int)0x00000002, (const unsigned int)0x04200802, (const unsigned int)0x00000000, (const unsigned int)0x00200802, (const unsigned int)0x04200000, (const unsigned int)0x00000800, (const unsigned int)0x04000002, (const unsigned int)0x04000800, (const unsigned int)0x00000800, (const unsigned int)0x00200002 };
// sbox8
// file xcrypt.c line 189
static const unsigned int sbox8[64l] = { (const unsigned int)0x10001040, (const unsigned int)0x00001000, (const unsigned int)0x00040000, (const unsigned int)0x10041040, (const unsigned int)0x10000000, (const unsigned int)0x10001040, (const unsigned int)0x00000040, (const unsigned int)0x10000000, (const unsigned int)0x00040040, (const unsigned int)0x10040000, (const unsigned int)0x10041040, (const unsigned int)0x00041000, (const unsigned int)0x10041000, (const unsigned int)0x00041040, (const unsigned int)0x00001000, (const unsigned int)0x00000040, (const unsigned int)0x10040000, (const unsigned int)0x10000040, (const unsigned int)0x10001000, (const unsigned int)0x00001040, (const unsigned int)0x00041000, (const unsigned int)0x00040040, (const unsigned int)0x10040040, (const unsigned int)0x10041000, (const unsigned int)0x00001040, (const unsigned int)0x00000000, (const unsigned int)0x00000000, (const unsigned int)0x10040040, (const unsigned int)0x10000040, (const unsigned int)0x10001000, (const unsigned int)0x00041040, (const unsigned int)0x00040000, (const unsigned int)0x00041040, (const unsigned int)0x00040000, (const unsigned int)0x10041000, (const unsigned int)0x00001000, (const unsigned int)0x00000040, (const unsigned int)0x10040040, (const unsigned int)0x00001000, (const unsigned int)0x00041040, (const unsigned int)0x10001000, (const unsigned int)0x00000040, (const unsigned int)0x10000040, (const unsigned int)0x10040000, (const unsigned int)0x10040040, (const unsigned int)0x10000000, (const unsigned int)0x00040000, (const unsigned int)0x10001040, (const unsigned int)0x00000000, (const unsigned int)0x10041040, (const unsigned int)0x00040040, (const unsigned int)0x10000040, (const unsigned int)0x10040000, (const unsigned int)0x10001000, (const unsigned int)0x10001040, (const unsigned int)0x00000000, (const unsigned int)0x10041040, (const unsigned int)0x00041000, (const unsigned int)0x00041000, (const unsigned int)0x00001040, (const unsigned int)0x00001040, (const unsigned int)0x00040040, (const unsigned int)0x10000000, (const unsigned int)0x10041000 };
// scanner_agent_list
// file main.c line 105
struct plist_s *scanner_agent_list = (struct plist_s *)(void *)0;
// scanner_plugin
// file main.c line 77
signed int scanner_plugin = 0;
// scanner_plugin_maxsize
// file main.c line 78
signed long int scanner_plugin_maxsize = (signed long int)0;
// serialize
// file main.c line 76
signed int serialize = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// threads_list
// file main.c line 84
struct plist_s *threads_list = (struct plist_s *)(void *)0;
// threads_mtx
// file main.c line 85
union anonymous$2 threads_mtx = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// users_list
// file main.c line 104
struct hlist_s *users_list = (struct hlist_s *)(void *)0;
// weak_keys
// file xcrypt.c line 238
static const unsigned char weak_keys[64l][8l] = { { (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x00 },
    { (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x0e },
    { (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xf0 },
    { (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe },
    { (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0x0e },
    { (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0x00 },
    { (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0xfe },
    { (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0xf0 },
    { (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0xf0 },
    { (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0xfe },
    { (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0x00 },
    { (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0x0e },
    { (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe },
    { (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xf0 },
    { (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x0e },
    { (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00 },
    { (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0e },
    { (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x00 },
    { (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xfe },
    { (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xf0 },
    { (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0x00 },
    { (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0x0e },
    { (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0xf0 },
    { (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0xfe },
    { (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0xfe },
    { (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0xf0 },
    { (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0x0e },
    { (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0x00 },
    { (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xf0 },
    { (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xfe },
    { (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x00 },
    { (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x0e },
    { (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xf0 },
    { (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xfe },
    { (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x00 },
    { (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x0e },
    { (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0xfe },
    { (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0xf0 },
    { (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0x0e },
    { (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0x00 },
    { (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0x00 },
    { (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0x0e },
    { (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0xf0 },
    { (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0xfe },
    { (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x0e },
    { (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x00 },
    { (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xfe },
    { (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xf0 },
    { (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe },
    { (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x0e, (const unsigned char)0xf0 },
    { (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xf0, (const unsigned char)0x0e },
    { (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x00 },
    { (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x00, (const unsigned char)0xf0 },
    { (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x0e, (const unsigned char)0xfe },
    { (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xf0, (const unsigned char)0x00 },
    { (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0xfe, (const unsigned char)0x0e },
    { (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x00, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x00, (const unsigned char)0x0e },
    { (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0x1e, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0x0e, (const unsigned char)0x00 },
    { (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xf0, (const unsigned char)0xfe },
    { (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xfe, (const unsigned char)0xf0 },
    { (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x00, (const unsigned char)0x00 },
    { (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x1e, (const unsigned char)0x1e, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0x0e, (const unsigned char)0x0e },
    { (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xe0, (const unsigned char)0xe0, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xf0, (const unsigned char)0xf0 },
    { (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe, (const unsigned char)0xfe } };

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32$1;
  return_value___builtin_bswap32$1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32$1;
}

// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
    if((signed int)__s[(signed long int)__result] == __reject)
      break;

  return __result;
}

// __strcspn_c1$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link1(const char *__s$link1, signed int __reject$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject$link1)
      break;

  return __result$link1;
}

// __strcspn_c1$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link2(const char *__s$link2, signed int __reject$link2)
{
  unsigned long int __result$link2 = (unsigned long int)0;
  for( ; !((signed int)__s$link2[(signed long int)__result$link2] == 0); __result$link2 = __result$link2 + 1ul)
    if((signed int)__s$link2[(signed long int)__result$link2] == __reject$link2)
      break;

  return __result$link2;
}

// __strcspn_c1$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link3(const char *__s$link3, signed int __reject$link3)
{
  unsigned long int __result$link3 = (unsigned long int)0;
  for( ; !((signed int)__s$link3[(signed long int)__result$link3] == 0); __result$link3 = __result$link3 + 1ul)
    if((signed int)__s$link3[(signed long int)__result$link3] == __reject$link3)
      break;

  return __result$link3;
}

// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

  }
  return __result;
}

// __strcspn_c2$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
  {
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject1$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject2$link1)
      break;

  }
  return __result$link1;
}

// __strcspn_c2$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link2(const char *__s$link2, signed int __reject1$link2, signed int __reject2$link2)
{
  unsigned long int __result$link2 = (unsigned long int)0;
  for( ; !((signed int)__s$link2[(signed long int)__result$link2] == 0); __result$link2 = __result$link2 + 1ul)
  {
    if((signed int)__s$link2[(signed long int)__result$link2] == __reject1$link2)
      break;

    if((signed int)__s$link2[(signed long int)__result$link2] == __reject2$link2)
      break;

  }
  return __result$link2;
}

// __strcspn_c2$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link3(const char *__s$link3, signed int __reject1$link3, signed int __reject2$link3)
{
  unsigned long int __result$link3 = (unsigned long int)0;
  for( ; !((signed int)__s$link3[(signed long int)__result$link3] == 0); __result$link3 = __result$link3 + 1ul)
  {
    if((signed int)__s$link3[(signed long int)__result$link3] == __reject1$link3)
      break;

    if((signed int)__s$link3[(signed long int)__result$link3] == __reject2$link3)
      break;

  }
  return __result$link3;
}

// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

    if((signed int)__s[(signed long int)__result] == __reject3)
      break;

  }
  return __result;
}

// __strcspn_c3$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1, signed int __reject3$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
  {
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject1$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject2$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject3$link1)
      break;

  }
  return __result$link1;
}

// __strcspn_c3$link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link2(const char *__s$link2, signed int __reject1$link2, signed int __reject2$link2, signed int __reject3$link2)
{
  unsigned long int __result$link2 = (unsigned long int)0;
  for( ; !((signed int)__s$link2[(signed long int)__result$link2] == 0); __result$link2 = __result$link2 + 1ul)
  {
    if((signed int)__s$link2[(signed long int)__result$link2] == __reject1$link2)
      break;

    if((signed int)__s$link2[(signed long int)__result$link2] == __reject2$link2)
      break;

    if((signed int)__s$link2[(signed long int)__result$link2] == __reject3$link2)
      break;

  }
  return __result$link2;
}

// __strcspn_c3$link3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link3(const char *__s$link3, signed int __reject1$link3, signed int __reject2$link3, signed int __reject3$link3)
{
  unsigned long int __result$link3 = (unsigned long int)0;
  for( ; !((signed int)__s$link3[(signed long int)__result$link3] == 0); __result$link3 = __result$link3 + 1ul)
  {
    if((signed int)__s$link3[(signed long int)__result$link3] == __reject1$link3)
      break;

    if((signed int)__s$link3[(signed long int)__result$link3] == __reject2$link3)
      break;

    if((signed int)__s$link3[(signed long int)__result$link3] == __reject3$link3)
      break;

  }
  return __result$link3;
}

// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp)
{
  char *__result;
  if(__s == ((char *)NULL))
    __s = *__nextp;

  for( ; *__s == __sep; __s = __s + 1l)
    ;
  __result = (char *)(void *)0;
  char *tmp_post$1;
  char *tmp_post$2;
  if(!((signed int)*__s == 0))
  {
    tmp_post$1 = __s;
    __s = __s + 1l;
    __result = tmp_post$1;
    while(!((signed int)*__s == 0))
    {
      tmp_post$2 = __s;
      __s = __s + 1l;
      if(*tmp_post$2 == __sep)
      {
        __s[(signed long int)-1] = (char)0;
        break;
      }

    }
  }

  *__nextp = __s;
  return __result;
}

// __strtok_r_1c$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c$link1(char *__s$link1, char __sep$link1, char **__nextp$link1)
{
  char *__result$link1;
  if(__s$link1 == ((char *)NULL))
    __s$link1 = *__nextp$link1;

  for( ; *__s$link1 == __sep$link1; __s$link1 = __s$link1 + 1l)
    ;
  __result$link1 = (char *)(void *)0;
  char *tmp_post$1$link1;
  char *tmp_post$2$link1;
  if(!((signed int)*__s$link1 == 0))
  {
    tmp_post$1$link1 = __s$link1;
    __s$link1 = __s$link1 + 1l;
    __result$link1 = tmp_post$1$link1;
    while(!((signed int)*__s$link1 == 0))
    {
      tmp_post$2$link1 = __s$link1;
      __s$link1 = __s$link1 + 1l;
      if(*tmp_post$2$link1 == __sep$link1)
      {
        __s$link1[(signed long int)-1] = (char)0;
        break;
      }

    }
  }

  *__nextp$link1 = __s$link1;
  return __result$link1;
}

// acl_add
// file acl.c line 41
extern signed int acl_add(struct plist_s **rules, char *spec, enum acl_t acl)
{
  struct in_addr source;
  struct anonymous$0 *aux;
  signed int i;
  signed int mask = 32;
  char *tmp;
  unsigned long int tmp_statement_expression$3;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  signed int tmp_statement_expression$12;
  signed int tmp_statement_expression$10;
  signed int return_value_so_resolv$9;
  char *return_value_inet_ntoa$14;
  if(rules == ((struct plist_s **)NULL))
    return 0;

  else
  {
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(spec);
    spec = return_value___strdup$1;
    char *return_value_new$2;
    return_value_new$2=new(sizeof(struct anonymous$0) /*8ul*/ );
    aux = (struct anonymous$0 *)return_value_new$2;
    char __r0;
    char __r1;
    char __r2;
    unsigned long int return_value___builtin_strcspn$4;
    return_value___builtin_strcspn$4=__builtin_strcspn(spec, "/");
    tmp_statement_expression$3 = return_value___builtin_strcspn$4;
    i = (signed int)tmp_statement_expression$3;
    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(spec);
    if(!((unsigned long int)i >= return_value_strlen$8))
    {
      spec[(signed long int)i] = (char)0;
      signed long int return_value_strtol$5;
      return_value_strtol$5=strtol(spec + (signed long int)i + (signed long int)1, &tmp, 10);
      mask = (signed int)return_value_strtol$5;
      if(mask >= 33 || !(mask >= 0))
        tmp_if_expr$6 = (_Bool)1;

      else
        tmp_if_expr$6 = (signed int)spec[(signed long int)(i + 1)] == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$6)
        tmp_if_expr$7 = (_Bool)1;

      else
        tmp_if_expr$7 = (signed int)*tmp != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$7)
      {
        syslog(3, "ACL netmask for %s is invalid\n", spec);
        free((void *)aux);
        free((void *)spec);
        return 0;
      }

    }

    unsigned long int acl_add$$1$$4$$__s1_len;
    unsigned long int acl_add$$1$$4$$__s2_len;
    signed int return_value___builtin_strcmp$13;
    return_value___builtin_strcmp$13=__builtin_strcmp("*", spec);
    tmp_statement_expression$12 = return_value___builtin_strcmp$13;
    if(tmp_statement_expression$12 == 0)
    {
      source.s_addr = (unsigned int)0;
      mask = 0;
    }

    else
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp$11;
      return_value___builtin_strcmp$11=__builtin_strcmp("0", spec);
      tmp_statement_expression$10 = return_value___builtin_strcmp$11;
      if(tmp_statement_expression$10 == 0)
        source.s_addr = (unsigned int)0;

      else
      {
        return_value_so_resolv$9=so_resolv(&source, spec);
        if(return_value_so_resolv$9 == 0)
        {
          syslog(3, "ACL source address %s is invalid\n", spec);
          free((void *)aux);
          free((void *)spec);
          return 0;
        }

      }
    }
    aux->ip = source.s_addr;
    aux->mask = mask;
    mask = (signed int)(unsigned int)(((unsigned int)~(((unsigned long int)1 << 32 - mask) - (unsigned long int)1) & (unsigned int)0x000000ffUL) << 24 | ((unsigned int)~(((unsigned long int)1 << 32 - mask) - (unsigned long int)1) & (unsigned int)0x0000ff00UL) << 8 | ((unsigned int)~(((unsigned long int)1 << 32 - mask) - (unsigned long int)1) & (unsigned int)0x00ff0000UL) >> 8 | ((unsigned int)~(((unsigned long int)1 << 32 - mask) - (unsigned long int)1) & (unsigned int)0xff000000UL) >> 24);
    if(!((source.s_addr & (unsigned int)mask) == source.s_addr))
    {
      return_value_inet_ntoa$14=inet_ntoa(source);
      syslog(4, "Subnet definition might be incorrect: %s/%d\n", return_value_inet_ntoa$14, aux->mask);
    }

    char *return_value_inet_ntoa$15;
    return_value_inet_ntoa$15=inet_ntoa(source);
    syslog(6, "New ACL rule: %s %s/%d\n", (signed int)acl == ACL_ALLOW ? "allow" : "deny", return_value_inet_ntoa$15, aux->mask);
    *rules=plist_add(*rules, (unsigned long int)acl, (void *)(char *)aux);
    free((void *)spec);
    return 1;
  }
}

// acl_check
// file acl.c line 101
extern enum acl_t acl_check(struct plist_s *rules, struct in_addr naddr)
{
  struct anonymous$0 *aux;
  signed int mask;
  for( ; !(rules == ((struct plist_s *)NULL)); rules = rules->next)
  {
    aux = (struct anonymous$0 *)rules->aux;
    mask = (signed int)(unsigned int)(((unsigned int)~(((unsigned long int)1 << 32 - aux->mask) - (unsigned long int)1) & (unsigned int)0x000000ffUL) << 24 | ((unsigned int)~(((unsigned long int)1 << 32 - aux->mask) - (unsigned long int)1) & (unsigned int)0x0000ff00UL) << 8 | ((unsigned int)~(((unsigned long int)1 << 32 - aux->mask) - (unsigned long int)1) & (unsigned int)0x00ff0000UL) >> 8 | ((unsigned int)~(((unsigned long int)1 << 32 - aux->mask) - (unsigned long int)1) & (unsigned int)0xff000000UL) >> 24);
    if((naddr.s_addr & (unsigned int)mask) == (aux->ip & (unsigned int)mask))
      return (enum acl_t)rules->key;

  }
  return (enum acl_t)ACL_ALLOW;
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

// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return return_value_strtol$1;
}

// atol$link1
// file /usr/include/stdlib.h line 283
static inline signed long int atol$link1(const char *__nptr$link1)
{
  signed long int return_value_strtol$1$link1;
  return_value_strtol$1$link1=strtol(__nptr$link1, (char **)(void *)0, 10);
  return return_value_strtol$1$link1;
}

// atoll
// file /usr/include/stdlib.h line 292
static inline signed long long int atoll(const char *__nptr)
{
  signed long long int return_value_strtoll$1;
  return_value_strtoll$1=strtoll(__nptr, (char **)(void *)0, 10);
  return return_value_strtoll$1;
}

// chunked_data_send
// file http.c line 368
signed int chunked_data_send(signed int dst, signed int src)
{
  char *buf;
  signed int bsize;
  signed int i;
  signed int w;
  signed int csize;
  char *err = (char *)(void *)0;
  bsize = 4096;
  buf=new((unsigned long int)bsize);
  unsigned long int return_value_strlen$3;
  signed long int return_value_write$4;
  signed int return_value_data_send$5;
  do
  {
    i=so_recvln(src, &buf, &bsize);
    if(!(i >= 1))
    {
      if(!(debug == 0))
        printf("chunked_data_send: aborting, read error\n");

      free((void *)buf);
      return 0;
    }

    signed long int return_value_strtol$1;
    return_value_strtol$1=strtol(buf, &err, 16);
    csize = (signed int)return_value_strtol$1;
    const unsigned short int **return_value___ctype_b_loc$2;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*err]) == 0)
    {
      if(!((signed int)*err == 59))
      {
        if(!(debug == 0))
          printf("chunked_data_send: aborting, chunk size format error\n");

        free((void *)buf);
        return 0;
      }

    }

    if(dst >= 0)
    {
      return_value_strlen$3=strlen(buf);
      return_value_write$4=write(dst, (const void *)buf, return_value_strlen$3);
      i = (signed int)return_value_write$4;
    }

    if(!(csize == 0))
    {
      return_value_data_send$5=data_send(dst, src, (signed long long int)(csize + 2));
      if(return_value_data_send$5 == 0)
      {
        if(!(debug == 0))
          printf("chunked_data_send: aborting, data_send failed\n");

        free((void *)buf);
        return 0;
      }

    }

  }
  while(!(csize == 0));
  unsigned long int return_value_strlen$8;
  signed long int return_value_write$9;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  do
  {
    i=so_recvln(src, &buf, &bsize);
    if(i >= 1 && dst >= 0)
    {
      return_value_strlen$8=strlen(buf);
      return_value_write$9=write(dst, (const void *)buf, return_value_strlen$8);
      w = (signed int)return_value_write$9;
    }

    if(i >= 1)
      tmp_if_expr$6 = (signed int)buf[(signed long int)0] != 13 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (signed int)buf[(signed long int)0] != 10 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$7 = (_Bool)0;
  }
  while(tmp_if_expr$7);
  free((void *)buf);
  return 1;
}

// config_close
// file config.c line 169
extern void config_close(struct config_s *cf)
{
  if(!(cf == ((struct config_s *)NULL)))
  {
    cf->options=hlist_free(cf->options);
    free((void *)cf);
  }

}

// config_count
// file config.c line 165
extern signed int config_count(struct config_s *cf)
{
  signed int return_value_hlist_count$1;
  return_value_hlist_count$1=hlist_count(cf->options);
  return return_value_hlist_count$1;
}

// config_open
// file config.c line 43
extern struct config_s * config_open(const char *fname)
{
  struct config_s *rc;
  struct _IO_FILE *fp;
  char *buf;
  char *tmp;
  char *key;
  char *value;
  char section[50l] = { 'g', 'l', 'o', 'b', 'a', 'l', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int i;
  signed int j;
  signed int slen;
  signed int len;
  signed int quote;
  fp=fopen(fname, "r");
  signed int return_value_feof$2;
  unsigned long int tmp_if_expr$5;
  unsigned long int return_value_strlen$4;
  _Bool tmp_if_expr$7;
  signed int return_value_feof$6;
  _Bool tmp_if_expr$9;
  const unsigned short int **return_value___ctype_b_loc$8;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$13;
  const unsigned short int **return_value___ctype_b_loc$12;
  _Bool tmp_if_expr$15;
  const unsigned short int **return_value___ctype_b_loc$14;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$18;
  const unsigned short int **return_value___ctype_b_loc$17;
  _Bool tmp_if_expr$20;
  const unsigned short int **return_value___ctype_b_loc$19;
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$22;
  _Bool tmp_if_expr$23;
  unsigned long int tmp_statement_expression$24;
  if(fp == ((struct _IO_FILE *)NULL))
    return (struct config_s *)(void *)0;

  else
  {
    buf=new((unsigned long int)4096);
    char *return_value_new$1;
    return_value_new$1=new(sizeof(struct config_s) /*8ul*/ );
    rc = (struct config_s *)return_value_new$1;
    rc->options = (struct hlist_s *)(void *)0;
    do
    {
      return_value_feof$2=feof(fp);
      if(!(return_value_feof$2 == 0))
        break;

      quote = 0;
      tmp=fgets(buf, 4096, fp);
      if(tmp == ((char *)NULL))
        break;

      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(buf);
      if(return_value_strlen$3 >= 4097ul)
        tmp_if_expr$5 = (unsigned long int)4096;

      else
      {
        return_value_strlen$4=strlen(buf);
        tmp_if_expr$5 = return_value_strlen$4;
      }
      len = (signed int)tmp_if_expr$5;
      if(len == 0)
        tmp_if_expr$7 = (_Bool)1;

      else
      {
        return_value_feof$6=feof(fp);
        tmp_if_expr$7 = return_value_feof$6 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$7)
      {
        j = 0;
        i = j;
        do
        {
          if(!(j >= len))
          {
            return_value___ctype_b_loc$8=__ctype_b_loc();
            tmp_if_expr$9 = ((signed int)(*return_value___ctype_b_loc$8)[(signed long int)(signed int)buf[(signed long int)j]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$9 = (_Bool)0;
          if(!tmp_if_expr$9)
            break;

          j = j + 1;
        }
        while((_Bool)1);
        if(j >= len)
          tmp_if_expr$10 = (_Bool)1;

        else
          tmp_if_expr$10 = (signed int)buf[(signed long int)j] == 35 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$10)
          tmp_if_expr$11 = (_Bool)1;

        else
          tmp_if_expr$11 = (signed int)buf[(signed long int)j] == 59 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$11)
        {
          i = j;
          do
          {
            if(!(j >= len))
            {
              return_value___ctype_b_loc$12=__ctype_b_loc();
              tmp_if_expr$13 = ((signed int)(*return_value___ctype_b_loc$12)[(signed long int)(signed int)buf[(signed long int)j]] & (signed int)(unsigned short int)8) != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$13 = (_Bool)0;
            if(!tmp_if_expr$13)
              break;

            j = j + 1;
          }
          while((_Bool)1);
          if(!(j >= len))
          {
            if((signed int)buf[(signed long int)j] == 91)
            {
              j = j + 1;
              do
              {
                if(!(j >= len))
                {
                  return_value___ctype_b_loc$14=__ctype_b_loc();
                  tmp_if_expr$15 = ((signed int)(*return_value___ctype_b_loc$14)[(signed long int)(signed int)buf[(signed long int)j]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$15 = (_Bool)0;
                if(!tmp_if_expr$15)
                  break;

                j = j + 1;
              }
              while((_Bool)1);
              slen = j;
              do
              {
                if(!(j + -slen >= 50) && !(j >= len))
                  tmp_if_expr$16 = (signed int)buf[(signed long int)j] != 93 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$16 = (_Bool)0;
                if(tmp_if_expr$16)
                {
                  return_value___ctype_b_loc$17=__ctype_b_loc();
                  tmp_if_expr$18 = !(((signed int)(*return_value___ctype_b_loc$17)[(signed long int)(signed int)buf[(signed long int)j]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$18 = (_Bool)0;
                if(!tmp_if_expr$18)
                  break;

                j = j + 1;
              }
              while((_Bool)1);
              if(j + -slen >= 1)
                strlcpy(section, buf + (signed long int)slen, (unsigned long int)((j - slen) + 1));

            }

            else
            {
              key=substr(buf, i, j - i);
              i = j;
              do
              {
                if(!(j >= len))
                {
                  return_value___ctype_b_loc$19=__ctype_b_loc();
                  tmp_if_expr$20 = ((signed int)(*return_value___ctype_b_loc$19)[(signed long int)(signed int)buf[(signed long int)j]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$20 = (_Bool)0;
                if(!tmp_if_expr$20)
                  break;

                j = j + 1;
              }
              while((_Bool)1);
              if(j >= len)
                tmp_if_expr$21 = (_Bool)1;

              else
                tmp_if_expr$21 = (signed int)buf[(signed long int)j] == 35 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$21)
                tmp_if_expr$22 = (_Bool)1;

              else
                tmp_if_expr$22 = (signed int)buf[(signed long int)j] == 59 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr$22)
              {
                if((signed int)buf[(signed long int)j] == 34)
                {
                  quote = 1;
                  j = j + 1;
                  i = j;
                  do
                  {
                    if(!(j >= len))
                      tmp_if_expr$23 = (signed int)buf[(signed long int)i] != 34 ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr$23 = (_Bool)0;
                    if(!tmp_if_expr$23)
                      break;

                    i = i + 1;
                  }
                  while((_Bool)1);
                  if(i >= len)
                    continue;

                }

                else
                  i = len;
                value=substr(buf, j, i - j);
                if(quote == 0)
                {
                  char __r0;
                  char __r1;
                  char __r2;
                  unsigned long int return_value___builtin_strcspn$25;
                  return_value___builtin_strcspn$25=__builtin_strcspn(value, "#");
                  tmp_statement_expression$24 = return_value___builtin_strcspn$25;
                  i = (signed int)tmp_statement_expression$24;
                  unsigned long int return_value_strlen$26;
                  return_value_strlen$26=strlen(value);
                  if(!((unsigned long int)i == return_value_strlen$26))
                    value[(signed long int)i] = (char)0;

                  trimr(value);
                }

                if(!(debug == 0))
                  printf("section: %s, %s = '%s'\n", (const void *)section, key, value);

                rc->options=hlist_add(rc->options, key, value, (enum anonymous$4)HLIST_NOALLOC, (enum anonymous$4)HLIST_NOALLOC);
              }

            }
          }

        }

      }

    }
    while((_Bool)1);
    free((void *)buf);
    fclose(fp);
    return rc;
  }
}

// config_pop
// file config.c line 153
extern char * config_pop(struct config_s *cf, const char *option)
{
  char *tmp;
  tmp=hlist_get(cf->options, option);
  if(!(tmp == ((char *)NULL)))
  {
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(tmp);
    tmp = return_value___strdup$1;
    cf->options=hlist_del(cf->options, option);
  }

  return tmp;
}

// config_set
// file config.c line 149
extern void config_set(struct config_s *cf, char *option, char *value)
{
  cf->options=hlist_mod(cf->options, option, value, 1);
}

// copy_auth
// file auth.c line 50
extern struct auth_s * copy_auth(struct auth_s *dst, struct auth_s *src, signed int fullcopy)
{
  dst->hashntlm2 = src->hashntlm2;
  dst->hashnt = src->hashnt;
  dst->hashlm = src->hashlm;
  dst->flags = src->flags;
  strlcpy(dst->domain, src->domain, (unsigned long int)50);
  strlcpy(dst->workstation, src->workstation, (unsigned long int)50);
  if(!(fullcopy == 0))
  {
    strlcpy(dst->user, src->user, (unsigned long int)50);
    memcpy((void *)dst->passntlm2, (const void *)src->passntlm2, (unsigned long int)50);
    memcpy((void *)dst->passnt, (const void *)src->passnt, (unsigned long int)50);
    memcpy((void *)dst->passlm, (const void *)src->passlm, (unsigned long int)50);
  }

  else
  {
    memset((void *)dst->user, 0, (unsigned long int)50);
    memset((void *)dst->passntlm2, 0, (unsigned long int)50);
    memset((void *)dst->passnt, 0, (unsigned long int)50);
    memset((void *)dst->passlm, 0, (unsigned long int)50);
  }
  return dst;
}

// copy_rr_data
// file utils.c line 527
extern struct rr_data_s * copy_rr_data(struct rr_data_s *dst, struct rr_data_s *src)
{
  char *return_value___strdup$1;
  char *return_value___strdup$2;
  char *return_value___strdup$3;
  char *return_value___strdup$4;
  char *return_value___strdup$5;
  char *return_value___strdup$6;
  if(dst == ((struct rr_data_s *)NULL) || src == ((struct rr_data_s *)NULL))
    return (struct rr_data_s *)(void *)0;

  else
  {
    reset_rr_data(dst);
    dst->req = src->req;
    dst->code = src->code;
    dst->skip_http = src->skip_http;
    dst->body_len = src->body_len;
    dst->empty = src->empty;
    dst->port = src->port;
    if(!(src->headers == ((struct hlist_s *)NULL)))
      dst->headers=hlist_dup(src->headers);

    if(!(src->method == ((char *)NULL)))
    {
      return_value___strdup$1=__strdup(src->method);
      dst->method = return_value___strdup$1;
    }

    if(!(src->url == ((char *)NULL)))
    {
      return_value___strdup$2=__strdup(src->url);
      dst->url = return_value___strdup$2;
    }

    if(!(src->rel_url == ((char *)NULL)))
    {
      return_value___strdup$3=__strdup(src->rel_url);
      dst->rel_url = return_value___strdup$3;
    }

    if(!(src->hostname == ((char *)NULL)))
    {
      return_value___strdup$4=__strdup(src->hostname);
      dst->hostname = return_value___strdup$4;
    }

    if(!(src->http == ((char *)NULL)))
    {
      return_value___strdup$5=__strdup(src->http);
      dst->http = return_value___strdup$5;
    }

    if(!(src->msg == ((char *)NULL)))
    {
      return_value___strdup$6=__strdup(src->msg);
      dst->msg = return_value___strdup$6;
    }

    if(!(src->body == ((char *)NULL)))
    {
      if(src->body_len >= 1)
      {
        dst->body=new((unsigned long int)src->body_len);
        memcpy((void *)dst->body, (const void *)src->body, (unsigned long int)src->body_len);
      }

    }

    return dst;
  }
}

// croak
// file utils.c line 53
extern void croak(const char *msg, signed int console)
{
  if(!(console == 0))
    printf("%s", msg);

  else
    syslog(3, "%s", msg);
  myexit(1);
}

// data_send
// file http.c line 316
signed int data_send(signed int dst, signed int src, signed long long int len)
{
  char *buf;
  signed int i;
  signed int block;
  signed int c = 0;
  signed int j = 1;
  char *tmp_if_expr$4;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  signed int return_value_so_closed$5;
  if(len == 0ll)
    return 1;

  else
  {
    buf=new((unsigned long int)2048);
    do
    {
      block = (signed int)(len == (signed long int)-1 || len - (signed long int)c > (signed long int)2048 ? (signed long int)2048 : len - (signed long int)c);
      signed long int return_value_read$1;
      return_value_read$1=read(src, (void *)buf, (unsigned long int)block);
      i = (signed int)return_value_read$1;
      if(i >= 1)
        c = c + i;

      if(dst >= 0 && !(debug == 0))
      {
        if(!(i >= 0))
        {
          return_value___errno_location$2=__errno_location();
          return_value_strerror$3=strerror(*return_value___errno_location$2);
          tmp_if_expr$4 = return_value_strerror$3;
        }

        else
          tmp_if_expr$4 = "ok";
        printf("data_send: read %d of %d / %d of %lld (errno = %s)\n", i, block, c, len, tmp_if_expr$4);
      }

      if(dst >= 0)
      {
        return_value_so_closed$5=so_closed(dst);
        if(!(return_value_so_closed$5 == 0))
        {
          i = -999;
          break;
        }

      }

      if(i >= 1 && dst >= 0)
      {
        signed long int return_value_write$6;
        return_value_write$6=write(dst, (const void *)buf, (unsigned long int)i);
        j = (signed int)return_value_write$6;
        if(!(debug == 0))
          printf("data_send: wrote %d of %d\n", j, i);

      }

    }
    while(i >= 1 && j >= 1 && (len == -1l || !((signed long int)c >= len)));
    free((void *)buf);
    if(!(i >= 1) || !(j >= 1))
    {
      if(i == 0 && j >= 1 && (len == -1l || (signed long int)c == len))
        return 1;

      if(!(debug == 0))
        printf("data_send: fds %d:%d warning %d (connection closed)\n", dst, src, i);

      return 0;
    }

    else
      return 1;
  }
}

// des_key_schedule
// file xcrypt.c line 415
static void des_key_schedule(const char *_rawkey, unsigned int *subkey)
{
  const unsigned char *rawkey = (const unsigned char *)_rawkey;
  unsigned int left;
  unsigned int right;
  unsigned int work;
  signed int round;
  left = (unsigned int)((signed int)rawkey[(signed long int)0] << 24 | (signed int)rawkey[(signed long int)1] << 16 | (signed int)rawkey[(signed long int)2] << 8 | (signed int)rawkey[(signed long int)3]);
  right = (unsigned int)((signed int)rawkey[(signed long int)4] << 24 | (signed int)rawkey[(signed long int)5] << 16 | (signed int)rawkey[(signed long int)6] << 8 | (signed int)rawkey[(signed long int)7]);
  work = (right >> 4 ^ left) & (unsigned int)0x0f0f0f0f;
  left = left ^ work;
  right = right ^ work << 4;
  work = (right >> 0 ^ left) & (unsigned int)0x10101010;
  left = left ^ work;
  right = right ^ work << 0;
  left = leftkey_swap[(signed long int)(left >> 0 & (unsigned int)0xf)] << 3 | leftkey_swap[(signed long int)(left >> 8 & (unsigned int)0xf)] << 2 | leftkey_swap[(signed long int)(left >> 16 & (unsigned int)0xf)] << 1 | leftkey_swap[(signed long int)(left >> 24 & (unsigned int)0xf)] | leftkey_swap[(signed long int)(left >> 5 & (unsigned int)0xf)] << 7 | leftkey_swap[(signed long int)(left >> 13 & (unsigned int)0xf)] << 6 | leftkey_swap[(signed long int)(left >> 21 & (unsigned int)0xf)] << 5 | leftkey_swap[(signed long int)(left >> 29 & (unsigned int)0xf)] << 4;
  left = left & (unsigned int)0x0fffffff;
  right = rightkey_swap[(signed long int)(right >> 1 & (unsigned int)0xf)] << 3 | rightkey_swap[(signed long int)(right >> 9 & (unsigned int)0xf)] << 2 | rightkey_swap[(signed long int)(right >> 17 & (unsigned int)0xf)] << 1 | rightkey_swap[(signed long int)(right >> 25 & (unsigned int)0xf)] | rightkey_swap[(signed long int)(right >> 4 & (unsigned int)0xf)] << 7 | rightkey_swap[(signed long int)(right >> 12 & (unsigned int)0xf)] << 6 | rightkey_swap[(signed long int)(right >> 20 & (unsigned int)0xf)] << 5 | rightkey_swap[(signed long int)(right >> 28 & (unsigned int)0xf)] << 4;
  right = right & (unsigned int)0x0fffffff;
  round = 0;
  unsigned int *tmp_post$1;
  unsigned int *tmp_post$2;
  for( ; !(round >= 16); round = round + 1)
  {
    left = (left << (signed int)encrypt_rotate_tab[(signed long int)round] | left >> 28 - (signed int)encrypt_rotate_tab[(signed long int)round]) & (unsigned int)0x0fffffff;
    right = (right << (signed int)encrypt_rotate_tab[(signed long int)round] | right >> 28 - (signed int)encrypt_rotate_tab[(signed long int)round]) & (unsigned int)0x0fffffff;
    tmp_post$1 = subkey;
    subkey = subkey + 1l;
    *tmp_post$1 = left << 4 & (unsigned int)0x24000000 | left << 28 & (unsigned int)0x10000000 | left << 14 & (unsigned int)0x08000000 | left << 18 & (unsigned int)0x02080000 | left << 6 & (unsigned int)0x01000000 | left << 9 & (unsigned int)0x00200000 | left >> 1 & (unsigned int)0x00100000 | left << 10 & (unsigned int)0x00040000 | left << 2 & (unsigned int)0x00020000 | left >> 10 & (unsigned int)0x00010000 | right >> 13 & (unsigned int)0x00002000 | right >> 4 & (unsigned int)0x00001000 | right << 6 & (unsigned int)0x00000800 | right >> 1 & (unsigned int)0x00000400 | right >> 14 & (unsigned int)0x00000200 | right & (unsigned int)0x00000100 | right >> 5 & (unsigned int)0x00000020 | right >> 10 & (unsigned int)0x00000010 | right >> 3 & (unsigned int)0x00000008 | right >> 18 & (unsigned int)0x00000004 | right >> 26 & (unsigned int)0x00000002 | right >> 24 & (unsigned int)0x00000001;
    tmp_post$2 = subkey;
    subkey = subkey + 1l;
    *tmp_post$2 = left << 15 & (unsigned int)0x20000000 | left << 17 & (unsigned int)0x10000000 | left << 10 & (unsigned int)0x08000000 | left << 22 & (unsigned int)0x04000000 | left >> 2 & (unsigned int)0x02000000 | left << 1 & (unsigned int)0x01000000 | left << 16 & (unsigned int)0x00200000 | left << 11 & (unsigned int)0x00100000 | left << 3 & (unsigned int)0x00080000 | left >> 6 & (unsigned int)0x00040000 | left << 15 & (unsigned int)0x00020000 | left >> 4 & (unsigned int)0x00010000 | right >> 2 & (unsigned int)0x00002000 | right << 8 & (unsigned int)0x00001000 | right >> 14 & (unsigned int)0x00000808 | right >> 9 & (unsigned int)0x00000400 | right & (unsigned int)0x00000200 | right << 7 & (unsigned int)0x00000100 | right >> 7 & (unsigned int)0x00000020 | right >> 3 & (unsigned int)0x00000011 | right << 2 & (unsigned int)0x00000004 | right >> 21 & (unsigned int)0x00000002;
  }
}

// direct_request
// file direct.c line 179
extern struct rr_data_s * direct_request(void *cdata, struct rr_data_s *request)
{
  struct rr_data_s *data[2l];
  struct rr_data_s *rc = (struct rr_data_s *)(void *)0;
  struct auth_s *tcreds = (struct auth_s *)(void *)0;
  signed int *rsocket[2l];
  signed int *wsocket[2l];
  signed int w;
  signed int loop;
  signed int sd;
  char *tmp;
  char *hostname = (char *)(void *)0;
  signed int port = 0;
  signed int conn_alive = 0;
  signed int cd = ((struct thread_arg_s *)cdata)->fd;
  struct sockaddr_in caddr = ((struct thread_arg_s *)cdata)->addr;
  if(!(debug == 0))
    printf("Direct thread processing...\n");

  sd=host_connect(request->hostname, request->port);
  if(!(sd >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    syslog(4, "Connection failed for %s:%d (%s)", request->hostname, request->port, return_value_strerror$2);
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    tmp=gen_502_page(request->http, return_value_strerror$4);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(tmp);
    signed long int return_value_write$6;
    return_value_write$6=write(cd, (const void *)tmp, return_value_strlen$5);
    w = (signed int)return_value_write$6;
    free((void *)tmp);
    rc = (struct rr_data_s *)(void *)-1;
    goto bailout;
  }

  tcreds=dup_auth(g_creds, 1);
  if(!(request->hostname == ((char *)NULL)))
  {
    char *return_value___strdup$7;
    return_value___strdup$7=__strdup(request->hostname);
    hostname = return_value___strdup$7;
    port = request->port;
  }

  else
  {
    tmp=gen_502_page(request->http, "Invalid request URL");
    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(tmp);
    signed long int return_value_write$9;
    return_value_write$9=write(cd, (const void *)tmp, return_value_strlen$8);
    w = (signed int)return_value_write$9;
    free((void *)tmp);
    rc = (struct rr_data_s *)(void *)-1;
    goto bailout;
  }
  signed int return_value_strcasecmp$15;
  _Bool tmp_if_expr$16;
  signed int return_value_strcasecmp$23;
  signed int return_value_hlist_subcmp_all$33;
  char *tmp_if_expr$27;
  _Bool tmp_if_expr$36;
  signed long long int return_value_http_has_body$35;
  _Bool tmp_if_expr$11;
  signed int return_value_so_closed$10;
  _Bool tmp_if_expr$13;
  signed int return_value_so_closed$12;
  while((_Bool)1)
  {
    if(!(request == ((struct rr_data_s *)NULL)))
    {
      data[(signed long int)0]=dup_rr_data(request);
      request = (struct rr_data_s *)(void *)0;
    }

    else
      data[(signed long int)0]=new_rr_data();
    data[(signed long int)1]=new_rr_data();
    wsocket[(signed long int)1] = &cd;
    rsocket[(signed long int)0] = wsocket[(signed long int)1];
    wsocket[(signed long int)0] = &sd;
    rsocket[(signed long int)1] = wsocket[(signed long int)0];
    conn_alive = 0;
    loop = 0;
    for( ; !(loop >= 2); loop = loop + 1)
    {
      if(!(data[(signed long int)loop]->empty == 0))
      {
        if(!(debug == 0))
        {
          printf("\n******* Round %d C: %d, S: %d *******\n", loop + 1, cd, sd);
          printf("Reading headers (%d)...\n", *rsocket[(signed long int)loop]);
        }

        signed int return_value_headers_recv$14;
        return_value_headers_recv$14=headers_recv(*rsocket[(signed long int)loop], data[(signed long int)loop]);
        if(return_value_headers_recv$14 == 0)
        {
          free_rr_data(data[(signed long int)0]);
          free_rr_data(data[(signed long int)1]);
          rc = (struct rr_data_s *)(void *)-1;
          goto bailout;
        }

      }

      if(loop == 0 && !(hostname == ((char *)NULL)))
      {
        if(!(data[0l]->hostname == ((char *)NULL)))
        {
          return_value_strcasecmp$15=strcasecmp(hostname, data[(signed long int)0]->hostname);
          if(!(return_value_strcasecmp$15 == 0))
            tmp_if_expr$16 = (_Bool)1;

          else
            tmp_if_expr$16 = port != data[(signed long int)0]->port ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$16)
          {
            if(!(debug == 0))
              printf("\n******* D RETURN: %s *******\n", data[(signed long int)0]->url);

            rc=dup_rr_data(data[(signed long int)0]);
            free_rr_data(data[(signed long int)0]);
            free_rr_data(data[(signed long int)1]);
            goto bailout;
          }

        }

      }

      if(!(debug == 0))
        hlist_dump(data[(signed long int)loop]->headers);

      if(loop == 0)
      {
        if(!(data[0l]->req == 0))
        {
          char *return_value_inet_ntoa$17;
          return_value_inet_ntoa$17=inet_ntoa(caddr.sin_addr);
          syslog(7, "%s %s %s", return_value_inet_ntoa$17, data[(signed long int)0]->method, data[(signed long int)0]->url);
          if(!(data[0l]->rel_url == ((char *)NULL)))
          {
            if(!(data[0l]->url == ((char *)NULL)))
              free((void *)data[(signed long int)0]->url);

            char *return_value___strdup$18;
            return_value___strdup$18=__strdup(data[(signed long int)0]->rel_url);
            data[(signed long int)0]->url = return_value___strdup$18;
          }

          data[(signed long int)0]->headers=hlist_mod(data[(signed long int)0]->headers, "Connection", "keep-alive", 1);
          data[(signed long int)0]->headers=hlist_del(data[(signed long int)0]->headers, "Proxy-Authorization");
          signed int return_value_http_parse_basic$19;
          return_value_http_parse_basic$19=http_parse_basic(data[(signed long int)0]->headers, "Authorization", tcreds);
          if(return_value_http_parse_basic$19 >= 1)
          {
            if(!(debug == 0))
              printf("NTLM-to-basic: Credentials parsed: %s\\%s at %s\n", (const void *)tcreds->domain, (const void *)tcreds->user, (const void *)tcreds->workstation);

          }

        }

      }

      if(loop == 0)
      {
        if(!(data[0l] == ((struct rr_data_s *)NULL)))
        {
          if(!(data[0l]->req == 0))
          {
            return_value_strcasecmp$23=strcasecmp("CONNECT", data[(signed long int)0]->method);
            if(return_value_strcasecmp$23 == 0)
            {
              if(!(debug == 0))
                printf("CONNECTing...\n");

              data[(signed long int)1]->empty = 0;
              data[(signed long int)1]->req = 0;
              data[(signed long int)1]->code = 200;
              char *return_value___strdup$20;
              return_value___strdup$20=__strdup("Connection established");
              data[(signed long int)1]->msg = return_value___strdup$20;
              char *return_value___strdup$21;
              return_value___strdup$21=__strdup(data[(signed long int)0]->http);
              data[(signed long int)1]->http = return_value___strdup$21;
              signed int return_value_headers_send$22;
              return_value_headers_send$22=headers_send(cd, data[(signed long int)1]);
              if(!(return_value_headers_send$22 == 0))
                tunnel(cd, sd);

              free_rr_data(data[(signed long int)0]);
              free_rr_data(data[(signed long int)1]);
              rc = (struct rr_data_s *)(void *)-1;
              goto bailout;
            }

          }

        }

      }

      if(loop == 1)
      {
        if(data[1l]->code == 401)
        {
          return_value_hlist_subcmp_all$33=hlist_subcmp_all(data[(signed long int)1]->headers, "WWW-Authenticate", "NTLM");
          if(!(return_value_hlist_subcmp_all$33 == 0))
          {
            signed int return_value_hlist_subcmp$26;
            return_value_hlist_subcmp$26=hlist_subcmp(data[(signed long int)1]->headers, "Connection", "close");
            if(!(return_value_hlist_subcmp$26 == 0))
            {
              if(!(debug == 0))
                printf("Reconnect before WWW auth\n");

              close(sd);
              sd=host_connect(data[(signed long int)0]->hostname, data[(signed long int)0]->port);
              if(!(sd >= 0))
              {
                tmp=gen_502_page(data[(signed long int)0]->http, "WWW authentication reconnect failed");
                unsigned long int return_value_strlen$24;
                return_value_strlen$24=strlen(tmp);
                signed long int return_value_write$25;
                return_value_write$25=write(cd, (const void *)tmp, return_value_strlen$24);
                w = (signed int)return_value_write$25;
                free((void *)tmp);
                rc = (struct rr_data_s *)(void *)-1;
                goto bailout;
              }

            }

            signed int return_value_www_authenticate$32;
            return_value_www_authenticate$32=www_authenticate(*wsocket[(signed long int)0], data[(signed long int)0], data[(signed long int)1], tcreds);
            if(return_value_www_authenticate$32 == 0)
            {
              if(!(debug == 0))
                printf("WWW auth connection error.\n");

              if(!(data[1l]->errmsg == ((char *)NULL)))
                tmp_if_expr$27 = data[(signed long int)1]->errmsg;

              else
                tmp_if_expr$27 = "Error during WWW-Authenticate";
              tmp=gen_502_page(data[(signed long int)1]->http, tmp_if_expr$27);
              unsigned long int return_value_strlen$28;
              return_value_strlen$28=strlen(tmp);
              signed long int return_value_write$29;
              return_value_write$29=write(cd, (const void *)tmp, return_value_strlen$28);
              w = (signed int)return_value_write$29;
              free((void *)tmp);
              free_rr_data(data[(signed long int)0]);
              free_rr_data(data[(signed long int)1]);
              rc = (struct rr_data_s *)(void *)-1;
              goto bailout;
            }

            else
              if(data[1l]->code == 401)
              {
                tmp=gen_401_page(data[(signed long int)1]->http, data[(signed long int)0]->hostname, data[(signed long int)0]->port);
                unsigned long int return_value_strlen$30;
                return_value_strlen$30=strlen(tmp);
                signed long int return_value_write$31;
                return_value_write$31=write(cd, (const void *)tmp, return_value_strlen$30);
                w = (signed int)return_value_write$31;
                free((void *)tmp);
                free_rr_data(data[(signed long int)0]);
                free_rr_data(data[(signed long int)1]);
                rc = (struct rr_data_s *)(void *)-1;
                goto bailout;
              }

          }

        }

      }

      if(loop == 1)
      {
        signed int return_value_hlist_subcmp$34;
        return_value_hlist_subcmp$34=hlist_subcmp(data[(signed long int)1]->headers, "Connection", "close");
        if(return_value_hlist_subcmp$34 == 0)
        {
          return_value_http_has_body$35=http_has_body(data[(signed long int)0], data[(signed long int)1]);
          tmp_if_expr$36 = return_value_http_has_body$35 != (signed long int)-1 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$36 = (_Bool)0;
        conn_alive = (signed int)tmp_if_expr$36;
        if(!(conn_alive == 0))
        {
          data[(signed long int)1]->headers=hlist_mod(data[(signed long int)1]->headers, "Proxy-Connection", "keep-alive", 1);
          data[(signed long int)1]->headers=hlist_mod(data[(signed long int)1]->headers, "Connection", "keep-alive", 1);
        }

        else
        {
          data[(signed long int)1]->headers=hlist_mod(data[(signed long int)1]->headers, "Proxy-Connection", "close", 1);
          rc = (struct rr_data_s *)(void *)-1;
        }
      }

      if(!(debug == 0))
        printf("Sending headers (%d)...\n", *wsocket[(signed long int)loop]);

      signed int return_value_headers_send$37;
      return_value_headers_send$37=headers_send(*wsocket[(signed long int)loop], data[(signed long int)loop]);
      if(return_value_headers_send$37 == 0)
      {
        free_rr_data(data[(signed long int)0]);
        free_rr_data(data[(signed long int)1]);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

      signed int return_value_http_body_send$38;
      return_value_http_body_send$38=http_body_send(*wsocket[(signed long int)loop], *rsocket[(signed long int)loop], data[(signed long int)0], data[(signed long int)1]);
      if(return_value_http_body_send$38 == 0)
      {
        free_rr_data(data[(signed long int)0]);
        free_rr_data(data[(signed long int)1]);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

    }
    free_rr_data(data[(signed long int)0]);
    free_rr_data(data[(signed long int)1]);
    if(!(conn_alive == 0))
    {
      return_value_so_closed$10=so_closed(sd);
      tmp_if_expr$11 = !(return_value_so_closed$10 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$11 = (_Bool)0;
    if(tmp_if_expr$11)
    {
      return_value_so_closed$12=so_closed(cd);
      tmp_if_expr$13 = !(return_value_so_closed$12 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$13 = (_Bool)0;
    if(!(serialize == 0) || !tmp_if_expr$13)
      break;

  }

bailout:
  ;
  if(!(tcreds == ((struct auth_s *)NULL)))
    free((void *)tcreds);

  if(!(hostname == ((char *)NULL)))
    free((void *)hostname);

  close(sd);
  return rc;
}

// direct_tunnel
// file direct.c line 423
extern void direct_tunnel(void *thread_data)
{
  signed int sd;
  signed int port = 0;
  char *pos;
  char *hostname;
  signed int cd = ((struct thread_arg_s *)thread_data)->fd;
  char *thost = ((struct thread_arg_s *)thread_data)->target;
  struct sockaddr_in caddr = ((struct thread_arg_s *)thread_data)->addr;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(thost);
  hostname = return_value___strdup$1;
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(hostname, 58);
  pos = return_value___builtin_strchr$2;
  if(!(pos == ((char *)NULL)))
  {
    *pos = (char)0;
    pos = pos + 1l;
    port=atoi$link1(pos);
  }

  sd=host_connect(hostname, port);
  char *return_value_inet_ntoa$3;
  if(sd >= 1)
  {
    return_value_inet_ntoa$3=inet_ntoa(caddr.sin_addr);
    syslog(7, "%s FORWARD %s", return_value_inet_ntoa$3, thost);
    if(!(debug == 0))
      printf("Portforwarding to %s for client %d...\n", thost, cd);

    tunnel(cd, sd);
  }


bailout:
  ;
  free((void *)hostname);
  close(sd);
  close(cd);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// dump_auth
// file auth.h line 64
extern void dump_auth(struct auth_s *creds)
{
  char *tmp;
  printf("Credentials structure dump:\n");
  if(creds == ((struct auth_s *)NULL))
    printf("Struct is not allocated!\n");

  else
  {
    printf("User:       %s\n", (const void *)creds->user);
    printf("Domain:     %s\n", (const void *)creds->domain);
    printf("Wks:        %s\n", (const void *)creds->workstation);
    printf("HashNTLMv2: %d\n", creds->hashntlm2);
    printf("HashNT:     %d\n", creds->hashnt);
    printf("HashLM:     %d\n", creds->hashlm);
    printf("Flags:      %X\n", creds->flags);
    tmp=printmem(creds->passntlm2, (unsigned long int)16, 8);
    printf("PassNTLMv2: %s\n", tmp);
    free((void *)tmp);
    tmp=printmem(creds->passnt, (unsigned long int)16, 8);
    printf("PassNT:     %s\n", tmp);
    free((void *)tmp);
    tmp=printmem(creds->passlm, (unsigned long int)16, 8);
    printf("PassLM:     %s\n\n", tmp);
    free((void *)tmp);
  }
}

// dup_auth
// file auth.c line 77
extern struct auth_s * dup_auth(struct auth_s *creds, signed int fullcopy)
{
  struct auth_s *tmp;
  tmp=new_auth();
  if(tmp == ((struct auth_s *)NULL))
    return (struct auth_s *)(void *)0;

  else
  {
    struct auth_s *return_value_copy_auth$1;
    return_value_copy_auth$1=copy_auth(tmp, creds, fullcopy);
    return return_value_copy_auth$1;
  }
}

// dup_rr_data
// file utils.c line 564
extern struct rr_data_s * dup_rr_data(struct rr_data_s *data)
{
  struct rr_data_s *tmp;
  if(data == ((struct rr_data_s *)NULL))
    return (struct rr_data_s *)(void *)0;

  else
  {
    tmp=new_rr_data();
    struct rr_data_s *return_value_copy_rr_data$1;
    return_value_copy_rr_data$1=copy_rr_data(tmp, data);
    return return_value_copy_rr_data$1;
  }
}

// forward_request
// file forward.c line 318
extern struct rr_data_s * forward_request(void *thread_data, struct rr_data_s *request)
{
  signed int i;
  signed int w;
  signed int loop;
  signed int plugin;
  signed int retry = 0;
  signed int *rsocket[2l];
  signed int *wsocket[2l];
  struct rr_data_s *data[2l];
  struct rr_data_s *rc = (struct rr_data_s *)(void *)0;
  struct hlist_s *tl;
  char *tmp;
  struct auth_s *tcreds = (struct auth_s *)(void *)0;
  char *hostname = (char *)(void *)0;
  signed int proxy_alive;
  signed int conn_alive;
  signed int authok;
  signed int noauth;
  signed int was_cached;
  signed int sd;
  signed int cd = ((struct thread_arg_s *)thread_data)->fd;
  struct sockaddr_in caddr = ((struct thread_arg_s *)thread_data)->addr;
  signed int return_value_strcasecmp$9;
  char *return_value_inet_ntoa$10;
  char *return_value_hlist_get$14;
  signed int return_value_proxy_authenticate$15;
  do
  {

  beginning:
    ;
    proxy_alive = 0;
    conn_alive = proxy_alive;
    authok = conn_alive;
    noauth = authok;
    was_cached = noauth;
    sd = was_cached;
    wsocket[(signed long int)1] = &cd;
    rsocket[(signed long int)0] = wsocket[(signed long int)1];
    wsocket[(signed long int)0] = &sd;
    rsocket[(signed long int)1] = wsocket[(signed long int)0];
    if(!(debug == 0))
    {
      printf("Thread processing%s...\n", retry != 0 ? " (retry)" : "");
      pthread_mutex_lock(&connection_mtx);
      plist_dump(connection_list);
      pthread_mutex_unlock(&connection_mtx);
    }

    pthread_mutex_lock(&connection_mtx);
    i=plist_pop(&connection_list, (void **)&tcreds);
    pthread_mutex_unlock(&connection_mtx);
    if(!(i == 0))
    {
      if(!(debug == 0))
        printf("Found autenticated connection %d!\n", i);

      sd = i;
      authok = 1;
      was_cached = 1;
    }

    else
    {
      tcreds=new_auth();
      sd=proxy_connect(tcreds);
      if(!(sd >= 1))
      {
        tmp=gen_502_page(request->http, "Parent proxy unreacheable");
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen(tmp);
        signed long int return_value_write$2;
        return_value_write$2=write(cd, (const void *)tmp, return_value_strlen$1);
        w = (signed int)return_value_write$2;
        free((void *)tmp);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

    }
    if(hostname == ((char *)NULL))
    {
      if(!(request->hostname == ((char *)NULL)))
      {
        char *return_value___strdup$3;
        return_value___strdup$3=__strdup(request->hostname);
        hostname = return_value___strdup$3;
      }

    }


  __CPROVER_DUMP_L6:
    ;
    if(!(request == ((struct rr_data_s *)NULL)))
    {
      if(!(retry == 0))
        data[(signed long int)0] = request;

      else
        data[(signed long int)0]=dup_rr_data(request);
      request = (struct rr_data_s *)(void *)0;
    }

    else
      data[(signed long int)0]=new_rr_data();
    data[(signed long int)1]=new_rr_data();
    retry = 0;
    proxy_alive = 0;
    conn_alive = 0;
    loop = 0;

  __CPROVER_DUMP_L11:
    ;
    if(loop >= 2)
      goto __CPROVER_DUMP_L53;

    if(!(data[(signed long int)loop]->empty == 0))
    {
      if(!(debug == 0))
      {
        printf("\n******* Round %d C: %d, S: %d (authok=%d, noauth=%d) *******\n", loop + 1, cd, sd, authok, noauth);
        printf("Reading headers (%d)...\n", *rsocket[(signed long int)loop]);
      }

      signed int return_value_headers_recv$8;
      return_value_headers_recv$8=headers_recv(*rsocket[(signed long int)loop], data[(signed long int)loop]);
      if(return_value_headers_recv$8 == 0)
      {
        free_rr_data(data[(signed long int)0]);
        free_rr_data(data[(signed long int)1]);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

    }

    if(loop == 0 && !(hostname == ((char *)NULL)))
    {
      if(!(data[0l]->hostname == ((char *)NULL)))
      {
        return_value_strcasecmp$9=strcasecmp(hostname, data[(signed long int)0]->hostname);
        if(!(return_value_strcasecmp$9 == 0))
        {
          if(!(debug == 0))
            printf("\n******* F RETURN: %s *******\n", data[(signed long int)0]->url);

          if(!(authok == 0))
            proxy_alive = 1;

          rc=dup_rr_data(data[(signed long int)0]);
          free_rr_data(data[(signed long int)0]);
          free_rr_data(data[(signed long int)1]);
          goto bailout;
        }

      }

    }

    if(!(debug == 0))
      hlist_dump(data[(signed long int)loop]->headers);

    if(loop == 0)
    {
      if(!(data[0l]->req == 0))
      {
        return_value_inet_ntoa$10=inet_ntoa(caddr.sin_addr);
        syslog(7, "%s %s %s", return_value_inet_ntoa$10, data[(signed long int)0]->method, data[(signed long int)0]->url);
      }

    }


  shortcut:
    ;
    for( ; (_Bool)1; loop = 1)
    {
      if(loop == 0)
      {
        if(!(data[0l]->req == 0))
        {
          signed int return_value_http_parse_basic$13;
          return_value_http_parse_basic$13=http_parse_basic(data[(signed long int)loop]->headers, "Proxy-Authorization", tcreds);
          if(return_value_http_parse_basic$13 >= 1)
          {
            if(!(debug == 0))
              printf("NTLM-to-basic: Credentials parsed: %s\\%s at %s\n", (const void *)tcreds->domain, (const void *)tcreds->user, (const void *)tcreds->workstation);

          }

          else
            if(!(ntlmbasic == 0))
            {
              if(!(debug == 0))
                printf("NTLM-to-basic: Returning client auth request.\n");

              tmp=gen_407_page(data[(signed long int)loop]->http);
              unsigned long int return_value_strlen$11;
              return_value_strlen$11=strlen(tmp);
              signed long int return_value_write$12;
              return_value_write$12=write(cd, (const void *)tmp, return_value_strlen$11);
              w = (signed int)return_value_write$12;
              free((void *)tmp);
              free_rr_data(data[(signed long int)0]);
              free_rr_data(data[(signed long int)1]);
              rc = (struct rr_data_s *)(void *)-1;
              goto bailout;
            }

          tl = header_list;
          for( ; !(tl == ((struct hlist_s *)NULL)); tl = tl->next)
            data[(signed long int)0]->headers=hlist_mod(data[(signed long int)0]->headers, tl->key, tl->value, 0);
          data[(signed long int)0]->headers=hlist_mod(data[(signed long int)0]->headers, "Proxy-Connection", "keep-alive", 1);
          do
          {
            return_value_hlist_get$14=hlist_get(data[(signed long int)loop]->headers, "Proxy-Authorization");
            if(return_value_hlist_get$14 == ((char *)NULL))
              break;

            data[(signed long int)loop]->headers=hlist_del(data[(signed long int)loop]->headers, "Proxy-Authorization");
          }
          while((_Bool)1);
        }

      }

      if(!(loop == 0))
        goto __CPROVER_DUMP_L34;

      if(data[0l]->req == 0)
        goto __CPROVER_DUMP_L34;

      if(!(authok == 0))
        goto __CPROVER_DUMP_L34;

      if(!(noauth == 0))
        goto __CPROVER_DUMP_L34;

      return_value_proxy_authenticate$15=proxy_authenticate(wsocket[(signed long int)0], data[(signed long int)0], data[(signed long int)1], tcreds);
      if(return_value_proxy_authenticate$15 == 0)
      {
        if(!(debug == 0))
          printf("Proxy auth connection error.\n");

        free_rr_data(data[(signed long int)0]);
        free_rr_data(data[(signed long int)1]);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

      if(data[1l]->code == 407)
        break;

      if(!(debug == 0))
        printf("Proxy auth not requested - just forwarding.\n");

      if(!(data[1l]->code >= 400))
        noauth = 1;

    }
    reset_rr_data(data[(signed long int)1]);

  __CPROVER_DUMP_L34:
    ;
    if(!(loop == 1))
      break;

    if(!(data[1l]->code == 407))
      break;

    if(noauth == 0 && was_cached == 0)
      break;

    if(!(debug == 0))
      printf("\nFinal reply is 407 - retrying (cached=%d, noauth=%d).\n", was_cached, noauth);

    if(!(tcreds == ((struct auth_s *)NULL)))
      free((void *)tcreds);

    retry = 1;
    request = data[(signed long int)0];
    free_rr_data(data[(signed long int)1]);
    close(sd);
  }
  while((_Bool)1);
  if(loop == 1 && noauth == 0)
  {
    if(!(data[1l]->code == 407))
      authok = 1;

  }

  plugin = 0x7FFF;
  if(loop == 1 && !(scanner_plugin == 0))
    plugin=scanner_hook(data[(signed long int)0], data[(signed long int)1], tcreds, *wsocket[(signed long int)loop], rsocket[(signed long int)loop], scanner_plugin_maxsize);

  char *return_value_hlist_get$16;
  if(loop == 1)
  {
    conn_alive=hlist_subcmp(data[(signed long int)1]->headers, "Connection", "keep-alive");
    if(conn_alive == 0)
      data[(signed long int)1]->headers=hlist_mod(data[(signed long int)1]->headers, "Connection", "close", 1);

    do
    {
      return_value_hlist_get$16=hlist_get(data[(signed long int)loop]->headers, "Proxy-Authenticate");
      if(return_value_hlist_get$16 == ((char *)NULL))
        break;

      data[(signed long int)loop]->headers=hlist_del(data[(signed long int)loop]->headers, "Proxy-Authenticate");
    }
    while((_Bool)1);
    if(data[1l]->code == 407)
      data[(signed long int)1]->headers=hlist_mod(data[(signed long int)1]->headers, "Proxy-Authenticate", "Basic realm=\"Cntlm for parent\"", 1);

  }

  if(!((0x0001 & plugin) == 0))
  {
    if(!(debug == 0))
    {
      printf("Sending headers (%d)...\n", *wsocket[(signed long int)loop]);
      if(loop == 0)
        hlist_dump(data[(signed long int)loop]->headers);

    }

    signed int return_value_headers_send$17;
    return_value_headers_send$17=headers_send(*wsocket[(signed long int)loop], data[(signed long int)loop]);
    if(return_value_headers_send$17 == 0)
    {
      free_rr_data(data[(signed long int)0]);
      free_rr_data(data[(signed long int)1]);
      rc = (struct rr_data_s *)(void *)-1;
      goto bailout;
    }

  }

  signed int return_value_strcasecmp$18;
  _Bool tmp_if_expr$5;
  signed int return_value_so_closed$4;
  _Bool tmp_if_expr$7;
  signed int return_value_so_closed$6;
  if(loop == 1)
  {
    if(data[0l] == ((struct rr_data_s *)NULL))
      goto __CPROVER_DUMP_L48;

    if(data[0l]->req == 0)
      goto __CPROVER_DUMP_L48;

    return_value_strcasecmp$18=strcasecmp("CONNECT", data[(signed long int)0]->method);
    if(!(return_value_strcasecmp$18 == 0))
      goto __CPROVER_DUMP_L48;

    if(!(data[1l]->code == 200))
      goto __CPROVER_DUMP_L48;

    if(!(debug == 0))
      printf("Ok CONNECT response. Tunneling...\n");

    tunnel(cd, sd);
    free_rr_data(data[(signed long int)0]);
    free_rr_data(data[(signed long int)1]);
    rc = (struct rr_data_s *)(void *)-1;
  }

  else
  {

  __CPROVER_DUMP_L48:
    ;
    if(!((0x0002 & plugin) == 0))
    {
      signed int return_value_http_body_send$19;
      return_value_http_body_send$19=http_body_send(*wsocket[(signed long int)loop], *rsocket[(signed long int)loop], data[(signed long int)0], data[(signed long int)1]);
      if(return_value_http_body_send$19 == 0)
      {
        free_rr_data(data[(signed long int)0]);
        free_rr_data(data[(signed long int)1]);
        rc = (struct rr_data_s *)(void *)-1;
        goto bailout;
      }

    }

    if(loop == 1)
    {
      proxy_alive=hlist_subcmp(data[(signed long int)loop]->headers, "Proxy-Connection", "keep-alive");
      if(proxy_alive == 0)
      {
        if(!(debug == 0))
          printf("PROXY CLOSING CONNECTION\n");

        rc = (struct rr_data_s *)(void *)-1;
      }

    }

    loop = loop + 1;
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L53:
    ;
    free_rr_data(data[(signed long int)0]);
    free_rr_data(data[(signed long int)1]);
    if(!(conn_alive == 0) && !(proxy_alive == 0))
    {
      return_value_so_closed$4=so_closed(sd);
      tmp_if_expr$5 = !(return_value_so_closed$4 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      return_value_so_closed$6=so_closed(cd);
      tmp_if_expr$7 = !(return_value_so_closed$6 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$7 = (_Bool)0;
    if(serialize == 0 && tmp_if_expr$7)
      goto __CPROVER_DUMP_L6;

  }

bailout:
  ;
  if(!(hostname == ((char *)NULL)))
    free((void *)hostname);

  if(!(debug == 0))
  {
    signed int return_value_so_closed$20;
    return_value_so_closed$20=so_closed(sd);
    printf("forward_request: palive=%d, authok=%d, ntlm=%d, closed=%d\n", proxy_alive, authok, ntlmbasic, return_value_so_closed$20);
    printf("\nThread finished.\n");
  }

  _Bool tmp_if_expr$22;
  signed int return_value_so_closed$21;
  if(ntlmbasic == 0 && !(authok == 0) && !(proxy_alive == 0))
  {
    return_value_so_closed$21=so_closed(sd);
    tmp_if_expr$22 = !(return_value_so_closed$21 != 0) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$22 = (_Bool)0;
  if(tmp_if_expr$22)
  {
    if(!(debug == 0))
      printf("Storing the connection for reuse (%d:%d).\n", cd, sd);

    pthread_mutex_lock(&connection_mtx);
    connection_list=plist_add(connection_list, (unsigned long int)sd, (void *)tcreds);
    pthread_mutex_unlock(&connection_mtx);
  }

  else
  {
    free((void *)tcreds);
    close(sd);
  }
  return rc;
}

// forward_tunnel
// file forward.c line 796
extern void forward_tunnel(void *thread_data)
{
  struct auth_s *tcreds;
  signed int sd;
  signed int cd = ((struct thread_arg_s *)thread_data)->fd;
  char *thost = ((struct thread_arg_s *)thread_data)->target;
  struct sockaddr_in caddr = ((struct thread_arg_s *)thread_data)->addr;
  tcreds=new_auth();
  sd=proxy_connect(tcreds);
  char *return_value_inet_ntoa$1;
  signed int return_value_prepare_http_connect$2;
  if(sd >= 1)
  {
    return_value_inet_ntoa$1=inet_ntoa(caddr.sin_addr);
    syslog(7, "%s TUNNEL %s", return_value_inet_ntoa$1, thost);
    if(!(debug == 0))
      printf("Tunneling to %s for client %d...\n", thost, cd);

    return_value_prepare_http_connect$2=prepare_http_connect(sd, tcreds, thost);
    if(!(return_value_prepare_http_connect$2 == 0))
      tunnel(cd, sd);

  }


bailout:
  ;
  close(sd);
  close(cd);
  free((void *)tcreds);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// free_rr_data
// file utils.c line 614
extern void free_rr_data(struct rr_data_s *data)
{
  if(!(data == ((struct rr_data_s *)NULL)))
  {
    if(!(data->headers == ((struct hlist_s *)NULL)))
      hlist_free(data->headers);

    if(!(data->method == ((char *)NULL)))
      free((void *)data->method);

    if(!(data->url == ((char *)NULL)))
      free((void *)data->url);

    if(!(data->rel_url == ((char *)NULL)))
      free((void *)data->rel_url);

    if(!(data->hostname == ((char *)NULL)))
      free((void *)data->hostname);

    if(!(data->http == ((char *)NULL)))
      free((void *)data->http);

    if(!(data->msg == ((char *)NULL)))
      free((void *)data->msg);

    if(!(data->body == ((char *)NULL)))
      free((void *)data->body);

    free((void *)data);
  }

}

// from_base64
// file utils.c line 890
extern signed int from_base64(char *out, const char *in)
{
  signed int len = 0;
  unsigned char digit1;
  unsigned char digit2;
  unsigned char digit3;
  unsigned char digit4;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$5;
  char *tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  do
  {
    digit1 = (unsigned char)in[(signed long int)0];
    if((signed int)digit1 >= 128)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = index64[(signed long int)(unsigned int)digit1] == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      return -1;

    digit2 = (unsigned char)in[(signed long int)1];
    if((signed int)digit2 >= 128)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = index64[(signed long int)(unsigned int)digit2] == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      return -1;

    digit3 = (unsigned char)in[(signed long int)2];
    if((signed int)digit3 >= 128)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      if(!((signed int)digit3 == 61))
        tmp_if_expr$3 = index64[(signed long int)(unsigned int)digit3] == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      return -1;

    digit4 = (unsigned char)in[(signed long int)3];
    if((signed int)digit4 >= 128)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      if(!((signed int)digit4 == 61))
        tmp_if_expr$5 = index64[(signed long int)(unsigned int)digit4] == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      tmp_if_expr$6 = tmp_if_expr$5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
      return -1;

    in = in + (signed long int)4;
    tmp_post$7 = out;
    out = out + 1l;
    *tmp_post$7 = (char)(index64[(signed long int)(unsigned int)digit1] << 2 | index64[(signed long int)(unsigned int)digit2] >> 4);
    len = len + 1;
    if(!((signed int)digit3 == 61))
    {
      tmp_post$8 = out;
      out = out + 1l;
      *tmp_post$8 = (char)(index64[(signed long int)(unsigned int)digit2] << 4 & 0xf0 | index64[(signed long int)(unsigned int)digit3] >> 2);
      len = len + 1;
      if(!((signed int)digit4 == 61))
      {
        tmp_post$9 = out;
        out = out + 1l;
        *tmp_post$9 = (char)(index64[(signed long int)(unsigned int)digit3] << 6 & 0xc0 | index64[(signed long int)(unsigned int)digit4]);
        len = len + 1;
      }

    }

  }
  while(!(*in == 0) && !((signed int)digit4 == 61));
  return len;
}

// gen_401_page
// file pages.c line 43
char * gen_401_page(const char *http, const char *host, signed int port)
{
  char *tmp;
  if(http == ((const char *)NULL))
    http = "HTTP/1.0";

  tmp=new((unsigned long int)4096);
  snprintf(tmp, (unsigned long int)(4096 - 1), "%s 401 Access denied\r\nWWW-Authenticate: Basic realm=\"%s:%d\"\r\nContent-Type: text/html\r\n\r\n<html><body><h1>401 Access denied</h1><p><a href='http://cntlm.sf.net/'>Cntlm</a> proxy requests your credentials for this URL.</p></body></html>", http, host, port);
  return tmp;
}

// gen_407_page
// file pages.c line 29
char * gen_407_page(const char *http)
{
  char *tmp;
  if(http == ((const char *)NULL))
    http = "HTTP/1.0";

  tmp=new((unsigned long int)4096);
  snprintf(tmp, (unsigned long int)(4096 - 1), "%s 407 Access denied\r\nProxy-Authenticate: Basic realm=\"Cntlm Proxy\"\r\nContent-Type: text/html\r\n\r\n<html><body><h1>407 Access denied</h1><p><a href='http://cntlm.sf.net/'>Cntlm</a> requests your credentials for proxy access.</p></body></html>", http);
  return tmp;
}

// gen_502_page
// file pages.c line 70
char * gen_502_page(const char *http, const char *msg)
{
  char *tmp;
  if(http == ((const char *)NULL))
    http = "HTTP/1.0";

  if(msg == ((const char *)NULL))
    msg = "Proxy error";

  tmp=new((unsigned long int)4096);
  snprintf(tmp, (unsigned long int)(4096 - 1), "%s 502 %s\r\nContent-Type: text/html\r\n\r\n<html><body><h1>502 %s</h1><p><a href='http://cntlm.sf.net/'>Cntlm</a> proxy failed to complete the request.</p></body></html>", http, msg, msg);
  return tmp;
}

// gen_denied_page
// file pages.c line 57
char * gen_denied_page(const char *ip)
{
  char *tmp;
  if(ip == ((const char *)NULL))
    ip = "client";

  tmp=new((unsigned long int)4096);
  snprintf(tmp, (unsigned long int)(4096 - 1), "HTTP/1.0 407 Access denied\r\nContent-Type: text/html\r\n\r\n<html><body><h1>Access denied</h1><p>Your request has been declined, %s is not allowed to connect.</p></body></html>", ip);
  return tmp;
}

// get_http_header_name
// file http.c line 54
extern char * get_http_header_name(const char *src)
{
  signed int i;
  unsigned long int tmp_statement_expression$1;
  char __r0;
  char __r1;
  char __r2;
  unsigned long int return_value___builtin_strcspn$2;
  return_value___builtin_strcspn$2=__builtin_strcspn(src, ":");
  tmp_statement_expression$1 = return_value___builtin_strcspn$2;
  i = (signed int)tmp_statement_expression$1;
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(src);
  char *return_value_substr$3;
  if(!((unsigned long int)i == return_value_strlen$4))
  {
    return_value_substr$3=substr(src, 0, i);
    return return_value_substr$3;
  }

  else
    return (char *)(void *)0;
}

// get_http_header_value
// file http.c line 67
extern char * get_http_header_value(const char *src)
{
  char *sub;
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(src, 58);
  sub = return_value___builtin_strchr$2;
  if(!(sub == ((char *)NULL)))
  {
    sub = sub + 1l;
    for( ; (signed int)*sub == 32; sub = sub + 1l)
      ;
    char *return_value___strdup$1;
    return_value___strdup$1=__strdup(sub);
    return return_value___strdup$1;
  }

  else
    return (char *)(void *)0;
}

// gl_des_ecb_crypt
// file xcrypt.h line 91
extern void gl_des_ecb_crypt(struct anonymous *ctx, const char *_from, char *_to, signed int mode)
{
  const unsigned char *from = (const unsigned char *)_from;
  unsigned char *to = (unsigned char *)_to;
  unsigned int left;
  unsigned int right;
  unsigned int work;
  unsigned int *keys;
  unsigned int *tmp_if_expr$1;
  if(!(mode == 0))
    tmp_if_expr$1 = ctx->decrypt_subkeys;

  else
    tmp_if_expr$1 = ctx->encrypt_subkeys;
  keys = tmp_if_expr$1;
  left = (unsigned int)((signed int)from[(signed long int)0] << 24 | (signed int)from[(signed long int)1] << 16 | (signed int)from[(signed long int)2] << 8 | (signed int)from[(signed long int)3]);
  right = (unsigned int)((signed int)from[(signed long int)4] << 24 | (signed int)from[(signed long int)5] << 16 | (signed int)from[(signed long int)6] << 8 | (signed int)from[(signed long int)7]);
  work = (left >> 4 ^ right) & (unsigned int)0x0f0f0f0f;
  right = right ^ work;
  left = left ^ work << 4;
  work = (left >> 16 ^ right) & (unsigned int)0x0000ffff;
  right = right ^ work;
  left = left ^ work << 16;
  work = (right >> 2 ^ left) & (unsigned int)0x33333333;
  left = left ^ work;
  right = right ^ work << 2;
  work = (right >> 8 ^ left) & (unsigned int)0x00ff00ff;
  left = left ^ work;
  right = right ^ work << 8;
  right = right << 1 | right >> 31;
  work = (left ^ right) & 0xaaaaaaaa;
  right = right ^ work;
  left = left ^ work;
  left = left << 1 | left >> 31;
  unsigned int *tmp_post$2 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$2;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$3 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$3;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$4 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$4;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$5 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$5;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$6 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$6;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$7 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$7;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$8 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$8;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$9 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$9;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$10 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$10;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$11 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$11;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$12 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$12;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$13 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$13;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$14 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$14;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$15 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$15;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$16 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$16;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$17 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$17;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$18 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$18;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$19 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$19;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$20 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$20;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$21 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$21;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$22 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$22;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$23 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$23;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$24 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$24;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$25 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$25;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$26 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$26;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$27 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$27;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$28 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$28;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$29 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$29;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$30 = keys;
  keys = keys + 1l;
  work = right ^ *tmp_post$30;
  left = left ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$31 = keys;
  keys = keys + 1l;
  work = (right << 28 | right >> 4) ^ *tmp_post$31;
  left = left ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  left = left ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  left = left ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  left = left ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$32 = keys;
  keys = keys + 1l;
  work = left ^ *tmp_post$32;
  right = right ^ sbox8[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox6[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox4[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox2[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  unsigned int *tmp_post$33 = keys;
  keys = keys + 1l;
  work = (left << 28 | left >> 4) ^ *tmp_post$33;
  right = right ^ sbox7[(signed long int)(work & (unsigned int)0x3f)];
  right = right ^ sbox5[(signed long int)(work >> 8 & (unsigned int)0x3f)];
  right = right ^ sbox3[(signed long int)(work >> 16 & (unsigned int)0x3f)];
  right = right ^ sbox1[(signed long int)(work >> 24 & (unsigned int)0x3f)];
  right = right << 31 | right >> 1;
  work = (right ^ left) & 0xaaaaaaaa;
  right = right ^ work;
  left = left ^ work;
  left = left << 31 | left >> 1;
  work = (left >> 8 ^ right) & (unsigned int)0x00ff00ff;
  right = right ^ work;
  left = left ^ work << 8;
  work = (left >> 2 ^ right) & (unsigned int)0x33333333;
  right = right ^ work;
  left = left ^ work << 2;
  work = (right >> 16 ^ left) & (unsigned int)0x0000ffff;
  left = left ^ work;
  right = right ^ work << 16;
  work = (right >> 4 ^ left) & (unsigned int)0x0f0f0f0f;
  left = left ^ work;
  right = right ^ work << 4;
  to[(signed long int)0] = (unsigned char)(right >> 24 & (unsigned int)0xff);
  to[(signed long int)1] = (unsigned char)(right >> 16 & (unsigned int)0xff);
  to[(signed long int)2] = (unsigned char)(right >> 8 & (unsigned int)0xff);
  to[(signed long int)3] = (unsigned char)(right & (unsigned int)0xff);
  to[(signed long int)4] = (unsigned char)(left >> 24 & (unsigned int)0xff);
  to[(signed long int)5] = (unsigned char)(left >> 16 & (unsigned int)0xff);
  to[(signed long int)6] = (unsigned char)(left >> 8 & (unsigned int)0xff);
  to[(signed long int)7] = (unsigned char)(left & (unsigned int)0xff);
}

// gl_des_is_weak_key
// file xcrypt.c line 306
extern _Bool gl_des_is_weak_key(const char *key)
{
  char work[8l];
  signed int i;
  signed int left;
  signed int right;
  signed int middle;
  signed int cmp_result;
  i = 0;
  for( ; !(i >= 8); i = i + 1)
    work[(signed long int)i] = (char)((signed int)(unsigned char)key[(signed long int)i] & 0xfe);
  left = 0;
  right = 63;
  while(right >= left)
  {
    middle = (left + right) / 2;
    cmp_result=memcmp((const void *)work, (const void *)weak_keys[(signed long int)middle], (unsigned long int)8);
    if(cmp_result == 0)
      return (_Bool)-1;

    if(cmp_result >= 1)
      left = middle + 1;

    else
      right = middle - 1;
  }
  return (_Bool)0;
}

// gl_des_makekey
// file xcrypt.c line 512
extern _Bool gl_des_makekey(struct anonymous *ctx, const char *key, unsigned long int keylen)
{
  if(!(keylen == 8ul))
    return (_Bool)0;

  else
  {
    gl_des_setkey(ctx, key);
    _Bool return_value_gl_des_is_weak_key$1;
    return_value_gl_des_is_weak_key$1=gl_des_is_weak_key(key);
    return !(return_value_gl_des_is_weak_key$1 != (_Bool)0);
  }
}

// gl_des_setkey
// file xcrypt.h line 89
extern void gl_des_setkey(struct anonymous *ctx, const char *key)
{
  signed int i;
  des_key_schedule(key, ctx->encrypt_subkeys);
  i = 0;
  for( ; !(i >= 32); i = i + 2)
  {
    ctx->decrypt_subkeys[(signed long int)i] = ctx->encrypt_subkeys[(signed long int)(30 - i)];
    ctx->decrypt_subkeys[(signed long int)(i + 1)] = ctx->encrypt_subkeys[(signed long int)(31 - i)];
  }
}

// headers_recv
// file http.c line 85
extern signed int headers_recv(signed int fd, struct rr_data_s *data)
{
  signed int i;
  signed int bsize;
  signed int len;
  char *buf;
  char *tok;
  char *s3 = ((char *)NULL);
  char *orig = (char *)(void *)0;
  char *ccode = (char *)(void *)0;
  char *host = (char *)(void *)0;
  bsize = 4096;
  buf=new((unsigned long int)bsize);
  i=so_recvln(fd, &buf, &bsize);
  char *return_value___strdup$1;
  unsigned long int return_value_strlen$2;
  char *return_value___strtok_r$3;
  _Bool tmp_if_expr$29;
  signed int return_value_strncasecmp$26;
  _Bool tmp_if_expr$28;
  signed int return_value_strncasecmp$27;
  char *tmp_post$8;
  char *return_value___strdup$9;
  char *return_value___strdup$11;
  _Bool tmp_if_expr$13;
  unsigned long int return_value_strlen$12;
  _Bool tmp_if_expr$14;
  char *return_value_strstr$25;
  char *return_value___strdup$17;
  char *return_value___strdup$19;
  _Bool tmp_if_expr$20;
  signed int return_value_is_http_header$33;
  unsigned long int return_value_strlen$30;
  _Bool tmp_if_expr$37;
  unsigned long int return_value_strlen$36;
  _Bool tmp_if_expr$40;
  char *return_value___builtin_strchr$39;
  _Bool tmp_if_expr$42;
  if(i >= 1)
  {
    if(!(debug == 0))
      printf("HEAD: %s", buf);

    trimr(buf);
    return_value___strdup$1=__strdup(buf);
    orig = return_value___strdup$1;
    return_value_strlen$2=strlen(buf);
    len = (signed int)return_value_strlen$2;
    return_value___strtok_r$3=__strtok_r(buf, " ", &s3);
    tok = return_value___strtok_r$3;
    if(!(tok == ((char *)NULL)))
    {
      return_value_strncasecmp$26=strncasecmp(buf, "HTTP/", (unsigned long int)5);
      if(return_value_strncasecmp$26 == 0)
        tmp_if_expr$28 = (_Bool)1;

      else
      {
        return_value_strncasecmp$27=strncasecmp(tok, "ICY", (unsigned long int)3);
        tmp_if_expr$28 = !(return_value_strncasecmp$27 != 0) ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr$29 = tmp_if_expr$28 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$29 = (_Bool)0;
    if(tmp_if_expr$29)
    {
      data->req = 0;
      data->empty = 0;
      char *return_value___strdup$4;
      return_value___strdup$4=__strdup(tok);
      data->http = return_value___strdup$4;
      data->msg = (char *)(void *)0;
      char *return_value___strtok_r$5;
      return_value___strtok_r$5=__strtok_r((char *)(void *)0, " ", &s3);
      tok = return_value___strtok_r$5;
      if(!(tok == ((char *)NULL)))
      {
        char *return_value___strdup$6;
        return_value___strdup$6=__strdup(tok);
        ccode = return_value___strdup$6;
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(ccode);
        tok = tok + (signed long int)return_value_strlen$7;
        while(!(tok >= buf + (signed long int)len))
        {
          tmp_post$8 = tok;
          tok = tok + 1l;
          if(!((signed int)*tmp_post$8 == 32))
            break;

        }
        unsigned long int return_value_strlen$10;
        return_value_strlen$10=strlen(tok);
        if(!(return_value_strlen$10 == 0ul))
        {
          return_value___strdup$9=__strdup(tok);
          data->msg = return_value___strdup$9;
        }

      }

      if(data->msg == ((char *)NULL))
      {
        return_value___strdup$11=__strdup("");
        data->msg = return_value___strdup$11;
      }

      if(ccode == ((char *)NULL))
        tmp_if_expr$13 = (_Bool)1;

      else
      {
        return_value_strlen$12=strlen(ccode);
        tmp_if_expr$13 = return_value_strlen$12 != (unsigned long int)3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13)
        tmp_if_expr$14 = (_Bool)1;

      else
      {
        data->code=atoi(ccode);
        tmp_if_expr$14 = data->code == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$14)
      {
        i = -2;
        goto bailout;
      }

    }

    else
    {
      return_value_strstr$25=strstr(orig, " HTTP/");
      if(!(return_value_strstr$25 == ((char *)NULL)) && !(tok == ((char *)NULL)))
      {
        data->req = 1;
        data->empty = 0;
        data->method = (char *)(void *)0;
        data->url = (char *)(void *)0;
        data->rel_url = (char *)(void *)0;
        data->http = (char *)(void *)0;
        data->hostname = (char *)(void *)0;
        char *return_value___strdup$15;
        return_value___strdup$15=__strdup(tok);
        data->method = return_value___strdup$15;
        char *return_value___strtok_r$16;
        return_value___strtok_r$16=__strtok_r((char *)(void *)0, " ", &s3);
        tok = return_value___strtok_r$16;
        if(!(tok == ((char *)NULL)))
        {
          return_value___strdup$17=__strdup(tok);
          data->url = return_value___strdup$17;
        }

        char *return_value___strtok_r$18;
        return_value___strtok_r$18=__strtok_r((char *)(void *)0, " ", &s3);
        tok = return_value___strtok_r$18;
        if(!(tok == ((char *)NULL)))
        {
          return_value___strdup$19=__strdup(tok);
          data->http = return_value___strdup$19;
        }

        if(data->url == ((char *)NULL))
          tmp_if_expr$20 = (_Bool)1;

        else
          tmp_if_expr$20 = !(data->http != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$20)
        {
          i = -3;
          goto bailout;
        }

        tok=strstr(data->url, "://");
        if(!(tok == ((char *)NULL)))
          tok = tok + (signed long int)3;

        else
          tok = data->url;
        char *return_value___builtin_strchr$21;
        return_value___builtin_strchr$21=__builtin_strchr(tok, 47);
        s3 = return_value___builtin_strchr$21;
        if(!(s3 == ((char *)NULL)))
        {
          host=substr(tok, 0, (signed int)(s3 - tok));
          char *return_value___strdup$22;
          return_value___strdup$22=__strdup(s3);
          data->rel_url = return_value___strdup$22;
        }

        else
        {
          unsigned long int return_value_strlen$23;
          return_value_strlen$23=strlen(tok);
          host=substr(tok, 0, (signed int)return_value_strlen$23);
          char *return_value___strdup$24;
          return_value___strdup$24=__strdup("/");
          data->rel_url = return_value___strdup$24;
        }
      }

      else
      {
        if(!(debug == 0))
          printf("headers_recv: Unknown header (%s).\n", orig);

        i = -4;
        goto bailout;
      }
    }
    do
    {
      i=so_recvln(fd, &buf, &bsize);
      trimr(buf);
      if(i >= 1)
      {
        return_value_is_http_header$33=is_http_header(buf);
        if(!(return_value_is_http_header$33 == 0))
        {
          char *return_value_get_http_header_name$31;
          return_value_get_http_header_name$31=get_http_header_name(buf);
          char *return_value_get_http_header_value$32;
          return_value_get_http_header_value$32=get_http_header_value(buf);
          data->headers=hlist_add(data->headers, return_value_get_http_header_name$31, return_value_get_http_header_value$32, (enum anonymous$4)HLIST_NOALLOC, (enum anonymous$4)HLIST_NOALLOC);
        }

      }

      return_value_strlen$30=strlen(buf);
    }
    while(i >= 1 && !(return_value_strlen$30 == 0ul));
    if(!(data->req == 0))
    {
      if(!(host == ((char *)NULL)))
      {
        return_value_strlen$36=strlen(host);
        tmp_if_expr$37 = return_value_strlen$36 != 0ul ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$37 = (_Bool)0;
      if(tmp_if_expr$37)
      {
        char *return_value___strdup$34;
        return_value___strdup$34=__strdup(host);
        data->hostname = return_value___strdup$34;
        char *return_value_hlist_get$35;
        return_value_hlist_get$35=hlist_get(data->headers, "Host");
        if(return_value_hlist_get$35 == ((char *)NULL))
          data->headers=hlist_add(data->headers, "Host", host, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);

      }

      else
      {
        if(!(debug == 0))
          printf("headers_recv: no host name (%s)\n", orig);

        i = -6;
        goto bailout;
      }
      if(!(data->hostname == ((char *)NULL)))
      {
        return_value___builtin_strchr$39=__builtin_strchr(data->hostname, 58);
        tok = return_value___builtin_strchr$39;
        tmp_if_expr$40 = tok != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$40 = (_Bool)0;
      if(tmp_if_expr$40)
      {
        *tok = (char)0;
        data->port=atoi(tok + (signed long int)1);
      }

      else
        if(!(data->url == ((char *)NULL)))
        {
          signed int return_value_strncasecmp$38;
          return_value_strncasecmp$38=strncasecmp(data->url, "https", (unsigned long int)5);
          if(return_value_strncasecmp$38 == 0)
            data->port = 443;

          else
            data->port = 80;
        }

      unsigned long int return_value_strlen$41;
      return_value_strlen$41=strlen(data->hostname);
      if(return_value_strlen$41 == 0ul)
        tmp_if_expr$42 = (_Bool)1;

      else
        tmp_if_expr$42 = !(data->port != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$42)
        i = -5;

    }

  }


bailout:
  ;
  if(!(orig == ((char *)NULL)))
    free((void *)orig);

  if(!(ccode == ((char *)NULL)))
    free((void *)ccode);

  if(!(host == ((char *)NULL)))
    free((void *)host);

  free((void *)buf);
  if(!(i >= 1))
  {
    if(!(debug == 0))
      printf("headers_recv: fd %d error %d\n", fd, i);

    return 0;
  }

  else
    return 1;
}

// headers_send
// file http.c line 245
extern signed int headers_send(signed int fd, struct rr_data_s *data)
{
  struct hlist_s *t;
  char *buf;
  signed int i;
  signed int len;
  unsigned long int return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$3;
  unsigned long int return_value_strlen$4;
  unsigned long int return_value_strlen$5;
  if(!(data->req == 0))
  {
    return_value_strlen$1=strlen(data->method);
    return_value_strlen$2=strlen(data->url);
    return_value_strlen$3=strlen(data->http);
    len = (signed int)((unsigned long int)20 + return_value_strlen$1 + return_value_strlen$2 + return_value_strlen$3);
  }

  else
  {
    return_value_strlen$4=strlen(data->http);
    return_value_strlen$5=strlen(data->msg);
    len = (signed int)((unsigned long int)20 + return_value_strlen$4 + return_value_strlen$5);
  }
  t = data->headers;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    unsigned long int return_value_strlen$6;
    return_value_strlen$6=strlen(t->key);
    unsigned long int return_value_strlen$7;
    return_value_strlen$7=strlen(t->value);
    len = len + (signed int)((unsigned long int)20 + return_value_strlen$6 + return_value_strlen$7);
    t = t->next;
  }
  buf=new((unsigned long int)len);
  len = 0;
  if(!(data->req == 0))
    len=sprintf(buf, "%s %s %s\r\n", data->method, data->url, data->http);

  else
    if(data->skip_http == 0)
      len=sprintf(buf, "%s %03d %s\r\n", data->http, data->code, data->msg);

  t = data->headers;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_sprintf$8;
    return_value_sprintf$8=sprintf(buf + (signed long int)len, "%s: %s\r\n", t->key, t->value);
    len = len + return_value_sprintf$8;
    t = t->next;
  }
  strcat(buf, "\r\n");
  signed int return_value_so_closed$10;
  return_value_so_closed$10=so_closed(fd);
  signed long int return_value_write$9;
  if(return_value_so_closed$10 == 0)
  {
    return_value_write$9=write(fd, (const void *)buf, (unsigned long int)(len + 2));
    i = (signed int)return_value_write$9;
  }

  else
    i = -999;
  free((void *)buf);
  if(!(i == 2 + len) || !(i >= 1))
  {
    if(!(debug == 0))
      printf("headers_send: fd %d warning %d (connection closed)\n", fd, i);

    return 0;
  }

  else
    return 1;
}

// hlist_add
// file utils.c line 259
extern struct hlist_s * hlist_add(struct hlist_s *list, char *key, char *value, enum anonymous$4 allockey, enum anonymous$4 allocvalue)
{
  struct hlist_s *tmp;
  struct hlist_s *t = list;
  char *tmp_if_expr$3;
  char *return_value___strdup$2;
  char *tmp_if_expr$5;
  char *return_value___strdup$4;
  if(key == ((char *)NULL) || value == ((char *)NULL))
    return list;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct hlist_s) /*32ul*/ );
    tmp = (struct hlist_s *)return_value_malloc$1;
    if((signed int)allockey == HLIST_ALLOC)
    {
      return_value___strdup$2=__strdup(key);
      tmp_if_expr$3 = return_value___strdup$2;
    }

    else
      tmp_if_expr$3 = key;
    tmp->key = tmp_if_expr$3;
    if((signed int)allocvalue == HLIST_ALLOC)
    {
      return_value___strdup$4=__strdup(value);
      tmp_if_expr$5 = return_value___strdup$4;
    }

    else
      tmp_if_expr$5 = value;
    tmp->value = tmp_if_expr$5;
    tmp->next = (struct hlist_s *)(void *)0;
    tmp->islist = 0;
    if(list == ((struct hlist_s *)NULL))
      return tmp;

    else
    {
      for( ; !(t->next == ((struct hlist_s *)NULL)); t = t->next)
        ;
      t->next = tmp;
      return list;
    }
  }
}

// hlist_count
// file utils.c line 370
extern signed int hlist_count(struct hlist_s *list)
{
  struct hlist_s *t = list;
  signed int rc = 0;
  for( ; !(t == ((struct hlist_s *)NULL)); t = t->next)
    rc = rc + 1;
  return rc;
}

// hlist_del
// file utils.c line 299
extern struct hlist_s * hlist_del(struct hlist_s *list, const char *key)
{
  struct hlist_s *ot = (struct hlist_s *)(void *)0;
  struct hlist_s *t = list;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp(t->key, key);
    if(return_value_strcasecmp$1 == 0)
      break;

    ot = t;
    t = t->next;
  }
  if(!(t == ((struct hlist_s *)NULL)))
  {
    struct hlist_s *tmp = t->next;
    free((void *)t->key);
    free((void *)t->value);
    free((void *)t);
    if(ot == ((struct hlist_s *)NULL))
      return tmp;

    ot->next = tmp;
  }

  return list;
}

// hlist_dump
// file utils.c line 467
extern void hlist_dump(struct hlist_s *list)
{
  struct hlist_s *t = list;
  for( ; !(t == ((struct hlist_s *)NULL)); t = t->next)
    printf("%-30s => %s\n", t->key, t->value);
}

// hlist_dup
// file utils.c line 285
extern struct hlist_s * hlist_dup(struct hlist_s *list)
{
  struct hlist_s *tmp = (struct hlist_s *)(void *)0;
  struct hlist_s *t = list;
  for( ; !(t == ((struct hlist_s *)NULL)); t = t->next)
    tmp=hlist_add(tmp, t->key, t->value, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);
  return tmp;
}

// hlist_free
// file utils.c line 448
extern struct hlist_s * hlist_free(struct hlist_s *list)
{
  struct hlist_s *t = list;
  for( ; !(list == ((struct hlist_s *)NULL)); list = t)
  {
    t = list->next;
    free((void *)list->key);
    free((void *)list->value);
    free((void *)list);
  }
  return (struct hlist_s *)(void *)0;
}

// hlist_get
// file utils.c line 385
extern char * hlist_get(struct hlist_s *list, const char *key)
{
  struct hlist_s *t = list;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp(t->key, key);
    if(return_value_strcasecmp$1 == 0)
      break;

    t = t->next;
  }
  char *tmp_if_expr$2;
  if(t == ((struct hlist_s *)NULL))
    tmp_if_expr$2 = (char *)(void *)0;

  else
    tmp_if_expr$2 = t->value;
  return tmp_if_expr$2;
}

// hlist_in
// file utils.c line 355
extern signed int hlist_in(struct hlist_s *list, const char *key)
{
  struct hlist_s *t = list;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp(t->key, key);
    if(return_value_strcasecmp$1 == 0)
      break;

    t = t->next;
  }
  return (signed int)(t != (struct hlist_s *)(void *)0);
}

// hlist_mod
// file utils.c line 333
extern struct hlist_s * hlist_mod(struct hlist_s *list, char *key, char *value, signed int add)
{
  struct hlist_s *t = list;
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp(t->key, key);
    if(return_value_strcasecmp$1 == 0)
      break;

    t = t->next;
  }
  if(!(t == ((struct hlist_s *)NULL)))
  {
    free((void *)t->value);
    char *return_value___strdup$2;
    return_value___strdup$2=__strdup(value);
    t->value = return_value___strdup$2;
  }

  else
    if(!(add == 0))
      list=hlist_add(list, key, value, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);

  return list;
}

// hlist_subcmp
// file utils.c line 401
extern signed int hlist_subcmp(struct hlist_s *list, const char *key, const char *substr)
{
  signed int found = 0;
  char *tmp;
  char *low;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(substr);
  low = return_value___strdup$1;
  lowercase(low);
  tmp=hlist_get(list, key);
  if(!(tmp == ((char *)NULL)))
  {
    char *return_value___strdup$2;
    return_value___strdup$2=__strdup(tmp);
    tmp = return_value___strdup$2;
    lowercase(tmp);
    char *return_value_strstr$3;
    return_value_strstr$3=strstr(tmp, low);
    if(!(return_value_strstr$3 == ((char *)NULL)))
      found = 1;

    free((void *)tmp);
  }

  free((void *)low);
  return found;
}

// hlist_subcmp_all
// file utils.c line 423
extern signed int hlist_subcmp_all(struct hlist_s *list, const char *key, const char *substr)
{
  struct hlist_s *t = list;
  signed int found = 0;
  char *tmp;
  char *low;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(substr);
  low = return_value___strdup$1;
  lowercase(low);
  while(!(t == ((struct hlist_s *)NULL)))
  {
    signed int return_value_strcasecmp$4;
    return_value_strcasecmp$4=strcasecmp(t->key, key);
    if(return_value_strcasecmp$4 == 0)
    {
      char *return_value___strdup$2;
      return_value___strdup$2=__strdup(t->value);
      tmp = return_value___strdup$2;
      lowercase(tmp);
      char *return_value_strstr$3;
      return_value_strstr$3=strstr(tmp, low);
      if(!(return_value_strstr$3 == ((char *)NULL)))
        found = 1;

      free((void *)tmp);
    }

    t = t->next;
  }
  free((void *)low);
  return found;
}

// hmac_md5
// file xcrypt.h line 101
extern signed int hmac_md5(const void *key, unsigned long int keylen, const void *in, unsigned long int inlen, void *resbuf)
{
  struct md5_ctx inner;
  struct md5_ctx outer;
  char optkeybuf[16l];
  char block[64l];
  char innerhash[16l];
  if(keylen >= 65ul)
  {
    struct md5_ctx keyhash;
    md5_init_ctx(&keyhash);
    md5_process_bytes(key, keylen, &keyhash);
    md5_finish_ctx(&keyhash, (void *)optkeybuf);
    key = (const void *)optkeybuf;
    keylen = (unsigned long int)16;
  }

  md5_init_ctx(&inner);
  memset((void *)block, 0x36, sizeof(char [64l]) /*64ul*/ );
  memxor((void *)block, key, keylen);
  md5_process_block((const void *)block, (unsigned long int)64, &inner);
  md5_process_bytes(in, inlen, &inner);
  md5_finish_ctx(&inner, (void *)innerhash);
  md5_init_ctx(&outer);
  memset((void *)block, 0x5c, sizeof(char [64l]) /*64ul*/ );
  memxor((void *)block, key, keylen);
  md5_process_block((const void *)block, (unsigned long int)64, &outer);
  md5_process_bytes((const void *)innerhash, (unsigned long int)16, &outer);
  md5_finish_ctx(&outer, resbuf);
  return 0;
}

// host_connect
// file direct.c line 45
extern signed int host_connect(const char *hostname, signed int port)
{
  struct in_addr addr;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  signed int return_value_so_resolv$2;
  return_value_so_resolv$2=so_resolv(&addr, hostname);
  if(return_value_so_resolv$2 == 0)
    return -1;

  else
  {
    signed int return_value_so_connect$3;
    return_value_so_connect$3=so_connect(addr, port);
    return return_value_so_connect$3;
  }
}

// http_body_drop
// file http.c line 573
extern signed int http_body_drop(signed int fd, struct rr_data_s *response)
{
  signed long long int bodylen;
  signed int rc = 1;
  bodylen=http_has_body((struct rr_data_s *)(void *)0, response);
  if(!(bodylen == 0ll))
  {
    signed int return_value_hlist_subcmp$1;
    return_value_hlist_subcmp$1=hlist_subcmp(response->headers, "Transfer-Encoding", "chunked");
    if(!(return_value_hlist_subcmp$1 == 0))
    {
      if(!(debug == 0))
        printf("Discarding chunked body.\n");

      rc=chunked_data_send(-1, fd);
    }

    else
    {
      if(!(debug == 0))
        printf("Discarding %lld bytes.\n", bodylen);

      rc=data_send(-1, fd, bodylen);
    }
  }

  return rc;
}

// http_body_send
// file http.c line 529
extern signed int http_body_send(signed int writefd, signed int readfd, struct rr_data_s *request, struct rr_data_s *response)
{
  signed long long int bodylen;
  signed int rc = 1;
  struct rr_data_s *current = response->empty != 0 ? request : response;
  bodylen=http_has_body(request, response);
  if(!(bodylen == 0ll))
  {
    signed int return_value_hlist_subcmp$1;
    return_value_hlist_subcmp$1=hlist_subcmp(current->headers, "Transfer-Encoding", "chunked");
    if(!(return_value_hlist_subcmp$1 == 0))
    {
      if(!(debug == 0))
        printf("Chunked body included.\n");

      rc=chunked_data_send(writefd, readfd);
      if(!(debug == 0))
        printf(rc != 0 ? "Chunked body sent.\n" : "Could not chunk send whole body\n");

    }

    else
    {
      if(!(debug == 0))
        printf("Body included. Length: %lld\n", bodylen);

      rc=data_send(writefd, readfd, bodylen);
      if(!(debug == 0))
        printf(rc != 0 ? "Body sent.\n" : "Could not send whole body\n");

    }
  }

  else
    if(!(debug == 0))
      printf("No body.\n");

  return rc;
}

// http_has_body
// file http.c line 471
extern signed long long int http_has_body(struct rr_data_s *request, struct rr_data_s *response)
{
  struct rr_data_s *current;
  signed long long int length;
  signed int nobody;
  char *tmp;
  _Bool tmp_if_expr$1;
  if(response == ((struct rr_data_s *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = response->empty != 0 ? (_Bool)1 : (_Bool)0;
  current = tmp_if_expr$1 ? request : response;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  signed int return_value_strcasecmp$3;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$11;
  signed int return_value_strcasecmp$10;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$14;
  signed int return_value_strcasecmp$13;
  if(current == response)
  {
    if(!(request == ((struct rr_data_s *)NULL)))
      tmp_if_expr$2 = request->req != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      return_value_strcasecmp$3=strcasecmp("HEAD", request->method);
      tmp_if_expr$4 = !(return_value_strcasecmp$3 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      if(response->code >= 100)
        tmp_if_expr$5 = response->code < 200 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$5 = (_Bool)0;
      tmp_if_expr$6 = tmp_if_expr$5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (_Bool)1;

    else
      tmp_if_expr$7 = response->code == 204 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$7)
      tmp_if_expr$8 = (_Bool)1;

    else
      tmp_if_expr$8 = response->code == 304 ? (_Bool)1 : (_Bool)0;
    nobody = (signed int)tmp_if_expr$8;
  }

  else
  {
    if(!(request == ((struct rr_data_s *)NULL)))
      tmp_if_expr$9 = request->req != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$9 = (_Bool)0;
    if(tmp_if_expr$9)
    {
      return_value_strcasecmp$10=strcasecmp("GET", request->method);
      tmp_if_expr$11 = !(return_value_strcasecmp$10 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$11 = (_Bool)0;
    if(tmp_if_expr$11)
      tmp_if_expr$15 = (_Bool)1;

    else
    {
      if(!(request == ((struct rr_data_s *)NULL)))
        tmp_if_expr$12 = request->req != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$12 = (_Bool)0;
      if(tmp_if_expr$12)
      {
        return_value_strcasecmp$13=strcasecmp("HEAD", request->method);
        tmp_if_expr$14 = !(return_value_strcasecmp$13 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$14 = (_Bool)0;
      tmp_if_expr$15 = tmp_if_expr$14 ? (_Bool)1 : (_Bool)0;
    }
    nobody = (signed int)tmp_if_expr$15;
  }
  tmp=hlist_get(current->headers, "Content-Length");
  _Bool tmp_if_expr$26;
  signed int return_value_hlist_in$21;
  _Bool tmp_if_expr$23;
  signed int return_value_hlist_in$22;
  _Bool tmp_if_expr$25;
  signed int return_value_hlist_subcmp$24;
  if(tmp == ((char *)NULL) && nobody == 0)
  {
    return_value_hlist_in$21=hlist_in(current->headers, "Content-Type");
    if(!(return_value_hlist_in$21 == 0))
      tmp_if_expr$23 = (_Bool)1;

    else
    {
      return_value_hlist_in$22=hlist_in(current->headers, "Transfer-Encoding");
      tmp_if_expr$23 = return_value_hlist_in$22 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$23)
      tmp_if_expr$25 = (_Bool)1;

    else
    {
      return_value_hlist_subcmp$24=hlist_subcmp(current->headers, "Connection", "close");
      tmp_if_expr$25 = return_value_hlist_subcmp$24 != 0 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr$26 = tmp_if_expr$25 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$26 = (_Bool)0;
  _Bool tmp_if_expr$18;
  signed int return_value_hlist_subcmp$17;
  signed long int tmp_if_expr$20;
  signed long long int return_value_atoll$19;
  if(tmp_if_expr$26)
  {
    signed int return_value_hlist_in$16;
    return_value_hlist_in$16=hlist_in(current->headers, "Transfer-Encoding");
    if(!(return_value_hlist_in$16 == 0))
    {
      return_value_hlist_subcmp$17=hlist_subcmp(current->headers, "Transfer-Encoding", "chunked");
      tmp_if_expr$18 = return_value_hlist_subcmp$17 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$18 = (_Bool)0;
    if(tmp_if_expr$18)
      length = (signed long long int)1;

    else
      length = (signed long long int)-1;
  }

  else
  {
    if(tmp == ((char *)NULL) || !(nobody == 0))
      tmp_if_expr$20 = (signed long int)0;

    else
    {
      return_value_atoll$19=atoll(tmp);
      tmp_if_expr$20 = return_value_atoll$19;
    }
    length = tmp_if_expr$20;
  }
  if(current == request && length == -1l)
    length = (signed long long int)0;

  return length;
}

// http_parse_basic
// file http.c line 598
extern signed int http_parse_basic(struct hlist_s *headers, const char *header, struct auth_s *tcreds)
{
  char *tmp = (char *)(void *)0;
  char *pos = (char *)(void *)0;
  char *buf = (char *)(void *)0;
  char *dom = (char *)(void *)0;
  signed int i;
  signed int return_value_hlist_subcmp$1;
  return_value_hlist_subcmp$1=hlist_subcmp(headers, header, "basic");
  unsigned long int return_value_strlen$3;
  if(return_value_hlist_subcmp$1 == 0)
    return 0;

  else
  {
    tmp=hlist_get(headers, header);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tmp);
    buf=new(return_value_strlen$2 + (unsigned long int)1);
    i = 5;
    do
    {
      return_value_strlen$3=strlen(tmp);
      if((unsigned long int)i >= return_value_strlen$3)
        break;

      i = i + 1;
      if(!((signed int)tmp[(signed long int)i] == 32))
        break;

    }
    while((_Bool)1);
    from_base64(buf, tmp + (signed long int)i);
    char *return_value___builtin_strchr$4;
    return_value___builtin_strchr$4=__builtin_strchr(buf, 58);
    pos = return_value___builtin_strchr$4;
    if(pos == ((char *)NULL))
    {
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(buf);
      memset((void *)buf, 0, return_value_strlen$5);
      free((void *)buf);
      return -1;
    }

    else
    {
      *pos = (char)0;
      char *return_value___builtin_strchr$6;
      return_value___builtin_strchr$6=__builtin_strchr(buf, 92);
      dom = return_value___builtin_strchr$6;
      if(dom == ((char *)NULL))
      {
        if(!(buf == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          strlcpy(tcreds->user, buf, (unsigned long int)50);

      }

      else
      {
        *dom = (char)0;
        if(!(buf == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          strlcpy(tcreds->domain, buf, (unsigned long int)50);

        if(!(dom + 1l == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          strlcpy(tcreds->user, dom + (signed long int)1, (unsigned long int)50);

      }
      if(!(tcreds->hashntlm2 == 0))
      {
        tmp=ntlm2_hash_password(tcreds->user, tcreds->domain, pos + (signed long int)1);
        if(!(tmp == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          memcpy((void *)tcreds->passntlm2, (const void *)tmp, (unsigned long int)(16 < 50 ? 16 : 50));

        free((void *)tmp);
      }

      if(!(tcreds->hashnt == 0))
      {
        tmp=ntlm_hash_nt_password(pos + (signed long int)1);
        if(!(tmp == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          memcpy((void *)tcreds->passnt, (const void *)tmp, (unsigned long int)(21 < 50 ? 21 : 50));

        free((void *)tmp);
      }

      if(!(tcreds->hashlm == 0))
      {
        tmp=ntlm_hash_lm_password(pos + (signed long int)1);
        if(!(tmp == ((char *)NULL)) && !(tcreds == ((struct auth_s *)NULL)))
          memcpy((void *)tcreds->passlm, (const void *)tmp, (unsigned long int)(21 < 50 ? 21 : 50));

        free((void *)tmp);
      }

      unsigned long int return_value_strlen$7;
      return_value_strlen$7=strlen(buf);
      memset((void *)buf, 0, return_value_strlen$7);
      free((void *)buf);
    }
    return 1;
  }
}

// is_http_header
// file http.c line 47
extern signed int is_http_header(const char *src)
{
  unsigned long int tmp_statement_expression$1;
  char __r0;
  char __r1;
  char __r2;
  unsigned long int return_value___builtin_strcspn$2;
  return_value___builtin_strcspn$2=__builtin_strcspn(src, ":");
  tmp_statement_expression$1 = return_value___builtin_strcspn$2;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(src);
  return (signed int)(tmp_statement_expression$1 != return_value_strlen$3);
}

// listen_add
// file main.c line 182
void listen_add(const char *service, struct plist_s **list, char *spec, signed int gateway)
{
  struct in_addr source;
  signed int i;
  signed int p;
  signed int len;
  signed int port;
  char *tmp;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(spec);
  len = (signed int)return_value_strlen$1;
  unsigned long int tmp_statement_expression$2;
  char __r0;
  char __r1;
  char __r2;
  unsigned long int return_value___builtin_strcspn$3;
  return_value___builtin_strcspn$3=__builtin_strcspn(spec, ":");
  tmp_statement_expression$2 = return_value___builtin_strcspn$3;
  p = (signed int)tmp_statement_expression$2;
  if(!(p >= len + -1))
  {
    tmp=substr(spec, 0, p);
    signed int return_value_so_resolv$4;
    return_value_so_resolv$4=so_resolv(&source, tmp);
    if(return_value_so_resolv$4 == 0)
    {
      syslog(3, "Cannot resolve listen address %s\n", tmp);
      myexit(1);
    }

    free((void *)tmp);
    tmp = spec + (signed long int)p + (signed long int)1;
    port=atoi$link2(tmp);
  }

  else
  {
    source.s_addr=__bswap_32(gateway != 0 ? (unsigned int)0x00000000 : (unsigned int)0x7f000001);
    tmp = spec;
    port=atoi$link2(tmp);
  }
  if(port == 0)
  {
    syslog(3, "Invalid listen port %s.\n", tmp);
    myexit(1);
  }

  i=so_listen(port, source);
  if(i >= 1)
  {
    *list=plist_add(*list, (unsigned long int)i, (void *)0);
    char *return_value_inet_ntoa$5;
    return_value_inet_ntoa$5=inet_ntoa(source);
    syslog(6, "%s listening on %s:%d\n", service, return_value_inet_ntoa$5, port);
  }

}

// lowercase
// file utils.c line 734
extern char * lowercase(char *str)
{
  signed int i = 0;
  unsigned long int return_value_strlen$1;
  signed int tmp_statement_expression$2;
  signed int tmp_if_expr$4;
  const signed int **return_value___ctype_tolower_loc$3;
  const signed int **return_value___ctype_tolower_loc$5;
  do
  {
    return_value_strlen$1=strlen(str);
    if((unsigned long int)i >= return_value_strlen$1)
      break;

    signed int __res;
    return_value___ctype_tolower_loc$5=__ctype_tolower_loc();
    __res = (*return_value___ctype_tolower_loc$5)[(signed long int)(signed int)str[(signed long int)i]];
    tmp_statement_expression$2 = __res;
    str[(signed long int)i] = (char)tmp_statement_expression$2;
    i = i + 1;
  }
  while((_Bool)1);
  return str;
}

// magic_auth_detect
// file forward.c line 827
extern void magic_auth_detect(const char *url)
{
  signed int i;
  signed int nc;
  signed int c;
  signed int ign = 0;
  signed int found = -1;
  struct rr_data_s *req;
  struct rr_data_s *res;
  char *tmp;
  char *pos;
  char *host = (char *)(void *)0;
  struct auth_s *tcreds;
  char *authstr[5l] = { "NTLMv2", "NTLM2SR", "NT", "NTLM", "LM" };
  signed int prefs[4l][5l] = { { 0, 0, 1, 0, 0 }, { 1, 1, 0, 0, 3 }, { 0, 1, 0, 0, 4 }, { 2, 0, 0, 0, 1 } };
  tcreds=new_auth();
  copy_auth(tcreds, g_creds, 1);
  pos=strstr(url, "://");
  if(!(pos == ((char *)NULL)))
  {
    char *return_value___builtin_strchr$1;
    return_value___builtin_strchr$1=__builtin_strchr(pos + (signed long int)3, 47);
    tmp = return_value___builtin_strchr$1;
    host=substr(pos + (signed long int)3, 0, (signed int)(tmp != ((char *)NULL) ? (tmp - pos) - (signed long int)3 : (signed long int)0));
  }

  else
  {
    fprintf(stderr, "Invalid URL (%s)\n", url);
    goto __CPROVER_DUMP_L28;
  }
  i = 0;
  _Bool tmp_if_expr$10;
  signed int return_value_headers_recv$9;
  _Bool tmp_if_expr$7;
  signed int return_value_hlist_subcmp_all$6;
  for( ; !(i >= 4); i = i + 1)
  {
    res=new_rr_data();
    req=new_rr_data();
    req->req = 1;
    char *return_value___strdup$2;
    return_value___strdup$2=__strdup("GET");
    req->method = return_value___strdup$2;
    char *return_value___strdup$3;
    return_value___strdup$3=__strdup(url);
    req->url = return_value___strdup$3;
    char *return_value___strdup$4;
    return_value___strdup$4=__strdup("HTTP/1.1");
    req->http = return_value___strdup$4;
    req->headers=hlist_add(req->headers, "Proxy-Connection", "keep-alive", (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);
    if(!(host == ((char *)NULL)))
      req->headers=hlist_add(req->headers, "Host", host, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);

    tcreds->hashnt = prefs[(signed long int)i][(signed long int)0];
    tcreds->hashlm = prefs[(signed long int)i][(signed long int)1];
    tcreds->hashntlm2 = prefs[(signed long int)i][(signed long int)2];
    tcreds->flags = (unsigned int)prefs[(signed long int)i][(signed long int)3];
    printf("Config profile %2d/%d... ", i + 1, 4);
    nc=proxy_connect((struct auth_s *)(void *)0);
    if(!(nc >= 1))
    {
      printf("\nConnection to proxy failed, bailing out\n");
      free_rr_data(res);
      free_rr_data(req);
      close(nc);
      if(!(host == ((char *)NULL)))
        free((void *)host);

      goto __CPROVER_DUMP_L28;
    }

    c=proxy_authenticate(&nc, req, res, tcreds);
    if(!(c == 0))
    {
      if(res->code == 407)
        goto __CPROVER_DUMP_L8;

      ign = ign + 1;
      printf("Auth not required (HTTP code: %d)\n", res->code);
      free_rr_data(res);
      free_rr_data(req);
      close(nc);
    }

    else
    {

    __CPROVER_DUMP_L8:
      ;
      reset_rr_data(res);
      signed int return_value_headers_send$8;
      return_value_headers_send$8=headers_send(nc, req);
      if(return_value_headers_send$8 == 0)
        tmp_if_expr$10 = (_Bool)1;

      else
      {
        return_value_headers_recv$9=headers_recv(nc, res);
        tmp_if_expr$10 = !(return_value_headers_recv$9 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$10)
        printf("Connection closed\n");

      else
        if(res->code == 407)
        {
          signed int return_value_hlist_subcmp_all$5;
          return_value_hlist_subcmp_all$5=hlist_subcmp_all(res->headers, "Proxy-Authenticate", "NTLM");
          if(!(return_value_hlist_subcmp_all$5 == 0))
            tmp_if_expr$7 = (_Bool)1;

          else
          {
            return_value_hlist_subcmp_all$6=hlist_subcmp_all(res->headers, "Proxy-Authenticate", "BASIC");
            tmp_if_expr$7 = return_value_hlist_subcmp_all$6 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$7)
            printf("Credentials rejected\n");

          else
          {
            printf("Proxy doesn't offer NTLM or BASIC\n");
            break;
          }
        }

        else
        {
          printf("OK (HTTP code: %d)\n", res->code);
          if(!(found >= 0))
          {
            found = i;
            free_rr_data(res);
            free_rr_data(req);
            close(nc);
            break;
          }

        }
      free_rr_data(res);
      free_rr_data(req);
      close(nc);
    }
  }
  if(found >= 0)
  {
    printf("----------------------------[ Profile %2d ]------\n", found);
    printf("Auth            %s\n", authstr[(signed long int)prefs[(signed long int)found][(signed long int)4]]);
    if(!(prefs[(signed long int)found][3l] == 0))
      printf("Flags           0x%x\n", prefs[(signed long int)found][(signed long int)3]);

    if(!(prefs[(signed long int)found][0l] == 0))
    {
      tmp=printmem(tcreds->passnt, (unsigned long int)16, 8);
      printf("PassNT          %s\n", tmp);
      free((void *)tmp);
    }

    if(!(prefs[(signed long int)found][1l] == 0))
    {
      tmp=printmem(tcreds->passlm, (unsigned long int)16, 8);
      printf("PassLM          %s\n", tmp);
      free((void *)tmp);
    }

    if(!(prefs[(signed long int)found][2l] == 0))
    {
      tmp=printmem(tcreds->passntlm2, (unsigned long int)16, 8);
      printf("PassNTLMv2      %s\n", tmp);
      free((void *)tmp);
    }

    printf("------------------------------------------------\n");
  }

  else
    if(ign == 4)
      printf("\nYour proxy is open, you don't need another proxy.\n");

    else
      printf("\nWrong credentials, invalid URL or proxy doesn't support NTLM nor BASIC.\n");
  if(!(host == ((char *)NULL)))
    free((void *)host);


__CPROVER_DUMP_L28:
  ;
}

// main
// file main.c line 664
signed int main(signed int argc, char **argv)
{
  char *main$$1$$tmp;
  char *head;
  char *cpassword;
  char *cpassntlm2;
  char *cpassnt;
  char *cpasslm;
  char *cuser;
  char *cdomain;
  char *cworkstation;
  char *cuid;
  char *cpidfile;
  char *cauth;
  struct passwd *pw;
  struct termios termold;
  struct termios termnew;
  union pthread_attr_t pattr;
  unsigned long int pthr;
  struct hlist_s *list;
  signed int i;
  signed int w;
  signed int cd = 0;
  signed int help = 0;
  signed int nuid = 0;
  signed int ngid = 0;
  signed int gateway = 0;
  signed int tc = 0;
  signed int tj = 0;
  signed int interactivepwd = 0;
  signed int interactivehash = 0;
  signed int tracefile = 0;
  signed int cflags = 0;
  signed int asdaemon = 1;
  struct plist_s *tunneld_list = (struct plist_s *)(void *)0;
  struct plist_s *proxyd_list = (struct plist_s *)(void *)0;
  struct plist_s *socksd_list = (struct plist_s *)(void *)0;
  struct plist_s *rules = (struct plist_s *)(void *)0;
  struct config_s *cf = (struct config_s *)(void *)0;
  char *magic_detect = (char *)(void *)0;
  g_creds=new_auth();
  cuser=new((unsigned long int)50);
  cdomain=new((unsigned long int)50);
  cpassword=new((unsigned long int)50);
  cpassntlm2=new((unsigned long int)50);
  cpassnt=new((unsigned long int)50);
  cpasslm=new((unsigned long int)50);
  cworkstation=new((unsigned long int)50);
  cpidfile=new((unsigned long int)50);
  cuid=new((unsigned long int)50);
  cauth=new((unsigned long int)50);
  openlog("cntlm", 0x02, 3 << 3);
  syslog(6, "Starting cntlm version 0.92.3 for LITTLE endian\n");
  signed int return_value_acl_add$1;
  unsigned long int return_value_strtoul$2;
  unsigned long int return_value_strtoul$3;
  unsigned long int return_value_strtoul$4;
  unsigned long int return_value_strtoul$5;
  unsigned long int return_value_strlen$7;
  char *return_value___strdup$8;
  char *return_value___strdup$9;
  char *return_value___strdup$11;
  char *return_value___builtin_strchr$12;
  signed int return_value_is_http_header$15;
  char *return_value_get_http_header_name$13;
  char *return_value_get_http_header_value$14;
  unsigned long int tmp_statement_expression$16;
  unsigned long int return_value_strlen$18;
  do
  {
    i=getopt(argc, argv, ":-:a:c:d:fghIl:p:r:su:vw:A:BD:F:G:HL:M:N:O:P:R:S:T:U:");
    if(i == -1)
      break;

    switch(i)
    {
      case 65:

      case 68:
      {
        return_value_acl_add$1=acl_add(&rules, optarg, (enum acl_t)(i == 65 ? ACL_ALLOW : ACL_DENY));
        if(return_value_acl_add$1 == 0)
          myexit(1);

        break;
      }
      case 97:
      {
        strlcpy(cauth, optarg, (unsigned long int)50);
        break;
      }
      case 66:
      {
        ntlmbasic = 1;
        break;
      }
      case 99:
      {
        cf=config_open(optarg);
        if(cf == ((struct config_s *)NULL))
        {
          syslog(3, "Cannot access specified config file: %s\n", optarg);
          myexit(1);
        }

        break;
      }
      case 100:
      {
        strlcpy(cdomain, optarg, (unsigned long int)50);
        break;
      }
      case 70:
      {
        return_value_strtoul$2=strtoul(optarg, &main$$1$$tmp, 0);
        return_value_strtoul$3=strtoul(optarg, &main$$1$$tmp, 0);
        return_value_strtoul$4=strtoul(optarg, &main$$1$$tmp, 0);
        return_value_strtoul$5=strtoul(optarg, &main$$1$$tmp, 0);
        cflags = (signed int)(unsigned int)(((unsigned int)return_value_strtoul$2 & (unsigned int)0x000000ffUL) << 24 | ((unsigned int)return_value_strtoul$3 & (unsigned int)0x0000ff00UL) << 8 | ((unsigned int)return_value_strtoul$4 & (unsigned int)0x00ff0000UL) >> 8 | ((unsigned int)return_value_strtoul$5 & (unsigned int)0xff000000UL) >> 24);
        break;
      }
      case 102:
      {
        asdaemon = 0;
        break;
      }
      case 71:
      {
        return_value_strlen$7=strlen(optarg);
        if(!(return_value_strlen$7 == 0ul))
        {
          scanner_plugin = 1;
          if(scanner_plugin_maxsize == 0l)
            scanner_plugin_maxsize = (signed long int)1;

          unsigned long int return_value_strlen$6;
          return_value_strlen$6=strlen(optarg);
          i = (signed int)(return_value_strlen$6 + (unsigned long int)3);
          main$$1$$tmp=new((unsigned long int)i);
          snprintf(main$$1$$tmp, (unsigned long int)i, "*%s*", optarg);
          scanner_agent_list=plist_add(scanner_agent_list, (unsigned long int)0, (void *)main$$1$$tmp);
        }

        break;
      }
      case 103:
      {
        gateway = 1;
        break;
      }
      case 72:
      {
        interactivehash = 1;
        break;
      }
      case 73:
      {
        interactivepwd = 1;
        break;
      }
      case 76:
      {
        tunnel_add(&tunneld_list, optarg, gateway);
        break;
      }
      case 108:
      {
        listen_add("Proxy", &proxyd_list, optarg, gateway);
        break;
      }
      case 77:
      {
        return_value___strdup$8=__strdup(optarg);
        magic_detect = return_value___strdup$8;
        break;
      }
      case 78:
      {
        return_value___strdup$9=__strdup(optarg);
        main$$1$$tmp = return_value___strdup$9;
        noproxy_list=noproxy_add(noproxy_list, main$$1$$tmp);
        free((void *)main$$1$$tmp);
        break;
      }
      case 79:
      {
        listen_add("SOCKS5 proxy", &socksd_list, optarg, gateway);
        break;
      }
      case 80:
      {
        strlcpy(cpidfile, optarg, (unsigned long int)50);
        break;
      }
      case 112:
      {
        strlcpy(cpassword, optarg, (unsigned long int)50);
        unsigned long int return_value_strlen$10;
        return_value_strlen$10=strlen(optarg);
        i = (signed int)(return_value_strlen$10 - (unsigned long int)1);
        for( ; i >= 0; i = i - 1)
          optarg[(signed long int)i] = (char)42;
        break;
      }
      case 82:
      {
        return_value___strdup$11=__strdup(optarg);
        main$$1$$tmp = return_value___strdup$11;
        return_value___builtin_strchr$12=__builtin_strchr(main$$1$$tmp, 58);
        head = return_value___builtin_strchr$12;
        if(head == ((char *)NULL))
          fprintf(stderr, "Invalid username:password format for -R: %s\n", main$$1$$tmp);

        else
        {
          head[(signed long int)0] = (char)0;
          users_list=hlist_add(users_list, main$$1$$tmp, head + (signed long int)1, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);
        }
        break;
      }
      case 114:
      {
        return_value_is_http_header$15=is_http_header(optarg);
        if(!(return_value_is_http_header$15 == 0))
        {
          return_value_get_http_header_name$13=get_http_header_name(optarg);
          return_value_get_http_header_value$14=get_http_header_value(optarg);
          header_list=hlist_add(header_list, return_value_get_http_header_name$13, return_value_get_http_header_value$14, (enum anonymous$4)HLIST_NOALLOC, (enum anonymous$4)HLIST_NOALLOC);
        }

        break;
      }
      case 83:
      {
        scanner_plugin = 1;
        scanner_plugin_maxsize=atol$link1(optarg);
        break;
      }
      case 115:
      {
        serialize = 1;
        break;
      }
      case 84:
      {
        tracefile=open(optarg, 0100 | 01000 | 01, 0600);
        if(!(tracefile >= 0))
        {
          fprintf(stderr, "Cannot create trace file.\n");
          myexit(1);
        }

        else
        {
          printf("Redirecting all output to %s\n", optarg);
          dup2(tracefile, 1);
          dup2(tracefile, 2);
          printf("Cntlm debug trace, version 0.92.3");
          printf(".\nCommand line: ");
          i = 0;
          for( ; !(i >= argc); i = i + 1)
            printf("%s ", argv[(signed long int)i]);
          printf("\n");
        }
        break;
      }
      case 85:
      {
        strlcpy(cuid, optarg, (unsigned long int)50);
        break;
      }
      case 117:
      {
        char __r0;
        char __r1;
        char __r2;
        unsigned long int return_value___builtin_strcspn$17;
        return_value___builtin_strcspn$17=__builtin_strcspn(optarg, "@");
        tmp_statement_expression$16 = return_value___builtin_strcspn$17;
        i = (signed int)tmp_statement_expression$16;
        return_value_strlen$18=strlen(optarg);
        if(!((unsigned long int)i == return_value_strlen$18))
        {
          strlcpy(cuser, optarg, (unsigned long int)(50 < i + 1 ? 50 : i + 1));
          strlcpy(cdomain, optarg + (signed long int)i + (signed long int)1, (unsigned long int)50);
        }

        else
          strlcpy(cuser, optarg, (unsigned long int)50);
        break;
      }
      case 118:
      {
        debug = 1;
        asdaemon = 0;
        openlog("cntlm", 0x02 | 0x20, 3 << 3);
        break;
      }
      case 119:
      {
        strlcpy(cworkstation, optarg, (unsigned long int)50);
        break;
      }
      case 104:

      default:
        help = 1;
    }
  }
  while((_Bool)1);
  if(!(help == 0))
  {
    printf("CNTLM - Accelerating NTLM Authentication Proxy version 0.92.3\n");
    printf("Copyright (c) 2oo7-2o1o David Kubicek\n\nThis program comes with NO WARRANTY, to the extent permitted by law. You\nmay redistribute copies of it under the terms of the GNU GPL Version 2 or\nnewer. For more information about these matters, see the file LICENSE.\nFor copyright holders of included encryption routines see headers.\n\n");
    fprintf(stderr, "Usage: %s [-AaBcDdFfgHhILlMPpSsTUuvw] <proxy_host>[:]<proxy_port> ...\n", argv[(signed long int)0]);
    fprintf(stderr, "\t-A  <address>[/<net>]\n\t    ACL allow rule. IP or hostname, net must be a number (CIDR notation)\n");
    fprintf(stderr, "\t-a  ntlm | nt | lm\n\t    Authentication type - combined NTLM, just LM, or just NT. Default NTLM.\n\t    It is the most versatile setting and likely to work for you.\n");
    fprintf(stderr, "\t-B  Enable NTLM-to-basic authentication.\n");
    fprintf(stderr, "\t-c  <config_file>\n\t    Configuration file. Other arguments can be used as well, overriding\n\t    config file settings.\n");
    fprintf(stderr, "\t-D  <address>[/<net>]\n\t    ACL deny rule. Syntax same as -A.\n");
    fprintf(stderr, "\t-d  <domain>\n\t    Domain/workgroup can be set separately.\n");
    fprintf(stderr, "\t-f  Run in foreground, do not fork into daemon mode.\n");
    fprintf(stderr, "\t-F  <flags>\n\t    NTLM authentication flags.\n");
    fprintf(stderr, "\t-G  <pattern>\n\t    User-Agent matching for the trans-isa-scan plugin.\n");
    fprintf(stderr, "\t-g  Gateway mode - listen on all interfaces, not only loopback.\n");
    fprintf(stderr, "\t-H  Print password hashes for use in config file (NTLMv2 needs -u and -d).\n");
    fprintf(stderr, "\t-h  Print this help info along with version number.\n");
    fprintf(stderr, "\t-I  Prompt for the password interactively.\n");
    fprintf(stderr, "\t-L  [<saddr>:]<lport>:<rhost>:<rport>\n\t    Forwarding/tunneling a la OpenSSH. Same syntax - listen on lport\n\t    and forward all connections through the proxy to rhost:rport.\n\t    Can be used for direct tunneling without corkscrew, etc.\n");
    fprintf(stderr, "\t-l  [<saddr>:]<lport>\n\t    Main listening port for the NTLM proxy.\n");
    fprintf(stderr, "\t-M  <testurl>\n\t    Magic autodetection of proxy's NTLM dialect.\n");
    fprintf(stderr, "\t-N  \"<hostname_wildcard1>[, <hostname_wildcardN>\"\n\t    List of URL's to serve direcly as stand-alone proxy (e.g. '*.local')\n");
    fprintf(stderr, "\t-O  [<saddr>:]<lport>\n\t    Enable SOCKS5 proxy on port lport (binding to address saddr)\n");
    fprintf(stderr, "\t-P  <pidfile>\n\t    Create a PID file upon successful start.\n");
    fprintf(stderr, "\t-p  <password>\n\t    Account password. Will not be visible in \"ps\", /proc, etc.\n");
    fprintf(stderr, "\t-r  \"HeaderName: value\"\n\t    Add a header substitution. All such headers will be added/replaced\n\t    in the client's requests.\n");
    fprintf(stderr, "\t-S  <size_in_kb>\n\t    Enable automation of GFI WebMonitor ISA scanner for files < size_in_kb.\n");
    fprintf(stderr, "\t-s  Do not use threads, serialize all requests - for debugging only.\n");
    fprintf(stderr, "\t-U  <uid>\n\t    Run as uid. It is an important security measure not to run as root.\n");
    fprintf(stderr, "\t-u  <user>[@<domain]\n\t    Domain/workgroup can be set separately.\n");
    fprintf(stderr, "\t-v  Print debugging information.\n");
    fprintf(stderr, "\t-w  <workstation>\n\t    Some proxies require correct NetBIOS hostname.\n\n");
    exit(1);
  }

  i = optind;
  signed int tmp_if_expr$21;
  signed int return_value_atoi$20;
  while(!(i >= argc))
  {
    char *return_value___builtin_strchr$19;
    return_value___builtin_strchr$19=__builtin_strchr(argv[(signed long int)i], 58);
    main$$1$$tmp = return_value___builtin_strchr$19;
    if(main$$1$$tmp == ((char *)NULL) && !(1 + i >= argc))
    {
      return_value_atoi$20=atoi$link2(argv[(signed long int)(i + 1)]);
      tmp_if_expr$21 = return_value_atoi$20;
    }

    else
      tmp_if_expr$21 = 0;
    parent_add(argv[(signed long int)i], tmp_if_expr$21);
    i = i + (!(main$$1$$tmp != ((char *)NULL)) ? 2 : 1);
  }
  if(cf == ((struct config_s *)NULL))
  {
    cf=config_open("/etc/cntlm.conf");
    if(!(debug == 0))
    {
      if(!(cf == ((struct config_s *)NULL)))
        printf("Default config file opened successfully\n");

      else
        syslog(3, "Could not open default config file\n");
    }

  }

  unsigned long int return_value_strlen$22;
  unsigned long int return_value_strlen$24;
  char *return_value_get_http_header_value$26;
  _Bool tmp_if_expr$31;
  signed int return_value_strcasecmp$30;
  signed int return_value_acl_add$29;
  unsigned long int return_value_strlen$32;
  unsigned long int return_value_strlen$33;
  unsigned long int return_value_strlen$34;
  unsigned long int return_value_strlen$35;
  unsigned long int return_value_strlen$36;
  unsigned long int return_value_strlen$37;
  unsigned long int return_value_strlen$38;
  unsigned long int return_value_strlen$39;
  unsigned long int return_value_strlen$40;
  unsigned long int return_value_strtoul$41;
  unsigned long int return_value_strtoul$42;
  unsigned long int return_value_strtoul$43;
  unsigned long int return_value_strtoul$44;
  unsigned long int return_value_strlen$45;
  unsigned long int return_value_strlen$47;
  if(!(cf == ((struct config_s *)NULL)))
  {
    main$$1$$tmp=new((unsigned long int)50);
    char *main$$1$$5$$1$$__tmp = (char *)(void *)0;
    main$$1$$5$$1$$__tmp=config_pop(cf, "Gateway");
    if(!(main$$1$$5$$1$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$22=strlen(main$$1$$tmp);
      if(return_value_strlen$22 == 0ul)
        strlcpy(main$$1$$tmp, main$$1$$5$$1$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$1$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$1$$__tmp);

    signed int return_value_strcasecmp$23;
    return_value_strcasecmp$23=strcasecmp("yes", main$$1$$tmp);
    if(return_value_strcasecmp$23 == 0)
      gateway = 1;

    free((void *)main$$1$$tmp);
    main$$1$$tmp=new((unsigned long int)50);
    char *main$$1$$5$$2$$__tmp = (char *)(void *)0;
    main$$1$$5$$2$$__tmp=config_pop(cf, "NTLMToBasic");
    if(!(main$$1$$5$$2$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$24=strlen(main$$1$$tmp);
      if(return_value_strlen$24 == 0ul)
        strlcpy(main$$1$$tmp, main$$1$$5$$2$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$2$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$2$$__tmp);

    signed int return_value_strcasecmp$25;
    return_value_strcasecmp$25=strcasecmp("yes", main$$1$$tmp);
    if(return_value_strcasecmp$25 == 0)
      ntlmbasic = 1;

    free((void *)main$$1$$tmp);
    do
    {
      main$$1$$tmp=config_pop(cf, "Tunnel");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      tunnel_add(&tunneld_list, main$$1$$tmp, gateway);
      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "Listen");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      listen_add("Proxy", &proxyd_list, main$$1$$tmp, gateway);
      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "SOCKS5Proxy");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      listen_add("SOCKS5 proxy", &socksd_list, main$$1$$tmp, gateway);
      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "Header");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      signed int return_value_is_http_header$28;
      return_value_is_http_header$28=is_http_header(main$$1$$tmp);
      if(!(return_value_is_http_header$28 == 0))
      {
        head=get_http_header_name(main$$1$$tmp);
        signed int return_value_hlist_in$27;
        return_value_hlist_in$27=hlist_in(header_list, head);
        if(return_value_hlist_in$27 == 0)
        {
          return_value_get_http_header_value$26=get_http_header_value(main$$1$$tmp);
          header_list=hlist_add(header_list, head, return_value_get_http_header_value$26, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_NOALLOC);
        }

        free((void *)head);
      }

      else
        syslog(3, "Invalid header format: %s\n", main$$1$$tmp);
      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "Proxy");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      parent_add(main$$1$$tmp, 0);
      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    if(rules == ((struct plist_s *)NULL))
    {
      list = cf->options;
      while(!(list == ((struct hlist_s *)NULL)))
      {
        i=strcasecmp("Allow", list->key);
        if(i == 0)
          tmp_if_expr$31 = (_Bool)1;

        else
        {
          return_value_strcasecmp$30=strcasecmp("Deny", list->key);
          tmp_if_expr$31 = !(return_value_strcasecmp$30 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$31)
        {
          return_value_acl_add$29=acl_add(&rules, list->value, (enum acl_t)(i != 0 ? ACL_DENY : ACL_ALLOW));
          if(return_value_acl_add$29 == 0)
            myexit(1);

        }

        list = list->next;
      }
      do
      {
        main$$1$$tmp=config_pop(cf, "Allow");
        if(main$$1$$tmp == ((char *)NULL))
          break;

        free((void *)main$$1$$tmp);
      }
      while((_Bool)1);
      do
      {
        main$$1$$tmp=config_pop(cf, "Deny");
        if(main$$1$$tmp == ((char *)NULL))
          break;

        free((void *)main$$1$$tmp);
      }
      while((_Bool)1);
    }

    char *main$$1$$5$$9$$__tmp = (char *)(void *)0;
    main$$1$$5$$9$$__tmp=config_pop(cf, "Auth");
    if(!(main$$1$$5$$9$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$32=strlen(cauth);
      if(return_value_strlen$32 == 0ul)
        strlcpy(cauth, main$$1$$5$$9$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$9$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$9$$__tmp);

    char *main$$1$$5$$10$$__tmp = (char *)(void *)0;
    main$$1$$5$$10$$__tmp=config_pop(cf, "Domain");
    if(!(main$$1$$5$$10$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$33=strlen(cdomain);
      if(return_value_strlen$33 == 0ul)
        strlcpy(cdomain, main$$1$$5$$10$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$10$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$10$$__tmp);

    char *main$$1$$5$$11$$__tmp = (char *)(void *)0;
    main$$1$$5$$11$$__tmp=config_pop(cf, "Password");
    if(!(main$$1$$5$$11$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$34=strlen(cpassword);
      if(return_value_strlen$34 == 0ul)
        strlcpy(cpassword, main$$1$$5$$11$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$11$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$11$$__tmp);

    char *main$$1$$5$$12$$__tmp = (char *)(void *)0;
    main$$1$$5$$12$$__tmp=config_pop(cf, "PassNTLMv2");
    if(!(main$$1$$5$$12$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$35=strlen(cpassntlm2);
      if(return_value_strlen$35 == 0ul)
        strlcpy(cpassntlm2, main$$1$$5$$12$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$12$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$12$$__tmp);

    char *main$$1$$5$$13$$__tmp = (char *)(void *)0;
    main$$1$$5$$13$$__tmp=config_pop(cf, "PassNT");
    if(!(main$$1$$5$$13$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$36=strlen(cpassnt);
      if(return_value_strlen$36 == 0ul)
        strlcpy(cpassnt, main$$1$$5$$13$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$13$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$13$$__tmp);

    char *__tmp = (char *)(void *)0;
    __tmp=config_pop(cf, "PassLM");
    if(!(__tmp == ((char *)NULL)))
    {
      return_value_strlen$37=strlen(cpasslm);
      if(return_value_strlen$37 == 0ul)
        strlcpy(cpasslm, __tmp, (unsigned long int)50);

    }

    if(!(__tmp == ((char *)NULL)))
      free((void *)__tmp);

    char *main$$1$$5$$15$$__tmp = (char *)(void *)0;
    main$$1$$5$$15$$__tmp=config_pop(cf, "Username");
    if(!(main$$1$$5$$15$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$38=strlen(cuser);
      if(return_value_strlen$38 == 0ul)
        strlcpy(cuser, main$$1$$5$$15$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$15$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$15$$__tmp);

    char *main$$1$$5$$16$$__tmp = (char *)(void *)0;
    main$$1$$5$$16$$__tmp=config_pop(cf, "Workstation");
    if(!(main$$1$$5$$16$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$39=strlen(cworkstation);
      if(return_value_strlen$39 == 0ul)
        strlcpy(cworkstation, main$$1$$5$$16$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$16$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$16$$__tmp);

    main$$1$$tmp=new((unsigned long int)50);
    char *main$$1$$5$$17$$__tmp = (char *)(void *)0;
    main$$1$$5$$17$$__tmp=config_pop(cf, "Flags");
    if(!(main$$1$$5$$17$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$40=strlen(main$$1$$tmp);
      if(return_value_strlen$40 == 0ul)
        strlcpy(main$$1$$tmp, main$$1$$5$$17$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$17$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$17$$__tmp);

    if(cflags == 0)
    {
      return_value_strtoul$41=strtoul(main$$1$$tmp, (char ** restrict )(void *)0, 0);
      return_value_strtoul$42=strtoul(main$$1$$tmp, (char ** restrict )(void *)0, 0);
      return_value_strtoul$43=strtoul(main$$1$$tmp, (char ** restrict )(void *)0, 0);
      return_value_strtoul$44=strtoul(main$$1$$tmp, (char ** restrict )(void *)0, 0);
      cflags = (signed int)(unsigned int)(((unsigned int)return_value_strtoul$41 & (unsigned int)0x000000ffUL) << 24 | ((unsigned int)return_value_strtoul$42 & (unsigned int)0x0000ff00UL) << 8 | ((unsigned int)return_value_strtoul$43 & (unsigned int)0x00ff0000UL) >> 8 | ((unsigned int)return_value_strtoul$44 & (unsigned int)0xff000000UL) >> 24);
    }

    free((void *)main$$1$$tmp);
    main$$1$$tmp=new((unsigned long int)50);
    char *main$$1$$5$$18$$__tmp = (char *)(void *)0;
    main$$1$$5$$18$$__tmp=config_pop(cf, "ISAScannerSize");
    if(!(main$$1$$5$$18$$__tmp == ((char *)NULL)))
    {
      return_value_strlen$45=strlen(main$$1$$tmp);
      if(return_value_strlen$45 == 0ul)
        strlcpy(main$$1$$tmp, main$$1$$5$$18$$__tmp, (unsigned long int)50);

    }

    if(!(main$$1$$5$$18$$__tmp == ((char *)NULL)))
      free((void *)main$$1$$5$$18$$__tmp);

    if(scanner_plugin_maxsize == 0l)
    {
      return_value_strlen$47=strlen(main$$1$$tmp);
      if(!(return_value_strlen$47 == 0ul))
      {
        scanner_plugin = 1;
        signed int return_value_atoi$46;
        return_value_atoi$46=atoi$link2(main$$1$$tmp);
        scanner_plugin_maxsize = (signed long int)return_value_atoi$46;
      }

    }

    free((void *)main$$1$$tmp);
    do
    {
      main$$1$$tmp=config_pop(cf, "NoProxy");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      unsigned long int return_value_strlen$48;
      return_value_strlen$48=strlen(main$$1$$tmp);
      if(!(return_value_strlen$48 == 0ul))
        noproxy_list=noproxy_add(noproxy_list, main$$1$$tmp);

      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "SOCKS5Users");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      char *return_value___builtin_strchr$49;
      return_value___builtin_strchr$49=__builtin_strchr(main$$1$$tmp, 58);
      head = return_value___builtin_strchr$49;
      if(head == ((char *)NULL))
        syslog(3, "Invalid username:password format for SOCKS5User: %s\n", main$$1$$tmp);

      else
      {
        head[(signed long int)0] = (char)0;
        users_list=hlist_add(users_list, main$$1$$tmp, head + (signed long int)1, (enum anonymous$4)HLIST_ALLOC, (enum anonymous$4)HLIST_ALLOC);
      }
    }
    while((_Bool)1);
    do
    {
      main$$1$$tmp=config_pop(cf, "ISAScannerAgent");
      if(main$$1$$tmp == ((char *)NULL))
        break;

      scanner_plugin = 1;
      if(scanner_plugin_maxsize == 0l)
        scanner_plugin_maxsize = (signed long int)1;

      unsigned long int return_value_strlen$50;
      return_value_strlen$50=strlen(main$$1$$tmp);
      i = (signed int)return_value_strlen$50;
      if(!(i == 0))
      {
        head=new((unsigned long int)(i + 3));
        snprintf(head, (unsigned long int)(i + 3), "*%s*", main$$1$$tmp);
        scanner_agent_list=plist_add(scanner_agent_list, (unsigned long int)0, (void *)head);
      }

      free((void *)main$$1$$tmp);
    }
    while((_Bool)1);
    list = cf->options;
    for( ; !(list == ((struct hlist_s *)NULL)); list = list->next)
      syslog(6, "Ignoring config file option: %s\n", list->key);
  }

  config_close(cf);
  if(parent_list == ((struct plist_s *)NULL) && interactivehash == 0)
    croak("Parent proxy address missing.\n", (signed int)(interactivepwd != 0 || magic_detect != ((char *)NULL)));

  if(magic_detect == ((char *)NULL) && proxyd_list == ((struct plist_s *)NULL) && interactivehash == 0)
    croak("No proxy service ports were successfully opened.\n", interactivepwd);

  unsigned long int return_value_strlen$52;
  return_value_strlen$52=strlen(cworkstation);
  if(return_value_strlen$52 == 0ul)
  {
    gethostname(cworkstation, (unsigned long int)50);
    unsigned long int return_value_strlen$51;
    return_value_strlen$51=strlen(cworkstation);
    if(return_value_strlen$51 == 0ul)
      strlcpy(cworkstation, "cntlm", (unsigned long int)50);

    syslog(6, "Workstation name used: %s\n", cworkstation);
  }

  unsigned long int return_value_strlen$58;
  return_value_strlen$58=strlen(cauth);
  signed int return_value_strcasecmp$56;
  signed int return_value_strcasecmp$55;
  signed int return_value_strcasecmp$54;
  signed int return_value_strcasecmp$53;
  if(!(return_value_strlen$58 == 0ul))
  {
    signed int return_value_strcasecmp$57;
    return_value_strcasecmp$57=strcasecmp("ntlm", cauth);
    if(return_value_strcasecmp$57 == 0)
    {
      g_creds->hashnt = 1;
      g_creds->hashlm = 1;
      g_creds->hashntlm2 = 0;
    }

    else
    {
      return_value_strcasecmp$56=strcasecmp("nt", cauth);
      if(return_value_strcasecmp$56 == 0)
      {
        g_creds->hashnt = 1;
        g_creds->hashlm = 0;
        g_creds->hashntlm2 = 0;
      }

      else
      {
        return_value_strcasecmp$55=strcasecmp("lm", cauth);
        if(return_value_strcasecmp$55 == 0)
        {
          g_creds->hashnt = 0;
          g_creds->hashlm = 1;
          g_creds->hashntlm2 = 0;
        }

        else
        {
          return_value_strcasecmp$54=strcasecmp("ntlmv2", cauth);
          if(return_value_strcasecmp$54 == 0)
          {
            g_creds->hashnt = 0;
            g_creds->hashlm = 0;
            g_creds->hashntlm2 = 1;
          }

          else
          {
            return_value_strcasecmp$53=strcasecmp("ntlm2sr", cauth);
            if(return_value_strcasecmp$53 == 0)
            {
              g_creds->hashnt = 2;
              g_creds->hashlm = 0;
              g_creds->hashntlm2 = 0;
            }

            else
            {
              syslog(3, "Unknown NTLM auth combination.\n");
              myexit(1);
            }
          }
        }
      }
    }
  }

  if(users_list == ((struct hlist_s *)NULL) && !(socksd_list == ((struct plist_s *)NULL)))
    syslog(4, "SOCKS5 proxy will NOT require any authentication\n");

  if(magic_detect == ((char *)NULL))
    syslog(6, "Using following NTLM hashes: NTLMv2(%d) NT(%d) LM(%d)\n", g_creds->hashntlm2, g_creds->hashnt, g_creds->hashlm);

  if(!(cflags == 0))
  {
    syslog(6, "Using manual NTLM flags: 0x%X\n", (unsigned int)(((unsigned int)cflags & (unsigned int)0x000000ffUL) << 24 | ((unsigned int)cflags & (unsigned int)0x0000ff00UL) << 8 | ((unsigned int)cflags & (unsigned int)0x00ff0000UL) >> 8 | ((unsigned int)cflags & (unsigned int)0xff000000UL) >> 24));
    g_creds->flags = (unsigned int)cflags;
  }

  if(ntlmbasic == 0 && !(interactivepwd == 0) || !(magic_detect == ((char *)NULL)) || !(interactivehash == 0))
  {
    printf("Password: ");
    tcgetattr(0, &termold);
    termnew = termold;
    termnew.c_lflag = termnew.c_lflag & (unsigned int)~(0000001 | 0000010);
    tcsetattr(0, 1, &termnew);
    main$$1$$tmp=fgets(cpassword, 50, stdin);
    tcsetattr(0, 1, &termold);
    unsigned long int return_value_strlen$59;
    return_value_strlen$59=strlen(cpassword);
    i = (signed int)(return_value_strlen$59 - (unsigned long int)1);
    if((signed int)cpassword[(signed long int)i] == 10)
    {
      cpassword[(signed long int)i] = (char)0;
      if((signed int)cpassword[(signed long int)(i + -1)] == 13)
        cpassword[(signed long int)(i - 1)] = (char)0;

    }

    printf("\n");
  }

  unsigned long int return_value_strlen$64;
  return_value_strlen$64=strlen(cpassword);
  if(return_value_strlen$64 == 0ul)
  {
    unsigned long int return_value_strlen$60;
    return_value_strlen$60=strlen(cpassntlm2);
    if(!(return_value_strlen$60 == 0ul))
    {
      main$$1$$tmp=scanmem(cpassntlm2, 8);
      if(main$$1$$tmp == ((char *)NULL))
      {
        syslog(3, "Invalid PassNTLMv2 hash, terminating\n");
        exit(1);
      }

      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passntlm2, (const void *)main$$1$$tmp, (unsigned long int)(16 < 50 ? 16 : 50));

      free((void *)main$$1$$tmp);
    }

    unsigned long int return_value_strlen$61;
    return_value_strlen$61=strlen(cpassnt);
    if(!(return_value_strlen$61 == 0ul))
    {
      main$$1$$tmp=scanmem(cpassnt, 8);
      if(main$$1$$tmp == ((char *)NULL))
      {
        syslog(3, "Invalid PassNT hash, terminating\n");
        exit(1);
      }

      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passnt, (const void *)main$$1$$tmp, (unsigned long int)(16 < 50 ? 16 : 50));

      free((void *)main$$1$$tmp);
    }

    unsigned long int return_value_strlen$62;
    return_value_strlen$62=strlen(cpasslm);
    if(!(return_value_strlen$62 == 0ul))
    {
      main$$1$$tmp=scanmem(cpasslm, 8);
      if(main$$1$$tmp == ((char *)NULL))
      {
        syslog(3, "Invalid PassLM hash, terminating\n");
        exit(1);
      }

      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passlm, (const void *)main$$1$$tmp, (unsigned long int)(16 < 50 ? 16 : 50));

      free((void *)main$$1$$tmp);
    }

  }

  else
  {
    if(!(g_creds->hashnt == 0) || !(magic_detect == ((char *)NULL)) || !(interactivehash == 0))
    {
      main$$1$$tmp=ntlm_hash_nt_password(cpassword);
      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passnt, (const void *)main$$1$$tmp, (unsigned long int)(21 < 50 ? 21 : 50));

      free((void *)main$$1$$tmp);
    }

    if(!(g_creds->hashlm == 0) || !(magic_detect == ((char *)NULL)) || !(interactivehash == 0))
    {
      main$$1$$tmp=ntlm_hash_lm_password(cpassword);
      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passlm, (const void *)main$$1$$tmp, (unsigned long int)(21 < 50 ? 21 : 50));

      free((void *)main$$1$$tmp);
    }

    if(!(g_creds->hashntlm2 == 0) || !(magic_detect == ((char *)NULL)) || !(interactivehash == 0))
    {
      main$$1$$tmp=ntlm2_hash_password(cuser, cdomain, cpassword);
      if(!(main$$1$$tmp == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
        memcpy((void *)g_creds->passntlm2, (const void *)main$$1$$tmp, (unsigned long int)(16 < 50 ? 16 : 50));

      free((void *)main$$1$$tmp);
    }

    unsigned long int return_value_strlen$63;
    return_value_strlen$63=strlen(cpassword);
    memset((void *)cpassword, 0, return_value_strlen$63);
  }
  if(!(cuser == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
    strlcpy(g_creds->user, cuser, (unsigned long int)50);

  if(!(cdomain == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
    strlcpy(g_creds->domain, cdomain, (unsigned long int)50);

  if(!(cworkstation == ((char *)NULL)) && !(g_creds == ((struct auth_s *)NULL)))
    strlcpy(g_creds->workstation, cworkstation, (unsigned long int)50);

  free((void *)cuser);
  free((void *)cdomain);
  free((void *)cworkstation);
  free((void *)cpassword);
  free((void *)cpassntlm2);
  free((void *)cpassnt);
  free((void *)cpasslm);
  free((void *)cauth);
  _Bool tmp_if_expr$65;
  _Bool tmp_if_expr$67;
  _Bool tmp_if_expr$66;
  _Bool tmp_if_expr$69;
  _Bool tmp_if_expr$68;
  unsigned long int return_value_strlen$79;
  _Bool tmp_if_expr$78;
  unsigned int return_value_geteuid$77;
  _Bool tmp_if_expr$72;
  unsigned long int return_value_strlen$83;
  signed long int return_value_time$84;
  unsigned short int tmp_statement_expression$88;
  signed int return_value_plist_in$96;
  signed int *return_value___errno_location$98;
  char *return_value_strerror$99;
  if(!(magic_detect == ((char *)NULL)))
    magic_auth_detect(magic_detect);

  else
    if(!(interactivehash == 0))
    {
      main$$1$$tmp=printmem(g_creds->passlm, (unsigned long int)16, 8);
      printf("PassLM          %s\n", main$$1$$tmp);
      free((void *)main$$1$$tmp);
      main$$1$$tmp=printmem(g_creds->passnt, (unsigned long int)16, 8);
      printf("PassNT          %s\n", main$$1$$tmp);
      free((void *)main$$1$$tmp);
      main$$1$$tmp=printmem(g_creds->passntlm2, (unsigned long int)16, 8);
      printf("PassNTLMv2      %s    # Only for user '%s', domain '%s'\n", main$$1$$tmp, (const void *)g_creds->user, (const void *)g_creds->domain);
      free((void *)main$$1$$tmp);
    }

    else
    {
      if(ntlmbasic == 0)
      {
        if(!(g_creds->hashnt == 0))
          tmp_if_expr$65 = !((_Bool)g_creds->passnt) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$65 = (_Bool)0;
        if(tmp_if_expr$65)
          tmp_if_expr$67 = (_Bool)1;

        else
        {
          if(!(g_creds->hashlm == 0))
            tmp_if_expr$66 = !((_Bool)g_creds->passlm) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$66 = (_Bool)0;
          tmp_if_expr$67 = tmp_if_expr$66 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$67)
          tmp_if_expr$69 = (_Bool)1;

        else
        {
          if(!(g_creds->hashntlm2 == 0))
            tmp_if_expr$68 = !((_Bool)g_creds->passntlm2) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$68 = (_Bool)0;
          tmp_if_expr$69 = tmp_if_expr$68 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$69)
        {
          syslog(3, "Parent proxy account password (or required hashes) missing.\n");
          myexit(1);
        }

      }

      if(!(asdaemon == 0))
      {
        if(!(debug == 0))
          printf("Forking into background as requested.\n");

        i=fork();
        if(i == -1)
        {
          perror("Fork into background failed");
          myexit(1);
        }

        else
          if(!(i == 0))
            myexit(0);

        setsid();
        umask((unsigned int)0);
        w=chdir("/");
        i=open("/dev/null", 02);
        if(i >= 0)
        {
          dup2(i, 0);
          dup2(i, 1);
          dup2(i, 2);
          if(i >= 3)
            close(i);

        }

      }

      if(!(asdaemon == 0))
      {
        openlog("cntlm", 0x02 | 0x01, 3 << 3);
        syslog(6, "Daemon ready");
      }

      else
      {
        openlog("cntlm", 0x02 | 0x01 | 0x20, 3 << 3);
        syslog(6, "Cntlm ready, staying in the foreground");
      }
      return_value_strlen$79=strlen(cuid);
      if(!(return_value_strlen$79 == 0ul))
      {
        unsigned int return_value_getuid$76;
        return_value_getuid$76=getuid();
        if(!(return_value_getuid$76 == 0u))
        {
          return_value_geteuid$77=geteuid();
          tmp_if_expr$78 = return_value_geteuid$77 != 0u ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$78 = (_Bool)0;
        if(tmp_if_expr$78)
        {
          unsigned int return_value_getuid$70;
          return_value_getuid$70=getuid();
          unsigned int return_value_getgid$71;
          return_value_getgid$71=getgid();
          syslog(4, "No root privileges; keeping identity %d:%d\n", return_value_getuid$70, return_value_getgid$71);
        }

        else
        {
          const unsigned short int **return_value___ctype_b_loc$73;
          return_value___ctype_b_loc$73=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc$73)[(signed long int)(signed int)*cuid]) == 0))
          {
            nuid=atoi$link2(cuid);
            ngid = nuid;
            if(!(nuid >= 1))
            {
              syslog(3, "Numerical uid parameter invalid\n");
              myexit(1);
            }

          }

          else
          {
            pw=getpwnam(cuid);
            if(pw == ((struct passwd *)NULL))
              tmp_if_expr$72 = (_Bool)1;

            else
              tmp_if_expr$72 = !(pw->pw_uid != 0u) ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$72)
            {
              syslog(3, "Username %s in -U is invalid\n", cuid);
              myexit(1);
            }

            nuid = (signed int)pw->pw_uid;
            ngid = (signed int)pw->pw_gid;
          }
          setgid((unsigned int)ngid);
          i=setuid((unsigned int)nuid);
          signed int *return_value___errno_location$74;
          return_value___errno_location$74=__errno_location();
          char *return_value_strerror$75;
          return_value_strerror$75=strerror(*return_value___errno_location$74);
          syslog(6, "Changing uid:gid to %d:%d - %s\n", nuid, ngid, return_value_strerror$75);
          if(!(i == 0))
          {
            syslog(3, "Terminating\n");
            myexit(1);
          }

        }
      }

      return_value_strlen$83=strlen(cpidfile);
      if(!(return_value_strlen$83 == 0ul))
      {
        umask((unsigned int)0);
        cd=open(cpidfile, 01 | 0100 | 01000, 0644);
        if(!(cd >= 0))
        {
          syslog(3, "Error creating a new PID file\n");
          myexit(1);
        }

        main$$1$$tmp=new((unsigned long int)50);
        signed int return_value_getpid$80;
        return_value_getpid$80=getpid();
        snprintf(main$$1$$tmp, (unsigned long int)50, "%d\n", return_value_getpid$80);
        unsigned long int return_value_strlen$81;
        return_value_strlen$81=strlen(main$$1$$tmp);
        signed long int return_value_write$82;
        return_value_write$82=write(cd, (const void *)main$$1$$tmp, return_value_strlen$81);
        w = (signed int)return_value_write$82;
        free((void *)main$$1$$tmp);
        close(cd);
      }

      signal(13, (void (*)(signed int))1);
      signal(2, sighandler);
      signal(15, sighandler);
      signal(1, sighandler);
      return_value_time$84=time((signed long int *)(void *)0);
      srandom((unsigned int)return_value_time$84);
      while(quit == 0 || !(tc == tj) && !(quit >= 2))
      {
        struct thread_arg_s *data;
        struct sockaddr_in caddr;
        struct timeval tv;
        unsigned int clen;
        struct anonymous$1 set;
        struct plist_s *t;
        signed int tid = 0;
        do
        {
          signed int __d0;
          signed int __d1;
          asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&set)->fds_bits[(signed long int)0]) : "memory");
        }
        while((_Bool)0);
        t = proxyd_list;
        for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
          (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << t->key % (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        t = socksd_list;
        for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
          (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << t->key % (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        t = tunneld_list;
        for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
          (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->fds_bits[(signed long int)(t->key / (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << t->key % (unsigned long int)(8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        tv.tv_sec = (signed long int)1;
        tv.tv_usec = (signed long int)0;
        cd=select(1024, &set, (struct anonymous$1 *)(void *)0, (struct anonymous$1 *)(void *)0, &tv);
        if(cd >= 1)
        {
          i = 0;
          for( ; !(i >= 1024); i = i + 1)
          {
            if(!((set.fds_bits[(signed long int)(i / 8)] & (signed long int)(1UL << i % 8)) == 0l))
            {
              clen = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
              cd=accept(i, (struct sockaddr *)&caddr, (unsigned int *)&clen);
              if(!(cd >= 0))
              {
                signed int *return_value___errno_location$85;
                return_value___errno_location$85=__errno_location();
                char *return_value_strerror$86;
                return_value_strerror$86=strerror(*return_value___errno_location$85);
                syslog(3, "Serious error during accept: %s\n", return_value_strerror$86);
                goto __CPROVER_DUMP_L202;
              }

              enum acl_t return_value_acl_check$92;
              return_value_acl_check$92=acl_check(rules, caddr.sin_addr);
              if(!((signed int)return_value_acl_check$92 == ACL_ALLOW))
              {
                char *return_value_inet_ntoa$87;
                return_value_inet_ntoa$87=inet_ntoa(caddr.sin_addr);
                unsigned short int __v;
                unsigned short int __x = (unsigned short int)caddr.sin_port;
                asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
                tmp_statement_expression$88 = __v;
                syslog(4, "Connection denied for %s:%d\n", return_value_inet_ntoa$87, tmp_statement_expression$88);
                char *return_value_inet_ntoa$89;
                return_value_inet_ntoa$89=inet_ntoa(caddr.sin_addr);
                main$$1$$tmp=gen_denied_page(return_value_inet_ntoa$89);
                unsigned long int return_value_strlen$90;
                return_value_strlen$90=strlen(main$$1$$tmp);
                signed long int return_value_write$91;
                return_value_write$91=write(cd, (const void *)main$$1$$tmp, return_value_strlen$90);
                w = (signed int)return_value_write$91;
                free((void *)main$$1$$tmp);
                close(cd);
                goto __CPROVER_DUMP_L202;
              }

              pthread_attr_init(&pattr);
              pthread_attr_setstacksize(&pattr, sizeof(void *) /*8ul*/  * (unsigned long int)8 * (unsigned long int)1024);
              pthread_attr_setguardsize(&pattr, (unsigned long int)256);
              signed int return_value_plist_in$97;
              return_value_plist_in$97=plist_in(proxyd_list, (unsigned long int)i);
              if(!(return_value_plist_in$97 == 0))
              {
                char *return_value_new$93;
                return_value_new$93=new(sizeof(struct thread_arg_s) /*32ul*/ );
                data = (struct thread_arg_s *)return_value_new$93;
                data->fd = cd;
                data->addr = caddr;
                if(serialize == 0)
                  tid=pthread_create(&pthr, &pattr, proxy_thread, (void *)data);

                else
                  proxy_thread((void *)data);
              }

              else
              {
                return_value_plist_in$96=plist_in(socksd_list, (unsigned long int)i);
                if(!(return_value_plist_in$96 == 0))
                {
                  char *return_value_new$94;
                  return_value_new$94=new(sizeof(struct thread_arg_s) /*32ul*/ );
                  data = (struct thread_arg_s *)return_value_new$94;
                  data->fd = cd;
                  data->addr = caddr;
                  tid=pthread_create(&pthr, &pattr, socks5_thread, (void *)data);
                }

                else
                {
                  char *return_value_new$95;
                  return_value_new$95=new(sizeof(struct thread_arg_s) /*32ul*/ );
                  data = (struct thread_arg_s *)return_value_new$95;
                  data->fd = cd;
                  data->addr = caddr;
                  data->target=plist_get(tunneld_list, i);
                  tid=pthread_create(&pthr, &pattr, tunnel_thread, (void *)data);
                }
              }
              pthread_attr_destroy(&pattr);
              if(!(tid == 0))
                syslog(3, "Serious error during pthread_create: %d\n", tid);

              else
                tc = tc + 1;
            }


          __CPROVER_DUMP_L202:
            ;
          }
        }

        else
          if(quit == 0 && !(cd >= 0))
          {
            return_value___errno_location$98=__errno_location();
            return_value_strerror$99=strerror(*return_value___errno_location$98);
            syslog(3, "Serious error during select: %s\n", return_value_strerror$99);
          }

        if(!(threads_list == ((struct plist_s *)NULL)))
        {
          pthread_mutex_lock(&threads_mtx);
          t = threads_list;
          while(!(t == ((struct plist_s *)NULL)))
          {
            struct plist_s *tmp = t->next;
            tid=pthread_join((unsigned long int)t->key, (void **)(void *)&i);
            if(tid == 0)
            {
              tj = tj + 1;
              if(!(debug == 0))
                printf("Joining thread %lu; rc: %d\n", t->key, i);

            }

            else
              syslog(3, "Serious error during pthread_join: %d\n", tid);
            free((void *)t);
            t = tmp;
          }
          threads_list = (struct plist_s *)(void *)0;
          pthread_mutex_unlock(&threads_mtx);
        }

      }
    }

bailout:
  ;
  unsigned long int return_value_strlen$100;
  return_value_strlen$100=strlen(cpidfile);
  if(!(return_value_strlen$100 == 0ul))
    unlink(cpidfile);

  syslog(6, "Terminating with %d active threads\n", tc - tj);
  pthread_mutex_lock(&connection_mtx);
  plist_free(connection_list);
  pthread_mutex_unlock(&connection_mtx);
  hlist_free(header_list);
  plist_free(scanner_agent_list);
  plist_free(noproxy_list);
  plist_free(tunneld_list);
  plist_free(proxyd_list);
  plist_free(socksd_list);
  plist_free(rules);
  free((void *)cuid);
  free((void *)cpidfile);
  free((void *)magic_detect);
  free((void *)g_creds);
  plist_free(parent_list);
  exit(0);
}

// md4_buffer
// file xcrypt.h line 99
extern void * md4_buffer(const char *buffer, unsigned long int len, void *resblock)
{
  struct md4_ctx ctx;
  md4_init_ctx(&ctx);
  md4_process_bytes((const void *)buffer, len, &ctx);
  void *return_value_md4_finish_ctx$1;
  return_value_md4_finish_ctx$1=md4_finish_ctx(&ctx, resblock);
  return return_value_md4_finish_ctx$1;
}

// md4_finish_ctx
// file xcrypt.c line 665
extern void * md4_finish_ctx(struct md4_ctx *ctx, void *resbuf)
{
  unsigned int bytes = ctx->buflen;
  unsigned long int pad;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + bytes;
  if(!(ctx->total[0l] >= bytes))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  pad = (unsigned long int)(bytes >= (unsigned int)56 ? (unsigned int)(64 + 56) - bytes : (unsigned int)56 - bytes);
  memcpy((void *)&((char *)ctx->buffer)[(signed long int)bytes], (const void *)fillbuf, pad);
  ctx->buffer[(signed long int)(((unsigned long int)bytes + pad) / (unsigned long int)4)] = ctx->total[(signed long int)0] << 3;
  ctx->buffer[(signed long int)(((unsigned long int)bytes + pad) / (unsigned long int)4 + (unsigned long int)1)] = ctx->total[(signed long int)1] << 3 | ctx->total[(signed long int)0] >> 29;
  md4_process_block((const void *)ctx->buffer, (unsigned long int)bytes + pad + (unsigned long int)8, ctx);
  void *return_value_md4_read_ctx$1;
  return_value_md4_read_ctx$1=md4_read_ctx(ctx, resbuf);
  return return_value_md4_read_ctx$1;
}

// md4_init_ctx
// file xcrypt.c line 636
extern void md4_init_ctx(struct md4_ctx *ctx)
{
  ctx->A = (unsigned int)0x67452301;
  ctx->B = 0xefcdab89;
  ctx->C = 0x98badcfe;
  ctx->D = (unsigned int)0x10325476;
  ctx->total[(signed long int)1] = (unsigned int)0;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)1];
  ctx->buflen = (unsigned int)0;
}

// md4_process_block
// file xcrypt.c line 545
extern void md4_process_block(const void *buffer, unsigned long int len, struct md4_ctx *ctx)
{
  const unsigned int *words = (const unsigned int *)buffer;
  unsigned long int nwords = len / sizeof(unsigned int) /*4ul*/ ;
  const unsigned int *endp = words + (signed long int)nwords;
  unsigned int x[16l];
  unsigned int A = ctx->A;
  unsigned int B = ctx->B;
  unsigned int C = ctx->C;
  unsigned int D = ctx->D;
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + (unsigned int)len;
  if(!((unsigned long int)ctx->total[0l] >= len))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  while(!(words >= endp))
  {
    signed int t = 0;
    for( ; !(t >= 16); t = t + 1)
    {
      x[(signed long int)t] = *words;
      words = words + 1l;
    }
    A = A + (D ^ B & (C ^ D)) + x[(signed long int)0] << 3 | (unsigned int)(A + (D ^ B & (C ^ D)) + x[(signed long int)0]) >> 32 - 3;
    D = D + (C ^ A & (B ^ C)) + x[(signed long int)1] << 7 | (unsigned int)(D + (C ^ A & (B ^ C)) + x[(signed long int)1]) >> 32 - 7;
    C = C + (B ^ D & (A ^ B)) + x[(signed long int)2] << 11 | (unsigned int)(C + (B ^ D & (A ^ B)) + x[(signed long int)2]) >> 32 - 11;
    B = B + (A ^ C & (D ^ A)) + x[(signed long int)3] << 19 | (unsigned int)(B + (A ^ C & (D ^ A)) + x[(signed long int)3]) >> 32 - 19;
    A = A + (D ^ B & (C ^ D)) + x[(signed long int)4] << 3 | (unsigned int)(A + (D ^ B & (C ^ D)) + x[(signed long int)4]) >> 32 - 3;
    D = D + (C ^ A & (B ^ C)) + x[(signed long int)5] << 7 | (unsigned int)(D + (C ^ A & (B ^ C)) + x[(signed long int)5]) >> 32 - 7;
    C = C + (B ^ D & (A ^ B)) + x[(signed long int)6] << 11 | (unsigned int)(C + (B ^ D & (A ^ B)) + x[(signed long int)6]) >> 32 - 11;
    B = B + (A ^ C & (D ^ A)) + x[(signed long int)7] << 19 | (unsigned int)(B + (A ^ C & (D ^ A)) + x[(signed long int)7]) >> 32 - 19;
    A = A + (D ^ B & (C ^ D)) + x[(signed long int)8] << 3 | (unsigned int)(A + (D ^ B & (C ^ D)) + x[(signed long int)8]) >> 32 - 3;
    D = D + (C ^ A & (B ^ C)) + x[(signed long int)9] << 7 | (unsigned int)(D + (C ^ A & (B ^ C)) + x[(signed long int)9]) >> 32 - 7;
    C = C + (B ^ D & (A ^ B)) + x[(signed long int)10] << 11 | (unsigned int)(C + (B ^ D & (A ^ B)) + x[(signed long int)10]) >> 32 - 11;
    B = B + (A ^ C & (D ^ A)) + x[(signed long int)11] << 19 | (unsigned int)(B + (A ^ C & (D ^ A)) + x[(signed long int)11]) >> 32 - 19;
    A = A + (D ^ B & (C ^ D)) + x[(signed long int)12] << 3 | (unsigned int)(A + (D ^ B & (C ^ D)) + x[(signed long int)12]) >> 32 - 3;
    D = D + (C ^ A & (B ^ C)) + x[(signed long int)13] << 7 | (unsigned int)(D + (C ^ A & (B ^ C)) + x[(signed long int)13]) >> 32 - 7;
    C = C + (B ^ D & (A ^ B)) + x[(signed long int)14] << 11 | (unsigned int)(C + (B ^ D & (A ^ B)) + x[(signed long int)14]) >> 32 - 11;
    B = B + (A ^ C & (D ^ A)) + x[(signed long int)15] << 19 | (unsigned int)(B + (A ^ C & (D ^ A)) + x[(signed long int)15]) >> 32 - 19;
    A = A + (B & C | B & D | C & D) + x[(signed long int)0] + (unsigned int)0x5a827999 << 3 | (unsigned int)(A + (B & C | B & D | C & D) + x[(signed long int)0] + (unsigned int)0x5a827999) >> 32 - 3;
    D = D + (A & B | A & C | B & C) + x[(signed long int)4] + (unsigned int)0x5a827999 << 5 | (unsigned int)(D + (A & B | A & C | B & C) + x[(signed long int)4] + (unsigned int)0x5a827999) >> 32 - 5;
    C = C + (D & A | D & B | A & B) + x[(signed long int)8] + (unsigned int)0x5a827999 << 9 | (unsigned int)(C + (D & A | D & B | A & B) + x[(signed long int)8] + (unsigned int)0x5a827999) >> 32 - 9;
    B = B + (C & D | C & A | D & A) + x[(signed long int)12] + (unsigned int)0x5a827999 << 13 | (unsigned int)(B + (C & D | C & A | D & A) + x[(signed long int)12] + (unsigned int)0x5a827999) >> 32 - 13;
    A = A + (B & C | B & D | C & D) + x[(signed long int)1] + (unsigned int)0x5a827999 << 3 | (unsigned int)(A + (B & C | B & D | C & D) + x[(signed long int)1] + (unsigned int)0x5a827999) >> 32 - 3;
    D = D + (A & B | A & C | B & C) + x[(signed long int)5] + (unsigned int)0x5a827999 << 5 | (unsigned int)(D + (A & B | A & C | B & C) + x[(signed long int)5] + (unsigned int)0x5a827999) >> 32 - 5;
    C = C + (D & A | D & B | A & B) + x[(signed long int)9] + (unsigned int)0x5a827999 << 9 | (unsigned int)(C + (D & A | D & B | A & B) + x[(signed long int)9] + (unsigned int)0x5a827999) >> 32 - 9;
    B = B + (C & D | C & A | D & A) + x[(signed long int)13] + (unsigned int)0x5a827999 << 13 | (unsigned int)(B + (C & D | C & A | D & A) + x[(signed long int)13] + (unsigned int)0x5a827999) >> 32 - 13;
    A = A + (B & C | B & D | C & D) + x[(signed long int)2] + (unsigned int)0x5a827999 << 3 | (unsigned int)(A + (B & C | B & D | C & D) + x[(signed long int)2] + (unsigned int)0x5a827999) >> 32 - 3;
    D = D + (A & B | A & C | B & C) + x[(signed long int)6] + (unsigned int)0x5a827999 << 5 | (unsigned int)(D + (A & B | A & C | B & C) + x[(signed long int)6] + (unsigned int)0x5a827999) >> 32 - 5;
    C = C + (D & A | D & B | A & B) + x[(signed long int)10] + (unsigned int)0x5a827999 << 9 | (unsigned int)(C + (D & A | D & B | A & B) + x[(signed long int)10] + (unsigned int)0x5a827999) >> 32 - 9;
    B = B + (C & D | C & A | D & A) + x[(signed long int)14] + (unsigned int)0x5a827999 << 13 | (unsigned int)(B + (C & D | C & A | D & A) + x[(signed long int)14] + (unsigned int)0x5a827999) >> 32 - 13;
    A = A + (B & C | B & D | C & D) + x[(signed long int)3] + (unsigned int)0x5a827999 << 3 | (unsigned int)(A + (B & C | B & D | C & D) + x[(signed long int)3] + (unsigned int)0x5a827999) >> 32 - 3;
    D = D + (A & B | A & C | B & C) + x[(signed long int)7] + (unsigned int)0x5a827999 << 5 | (unsigned int)(D + (A & B | A & C | B & C) + x[(signed long int)7] + (unsigned int)0x5a827999) >> 32 - 5;
    C = C + (D & A | D & B | A & B) + x[(signed long int)11] + (unsigned int)0x5a827999 << 9 | (unsigned int)(C + (D & A | D & B | A & B) + x[(signed long int)11] + (unsigned int)0x5a827999) >> 32 - 9;
    B = B + (C & D | C & A | D & A) + x[(signed long int)15] + (unsigned int)0x5a827999 << 13 | (unsigned int)(B + (C & D | C & A | D & A) + x[(signed long int)15] + (unsigned int)0x5a827999) >> 32 - 13;
    A = A + (B ^ C ^ D) + x[(signed long int)0] + (unsigned int)0x6ed9eba1 << 3 | (unsigned int)(A + (B ^ C ^ D) + x[(signed long int)0] + (unsigned int)0x6ed9eba1) >> 32 - 3;
    D = D + (A ^ B ^ C) + x[(signed long int)8] + (unsigned int)0x6ed9eba1 << 9 | (unsigned int)(D + (A ^ B ^ C) + x[(signed long int)8] + (unsigned int)0x6ed9eba1) >> 32 - 9;
    C = C + (D ^ A ^ B) + x[(signed long int)4] + (unsigned int)0x6ed9eba1 << 11 | (unsigned int)(C + (D ^ A ^ B) + x[(signed long int)4] + (unsigned int)0x6ed9eba1) >> 32 - 11;
    B = B + (C ^ D ^ A) + x[(signed long int)12] + (unsigned int)0x6ed9eba1 << 15 | (unsigned int)(B + (C ^ D ^ A) + x[(signed long int)12] + (unsigned int)0x6ed9eba1) >> 32 - 15;
    A = A + (B ^ C ^ D) + x[(signed long int)2] + (unsigned int)0x6ed9eba1 << 3 | (unsigned int)(A + (B ^ C ^ D) + x[(signed long int)2] + (unsigned int)0x6ed9eba1) >> 32 - 3;
    D = D + (A ^ B ^ C) + x[(signed long int)10] + (unsigned int)0x6ed9eba1 << 9 | (unsigned int)(D + (A ^ B ^ C) + x[(signed long int)10] + (unsigned int)0x6ed9eba1) >> 32 - 9;
    C = C + (D ^ A ^ B) + x[(signed long int)6] + (unsigned int)0x6ed9eba1 << 11 | (unsigned int)(C + (D ^ A ^ B) + x[(signed long int)6] + (unsigned int)0x6ed9eba1) >> 32 - 11;
    B = B + (C ^ D ^ A) + x[(signed long int)14] + (unsigned int)0x6ed9eba1 << 15 | (unsigned int)(B + (C ^ D ^ A) + x[(signed long int)14] + (unsigned int)0x6ed9eba1) >> 32 - 15;
    A = A + (B ^ C ^ D) + x[(signed long int)1] + (unsigned int)0x6ed9eba1 << 3 | (unsigned int)(A + (B ^ C ^ D) + x[(signed long int)1] + (unsigned int)0x6ed9eba1) >> 32 - 3;
    D = D + (A ^ B ^ C) + x[(signed long int)9] + (unsigned int)0x6ed9eba1 << 9 | (unsigned int)(D + (A ^ B ^ C) + x[(signed long int)9] + (unsigned int)0x6ed9eba1) >> 32 - 9;
    C = C + (D ^ A ^ B) + x[(signed long int)5] + (unsigned int)0x6ed9eba1 << 11 | (unsigned int)(C + (D ^ A ^ B) + x[(signed long int)5] + (unsigned int)0x6ed9eba1) >> 32 - 11;
    B = B + (C ^ D ^ A) + x[(signed long int)13] + (unsigned int)0x6ed9eba1 << 15 | (unsigned int)(B + (C ^ D ^ A) + x[(signed long int)13] + (unsigned int)0x6ed9eba1) >> 32 - 15;
    A = A + (B ^ C ^ D) + x[(signed long int)3] + (unsigned int)0x6ed9eba1 << 3 | (unsigned int)(A + (B ^ C ^ D) + x[(signed long int)3] + (unsigned int)0x6ed9eba1) >> 32 - 3;
    D = D + (A ^ B ^ C) + x[(signed long int)11] + (unsigned int)0x6ed9eba1 << 9 | (unsigned int)(D + (A ^ B ^ C) + x[(signed long int)11] + (unsigned int)0x6ed9eba1) >> 32 - 9;
    C = C + (D ^ A ^ B) + x[(signed long int)7] + (unsigned int)0x6ed9eba1 << 11 | (unsigned int)(C + (D ^ A ^ B) + x[(signed long int)7] + (unsigned int)0x6ed9eba1) >> 32 - 11;
    B = B + (C ^ D ^ A) + x[(signed long int)15] + (unsigned int)0x6ed9eba1 << 15 | (unsigned int)(B + (C ^ D ^ A) + x[(signed long int)15] + (unsigned int)0x6ed9eba1) >> 32 - 15;
    ctx->A = ctx->A + A;
    A = ctx->A;
    ctx->B = ctx->B + B;
    B = ctx->B;
    ctx->C = ctx->C + C;
    C = ctx->C;
    ctx->D = ctx->D + D;
    D = ctx->D;
  }
}

// md4_process_bytes
// file xcrypt.c line 689
extern void md4_process_bytes(const void *buffer, unsigned long int len, struct md4_ctx *ctx)
{
  if(!(ctx->buflen == 0u))
  {
    unsigned long int md4_process_bytes$$1$$1$$left_over = (unsigned long int)ctx->buflen;
    unsigned long int add = (unsigned long int)128 - md4_process_bytes$$1$$1$$left_over > len ? len : (unsigned long int)128 - md4_process_bytes$$1$$1$$left_over;
    memcpy((void *)&((char *)ctx->buffer)[(signed long int)md4_process_bytes$$1$$1$$left_over], buffer, add);
    ctx->buflen = ctx->buflen + (unsigned int)add;
    if(ctx->buflen >= 65u)
    {
      md4_process_block((const void *)ctx->buffer, (unsigned long int)(ctx->buflen & (unsigned int)~63), ctx);
      ctx->buflen = ctx->buflen & (unsigned int)63;
      memcpy((void *)ctx->buffer, (const void *)&((char *)ctx->buffer)[(signed long int)(md4_process_bytes$$1$$1$$left_over + add & (unsigned long int)~63)], (unsigned long int)ctx->buflen);
    }

    buffer = (const void *)((const char *)buffer + (signed long int)add);
    len = len - add;
  }

  if(len >= 64ul)
  {
    md4_process_block(buffer, len & (unsigned long int)~63, ctx);
    buffer = (const void *)((const char *)buffer + (signed long int)(len & (unsigned long int)~63));
    len = len & (unsigned long int)63;
  }

  if(len >= 1ul)
  {
    unsigned long int left_over = (unsigned long int)ctx->buflen;
    memcpy((void *)&((char *)ctx->buffer)[(signed long int)left_over], buffer, len);
    left_over = left_over + len;
    if(left_over >= 64ul)
    {
      md4_process_block((const void *)ctx->buffer, (unsigned long int)64, ctx);
      left_over = left_over - (unsigned long int)64;
      memcpy((void *)ctx->buffer, (const void *)&ctx->buffer[(signed long int)16], left_over);
    }

    ctx->buflen = (unsigned int)left_over;
  }

}

// md4_read_ctx
// file xcrypt.c line 651
extern void * md4_read_ctx(struct md4_ctx *ctx, void *resbuf)
{
  ((unsigned int *)resbuf)[(signed long int)0] = ctx->A;
  ((unsigned int *)resbuf)[(signed long int)1] = ctx->B;
  ((unsigned int *)resbuf)[(signed long int)2] = ctx->C;
  ((unsigned int *)resbuf)[(signed long int)3] = ctx->D;
  return resbuf;
}

// md4_stream
// file xcrypt.c line 754
extern signed int md4_stream(struct _IO_FILE *stream, void *resblock)
{
  struct md4_ctx ctx;
  char buffer[4168l];
  unsigned long int sum;
  md4_init_ctx(&ctx);
  while((_Bool)1)
  {
    unsigned long int n;
    sum = (unsigned long int)0;
    while((_Bool)1)
    {
      n=fread((void *)(buffer + (signed long int)sum), (unsigned long int)1, (unsigned long int)4096 - sum, stream);
      sum = sum + n;
      if(sum == 4096ul)
        break;

      if(n == 0ul)
      {
        signed int return_value_ferror$1;
        return_value_ferror$1=ferror(stream);
        if(!(return_value_ferror$1 == 0))
          return 1;

        goto process_partial_block;
      }

      signed int return_value_feof$2;
      return_value_feof$2=feof(stream);
      if(!(return_value_feof$2 == 0))
        goto process_partial_block;

    }
    md4_process_block((const void *)buffer, (unsigned long int)4096, &ctx);
  }

process_partial_block:
  ;
  if(sum >= 1ul)
    md4_process_bytes((const void *)buffer, sum, &ctx);

  md4_finish_ctx(&ctx, resblock);
  return 0;
}

// md5_buffer
// file xcrypt.h line 109
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
// file xcrypt.c line 929
extern void * md5_finish_ctx(struct md5_ctx *ctx, void *resbuf)
{
  unsigned int bytes = ctx->buflen;
  unsigned long int size = (unsigned long int)(bytes < (unsigned int)56 ? 64 / 4 : (64 * 2) / 4);
  ctx->total[(signed long int)0] = ctx->total[(signed long int)0] + bytes;
  if(!(ctx->total[0l] >= bytes))
    ctx->total[(signed long int)1] = ctx->total[(signed long int)1] + 1u;

  ctx->buffer[(signed long int)(size - (unsigned long int)2)] = ctx->total[(signed long int)0] << 3;
  ctx->buffer[(signed long int)(size - (unsigned long int)1)] = ctx->total[(signed long int)1] << 3 | ctx->total[(signed long int)0] >> 29;
  memcpy((void *)&((char *)ctx->buffer)[(signed long int)bytes], (const void *)fillbuf, (size - (unsigned long int)2) * (unsigned long int)4 - (unsigned long int)bytes);
  md5_process_block((const void *)ctx->buffer, size * (unsigned long int)4, ctx);
  void *return_value_md5_read_ctx$1;
  return_value_md5_read_ctx$1=md5_read_ctx(ctx, resbuf);
  return return_value_md5_read_ctx$1;
}

// md5_init_ctx
// file xcrypt.c line 896
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
// file xcrypt.c line 1117
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

  unsigned int *tmp_post$1;
  unsigned int *tmp_post$2;
  unsigned int *tmp_post$3;
  unsigned int *tmp_post$4;
  unsigned int *tmp_post$5;
  unsigned int *tmp_post$6;
  unsigned int *tmp_post$7;
  unsigned int *tmp_post$8;
  unsigned int *tmp_post$9;
  unsigned int *tmp_post$10;
  unsigned int *tmp_post$11;
  unsigned int *tmp_post$12;
  unsigned int *tmp_post$13;
  unsigned int *tmp_post$14;
  unsigned int *tmp_post$15;
  unsigned int *tmp_post$16;
  while(!(words >= endp))
  {
    unsigned int *cwp = correct_words;
    unsigned int A_save = A;
    unsigned int B_save = B;
    unsigned int C_save = C;
    unsigned int D_save = D;
    do
    {
      tmp_post$1 = cwp;
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
      tmp_post$2 = cwp;
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
      tmp_post$3 = cwp;
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
      tmp_post$4 = cwp;
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
      tmp_post$5 = cwp;
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
      tmp_post$6 = cwp;
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
      tmp_post$7 = cwp;
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
      tmp_post$8 = cwp;
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
      tmp_post$9 = cwp;
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
      tmp_post$10 = cwp;
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
      tmp_post$11 = cwp;
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
      tmp_post$12 = cwp;
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
      tmp_post$13 = cwp;
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
      tmp_post$14 = cwp;
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
      tmp_post$15 = cwp;
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
      tmp_post$16 = cwp;
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
// file xcrypt.c line 1039
extern void md5_process_bytes(const void *buffer, unsigned long int len, struct md5_ctx *ctx)
{
  if(!(ctx->buflen == 0u))
  {
    unsigned long int left_over = (unsigned long int)ctx->buflen;
    unsigned long int add = (unsigned long int)128 - left_over > len ? len : (unsigned long int)128 - left_over;
    memcpy((void *)&((char *)ctx->buffer)[(signed long int)left_over], buffer, add);
    ctx->buflen = ctx->buflen + (unsigned int)add;
    if(ctx->buflen >= 65u)
    {
      md5_process_block((const void *)ctx->buffer, (unsigned long int)(ctx->buflen & (unsigned int)~63), ctx);
      ctx->buflen = ctx->buflen & (unsigned int)63;
      memcpy((void *)ctx->buffer, (const void *)&((char *)ctx->buffer)[(signed long int)(left_over + add & (unsigned long int)~63)], (unsigned long int)ctx->buflen);
    }

    buffer = (const void *)((const char *)buffer + (signed long int)add);
    len = len - add;
  }

  if(len >= 64ul)
  {
    md5_process_block(buffer, len & (unsigned long int)~63, ctx);
    buffer = (const void *)((const char *)buffer + (signed long int)(len & (unsigned long int)~63));
    len = len & (unsigned long int)63;
  }

  if(len >= 1ul)
  {
    unsigned long int md5_process_bytes$$1$$3$$left_over = (unsigned long int)ctx->buflen;
    memcpy((void *)&((char *)ctx->buffer)[(signed long int)md5_process_bytes$$1$$3$$left_over], buffer, len);
    md5_process_bytes$$1$$3$$left_over = md5_process_bytes$$1$$3$$left_over + len;
    if(md5_process_bytes$$1$$3$$left_over >= 64ul)
    {
      md5_process_block((const void *)ctx->buffer, (unsigned long int)64, ctx);
      md5_process_bytes$$1$$3$$left_over = md5_process_bytes$$1$$3$$left_over - (unsigned long int)64;
      memcpy((void *)ctx->buffer, (const void *)&ctx->buffer[(signed long int)16], md5_process_bytes$$1$$3$$left_over);
    }

    ctx->buflen = (unsigned int)md5_process_bytes$$1$$3$$left_over;
  }

}

// md5_read_ctx
// file xcrypt.c line 913
extern void * md5_read_ctx(struct md5_ctx *ctx, void *resbuf)
{
  ((unsigned int *)resbuf)[(signed long int)0] = ctx->A;
  ((unsigned int *)resbuf)[(signed long int)1] = ctx->B;
  ((unsigned int *)resbuf)[(signed long int)2] = ctx->C;
  ((unsigned int *)resbuf)[(signed long int)3] = ctx->D;
  return resbuf;
}

// md5_stream
// file xcrypt.c line 956
extern signed int md5_stream(struct _IO_FILE *stream, void *resblock)
{
  struct md5_ctx ctx;
  char buffer[4168l];
  unsigned long int sum;
  md5_init_ctx(&ctx);
  while((_Bool)1)
  {
    unsigned long int n;
    sum = (unsigned long int)0;
    while((_Bool)1)
    {
      n=fread((void *)(buffer + (signed long int)sum), (unsigned long int)1, (unsigned long int)4096 - sum, stream);
      sum = sum + n;
      if(sum == 4096ul)
        break;

      if(n == 0ul)
      {
        signed int return_value_ferror$1;
        return_value_ferror$1=ferror(stream);
        if(!(return_value_ferror$1 == 0))
          return 1;

        goto process_partial_block;
      }

      signed int return_value_feof$2;
      return_value_feof$2=feof(stream);
      if(!(return_value_feof$2 == 0))
        goto process_partial_block;

    }
    md5_process_block((const void *)buffer, (unsigned long int)4096, &ctx);
  }

process_partial_block:
  ;
  if(sum >= 1ul)
    md5_process_bytes((const void *)buffer, sum, &ctx);

  md5_finish_ctx(&ctx, resblock);
  return 0;
}

// memxor
// file xcrypt.c line 832
void * memxor(void *dest, const void *src, unsigned long int n)
{
  const char *s = (const char *)src;
  char *d = (char *)dest;
  char *tmp_post$1;
  const char *tmp_post$2;
  for( ; n >= 1ul; n = n - 1ul)
  {
    tmp_post$1 = d;
    d = d + 1l;
    tmp_post$2 = s;
    s = s + 1l;
    *tmp_post$1 = *tmp_post$1 ^ *tmp_post$2;
  }
  return dest;
}

// myexit
// file utils.c line 46
extern void myexit(signed int rc)
{
  if(!(rc == 0))
    fprintf(stderr, "Exitting with error. Check daemon logs or run with -v.\n");

  exit(rc);
}

// new
// file utils.c line 722
extern char * new(unsigned long int size)
{
  char *tmp;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(size);
  tmp = (char *)return_value_malloc$1;
  memset((void *)tmp, 0, size);
  return tmp;
}

// new_auth
// file auth.c line 29
extern struct auth_s * new_auth(void)
{
  struct auth_s *tmp;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct auth_s) /*316ul*/ );
  tmp = (struct auth_s *)return_value_malloc$1;
  if(tmp == ((struct auth_s *)NULL))
    return (struct auth_s *)(void *)0;

  else
  {
    memset((void *)tmp->user, 0, (unsigned long int)50);
    memset((void *)tmp->domain, 0, (unsigned long int)50);
    memset((void *)tmp->workstation, 0, (unsigned long int)50);
    memset((void *)tmp->passntlm2, 0, (unsigned long int)50);
    memset((void *)tmp->passnt, 0, (unsigned long int)50);
    memset((void *)tmp->passlm, 0, (unsigned long int)50);
    tmp->hashntlm2 = 1;
    tmp->hashnt = 0;
    tmp->hashlm = 0;
    tmp->flags = (unsigned int)0;
    return tmp;
  }
}

// new_rr_data
// file utils.c line 501
extern struct rr_data_s * new_rr_data(void)
{
  struct rr_data_s *data;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rr_data_s) /*104ul*/ );
  data = (struct rr_data_s *)return_value_malloc$1;
  data->req = 0;
  data->code = 0;
  data->skip_http = 0;
  data->body_len = 0;
  data->empty = 1;
  data->port = 0;
  data->headers = (struct hlist_s *)(void *)0;
  data->method = (char *)(void *)0;
  data->url = (char *)(void *)0;
  data->rel_url = (char *)(void *)0;
  data->hostname = (char *)(void *)0;
  data->http = (char *)(void *)0;
  data->msg = (char *)(void *)0;
  data->body = (char *)(void *)0;
  data->errmsg = (char *)(void *)0;
  return data;
}

// noproxy_add
// file main.c line 276
struct plist_s * noproxy_add(struct plist_s *list, char *spec)
{
  char *tok;
  char *save;
  char *return_value___strtok_r$1;
  return_value___strtok_r$1=__strtok_r(spec, ", ", &save);
  tok = return_value___strtok_r$1;
  while(!(tok == ((char *)NULL)))
  {
    if(!(debug == 0))
      printf("Adding no-proxy for: '%s'\n", tok);

    char *return_value___strdup$2;
    return_value___strdup$2=__strdup(tok);
    list=plist_add(list, (unsigned long int)0, (void *)return_value___strdup$2);
    char *return_value___strtok_r$3;
    return_value___strtok_r$3=__strtok_r((char *)(void *)0, ", ", &save);
    tok = return_value___strtok_r$3;
  }
  return list;
}

// noproxy_match
// file main.c line 290
signed int noproxy_match(const char *addr)
{
  struct plist_s *list = noproxy_list;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$4;
  signed int return_value_fnmatch$3;
  while(!(list == ((struct plist_s *)NULL)))
  {
    if(!(list->aux == NULL))
    {
      return_value_strlen$1=strlen((const char *)list->aux);
      tmp_if_expr$2 = return_value_strlen$1 != 0ul ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      return_value_fnmatch$3=fnmatch((const char *)list->aux, addr, 0);
      tmp_if_expr$4 = return_value_fnmatch$3 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
    {
      if(!(debug == 0))
        printf("MATCH: %s (%s)\n", addr, (char *)list->aux);

      return 1;
    }

    else
      if(!(debug == 0))
        printf("   NO: %s (%s)\n", addr, (char *)list->aux);

    list = list->next;
  }
  return 0;
}

// ntlm2_calc_resp
// file ntlm.c line 67
static void ntlm2_calc_resp(char **nthash, signed int *ntlen, char **lmhash, signed int *lmlen, char *passnt2, char *challenge, signed int tbofs, signed int tblen)
{
  char *tmp;
  char *blob;
  char *nonce;
  char *buf;
  signed long int tw;
  signed int blen;
  nonce=new((unsigned long int)(8 + 1));
  signed long int return_value_random$1;
  return_value_random$1=random();
  signed long int return_value_random$2;
  return_value_random$2=random();
  *((unsigned long int *)(nonce + (signed long int)0)) = (unsigned long int)return_value_random$1 << 32 | (unsigned long int)return_value_random$2;
  signed long int return_value_time$3;
  return_value_time$3=time((signed long int *)(void *)0);
  tw = (signed long int)(((unsigned long int)return_value_time$3 + 11644473600LLU) * 10000000LLU);
  if(!(debug == 0))
  {
    tmp=printmem(nonce, (unsigned long int)8, 7);
    printf("NTLMv2:\n\t    Nonce: %s\n\tTimestamp: %ld\n", tmp, tw);
    free((void *)tmp);
  }

  blob=new((unsigned long int)(4 + 4 + 8 + 8 + 4 + tblen + 4 + 1));
  *((unsigned int *)(blob + (signed long int)0)) = (unsigned int)0x00000101;
  *((unsigned int *)(blob + (signed long int)4)) = (unsigned int)0;
  *((unsigned long int *)(blob + (signed long int)8)) = (unsigned long int)tw;
  *((unsigned long int *)(blob + (signed long int)16)) = *((unsigned long int *)(nonce + (signed long int)0));
  *((unsigned int *)(blob + (signed long int)24)) = (unsigned int)0;
  memcpy((void *)(blob + (signed long int)28), (const void *)(char *)(challenge + (signed long int)tbofs), (unsigned long int)tblen);
  *((unsigned int *)(blob + (signed long int)28 + (signed long int)tblen)) = (unsigned int)0;
  blen = 28 + tblen + 4;
  *ntlen = 16 + blen;
  *nthash=new((unsigned long int)(*ntlen + 1));
  buf=new((unsigned long int)(8 + blen + 1));
  memcpy((void *)buf, (const void *)(char *)(challenge + (signed long int)24), (unsigned long int)8);
  memcpy((void *)(buf + (signed long int)8), (const void *)blob, (unsigned long int)blen);
  hmac_md5((const void *)passnt2, (unsigned long int)16, (const void *)buf, (unsigned long int)(8 + blen), (void *)*nthash);
  memcpy((void *)(*nthash + (signed long int)16), (const void *)blob, (unsigned long int)blen);
  free((void *)buf);
  *lmlen = 24;
  *lmhash=new((unsigned long int)(*lmlen + 1));
  buf=new((unsigned long int)(16 + 1));
  memcpy((void *)buf, (const void *)(char *)(challenge + (signed long int)24), (unsigned long int)8);
  memcpy((void *)(buf + (signed long int)8), (const void *)nonce, (unsigned long int)8);
  hmac_md5((const void *)passnt2, (unsigned long int)16, (const void *)buf, (unsigned long int)16, (void *)*lmhash);
  memcpy((void *)(*lmhash + (signed long int)16), (const void *)nonce, (unsigned long int)8);
  free((void *)buf);
  free((void *)blob);
  free((void *)nonce);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// ntlm2_hash_password
// file ntlm.c line 189
extern char * ntlm2_hash_password(char *username, char *domain, char *password)
{
  char *tmp;
  char *buf;
  char *passnt;
  char *passnt2;
  signed int len;
  passnt=ntlm_hash_nt_password(password);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(username);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(domain);
  buf=new(return_value_strlen$1 + return_value_strlen$2 + (unsigned long int)1);
  strcat(buf, username);
  strcat(buf, domain);
  uppercase(buf);
  len=unicode(&tmp, buf);
  passnt2=new((unsigned long int)(16 + 1));
  hmac_md5((const void *)passnt, (unsigned long int)16, (const void *)tmp, (unsigned long int)len, (void *)passnt2);
  free((void *)passnt);
  free((void *)tmp);
  free((void *)buf);
  return passnt2;
}

// ntlm2sr_calc_rest
// file ntlm.c line 126
static void ntlm2sr_calc_rest(char **nthash, signed int *ntlen, char **lmhash, signed int *lmlen, char *passnt, char *challenge)
{
  char *sess;
  char *nonce;
  char *buf;
  nonce=new((unsigned long int)(8 + 1));
  signed long int return_value_random$1;
  return_value_random$1=random();
  signed long int return_value_random$2;
  return_value_random$2=random();
  *((unsigned long int *)(nonce + (signed long int)0)) = (unsigned long int)return_value_random$1 << 32 | (unsigned long int)return_value_random$2;
  *lmlen = 24;
  *lmhash=new((unsigned long int)(*lmlen + 1));
  memcpy((void *)*lmhash, (const void *)nonce, (unsigned long int)8);
  memset((void *)(*lmhash + (signed long int)8), 0, (unsigned long int)16);
  buf=new((unsigned long int)(16 + 1));
  sess=new((unsigned long int)(16 + 1));
  memcpy((void *)buf, (const void *)(char *)(challenge + (signed long int)24), (unsigned long int)8);
  memcpy((void *)(buf + (signed long int)8), (const void *)nonce, (unsigned long int)8);
  md5_buffer(buf, (unsigned long int)16, (void *)sess);
  free((void *)buf);
  *ntlen = 24;
  ntlm_calc_resp(nthash, passnt, sess);
  free((void *)sess);
  free((void *)nonce);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// ntlm_calc_resp
// file ntlm.c line 50
static signed int ntlm_calc_resp(char **dst, char *keys, char *challenge)
{
  struct anonymous context;
  *dst=new((unsigned long int)(24 + 1));
  ntlm_set_key((unsigned char *)(keys + (signed long int)0), &context);
  gl_des_ecb_crypt(&context, challenge, *dst, 0);
  ntlm_set_key((unsigned char *)(keys + (signed long int)7), &context);
  gl_des_ecb_crypt(&context, challenge, *dst + (signed long int)8, 0);
  ntlm_set_key((unsigned char *)(keys + (signed long int)14), &context);
  gl_des_ecb_crypt(&context, challenge, *dst + (signed long int)16, 0);
  return 24;
}

// ntlm_hash_lm_password
// file ntlm.c line 152
extern char * ntlm_hash_lm_password(char *password)
{
  char magic[8l] = { (char)0x4B, (char)0x47, (char)0x53, (char)0x21, (char)0x40, (char)0x23, (char)0x24, (char)0x25 };
  struct anonymous context;
  char *keys;
  char *pass;
  keys=new((unsigned long int)(21 + 1));
  pass=new((unsigned long int)(14 + 1));
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(password);
  unsigned long int tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(return_value_strlen$1 >= 15ul)
    tmp_if_expr$3 = (unsigned long int)14;

  else
  {
    return_value_strlen$2=strlen(password);
    tmp_if_expr$3 = return_value_strlen$2;
  }
  char *return_value___builtin_strncpy$4;
  return_value___builtin_strncpy$4=__builtin_strncpy(pass, password, tmp_if_expr$3);
  uppercase(return_value___builtin_strncpy$4);
  ntlm_set_key((unsigned char *)(pass + (signed long int)0), &context);
  gl_des_ecb_crypt(&context, magic, keys, 0);
  ntlm_set_key((unsigned char *)(pass + (signed long int)7), &context);
  gl_des_ecb_crypt(&context, magic, keys + (signed long int)8, 0);
  memset((void *)(keys + (signed long int)16), 0, (unsigned long int)5);
  memset((void *)pass, 0, (unsigned long int)14);
  free((void *)pass);
  return keys;
}

// ntlm_hash_nt_password
// file ntlm.c line 174
extern char * ntlm_hash_nt_password(char *password)
{
  char *u16;
  char *keys;
  signed int len;
  keys=new((unsigned long int)(21 + 1));
  len=unicode(&u16, password);
  md4_buffer(u16, (unsigned long int)len, (void *)keys);
  memset((void *)(keys + (signed long int)16), 0, (unsigned long int)5);
  memset((void *)u16, 0, (unsigned long int)len);
  free((void *)u16);
  return keys;
}

// ntlm_request
// file ntlm.c line 211
extern signed int ntlm_request(char **dst, struct auth_s *creds)
{
  char *buf;
  char *tmp;
  signed int dlen;
  signed int hlen;
  unsigned int flags = (unsigned int)0xb206;
  *dst = (char *)(void *)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(creds->domain);
  dlen = (signed int)return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(creds->workstation);
  hlen = (signed int)return_value_strlen$2;
  _Bool tmp_if_expr$3;
  if(creds->flags == 0u)
  {
    if(!(creds->hashntlm2 == 0))
      flags = 0xa208b205;

    else
      if(creds->hashnt == 2)
        flags = 0xa208b207;

      else
      {
        if(!(creds->hashnt == 0))
          tmp_if_expr$3 = creds->hashlm != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
          flags = (unsigned int)0xb207;

        else
          if(!(creds->hashnt == 0))
            flags = (unsigned int)0xb205;

          else
            if(!(creds->hashlm == 0))
              flags = (unsigned int)0xb206;

            else
            {
              if(!(debug == 0))
              {
                printf("You're requesting with empty auth_s?!\n");
                dump_auth(creds);
              }

              return 0;
            }
      }
  }

  else
    flags = creds->flags;
  if(!(debug == 0))
  {
    printf("NTLM Request:\n");
    printf("\t   Domain: %s\n", (const void *)creds->domain);
    printf("\t Hostname: %s\n", (const void *)creds->workstation);
    printf("\t    Flags: 0x%X\n", (signed int)flags);
  }

  buf=new((unsigned long int)1024);
  memcpy((void *)buf, (const void *)"NTLMSSP\0", (unsigned long int)8);
  *((unsigned int *)(buf + (signed long int)8)) = (unsigned int)1;
  *((unsigned int *)(buf + (signed long int)12)) = flags;
  *((unsigned short int *)(buf + (signed long int)16)) = (unsigned short int)dlen;
  *((unsigned short int *)(buf + (signed long int)18)) = (unsigned short int)dlen;
  *((unsigned int *)(buf + (signed long int)20)) = (unsigned int)(32 + hlen);
  *((unsigned short int *)(buf + (signed long int)24)) = (unsigned short int)hlen;
  *((unsigned short int *)(buf + (signed long int)26)) = (unsigned short int)hlen;
  *((unsigned int *)(buf + (signed long int)28)) = (unsigned int)32;
  char *return_value___strdup$4;
  return_value___strdup$4=__strdup(creds->workstation);
  tmp=uppercase(return_value___strdup$4);
  memcpy((void *)(buf + (signed long int)32), (const void *)tmp, (unsigned long int)hlen);
  free((void *)tmp);
  char *return_value___strdup$5;
  return_value___strdup$5=__strdup(creds->domain);
  tmp=uppercase(return_value___strdup$5);
  memcpy((void *)(buf + (signed long int)32 + (signed long int)hlen), (const void *)tmp, (unsigned long int)dlen);
  free((void *)tmp);
  *dst = buf;
  return 32 + dlen + hlen;
}

// ntlm_response
// file ntlm.c line 298
extern signed int ntlm_response(char **dst, char *challenge, signed int challen, struct auth_s *creds)
{
  char *buf;
  char *udomain;
  char *uuser;
  char *uhost;
  char *tmp;
  signed int dlen;
  signed int ulen;
  signed int hlen;
  unsigned short int tpos;
  unsigned short int tlen;
  unsigned short int ttype = (unsigned short int)-1;
  unsigned short int tbofs = (unsigned short int)0;
  unsigned short int tblen = (unsigned short int)0;
  char *lmhash = (char *)(void *)0;
  char *nthash = (char *)(void *)0;
  signed int lmlen = 0;
  signed int ntlen = 0;
  if(!(debug == 0))
  {
    printf("NTLM Challenge:\n");
    tmp=printmem((char *)(challenge + (signed long int)24), (unsigned long int)8, 7);
    printf("\tChallenge: %s (len: %d)\n", tmp, challen);
    free((void *)tmp);
    printf("\t    Flags: 0x%X\n", *((unsigned int *)(challenge + (signed long int)20)));
  }

  if(challen >= 49)
  {
    tpos = *((unsigned short int *)(challenge + (signed long int)44));
    tbofs = tpos;
    for( ; challen >= 4 + (signed int)tpos; tblen = tblen + (unsigned short int)(4 + (signed int)tlen))
    {
      ttype = *((unsigned short int *)(challenge + (signed long int)tpos));
      if(ttype == 0)
        break;

      tlen = *((unsigned short int *)(challenge + (signed long int)tpos + (signed long int)2));
      if(!(challen >= 4 + (signed int)tlen + (signed int)tpos))
        break;

      if(!(debug == 0))
      {
        switch((signed int)ttype)
        {
          case 0x1:
          {
            printf("\t   Server: ");
            break;
          }
          case 0x2:
          {
            printf("\tNT domain: ");
            break;
          }
          case 0x3:
          {
            printf("\t     FQDN: ");
            break;
          }
          case 0x4:
          {
            printf("\t   Domain: ");
            break;
          }
          case 0x5:
          {
            printf("\t      TLD: ");
            break;
          }
          default:
            printf("\t      %3d: ", ttype);
        }
        tmp=printuc((char *)(challenge + (signed long int)tpos + (signed long int)4), (signed int)tlen);
        printf("%s\n", tmp);
        free((void *)tmp);
      }

      tpos = tpos + (unsigned short int)(4 + (signed int)tlen);
    }
    if((signed int)ttype == 0 && !(tblen == 0))
      tblen = tblen + (unsigned short int)4;

    if(!(debug == 0))
      printf("\t    TBofs: %d\n\t    TBlen: %d\n\t    ttype: %d\n", tbofs, tblen, ttype);

  }

  _Bool tmp_if_expr$9;
  if(!(creds->hashntlm2 == 0))
  {
    if(!(tblen == 0))
      goto __CPROVER_DUMP_L14;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L14:
    ;
    if(!(creds->hashntlm2 == 0))
      ntlm2_calc_resp(&nthash, &ntlen, &lmhash, &lmlen, creds->passntlm2, challenge, (signed int)tbofs, (signed int)tblen);

    if(creds->hashnt == 2)
      ntlm2sr_calc_rest(&nthash, &ntlen, &lmhash, &lmlen, creds->passnt, challenge);

    if(creds->hashnt == 1)
      ntlen=ntlm_calc_resp(&nthash, creds->passnt, (char *)(challenge + (signed long int)24));

    if(!(creds->hashlm == 0))
      lmlen=ntlm_calc_resp(&lmhash, creds->passlm, (char *)(challenge + (signed long int)24));

    if(!(creds->hashnt == 0))
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = creds->hashntlm2 != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
    {
      char *return_value___strdup$1;
      return_value___strdup$1=__strdup(creds->domain);
      tmp=uppercase(return_value___strdup$1);
      dlen=unicode(&udomain, tmp);
      free((void *)tmp);
      ulen=unicode(&uuser, creds->user);
      char *return_value___strdup$2;
      return_value___strdup$2=__strdup(creds->workstation);
      tmp=uppercase(return_value___strdup$2);
      hlen=unicode(&uhost, tmp);
      free((void *)tmp);
    }

    else
    {
      char *return_value___strdup$3;
      return_value___strdup$3=__strdup(creds->domain);
      udomain=uppercase(return_value___strdup$3);
      char *return_value___strdup$4;
      return_value___strdup$4=__strdup(creds->user);
      uuser=uppercase(return_value___strdup$4);
      char *return_value___strdup$5;
      return_value___strdup$5=__strdup(creds->workstation);
      uhost=uppercase(return_value___strdup$5);
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(creds->domain);
      dlen = (signed int)return_value_strlen$6;
      unsigned long int return_value_strlen$7;
      return_value_strlen$7=strlen(creds->user);
      ulen = (signed int)return_value_strlen$7;
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(creds->workstation);
      hlen = (signed int)return_value_strlen$8;
    }
    if(!(debug == 0))
    {
      printf("NTLM Response:\n");
      printf("\t Hostname: '%s'\n", (const void *)creds->workstation);
      printf("\t   Domain: '%s'\n", (const void *)creds->domain);
      printf("\t Username: '%s'\n", (const void *)creds->user);
      if(!(ntlen == 0))
      {
        tmp=printmem(nthash, (unsigned long int)ntlen, 7);
        printf("\t Response: '%s' (%d)\n", tmp, ntlen);
        free((void *)tmp);
      }

      if(!(lmlen == 0))
      {
        tmp=printmem(lmhash, (unsigned long int)lmlen, 7);
        printf("\t Response: '%s' (%d)\n", tmp, lmlen);
        free((void *)tmp);
      }

    }

    buf=new((unsigned long int)1024);
    memcpy((void *)buf, (const void *)"NTLMSSP\0", (unsigned long int)8);
    *((unsigned int *)(buf + (signed long int)8)) = (unsigned int)3;
    *((unsigned short int *)(buf + (signed long int)12)) = (unsigned short int)lmlen;
    *((unsigned short int *)(buf + (signed long int)14)) = (unsigned short int)lmlen;
    *((unsigned int *)(buf + (signed long int)16)) = (unsigned int)(64 + dlen + ulen + hlen);
    *((unsigned short int *)(buf + (signed long int)20)) = (unsigned short int)ntlen;
    *((unsigned short int *)(buf + (signed long int)22)) = (unsigned short int)ntlen;
    *((unsigned int *)(buf + (signed long int)24)) = (unsigned int)(64 + dlen + ulen + hlen + lmlen);
    *((unsigned short int *)(buf + (signed long int)28)) = (unsigned short int)dlen;
    *((unsigned short int *)(buf + (signed long int)30)) = (unsigned short int)dlen;
    *((unsigned int *)(buf + (signed long int)32)) = (unsigned int)64;
    *((unsigned short int *)(buf + (signed long int)36)) = (unsigned short int)ulen;
    *((unsigned short int *)(buf + (signed long int)38)) = (unsigned short int)ulen;
    *((unsigned int *)(buf + (signed long int)40)) = (unsigned int)(64 + dlen);
    *((unsigned short int *)(buf + (signed long int)44)) = (unsigned short int)hlen;
    *((unsigned short int *)(buf + (signed long int)46)) = (unsigned short int)hlen;
    *((unsigned int *)(buf + (signed long int)48)) = (unsigned int)(64 + dlen + ulen);
    *((unsigned short int *)(buf + (signed long int)52)) = (unsigned short int)0;
    *((unsigned short int *)(buf + (signed long int)54)) = (unsigned short int)0;
    *((unsigned short int *)(buf + (signed long int)56)) = (unsigned short int)(64 + dlen + ulen + hlen + lmlen + ntlen);
    *((unsigned int *)(buf + (signed long int)60)) = *((unsigned int *)(challenge + (signed long int)20));
    memcpy((void *)(char *)(buf + (signed long int)64), (const void *)udomain, (unsigned long int)dlen);
    memcpy((void *)(char *)(buf + (signed long int)64 + (signed long int)dlen), (const void *)uuser, (unsigned long int)ulen);
    memcpy((void *)(char *)(buf + (signed long int)64 + (signed long int)dlen + (signed long int)ulen), (const void *)uhost, (unsigned long int)hlen);
    memcpy((void *)(char *)(buf + (signed long int)64 + (signed long int)dlen + (signed long int)ulen + (signed long int)hlen), (const void *)lmhash, (unsigned long int)lmlen);
    memcpy((void *)(char *)(buf + (signed long int)64 + (signed long int)dlen + (signed long int)ulen + (signed long int)hlen + (signed long int)24), (const void *)nthash, (unsigned long int)ntlen);
    if(!(nthash == ((char *)NULL)))
      free((void *)nthash);

    if(!(lmhash == ((char *)NULL)))
      free((void *)lmhash);

    free((void *)uhost);
    free((void *)uuser);
    free((void *)udomain);
    *dst = buf;
    return 64 + dlen + ulen + hlen + lmlen + ntlen;
  }
}

// ntlm_set_key
// file ntlm.c line 35
static void ntlm_set_key(unsigned char *src, struct anonymous *context)
{
  char key[8l];
  key[(signed long int)0] = (char)src[(signed long int)0];
  key[(signed long int)1] = (char)((signed int)src[(signed long int)0] << 7 & 0xff | (signed int)src[(signed long int)1] >> 1);
  key[(signed long int)2] = (char)((signed int)src[(signed long int)1] << 6 & 0xff | (signed int)src[(signed long int)2] >> 2);
  key[(signed long int)3] = (char)((signed int)src[(signed long int)2] << 5 & 0xff | (signed int)src[(signed long int)3] >> 3);
  key[(signed long int)4] = (char)((signed int)src[(signed long int)3] << 4 & 0xff | (signed int)src[(signed long int)4] >> 4);
  key[(signed long int)5] = (char)((signed int)src[(signed long int)4] << 3 & 0xff | (signed int)src[(signed long int)5] >> 5);
  key[(signed long int)6] = (char)((signed int)src[(signed long int)5] << 2 & 0xff | (signed int)src[(signed long int)6] >> 6);
  key[(signed long int)7] = (char)((signed int)src[(signed long int)6] << 1 & 0xff);
  gl_des_setkey(context, key);
}

// parent_add
// file main.c line 124
signed int parent_add(char *parent, signed int port)
{
  signed int len;
  signed int i;
  char *proxy;
  struct anonymous$3 *aux;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(parent);
  proxy = return_value___strdup$1;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(proxy);
  len = (signed int)return_value_strlen$2;
  unsigned long int tmp_statement_expression$3;
  char __r0;
  char __r1;
  char __r2;
  unsigned long int return_value___builtin_strcspn$4;
  return_value___builtin_strcspn$4=__builtin_strcspn(proxy, ": ");
  tmp_statement_expression$3 = return_value___builtin_strcspn$4;
  i = (signed int)tmp_statement_expression$3;
  signed int tmp_post$5;
  if(!(i == len))
  {
    tmp_post$5 = i;
    i = i + 1;
    proxy[(signed long int)tmp_post$5] = (char)0;
    for( ; !(i >= len); i = i + 1)
      if(!((signed int)proxy[(signed long int)i] == 32))
      {
        if(!((signed int)proxy[(signed long int)i] == 9))
          break;

      }

    if(i >= len)
    {
      free((void *)proxy);
      return 0;
    }

    port=atoi$link2(proxy + (signed long int)i);
  }

  if(port == 0)
  {
    syslog(3, "Invalid proxy specification %s.\n", parent);
    free((void *)proxy);
    myexit(1);
  }

  char *return_value_new$6;
  return_value_new$6=new(sizeof(struct anonymous$3) /*392ul*/ );
  aux = (struct anonymous$3 *)return_value_new$6;
  strlcpy(aux->hostname, proxy, sizeof(char [64l]) /*64ul*/ );
  aux->port = port;
  aux->resolved = 0;
  parent_count = parent_count + 1;
  parent_list=plist_add(parent_list, (unsigned long int)parent_count, (void *)(char *)aux);
  free((void *)proxy);
  return 1;
}

// plist_add
// file utils.c line 71
extern struct plist_s * plist_add(struct plist_s *list, unsigned long int key, void *aux)
{
  struct plist_s *tmp;
  struct plist_s *t = list;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct plist_s) /*24ul*/ );
  tmp = (struct plist_s *)return_value_malloc$1;
  tmp->key = key;
  tmp->aux = aux;
  tmp->next = (struct plist_s *)(void *)0;
  if(list == ((struct plist_s *)NULL))
    return tmp;

  else
  {
    for( ; !(t->next == ((struct plist_s *)NULL)); t = t->next)
      ;
    t->next = tmp;
    return list;
  }
}

// plist_count
// file utils.c line 218
extern signed int plist_count(struct plist_s *list)
{
  struct plist_s *t = list;
  signed int rc = 0;
  for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
    rc = rc + 1;
  return rc;
}

// plist_del
// file utils.c line 94
extern struct plist_s * plist_del(struct plist_s *list, unsigned long int key)
{
  struct plist_s *ot = (struct plist_s *)(void *)0;
  struct plist_s *t = list;
  for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
  {
    if(t->key == key)
      break;

    ot = t;
  }
  if(!(t == ((struct plist_s *)NULL)))
  {
    struct plist_s *tmp = t->next;
    if(!(t->aux == NULL))
      free(t->aux);

    free((void *)t);
    if(ot == ((struct plist_s *)NULL))
      return tmp;

    ot->next = tmp;
  }

  return list;
}

// plist_dump
// file utils.c line 138
extern void plist_dump(struct plist_s *list)
{
  struct plist_s *t = list;
  for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
    printf("List data: %lu => 0x%8p\n", (unsigned long int)t->key, t->aux);
}

// plist_free
// file utils.c line 233
extern struct plist_s * plist_free(struct plist_s *list)
{
  struct plist_s *t = list;
  for( ; !(list == ((struct plist_s *)NULL)); list = t)
  {
    t = list->next;
    if(!(list->aux == NULL))
      free(list->aux);

    free((void *)list);
  }
  return (struct plist_s *)(void *)0;
}

// plist_get
// file utils.c line 151
extern char * plist_get(struct plist_s *list, signed int key)
{
  struct plist_s *t = list;
  for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
    if(t->key == (unsigned long int)key)
      break;

  void *tmp_if_expr$1;
  if(t == ((struct plist_s *)NULL))
    tmp_if_expr$1 = (void *)0;

  else
    tmp_if_expr$1 = t->aux;
  return (char *)tmp_if_expr$1;
}

// plist_in
// file utils.c line 122
extern signed int plist_in(struct plist_s *list, unsigned long int key)
{
  struct plist_s *t = list;
  for( ; !(t == ((struct plist_s *)NULL)); t = t->next)
    if(t->key == key)
      break;

  return (signed int)(t != (struct plist_s *)(void *)0);
}

// plist_pop
// file utils.c line 178
extern signed int plist_pop(struct plist_s **list, void **aux)
{
  struct plist_s *tmp;
  struct plist_s *t;
  signed int id = 0;
  signed int ok = 0;
  void *a = (void *)0;
  _Bool tmp_if_expr$1;
  if(list == ((struct plist_s **)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *list == (struct plist_s *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 0;

  else
  {
    t = *list;
    while(ok == 0 && !(t == ((struct plist_s *)NULL)))
    {
      id = (signed int)t->key;
      a = t->aux;
      tmp = t->next;
      signed int return_value_so_closed$2;
      return_value_so_closed$2=so_closed(id);
      if(!(return_value_so_closed$2 == 0))
      {
        close(id);
        if(!(t->aux == NULL))
          free(t->aux);

      }

      else
        ok = 1;
      free((void *)t);
      t = tmp;
    }
    *list = t;
    if(!(ok == 0))
    {
      if(!(aux == ((void **)NULL)))
        *aux = a;

      return id;
    }

    else
      return 0;
  }
}

// prepare_http_connect
// file forward.c line 722
extern signed int prepare_http_connect(signed int sd, struct auth_s *credentials, const char *thost)
{
  struct rr_data_s *data1;
  struct rr_data_s *data2;
  signed int rc = 0;
  struct hlist_s *tl;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(thost == ((const char *)NULL) || sd == 0)
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strlen$1=strlen(thost);
    tmp_if_expr$2 = !(return_value_strlen$1 != 0ul) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$2)
    return 0;

  else
  {
    data1=new_rr_data();
    data2=new_rr_data();
    data1->req = 1;
    char *return_value___strdup$3;
    return_value___strdup$3=__strdup("CONNECT");
    data1->method = return_value___strdup$3;
    char *return_value___strdup$4;
    return_value___strdup$4=__strdup(thost);
    data1->url = return_value___strdup$4;
    char *return_value___strdup$5;
    return_value___strdup$5=__strdup("HTTP/1.1");
    data1->http = return_value___strdup$5;
    data1->headers=hlist_mod(data1->headers, "Proxy-Connection", "keep-alive", 1);
    tl = header_list;
    for( ; !(tl == ((struct hlist_s *)NULL)); tl = tl->next)
      data1->headers=hlist_mod(data1->headers, tl->key, tl->value, 1);
    if(!(debug == 0))
      printf("Starting authentication...\n");

    signed int return_value_proxy_authenticate$8;
    return_value_proxy_authenticate$8=proxy_authenticate(&sd, data1, data2, credentials);
    if(!(return_value_proxy_authenticate$8 == 0))
    {
      if(data2->code == 407)
      {
        if(!(debug == 0))
        {
          printf("Sending real request:\n");
          hlist_dump(data1->headers);
        }

        signed int return_value_headers_send$6;
        return_value_headers_send$6=headers_send(sd, data1);
        if(return_value_headers_send$6 == 0)
        {
          printf("Sending request failed!\n");
          goto bailout;
        }

        if(!(debug == 0))
          printf("\nReading real response:\n");

        reset_rr_data(data2);
        signed int return_value_headers_recv$7;
        return_value_headers_recv$7=headers_recv(sd, data2);
        if(return_value_headers_recv$7 == 0)
        {
          if(!(debug == 0))
            printf("Reading response failed!\n");

          goto bailout;
        }

        if(!(debug == 0))
          hlist_dump(data2->headers);

      }

      if(data2->code == 200)
      {
        if(!(debug == 0))
          printf("Ok CONNECT response. Tunneling...\n");

        rc = 1;
      }

      else
        if(data2->code == 407)
          syslog(3, "Authentication for tunnel %s failed!\n", thost);

        else
          syslog(3, "Request for CONNECT to %s denied!\n", thost);
    }

    else
      syslog(3, "Tunnel requests failed!\n");

  bailout:
    ;
    free_rr_data(data1);
    free_rr_data(data2);
    return rc;
  }
}

// printmem
// file utils.c line 790
extern char * printmem(char *src, unsigned long int len, signed int bitwidth)
{
  char *tmp;
  signed int i;
  tmp=new((unsigned long int)2 * len + (unsigned long int)1);
  i = 0;
  for( ; !((unsigned long int)i >= len); i = i + 1)
  {
    tmp[(signed long int)(i * 2)] = hextab[(signed long int)(((signed int)(unsigned char)src[(signed long int)i] ^ (signed int)(unsigned char)(7 - bitwidth)) >> 4)];
    tmp[(signed long int)(i * 2 + 1)] = hextab[(signed long int)(((signed int)src[(signed long int)i] ^ (signed int)(unsigned char)(7 - bitwidth)) & 0x0F)];
  }
  return tmp;
}

// printuc
// file ntlm.c line 271
static char * printuc(char *src, signed int len)
{
  char *tmp;
  signed int i;
  tmp=new((unsigned long int)((len + 1) / 2 + 1));
  i = 0;
  for( ; !(i >= len / 2); i = i + 1)
    tmp[(signed long int)i] = src[(signed long int)(i * 2)];
  return tmp;
}

// proxy_authenticate
// file forward.c line 135
extern signed int proxy_authenticate(signed int *sd, struct rr_data_s *request, struct rr_data_s *response, struct auth_s *credentials)
{
  char *tmp;
  char *buf;
  char *challenge;
  struct rr_data_s *auth;
  signed int len;
  signed int pretend407 = 0;
  signed int rc = 0;
  buf=new((unsigned long int)4096);
  strcpy(buf, "NTLM ");
  len=ntlm_request(&tmp, credentials);
  if(!(len == 0))
  {
    to_base64((unsigned char *)(buf + (signed long int)5), (unsigned char *)(tmp + (signed long int)0), (unsigned long int)len, (unsigned long int)(4096 - 5));
    free((void *)tmp);
  }

  auth=dup_rr_data(request);
  auth->headers=hlist_mod(auth->headers, "Proxy-Authorization", buf, 1);
  _Bool tmp_if_expr$1;
  if(!(request == ((struct rr_data_s *)NULL)))
    tmp_if_expr$1 = request->req != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  if(tmp_if_expr$1)
  {
    return_value_strcasecmp$2=strcasecmp("HEAD", request->method);
    tmp_if_expr$3 = !(return_value_strcasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  _Bool tmp_if_expr$5;
  signed long long int return_value_http_has_body$4;
  if(tmp_if_expr$3)
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    return_value_http_has_body$4=http_has_body(request, response);
    tmp_if_expr$5 = return_value_http_has_body$4 != (signed long int)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$5)
  {
    if(!(debug == 0))
      printf("Will send just a probe request.\n");

    pretend407 = 1;
  }

  signed int return_value_strcasecmp$7;
  if(!(request == ((struct rr_data_s *)NULL)))
  {
    if(!(request->req == 0))
    {
      return_value_strcasecmp$7=strcasecmp("HEAD", request->method);
      if(return_value_strcasecmp$7 == 0)
      {
        free((void *)auth->method);
        char *return_value___strdup$6;
        return_value___strdup$6=__strdup("GET");
        auth->method = return_value___strdup$6;
      }

    }

  }

  auth->headers=hlist_mod(auth->headers, "Content-Length", "0", 1);
  auth->headers=hlist_del(auth->headers, "Transfer-Encoding");
  if(!(debug == 0))
  {
    printf("\nSending PROXY auth request...\n");
    hlist_dump(auth->headers);
  }

  signed int return_value_headers_send$8;
  return_value_headers_send$8=headers_send(*sd, auth);
  signed int return_value_headers_recv$9;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$14;
  signed int return_value_strcasecmp$13;
  signed int return_value_so_closed$16;
  if(!(return_value_headers_send$8 == 0))
  {
    if(!(debug == 0))
      printf("\nReading PROXY auth response...\n");

    if(!(response == ((struct rr_data_s *)NULL)))
    {
      free_rr_data(auth);
      auth = response;
    }

    reset_rr_data(auth);
    return_value_headers_recv$9=headers_recv(*sd, auth);
    if(!(return_value_headers_recv$9 == 0))
    {
      if(!(debug == 0))
        hlist_dump(auth->headers);

      rc = 1;
      if(auth->code == 407)
      {
        signed int return_value_http_body_drop$10;
        return_value_http_body_drop$10=http_body_drop(*sd, auth);
        if(return_value_http_body_drop$10 == 0)
        {
          rc = 0;
          goto bailout;
        }

        tmp=hlist_get(auth->headers, "Proxy-Authenticate");
        if(!(tmp == ((char *)NULL)))
        {
          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(tmp);
          challenge=new(return_value_strlen$11 + (unsigned long int)5 + (unsigned long int)1);
          len=from_base64(challenge, tmp + (signed long int)5);
          if(len >= 25)
          {
            len=ntlm_response(&tmp, challenge, len, credentials);
            if(len >= 1)
            {
              strcpy(buf, "NTLM ");
              to_base64((unsigned char *)(buf + (signed long int)5), (unsigned char *)(tmp + (signed long int)0), (unsigned long int)len, (unsigned long int)(4096 - 5));
              request->headers=hlist_mod(request->headers, "Proxy-Authorization", buf, 1);
              free((void *)tmp);
            }

            else
            {
              syslog(3, "No target info block. Cannot do NTLMv2!\n");
              free((void *)challenge);
              goto bailout;
            }
          }

          else
          {
            syslog(3, "Proxy returning invalid challenge!\n");
            free((void *)challenge);
            goto bailout;
          }
          free((void *)challenge);
        }

        else
          syslog(4, "No Proxy-Authenticate, NTLM not supported?\n");
      }

      else
        if(!(pretend407 == 0))
        {
          if(!(debug == 0))
          {
            if(!(request == ((struct rr_data_s *)NULL)))
              tmp_if_expr$12 = request->req != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$12 = (_Bool)0;
            if(tmp_if_expr$12)
            {
              return_value_strcasecmp$13=strcasecmp("HEAD", request->method);
              tmp_if_expr$14 = !(return_value_strcasecmp$13 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$14 = (_Bool)0;
            printf("Client %s - forcing second request.\n", tmp_if_expr$14 ? "sent HEAD" : "has a body");
          }

          if(!(response == ((struct rr_data_s *)NULL)))
            response->code = 407;

          signed int return_value_http_body_drop$15;
          return_value_http_body_drop$15=http_body_drop(*sd, auth);
          if(return_value_http_body_drop$15 == 0)
          {
            rc = 0;
            goto bailout;
          }

        }

      return_value_so_closed$16=so_closed(*sd);
      if(!(return_value_so_closed$16 == 0))
      {
        if(!(debug == 0))
          printf("Proxy closed on us, reconnect.\n");

        close(*sd);
        *sd=proxy_connect(credentials);
        if(!(*sd >= 0))
          rc = 0;

      }

    }

  }


bailout:
  ;
  if(response == ((struct rr_data_s *)NULL))
    free_rr_data(auth);

  free((void *)buf);
  return rc;
}

// proxy_connect
// file forward.c line 52
extern signed int proxy_connect(struct auth_s *credentials)
{
  struct anonymous$3 *aux;
  signed int i;
  signed int prev;
  struct plist_s *list;
  struct plist_s *tmp;
  signed int loop = 0;
  prev = parent_curr;
  pthread_mutex_lock(&parent_mtx);
  if(parent_curr == 0)
  {
    parent_curr = parent_curr + 1;
    char *return_value_plist_get$1;
    return_value_plist_get$1=plist_get(parent_list, parent_curr);
    aux = (struct anonymous$3 *)return_value_plist_get$1;
    syslog(6, "Using proxy %s:%d\n", (const void *)aux->hostname, aux->port);
  }

  pthread_mutex_unlock(&parent_mtx);
  _Bool tmp_if_expr$2;
  do
  {
    pthread_mutex_lock(&parent_mtx);
    char *return_value_plist_get$3;
    return_value_plist_get$3=plist_get(parent_list, parent_curr);
    aux = (struct anonymous$3 *)return_value_plist_get$3;
    pthread_mutex_unlock(&parent_mtx);
    if(aux->resolved == 0)
    {
      if(!(debug == 0))
        syslog(6, "Resolving proxy %s...\n", (const void *)aux->hostname);

      signed int return_value_so_resolv$4;
      return_value_so_resolv$4=so_resolv(&aux->host, aux->hostname);
      if(!(return_value_so_resolv$4 == 0))
        aux->resolved = 1;

      else
        syslog(3, "Cannot resolve proxy %s\n", (const void *)aux->hostname);
    }

    i = 0;
    if(!(aux->resolved == 0))
      i=so_connect(aux->host, aux->port);

    if(!(i >= 1))
    {
      pthread_mutex_lock(&parent_mtx);
      if(parent_curr >= parent_count)
        parent_curr = 0;

      parent_curr = parent_curr + 1;
      char *return_value_plist_get$5;
      return_value_plist_get$5=plist_get(parent_list, parent_curr);
      aux = (struct anonymous$3 *)return_value_plist_get$5;
      pthread_mutex_unlock(&parent_mtx);
      syslog(3, "Proxy connect failed, will try %s:%d\n", (const void *)aux->hostname, aux->port);
    }

    if(!(i >= 1))
    {
      loop = loop + 1;
      tmp_if_expr$2 = loop < parent_count ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(loop >= parent_count && !(i >= 1))
    syslog(3, "No proxy on the list works. You lose.\n");

  if(!(prev == parent_curr))
  {
    pthread_mutex_lock(&connection_mtx);
    list = connection_list;
    for( ; !(list == ((struct plist_s *)NULL)); list = tmp)
    {
      tmp = list->next;
      close((signed int)list->key);
    }
    plist_free(connection_list);
    pthread_mutex_unlock(&connection_mtx);
  }

  if(i >= 1 && !(credentials == ((struct auth_s *)NULL)))
    copy_auth(credentials, g_creds, (signed int)!(ntlmbasic != 0));

  return i;
}

// proxy_thread
// file main.c line 312
void * proxy_thread(void *thread_data)
{
  struct rr_data_s *request;
  struct rr_data_s *ret;
  signed int keep_alive;
  signed int cd = ((struct thread_arg_s *)thread_data)->fd;
  do
  {
    ret = (struct rr_data_s *)(void *)0;
    keep_alive = 0;
    if(!(debug == 0))
    {
      printf("\n******* Round 1 C: %d *******\n", cd);
      printf("Reading headers (%d)...\n", cd);
    }

    request=new_rr_data();
    signed int return_value_headers_recv$1;
    return_value_headers_recv$1=headers_recv(cd, request);
    if(return_value_headers_recv$1 == 0)
    {
      free_rr_data(request);
      break;
    }

    while((_Bool)1)
    {
      if(!(ret == ((struct rr_data_s *)NULL)))
      {
        free_rr_data(request);
        request = ret;
      }

      keep_alive=hlist_subcmp(request->headers, "Proxy-Connection", "keep-alive");
      signed int return_value_noproxy_match$2;
      return_value_noproxy_match$2=noproxy_match(request->hostname);
      if(!(return_value_noproxy_match$2 == 0))
        ret=direct_request(thread_data, request);

      else
        ret=forward_request(thread_data, request);
      if(!(debug == 0))
        printf("proxy_thread: request rc = %p\n", (void *)ret);

      if(ret == ((struct rr_data_s *)NULL) || ret == (struct rr_data_s *)-1)
        break;

    }
    free_rr_data(request);
  }
  while(serialize == 0 && !(ret == (struct rr_data_s *)-1) && !(keep_alive == 0));
  if(serialize == 0)
  {
    pthread_mutex_lock(&threads_mtx);
    unsigned long int return_value_pthread_self$3;
    return_value_pthread_self$3=pthread_self();
    threads_list=plist_add(threads_list, (unsigned long int)return_value_pthread_self$3, (void *)0);
    pthread_mutex_unlock(&threads_mtx);
  }

  free(thread_data);
  close(cd);
  return (void *)0;
}

// reset_rr_data
// file utils.c line 577
extern struct rr_data_s * reset_rr_data(struct rr_data_s *data)
{
  if(data == ((struct rr_data_s *)NULL))
    return (struct rr_data_s *)(void *)0;

  else
  {
    data->req = 0;
    data->code = 0;
    data->skip_http = 0;
    data->body_len = 0;
    data->empty = 1;
    data->port = 0;
    if(!(data->headers == ((struct hlist_s *)NULL)))
      hlist_free(data->headers);

    if(!(data->method == ((char *)NULL)))
      free((void *)data->method);

    if(!(data->url == ((char *)NULL)))
      free((void *)data->url);

    if(!(data->rel_url == ((char *)NULL)))
      free((void *)data->rel_url);

    if(!(data->hostname == ((char *)NULL)))
      free((void *)data->hostname);

    if(!(data->http == ((char *)NULL)))
      free((void *)data->http);

    if(!(data->msg == ((char *)NULL)))
      free((void *)data->msg);

    if(!(data->body == ((char *)NULL)))
      free((void *)data->body);

    data->headers = (struct hlist_s *)(void *)0;
    data->method = (char *)(void *)0;
    data->url = (char *)(void *)0;
    data->rel_url = (char *)(void *)0;
    data->hostname = (char *)(void *)0;
    data->http = (char *)(void *)0;
    data->msg = (char *)(void *)0;
    data->body = (char *)(void *)0;
    data->errmsg = (char *)(void *)0;
    return data;
  }
}

// scanmem
// file utils.c line 803
extern char * scanmem(char *src, signed int bitwidth)
{
  signed int h;
  signed int l;
  signed int i;
  signed int bytes;
  char *tmp;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(src);
  if(!(return_value_strlen$1 % 2ul == 0ul))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(src);
    bytes = (signed int)(return_value_strlen$2 / (unsigned long int)2);
    tmp=new((unsigned long int)(bytes + 1));
    i = 0;
    for( ; !(i >= bytes); i = i + 1)
    {
      h = hexindex[(signed long int)(signed int)src[(signed long int)(i * 2)]];
      l = hexindex[(signed long int)(signed int)src[(signed long int)(i * 2 + 1)]];
      if(!(h >= 0) || !(l >= 0))
      {
        free((void *)tmp);
        return (char *)(void *)0;
      }

      tmp[(signed long int)i] = (char)((h << 4) + l ^ (signed int)(unsigned char)(7 - bitwidth));
    }
    tmp[(signed long int)i] = (char)0;
    return tmp;
  }
}

// scanner_hook
// file scanner.h line 39
extern signed int scanner_hook(struct rr_data_s *request, struct rr_data_s *response, struct auth_s *credentials, signed int cd, signed int *sd, signed long int maxKBs)
{
  char *buf;
  char *line;
  char *pos;
  char *tmp;
  char *pat;
  char *post;
  char *isaid;
  char *uurl;
  signed int bsize;
  signed int lsize;
  signed int size;
  signed int len;
  signed int i;
  signed int w;
  signed int nc;
  struct rr_data_s *newreq;
  struct rr_data_s *newres;
  struct plist_s *list;
  signed int ok = 1;
  signed int done = 0;
  signed int headers_initiated = 0;
  signed long int c;
  signed long int progress = (signed long int)0;
  signed long int filesize = (signed long int)0;
  _Bool tmp_if_expr$1;
  if(request->req == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = response->code != 200 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  signed long long int return_value_http_has_body$2;
  if(tmp_if_expr$1)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_http_has_body$2=http_has_body(request, response);
    tmp_if_expr$3 = return_value_http_has_body$2 != (signed long int)-1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$5;
  signed int return_value_hlist_subcmp$4;
  if(tmp_if_expr$3)
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    return_value_hlist_subcmp$4=hlist_subcmp(response->headers, "Transfer-Encoding", "chunked");
    tmp_if_expr$5 = return_value_hlist_subcmp$4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$7;
  signed int return_value_hlist_subcmp$6;
  if(tmp_if_expr$5)
    tmp_if_expr$7 = (_Bool)1;

  else
  {
    return_value_hlist_subcmp$6=hlist_subcmp(response->headers, "Proxy-Connection", "close");
    tmp_if_expr$7 = !(return_value_hlist_subcmp$6 != 0) ? (_Bool)1 : (_Bool)0;
  }
  char *return_value___builtin_strchr$39;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$21;
  const unsigned short int **return_value___ctype_b_loc$20;
  _Bool tmp_if_expr$25;
  _Bool tmp_if_expr$23;
  const unsigned short int **return_value___ctype_b_loc$22;
  _Bool tmp_if_expr$24;
  char *return_value_strstr$38;
  char *return_value___builtin_strchr$37;
  _Bool tmp_if_expr$29;
  _Bool tmp_if_expr$31;
  signed int return_value_headers_send$30;
  _Bool tmp_if_expr$34;
  unsigned long int return_value_strlen$32;
  signed long int return_value_write$33;
  _Bool tmp_if_expr$36;
  signed int return_value_headers_recv$35;
  if(tmp_if_expr$7)
    return 0x0001 | 0x0002;

  else
  {
    tmp=hlist_get(request->headers, "User-Agent");
    if(!(tmp == ((char *)NULL)))
    {
      char *return_value___strdup$8;
      return_value___strdup$8=__strdup(tmp);
      tmp=lowercase(return_value___strdup$8);
      list = scanner_agent_list;
      while(!(list == ((struct plist_s *)NULL)))
      {
        char *return_value___strdup$9;
        return_value___strdup$9=__strdup((const char *)list->aux);
        pat=lowercase(return_value___strdup$9);
        if(!(debug == 0))
          printf("scanner_hook: matching U-A header (%s) to %s\n", tmp, pat);

        signed int return_value_fnmatch$10;
        return_value_fnmatch$10=fnmatch(pat, tmp, 0);
        if(return_value_fnmatch$10 == 0)
        {
          if(!(debug == 0))
            printf("scanner_hook: positive match!\n");

          maxKBs = (signed long int)0;
          free((void *)pat);
          break;
        }

        free((void *)pat);
        list = list->next;
      }
      free((void *)tmp);
    }

    bsize = 4096;
    buf=new((unsigned long int)bsize);
    len = 0;
    do
    {
      signed long int return_value_read$11;
      return_value_read$11=read(*sd, (void *)(buf + (signed long int)len), (unsigned long int)((4096 - len) - 1));
      size = (signed int)return_value_read$11;
      if(!(debug == 0))
        printf("scanner_hook: read %d of %d\n", size, 4096 - len);

      if(size >= 1)
        len = len + size;

    }
    while(size >= 1 && !(len >= 4096));
    char *return_value_strstr$40;
    return_value_strstr$40=strstr(buf, "<title>Downloading status</title>");
    if(!(return_value_strstr$40 == ((char *)NULL)))
    {
      pos=strstr(buf, "ISAServerUniqueID=");
      if(!(pos == ((char *)NULL)))
      {
        return_value___builtin_strchr$39=__builtin_strchr(pos, 34);
        pos = return_value___builtin_strchr$39;
        if(!(pos == ((char *)NULL)))
        {
          pos = pos + 1l;
          unsigned long int return_value_strlen$12;
          return_value_strlen$12=strlen(pos);
          c = (signed long int)return_value_strlen$12;
          i = 0;
          do
          {
            if(!((signed long int)i >= c))
              tmp_if_expr$13 = (signed int)pos[(signed long int)i] != 34 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$13 = (_Bool)0;
            if(!tmp_if_expr$13)
              break;

            i = i + 1;
          }
          while((_Bool)1);
          if((signed int)pos[(signed long int)i] == 34)
          {
            isaid=substr(pos, 0, i);
            if(!(debug == 0))
              printf("scanner_hook: ISA id = %s\n", isaid);

            lsize = 4096;
            line=new((unsigned long int)lsize);
            do
            {
              i=so_recvln(*sd, &line, &lsize);
              unsigned long int return_value_strlen$14;
              return_value_strlen$14=strlen(line);
              c = (signed long int)return_value_strlen$14;
              if(c + (signed long int)len >= (signed long int)bsize)
              {
                bsize = bsize * 2;
                void *return_value_realloc$15;
                return_value_realloc$15=realloc((void *)buf, (unsigned long int)bsize);
                tmp = (char *)return_value_realloc$15;
                if(tmp == ((char *)NULL))
                  break;

                else
                  buf = tmp;
              }

              strcat(buf, line);
              len = len + (signed int)c;
              if(i >= 0)
              {
                pos=strstr(line, "UpdatePage(");
                if(!(pos == ((char *)NULL)))
                {
                  return_value___ctype_b_loc$20=__ctype_b_loc();
                  tmp_if_expr$21 = ((signed int)(*return_value___ctype_b_loc$20)[(signed long int)(signed int)pos[(signed long int)11]] & (signed int)(unsigned short int)2048) != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$21 = (_Bool)0;
                if(tmp_if_expr$21)
                  tmp_if_expr$25 = (_Bool)1;

                else
                {
                  pos=strstr(line, "DownloadFinished(");
                  if(!(pos == ((char *)NULL)))
                  {
                    return_value___ctype_b_loc$22=__ctype_b_loc();
                    tmp_if_expr$23 = ((signed int)(*return_value___ctype_b_loc$22)[(signed long int)(signed int)pos[(signed long int)17]] & (signed int)(unsigned short int)2048) != 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$23 = (_Bool)0;
                  if(tmp_if_expr$23)
                  {
                    done = 1;
                    tmp_if_expr$24 = done != 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$24 = (_Bool)0;
                  tmp_if_expr$25 = tmp_if_expr$24 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$25)
                {
                  if(!(debug == 0))
                    printf("scanner_hook: %s", line);

                  pos=strstr(line, "To be downloaded");
                  if(!(pos == ((char *)NULL)))
                  {
                    filesize=atol(pos + (signed long int)16);
                    if(!(debug == 0))
                    {
                      if(filesize >= 1l)
                        printf("scanner_hook: file size detected: %ld KiBs (max: %ld)\n", filesize / (signed long int)1024, maxKBs);

                      else
                      {
                        printf("scanner_hook: file size unknown -- quitting\n");
                        break;
                      }
                    }

                    if(!(maxKBs == 0l) && (maxKBs == 1l || !(maxKBs >= filesize / 1024l)))
                      break;

                    headers_initiated = 1;
                    tmp=new((unsigned long int)50);
                    snprintf(tmp, (unsigned long int)50, "%s 200 OK\r\n", request->http);
                    unsigned long int return_value_strlen$16;
                    return_value_strlen$16=strlen(tmp);
                    signed long int return_value_write$17;
                    return_value_write$17=write(cd, (const void *)tmp, return_value_strlen$16);
                    w = (signed int)return_value_write$17;
                    free((void *)tmp);
                  }

                  if(headers_initiated == 0)
                  {
                    if(!(debug == 0))
                      printf("scanner_hook: Giving up, \"To be downloaded\" line not found!\n");

                    break;
                  }

                  if(done == 0)
                  {
                    tmp=new((unsigned long int)50);
                    progress=atol(line + (signed long int)12);
                    snprintf(tmp, (unsigned long int)50, "ISA-Scanner: %ld of %ld\r\n", progress, filesize);
                    unsigned long int return_value_strlen$18;
                    return_value_strlen$18=strlen(tmp);
                    signed long int return_value_write$19;
                    return_value_write$19=write(cd, (const void *)tmp, return_value_strlen$18);
                    w = (signed int)return_value_write$19;
                    free((void *)tmp);
                  }

                  if(filesize == 0l && !(maxKBs == 0l) && !(maxKBs == 1l) && !(maxKBs >= progress / 1024l))
                    break;

                }

              }

            }
            while(done == 0 && i >= 1);
            if(i >= 0 && !(done == 0))
            {
              return_value_strstr$38=strstr(line, "\",\"");
              pos = return_value_strstr$38 + (signed long int)3;
              if(!(pos == ((char *)NULL)))
              {
                return_value___builtin_strchr$37=__builtin_strchr(pos, 34);
                c = return_value___builtin_strchr$37 - pos;
                if(c >= 1l)
                {
                  tmp=substr(pos, 0, (signed int)c);
                  pos=urlencode(tmp);
                  free((void *)tmp);
                  uurl=urlencode(request->url);
                  post=new((unsigned long int)4096);
                  snprintf(post, (unsigned long int)(4096 - 1), "%surl=%s&%sSaveToDisk=YES&%sOrig=%s", isaid, pos, isaid, isaid, uurl);
                  if(!(debug == 0))
                    printf("scanner_hook: Getting file with URL data = %s\n", request->url);

                  tmp=new((unsigned long int)50);
                  unsigned long int return_value_strlen$26;
                  return_value_strlen$26=strlen(post);
                  snprintf(tmp, (unsigned long int)50, "%d", (signed int)return_value_strlen$26);
                  newres=new_rr_data();
                  newreq=dup_rr_data(request);
                  free((void *)newreq->method);
                  char *return_value___strdup$27;
                  return_value___strdup$27=__strdup("POST");
                  newreq->method = return_value___strdup$27;
                  hlist_mod(newreq->headers, "Referer", request->url, 1);
                  hlist_mod(newreq->headers, "Content-Type", "application/x-www-form-urlencoded", 1);
                  hlist_mod(newreq->headers, "Content-Length", tmp, 1);
                  free((void *)tmp);
                  nc=proxy_connect(credentials);
                  signed int return_value_proxy_authenticate$28;
                  return_value_proxy_authenticate$28=proxy_authenticate(&nc, newreq, newres, credentials);
                  c = (signed long int)return_value_proxy_authenticate$28;
                  if(!(c == 0l))
                    tmp_if_expr$29 = newres->code == 407 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$29 = (_Bool)0;
                  if(tmp_if_expr$29)
                  {
                    if(!(debug == 0))
                      printf("scanner_hook: Authentication OK, getting the file...\n");

                  }

                  else
                  {
                    if(!(debug == 0))
                      printf("scanner_hook: Authentication failed or refused!\n");

                    close(nc);
                    nc = 0;
                  }
                  reset_rr_data(newres);
                  if(!(nc == 0))
                  {
                    return_value_headers_send$30=headers_send(nc, newreq);
                    tmp_if_expr$31 = return_value_headers_send$30 != 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$31 = (_Bool)0;
                  if(tmp_if_expr$31)
                  {
                    return_value_strlen$32=strlen(post);
                    return_value_write$33=write(nc, (const void *)post, return_value_strlen$32);
                    tmp_if_expr$34 = return_value_write$33 != 0l ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$34 = (_Bool)0;
                  if(tmp_if_expr$34)
                  {
                    return_value_headers_recv$35=headers_recv(nc, newres);
                    tmp_if_expr$36 = return_value_headers_recv$35 != 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$36 = (_Bool)0;
                  if(tmp_if_expr$36)
                  {
                    if(!(debug == 0))
                      hlist_dump(newres->headers);

                    if(!(filesize == 0l) || !(progress == 0l))
                    {
                      tmp=new((unsigned long int)20);
                      snprintf(tmp, (unsigned long int)20, "%ld", filesize != 0l ? filesize : progress);
                      newres->headers=hlist_mod(newres->headers, "Content-Length", tmp, 1);
                    }

                    newres->skip_http = headers_initiated;
                    copy_rr_data(response, newres);
                    close(*sd);
                    *sd = nc;
                    len = 0;
                    ok = 0x0001 | 0x0002;
                  }

                  else
                    if(!(debug == 0))
                      printf("scanner_hook: New request failed\n");

                  free((void *)newreq);
                  free((void *)newres);
                  free((void *)post);
                  free((void *)uurl);
                }

              }

            }

            free((void *)line);
            free((void *)isaid);
          }

          else
            if(!(debug == 0))
              printf("scanner_hook: ISA id not found\n");

        }

      }

    }

    if(!(len == 0))
    {
      if(!(debug == 0))
      {
        printf("scanner_hook: flushing %d original bytes\n", len);
        hlist_dump(response->headers);
      }

      signed int return_value_headers_send$41;
      return_value_headers_send$41=headers_send(cd, response);
      if(return_value_headers_send$41 == 0)
      {
        if(!(debug == 0))
          printf("scanner_hook: failed to send headers\n");

        free((void *)buf);
        return 0x8000;
      }

      signed long int return_value_write$42;
      return_value_write$42=write(cd, (const void *)buf, (unsigned long int)len);
      size = (signed int)return_value_write$42;
      if(size >= 1)
        ok = 0x0002;

      else
        ok = 0x8000;
    }

    if(!(debug == 0))
      printf("scanner_hook: ending with %d\n", ok);

    free((void *)buf);
    return ok;
  }
}

// sighandler
// file main.c line 111
void sighandler(signed int p)
{
  if(quit == 0)
    syslog(6, "Signal %d received, issuing clean shutdown\n", p);

  else
    syslog(6, "Signal %d received, forcing shutdown\n", p);
  signed int tmp_post$1 = quit;
  quit = quit + 1;
  if(!(debug == 0) || !(tmp_post$1 == 0))
    quit = quit + 1;

}

// so_closed
// file socket.c line 231
signed int so_closed(signed int fd)
{
  signed int i;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  if(fd == -1)
    return 1;

  else
  {
    i=so_recvtest(fd);
    if(i == 0)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      if(i == -1)
      {
        return_value___errno_location$1=__errno_location();
        tmp_if_expr$2 = *return_value___errno_location$1 != 11 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
      if(tmp_if_expr$2)
      {
        return_value___errno_location$3=__errno_location();
        tmp_if_expr$4 = *return_value___errno_location$3 != 2 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      tmp_if_expr$5 = tmp_if_expr$4 ? (_Bool)1 : (_Bool)0;
    }
    return (signed int)tmp_if_expr$5;
  }
}

// so_connect
// file socket.c line 95
signed int so_connect(struct in_addr host, signed int port)
{
  signed int flags;
  signed int fd;
  signed int rc;
  struct sockaddr_in saddr;
  fd=socket(2, 1, 0);
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(fd >= 0))
  {
    if(!(debug == 0))
    {
      return_value___errno_location$1=__errno_location();
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      printf("so_connect: create: %s\n", return_value_strerror$2);
    }

    return -1;
  }

  memset((void *)&saddr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  saddr.sin_family = (unsigned short int)2;
  unsigned short int tmp_statement_expression$3;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)port;
  asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression$3 = __v;
  saddr.sin_port = tmp_statement_expression$3;
  saddr.sin_addr = host;
  flags=fcntl(fd, 3, 0);
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  if(!(flags >= 0))
  {
    if(!(debug == 0))
    {
      return_value___errno_location$4=__errno_location();
      return_value_strerror$5=strerror(*return_value___errno_location$4);
      printf("so_connect: get flags: %s\n", return_value_strerror$5);
    }

    close(fd);
    return -1;
  }

  rc=connect(fd, (struct sockaddr *)&saddr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  if(!(rc >= 0))
  {
    if(!(debug == 0))
    {
      return_value___errno_location$6=__errno_location();
      return_value_strerror$7=strerror(*return_value___errno_location$6);
      printf("so_connect: %s\n", return_value_strerror$7);
    }

    close(fd);
    return -1;
  }

  signed int return_value_fcntl$10;
  return_value_fcntl$10=fcntl(fd, 4, flags & ~04000);
  signed int *return_value___errno_location$8;
  char *return_value_strerror$9;
  if(!(return_value_fcntl$10 >= 0))
  {
    if(!(debug == 0))
    {
      return_value___errno_location$8=__errno_location();
      return_value_strerror$9=strerror(*return_value___errno_location$8);
      printf("so_connect: set blocking: %s\n", return_value_strerror$9);
    }

    close(fd);
    return -1;
  }

  return fd;
}

// so_dataready
// file socket.c line 223
signed int so_dataready(signed int fd)
{
  signed int return_value_so_recvtest$1;
  return_value_so_recvtest$1=so_recvtest(fd);
  return (signed int)(return_value_so_recvtest$1 > 0);
}

// so_listen
// file socket.c line 164
signed int so_listen(signed int port, struct in_addr source)
{
  struct sockaddr_in saddr;
  signed int fd;
  unsigned int clen;
  fd=socket(2, 1, 0);
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(fd >= 0))
  {
    if(!(debug == 0))
    {
      return_value___errno_location$1=__errno_location();
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      printf("so_listen: new socket: %s\n", return_value_strerror$2);
    }

    close(fd);
    return -1;
  }

  clen = (unsigned int)1;
  setsockopt(fd, 1, 2, (const void *)&clen, (unsigned int)sizeof(unsigned int) /*4ul*/ );
  memset((void *)&saddr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  saddr.sin_family = (unsigned short int)2;
  unsigned short int tmp_statement_expression$3;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)port;
  asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression$3 = __v;
  saddr.sin_port = tmp_statement_expression$3;
  saddr.sin_addr.s_addr = source.s_addr;
  signed int return_value_bind$6;
  return_value_bind$6=bind(fd, (struct sockaddr *)&saddr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
  if(!(return_value_bind$6 == 0))
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    char *return_value_strerror$5;
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    syslog(3, "Cannot bind port %d: %s!\n", port, return_value_strerror$5);
    close(fd);
    return -1;
  }

  signed int return_value_listen$7;
  return_value_listen$7=listen(fd, 5);
  if(!(return_value_listen$7 == 0))
  {
    close(fd);
    return -1;
  }

  else
    return fd;
}

// so_recvln
// file socket.c line 252
signed int so_recvln(signed int fd, char **buf, signed int *size)
{
  signed int len = 0;
  signed int r = 1;
  char c = (char)0;
  char *tmp;
  signed int tmp_post$2;
  while(!(len >= *size + -1))
  {
    if((signed int)c == 10)
      break;

    signed long int return_value_read$1;
    return_value_read$1=read(fd, (void *)&c, (unsigned long int)1);
    r = (signed int)return_value_read$1;
    if(!(r >= 1))
      break;

    tmp_post$2 = len;
    len = len + 1;
    (*buf)[(signed long int)tmp_post$2] = c;
    if(len == *size + -1)
    {
      if(!((signed int)c == 10))
      {
        if(!(debug == 0))
          printf("so_recvln(%d): realloc %d\n", fd, *size * 2);

        *size = *size * 2;
        void *return_value_realloc$3;
        return_value_realloc$3=realloc((void *)*buf, (unsigned long int)*size);
        tmp = (char *)return_value_realloc$3;
        if(tmp == ((char *)NULL))
          return -1;

        else
          *buf = tmp;
      }

    }

  }
  (*buf)[(signed long int)len] = (char)0;
  return r;
}

// so_recvtest
// file socket.c line 203
signed int so_recvtest(signed int fd)
{
  char buf;
  signed int i;
  signed long int return_value_recv$1;
  return_value_recv$1=recv(fd, (void *)&buf, (unsigned long int)1, 64 | 2);
  i = (signed int)return_value_recv$1;
  return i;
}

// so_resolv
// file socket.c line 43
signed int so_resolv(struct in_addr *host, const char *name)
{
  struct addrinfo hints;
  struct addrinfo *res;
  struct addrinfo *p;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 2;
  hints.ai_socktype = 1;
  signed int rc;
  rc=getaddrinfo(name, (const char *)(void *)0, &hints, &res);
  const char *return_value_gai_strerror$1;
  if(!(rc == 0))
  {
    if(!(debug == 0))
    {
      return_value_gai_strerror$1=gai_strerror(rc);
      printf("so_resolv: %s failed: %s (%d)\n", name, return_value_gai_strerror$1, rc);
    }

    return 0;
  }

  if(!(debug == 0))
    printf("Resolve %s:\n", name);

  signed int addr_set = 0;
  p = res;
  char *return_value_inet_ntoa$2;
  char *return_value_inet_ntoa$3;
  for( ; !(p == ((struct addrinfo *)NULL)); p = p->ai_next)
  {
    struct sockaddr_in *ad = (struct sockaddr_in *)p->ai_addr;
    if(ad == ((struct sockaddr_in *)NULL))
    {
      freeaddrinfo(res);
      return 0;
    }

    if(addr_set == 0)
    {
      memcpy((void *)host, (const void *)&ad->sin_addr, sizeof(struct in_addr) /*4ul*/ );
      addr_set = 1;
      if(!(debug == 0))
      {
        return_value_inet_ntoa$2=inet_ntoa(ad->sin_addr);
        printf("  -> %s\n", return_value_inet_ntoa$2);
      }

    }

    else
      if(!(debug == 0))
      {
        return_value_inet_ntoa$3=inet_ntoa(ad->sin_addr);
        printf("     %s\n", return_value_inet_ntoa$3);
      }

  }
  freeaddrinfo(res);
  return 1;
}

// socks5_thread
// file main.c line 409
void * socks5_thread(void *thread_data)
{
  char *tmp;
  char *thost;
  char *tport;
  char *uname;
  char *upass;
  unsigned short int port;
  signed int ver;
  signed int r;
  signed int c;
  signed int i;
  signed int w;
  struct auth_s *tcreds = (struct auth_s *)(void *)0;
  unsigned char *bs = (unsigned char *)(void *)0;
  unsigned char *auths = (unsigned char *)(void *)0;
  unsigned char *addr = (unsigned char *)(void *)0;
  signed int found = -1;
  signed int sd = -1;
  signed int socks5_thread$$1$$open;
  signed int return_value_hlist_count$1;
  return_value_hlist_count$1=hlist_count(users_list);
  socks5_thread$$1$$open = (signed int)!(return_value_hlist_count$1 != 0);
  signed int cd = ((struct thread_arg_s *)thread_data)->fd;
  struct sockaddr_in caddr = ((struct thread_arg_s *)thread_data)->addr;
  free(thread_data);
  char *return_value_new$2;
  return_value_new$2=new((unsigned long int)10);
  bs = (unsigned char *)return_value_new$2;
  thost=new((unsigned long int)50);
  tport=new((unsigned long int)50);
  signed long int return_value_read$3;
  return_value_read$3=read(cd, (void *)bs, (unsigned long int)2);
  r = (signed int)return_value_read$3;
  _Bool tmp_if_expr$4;
  if(!(r == 2))
    tmp_if_expr$4 = (_Bool)1;

  else
    tmp_if_expr$4 = (signed int)bs[(signed long int)0] != 5 ? (_Bool)1 : (_Bool)0;
  char *return_value_new$5;
  signed long int return_value_read$6;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$20;
  signed int tmp_statement_expression$18;
  signed long int return_value_read$23;
  _Bool tmp_if_expr$26;
  _Bool tmp_if_expr$25;
  char *return_value_new$28;
  signed long int return_value_read$29;
  signed long int return_value_read$30;
  signed int return_value_noproxy_match$33;
  unsigned short int tmp_statement_expression$31;
  unsigned short int tmp_statement_expression$32;
  char *return_value_inet_ntoa$36;
  if(!tmp_if_expr$4)
  {
    c = (signed int)bs[(signed long int)1];
    return_value_new$5=new((unsigned long int)(c + 1));
    auths = (unsigned char *)return_value_new$5;
    return_value_read$6=read(cd, (void *)auths, (unsigned long int)c);
    r = (signed int)return_value_read$6;
    if(r == c)
    {
      if(!(socks5_thread$$1$$open == 0))
      {
        i = 0;
        do
        {
          if(!(i >= c))
          {
            if(!(auths[(signed long int)i] == 0))
              tmp_if_expr$7 = (_Bool)1;

            else
            {
              found = 0;
              tmp_if_expr$7 = found != 0 ? (_Bool)1 : (_Bool)0;
            }
            tmp_if_expr$8 = tmp_if_expr$7 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$8 = (_Bool)0;
          if(!tmp_if_expr$8)
            break;

          i = i + 1;
        }
        while((_Bool)1);
      }

      if(!(found >= 0))
      {
        i = 0;
        do
        {
          if(!(i >= c))
          {
            if(!((signed int)auths[(signed long int)i] == 2))
              tmp_if_expr$9 = (_Bool)1;

            else
            {
              found = 2;
              tmp_if_expr$9 = !(found != 0) ? (_Bool)1 : (_Bool)0;
            }
            tmp_if_expr$10 = tmp_if_expr$9 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$10 = (_Bool)0;
          if(!tmp_if_expr$10)
            break;

          i = i + 1;
        }
        while((_Bool)1);
      }

      if(!(found >= 0))
      {
        bs[(signed long int)0] = (unsigned char)5;
        bs[(signed long int)1] = (unsigned char)0xFF;
        signed long int return_value_write$11;
        return_value_write$11=write(cd, (const void *)bs, (unsigned long int)2);
        w = (signed int)return_value_write$11;
        goto bailout;
      }

      else
      {
        bs[(signed long int)0] = (unsigned char)5;
        bs[(signed long int)1] = (unsigned char)found;
        signed long int return_value_write$12;
        return_value_write$12=write(cd, (const void *)bs, (unsigned long int)2);
        w = (signed int)return_value_write$12;
      }
      if(!(found == 0))
      {
        signed long int return_value_read$13;
        return_value_read$13=read(cd, (void *)bs, (unsigned long int)2);
        r = (signed int)return_value_read$13;
        if(!(r == 2))
        {
          bs[(signed long int)0] = (unsigned char)1;
          bs[(signed long int)1] = (unsigned char)0xFF;
          signed long int return_value_write$14;
          return_value_write$14=write(cd, (const void *)bs, (unsigned long int)2);
          w = (signed int)return_value_write$14;
          goto bailout;
        }

        c = (signed int)bs[(signed long int)1];
        uname=new((unsigned long int)(c + 1));
        signed long int return_value_read$15;
        return_value_read$15=read(cd, (void *)uname, (unsigned long int)(c + 1));
        r = (signed int)return_value_read$15;
        if(!(r == 1 + c))
        {
          free((void *)uname);
          goto bailout;
        }

        i = (signed int)uname[(signed long int)c];
        uname[(signed long int)c] = (char)0;
        c = i;
        upass=new((unsigned long int)(c + 1));
        signed long int return_value_read$16;
        return_value_read$16=read(cd, (void *)upass, (unsigned long int)c);
        r = (signed int)return_value_read$16;
        if(!(r == c))
        {
          free((void *)upass);
          free((void *)uname);
          goto bailout;
        }

        upass[(signed long int)c] = (char)0;
        tmp=hlist_get(users_list, uname);
        signed int return_value_hlist_count$17;
        return_value_hlist_count$17=hlist_count(users_list);
        if(return_value_hlist_count$17 == 0)
          tmp_if_expr$21 = (_Bool)1;

        else
        {
          if(!(tmp == ((char *)NULL)))
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$19;
            return_value___builtin_strcmp$19=__builtin_strcmp(tmp, upass);
            tmp_statement_expression$18 = return_value___builtin_strcmp$19;
            tmp_if_expr$20 = !(tmp_statement_expression$18 != 0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$20 = (_Bool)0;
          tmp_if_expr$21 = tmp_if_expr$20 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$21)
        {
          bs[(signed long int)0] = (unsigned char)1;
          bs[(signed long int)1] = (unsigned char)0;
        }

        else
        {
          bs[(signed long int)0] = (unsigned char)1;
          bs[(signed long int)1] = (unsigned char)0xFF;
        }
        signed long int return_value_write$22;
        return_value_write$22=write(cd, (const void *)bs, (unsigned long int)2);
        w = (signed int)return_value_write$22;
        free((void *)upass);
        free((void *)uname);
        if(!(bs[1l] == 0))
          goto bailout;

      }

      return_value_read$23=read(cd, (void *)bs, (unsigned long int)4);
      r = (signed int)return_value_read$23;
      if(r == 4)
      {
        if(!((signed int)bs[1l] == 1))
          tmp_if_expr$26 = (_Bool)1;

        else
        {
          if(!((signed int)bs[3l] == 1))
            tmp_if_expr$25 = (signed int)bs[(signed long int)3] != 3 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$25 = (_Bool)0;
          tmp_if_expr$26 = tmp_if_expr$25 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$26)
        {
          bs[(signed long int)0] = (unsigned char)5;
          bs[(signed long int)1] = (unsigned char)2;
          bs[(signed long int)2] = (unsigned char)0;
          bs[(signed long int)3] = (unsigned char)1;
          memset((void *)(bs + (signed long int)4), 0, (unsigned long int)6);
          signed long int return_value_write$24;
          return_value_write$24=write(cd, (const void *)bs, (unsigned long int)10);
          w = (signed int)return_value_write$24;
          goto bailout;
        }

        if((signed int)bs[3l] == 1)
        {
          ver = 1;
          c = 4;
        }

        else
          if((signed int)bs[3l] == 3)
          {
            ver = 2;
            signed long int return_value_read$27;
            return_value_read$27=read(cd, (void *)&c, (unsigned long int)1);
            r = (signed int)return_value_read$27;
            if(!(r == 1))
              goto bailout;

          }

          else
            goto bailout;
        return_value_new$28=new((unsigned long int)(c + 10 + 1));
        addr = (unsigned char *)return_value_new$28;
        return_value_read$29=read(cd, (void *)addr, (unsigned long int)c);
        r = (signed int)return_value_read$29;
        if(r == c)
        {
          addr[(signed long int)c] = (unsigned char)0;
          if(ver == 1)
            sprintf(thost, "%d.%d.%d.%d", addr[(signed long int)0], addr[(signed long int)1], addr[(signed long int)2], addr[(signed long int)3]);

          else
            strlcpy(thost, (char *)addr, (unsigned long int)50);
          return_value_read$30=read(cd, (void *)&port, (unsigned long int)2);
          r = (signed int)return_value_read$30;
          if(r == 2)
          {
            i = 0;
            return_value_noproxy_match$33=noproxy_match(thost);
            if(!(return_value_noproxy_match$33 == 0))
            {
              unsigned short int __v;
              unsigned short int __x = (unsigned short int)port;
              asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
              tmp_statement_expression$31 = __v;
              sd=host_connect(thost, (signed int)tmp_statement_expression$31);
              i = (signed int)(sd >= 0);
            }

            else
            {
              unsigned short int socks5_thread$$1$$12$$1$$__v;
              unsigned short int socks5_thread$$1$$12$$1$$__x = (unsigned short int)port;
              asm("rorw $8, %w0" : "=r"(socks5_thread$$1$$12$$1$$__v) : "0"(socks5_thread$$1$$12$$1$$__x) : "cc");
              tmp_statement_expression$32 = socks5_thread$$1$$12$$1$$__v;
              sprintf(tport, "%d", tmp_statement_expression$32);
              strlcat(thost, ":", (unsigned long int)50);
              strlcat(thost, tport, (unsigned long int)50);
              tcreds=new_auth();
              sd=proxy_connect(tcreds);
              if(sd >= 0)
                i=prepare_http_connect(sd, tcreds, thost);

            }
            if(i == 0)
            {
              bs[(signed long int)0] = (unsigned char)5;
              bs[(signed long int)1] = (unsigned char)1;
              bs[(signed long int)2] = (unsigned char)0;
              bs[(signed long int)3] = (unsigned char)1;
              memset((void *)(bs + (signed long int)4), 0, (unsigned long int)6);
              signed long int return_value_write$34;
              return_value_write$34=write(cd, (const void *)bs, (unsigned long int)10);
              w = (signed int)return_value_write$34;
              goto bailout;
            }

            else
            {
              bs[(signed long int)0] = (unsigned char)5;
              bs[(signed long int)1] = (unsigned char)0;
              bs[(signed long int)2] = (unsigned char)0;
              bs[(signed long int)3] = (unsigned char)1;
              memset((void *)(bs + (signed long int)4), 0, (unsigned long int)6);
              signed long int return_value_write$35;
              return_value_write$35=write(cd, (const void *)bs, (unsigned long int)10);
              w = (signed int)return_value_write$35;
            }
            return_value_inet_ntoa$36=inet_ntoa(caddr.sin_addr);
            syslog(7, "%s SOCKS %s", return_value_inet_ntoa$36, thost);
            tunnel(cd, sd);
          }

        }

      }

    }

  }


bailout:
  ;
  if(!(addr == ((unsigned char *)NULL)))
    free((void *)addr);

  if(!(auths == ((unsigned char *)NULL)))
    free((void *)auths);

  if(!(thost == ((char *)NULL)))
    free((void *)thost);

  if(!(tport == ((char *)NULL)))
    free((void *)tport);

  if(!(bs == ((unsigned char *)NULL)))
    free((void *)bs);

  if(!(tcreds == ((struct auth_s *)NULL)))
    free((void *)tcreds);

  if(!(sd == 0))
    close(sd);

  close(cd);
  return (void *)0;
}

// strlcat
// file utils.c line 691
extern unsigned long int strlcat(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  unsigned long int dlen;
  unsigned long int tmp_post$1;
  do
  {
    tmp_post$1 = n;
    n = n - 1ul;
    if(tmp_post$1 == 0ul)
      break;

    if((signed int)*d == 0)
      break;

    d = d + 1l;
  }
  while((_Bool)1);
  dlen = (unsigned long int)(d - dst);
  n = siz - dlen;
  unsigned long int return_value_strlen$2;
  char *tmp_post$3;
  if(n == 0ul)
  {
    return_value_strlen$2=strlen(s);
    return dlen + return_value_strlen$2;
  }

  else
  {
    for( ; !((signed int)*s == 0); s = s + 1l)
      if(!(n == 1ul))
      {
        tmp_post$3 = d;
        d = d + 1l;
        *tmp_post$3 = *s;
        n = n - 1ul;
      }

    *d = (char)0;
    return dlen + (unsigned long int)(s - src);
  }
}

// strlcpy
// file utils.c line 664
extern unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  char *tmp_post$1;
  const char *tmp_post$2;
  if(!(n == 0ul))
    do
    {
      n = n - 1ul;
      if(n == 0ul)
        break;

      tmp_post$1 = d;
      d = d + 1l;
      tmp_post$2 = s;
      s = s + 1l;
      *tmp_post$1 = *tmp_post$2;
      if((signed int)*tmp_post$1 == 0)
        break;

    }
    while((_Bool)1);

  const char *tmp_post$3;
  if(n == 0ul)
  {
    if(!(siz == 0ul))
      *d = (char)0;

    do
    {
      tmp_post$3 = s;
      s = s + 1l;
      if(*tmp_post$3 == 0)
        break;

    }
    while((_Bool)1);
  }

  return (unsigned long int)((s - src) - (signed long int)1);
}

// substr
// file utils.c line 481
extern char * substr(const char *src, signed int pos, signed int len)
{
  signed int l;
  char *tmp;
  unsigned long int return_value_strlen$1;
  if(len == 0)
  {
    return_value_strlen$1=strlen(src);
    len = (signed int)return_value_strlen$1;
  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(src);
  unsigned long int tmp_if_expr$4;
  unsigned long int return_value_strlen$3;
  if(!((unsigned long int)len >= return_value_strlen$2 + -((unsigned long int)pos)))
    tmp_if_expr$4 = (unsigned long int)len;

  else
  {
    return_value_strlen$3=strlen(src);
    tmp_if_expr$4 = return_value_strlen$3 - (unsigned long int)pos;
  }
  l = (signed int)tmp_if_expr$4;
  char *return_value_new$5;
  if(!(l >= 1))
  {
    return_value_new$5=new((unsigned long int)1);
    return return_value_new$5;
  }

  else
  {
    tmp=new((unsigned long int)(l + 1));
    strlcpy(tmp, src + (signed long int)pos, (unsigned long int)(l + 1));
    return tmp;
  }
}

// to_base64
// file utils.c line 862
extern void to_base64(unsigned char *out, const unsigned char *in, unsigned long int len, unsigned long int olen)
{
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  for( ; len >= 3ul && olen >= 11ul; in = in + (signed long int)3)
  {
    tmp_post$1 = out;
    out = out + 1l;
    *tmp_post$1 = (unsigned char)base64[(signed long int)((signed int)in[(signed long int)0] >> 2)];
    tmp_post$2 = out;
    out = out + 1l;
    *tmp_post$2 = (unsigned char)base64[(signed long int)((signed int)in[(signed long int)0] << 4 & 0x30 | (signed int)in[(signed long int)1] >> 4)];
    tmp_post$3 = out;
    out = out + 1l;
    *tmp_post$3 = (unsigned char)base64[(signed long int)((signed int)in[(signed long int)1] << 2 & 0x3c | (signed int)in[(signed long int)2] >> 6)];
    tmp_post$4 = out;
    out = out + 1l;
    *tmp_post$4 = (unsigned char)base64[(signed long int)((signed int)in[(signed long int)2] & 0x3f)];
    olen = olen - (unsigned long int)4;
    len = len - (unsigned long int)3;
  }
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  signed int tmp_if_expr$8;
  unsigned char *tmp_post$9;
  if(len >= 1ul && olen >= 5ul)
  {
    unsigned char fragment;
    tmp_post$5 = out;
    out = out + 1l;
    *tmp_post$5 = (unsigned char)base64[(signed long int)((signed int)in[(signed long int)0] >> 2)];
    fragment = (unsigned char)((signed int)in[(signed long int)0] << 4 & 0x30);
    if(len >= 2ul)
      fragment = fragment | (unsigned char)((signed int)in[(signed long int)1] >> 4);

    tmp_post$6 = out;
    out = out + 1l;
    *tmp_post$6 = (unsigned char)base64[(signed long int)fragment];
    tmp_post$7 = out;
    out = out + 1l;
    if(!(len >= 2ul))
      tmp_if_expr$8 = 61;

    else
      tmp_if_expr$8 = (signed int)base64[(signed long int)((signed int)in[(signed long int)1] << 2 & 0x3c)];
    *tmp_post$7 = (unsigned char)tmp_if_expr$8;
    tmp_post$9 = out;
    out = out + 1l;
    *tmp_post$9 = (unsigned char)61;
  }

  *out = (unsigned char)0;
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

// trimr
// file utils.c line 632
extern char * trimr(char *buf)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(buf);
  i = (signed int)(return_value_strlen$1 - (unsigned long int)1);
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  do
  {
    if(i >= 0)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      tmp_if_expr$3 = ((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)buf[(signed long int)i]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
    if(!tmp_if_expr$3)
      break;

    i = i - 1;
  }
  while((_Bool)1);
  buf[(signed long int)(i + 1)] = (char)0;
  return buf;
}

// tunnel
// file http.c line 425
extern signed int tunnel(signed int cd, signed int sd)
{
  struct anonymous$1 set;
  signed int from;
  signed int to;
  signed int ret;
  signed int sel;
  char *buf;
  buf=new((unsigned long int)4096);
  if(!(debug == 0))
    printf("tunnel: select cli: %d, srv: %d\n", cd, sd);

  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&set)->fds_bits[(signed long int)0]) : "memory");
    (&set)->fds_bits[(signed long int)(cd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->fds_bits[(signed long int)(cd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << cd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    (&set)->fds_bits[(signed long int)(sd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&set)->fds_bits[(signed long int)(sd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    sel=select(1024, &set, (struct anonymous$1 *)(void *)0, (struct anonymous$1 *)(void *)0, (struct timeval *)(void *)0);
    if(sel >= 1)
    {
      if(!((set.fds_bits[(signed long int)(cd / 8)] & (signed long int)(1UL << cd % 8)) == 0l))
      {
        from = cd;
        to = sd;
      }

      else
      {
        from = sd;
        to = cd;
      }
      signed long int return_value_read$1;
      return_value_read$1=read(from, (void *)buf, (unsigned long int)4096);
      ret = (signed int)return_value_read$1;
      if(ret >= 1)
      {
        signed long int return_value_write$2;
        return_value_write$2=write(to, (const void *)buf, (unsigned long int)ret);
        ret = (signed int)return_value_write$2;
      }

      else
      {
        free((void *)buf);
        return (signed int)(ret == 0);
      }
    }

    else
      if(!(sel >= 0))
      {
        free((void *)buf);
        return 0;
      }

  }
  while((_Bool)1);
  free((void *)buf);
  return 1;
}

// tunnel_add
// file main.c line 217
void tunnel_add(struct plist_s **list, char *spec, signed int gateway)
{
  struct in_addr source;
  signed int i;
  signed int len;
  signed int count;
  signed int pos;
  signed int port;
  char *field[4l];
  char *tmp;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(spec);
  spec = return_value___strdup$1;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(spec);
  len = (signed int)return_value_strlen$2;
  field[(signed long int)0] = spec;
  count = 1;
  i = 0;
  signed int tmp_post$3;
  for( ; !(count >= 4) && !(i >= len); i = i + 1)
    if((signed int)spec[(signed long int)i] == 58)
    {
      spec[(signed long int)i] = (char)0;
      tmp_post$3 = count;
      count = count + 1;
      field[(signed long int)tmp_post$3] = spec + (signed long int)i + (signed long int)1;
    }

  pos = 0;
  if(count == 4)
  {
    signed int return_value_so_resolv$4;
    return_value_so_resolv$4=so_resolv(&source, field[(signed long int)pos]);
    if(return_value_so_resolv$4 == 0)
    {
      syslog(3, "Cannot resolve tunel bind address: %s\n", field[(signed long int)pos]);
      myexit(1);
    }

    pos = pos + 1;
  }

  else
    source.s_addr=__bswap_32(gateway != 0 ? (unsigned int)0x00000000 : (unsigned int)0x7f000001);
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$6;
  if(count + -pos == 3)
  {
    port=atoi$link2(field[(signed long int)pos]);
    if(port == 0)
    {
      syslog(3, "Invalid tunnel local port: %s\n", field[(signed long int)pos]);
      myexit(1);
    }

    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(field[(signed long int)(pos + 1)]);
    if(return_value_strlen$5 == 0ul)
      tmp_if_expr$7 = (_Bool)1;

    else
    {
      return_value_strlen$6=strlen(field[(signed long int)(pos + 2)]);
      tmp_if_expr$7 = !(return_value_strlen$6 != 0ul) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$7)
    {
      syslog(3, "Invalid tunnel target: %s:%s\n", field[(signed long int)(pos + 1)], field[(signed long int)(pos + 2)]);
      myexit(1);
    }

    unsigned long int return_value_strlen$8;
    return_value_strlen$8=strlen(field[(signed long int)(pos + 1)]);
    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(field[(signed long int)(pos + 2)]);
    tmp=new(return_value_strlen$8 + return_value_strlen$9 + (unsigned long int)2 + (unsigned long int)1);
    strcpy(tmp, field[(signed long int)(pos + 1)]);
    strcat(tmp, ":");
    strcat(tmp, field[(signed long int)(pos + 2)]);
    i=so_listen(port, source);
    if(i >= 1)
    {
      *list=plist_add(*list, (unsigned long int)i, (void *)tmp);
      char *return_value_inet_ntoa$10;
      return_value_inet_ntoa$10=inet_ntoa(source);
      syslog(6, "New tunnel from %s:%d to %s\n", return_value_inet_ntoa$10, port, tmp);
    }

    else
      free((void *)tmp);
  }

  else
  {
    printf("Tunnel specification incorrect ([laddress:]lport:rserver:rport).\n");
    myexit(1);
  }
  free((void *)spec);
}

// tunnel_thread
// file main.c line 380
void * tunnel_thread(void *thread_data)
{
  char *hostname;
  char *pos;
  char *thost = ((struct thread_arg_s *)thread_data)->target;
  char *return_value___strdup$1;
  return_value___strdup$1=__strdup(thost);
  hostname = return_value___strdup$1;
  char *return_value___builtin_strchr$2;
  return_value___builtin_strchr$2=__builtin_strchr(hostname, 58);
  pos = return_value___builtin_strchr$2;
  if(!(pos == ((char *)NULL)))
    *pos = (char)0;

  signed int return_value_noproxy_match$3;
  return_value_noproxy_match$3=noproxy_match(hostname);
  if(!(return_value_noproxy_match$3 == 0))
    direct_tunnel(thread_data);

  else
    forward_tunnel(thread_data);
  free((void *)hostname);
  free(thread_data);
  pthread_mutex_lock(&threads_mtx);
  unsigned long int return_value_pthread_self$4;
  return_value_pthread_self$4=pthread_self();
  threads_list=plist_add(threads_list, (unsigned long int)return_value_pthread_self$4, (void *)0);
  pthread_mutex_unlock(&threads_mtx);
  return (void *)0;
}

// unicode
// file utils.c line 755
extern signed int unicode(char **dst, char *src)
{
  char *tmp;
  signed int l;
  signed int i;
  unsigned long int tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(src == ((char *)NULL))
  {
    *dst = (char *)(void *)0;
    return 0;
  }

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(src);
    if(return_value_strlen$1 >= 65ul)
      tmp_if_expr$3 = (unsigned long int)64;

    else
    {
      return_value_strlen$2=strlen(src);
      tmp_if_expr$3 = return_value_strlen$2;
    }
    l = (signed int)tmp_if_expr$3;
    tmp=new((unsigned long int)(2 * l));
    i = 0;
    for( ; !(i >= l); i = i + 1)
      tmp[(signed long int)(2 * i)] = src[(signed long int)i];
    *dst = tmp;
    return 2 * l;
  }
}

// uppercase
// file utils.c line 746
extern char * uppercase(char *str)
{
  signed int i = 0;
  unsigned long int return_value_strlen$1;
  signed int tmp_statement_expression$2;
  signed int tmp_if_expr$4;
  const signed int **return_value___ctype_toupper_loc$3;
  const signed int **return_value___ctype_toupper_loc$5;
  do
  {
    return_value_strlen$1=strlen(str);
    if((unsigned long int)i >= return_value_strlen$1)
      break;

    signed int __res;
    return_value___ctype_toupper_loc$5=__ctype_toupper_loc();
    __res = (*return_value___ctype_toupper_loc$5)[(signed long int)(signed int)str[(signed long int)i]];
    tmp_statement_expression$2 = __res;
    str[(signed long int)i] = (char)tmp_statement_expression$2;
    i = i + 1;
  }
  while((_Bool)1);
  return str;
}

// urlencode
// file utils.c line 773
extern char * urlencode(const char *str)
{
  char *tmp;
  signed int i;
  signed int pos;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  tmp=new(return_value_strlen$1 * (unsigned long int)3 + (unsigned long int)1);
  pos = 0;
  i = 0;
  unsigned long int return_value_strlen$2;
  _Bool tmp_if_expr$14;
  signed int tmp_statement_expression$5;
  signed int tmp_if_expr$7;
  const signed int **return_value___ctype_tolower_loc$6;
  const signed int **return_value___ctype_tolower_loc$8;
  _Bool tmp_if_expr$13;
  signed int tmp_statement_expression$9;
  signed int tmp_if_expr$11;
  const signed int **return_value___ctype_tolower_loc$10;
  const signed int **return_value___ctype_tolower_loc$12;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$17;
  _Bool tmp_if_expr$18;
  signed int tmp_post$3;
  do
  {
    return_value_strlen$2=strlen(str);
    if((unsigned long int)i >= return_value_strlen$2)
      break;

    const unsigned short int **return_value___ctype_b_loc$4;
    return_value___ctype_b_loc$4=__ctype_b_loc();
    if(!((2048 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)str[(signed long int)i]]) == 0))
      tmp_if_expr$14 = (_Bool)1;

    else
    {
      signed int __res;
      return_value___ctype_tolower_loc$8=__ctype_tolower_loc();
      __res = (*return_value___ctype_tolower_loc$8)[(signed long int)(signed int)str[(signed long int)i]];
      tmp_statement_expression$5 = __res;
      if(tmp_statement_expression$5 >= 97)
      {
        signed int urlencode$$1$$1$$1$$2$$__res;
        return_value___ctype_tolower_loc$12=__ctype_tolower_loc();
        urlencode$$1$$1$$1$$2$$__res = (*return_value___ctype_tolower_loc$12)[(signed long int)(signed int)str[(signed long int)i]];
        tmp_statement_expression$9 = urlencode$$1$$1$$1$$2$$__res;
        tmp_if_expr$13 = tmp_statement_expression$9 <= 122 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$13 = (_Bool)0;
      tmp_if_expr$14 = tmp_if_expr$13 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$14)
      tmp_if_expr$15 = (_Bool)1;

    else
      tmp_if_expr$15 = (signed int)str[(signed long int)i] == 46 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$15)
      tmp_if_expr$16 = (_Bool)1;

    else
      tmp_if_expr$16 = (signed int)str[(signed long int)i] == 45 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$16)
      tmp_if_expr$17 = (_Bool)1;

    else
      tmp_if_expr$17 = (signed int)str[(signed long int)i] == 95 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$17)
      tmp_if_expr$18 = (_Bool)1;

    else
      tmp_if_expr$18 = (signed int)str[(signed long int)i] == 126 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$18)
    {
      tmp_post$3 = pos;
      pos = pos + 1;
      tmp[(signed long int)tmp_post$3] = str[(signed long int)i];
    }

    else
    {
      sprintf(tmp + (signed long int)pos, "%%%X", (unsigned char)str[(signed long int)i]);
      pos = pos + 3;
    }
    i = i + 1;
  }
  while((_Bool)1);
  return tmp;
}

// www_authenticate
// file direct.c line 59
signed int www_authenticate(signed int sd, struct rr_data_s *request, struct rr_data_s *response, struct auth_s *creds)
{
  char *tmp;
  char *buf;
  char *challenge;
  struct rr_data_s *auth;
  signed int len;
  signed int rc = 0;
  buf=new((unsigned long int)4096);
  strcpy(buf, "NTLM ");
  len=ntlm_request(&tmp, creds);
  if(!(len == 0))
  {
    to_base64((unsigned char *)(buf + (signed long int)5), (unsigned char *)(tmp + (signed long int)0), (unsigned long int)len, (unsigned long int)(4096 - 5));
    free((void *)tmp);
  }

  auth=dup_rr_data(request);
  auth->headers=hlist_mod(auth->headers, "Connection", "keep-alive", 1);
  auth->headers=hlist_mod(auth->headers, "Authorization", buf, 1);
  auth->headers=hlist_mod(auth->headers, "Content-Length", "0", 1);
  auth->headers=hlist_del(auth->headers, "Transfer-Encoding");
  signed int return_value_http_body_drop$1;
  return_value_http_body_drop$1=http_body_drop(sd, response);
  signed int return_value_headers_send$2;
  signed int return_value_headers_recv$3;
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$6;
  signed int return_value_headers_send$8;
  signed int return_value_headers_recv$9;
  if(!(return_value_http_body_drop$1 == 0))
  {
    if(!(debug == 0))
    {
      printf("\nSending WWW auth request...\n");
      hlist_dump(auth->headers);
    }

    return_value_headers_send$2=headers_send(sd, auth);
    if(!(return_value_headers_send$2 == 0))
    {
      if(!(debug == 0))
        printf("\nReading WWW auth response...\n");

      reset_rr_data(auth);
      return_value_headers_recv$3=headers_recv(sd, auth);
      if(!(return_value_headers_recv$3 == 0))
      {
        if(!(debug == 0))
          hlist_dump(auth->headers);

        if(auth->code == 401)
        {
          signed int return_value_http_body_drop$4;
          return_value_http_body_drop$4=http_body_drop(sd, auth);
          if(return_value_http_body_drop$4 == 0)
            goto bailout;

          tmp=hlist_get(auth->headers, "WWW-Authenticate");
          if(!(tmp == ((char *)NULL)))
          {
            return_value_strlen$6=strlen(tmp);
            tmp_if_expr$7 = return_value_strlen$6 > (unsigned long int)(6 + 8) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$7 = (_Bool)0;
          if(tmp_if_expr$7)
          {
            unsigned long int return_value_strlen$5;
            return_value_strlen$5=strlen(tmp);
            challenge=new(return_value_strlen$5 + (unsigned long int)5 + (unsigned long int)1);
            len=from_base64(challenge, tmp + (signed long int)5);
            if(len >= 25)
            {
              len=ntlm_response(&tmp, challenge, len, creds);
              if(len >= 1)
              {
                strcpy(buf, "NTLM ");
                to_base64((unsigned char *)(buf + (signed long int)5), (unsigned char *)(tmp + (signed long int)0), (unsigned long int)len, (unsigned long int)(4096 - 5));
                request->headers=hlist_mod(request->headers, "Authorization", buf, 1);
                free((void *)tmp);
              }

              else
              {
                syslog(3, "No target info block. Cannot do NTLMv2!\n");
                response->errmsg = "Invalid NTLM challenge from web server";
                free((void *)challenge);
                goto bailout;
              }
            }

            else
            {
              syslog(3, "Server returning invalid challenge!\n");
              response->errmsg = "Invalid NTLM challenge from web server";
              free((void *)challenge);
              goto bailout;
            }
            free((void *)challenge);
          }

          else
          {
            syslog(4, "No challenge in WWW-Authenticate!\n");
            response->errmsg = "Web server reply missing NTLM challenge";
            goto bailout;
          }
        }

        else
          goto bailout;
        if(!(debug == 0))
          printf("\nSending WWW auth...\n");

        return_value_headers_send$8=headers_send(sd, request);
        if(!(return_value_headers_send$8 == 0))
        {
          if(!(debug == 0))
            printf("\nReading final server response...\n");

          reset_rr_data(auth);
          return_value_headers_recv$9=headers_recv(sd, auth);
          if(!(return_value_headers_recv$9 == 0))
          {
            rc = 1;
            if(!(debug == 0))
              hlist_dump(auth->headers);

          }

        }

      }

    }

  }


bailout:
  ;
  if(!(rc == 0))
    response=copy_rr_data(response, auth);

  free_rr_data(auth);
  free((void *)buf);
  return rc;
}

