// #anon_enum$eINVALID_NODE=0$eELEMENT_NODE=1$eATTRIBUTE_NODE=2$eTEXT_NODE=3$eCDATA_SECTION_NODE=4$eENTITY_REFERENCE_NODE=5$eENTITY_NODE=6$ePROCESSING_INSTRUCTION_NODE=7$eCOMMENT_NODE=8$eDOCUMENT_NODE=9$eDOCUMENT_TYPE_NODE=10$eDOCUMENT_FRAGMENT_NODE=11$eNOTATION_NODE=12
// file /usr/include/upnp/ixml.h line 103
enum anonymous { eINVALID_NODE=0, eELEMENT_NODE=1, eATTRIBUTE_NODE=2, eTEXT_NODE=3, eCDATA_SECTION_NODE=4, eENTITY_REFERENCE_NODE=5, eENTITY_NODE=6, ePROCESSING_INSTRUCTION_NODE=7, eCOMMENT_NODE=8, eDOCUMENT_NODE=9, eDOCUMENT_TYPE_NODE=10, eDOCUMENT_FRAGMENT_NODE=11, eNOTATION_NODE=12 };

// tag-#anon#ST[*{S8}$S8$'interface'||*{S8}$S8$'image'||S32'daemon'||S32'help'|]
// file wmaloader.c line 70
struct anonymous$3;

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$0;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$4;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

// tag-FREELIST
// file /usr/include/upnp/FreeList.h line 61
struct FREELIST;

// tag-FREELISTNODE
// file /usr/include/upnp/FreeList.h line 52
struct FREELISTNODE;

// tag-LINKEDLIST
// file /usr/include/upnp/LinkedList.h line 83
struct LINKEDLIST;

// tag-LISTNODE
// file /usr/include/upnp/LinkedList.h line 60
struct LISTNODE;

// tag-Upnp_Discovery
// file /usr/include/upnp/upnp.h line 727
struct Upnp_Discovery;

// tag-Upnp_EventType_e
// file /usr/include/upnp/upnp.h line 444
enum Upnp_EventType_e { UPNP_CONTROL_ACTION_REQUEST=0, UPNP_CONTROL_ACTION_COMPLETE=1, UPNP_CONTROL_GET_VAR_REQUEST=2, UPNP_CONTROL_GET_VAR_COMPLETE=3, UPNP_DISCOVERY_ADVERTISEMENT_ALIVE=4, UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE=5, UPNP_DISCOVERY_SEARCH_RESULT=6, UPNP_DISCOVERY_SEARCH_TIMEOUT=7, UPNP_EVENT_SUBSCRIPTION_REQUEST=8, UPNP_EVENT_RECEIVED=9, UPNP_EVENT_RENEWAL_COMPLETE=10, UPNP_EVENT_SUBSCRIBE_COMPLETE=11, UPNP_EVENT_UNSUBSCRIBE_COMPLETE=12, UPNP_EVENT_AUTORENEWAL_FAILED=13, UPNP_EVENT_SUBSCRIPTION_EXPIRED=14 };

// tag-_IXML_Document
// file /usr/include/upnp/ixml.h line 156
struct _IXML_Document;

// tag-_IXML_Element
// file /usr/include/upnp/ixml.h line 205
struct _IXML_Element;

// tag-_IXML_Node
// file /usr/include/upnp/ixml.h line 159
struct _IXML_Node;

