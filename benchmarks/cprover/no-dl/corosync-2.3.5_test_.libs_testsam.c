// #anon_enum_CMAP_VALUETYPE_INT8=1_CMAP_VALUETYPE_UINT8=2_CMAP_VALUETYPE_INT16=3_CMAP_VALUETYPE_UINT16=4_CMAP_VALUETYPE_INT32=5_CMAP_VALUETYPE_UINT32=6_CMAP_VALUETYPE_INT64=7_CMAP_VALUETYPE_UINT64=8_CMAP_VALUETYPE_FLOAT=9_CMAP_VALUETYPE_DOUBLE=10_CMAP_VALUETYPE_STRING=11_CMAP_VALUETYPE_BINARY=12
// file ../include/corosync/cmap.h line 91
enum anonymous_6 { CMAP_VALUETYPE_INT8=1, CMAP_VALUETYPE_UINT8=2, CMAP_VALUETYPE_INT16=3, CMAP_VALUETYPE_UINT16=4, CMAP_VALUETYPE_INT32=5, CMAP_VALUETYPE_UINT32=6, CMAP_VALUETYPE_INT64=7, CMAP_VALUETYPE_UINT64=8, CMAP_VALUETYPE_FLOAT=9, CMAP_VALUETYPE_DOUBLE=10, CMAP_VALUETYPE_STRING=11, CMAP_VALUETYPE_BINARY=12 };

// #anon_enum_CS_DISPATCH_ONE=1_CS_DISPATCH_ALL=2_CS_DISPATCH_BLOCKING=3_CS_DISPATCH_ONE_NONBLOCKING=4
// file ../include/corosync/corotypes.h line 67
enum anonymous_5 { CS_DISPATCH_ONE=1, CS_DISPATCH_ALL=2, CS_DISPATCH_BLOCKING=3, CS_DISPATCH_ONE_NONBLOCKING=4 };

// #anon_enum_CS_OK=1_CS_ERR_LIBRARY=2_CS_ERR_VERSION=3_CS_ERR_INIT=4_CS_ERR_TIMEOUT=5_CS_ERR_TRY_AGAIN=6_CS_ERR_INVALID_PARAM=7_CS_ERR_NO_MEMORY=8_CS_ERR_BAD_HANDLE=9_CS_ERR_BUSY=10_CS_ERR_ACCESS=11_CS_ERR_NOT_EXIST=12_CS_ERR_NAME_TOO_LONG=13_CS_ERR_EXIST=14_CS_ERR_NO_SPACE=15_CS_ERR_INTERRUPT=16_CS_ERR_NAME_NOT_FOUND=17_CS_ERR_NO_RESOURCES=18_CS_ERR_NOT_SUPPORTED=19_CS_ERR_BAD_OPERATION=20_CS_ERR_FAILED_OPERATION=21_CS_ERR_MESSAGE_ERROR=22_CS_ERR_QUEUE_FULL=23_CS_ERR_QUEUE_NOT_AVAILABLE=24_CS_ERR_BAD_FLAGS=25_CS_ERR_TOO_BIG=26_CS_ERR_NO_SECTIONS=27_CS_ERR_CONTEXT_NOT_FOUND=28_CS_ERR_TOO_MANY_GROUPS=30_CS_ERR_SECURITY=100
// file ../include/corosync/corotypes.h line 78
enum anonymous_0 { CS_OK=1, CS_ERR_LIBRARY=2, CS_ERR_VERSION=3, CS_ERR_INIT=4, CS_ERR_TIMEOUT=5, CS_ERR_TRY_AGAIN=6, CS_ERR_INVALID_PARAM=7, CS_ERR_NO_MEMORY=8, CS_ERR_BAD_HANDLE=9, CS_ERR_BUSY=10, CS_ERR_ACCESS=11, CS_ERR_NOT_EXIST=12, CS_ERR_NAME_TOO_LONG=13, CS_ERR_EXIST=14, CS_ERR_NO_SPACE=15, CS_ERR_INTERRUPT=16, CS_ERR_NAME_NOT_FOUND=17, CS_ERR_NO_RESOURCES=18, CS_ERR_NOT_SUPPORTED=19, CS_ERR_BAD_OPERATION=20, CS_ERR_FAILED_OPERATION=21, CS_ERR_MESSAGE_ERROR=22, CS_ERR_QUEUE_FULL=23, CS_ERR_QUEUE_NOT_AVAILABLE=24, CS_ERR_BAD_FLAGS=25, CS_ERR_TOO_BIG=26, CS_ERR_NO_SECTIONS=27, CS_ERR_CONTEXT_NOT_FOUND=28, CS_ERR_TOO_MANY_GROUPS=30, CS_ERR_SECURITY=100 };

// #anon_enum_SAM_RECOVERY_POLICY_QUIT=1_SAM_RECOVERY_POLICY_RESTART=2_SAM_RECOVERY_POLICY_QUORUM=8_SAM_RECOVERY_POLICY_QUORUM_QUIT=9_SAM_RECOVERY_POLICY_QUORUM_RESTART=10_SAM_RECOVERY_POLICY_CMAP=16_SAM_RECOVERY_POLICY_CONFDB=16
// file ../include/corosync/sam.h line 43
enum anonymous_8 { SAM_RECOVERY_POLICY_QUIT=1, SAM_RECOVERY_POLICY_RESTART=2, SAM_RECOVERY_POLICY_QUORUM=8, SAM_RECOVERY_POLICY_QUORUM_QUIT=9, SAM_RECOVERY_POLICY_QUORUM_RESTART=10, SAM_RECOVERY_POLICY_CMAP=16, SAM_RECOVERY_POLICY_CONFDB=16 };

// tag-#anon#ST[*{V(U64|U32|U64|U32|*{U32}_U32_)->V}_V(U64|U32|U64|U32|*{U32}_U32_)->V_'quorum_notify_fn']
// file ../include/corosync/quorum.h line 53
struct anonymous_4;

// tag-#anon#ST[S32'time_interval'|SYM##anon_enum_SAM_RECOVERY_POLICY_QUIT=1_SAM_RECOVERY_POLICY_RESTART=2_SAM_RECOVERY_POLICY_QUORUM=8_SAM_RECOVERY_POLICY_QUORUM_QUIT=9_SAM_RECOVERY_POLICY_QUORUM_RESTART=10_SAM_RECOVERY_POLICY_CMAP=16_SAM_RECOVERY_POLICY_CONFDB=16#'recovery_policy'|SYM#tag-sam_internal_status_t#'internal_status'|U32'instance_id'|S32'child_fd_out'|S32'child_fd_in'|S32'term_send'|S32'warn_signal'|S32'am_i_child'|U32'_pad0'|*{S32()->S32}_S32()->S32_'hc_callback'|U64'cb_thread'|S32'cb_rpipe_fd'|S32'cb_wpipe_fd'|S32'cb_registered'|U32'_pad1'|*{V}_V_'user_data'|U64'user_data_size'|U64'user_data_allocated'|SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}_S8_'__size'|S64'__align']#'lock'|U64'quorum_handle'|U32'quorate'|S32'quorum_fd'|U64'cmap_handle'|ARR255{S8}_S8_'cmap_pid_path'|U8'_pad2']
// file sam.c line 110
struct anonymous_1;

// tag-#anon#ST[U16'length'|U48'_pad0'|ARR256{U8}_U8_'value']
// file ../include/corosync/mar_gen.h line 118
struct anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_3;

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

// tag-cmap_inst
// file cmap.c line 57
struct cmap_inst;

// tag-cmap_notify_value
// file ../include/corosync/cmap.h line 110
struct cmap_notify_value;

// tag-cmap_track_inst
// file cmap.c line 63
struct cmap_track_inst;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-qb_array
// file /usr/include/qb/qbarray.h line 51
struct qb_array;

// tag-qb_hdb
// file /usr/include/qb/qbhdb.h line 62
struct qb_hdb;

// tag-qb_ipc_request_header
// file /usr/include/qb/qbipc_common.h line 39
struct qb_ipc_request_header;

// tag-qb_ipc_response_header
// file /usr/include/qb/qbipc_common.h line 44
struct qb_ipc_response_header;

// tag-qb_ipcc_connection
// file /usr/include/qb/qbipcc.h line 65
struct qb_ipcc_connection;

// tag-quorum_inst
// file quorum.c line 58
struct quorum_inst;

// tag-req_lib_cmap_adjust_int
// file ../include/corosync/ipc_cmap.h line 101
struct req_lib_cmap_adjust_int;

// tag-req_lib_cmap_delete
// file ../include/corosync/ipc_cmap.h line 79
struct req_lib_cmap_delete;

// tag-req_lib_cmap_get
// file ../include/corosync/ipc_cmap.h line 88
struct req_lib_cmap_get;

// tag-req_lib_cmap_iter_finalize
// file ../include/corosync/ipc_cmap.h line 133
struct req_lib_cmap_iter_finalize;

// tag-req_lib_cmap_iter_init
// file ../include/corosync/ipc_cmap.h line 111
struct req_lib_cmap_iter_init;

// tag-req_lib_cmap_iter_next
// file ../include/corosync/ipc_cmap.h line 121
struct req_lib_cmap_iter_next;

// tag-req_lib_cmap_set
// file ../include/corosync/ipc_cmap.h line 67
struct req_lib_cmap_set;

// tag-req_lib_cmap_track_add
// file ../include/corosync/ipc_cmap.h line 142
struct req_lib_cmap_track_add;

// tag-req_lib_cmap_track_delete
// file ../include/corosync/ipc_cmap.h line 154
struct req_lib_cmap_track_delete;

// tag-req_lib_quorum_trackstart
// file ../include/corosync/ipc_quorum.h line 55
struct req_lib_quorum_trackstart;

// tag-res_lib_cmap_adjust_int
// file ../include/corosync/ipc_cmap.h line 107
struct res_lib_cmap_adjust_int;

// tag-res_lib_cmap_delete
// file ../include/corosync/ipc_cmap.h line 84
struct res_lib_cmap_delete;

// tag-res_lib_cmap_get
// file ../include/corosync/ipc_cmap.h line 94
struct res_lib_cmap_get;

// tag-res_lib_cmap_iter_finalize
// file ../include/corosync/ipc_cmap.h line 138
struct res_lib_cmap_iter_finalize;

// tag-res_lib_cmap_iter_init
// file ../include/corosync/ipc_cmap.h line 116
struct res_lib_cmap_iter_init;

// tag-res_lib_cmap_iter_next
// file ../include/corosync/ipc_cmap.h line 126
struct res_lib_cmap_iter_next;

// tag-res_lib_cmap_notify_callback
// file ../include/corosync/ipc_cmap.h line 164
struct res_lib_cmap_notify_callback;

// tag-res_lib_cmap_set
// file ../include/corosync/ipc_cmap.h line 75
struct res_lib_cmap_set;

// tag-res_lib_cmap_track_add
// file ../include/corosync/ipc_cmap.h line 149
struct res_lib_cmap_track_add;

// tag-res_lib_cmap_track_delete
// file ../include/corosync/ipc_cmap.h line 159
struct res_lib_cmap_track_delete;

// tag-res_lib_quorum_getquorate
// file ../include/corosync/ipc_quorum.h line 61
struct res_lib_quorum_getquorate;

// tag-res_lib_quorum_gettype
// file ../include/corosync/ipc_quorum.h line 74
struct res_lib_quorum_gettype;

// tag-res_lib_quorum_notification
// file ../include/corosync/ipc_quorum.h line 66
struct res_lib_quorum_notification;

// tag-sam_cmap_key_t
// file sam.c line 103
enum sam_cmap_key_t { SAM_CMAP_KEY_RECOVERY=0, SAM_CMAP_KEY_HC_PERIOD=1, SAM_CMAP_KEY_LAST_HC=2, SAM_CMAP_KEY_STATE=3 };

// tag-sam_internal_status_t
// file sam.c line 74
enum sam_internal_status_t { SAM_INTERNAL_STATUS_NOT_INITIALIZED=0, SAM_INTERNAL_STATUS_INITIALIZED=1, SAM_INTERNAL_STATUS_REGISTERED=2, SAM_INTERNAL_STATUS_STARTED=3, SAM_INTERNAL_STATUS_FINALIZED=4 };

