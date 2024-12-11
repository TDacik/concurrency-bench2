// tag-#anon#ST[S32'xsize'||U32'_pad0'||*{S32}_S32_'bmGs'||ARR256{S32}_S32_'bmBc'||*{U8}_U8_'saved_x'||S32'saved_m'||S32'icase'|]
// file bm.h line 6
struct anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_1;

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

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-netent
// file /usr/include/x86_64-linux-gnu/bits/netdb.h line 26
struct netent;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-servent
// file /usr/include/netdb.h line 257
struct servent;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

#ifndef NULL
#define NULL ((void*)0)
#endif

// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
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
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __strtok_r
// file /usr/include/string.h line 353
extern char * __strtok_r(char *, const char *, char ** restrict );
// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// bm_destroy
// file bm.c line 122
extern void bm_destroy(struct anonymous *bmp);
// bm_init
// file bm.h line 20
extern signed int bm_init(struct anonymous *bmp, unsigned char *x, signed int m, signed int icase);
// bm_search
// file bm.h line 26
extern signed int bm_search(struct anonymous *bmp, unsigned char *y, signed int n, signed int (*mfun)(void *, signed int, signed int));
// bm_search::mfun_object
//
signed int mfun_object(void *, signed int, signed int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// dehex
// file pnscan.c line 122
signed int dehex(unsigned char *str);
// deslash
// file pnscan.c line 152
signed int deslash(unsigned char *str);
// e_fun
// file pnscan.c line 1031
void e_fun(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// f_worker
// file pnscan.c line 794
void * f_worker(void *arg);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// get_char_code
// file pnscan.c line 94
signed int get_char_code(unsigned char **cp, signed int base);
// get_host
// file pnscan.c line 751
signed int get_host(char *str, unsigned long int *ip);
// get_ip_range
// file pnscan.c line 939
signed int get_ip_range(char *str, unsigned long int *first_ip, unsigned long int *last_ip);
// get_network
// file pnscan.c line 919
signed int get_network(char *str, unsigned long int *np);
// get_port_range
// file pnscan.c line 992
signed int get_port_range(char *str, signed int *first_port, signed int *last_port);
// get_service
// file pnscan.c line 771
signed int get_service(char *str, signed int *pp);
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// gethostbyname
// file /usr/include/netdb.h line 144
extern struct hostent * gethostbyname(const char *);
// getnetbyname
// file /usr/include/netdb.h line 224
extern struct netent * getnetbyname(const char *);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(signed int, struct rlimit *);
// getservbyname
// file /usr/include/netdb.h line 290
extern struct servent * getservbyname(const char *, const char *);
// inet_makeaddr
// file /usr/include/arpa/inet.h line 41
extern struct in_addr inet_makeaddr(unsigned int, unsigned int);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// is_text
// file pnscan.c line 309
signed int is_text(unsigned char *cp, signed int slen);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// preBmBc
// file bm.c line 15
static void preBmBc(unsigned char *x, signed int m, signed int *bmBc);
// preBmGs
// file bm.c line 58
static signed int preBmGs(unsigned char *x, signed int m, signed int *bmGs);
// print_host
// file pnscan.c line 223
void print_host(struct _IO_FILE *fp, struct in_addr in, signed int port);
// print_output
// file pnscan.c line 322
signed int print_output(unsigned char *str, signed int slen);
// print_version
// file pnscan.c line 85
void print_version(struct _IO_FILE *fp);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// probe
// file pnscan.c line 530
signed int probe(unsigned long int addr, signed int port);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_1 *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_1 *);
// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c);
// r_worker
// file pnscan.c line 691
void * r_worker(void *arg);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(signed int, struct rlimit *);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// suffixes
// file bm.c line 30
static void suffixes(unsigned char *x, signed int m, signed int *suff);
// t_read
// file pnscan.c line 281
signed int t_read(signed int fd, unsigned char *buf, signed int size);
// t_write
// file pnscan.c line 242
signed int t_write(signed int fd, unsigned char *buf, signed int len);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c);
// usage
// file pnscan.c line 889
void usage(struct _IO_FILE *out);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous
{
  // xsize
  signed int xsize;
  // bmGs
  signed int *bmGs;
  // bmBc
  signed int bmBc[256l];
  // saved_x
  unsigned char *saved_x;
  // saved_m
  signed int saved_m;
  // icase
  signed int icase;
};

union anonymous_0
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

union anonymous_1
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

struct netent
{
  // n_name
  char *n_name;
  // n_aliases
  char **n_aliases;
  // n_addrtype
  signed int n_addrtype;
  // n_net
  unsigned int n_net;
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

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
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


// argv0
// file pnscan.c line 885
char *argv0 = "pnscan";
// aworkers
// file pnscan.c line 58
signed int aworkers = 0;
// bmb
// file pnscan.c line 81
struct anonymous bmb;
// cur_ip
// file pnscan.c line 75
unsigned long int cur_ip;
// cur_lock
// file pnscan.c line 74
union anonymous_1 cur_lock;
// cur_port
// file pnscan.c line 76
signed int cur_port;
// debug
// file pnscan.c line 51
signed int debug = 0;
// first_ip
// file pnscan.c line 71
unsigned long int first_ip = (unsigned long int)0x00000000;
// first_port
// file pnscan.c line 68
signed int first_port = 0;
// ignore_case
// file pnscan.c line 80
signed int ignore_case = 0;
// last_ip
// file pnscan.c line 72
unsigned long int last_ip = (unsigned long int)0xFFFFFFFF;
// last_port
// file pnscan.c line 69
signed int last_port = 0;
// line_f
// file pnscan.c line 63
signed int line_f = 0;
// maxlen
// file pnscan.c line 65
signed int maxlen = 64;
// mworkers
// file pnscan.c line 57
signed int mworkers = 1;
// nworkers
// file pnscan.c line 59
signed int nworkers = 0;
// pr_sym
// file pnscan.c line 62
signed int pr_sym = 0;
// print_lock
// file pnscan.c line 78
union anonymous_1 print_lock;
// rlen
// file pnscan.c line 49
signed int rlen = 0;
// rstr
// file pnscan.c line 48
unsigned char *rstr = (unsigned char *)(void *)0;
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
// file pnscan.c line 54
signed int stop = 0;
// timeout
// file pnscan.c line 61
signed int timeout = 1000;
// tworkers
// file pnscan.c line 56
signed int tworkers = 1;
// use_shutdown
// file pnscan.c line 64
signed int use_shutdown = 0;
// verbose
// file pnscan.c line 52
signed int verbose = 0;
// version
// file version.c line 1
char version[5l] = { '1', '.', '1', '1', 0 };
// wlen
// file pnscan.c line 47
signed int wlen = 0;
// wstr
// file pnscan.c line 46
unsigned char *wstr = (unsigned char *)(void *)0;

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32_1;
  return_value___builtin_bswap32_1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32_1;
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
  char *tmp_post_1;
  char *tmp_post_2;
  if(!((signed int)*__s == 0))
  {
    tmp_post_1 = __s;
    __s = __s + 1l;
    __result = tmp_post_1;
    while(!((signed int)*__s == 0))
    {
      tmp_post_2 = __s;
      __s = __s + 1l;
      if(*tmp_post_2 == __sep)
      {
        __s[(signed long int)-1] = (char)0;
        break;
      }

    }
  }