// tag-_IXML_NodeList
// file /usr/include/upnp/ixml.h line 235
struct _IXML_NodeList;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// BootDevice
// file wmaloader.c line 193
void BootDevice(struct Upnp_Discovery *device);
// DoWork
// file wmaloader.c line 364
void DoWork();
// ListAddTail
// file /usr/include/upnp/LinkedList.h line 137
struct LISTNODE * ListAddTail(struct LINKEDLIST *, void *);
// ListDelNode
// file /usr/include/upnp/LinkedList.h line 183
void * ListDelNode(struct LINKEDLIST *, struct LISTNODE *, signed int);
// ListFind
// file /usr/include/upnp/LinkedList.h line 265
struct LISTNODE * ListFind(struct LINKEDLIST *, struct LISTNODE *, void *);
// ListHead
// file /usr/include/upnp/LinkedList.h line 214
struct LISTNODE * ListHead(struct LINKEDLIST *);
// ListInit
// file /usr/include/upnp/LinkedList.h line 106
signed int ListInit(struct LINKEDLIST *, signed int (*)(void *, void *), void (*)(void *));
// LoaderCallbackFunc
// file wmaloader.c line 234
signed int LoaderCallbackFunc(enum Upnp_EventType_e EventType, void *Event, void *Cookie);
// QueryDevice
// file wmaloader.c line 132
signed int QueryDevice(struct Upnp_Discovery *device);
// SendAction
// file wmaloader.c line 92
struct _IXML_Document * SendAction(char *action_name, char *service_type, char *control_url, signed int count, ...);
// UpnpAddToAction
// file /usr/include/upnp/upnptools.h line 193
signed int UpnpAddToAction(struct _IXML_Document **, const char *, const char *, const char *, const char *);
// UpnpFinish
// file /usr/include/upnp/upnp.h line 977
signed int UpnpFinish(void);
// UpnpGetErrorMessage
// file /usr/include/upnp/upnptools.h line 72
const char * UpnpGetErrorMessage(signed int);
// UpnpGetServerIpAddress
// file /usr/include/upnp/upnp.h line 1017
char * UpnpGetServerIpAddress(void);
// UpnpGetServerPort
// file /usr/include/upnp/upnp.h line 990
unsigned short int UpnpGetServerPort(void);
// UpnpInit
// file /usr/include/upnp/upnp.h line 907
signed int UpnpInit(const char *, unsigned short int);
// UpnpMakeAction
// file /usr/include/upnp/upnptools.h line 137
struct _IXML_Document * UpnpMakeAction(const char *, const char *, signed int, const char *, ...);
// UpnpRegisterClient
// file /usr/include/upnp/upnp.h line 1339
signed int UpnpRegisterClient(signed int (*)(enum Upnp_EventType_e, void *, void *), const void *, signed int *);
// UpnpResolveURL
// file /usr/include/upnp/upnptools.h line 91
signed int UpnpResolveURL(const char *, const char *, char *);
// UpnpSearchAsync
// file /usr/include/upnp/upnp.h line 1440
signed int UpnpSearchAsync(signed int, signed int, const char *, const void *);
// UpnpSendAction
// file /usr/include/upnp/upnp.h line 1611
signed int UpnpSendAction(signed int, const char *, const char *, const char *, struct _IXML_Document *, struct _IXML_Document **);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// accept_new_connection
// file image_transfer.c line 115
void accept_new_connection();
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// daemonise
// file wmaloader.c line 443
signed int daemonise();
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getsockname
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 127
extern signed int getsockname(signed int, struct sockaddr *, unsigned int *);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// initialise_image_transfer
// file wmaloader.c line 311
signed int initialise_image_transfer();
// initialise_sync_variables
// file wmaloader.c line 342
signed int initialise_sync_variables();
// initialise_upnp_library
// file wmaloader.c line 284
signed int initialise_upnp_library();
// it_get_image_size
// file image_transfer.h line 26
signed int it_get_image_size();
// it_get_port
// file image_transfer.h line 25
signed int it_get_port();
// it_init
// file image_transfer.h line 24
signed int it_init(const char *interface, const char *source_file);
// it_thread_entry
// file image_transfer.h line 27
void * it_thread_entry(void *cookie);
// ixmlDocument_free
// file /usr/include/upnp/ixml.h line 1047
void ixmlDocument_free(struct _IXML_Document *);
// ixmlDocument_getElementById
// file /usr/include/upnp/ixml.h line 1033
struct _IXML_Element * ixmlDocument_getElementById(struct _IXML_Document *, const char *);
// ixmlElement_getElementsByTagName
// file /usr/include/upnp/ixml.h line 1252
struct _IXML_NodeList * ixmlElement_getElementsByTagName(struct _IXML_Element *, const char *);
// ixmlNodeList_item
// file /usr/include/upnp/ixml.h line 1591
struct _IXML_Node * ixmlNodeList_item(struct _IXML_NodeList *, unsigned long int);
// ixmlNode_getFirstChild
// file /usr/include/upnp/ixml.h line 357
struct _IXML_Node * ixmlNode_getFirstChild(struct _IXML_Node *);
// ixmlNode_getNodeValue
// file /usr/include/upnp/ixml.h line 292
const char * ixmlNode_getNodeValue(struct _IXML_Node *);
// list_compare_func
// file wmaloader.c line 350
signed int list_compare_func(void *a, void *b);
// list_free_func
// file wmaloader.c line 358
void list_free_func(void *item);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file wmaloader.c line 251 function LoaderCallbackFunc
signed int memcpy(void);
// message
// file common.h line 28
void message(char *format, ...);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_command_line
// file wmaloader.c line 386
signed int parse_command_line(signed int argc, char **argv);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// print_usage
// file wmaloader.c line 430
void print_usage();
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous$2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$0 *, struct anonymous$0 *, struct anonymous$0 *, struct timeval *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$4 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$4 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$4 *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcmp
// file wmaloader.c line 164 function QueryDevice
signed int strcmp(void);
// strlen
// file wmaloader.c line 85 function urlcat
signed int strlen(void);
// strncmp
// file wmaloader.c line 244 function LoaderCallbackFunc
signed int strncmp(void);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// transfer_data
// file image_transfer.c line 153
void transfer_data();
// urlcat
// file wmaloader.c line 81
char * urlcat(char *a, char *b);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);

struct anonymous$3
{
  // interface
  char *interface;
  // image
  char *image;
  // daemon
  signed int daemon;
  // help
  signed int help;
};

struct anonymous$0
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

union anonymous$4
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
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