// tag-sam_parent_action_t
// file sam.c line 96
enum sam_parent_action_t { SAM_PARENT_ACTION_ERROR=0, SAM_PARENT_ACTION_RECOVERY=1, SAM_PARENT_ACTION_QUIT=2, SAM_PARENT_ACTION_CONTINUE=3 };

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 356
extern signed int close(signed int);
// cmap_adjust_int
// file cmap.c line 721
static enum anonymous_0 cmap_adjust_int(unsigned long int handle, const char *key_name, signed int step);
// cmap_adjust_int_link1
// file cmap.c line 721
static enum anonymous_0 cmap_adjust_int_link1(unsigned long int handle_link1, const char *key_name_link1, signed int step_link1);
// cmap_context_get
// file cmap.c line 310
extern enum anonymous_0 cmap_context_get(unsigned long int handle, const void **context);
// cmap_context_set
// file cmap.c line 329
extern enum anonymous_0 cmap_context_set(unsigned long int handle, const void *context);
// cmap_dec
// file cmap.c line 775
extern enum anonymous_0 cmap_dec(unsigned long int handle, const char *key_name);
// cmap_delete
// file ../include/corosync/cmap.h line 212
extern enum anonymous_0 cmap_delete(unsigned long int handle, const char *key_name);
// cmap_dispatch
// file cmap.c line 187
extern enum anonymous_0 cmap_dispatch(unsigned long int handle, enum anonymous_5 dispatch_types);
// cmap_fd_get
// file cmap.c line 170
extern enum anonymous_0 cmap_fd_get(unsigned long int handle, signed int *fd);
// cmap_finalize
// file ../include/corosync/cmap.h line 144
extern enum anonymous_0 cmap_finalize(unsigned long int handle);
// cmap_get
// file cmap.c line 511
extern enum anonymous_0 cmap_get(unsigned long int handle, const char *key_name, void *value, unsigned long int *value_len, enum anonymous_6 *type);
// cmap_get_double
// file cmap.c line 679
extern enum anonymous_0 cmap_get_double(unsigned long int handle, const char *key_name, double *dbl);
// cmap_get_float
// file cmap.c line 673
extern enum anonymous_0 cmap_get_float(unsigned long int handle, const char *key_name, float *flt);
// cmap_get_int
// file cmap.c line 596
static enum anonymous_0 cmap_get_int(unsigned long int handle, const char *key_name, void *value, unsigned long int value_size, enum anonymous_6 type);
// cmap_get_int_link1
// file cmap.c line 596
static enum anonymous_0 cmap_get_int_link1(unsigned long int handle_link1, const char *key_name_link1, void *value_link1, unsigned long int value_size_link1, enum anonymous_6 type_link1);
// cmap_get_int16
// file cmap.c line 637
extern enum anonymous_0 cmap_get_int16(unsigned long int handle, const char *key_name, signed short int *i16);
// cmap_get_int32
// file cmap.c line 649
extern enum anonymous_0 cmap_get_int32(unsigned long int handle, const char *key_name, signed int *i32);
// cmap_get_int64
// file cmap.c line 661
extern enum anonymous_0 cmap_get_int64(unsigned long int handle, const char *key_name, signed long int *i64);
// cmap_get_int8
// file cmap.c line 625
extern enum anonymous_0 cmap_get_int8(unsigned long int handle, const char *key_name, signed char *i8);
// cmap_get_string
// file ../include/corosync/cmap.h line 257
extern enum anonymous_0 cmap_get_string(unsigned long int handle, const char *key_name, char **str);
// cmap_get_uint16
// file cmap.c line 643
extern enum anonymous_0 cmap_get_uint16(unsigned long int handle, const char *key_name, unsigned short int *u16);
// cmap_get_uint32
// file cmap.c line 655
extern enum anonymous_0 cmap_get_uint32(unsigned long int handle, const char *key_name, unsigned int *u32);
// cmap_get_uint64
// file ../include/corosync/cmap.h line 246
extern enum anonymous_0 cmap_get_uint64(unsigned long int handle, const char *key_name, unsigned long int *u64);
// cmap_get_uint8
// file cmap.c line 631
extern enum anonymous_0 cmap_get_uint8(unsigned long int handle, const char *key_name, unsigned char *u8);
// cmap_inc
// file cmap.c line 769
extern enum anonymous_0 cmap_inc(unsigned long int handle, const char *key_name);
// cmap_initialize
// file ../include/corosync/cmap.h line 137
extern enum anonymous_0 cmap_initialize(unsigned long int *handle);
// cmap_inst_free
// file cmap.c line 125
static void cmap_inst_free(void *inst);
// cmap_inst_free_link1
// file cmap.c line 125
static void cmap_inst_free_link1(void *inst_link1);
// cmap_iter_finalize
// file ../include/corosync/cmap.h line 302
extern enum anonymous_0 cmap_iter_finalize(unsigned long int handle, unsigned long int iter_handle);
// cmap_iter_init
// file ../include/corosync/cmap.h line 279
extern enum anonymous_0 cmap_iter_init(unsigned long int handle, const char *prefix, unsigned long int *cmap_iter_handle);
// cmap_iter_next
// file ../include/corosync/cmap.h line 292
extern enum anonymous_0 cmap_iter_next(unsigned long int handle, unsigned long int iter_handle, char *key_name, unsigned long int *value_len, enum anonymous_6 *type);
// cmap_set
// file cmap.c line 348
extern enum anonymous_0 cmap_set(unsigned long int handle, const char *key_name, const void *value, unsigned long int value_len, enum anonymous_6 type);
// cmap_set_double
// file cmap.c line 450
extern enum anonymous_0 cmap_set_double(unsigned long int handle, const char *key_name, double value);
// cmap_set_float
// file cmap.c line 445
extern enum anonymous_0 cmap_set_float(unsigned long int handle, const char *key_name, float value);
// cmap_set_int16
// file cmap.c line 415
extern enum anonymous_0 cmap_set_int16(unsigned long int handle, const char *key_name, signed short int value);
// cmap_set_int32
// file cmap.c line 425
extern enum anonymous_0 cmap_set_int32(unsigned long int handle, const char *key_name, signed int value);
// cmap_set_int64
// file cmap.c line 435
extern enum anonymous_0 cmap_set_int64(unsigned long int handle, const char *key_name, signed long int value);
// cmap_set_int8
// file cmap.c line 405
extern enum anonymous_0 cmap_set_int8(unsigned long int handle, const char *key_name, signed char value);
// cmap_set_string
// file ../include/corosync/cmap.h line 205
extern enum anonymous_0 cmap_set_string(unsigned long int handle, const char *key_name, const char *value);
// cmap_set_uint16
// file cmap.c line 420
extern enum anonymous_0 cmap_set_uint16(unsigned long int handle, const char *key_name, unsigned short int value);
// cmap_set_uint32
// file cmap.c line 430
extern enum anonymous_0 cmap_set_uint32(unsigned long int handle, const char *key_name, unsigned int value);
// cmap_set_uint64
// file ../include/corosync/cmap.h line 202
extern enum anonymous_0 cmap_set_uint64(unsigned long int handle, const char *key_name, unsigned long int value);
// cmap_set_uint8
// file ../include/corosync/cmap.h line 196
extern enum anonymous_0 cmap_set_uint8(unsigned long int handle, const char *key_name, unsigned char value);
// cmap_track_add
// file cmap.c line 933
extern enum anonymous_0 cmap_track_add(unsigned long int handle, const char *key_name, signed int track_type, void (*notify_fn)(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *), void *user_data, unsigned long int *cmap_track_handle);
// cmap_track_add::notify_fn_link1_object
//
void notify_fn_link1_object(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *);
// cmap_track_add::notify_fn_object
//
void notify_fn_object(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *);
// cmap_track_delete
// file cmap.c line 1024
extern enum anonymous_0 cmap_track_delete(unsigned long int handle, unsigned long int track_handle);
// cs_strerror
// file error_conversion.c line 138
const char * cs_strerror(enum anonymous_0 err);
// cs_timestamp_get
// file ../include/corosync/corotypes.h line 119
static inline unsigned long int cs_timestamp_get(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fork
// file /usr/include/unistd.h line 759
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getpid
// file /usr/include/unistd.h line 631
extern signed int getpid(void);
// hc_callback_thread
// file sam.c line 1323
static void * hc_callback_thread(void *unused_param);
// hdb_error_to_cs
// file ../include/corosync/corotypes.h line 141
enum anonymous_0 hdb_error_to_cs(signed int res);
// hdb_handle_create
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create(struct qb_hdb *handle_database, signed int instance_size, unsigned long int *handle_id_out);
// hdb_handle_create_link1
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link1(struct qb_hdb *handle_database_link1, signed int instance_size_link1, unsigned long int *handle_id_out_link1);
// hdb_handle_create_link2
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link2(struct qb_hdb *handle_database_link2, signed int instance_size_link2, unsigned long int *handle_id_out_link2);
// hdb_handle_create_link3
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link3(struct qb_hdb *handle_database_link3, signed int instance_size_link3, unsigned long int *handle_id_out_link3);
// hdb_handle_destroy
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy(struct qb_hdb *handle_database, unsigned long int handle_in);
// hdb_handle_destroy_link1
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1);
// hdb_handle_destroy_link2
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2);
// hdb_handle_destroy_link3
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3);
// hdb_handle_get
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get(struct qb_hdb *handle_database, unsigned long int handle_in, void **instance);
// hdb_handle_get_link1
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1, void **instance_link1);
// hdb_handle_get_link2
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2, void **instance_link2);
// hdb_handle_get_link3
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3, void **instance_link3);
// hdb_handle_put
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put(struct qb_hdb *handle_database, unsigned long int handle_in);
// hdb_handle_put_link1
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1);
// hdb_handle_put_link2
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2);
// hdb_handle_put_link3
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3);
// hdb_iterator_next
// file ../include/corosync/hdb.h line 148
static inline signed int hdb_iterator_next(struct qb_hdb *handle_database, void **instance, unsigned long int *handle);
// hdb_iterator_next_link1
// file ../include/corosync/hdb.h line 148
static inline signed int hdb_iterator_next_link1(struct qb_hdb *handle_database_link1, void **instance_link1, unsigned long int *handle_link1);
// hdb_iterator_reset
// file ../include/corosync/hdb.h line 142
static inline void hdb_iterator_reset(struct qb_hdb *handle_database);
// hdb_iterator_reset_link1
// file ../include/corosync/hdb.h line 142
static inline void hdb_iterator_reset_link1(struct qb_hdb *handle_database_link1);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 65
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 42
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 62
extern void * memset(void *, signed int, unsigned long int);
// pipe
// file /usr/include/unistd.h line 420
extern signed int pipe(signed int *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_destroy
// file /usr/include/pthread.h line 290
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 287
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 299
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 375
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous_3 *, const union anonymous_2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous_3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous_3 *);
// qb_hdb_handle_create
// file /usr/include/qb/qbhdb.h line 104
signed int qb_hdb_handle_create(struct qb_hdb *, signed int, unsigned long int *);
// qb_hdb_handle_destroy
// file /usr/include/qb/qbhdb.h line 141
signed int qb_hdb_handle_destroy(struct qb_hdb *, unsigned long int);
// qb_hdb_handle_get
// file /usr/include/qb/qbhdb.h line 113
signed int qb_hdb_handle_get(struct qb_hdb *, unsigned long int, void **);
// qb_hdb_handle_put
// file /usr/include/qb/qbhdb.h line 130
signed int qb_hdb_handle_put(struct qb_hdb *, unsigned long int);
// qb_hdb_iterator_next
// file /usr/include/qb/qbhdb.h line 167
signed int qb_hdb_iterator_next(struct qb_hdb *, void **, unsigned long int *);
// qb_hdb_iterator_reset
// file /usr/include/qb/qbhdb.h line 155
void qb_hdb_iterator_reset(struct qb_hdb *);
// qb_ipcc_connect
// file /usr/include/qb/qbipcc.h line 84
struct qb_ipcc_connection * qb_ipcc_connect(const char *, unsigned long int);
// qb_ipcc_disconnect
// file /usr/include/qb/qbipcc.h line 105
void qb_ipcc_disconnect(struct qb_ipcc_connection *);
// qb_ipcc_event_recv
// file /usr/include/qb/qbipcc.h line 204
signed long int qb_ipcc_event_recv(struct qb_ipcc_connection *, void *, unsigned long int, signed int);
// qb_ipcc_fd_get
// file /usr/include/qb/qbipcc.h line 113
signed int qb_ipcc_fd_get(struct qb_ipcc_connection *, signed int *);
// qb_ipcc_sendv_recv
// file /usr/include/qb/qbipcc.h line 185
signed long int qb_ipcc_sendv_recv(struct qb_ipcc_connection *, struct iovec *, unsigned int, void *, unsigned long int, signed int);
// qb_to_cs_error
// file ../include/corosync/corotypes.h line 139
enum anonymous_0 qb_to_cs_error(signed int result);
// quorum_context_get
// file quorum.c line 232
enum anonymous_0 quorum_context_get(unsigned long int handle, const void **context);
// quorum_context_set
// file quorum.c line 251
enum anonymous_0 quorum_context_set(unsigned long int handle, const void *context);
// quorum_dispatch
// file ../include/corosync/quorum.h line 87
enum anonymous_0 quorum_dispatch(unsigned long int handle, enum anonymous_5 dispatch_types);
// quorum_fd_get
// file ../include/corosync/quorum.h line 80
enum anonymous_0 quorum_fd_get(unsigned long int handle, signed int *fd);
// quorum_finalize
// file ../include/corosync/quorum.h line 71
enum anonymous_0 quorum_finalize(unsigned long int handle);
// quorum_getquorate
// file quorum.c line 170
enum anonymous_0 quorum_getquorate(unsigned long int handle, signed int *quorate);
// quorum_initialize
// file ../include/corosync/quorum.h line 63
enum anonymous_0 quorum_initialize(unsigned long int *handle, struct anonymous_4 *callbacks, unsigned int *quorum_type);
// quorum_inst_free
// file quorum.c line 136
static void quorum_inst_free(void *inst);
// quorum_inst_free_link1
// file quorum.c line 136
static void quorum_inst_free_link1(void *inst_link1);
// quorum_notification_fn
// file sam.c line 244
static void quorum_notification_fn(unsigned long int handle, unsigned int quorate, unsigned long int ring_id, unsigned int view_list_entries, unsigned int *view_list);
// quorum_trackstart
// file ../include/corosync/quorum.h line 102
enum anonymous_0 quorum_trackstart(unsigned long int handle, unsigned int flags);
// quorum_trackstop
// file quorum.c line 312
enum anonymous_0 quorum_trackstop(unsigned long int handle);
// read
// file /usr/include/unistd.h line 363
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// sam_cmap_destroy_pid_path
// file sam.c line 194
static enum anonymous_0 sam_cmap_destroy_pid_path(void);
// sam_cmap_register
// file sam.c line 215
static enum anonymous_0 sam_cmap_register(void);
// sam_cmap_update_key
// file sam.c line 142
static enum anonymous_0 sam_cmap_update_key(enum sam_cmap_key_t key, const char *value);
// sam_data_getsize
// file ../include/corosync/sam.h line 192
enum anonymous_0 sam_data_getsize(unsigned long int *size);
// sam_data_restore
// file ../include/corosync/sam.h line 204
enum anonymous_0 sam_data_restore(void *data, unsigned long int size);
// sam_data_store
// file ../include/corosync/sam.h line 224
enum anonymous_0 sam_data_store(const void *data, unsigned long int size);
// sam_finalize
// file ../include/corosync/sam.h line 91
enum anonymous_0 sam_finalize(void);
// sam_hc_callback_register
// file ../include/corosync/sam.h line 179
enum anonymous_0 sam_hc_callback_register(signed int (*cb)(void));
// sam_hc_callback_register::cb_object
//
signed int cb_object(void);
// sam_hc_send
// file ../include/corosync/sam.h line 159
enum anonymous_0 sam_hc_send(void);
// sam_initialize
// file ../include/corosync/sam.h line 76
enum anonymous_0 sam_initialize(signed int time_interval, enum anonymous_8 recovery_policy);
// sam_mark_failed
// file ../include/corosync/sam.h line 241
enum anonymous_0 sam_mark_failed(void);
// sam_parent_cmap_state_set
// file sam.c line 909
static enum anonymous_0 sam_parent_cmap_state_set(signed int parent_fd_in, signed int parent_fd_out, signed int state);
// sam_parent_data_store
// file sam.c line 974
static enum anonymous_0 sam_parent_data_store(signed int parent_fd_in, signed int parent_fd_out);
// sam_parent_handler
// file sam.c line 1018
static enum sam_parent_action_t sam_parent_handler(signed int parent_fd_in, signed int parent_fd_out, signed int child_pid);
// sam_parent_kill_child
// file sam.c line 933
static enum anonymous_0 sam_parent_kill_child(signed int *action, signed int child_pid);
// sam_parent_mark_child_failed
// file sam.c line 958
static enum anonymous_0 sam_parent_mark_child_failed(signed int *action, signed int child_pid);
// sam_parent_reply_send
// file sam.c line 774
static enum anonymous_0 sam_parent_reply_send(enum anonymous_0 err, signed int parent_fd_in, signed int parent_fd_out);
// sam_parent_wait_for_quorum
// file sam.c line 831
static enum anonymous_0 sam_parent_wait_for_quorum(signed int parent_fd_in, signed int parent_fd_out);
// sam_parent_warn_signal_set
// file sam.c line 805
static enum anonymous_0 sam_parent_warn_signal_set(signed int parent_fd_in, signed int parent_fd_out);
// sam_read_reply
// file sam.c line 376
static enum anonymous_0 sam_read_reply(signed int child_fd_in);
// sam_register
// file ../include/corosync/sam.h line 147
enum anonymous_0 sam_register(unsigned int *instance_id);
// sam_safe_read
// file sam.c line 350
static unsigned long int sam_safe_read(signed int d, void *buf, unsigned long int nbyte);
// sam_safe_write
// file sam.c line 322
static unsigned long int sam_safe_write(signed int d, const void *buf, unsigned long int nbyte);
// sam_start
// file ../include/corosync/sam.h line 102
enum anonymous_0 sam_start(void);
// sam_stop
// file ../include/corosync/sam.h line 114
enum anonymous_0 sam_stop(void);
// sam_warn_signal_set
// file ../include/corosync/sam.h line 126
enum anonymous_0 sam_warn_signal_set(signed int warn_signal);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 447
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// strlen
// file /usr/include/string.h line 394
extern unsigned long int strlen(const char *);
// test1
// file testsam.c line 70
static signed int test1(void);
// test2
// file testsam.c line 188
static signed int test2(void);
// test2_signal
// file testsam.c line 179
static void test2_signal(signed int sig);
// test3
// file testsam.c line 244
static signed int test3(void);
// test4
// file testsam.c line 281
static signed int test4(void);
// test5
// file testsam.c line 544
static signed int test5(void);
// test5_hc_cb
// file testsam.c line 527
static signed int test5_hc_cb(void);
// test6
// file testsam.c line 618
static signed int test6(void);
// test6_signal
// file testsam.c line 604
static void test6_signal(signed int sig);
// test7
// file testsam.c line 751
static signed int test7(void);
// test7_thread
// file testsam.c line 741
static void * test7_thread(void *arg);
// test8
// file testsam.c line 859
static signed int test8(signed int pid, signed int old_pid, signed int test_n);
// test9
// file testsam.c line 1105
static signed int test9(signed int pid, signed int old_pid, signed int test_n);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// write
// file /usr/include/unistd.h line 369
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_4
{
  // quorum_notify_fn
  void (*quorum_notify_fn)(unsigned long int, unsigned int, unsigned long int, unsigned int, unsigned int *);
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

union anonymous_3
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous_1
{
  // time_interval
  signed int time_interval;
  // recovery_policy
  enum anonymous_8 recovery_policy;
  // internal_status
  enum sam_internal_status_t internal_status;
  // instance_id
  unsigned int instance_id;
  // child_fd_out
  signed int child_fd_out;
  // child_fd_in
  signed int child_fd_in;
  // term_send
  signed int term_send;
  // warn_signal
  signed int warn_signal;
  // am_i_child
  signed int am_i_child;
  // hc_callback
  signed int (*hc_callback)(void);
  // cb_thread
  unsigned long int cb_thread;
  // cb_rpipe_fd
  signed int cb_rpipe_fd;
  // cb_wpipe_fd
  signed int cb_wpipe_fd;
  // cb_registered
  signed int cb_registered;
  // user_data
  void *user_data;
  // user_data_size
  unsigned long int user_data_size;
  // user_data_allocated
  unsigned long int user_data_allocated;
  // lock
  union anonymous_3 lock;
  // quorum_handle
  unsigned long int quorum_handle;
  // quorate
  unsigned int quorate;
  // quorum_fd
  signed int quorum_fd;
  // cmap_handle
  unsigned long int cmap_handle;
  // cmap_pid_path
  char cmap_pid_path[255l];
};

struct anonymous
{
  // length
  unsigned short int length;
  // value
  unsigned char value[256l];
};

union anonymous_2
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
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

struct cmap_inst
{
  // finalize
  signed int finalize;
  // c
  struct qb_ipcc_connection *c;
  // context
  const void *context;
};

struct cmap_notify_value
{
  // type
  enum anonymous_6 type;
  // len
  unsigned long int len;
  // data
  const void *data;
};

struct cmap_track_inst
{
  // user_data
  void *user_data;
  // notify_fn
  void (*notify_fn)(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *);
  // c
  struct qb_ipcc_connection *c;
  // track_handle
  unsigned long int track_handle;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
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

struct qb_hdb
{
  // handle_count
  unsigned int handle_count;
  // handles
  struct qb_array *handles;
  // iterator
  unsigned int iterator;
  // destructor
  void (*destructor)(void *);
  // first_run
  unsigned int first_run;
};

struct qb_ipc_request_header
{
  // id
  signed int id;
  // size
  signed int size;
};

struct qb_ipc_response_header
{
  // id
  signed int id;
  // size
  signed int size;
  // error
  signed int error;
};

struct quorum_inst
{
  // c
  struct qb_ipcc_connection *c;
  // finalize
  signed int finalize;
  // context
  const void *context;
  // callbacks
  struct anonymous_4 callbacks;
};

struct req_lib_cmap_adjust_int
{
  // header
  struct qb_ipc_request_header header;
  // key_name
  struct anonymous key_name;
  // step
  signed int step;
};

struct req_lib_cmap_delete
{
  // header
  struct qb_ipc_request_header header;
  // key_name
  struct anonymous key_name;
};

struct req_lib_cmap_get
{
  // header
  struct qb_ipc_request_header header;
  // key_name
  struct anonymous key_name;
  // value_len
  unsigned long int value_len;
};

struct req_lib_cmap_iter_finalize
{
  // header
  struct qb_ipc_request_header header;
  // iter_handle
  unsigned long int iter_handle;
};

struct req_lib_cmap_iter_init
{
  // header
  struct qb_ipc_request_header header;
  // prefix
  struct anonymous prefix;
};

struct req_lib_cmap_iter_next
{
  // header
  struct qb_ipc_request_header header;
  // iter_handle
  unsigned long int iter_handle;
};

struct req_lib_cmap_set
{
  // header
  struct qb_ipc_request_header header;
  // key_name
  struct anonymous key_name;
  // value_len
  unsigned long int value_len;
  // type
  unsigned char type;
  // value
  unsigned char value[0l];
};

struct req_lib_cmap_track_add
{
  // header
  struct qb_ipc_request_header header;
  // key_name
  struct anonymous key_name;
  // track_type
  signed int track_type;
  // track_inst_handle
  unsigned long int track_inst_handle;
};

struct req_lib_cmap_track_delete
{
  // header
  struct qb_ipc_request_header header;
  // track_handle
  unsigned long int track_handle;
};

struct req_lib_quorum_trackstart
{
  // header
  struct qb_ipc_request_header header;
  // track_flags
  unsigned int track_flags;
};

struct res_lib_cmap_adjust_int
{
  // header
  struct qb_ipc_response_header header;
};

struct res_lib_cmap_delete
{
  // header
  struct qb_ipc_response_header header;
};

struct res_lib_cmap_get
{
  // header
  struct qb_ipc_response_header header;
  // value_len
  unsigned long int value_len;
  // type
  unsigned char type;
  // value
  unsigned char value[0l];
};

struct res_lib_cmap_iter_finalize
{
  // header
  struct qb_ipc_response_header header;
};

struct res_lib_cmap_iter_init
{
  // header
  struct qb_ipc_response_header header;
  // iter_handle
  unsigned long int iter_handle;
};

struct res_lib_cmap_iter_next
{
  // header
  struct qb_ipc_response_header header;
  // key_name
  struct anonymous key_name;
  // value_len
  unsigned long int value_len;
  // type
  unsigned char type;
};

struct res_lib_cmap_notify_callback
{
  // header
  struct qb_ipc_response_header header;
  // track_inst_handle
  unsigned long int track_inst_handle;
  // key_name
  struct anonymous key_name;
  // event
  signed int event;
  // new_value_type
  unsigned char new_value_type;
  // old_value_type
  unsigned char old_value_type;
  // new_value_len
  unsigned long int new_value_len;
  // old_value_len
  unsigned long int old_value_len;
  // new_value
  unsigned char new_value[0l];
};

struct res_lib_cmap_set
{
  // header
  struct qb_ipc_response_header header;
};

struct res_lib_cmap_track_add
{
  // header
  struct qb_ipc_response_header header;
  // track_handle
  unsigned long int track_handle;
};

struct res_lib_cmap_track_delete
{
  // header
  struct qb_ipc_response_header header;
  // track_inst_handle
  unsigned long int track_inst_handle;
};

struct res_lib_quorum_getquorate
{
  // header
  struct qb_ipc_response_header header;
  // quorate
  unsigned int quorate;
};

struct res_lib_quorum_gettype
{
  // header
  struct qb_ipc_response_header header;
  // quorum_type
  unsigned int quorum_type;
};

struct res_lib_quorum_notification
{
  // header
  struct qb_ipc_response_header header;
  // quorate
  signed int quorate;
  // ring_seq
  unsigned long int ring_seq;
  // view_list_entries
  unsigned int view_list_entries;
  // view_list
  unsigned int view_list[0l];
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};


// cmap_handle_t_db
// file cmap.c line 72
static struct qb_hdb cmap_handle_t_db;
// cmap_handle_t_db
// file cmap.c line 72
static struct qb_hdb cmap_handle_t_db = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=cmap_inst_free, .first_run=(unsigned int)!(0 != 0) };
// cmap_handle_t_db_link1
// file cmap.c line 72
static struct qb_hdb cmap_handle_t_db_link1;
// cmap_handle_t_db_link1
// file cmap.c line 72
static struct qb_hdb cmap_handle_t_db_link1 = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=cmap_inst_free_link1, .first_run=(unsigned int)!(0 != 0) };
// cmap_track_handle_t_db
// file cmap.c line 73
static struct qb_hdb cmap_track_handle_t_db = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=(void (*)(void *))(void *)0, .first_run=(unsigned int)!(0 != 0) };
// cmap_track_handle_t_db_link1
// file cmap.c line 73
static struct qb_hdb cmap_track_handle_t_db_link1 = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=(void (*)(void *))(void *)0, .first_run=(unsigned int)!(0 != 0) };
// quorum_handle_t_db
// file quorum.c line 67
static struct qb_hdb quorum_handle_t_db;
// quorum_handle_t_db
// file quorum.c line 67
static struct qb_hdb quorum_handle_t_db = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=quorum_inst_free, .first_run=(unsigned int)!(0 != 0) };
// quorum_handle_t_db_link1
// file quorum.c line 67
static struct qb_hdb quorum_handle_t_db_link1;
// quorum_handle_t_db_link1
// file quorum.c line 67
static struct qb_hdb quorum_handle_t_db_link1 = { .handle_count=(unsigned int)0, .handles=(struct qb_array *)(void *)0, .iterator=(unsigned int)0,
    .destructor=quorum_inst_free_link1, .first_run=(unsigned int)!(0 != 0) };
// sam_internal_data
// file sam.c line 138
static struct anonymous_1 sam_internal_data;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// test2_sig_delivered
// file testsam.c line 56
static signed int test2_sig_delivered = 0;
// test5_hc_cb_count
// file testsam.c line 57
static signed int test5_hc_cb_count = 0;
// test6_sig_delivered
// file testsam.c line 58
static signed int test6_sig_delivered = 0;

// cmap_adjust_int
// file cmap.c line 721
static enum anonymous_0 cmap_adjust_int(unsigned long int handle, const char *key_name, signed int step)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_adjust_int req_lib_cmap_adjust_int;
  struct res_lib_cmap_adjust_int res_lib_cmap_adjust_int;
  if(key_name == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(key_name);
    if(return_value_strlen_1 >= 256ul)
      return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

    else
    {
      signed int return_value_hdb_handle_get_2;
      return_value_hdb_handle_get_2=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
      error=hdb_error_to_cs(return_value_hdb_handle_get_2);
      if(!((signed int)error == CS_OK))
        return error;

      else
      {
        memset((void *)&req_lib_cmap_adjust_int, 0, sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ );
        req_lib_cmap_adjust_int.header.size = (signed int)sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ ;
        req_lib_cmap_adjust_int.header.id = 3;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(key_name);
        memcpy((void *)req_lib_cmap_adjust_int.key_name.value, (const void *)key_name, return_value_strlen_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(key_name);
        req_lib_cmap_adjust_int.key_name.length = (unsigned short int)return_value_strlen_4;
        req_lib_cmap_adjust_int.step = step;
        iov.iov_base = (void *)(char *)&req_lib_cmap_adjust_int;
        iov.iov_len = sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ ;
        signed long int return_value_qb_ipcc_sendv_recv_5;
        return_value_qb_ipcc_sendv_recv_5=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_adjust_int, sizeof(struct res_lib_cmap_adjust_int) /*16ul*/ , -1);
        error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_5);
        if((signed int)error == CS_OK)
          error = (enum anonymous_0)res_lib_cmap_adjust_int.header.error;

        hdb_handle_put_link1(&cmap_handle_t_db, handle);
        return error;
      }
    }
  }
}

// cmap_adjust_int_link1
// file cmap.c line 721
static enum anonymous_0 cmap_adjust_int_link1(unsigned long int handle_link1, const char *key_name_link1, signed int step_link1)
{
  enum anonymous_0 error_link1;
  struct iovec iov_link1;
  struct cmap_inst *cmap_inst_link1;
  struct req_lib_cmap_adjust_int req_lib_cmap_adjust_int_link1;
  struct res_lib_cmap_adjust_int res_lib_cmap_adjust_int_link1;
  if(key_name_link1 == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1_link1;
    return_value_strlen_1_link1=strlen(key_name_link1);
    if(return_value_strlen_1_link1 >= 256ul)
      return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

    else
    {
      signed int return_value_hdb_handle_get_2_link1;
      return_value_hdb_handle_get_2_link1=hdb_handle_get_link3(&cmap_handle_t_db_link1, handle_link1, (void **)(void *)&cmap_inst_link1);
      error_link1=hdb_error_to_cs(return_value_hdb_handle_get_2_link1);
      if(!((signed int)error_link1 == CS_OK))
        return error_link1;

      else
      {
        memset((void *)&req_lib_cmap_adjust_int_link1, 0, sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ );
        req_lib_cmap_adjust_int_link1.header.size = (signed int)sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ ;
        req_lib_cmap_adjust_int_link1.header.id = 3;
        unsigned long int return_value_strlen_3_link1;
        return_value_strlen_3_link1=strlen(key_name_link1);
        memcpy((void *)req_lib_cmap_adjust_int_link1.key_name.value, (const void *)key_name_link1, return_value_strlen_3_link1);
        unsigned long int return_value_strlen_4_link1;
        return_value_strlen_4_link1=strlen(key_name_link1);
        req_lib_cmap_adjust_int_link1.key_name.length = (unsigned short int)return_value_strlen_4_link1;
        req_lib_cmap_adjust_int_link1.step = step_link1;
        iov_link1.iov_base = (void *)(char *)&req_lib_cmap_adjust_int_link1;
        iov_link1.iov_len = sizeof(struct req_lib_cmap_adjust_int) /*280ul*/ ;
        signed long int return_value_qb_ipcc_sendv_recv_5_link1;
        return_value_qb_ipcc_sendv_recv_5_link1=qb_ipcc_sendv_recv(cmap_inst_link1->c, &iov_link1, (unsigned int)1, (void *)&res_lib_cmap_adjust_int_link1, sizeof(struct res_lib_cmap_adjust_int) /*16ul*/ , -1);
        error_link1=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_5_link1);
        if((signed int)error_link1 == CS_OK)
          error_link1 = (enum anonymous_0)res_lib_cmap_adjust_int_link1.header.error;

        hdb_handle_put_link3(&cmap_handle_t_db_link1, handle_link1);
        return error_link1;
      }
    }
  }
}

// cmap_context_get
// file cmap.c line 310
extern enum anonymous_0 cmap_context_get(unsigned long int handle, const void **context)
{
  enum anonymous_0 error;
  struct cmap_inst *cmap_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    *context = cmap_inst->context;
    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return (enum anonymous_0)CS_OK;
  }
}

// cmap_context_set
// file cmap.c line 329
extern enum anonymous_0 cmap_context_set(unsigned long int handle, const void *context)
{
  enum anonymous_0 error;
  struct cmap_inst *cmap_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    cmap_inst->context = context;
    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return (enum anonymous_0)CS_OK;
  }
}

// cmap_dec
// file cmap.c line 775
extern enum anonymous_0 cmap_dec(unsigned long int handle, const char *key_name)
{
  enum anonymous_0 return_value_cmap_adjust_int_1;
  return_value_cmap_adjust_int_1=cmap_adjust_int(handle, key_name, -1);
  return return_value_cmap_adjust_int_1;
}

// cmap_delete
// file ../include/corosync/cmap.h line 212
extern enum anonymous_0 cmap_delete(unsigned long int handle, const char *key_name)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_delete req_lib_cmap_delete;
  struct res_lib_cmap_delete res_lib_cmap_delete;
  if(key_name == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(key_name);
    if(return_value_strlen_1 >= 256ul)
      return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

    else
    {
      signed int return_value_hdb_handle_get_2;
      return_value_hdb_handle_get_2=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
      error=hdb_error_to_cs(return_value_hdb_handle_get_2);
      if(!((signed int)error == CS_OK))
        return error;

      else
      {
        memset((void *)&req_lib_cmap_delete, 0, sizeof(struct req_lib_cmap_delete) /*272ul*/ );
        req_lib_cmap_delete.header.size = (signed int)sizeof(struct req_lib_cmap_delete) /*272ul*/ ;
        req_lib_cmap_delete.header.id = 1;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(key_name);
        memcpy((void *)req_lib_cmap_delete.key_name.value, (const void *)key_name, return_value_strlen_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(key_name);
        req_lib_cmap_delete.key_name.length = (unsigned short int)return_value_strlen_4;
        iov.iov_base = (void *)(char *)&req_lib_cmap_delete;
        iov.iov_len = sizeof(struct req_lib_cmap_delete) /*272ul*/ ;
        signed long int return_value_qb_ipcc_sendv_recv_5;
        return_value_qb_ipcc_sendv_recv_5=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_delete, sizeof(struct res_lib_cmap_delete) /*16ul*/ , -1);
        error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_5);
        if((signed int)error == CS_OK)
          error = (enum anonymous_0)res_lib_cmap_delete.header.error;

        hdb_handle_put_link1(&cmap_handle_t_db, handle);
        return error;
      }
    }
  }
}