  *__nextp = __s;
  return __result;
}

// bm_destroy
// file bm.c line 122
extern void bm_destroy(struct anonymous *bmp)
{
  if(!(bmp->bmGs == ((signed int *)NULL)))
    free((void *)bmp->bmGs);

  if(!(bmp->saved_x == ((unsigned char *)NULL)))
    free((void *)bmp->saved_x);

}

// bm_init
// file bm.h line 20
extern signed int bm_init(struct anonymous *bmp, unsigned char *x, signed int m, signed int icase)
{
  signed int i;
  memset((void *)bmp, 0, sizeof(struct anonymous *) /*8ul*/ );
  bmp->icase = icase;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(sizeof(signed int) /*4ul*/ , (unsigned long int)m);
  bmp->bmGs = (signed int *)return_value_calloc_1;
  signed int tmp_if_expr_7;
  signed int tmp_statement_expression_3;
  signed int tmp_if_expr_5;
  const signed int **return_value___ctype_tolower_loc_4;
  const signed int **return_value___ctype_tolower_loc_6;
  if(bmp->bmGs == ((signed int *)NULL))
    return -1;

  else
  {
    bmp->saved_m = m;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)m);
    bmp->saved_x = (unsigned char *)return_value_malloc_2;
    if(bmp->saved_x == ((unsigned char *)NULL))
      return -2;

    else
    {
      i = 0;
      for( ; !(i >= m); i = i + 1)
      {
        if(!(icase == 0))
        {
          signed int __res;
          return_value___ctype_tolower_loc_6=__ctype_tolower_loc();
          __res = (*return_value___ctype_tolower_loc_6)[(signed long int)(signed int)x[(signed long int)i]];
          tmp_statement_expression_3 = __res;
          tmp_if_expr_7 = tmp_statement_expression_3;
        }

        else
          tmp_if_expr_7 = (signed int)x[(signed long int)i];
        bmp->saved_x[(signed long int)i] = (unsigned char)tmp_if_expr_7;
      }
      signed int return_value_preBmGs_8;
      return_value_preBmGs_8=preBmGs(bmp->saved_x, m, bmp->bmGs);
      if(!(return_value_preBmGs_8 >= 0))
        return -3;

      else
      {
        preBmBc((unsigned char *)bmp->saved_x, m, bmp->bmBc);
        return 0;
      }
    }
  }
}

// bm_search
// file bm.h line 26
extern signed int bm_search(struct anonymous *bmp, unsigned char *y, signed int n, signed int (*mfun)(void *, signed int, signed int))
{
  signed int i;
  signed int j;
  signed int bm_search__1__c;
  signed int nm = 0;
  j = 0;
  _Bool tmp_if_expr_6;
  signed int tmp_if_expr_5;
  signed int tmp_statement_expression_1;
  signed int tmp_if_expr_3;
  const signed int **return_value___ctype_tolower_loc_2;
  const signed int **return_value___ctype_tolower_loc_4;
  signed int tmp_if_expr_11;
  signed int tmp_statement_expression_7;
  signed int tmp_if_expr_9;
  const signed int **return_value___ctype_tolower_loc_8;
  const signed int **return_value___ctype_tolower_loc_10;
  signed int tmp_if_expr_12;
  while(n + -bmp->saved_m >= j)
  {
    i = bmp->saved_m - 1;
    do
    {
      if(i >= 0)
      {
        if(!(bmp->icase == 0))
        {
          signed int __res;
          return_value___ctype_tolower_loc_4=__ctype_tolower_loc();
          __res = (*return_value___ctype_tolower_loc_4)[(signed long int)(signed int)y[(signed long int)(i + j)]];
          tmp_statement_expression_1 = __res;
          tmp_if_expr_5 = tmp_statement_expression_1;
        }

        else
          tmp_if_expr_5 = (signed int)y[(signed long int)(i + j)];
        tmp_if_expr_6 = (signed int)bmp->saved_x[(signed long int)i] == tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
      if(!tmp_if_expr_6)
        break;

      i = i - 1;
    }
    while((_Bool)1);
    if(!(i >= 0))
    {
      if(!(mfun == ((signed int (*)(void *, signed int, signed int))NULL)))
      {
        nm = nm + 1;
        bm_search__1__c=mfun((void *)y, n, j);
        if(!(bm_search__1__c == 0))
          return bm_search__1__c < 0 ? bm_search__1__c : nm;

        j = j + bmp->bmGs[(signed long int)0];
      }

      else
        return j;
    }

    else
    {
      unsigned char c;
      if(!(bmp->icase == 0))
      {
        signed int bm_search__1__1__3__1____res;
        return_value___ctype_tolower_loc_10=__ctype_tolower_loc();
        bm_search__1__1__3__1____res = (*return_value___ctype_tolower_loc_10)[(signed long int)(signed int)y[(signed long int)(i + j)]];
        tmp_statement_expression_7 = bm_search__1__1__3__1____res;
        tmp_if_expr_11 = tmp_statement_expression_7;
      }

      else
        tmp_if_expr_11 = (signed int)y[(signed long int)(i + j)];
      c = (unsigned char)tmp_if_expr_11;
      if(!(bmp->bmGs[(signed long int)i] >= 1 + bmp->bmBc[(signed long int)c] + i + -bmp->saved_m))
        tmp_if_expr_12 = (bmp->bmBc[(signed long int)c] - bmp->saved_m) + 1 + i;

      else
        tmp_if_expr_12 = bmp->bmGs[(signed long int)i];
      j = j + tmp_if_expr_12;
    }
  }
  return mfun == (signed int (*)(void *, signed int, signed int))(void *)0 ? -1 : nm;
}

// dehex
// file pnscan.c line 122
signed int dehex(unsigned char *str)
{
  unsigned char *wp;
  unsigned char *rp;
  signed int val;
  wp = str;
  rp = wp;
  const unsigned short int **return_value___ctype_b_loc_1;
  unsigned char *tmp_post_3;
  while(!(*rp == 0))
  {
    for( ; !(*rp == 0); rp = rp + 1l)
    {
      return_value___ctype_b_loc_1=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*rp]) == 0)
        break;

    }
    if((signed int)*rp == 0)
      break;

    const unsigned short int **return_value___ctype_b_loc_2;
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if((4096 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*rp]) == 0)
      return -1;

    val=get_char_code(&rp, 16);
    tmp_post_3 = wp;
    wp = wp + 1l;
    *tmp_post_3 = (unsigned char)val;
  }
  *wp = (unsigned char)0;
  return (signed int)(wp - str);
}