struct FREELIST
{
  // head
  struct FREELISTNODE *head;
  // element_size
  unsigned long int element_size;
  // maxFreeListLength
  signed int maxFreeListLength;
  // freeListLength
  signed int freeListLength;
};

struct FREELISTNODE
{
  // next
  struct FREELISTNODE *next;
};

struct LISTNODE
{
  // prev
  struct LISTNODE *prev;
  // next
  struct LISTNODE *next;
  // item
  void *item;
};

struct LINKEDLIST
{
  // head
  struct LISTNODE head;
  // tail
  struct LISTNODE tail;
  // size
  signed long int size;
  // freeNodeList
  struct FREELIST freeNodeList;
  // free_func
  void (*free_func)(void *);
  // cmp_func
  signed int (*cmp_func)(void *, void *);
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

struct Upnp_Discovery
{
  // ErrCode
  signed int ErrCode;
  // Expires
  signed int Expires;
  // DeviceId
  char DeviceId[180l];
  // DeviceType
  char DeviceType[180l];
  // ServiceType
  char ServiceType[180l];
  // ServiceVer
  char ServiceVer[180l];
  // Location
  char Location[180l];
  // Os
  char Os[180l];
  // Date
  char Date[180l];
  // Ext
  char Ext[180l];
  // DestAddr
  struct sockaddr_storage DestAddr;
};

struct _IXML_Node
{
  // nodeName
  char *nodeName;
  // nodeValue
  char *nodeValue;
  // nodeType
  enum anonymous nodeType;
  // namespaceURI
  char *namespaceURI;
  // prefix
  char *prefix;
  // localName
  char *localName;
  // readOnly
  signed int readOnly;
  // parentNode
  struct _IXML_Node *parentNode;
  // firstChild
  struct _IXML_Node *firstChild;
  // prevSibling
  struct _IXML_Node *prevSibling;
  // nextSibling
  struct _IXML_Node *nextSibling;
  // firstAttr
  struct _IXML_Node *firstAttr;
  // ownerDocument
  struct _IXML_Document *ownerDocument;
};

struct _IXML_Document
{
  // n
  struct _IXML_Node n;
};

struct _IXML_Element
{
  // n
  struct _IXML_Node n;
  // tagName
  char *tagName;
};

struct _IXML_NodeList
{
  // nodeItem
  struct _IXML_Node *nodeItem;
  // next
  struct _IXML_NodeList *next;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// address
// file image_transfer.c line 43
struct sockaddr_in address;
// backgrounded
// file wmaloader.c line 78
signed int backgrounded = 0;
// client_sock
// file image_transfer.c line 39
signed int client_sock = 0;
// ctrlhandle
// file wmaloader.c line 60
signed int ctrlhandle;
// discoveries
// file wmaloader.c line 63
struct LINKEDLIST discoveries;
// global_options
// file wmaloader.c line 75
struct anonymous$3 global_options;
// is_work_to_do
// file wmaloader.c line 67
union anonymous$4 is_work_to_do;
// list_mutex
// file wmaloader.c line 66
union anonymous$1 list_mutex;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// sock
// file image_transfer.c line 38
signed int sock;
// source
// file image_transfer.c line 41
const char *source;
// source_fd
// file image_transfer.c line 40
signed int source_fd = 0;

// BootDevice
// file wmaloader.c line 193
void BootDevice(struct Upnp_Discovery *device)
{
  char image_uri[128l];
  char image_size[10l];
  signed int ret = 0;
  struct _IXML_Document *action = (struct _IXML_Document *)(void *)0;
  struct _IXML_Document *response = (struct _IXML_Document *)(void *)0;
  signed int return_value_it_get_image_size$1;
  return_value_it_get_image_size$1=it_get_image_size();
  snprintf(image_size, (unsigned long int)10, "%d", return_value_it_get_image_size$1);
  char *return_value_UpnpGetServerIpAddress$2;
  return_value_UpnpGetServerIpAddress$2=UpnpGetServerIpAddress();
  signed int return_value_it_get_port$3;
  return_value_it_get_port$3=it_get_port();
  snprintf(image_uri, (unsigned long int)128, "uri://%s:%d", return_value_UpnpGetServerIpAddress$2, return_value_it_get_port$3);
  action=UpnpMakeAction("SetApplicationPackageURI", "urn:schemas-upnp-org:service:ApplicationTransferService:1", 2, "ApplicationURI", (const void *)image_uri, (const void *)"ImageLength", (const void *)image_size);
  if(action == ((struct _IXML_Document *)NULL))
    message("Unable to create action IXML document\n");

  else
  {
    message("Booting %s\n", (const void *)device->DeviceId);
    char *return_value_urlcat$4;
    return_value_urlcat$4=urlcat(device->Location, "/ApplicationTransferService/control");
    ret=UpnpSendAction(ctrlhandle, return_value_urlcat$4, "urn:schemas-upnp-org:service:ApplicationTransferService:1", (const char *)(void *)0, action, &response);
    if(!(action == ((struct _IXML_Document *)NULL)))
      ixmlDocument_free(action);

    if(!(response == ((struct _IXML_Document *)NULL)))
      ixmlDocument_free(response);

  }
}

// DoWork
// file wmaloader.c line 364
void DoWork()
{
  struct Upnp_Discovery *device = (struct Upnp_Discovery *)(void *)0;
  pthread_mutex_lock(&list_mutex);
  struct LISTNODE *return_value_ListHead$2;
  return_value_ListHead$2=ListHead(&discoveries);
  struct LISTNODE *return_value_ListHead$1;
  if(!(return_value_ListHead$2 == ((struct LISTNODE *)NULL)))
  {
    return_value_ListHead$1=ListHead(&discoveries);
    device = (struct Upnp_Discovery *)return_value_ListHead$1->item;
  }

  pthread_mutex_unlock(&list_mutex);
  if(!(device == ((struct Upnp_Discovery *)NULL)))
  {
    signed int return_value_QueryDevice$3;
    return_value_QueryDevice$3=QueryDevice(device);
    if(!(return_value_QueryDevice$3 == 0))
      BootDevice(device);

    pthread_mutex_lock(&list_mutex);
    struct LISTNODE *return_value_ListHead$4;
    return_value_ListHead$4=ListHead(&discoveries);
    ListDelNode(&discoveries, return_value_ListHead$4, 1);
    pthread_mutex_unlock(&list_mutex);
  }

}

// LoaderCallbackFunc
// file wmaloader.c line 234
signed int LoaderCallbackFunc(enum Upnp_EventType_e EventType, void *Event, void *Cookie)
{
  struct Upnp_Discovery *device;
  signed int return_value_strncmp$3;
  switch((signed int)EventType)
  {
    case UPNP_DISCOVERY_ADVERTISEMENT_ALIVE:

    case UPNP_DISCOVERY_SEARCH_RESULT:
    {
      device = (struct Upnp_Discovery *)Event;
      return_value_strncmp$3=strncmp((const void *)device->DeviceType, (const void *)"urn:schemas-upnp-org:device:AppLoaderClient:1", sizeof(char [46l]) /*46ul*/ );
      if(return_value_strncmp$3 == 0)
      {
        void *return_value_malloc$1;
        return_value_malloc$1=malloc(sizeof(struct Upnp_Discovery) /*1576ul*/ );
        device = (struct Upnp_Discovery *)return_value_malloc$1;
        if(device == ((struct Upnp_Discovery *)NULL))
          goto __CPROVER_DUMP_L6;

        memcpy(device, Event, sizeof(struct Upnp_Discovery) /*1576ul*/ );
        pthread_mutex_lock(&list_mutex);
        struct LISTNODE *return_value_ListFind$2;
        return_value_ListFind$2=ListFind(&discoveries, (struct LISTNODE *)(void *)0, (void *)&device);
        if(return_value_ListFind$2 == ((struct LISTNODE *)NULL))
        {
          ListAddTail(&discoveries, (void *)device);
          sem_post(&is_work_to_do);
        }

        pthread_mutex_unlock(&list_mutex);
      }

      goto __CPROVER_DUMP_L6;
    }
    case UPNP_EVENT_RECEIVED:

    case UPNP_CONTROL_ACTION_REQUEST:

    case UPNP_CONTROL_ACTION_COMPLETE:

    case UPNP_CONTROL_GET_VAR_REQUEST:

    case UPNP_CONTROL_GET_VAR_COMPLETE:

    case UPNP_DISCOVERY_SEARCH_TIMEOUT:

    case UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE:

    case UPNP_EVENT_SUBSCRIPTION_REQUEST:

    case UPNP_EVENT_RENEWAL_COMPLETE:

    case UPNP_EVENT_SUBSCRIBE_COMPLETE:

    case UPNP_EVENT_UNSUBSCRIBE_COMPLETE:

    case UPNP_EVENT_AUTORENEWAL_FAILED:

    case UPNP_EVENT_SUBSCRIPTION_EXPIRED:
      ;
    default:
    {

    __CPROVER_DUMP_L6:
      ;
      return 0;
    }
  }
}

// QueryDevice
// file wmaloader.c line 132
signed int QueryDevice(struct Upnp_Discovery *device)
{
  struct _IXML_Document *response = (struct _IXML_Document *)(void *)0;
  message("Querying %s\n", (const void *)device->DeviceId);
  char *return_value_urlcat$1;
  return_value_urlcat$1=urlcat(device->Location, "/ApplicationTransferService/control");
  response=SendAction("GetTransferState", "urn:schemas-upnp-org:service:ApplicationTransferService:1", return_value_urlcat$1, 0);
  if(response == ((struct _IXML_Document *)NULL))
    message("Failed response to GetTransferState()");

  else
  {
    signed int do_boot = 1;
    char *state;
    struct _IXML_Element *return_value_ixmlDocument_getElementById$2;
    return_value_ixmlDocument_getElementById$2=ixmlDocument_getElementById(response, "TransferState");
    struct _IXML_NodeList *return_value_ixmlElement_getElementsByTagName$3;
    return_value_ixmlElement_getElementsByTagName$3=ixmlElement_getElementsByTagName(return_value_ixmlDocument_getElementById$2, "*");
    struct _IXML_Node *return_value_ixmlNodeList_item$4;
    return_value_ixmlNodeList_item$4=ixmlNodeList_item(return_value_ixmlElement_getElementsByTagName$3, (unsigned long int)0);
    struct _IXML_Node *return_value_ixmlNode_getFirstChild$5;
    return_value_ixmlNode_getFirstChild$5=ixmlNode_getFirstChild(return_value_ixmlNodeList_item$4);
    state=ixmlNode_getNodeValue(return_value_ixmlNode_getFirstChild$5);
    message("Device reports state: %s\n", state);
    signed int return_value_strcmp$6;
    return_value_strcmp$6=strcmp(state, (const void *)"NOT_STARTED");
    if(!(return_value_strcmp$6 == 0))
      do_boot = 0;

    ixmlDocument_free(response);
    if(do_boot == 0)
      return 0;

  }
  char *return_value_urlcat$7;
  return_value_urlcat$7=urlcat(device->Location, "/AdapterInfoService/control");
  response=SendAction("GetExtDeviceDescription", "urn:schemas-upnp-org:service:AdapterInfoService:1", return_value_urlcat$7, 0);
  if(response == ((struct _IXML_Document *)NULL))
    message("Failed response to GetExtDeviceDescription()");

  else
  {
    struct _IXML_Element *return_value_ixmlDocument_getElementById$8;
    return_value_ixmlDocument_getElementById$8=ixmlDocument_getElementById(response, "version");
    struct _IXML_NodeList *return_value_ixmlElement_getElementsByTagName$9;
    return_value_ixmlElement_getElementsByTagName$9=ixmlElement_getElementsByTagName(return_value_ixmlDocument_getElementById$8, "*");
    struct _IXML_Node *return_value_ixmlNodeList_item$10;
    return_value_ixmlNodeList_item$10=ixmlNodeList_item(return_value_ixmlElement_getElementsByTagName$9, (unsigned long int)0);
    struct _IXML_Node *return_value_ixmlNode_getFirstChild$11;
    return_value_ixmlNode_getFirstChild$11=ixmlNode_getFirstChild(return_value_ixmlNodeList_item$10);
    const char *return_value_ixmlNode_getNodeValue$12;
    return_value_ixmlNode_getNodeValue$12=ixmlNode_getNodeValue(return_value_ixmlNode_getFirstChild$11);
    message("Device reports firmware version: %s\n", return_value_ixmlNode_getNodeValue$12);
    ixmlDocument_free(response);
  }
  return 1;
}

// SendAction
// file wmaloader.c line 92
struct _IXML_Document * SendAction(char *action_name, char *service_type, char *control_url, signed int count, ...)
{
  signed int ret;
  signed int n;
  __builtin_va_list va;
  struct _IXML_Document *action = (struct _IXML_Document *)(void *)0;
  struct _IXML_Document *response = (struct _IXML_Document *)(void *)0;
  action=UpnpMakeAction(action_name, service_type, 0, (const char *)(void *)0);
  va_start(va, count);
  n = 0;
  for( ; !(n >= count); n = n + 1)
  {
    char *arg_name;
    char *arg_val;
    arg_name=va_arg(va, __typeof__(arg_name));
    arg_val=va_arg(va, __typeof__(arg_val));
    UpnpAddToAction(&action, action_name, service_type, arg_name, arg_val);
  }
  va_end(va);
  ret=UpnpSendAction(ctrlhandle, control_url, service_type, (const char *)(void *)0, action, &response);
  if(!(action == ((struct _IXML_Document *)NULL)))
    ixmlDocument_free(action);