// cmap_dispatch
// file cmap.c line 187
extern enum anonymous_0 cmap_dispatch(unsigned long int handle, enum anonymous_5 dispatch_types)
{
  signed int timeout = -1;
  enum anonymous_0 error;
  signed int cont = 1;
  struct cmap_inst *cmap_inst;
  struct qb_ipc_response_header *dispatch_data;
  char dispatch_buf[1048576l];
  struct res_lib_cmap_notify_callback *res_lib_cmap_notify_callback;
  struct cmap_track_inst *cmap_track_inst;
  struct cmap_notify_value old_val;
  struct cmap_notify_value new_val;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  signed int return_value_hdb_handle_get_3;
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    if((signed int)dispatch_types == CS_DISPATCH_ALL || (signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
      timeout = 0;

    dispatch_data = (struct qb_ipc_response_header *)dispatch_buf;
    do
    {
      signed long int return_value_qb_ipcc_event_recv_2;
      return_value_qb_ipcc_event_recv_2=qb_ipcc_event_recv(cmap_inst->c, (void *)dispatch_buf, (unsigned long int)(8192 * 128), timeout);
      error=qb_to_cs_error((signed int)return_value_qb_ipcc_event_recv_2);
      if((signed int)error == CS_ERR_BAD_HANDLE)
      {
        error = (enum anonymous_0)CS_OK;
        break;
      }

      if((signed int)error == CS_ERR_TRY_AGAIN)
      {
        if((signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
          break;

        error = (enum anonymous_0)CS_OK;
        if((signed int)dispatch_types == CS_DISPATCH_ALL)
          break;

      }

      else
      {
        if(!((signed int)error == CS_OK))
          break;

        if(dispatch_data->id == 9)
        {
          res_lib_cmap_notify_callback = (struct res_lib_cmap_notify_callback *)dispatch_data;
          return_value_hdb_handle_get_3=hdb_handle_get_link1(&cmap_track_handle_t_db, res_lib_cmap_notify_callback->track_inst_handle, (void **)(void *)&cmap_track_inst);
          error=hdb_error_to_cs(return_value_hdb_handle_get_3);
          if((signed int)error == CS_ERR_BAD_HANDLE)
            goto __CPROVER_DUMP_L10;

          if(!((signed int)error == CS_OK))
            break;

          new_val.type = (enum anonymous_6)res_lib_cmap_notify_callback->new_value_type;
          old_val.type = (enum anonymous_6)res_lib_cmap_notify_callback->old_value_type;
          new_val.len = res_lib_cmap_notify_callback->new_value_len;
          old_val.len = res_lib_cmap_notify_callback->old_value_len;
          new_val.data = (const void *)res_lib_cmap_notify_callback->new_value;
          old_val.data = (const void *)((const char *)res_lib_cmap_notify_callback->new_value + (signed long int)new_val.len);
          cmap_track_inst->notify_fn(handle, cmap_track_inst->track_handle, res_lib_cmap_notify_callback->event, (char *)res_lib_cmap_notify_callback->key_name.value, new_val, old_val, cmap_track_inst->user_data);
          hdb_handle_put_link1(&cmap_track_handle_t_db, res_lib_cmap_notify_callback->track_inst_handle);
        }

        error = (enum anonymous_0)CS_ERR_LIBRARY;
        break;

      __CPROVER_DUMP_L10:
        ;
        if(!(cmap_inst->finalize == 0))
        {
          error = (enum anonymous_0)CS_ERR_BAD_HANDLE;
          break;
        }

        if((signed int)dispatch_types == CS_DISPATCH_ONE || (signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
          cont = 0;

      }
    }
    while(!(cont == 0));

  error_put:
    ;
    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return error;
  }
}

// cmap_fd_get
// file cmap.c line 170
extern enum anonymous_0 cmap_fd_get(unsigned long int handle, signed int *fd)
{
  enum anonymous_0 error;
  struct cmap_inst *cmap_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    signed int return_value_qb_ipcc_fd_get_2;
    return_value_qb_ipcc_fd_get_2=qb_ipcc_fd_get(cmap_inst->c, fd);
    error=qb_to_cs_error(return_value_qb_ipcc_fd_get_2);
    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return error;
  }
}

// cmap_finalize
// file ../include/corosync/cmap.h line 144
extern enum anonymous_0 cmap_finalize(unsigned long int handle)
{
  struct cmap_inst *cmap_inst;
  enum anonymous_0 error;
  unsigned long int track_inst_handle = (unsigned long int)0;
  struct cmap_track_inst *cmap_track_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  signed int return_value_hdb_iterator_next_2;
  if(!((signed int)error == CS_OK))
    return error;

  else
    if(!(cmap_inst->finalize == 0))
    {
      hdb_handle_put_link1(&cmap_handle_t_db, handle);
      return (enum anonymous_0)CS_ERR_BAD_HANDLE;
    }

    else
    {
      cmap_inst->finalize = 1;
      hdb_iterator_reset(&cmap_track_handle_t_db);
      do
      {
        return_value_hdb_iterator_next_2=hdb_iterator_next(&cmap_track_handle_t_db, (void **)(void *)&cmap_track_inst, &track_inst_handle);
        if(!(return_value_hdb_iterator_next_2 == 0))
          break;

        if(cmap_track_inst->c == cmap_inst->c)
          hdb_handle_destroy_link1(&cmap_track_handle_t_db, track_inst_handle);

        hdb_handle_put_link1(&cmap_track_handle_t_db, track_inst_handle);
      }
      while((_Bool)1);
      hdb_handle_destroy_link1(&cmap_handle_t_db, handle);
      hdb_handle_put_link1(&cmap_handle_t_db, handle);
      return (enum anonymous_0)CS_OK;
    }
}

// cmap_get
// file cmap.c line 511
extern enum anonymous_0 cmap_get(unsigned long int handle, const char *key_name, void *value, unsigned long int *value_len, enum anonymous_6 *type)
{
  enum anonymous_0 error;
  struct cmap_inst *cmap_inst;
  struct iovec iov;
  struct req_lib_cmap_get req_lib_cmap_get;
  struct res_lib_cmap_get *res_lib_cmap_get;
  unsigned long int res_size;
  if(key_name == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(key_name);
    if(return_value_strlen_1 >= 256ul)
      return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

    else
      if(value_len == ((unsigned long int *)NULL) && !(value == NULL))
        return (enum anonymous_0)CS_ERR_INVALID_PARAM;

      else
      {
        signed int return_value_hdb_handle_get_2;
        return_value_hdb_handle_get_2=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
        error=hdb_error_to_cs(return_value_hdb_handle_get_2);
        if(!((signed int)error == CS_OK))
          return error;

        else
        {
          memset((void *)&req_lib_cmap_get, 0, sizeof(struct req_lib_cmap_get) /*280ul*/ );
          req_lib_cmap_get.header.size = (signed int)sizeof(struct req_lib_cmap_get) /*280ul*/ ;
          req_lib_cmap_get.header.id = 2;
          unsigned long int return_value_strlen_3;
          return_value_strlen_3=strlen(key_name);
          memcpy((void *)req_lib_cmap_get.key_name.value, (const void *)key_name, return_value_strlen_3);
          unsigned long int return_value_strlen_4;
          return_value_strlen_4=strlen(key_name);
          req_lib_cmap_get.key_name.length = (unsigned short int)return_value_strlen_4;
          if(!(value == NULL) && !(value_len == ((unsigned long int *)NULL)))
            req_lib_cmap_get.value_len = *value_len;

          else
            req_lib_cmap_get.value_len = (unsigned long int)0;
          iov.iov_base = (void *)(char *)&req_lib_cmap_get;
          iov.iov_len = sizeof(struct req_lib_cmap_get) /*280ul*/ ;
          res_size = sizeof(struct res_lib_cmap_get) /*32ul*/  + req_lib_cmap_get.value_len;
          void *return_value_malloc_5;
          return_value_malloc_5=malloc(res_size);
          res_lib_cmap_get = (struct res_lib_cmap_get *)return_value_malloc_5;
          if(res_lib_cmap_get == ((struct res_lib_cmap_get *)NULL))
            return (enum anonymous_0)CS_ERR_NO_MEMORY;

          else
          {
            signed long int return_value_qb_ipcc_sendv_recv_6;
            return_value_qb_ipcc_sendv_recv_6=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)res_lib_cmap_get, res_size, -1);
            error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_6);
            if((signed int)error == CS_OK)
              error = (enum anonymous_0)res_lib_cmap_get->header.error;

            if((signed int)error == CS_OK)
            {
              if(!(type == ((enum anonymous_6 *)NULL)))
                *type = (enum anonymous_6)res_lib_cmap_get->type;

              if(!(value_len == ((unsigned long int *)NULL)))
                *value_len = res_lib_cmap_get->value_len;

              if(!(value == NULL) && !(value_len == ((unsigned long int *)NULL)))
                memcpy(value, (const void *)res_lib_cmap_get->value, res_lib_cmap_get->value_len);

            }

            free((void *)res_lib_cmap_get);
            hdb_handle_put_link1(&cmap_handle_t_db, handle);
            return error;
          }
        }
      }
  }
}

// cmap_get_double
// file cmap.c line 679
extern enum anonymous_0 cmap_get_double(unsigned long int handle, const char *key_name, double *dbl)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)dbl, sizeof(double) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_DOUBLE);
  return return_value_cmap_get_int_1;
}

// cmap_get_float
// file cmap.c line 673
extern enum anonymous_0 cmap_get_float(unsigned long int handle, const char *key_name, float *flt)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)flt, sizeof(float) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_FLOAT);
  return return_value_cmap_get_int_1;
}

// cmap_get_int
// file cmap.c line 596
static enum anonymous_0 cmap_get_int(unsigned long int handle, const char *key_name, void *value, unsigned long int value_size, enum anonymous_6 type)
{
  char key_value[16l];
  unsigned long int key_size;
  enum anonymous_0 err;
  enum anonymous_6 key_type;
  key_size = sizeof(char [16l]) /*16ul*/ ;
  memset((void *)key_value, 0, key_size);
  err=cmap_get(handle, key_name, (void *)key_value, &key_size, &key_type);
  if(!((signed int)err == CS_OK))
    return err;

  else
    if(!(key_type == type))
      return (enum anonymous_0)CS_ERR_INVALID_PARAM;

    else
    {
      memcpy(value, (const void *)key_value, value_size);
      return (enum anonymous_0)CS_OK;
    }
}

// cmap_get_int_link1
// file cmap.c line 596
static enum anonymous_0 cmap_get_int_link1(unsigned long int handle_link1, const char *key_name_link1, void *value_link1, unsigned long int value_size_link1, enum anonymous_6 type_link1)
{
  char key_value_link1[16l];
  unsigned long int key_size_link1;
  enum anonymous_0 err_link1;
  enum anonymous_6 key_type_link1;
  key_size_link1 = sizeof(char [16l]) /*16ul*/ ;
  memset((void *)key_value_link1, 0, key_size_link1);
  err_link1=cmap_get(handle_link1, key_name_link1, (void *)key_value_link1, &key_size_link1, &key_type_link1);
  if(!((signed int)err_link1 == CS_OK))
    return err_link1;

  else
    if(!(key_type_link1 == type_link1))
      return (enum anonymous_0)CS_ERR_INVALID_PARAM;

    else
    {
      memcpy(value_link1, (const void *)key_value_link1, value_size_link1);
      return (enum anonymous_0)CS_OK;
    }
}

// cmap_get_int16
// file cmap.c line 637
extern enum anonymous_0 cmap_get_int16(unsigned long int handle, const char *key_name, signed short int *i16)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)i16, sizeof(signed short int) /*2ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT16);
  return return_value_cmap_get_int_1;
}

// cmap_get_int32
// file cmap.c line 649
extern enum anonymous_0 cmap_get_int32(unsigned long int handle, const char *key_name, signed int *i32)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)i32, sizeof(signed int) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT32);
  return return_value_cmap_get_int_1;
}

// cmap_get_int64
// file cmap.c line 661
extern enum anonymous_0 cmap_get_int64(unsigned long int handle, const char *key_name, signed long int *i64)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)i64, sizeof(signed long int) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT64);
  return return_value_cmap_get_int_1;
}

// cmap_get_int8
// file cmap.c line 625
extern enum anonymous_0 cmap_get_int8(unsigned long int handle, const char *key_name, signed char *i8)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)i8, sizeof(signed char) /*1ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT8);
  return return_value_cmap_get_int_1;
}

// cmap_get_string
// file ../include/corosync/cmap.h line 257
extern enum anonymous_0 cmap_get_string(unsigned long int handle, const char *key_name, char **str)
{
  enum anonymous_0 res;
  unsigned long int str_len;
  enum anonymous_6 type;
  res=cmap_get(handle, key_name, (void *)0, &str_len, &type);
  void *return_value_malloc_1;
  if(!((signed int)type == CMAP_VALUETYPE_STRING) || !((signed int)res == CS_OK))
  {
    if((signed int)res == CS_OK)
      res = (enum anonymous_0)CS_ERR_INVALID_PARAM;

  }

  else
  {
    return_value_malloc_1=malloc(str_len);
    *str = (char *)return_value_malloc_1;
    if(*str == ((char *)NULL))
      res = (enum anonymous_0)CS_ERR_NO_MEMORY;

    else
    {
      res=cmap_get(handle, key_name, (void *)*str, &str_len, &type);
      if(!((signed int)res == CS_OK))
        free((void *)*str);

      else
        return (enum anonymous_0)CS_OK;
    }
  }

return_error:
  ;
  return res;
}

// cmap_get_uint16
// file cmap.c line 643
extern enum anonymous_0 cmap_get_uint16(unsigned long int handle, const char *key_name, unsigned short int *u16)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)u16, sizeof(unsigned short int) /*2ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT16);
  return return_value_cmap_get_int_1;
}

// cmap_get_uint32
// file cmap.c line 655
extern enum anonymous_0 cmap_get_uint32(unsigned long int handle, const char *key_name, unsigned int *u32)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)u32, sizeof(unsigned int) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT32);
  return return_value_cmap_get_int_1;
}

// cmap_get_uint64
// file ../include/corosync/cmap.h line 246
extern enum anonymous_0 cmap_get_uint64(unsigned long int handle, const char *key_name, unsigned long int *u64)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)u64, sizeof(unsigned long int) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT64);
  return return_value_cmap_get_int_1;
}

// cmap_get_uint8
// file cmap.c line 631
extern enum anonymous_0 cmap_get_uint8(unsigned long int handle, const char *key_name, unsigned char *u8)
{
  enum anonymous_0 return_value_cmap_get_int_1;
  return_value_cmap_get_int_1=cmap_get_int(handle, key_name, (void *)u8, sizeof(unsigned char) /*1ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT8);
  return return_value_cmap_get_int_1;
}

// cmap_inc
// file cmap.c line 769
extern enum anonymous_0 cmap_inc(unsigned long int handle, const char *key_name)
{
  enum anonymous_0 return_value_cmap_adjust_int_1;
  return_value_cmap_adjust_int_1=cmap_adjust_int(handle, key_name, 1);
  return return_value_cmap_adjust_int_1;
}

// cmap_initialize
// file ../include/corosync/cmap.h line 137
extern enum anonymous_0 cmap_initialize(unsigned long int *handle)
{
  enum anonymous_0 error;
  struct cmap_inst *cmap_inst;
  signed int return_value_hdb_handle_create_1;
  return_value_hdb_handle_create_1=hdb_handle_create_link1(&cmap_handle_t_db, (signed int)sizeof(struct cmap_inst) /*24ul*/ , handle);
  error=hdb_error_to_cs(return_value_hdb_handle_create_1);
  signed int return_value_hdb_handle_get_2;
  if((signed int)error == CS_OK)
  {
    return_value_hdb_handle_get_2=hdb_handle_get_link1(&cmap_handle_t_db, *handle, (void **)(void *)&cmap_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_2);
    if((signed int)error == CS_OK)
    {
      error = (enum anonymous_0)CS_OK;
      cmap_inst->finalize = 0;
      cmap_inst->c=qb_ipcc_connect("cmap", (unsigned long int)(8192 * 128));
      if(cmap_inst->c == ((struct qb_ipcc_connection *)NULL))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        error=qb_to_cs_error(-(*return_value___errno_location_3));
        goto error_put_destroy;
      }

      hdb_handle_put_link1(&cmap_handle_t_db, *handle);
      return (enum anonymous_0)CS_OK;

    error_put_destroy:
      ;
      hdb_handle_put_link1(&cmap_handle_t_db, *handle);
    }


  error_destroy:
    ;
    hdb_handle_destroy_link1(&cmap_handle_t_db, *handle);
  }


error_no_destroy:
  ;
  return error;
}

// cmap_inst_free
// file cmap.c line 125
static void cmap_inst_free(void *inst)
{
  struct cmap_inst *cmap_inst = (struct cmap_inst *)inst;
  qb_ipcc_disconnect(cmap_inst->c);
}

// cmap_inst_free_link1
// file cmap.c line 125
static void cmap_inst_free_link1(void *inst_link1)
{
  struct cmap_inst *cmap_inst_link1 = (struct cmap_inst *)inst_link1;
  qb_ipcc_disconnect(cmap_inst_link1->c);
}

// cmap_iter_finalize
// file ../include/corosync/cmap.h line 302
extern enum anonymous_0 cmap_iter_finalize(unsigned long int handle, unsigned long int iter_handle)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_iter_finalize req_lib_cmap_iter_finalize;
  struct res_lib_cmap_iter_finalize res_lib_cmap_iter_finalize;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    memset((void *)&req_lib_cmap_iter_finalize, 0, sizeof(struct req_lib_cmap_iter_finalize) /*16ul*/ );
    req_lib_cmap_iter_finalize.header.size = (signed int)sizeof(struct req_lib_cmap_iter_finalize) /*16ul*/ ;
    req_lib_cmap_iter_finalize.header.id = 6;
    req_lib_cmap_iter_finalize.iter_handle = iter_handle;
    iov.iov_base = (void *)(char *)&req_lib_cmap_iter_finalize;
    iov.iov_len = sizeof(struct req_lib_cmap_iter_finalize) /*16ul*/ ;
    signed long int return_value_qb_ipcc_sendv_recv_2;
    return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_iter_finalize, sizeof(struct res_lib_cmap_iter_finalize) /*16ul*/ , -1);
    error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
    if((signed int)error == CS_OK)
      error = (enum anonymous_0)res_lib_cmap_iter_finalize.header.error;

    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return error;
  }
}

// cmap_iter_init
// file ../include/corosync/cmap.h line 279
extern enum anonymous_0 cmap_iter_init(unsigned long int handle, const char *prefix, unsigned long int *cmap_iter_handle)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_iter_init req_lib_cmap_iter_init;
  struct res_lib_cmap_iter_init res_lib_cmap_iter_init;
  if(cmap_iter_handle == ((unsigned long int *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    signed int return_value_hdb_handle_get_1;
    return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_1);
    if(!((signed int)error == CS_OK))
      return error;

    else
    {
      memset((void *)&req_lib_cmap_iter_init, 0, sizeof(struct req_lib_cmap_iter_init) /*272ul*/ );
      req_lib_cmap_iter_init.header.size = (signed int)sizeof(struct req_lib_cmap_iter_init) /*272ul*/ ;
      req_lib_cmap_iter_init.header.id = 4;
      if(!(prefix == ((const char *)NULL)))
      {
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(prefix);
        if(return_value_strlen_2 >= 256ul)
          return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(prefix);
        memcpy((void *)req_lib_cmap_iter_init.prefix.value, (const void *)prefix, return_value_strlen_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(prefix);
        req_lib_cmap_iter_init.prefix.length = (unsigned short int)return_value_strlen_4;
      }

      iov.iov_base = (void *)(char *)&req_lib_cmap_iter_init;
      iov.iov_len = sizeof(struct req_lib_cmap_iter_init) /*272ul*/ ;
      signed long int return_value_qb_ipcc_sendv_recv_5;
      return_value_qb_ipcc_sendv_recv_5=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_iter_init, sizeof(struct res_lib_cmap_iter_init) /*24ul*/ , -1);
      error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_5);
      if((signed int)error == CS_OK)
        error = (enum anonymous_0)res_lib_cmap_iter_init.header.error;

      if((signed int)error == CS_OK)
        *cmap_iter_handle = res_lib_cmap_iter_init.iter_handle;

      hdb_handle_put_link1(&cmap_handle_t_db, handle);
      return error;
    }
  }
}

// cmap_iter_next
// file ../include/corosync/cmap.h line 292
extern enum anonymous_0 cmap_iter_next(unsigned long int handle, unsigned long int iter_handle, char *key_name, unsigned long int *value_len, enum anonymous_6 *type)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_iter_next req_lib_cmap_iter_next;
  struct res_lib_cmap_iter_next res_lib_cmap_iter_next;
  if(key_name == ((char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    signed int return_value_hdb_handle_get_1;
    return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_1);
    if(!((signed int)error == CS_OK))
      return error;

    else
    {
      memset((void *)&req_lib_cmap_iter_next, 0, sizeof(struct req_lib_cmap_iter_next) /*16ul*/ );
      req_lib_cmap_iter_next.header.size = (signed int)sizeof(struct req_lib_cmap_iter_next) /*16ul*/ ;
      req_lib_cmap_iter_next.header.id = 5;
      req_lib_cmap_iter_next.iter_handle = iter_handle;
      iov.iov_base = (void *)(char *)&req_lib_cmap_iter_next;
      iov.iov_len = sizeof(struct req_lib_cmap_iter_next) /*16ul*/ ;
      signed long int return_value_qb_ipcc_sendv_recv_2;
      return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_iter_next, sizeof(struct res_lib_cmap_iter_next) /*296ul*/ , -1);
      error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
      if((signed int)error == CS_OK)
        error = (enum anonymous_0)res_lib_cmap_iter_next.header.error;

      if((signed int)error == CS_OK)
      {
        __builtin_strncpy(key_name, (const char *)res_lib_cmap_iter_next.key_name.value, (unsigned long int)255);
        if(!(value_len == ((unsigned long int *)NULL)))
          *value_len = res_lib_cmap_iter_next.value_len;

        if(!(type == ((enum anonymous_6 *)NULL)))
          *type = (enum anonymous_6)res_lib_cmap_iter_next.type;

      }

      hdb_handle_put_link1(&cmap_handle_t_db, handle);
      return error;
    }
  }
}

// cmap_set
// file cmap.c line 348
extern enum anonymous_0 cmap_set(unsigned long int handle, const char *key_name, const void *value, unsigned long int value_len, enum anonymous_6 type)
{
  enum anonymous_0 error;
  struct iovec iov[2l];
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_set req_lib_cmap_set;
  struct res_lib_cmap_set res_lib_cmap_set;
  if(value == NULL || key_name == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(key_name);
    if(return_value_strlen_1 >= 256ul)
      return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

    else
    {
      signed int return_value_hdb_handle_get_2;
      return_value_hdb_handle_get_2=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
      error=hdb_error_to_cs(return_value_hdb_handle_get_2);
      if(!((signed int)error == CS_OK))
        return error;

      else
      {
        memset((void *)&req_lib_cmap_set, 0, sizeof(struct req_lib_cmap_set) /*288ul*/ );
        req_lib_cmap_set.header.size = (signed int)(sizeof(struct req_lib_cmap_set) /*288ul*/  + value_len);
        req_lib_cmap_set.header.id = 0;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(key_name);
        memcpy((void *)req_lib_cmap_set.key_name.value, (const void *)key_name, return_value_strlen_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(key_name);
        req_lib_cmap_set.key_name.length = (unsigned short int)return_value_strlen_4;
        req_lib_cmap_set.value_len = value_len;
        req_lib_cmap_set.type = (unsigned char)type;
        iov[(signed long int)0].iov_base = (void *)(char *)&req_lib_cmap_set;
        iov[(signed long int)0].iov_len = sizeof(struct req_lib_cmap_set) /*288ul*/ ;
        iov[(signed long int)1].iov_base = (void *)value;
        iov[(signed long int)1].iov_len = value_len;
        signed long int return_value_qb_ipcc_sendv_recv_5;
        return_value_qb_ipcc_sendv_recv_5=qb_ipcc_sendv_recv(cmap_inst->c, iov, (unsigned int)2, (void *)&res_lib_cmap_set, sizeof(struct res_lib_cmap_set) /*16ul*/ , -1);
        error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_5);
        if((signed int)error == CS_OK)
          error = (enum anonymous_0)res_lib_cmap_set.header.error;

        hdb_handle_put_link1(&cmap_handle_t_db, handle);
        return error;
      }
    }
  }
}

// cmap_set_double
// file cmap.c line 450
extern enum anonymous_0 cmap_set_double(unsigned long int handle, const char *key_name, double value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(double) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_DOUBLE);
  return return_value_cmap_set_1;
}

// cmap_set_float
// file cmap.c line 445
extern enum anonymous_0 cmap_set_float(unsigned long int handle, const char *key_name, float value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(float) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_FLOAT);
  return return_value_cmap_set_1;
}

// cmap_set_int16
// file cmap.c line 415
extern enum anonymous_0 cmap_set_int16(unsigned long int handle, const char *key_name, signed short int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(signed short int) /*2ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT16);
  return return_value_cmap_set_1;
}

// cmap_set_int32
// file cmap.c line 425
extern enum anonymous_0 cmap_set_int32(unsigned long int handle, const char *key_name, signed int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(signed int) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT32);
  return return_value_cmap_set_1;
}

// cmap_set_int64
// file cmap.c line 435
extern enum anonymous_0 cmap_set_int64(unsigned long int handle, const char *key_name, signed long int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(signed long int) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT64);
  return return_value_cmap_set_1;
}

// cmap_set_int8
// file cmap.c line 405
extern enum anonymous_0 cmap_set_int8(unsigned long int handle, const char *key_name, signed char value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(signed char) /*1ul*/ , (enum anonymous_6)CMAP_VALUETYPE_INT8);
  return return_value_cmap_set_1;
}