// deslash
// file pnscan.c line 152
signed int deslash(unsigned char *str)
{
  unsigned char *wp;
  unsigned char *rp;
  wp = str;
  rp = wp;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  signed int return_value_get_char_code_8;
  unsigned char *tmp_post_9;
  signed int return_value_get_char_code_10;
  unsigned char *tmp_post_11;
  signed int return_value_get_char_code_12;
  unsigned char *tmp_post_13;
  unsigned char *tmp_post_14;
  while(!(*rp == 0))
    if(!((signed int)*rp == 92))
    {
      tmp_post_1 = wp;
      wp = wp + 1l;
      tmp_post_2 = rp;
      rp = rp + 1l;
      *tmp_post_1 = *tmp_post_2;
    }

    else
    {
      rp = rp + 1l;
      switch((signed int)*rp)
      {
        case 110:
        {
          tmp_post_3 = wp;
          wp = wp + 1l;
          *tmp_post_3 = (unsigned char)10;
          rp = rp + 1l;
          break;
        }
        case 114:
        {
          tmp_post_4 = wp;
          wp = wp + 1l;
          *tmp_post_4 = (unsigned char)13;
          rp = rp + 1l;
          break;
        }
        case 116:
        {
          tmp_post_5 = wp;
          wp = wp + 1l;
          *tmp_post_5 = (unsigned char)9;
          rp = rp + 1l;
          break;
        }
        case 98:
        {
          tmp_post_6 = wp;
          wp = wp + 1l;
          *tmp_post_6 = (unsigned char)8;
          rp = rp + 1l;
          break;
        }
        case 120:
        {
          rp = rp + 1l;
          tmp_post_7 = wp;
          wp = wp + 1l;
          return_value_get_char_code_8=get_char_code(&rp, 16);
          *tmp_post_7 = (unsigned char)return_value_get_char_code_8;
          break;
        }
        case 48:
        {
          tmp_post_9 = wp;
          wp = wp + 1l;
          return_value_get_char_code_10=get_char_code(&rp, 8);
          *tmp_post_9 = (unsigned char)return_value_get_char_code_10;
          break;
        }
        case 49:

        case 50:

        case 51:

        case 52:

        case 53:

        case 54:

        case 55:

        case 56:

        case 57:
        {
          tmp_post_11 = wp;
          wp = wp + 1l;
          return_value_get_char_code_12=get_char_code(&rp, 10);
          *tmp_post_11 = (unsigned char)return_value_get_char_code_12;
          break;
        }
        default:
        {
          tmp_post_13 = wp;
          wp = wp + 1l;
          tmp_post_14 = rp;
          rp = rp + 1l;
          *tmp_post_13 = *tmp_post_14;
        }
      }
    }
  *wp = (unsigned char)0;
  return (signed int)(wp - str);
}

// e_fun
// file pnscan.c line 1031
void e_fun(void)
{
  printf("mworkers = %d, tworkers = %d, aworkers = %d, nworkers = %d\n", mworkers, tworkers, aworkers, nworkers);
}

// f_worker
// file pnscan.c line 794
void * f_worker(void *arg)
{
  unsigned long int addr;
  signed int port;
  signed int code;
  char buf[1024l];
  char *host;
  char *serv;
  char *tokp;
  unsigned long int tid;
  pthread_mutex_lock(&cur_lock);
  _Bool tmp_if_expr_4;
  while(stop == 0)
  {
    char *return_value_fgets_1;
    return_value_fgets_1=fgets(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , stdin);
    if(return_value_fgets_1 == ((char *)NULL))
    {
      if(!(debug == 0))
        fprintf(stderr, "*** GOT EOF ***\n");

      stop = 1;
      break;
    }

    char *return_value___strtok_r_2;
    return_value___strtok_r_2=__strtok_r(buf, " \t\n\r", &tokp);
    host = return_value___strtok_r_2;
    char *return_value___strtok_r_3;
    return_value___strtok_r_3=__strtok_r((char *)(void *)0, " \t\n\r", &tokp);
    serv = return_value___strtok_r_3;
    if(host == ((char *)NULL))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)host[(signed long int)0] == 35 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
    {
      signed int return_value_get_host_5;
      return_value_get_host_5=get_host(host, &addr);
      if(!(return_value_get_host_5 == 1))
      {
        if(!(verbose == 0))
          fprintf(stderr, "%s: invalid host\n", host);

      }

      else
      {
        if(serv == ((char *)NULL))
        {
          if(first_port == 0)
          {
            if(!(verbose == 0))
              fprintf(stderr, "%s: missing service specification\n", host);

            continue;
          }

          port = first_port;
        }

        else
        {
          code=get_service(serv, &port);
          if(!(code == 1))
          {
            if(!(verbose == 0))
              fprintf(stderr, "%s: invalid service (code=%d)\n", serv, code);

            continue;
          }

        }
        if(aworkers >= tworkers + -1 && !(tworkers >= nworkers))
        {
          tworkers = tworkers + 1;
          signed int return_value_pthread_create_6;
          return_value_pthread_create_6=pthread_create(&tid, (const union pthread_attr_t *)(void *)0, f_worker, (void *)0);
          if(!(return_value_pthread_create_6 == 0))
          {
            tworkers = tworkers - 1;
            nworkers = tworkers;
          }

          if(!(mworkers >= tworkers))
            mworkers = tworkers;

        }

        aworkers = aworkers + 1;
        pthread_mutex_unlock(&cur_lock);
        probe(addr, port);
        pthread_mutex_lock(&cur_lock);
        aworkers = aworkers - 1;
      }
    }

  }
  tworkers = tworkers - 1;
  pthread_mutex_unlock(&cur_lock);
  fflush(stdout);
  return (void *)0;
}

// get_char_code
// file pnscan.c line 94
signed int get_char_code(unsigned char **cp, signed int base)
{
  signed int val = 0;
  signed int len = 0;
  signed int tmp_statement_expression_1;
  signed int tmp_if_expr_3;
  const signed int **return_value___ctype_toupper_loc_2;
  const signed int **return_value___ctype_toupper_loc_4;
  signed int tmp_statement_expression_5;
  signed int tmp_if_expr_7;
  const signed int **return_value___ctype_toupper_loc_6;
  const signed int **return_value___ctype_toupper_loc_8;
  _Bool tmp_if_expr_21;
  signed int tmp_statement_expression_17;
  signed int tmp_if_expr_19;
  const signed int **return_value___ctype_toupper_loc_18;
  const signed int **return_value___ctype_toupper_loc_20;
  signed int tmp_statement_expression_13;
  signed int tmp_if_expr_15;
  const signed int **return_value___ctype_toupper_loc_14;
  const signed int **return_value___ctype_toupper_loc_16;
  signed int tmp_statement_expression_9;
  signed int tmp_if_expr_11;
  const signed int **return_value___ctype_toupper_loc_10;
  const signed int **return_value___ctype_toupper_loc_12;
  for( ; !(len >= (base == 16 ? 2 : 3)); len = len + 1)
  {
    if((signed int)*(*cp) >= 48)
    {
      if((signed int)*(*cp) >= 48 + (base >= 11 ? 10 : base))
        goto __CPROVER_DUMP_L2;

    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(base >= 10)
      {
        signed int get_char_code__1__1____res;
        return_value___ctype_toupper_loc_4=__ctype_toupper_loc();
        get_char_code__1__1____res = (*return_value___ctype_toupper_loc_4)[(signed long int)(signed int)*(*cp)];
        tmp_statement_expression_1 = get_char_code__1__1____res;
        if(!(tmp_statement_expression_1 >= 65))
          goto __CPROVER_DUMP_L17;

        signed int get_char_code__1__2____res;
        return_value___ctype_toupper_loc_8=__ctype_toupper_loc();
        get_char_code__1__2____res = (*return_value___ctype_toupper_loc_8)[(signed long int)(signed int)*(*cp)];
        tmp_statement_expression_5 = get_char_code__1__2____res;
        if(tmp_statement_expression_5 >= 65 + base + -10)
          goto __CPROVER_DUMP_L17;

      }

      else
      {

      __CPROVER_DUMP_L17:
        ;
        break;
      }
    }
    val = val * base;
    if((signed int)*(*cp) >= 48)
      tmp_if_expr_21 = (signed int)*(*cp) < 48 + (base > 10 ? 10 : base) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_21 = (_Bool)0;
    if(tmp_if_expr_21)
      val = val + ((signed int)*(*cp) - 48);

    else
      if(base >= 10)
      {
        signed int get_char_code__1__3__1____res;
        return_value___ctype_toupper_loc_20=__ctype_toupper_loc();
        get_char_code__1__3__1____res = (*return_value___ctype_toupper_loc_20)[(signed long int)(signed int)*(*cp)];
        tmp_statement_expression_17 = get_char_code__1__3__1____res;
        if(tmp_statement_expression_17 >= 65)
        {
          signed int __res;
          return_value___ctype_toupper_loc_16=__ctype_toupper_loc();
          __res = (*return_value___ctype_toupper_loc_16)[(signed long int)(signed int)*(*cp)];
          tmp_statement_expression_13 = __res;
          if(!(tmp_statement_expression_13 >= 65 + base + -10))
          {
            signed int get_char_code__1__3__3____res;
            return_value___ctype_toupper_loc_12=__ctype_toupper_loc();
            get_char_code__1__3__3____res = (*return_value___ctype_toupper_loc_12)[(signed long int)(signed int)*(*cp)];
            tmp_statement_expression_9 = get_char_code__1__3__3____res;
            val = val + (tmp_statement_expression_9 - 65) + 10;
          }

        }

      }

    *cp = *cp + 1l;
  }
  return val & 0xFF;
}