  if(!(ret == 0))
  {
    const char *return_value_UpnpGetErrorMessage$1;
    return_value_UpnpGetErrorMessage$1=UpnpGetErrorMessage(ret);
    message("Unable to send action: %d (%s)\n", ret, return_value_UpnpGetErrorMessage$1);
    if(!(response == ((struct _IXML_Document *)NULL)))
      ixmlDocument_free(response);

    return (struct _IXML_Document *)(void *)0;
  }

  return response;
}

// accept_new_connection
// file image_transfer.c line 115
void accept_new_connection()
{
  struct sockaddr_in addr;
  signed int len = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
  signed int new_socket;
  signed int temp_fd;
  /* assertion client_sock == 0 */
  assert(client_sock == 0);
  /* assertion source_fd == 0 */
  assert(source_fd == 0);
  new_socket=accept(sock, (struct sockaddr *)&addr, (unsigned int *)&len);
  if(new_socket == -1)
    perror("accept_new_connection() accept");

  else
  {
    char *return_value_inet_ntoa$1;
    return_value_inet_ntoa$1=inet_ntoa(addr.sin_addr);
    message("Accepted image request from %s:%d\n", return_value_inet_ntoa$1, addr.sin_port);
    temp_fd=open(source, 00);
    if(temp_fd == -1)
    {
      perror("accept_new_connection() open");
      close(new_socket);
    }

    else
    {
      client_sock = new_socket;
      source_fd = temp_fd;
      goto __CPROVER_DUMP_L3;
    }
  }

__CPROVER_DUMP_L3:
  ;
}

// daemonise
// file wmaloader.c line 443
signed int daemonise()
{
  openlog("wmaloader", 0, 3 << 3);
  syslog(6, "Boot Daemon for Linksys WMA11b. Andrew Wild <acw43@cam.ac.uk>\n");
  signed int return_value_daemon$1;
  return_value_daemon$1=daemon(1, 0);
  if(return_value_daemon$1 == -1)
  {
    perror("daemonise() daemon");
    return 0;
  }

  else
  {
    backgrounded = 1;
    return 1;
  }
}

// initialise_image_transfer
// file wmaloader.c line 311
signed int initialise_image_transfer()
{
  unsigned long int th_transfer;
  signed int ret;
  signed int return_value_it_init$1;
  return_value_it_init$1=it_init(global_options.interface, global_options.image);
  if(return_value_it_init$1 == 0)
    return 0;

  else
  {
    signed int return_value_it_get_image_size$2;
    return_value_it_get_image_size$2=it_get_image_size();
    if(return_value_it_get_image_size$2 == 0)
    {
      message("Unable to read image %s\n", global_options.image);
      return 0;
    }

    else
    {
      ret=pthread_create(&th_transfer, (const union pthread_attr_t *)(void *)0, it_thread_entry, (void *)0);
      if(!(ret == 0))
      {
        perror("initialise_image_transfer() pthread_create");
        return 0;
      }

      else
      {
        signed int return_value_it_get_port$3;
        return_value_it_get_port$3=it_get_port();
        message("Listening for image transfer on port %d\n", return_value_it_get_port$3);
        return 1;
      }
    }
  }
}

// initialise_sync_variables
// file wmaloader.c line 342
signed int initialise_sync_variables()
{
  signed int return_value_pthread_mutex_init$1;
  return_value_pthread_mutex_init$1=pthread_mutex_init(&list_mutex, (const union anonymous$2 *)(void *)0);
  if(!(return_value_pthread_mutex_init$1 == 0))
    return 0;

  else
  {
    signed int return_value_sem_init$2;
    return_value_sem_init$2=sem_init(&is_work_to_do, 0, (unsigned int)0);
    if(!(return_value_sem_init$2 == 0))
      return 0;

    else
      return 1;
  }
}

// initialise_upnp_library
// file wmaloader.c line 284
signed int initialise_upnp_library()
{
  signed int ret;
  ret=UpnpInit(global_options.interface, (unsigned short int)0);
  if(!(ret == 0))
  {
    const char *return_value_UpnpGetErrorMessage$1;
    return_value_UpnpGetErrorMessage$1=UpnpGetErrorMessage(ret);
    message("upnp library initialisation failed: %d (%s)\n", ret, return_value_UpnpGetErrorMessage$1);
    UpnpFinish();
    return 0;
  }

  char *return_value_UpnpGetServerIpAddress$2;
  return_value_UpnpGetServerIpAddress$2=UpnpGetServerIpAddress();
  unsigned short int return_value_UpnpGetServerPort$3;
  return_value_UpnpGetServerPort$3=UpnpGetServerPort();
  message("UPnP Library initialised. Using %s:%d\n", return_value_UpnpGetServerIpAddress$2, return_value_UpnpGetServerPort$3);
  ret=UpnpRegisterClient(LoaderCallbackFunc, (void *)0, &ctrlhandle);
  if(!(ret == 0))
  {
    const char *return_value_UpnpGetErrorMessage$4;
    return_value_UpnpGetErrorMessage$4=UpnpGetErrorMessage(ret);
    message("callback function failed to register: %d (%s)\n", ret, return_value_UpnpGetErrorMessage$4);
    UpnpFinish();
    return 0;
  }

  return 1;
}

// it_get_image_size
// file image_transfer.h line 26
signed int it_get_image_size()
{
  struct stat st;
  signed int return_value_stat$1;
  return_value_stat$1=stat(source, &st);
  if(return_value_stat$1 == -1)
  {
    perror("it_get_image_size() stat");
    return 0;
  }

  else
    return (signed int)st.st_size;
}

// it_get_port
// file image_transfer.h line 25
signed int it_get_port()
{
  unsigned short int tmp_statement_expression$1;
  unsigned short int __v;
  unsigned short int __x = (unsigned short int)address.sin_port;
  asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
  tmp_statement_expression$1 = __v;
  return (signed int)tmp_statement_expression$1;
}

// it_init
// file image_transfer.h line 24
signed int it_init(const char *interface, const char *source_file)
{
  signed int len;
  source = source_file;
  sock=socket(2, 1, 0);
  unsigned short int tmp_statement_expression$1;
  if(sock == -1)
  {
    perror("it_init() socket");
    return 0;
  }

  else
  {
    address.sin_family = (unsigned short int)2;
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)0;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression$1 = __v;
    address.sin_port = tmp_statement_expression$1;
    address.sin_addr.s_addr = (unsigned int)0x00000000;
    if(!(interface == ((const char *)NULL)))
    {
      signed int return_value_inet_aton$2;
      return_value_inet_aton$2=inet_aton(interface, &address.sin_addr);
      if(return_value_inet_aton$2 == 0)
      {
        message("%s is not a valid IP address\n", interface);
        return 0;
      }

    }

    signed int return_value_bind$3;
    return_value_bind$3=bind(sock, (struct sockaddr *)&address, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(return_value_bind$3 == -1)
    {
      perror("it_init() bind");
      return 0;
    }

    else
    {
      len = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
      signed int return_value_getsockname$4;
      return_value_getsockname$4=getsockname(sock, (struct sockaddr *)&address, (unsigned int *)&len);
      if(return_value_getsockname$4 == -1)
      {
        perror("it_init() getsockname");
        return 0;
      }

      else
      {
        signed int return_value_listen$5;
        return_value_listen$5=listen(sock, 5);
        if(return_value_listen$5 == -1)
        {
          perror("it_init() listen");
          return 0;
        }

        else
          return -1;
      }
    }
  }
}

// it_thread_entry
// file image_transfer.h line 27
void * it_thread_entry(void *cookie)
{
  signed int ret;
  signed int max_fd;
  struct anonymous$0 temp_read;
  struct anonymous$0 temp_write;
  while((_Bool)1)
  {
    do
    {
      signed int it_thread_entry$$1$$1$$1$$__d0;
      signed int it_thread_entry$$1$$1$$1$$__d1;
      asm("cld; rep; stosq" : "=c"(it_thread_entry$$1$$1$$1$$__d0), "=D"(it_thread_entry$$1$$1$$1$$__d1) : "a"(0), "0"(sizeof(struct anonymous$0) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&temp_read)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$0) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&temp_write)->__fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    if(!(sock == 0))
      (&temp_read)->__fds_bits[(signed long int)(sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&temp_read)->__fds_bits[(signed long int)(sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

    if(!(client_sock == 0))
      (&temp_write)->__fds_bits[(signed long int)(client_sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&temp_write)->__fds_bits[(signed long int)(client_sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << client_sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

    max_fd = sock > client_sock ? sock : client_sock;
    ret=select(max_fd + 1, &temp_read, &temp_write, (struct anonymous$0 *)(void *)0, (struct timeval *)(void *)0);
    if(ret == -1)
    {
      perror("it_thread_entry() select");
      return (void *)0;
    }

    if(!((temp_write.__fds_bits[(signed long int)(client_sock / 8)] & (signed long int)(1UL << client_sock % 8)) == 0l))
      transfer_data();

    else
      if(!((temp_read.__fds_bits[(signed long int)(sock / 8)] & (signed long int)(1UL << sock % 8)) == 0l))
      {
        if(client_sock == 0)
          accept_new_connection();

      }

  }
  return (void *)0;
}

// list_compare_func
// file wmaloader.c line 350
signed int list_compare_func(void *a, void *b)
{
  struct Upnp_Discovery *_a = (struct Upnp_Discovery *)a;
  struct Upnp_Discovery *_b = (struct Upnp_Discovery *)b;
  return (signed int)(_a->DeviceId == _b->DeviceId);
}

// list_free_func
// file wmaloader.c line 358
void list_free_func(void *item)
{
  free(item);
}

// main
// file wmaloader.c line 461
signed int main(signed int argc, char **argv)
{
  signed int return_value_parse_command_line$1;
  return_value_parse_command_line$1=parse_command_line(argc, argv);
  signed int return_value_daemonise$2;
  if(return_value_parse_command_line$1 == 0)
  {
    print_usage();
    return 1;
  }

  else
    if(!(global_options.daemon == 0))
    {
      return_value_daemonise$2=daemonise();
      if(!(return_value_daemonise$2 == 0))
        goto __CPROVER_DUMP_L2;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int return_value_initialise_image_transfer$3;
      return_value_initialise_image_transfer$3=initialise_image_transfer();
      if(return_value_initialise_image_transfer$3 == 0)
        return 1;

      else
      {
        signed int return_value_initialise_upnp_library$4;
        return_value_initialise_upnp_library$4=initialise_upnp_library();
        if(return_value_initialise_upnp_library$4 == 0)
          return 1;

        else
        {
          signed int return_value_initialise_sync_variables$5;
          return_value_initialise_sync_variables$5=initialise_sync_variables();
          if(return_value_initialise_sync_variables$5 == 0)
            return 1;

          else
          {
            signed int return_value_ListInit$6;
            return_value_ListInit$6=ListInit(&discoveries, list_compare_func, list_free_func);
            if(!(return_value_ListInit$6 == 0))
              return 1;

            else
            {
              signed int return_value_UpnpSearchAsync$7;
              return_value_UpnpSearchAsync$7=UpnpSearchAsync(ctrlhandle, 5, "urn:schemas-upnp-org:device:AppLoaderClient:1", NULL);
              if(!(return_value_UpnpSearchAsync$7 == 0))
              {
                message("Failed to start search");
                UpnpFinish();
                return 0;
              }

              else
              {
                while((_Bool)1)
                {
                  sem_wait(&is_work_to_do);
                  DoWork();
                }
                UpnpFinish();
                return 0;
              }
            }
          }
        }
      }
    }
}

// message
// file common.h line 28
void message(char *format, ...)
{
  char buffer[512l];
  signed int ret;
  void **va = (void **)&format;
  ret=vsnprintf(buffer, (unsigned long int)200, format, va);
  va = ((void **)NULL);
  if(!(ret == 0))
  {
    if(!(backgrounded == 0))
      syslog(6, buffer);

    else
      printf(buffer);
  }

}

// parse_command_line
// file wmaloader.c line 386
signed int parse_command_line(signed int argc, char **argv)
{
  signed char x = (signed char)0;
  signed int idx = 0;
  global_options.interface = (char *)(void *)0;
  global_options.image = (char *)(void *)0;
  global_options.daemon = 0;
  global_options.help = 0;
  while(!((signed int)x == -1))
  {
    signed int return_value_getopt_long$1;
    static struct option opts[5l] = { { .name="interface", .has_arg=1, .flag=((signed int *)NULL), .val=0 },
    { .name="image", .has_arg=1, .flag=((signed int *)NULL), .val=0 },
    { .name="daemon", .has_arg=0, .flag=&global_options.daemon, .val=1 },
    { .name="help", .has_arg=0, .flag=&global_options.help, .val=1 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    return_value_getopt_long$1=getopt_long(argc, argv, "dhv", opts, &idx);
    x = (signed char)return_value_getopt_long$1;
    if((signed int)x == 63)
      return 0;

    if((signed int)x == 58)
      return 0;

    if((signed int)x == 0)
      switch(idx)
      {
        case 0:
        {
          global_options.interface = optarg;
          break;
        }
        case 1:
          global_options.image = optarg;
      }

    else
      if((signed int)x == 100)
        global_options.daemon = 1;

      else
        if((signed int)x == 104 || (signed int)x == 118)
          global_options.help = 1;

  }
  if(global_options.image == ((char *)NULL))
  {
    message("Missing required argument --image\n");
    return 0;
  }

  else
    return 1;
}

// print_usage
// file wmaloader.c line 430
void print_usage()
{
  printf("\n%s\n", (const void *)"Boot Daemon for Linksys WMA11b. Andrew Wild <acw43@cam.ac.uk>\n");
  printf("Usage: wmaloader --image <file> [options]\n");
  printf("\n");
  printf("Options:\n");
  printf("  --image <file>  Path to boot image. Required.\n");
  printf("  --daemon or -d  Detach from terminal and run as daemon.\n");
  printf("  --interface     IP address to bind to in dotted decimal \n");
  printf("                   format. If not supplied the uPnP library will\n");
  printf("                   choose the first available address.\n");
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// transfer_data
// file image_transfer.c line 153
void transfer_data()
{
  const signed int block_size = 2048;
  const signed long int block_size$array_size0 = (signed long int)block_size;
  unsigned char data[block_size$array_size0];
  signed int ret;
  /* assertion block_size <= 0x7fffffffffffffffL */
  assert((signed long int)block_size <= 0x7fffffffffffffffL);
  /* assertion source_fd != 0 && source_fd != -1 */
  assert(source_fd != 0 && source_fd != -1);
  /* assertion client_sock != 0 && client_sock != -1 */
  assert(client_sock != 0 && client_sock != -1);
  signed long int return_value_read$1;
  return_value_read$1=read(source_fd, (void *)data, (unsigned long int)block_size$array_size0);
  ret = (signed int)return_value_read$1;
  if(!(ret == -1))
  {
    if(ret == 0)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    perror("transfer_data() read");
    goto write_data_done;

  __CPROVER_DUMP_L2:
    ;
    goto write_data_done;
  }
  signed long int return_value_send$2;
  return_value_send$2=send(client_sock, (const void *)data, (unsigned long int)ret, 0);
  if(return_value_send$2 == -1l)
    perror("transfer_data() send");

  else
    goto __CPROVER_DUMP_L6;

write_data_done:
  ;
  close(client_sock);
  client_sock = 0;
  close(source_fd);
  source_fd = 0;
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// urlcat
// file wmaloader.c line 81
char * urlcat(char *a, char *b)
{
  signed int return_value_strlen$1;
  return_value_strlen$1=strlen(a);
  signed int return_value_strlen$2;
  return_value_strlen$2=strlen(b);
  if(return_value_strlen$1 + return_value_strlen$2 >= 512)
    return "";

  else
  {
    static char output[512l];
    UpnpResolveURL(a, b, output);
    return output;
  }
}