// cmap_set_string
// file ../include/corosync/cmap.h line 205
extern enum anonymous_0 cmap_set_string(unsigned long int handle, const char *key_name, const char *value)
{
  if(value == ((const char *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(value);
    enum anonymous_0 return_value_cmap_set_2;
    return_value_cmap_set_2=cmap_set(handle, key_name, (const void *)value, return_value_strlen_1, (enum anonymous_6)CMAP_VALUETYPE_STRING);
    return return_value_cmap_set_2;
  }
}

// cmap_set_uint16
// file cmap.c line 420
extern enum anonymous_0 cmap_set_uint16(unsigned long int handle, const char *key_name, unsigned short int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(unsigned short int) /*2ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT16);
  return return_value_cmap_set_1;
}

// cmap_set_uint32
// file cmap.c line 430
extern enum anonymous_0 cmap_set_uint32(unsigned long int handle, const char *key_name, unsigned int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(unsigned int) /*4ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT32);
  return return_value_cmap_set_1;
}

// cmap_set_uint64
// file ../include/corosync/cmap.h line 202
extern enum anonymous_0 cmap_set_uint64(unsigned long int handle, const char *key_name, unsigned long int value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(unsigned long int) /*8ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT64);
  return return_value_cmap_set_1;
}

// cmap_set_uint8
// file ../include/corosync/cmap.h line 196
extern enum anonymous_0 cmap_set_uint8(unsigned long int handle, const char *key_name, unsigned char value)
{
  enum anonymous_0 return_value_cmap_set_1;
  return_value_cmap_set_1=cmap_set(handle, key_name, (const void *)&value, sizeof(unsigned char) /*1ul*/ , (enum anonymous_6)CMAP_VALUETYPE_UINT8);
  return return_value_cmap_set_1;
}

// cmap_track_add
// file cmap.c line 933
extern enum anonymous_0 cmap_track_add(unsigned long int handle, const char *key_name, signed int track_type, void (*notify_fn)(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *), void *user_data, unsigned long int *cmap_track_handle)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct req_lib_cmap_track_add req_lib_cmap_track_add;
  struct res_lib_cmap_track_add res_lib_cmap_track_add;
  struct cmap_track_inst *cmap_track_inst;
  unsigned long int cmap_track_inst_handle;
  signed int return_value_hdb_handle_get_3;
  signed long int return_value_qb_ipcc_sendv_recv_7;
  if(notify_fn == ((void (*)(unsigned long int, unsigned long int, signed int, const char *, struct cmap_notify_value, struct cmap_notify_value, void *))NULL) || cmap_track_handle == ((unsigned long int *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    signed int return_value_hdb_handle_get_1;
    return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_1);
    if(!((signed int)error == CS_OK))
      return error;

    else
    {
      signed int return_value_hdb_handle_create_2;
      return_value_hdb_handle_create_2=hdb_handle_create_link1(&cmap_track_handle_t_db, (signed int)sizeof(struct cmap_track_inst) /*32ul*/ , &cmap_track_inst_handle);
      error=hdb_error_to_cs(return_value_hdb_handle_create_2);
      if((signed int)error == CS_OK)
      {
        return_value_hdb_handle_get_3=hdb_handle_get_link1(&cmap_track_handle_t_db, cmap_track_inst_handle, (void **)(void *)&cmap_track_inst);
        error=hdb_error_to_cs(return_value_hdb_handle_get_3);
        if((signed int)error == CS_OK)
        {
          cmap_track_inst->user_data = user_data;
          cmap_track_inst->notify_fn = notify_fn;
          cmap_track_inst->c = cmap_inst->c;
          memset((void *)&req_lib_cmap_track_add, 0, sizeof(struct req_lib_cmap_track_add) /*288ul*/ );
          req_lib_cmap_track_add.header.size = (signed int)sizeof(struct req_lib_cmap_track_add) /*288ul*/ ;
          req_lib_cmap_track_add.header.id = 7;
          if(!(key_name == ((const char *)NULL)))
          {
            unsigned long int return_value_strlen_4;
            return_value_strlen_4=strlen(key_name);
            if(return_value_strlen_4 >= 256ul)
              return (enum anonymous_0)CS_ERR_NAME_TOO_LONG;

            unsigned long int return_value_strlen_5;
            return_value_strlen_5=strlen(key_name);
            memcpy((void *)req_lib_cmap_track_add.key_name.value, (const void *)key_name, return_value_strlen_5);
            unsigned long int return_value_strlen_6;
            return_value_strlen_6=strlen(key_name);
            req_lib_cmap_track_add.key_name.length = (unsigned short int)return_value_strlen_6;
          }

          req_lib_cmap_track_add.track_type = track_type;
          req_lib_cmap_track_add.track_inst_handle = cmap_track_inst_handle;
          iov.iov_base = (void *)(char *)&req_lib_cmap_track_add;
          iov.iov_len = sizeof(struct req_lib_cmap_track_add) /*288ul*/ ;
          return_value_qb_ipcc_sendv_recv_7=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_track_add, sizeof(struct res_lib_cmap_track_add) /*24ul*/ , -1);
          error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_7);
          if((signed int)error == CS_OK)
            error = (enum anonymous_0)res_lib_cmap_track_add.header.error;

          if((signed int)error == CS_OK)
          {
            *cmap_track_handle = res_lib_cmap_track_add.track_handle;
            cmap_track_inst->track_handle = *cmap_track_handle;
          }

          hdb_handle_put_link1(&cmap_track_handle_t_db, cmap_track_inst_handle);
          hdb_handle_put_link1(&cmap_handle_t_db, handle);
          return error;
        }


      error_put_destroy:
        ;
        hdb_handle_put_link1(&cmap_track_handle_t_db, cmap_track_inst_handle);
        hdb_handle_destroy_link1(&cmap_track_handle_t_db, cmap_track_inst_handle);
      }


    error_put:
      ;
      hdb_handle_put_link1(&cmap_handle_t_db, handle);
      return error;
    }
  }
}

// cmap_track_delete
// file cmap.c line 1024
extern enum anonymous_0 cmap_track_delete(unsigned long int handle, unsigned long int track_handle)
{
  enum anonymous_0 error;
  struct iovec iov;
  struct cmap_inst *cmap_inst;
  struct cmap_track_inst *cmap_track_inst;
  struct req_lib_cmap_track_delete req_lib_cmap_track_delete;
  struct res_lib_cmap_track_delete res_lib_cmap_track_delete;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get_link1(&cmap_handle_t_db, handle, (void **)(void *)&cmap_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    memset((void *)&req_lib_cmap_track_delete, 0, sizeof(struct req_lib_cmap_track_delete) /*16ul*/ );
    req_lib_cmap_track_delete.header.size = (signed int)sizeof(struct req_lib_cmap_track_delete) /*16ul*/ ;
    req_lib_cmap_track_delete.header.id = 8;
    req_lib_cmap_track_delete.track_handle = track_handle;
    iov.iov_base = (void *)(char *)&req_lib_cmap_track_delete;
    iov.iov_len = sizeof(struct req_lib_cmap_track_delete) /*16ul*/ ;
    signed long int return_value_qb_ipcc_sendv_recv_2;
    return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(cmap_inst->c, &iov, (unsigned int)1, (void *)&res_lib_cmap_track_delete, sizeof(struct res_lib_cmap_track_delete) /*24ul*/ , -1);
    error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
    if((signed int)error == CS_OK)
      error = (enum anonymous_0)res_lib_cmap_track_delete.header.error;

    if((signed int)error == CS_OK)
    {
      signed int return_value_hdb_handle_get_3;
      return_value_hdb_handle_get_3=hdb_handle_get_link1(&cmap_track_handle_t_db, res_lib_cmap_track_delete.track_inst_handle, (void **)(void *)&cmap_track_inst);
      error=hdb_error_to_cs(return_value_hdb_handle_get_3);
      if((signed int)error == CS_OK)
      {
        hdb_handle_put_link1(&cmap_track_handle_t_db, res_lib_cmap_track_delete.track_inst_handle);
        hdb_handle_destroy_link1(&cmap_track_handle_t_db, res_lib_cmap_track_delete.track_inst_handle);
      }

    }


  error_put:
    ;
    hdb_handle_put_link1(&cmap_handle_t_db, handle);
    return error;
  }
}

// cs_strerror
// file error_conversion.c line 138
const char * cs_strerror(enum anonymous_0 err)
{
  switch((signed int)err)
  {
    case CS_OK:
      return "success";
    case CS_ERR_LIBRARY:
      return "CS_ERR_LIBRARY";
    case CS_ERR_VERSION:
      return "CS_ERR_VERSION";
    case CS_ERR_INIT:
      return "CS_ERR_INIT";
    case CS_ERR_NO_MEMORY:
      return "CS_ERR_NO_MEMORY";
    case CS_ERR_NAME_TOO_LONG:
      return "CS_ERR_NAME_TOO_LONG ";
    case CS_ERR_TIMEOUT:
      return "CS_ERR_TIMEOUT";
    case CS_ERR_TRY_AGAIN:
      return "CS_ERR_TRY_AGAIN";
    case CS_ERR_INVALID_PARAM:
      return "CS_ERR_INVALID_PARAM";
    case CS_ERR_BAD_HANDLE:
      return "CS_ERR_BAD_HANDLE";
    case CS_ERR_BUSY:
      return "CS_ERR_BUSY ";
    case CS_ERR_ACCESS:
      return "CS_ERR_ACCESS ";
    case CS_ERR_NOT_EXIST:
      return "CS_ERR_NOT_EXIST ";
    case CS_ERR_EXIST:
      return "CS_ERR_EXIST ";
    case CS_ERR_NO_SPACE:
      return "CS_ERR_NO_SPACE ";
    case CS_ERR_INTERRUPT:
      return "CS_ERR_INTERRUPT ";
    case CS_ERR_NAME_NOT_FOUND:
      return "CS_ERR_NAME_NOT_FOUND ";
    case CS_ERR_NO_RESOURCES:
      return "CS_ERR_NO_RESOURCES ";
    case CS_ERR_NOT_SUPPORTED:
      return "CS_ERR_NOT_SUPPORTED ";
    case CS_ERR_BAD_OPERATION:
      return "CS_ERR_BAD_OPERATION ";
    case CS_ERR_FAILED_OPERATION:
      return "CS_ERR_FAILED_OPERATION ";
    case CS_ERR_MESSAGE_ERROR:
      return "CS_ERR_MESSAGE_ERROR ";
    case CS_ERR_QUEUE_FULL:
      return "CS_ERR_QUEUE_FULL ";
    case CS_ERR_QUEUE_NOT_AVAILABLE:
      return "CS_ERR_QUEUE_NOT_AVAILABLE ";
    case CS_ERR_BAD_FLAGS:
      return "CS_ERR_BAD_FLAGS ";
    case CS_ERR_TOO_BIG:
      return "CS_ERR_TOO_BIG ";
    case CS_ERR_NO_SECTIONS:
      return "CS_ERR_NO_SECTIONS ";
    case CS_ERR_CONTEXT_NOT_FOUND:
      return "CS_ERR_CONTEXT_NOT_FOUND ";
    case CS_ERR_TOO_MANY_GROUPS:
      return "CS_ERR_TOO_MANY_GROUPS ";
    case CS_ERR_SECURITY:
      return "CS_ERR_SECURITY ";
    default:
      return "unknown error";
  }
}

// cs_timestamp_get
// file ../include/corosync/corotypes.h line 119
static inline unsigned long int cs_timestamp_get(void)
{
  unsigned long int result;
  struct timespec ts;
  clock_gettime(1, &ts);
  result = (unsigned long int)ts.tv_sec * 1000000000ULL + (unsigned long int)ts.tv_nsec;
  return result;
}

// hc_callback_thread
// file sam.c line 1323
static void * hc_callback_thread(void *unused_param)
{
  signed int poll_error;
  signed int status;
  signed long int bytes_readed;
  char command;
  signed int time_interval;
  signed int tmp_time_interval;
  signed int counter;
  struct pollfd pfds;
  status = 0;
  counter = 0;
  time_interval = sam_internal_data.time_interval >> 2;
  while((_Bool)1)
  {
    pfds.fd = sam_internal_data.cb_rpipe_fd;
    pfds.events = (signed short int)0x001;
    pfds.revents = (signed short int)0;
    if(status == 1)
      tmp_time_interval = time_interval;

    else
      tmp_time_interval = -1;
    poll_error=poll(&pfds, (unsigned long int)1, tmp_time_interval);
    if(poll_error == 0)
    {
      enum anonymous_0 return_value_sam_hc_send_1;
      return_value_sam_hc_send_1=sam_hc_send();
      if((signed int)return_value_sam_hc_send_1 == CS_OK)
        counter = counter + 1;

      if(counter >= 4)
      {
        signed int return_value;
        return_value=sam_internal_data.hc_callback();
        if(!(return_value == 0))
          status = 3;

        counter = 0;
      }

    }

    if(poll_error >= 1)
    {
      unsigned long int return_value_sam_safe_read_2;
      return_value_sam_safe_read_2=sam_safe_read(sam_internal_data.cb_rpipe_fd, (void *)&command, (unsigned long int)1);
      bytes_readed = (signed long int)return_value_sam_safe_read_2;
      if(bytes_readed >= 1l)
      {
        if(status == 0 && (signed int)command == 0)
          status = 1;

        if(status == 1 && (signed int)command == 1)
          status = 0;

      }

    }

  }
  return unused_param;
}

// hdb_error_to_cs
// file ../include/corosync/corotypes.h line 141
enum anonymous_0 hdb_error_to_cs(signed int res)
{
  if(res == 0)
    return (enum anonymous_0)CS_OK;

  else
  {
    if(res == -9)
      return (enum anonymous_0)CS_ERR_BAD_HANDLE;

    else
      if(res == -12)
        return (enum anonymous_0)CS_ERR_NO_MEMORY;

      else
        if(res == -24)
          return (enum anonymous_0)CS_ERR_NO_RESOURCES;

        else
          if(res == -13)
            return (enum anonymous_0)CS_ERR_ACCESS;

    return (enum anonymous_0)CS_ERR_LIBRARY;
  }
}

// hdb_handle_create
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create(struct qb_hdb *handle_database, signed int instance_size, unsigned long int *handle_id_out)
{
  signed int return_value_qb_hdb_handle_create_1;
  return_value_qb_hdb_handle_create_1=qb_hdb_handle_create(handle_database, instance_size, handle_id_out);
  return return_value_qb_hdb_handle_create_1;
}

// hdb_handle_create_link1
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link1(struct qb_hdb *handle_database_link1, signed int instance_size_link1, unsigned long int *handle_id_out_link1)
{
  signed int return_value_qb_hdb_handle_create_1_link1;
  return_value_qb_hdb_handle_create_1_link1=qb_hdb_handle_create(handle_database_link1, instance_size_link1, handle_id_out_link1);
  return return_value_qb_hdb_handle_create_1_link1;
}

// hdb_handle_create_link2
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link2(struct qb_hdb *handle_database_link2, signed int instance_size_link2, unsigned long int *handle_id_out_link2)
{
  signed int return_value_qb_hdb_handle_create_1_link2;
  return_value_qb_hdb_handle_create_1_link2=qb_hdb_handle_create(handle_database_link2, instance_size_link2, handle_id_out_link2);
  return return_value_qb_hdb_handle_create_1_link2;
}

// hdb_handle_create_link3
// file ../include/corosync/hdb.h line 96
static inline signed int hdb_handle_create_link3(struct qb_hdb *handle_database_link3, signed int instance_size_link3, unsigned long int *handle_id_out_link3)
{
  signed int return_value_qb_hdb_handle_create_1_link3;
  return_value_qb_hdb_handle_create_1_link3=qb_hdb_handle_create(handle_database_link3, instance_size_link3, handle_id_out_link3);
  return return_value_qb_hdb_handle_create_1_link3;
}

// hdb_handle_destroy
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy(struct qb_hdb *handle_database, unsigned long int handle_in)
{
  signed int return_value_qb_hdb_handle_destroy_1;
  return_value_qb_hdb_handle_destroy_1=qb_hdb_handle_destroy(handle_database, handle_in);
  return return_value_qb_hdb_handle_destroy_1;
}

// hdb_handle_destroy_link1
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1)
{
  signed int return_value_qb_hdb_handle_destroy_1_link1;
  return_value_qb_hdb_handle_destroy_1_link1=qb_hdb_handle_destroy(handle_database_link1, handle_in_link1);
  return return_value_qb_hdb_handle_destroy_1_link1;
}

// hdb_handle_destroy_link2
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2)
{
  signed int return_value_qb_hdb_handle_destroy_1_link2;
  return_value_qb_hdb_handle_destroy_1_link2=qb_hdb_handle_destroy(handle_database_link2, handle_in_link2);
  return return_value_qb_hdb_handle_destroy_1_link2;
}

// hdb_handle_destroy_link3
// file ../include/corosync/hdb.h line 128
static inline signed int hdb_handle_destroy_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3)
{
  signed int return_value_qb_hdb_handle_destroy_1_link3;
  return_value_qb_hdb_handle_destroy_1_link3=qb_hdb_handle_destroy(handle_database_link3, handle_in_link3);
  return return_value_qb_hdb_handle_destroy_1_link3;
}

// hdb_handle_get
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get(struct qb_hdb *handle_database, unsigned long int handle_in, void **instance)
{
  signed int return_value_qb_hdb_handle_get_1;
  return_value_qb_hdb_handle_get_1=qb_hdb_handle_get(handle_database, handle_in, instance);
  return return_value_qb_hdb_handle_get_1;
}

// hdb_handle_get_link1
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1, void **instance_link1)
{
  signed int return_value_qb_hdb_handle_get_1_link1;
  return_value_qb_hdb_handle_get_1_link1=qb_hdb_handle_get(handle_database_link1, handle_in_link1, instance_link1);
  return return_value_qb_hdb_handle_get_1_link1;
}

// hdb_handle_get_link2
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2, void **instance_link2)
{
  signed int return_value_qb_hdb_handle_get_1_link2;
  return_value_qb_hdb_handle_get_1_link2=qb_hdb_handle_get(handle_database_link2, handle_in_link2, instance_link2);
  return return_value_qb_hdb_handle_get_1_link2;
}

// hdb_handle_get_link3
// file ../include/corosync/hdb.h line 105
static inline signed int hdb_handle_get_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3, void **instance_link3)
{
  signed int return_value_qb_hdb_handle_get_1_link3;
  return_value_qb_hdb_handle_get_1_link3=qb_hdb_handle_get(handle_database_link3, handle_in_link3, instance_link3);
  return return_value_qb_hdb_handle_get_1_link3;
}

// hdb_handle_put
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put(struct qb_hdb *handle_database, unsigned long int handle_in)
{
  signed int return_value_qb_hdb_handle_put_1;
  return_value_qb_hdb_handle_put_1=qb_hdb_handle_put(handle_database, handle_in);
  return return_value_qb_hdb_handle_put_1;
}

// hdb_handle_put_link1
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link1(struct qb_hdb *handle_database_link1, unsigned long int handle_in_link1)
{
  signed int return_value_qb_hdb_handle_put_1_link1;
  return_value_qb_hdb_handle_put_1_link1=qb_hdb_handle_put(handle_database_link1, handle_in_link1);
  return return_value_qb_hdb_handle_put_1_link1;
}

// hdb_handle_put_link2
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link2(struct qb_hdb *handle_database_link2, unsigned long int handle_in_link2)
{
  signed int return_value_qb_hdb_handle_put_1_link2;
  return_value_qb_hdb_handle_put_1_link2=qb_hdb_handle_put(handle_database_link2, handle_in_link2);
  return return_value_qb_hdb_handle_put_1_link2;
}

// hdb_handle_put_link3
// file ../include/corosync/hdb.h line 121
static inline signed int hdb_handle_put_link3(struct qb_hdb *handle_database_link3, unsigned long int handle_in_link3)
{
  signed int return_value_qb_hdb_handle_put_1_link3;
  return_value_qb_hdb_handle_put_1_link3=qb_hdb_handle_put(handle_database_link3, handle_in_link3);
  return return_value_qb_hdb_handle_put_1_link3;
}

// hdb_iterator_next
// file ../include/corosync/hdb.h line 148
static inline signed int hdb_iterator_next(struct qb_hdb *handle_database, void **instance, unsigned long int *handle)
{
  signed int return_value_qb_hdb_iterator_next_1;
  return_value_qb_hdb_iterator_next_1=qb_hdb_iterator_next(handle_database, instance, handle);
  return return_value_qb_hdb_iterator_next_1;
}

// hdb_iterator_next_link1
// file ../include/corosync/hdb.h line 148
static inline signed int hdb_iterator_next_link1(struct qb_hdb *handle_database_link1, void **instance_link1, unsigned long int *handle_link1)
{
  signed int return_value_qb_hdb_iterator_next_1_link1;
  return_value_qb_hdb_iterator_next_1_link1=qb_hdb_iterator_next(handle_database_link1, instance_link1, handle_link1);
  return return_value_qb_hdb_iterator_next_1_link1;
}

// hdb_iterator_reset
// file ../include/corosync/hdb.h line 142
static inline void hdb_iterator_reset(struct qb_hdb *handle_database)
{
  qb_hdb_iterator_reset(handle_database);
}

// hdb_iterator_reset_link1
// file ../include/corosync/hdb.h line 142
static inline void hdb_iterator_reset_link1(struct qb_hdb *handle_database_link1)
{
  qb_hdb_iterator_reset(handle_database_link1);
}