// get_host
// file pnscan.c line 751
signed int get_host(char *str, unsigned long int *ip)
{
  struct hostent *hep;
  unsigned long int tip;
  hep=gethostbyname(str);
  if(!(hep == ((struct hostent *)NULL)))
  {
    if(!(hep->h_addr_list == ((char **)NULL)))
    {
      if(!(*hep->h_addr_list == ((char *)NULL)))
      {
        tip = *((unsigned long int *)hep->h_addr_list[(signed long int)0]);
        unsigned int return_value___bswap_32_1;
        return_value___bswap_32_1=__bswap_32((unsigned int)tip);
        *ip = (unsigned long int)return_value___bswap_32_1;
        return 1;
      }

    }

  }

  signed int return_value_inet_pton_2;
  return_value_inet_pton_2=inet_pton(2, str, (void *)ip);
  return return_value_inet_pton_2;
}

// get_ip_range
// file pnscan.c line 939
signed int get_ip_range(char *str, unsigned long int *first_ip, unsigned long int *last_ip)
{
  char first[1024l];
  char last[1024l];
  signed int len;
  unsigned long int ip;
  unsigned long int mask = (unsigned long int)0;
  signed int return_value_sscanf_4;
  return_value_sscanf_4=sscanf(str, "%1023[^/ ] / %u", (const void *)first, &len);
  signed int tmp_post_3;
  if(return_value_sscanf_4 == 2)
  {
    signed int return_value_get_network_1;
    return_value_get_network_1=get_network(first, &ip);
    if(len >= 33 || !(return_value_get_network_1 == 1) || !(len >= 0))
      return -1;

    unsigned int return_value___bswap_32_2;
    return_value___bswap_32_2=__bswap_32((unsigned int)ip);
    ip = (unsigned long int)return_value___bswap_32_2;
    *first_ip = ip + (unsigned long int)1;
    len = 32 - len;
    do
    {
      tmp_post_3 = len;
      len = len - 1;
      if(!(tmp_post_3 >= 1))
        break;

      mask = mask << 1 | (unsigned long int)1;
    }
    while((_Bool)1);
    *last_ip = (ip | mask) - (unsigned long int)1;
    return 2;
  }

  signed int return_value_sscanf_5;
  return_value_sscanf_5=sscanf(str, "%1023[^: ] : %1023s", (const void *)first, (const void *)last);
  signed int return_value_get_host_6;
  signed int return_value_get_host_7;
  signed int return_value_get_host_8;
  switch(return_value_sscanf_5)
  {
    case 1:
    {
      return_value_get_host_6=get_host(first, first_ip);
      if(!(return_value_get_host_6 == 1))
        return -1;

      *last_ip = *first_ip;
      return 1;
    }
    case 2:
    {
      return_value_get_host_7=get_host(first, first_ip);
      if(!(return_value_get_host_7 == 1))
        return -1;

      return_value_get_host_8=get_host(last, last_ip);
      if(!(return_value_get_host_8 == 1))
        return -1;

      return 2;
    }
    default:
      return -1;
  }
}

// get_network
// file pnscan.c line 919
signed int get_network(char *str, unsigned long int *np)
{
  struct netent *nep;
  struct in_addr ia;
  nep=getnetbyname(str);
  if(!(nep == ((struct netent *)NULL)))
  {
    ia=inet_makeaddr(nep->n_net, (unsigned int)0);
    unsigned int return_value___bswap_32_1;
    return_value___bswap_32_1=__bswap_32(ia.s_addr);
    *np = (unsigned long int)return_value___bswap_32_1;
    return 1;
  }

  signed int return_value_inet_pton_2;
  return_value_inet_pton_2=inet_pton(2, str, (void *)np);
  return return_value_inet_pton_2;
}

// get_port_range
// file pnscan.c line 992
signed int get_port_range(char *str, signed int *first_port, signed int *last_port)
{
  char first[256l];
  char last[256l];
  signed int return_value_sscanf_1;
  return_value_sscanf_1=sscanf(str, "%255[^: ] : %255s", (const void *)first, (const void *)last);
  signed int tmp_statement_expression_2;
  signed int return_value_get_service_4;
  signed int return_value_get_service_5;
  signed int return_value_get_service_6;
  switch(return_value_sscanf_1)
  {
    case 1:
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_3;
      return_value___builtin_strcmp_3=__builtin_strcmp(first, "all");
      tmp_statement_expression_2 = return_value___builtin_strcmp_3;
      if(tmp_statement_expression_2 == 0)
      {
        *first_port = 1;
        *last_port = 65535;
        return 2;
      }

      return_value_get_service_4=get_service(first, first_port);
      if(!(return_value_get_service_4 == 1))
        return -1;

      *last_port = *first_port;
      return 1;
    }
    case 2:
    {
      return_value_get_service_5=get_service(first, first_port);
      if(!(return_value_get_service_5 == 1))
        return -1;

      return_value_get_service_6=get_service(last, last_port);
      if(!(return_value_get_service_6 == 1))
        return -1;

      return 2;
    }
    default:
      return -1;
  }
}

// get_service
// file pnscan.c line 771
signed int get_service(char *str, signed int *pp)
{
  struct servent *sep;
  sep=getservbyname(str, "tcp");
  unsigned short int tmp_statement_expression_1;
  _Bool tmp_if_expr_3;
  if(!(sep == ((struct servent *)NULL)))
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)sep->s_port;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    *pp = (signed int)tmp_statement_expression_1;
    return 1;
  }

  else
  {
    signed int return_value_sscanf_2;
    return_value_sscanf_2=sscanf(str, "%u", pp);
    if(!(return_value_sscanf_2 == 1))
      return -1;

    else
    {
      if(!(*pp >= 1))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = *pp > 65535 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        return 0;

      else
        return 1;
    }
  }
}

// is_text
// file pnscan.c line 309
signed int is_text(unsigned char *cp, signed int slen)
{
  const unsigned short int **return_value___ctype_b_loc_1;
  for( ; slen >= 1; cp = cp + 1l)
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((16384 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*cp]) == 0)
    {
      if(!((signed int)*cp == 0))
      {
        if(!((signed int)*cp == 9))
        {
          if(!((signed int)*cp == 10))
          {
            if(!((signed int)*cp == 13))
              break;

          }

        }

      }

    }

    slen = slen - 1;
  }
  return (signed int)(slen == 0);
}

// main
// file pnscan.c line 1039
signed int main(signed int argc, char **argv)
{
  signed int i;
  signed int j;
  struct rlimit rlb;
  char *arg;
  argv0 = argv[(signed long int)0];
  setlocale(0, "");
  first_port = 0;
  last_port = 0;
  getrlimit(7, &rlb);
  rlb.rlim_cur = rlb.rlim_max;
  setrlimit(7, &rlb);
  signal(13, (void (*)(signed int))1);
  nworkers = (signed int)(rlb.rlim_cur - (unsigned long int)8);
  if(nworkers >= 1025)
    nworkers = 1024;

  pthread_mutex_init(&cur_lock, (const union anonymous_0 *)(void *)0);
  pthread_mutex_init(&print_lock, (const union anonymous_0 *)(void *)0);
  i = 1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  char *return_value___strdup_3;
  char *return_value___strdup_4;
  char *return_value___strdup_5;
  char *return_value___strdup_6;
  char *return_value___strdup_7;
  char *return_value___strdup_8;
  char *return_value___strdup_9;
  char *return_value___strdup_10;
  _Bool tmp_if_expr_12;
  signed int return_value_sscanf_11;
  _Bool tmp_if_expr_14;
  signed int return_value_sscanf_13;
  _Bool tmp_if_expr_16;
  signed int return_value_sscanf_15;
  do
  {
    if(!(i >= argc))
      tmp_if_expr_1 = (signed int)argv[(signed long int)i][(signed long int)0] == 45 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    j = 1;
    do
    {
      if(j >= 1)
        tmp_if_expr_2 = argv[(signed long int)i][(signed long int)j] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      switch((signed int)argv[(signed long int)i][(signed long int)j])
      {
        case 45:
        {
          i = i + 1;
          goto EndOptions;
        }
        case 86:
        {
          print_version(stdout);
          break;
        }
        case 100:
        {
          debug = debug + 1;
          break;
        }
        case 105:
        {
          ignore_case = 1;
          break;
        }
        case 118:
        {
          verbose = verbose + 1;
          break;
        }
        case 104:
        {
          usage(stdout);
          exit(0);
        }
        case 108:
        {
          line_f = line_f + 1;
          break;
        }
        case 115:
        {
          pr_sym = pr_sym + 1;
          break;
        }
        case 83:
        {
          use_shutdown = use_shutdown + 1;
          break;
        }
        case 119:
        {
          if(!(argv[(signed long int)i][2l] == 0))
          {
            return_value___strdup_3=__strdup(argv[(signed long int)i] + (signed long int)2);
            wstr = (unsigned char *)return_value___strdup_3;
          }

          else
          {
            i = i + 1;
            return_value___strdup_4=__strdup(argv[(signed long int)i]);
            wstr = (unsigned char *)return_value___strdup_4;
          }
          wlen=deslash(wstr);
          j = -2;
          break;
        }
        case 87:
        {
          if(!(argv[(signed long int)i][2l] == 0))
          {
            return_value___strdup_5=__strdup(argv[(signed long int)i] + (signed long int)2);
            wstr = (unsigned char *)return_value___strdup_5;
          }

          else
          {
            i = i + 1;
            return_value___strdup_6=__strdup(argv[(signed long int)i]);
            wstr = (unsigned char *)return_value___strdup_6;
          }
          wlen=dehex(wstr);
          j = -2;
          break;
        }
        case 82:
        {
          if(!(argv[(signed long int)i][2l] == 0))
          {
            return_value___strdup_7=__strdup(argv[(signed long int)i] + (signed long int)2);
            rstr = (unsigned char *)return_value___strdup_7;
          }

          else
          {
            i = i + 1;
            return_value___strdup_8=__strdup(argv[(signed long int)i]);
            rstr = (unsigned char *)return_value___strdup_8;
          }
          rlen=dehex(rstr);
          j = -2;
          break;
        }
        case 114:
        {
          if(!(argv[(signed long int)i][2l] == 0))
          {
            return_value___strdup_9=__strdup(argv[(signed long int)i] + (signed long int)2);
            rstr = (unsigned char *)return_value___strdup_9;
          }

          else
          {
            i = i + 1;
            return_value___strdup_10=__strdup(argv[(signed long int)i]);
            rstr = (unsigned char *)return_value___strdup_10;
          }
          rlen=deslash(rstr);
          j = -2;
          break;
        }
        case 76:
        {
          if(!(argv[(signed long int)i][2l] == 0))
            arg = argv[(signed long int)i] + (signed long int)2;

          else
          {
            i = i + 1;
            arg = argv[(signed long int)i];
          }
          if(arg == ((char *)NULL))
            tmp_if_expr_12 = (_Bool)1;

          else
          {
            return_value_sscanf_11=sscanf(arg, "%u", &maxlen);
            tmp_if_expr_12 = return_value_sscanf_11 != 1 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_12)
          {
            fprintf(stderr, "%s: Invalid length specification: %s\n", argv[(signed long int)0], arg != ((char *)NULL) ? arg : "<null>");
            exit(1);
          }

          j = -2;
          break;
        }
        case 116:
        {
          if(!(argv[(signed long int)i][2l] == 0))
            arg = argv[(signed long int)i] + (signed long int)2;

          else
          {
            i = i + 1;
            arg = argv[(signed long int)i];
          }
          if(arg == ((char *)NULL))
            tmp_if_expr_14 = (_Bool)1;

          else
          {
            return_value_sscanf_13=sscanf(arg, "%u", &timeout);
            tmp_if_expr_14 = return_value_sscanf_13 != 1 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_14)
          {
            fprintf(stderr, "%s: Invalid timeout specification: %s\n", argv[(signed long int)0], arg != ((char *)NULL) ? arg : "<null>");
            exit(1);
          }

          j = -2;
          break;
        }
        case 110:
        {
          if(!(argv[(signed long int)i][2l] == 0))
            arg = argv[(signed long int)i] + (signed long int)2;

          else
          {
            i = i + 1;
            arg = argv[(signed long int)i];
          }
          if(arg == ((char *)NULL))
            tmp_if_expr_16 = (_Bool)1;

          else
          {
            return_value_sscanf_15=sscanf(arg, "%u", &nworkers);
            tmp_if_expr_16 = return_value_sscanf_15 != 1 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_16)
          {
            fprintf(stderr, "%s: Invalid workers specification: %s\n", argv[(signed long int)0], arg != ((char *)NULL) ? arg : "<null>");
            exit(1);
          }

          j = -2;
          break;
        }
        default:
        {
          fprintf(stderr, "%s: unknown command line switch: -%c\n", argv[(signed long int)0], argv[(signed long int)i][(signed long int)j]);
          exit(1);
        }
      }
      j = j + 1;
    }
    while((_Bool)1);
    i = i + 1;
  }
  while((_Bool)1);

EndOptions:
  ;
  if(!(rstr == ((unsigned char *)NULL)))
  {
    signed int return_value_bm_init_17;
    return_value_bm_init_17=bm_init(&bmb, rstr, rlen, ignore_case);
    if(!(return_value_bm_init_17 >= 0))
    {
      fprintf(stderr, "%s: Failed search string setup: %s\n", argv[(signed long int)0], rstr);
      exit(1);
    }

  }

  if(!(debug == 0))
    atexit(e_fun);

  if(1 + i == argc || i == argc)
  {
    if(1 + i == argc)
      get_service(argv[(signed long int)i], &first_port);

    f_worker((void *)0);
    pthread_exit((void *)0);
    return 1;
  }

  else
  {
    if(!(2 + i == argc))
    {
      fprintf(stderr, "%s: Missing or extra argument(s). Use '-h' for help.\n", argv[(signed long int)0]);
      exit(1);
    }

    signed int return_value_get_ip_range_18;
    return_value_get_ip_range_18=get_ip_range(argv[(signed long int)i], &first_ip, &last_ip);
    if(!(return_value_get_ip_range_18 >= 1))
    {
      fprintf(stderr, "%s: Invalid IP address range: %s\n", argv[(signed long int)0], argv[(signed long int)i]);
      exit(1);
    }

    signed int return_value_get_port_range_19;
    return_value_get_port_range_19=get_port_range(argv[(signed long int)(i + 1)], &first_port, &last_port);
    if(!(return_value_get_port_range_19 >= 1))
    {
      fprintf(stderr, "%s: Invalid Port range: %s\n", argv[(signed long int)0], argv[(signed long int)(i + 1)]);
      exit(1);
    }

    cur_ip = first_ip;
    cur_port = first_port;
    r_worker((void *)0);
    pthread_exit((void *)0);
    return 1;
  }
}