// main
// file testsam.c line 1237
signed int main(signed int argc, char **argv)
{
  signed int pid;
  signed int old_pid;
  signed int err;
  signed int stat;
  signed int all_passed = 1;
  signed int no_skipped = 0;
  pid=fork();
  if(pid == -1)
  {
    fprintf(stderr, "Can't fork\n");
    return 1;
  }

  else
    if(pid == 0)
    {
      err=test1();
      sam_finalize();
      return err;
    }

    else
    {
      waitpid(pid, &stat, 0);
      /* tag-#anon#lUN[lS32'__in'|S32'__i'] */
union anonymous_7
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
      ;
      fprintf(stderr, "test1 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
      if(!((0xff00 & stat) >> 8 == 0))
        all_passed = 0;

      pid=fork();
      if(pid == -1)
      {
        fprintf(stderr, "Can't fork\n");
        return 1;
      }

      else
        if(pid == 0)
        {
          err=test2();
          sam_finalize();
          return err;
        }

        else
        {
          waitpid(pid, &stat, 0);
          fprintf(stderr, "test2 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
          if(!((0xff00 & stat) >> 8 == 0))
            all_passed = 0;

          pid=fork();
          if(pid == -1)
          {
            fprintf(stderr, "Can't fork\n");
            return 1;
          }

          else
            if(pid == 0)
            {
              err=test3();
              sam_finalize();
              return err;
            }

            else
            {
              waitpid(pid, &stat, 0);
              fprintf(stderr, "test3 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
              if(!((0xff00 & stat) >> 8 == 0))
                all_passed = 0;

              pid=fork();
              if(pid == -1)
              {
                fprintf(stderr, "Can't fork\n");
                return 1;
              }

              else
                if(pid == 0)
                {
                  err=test4();
                  sam_finalize();
                  return err;
                }

                else
                {
                  waitpid(pid, &stat, 0);
                  fprintf(stderr, "test4 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
                  if(!((0xff00 & stat) >> 8 == 0))
                    all_passed = 0;

                  pid=fork();
                  if(pid == -1)
                  {
                    fprintf(stderr, "Can't fork\n");
                    return 1;
                  }

                  else
                    if(pid == 0)
                    {
                      err=test5();
                      sam_finalize();
                      return err;
                    }

                    else
                    {
                      waitpid(pid, &stat, 0);
                      fprintf(stderr, "test5 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
                      if(!((0xff00 & stat) >> 8 == 0))
                        all_passed = 0;

                      pid=fork();
                      if(pid == -1)
                      {
                        fprintf(stderr, "Can't fork\n");
                        return 1;
                      }

                      else
                        if(pid == 0)
                        {
                          err=test6();
                          sam_finalize();
                          return err;
                        }

                        else
                        {
                          waitpid(pid, &stat, 0);
                          fprintf(stderr, "test6 %s\n", (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 0 ? "passed" : "failed");
                          if(!((0xff00 & stat) >> 8 == 0))
                            all_passed = 0;

                          pid=fork();
                          if(pid == -1)
                          {
                            fprintf(stderr, "Can't fork\n");
                            return 2;
                          }

                          else
                            if(pid == 0)
                            {
                              err=test7();
                              sam_finalize();
                              return err;
                            }

                            else
                            {
                              waitpid(pid, &stat, 0);
                              char *tmp_if_expr_1;
                              if((0xff00 & stat) >> 8 == 0)
                                tmp_if_expr_1 = "passed";

                              else
                                tmp_if_expr_1 = (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 1 ? "skipped" : "failed";
                              fprintf(stderr, "test7 %s\n", tmp_if_expr_1);
                              if((0xff00 & stat) >> 8 == 1)
                                no_skipped = no_skipped + 1;

                              if((0xff00 & stat) >> 8 >= 2)
                                all_passed = 0;

                              pid=fork();
                              if(pid == -1)
                              {
                                fprintf(stderr, "Can't fork\n");
                                return 2;
                              }

                              else
                              {
                                if(pid == 0)
                                {
                                  signed int return_value_getpid_2;
                                  return_value_getpid_2=getpid();
                                  err=test8(return_value_getpid_2, 0, 1);
                                  sam_finalize();
                                  return err;
                                }

                                waitpid(pid, &stat, 0);
                                old_pid = pid;
                                if((0xff00 & stat) >> 8 == 0)
                                {
                                  pid=fork();
                                  if(pid == -1)
                                  {
                                    fprintf(stderr, "Can't fork\n");
                                    return 2;
                                  }

                                  if(pid == 0)
                                  {
                                    signed int return_value_getpid_3;
                                    return_value_getpid_3=getpid();
                                    err=test8(return_value_getpid_3, old_pid, 2);
                                    sam_finalize();
                                    return err;
                                  }

                                  waitpid(pid, &stat, 0);
                                  old_pid = pid;
                                  if((0xff00 & stat) >> 8 == 0)
                                  {
                                    pid=fork();
                                    if(pid == -1)
                                    {
                                      fprintf(stderr, "Can't fork\n");
                                      return 2;
                                    }

                                    if(pid == 0)
                                    {
                                      err=test8(old_pid, 0, 3);
                                      sam_finalize();
                                      return err;
                                    }

                                    waitpid(pid, &stat, 0);
                                  }

                                }

                                char *tmp_if_expr_4;
                                if((0xff00 & stat) >> 8 == 0)
                                  tmp_if_expr_4 = "passed";

                                else
                                  tmp_if_expr_4 = (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 1 ? "skipped" : "failed";
                                fprintf(stderr, "test8 %s\n", tmp_if_expr_4);
                                if((0xff00 & stat) >> 8 == 1)
                                  no_skipped = no_skipped + 1;

                                if((0xff00 & stat) >> 8 >= 2)
                                  all_passed = 0;

                                pid=fork();
                                if(pid == -1)
                                {
                                  fprintf(stderr, "Can't fork\n");
                                  return 2;
                                }

                                else
                                {
                                  if(pid == 0)
                                  {
                                    signed int return_value_getpid_5;
                                    return_value_getpid_5=getpid();
                                    err=test9(return_value_getpid_5, 0, 1);
                                    sam_finalize();
                                    return err;
                                  }

                                  waitpid(pid, &stat, 0);
                                  old_pid = pid;
                                  if((0xff00 & stat) >> 8 == 0)
                                  {
                                    pid=fork();
                                    if(pid == -1)
                                    {
                                      fprintf(stderr, "Can't fork\n");
                                      return 2;
                                    }

                                    if(pid == 0)
                                    {
                                      err=test9(old_pid, 0, 2);
                                      sam_finalize();
                                      return err;
                                    }

                                    waitpid(pid, &stat, 0);
                                  }

                                  char *tmp_if_expr_6;
                                  if((0xff00 & stat) >> 8 == 0)
                                    tmp_if_expr_6 = "passed";

                                  else
                                    tmp_if_expr_6 = (((union anonymous_7){ .__in=stat }).__i & 0xff00) >> 8 == 1 ? "skipped" : "failed";
                                  fprintf(stderr, "test9 %s\n", tmp_if_expr_6);
                                  if((0xff00 & stat) >> 8 == 1)
                                    no_skipped = no_skipped + 1;

                                  if((0xff00 & stat) >> 8 >= 2)
                                    all_passed = 0;

                                  if(!(all_passed == 0))
                                    fprintf(stderr, "All tests passed (%d skipped)\n", no_skipped);

                                  return all_passed != 0 ? 0 : 1;
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

// qb_to_cs_error
// file ../include/corosync/corotypes.h line 139
enum anonymous_0 qb_to_cs_error(signed int result)
{
  signed int res;
  enum anonymous_0 err = (enum anonymous_0)CS_ERR_LIBRARY;
  if(result >= 0)
    return (enum anonymous_0)CS_OK;

  else
  {
    res = -result;
    switch(res)
    {
      case 9:
      {
        err = (enum anonymous_0)CS_ERR_BAD_HANDLE;
        break;
      }
      case 12:
      {
        err = (enum anonymous_0)CS_ERR_NO_MEMORY;
        break;
      }
      case 42:

      case 105:

      case 110:

      case 11:
      {
        err = (enum anonymous_0)CS_ERR_TRY_AGAIN;
        break;
      }
      case 52:
      {
        err = (enum anonymous_0)CS_ERR_FAILED_OPERATION;
        break;
      }
      case 62:
      {
        err = (enum anonymous_0)CS_ERR_TIMEOUT;
        break;
      }
      case 22:
      {
        err = (enum anonymous_0)CS_ERR_INVALID_PARAM;
        break;
      }
      case 16:
      {
        err = (enum anonymous_0)CS_ERR_BUSY;
        break;
      }
      case 13:
      {
        err = (enum anonymous_0)CS_ERR_ACCESS;
        break;
      }
      case 75:
      {
        err = (enum anonymous_0)CS_ERR_NAME_TOO_LONG;
        break;
      }
      case 17:
      {
        err = (enum anonymous_0)CS_ERR_EXIST;
        break;
      }
      case 28:
      {
        err = (enum anonymous_0)CS_ERR_NO_SPACE;
        break;
      }
      case 4:
      {
        err = (enum anonymous_0)CS_ERR_INTERRUPT;
        break;
      }
      case 2:

      case 19:
      {
        err = (enum anonymous_0)CS_ERR_NOT_EXIST;
        break;
      }
      case 38:

      case 95:
      {
        err = (enum anonymous_0)CS_ERR_NOT_SUPPORTED;
        break;
      }
      case 74:
      {
        err = (enum anonymous_0)CS_ERR_MESSAGE_ERROR;
        break;
      }
      case 90:

      case 7:
      {
        err = (enum anonymous_0)CS_ERR_TOO_BIG;
        break;
      }
      case 111:

      case 107:

      default:
        err = (enum anonymous_0)CS_ERR_LIBRARY;
    }
    return err;
  }
}

// quorum_context_get
// file quorum.c line 232
enum anonymous_0 quorum_context_get(unsigned long int handle, const void **context)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    *context = quorum_inst->context;
    hdb_handle_put(&quorum_handle_t_db, handle);
    return (enum anonymous_0)CS_OK;
  }
}

// quorum_context_set
// file quorum.c line 251
enum anonymous_0 quorum_context_set(unsigned long int handle, const void *context)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    quorum_inst->context = context;
    hdb_handle_put(&quorum_handle_t_db, handle);
    return (enum anonymous_0)CS_OK;
  }
}

// quorum_dispatch
// file ../include/corosync/quorum.h line 87
enum anonymous_0 quorum_dispatch(unsigned long int handle, enum anonymous_5 dispatch_types)
{
  signed int timeout = -1;
  enum anonymous_0 error;
  signed int cont = 1;
  struct quorum_inst *quorum_inst;
  struct anonymous_4 callbacks;
  struct qb_ipc_response_header *dispatch_data;
  char dispatch_buf[1048576l];
  struct res_lib_quorum_notification *res_lib_quorum_notification;
  if(!((signed int)dispatch_types == CS_DISPATCH_ONE) && !((signed int)dispatch_types == CS_DISPATCH_ALL) && !((signed int)dispatch_types == CS_DISPATCH_BLOCKING) && !((signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
  {
    signed int return_value_hdb_handle_get_1;
    return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_1);
    if(!((signed int)error == CS_OK))
      return error;

    else
    {
      if((signed int)dispatch_types == CS_DISPATCH_ALL || (signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
        timeout = 0;

      dispatch_data = (struct qb_ipc_response_header *)dispatch_buf;
      do
      {
        signed long int return_value_qb_ipcc_event_recv_2;
        return_value_qb_ipcc_event_recv_2=qb_ipcc_event_recv(quorum_inst->c, (void *)dispatch_buf, (unsigned long int)(8192 * 128), timeout);
        error=qb_to_cs_error((signed int)return_value_qb_ipcc_event_recv_2);
        if((signed int)error == CS_ERR_BAD_HANDLE)
        {
          error = (enum anonymous_0)CS_OK;
          break;
        }

        if((signed int)error == CS_ERR_TRY_AGAIN)
        {
          if((signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
            break;

          error = (enum anonymous_0)CS_OK;
          if((signed int)dispatch_types == CS_DISPATCH_ALL)
            break;

        }

        else
        {
          if(!((signed int)error == CS_OK))
            break;

          memcpy((void *)&callbacks, (const void *)&quorum_inst->callbacks, sizeof(struct anonymous_4) /*8ul*/ );
          if(dispatch_data->id == 3)
          {
            if(callbacks.quorum_notify_fn == ((void (*)(unsigned long int, unsigned int, unsigned long int, unsigned int, unsigned int *))NULL))
              goto __CPROVER_DUMP_L10;

            res_lib_quorum_notification = (struct res_lib_quorum_notification *)dispatch_data;
            callbacks.quorum_notify_fn(handle, (unsigned int)res_lib_quorum_notification->quorate, res_lib_quorum_notification->ring_seq, res_lib_quorum_notification->view_list_entries, res_lib_quorum_notification->view_list);
          }

          error = (enum anonymous_0)CS_ERR_LIBRARY;
          break;

        __CPROVER_DUMP_L10:
          ;
          if(!(quorum_inst->finalize == 0))
          {
            error = (enum anonymous_0)CS_ERR_BAD_HANDLE;
            break;
          }

          if((signed int)dispatch_types == CS_DISPATCH_ONE || (signed int)dispatch_types == CS_DISPATCH_ONE_NONBLOCKING)
            cont = 0;

        }
      }
      while(!(cont == 0));

    error_put:
      ;
      hdb_handle_put(&quorum_handle_t_db, handle);
      return error;
    }
  }
}

// quorum_fd_get
// file ../include/corosync/quorum.h line 80
enum anonymous_0 quorum_fd_get(unsigned long int handle, signed int *fd)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    signed int return_value_qb_ipcc_fd_get_2;
    return_value_qb_ipcc_fd_get_2=qb_ipcc_fd_get(quorum_inst->c, fd);
    error=qb_to_cs_error(return_value_qb_ipcc_fd_get_2);
    hdb_handle_put(&quorum_handle_t_db, handle);
    return error;
  }
}

// quorum_finalize
// file ../include/corosync/quorum.h line 71
enum anonymous_0 quorum_finalize(unsigned long int handle)
{
  struct quorum_inst *quorum_inst;
  enum anonymous_0 error;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
    if(!(quorum_inst->finalize == 0))
    {
      hdb_handle_put(&quorum_handle_t_db, handle);
      return (enum anonymous_0)CS_ERR_BAD_HANDLE;
    }

    else
    {
      quorum_inst->finalize = 1;
      hdb_handle_destroy(&quorum_handle_t_db, handle);
      hdb_handle_put(&quorum_handle_t_db, handle);
      return (enum anonymous_0)CS_OK;
    }
}

// quorum_getquorate
// file quorum.c line 170
enum anonymous_0 quorum_getquorate(unsigned long int handle, signed int *quorate)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  struct iovec iov;
  struct qb_ipc_request_header req;
  struct res_lib_quorum_getquorate res_lib_quorum_getquorate;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    req.size = (signed int)sizeof(struct qb_ipc_request_header) /*8ul*/ ;
    req.id = 0;
    iov.iov_base = (void *)(char *)&req;
    iov.iov_len = sizeof(struct qb_ipc_request_header) /*8ul*/ ;
    signed long int return_value_qb_ipcc_sendv_recv_2;
    return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(quorum_inst->c, &iov, (unsigned int)1, (void *)&res_lib_quorum_getquorate, sizeof(struct res_lib_quorum_getquorate) /*24ul*/ , -1);
    error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
    if((signed int)error == CS_OK)
    {
      error = (enum anonymous_0)res_lib_quorum_getquorate.header.error;
      *quorate = (signed int)res_lib_quorum_getquorate.quorate;
    }


  error_exit:
    ;
    hdb_handle_put(&quorum_handle_t_db, handle);
    return error;
  }
}

// quorum_initialize
// file ../include/corosync/quorum.h line 63
enum anonymous_0 quorum_initialize(unsigned long int *handle, struct anonymous_4 *callbacks, unsigned int *quorum_type)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  struct iovec iov;
  struct qb_ipc_request_header req;
  struct res_lib_quorum_gettype res_lib_quorum_gettype;
  signed int return_value_hdb_handle_create_1;
  return_value_hdb_handle_create_1=hdb_handle_create(&quorum_handle_t_db, (signed int)sizeof(struct quorum_inst) /*32ul*/ , handle);
  error=hdb_error_to_cs(return_value_hdb_handle_create_1);
  signed int return_value_hdb_handle_get_2;
  signed long int return_value_qb_ipcc_sendv_recv_4;
  if((signed int)error == CS_OK)
  {
    return_value_hdb_handle_get_2=hdb_handle_get(&quorum_handle_t_db, *handle, (void **)(void *)&quorum_inst);
    error=hdb_error_to_cs(return_value_hdb_handle_get_2);
    if((signed int)error == CS_OK)
    {
      error = (enum anonymous_0)CS_OK;
      quorum_inst->finalize = 0;
      quorum_inst->c=qb_ipcc_connect("quorum", (unsigned long int)(8192 * 128));
      if(quorum_inst->c == ((struct qb_ipcc_connection *)NULL))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        error=qb_to_cs_error(-(*return_value___errno_location_3));
        goto error_put_destroy;
      }

      req.size = (signed int)sizeof(struct qb_ipc_request_header) /*8ul*/ ;
      req.id = 3;
      iov.iov_base = (void *)(char *)&req;
      iov.iov_len = sizeof(struct qb_ipc_request_header) /*8ul*/ ;
      return_value_qb_ipcc_sendv_recv_4=qb_ipcc_sendv_recv(quorum_inst->c, &iov, (unsigned int)1, (void *)&res_lib_quorum_gettype, sizeof(struct res_lib_quorum_gettype) /*24ul*/ , -1);
      error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_4);
      if((signed int)error == CS_OK)
      {
        error = (enum anonymous_0)res_lib_quorum_gettype.header.error;
        *quorum_type = res_lib_quorum_gettype.quorum_type;
        if(!(callbacks == ((struct anonymous_4 *)NULL)))
          memcpy((void *)&quorum_inst->callbacks, (const void *)callbacks, sizeof(struct anonymous_4) /*8ul*/ );

        else
          memset((void *)&quorum_inst->callbacks, 0, sizeof(struct anonymous_4) /*8ul*/ );
        hdb_handle_put(&quorum_handle_t_db, *handle);
        return (enum anonymous_0)CS_OK;
      }


    error_put_destroy:
      ;
      hdb_handle_put(&quorum_handle_t_db, *handle);
    }


  error_destroy:
    ;
    hdb_handle_destroy(&quorum_handle_t_db, *handle);
  }


error_no_destroy:
  ;
  return error;
}

// quorum_inst_free
// file quorum.c line 136
static void quorum_inst_free(void *inst)
{
  struct quorum_inst *quorum_inst = (struct quorum_inst *)inst;
  qb_ipcc_disconnect(quorum_inst->c);
}

// quorum_inst_free_link1
// file quorum.c line 136
static void quorum_inst_free_link1(void *inst_link1)
{
  struct quorum_inst *quorum_inst_link1 = (struct quorum_inst *)inst_link1;
  qb_ipcc_disconnect(quorum_inst_link1->c);
}

// quorum_notification_fn
// file sam.c line 244
static void quorum_notification_fn(unsigned long int handle, unsigned int quorate, unsigned long int ring_id, unsigned int view_list_entries, unsigned int *view_list)
{
  sam_internal_data.quorate = quorate;
}

// quorum_trackstart
// file ../include/corosync/quorum.h line 102
enum anonymous_0 quorum_trackstart(unsigned long int handle, unsigned int flags)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  struct iovec iov;
  struct req_lib_quorum_trackstart req_lib_quorum_trackstart;
  struct qb_ipc_response_header res;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    req_lib_quorum_trackstart.header.size = (signed int)sizeof(struct req_lib_quorum_trackstart) /*16ul*/ ;
    req_lib_quorum_trackstart.header.id = 1;
    req_lib_quorum_trackstart.track_flags = flags;
    iov.iov_base = (void *)(char *)&req_lib_quorum_trackstart;
    iov.iov_len = sizeof(struct req_lib_quorum_trackstart) /*16ul*/ ;
    signed long int return_value_qb_ipcc_sendv_recv_2;
    return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(quorum_inst->c, &iov, (unsigned int)1, (void *)&res, sizeof(struct qb_ipc_response_header) /*16ul*/ , -1);
    error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
    if((signed int)error == CS_OK)
      error = (enum anonymous_0)res.error;


  error_exit:
    ;
    hdb_handle_put(&quorum_handle_t_db, handle);
    return error;
  }
}

// quorum_trackstop
// file quorum.c line 312
enum anonymous_0 quorum_trackstop(unsigned long int handle)
{
  enum anonymous_0 error;
  struct quorum_inst *quorum_inst;
  struct iovec iov;
  struct qb_ipc_request_header req;
  struct qb_ipc_response_header res;
  signed int return_value_hdb_handle_get_1;
  return_value_hdb_handle_get_1=hdb_handle_get(&quorum_handle_t_db, handle, (void **)(void *)&quorum_inst);
  error=hdb_error_to_cs(return_value_hdb_handle_get_1);
  if(!((signed int)error == CS_OK))
    return error;

  else
  {
    req.size = (signed int)sizeof(struct qb_ipc_request_header) /*8ul*/ ;
    req.id = 2;
    iov.iov_base = (void *)(char *)&req;
    iov.iov_len = sizeof(struct qb_ipc_request_header) /*8ul*/ ;
    signed long int return_value_qb_ipcc_sendv_recv_2;
    return_value_qb_ipcc_sendv_recv_2=qb_ipcc_sendv_recv(quorum_inst->c, &iov, (unsigned int)1, (void *)&res, sizeof(struct qb_ipc_response_header) /*16ul*/ , -1);
    error=qb_to_cs_error((signed int)return_value_qb_ipcc_sendv_recv_2);
    if((signed int)error == CS_OK)
      error = (enum anonymous_0)res.error;


  error_exit:
    ;
    hdb_handle_put(&quorum_handle_t_db, handle);
    return error;
  }
}

// sam_cmap_destroy_pid_path
// file sam.c line 194
static enum anonymous_0 sam_cmap_destroy_pid_path(void)
{
  unsigned long int iter;
  enum anonymous_0 err;
  char key_name[255l];
  err=cmap_iter_init(sam_internal_data.cmap_handle, sam_internal_data.cmap_pid_path, &iter);
  if((signed int)err == CS_OK)
  {
    do
    {
      err=cmap_iter_next(sam_internal_data.cmap_handle, iter, key_name, (unsigned long int *)(void *)0, (enum anonymous_6 *)(void *)0);
      if(!((signed int)err == CS_OK))
        break;

      cmap_delete(sam_internal_data.cmap_handle, key_name);
    }
    while((_Bool)1);
    err=cmap_iter_finalize(sam_internal_data.cmap_handle, iter);
  }


error_exit:
  ;
  return err;
}

// sam_cmap_register
// file sam.c line 215
static enum anonymous_0 sam_cmap_register(void)
{
  enum anonymous_0 err;
  unsigned long int cmap_handle;
  err=cmap_initialize(&cmap_handle);
  if(!((signed int)err == CS_OK))
    return err;

  else
  {
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    snprintf(sam_internal_data.cmap_pid_path, (unsigned long int)255, "resources.process.%d.", return_value_getpid_1);
    sam_internal_data.cmap_handle = cmap_handle;
    err=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_RECOVERY, (const char *)(void *)0);
    if((signed int)err == CS_OK)
    {
      err=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_HC_PERIOD, (const char *)(void *)0);
      if(!((signed int)err == CS_OK))
        goto destroy_finalize_error;

      return (enum anonymous_0)CS_OK;
    }

    else
    {

    destroy_finalize_error:
      ;
      sam_cmap_destroy_pid_path();
      cmap_finalize(cmap_handle);
      return err;
    }
  }
}

// sam_cmap_update_key
// file sam.c line 142
static enum anonymous_0 sam_cmap_update_key(enum sam_cmap_key_t key, const char *value)
{
  enum anonymous_0 err;
  const char *svalue;
  unsigned long int hc_period;
  unsigned long int last_hc;
  const char *ssvalue[3l] = { ((const char *)NULL), "quit", "restart" };
  char key_name[255l];
  switch((signed int)key)
  {
    case SAM_CMAP_KEY_RECOVERY:
    {
      svalue = ssvalue[(signed long int)((signed int)sam_internal_data.recovery_policy & ~(SAM_RECOVERY_POLICY_QUORUM | SAM_RECOVERY_POLICY_CMAP))];
      snprintf(key_name, (unsigned long int)255, "%s%s", (const void *)sam_internal_data.cmap_pid_path, (const void *)"recovery");
      err=cmap_set_string(sam_internal_data.cmap_handle, key_name, svalue);
      if(!((signed int)err == CS_OK))
        break;

      goto __CPROVER_DUMP_L5;
    }
    case SAM_CMAP_KEY_HC_PERIOD:
    {
      hc_period = (unsigned long int)sam_internal_data.time_interval;
      snprintf(key_name, (unsigned long int)255, "%s%s", (const void *)sam_internal_data.cmap_pid_path, (const void *)"poll_period");
      err=cmap_set_uint64(sam_internal_data.cmap_handle, key_name, hc_period);
      if(!((signed int)err == CS_OK))
        break;

      goto __CPROVER_DUMP_L5;
    }
    case SAM_CMAP_KEY_LAST_HC:
    {
      last_hc=cs_timestamp_get();
      snprintf(key_name, (unsigned long int)255, "%s%s", (const void *)sam_internal_data.cmap_pid_path, (const void *)"last_updated");
      err=cmap_set_uint64(sam_internal_data.cmap_handle, key_name, last_hc);
      if(!((signed int)err == CS_OK))
        break;

      goto __CPROVER_DUMP_L5;
    }
    case SAM_CMAP_KEY_STATE:
    {
      svalue = value;
      snprintf(key_name, (unsigned long int)255, "%s%s", (const void *)sam_internal_data.cmap_pid_path, (const void *)"state");
      err=cmap_set_string(sam_internal_data.cmap_handle, key_name, svalue);
      if(!((signed int)err == CS_OK))
        break;

    }
    default:
    {

    __CPROVER_DUMP_L5:
      ;
      return (enum anonymous_0)CS_OK;
    }
  }

exit_error:
  ;
  return err;
}

// sam_data_getsize
// file ../include/corosync/sam.h line 192
enum anonymous_0 sam_data_getsize(unsigned long int *size)
{
  if(size == ((unsigned long int *)NULL))
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
    if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
      return (enum anonymous_0)CS_ERR_BAD_HANDLE;

    else
    {
      pthread_mutex_lock(&sam_internal_data.lock);
      *size = sam_internal_data.user_data_size;
      pthread_mutex_unlock(&sam_internal_data.lock);
      return (enum anonymous_0)CS_OK;
    }
}

// sam_data_restore
// file ../include/corosync/sam.h line 204
enum anonymous_0 sam_data_restore(void *data, unsigned long int size)
{
  enum anonymous_0 err = (enum anonymous_0)CS_OK;
  if(data == NULL)
    return (enum anonymous_0)CS_ERR_INVALID_PARAM;

  else
    if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
      return (enum anonymous_0)CS_ERR_BAD_HANDLE;

    else
    {
      pthread_mutex_lock(&sam_internal_data.lock);
      if(sam_internal_data.user_data_size == 0ul)
        err = (enum anonymous_0)CS_OK;

      else
        if(!(size >= sam_internal_data.user_data_size))
          err = (enum anonymous_0)CS_ERR_INVALID_PARAM;

        else
        {
          memcpy(data, sam_internal_data.user_data, sam_internal_data.user_data_size);
          pthread_mutex_unlock(&sam_internal_data.lock);
          return (enum anonymous_0)CS_OK;
        }

    error_unlock:
      ;
      pthread_mutex_unlock(&sam_internal_data.lock);
      return err;
    }
}

// sam_data_store
// file ../include/corosync/sam.h line 224
enum anonymous_0 sam_data_store(const void *data, unsigned long int size)
{
  enum anonymous_0 err;
  char command;
  char *new_data;
  unsigned long int return_value_sam_safe_write_3;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    if(data == NULL)
      size = (unsigned long int)0;

    pthread_mutex_lock(&sam_internal_data.lock);
    if(!(sam_internal_data.am_i_child == 0))
    {
      command = (char)3;
      unsigned long int return_value_sam_safe_write_1;
      return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
      if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
      {
        err = (enum anonymous_0)CS_ERR_LIBRARY;
        goto error_unlock;
      }

      unsigned long int return_value_sam_safe_write_2;
      return_value_sam_safe_write_2=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&size, sizeof(unsigned long int) /*8ul*/ );
      if(!(return_value_sam_safe_write_2 == sizeof(unsigned long int) /*8ul*/ ))
      {
        err = (enum anonymous_0)CS_ERR_LIBRARY;
        goto error_unlock;
      }

      if(!(data == NULL))
      {
        return_value_sam_safe_write_3=sam_safe_write(sam_internal_data.child_fd_out, data, size);
        if(!(return_value_sam_safe_write_3 == size))
        {
          err = (enum anonymous_0)CS_ERR_LIBRARY;
          goto error_unlock;
        }

      }

      err=sam_read_reply(sam_internal_data.child_fd_in);
      if(!((signed int)err == CS_OK))
        goto error_unlock;

    }

    if(data == NULL)
    {
      free(sam_internal_data.user_data);
      sam_internal_data.user_data = (void *)0;
      sam_internal_data.user_data_allocated = (unsigned long int)0;
      sam_internal_data.user_data_size = (unsigned long int)0;
    }

    else
    {
      if(!(sam_internal_data.user_data_allocated >= size))
      {
        void *return_value_realloc_4;
        return_value_realloc_4=realloc(sam_internal_data.user_data, size);
        new_data = (char *)return_value_realloc_4;
        if(new_data == ((char *)NULL))
        {
          err = (enum anonymous_0)CS_ERR_NO_MEMORY;
          goto error_unlock;
        }

        sam_internal_data.user_data_allocated = size;
      }

      else
        new_data = (char *)sam_internal_data.user_data;
      sam_internal_data.user_data = (void *)new_data;
      sam_internal_data.user_data_size = size;
      memcpy(sam_internal_data.user_data, data, size);
    }
    pthread_mutex_unlock(&sam_internal_data.lock);
    return (enum anonymous_0)CS_OK;

  error_unlock:
    ;
    pthread_mutex_unlock(&sam_internal_data.lock);
    return err;
  }
}

// sam_finalize
// file ../include/corosync/sam.h line 91
enum anonymous_0 sam_finalize(void)
{
  enum anonymous_0 error;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    if((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED)
    {
      error=sam_stop();
      if(!((signed int)error == CS_OK))
        goto exit_error;

    }

    sam_internal_data.internal_status = (enum sam_internal_status_t)SAM_INTERNAL_STATUS_FINALIZED;
    free(sam_internal_data.user_data);

  exit_error:
    ;
    return (enum anonymous_0)CS_OK;
  }
}

// sam_hc_callback_register
// file ../include/corosync/sam.h line 179
enum anonymous_0 sam_hc_callback_register(signed int (*cb)(void))
{
  enum anonymous_0 error = (enum anonymous_0)CS_OK;
  union pthread_attr_t thread_attr;
  signed int pipe_error;
  signed int pipe_fd[2l];
  signed int return_value_pthread_attr_init_1;
  signed int return_value_pthread_create_2;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
    if(sam_internal_data.time_interval == 0)
      return (enum anonymous_0)CS_ERR_INVALID_PARAM;

    else
      if(!(sam_internal_data.cb_registered == 0))
      {
        sam_internal_data.hc_callback = cb;
        return (enum anonymous_0)CS_OK;
      }

      else
        if(cb == ((signed int (*)(void))NULL))
          return (enum anonymous_0)CS_ERR_INVALID_PARAM;

        else
        {
          pipe_error=pipe(pipe_fd);
          if(!(pipe_error == 0))
            error = (enum anonymous_0)CS_ERR_LIBRARY;

          else
          {
            sam_internal_data.cb_rpipe_fd = pipe_fd[(signed long int)0];
            sam_internal_data.cb_wpipe_fd = pipe_fd[(signed long int)1];
            return_value_pthread_attr_init_1=pthread_attr_init(&thread_attr);
            error = (enum anonymous_0)return_value_pthread_attr_init_1;
            if(!((signed int)error == 0))
              error = (enum anonymous_0)CS_ERR_LIBRARY;

            else
            {
              pthread_attr_setdetachstate(&thread_attr, 1);
              pthread_attr_setstacksize(&thread_attr, (unsigned long int)32768);
              return_value_pthread_create_2=pthread_create(&sam_internal_data.cb_thread, &thread_attr, hc_callback_thread, (void *)0);
              error = (enum anonymous_0)return_value_pthread_create_2;
              if(!((signed int)error == 0))
                error = (enum anonymous_0)CS_ERR_LIBRARY;

              else
              {
                pthread_attr_destroy(&thread_attr);
                sam_internal_data.cb_registered = 1;
                sam_internal_data.hc_callback = cb;
                return (enum anonymous_0)CS_OK;
              }

            error_attr_destroy_exit:
              ;
              pthread_attr_destroy(&thread_attr);
            }

          error_close_fd_exit:
            ;
            sam_internal_data.cb_wpipe_fd = 0;
            sam_internal_data.cb_rpipe_fd = sam_internal_data.cb_wpipe_fd;
            close(pipe_fd[(signed long int)0]);
            close(pipe_fd[(signed long int)1]);
          }

        error_exit:
          ;
          return error;
        }
}

// sam_hc_send
// file ../include/corosync/sam.h line 159
enum anonymous_0 sam_hc_send(void)
{
  char command;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    command = (char)2;
    unsigned long int return_value_sam_safe_write_1;
    return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
    if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
      return (enum anonymous_0)CS_ERR_LIBRARY;

    else
      return (enum anonymous_0)CS_OK;
  }
}

// sam_initialize
// file ../include/corosync/sam.h line 76
enum anonymous_0 sam_initialize(signed int time_interval, enum anonymous_8 recovery_policy)
{
  struct anonymous_4 quorum_callbacks;
  unsigned int quorum_type;
  enum anonymous_0 err;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_NOT_INITIALIZED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
    if(!((-25 & (signed int)recovery_policy) == SAM_RECOVERY_POLICY_QUIT) && !((-25 & (signed int)recovery_policy) == SAM_RECOVERY_POLICY_RESTART))
      return (enum anonymous_0)CS_ERR_INVALID_PARAM;

    else
    {
      if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recovery_policy) == 0))
      {
        quorum_callbacks.quorum_notify_fn = quorum_notification_fn;
        err=quorum_initialize(&sam_internal_data.quorum_handle, &quorum_callbacks, &quorum_type);
        if(!((signed int)err == CS_OK))
          goto exit_error;

        err=quorum_trackstart(sam_internal_data.quorum_handle, (unsigned int)0x02);
        if(!((signed int)err == CS_OK))
          goto exit_error_quorum;

        err=quorum_fd_get(sam_internal_data.quorum_handle, &sam_internal_data.quorum_fd);
        if(!((signed int)err == CS_OK))
          goto exit_error_quorum;

        err=quorum_dispatch(sam_internal_data.quorum_handle, (enum anonymous_5)CS_DISPATCH_ONE);
        if(!((signed int)err == CS_OK))
          goto exit_error_quorum;

      }

      sam_internal_data.recovery_policy = recovery_policy;
      sam_internal_data.time_interval = time_interval;
      sam_internal_data.internal_status = (enum sam_internal_status_t)SAM_INTERNAL_STATUS_INITIALIZED;
      sam_internal_data.warn_signal = 15;
      sam_internal_data.am_i_child = 0;
      sam_internal_data.user_data = (void *)0;
      sam_internal_data.user_data_size = (unsigned long int)0;
      sam_internal_data.user_data_allocated = (unsigned long int)0;
      pthread_mutex_init(&sam_internal_data.lock, (const union anonymous_2 *)(void *)0);
      return (enum anonymous_0)CS_OK;

    exit_error_quorum:
      ;
      quorum_finalize(sam_internal_data.quorum_handle);

    exit_error:
      ;
      return err;
    }
}

// sam_mark_failed
// file ../include/corosync/sam.h line 241
enum anonymous_0 sam_mark_failed(void)
{
  char command;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
    if((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0)
      return (enum anonymous_0)CS_ERR_INVALID_PARAM;

    else
    {
      command = (char)5;
      unsigned long int return_value_sam_safe_write_1;
      return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
      if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
        return (enum anonymous_0)CS_ERR_LIBRARY;

      else
        return (enum anonymous_0)CS_OK;
    }
}

// sam_parent_cmap_state_set
// file sam.c line 909
static enum anonymous_0 sam_parent_cmap_state_set(signed int parent_fd_in, signed int parent_fd_out, signed int state)
{
  enum anonymous_0 err;
  const char *state_s;
  if(state == 1)
    state_s = "running";

  else
    state_s = "stopped";
  err=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, state_s);
  enum anonymous_0 return_value_sam_parent_reply_send_1;
  if((signed int)err == CS_OK)
  {
    return_value_sam_parent_reply_send_1=sam_parent_reply_send((enum anonymous_0)CS_OK, parent_fd_in, parent_fd_out);
    return return_value_sam_parent_reply_send_1;
  }


error_reply:
  ;
  enum anonymous_0 return_value_sam_parent_reply_send_2;
  return_value_sam_parent_reply_send_2=sam_parent_reply_send(err, parent_fd_in, parent_fd_out);
  return return_value_sam_parent_reply_send_2;
}

// sam_parent_data_store
// file sam.c line 974
static enum anonymous_0 sam_parent_data_store(signed int parent_fd_in, signed int parent_fd_out)
{
  char *user_data;
  signed long int size;
  enum anonymous_0 err = (enum anonymous_0)CS_OK;
  user_data = (char *)(void *)0;
  unsigned long int return_value_sam_safe_read_1;
  return_value_sam_safe_read_1=sam_safe_read(parent_fd_in, (void *)&size, sizeof(signed long int) /*8ul*/ );
  enum anonymous_0 return_value_sam_parent_reply_send_4;
  if(!(return_value_sam_safe_read_1 == sizeof(signed long int) /*8ul*/ ))
    err = (enum anonymous_0)CS_ERR_LIBRARY;

  else
  {
    if(size >= 1l)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)size);
      user_data = (char *)return_value_malloc_2;
      if(user_data == ((char *)NULL))
      {
        err = (enum anonymous_0)CS_ERR_NO_MEMORY;
        goto error_reply;
      }

      unsigned long int return_value_sam_safe_read_3;
      return_value_sam_safe_read_3=sam_safe_read(parent_fd_in, (void *)user_data, (unsigned long int)size);
      if(!(return_value_sam_safe_read_3 == (unsigned long int)size))
      {
        err = (enum anonymous_0)CS_ERR_LIBRARY;
        goto free_error_reply;
      }

    }

    err=sam_data_store((const void *)user_data, (unsigned long int)size);
    if((signed int)err == CS_OK)
    {
      free((void *)user_data);
      return_value_sam_parent_reply_send_4=sam_parent_reply_send((enum anonymous_0)CS_OK, parent_fd_in, parent_fd_out);
      return return_value_sam_parent_reply_send_4;
    }


  free_error_reply:
    ;
    free((void *)user_data);
  }

error_reply:
  ;
  enum anonymous_0 return_value_sam_parent_reply_send_5;
  return_value_sam_parent_reply_send_5=sam_parent_reply_send(err, parent_fd_in, parent_fd_out);
  return return_value_sam_parent_reply_send_5;
}