// preBmBc
// file bm.c line 15
static void preBmBc(unsigned char *x, signed int m, signed int *bmBc)
{
  signed int i = 0;
  for( ; !(i >= 256); i = i + 1)
    bmBc[(signed long int)i] = m;
  i = 0;
  for( ; !(i >= m + -1); i = i + 1)
    bmBc[(signed long int)x[(signed long int)i]] = (m - i) - 1;
}

// preBmGs
// file bm.c line 58
static signed int preBmGs(unsigned char *x, signed int m, signed int *bmGs)
{
  signed int i;
  signed int j;
  signed int *suff;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(sizeof(signed int) /*4ul*/ , (unsigned long int)m);
  suff = (signed int *)return_value_calloc_1;
  _Bool tmp_if_expr_2;
  if(suff == ((signed int *)NULL))
    return -1;

  else
  {
    suffixes(x, m, suff);
    i = 0;
    for( ; !(i >= m); i = i + 1)
      bmGs[(signed long int)i] = m;
    j = 0;
    i = m - 1;
    for( ; i >= -1; i = i - 1)
    {
      if(i == -1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = suff[(signed long int)i] == i + 1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        for( ; !(j >= m + -1 + -i); j = j + 1)
          if(bmGs[(signed long int)j] == m)
            bmGs[(signed long int)j] = (m - 1) - i;


    }
    i = 0;
    for( ; m + -2 >= i; i = i + 1)
      bmGs[(signed long int)((m - 1) - suff[(signed long int)i])] = (m - 1) - i;
    free((void *)suff);
    return 0;
  }
}

// print_host
// file pnscan.c line 223
void print_host(struct _IO_FILE *fp, struct in_addr in, signed int port)
{
  struct hostent *hep = (struct hostent *)(void *)0;
  char *tmp_if_expr_2;
  char *return_value_inet_ntoa_3;
  if(!(pr_sym == 0))
  {
    hep=gethostbyaddr((const void *)(const char *)&in, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);
    char *return_value_inet_ntoa_1;
    return_value_inet_ntoa_1=inet_ntoa(in);
    if(!(hep == ((struct hostent *)NULL)))
      tmp_if_expr_2 = hep->h_name;

    else
      tmp_if_expr_2 = "(unknown)";
    fprintf(fp, "%-15s : %-40s : %5d", return_value_inet_ntoa_1, tmp_if_expr_2, port);
  }

  else
  {
    return_value_inet_ntoa_3=inet_ntoa(in);
    fprintf(fp, "%-15s : %5d", return_value_inet_ntoa_3, port);
  }
}

// print_output
// file pnscan.c line 322
signed int print_output(unsigned char *str, signed int slen)
{
  unsigned char *cp = str;
  signed int len = 0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int return_value_is_text_3;
  if(str == ((unsigned char *)NULL))
  {
    printf("NULL");
    return len;
  }

  else
  {
    if(slen >= 2)
      tmp_if_expr_4 = (signed int)cp[(signed long int)0] == 255 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (signed int)cp[(signed long int)1] >= 236 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      printf("TEL : ");
      while(!(len >= maxlen) && !(len >= slen))
      {
        if((signed int)*cp == 255)
        {
          len = len + 1;
          printf("<IAC>");
          cp = cp + 1l;
          switch((signed int)*cp)
          {
            case 0:
              return len;
            case 254:
            {
              printf("<DONT>");
              break;
            }
            case 253:
            {
              printf("<DO>");
              break;
            }
            case 252:
            {
              printf("<WONT>");
              break;
            }
            case 251:
            {
              printf("<WILL>");
              break;
            }
            case 250:
            {
              printf("<SB>");
              break;
            }
            case 249:
            {
              printf("<GA>");
              break;
            }
            case 248:
            {
              printf("<EL>");
              break;
            }
            case 247:
            {
              printf("<EC>");
              break;
            }
            case 246:
            {
              printf("<AYT>");
              break;
            }
            case 245:
            {
              printf("<AO>");
              break;
            }
            case 244:
            {
              printf("<IP>");
              break;
            }
            case 243:
            {
              printf("<BREAK>");
              break;
            }
            case 242:
            {
              printf("<DM>");
              break;
            }
            case 241:
            {
              printf("<NOP>");
              break;
            }
            case 240:
            {
              printf("<SE>");
              break;
            }
            case 239:
            {
              printf("<EOR>");
              break;
            }
            case 238:
            {
              printf("<ABORT>");
              break;
            }
            case 237:
            {
              printf("<SUSP>");
              break;
            }
            case 236:
            {
              printf("<xEOF>");
              break;
            }
            default:
              printf("<0x%02X>", *cp);
          }
        }

        else
        {
          return_value___ctype_b_loc_1=__ctype_b_loc();
          if(!((16384 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*cp]) == 0))
            putchar((signed int)*cp);

          else
            switch((signed int)*cp)
            {
              case 10:
              {
                if(!(line_f == 0))
                  return len;

                printf("\\n");
                break;
              }
              case 13:
              {
                if(!(line_f == 0))
                  return len;

                printf("\\r");
                break;
              }
              case 9:
              {
                printf("\\t");
                break;
              }
              case 0:
              {
                printf("\\0");
                break;
              }
              default:
                printf("\\x%02X", *cp);
            }
        }
        len = len + 1;
        cp = cp + 1l;
      }
    }

    else
    {
      return_value_is_text_3=is_text(str, slen);
      if(!(return_value_is_text_3 == 0))
      {
        printf("TXT : ");
        while(!(len >= maxlen) && !(len >= slen))
        {
          const unsigned short int **return_value___ctype_b_loc_2;
          return_value___ctype_b_loc_2=__ctype_b_loc();
          if(!((16384 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*str]) == 0))
            putchar((signed int)*str);

          else
            switch((signed int)*str)
            {
              case 0:
              {
                printf("\\0");
                break;
              }
              case 10:
              {
                if(!(line_f == 0))
                  return len;

                printf("\\n");
                break;
              }
              case 13:
              {
                if(!(line_f == 0))
                  return len;

                printf("\\r");
                break;
              }
              case 9:
              {
                printf("\\t");
                break;
              }
              default:
                printf("\\x%02x", *((unsigned char *)str));
            }
          len = len + 1;
          str = str + 1l;
        }
      }

      else
      {
        printf("HEX :");
        for( ; !(len >= maxlen) && !(len >= slen); str = str + 1l)
        {
          printf(" %02x", *((unsigned char *)str));
          len = len + 1;
        }
      }
    }
    return len;
  }
}

// print_version
// file pnscan.c line 85
void print_version(struct _IO_FILE *fp)
{
  fprintf(fp, "[PNScan, version %s - %s %s]\n", (const void *)version, (const void *)"Jan 26 2016", (const void *)"02:49:32");
}

// probe
// file pnscan.c line 530
signed int probe(unsigned long int addr, signed int port)
{
  signed int fd;
  signed int code;
  signed int len;
  struct sockaddr_in sin;
  unsigned char buf[1024l];
  struct pollfd pfd;
  fd=socket(2, 1, 0);
  unsigned short int tmp_statement_expression_1;
  signed int *return_value___errno_location_2;
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_7;
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_5;
  signed int *return_value___errno_location_12;
  if(!(fd >= 0))
    return -1;

  else
  {
    memset((void *)&sin, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    sin.sin_family = (unsigned short int)2;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)port;
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_1 = __v;
    sin.sin_port = tmp_statement_expression_1;
    sin.sin_addr.s_addr=__bswap_32((unsigned int)addr);
    code=fcntl(fd, 3, 0);
    if(!(code >= 0))
    {
      close(fd);
      return -1;
    }

    else
    {
      code=fcntl(fd, 4, code | 04000);
      if(!(code >= 0))
      {
        close(fd);
        return -1;
      }

      else
      {
        do
        {
          code=connect(fd, (struct sockaddr *)&sin, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
          if(code >= 0)
            break;

          return_value___errno_location_2=__errno_location();
          if(!(*return_value___errno_location_2 == 4))
            break;

          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 0;
        }
        while((_Bool)1);
        if(!(code >= 0))
        {
          return_value___errno_location_7=__errno_location();
          if(*return_value___errno_location_7 == 115)
          {
            pfd.fd = fd;
            pfd.events = (signed short int)0x004;
            pfd.revents = (signed short int)0;
            do
            {
              code=poll(&pfd, (unsigned long int)1, timeout);
              if(code >= 0)
                break;

              return_value___errno_location_4=__errno_location();
              if(!(*return_value___errno_location_4 == 4))
                break;

              return_value___errno_location_5=__errno_location();
              *return_value___errno_location_5 = 0;
            }
            while((_Bool)1);
            if(code == 0)
            {
              code = -1;
              signed int *return_value___errno_location_6;
              return_value___errno_location_6=__errno_location();
              *return_value___errno_location_6 = 110;
            }

          }

        }

        if(!(code >= 0))
        {
          if(!(verbose == 0))
          {
            pthread_mutex_lock(&print_lock);
            print_host(stderr, sin.sin_addr, port);
            signed int *return_value___errno_location_8;
            return_value___errno_location_8=__errno_location();
            char *return_value_strerror_9;
            return_value_strerror_9=strerror(*return_value___errno_location_8);
            fprintf(stderr, " : ERR : connect() failed: %s\n", return_value_strerror_9);
            pthread_mutex_unlock(&print_lock);
          }

          close(fd);
          return 0;
        }

        else
          if(!(wstr == ((unsigned char *)NULL)))
          {
            code=t_write(fd, wstr, wlen);
            if(code >= 0)
              goto __CPROVER_DUMP_L14;

            if(!(verbose == 0))
            {
              pthread_mutex_lock(&print_lock);
              print_host(stderr, sin.sin_addr, port);
              signed int *return_value___errno_location_10;
              return_value___errno_location_10=__errno_location();
              char *return_value_strerror_11;
              return_value_strerror_11=strerror(*return_value___errno_location_10);
              fprintf(stderr, " : ERR : write() failed: %s\n", return_value_strerror_11);
              pthread_mutex_unlock(&print_lock);
            }

            close(fd);
            return 0;
          }

          else
          {

          __CPROVER_DUMP_L14:
            ;
            if(!(use_shutdown == 0))
              shutdown(fd, 1);

            do
            {
              len=t_read(fd, buf, (signed int)(sizeof(unsigned char [1024l]) /*1024ul*/  - (unsigned long int)1));
              if(len >= 0)
                break;

              return_value___errno_location_12=__errno_location();
              if(!(*return_value___errno_location_12 == 4))
                break;

            }
            while((_Bool)1);
            if(!(len >= 0))
            {
              if(!(verbose == 0))
              {
                pthread_mutex_lock(&print_lock);
                print_host(stderr, sin.sin_addr, port);
                signed int *return_value___errno_location_13;
                return_value___errno_location_13=__errno_location();
                char *return_value_strerror_14;
                return_value_strerror_14=strerror(*return_value___errno_location_13);
                fprintf(stderr, " : ERR : read() failed: %s\n", return_value_strerror_14);
                pthread_mutex_unlock(&print_lock);
              }

              close(fd);
              return -1;
            }

            else
            {
              buf[(signed long int)len] = (unsigned char)0;
              if(!(rstr == ((unsigned char *)NULL)))
              {
                signed int pos;
                pos=bm_search(&bmb, buf, len, (signed int (*)(void *, signed int, signed int))(void *)0);
                if(pos >= 0)
                {
                  if(!(line_f == 0))
                    for( ; pos >= 1; pos = pos - 1)
                    {
                      if((signed int)buf[(signed long int)(pos + -1)] == 10)
                        break;

                      if((signed int)buf[(signed long int)(pos + -1)] == 13)
                        break;

                    }

                  pthread_mutex_lock(&print_lock);
                  print_host(stdout, sin.sin_addr, port);
                  printf(" : ");
                  print_output(buf + (signed long int)pos, len - pos);
                  putchar(10);
                  pthread_mutex_unlock(&print_lock);
                }

              }

              else
              {
                pthread_mutex_lock(&print_lock);
                print_host(stdout, sin.sin_addr, port);
                printf(" : ");
                print_output(buf, len);
                putchar(10);
                pthread_mutex_unlock(&print_lock);
              }
              close(fd);
              return 1;
            }
          }
      }
    }
  }
}

// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c)
{
  signed int return_value__IO_putc_1;
  return_value__IO_putc_1=_IO_putc(__c, stdout);
  return return_value__IO_putc_1;
}

// r_worker
// file pnscan.c line 691
void * r_worker(void *arg)
{
  unsigned long int addr;
  signed int port;
  unsigned long int tid;
  pthread_mutex_lock(&cur_lock);
  unsigned long int tmp_post_1;
  for( ; stop == 0; aworkers = aworkers - 1)
  {
    if(last_ip >= cur_ip)
    {
      port = cur_port;
      tmp_post_1 = cur_ip;
      cur_ip = cur_ip + 1ul;
      addr = tmp_post_1;
    }

    else
    {
      if(cur_port >= last_port)
      {
        stop = 1;
        break;
      }

      cur_port = cur_port + 1;
      port = cur_port;
      cur_ip = first_ip;
      addr = cur_ip;
    }
    if(aworkers >= tworkers + -1 && !(tworkers >= nworkers))
    {
      tworkers = tworkers + 1;
      signed int return_value_pthread_create_2;
      return_value_pthread_create_2=pthread_create(&tid, (const union pthread_attr_t *)(void *)0, r_worker, (void *)0);
      if(!(return_value_pthread_create_2 == 0))
      {
        tworkers = tworkers - 1;
        nworkers = tworkers;
      }

      if(!(mworkers >= tworkers))
        mworkers = tworkers;

    }

    aworkers = aworkers + 1;
    pthread_mutex_unlock(&cur_lock);
    probe(addr, port);
    pthread_mutex_lock(&cur_lock);
  }
  tworkers = tworkers - 1;
  pthread_mutex_unlock(&cur_lock);
  fflush(stdout);
  return (void *)0;
}

// suffixes
// file bm.c line 30
static void suffixes(unsigned char *x, signed int m, signed int *suff)
{
  signed int f;
  signed int g;
  signed int i;
  f = 0;
  suff[(signed long int)(m - 1)] = m;
  g = m - 1;
  i = m - 2;
  _Bool tmp_if_expr_1;
  for( ; i >= 0; i = i - 1)
  {
    if(!(g >= i))
      tmp_if_expr_1 = suff[(signed long int)(((i + m) - 1) - f)] < i - g ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      suff[(signed long int)i] = suff[(signed long int)(((i + m) - 1) - f)];

    else
    {
      if(!(i >= g))
        g = i;

      f = i;
      for( ; g >= 0; g = g - 1)
        if(!(x[(signed long int)g] == x[(signed long int)(g + m + -1 + -f)]))
          break;

      suff[(signed long int)i] = f - g;
    }
  }
}

// t_read
// file pnscan.c line 281
signed int t_read(signed int fd, unsigned char *buf, signed int size)
{
  signed int len;
  signed int code;
  struct pollfd pfd;
  pfd.fd = fd;
  pfd.events = (signed short int)0x001;
  pfd.revents = (signed short int)0;
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_2;
  do
  {
    code=poll(&pfd, (unsigned long int)1, timeout);
    if(code >= 0)
      break;

    return_value___errno_location_1=__errno_location();
    if(!(*return_value___errno_location_1 == 4))
      break;

    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 0;
  }
  while((_Bool)1);
  if(code == 0)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 110;
    return -1;
  }

  signed long int return_value_read_4;
  signed int *return_value___errno_location_5;
  do
  {
    return_value_read_4=read(fd, (void *)buf, (unsigned long int)size);
    len = (signed int)return_value_read_4;
    if(len >= 0)
      break;

    return_value___errno_location_5=__errno_location();
    if(!(*return_value___errno_location_5 == 4))
      break;

  }
  while((_Bool)1);
  return len;
}