// sam_parent_handler
// file sam.c line 1018
static enum sam_parent_action_t sam_parent_handler(signed int parent_fd_in, signed int parent_fd_out, signed int child_pid)
{
  signed int poll_error;
  signed int action;
  signed int status;
  signed long int bytes_read;
  char command;
  signed int time_interval;
  struct pollfd pfds[2l];
  unsigned long int nfds;
  enum anonymous_0 err;
  enum anonymous_8 recpol;
  status = 0;
  action = SAM_PARENT_ACTION_CONTINUE;
  recpol = sam_internal_data.recovery_policy;
  while(action == SAM_PARENT_ACTION_CONTINUE)
  {
    pfds[(signed long int)0].fd = parent_fd_in;
    pfds[(signed long int)0].events = (signed short int)0x001;
    pfds[(signed long int)0].revents = (signed short int)0;
    nfds = (unsigned long int)1;
    if(status == 1 && !(sam_internal_data.time_interval == 0))
      time_interval = sam_internal_data.time_interval;

    else
      time_interval = -1;
    if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0))
    {
      pfds[(signed long int)nfds].fd = sam_internal_data.quorum_fd;
      pfds[(signed long int)nfds].events = (signed short int)0x001;
      pfds[(signed long int)nfds].revents = (signed short int)0;
      nfds = nfds + 1ul;
    }

    poll_error=poll(pfds, nfds, time_interval);
    if(poll_error == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      if(!(*return_value___errno_location_1 == 4))
        action = SAM_PARENT_ACTION_ERROR;

    }

    if(poll_error == 0)
    {
      if(status == 0)
        action = SAM_PARENT_ACTION_QUIT;

      else
        sam_parent_kill_child(&action, child_pid);
    }

    if(poll_error >= 1)
    {
      if(!((signed int)pfds[0l].revents == 0))
      {
        unsigned long int return_value_sam_safe_read_2;
        return_value_sam_safe_read_2=sam_safe_read(parent_fd_in, (void *)&command, (unsigned long int)1);
        bytes_read = (signed long int)return_value_sam_safe_read_2;
        if(bytes_read == 0l)
        {
          if(status == 0)
            action = SAM_PARENT_ACTION_QUIT;

          else
            action = SAM_PARENT_ACTION_RECOVERY;
          continue;
        }

        if(bytes_read == -1l)
        {
          action = SAM_PARENT_ACTION_ERROR;
          break;
        }

        if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
          sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_LAST_HC, (const char *)(void *)0);

        switch((signed int)command)
        {
          case 0:
          {
            if(status == 0)
            {
              if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0))
              {
                enum anonymous_0 return_value_sam_parent_wait_for_quorum_3;
                return_value_sam_parent_wait_for_quorum_3=sam_parent_wait_for_quorum(parent_fd_in, parent_fd_out);
                if(!((signed int)return_value_sam_parent_wait_for_quorum_3 == CS_OK))
                  goto __CPROVER_DUMP_L29;

              }

              if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
              {
                enum anonymous_0 return_value_sam_parent_cmap_state_set_4;
                return_value_sam_parent_cmap_state_set_4=sam_parent_cmap_state_set(parent_fd_in, parent_fd_out, 1);
                if(!((signed int)return_value_sam_parent_cmap_state_set_4 == CS_OK))
                  goto __CPROVER_DUMP_L29;

              }

              status = 1;
            }

            break;
          }
          case 1:
          {
            if(status == 1)
            {
              if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
              {
                enum anonymous_0 return_value_sam_parent_cmap_state_set_5;
                return_value_sam_parent_cmap_state_set_5=sam_parent_cmap_state_set(parent_fd_in, parent_fd_out, 0);
                if(!((signed int)return_value_sam_parent_cmap_state_set_5 == CS_OK))
                  goto __CPROVER_DUMP_L29;

              }

              status = 0;
            }

            break;
          }
          case 3:
          {
            sam_parent_data_store(parent_fd_in, parent_fd_out);
            break;
          }
          case 4:
          {
            sam_parent_warn_signal_set(parent_fd_in, parent_fd_out);
            break;
          }
          case 5:
          {
            status = 1;
            sam_parent_mark_child_failed(&action, child_pid);
          }
        }
      }

      if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)sam_internal_data.recovery_policy) == 0))
      {
        if(!((signed int)pfds[1l].revents == 0))
        {
          err=quorum_dispatch(sam_internal_data.quorum_handle, (enum anonymous_5)CS_DISPATCH_ALL);
          if(status == 1 && (sam_internal_data.quorate == 0u || !((signed int)err == CS_OK) && !((signed int)err == CS_ERR_TRY_AGAIN)))
            sam_parent_kill_child(&action, child_pid);

        }

      }

    }


  __CPROVER_DUMP_L29:
    ;
  }

action_exit:
  ;
  return (enum sam_parent_action_t)action;
}

// sam_parent_kill_child
// file sam.c line 933
static enum anonymous_0 sam_parent_kill_child(signed int *action, signed int child_pid)
{
  if(sam_internal_data.term_send == 0)
  {
    kill(child_pid, sam_internal_data.warn_signal);
    sam_internal_data.term_send = 1;
  }

  else
  {
    kill(child_pid, 9);
    *action = SAM_PARENT_ACTION_RECOVERY;
  }
  return (enum anonymous_0)CS_OK;
}

// sam_parent_mark_child_failed
// file sam.c line 958
static enum anonymous_0 sam_parent_mark_child_failed(signed int *action, signed int child_pid)
{
  enum anonymous_8 recpol = sam_internal_data.recovery_policy;
  sam_internal_data.term_send = 1;
  sam_internal_data.recovery_policy = (enum anonymous_8)(SAM_RECOVERY_POLICY_QUIT | (((signed int)recpol & ~SAM_RECOVERY_POLICY_CMAP) != 0 ? SAM_RECOVERY_POLICY_CMAP : 0) | (((signed int)recpol & ~SAM_RECOVERY_POLICY_QUORUM) != 0 ? SAM_RECOVERY_POLICY_QUORUM : 0));
  enum anonymous_0 return_value_sam_parent_kill_child_1;
  return_value_sam_parent_kill_child_1=sam_parent_kill_child(action, child_pid);
  return return_value_sam_parent_kill_child_1;
}

// sam_parent_reply_send
// file sam.c line 774
static enum anonymous_0 sam_parent_reply_send(enum anonymous_0 err, signed int parent_fd_in, signed int parent_fd_out)
{
  char reply;
  if((signed int)err == CS_OK)
  {
    reply = (char)0;
    unsigned long int return_value_sam_safe_write_1;
    return_value_sam_safe_write_1=sam_safe_write(parent_fd_out, (const void *)&reply, sizeof(char) /*1ul*/ );
    if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
      err = (enum anonymous_0)CS_ERR_LIBRARY;

    else
      return (enum anonymous_0)CS_OK;
  }


error_reply:
  ;
  reply = (char)1;
  unsigned long int return_value_sam_safe_write_2;
  return_value_sam_safe_write_2=sam_safe_write(parent_fd_out, (const void *)&reply, sizeof(char) /*1ul*/ );
  if(!(return_value_sam_safe_write_2 == sizeof(char) /*1ul*/ ))
    return (enum anonymous_0)CS_ERR_LIBRARY;

  else
  {
    unsigned long int return_value_sam_safe_write_3;
    return_value_sam_safe_write_3=sam_safe_write(parent_fd_out, (const void *)&err, sizeof(enum anonymous_0) /*4ul*/ );
    if(!(return_value_sam_safe_write_3 == sizeof(enum anonymous_0) /*4ul*/ ))
      return (enum anonymous_0)CS_ERR_LIBRARY;

    else
      return err;
  }
}

// sam_parent_wait_for_quorum
// file sam.c line 831
static enum anonymous_0 sam_parent_wait_for_quorum(signed int parent_fd_in, signed int parent_fd_out)
{
  enum anonymous_0 err;
  struct pollfd pfds[2l];
  signed int poll_err;
  if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
  {
    err=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, "waiting for quorum");
    if(!((signed int)err == CS_OK))
      goto error_reply;

  }

  err=quorum_dispatch(sam_internal_data.quorum_handle, (enum anonymous_5)CS_DISPATCH_ALL);
  enum anonymous_0 return_value_sam_parent_reply_send_4;
  if((signed int)err == CS_OK)
  {
    while(sam_internal_data.quorate == 0u)
    {
      pfds[(signed long int)0].fd = parent_fd_in;
      pfds[(signed long int)0].events = (signed short int)0;
      pfds[(signed long int)0].revents = (signed short int)0;
      pfds[(signed long int)1].fd = sam_internal_data.quorum_fd;
      pfds[(signed long int)1].events = (signed short int)0x001;
      pfds[(signed long int)1].revents = (signed short int)0;
      poll_err=poll(pfds, (unsigned long int)2, -1);
      if(poll_err == -1)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        if(!(*return_value___errno_location_1 == 4))
        {
          err = (enum anonymous_0)CS_ERR_LIBRARY;
          goto error_reply;
        }

      }

      if(!((signed int)pfds[0l].revents == 0))
      {
        _Bool tmp_if_expr_2;
        if((signed int)pfds[0l].revents == 0x008)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (signed int)pfds[(signed long int)0].revents == 0x010 ? (_Bool)1 : (_Bool)0;
        _Bool tmp_if_expr_3;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (signed int)pfds[(signed long int)0].revents == 0x020 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          return (enum anonymous_0)CS_OK;

      }

      if(!((signed int)pfds[1l].revents == 0))
      {
        err=quorum_dispatch(sam_internal_data.quorum_handle, (enum anonymous_5)CS_DISPATCH_ONE);
        if(!((signed int)err == CS_OK))
          goto error_reply;

      }

    }
    if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
    {
      err=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, "running");
      if(!((signed int)err == CS_OK))
        goto error_reply;

    }

    return_value_sam_parent_reply_send_4=sam_parent_reply_send((enum anonymous_0)CS_OK, parent_fd_in, parent_fd_out);
    return return_value_sam_parent_reply_send_4;
  }


error_reply:
  ;
  if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
    sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, "stopped");

  enum anonymous_0 return_value_sam_parent_reply_send_5;
  return_value_sam_parent_reply_send_5=sam_parent_reply_send(err, parent_fd_in, parent_fd_out);
  return return_value_sam_parent_reply_send_5;
}

// sam_parent_warn_signal_set
// file sam.c line 805
static enum anonymous_0 sam_parent_warn_signal_set(signed int parent_fd_in, signed int parent_fd_out)
{
  signed int warn_signal;
  enum anonymous_0 err = (enum anonymous_0)CS_OK;
  unsigned long int return_value_sam_safe_read_1;
  return_value_sam_safe_read_1=sam_safe_read(parent_fd_in, (void *)&warn_signal, sizeof(signed int) /*4ul*/ );
  enum anonymous_0 return_value_sam_parent_reply_send_2;
  if(!(return_value_sam_safe_read_1 == sizeof(signed int) /*4ul*/ ))
    err = (enum anonymous_0)CS_ERR_LIBRARY;

  else
  {
    err=sam_warn_signal_set(warn_signal);
    if((signed int)err == CS_OK)
    {
      return_value_sam_parent_reply_send_2=sam_parent_reply_send((enum anonymous_0)CS_OK, parent_fd_in, parent_fd_out);
      return return_value_sam_parent_reply_send_2;
    }

  }

error_reply:
  ;
  enum anonymous_0 return_value_sam_parent_reply_send_3;
  return_value_sam_parent_reply_send_3=sam_parent_reply_send(err, parent_fd_in, parent_fd_out);
  return return_value_sam_parent_reply_send_3;
}

// sam_read_reply
// file sam.c line 376
static enum anonymous_0 sam_read_reply(signed int child_fd_in)
{
  char reply;
  enum anonymous_0 err;
  unsigned long int return_value_sam_safe_read_1;
  return_value_sam_safe_read_1=sam_safe_read(sam_internal_data.child_fd_in, (void *)&reply, sizeof(char) /*1ul*/ );
  unsigned long int return_value_sam_safe_read_2;
  if(!(return_value_sam_safe_read_1 == sizeof(char) /*1ul*/ ))
    return (enum anonymous_0)CS_ERR_LIBRARY;

  else
  {
    switch((signed int)reply)
    {
      case 1:
      {
        return_value_sam_safe_read_2=sam_safe_read(sam_internal_data.child_fd_in, (void *)&err, sizeof(enum anonymous_0) /*4ul*/ );
        if(!(return_value_sam_safe_read_2 == sizeof(enum anonymous_0) /*4ul*/ ))
          return (enum anonymous_0)CS_ERR_LIBRARY;

        return err;
      }
      case 0:
        break;
      default:
        return (enum anonymous_0)CS_ERR_LIBRARY;
    }
    return (enum anonymous_0)CS_OK;
  }
}

// sam_register
// file ../include/corosync/sam.h line 147
enum anonymous_0 sam_register(unsigned int *instance_id)
{
  enum anonymous_0 error;
  signed int pid;
  signed int pipe_error;
  signed int pipe_fd_out[2l];
  signed int pipe_fd_in[2l];
  enum sam_parent_action_t action;
  enum sam_parent_action_t old_action;
  signed int child_status;
  enum anonymous_8 recpol;
  signed int return_value_waitpid_1;
  signed int *return_value___errno_location_2;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    recpol = sam_internal_data.recovery_policy;
    if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
    {
      error=sam_cmap_register();
      if(!((signed int)error == CS_OK))
        goto error_exit;

    }

    error = (enum anonymous_0)CS_OK;
    while((_Bool)1)
    {
      pipe_error=pipe(pipe_fd_out);
      if(!(pipe_error == 0))
      {
        error = (enum anonymous_0)CS_ERR_LIBRARY;
        break;
      }

      pipe_error=pipe(pipe_fd_in);
      if(!(pipe_error == 0))
      {
        close(pipe_fd_out[(signed long int)0]);
        close(pipe_fd_out[(signed long int)1]);
        error = (enum anonymous_0)CS_ERR_LIBRARY;
        break;
      }

      if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
      {
        error=sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, "stopped");
        if(!((signed int)error == CS_OK))
          break;

      }

      sam_internal_data.instance_id = sam_internal_data.instance_id + 1u;
      sam_internal_data.term_send = 0;
      pid=fork();
      if(pid == -1)
      {
        sam_internal_data.instance_id = sam_internal_data.instance_id - 1u;
        error = (enum anonymous_0)CS_ERR_LIBRARY;
        break;
      }

      if(pid == 0)
      {
        close(pipe_fd_out[(signed long int)0]);
        close(pipe_fd_in[(signed long int)1]);
        sam_internal_data.child_fd_out = pipe_fd_out[(signed long int)1];
        sam_internal_data.child_fd_in = pipe_fd_in[(signed long int)0];
        if(!(instance_id == ((unsigned int *)NULL)))
          *instance_id = sam_internal_data.instance_id;

        sam_internal_data.am_i_child = 1;
        sam_internal_data.internal_status = (enum sam_internal_status_t)SAM_INTERNAL_STATUS_REGISTERED;
        pthread_mutex_init(&sam_internal_data.lock, (const union anonymous_2 *)(void *)0);
        break;
      }

      else
      {
        close(pipe_fd_out[(signed long int)1]);
        close(pipe_fd_in[(signed long int)0]);
        action=sam_parent_handler(pipe_fd_out[(signed long int)0], pipe_fd_in[(signed long int)1], pid);
        close(pipe_fd_out[(signed long int)0]);
        close(pipe_fd_in[(signed long int)1]);
        if((signed int)action == SAM_PARENT_ACTION_ERROR)
        {
          error = (enum anonymous_0)CS_ERR_LIBRARY;
          break;
        }

        do
        {
          return_value_waitpid_1=waitpid(pid, &child_status, 0);
          if(!(return_value_waitpid_1 == -1))
            break;

          return_value___errno_location_2=__errno_location();
          if(!(*return_value___errno_location_2 == 4))
            break;

        }
        while((_Bool)1);
        old_action = action;
        if((signed int)action == SAM_PARENT_ACTION_RECOVERY)
        {
          if((-25 & (signed int)sam_internal_data.recovery_policy) == SAM_RECOVERY_POLICY_QUIT)
            action = (enum sam_parent_action_t)SAM_PARENT_ACTION_QUIT;

        }

        if((signed int)action == SAM_PARENT_ACTION_QUIT)
        {
          if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0))
            quorum_finalize(sam_internal_data.quorum_handle);

          if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
          {
            if((signed int)old_action == SAM_PARENT_ACTION_RECOVERY)
              sam_cmap_update_key((enum sam_cmap_key_t)SAM_CMAP_KEY_STATE, "failed");

            else
              sam_cmap_destroy_pid_path();
          }

          /* tag-#anon#lUN[lS32'__in'|S32'__i'] */
union anonymous_7
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
          ;
          exit((((union anonymous_7){ .__in=child_status }).__i & 0xff00) >> 8);
        }

      }
    }

  error_exit:
    ;
    return error;
  }
}

// sam_safe_read
// file sam.c line 350
static unsigned long int sam_safe_read(signed int d, void *buf, unsigned long int nbyte)
{
  signed long int bytes_read;
  signed long int tmp_bytes_read;
  bytes_read = (signed long int)0;
  signed int *return_value___errno_location_2;
  do
  {
    tmp_bytes_read=read(d, (void *)((char *)buf + bytes_read), nbyte - (unsigned long int)bytes_read > (unsigned long int)0x7fffffffffffffffL ? (unsigned long int)0x7fffffffffffffffL : nbyte - (unsigned long int)bytes_read);
    if(tmp_bytes_read == -1l)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      _Bool tmp_if_expr_3;
      if(*return_value___errno_location_1 == 11)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 == 4 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_3)
        return (unsigned long int)-1;

    }

    else
      bytes_read = bytes_read + tmp_bytes_read;
  }
  while(!(tmp_bytes_read == 0l) && !((unsigned long int)bytes_read == nbyte));
  return (unsigned long int)bytes_read;
}

// sam_safe_write
// file sam.c line 322
static unsigned long int sam_safe_write(signed int d, const void *buf, unsigned long int nbyte)
{
  signed long int bytes_write;
  signed long int tmp_bytes_write;
  bytes_write = (signed long int)0;
  signed int *return_value___errno_location_2;
  do
  {
    tmp_bytes_write=write(d, (const void *)((const char *)buf + bytes_write), nbyte - (unsigned long int)bytes_write > (unsigned long int)0x7fffffffffffffffL ? (unsigned long int)0x7fffffffffffffffL : nbyte - (unsigned long int)bytes_write);
    if(tmp_bytes_write == -1l)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      _Bool tmp_if_expr_3;
      if(*return_value___errno_location_1 == 11)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value___errno_location_2=__errno_location();
        tmp_if_expr_3 = *return_value___errno_location_2 == 4 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_3)
        return (unsigned long int)-1;

    }

    else
      bytes_write = bytes_write + tmp_bytes_write;
  }
  while(!((unsigned long int)bytes_write == nbyte));
  return (unsigned long int)bytes_write;
}

// sam_start
// file ../include/corosync/sam.h line 102
enum anonymous_0 sam_start(void)
{
  char command;
  enum anonymous_0 err;
  enum anonymous_8 recpol;
  unsigned long int return_value_sam_safe_write_2;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    recpol = sam_internal_data.recovery_policy;
    if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0) || !((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
      pthread_mutex_lock(&sam_internal_data.lock);

    command = (char)0;
    unsigned long int return_value_sam_safe_write_1;
    return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
    if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
    {
      if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0) || !((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
        pthread_mutex_unlock(&sam_internal_data.lock);

      return (enum anonymous_0)CS_ERR_LIBRARY;
    }

    else
    {
      if(!((SAM_RECOVERY_POLICY_QUORUM & (signed int)recpol) == 0) || !((SAM_RECOVERY_POLICY_CMAP & (signed int)recpol) == 0))
      {
        err=sam_read_reply(sam_internal_data.child_fd_in);
        if(!((signed int)err == CS_OK))
        {
          pthread_mutex_unlock(&sam_internal_data.lock);
          return err;
        }

        pthread_mutex_unlock(&sam_internal_data.lock);
      }

      if(!(sam_internal_data.hc_callback == ((signed int (*)(void))NULL)))
      {
        return_value_sam_safe_write_2=sam_safe_write(sam_internal_data.cb_wpipe_fd, (const void *)&command, sizeof(char) /*1ul*/ );
        if(!(return_value_sam_safe_write_2 == sizeof(char) /*1ul*/ ))
          return (enum anonymous_0)CS_ERR_LIBRARY;

      }

      sam_internal_data.internal_status = (enum sam_internal_status_t)SAM_INTERNAL_STATUS_STARTED;
      return (enum anonymous_0)CS_OK;
    }
  }
}

// sam_stop
// file ../include/corosync/sam.h line 114
enum anonymous_0 sam_stop(void)
{
  char command;
  enum anonymous_0 err;
  unsigned long int return_value_sam_safe_write_2;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    command = (char)1;
    if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
      pthread_mutex_lock(&sam_internal_data.lock);

    unsigned long int return_value_sam_safe_write_1;
    return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
    if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
    {
      if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
        pthread_mutex_unlock(&sam_internal_data.lock);

      return (enum anonymous_0)CS_ERR_LIBRARY;
    }

    else
    {
      if(!((SAM_RECOVERY_POLICY_CMAP & (signed int)sam_internal_data.recovery_policy) == 0))
      {
        err=sam_read_reply(sam_internal_data.child_fd_in);
        if(!((signed int)err == CS_OK))
        {
          pthread_mutex_unlock(&sam_internal_data.lock);
          return err;
        }

        pthread_mutex_unlock(&sam_internal_data.lock);
      }

      if(!(sam_internal_data.hc_callback == ((signed int (*)(void))NULL)))
      {
        return_value_sam_safe_write_2=sam_safe_write(sam_internal_data.cb_wpipe_fd, (const void *)&command, sizeof(char) /*1ul*/ );
        if(!(return_value_sam_safe_write_2 == sizeof(char) /*1ul*/ ))
          return (enum anonymous_0)CS_ERR_LIBRARY;

      }

      sam_internal_data.internal_status = (enum sam_internal_status_t)SAM_INTERNAL_STATUS_REGISTERED;
      return (enum anonymous_0)CS_OK;
    }
  }
}

// sam_warn_signal_set
// file ../include/corosync/sam.h line 126
enum anonymous_0 sam_warn_signal_set(signed int warn_signal)
{
  char command;
  enum anonymous_0 err;
  if(!((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_INITIALIZED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_REGISTERED) && !((signed int)sam_internal_data.internal_status == SAM_INTERNAL_STATUS_STARTED))
    return (enum anonymous_0)CS_ERR_BAD_HANDLE;

  else
  {
    pthread_mutex_lock(&sam_internal_data.lock);
    if(!(sam_internal_data.am_i_child == 0))
    {
      command = (char)4;
      unsigned long int return_value_sam_safe_write_1;
      return_value_sam_safe_write_1=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&command, sizeof(char) /*1ul*/ );
      if(!(return_value_sam_safe_write_1 == sizeof(char) /*1ul*/ ))
      {
        err = (enum anonymous_0)CS_ERR_LIBRARY;
        goto error_unlock;
      }

      unsigned long int return_value_sam_safe_write_2;
      return_value_sam_safe_write_2=sam_safe_write(sam_internal_data.child_fd_out, (const void *)&warn_signal, sizeof(signed int) /*4ul*/ );
      if(!(return_value_sam_safe_write_2 == sizeof(signed int) /*4ul*/ ))
      {
        err = (enum anonymous_0)CS_ERR_LIBRARY;
        goto error_unlock;
      }

      err=sam_read_reply(sam_internal_data.child_fd_in);
      if(!((signed int)err == CS_OK))
        goto error_unlock;

    }

    sam_internal_data.warn_signal = warn_signal;
    pthread_mutex_unlock(&sam_internal_data.lock);
    return (enum anonymous_0)CS_OK;

  error_unlock:
    ;
    pthread_mutex_unlock(&sam_internal_data.lock);
    return err;
  }
}

// test1
// file testsam.c line 70
static signed int test1(void)
{
  enum anonymous_0 error;
  unsigned int instance_id;
  signed int i;
  printf("%s: initialize\n", (const void *)"test1");
  error=sam_initialize(2000, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
  enum anonymous_0 return_value_sam_start_2;
  enum anonymous_0 return_value_sam_stop_4;
  enum anonymous_0 return_value_sam_register_6;
  enum anonymous_0 return_value_sam_hc_send_8;
  enum anonymous_0 return_value_sam_hc_callback_register_10;
  if(!((signed int)error == CS_OK))
  {
    fprintf(stderr, "Can't initialize SAM API. Error %d\n", error);
    return 1;
  }

  else
  {
    printf("%s: register\n", (const void *)"test1");
    error=sam_register(&instance_id);
    if(!((signed int)error == CS_OK))
    {
      fprintf(stderr, "Can't register. Error %d\n", error);
      return 1;
    }

    else
      if(instance_id == 1u || instance_id == 2u)
      {
        printf("%s iid %d: start\n", (const void *)"test1", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        i = 0;
        for( ; !(i >= 10); i = i + 1)
        {
          printf("%s iid %d: sleep 1\n", (const void *)"test1", instance_id);
          sleep((unsigned int)1);
          printf("%s iid %d: hc send\n", (const void *)"test1", instance_id);
          error=sam_hc_send();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't send hc. Error %d\n", error);
            return 1;
          }

        }
        if(instance_id == 2u)
        {
          printf("%s iid %d: stop\n", (const void *)"test1", instance_id);
          error=sam_stop();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't send hc. Error %d\n", error);
            return 1;
          }

        }

        printf("%s iid %d: sleep 3\n", (const void *)"test1", instance_id);
        sleep((unsigned int)3);
        printf("%s iid %d: start\n", (const void *)"test1", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: sleep 3\n", (const void *)"test1", instance_id);
        sleep((unsigned int)3);
        return 0;
      }

      else
      {
        if(instance_id == 3u)
        {
          error=sam_initialize(2000, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
          if((signed int)error == CS_OK)
          {
            fprintf(stderr, "Can initialize SAM API after initialization");
            return 1;
          }

          error=sam_start();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't start hc. Error %d\n", error);
            return 1;
          }

          error=sam_stop();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't stop hc. Error %d\n", error);
            return 1;
          }

          error=sam_finalize();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't finalize sam. Error %d\n", error);
            return 1;
          }

          error=sam_finalize();
          if((signed int)error == CS_OK)
          {
            fprintf(stderr, "Can finalize sam after finalization!\n");
            return 1;
          }

          enum anonymous_0 return_value_sam_initialize_1;
          return_value_sam_initialize_1=sam_initialize(2, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
          _Bool tmp_if_expr_3;
          if((signed int)return_value_sam_initialize_1 == CS_OK)
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            return_value_sam_start_2=sam_start();
            tmp_if_expr_3 = (signed int)return_value_sam_start_2 == CS_OK ? (_Bool)1 : (_Bool)0;
          }
          _Bool tmp_if_expr_5;
          if(tmp_if_expr_3)
            tmp_if_expr_5 = (_Bool)1;

          else
          {
            return_value_sam_stop_4=sam_stop();
            tmp_if_expr_5 = (signed int)return_value_sam_stop_4 == CS_OK ? (_Bool)1 : (_Bool)0;
          }
          _Bool tmp_if_expr_7;
          if(tmp_if_expr_5)
            tmp_if_expr_7 = (_Bool)1;

          else
          {
            return_value_sam_register_6=sam_register((unsigned int *)(void *)0);
            tmp_if_expr_7 = (signed int)return_value_sam_register_6 == CS_OK ? (_Bool)1 : (_Bool)0;
          }
          _Bool tmp_if_expr_9;
          if(tmp_if_expr_7)
            tmp_if_expr_9 = (_Bool)1;

          else
          {
            return_value_sam_hc_send_8=sam_hc_send();
            tmp_if_expr_9 = (signed int)return_value_sam_hc_send_8 == CS_OK ? (_Bool)1 : (_Bool)0;
          }
          _Bool tmp_if_expr_11;
          if(tmp_if_expr_9)
            tmp_if_expr_11 = (_Bool)1;

          else
          {
            return_value_sam_hc_callback_register_10=sam_hc_callback_register((signed int (*)(void))(void *)0);
            tmp_if_expr_11 = (signed int)return_value_sam_hc_callback_register_10 == CS_OK ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_11)
          {
            fprintf(stderr, "Can call one of function after finalization!\n");
            return 1;
          }

          return 0;
        }

        return 1;
      }
  }
}