// t_write
// file pnscan.c line 242
signed int t_write(signed int fd, unsigned char *buf, signed int len)
{
  signed int tw;
  signed int wl;
  signed int code;
  struct pollfd pfd;
  tw = len;
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_2;
  signed long int return_value_write_4;
  signed int *return_value___errno_location_5;
  while(tw >= 1)
  {
    pfd.fd = fd;
    pfd.events = (signed short int)0x004;
    pfd.revents = (signed short int)0;
    do
    {
      code=poll(&pfd, (unsigned long int)1, timeout);
      if(code >= 0)
        break;

      return_value___errno_location_1=__errno_location();
      if(!(*return_value___errno_location_1 == 4))
        break;

      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 0;
    }
    while((_Bool)1);
    if(code == 0)
    {
      code = -1;
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 110;
    }

    do
    {
      return_value_write_4=write(fd, (const void *)buf, (unsigned long int)tw);
      wl = (signed int)return_value_write_4;
      if(wl >= 0)
        break;

      return_value___errno_location_5=__errno_location();
      if(!(*return_value___errno_location_5 == 4))
        break;

    }
    while((_Bool)1);
    if(!(wl >= 0))
      return wl;

    tw = tw - wl;
    buf = buf + (signed long int)wl;
  }
  return len;
}

// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c)
{
  signed int tmp_if_expr_2;
  const signed int **return_value___ctype_tolower_loc_1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_tolower_loc_1=__ctype_tolower_loc();
    tmp_if_expr_2 = (*return_value___ctype_tolower_loc_1)[(signed long int)__c];
  }

  else
    tmp_if_expr_2 = __c;
  return tmp_if_expr_2;
}

// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c)
{
  signed int tmp_if_expr_2;
  const signed int **return_value___ctype_toupper_loc_1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_toupper_loc_1=__ctype_toupper_loc();
    tmp_if_expr_2 = (*return_value___ctype_toupper_loc_1)[(signed long int)__c];
  }

  else
    tmp_if_expr_2 = __c;
  return tmp_if_expr_2;
}

// usage
// file pnscan.c line 889
void usage(struct _IO_FILE *out)
{
  fprintf(out, "Usage: %s [<options>] [{<CIDR>|<host-range> <port-range>} | <service>]\n", argv0);
  fputs("\nThis program implements a multithreaded TCP port scanner.\nMore information may be found at:\n\thttp://www.lysator.liu.se/~pen/pnscan\n\nCommand line options:\n", out);
  fprintf(out, "\t-h             Display this information.\n");
  fprintf(out, "\t-V             Print version.\n");
  fprintf(out, "\t-v             Be verbose.\n");
  fprintf(out, "\t-d             Print debugging info.\n");
  fprintf(out, "\t-s             Lookup and print hostnames.\n");
  fprintf(out, "\t-i             Ignore case when scanning responses.\n");
  fprintf(out, "\t-S             Enable shutdown mode.\n");
  fprintf(out, "\t-l             Line oriented output.\n");
  fprintf(out, "\t-w<string>     Request string to send.\n");
  fprintf(out, "\t-W<hex list>   Hex coded request string to send.\n");
  fprintf(out, "\t-r<string>     Response string to look for.\n");
  fprintf(out, "\t-R<hex list>   Hex coded response string to look for.\n");
  fprintf(out, "\t-L<length>     Max bytes to print.\n");
  fprintf(out, "\t-t<msecs>      Connect/Write/Read timeout.\n");
  fprintf(out, "\t-n<workers>    Concurrent worker threads limit.\n");
}