// test2
// file testsam.c line 188
static signed int test2(void)
{
  enum anonymous_0 error;
  unsigned int instance_id;
  printf("%s: initialize\n", (const void *)"test2");
  error=sam_initialize(2000, (enum anonymous_8)SAM_RECOVERY_POLICY_QUIT);
  if(!((signed int)error == CS_OK))
  {
    fprintf(stderr, "Can't initialize SAM API. Error %d\n", error);
    return 1;
  }

  else
  {
    printf("%s: register\n", (const void *)"test2");
    error=sam_register(&instance_id);
    if(!((signed int)error == CS_OK))
    {
      fprintf(stderr, "Can't register. Error %d\n", error);
      return 1;
    }

    else
    {
      if(instance_id == 1u)
      {
        signal(15, test2_signal);
        printf("%s iid %d: start\n", (const void *)"test2", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: sleep 1\n", (const void *)"test2", instance_id);
        sleep((unsigned int)1);
        printf("%s iid %d: hc send\n", (const void *)"test2", instance_id);
        error=sam_hc_send();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't send hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: wait for delivery of signal\n", (const void *)"test2", instance_id);
        while(test2_sig_delivered == 0)
          sleep((unsigned int)1);
        printf("%s iid %d: wait for real kill\n", (const void *)"test2", instance_id);
        sleep((unsigned int)3);
      }

      return 1;
    }
  }
}

// test2_signal
// file testsam.c line 179
static void test2_signal(signed int sig)
{
  printf("%s\n", (const void *)"test2_signal");
  test2_sig_delivered = 1;
}

// test3
// file testsam.c line 244
static signed int test3(void)
{
  enum anonymous_0 error;
  unsigned int instance_id;
  printf("%s: initialize\n", (const void *)"test3");
  error=sam_initialize(0, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
  if(!((signed int)error == CS_OK))
  {
    fprintf(stderr, "Can't initialize SAM API. Error %d\n", error);
    return 1;
  }

  else
  {
    printf("%s: register\n", (const void *)"test3");
    error=sam_register(&instance_id);
    if(!((signed int)error == CS_OK))
    {
      fprintf(stderr, "Can't register. Error %d\n", error);
      return 1;
    }

    else
    {
      if(!(instance_id >= 100u))
      {
        printf("%s iid %d: start\n", (const void *)"test3", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: Sending signal\n", (const void *)"test3", instance_id);
        signed int return_value_getpid_1;
        return_value_getpid_1=getpid();
        kill(return_value_getpid_1, 11);
        return 1;
      }

      return 0;
    }
  }
}

// test4
// file testsam.c line 281
static signed int test4(void)
{
  unsigned long int size;
  enum anonymous_0 err;
  signed int i;
  unsigned int instance_id;
  char saved_data[128l];
  char saved_data2[128l];
  printf("%s: sam_data_getsize 1\n", (const void *)"test4");
  err=sam_data_getsize(&size);
  if(!((signed int)err == CS_ERR_BAD_HANDLE))
  {
    fprintf(stderr, "Test should return CS_ERR_BAD_HANDLE. Error returned %d\n", err);
    return 1;
  }

  else
  {
    printf("%s: sam_data_getsize 2\n", (const void *)"test4");
    err=sam_data_getsize((unsigned long int *)(void *)0);
    if(!((signed int)err == CS_ERR_INVALID_PARAM))
    {
      fprintf(stderr, "Test should return CS_ERR_INVALID_PARAM. Error returned %d\n", err);
      return 1;
    }

    else
    {
      printf("%s: sam_data_store 1\n", (const void *)"test4");
      err=sam_data_store((void *)0, (unsigned long int)0);
      if(!((signed int)err == CS_ERR_BAD_HANDLE))
      {
        fprintf(stderr, "Test should return CS_ERR_BAD_HANDLE. Error returned %d\n", err);
        return 1;
      }

      else
      {
        printf("%s: sam_data_restore 1\n", (const void *)"test4");
        err=sam_data_restore((void *)saved_data, sizeof(char [128l]) /*128ul*/ );
        if(!((signed int)err == CS_ERR_BAD_HANDLE))
        {
          fprintf(stderr, "Test should return CS_ERR_BAD_HANDLE. Error returned %d\n", err);
          return 1;
        }

        else
        {
          printf("%s: sam_initialize\n", (const void *)"test4");
          err=sam_initialize(0, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
          if(!((signed int)err == CS_OK))
          {
            fprintf(stderr, "Can't initialize SAM API. Error %d\n", err);
            return 1;
          }

          else
          {
            printf("%s: sam_data_getsize 3\n", (const void *)"test4");
            err=sam_data_getsize(&size);
            if(!((signed int)err == CS_OK))
            {
              fprintf(stderr, "Test should return CS_ERR_BAD_HANDLE. Error returned %d\n", err);
              return 1;
            }

            else
              if(!(size == 0ul))
              {
                fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                return 1;
              }

              else
              {
                printf("%s: sam_data_restore 2\n", (const void *)"test4");
                err=sam_data_restore((void *)0, sizeof(char [128l]) /*128ul*/ );
                if(!((signed int)err == CS_ERR_INVALID_PARAM))
                {
                  fprintf(stderr, "Test should return CS_ERR_INVALID_PARAM. Error returned %d\n", err);
                  return 1;
                }

                else
                {
                  i = 0;
                  for( ; !((unsigned long int)i >= sizeof(char [128l]) /*128ul*/ ); i = i + 1)
                    saved_data[(signed long int)i] = (char)(i + 5);
                  printf("%s: sam_data_store 2\n", (const void *)"test4");
                  err=sam_data_store((const void *)saved_data, sizeof(char [128l]) /*128ul*/ );
                  if(!((signed int)err == CS_OK))
                  {
                    fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                    return 1;
                  }

                  else
                  {
                    printf("%s: sam_data_getsize 4\n", (const void *)"test4");
                    err=sam_data_getsize(&size);
                    if(!((signed int)err == CS_OK))
                    {
                      fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                      return 1;
                    }

                    else
                      if(!(size == sizeof(char [128l]) /*128ul*/ ))
                      {
                        fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                        return 1;
                      }

                      else
                      {
                        printf("%s: sam_data_restore 3\n", (const void *)"test4");
                        err=sam_data_restore((void *)saved_data2, sizeof(char [128l]) /*128ul*/  - (unsigned long int)1);
                        if(!((signed int)err == CS_ERR_INVALID_PARAM))
                        {
                          fprintf(stderr, "Test should return CS_ERR_INVALID_PARAM. Error returned %d\n", err);
                          return 1;
                        }

                        else
                        {
                          printf("%s: sam_data_restore 4\n", (const void *)"test4");
                          err=sam_data_restore((void *)saved_data2, sizeof(char [128l]) /*128ul*/ );
                          if(!((signed int)err == CS_OK))
                          {
                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                            return 1;
                          }

                          else
                          {
                            signed int return_value_memcmp_1;
                            return_value_memcmp_1=memcmp((const void *)saved_data, (const void *)saved_data2, sizeof(char [128l]) /*128ul*/ );
                            if(!(return_value_memcmp_1 == 0))
                            {
                              fprintf(stderr, "Retored data are not same\n");
                              return 1;
                            }

                            else
                            {
                              memset((void *)saved_data2, 0, sizeof(char [128l]) /*128ul*/ );
                              printf("%s: sam_data_store 3\n", (const void *)"test4");
                              err=sam_data_store((void *)0, (unsigned long int)1);
                              if(!((signed int)err == CS_OK))
                              {
                                fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                return 1;
                              }

                              else
                              {
                                printf("%s: sam_data_getsize 5\n", (const void *)"test4");
                                err=sam_data_getsize(&size);
                                if(!((signed int)err == CS_OK))
                                {
                                  fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                  return 1;
                                }

                                else
                                  if(!(size == 0ul))
                                  {
                                    fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                                    return 1;
                                  }

                                  else
                                  {
                                    printf("%s: sam_data_store 4\n", (const void *)"test4");
                                    err=sam_data_store((const void *)saved_data, sizeof(char [128l]) /*128ul*/ );
                                    if(!((signed int)err == CS_OK))
                                    {
                                      fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                      return 1;
                                    }

                                    else
                                    {
                                      printf("%s: register\n", (const void *)"test4");
                                      err=sam_register(&instance_id);
                                      if(!((signed int)err == CS_OK))
                                      {
                                        fprintf(stderr, "Can't register. Error %d\n", err);
                                        return 1;
                                      }

                                      else
                                      {
                                        if(instance_id == 1u)
                                        {
                                          printf("%s iid %d: sam_start\n", (const void *)"test4", instance_id);
                                          err=sam_start();
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Can't start hc. Error %d\n", err);
                                            return 1;
                                          }

                                          printf("%s iid %d: sam_data_getsize 6\n", (const void *)"test4", instance_id);
                                          err=sam_data_getsize(&size);
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          if(!(size == sizeof(char [128l]) /*128ul*/ ))
                                          {
                                            fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                                            return 1;
                                          }

                                          printf("%s iid %d: sam_data_restore 5\n", (const void *)"test4", instance_id);
                                          err=sam_data_restore((void *)saved_data2, sizeof(char [128l]) /*128ul*/ );
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          signed int return_value_memcmp_2;
                                          return_value_memcmp_2=memcmp((const void *)saved_data, (const void *)saved_data2, sizeof(char [128l]) /*128ul*/ );
                                          if(!(return_value_memcmp_2 == 0))
                                          {
                                            fprintf(stderr, "Retored data are not same\n");
                                            return 1;
                                          }

                                          i = 0;
                                          for( ; !((unsigned long int)i >= sizeof(char [128l]) /*128ul*/ ); i = i + 1)
                                            saved_data[(signed long int)i] = (char)(i - 5);
                                          printf("%s iid %d: sam_data_store 5\n", (const void *)"test4", instance_id);
                                          err=sam_data_store((const void *)saved_data, sizeof(char [128l]) /*128ul*/  - (unsigned long int)7);
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          exit(1);
                                        }

                                        if(instance_id == 2u)
                                        {
                                          printf("%s iid %d: sam_start\n", (const void *)"test4", instance_id);
                                          err=sam_start();
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Can't start hc. Error %d\n", err);
                                            return 1;
                                          }

                                          printf("%s iid %d: sam_data_getsize 7\n", (const void *)"test4", instance_id);
                                          err=sam_data_getsize(&size);
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          if(!(size == 121ul))
                                          {
                                            fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                                            return 1;
                                          }

                                          printf("%s iid %d: sam_data_restore 6\n", (const void *)"test4", instance_id);
                                          err=sam_data_restore((void *)saved_data2, sizeof(char [128l]) /*128ul*/ );
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          i = 0;
                                          for( ; !((unsigned long int)i >= sizeof(char [128l]) /*128ul*/ ); i = i + 1)
                                            saved_data[(signed long int)i] = (char)(i - 5);
                                          signed int return_value_memcmp_3;
                                          return_value_memcmp_3=memcmp((const void *)saved_data, (const void *)saved_data2, sizeof(char [128l]) /*128ul*/  - (unsigned long int)7);
                                          if(!(return_value_memcmp_3 == 0))
                                          {
                                            fprintf(stderr, "Retored data are not same\n");
                                            return 1;
                                          }

                                          printf("%s iid %d: sam_data_store 6\n", (const void *)"test4", instance_id);
                                          err=sam_data_store((void *)0, (unsigned long int)0);
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          exit(1);
                                        }

                                        if(instance_id == 3u)
                                        {
                                          printf("%s iid %d: sam_data_getsize 8\n", (const void *)"test4", instance_id);
                                          err=sam_data_getsize(&size);
                                          if(!((signed int)err == CS_OK))
                                          {
                                            fprintf(stderr, "Test should return CS_OK. Error returned %d\n", err);
                                            return 1;
                                          }

                                          if(size == 0ul)
                                            goto __CPROVER_DUMP_L41;

                                          fprintf(stderr, "Test should return size of 0. Returned %zx\n", size);
                                          return 1;
                                        }

                                        else
                                        {

                                        __CPROVER_DUMP_L41:
                                          ;
                                          return 0;
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

// test5
// file testsam.c line 544
static signed int test5(void)
{
  enum anonymous_0 error;
  unsigned int instance_id;
  signed int hc_cb_count;
  printf("%s: initialize\n", (const void *)"test5");
  error=sam_initialize(100, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
  if(!((signed int)error == CS_OK))
  {
    fprintf(stderr, "Can't initialize SAM API. Error %d\n", error);
    return 1;
  }

  else
  {
    printf("%s: register\n", (const void *)"test5");
    error=sam_register(&instance_id);
    if(!((signed int)error == CS_OK))
    {
      fprintf(stderr, "Can't register. Error %d\n", error);
      return 1;
    }

    else
      if(instance_id == 1u)
      {
        printf("%s iid %d: hc callback register\n", (const void *)"test5", instance_id);
        error=sam_hc_callback_register(test5_hc_cb);
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't register hc cb. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: start\n", (const void *)"test5", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        sleep((unsigned int)2);
        printf("%s iid %d: Failed. Wasn't killed.\n", (const void *)"test5", instance_id);
        return 1;
      }

      else
        if(instance_id == 2u)
        {
          error=sam_data_restore((void *)&hc_cb_count, sizeof(signed int) /*4ul*/ );
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "sam_data_restore should return CS_OK. Error returned %d\n", error);
            return 1;
          }

          if(!(hc_cb_count == 11))
          {
            fprintf(stderr, "%s iid %d: Premature killed. hc_cb_count should be 11 and it is %d\n", (const void *)"test5", instance_id - (unsigned int)1, hc_cb_count);
            return 1;
          }

          return 0;
        }

        else
          return 1;
  }
}

// test5_hc_cb
// file testsam.c line 527
static signed int test5_hc_cb(void)
{
  enum anonymous_0 res;
  test5_hc_cb_count = test5_hc_cb_count + 1;
  printf("%s %d\n", (const void *)"test5_hc_cb", test5_hc_cb_count);
  res=sam_data_store((const void *)&test5_hc_cb_count, sizeof(signed int) /*4ul*/ );
  if(!((signed int)res == CS_OK))
    return 1;

  else
    if(test5_hc_cb_count >= 11)
      return 1;

    else
      return 0;
}

// test6
// file testsam.c line 618
static signed int test6(void)
{
  enum anonymous_0 error;
  unsigned int instance_id;
  signed int test6_sig_del;
  printf("%s: initialize\n", (const void *)"test6");
  error=sam_initialize(2000, (enum anonymous_8)SAM_RECOVERY_POLICY_RESTART);
  if(!((signed int)error == CS_OK))
  {
    fprintf(stderr, "Can't initialize SAM API. Error %d\n", error);
    return 1;
  }

  else
  {
    printf("%s: register\n", (const void *)"test6");
    error=sam_register(&instance_id);
    if(!((signed int)error == CS_OK))
    {
      fprintf(stderr, "Can't register. Error %d\n", error);
      return 1;
    }

    else
      if(instance_id == 1u)
      {
        error=sam_warn_signal_set(10);
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't set warn signal. Error %d\n", error);
          return 1;
        }

        signal(10, test6_signal);
        printf("%s iid %d: start\n", (const void *)"test6", instance_id);
        error=sam_start();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: sleep 1\n", (const void *)"test6", instance_id);
        sleep((unsigned int)1);
        printf("%s iid %d: hc send\n", (const void *)"test6", instance_id);
        error=sam_hc_send();
        if(!((signed int)error == CS_OK))
        {
          fprintf(stderr, "Can't send hc. Error %d\n", error);
          return 1;
        }

        printf("%s iid %d: wait for delivery of signal\n", (const void *)"test6", instance_id);
        while(test6_sig_delivered == 0)
          sleep((unsigned int)1);
        printf("%s iid %d: wait for real kill\n", (const void *)"test6", instance_id);
        sleep((unsigned int)3);
        printf("%s iid %d: wasn't killed\n", (const void *)"test6", instance_id);
        return 1;
      }

      else
        if(instance_id == 2u)
        {
          error=sam_data_restore((void *)&test6_sig_del, sizeof(signed int) /*4ul*/ );
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't restore data. Error %d\n", error);
            return 1;
          }

          if(!(test6_sig_del == 1))
          {
            fprintf(stderr, "Previous test failed. Signal was not delivered\n");
            return 1;
          }

          error=sam_warn_signal_set(9);
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't set warn signal. Error %d\n", error);
            return 1;
          }

          signal(10, test6_signal);
          printf("%s iid %d: start\n", (const void *)"test6", instance_id);
          error=sam_start();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't start hc. Error %d\n", error);
            return 1;
          }

          printf("%s iid %d: sleep 1\n", (const void *)"test6", instance_id);
          sleep((unsigned int)1);
          printf("%s iid %d: hc send\n", (const void *)"test6", instance_id);
          error=sam_hc_send();
          if(!((signed int)error == CS_OK))
          {
            fprintf(stderr, "Can't send hc. Error %d\n", error);
            return 1;
          }

          printf("%s iid %d: wait for delivery of signal\n", (const void *)"test6", instance_id);
          while(test6_sig_delivered == 0)
            sleep((unsigned int)1);
          printf("%s iid %d: wasn't killed\n", (const void *)"test6", instance_id);
          return 1;
        }

        else
          if(instance_id == 3u)
          {
            error=sam_data_restore((void *)&test6_sig_del, sizeof(signed int) /*4ul*/ );
            if(!((signed int)error == CS_OK))
            {
              fprintf(stderr, "Can't restore data. Error %d\n", error);
              return 1;
            }

            if(!(test6_sig_del == 1))
            {
              fprintf(stderr, "Previous test failed. Signal WAS delivered\n");
              return 1;
            }

            return 0;
          }

          else
            return 1;
  }
}

// test6_signal
// file testsam.c line 604
static void test6_signal(signed int sig)
{
  enum anonymous_0 error;
  printf("%s\n", (const void *)"test6_signal");
  test6_sig_delivered = test6_sig_delivered + 1;
  error=sam_data_store((const void *)&test6_sig_delivered, sizeof(signed int) /*4ul*/ );
  if(!((signed int)error == CS_OK))
    fprintf(stderr, "Can't store data! Error : %d\n", error);

}

// test7
// file testsam.c line 751
static signed int test7(void)
{
  unsigned long int cmap_handle;
  enum anonymous_0 err;
  unsigned int instance_id;
  unsigned long int kill_thread;
  char *str;
  err=cmap_initialize(&cmap_handle);
  if(!((signed int)err == CS_OK))
  {
    printf("Could not initialize Cluster Map API instance error %d. Test skipped\n", err);
    return 1;
  }

  else
  {
    enum anonymous_0 return_value_cmap_get_string_1;
    return_value_cmap_get_string_1=cmap_get_string(cmap_handle, "quorum.provider", &str);
    if(!((signed int)return_value_cmap_get_string_1 == CS_OK))
    {
      printf("Could not get \"provider\" key: %d. Test skipped\n", err);
      return 1;
    }

    else
    {
      signed int tmp_statement_expression_2;
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_3;
      return_value___builtin_strcmp_3=__builtin_strcmp(str, "testquorum");
      tmp_statement_expression_2 = return_value___builtin_strcmp_3;
      if(!(tmp_statement_expression_2 == 0))
      {
        printf("Provider is not testquorum. Test skipped\n");
        free((void *)str);
        return 1;
      }

      else
      {
        free((void *)str);
        err=cmap_set_uint8(cmap_handle, "quorum.quorate", (unsigned char)0);
        if(!((signed int)err == CS_OK))
        {
          printf("Can't set map key. Error %d\n", err);
          return 2;
        }

        else
        {
          printf("%s: initialize\n", (const void *)"test7");
          err=sam_initialize(2000, (enum anonymous_8)SAM_RECOVERY_POLICY_QUORUM_RESTART);
          if(!((signed int)err == CS_OK))
          {
            fprintf(stderr, "Can't initialize SAM API. Error %d\n", err);
            return 2;
          }

          else
          {
            printf("%s: register\n", (const void *)"test7");
            err=sam_register(&instance_id);
            if(!((signed int)err == CS_OK))
            {
              fprintf(stderr, "Can't register. Error %d\n", err);
              return 2;
            }

            else
              if(instance_id == 1u)
              {
                pthread_create(&kill_thread, (const union pthread_attr_t *)(void *)0, test7_thread, (void *)0);
                printf("%s iid %d: start - should block forever (waiting 5s)\n", (const void *)"test7", instance_id);
                err=sam_start();
                if(!((signed int)err == CS_OK))
                {
                  fprintf(stderr, "Can't start hc. Error %d\n", err);
                  return 2;
                }

                printf("%s iid %d: wasn't killed\n", (const void *)"test7", instance_id);
                return 2;
              }

              else
                if(instance_id == 2u)
                {
                  err=cmap_set_uint8(cmap_handle, "quorum.quorate", (unsigned char)1);
                  if(!((signed int)err == CS_OK))
                  {
                    printf("Can't set map key. Error %d\n", err);
                    return 2;
                  }

                  printf("%s iid %d: start\n", (const void *)"test7", instance_id);
                  err=sam_start();
                  if(!((signed int)err == CS_OK))
                  {
                    fprintf(stderr, "Can't start hc. Error %d\n", err);
                    return 2;
                  }

                  err=cmap_set_uint8(cmap_handle, "quorum.quorate", (unsigned char)0);
                  if(!((signed int)err == CS_OK))
                  {
                    printf("Can't set map key. Error %d\n", err);
                    return 2;
                  }

                  printf("%s iid %d: sleep 3\n", (const void *)"test7", instance_id);
                  sleep((unsigned int)3);
                  printf("%s iid %d: wasn't killed\n", (const void *)"test7", instance_id);
                  return 2;
                }

                else
                  if(instance_id == 3u)
                    return 0;

                  else
                    return 2;
          }
        }
      }
    }
  }
}

// test7_thread
// file testsam.c line 741
static void * test7_thread(void *arg)
{
  sleep((unsigned int)5);
  exit(0);
}

// test8
// file testsam.c line 859
static signed int test8(signed int pid, signed int old_pid, signed int test_n)
{
  unsigned long int cmap_handle;
  enum anonymous_0 err;
  unsigned long int tstamp1;
  unsigned long int tstamp2;
  signed int msec_diff;
  unsigned int instance_id;
  char key_name[255l];
  char *str;
  err=cmap_initialize(&cmap_handle);
  if(!((signed int)err == CS_OK))
  {
    printf("Could not initialize Cluster Map API instance error %d. Test skipped\n", err);
    return 1;
  }

  else
  {
    printf("%s test %d\n", (const void *)"test8", test_n);
    if(test_n == 2)
    {
      printf("%s Testing if object exists (it shouldn't)\n", (const void *)"test8");
      snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
      err=cmap_get_string(cmap_handle, key_name, &str);
      if(!((signed int)err == CS_OK))
        goto __CPROVER_DUMP_L2;

      printf("Could find key \"%s\": %d.\n", (const void *)key_name, err);
      free((void *)str);
      return 2;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(test_n == 1 || test_n == 2)
      {
        printf("%s: initialize\n", (const void *)"test8");
        err=sam_initialize(2000, (enum anonymous_8)(SAM_RECOVERY_POLICY_QUIT | SAM_RECOVERY_POLICY_CMAP));
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't initialize SAM API. Error %d\n", err);
          return 2;
        }

        printf("%s: register\n", (const void *)"test8");
        err=sam_register(&instance_id);
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't register. Error %d\n", err);
          return 2;
        }

        snprintf(key_name, (unsigned long int)255, "resources.process.%d.recovery", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"recovery\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_1;
        unsigned long int test8__1__3__4____s1_len;
        unsigned long int test8__1__3__4____s2_len;
        signed int return_value___builtin_strcmp_2;
        return_value___builtin_strcmp_2=__builtin_strcmp(str, "quit");
        tmp_statement_expression_1 = return_value___builtin_strcmp_2;
        if(!(tmp_statement_expression_1 == 0))
        {
          printf("Recovery key \"%s\" is not \"quit\".\n", (const void *)key_name);
          free((void *)str);
          return 2;
        }

        free((void *)str);
        snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_3;
        unsigned long int test8__1__3__7____s1_len;
        unsigned long int test8__1__3__7____s2_len;
        signed int return_value___builtin_strcmp_4;
        return_value___builtin_strcmp_4=__builtin_strcmp(str, "stopped");
        tmp_statement_expression_3 = return_value___builtin_strcmp_4;
        if(!(tmp_statement_expression_3 == 0))
        {
          printf("State key is not \"stopped\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: start\n", (const void *)"test8", instance_id);
        err=sam_start();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", err);
          return 2;
        }

        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_5;
        unsigned long int test8__1__3__11____s1_len;
        unsigned long int test8__1__3__11____s2_len;
        signed int return_value___builtin_strcmp_6;
        return_value___builtin_strcmp_6=__builtin_strcmp(str, "running");
        tmp_statement_expression_5 = return_value___builtin_strcmp_6;
        if(!(tmp_statement_expression_5 == 0))
        {
          printf("State key is not \"running\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: stop\n", (const void *)"test8", instance_id);
        err=sam_stop();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't stop hc. Error %d\n", err);
          return 2;
        }

        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_7;
        unsigned long int test8__1__3__15____s1_len;
        unsigned long int test8__1__3__15____s2_len;
        signed int return_value___builtin_strcmp_8;
        return_value___builtin_strcmp_8=__builtin_strcmp(str, "stopped");
        tmp_statement_expression_7 = return_value___builtin_strcmp_8;
        if(!(tmp_statement_expression_7 == 0))
        {
          printf("State key is not \"stopped\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: sleeping 5\n", (const void *)"test8", instance_id);
        sleep((unsigned int)5);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_9;
        unsigned long int test8__1__3__18____s1_len;
        unsigned long int test8__1__3__18____s2_len;
        signed int return_value___builtin_strcmp_10;
        return_value___builtin_strcmp_10=__builtin_strcmp(str, "stopped");
        tmp_statement_expression_9 = return_value___builtin_strcmp_10;
        if(!(tmp_statement_expression_9 == 0))
        {
          printf("State key is not \"stopped\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: start 2\n", (const void *)"test8", instance_id);
        err=sam_start();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", err);
          return 2;
        }

        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_11;
        unsigned long int test8__1__3__22____s1_len;
        unsigned long int test8__1__3__22____s2_len;
        signed int return_value___builtin_strcmp_12;
        return_value___builtin_strcmp_12=__builtin_strcmp(str, "running");
        tmp_statement_expression_11 = return_value___builtin_strcmp_12;
        if(!(tmp_statement_expression_11 == 0))
        {
          printf("State key is not \"running\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        if(test_n == 2)
        {
          printf("%s iid %d: sleeping 5. Should be killed\n", (const void *)"test8", instance_id);
          sleep((unsigned int)5);
          return 2;
        }

        printf("%s iid %d: Test HC\n", (const void *)"test8", instance_id);
        err=sam_hc_send();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't send hc. Error %d\n", err);
          return 2;
        }

        snprintf(key_name, (unsigned long int)255, "resources.process.%d.last_updated", pid);
        err=cmap_get_uint64(cmap_handle, key_name, &tstamp1);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"last_updated\" key: %d.\n", err);
          return 2;
        }

        printf("%s iid %d: Sleep 1\n", (const void *)"test8", instance_id);
        sleep((unsigned int)1);
        err=sam_hc_send();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't send hc. Error %d\n", err);
          return 2;
        }

        sleep((unsigned int)1);
        err=cmap_get_uint64(cmap_handle, key_name, &tstamp2);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"last_updated\" key: %d.\n", err);
          return 2;
        }

        msec_diff = (signed int)((tstamp2 - tstamp1) / 1000000ULL);
        if(msec_diff >= 2001 || !(msec_diff >= 500))
        {
          printf("Difference %d is not within <500, 2000> interval.\n", msec_diff);
          return 2;
        }

        printf("%s iid %d: stop 2\n", (const void *)"test8", instance_id);
        err=sam_stop();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't stop hc. Error %d\n", err);
          return 2;
        }

        snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_13;
        unsigned long int test8__1__3__25__8____s1_len;
        unsigned long int test8__1__3__25__8____s2_len;
        signed int return_value___builtin_strcmp_14;
        return_value___builtin_strcmp_14=__builtin_strcmp(str, "stopped");
        tmp_statement_expression_13 = return_value___builtin_strcmp_14;
        if(!(tmp_statement_expression_13 == 0))
        {
          printf("State key is not \"stopped\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: exiting\n", (const void *)"test8", instance_id);
        return 0;
      }

      else
        if(test_n == 3)
        {
          printf("%s Testing if status is failed\n", (const void *)"test8");
          snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
          err=cmap_get_string(cmap_handle, key_name, &str);
          if(!((signed int)err == CS_OK))
          {
            printf("Could not get \"state\" key: %d.\n", err);
            return 2;
          }

          signed int tmp_statement_expression_15;
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp_16;
          return_value___builtin_strcmp_16=__builtin_strcmp(str, "failed");
          tmp_statement_expression_15 = return_value___builtin_strcmp_16;
          if(!(tmp_statement_expression_15 == 0))
          {
            printf("State key is not \"failed\".\n");
            free((void *)str);
            return 2;
          }

          free((void *)str);
          return 0;
        }

        else
          return 2;
    }
  }
}

// test9
// file testsam.c line 1105
static signed int test9(signed int pid, signed int old_pid, signed int test_n)
{
  enum anonymous_0 err;
  unsigned long int cmap_handle;
  unsigned int instance_id;
  char *str;
  char key_name[255l];
  err=cmap_initialize(&cmap_handle);
  if(!((signed int)err == CS_OK))
  {
    printf("Could not initialize Cluster Map API instance error %d. Test skipped\n", err);
    return 1;
  }

  else
  {
    printf("%s test %d\n", (const void *)"test9", test_n);
    if(test_n == 1)
    {
      printf("%s: initialize\n", (const void *)"test9");
      err=sam_initialize(2000, (enum anonymous_8)(SAM_RECOVERY_POLICY_RESTART | SAM_RECOVERY_POLICY_CMAP));
      if(!((signed int)err == CS_OK))
      {
        fprintf(stderr, "Can't initialize SAM API. Error %d\n", err);
        return 2;
      }

      printf("%s: register\n", (const void *)"test9");
      err=sam_register(&instance_id);
      if(!((signed int)err == CS_OK))
      {
        fprintf(stderr, "Can't register. Error %d\n", err);
        return 2;
      }

      printf("%s: iid %d\n", (const void *)"test9", instance_id);
      if(!(instance_id >= 3u))
      {
        snprintf(key_name, (unsigned long int)255, "resources.process.%d.recovery", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"recovery\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_1;
        unsigned long int test9__1__2__3__2____s1_len;
        unsigned long int test9__1__2__3__2____s2_len;
        signed int return_value___builtin_strcmp_2;
        return_value___builtin_strcmp_2=__builtin_strcmp(str, "restart");
        tmp_statement_expression_1 = return_value___builtin_strcmp_2;
        if(!(tmp_statement_expression_1 == 0))
        {
          printf("Recovery key \"%s\" is not \"restart\".\n", str);
          free((void *)str);
          return 2;
        }

        free((void *)str);
        snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_3;
        unsigned long int test9__1__2__3__5____s1_len;
        unsigned long int test9__1__2__3__5____s2_len;
        signed int return_value___builtin_strcmp_4;
        return_value___builtin_strcmp_4=__builtin_strcmp(str, "stopped");
        tmp_statement_expression_3 = return_value___builtin_strcmp_4;
        if(!(tmp_statement_expression_3 == 0))
        {
          printf("State key is not \"stopped\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: start\n", (const void *)"test9", instance_id);
        err=sam_start();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", err);
          return 2;
        }

        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_5;
        unsigned long int test9__1__2__3__9____s1_len;
        unsigned long int test9__1__2__3__9____s2_len;
        signed int return_value___builtin_strcmp_6;
        return_value___builtin_strcmp_6=__builtin_strcmp(str, "running");
        tmp_statement_expression_5 = return_value___builtin_strcmp_6;
        if(!(tmp_statement_expression_5 == 0))
        {
          printf("State key is not \"running\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        printf("%s iid %d: waiting for kill\n", (const void *)"test9", instance_id);
        sleep((unsigned int)10);
        return 2;
      }

      if(instance_id == 3u)
      {
        printf("%s iid %d: mark failed\n", (const void *)"test9", instance_id);
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't start hc. Error %d\n", err);
          return 2;
        }

        err=sam_mark_failed();
        if(!((signed int)err == CS_OK))
        {
          fprintf(stderr, "Can't mark failed. Error %d\n", err);
          return 2;
        }

        sleep((unsigned int)10);
        return 2;
      }

      return 2;
    }

    else
      if(test_n == 2)
      {
        printf("%s Testing if status is failed\n", (const void *)"test9");
        snprintf(key_name, (unsigned long int)255, "resources.process.%d.state", pid);
        err=cmap_get_string(cmap_handle, key_name, &str);
        if(!((signed int)err == CS_OK))
        {
          printf("Could not get \"state\" key: %d.\n", err);
          return 2;
        }

        signed int tmp_statement_expression_7;
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_8;
        return_value___builtin_strcmp_8=__builtin_strcmp(str, "failed");
        tmp_statement_expression_7 = return_value___builtin_strcmp_8;
        if(!(tmp_statement_expression_7 == 0))
        {
          printf("State key is not \"failed\".\n");
          free((void *)str);
          return 2;
        }

        free((void *)str);
        return 0;
      }

      else
        return 2;
  }
}

