// #anon_enum_STATUS_NO_SUCH_DEVICE=249_STATUS_SUCCESS=250_STATUS_UNSUCCESSFUL=251_STATUS_COMM_ERROR=252_STATUS_DEVICE_PROTOCOL_ERROR=253_STATUS_COMM_NAK=254_STATUS_SECONDARY_SLOT=255
// file defs.h line 48
enum anonymous_2 { STATUS_NO_SUCH_DEVICE=249, STATUS_SUCCESS=250, STATUS_UNSUCCESSFUL=251, STATUS_COMM_ERROR=252, STATUS_DEVICE_PROTOCOL_ERROR=253, STATUS_COMM_NAK=254, STATUS_SECONDARY_SLOT=255 };

// tag-#anon#ST[*{SYM#tag-libusb_device_handle#}_SYM#tag-libusb_device_handle#_'dev_handle'||U8'bus_number'||U8'device_address'||U16'_pad0'||S32'interface'||S32'bulk_in'||S32'bulk_out'||S32'interrupt'||S32'real_nb_opened_slots'||*{S32}_S32_'nb_opened_slots'||SYM#tag-#anon#ST[*{U8}_U8_'pbSeq'||U8'real_bSeq'||U24'_pad0'||S32'readerID'||U32'dwMaxCCIDMessageLength'||S32'dwMaxIFSD'||S32'dwFeatures'||S8'bPINSupport'||U24'_pad1'||U32'wLcdLayout'||S32'dwDefaultClock'||U32'dwMaxDataRate'||S8'bMaxSlotIndex'||S8'bCurrentSlotIndex'||U16'_pad2'||*{U32}_U32_'arrayOfSupportedDataRates'||U32'readTimeout'||S32'cardProtocol'||S32'bInterfaceProtocol'||S32'bNumEndpoints'||S32'dwSlotStatus'||S32'bVoltageSupport'||*{S8}_S8_'sIFD_serial_number'||*{S8}_S8_'sIFD_iManufacturer'||S32'IFD_bcdDevice'||U32'_pad3'||*{SYM#tag-GEMALTO_FIRMWARE_FEATURES#}_SYM#tag-GEMALTO_FIRMWARE_FEATURES#_'gemalto_firmware_features'|]#'ccid'||*{SYM#tag-libusb_transfer#}_SYM#tag-libusb_transfer#_'polling_transfer'||*{SYM#tag-usbDevice_MultiSlot_Extension#}_SYM#tag-usbDevice_MultiSlot_Extension#_'multislot_extension'|]
// file ccid_usb.c line 78
struct anonymous_6;

// tag-#anon#ST[*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#_'head_sentinel'||*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#_'tail_sentinel'||*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#_'mid'||U32'numels'||U32'_pad0'||*{*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#_}_*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#__'spareels'||U32'spareelsnum'||S32'iter_active'||U32'iter_pos'||U32'_pad1'||*{SYM#tag-list_entry_s#}_SYM#tag-list_entry_s#_'iter_curentry'||SYM#tag-list_attributes_s#'attrs'|]
// file simclist.h line 181
struct anonymous_1;

// tag-#anon#ST[*{U8}_U8_'pbSeq'||U8'real_bSeq'||U24'_pad0'||S32'readerID'||U32'dwMaxCCIDMessageLength'||S32'dwMaxIFSD'||S32'dwFeatures'||S8'bPINSupport'||U24'_pad1'||U32'wLcdLayout'||S32'dwDefaultClock'||U32'dwMaxDataRate'||S8'bMaxSlotIndex'||S8'bCurrentSlotIndex'||U16'_pad2'||*{U32}_U32_'arrayOfSupportedDataRates'||U32'readTimeout'||S32'cardProtocol'||S32'bInterfaceProtocol'||S32'bNumEndpoints'||S32'dwSlotStatus'||S32'bVoltageSupport'||*{S8}_S8_'sIFD_serial_number'||*{S8}_S8_'sIFD_iManufacturer'||S32'IFD_bcdDevice'||U32'_pad3'||*{SYM#tag-GEMALTO_FIRMWARE_FEATURES#}_SYM#tag-GEMALTO_FIRMWARE_FEATURES#_'gemalto_firmware_features'|]
// file ccid.h line 20
struct anonymous_3;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_0;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_4;

// tag-GEMALTO_FIRMWARE_FEATURES
// file ccid.h line 139
struct GEMALTO_FIRMWARE_FEATURES;

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

// tag-_bogus_firmware
// file ccid_usb.c line 132
struct _bogus_firmware;

// tag-bundleElt
// file parser.h line 43
struct bundleElt;

// tag-libusb_config_descriptor
// file /usr/include/libusb-1.0/libusb.h line 643
struct libusb_config_descriptor;

// tag-libusb_context
// file /usr/include/libusb-1.0/libusb.h line 898
struct libusb_context;

// tag-libusb_device
// file /usr/include/libusb-1.0/libusb.h line 899
struct libusb_device;

// tag-libusb_device_descriptor
// file /usr/include/libusb-1.0/libusb.h line 477
struct libusb_device_descriptor;

// tag-libusb_device_handle
// file /usr/include/libusb-1.0/libusb.h line 900
struct libusb_device_handle;

// tag-libusb_endpoint_descriptor
// file /usr/include/libusb-1.0/libusb.h line 531
struct libusb_endpoint_descriptor;

// tag-libusb_interface
// file /usr/include/libusb-1.0/libusb.h line 629
struct libusb_interface;

// tag-libusb_interface_descriptor
// file /usr/include/libusb-1.0/libusb.h line 581
struct libusb_interface_descriptor;

// tag-libusb_iso_packet_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1177
struct libusb_iso_packet_descriptor;

// tag-libusb_transfer
// file /usr/include/libusb-1.0/libusb.h line 1188
struct libusb_transfer;

// tag-libusb_transfer_status
// file /usr/include/libusb-1.0/libusb.h line 1106
enum libusb_transfer_status { LIBUSB_TRANSFER_COMPLETED=0, LIBUSB_TRANSFER_ERROR=1, LIBUSB_TRANSFER_TIMED_OUT=2, LIBUSB_TRANSFER_CANCELLED=3, LIBUSB_TRANSFER_STALL=4, LIBUSB_TRANSFER_NO_DEVICE=5, LIBUSB_TRANSFER_OVERFLOW=6 };

// tag-list_attributes_s
// file simclist.h line 164
struct list_attributes_s;

// tag-list_entry_s
// file simclist.h line 155
struct list_entry_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-usbDevice_MultiSlot_Extension
// file ccid_usb.c line 64
struct usbDevice_MultiSlot_Extension;

// tag-yy_buffer_state
// file tokenparser.c line 161
struct yy_buffer_state;

#ifndef NULL
#define NULL ((void*)0)
#endif

// CloseUSB
// file ccid_usb.c line 848
enum anonymous_2 CloseUSB(unsigned int reader_index);
// ControlUSB
// file ccid_usb.c line 1167
signed int ControlUSB(signed int reader_index, signed int requesttype, signed int request, signed int value, unsigned char *bytes, unsigned int size);
// InterruptRead
// file ccid_usb.c line 1213
signed int InterruptRead(signed int reader_index, signed int timeout);
// InterruptStop
// file ccid_usb.c line 1297
void InterruptStop(signed int reader_index);
// LTPBundleFindValueWithKey
// file parser.h line 49
signed int LTPBundleFindValueWithKey(struct anonymous_1 *l, const char *key, struct anonymous_1 **values);
// Multi_CreateFirstSlot
// file ccid_usb.c line 1648
static struct usbDevice_MultiSlot_Extension * Multi_CreateFirstSlot(signed int reader_index);
// Multi_CreateNextSlot
// file ccid_usb.c line 1680
static struct usbDevice_MultiSlot_Extension * Multi_CreateNextSlot(signed int physical_reader_index);
// Multi_InterruptRead
// file ccid_usb.c line 1539
static signed int Multi_InterruptRead(signed int reader_index, signed int timeout);
// Multi_InterruptStop
// file ccid_usb.c line 1617
static void Multi_InterruptStop(signed int reader_index);
// Multi_PollingProc
// file ccid_usb.c line 1326
static void * Multi_PollingProc(void *p_ext);
// Multi_PollingTerminate
// file ccid_usb.c line 1512
static void Multi_PollingTerminate(struct usbDevice_MultiSlot_Extension *msExt);
// OpenUSB
// file ccid_usb.c line 197
enum anonymous_2 OpenUSB(unsigned int reader_index, signed int Channel);
// OpenUSBByName
// file ccid_usb.c line 210
enum anonymous_2 OpenUSBByName(unsigned int reader_index, char *device);
// ReadUSB
// file ccid_usb.c line 791
enum anonymous_2 ReadUSB(unsigned int reader_index, unsigned int *length, unsigned char *buffer);
// WriteUSB
// file ccid_usb.c line 754
enum anonymous_2 WriteUSB(unsigned int reader_index, unsigned int length, unsigned char *buffer);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// bulk_transfer_cb
// file ccid_usb.c line 1201
static void bulk_transfer_cb(struct libusb_transfer *transfer);
// bundleParse
// file parser.h line 50
signed int bundleParse(const char *fileName, struct anonymous_1 *l);
// bundleRelease
// file parser.h line 51
void bundleRelease(struct anonymous_1 *l);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// ccid_check_firmware
// file ccid_usb.c line 1059
signed int ccid_check_firmware(struct libusb_device_descriptor *desc);
// ccid_parse_interface_descriptor
// file parse.c line 245
static signed int ccid_parse_interface_descriptor(struct libusb_device_handle *handle, struct libusb_device_descriptor desc, struct libusb_config_descriptor *config_desc, signed int num, struct libusb_interface *usb_interface);
// clearerr
// file /usr/include/stdio.h line 826
extern void clearerr(struct _IO_FILE *);
// close_libusb_if_needed
// file ccid_usb.c line 173
static void close_libusb_if_needed(void);
// eval_key
// file tokenparser.l line 78
static void eval_key(char *pcToken, struct anonymous_1 *list_key);
// eval_value
// file tokenparser.l line 111
static void eval_value(char *pcToken, struct anonymous_1 *list_values);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_ccid_descriptor
// file ccid_usb.c line 925
struct anonymous_3 * get_ccid_descriptor(unsigned int reader_index);
// get_ccid_device_descriptor
// file ccid_usb.h line 38
const unsigned char * get_ccid_device_descriptor(struct libusb_interface *usb_interface);
// get_ccid_usb_interface
// file ccid_usb.h line 35
struct libusb_interface * get_ccid_usb_interface(struct libusb_config_descriptor *desc, signed int *num);
// get_data_rates
// file ccid_usb.c line 1099
static unsigned int * get_data_rates(unsigned int reader_index, struct libusb_config_descriptor *desc, signed int num);
// get_end_points
// file ccid_usb.c line 978
static signed int get_end_points(struct libusb_config_descriptor *desc, struct anonymous_6 *usbdevice, signed int num);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// libusb_alloc_transfer
// file /usr/include/libusb-1.0/libusb.h line 1477
struct libusb_transfer * libusb_alloc_transfer(signed int);
// libusb_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1744
signed int libusb_bulk_transfer(struct libusb_device_handle *, unsigned char, unsigned char *, signed int, signed int *, unsigned int);
// libusb_cancel_transfer
// file /usr/include/libusb-1.0/libusb.h line 1479
signed int libusb_cancel_transfer(struct libusb_transfer *);
// libusb_claim_interface
// file /usr/include/libusb-1.0/libusb.h line 1376
signed int libusb_claim_interface(struct libusb_device_handle *, signed int);
// libusb_close
// file /usr/include/libusb-1.0/libusb.h line 1371
void libusb_close(struct libusb_device_handle *);
// libusb_control_transfer
// file /usr/include/libusb-1.0/libusb.h line 1740
signed int libusb_control_transfer(struct libusb_device_handle *, unsigned char, unsigned char, unsigned short int, unsigned short int, unsigned char *, unsigned short int, unsigned int);
// libusb_error_name
// file /usr/include/libusb-1.0/libusb.h line 1308
const char * libusb_error_name(signed int);
// libusb_exit
// file /usr/include/libusb-1.0/libusb.h line 1304
void libusb_exit(struct libusb_context *);
// libusb_fill_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout);
// libusb_fill_bulk_transfer::callback_object
//
void callback_object(struct libusb_transfer *);
// libusb_free_device_list
// file /usr/include/libusb-1.0/libusb.h line 1314
void libusb_free_device_list(struct libusb_device **, signed int);
// libusb_free_transfer
// file /usr/include/libusb-1.0/libusb.h line 1480
void libusb_free_transfer(struct libusb_transfer *);
// libusb_get_active_config_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1323
signed int libusb_get_active_config_descriptor(struct libusb_device *, struct libusb_config_descriptor **);
// libusb_get_bus_number
// file /usr/include/libusb-1.0/libusb.h line 1357
unsigned char libusb_get_bus_number(struct libusb_device *);
// libusb_get_device_address
// file /usr/include/libusb-1.0/libusb.h line 1363
unsigned char libusb_get_device_address(struct libusb_device *);
// libusb_get_device_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1321
signed int libusb_get_device_descriptor(struct libusb_device *, struct libusb_device_descriptor *);
// libusb_get_device_list
// file /usr/include/libusb-1.0/libusb.h line 1312
signed long int libusb_get_device_list(struct libusb_context *, struct libusb_device ***);
// libusb_get_string_descriptor_ascii
// file /usr/include/libusb-1.0/libusb.h line 1794
signed int libusb_get_string_descriptor_ascii(struct libusb_device_handle *, unsigned char, unsigned char *, signed int);
// libusb_handle_events
// file /usr/include/libusb-1.0/libusb.h line 1812
signed int libusb_handle_events(struct libusb_context *);
// libusb_init
// file /usr/include/libusb-1.0/libusb.h line 1303
signed int libusb_init(struct libusb_context **);
// libusb_open
// file /usr/include/libusb-1.0/libusb.h line 1370
signed int libusb_open(struct libusb_device *, struct libusb_device_handle **);
// libusb_release_interface
// file /usr/include/libusb-1.0/libusb.h line 1378
signed int libusb_release_interface(struct libusb_device_handle *, signed int);
// libusb_reset_device
// file /usr/include/libusb-1.0/libusb.h line 1388
signed int libusb_reset_device(struct libusb_device_handle *);
// libusb_submit_transfer
// file /usr/include/libusb-1.0/libusb.h line 1478
signed int libusb_submit_transfer(struct libusb_transfer *);
// list_append
// file simclist.h line 358
signed int list_append(struct anonymous_1 * restrict l, const void *data);
// list_attributes_comparator
// file simclist.c line 332
signed int list_attributes_comparator(struct anonymous_1 * restrict l, signed int (*comparator_fun)(const void *, const void *));
// list_attributes_comparator::comparator_fun_object
//
signed int comparator_fun_object(const void *, const void *);
// list_attributes_copy
// file simclist.c line 351
signed int list_attributes_copy(struct anonymous_1 * restrict l, unsigned long int (*metric_fun)(const void *), signed int copy_data);
// list_attributes_copy::metric_fun_object
//
unsigned long int metric_fun_object(const void *);
// list_attributes_hash_computer
// file simclist.c line 362
signed int list_attributes_hash_computer(struct anonymous_1 * restrict l, signed int (*hash_computer_fun)(const void *));
// list_attributes_hash_computer::hash_computer_fun_object
//
signed int hash_computer_fun_object(const void *);
// list_attributes_seeker
// file simclist.c line 342
signed int list_attributes_seeker(struct anonymous_1 * restrict l, signed int (*seeker_fun)(const void *, const void *));
// list_attributes_seeker::seeker_fun_object
//
signed int seeker_fun_object(const void *, const void *);
// list_attributes_serializer
// file simclist.c line 370
signed int list_attributes_serializer(struct anonymous_1 * restrict l, void * (*serializer_fun)(const void *, unsigned int *));
// list_attributes_serializer::serializer_fun_object
//
void * serializer_fun_object(const void *, unsigned int *);
// list_attributes_setdefaults
// file simclist.c line 312
static signed int list_attributes_setdefaults(struct anonymous_1 * restrict l);
// list_attributes_unserializer
// file simclist.c line 378
signed int list_attributes_unserializer(struct anonymous_1 * restrict l, void * (*unserializer_fun)(const void *, unsigned int *));
// list_attributes_unserializer::unserializer_fun_object
//
void * unserializer_fun_object(const void *, unsigned int *);
// list_clear
// file simclist.c line 623
signed int list_clear(struct anonymous_1 * restrict l);
// list_comparator_double
// file simclist.c line 1430
signed int list_comparator_double(const void *a, const void *b);
// list_comparator_float
// file simclist.c line 1429
signed int list_comparator_float(const void *a, const void *b);
// list_comparator_int16_t
// file simclist.c line 1420
signed int list_comparator_int16_t(const void *a, const void *b);
// list_comparator_int32_t
// file simclist.c line 1421
signed int list_comparator_int32_t(const void *a, const void *b);
// list_comparator_int64_t
// file simclist.c line 1422
signed int list_comparator_int64_t(const void *a, const void *b);
// list_comparator_int8_t
// file simclist.c line 1419
signed int list_comparator_int8_t(const void *a, const void *b);
// list_comparator_string
// file simclist.c line 1432
signed int list_comparator_string(const void *a, const void *b);
// list_comparator_uint16_t
// file simclist.c line 1425
signed int list_comparator_uint16_t(const void *a, const void *b);
// list_comparator_uint32_t
// file simclist.c line 1426
signed int list_comparator_uint32_t(const void *a, const void *b);
// list_comparator_uint64_t
// file simclist.c line 1427
signed int list_comparator_uint64_t(const void *a, const void *b);
// list_comparator_uint8_t
// file simclist.c line 1424
signed int list_comparator_uint8_t(const void *a, const void *b);
// list_concat
// file simclist.c line 713
signed int list_concat(const struct anonymous_1 *l1, const struct anonymous_1 *l2, struct anonymous_1 * restrict dest);
// list_contains
// file simclist.c line 709
signed int list_contains(const struct anonymous_1 * restrict l, const void *data);
// list_delete
// file simclist.c line 526
signed int list_delete(struct anonymous_1 * restrict l, const void *data);
// list_delete_at
// file simclist.c line 542
signed int list_delete_at(struct anonymous_1 * restrict l, unsigned int pos);
// list_delete_range
// file simclist.c line 560
signed int list_delete_range(struct anonymous_1 * restrict l, unsigned int posstart, unsigned int posend);
// list_destroy
// file simclist.h line 223
void list_destroy(struct anonymous_1 * restrict l);
// list_drop_elem
// file simclist.c line 1388
static signed int list_drop_elem(struct anonymous_1 * restrict l, struct list_entry_s *tmp, unsigned int pos);
// list_empty
// file simclist.c line 673
signed int list_empty(const struct anonymous_1 * restrict l);
// list_extract_at
// file simclist.c line 459
void * list_extract_at(struct anonymous_1 * restrict l, unsigned int pos);
// list_fetch
// file simclist.c line 394
void * list_fetch(struct anonymous_1 * restrict l);
// list_findpos
// file simclist.c line 433
static inline struct list_entry_s * list_findpos(const struct anonymous_1 * restrict l, signed int posstart);
// list_get_at
// file simclist.h line 389
void * list_get_at(const struct anonymous_1 * restrict l, unsigned int pos);
// list_get_max
// file simclist.c line 406
void * list_get_max(const struct anonymous_1 * restrict l);
// list_get_min
// file simclist.c line 410
void * list_get_min(const struct anonymous_1 * restrict l);
// list_get_minmax
// file simclist.c line 416
static void * list_get_minmax(const struct anonymous_1 * restrict l, signed int versus);
// list_hash
// file simclist.c line 970
signed int list_hash(const struct anonymous_1 * restrict l, signed int * restrict hash);
// list_hashcomputer_double
// file simclist.c line 1466
signed int list_hashcomputer_double(const void *el);
// list_hashcomputer_float
// file simclist.c line 1465
signed int list_hashcomputer_float(const void *el);
// list_hashcomputer_int16_t
// file simclist.c line 1456
signed int list_hashcomputer_int16_t(const void *el);
// list_hashcomputer_int32_t
// file simclist.c line 1457
signed int list_hashcomputer_int32_t(const void *el);
// list_hashcomputer_int64_t
// file simclist.c line 1458
signed int list_hashcomputer_int64_t(const void *el);
// list_hashcomputer_int8_t
// file simclist.c line 1455
signed int list_hashcomputer_int8_t(const void *el);
// list_hashcomputer_string
// file simclist.c line 1468
signed int list_hashcomputer_string(const void *el);
// list_hashcomputer_uint16_t
// file simclist.c line 1461
signed int list_hashcomputer_uint16_t(const void *el);
// list_hashcomputer_uint32_t
// file simclist.c line 1462
signed int list_hashcomputer_uint32_t(const void *el);
// list_hashcomputer_uint64_t
// file simclist.c line 1463
signed int list_hashcomputer_uint64_t(const void *el);
// list_hashcomputer_uint8_t
// file simclist.c line 1460
signed int list_hashcomputer_uint8_t(const void *el);
// list_init
// file simclist.h line 212
signed int list_init(struct anonymous_1 * restrict l);
// list_insert_at
// file simclist.c line 477
signed int list_insert_at(struct anonymous_1 * restrict l, const void *data, unsigned int pos);
// list_iterator_hasnext
// file simclist.c line 958
signed int list_iterator_hasnext(const struct anonymous_1 * restrict l);
// list_iterator_next
// file simclist.c line 946
void * list_iterator_next(struct anonymous_1 * restrict l);
// list_iterator_start
// file simclist.c line 938
signed int list_iterator_start(struct anonymous_1 * restrict l);
// list_iterator_stop
// file simclist.c line 963
signed int list_iterator_stop(struct anonymous_1 * restrict l);
// list_locate
// file simclist.c line 677
signed int list_locate(const struct anonymous_1 * restrict l, const void *data);
// list_meter_double
// file simclist.c line 1448
unsigned long int list_meter_double(const void *el);
// list_meter_float
// file simclist.c line 1447
unsigned long int list_meter_float(const void *el);
// list_meter_int16_t
// file simclist.c line 1438
unsigned long int list_meter_int16_t(const void *el);
// list_meter_int32_t
// file simclist.c line 1439
unsigned long int list_meter_int32_t(const void *el);
// list_meter_int64_t
// file simclist.c line 1440
unsigned long int list_meter_int64_t(const void *el);
// list_meter_int8_t
// file simclist.c line 1437
unsigned long int list_meter_int8_t(const void *el);
// list_meter_string
// file simclist.c line 1450
unsigned long int list_meter_string(const void *el);
// list_meter_uint16_t
// file simclist.c line 1443
unsigned long int list_meter_uint16_t(const void *el);
// list_meter_uint32_t
// file simclist.c line 1444
unsigned long int list_meter_uint32_t(const void *el);
// list_meter_uint64_t
// file simclist.c line 1445
unsigned long int list_meter_uint64_t(const void *el);
// list_meter_uint8_t
// file simclist.c line 1442
unsigned long int list_meter_uint8_t(const void *el);
// list_prepend
// file simclist.c line 390
signed int list_prepend(struct anonymous_1 * restrict l, const void *data);
// list_seek
// file simclist.c line 697
void * list_seek(struct anonymous_1 * restrict l, const void *indicator);
// list_size
// file simclist.h line 493
unsigned int list_size(const struct anonymous_1 * restrict l);
// list_sort
// file simclist.c line 766
signed int list_sort(struct anonymous_1 * restrict l, signed int versus);
// list_sort_quicksort
// file simclist.c line 815
static void list_sort_quicksort(struct anonymous_1 * restrict l, signed int versus, unsigned int first, struct list_entry_s *fel, unsigned int last, struct list_entry_s *lel);
// list_sort_selectionsort
// file simclist.c line 794
static inline void list_sort_selectionsort(struct anonymous_1 * restrict l, signed int versus, unsigned int first, struct list_entry_s *fel, unsigned int last, struct list_entry_s *lel);
// log_msg
// file debug.c line 44
void log_msg(const signed int priority, const char *fmt, ...);
// log_xxd
// file debug.c line 158
void log_xxd(const signed int priority, const char *msg, const unsigned char *buffer, const signed int len);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_5 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_5 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_5 *, const union anonymous *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_5 *, union anonymous_4 *, struct timespec *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_4 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_4 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_4 *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlcpy
// file strlcpycat.h line 39
unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// tperrorCheck
// file tokenparser.l line 155
void tperrorCheck(char *token_error);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// yy_create_buffer
// file tokenparser.c line 1323
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size);
// yy_delete_buffer
// file tokenparser.c line 1351
void yy_delete_buffer(struct yy_buffer_state *b);
// yy_fatal_error
// file tokenparser.c line 1609
static void yy_fatal_error(const char *msg);
// yy_flush_buffer
// file tokenparser.c line 1398
void yy_flush_buffer(struct yy_buffer_state *b);
// yy_get_next_buffer
// file tokenparser.c line 993
static signed int yy_get_next_buffer(void);
// yy_get_previous_state
// file tokenparser.c line 1127
static signed int yy_get_previous_state(void);
// yy_init_buffer
// file tokenparser.c line 1370
static void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file);
// yy_init_globals
// file tokenparser.c line 1712
static signed int yy_init_globals(void);
// yy_load_buffer_state
// file tokenparser.c line 1309
static void yy_load_buffer_state(void);
// yy_scan_buffer
// file tokenparser.c line 1525
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned long int size);
// yy_scan_bytes
// file tokenparser.c line 1575
struct yy_buffer_state * yy_scan_bytes(const char *yybytes, unsigned long int _yybytes_len);
// yy_scan_string
// file tokenparser.c line 1562
struct yy_buffer_state * yy_scan_string(const char *yystr);
// yy_switch_to_buffer
// file tokenparser.c line 1278
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer);
// yy_try_NUL_trans
// file tokenparser.c line 1159
static signed int yy_try_NUL_trans(signed int yy_current_state);
// yyalloc
// file tokenparser.c line 1786
void * yyalloc(unsigned long int size);
// yyensure_buffer_stack
// file tokenparser.c line 1476
static void yyensure_buffer_stack(void);
// yyfree
// file tokenparser.c line 1803
void yyfree(void *ptr);
// yyget_debug
// file tokenparser.c line 1702
signed int yyget_debug(void);
// yyget_in
// file tokenparser.c line 1646
struct _IO_FILE * yyget_in(void);
// yyget_leng
// file tokenparser.c line 1662
unsigned long int yyget_leng(void);
// yyget_lineno
// file tokenparser.c line 1637
signed int yyget_lineno(void);
// yyget_out
// file tokenparser.c line 1654
struct _IO_FILE * yyget_out(void);
// yyget_text
// file tokenparser.c line 1671
char * yyget_text(void);
// yylex
// file tokenparser.c line 723
extern signed int yylex(void);
// yylex_destroy
// file tokenparser.c line 1741
signed int yylex_destroy(void);
// yypop_buffer_state
// file tokenparser.c line 1457
void yypop_buffer_state(void);
// yypush_buffer_state
// file tokenparser.c line 1427
void yypush_buffer_state(struct yy_buffer_state *new_buffer);
// yyrealloc
// file tokenparser.c line 1791
void * yyrealloc(void *ptr, unsigned long int size);
// yyrestart
// file tokenparser.c line 1261
void yyrestart(struct _IO_FILE *input_file);
// yyset_debug
// file tokenparser.c line 1707
void yyset_debug(signed int bdebug);
// yyset_in
// file tokenparser.c line 1692
void yyset_in(struct _IO_FILE *in_str);
// yyset_lineno
// file tokenparser.c line 1680
void yyset_lineno(signed int line_number);
// yyset_out
// file tokenparser.c line 1697
void yyset_out(struct _IO_FILE *out_str);

struct anonymous_3
{
  // pbSeq
  unsigned char *pbSeq;
  // real_bSeq
  unsigned char real_bSeq;
  // readerID
  signed int readerID;
  // dwMaxCCIDMessageLength
  unsigned int dwMaxCCIDMessageLength;
  // dwMaxIFSD
  signed int dwMaxIFSD;
  // dwFeatures
  signed int dwFeatures;
  // bPINSupport
  char bPINSupport;
  // wLcdLayout
  unsigned int wLcdLayout;
  // dwDefaultClock
  signed int dwDefaultClock;
  // dwMaxDataRate
  unsigned int dwMaxDataRate;
  // bMaxSlotIndex
  char bMaxSlotIndex;
  // bCurrentSlotIndex
  char bCurrentSlotIndex;
  // arrayOfSupportedDataRates
  unsigned int *arrayOfSupportedDataRates;
  // readTimeout
  unsigned int readTimeout;
  // cardProtocol
  signed int cardProtocol;
  // bInterfaceProtocol
  signed int bInterfaceProtocol;
  // bNumEndpoints
  signed int bNumEndpoints;
  // dwSlotStatus
  signed int dwSlotStatus;
  // bVoltageSupport
  signed int bVoltageSupport;
  // sIFD_serial_number
  char *sIFD_serial_number;
  // sIFD_iManufacturer
  char *sIFD_iManufacturer;
  // IFD_bcdDevice
  signed int IFD_bcdDevice;
  // gemalto_firmware_features
  struct GEMALTO_FIRMWARE_FEATURES *gemalto_firmware_features;
};

struct anonymous_6
{
  // dev_handle
  struct libusb_device_handle *dev_handle;
  // bus_number
  unsigned char bus_number;
  // device_address
  unsigned char device_address;
  // interface
  signed int interface;
  // bulk_in
  signed int bulk_in;
  // bulk_out
  signed int bulk_out;
  // interrupt
  signed int interrupt;
  // real_nb_opened_slots
  signed int real_nb_opened_slots;
  // nb_opened_slots
  signed int *nb_opened_slots;
  // ccid
  struct anonymous_3 ccid;
  // polling_transfer
  struct libusb_transfer *polling_transfer;
  // multislot_extension
  struct usbDevice_MultiSlot_Extension *multislot_extension;
};

struct list_attributes_s
{
  // comparator
  signed int (*comparator)(const void *, const void *);
  // seeker
  signed int (*seeker)(const void *, const void *);
  // meter
  unsigned long int (*meter)(const void *);
  // copy_data
  signed int copy_data;
  // hasher
  signed int (*hasher)(const void *);
  // serializer
  void * (*serializer)(const void *, unsigned int *);
  // unserializer
  void * (*unserializer)(const void *, unsigned int *);
};

struct anonymous_1
{
  // head_sentinel
  struct list_entry_s *head_sentinel;
  // tail_sentinel
  struct list_entry_s *tail_sentinel;
  // mid
  struct list_entry_s *mid;
  // numels
  unsigned int numels;
  // spareels
  struct list_entry_s **spareels;
  // spareelsnum
  unsigned int spareelsnum;
  // iter_active
  signed int iter_active;
  // iter_pos
  unsigned int iter_pos;
  // iter_curentry
  struct list_entry_s *iter_curentry;
  // attrs
  struct list_attributes_s attrs;
};

struct anonymous_0
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

union anonymous
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_5
{
  // __data
  struct anonymous_0 __data;
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

union anonymous_4
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct GEMALTO_FIRMWARE_FEATURES
{
  // bLogicalLCDLineNumber
  unsigned char bLogicalLCDLineNumber;
  // bLogicalLCDRowNumber
  unsigned char bLogicalLCDRowNumber;
  // bLcdInfo
  unsigned char bLcdInfo;
  // bEntryValidationCondition
  unsigned char bEntryValidationCondition;
  // VerifyPinStart
  unsigned char VerifyPinStart : 1;
  // VerifyPinFinish
  unsigned char VerifyPinFinish : 1;
  // ModifyPinStart
  unsigned char ModifyPinStart : 1;
  // ModifyPinFinish
  unsigned char ModifyPinFinish : 1;
  // GetKeyPressed
  unsigned char GetKeyPressed : 1;
  // VerifyPinDirect
  unsigned char VerifyPinDirect : 1;
  // ModifyPinDirect
  unsigned char ModifyPinDirect : 1;
  // Abort
  unsigned char Abort : 1;
  // GetKey
  unsigned char GetKey : 1;
  // WriteDisplay
  unsigned char WriteDisplay : 1;
  // SetSpeMessage
  unsigned char SetSpeMessage : 1;
  // RFUb1
  unsigned char RFUb1 : 5;
  // RFUb2
  unsigned char RFUb2[2l];
  // bTimeOut2
  unsigned char bTimeOut2 : 1;
  // bListSupportedLanguages
  unsigned char bListSupportedLanguages : 1;
  // bNumberMessageFix
  unsigned char bNumberMessageFix : 1;
  // bPPDUSupportOverXferBlock
  unsigned char bPPDUSupportOverXferBlock : 1;
  // bPPDUSupportOverEscape
  unsigned char bPPDUSupportOverEscape : 1;
  // RFUb3
  unsigned char RFUb3 : 3;
  // RFUb4
  unsigned char RFUb4[3l];
  // VersionNumber
  unsigned char VersionNumber;
  // MinimumPINSize
  unsigned char MinimumPINSize;
  // MaximumPINSize
  unsigned char MaximumPINSize;
  // Firewall
  unsigned char Firewall : 1;
  // RFUb5
  unsigned char RFUb5 : 7;
  // FirewalledCommand_SW1
  unsigned char FirewalledCommand_SW1;
  // FirewalledCommand_SW2
  unsigned char FirewalledCommand_SW2;
  // RFUb6
  unsigned char RFUb6[3l];
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

struct _bogus_firmware
{
  // vendor
  signed int vendor;
  // product
  signed int product;
  // firmware
  signed int firmware;
};

struct bundleElt
{
  // key
  char *key;
  // values
  struct anonymous_1 values;
};

struct libusb_config_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // wTotalLength
  unsigned short int wTotalLength;
  // bNumInterfaces
  unsigned char bNumInterfaces;
  // bConfigurationValue
  unsigned char bConfigurationValue;
  // iConfiguration
  unsigned char iConfiguration;
  // bmAttributes
  unsigned char bmAttributes;
  // MaxPower
  unsigned char MaxPower;
  // interface
  struct libusb_interface *interface;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_device_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bcdUSB
  unsigned short int bcdUSB;
  // bDeviceClass
  unsigned char bDeviceClass;
  // bDeviceSubClass
  unsigned char bDeviceSubClass;
  // bDeviceProtocol
  unsigned char bDeviceProtocol;
  // bMaxPacketSize0
  unsigned char bMaxPacketSize0;
  // idVendor
  unsigned short int idVendor;
  // idProduct
  unsigned short int idProduct;
  // bcdDevice
  unsigned short int bcdDevice;
  // iManufacturer
  unsigned char iManufacturer;
  // iProduct
  unsigned char iProduct;
  // iSerialNumber
  unsigned char iSerialNumber;
  // bNumConfigurations
  unsigned char bNumConfigurations;
};

struct libusb_endpoint_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bEndpointAddress
  unsigned char bEndpointAddress;
  // bmAttributes
  unsigned char bmAttributes;
  // wMaxPacketSize
  unsigned short int wMaxPacketSize;
  // bInterval
  unsigned char bInterval;
  // bRefresh
  unsigned char bRefresh;
  // bSynchAddress
  unsigned char bSynchAddress;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_interface
{
  // altsetting
  struct libusb_interface_descriptor *altsetting;
  // num_altsetting
  signed int num_altsetting;
};

struct libusb_interface_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bInterfaceNumber
  unsigned char bInterfaceNumber;
  // bAlternateSetting
  unsigned char bAlternateSetting;
  // bNumEndpoints
  unsigned char bNumEndpoints;
  // bInterfaceClass
  unsigned char bInterfaceClass;
  // bInterfaceSubClass
  unsigned char bInterfaceSubClass;
  // bInterfaceProtocol
  unsigned char bInterfaceProtocol;
  // iInterface
  unsigned char iInterface;
  // endpoint
  struct libusb_endpoint_descriptor *endpoint;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_iso_packet_descriptor
{
  // length
  unsigned int length;
  // actual_length
  unsigned int actual_length;
  // status
  enum libusb_transfer_status status;
};

struct libusb_transfer
{
  // dev_handle
  struct libusb_device_handle *dev_handle;
  // flags
  unsigned char flags;
  // endpoint
  unsigned char endpoint;
  // type
  unsigned char type;
  // timeout
  unsigned int timeout;
  // status
  enum libusb_transfer_status status;
  // length
  signed int length;
  // actual_length
  signed int actual_length;
  // callback
  void (*callback)(struct libusb_transfer *);
  // user_data
  void *user_data;
  // buffer
  unsigned char *buffer;
  // num_iso_packets
  signed int num_iso_packets;
  // iso_packet_desc
  struct libusb_iso_packet_descriptor iso_packet_desc[0l];
};

struct list_entry_s
{
  // data
  void *data;
  // next
  struct list_entry_s *next;
  // prev
  struct list_entry_s *prev;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct usbDevice_MultiSlot_Extension
{
  // reader_index
  signed int reader_index;
  // terminated
  signed int terminated;
  // status
  signed int status;
  // buffer
  unsigned char buffer[8l];
  // thread_proc
  unsigned long int thread_proc;
  // mutex
  union anonymous_4 mutex;
  // condition
  union anonymous_5 condition;
  // transfer
  struct libusb_transfer *transfer;
};

struct yy_buffer_state
{
  // yy_input_file
  struct _IO_FILE *yy_input_file;
  // yy_ch_buf
  char *yy_ch_buf;
  // yy_buf_pos
  char *yy_buf_pos;
  // yy_buf_size
  unsigned long int yy_buf_size;
  // yy_n_chars
  unsigned long int yy_n_chars;
  // yy_is_our_buffer
  signed int yy_is_our_buffer;
  // yy_is_interactive
  signed int yy_is_interactive;
  // yy_at_bol
  signed int yy_at_bol;
  // yy_bs_lineno
  signed int yy_bs_lineno;
  // yy_bs_column
  signed int yy_bs_column;
  // yy_fill_buffer
  signed int yy_fill_buffer;
  // yy_buffer_status
  signed int yy_buffer_status;
};


// Bogus_firmwares
// file ccid_usb.c line 139
static struct _bogus_firmware Bogus_firmwares[17l] = { { .vendor=0x04e6, .product=0xe001, .firmware=0x0516 },
    { .vendor=0x04e6, .product=0x5111, .firmware=0x0620 },
    { .vendor=0x04e6, .product=0xe003, .firmware=0x0510 },
    { .vendor=0x0D46, .product=0x3001, .firmware=0x0037 },
    { .vendor=0x0D46, .product=0x3002, .firmware=0x0037 },
    { .vendor=0x09C3, .product=0x0008, .firmware=0x0203 },
    { .vendor=0x0DC3, .product=0x1004, .firmware=0x0502 },
    { .vendor=0x0DC3, .product=0x1102, .firmware=0x0607 },
    { .vendor=0x058F, .product=0x9520, .firmware=0x0102 },
    { .vendor=0x072F, .product=0x2200, .firmware=0x0206 },
    { .vendor=0x08C3, .product=0x0402, .firmware=0x5000 },
    { .vendor=0x08C3, .product=0x0401, .firmware=0x5000 },
    { .vendor=0x0B0C, .product=0x0050, .firmware=0x0101 },
    { .vendor=0x0DC3, .product=0x0900, .firmware=0x0200 },
    { .vendor=0x03F0, .product=0x0036, .firmware=0x0124 },
    { .vendor=0x062D, .product=0x0001, .firmware=0x0102 },
    { .vendor=0x04E6, .product=0x5291, .firmware=0x0112 } };
// DriverOptions
// file parse.c line 49
signed int DriverOptions = 0;
// ListKeys
// file tokenparser.l line 58
static struct anonymous_1 *ListKeys;
// ListValues
// file tokenparser.l line 59
static struct anonymous_1 *ListValues;
// LogLevel
// file parse.c line 48
signed int LogLevel = 1 + 2 + 4 + 8;
// SerialCustomDataRates
// file ccid_usb.c line 166
unsigned int SerialCustomDataRates[5l] = { (unsigned int)10753, (unsigned int)21505, (unsigned int)43011, (unsigned int)125000, (unsigned int)0 };
// ctx
// file ccid_usb.c line 60
struct libusb_context *ctx = (struct libusb_context *)(void *)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// usbDevice
// file ccid_usb.c line 126
static struct anonymous_6 usbDevice[16l];
// yy_accept
// file tokenparser.c line 384
static const signed short int yy_accept[39l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)8, (const signed short int)6, (const signed short int)4, (const signed short int)2, (const signed short int)1, (const signed short int)6, (const signed short int)1, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)3, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)5, (const signed short int)0 };
// yy_base
// file tokenparser.c line 430
static const signed short int yy_base[43l] = { (const signed short int)0, (const signed short int)0, (const signed short int)7, (const signed short int)49, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)0, (const signed short int)1, (const signed short int)0, (const signed short int)36, (const signed short int)28, (const signed short int)26, (const signed short int)28, (const signed short int)35, (const signed short int)29, (const signed short int)0, (const signed short int)26, (const signed short int)33, (const signed short int)27, (const signed short int)33, (const signed short int)29, (const signed short int)22, (const signed short int)0, (const signed short int)24, (const signed short int)27, (const signed short int)14, (const signed short int)27, (const signed short int)23, (const signed short int)13, (const signed short int)50, (const signed short int)10, (const signed short int)9, (const signed short int)4, (const signed short int)1, (const signed short int)0, (const signed short int)2, (const signed short int)50, (const signed short int)50, (const signed short int)19, (const signed short int)23, (const signed short int)2, (const signed short int)26 };
// yy_buffer_stack
// file tokenparser.c line 264
static struct yy_buffer_state **yy_buffer_stack = ((struct yy_buffer_state **)NULL);
// yy_buffer_stack_max
// file tokenparser.c line 263
static unsigned long int yy_buffer_stack_max = (unsigned long int)0;
// yy_buffer_stack_top
// file tokenparser.c line 262
static unsigned long int yy_buffer_stack_top = (unsigned long int)0;
// yy_c_buf_p
// file tokenparser.c line 287
static char *yy_c_buf_p = (char *)0;
// yy_chk
// file tokenparser.c line 459
static const signed short int yy_chk[71l] = { (const signed short int)0, (const signed short int)0, (const signed short int)1, (const signed short int)1, (const signed short int)41, (const signed short int)1, (const signed short int)0, (const signed short int)0, (const signed short int)1, (const signed short int)2, (const signed short int)2, (const signed short int)36, (const signed short int)2, (const signed short int)35, (const signed short int)0, (const signed short int)2, (const signed short int)8, (const signed short int)34, (const signed short int)33, (const signed short int)8, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)40, (const signed short int)40, (const signed short int)32, (const signed short int)40, (const signed short int)42, (const signed short int)31, (const signed short int)42, (const signed short int)29, (const signed short int)28, (const signed short int)27, (const signed short int)26, (const signed short int)25, (const signed short int)24, (const signed short int)22, (const signed short int)21, (const signed short int)20, (const signed short int)19, (const signed short int)18, (const signed short int)17, (const signed short int)15, (const signed short int)14, (const signed short int)13, (const signed short int)12, (const signed short int)11, (const signed short int)10, (const signed short int)3, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38 };
// yy_def
// file tokenparser.c line 439
static const signed short int yy_def[43l] = { (const signed short int)0, (const signed short int)39, (const signed short int)39, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)40, (const signed short int)38, (const signed short int)40, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)41, (const signed short int)38, (const signed short int)41, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)42, (const signed short int)38, (const signed short int)42, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)0, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38 };
// yy_did_buffer_switch_on_eof
// file tokenparser.c line 294
static signed int yy_did_buffer_switch_on_eof;
// yy_ec
// file tokenparser.c line 392
static const signed int yy_ec[256l] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 4, 4, 8, 4, 9, 4, 4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 4, 1, 4, 4, 4, 1, 11, 11, 11, 11, 12, 11, 13, 11, 14, 11, 15, 11, 11, 16, 11, 11, 11, 17, 18, 19, 11, 11, 11, 11, 20, 11, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
// yy_flex_debug
// file tokenparser.c line 474
signed int yy_flex_debug = 0;
// yy_hold_char
// file tokenparser.c line 282
static char yy_hold_char;
// yy_init
// file tokenparser.c line 288
static signed int yy_init = 0;
// yy_last_accepting_cpos
// file tokenparser.c line 471
static char *yy_last_accepting_cpos;
// yy_last_accepting_state
// file tokenparser.c line 470
static signed int yy_last_accepting_state;
// yy_meta
// file tokenparser.c line 424
static const signed int yy_meta[21l] = { 0, 1, 2, 3, 4, 4, 4, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
// yy_n_chars
// file tokenparser.c line 283
static unsigned long int yy_n_chars;
// yy_nxt
// file tokenparser.c line 448
static const signed short int yy_nxt[71l] = { (const signed short int)0, (const signed short int)38, (const signed short int)5, (const signed short int)6, (const signed short int)18, (const signed short int)7, (const signed short int)38, (const signed short int)38, (const signed short int)8, (const signed short int)5, (const signed short int)6, (const signed short int)37, (const signed short int)7, (const signed short int)36, (const signed short int)38, (const signed short int)8, (const signed short int)10, (const signed short int)35, (const signed short int)34, (const signed short int)11, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)9, (const signed short int)9, (const signed short int)33, (const signed short int)9, (const signed short int)25, (const signed short int)32, (const signed short int)25, (const signed short int)31, (const signed short int)30, (const signed short int)29, (const signed short int)28, (const signed short int)27, (const signed short int)26, (const signed short int)24, (const signed short int)23, (const signed short int)22, (const signed short int)21, (const signed short int)20, (const signed short int)19, (const signed short int)17, (const signed short int)16, (const signed short int)15, (const signed short int)14, (const signed short int)13, (const signed short int)12, (const signed short int)38, (const signed short int)3, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38, (const signed short int)38 };
// yy_start
// file tokenparser.c line 289
static signed int yy_start = 0;
// yyin
// file tokenparser.c line 349
struct _IO_FILE *yyin = (struct _IO_FILE *)0;
// yyleng
// file tokenparser.c line 284
unsigned long int yyleng;
// yylineno
// file tokenparser.c line 355
signed int yylineno = 1;
// yyout
// file tokenparser.c line 349
struct _IO_FILE *yyout = (struct _IO_FILE *)0;
// yytext
// file tokenparser.c line 483
char *yytext;

// CloseUSB
// file ccid_usb.c line 848
enum anonymous_2 CloseUSB(unsigned int reader_index)
{
  if(usbDevice[(signed long int)reader_index].dev_handle == ((struct libusb_device_handle *)NULL))
    return (enum anonymous_2)STATUS_UNSUCCESSFUL;

  else
  {
    if(!((4 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Closing USB device: %d/%d", (const void *)"ccid_usb.c", 856, (const void *)"CloseUSB", usbDevice[(signed long int)reader_index].bus_number, usbDevice[(signed long int)reader_index].device_address);

    *usbDevice[(signed long int)reader_index].nb_opened_slots = *usbDevice[(signed long int)reader_index].nb_opened_slots - 1;
    if(*usbDevice[(signed long int)reader_index].nb_opened_slots == 0)
    {
      struct usbDevice_MultiSlot_Extension *msExt;
      if(!((4 & LogLevel) == 0))
        log_msg(0, "%s:%d:%s() Last slot closed. Release resources", (const void *)"ccid_usb.c", 866, (const void *)"CloseUSB");

      msExt = usbDevice[(signed long int)reader_index].multislot_extension;
      if(!(msExt == ((struct usbDevice_MultiSlot_Extension *)NULL)))
      {
        Multi_PollingTerminate(msExt);
        pthread_join(msExt->thread_proc, (void **)(void *)0);
        pthread_cond_destroy(&msExt->condition);
        pthread_mutex_destroy(&msExt->mutex);
        free((void *)msExt);
        usbDevice[(signed long int)reader_index].multislot_extension = (struct usbDevice_MultiSlot_Extension *)(void *)0;
      }

      if(!(usbDevice[(signed long int)reader_index].ccid.gemalto_firmware_features == ((struct GEMALTO_FIRMWARE_FEATURES *)NULL)))
        free((void *)usbDevice[(signed long int)reader_index].ccid.gemalto_firmware_features);

      if(!(usbDevice[(signed long int)reader_index].ccid.sIFD_serial_number == ((char *)NULL)))
        free((void *)usbDevice[(signed long int)reader_index].ccid.sIFD_serial_number);

      if(!(usbDevice[(signed long int)reader_index].ccid.sIFD_iManufacturer == ((char *)NULL)))
        free((void *)usbDevice[(signed long int)reader_index].ccid.sIFD_iManufacturer);

      if(!((8 & DriverOptions) == 0))
        libusb_reset_device(usbDevice[(signed long int)reader_index].dev_handle);

      if(!(usbDevice[(signed long int)reader_index].ccid.arrayOfSupportedDataRates == ((unsigned int *)NULL)))
        free((void *)usbDevice[(signed long int)reader_index].ccid.arrayOfSupportedDataRates);

      libusb_release_interface(usbDevice[(signed long int)reader_index].dev_handle, usbDevice[(signed long int)reader_index].interface);
      libusb_close(usbDevice[(signed long int)reader_index].dev_handle);
    }

    usbDevice[(signed long int)reader_index].dev_handle = (struct libusb_device_handle *)(void *)0;
    usbDevice[(signed long int)reader_index].interface = 0;
    close_libusb_if_needed();
    return (enum anonymous_2)STATUS_SUCCESS;
  }
}

// ControlUSB
// file ccid_usb.c line 1167
signed int ControlUSB(signed int reader_index, signed int requesttype, signed int request, signed int value, unsigned char *bytes, unsigned int size)
{
  signed int ret;
  if(!((4 & LogLevel) == 0))
    log_msg(0, "%s:%d:%s() request: 0x%02X", (const void *)"ccid_usb.c", 1172, (const void *)"ControlUSB", request);

  if((0x80 & requesttype) == 0)
  {
    if(!((4 & LogLevel) == 0))
      log_xxd(0, "send: ", bytes, (const signed int)size);

  }

  ret=libusb_control_transfer(usbDevice[(signed long int)reader_index].dev_handle, (unsigned char)requesttype, (unsigned char)request, (unsigned short int)value, (unsigned short int)usbDevice[(signed long int)reader_index].interface, bytes, (unsigned short int)size, usbDevice[(signed long int)reader_index].ccid.readTimeout);
  const char *return_value_libusb_error_name_1;
  if(!(ret >= 0))
  {
    if(!((1 & LogLevel) == 0))
    {
      return_value_libusb_error_name_1=libusb_error_name(ret);
      log_msg(3, "%s:%d:%s() control failed (%d/%d): %d %s", (const void *)"ccid_usb.c", 1185, (const void *)"ControlUSB", usbDevice[(signed long int)reader_index].bus_number, usbDevice[(signed long int)reader_index].device_address, ret, return_value_libusb_error_name_1);
    }

    return ret;
  }

  if(!((0x80 & requesttype) == 0))
  {
    if(!((4 & LogLevel) == 0))
      log_xxd(0, "receive: ", bytes, ret);

  }

  return ret;
}

// InterruptRead
// file ccid_usb.c line 1213
signed int InterruptRead(signed int reader_index, signed int timeout)
{
  signed int ret;
  signed int actual_length;
  signed int return_value = 0;
  unsigned char buffer[8l];
  struct libusb_transfer *transfer;
  signed int completed = 0;
  signed int return_value_Multi_InterruptRead_1;
  signed int return_value_libusb_handle_events_2;
  const char *return_value_libusb_error_name_3;
  if(!(usbDevice[(signed long int)reader_index].multislot_extension == ((struct usbDevice_MultiSlot_Extension *)NULL)))
  {
    return_value_Multi_InterruptRead_1=Multi_InterruptRead(reader_index, timeout);
    return return_value_Multi_InterruptRead_1;
  }

  else
  {
    if(!((8 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() before (%d)", (const void *)"ccid_usb.c", 1225, (const void *)"InterruptRead", reader_index);

    transfer=libusb_alloc_transfer(0);
    if(transfer == ((struct libusb_transfer *)NULL))
      return -11;

    else
    {
      libusb_fill_bulk_transfer(transfer, usbDevice[(signed long int)reader_index].dev_handle, (unsigned char)usbDevice[(signed long int)reader_index].interrupt, buffer, (signed int)sizeof(unsigned char [8l]) /*8ul*/ , bulk_transfer_cb, (void *)&completed, (unsigned int)timeout);
      transfer->type = (unsigned char)3;
      ret=libusb_submit_transfer(transfer);
      if(!(ret >= 0))
      {
        libusb_free_transfer(transfer);
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() libusb_submit_transfer failed: %d", (const void *)"ccid_usb.c", 1240, (const void *)"InterruptRead", ret);

        return ret;
      }

      else
      {
        usbDevice[(signed long int)reader_index].polling_transfer = transfer;
        while(completed == 0)
        {
          ret=libusb_handle_events(ctx);
          if(!(ret >= 0))
          {
            if(!(ret == -10))
            {
              libusb_cancel_transfer(transfer);
              while(completed == 0)
              {
                return_value_libusb_handle_events_2=libusb_handle_events(ctx);
                if(!(return_value_libusb_handle_events_2 >= 0))
                  break;

              }
              libusb_free_transfer(transfer);
              if(!((1 & LogLevel) == 0))
                log_msg(3, "%s:%d:%s() libusb_handle_events failed: %d", (const void *)"ccid_usb.c", 1258, (const void *)"InterruptRead", ret);

              return ret;
            }

          }

        }
        actual_length = transfer->actual_length;
        ret = (signed int)transfer->status;
        usbDevice[(signed long int)reader_index].polling_transfer = (struct libusb_transfer *)(void *)0;
        libusb_free_transfer(transfer);
        if(!((8 & LogLevel) == 0))
          log_msg(0, "%s:%d:%s() after (%d) (%d)", (const void *)"ccid_usb.c", 1269, (const void *)"InterruptRead", reader_index, ret);

        switch(ret)
        {
          case LIBUSB_TRANSFER_COMPLETED:
          {
            if(!((4 & LogLevel) == 0))
              log_xxd(0, "NotifySlotChange: ", buffer, actual_length);

            break;
          }
          case LIBUSB_TRANSFER_TIMED_OUT:
            break;
          default:
          {
            if(!((4 & LogLevel) == 0))
            {
              return_value_libusb_error_name_3=libusb_error_name(ret);
              log_msg(0, "%s:%d:%s() InterruptRead (%d/%d): %s", (const void *)"ccid_usb.c", 1284, (const void *)"InterruptRead", usbDevice[(signed long int)reader_index].bus_number, usbDevice[(signed long int)reader_index].device_address, return_value_libusb_error_name_3);
            }

            return_value = 612;
          }
        }
        return return_value;
      }
    }
  }
}

// InterruptStop
// file ccid_usb.c line 1297
void InterruptStop(signed int reader_index)
{
  struct libusb_transfer *transfer;
  if(!(usbDevice[(signed long int)reader_index].multislot_extension == ((struct usbDevice_MultiSlot_Extension *)NULL)))
    Multi_InterruptStop(reader_index);

  else
  {
    transfer = usbDevice[(signed long int)reader_index].polling_transfer;
    usbDevice[(signed long int)reader_index].polling_transfer = (struct libusb_transfer *)(void *)0;
    if(!(transfer == ((struct libusb_transfer *)NULL)))
    {
      signed int ret;
      ret=libusb_cancel_transfer(transfer);
      if(!(ret >= 0))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() libusb_cancel_transfer failed: %d", (const void *)"ccid_usb.c", 1316, (const void *)"InterruptStop", ret);

      }

    }

  }
}

// LTPBundleFindValueWithKey
// file parser.h line 49
signed int LTPBundleFindValueWithKey(struct anonymous_1 *l, const char *key, struct anonymous_1 **values)
{
  unsigned int i;
  signed int ret = 1;
  i = (unsigned int)0;
  unsigned int return_value_list_size_1;
  do
  {
    return_value_list_size_1=list_size(l);
    if(i >= return_value_list_size_1)
      break;

    struct bundleElt *elt;
    void *return_value_list_get_at_2;
    return_value_list_get_at_2=list_get_at(l, i);
    elt = (struct bundleElt *)return_value_list_get_at_2;
    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(elt->key, key);
    if(return_value_strcmp_3 == 0)
    {
      *values = &elt->values;
      ret = 0;
    }

    i = i + 1u;
  }
  while((_Bool)1);
  return ret;
}

// Multi_CreateFirstSlot
// file ccid_usb.c line 1648
static struct usbDevice_MultiSlot_Extension * Multi_CreateFirstSlot(signed int reader_index)
{
  struct usbDevice_MultiSlot_Extension *msExt;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct usbDevice_MultiSlot_Extension) /*128ul*/ );
  msExt = (struct usbDevice_MultiSlot_Extension *)return_value_malloc_1;
  if(msExt == ((struct usbDevice_MultiSlot_Extension *)NULL))
    return (struct usbDevice_MultiSlot_Extension *)(void *)0;

  else
  {
    msExt->reader_index = reader_index;
    msExt->terminated = 0;
    msExt->status = 0;
    msExt->transfer = (struct libusb_transfer *)(void *)0;
    pthread_mutex_init(&msExt->mutex, (const union anonymous *)(void *)0);
    pthread_cond_init(&msExt->condition, (const union anonymous *)(void *)0);
    pthread_create(&msExt->thread_proc, (const union pthread_attr_t *)(void *)0, Multi_PollingProc, (void *)msExt);
    return msExt;
  }
}

// Multi_CreateNextSlot
// file ccid_usb.c line 1680
static struct usbDevice_MultiSlot_Extension * Multi_CreateNextSlot(signed int physical_reader_index)
{
  return usbDevice[(signed long int)physical_reader_index].multislot_extension;
}

// Multi_InterruptRead
// file ccid_usb.c line 1539
static signed int Multi_InterruptRead(signed int reader_index, signed int timeout)
{
  struct usbDevice_MultiSlot_Extension *msExt;
  unsigned char buffer[8l];
  struct timespec cond_wait_until;
  struct timeval local_time;
  signed int rv;
  signed int status;
  signed int interrupt_byte;
  signed int interrupt_mask;
  msExt = usbDevice[(signed long int)reader_index].multislot_extension;
  _Bool tmp_if_expr_1;
  if(msExt == ((struct usbDevice_MultiSlot_Extension *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = msExt->terminated != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    if(!((8 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Multi_InterruptRead (%d), timeout: %d ms", (const void *)"ccid_usb.c", 1554, (const void *)"Multi_InterruptRead", reader_index, timeout);

    interrupt_byte = (signed int)usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex / 4 + 1;
    interrupt_mask = 0x02 << 2 * ((signed int)usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex % 4);
    gettimeofday(&local_time, (struct timezone *)(void *)0);
    cond_wait_until.tv_sec = local_time.tv_sec;
    cond_wait_until.tv_nsec = local_time.tv_usec * (signed long int)1000;
    cond_wait_until.tv_sec = cond_wait_until.tv_sec + (signed long int)(timeout / 1000);
    cond_wait_until.tv_nsec = cond_wait_until.tv_nsec + (signed long int)(1000000 * (timeout % 1000));
    do
    {

    again:
      ;
      pthread_mutex_lock(&msExt->mutex);
      rv=pthread_cond_timedwait(&msExt->condition, &msExt->mutex, &cond_wait_until);
      if(rv == 0)
      {
        memcpy((void *)buffer, (const void *)msExt->buffer, sizeof(unsigned char [8l]) /*8ul*/ );
        status = msExt->status;
      }

      else
        if(rv == 110)
          status = LIBUSB_TRANSFER_TIMED_OUT;

        else
          status = -1;
      pthread_mutex_unlock(&msExt->mutex);
      if(!(msExt->terminated == 0))
        return 0;

      if(!(status == LIBUSB_TRANSFER_COMPLETED))
        goto __CPROVER_DUMP_L13;

      if(!((interrupt_mask & (signed int)buffer[(signed long int)interrupt_byte]) == 0))
        break;

      if(!((8 & LogLevel) == 0))
        log_msg(0, "%s:%d:%s() Multi_InterruptRead (%d) -- skipped", (const void *)"ccid_usb.c", 1598, (const void *)"Multi_InterruptRead", reader_index);

    }
    while((_Bool)1);
    if(!((8 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Multi_InterruptRead (%d), got an interrupt", (const void *)"ccid_usb.c", 1601, (const void *)"Multi_InterruptRead", reader_index);

    goto __CPROVER_DUMP_L14;

  __CPROVER_DUMP_L13:
    ;
    if(!((8 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Multi_InterruptRead (%d), status=%d", (const void *)"ccid_usb.c", 1605, (const void *)"Multi_InterruptRead", reader_index, status);


  __CPROVER_DUMP_L14:
    ;
    return status;
  }
}

// Multi_InterruptStop
// file ccid_usb.c line 1617
static void Multi_InterruptStop(signed int reader_index)
{
  struct usbDevice_MultiSlot_Extension *msExt;
  signed int interrupt_byte;
  signed int interrupt_mask;
  msExt = usbDevice[(signed long int)reader_index].multislot_extension;
  _Bool tmp_if_expr_1;
  if(msExt == ((struct usbDevice_MultiSlot_Extension *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = msExt->terminated != 0 ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    if(!((8 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Stop (%d)", (const void *)"ccid_usb.c", 1628, (const void *)"Multi_InterruptStop", reader_index);

    interrupt_byte = (signed int)usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex / 4 + 1;
    interrupt_mask = 0x02 << 2 * ((signed int)usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex % 4);
    pthread_mutex_lock(&msExt->mutex);
    msExt->buffer[(signed long int)interrupt_byte] = msExt->buffer[(signed long int)interrupt_byte] | (unsigned char)interrupt_mask;
    pthread_cond_broadcast(&msExt->condition);
    pthread_mutex_unlock(&msExt->mutex);
  }

}

// Multi_PollingProc
// file ccid_usb.c line 1326
static void * Multi_PollingProc(void *p_ext)
{
  struct usbDevice_MultiSlot_Extension *msExt = (struct usbDevice_MultiSlot_Extension *)p_ext;
  signed int rv;
  signed int status;
  signed int actual_length;
  unsigned char buffer[8l];
  struct libusb_transfer *transfer;
  signed int completed;
  if(!((4 & LogLevel) == 0))
    log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): thread starting", (const void *)"ccid_usb.c", 1336, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

  rv = 0;
  while(msExt->terminated == 0)
  {
    if(!((4 & LogLevel) == 0))
      log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): waiting", (const void *)"ccid_usb.c", 1343, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

    transfer=libusb_alloc_transfer(0);
    if(transfer == ((struct libusb_transfer *)NULL))
    {
      rv = -11;
      if(!((4 & LogLevel) == 0))
        log_msg(0, "%s:%d:%s() libusb_alloc_transfer err %d", (const void *)"ccid_usb.c", 1349, (const void *)"Multi_PollingProc", rv);

      break;
    }

    libusb_fill_bulk_transfer(transfer, usbDevice[(signed long int)msExt->reader_index].dev_handle, (unsigned char)usbDevice[(signed long int)msExt->reader_index].interrupt, buffer, 8, bulk_transfer_cb, (void *)&completed, (unsigned int)0);
    transfer->type = (unsigned char)3;
    rv=libusb_submit_transfer(transfer);
    if(!(rv == 0))
    {
      libusb_free_transfer(transfer);
      if(!((4 & LogLevel) == 0))
        log_msg(0, "%s:%d:%s() libusb_submit_transfer err %d", (const void *)"ccid_usb.c", 1365, (const void *)"Multi_PollingProc", rv);

      break;
    }

    usbDevice[(signed long int)msExt->reader_index].polling_transfer = transfer;
    completed = 0;
    while(completed == 0)
    {
      if(!(msExt->terminated == 0))
        break;

      rv=libusb_handle_events(ctx);
      if(!(rv >= 0))
      {
        if(!((4 & LogLevel) == 0))
          log_msg(0, "%s:%d:%s() libusb_handle_events err %d", (const void *)"ccid_usb.c", 1377, (const void *)"Multi_PollingProc", rv);

        if(!(rv == -10))
        {
          libusb_cancel_transfer(transfer);
          while(completed == 0)
          {
            if(!(msExt->terminated == 0))
              break;

            signed int return_value_libusb_handle_events_1;
            return_value_libusb_handle_events_1=libusb_handle_events(ctx);
            if(!(return_value_libusb_handle_events_1 >= 0))
              break;

          }
          break;
        }

      }

    }
    usbDevice[(signed long int)msExt->reader_index].polling_transfer = (struct libusb_transfer *)(void *)0;
    if(!(rv >= 0))
      libusb_free_transfer(transfer);

    else
    {
      signed int b;
      signed int slot;
      actual_length = transfer->actual_length;
      status = (signed int)transfer->status;
      libusb_free_transfer(transfer);
      switch(status)
      {
        case LIBUSB_TRANSFER_COMPLETED:
        {
          if(!((4 & LogLevel) == 0))
            log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): OK", (const void *)"ccid_usb.c", 1412, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

          if(!((4 & LogLevel) == 0))
            log_xxd(0, "NotifySlotChange: ", buffer, actual_length);

          slot = 0;
          b = 0;
          for( ; !(b >= actual_length + -1); b = b + 1)
          {
            signed int s = 0;
            for( ; !(s >= 4); s = s + 1)
            {
              signed int slot_status = (signed int)buffer[(signed long int)(1 + b)] >> s * 2 & 3;
              const char *present;
              const char *change;
              present = (slot_status & 1) != 0 ? "present" : "absent";
              change = (slot_status & 2) != 0 ? "status changed" : "no change";
              if(!((4 & LogLevel) == 0))
                log_msg(0, "%s:%d:%s() slot %d status: %d", (const void *)"ccid_usb.c", 1432, (const void *)"Multi_PollingProc", s + b * 4, slot_status);

              if(!((4 & LogLevel) == 0))
                log_msg(0, "%s:%d:%s() ICC %s, %s", (const void *)"ccid_usb.c", 1433, (const void *)"Multi_PollingProc", present, change);

            }
            slot = slot + 4;
          }
          break;
        }
        case LIBUSB_TRANSFER_TIMED_OUT:
        {
          if(!((4 & LogLevel) == 0))
            log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): Timeout", (const void *)"ccid_usb.c", 1442, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

          break;
        }
        default:
          if(!((4 & LogLevel) == 0))
            log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): %d", (const void *)"ccid_usb.c", 1451, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address, status);

      }
      if(!((4 & LogLevel) == 0))
        log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): Broadcast to slot(s)", (const void *)"ccid_usb.c", 1457, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

      pthread_mutex_lock(&msExt->mutex);
      msExt->status = status;
      memset((void *)msExt->buffer, 0, sizeof(unsigned char [8l]) /*8ul*/ );
      memcpy((void *)msExt->buffer, (const void *)buffer, (unsigned long int)actual_length);
      pthread_cond_broadcast(&msExt->condition);
      pthread_mutex_unlock(&msExt->mutex);
    }
  }
  msExt->terminated = 1;
  if(!(rv >= 0))
  {
    if(!((1 & LogLevel) == 0))
      log_msg(3, "%s:%d:%s() Multi_PollingProc (%d/%d): error %d", (const void *)"ccid_usb.c", 1479, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address, rv);

  }

  pthread_mutex_lock(&msExt->mutex);
  msExt->status = 0;
  memset((void *)msExt->buffer, 0xFF, sizeof(unsigned char [8l]) /*8ul*/ );
  pthread_cond_broadcast(&msExt->condition);
  pthread_mutex_unlock(&msExt->mutex);
  if(!((4 & LogLevel) == 0))
    log_msg(0, "%s:%d:%s() Multi_PollingProc (%d/%d): Thread terminated", (const void *)"ccid_usb.c", 1500, (const void *)"Multi_PollingProc", usbDevice[(signed long int)msExt->reader_index].bus_number, usbDevice[(signed long int)msExt->reader_index].device_address);

  pthread_exit((void *)0);
  return (void *)0;
}

// Multi_PollingTerminate
// file ccid_usb.c line 1512
static void Multi_PollingTerminate(struct usbDevice_MultiSlot_Extension *msExt)
{
  struct libusb_transfer *transfer;
  if(!(msExt == ((struct usbDevice_MultiSlot_Extension *)NULL)))
  {
    if(msExt->terminated == 0)
    {
      msExt->terminated = 1;
      transfer = usbDevice[(signed long int)msExt->reader_index].polling_transfer;
      if(!(transfer == ((struct libusb_transfer *)NULL)))
      {
        signed int ret;
        ret=libusb_cancel_transfer(transfer);
        if(!(ret >= 0))
        {
          if(!((1 & LogLevel) == 0))
            log_msg(3, "%s:%d:%s() libusb_cancel_transfer failed: %d", (const void *)"ccid_usb.c", 1528, (const void *)"Multi_PollingTerminate", ret);

        }

      }

    }

  }

}

// OpenUSB
// file ccid_usb.c line 197
enum anonymous_2 OpenUSB(unsigned int reader_index, signed int Channel)
{
  (void)Channel;
  enum anonymous_2 return_value_OpenUSBByName_1;
  return_value_OpenUSBByName_1=OpenUSBByName(reader_index, (char *)(void *)0);
  return return_value_OpenUSBByName_1;
}

// OpenUSBByName
// file ccid_usb.c line 210
enum anonymous_2 OpenUSBByName(unsigned int reader_index, char *device)
{
  unsigned int alias;
  struct libusb_device_handle *dev_handle;
  char infofile[4096l];
  unsigned int device_vendor;
  unsigned int device_product;
  unsigned int device_bus = (unsigned int)0;
  unsigned int device_addr = (unsigned int)0;
  signed int interface_number = -1;
  signed int i;
  struct libusb_device **devs;
  struct libusb_device *dev;
  signed long int cnt;
  struct anonymous_1 plist;
  struct anonymous_1 *values;
  struct anonymous_1 *ifdVendorID;
  struct anonymous_1 *ifdProductID;
  struct anonymous_1 *ifdFriendlyName;
  signed int rv;
  signed int claim_failed = 0;
  signed int return_value = STATUS_SUCCESS;
  if(!((4 & LogLevel) == 0))
    log_msg(0, "%s:%d:%s() Reader index: %X, Device: %s", (const void *)"ccid_usb.c", 234, (const void *)"OpenUSBByName", reader_index, device);

  if(!(device == ((char *)NULL)))
  {
    char *dirname;
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp("usb:", device, (unsigned long int)4);
    if(!(return_value_strncmp_1 == 0))
    {
      if(!((1 & LogLevel) == 0))
        log_msg(3, "%s:%d:%s() device name does not start with \"usb:\": %s", (const void *)"ccid_usb.c", 246, (const void *)"OpenUSBByName", device);

      return (enum anonymous_2)STATUS_UNSUCCESSFUL;
    }

    signed int return_value_sscanf_2;
    return_value_sscanf_2=sscanf(device, "usb:%x/%x", &device_vendor, &device_product);
    if(!(return_value_sscanf_2 == 2))
    {
      if(!((1 & LogLevel) == 0))
        log_msg(3, "%s:%d:%s() device name can't be parsed: %s", (const void *)"ccid_usb.c", 252, (const void *)"OpenUSBByName", device);

      return (enum anonymous_2)STATUS_UNSUCCESSFUL;
    }

    dirname=strstr(device, "libudev:");
    if(!(dirname == ((char *)NULL)))
    {
      signed int return_value_sscanf_3;
      return_value_sscanf_3=sscanf(dirname + (signed long int)8, "%d:/dev/bus/usb/%d/%d", &interface_number, &device_bus, &device_addr);
      if(return_value_sscanf_3 == 3)
      {
        if(!((4 & LogLevel) == 0))
          log_msg(0, "%s:%d:%s() interface_number: %d", (const void *)"ccid_usb.c", 266, (const void *)"OpenUSBByName", interface_number);

        if(!((4 & LogLevel) == 0))
          log_msg(0, "%s:%d:%s() usb bus/device: %d/%d", (const void *)"ccid_usb.c", 267, (const void *)"OpenUSBByName", device_bus, device_addr);

      }

    }

  }

  void *return_value_list_get_at_4;
  void *return_value_list_get_at_5;
  void *return_value_list_get_at_6;
  const char *return_value_libusb_error_name_7;
  unsigned int return_value_list_size_8;
  unsigned int return_value_list_size_9;
  _Bool tmp_if_expr_12;
  unsigned int return_value_list_size_10;
  unsigned int return_value_list_size_11;
  unsigned int return_value_list_size_13;
  signed int tmp_post_19;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_20;
  const char *return_value_libusb_error_name_26;
  const char *return_value_libusb_error_name_27;
  const char *return_value_libusb_error_name_28;
  if(!(usbDevice[(signed long int)reader_index].dev_handle == ((struct libusb_device_handle *)NULL)))
  {
    if(!((1 & LogLevel) == 0))
      log_msg(3, "%s:%d:%s() USB driver with index %X already in use", (const void *)"ccid_usb.c", 277, (const void *)"OpenUSBByName", reader_index);

    return (enum anonymous_2)STATUS_UNSUCCESSFUL;
  }

  else
  {
    snprintf(infofile, sizeof(char [4096l]) /*4096ul*/ , "%s/%s/Contents/Info.plist", (const void *)"/usr/lib/pcsc/drivers", (const void *)"ifd-ccid.bundle");
    if(!((2 & LogLevel) == 0))
      log_msg(1, "%s:%d:%s() Using: %s", (const void *)"ccid_usb.c", 284, (const void *)"OpenUSBByName", (const void *)infofile);

    rv=bundleParse(infofile, &plist);
    if(!(rv == 0))
      return (enum anonymous_2)STATUS_UNSUCCESSFUL;

    else
    {
      rv=LTPBundleFindValueWithKey(&plist, "ifdManufacturerString", &values);
      if(!(rv == 0))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() Value/Key not defined for ifdManufacturerString in %s", (const void *)"ccid_usb.c", 302, (const void *)"OpenUSBByName", (const void *)infofile);

        return_value = STATUS_UNSUCCESSFUL;
        goto end1;
      }

      else
        if(!((2 & LogLevel) == 0))
        {
          return_value_list_get_at_4=list_get_at(values, (unsigned int)0);
          log_msg(1, "%s:%d:%s() ifdManufacturerString: %s", (const void *)"ccid_usb.c", 302, (const void *)"OpenUSBByName", (char *)return_value_list_get_at_4);
        }

      rv=LTPBundleFindValueWithKey(&plist, "ifdProductString", &values);
      if(!(rv == 0))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() Value/Key not defined for ifdProductString in %s", (const void *)"ccid_usb.c", 303, (const void *)"OpenUSBByName", (const void *)infofile);

        return_value = STATUS_UNSUCCESSFUL;
        goto end1;
      }

      else
        if(!((2 & LogLevel) == 0))
        {
          return_value_list_get_at_5=list_get_at(values, (unsigned int)0);
          log_msg(1, "%s:%d:%s() ifdProductString: %s", (const void *)"ccid_usb.c", 303, (const void *)"OpenUSBByName", (char *)return_value_list_get_at_5);
        }

      rv=LTPBundleFindValueWithKey(&plist, "Copyright", &values);
      if(!(rv == 0))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() Value/Key not defined for Copyright in %s", (const void *)"ccid_usb.c", 304, (const void *)"OpenUSBByName", (const void *)infofile);

        return_value = STATUS_UNSUCCESSFUL;
        goto end1;
      }

      else
        if(!((2 & LogLevel) == 0))
        {
          return_value_list_get_at_6=list_get_at(values, (unsigned int)0);
          log_msg(1, "%s:%d:%s() Copyright: %s", (const void *)"ccid_usb.c", 304, (const void *)"OpenUSBByName", (char *)return_value_list_get_at_6);
        }

      if(ctx == ((struct libusb_context *)NULL))
      {
        rv=libusb_init(&ctx);
        if(!(rv == 0))
        {
          if(!((1 & LogLevel) == 0))
          {
            return_value_libusb_error_name_7=libusb_error_name(rv);
            log_msg(3, "%s:%d:%s() libusb_init failed: %s", (const void *)"ccid_usb.c", 311, (const void *)"OpenUSBByName", return_value_libusb_error_name_7);
          }

          return_value = STATUS_UNSUCCESSFUL;
          goto end1;
        }

      }

      rv=LTPBundleFindValueWithKey(&plist, "ifdVendorID", &ifdVendorID);
      if(!(rv == 0))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() Value/Key not defined for ifdVendorID in %s", (const void *)"ccid_usb.c", 326, (const void *)"OpenUSBByName", (const void *)infofile);

        return_value = STATUS_UNSUCCESSFUL;
      }

      else
      {
        rv=LTPBundleFindValueWithKey(&plist, "ifdProductID", &ifdProductID);
        if(!(rv == 0))
        {
          if(!((1 & LogLevel) == 0))
            log_msg(3, "%s:%d:%s() Value/Key not defined for ifdProductID in %s", (const void *)"ccid_usb.c", 327, (const void *)"OpenUSBByName", (const void *)infofile);

          return_value = STATUS_UNSUCCESSFUL;
        }

        else
        {
          rv=LTPBundleFindValueWithKey(&plist, "ifdFriendlyName", &ifdFriendlyName);
          if(!(rv == 0))
          {
            if(!((1 & LogLevel) == 0))
              log_msg(3, "%s:%d:%s() Value/Key not defined for ifdFriendlyName in %s", (const void *)"ccid_usb.c", 328, (const void *)"OpenUSBByName", (const void *)infofile);

            return_value = STATUS_UNSUCCESSFUL;
          }

          else
          {
            return_value_list_size_8=list_size(ifdVendorID);
            return_value_list_size_9=list_size(ifdProductID);
            if(!(return_value_list_size_8 == return_value_list_size_9))
              tmp_if_expr_12 = (_Bool)1;

            else
            {
              return_value_list_size_10=list_size(ifdVendorID);
              return_value_list_size_11=list_size(ifdFriendlyName);
              tmp_if_expr_12 = return_value_list_size_10 != return_value_list_size_11 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_12)
            {
              if(!((1 & LogLevel) == 0))
                log_msg(3, "%s:%d:%s() Error parsing %s", (const void *)"ccid_usb.c", 334, (const void *)"OpenUSBByName", (const void *)infofile);

              return_value = STATUS_UNSUCCESSFUL;
            }

            else
            {
              cnt=libusb_get_device_list(ctx, &devs);
              if(!(cnt >= 0l))
              {
                if(!((1 & LogLevel) == 0))
                  log_msg(3, "%s:%d:%s() libusb_get_device_list() failed\n", (const void *)"ccid_usb.c", 345, (const void *)"OpenUSBByName");

                return_value = STATUS_UNSUCCESSFUL;
              }

              else
              {
                alias = (unsigned int)0;
                static signed int previous_reader_index = -1;
                do
                {
                  return_value_list_size_13=list_size(ifdVendorID);
                  if(alias >= return_value_list_size_13)
                    break;

                  unsigned int vendorID;
                  unsigned int productID;
                  char *friendlyName;
                  void *return_value_list_get_at_14;
                  return_value_list_get_at_14=list_get_at(ifdVendorID, alias);
                  unsigned long int return_value_strtoul_15;
                  return_value_strtoul_15=strtoul((const char *)return_value_list_get_at_14, (char ** restrict )(void *)0, 0);
                  vendorID = (unsigned int)return_value_strtoul_15;
                  void *return_value_list_get_at_16;
                  return_value_list_get_at_16=list_get_at(ifdProductID, alias);
                  unsigned long int return_value_strtoul_17;
                  return_value_strtoul_17=strtoul((const char *)return_value_list_get_at_16, (char ** restrict )(void *)0, 0);
                  productID = (unsigned int)return_value_strtoul_17;
                  void *return_value_list_get_at_18;
                  return_value_list_get_at_18=list_get_at(ifdFriendlyName, alias);
                  friendlyName = (char *)return_value_list_get_at_18;
                  if(device == ((char *)NULL) || productID == device_product && vendorID == device_vendor)
                  {
                    i = 0;
                    do
                    {
                      tmp_post_19 = i;
                      i = i + 1;
                      dev = devs[(signed long int)tmp_post_19];
                      if(dev == ((struct libusb_device *)NULL))
                        break;

                      struct libusb_device_descriptor desc;
                      struct libusb_config_descriptor *config_desc;
                      unsigned char bus_number;
                      bus_number=libusb_get_bus_number(dev);
                      unsigned char device_address;
                      device_address=libusb_get_device_address(dev);
                      if(device_addr == 0u && device_bus == 0u || (unsigned int)bus_number == device_bus && (unsigned int)device_address == device_addr)
                      {
                        if(!((4 & LogLevel) == 0))
                          log_msg(0, "%s:%d:%s() Try device: %d/%d", (const void *)"ccid_usb.c", 388, (const void *)"OpenUSBByName", bus_number, device_address);

                        signed int r;
                        r=libusb_get_device_descriptor(dev, &desc);
                        if(!(r >= 0))
                        {
                          if(!((2 & LogLevel) == 0))
                            log_msg(1, "%s:%d:%s() failed to get device descriptor for %d/%d", (const void *)"ccid_usb.c", 394, (const void *)"OpenUSBByName", bus_number, device_address);

                        }

                        else
                        {
                          if(!((4 & LogLevel) == 0))
                            log_msg(0, "%s:%d:%s() vid/pid : %04X/%04X", (const void *)"ccid_usb.c", 398, (const void *)"OpenUSBByName", desc.idVendor, desc.idProduct);

                          if((unsigned int)desc.idProduct == productID && (unsigned int)desc.idVendor == vendorID)
                          {
                            signed int already_used;
                            struct libusb_interface *usb_interface = (struct libusb_interface *)(void *)0;
                            signed int interface;
                            signed int num = 0;
                            const unsigned char *device_descriptor;
                            signed int readerID = (signed int)((vendorID << 16) + productID);
                            already_used = 0;
                            if(!((4 & LogLevel) == 0))
                              log_msg(0, "%s:%d:%s() Checking device: %d/%d", (const void *)"ccid_usb.c", 445, (const void *)"OpenUSBByName", bus_number, device_address);

                            r = 0;
                            for( ; !(r >= 16); r = r + 1)
                              if(!(usbDevice[(signed long int)r].dev_handle == ((struct libusb_device_handle *)NULL)))
                              {
                                if(usbDevice[(signed long int)r].bus_number == bus_number)
                                {
                                  if(usbDevice[(signed long int)r].device_address == device_address)
                                    already_used = 1;

                                }

                              }

                            if(!(already_used == 0))
                            {
                              if(!(previous_reader_index == -1))
                                tmp_if_expr_22 = usbDevice[(signed long int)previous_reader_index].dev_handle != ((struct libusb_device_handle *)NULL) ? (_Bool)1 : (_Bool)0;

                              else
                                tmp_if_expr_22 = (_Bool)0;
                              if(tmp_if_expr_22)
                                tmp_if_expr_23 = usbDevice[(signed long int)previous_reader_index].bus_number == bus_number ? (_Bool)1 : (_Bool)0;

                              else
                                tmp_if_expr_23 = (_Bool)0;
                              if(tmp_if_expr_23)
                                tmp_if_expr_24 = usbDevice[(signed long int)previous_reader_index].device_address == device_address ? (_Bool)1 : (_Bool)0;

                              else
                                tmp_if_expr_24 = (_Bool)0;
                              if(tmp_if_expr_24)
                                tmp_if_expr_25 = (signed int)usbDevice[(signed long int)previous_reader_index].ccid.bCurrentSlotIndex < (signed int)usbDevice[(signed long int)previous_reader_index].ccid.bMaxSlotIndex ? (_Bool)1 : (_Bool)0;

                              else
                                tmp_if_expr_25 = (_Bool)0;
                              if(tmp_if_expr_25)
                              {
                                usbDevice[(signed long int)reader_index] = usbDevice[(signed long int)previous_reader_index];
                                if(readerID == 0x08E63479)
                                  tmp_if_expr_21 = (_Bool)1;

                                else
                                {
                                  if(readerID == 0x08E63480)
                                    tmp_if_expr_20 = usbDevice[(signed long int)reader_index].ccid.IFD_bcdDevice < 0x0200 ? (_Bool)1 : (_Bool)0;

                                  else
                                    tmp_if_expr_20 = (_Bool)0;
                                  tmp_if_expr_21 = tmp_if_expr_20 ? (_Bool)1 : (_Bool)0;
                                }
                                if(tmp_if_expr_21)
                                {
                                  usbDevice[(signed long int)reader_index].ccid.arrayOfSupportedDataRates = SerialCustomDataRates;
                                  usbDevice[(signed long int)reader_index].ccid.dwMaxDataRate = (unsigned int)125000;
                                }

                                *usbDevice[(signed long int)reader_index].nb_opened_slots = *usbDevice[(signed long int)reader_index].nb_opened_slots + 1;
                                usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex = usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex + 1;
                                usbDevice[(signed long int)reader_index].ccid.dwSlotStatus = 615;
                                if(!((2 & LogLevel) == 0))
                                  log_msg(1, "%s:%d:%s() Opening slot: %d", (const void *)"ccid_usb.c", 485, (const void *)"OpenUSBByName", usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex);

                                usbDevice[(signed long int)reader_index].multislot_extension=Multi_CreateNextSlot(previous_reader_index);
                                goto end;
                              }

                              else
                                if(interface_number == -1)
                                {
                                  if(!((2 & LogLevel) == 0))
                                    log_msg(1, "%s:%d:%s() USB device %d/%d already in use. Checking next one.", (const void *)"ccid_usb.c", 500, (const void *)"OpenUSBByName", bus_number, device_address);

                                  continue;
                                }

                            }

                            if(!((4 & LogLevel) == 0))
                              log_msg(0, "%s:%d:%s() Trying to open USB bus/device: %d/%d", (const void *)"ccid_usb.c", 507, (const void *)"OpenUSBByName", bus_number, device_address);

                            r=libusb_open(dev, &dev_handle);
                            if(!(r >= 0))
                            {
                              if(!((1 & LogLevel) == 0))
                              {
                                return_value_libusb_error_name_26=libusb_error_name(r);
                                log_msg(3, "%s:%d:%s() Can't libusb_open(%d/%d): %s", (const void *)"ccid_usb.c", 513, (const void *)"OpenUSBByName", bus_number, device_address, return_value_libusb_error_name_26);
                              }

                              continue;
                            }

                            do
                            {

                            again:
                              ;
                              r=libusb_get_active_config_descriptor(dev, &config_desc);
                              if(!(r >= 0))
                              {
                                libusb_close(dev_handle);
                                if(!((1 & LogLevel) == 0))
                                {
                                  return_value_libusb_error_name_27=libusb_error_name(r);
                                  log_msg(3, "%s:%d:%s() Can't get config descriptor on %d/%d: %s", (const void *)"ccid_usb.c", 552, (const void *)"OpenUSBByName", bus_number, device_address, return_value_libusb_error_name_27);
                                }

                                goto __CPROVER_DUMP_L92;
                              }

                              usb_interface=get_ccid_usb_interface(config_desc, &num);
                              if(usb_interface == ((struct libusb_interface *)NULL))
                              {
                                libusb_close(dev_handle);
                                if(num == 0)
                                {
                                  if(!((1 & LogLevel) == 0))
                                    log_msg(3, "%s:%d:%s() Can't find a CCID interface on %d/%d", (const void *)"ccid_usb.c", 566, (const void *)"OpenUSBByName", bus_number, device_address);

                                }

                                interface_number = -1;
                                goto __CPROVER_DUMP_L92;
                              }

                              device_descriptor=get_ccid_device_descriptor(usb_interface);
                              if(device_descriptor == ((const unsigned char *)NULL))
                              {
                                libusb_close(dev_handle);
                                if(!((1 & LogLevel) == 0))
                                  log_msg(3, "%s:%d:%s() Unable to find the device descriptor for %d/%d", (const void *)"ccid_usb.c", 576, (const void *)"OpenUSBByName", bus_number, device_address);

                                return_value = STATUS_UNSUCCESSFUL;
                                goto end2;
                              }

                              interface = (signed int)usb_interface->altsetting->bInterfaceNumber;
                              if(!(interface_number >= 0) || interface == interface_number)
                                break;

                              if(!((2 & LogLevel) == 0))
                                log_msg(1, "%s:%d:%s() Found interface %d but expecting %d", (const void *)"ccid_usb.c", 587, (const void *)"OpenUSBByName", interface, interface_number);

                              if(!((2 & LogLevel) == 0))
                                log_msg(1, "%s:%d:%s() Wrong interface for USB device %d/%d. Checking next one.", (const void *)"ccid_usb.c", 589, (const void *)"OpenUSBByName", bus_number, device_address);

                              num = num + 1;
                            }
                            while((_Bool)1);
                            r=libusb_claim_interface(dev_handle, interface);
                            if(!(r >= 0))
                            {
                              libusb_close(dev_handle);
                              if(!((1 & LogLevel) == 0))
                              {
                                return_value_libusb_error_name_28=libusb_error_name(r);
                                log_msg(3, "%s:%d:%s() Can't claim interface %d/%d: %s", (const void *)"ccid_usb.c", 602, (const void *)"OpenUSBByName", bus_number, device_address, return_value_libusb_error_name_28);
                              }

                              claim_failed = 1;
                              interface_number = -1;
                              continue;
                            }

                            if(!((2 & LogLevel) == 0))
                              log_msg(1, "%s:%d:%s() Found Vendor/Product: %04X/%04X (%s)", (const void *)"ccid_usb.c", 609, (const void *)"OpenUSBByName", desc.idVendor, desc.idProduct, friendlyName);

                            if(!((2 & LogLevel) == 0))
                              log_msg(1, "%s:%d:%s() Using USB bus/device: %d/%d", (const void *)"ccid_usb.c", 611, (const void *)"OpenUSBByName", bus_number, device_address);

                            signed int return_value_ccid_check_firmware_29;
                            return_value_ccid_check_firmware_29=ccid_check_firmware(&desc);
                            if(!(return_value_ccid_check_firmware_29 == 0))
                            {
                              libusb_close(dev_handle);
                              return_value = STATUS_UNSUCCESSFUL;
                              goto end2;
                            }

                            get_end_points(config_desc, &usbDevice[(signed long int)reader_index], num);
                            usbDevice[(signed long int)reader_index].dev_handle = dev_handle;
                            usbDevice[(signed long int)reader_index].bus_number = bus_number;
                            usbDevice[(signed long int)reader_index].device_address = device_address;
                            usbDevice[(signed long int)reader_index].interface = interface;
                            usbDevice[(signed long int)reader_index].real_nb_opened_slots = 1;
                            usbDevice[(signed long int)reader_index].nb_opened_slots = &usbDevice[(signed long int)reader_index].real_nb_opened_slots;
                            usbDevice[(signed long int)reader_index].polling_transfer = (struct libusb_transfer *)(void *)0;
                            usbDevice[(signed long int)reader_index].ccid.real_bSeq = (unsigned char)0;
                            usbDevice[(signed long int)reader_index].ccid.pbSeq = &usbDevice[(signed long int)reader_index].ccid.real_bSeq;
                            usbDevice[(signed long int)reader_index].ccid.readerID = ((signed int)desc.idVendor << 16) + (signed int)desc.idProduct;
                            usbDevice[(signed long int)reader_index].ccid.dwFeatures = (signed int)(unsigned int)(((((signed int)device_descriptor[(signed long int)(40 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(40 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(40 + 1)] << 8) + (signed int)device_descriptor[(signed long int)40]);
                            usbDevice[(signed long int)reader_index].ccid.wLcdLayout = (unsigned int)(((signed int)device_descriptor[(signed long int)51] << 8) + (signed int)device_descriptor[(signed long int)50]);
                            usbDevice[(signed long int)reader_index].ccid.bPINSupport = (char)device_descriptor[(signed long int)52];
                            usbDevice[(signed long int)reader_index].ccid.dwMaxCCIDMessageLength = (unsigned int)(((((signed int)device_descriptor[(signed long int)(44 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(44 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(44 + 1)] << 8) + (signed int)device_descriptor[(signed long int)44]);
                            usbDevice[(signed long int)reader_index].ccid.dwMaxIFSD = (signed int)(unsigned int)(((((signed int)device_descriptor[(signed long int)(28 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(28 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(28 + 1)] << 8) + (signed int)device_descriptor[(signed long int)28]);
                            usbDevice[(signed long int)reader_index].ccid.dwDefaultClock = (signed int)(unsigned int)(((((signed int)device_descriptor[(signed long int)(10 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(10 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(10 + 1)] << 8) + (signed int)device_descriptor[(signed long int)10]);
                            usbDevice[(signed long int)reader_index].ccid.dwMaxDataRate = (unsigned int)(((((signed int)device_descriptor[(signed long int)(23 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(23 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(23 + 1)] << 8) + (signed int)device_descriptor[(signed long int)23]);
                            usbDevice[(signed long int)reader_index].ccid.bMaxSlotIndex = (char)device_descriptor[(signed long int)4];
                            usbDevice[(signed long int)reader_index].ccid.bCurrentSlotIndex = (char)0;
                            usbDevice[(signed long int)reader_index].ccid.readTimeout = (unsigned int)(3 * 1000);
                            if(!(device_descriptor[27l] == 0))
                              usbDevice[(signed long int)reader_index].ccid.arrayOfSupportedDataRates=get_data_rates(reader_index, config_desc, num);

                            else
                            {
                              usbDevice[(signed long int)reader_index].ccid.arrayOfSupportedDataRates = (unsigned int *)(void *)0;
                              if(!((2 & LogLevel) == 0))
                                log_msg(1, "%s:%d:%s() bNumDataRatesSupported is 0", (const void *)"ccid_usb.c", 663, (const void *)"OpenUSBByName");

                            }
                            usbDevice[(signed long int)reader_index].ccid.bInterfaceProtocol = (signed int)usb_interface->altsetting->bInterfaceProtocol;
                            usbDevice[(signed long int)reader_index].ccid.bNumEndpoints = (signed int)usb_interface->altsetting->bNumEndpoints;
                            usbDevice[(signed long int)reader_index].ccid.dwSlotStatus = 615;
                            usbDevice[(signed long int)reader_index].ccid.bVoltageSupport = (signed int)device_descriptor[(signed long int)5];
                            usbDevice[(signed long int)reader_index].ccid.sIFD_serial_number = (char *)(void *)0;
                            usbDevice[(signed long int)reader_index].ccid.gemalto_firmware_features = (struct GEMALTO_FIRMWARE_FEATURES *)(void *)0;
                            if(!(desc.iSerialNumber == 0))
                            {
                              unsigned char serial[128l];
                              signed int ret;
                              ret=libusb_get_string_descriptor_ascii(dev_handle, desc.iSerialNumber, serial, (signed int)sizeof(unsigned char [128l]) /*128ul*/ );
                              if(ret >= 1)
                                usbDevice[(signed long int)reader_index].ccid.sIFD_serial_number=strdup((char *)serial);

                            }

                            usbDevice[(signed long int)reader_index].ccid.sIFD_iManufacturer = (char *)(void *)0;
                            if(!(desc.iManufacturer == 0))
                            {
                              unsigned char iManufacturer[128l];
                              signed int OpenUSBByName__1__12__1__1__3__12__ret;
                              OpenUSBByName__1__12__1__1__3__12__ret=libusb_get_string_descriptor_ascii(dev_handle, desc.iManufacturer, iManufacturer, (signed int)sizeof(unsigned char [128l]) /*128ul*/ );
                              if(OpenUSBByName__1__12__1__1__3__12__ret >= 1)
                                usbDevice[(signed long int)reader_index].ccid.sIFD_iManufacturer=strdup((char *)iManufacturer);

                            }

                            usbDevice[(signed long int)reader_index].ccid.IFD_bcdDevice = (signed int)desc.bcdDevice;
                            if(!(usbDevice[(signed long int)reader_index].ccid.bMaxSlotIndex == 0))
                              usbDevice[(signed long int)reader_index].multislot_extension=Multi_CreateFirstSlot((signed int)reader_index);

                            else
                              usbDevice[(signed long int)reader_index].multislot_extension = (struct usbDevice_MultiSlot_Extension *)(void *)0;
                            goto end;
                          }

                        }
                      }


                    __CPROVER_DUMP_L92:
                      ;
                    }
                    while((_Bool)1);
                  }

                  alias = alias + 1u;
                }
                while((_Bool)1);

              end:
                ;
                if(usbDevice[(signed long int)reader_index].dev_handle == ((struct libusb_device_handle *)NULL))
                {
                  libusb_free_device_list(devs, 1);
                  if(!(claim_failed == 0))
                    return (enum anonymous_2)STATUS_COMM_ERROR;

                  if(!((2 & LogLevel) == 0))
                    log_msg(1, "%s:%d:%s() Device not found?", (const void *)"ccid_usb.c", 729, (const void *)"OpenUSBByName");

                  return (enum anonymous_2)STATUS_NO_SUCH_DEVICE;
                }

                previous_reader_index = (signed int)reader_index;

              end2:
                ;
                libusb_free_device_list(devs, 1);
              }
            }
          }
        }
      }

    end1:
      ;
      bundleRelease(&plist);
      return (enum anonymous_2)return_value;
    }
  }
}

// ReadUSB
// file ccid_usb.c line 791
enum anonymous_2 ReadUSB(unsigned int reader_index, unsigned int *length, unsigned char *buffer)
{
  signed int rv;
  signed int actual_length;
  char debug_header[11l] = { '<', '-', ' ', '1', '2', '1', '2', '3', '4', ' ', 0 };
  struct anonymous_3 *ccid_descriptor;
  ccid_descriptor=get_ccid_descriptor(reader_index);
  signed int duplicate_frame = 0;
  const char *return_value_libusb_error_name_1;
  do
  {

  read_again:
    ;
    snprintf(debug_header, sizeof(char [11l]) /*11ul*/ , "<- %06X ", (signed int)reader_index);
    rv=libusb_bulk_transfer(usbDevice[(signed long int)reader_index].dev_handle, (unsigned char)usbDevice[(signed long int)reader_index].bulk_in, buffer, (signed int)*length, &actual_length, usbDevice[(signed long int)reader_index].ccid.readTimeout);
    if(!(rv >= 0))
    {
      *length = (unsigned int)0;
      if(!((1 & LogLevel) == 0))
      {
        return_value_libusb_error_name_1=libusb_error_name(rv);
        log_msg(3, "%s:%d:%s() read failed (%d/%d): %d %s", (const void *)"ccid_usb.c", 813, (const void *)"ReadUSB", usbDevice[(signed long int)reader_index].bus_number, usbDevice[(signed long int)reader_index].device_address, rv, return_value_libusb_error_name_1);
      }

      if(rv == -4)
        return (enum anonymous_2)STATUS_NO_SUCH_DEVICE;

      return (enum anonymous_2)STATUS_UNSUCCESSFUL;
    }

    *length = (unsigned int)actual_length;
    if(!((4 & LogLevel) == 0))
      log_xxd(0, debug_header, buffer, (const signed int)*length);

    if(!(*length >= 6u))
      break;

    if((signed int)buffer[6l] >= (signed int)*ccid_descriptor->pbSeq + -1)
      break;

    duplicate_frame = duplicate_frame + 1;
    if(duplicate_frame >= 11)
    {
      if(!((1 & LogLevel) == 0))
        log_msg(3, "%s:%d:%s() Too many duplicate frame detected", (const void *)"ccid_usb.c", 832, (const void *)"ReadUSB");

      return (enum anonymous_2)STATUS_UNSUCCESSFUL;
    }

    if(!((2 & LogLevel) == 0))
      log_msg(1, "%s:%d:%s() Duplicate frame detected", (const void *)"ccid_usb.c", 835, (const void *)"ReadUSB");

  }
  while((_Bool)1);
  return (enum anonymous_2)STATUS_SUCCESS;
}

// WriteUSB
// file ccid_usb.c line 754
enum anonymous_2 WriteUSB(unsigned int reader_index, unsigned int length, unsigned char *buffer)
{
  signed int rv;
  signed int actual_length;
  char debug_header[11l] = { '-', '>', ' ', '1', '2', '1', '2', '3', '4', ' ', 0 };
  snprintf(debug_header, sizeof(char [11l]) /*11ul*/ , "-> %06X ", (signed int)reader_index);
  if(!((4 & LogLevel) == 0))
    log_xxd(0, debug_header, buffer, (const signed int)length);

  rv=libusb_bulk_transfer(usbDevice[(signed long int)reader_index].dev_handle, (unsigned char)usbDevice[(signed long int)reader_index].bulk_out, buffer, (signed int)length, &actual_length, (unsigned int)(5 * 1000));
  const char *return_value_libusb_error_name_1;
  if(!(rv >= 0))
  {
    if(!((1 & LogLevel) == 0))
    {
      return_value_libusb_error_name_1=libusb_error_name(rv);
      log_msg(3, "%s:%d:%s() write failed (%d/%d): %d %s", (const void *)"ccid_usb.c", 774, (const void *)"WriteUSB", usbDevice[(signed long int)reader_index].bus_number, usbDevice[(signed long int)reader_index].device_address, rv, return_value_libusb_error_name_1);
    }

    if(rv == -4)
      return (enum anonymous_2)STATUS_NO_SUCH_DEVICE;

    return (enum anonymous_2)STATUS_UNSUCCESSFUL;
  }

  return (enum anonymous_2)STATUS_SUCCESS;
}

// bulk_transfer_cb
// file ccid_usb.c line 1201
static void bulk_transfer_cb(struct libusb_transfer *transfer)
{
  signed int *completed = (signed int *)transfer->user_data;
  *completed = 1;
}

// bundleParse
// file parser.h line 50
signed int bundleParse(const char *fileName, struct anonymous_1 *l)
{
  struct _IO_FILE *file = (struct _IO_FILE *)(void *)0;
  signed int r;
  file=fopen(fileName, "r");
  if(file == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    log_msg(3, "%s:%d:%s() Could not open bundle file %s: %s", (const void *)"tokenparser.l", 213, (const void *)"bundleParse", fileName, return_value_strerror_2);
    return 1;
  }

  r=list_init(l);
  (void)r;
  ListKeys = l;
  yyin = file;
  signed int return_value_feof_3;
  do
  {
    yylex();
    return_value_feof_3=feof(file);
  }
  while(return_value_feof_3 == 0);
  yylex_destroy();
  fclose(file);
  return 0;
}

// bundleRelease
// file parser.h line 51
void bundleRelease(struct anonymous_1 *l)
{
  unsigned int i = (unsigned int)0;
  unsigned int return_value_list_size_1;
  unsigned int return_value_list_size_3;
  void *return_value_list_get_at_4;
  do
  {
    return_value_list_size_1=list_size(l);
    if(i >= return_value_list_size_1)
      break;

    struct bundleElt *elt;
    unsigned int j;
    void *return_value_list_get_at_2;
    return_value_list_get_at_2=list_get_at(l, i);
    elt = (struct bundleElt *)return_value_list_get_at_2;
    j = (unsigned int)0;
    do
    {
      return_value_list_size_3=list_size(&elt->values);
      if(j >= return_value_list_size_3)
        break;

      return_value_list_get_at_4=list_get_at(&elt->values, j);
      free(return_value_list_get_at_4);
      j = j + 1u;
    }
    while((_Bool)1);
    list_destroy(&elt->values);
    free((void *)elt->key);
    free((void *)elt);
    i = i + 1u;
  }
  while((_Bool)1);
  list_destroy(l);
}

// ccid_check_firmware
// file ccid_usb.c line 1059
signed int ccid_check_firmware(struct libusb_device_descriptor *desc)
{
  unsigned int i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 17ul); i = i + 1u)
    if((signed int)desc->idVendor == Bogus_firmwares[(signed long int)i].vendor)
    {
      if((signed int)desc->idProduct == Bogus_firmwares[(signed long int)i].product)
      {
        if(!((signed int)desc->bcdDevice >= Bogus_firmwares[(signed long int)i].firmware))
        {
          if(!((4 & DriverOptions) == 0))
          {
            if(!((2 & LogLevel) == 0))
              log_msg(1, "%s:%d:%s() Firmware (%X.%02X) is bogus! but you choosed to use it", (const void *)"ccid_usb.c", 1077, (const void *)"ccid_check_firmware", (signed int)desc->bcdDevice >> 8, (signed int)desc->bcdDevice & 0xFF);

            return 0;
          }

          else
          {
            if(!((1 & LogLevel) == 0))
              log_msg(3, "%s:%d:%s() Firmware (%X.%02X) is bogus! Upgrade the reader firmware or get a new reader.", (const void *)"ccid_usb.c", 1083, (const void *)"ccid_check_firmware", (signed int)desc->bcdDevice >> 8, (signed int)desc->bcdDevice & 0xFF);

            return 1;
          }
        }

      }

    }

  return 0;
}

// ccid_parse_interface_descriptor
// file parse.c line 245
static signed int ccid_parse_interface_descriptor(struct libusb_device_handle *handle, struct libusb_device_descriptor desc, struct libusb_config_descriptor *config_desc, signed int num, struct libusb_interface *usb_interface)
{
  struct libusb_interface_descriptor *usb_interface_descriptor;
  const unsigned char *device_descriptor;
  unsigned char buffer[(signed long int)(sizeof(signed int) * 256) /*1024l*/ ];
  signed int r;
  printf(" idVendor: 0x%04X\n", desc.idVendor);
  r=libusb_get_string_descriptor_ascii(handle, desc.iManufacturer, buffer, (signed int)sizeof(unsigned char [1024l]) /*1024ul*/ );
  if(!(r >= 0))
  {
    printf("  Can't get iManufacturer string\n");
    unsigned int return_value_getuid_1;
    return_value_getuid_1=getuid();
    if(!(return_value_getuid_1 == 0u))
    {
      fprintf(stderr, "\033[01;31mPlease, restart the command as root\n\n\033[0m");
      return 1;
    }

  }

  else
    printf("  iManufacturer: %s\n", (const void *)buffer);
  printf(" idProduct: 0x%04X\n", desc.idProduct);
  r=libusb_get_string_descriptor_ascii(handle, desc.iProduct, buffer, (signed int)sizeof(unsigned char [1024l]) /*1024ul*/ );
  if(!(r >= 0))
    printf("  Can't get iProduct string\n");

  else
    printf("  iProduct: %s\n", (const void *)buffer);
  printf(" bcdDevice: %X.%02X (firmware release?)\n", (signed int)desc.bcdDevice >> 8, (signed int)desc.bcdDevice & 0xFF);
  struct libusb_interface *return_value_get_ccid_usb_interface_2;
  return_value_get_ccid_usb_interface_2=get_ccid_usb_interface(config_desc, &num);
  usb_interface_descriptor = return_value_get_ccid_usb_interface_2->altsetting;
  printf(" bLength: %d\n", usb_interface_descriptor->bLength);
  printf(" bDescriptorType: %d\n", usb_interface_descriptor->bDescriptorType);
  printf(" bInterfaceNumber: %d\n", usb_interface_descriptor->bInterfaceNumber);
  printf(" bAlternateSetting: %d\n", usb_interface_descriptor->bAlternateSetting);
  printf(" bNumEndpoints: %d\n", usb_interface_descriptor->bNumEndpoints);
  switch((signed int)usb_interface_descriptor->bNumEndpoints)
  {
    case 0:
    {
      printf("  Control only\n");
      break;
    }
    case 1:
    {
      printf("  Interrupt-IN\n");
      break;
    }
    case 2:
    {
      printf("  bulk-IN and bulk-OUT\n");
      break;
    }
    case 3:
    {
      printf("  bulk-IN, bulk-OUT and Interrupt-IN\n");
      break;
    }
    default:
      printf("  UNKNOWN value\n");
  }
  printf(" bInterfaceClass: 0x%02X", usb_interface_descriptor->bInterfaceClass);
  if((signed int)usb_interface_descriptor->bInterfaceClass == 0x0b)
    printf(" [Chip Card Interface Device Class (CCID)]\n");

  else
  {
    printf("\n  NOT A CCID DEVICE\n");
    if(!((signed int)usb_interface_descriptor->bInterfaceClass == 0xFF))
      return 1;

    else
      printf("  Class is 0xFF (proprietary)\n");
  }
  printf(" bInterfaceSubClass: %d\n", usb_interface_descriptor->bInterfaceSubClass);
  if(!(usb_interface_descriptor->bInterfaceSubClass == 0))
    printf("  UNSUPPORTED SubClass\n");

  printf(" bInterfaceProtocol: %d\n", usb_interface_descriptor->bInterfaceProtocol);
  switch((signed int)usb_interface_descriptor->bInterfaceProtocol)
  {
    case 0:
    {
      printf("  bulk transfer, optional interrupt-IN (CCID)\n");
      break;
    }
    case 1:
    {
      printf("  ICCD Version A, Control transfers, (no interrupt-IN)\n");
      break;
    }
    case 2:
    {
      printf("  ICCD Version B, Control transfers, (optional interrupt-IN)\n");
      break;
    }
    default:
      printf("  UNSUPPORTED InterfaceProtocol\n");
  }
  r=libusb_get_string_descriptor_ascii(handle, usb_interface_descriptor->iInterface, buffer, (signed int)sizeof(unsigned char [1024l]) /*1024ul*/ );
  if(!(r >= 0))
    printf(" Can't get iInterface string\n");

  else
    printf(" iInterface: %s\n", (const void *)buffer);
  device_descriptor=get_ccid_device_descriptor(usb_interface);
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  if(device_descriptor == ((const unsigned char *)NULL))
  {
    printf("\n  NOT A CCID DEVICE\n");
    return 1;
  }

  else
  {
    printf(" CCID Class Descriptor\n");
    printf("  bLength: 0x%02X\n", device_descriptor[(signed long int)0]);
    if(!((signed int)*device_descriptor == 0x36))
    {
      printf("   UNSUPPORTED bLength\n");
      return 1;
    }

    else
    {
      printf("  bDescriptorType: 0x%02X\n", device_descriptor[(signed long int)1]);
      if(!((signed int)device_descriptor[1l] == 0x21))
      {
        if((signed int)device_descriptor[1l] == 0xFF)
        {
          printf("   PROPRIETARY bDescriptorType\n");
          goto __CPROVER_DUMP_L26;
        }

        printf("   UNSUPPORTED bDescriptorType\n");
        return 1;
      }

      else
      {

      __CPROVER_DUMP_L26:
        ;
        printf("  bcdCCID: %X.%02X\n", device_descriptor[(signed long int)3], device_descriptor[(signed long int)2]);
        printf("  bMaxSlotIndex: 0x%02X\n", device_descriptor[(signed long int)4]);
        printf("  bVoltageSupport: 0x%02X\n", device_descriptor[(signed long int)5]);
        if(!((0x01 & (signed int)device_descriptor[5l]) == 0))
          printf("   5.0V\n");

        if(!((0x02 & (signed int)device_descriptor[5l]) == 0))
          printf("   3.0V\n");

        if(!((0x04 & (signed int)device_descriptor[5l]) == 0))
          printf("   1.8V\n");

        printf("  dwProtocols: 0x%02X%02X 0x%02X%02X\n", device_descriptor[(signed long int)9], device_descriptor[(signed long int)8], device_descriptor[(signed long int)7], device_descriptor[(signed long int)6]);
        if(!((0x01 & (signed int)device_descriptor[6l]) == 0))
          printf("   T=0\n");

        if(!((0x02 & (signed int)device_descriptor[6l]) == 0))
          printf("   T=1\n");

        printf("  dwDefaultClock: %.3f MHz\n", (double)(unsigned int)(((((signed int)device_descriptor[(signed long int)(10 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(10 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(10 + 1)] << 8) + (signed int)device_descriptor[(signed long int)10]) / 1000.0);
        printf("  dwMaximumClock: %.3f MHz\n", (double)(unsigned int)(((((signed int)device_descriptor[(signed long int)(14 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(14 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(14 + 1)] << 8) + (signed int)device_descriptor[(signed long int)14]) / 1000.0);
        printf("  bNumClockSupported: %d%s\n", device_descriptor[(signed long int)18], device_descriptor[(signed long int)18] != 0 ? "" : " (will use whatever is returned)");
        signed int n;
        n=libusb_control_transfer(handle, (unsigned char)0xA1, (unsigned char)0x02, (unsigned short int)0x00, (unsigned short int)usb_interface_descriptor->bInterfaceNumber, buffer, (unsigned short int)sizeof(unsigned char [1024l]) /*1024ul*/ , (unsigned int)(2 * 1000));
        if(!(n >= 1))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          char *return_value_strerror_4;
          return_value_strerror_4=strerror(*return_value___errno_location_3);
          printf("   IFD does not support GET CLOCK FREQUENCIES request: %s\n", return_value_strerror_4);
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          if(*return_value___errno_location_5 == 16)
          {
            fprintf(stderr, "\033[01;31m   Please, stop pcscd and retry\n\n\033[0m");
            return 1;
          }

        }

        else
          if(!(n % 4 == 0))
            printf("   wrong size for GET CLOCK FREQUENCIES: %d\n", n);

          else
          {
            signed int i;
            if(!(n == 4 * (signed int)device_descriptor[18l]))
            {
              if(!(device_descriptor[18l] == 0))
              {
                printf("   Got %d clock frequencies but was expecting %d\n", n / 4, device_descriptor[(signed long int)18]);
                if(!(4 * (signed int)device_descriptor[18l] >= n))
                  n = (signed int)device_descriptor[(signed long int)18] * 4;

              }

            }

            i = 0;
            for( ; !(i >= n); i = i + 4)
              printf("   Support %d kHz\n", (unsigned int)(((((signed int)buffer[(signed long int)(i + 3)] << 8) + (signed int)buffer[(signed long int)(i + 2)] << 8) + (signed int)buffer[(signed long int)(i + 1)] << 8) + (signed int)buffer[(signed long int)i]));
          }
        printf("  dwDataRate: %d bps\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(19 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(19 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(19 + 1)] << 8) + (signed int)device_descriptor[(signed long int)19]));
        printf("  dwMaxDataRate: %d bps\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(23 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(23 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(23 + 1)] << 8) + (signed int)device_descriptor[(signed long int)23]));
        printf("  bNumDataRatesSupported: %d%s\n", device_descriptor[(signed long int)27], device_descriptor[(signed long int)27] != 0 ? "" : " (will use whatever is returned)");
        signed int ccid_parse_interface_descriptor__1__9__n;
        ccid_parse_interface_descriptor__1__9__n=libusb_control_transfer(handle, (unsigned char)0xA1, (unsigned char)0x03, (unsigned short int)0x00, (unsigned short int)usb_interface_descriptor->bInterfaceNumber, buffer, (unsigned short int)sizeof(unsigned char [1024l]) /*1024ul*/ , (unsigned int)(2 * 1000));
        if(!(ccid_parse_interface_descriptor__1__9__n >= 1))
        {
          return_value___errno_location_6=__errno_location();
          return_value_strerror_7=strerror(*return_value___errno_location_6);
          printf("   IFD does not support GET_DATA_RATES request: %s\n", return_value_strerror_7);
        }

        else
          if(!(ccid_parse_interface_descriptor__1__9__n % 4 == 0))
            printf("   wrong size for GET_DATA_RATES: %d\n", ccid_parse_interface_descriptor__1__9__n);

          else
          {
            signed int ccid_parse_interface_descriptor__1__9__1__i;
            if(!(ccid_parse_interface_descriptor__1__9__n == 4 * (signed int)device_descriptor[27l]))
            {
              if(!(device_descriptor[27l] == 0))
              {
                printf("   Got %d data rates but was expecting %d\n", ccid_parse_interface_descriptor__1__9__n / 4, device_descriptor[(signed long int)27]);
                if(!(4 * (signed int)device_descriptor[27l] >= ccid_parse_interface_descriptor__1__9__n))
                  ccid_parse_interface_descriptor__1__9__n = (signed int)device_descriptor[(signed long int)27] * 4;

              }

            }

            ccid_parse_interface_descriptor__1__9__1__i = 0;
            for( ; !(ccid_parse_interface_descriptor__1__9__1__i >= ccid_parse_interface_descriptor__1__9__n); ccid_parse_interface_descriptor__1__9__1__i = ccid_parse_interface_descriptor__1__9__1__i + 4)
              printf("   Support %d bps\n", (unsigned int)(((((signed int)buffer[(signed long int)(ccid_parse_interface_descriptor__1__9__1__i + 3)] << 8) + (signed int)buffer[(signed long int)(ccid_parse_interface_descriptor__1__9__1__i + 2)] << 8) + (signed int)buffer[(signed long int)(ccid_parse_interface_descriptor__1__9__1__i + 1)] << 8) + (signed int)buffer[(signed long int)ccid_parse_interface_descriptor__1__9__1__i]));
          }
        printf("  dwMaxIFSD: %d\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(28 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(28 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(28 + 1)] << 8) + (signed int)device_descriptor[(signed long int)28]));
        printf("  dwSynchProtocols: 0x%08X\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(32 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(32 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(32 + 1)] << 8) + (signed int)device_descriptor[(signed long int)32]));
        if(!((0x01 & (signed int)device_descriptor[32l]) == 0))
          printf("   2-wire protocol\n");

        if(!((0x02 & (signed int)device_descriptor[32l]) == 0))
          printf("   3-wire protocol\n");

        if(!((0x04 & (signed int)device_descriptor[32l]) == 0))
          printf("   I2C protocol\n");

        printf("  dwMechanical: 0x%08X\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(36 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(36 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(36 + 1)] << 8) + (signed int)device_descriptor[(signed long int)36]));
        if((signed int)device_descriptor[36l] == 0)
          printf("   No special characteristics\n");

        if(!((0x01 & (signed int)device_descriptor[36l]) == 0))
          printf("   Card accept mechanism\n");

        if(!((0x02 & (signed int)device_descriptor[36l]) == 0))
          printf("   Card ejection mechanism\n");

        if(!((0x04 & (signed int)device_descriptor[36l]) == 0))
          printf("   Card capture mechanism\n");

        if(!((0x08 & (signed int)device_descriptor[36l]) == 0))
          printf("   Card lock/unlock mechanism\n");

        printf("  dwFeatures: 0x%08X\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(40 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(40 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(40 + 1)] << 8) + (signed int)device_descriptor[(signed long int)40]));
        if((unsigned int)((((signed int)device_descriptor[43l] << 8) + (signed int)device_descriptor[42l] << 8) + (signed int)device_descriptor[41l] << 8) + (unsigned int)(signed int)device_descriptor[40l] == 0u)
          printf("   No special characteristics\n");

        if(!((0x02 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....02 Automatic parameter configuration based on ATR data\n");

        if(!((0x04 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....04 Automatic activation of ICC on inserting\n");

        if(!((0x08 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....08 Automatic ICC voltage selection\n");

        if(!((0x10 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....10 Automatic ICC clock frequency change according to parameters\n");

        if(!((0x20 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....20 Automatic baud rate change according to frequency and Fi, Di params\n");

        if(!((0x40 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....40 Automatic parameters negotiation made by the CCID\n");

        if(!((0x80 & (signed int)device_descriptor[40l]) == 0))
          printf("   ....80 Automatic PPS made by the CCID\n");

        if(!((0x01 & (signed int)device_descriptor[41l]) == 0))
          printf("   ..01.. CCID can set ICC in clock stop mode\n");

        if(!((0x02 & (signed int)device_descriptor[41l]) == 0))
          printf("   ..02.. NAD value other than 00 accepted (T=1)\n");

        if(!((0x04 & (signed int)device_descriptor[41l]) == 0))
          printf("   ..04.. Automatic IFSD exchange as first exchange (T=1)\n");

        if(!((0x08 & (signed int)device_descriptor[41l]) == 0))
          printf("   ..08.. Unknown (ICCD?)\n");

        switch((signed int)device_descriptor[(signed long int)42] & 0x07)
        {
          case 0x00:
          {
            printf("   00.... Character level exchange\n");
            break;
          }
          case 0x01:
          {
            printf("   01.... TPDU level exchange\n");
            break;
          }
          case 0x02:
          {
            printf("   02.... Short APDU level exchange\n");
            break;
          }
          case 0x04:
            printf("   04.... Short and Extended APDU level exchange\n");
        }
        if(!((0x10 & (signed int)device_descriptor[42l]) == 0))
          printf("   10.... USB Wake up signaling supported on card insertion and removal\n");

        printf("  dwMaxCCIDMessageLength: %d bytes\n", (unsigned int)(((((signed int)device_descriptor[(signed long int)(44 + 3)] << 8) + (signed int)device_descriptor[(signed long int)(44 + 2)] << 8) + (signed int)device_descriptor[(signed long int)(44 + 1)] << 8) + (signed int)device_descriptor[(signed long int)44]));
        printf("  bClassGetResponse: 0x%02X\n", device_descriptor[(signed long int)48]);
        if((signed int)device_descriptor[48l] == 0xFF)
          printf("   echoes the APDU class\n");

        printf("  bClassEnvelope: 0x%02X\n", device_descriptor[(signed long int)49]);
        if((signed int)device_descriptor[49l] == 0xFF)
          printf("   echoes the APDU class\n");

        printf("  wLcdLayout: 0x%04X\n", ((signed int)device_descriptor[(signed long int)51] << 8) + (signed int)device_descriptor[(signed long int)50]);
        if(!(device_descriptor[51l] == 0))
          printf("   %2d lines\n", device_descriptor[(signed long int)51]);

        if(!(device_descriptor[50l] == 0))
          printf("   %2d characters per line\n", device_descriptor[(signed long int)50]);

        printf("  bPINSupport: 0x%02X\n", device_descriptor[(signed long int)52]);
        if(!((0x01 & (signed int)device_descriptor[52l]) == 0))
          printf("   PIN Verification supported\n");

        if(!((0x02 & (signed int)device_descriptor[52l]) == 0))
          printf("   PIN Modification supported\n");

        printf("  bMaxCCIDBusySlots: %d\n", device_descriptor[(signed long int)53]);
        return 0;
      }
    }
  }
}

// close_libusb_if_needed
// file ccid_usb.c line 173
static void close_libusb_if_needed(void)
{
  signed int i;
  signed int to_exit = 1;
  i = 0;
  for( ; !(i >= 16); i = i + 1)
    if(!(usbDevice[(signed long int)i].dev_handle == ((struct libusb_device_handle *)NULL)))
      to_exit = 0;

  if(!(to_exit == 0))
  {
    if(!((2 & LogLevel) == 0))
      log_msg(1, "%s:%d:%s() libusb_exit", (const void *)"ccid_usb.c", 186, (const void *)"close_libusb_if_needed");

    libusb_exit(ctx);
    ctx = (struct libusb_context *)(void *)0;
  }

}

// eval_key
// file tokenparser.l line 78
static void eval_key(char *pcToken, struct anonymous_1 *list_key)
{
  struct bundleElt *elt;
  signed int r;
  unsigned long int len;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct bundleElt) /*128ul*/ );
  elt = (struct bundleElt *)return_value_malloc_1;
  len = (unsigned long int)0;
  for( ; !((signed int)pcToken[5l + (signed long int)len] == 60); len = len + 1ul)
    ;
  len = len + 1ul;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(len);
  elt->key = (char *)return_value_malloc_2;
  memcpy((void *)elt->key, (const void *)&pcToken[(signed long int)5], len - (unsigned long int)1);
  elt->key[(signed long int)(len - (unsigned long int)1)] = (char)0;
  r=list_init(&elt->values);
  (void)r;
  list_append(list_key, (const void *)elt);
  ListValues = &elt->values;
}

// eval_value
// file tokenparser.l line 111
static void eval_value(char *pcToken, struct anonymous_1 *list_values)
{
  signed int r;
  unsigned long int len;
  char *value;
  char *amp;
  len = (unsigned long int)0;
  for( ; !((signed int)pcToken[8l + (signed long int)len] == 60); len = len + 1ul)
    ;
  len = len + 1ul;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(len);
  value = (char *)return_value_malloc_1;
  memcpy((void *)value, (const void *)&pcToken[(signed long int)8], len - (unsigned long int)1);
  value[(signed long int)(len - (unsigned long int)1)] = (char)0;
  amp = value;
  do
  {
    amp=strstr(amp, "&amp;");
    if(amp == ((char *)NULL))
      break;

    char *p = amp + (signed long int)1;
    for( ; !(p[4l] == 0); p = p + 1l)
      *p = p[(signed long int)4];
    *p = (char)0;
    amp = amp + 1l;
  }
  while((_Bool)1);
  r=list_append(list_values, (const void *)value);
  (void)r;
}

// get_ccid_descriptor
// file ccid_usb.c line 925
struct anonymous_3 * get_ccid_descriptor(unsigned int reader_index)
{
  return &usbDevice[(signed long int)reader_index].ccid;
}

// get_ccid_device_descriptor
// file ccid_usb.h line 38
const unsigned char * get_ccid_device_descriptor(struct libusb_interface *usb_interface)
{
  unsigned char last_endpoint;
  if(usb_interface->altsetting->extra_length == 54)
    return usb_interface->altsetting->extra;

  else
    if(!(usb_interface->altsetting->extra_length == 0))
    {
      if(!((1 & LogLevel) == 0))
        log_msg(3, "%s:%d:%s() Extra field has a wrong length: %d", (const void *)"ccid_usb.c", 951, (const void *)"get_ccid_device_descriptor", usb_interface->altsetting->extra_length);

      return (const unsigned char *)(void *)0;
    }

    else
    {
      last_endpoint = (unsigned char)((signed int)usb_interface->altsetting->bNumEndpoints - 1);
      if(!(usb_interface->altsetting->endpoint == ((struct libusb_endpoint_descriptor *)NULL)))
      {
        if(!((usb_interface->altsetting->endpoint + (signed long int)last_endpoint)->extra_length == 54))
          goto __CPROVER_DUMP_L4;

        return (usb_interface->altsetting->endpoint + (signed long int)last_endpoint)->extra;
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        return (const unsigned char *)(void *)0;
      }
    }
}

// get_ccid_usb_interface
// file ccid_usb.h line 35
struct libusb_interface * get_ccid_usb_interface(struct libusb_config_descriptor *desc, signed int *num)
{
  struct libusb_interface *usb_interface = (struct libusb_interface *)(void *)0;
  signed int i = *num;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  for( ; !(i >= (signed int)desc->bNumInterfaces); i = i + 1)
  {
    if((signed int)(desc->interface + (signed long int)i)->altsetting->bInterfaceClass == 0xb)
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if((signed int)(desc->interface + (signed long int)i)->altsetting->bInterfaceClass == 0xff)
        tmp_if_expr_1 = 54 == (desc->interface + (signed long int)i)->altsetting->extra_length ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      usb_interface = &desc->interface[(signed long int)i];
      *num = i;
      break;
    }

  }
  return usb_interface;
}

// get_data_rates
// file ccid_usb.c line 1099
static unsigned int * get_data_rates(unsigned int reader_index, struct libusb_config_descriptor *desc, signed int num)
{
  signed int n;
  signed int i;
  signed int len;
  unsigned char buffer[(signed long int)(sizeof(signed int) * 256) /*1024l*/ ];
  unsigned int *uint_array;
  n=ControlUSB((signed int)reader_index, 0xA1, 0x03, 0x00, buffer, (unsigned int)sizeof(unsigned char [1024l]) /*1024ul*/ );
  if(!(n >= 1))
  {
    if(!((2 & LogLevel) == 0))
      log_msg(1, "%s:%d:%s() IFD does not support GET_DATA_RATES request: %d", (const void *)"ccid_usb.c", 1116, (const void *)"get_data_rates", n);

    return (unsigned int *)(void *)0;
  }

  else
    if(!(n % 4 == 0))
    {
      if(!((2 & LogLevel) == 0))
        log_msg(1, "%s:%d:%s() Wrong GET DATA RATES size: %d", (const void *)"ccid_usb.c", 1123, (const void *)"get_data_rates", n);

      return (unsigned int *)(void *)0;
    }

    else
    {
      n = n / (signed int)sizeof(signed int) /*4ul*/ ;
      struct libusb_interface *return_value_get_ccid_usb_interface_1;
      return_value_get_ccid_usb_interface_1=get_ccid_usb_interface(desc, &num);
      const unsigned char *return_value_get_ccid_device_descriptor_2;
      return_value_get_ccid_device_descriptor_2=get_ccid_device_descriptor(return_value_get_ccid_usb_interface_1);
      len = (signed int)return_value_get_ccid_device_descriptor_2[(signed long int)27];
      if(!(len == 0) && !(n == len))
      {
        if(!((2 & LogLevel) == 0))
          log_msg(1, "%s:%d:%s() Got %d data rates but was expecting %d", (const void *)"ccid_usb.c", 1134, (const void *)"get_data_rates", n, len);

        if(!(len >= n))
          n = len;

      }

      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)(n + 1), sizeof(unsigned int) /*4ul*/ );
      uint_array = (unsigned int *)return_value_calloc_3;
      if(uint_array == ((unsigned int *)NULL))
      {
        if(!((1 & LogLevel) == 0))
          log_msg(3, "%s:%d:%s() Memory allocation failed", (const void *)"ccid_usb.c", 1144, (const void *)"get_data_rates");

        return (unsigned int *)(void *)0;
      }

      else
      {
        i = 0;
        for( ; !(i >= n); i = i + 1)
        {
          uint_array[(signed long int)i] = (unsigned int)(((((signed int)buffer[(signed long int)(i * 4 + 3)] << 8) + (signed int)buffer[(signed long int)(i * 4 + 2)] << 8) + (signed int)buffer[(signed long int)(i * 4 + 1)] << 8) + (signed int)buffer[(signed long int)(i * 4)]);
          if(!((2 & LogLevel) == 0))
            log_msg(1, "%s:%d:%s() declared: %d bps", (const void *)"ccid_usb.c", 1152, (const void *)"get_data_rates", uint_array[(signed long int)i]);

        }
        uint_array[(signed long int)i] = (unsigned int)0;
        return uint_array;
      }
    }
}

// get_end_points
// file ccid_usb.c line 978
static signed int get_end_points(struct libusb_config_descriptor *desc, struct anonymous_6 *usbdevice, signed int num)
{
  signed int i;
  signed int bEndpointAddress;
  struct libusb_interface *usb_interface;
  usb_interface=get_ccid_usb_interface(desc, &num);
  i = 0;
  for( ; !(i >= (signed int)usb_interface->altsetting->bNumEndpoints); i = i + 1)
    if((signed int)(usb_interface->altsetting->endpoint + (signed long int)i)->bmAttributes == 3)
      usbdevice->interrupt = (signed int)(usb_interface->altsetting->endpoint + (signed long int)i)->bEndpointAddress;

    else
      if((signed int)(usb_interface->altsetting->endpoint + (signed long int)i)->bmAttributes == 2)
      {
        bEndpointAddress = (signed int)(usb_interface->altsetting->endpoint + (signed long int)i)->bEndpointAddress;
        if((0x80 & bEndpointAddress) == 128)
          usbdevice->bulk_in = bEndpointAddress;

        if((0x80 & bEndpointAddress) == 0)
          usbdevice->bulk_out = bEndpointAddress;

      }

  return 0;
}

// libusb_fill_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout)
{
  transfer->dev_handle = dev_handle;
  transfer->endpoint = endpoint;
  transfer->type = (unsigned char)2;
  transfer->timeout = timeout;
  transfer->buffer = buffer;
  transfer->length = length;
  transfer->user_data = user_data;
  transfer->callback = callback;
}

// list_append
// file simclist.h line 358
signed int list_append(struct anonymous_1 * restrict l, const void *data)
{
  signed int return_value_list_insert_at_1;
  return_value_list_insert_at_1=list_insert_at(l, data, l->numels);
  return return_value_list_insert_at_1;
}

// list_attributes_comparator
// file simclist.c line 332
signed int list_attributes_comparator(struct anonymous_1 * restrict l, signed int (*comparator_fun)(const void *, const void *))
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->attrs.comparator = comparator_fun;
    return 0;
  }
}

// list_attributes_copy
// file simclist.c line 351
signed int list_attributes_copy(struct anonymous_1 * restrict l, unsigned long int (*metric_fun)(const void *), signed int copy_data)
{
  if(l == ((struct anonymous_1 *)NULL) || metric_fun == ((unsigned long int (*)(const void *))NULL) && !(copy_data == 0))
    return -1;

  else
  {
    l->attrs.meter = metric_fun;
    l->attrs.copy_data = copy_data;
    return 0;
  }
}

// list_attributes_hash_computer
// file simclist.c line 362
signed int list_attributes_hash_computer(struct anonymous_1 * restrict l, signed int (*hash_computer_fun)(const void *))
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->attrs.hasher = hash_computer_fun;
    return 0;
  }
}

// list_attributes_seeker
// file simclist.c line 342
signed int list_attributes_seeker(struct anonymous_1 * restrict l, signed int (*seeker_fun)(const void *, const void *))
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->attrs.seeker = seeker_fun;
    return 0;
  }
}

// list_attributes_serializer
// file simclist.c line 370
signed int list_attributes_serializer(struct anonymous_1 * restrict l, void * (*serializer_fun)(const void *, unsigned int *))
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->attrs.serializer = serializer_fun;
    return 0;
  }
}

// list_attributes_setdefaults
// file simclist.c line 312
static signed int list_attributes_setdefaults(struct anonymous_1 * restrict l)
{
  l->attrs.comparator = (signed int (*)(const void *, const void *))(void *)0;
  l->attrs.seeker = (signed int (*)(const void *, const void *))(void *)0;
  l->attrs.meter = (unsigned long int (*)(const void *))(void *)0;
  l->attrs.copy_data = 0;
  l->attrs.hasher = (signed int (*)(const void *))(void *)0;
  l->attrs.serializer = (void * (*)(const void *, unsigned int *))(void *)0;
  l->attrs.unserializer = (void * (*)(const void *, unsigned int *))(void *)0;
  return 0;
}

// list_attributes_unserializer
// file simclist.c line 378
signed int list_attributes_unserializer(struct anonymous_1 * restrict l, void * (*unserializer_fun)(const void *, unsigned int *))
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->attrs.unserializer = unserializer_fun;
    return 0;
  }
}

// list_clear
// file simclist.c line 623
signed int list_clear(struct anonymous_1 * restrict l)
{
  struct list_entry_s *s;
  unsigned int numels = l->numels;
  _Bool tmp_if_expr_1;
  unsigned int tmp_post_2;
  _Bool tmp_if_expr_3;
  unsigned int tmp_post_4;
  if(!(l->iter_active == 0))
    return -1;

  else
  {
    if(!(l->attrs.copy_data == 0))
    {
      s = l->head_sentinel->next;
      do
      {
        if(!(l->spareelsnum >= 5u))
          tmp_if_expr_1 = s != l->tail_sentinel ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(!tmp_if_expr_1)
          break;

        if(!(s->data == NULL))
          free(s->data);

        tmp_post_2 = l->spareelsnum;
        l->spareelsnum = l->spareelsnum + 1u;
        l->spareels[(signed long int)tmp_post_2] = s;
        s = s->next;
      }
      while((_Bool)1);
      while(!(s == l->tail_sentinel))
      {
        if(!(s->data == NULL))
          free(s->data);

        s = s->next;
        free((void *)s->prev);
      }
      l->head_sentinel->next = l->tail_sentinel;
      l->tail_sentinel->prev = l->head_sentinel;
    }

    else
    {
      s = l->head_sentinel->next;
      do
      {
        if(!(l->spareelsnum >= 5u))
          tmp_if_expr_3 = s != l->tail_sentinel ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(!tmp_if_expr_3)
          break;

        tmp_post_4 = l->spareelsnum;
        l->spareelsnum = l->spareelsnum + 1u;
        l->spareels[(signed long int)tmp_post_4] = s;
        s = s->next;
      }
      while((_Bool)1);
      while(!(s == l->tail_sentinel))
      {
        s = s->next;
        free((void *)s->prev);
      }
      l->head_sentinel->next = l->tail_sentinel;
      l->tail_sentinel->prev = l->head_sentinel;
    }
    l->numels = (unsigned int)0;
    l->mid = (struct list_entry_s *)(void *)0;
    return (signed int)numels;
  }
}

// list_comparator_double
// file simclist.c line 1430
signed int list_comparator_double(const void *a, const void *b)
{
  return (signed int)(*((double *)a) < *((double *)b)) - (signed int)(*((double *)a) > *((double *)b));
}

// list_comparator_float
// file simclist.c line 1429
signed int list_comparator_float(const void *a, const void *b)
{
  return (signed int)(*((float *)a) < *((float *)b)) - (signed int)(*((float *)a) > *((float *)b));
}

// list_comparator_int16_t
// file simclist.c line 1420
signed int list_comparator_int16_t(const void *a, const void *b)
{
  return (signed int)((signed int)*((signed short int *)a) < (signed int)*((signed short int *)b)) - (signed int)((signed int)*((signed short int *)a) > (signed int)*((signed short int *)b));
}

// list_comparator_int32_t
// file simclist.c line 1421
signed int list_comparator_int32_t(const void *a, const void *b)
{
  return (signed int)(*((signed int *)a) < *((signed int *)b)) - (signed int)(*((signed int *)a) > *((signed int *)b));
}

// list_comparator_int64_t
// file simclist.c line 1422
signed int list_comparator_int64_t(const void *a, const void *b)
{
  return (signed int)(*((signed long int *)a) < *((signed long int *)b)) - (signed int)(*((signed long int *)a) > *((signed long int *)b));
}

// list_comparator_int8_t
// file simclist.c line 1419
signed int list_comparator_int8_t(const void *a, const void *b)
{
  return (signed int)((signed int)*((signed char *)a) < (signed int)*((signed char *)b)) - (signed int)((signed int)*((signed char *)a) > (signed int)*((signed char *)b));
}

// list_comparator_string
// file simclist.c line 1432
signed int list_comparator_string(const void *a, const void *b)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp((const char *)b, (const char *)a);
  return return_value_strcmp_1;
}

// list_comparator_uint16_t
// file simclist.c line 1425
signed int list_comparator_uint16_t(const void *a, const void *b)
{
  return (signed int)((signed int)*((unsigned short int *)a) < (signed int)*((unsigned short int *)b)) - (signed int)((signed int)*((unsigned short int *)a) > (signed int)*((unsigned short int *)b));
}

// list_comparator_uint32_t
// file simclist.c line 1426
signed int list_comparator_uint32_t(const void *a, const void *b)
{
  return (signed int)(*((unsigned int *)a) < *((unsigned int *)b)) - (signed int)(*((unsigned int *)a) > *((unsigned int *)b));
}

// list_comparator_uint64_t
// file simclist.c line 1427
signed int list_comparator_uint64_t(const void *a, const void *b)
{
  return (signed int)(*((unsigned long int *)a) < *((unsigned long int *)b)) - (signed int)(*((unsigned long int *)a) > *((unsigned long int *)b));
}

// list_comparator_uint8_t
// file simclist.c line 1424
signed int list_comparator_uint8_t(const void *a, const void *b)
{
  return (signed int)((signed int)*((unsigned char *)a) < (signed int)*((unsigned char *)b)) - (signed int)((signed int)*((unsigned char *)a) > (signed int)*((unsigned char *)b));
}

// list_concat
// file simclist.c line 713
signed int list_concat(const struct anonymous_1 *l1, const struct anonymous_1 *l2, struct anonymous_1 * restrict dest)
{
  struct list_entry_s *el;
  struct list_entry_s *srcel;
  unsigned int cnt;
  signed int err;
  if(dest == ((struct anonymous_1 *)NULL) || l1 == ((const struct anonymous_1 *)NULL) || l1 == dest || l2 == ((const struct anonymous_1 *)NULL) || l2 == dest)
    return -1;

  else
  {
    list_init(dest);
    dest->numels = l1->numels + l2->numels;
    if(dest->numels == 0u)
      return 0;

    else
    {
      srcel = l1->head_sentinel->next;
      el = dest->head_sentinel;
      while(!(srcel == l1->tail_sentinel))
      {
        void *return_value_malloc_1;
        return_value_malloc_1=malloc(sizeof(struct list_entry_s) /*24ul*/ );
        el->next = (struct list_entry_s *)return_value_malloc_1;
        el->next->prev = el;
        el = el->next;
        el->data = srcel->data;
        srcel = srcel->next;
      }
      dest->mid = el;
      srcel = l2->head_sentinel->next;
      while(!(srcel == l2->tail_sentinel))
      {
        void *return_value_malloc_2;
        return_value_malloc_2=malloc(sizeof(struct list_entry_s) /*24ul*/ );
        el->next = (struct list_entry_s *)return_value_malloc_2;
        el->next->prev = el;
        el = el->next;
        el->data = srcel->data;
        srcel = srcel->next;
      }
      el->next = dest->tail_sentinel;
      dest->tail_sentinel->prev = el;
      err = (signed int)(l2->numels - l1->numels);
      if((1 + err) / 2 >= 1)
      {
        err = (err + 1) / 2;
        cnt = (unsigned int)0;
        for( ; !(cnt >= (unsigned int)err); cnt = cnt + 1u)
          dest->mid = dest->mid->next;
      }

      else
        if(!(err / 2 >= 0))
        {
          err = -err / 2;
          cnt = (unsigned int)0;
          for( ; !(cnt >= (unsigned int)err); cnt = cnt + 1u)
            dest->mid = dest->mid->prev;
        }

      return 0;
    }
  }
}

// list_contains
// file simclist.c line 709
signed int list_contains(const struct anonymous_1 * restrict l, const void *data)
{
  signed int return_value_list_locate_1;
  return_value_list_locate_1=list_locate(l, data);
  return (signed int)(return_value_list_locate_1 >= 0);
}

// list_delete
// file simclist.c line 526
signed int list_delete(struct anonymous_1 * restrict l, const void *data)
{
  signed int pos;
  signed int r;
  pos=list_locate(l, data);
  if(!(pos >= 0))
    return -1;

  else
  {
    r=list_delete_at(l, (unsigned int)pos);
    if(!(r >= 0))
      return -1;

    else
      return 0;
  }
}

// list_delete_at
// file simclist.c line 542
signed int list_delete_at(struct anonymous_1 * restrict l, unsigned int pos)
{
  struct list_entry_s *delendo;
  _Bool tmp_if_expr_1;
  if(!(l->iter_active == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = pos >= l->numels ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    delendo=list_findpos(l, (signed int)pos);
    list_drop_elem(l, delendo, pos);
    l->numels = l->numels - 1u;
    return 0;
  }
}

// list_delete_range
// file simclist.c line 560
signed int list_delete_range(struct anonymous_1 * restrict l, unsigned int posstart, unsigned int posend)
{
  struct list_entry_s *lastvalid;
  struct list_entry_s *tmp;
  struct list_entry_s *tmp2;
  unsigned int numdel;
  unsigned int midposafter;
  unsigned int i;
  signed int movedx;
  _Bool tmp_if_expr_1;
  if(!(l->iter_active == 0) || !(posend >= posstart))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = posend >= l->numels ? (_Bool)1 : (_Bool)0;
  signed int return_value_list_clear_2;
  unsigned int tmp_post_3;
  unsigned int tmp_post_4;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    numdel = (posend - posstart) + (unsigned int)1;
    if(numdel == l->numels)
    {
      return_value_list_clear_2=list_clear(l);
      return return_value_list_clear_2;
    }

    else
    {
      tmp=list_findpos(l, (signed int)posstart);
      lastvalid = tmp->prev;
      midposafter = ((l->numels - (unsigned int)1) - numdel) / (unsigned int)2;
      midposafter = midposafter < posstart ? midposafter : midposafter + numdel;
      movedx = (signed int)(midposafter - (l->numels - (unsigned int)1) / (unsigned int)2);
      if(movedx >= 1)
      {
        i = (unsigned int)0;
        for( ; !(i >= (unsigned int)movedx); i = i + 1u)
          l->mid = l->mid->next;
      }

      else
      {
        movedx = -movedx;
        i = (unsigned int)0;
        for( ; !(i >= (unsigned int)movedx); i = i + 1u)
          l->mid = l->mid->prev;
      }
      i = posstart;
      if(!(l->attrs.copy_data == 0))
        for( ; posend >= i; i = i + 1u)
        {
          tmp2 = tmp;
          tmp = tmp->next;
          if(!(tmp2->data == NULL))
            free(tmp2->data);

          if(!(l->spareelsnum >= 5u))
          {
            tmp_post_3 = l->spareelsnum;
            l->spareelsnum = l->spareelsnum + 1u;
            l->spareels[(signed long int)tmp_post_3] = tmp2;
          }

          else
            free((void *)tmp2);
        }

      else
        for( ; posend >= i; i = i + 1u)
        {
          tmp2 = tmp;
          tmp = tmp->next;
          if(!(l->spareelsnum >= 5u))
          {
            tmp_post_4 = l->spareelsnum;
            l->spareelsnum = l->spareelsnum + 1u;
            l->spareels[(signed long int)tmp_post_4] = tmp2;
          }

          else
            free((void *)tmp2);
        }
      lastvalid->next = tmp;
      tmp->prev = lastvalid;
      l->numels = l->numels - ((posend - posstart) + (unsigned int)1);
      return (signed int)numdel;
    }
  }
}

// list_destroy
// file simclist.h line 223
void list_destroy(struct anonymous_1 * restrict l)
{
  unsigned int i;
  list_clear(l);
  i = (unsigned int)0;
  for( ; !(i >= l->spareelsnum); i = i + 1u)
    free((void *)l->spareels[(signed long int)i]);
  free((void *)l->spareels);
  free((void *)l->head_sentinel);
  free((void *)l->tail_sentinel);
}

// list_drop_elem
// file simclist.c line 1388
static signed int list_drop_elem(struct anonymous_1 * restrict l, struct list_entry_s *tmp, unsigned int pos)
{
  unsigned int tmp_post_1;
  if(tmp == ((struct list_entry_s *)NULL))
    return -1;

  else
  {
    if(!(l->numels % 2u == 0u))
    {
      if(l->numels == 1u)
        l->mid = (struct list_entry_s *)(void *)0;

      else
        if(pos >= l->numels / 2u)
          l->mid = l->mid->prev;

    }

    else
      if(!(pos >= l->numels / 2u))
        l->mid = l->mid->next;

    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    if(!(l->attrs.copy_data == 0))
    {
      if(!(tmp->data == NULL))
        free(tmp->data);

    }

    if(!(l->spareelsnum >= 5u))
    {
      tmp_post_1 = l->spareelsnum;
      l->spareelsnum = l->spareelsnum + 1u;
      l->spareels[(signed long int)tmp_post_1] = tmp;
    }

    else
      free((void *)tmp);
    return 0;
  }
}

// list_empty
// file simclist.c line 673
signed int list_empty(const struct anonymous_1 * restrict l)
{
  return (signed int)(l->numels == (unsigned int)0);
}

// list_extract_at
// file simclist.c line 459
void * list_extract_at(struct anonymous_1 * restrict l, unsigned int pos)
{
  struct list_entry_s *tmp;
  void *data;
  _Bool tmp_if_expr_1;
  if(!(l->iter_active == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = pos >= l->numels ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (void *)0;

  else
  {
    tmp=list_findpos(l, (signed int)pos);
    data = tmp->data;
    tmp->data = (void *)0;
    list_drop_elem(l, tmp, pos);
    l->numels = l->numels - 1u;
    return data;
  }
}

// list_fetch
// file simclist.c line 394
void * list_fetch(struct anonymous_1 * restrict l)
{
  void *return_value_list_extract_at_1;
  return_value_list_extract_at_1=list_extract_at(l, (unsigned int)0);
  return return_value_list_extract_at_1;
}

// list_findpos
// file simclist.c line 433
static inline struct list_entry_s * list_findpos(const struct anonymous_1 * restrict l, signed int posstart)
{
  struct list_entry_s *ptr;
  float x;
  signed int i;
  _Bool tmp_if_expr_1;
  if(!(posstart >= -1))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = posstart > (signed int)l->numels ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (struct list_entry_s *)(void *)0;

  else
  {
    x = (float)(posstart + 1) / (float)l->numels;
    if(x <= 2.500000e-1f)
    {
      i = -1;
      ptr = l->head_sentinel;
      for( ; !(i >= posstart); i = i + 1)
        ptr = ptr->next;
    }

    else
      if(x < 5.000000e-1f)
      {
        i = (signed int)((l->numels - (unsigned int)1) / (unsigned int)2);
        ptr = l->mid;
        for( ; !(posstart >= i); i = i - 1)
          ptr = ptr->prev;
      }

      else
        if(x <= 7.500000e-1f)
        {
          i = (signed int)((l->numels - (unsigned int)1) / (unsigned int)2);
          ptr = l->mid;
          for( ; !(i >= posstart); i = i + 1)
            ptr = ptr->next;
        }

        else
        {
          i = (signed int)l->numels;
          ptr = l->tail_sentinel;
          for( ; !(posstart >= i); i = i - 1)
            ptr = ptr->prev;
        }
    return ptr;
  }
}

// list_get_at
// file simclist.h line 389
void * list_get_at(const struct anonymous_1 * restrict l, unsigned int pos)
{
  struct list_entry_s *tmp;
  tmp=list_findpos(l, (signed int)pos);
  void *tmp_if_expr_1;
  if(!(tmp == ((struct list_entry_s *)NULL)))
    tmp_if_expr_1 = tmp->data;

  else
    tmp_if_expr_1 = (void *)0;
  return tmp_if_expr_1;
}

// list_get_max
// file simclist.c line 406
void * list_get_max(const struct anonymous_1 * restrict l)
{
  void *return_value_list_get_minmax_1;
  return_value_list_get_minmax_1=list_get_minmax(l, +1);
  return return_value_list_get_minmax_1;
}

// list_get_min
// file simclist.c line 410
void * list_get_min(const struct anonymous_1 * restrict l)
{
  void *return_value_list_get_minmax_1;
  return_value_list_get_minmax_1=list_get_minmax(l, -1);
  return return_value_list_get_minmax_1;
}

// list_get_minmax
// file simclist.c line 416
static void * list_get_minmax(const struct anonymous_1 * restrict l, signed int versus)
{
  void *curminmax;
  struct list_entry_s *s;
  _Bool tmp_if_expr_1;
  if(l->attrs.comparator == ((signed int (*)(const void *, const void *))NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = l->numels == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (void *)0;

  else
  {
    curminmax = l->head_sentinel->next->data;
    s = l->head_sentinel->next->next;
    if(!(s == l->tail_sentinel))
    {
      signed int return_value;
      return_value=l->attrs.comparator(curminmax, s->data);
      if(return_value * versus >= 1)
        curminmax = s->data;

      s = s->next;
    }

    return curminmax;
  }
}

// list_hash
// file simclist.c line 970
signed int list_hash(const struct anonymous_1 * restrict l, signed int * restrict hash)
{
  struct list_entry_s *x;
  signed int tmphash = (signed int)(l->numels * (unsigned int)2 + (unsigned int)100);
  if(l->attrs.hasher == ((signed int (*)(const void *))NULL))
    return -1;

  else
  {
    x = l->head_sentinel->next;
    if(!(x == l->tail_sentinel))
    {
      signed int return_value;
      return_value=l->attrs.hasher(x->data);
      tmphash = tmphash + (tmphash ^ return_value);
      tmphash = tmphash + (signed int)((unsigned int)tmphash % l->numels);
      x = x->next;
    }

  }
  *hash = tmphash;
  return 0;
}

// list_hashcomputer_double
// file simclist.c line 1466
signed int list_hashcomputer_double(const void *el)
{
  return (signed int)*((double *)el);
}

// list_hashcomputer_float
// file simclist.c line 1465
signed int list_hashcomputer_float(const void *el)
{
  return (signed int)*((float *)el);
}

// list_hashcomputer_int16_t
// file simclist.c line 1456
signed int list_hashcomputer_int16_t(const void *el)
{
  return (signed int)*((signed short int *)el);
}

// list_hashcomputer_int32_t
// file simclist.c line 1457
signed int list_hashcomputer_int32_t(const void *el)
{
  return (signed int)*((signed int *)el);
}

// list_hashcomputer_int64_t
// file simclist.c line 1458
signed int list_hashcomputer_int64_t(const void *el)
{
  return (signed int)*((signed long int *)el);
}

// list_hashcomputer_int8_t
// file simclist.c line 1455
signed int list_hashcomputer_int8_t(const void *el)
{
  return (signed int)*((signed char *)el);
}

// list_hashcomputer_string
// file simclist.c line 1468
signed int list_hashcomputer_string(const void *el)
{
  unsigned long int l;
  signed int hash = 123;
  const char *str = (const char *)el;
  char plus;
  l = (unsigned long int)0;
  for( ; !((signed int)str[(signed long int)l] == 0); l = l + 1ul)
  {
    if(!(l == 0ul))
      plus = (char)(hash ^ (signed int)str[(signed long int)l]);

    else
      plus = (char)(hash ^ (signed int)str[(signed long int)l] - (signed int)str[(signed long int)0]);
    hash = hash + ((signed int)plus << (unsigned long int)8 * (l % sizeof(signed int) /*4ul*/ ));
  }
  return hash;
}

// list_hashcomputer_uint16_t
// file simclist.c line 1461
signed int list_hashcomputer_uint16_t(const void *el)
{
  return (signed int)*((unsigned short int *)el);
}

// list_hashcomputer_uint32_t
// file simclist.c line 1462
signed int list_hashcomputer_uint32_t(const void *el)
{
  return (signed int)*((unsigned int *)el);
}

// list_hashcomputer_uint64_t
// file simclist.c line 1463
signed int list_hashcomputer_uint64_t(const void *el)
{
  return (signed int)*((unsigned long int *)el);
}

// list_hashcomputer_uint8_t
// file simclist.c line 1460
signed int list_hashcomputer_uint8_t(const void *el)
{
  return (signed int)*((unsigned char *)el);
}

// list_init
// file simclist.h line 212
signed int list_init(struct anonymous_1 * restrict l)
{
  if(l == ((struct anonymous_1 *)NULL))
    return -1;

  else
  {
    l->numels = (unsigned int)0;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct list_entry_s) /*24ul*/ );
    l->head_sentinel = (struct list_entry_s *)return_value_malloc_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct list_entry_s) /*24ul*/ );
    l->tail_sentinel = (struct list_entry_s *)return_value_malloc_2;
    l->head_sentinel->next = l->tail_sentinel;
    l->tail_sentinel->prev = l->head_sentinel;
    l->mid = (struct list_entry_s *)(void *)0;
    l->tail_sentinel->next = l->mid;
    l->head_sentinel->prev = l->tail_sentinel->next;
    l->tail_sentinel->data = (void *)0;
    l->head_sentinel->data = l->tail_sentinel->data;
    l->iter_active = 0;
    l->iter_pos = (unsigned int)0;
    l->iter_curentry = (struct list_entry_s *)(void *)0;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)5 * sizeof(struct list_entry_s *) /*8ul*/ );
    l->spareels = (struct list_entry_s **)return_value_malloc_3;
    l->spareelsnum = (unsigned int)0;
    list_attributes_setdefaults(l);
    return 0;
  }
}

// list_insert_at
// file simclist.c line 477
signed int list_insert_at(struct anonymous_1 * restrict l, const void *data, unsigned int pos)
{
  struct list_entry_s *lent;
  struct list_entry_s *succ;
  struct list_entry_s *prec;
  _Bool tmp_if_expr_1;
  if(!(l->iter_active == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = pos > l->numels ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    if(l->spareelsnum >= 1u)
    {
      lent = l->spareels[(signed long int)(l->spareelsnum - (unsigned int)1)];
      l->spareelsnum = l->spareelsnum - 1u;
    }

    else
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct list_entry_s) /*24ul*/ );
      lent = (struct list_entry_s *)return_value_malloc_2;
      if(lent == ((struct list_entry_s *)NULL))
        return -1;

    }
    if(!(l->attrs.copy_data == 0))
    {
      unsigned long int datalen;
      datalen=l->attrs.meter(data);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(datalen);
      lent->data = (void *)(struct list_entry_s *)return_value_malloc_3;
      memcpy(lent->data, data, datalen);
    }

    else
      lent->data = (void *)data;
    prec=list_findpos(l, (signed int)(pos - (unsigned int)1));
    succ = prec->next;
    prec->next = lent;
    lent->prev = prec;
    lent->next = succ;
    succ->prev = lent;
    l->numels = l->numels + 1u;
    if(l->numels == 1u)
      l->mid = lent;

    else
      if(!(l->numels % 2u == 0u))
      {
        if(pos >= (l->numels + 4294967295u) / 2u)
          l->mid = l->mid->next;

      }

      else
        if((l->numels + 4294967295u) / 2u >= pos)
          l->mid = l->mid->prev;

    return 1;
  }
}

// list_iterator_hasnext
// file simclist.c line 958
signed int list_iterator_hasnext(const struct anonymous_1 * restrict l)
{
  if(l->iter_active == 0)
    return 0;

  else
    return (signed int)(l->iter_pos < l->numels);
}

// list_iterator_next
// file simclist.c line 946
void * list_iterator_next(struct anonymous_1 * restrict l)
{
  void *toret;
  if(l->iter_active == 0)
    return (void *)0;

  else
  {
    toret = l->iter_curentry->data;
    l->iter_curentry = l->iter_curentry->next;
    l->iter_pos = l->iter_pos + 1u;
    return toret;
  }
}

// list_iterator_start
// file simclist.c line 938
signed int list_iterator_start(struct anonymous_1 * restrict l)
{
  if(!(l->iter_active == 0))
    return 0;

  else
  {
    l->iter_pos = (unsigned int)0;
    l->iter_active = 1;
    l->iter_curentry = l->head_sentinel->next;
    return 1;
  }
}

// list_iterator_stop
// file simclist.c line 963
signed int list_iterator_stop(struct anonymous_1 * restrict l)
{
  if(l->iter_active == 0)
    return 0;

  else
  {
    l->iter_pos = (unsigned int)0;
    l->iter_active = 0;
    return 1;
  }
}

// list_locate
// file simclist.c line 677
signed int list_locate(const struct anonymous_1 * restrict l, const void *data)
{
  struct list_entry_s *el;
  signed int pos = 0;
  if(!(l->attrs.comparator == ((signed int (*)(const void *, const void *))NULL)))
  {
    el = l->head_sentinel->next;
    if(!(el == l->tail_sentinel))
    {
      signed int return_value;
      return_value=l->attrs.comparator(data, el->data);
      if(!(return_value == 0))
      {
        el = el->next;
        pos = pos + 1;
      }

    }

  }

  else
  {
    el = l->head_sentinel->next;
    for( ; !(el == l->tail_sentinel); pos = pos + 1)
    {
      if(el->data == data)
        break;

      el = el->next;
    }
  }
  if(el == l->tail_sentinel)
    return -1;

  else
    return pos;
}

// list_meter_double
// file simclist.c line 1448
unsigned long int list_meter_double(const void *el)
{
  return sizeof(double) /*8ul*/ ;
}

// list_meter_float
// file simclist.c line 1447
unsigned long int list_meter_float(const void *el)
{
  return sizeof(float) /*4ul*/ ;
}

// list_meter_int16_t
// file simclist.c line 1438
unsigned long int list_meter_int16_t(const void *el)
{
  return sizeof(signed short int) /*2ul*/ ;
}

// list_meter_int32_t
// file simclist.c line 1439
unsigned long int list_meter_int32_t(const void *el)
{
  return sizeof(signed int) /*4ul*/ ;
}

// list_meter_int64_t
// file simclist.c line 1440
unsigned long int list_meter_int64_t(const void *el)
{
  return sizeof(signed long int) /*8ul*/ ;
}

// list_meter_int8_t
// file simclist.c line 1437
unsigned long int list_meter_int8_t(const void *el)
{
  return sizeof(signed char) /*1ul*/ ;
}

// list_meter_string
// file simclist.c line 1450
unsigned long int list_meter_string(const void *el)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen((const char *)el);
  return return_value_strlen_1 + (unsigned long int)1;
}

// list_meter_uint16_t
// file simclist.c line 1443
unsigned long int list_meter_uint16_t(const void *el)
{
  return sizeof(unsigned short int) /*2ul*/ ;
}

// list_meter_uint32_t
// file simclist.c line 1444
unsigned long int list_meter_uint32_t(const void *el)
{
  return sizeof(unsigned int) /*4ul*/ ;
}

// list_meter_uint64_t
// file simclist.c line 1445
unsigned long int list_meter_uint64_t(const void *el)
{
  return sizeof(unsigned long int) /*8ul*/ ;
}

// list_meter_uint8_t
// file simclist.c line 1442
unsigned long int list_meter_uint8_t(const void *el)
{
  return sizeof(unsigned char) /*1ul*/ ;
}

// list_prepend
// file simclist.c line 390
signed int list_prepend(struct anonymous_1 * restrict l, const void *data)
{
  signed int return_value_list_insert_at_1;
  return_value_list_insert_at_1=list_insert_at(l, data, (unsigned int)0);
  return return_value_list_insert_at_1;
}

// list_seek
// file simclist.c line 697
void * list_seek(struct anonymous_1 * restrict l, const void *indicator)
{
  struct list_entry_s *iter;
  if(l->attrs.seeker == ((signed int (*)(const void *, const void *))NULL))
    return (void *)0;

  else
  {
    iter = l->head_sentinel->next;
    if(!(iter == l->tail_sentinel))
    {
      signed int return_value;
      return_value=l->attrs.seeker(iter->data, indicator);
      if(!(return_value == 0))
        return iter->data;

      iter = iter->next;
    }

    return (void *)0;
  }
}

// list_size
// file simclist.h line 493
unsigned int list_size(const struct anonymous_1 * restrict l)
{
  return l->numels;
}

// list_sort
// file simclist.c line 766
signed int list_sort(struct anonymous_1 * restrict l, signed int versus)
{
  _Bool tmp_if_expr_1;
  if(!(l->iter_active == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = l->attrs.comparator == (signed int (*)(const void *, const void *))(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
    if(!(l->numels >= 2u))
      return 0;

    else
    {
      list_sort_quicksort(l, versus, (unsigned int)0, l->head_sentinel->next, l->numels - (unsigned int)1, l->tail_sentinel->prev);
      return 0;
    }
}

// list_sort_quicksort
// file simclist.c line 815
static void list_sort_quicksort(struct anonymous_1 * restrict l, signed int versus, unsigned int first, struct list_entry_s *fel, unsigned int last, struct list_entry_s *lel)
{
  unsigned int pivotid;
  unsigned int i;
  struct list_entry_s *pivot;
  struct list_entry_s *left;
  struct list_entry_s *right;
  void *tmpdata;
  _Bool tmp_if_expr_2;
  signed int return_value;
  _Bool tmp_if_expr_3;
  signed int return_value_1;
  if(!(first >= last))
  {
    if(!(1u + last + -first >= 25u))
      list_sort_selectionsort(l, versus, first, fel, last, lel);

    else
      if(!(first >= last))
      {
        signed int return_value_rand_1;
        return_value_rand_1=rand();
        pivotid = (unsigned int)return_value_rand_1 % ((last - first) + (unsigned int)1);
        if(!(pivotid >= (1u + last + -first) / 2u))
        {
          i = (unsigned int)0;
          pivot = fel;
          for( ; !(i >= pivotid); i = i + 1u)
            pivot = pivot->next;
        }

        else
        {
          i = last - first;
          pivot = lel;
          for( ; !(pivotid >= i); i = i - 1u)
            pivot = pivot->prev;
        }
        left = fel;
        right = lel;
        while(!(left == pivot) && !(right == pivot))
        {
          do
          {
            if(!(left == pivot))
            {
              return_value=l->attrs.comparator(left->data, pivot->data);
              tmp_if_expr_2 = return_value * -versus <= 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_2 = (_Bool)0;
            if(!tmp_if_expr_2)
              break;

            left = left->next;
          }
          while((_Bool)1);
          do
          {
            if(!(right == pivot))
            {
              return_value_1=l->attrs.comparator(right->data, pivot->data);
              tmp_if_expr_3 = return_value_1 * -versus >= 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_3 = (_Bool)0;
            if(!tmp_if_expr_3)
              break;

            right = right->prev;
          }
          while((_Bool)1);
          if(!(left == pivot) && !(right == pivot))
          {
            tmpdata = left->data;
            left->data = right->data;
            right->data = tmpdata;
            left = left->next;
            right = right->prev;
          }

        }
        if(right == pivot)
        {
          if(!(left == pivot))
          {
            signed int return_value_2;
            return_value_2=l->attrs.comparator(left->data, pivot->data);
            if(return_value_2 * -versus >= 1)
            {
              tmpdata = left->data;
              left->data = pivot->prev->data;
              pivot->prev->data = pivot->data;
              pivot->data = tmpdata;
              pivot = pivot->prev;
              pivotid = pivotid - 1u;
            }

            else
              left = left->next;
          }

        }

        else
          if(!(right == pivot))
          {
            signed int return_value_3;
            return_value_3=l->attrs.comparator(right->data, pivot->data);
            if(!(return_value_3 * -versus >= 0))
            {
              tmpdata = right->data;
              right->data = pivot->next->data;
              pivot->next->data = pivot->data;
              pivot->data = tmpdata;
              pivot = pivot->next;
              pivotid = pivotid + 1u;
            }

            else
              right = right->prev;
          }

        if(pivotid >= 1u)
          list_sort_quicksort(l, versus, first, fel, (first + pivotid) - (unsigned int)1, pivot->prev);

        if(!(pivotid + first >= last))
          list_sort_quicksort(l, versus, first + pivotid + (unsigned int)1, pivot->next, last, lel);

      }

  }

}

// list_sort_selectionsort
// file simclist.c line 794
static inline void list_sort_selectionsort(struct anonymous_1 * restrict l, signed int versus, unsigned int first, struct list_entry_s *fel, unsigned int last, struct list_entry_s *lel)
{
  struct list_entry_s *cursor;
  struct list_entry_s *toswap;
  struct list_entry_s *firstunsorted;
  void *tmpdata;
  signed int return_value;
  if(!(first >= last))
  {
    firstunsorted = fel;
    for( ; !(firstunsorted == lel); firstunsorted = firstunsorted->next)
    {
      toswap = firstunsorted;
      cursor = firstunsorted->next;
      if(!(cursor == lel->next))
      {
        return_value=l->attrs.comparator(toswap->data, cursor->data);
        if(return_value * -versus >= 1)
          toswap = cursor;

        cursor = cursor->next;
      }

      if(!(toswap == firstunsorted))
      {
        tmpdata = firstunsorted->data;
        firstunsorted->data = toswap->data;
        toswap->data = tmpdata;
      }

    }
  }

}

// log_msg
// file debug.c line 44
void log_msg(const signed int priority, const char *fmt, ...)
{
  char debug_buffer[160l];
  void **argptr;
  struct timeval new_time = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  struct timeval tmp;
  signed int delta;
  const char *color_pfx = "";
  const char *color_sfx = "";
  const char *time_pfx = "";
  const char *time_sfx = "";
  static signed int LogDoColor = 0;
  static signed int initialized = 0;
  if(initialized == 0)
  {
    char *term;
    initialized = 1;
    term=getenv("TERM");
    if(!(term == ((char *)NULL)))
    {
      const char *terms[7l] = { "linux", "xterm", "xterm-color", "Eterm", "rxvt", "rxvt-unicode", "xterm-256color" };
      unsigned int i = (unsigned int)0;
      for( ; !((unsigned long int)i >= 7ul); i = i + 1u)
      {
        signed int return_value_strcmp_1;
        return_value_strcmp_1=strcmp(terms[(signed long int)i], term);
        if(return_value_strcmp_1 == 0)
        {
          LogDoColor = 1;
          break;
        }

      }
    }

  }

  if(!(LogDoColor == 0))
  {
    color_sfx = "\033[0m";
    time_sfx = color_sfx;
    time_pfx = "\033[36m";
    switch(priority)
    {
      case 3:
      {
        color_pfx = "\033[01;31m";
        break;
      }
      case 2:
      {
        color_pfx = "\033[35m";
        break;
      }
      case 1:
      {
        color_pfx = "\033[34m";
        break;
      }
      case 0:
      {
        color_pfx = "";
        color_sfx = "";
      }
    }
  }

  gettimeofday(&new_time, (struct timezone *)(void *)0);
  static struct timeval last_time = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  if(last_time.tv_sec == 0l)
    last_time = new_time;

  tmp.tv_sec = new_time.tv_sec - last_time.tv_sec;
  tmp.tv_usec = new_time.tv_usec - last_time.tv_usec;
  if(!(tmp.tv_usec >= 0l))
  {
    tmp.tv_sec = tmp.tv_sec - 1l;
    tmp.tv_usec = tmp.tv_usec + (signed long int)1000000;
  }

  if(!(tmp.tv_sec >= 100l))
    delta = (signed int)(tmp.tv_sec * (signed long int)1000000 + tmp.tv_usec);

  else
    delta = 99999999;
  last_time = new_time;
  argptr = (void **)&fmt;
  vsnprintf(debug_buffer, sizeof(char [160l]) /*160ul*/ , fmt, argptr);
  argptr = ((void **)NULL);
  fprintf(stdout, "%s%.8d%s %s%s%s\n", time_pfx, delta, time_sfx, color_pfx, (const void *)debug_buffer, color_sfx);
  fflush(stdout);
}

// log_xxd
// file debug.c line 158
void log_xxd(const signed int priority, const char *msg, const unsigned char *buffer, const signed int len)
{
  signed int i;
  signed long int c_array_size0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(msg);
  c_array_size0 = (signed long int)((unsigned long int)(len * 3) + return_value_strlen_1 + (unsigned long int)1);
  char *c;
  char debug_buffer[c_array_size0];
  unsigned long int l;
  (void)priority;
  l=strlcpy(debug_buffer, msg, (unsigned long int)c_array_size0);
  c = debug_buffer + (signed long int)l;
  i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    snprintf(c, (unsigned long int)4, "%02X ", buffer[(signed long int)i]);
    c = c + (signed long int)3;
  }
  fprintf(stdout, "%s\n", (const void *)debug_buffer);
  fflush(stdout);
}

// main
// file parse.c line 63
signed int main(signed int argc, char **argv)
{
  struct libusb_device **devs;
  struct libusb_device *dev;
  signed int nb = 0;
  signed int r;
  signed int i;
  unsigned char buffer[256l];
  char class_ff = (char)0;
  signed long int cnt;
  signed int return_value_strcmp_1;
  if(argc >= 2)
  {
    return_value_strcmp_1=strcmp(argv[(signed long int)1], "-p");
    if(return_value_strcmp_1 == 0)
      class_ff = (char)1;

  }

  r=libusb_init((struct libusb_context **)(void *)0);
  signed int tmp_post_2;
  unsigned int return_value_geteuid_14;
  if(!(r >= 0))
  {
    printf("libusb_init() failed\n");
    return r;
  }

  else
  {
    cnt=libusb_get_device_list((struct libusb_context *)(void *)0, &devs);
    if(!(cnt >= 0l))
    {
      printf("libusb_get_device_list() failed\n");
      return (signed int)cnt;
    }

    else
    {
      i = 0;
      do
      {
        tmp_post_2 = i;
        i = i + 1;
        dev = devs[(signed long int)tmp_post_2];
        if(dev == ((struct libusb_device *)NULL))
          break;

        struct libusb_device_descriptor desc;
        struct libusb_config_descriptor *config_desc;
        struct libusb_device_handle *handle;
        struct libusb_interface *usb_interface = (struct libusb_interface *)(void *)0;
        signed int interface;
        signed int num = 0;
        r=libusb_open(dev, &handle);
        if(!(r >= 0))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          char *return_value_strerror_4;
          return_value_strerror_4=strerror(*return_value___errno_location_3);
          fprintf(stderr, "Can't libusb_open(): %s\n", return_value_strerror_4);
          unsigned int return_value_getuid_5;
          return_value_getuid_5=getuid();
          if(!(return_value_getuid_5 == 0u))
          {
            fprintf(stderr, "\033[01;31mPlease, restart the command as root\n\033[0m");
            return 1;
          }

          continue;
        }

        r=libusb_get_device_descriptor(dev, &desc);
        if(!(r >= 0))
        {
          fprintf(stderr, "\033[01;31mfailed to get device descriptor\033[0m");
          return 1;
        }

        unsigned char return_value_libusb_get_bus_number_6;
        return_value_libusb_get_bus_number_6=libusb_get_bus_number(dev);
        unsigned char return_value_libusb_get_device_address_7;
        return_value_libusb_get_device_address_7=libusb_get_device_address(dev);
        fprintf(stderr, "Parsing USB bus/device: %04X:%04X (bus %d, device %d)\n", desc.idVendor, desc.idProduct, return_value_libusb_get_bus_number_6, return_value_libusb_get_device_address_7);
        fprintf(stderr, " idVendor:  0x%04X", desc.idVendor);
        r=libusb_get_string_descriptor_ascii(handle, desc.iManufacturer, buffer, (signed int)sizeof(unsigned char [256l]) /*256ul*/ );
        if(!(r >= 0))
        {
          fprintf(stderr, "  Can't get iManufacturer string\n");
          unsigned int return_value_getuid_8;
          return_value_getuid_8=getuid();
          if(!(return_value_getuid_8 == 0u))
          {
            fprintf(stderr, "\033[01;31mPlease, restart the command as root\n\033[0m");
            return 1;
          }

        }

        else
          fprintf(stderr, "  iManufacturer: \033[34m%s\n\033[0m", (const void *)buffer);
        fprintf(stderr, " idProduct: 0x%04X", desc.idProduct);
        r=libusb_get_string_descriptor_ascii(handle, desc.iProduct, buffer, (signed int)sizeof(unsigned char [256l]) /*256ul*/ );
        if(!(r >= 0))
          fprintf(stderr, "  Can't get iProduct string\n");

        else
          fprintf(stderr, "  iProduct: \033[34m%s\n\033[0m", (const void *)buffer);
        do
        {

        again:
          ;
          r=libusb_get_active_config_descriptor(dev, &config_desc);
          if(!(r >= 0))
          {
            fprintf(stderr, "  Can't get config descriptor: %d\n", r);
            libusb_close(handle);
            break;
          }

          usb_interface=get_ccid_usb_interface(config_desc, &num);
          if(usb_interface == ((struct libusb_interface *)NULL))
          {
            libusb_close(handle);
            if(num == 0)
              fprintf(stderr, "\033[31m  NOT a CCID/ICCD device\n\033[0m");

            break;
          }

          if(class_ff == 0)
          {
            if((signed int)usb_interface->altsetting->bInterfaceClass == 0xFF)
            {
              libusb_close(handle);
              fprintf(stderr, "\033[35m  Found a possibly CCID/ICCD device (bInterfaceClass = 0xFF). Use %s -p\n\033[0m", argv[(signed long int)0]);
              break;
            }

          }

          fprintf(stderr, "\033[32m  Found a CCID/ICCD device at interface %d\n\033[0m", num);
          interface = (signed int)usb_interface->altsetting->bInterfaceNumber;
          r=libusb_claim_interface(handle, interface);
          if(!(r >= 0))
          {
            unsigned char return_value_libusb_get_bus_number_9;
            return_value_libusb_get_bus_number_9=libusb_get_bus_number(dev);
            unsigned char return_value_libusb_get_device_address_10;
            return_value_libusb_get_device_address_10=libusb_get_device_address(dev);
            signed int *return_value___errno_location_11;
            return_value___errno_location_11=__errno_location();
            char *return_value_strerror_12;
            return_value_strerror_12=strerror(*return_value___errno_location_11);
            fprintf(stderr, "Can't claim interface (bus %d, device %d): %s\n", return_value_libusb_get_bus_number_9, return_value_libusb_get_device_address_10, return_value_strerror_12);
            libusb_close(handle);
            signed int *return_value___errno_location_13;
            return_value___errno_location_13=__errno_location();
            if(*return_value___errno_location_13 == 16)
            {
              fprintf(stderr, "\033[01;31m Please, stop pcscd and retry\n\n\033[0m");
              if(!(class_ff == 0))
                break;

              else
                return 1;
            }

            break;
          }

          ccid_parse_interface_descriptor(handle, desc, config_desc, num, usb_interface);
          nb = nb + 1;
          libusb_release_interface(handle, interface);
          num = num + 1;
        }
        while((_Bool)1);
      }
      while((_Bool)1);
      if(nb == 0)
      {
        return_value_geteuid_14=geteuid();
        if(!(return_value_geteuid_14 == 0u))
          fprintf(stderr, "Can't find any CCID device.\nMaybe you must run parse as root?\n");

      }

      libusb_exit((struct libusb_context *)(void *)0);
      return 0;
    }
  }
}

// strlcpy
// file strlcpycat.h line 39
unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  char *tmp_post_1;
  const char *tmp_post_2;
  if(!(n == 0ul))
  {
    n = n - 1ul;
    if(!(n == 0ul))
      do
      {
        tmp_post_1 = d;
        d = d + 1l;
        tmp_post_2 = s;
        s = s + 1l;
        *tmp_post_1 = *tmp_post_2;
        if((signed int)*tmp_post_1 == 0)
          break;

        n = n - 1ul;
      }
      while(!(n == 0ul));

  }

  const char *tmp_post_3;
  if(n == 0ul)
  {
    if(!(siz == 0ul))
      *d = (char)0;

    do
    {
      tmp_post_3 = s;
      s = s + 1l;
      if(*tmp_post_3 == 0)
        break;

    }
    while((_Bool)1);
  }

  return (unsigned long int)((s - src) - (signed long int)1);
}

// tperrorCheck
// file tokenparser.l line 155
void tperrorCheck(char *token_error)
{
  (void)token_error;
}

// yy_create_buffer
// file tokenparser.c line 1323
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size)
{
  struct yy_buffer_state *b;
  void *return_value_yyalloc_1;
  return_value_yyalloc_1=yyalloc(sizeof(struct yy_buffer_state) /*72ul*/ );
  b = (struct yy_buffer_state *)return_value_yyalloc_1;
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_buf_size = (unsigned long int)size;
  void *return_value_yyalloc_2;
  return_value_yyalloc_2=yyalloc(b->yy_buf_size + (unsigned long int)2);
  b->yy_ch_buf = (char *)return_value_yyalloc_2;
  if(b->yy_ch_buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_is_our_buffer = 1;
  yy_init_buffer(b, file);
  return b;
}

// yy_delete_buffer
// file tokenparser.c line 1351
void yy_delete_buffer(struct yy_buffer_state *b)
{
  struct yy_buffer_state *tmp_if_expr_1;
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
    if(b == tmp_if_expr_1)
      yy_buffer_stack[(signed long int)yy_buffer_stack_top] = (struct yy_buffer_state *)0;

    if(!(b->yy_is_our_buffer == 0))
      yyfree((void *)b->yy_ch_buf);

    yyfree((void *)b);
  }

}

// yy_fatal_error
// file tokenparser.c line 1609
static void yy_fatal_error(const char *msg)
{
  fprintf(stderr, "%s\n", msg);
  exit(2);
}

// yy_flush_buffer
// file tokenparser.c line 1398
void yy_flush_buffer(struct yy_buffer_state *b)
{
  struct yy_buffer_state *tmp_if_expr_1;
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    b->yy_n_chars = (unsigned long int)0;
    b->yy_ch_buf[(signed long int)0] = (char)0;
    b->yy_ch_buf[(signed long int)1] = (char)0;
    b->yy_buf_pos = &b->yy_ch_buf[(signed long int)0];
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
    if(b == tmp_if_expr_1)
      yy_load_buffer_state();

  }

}

// yy_get_next_buffer
// file tokenparser.c line 993
static signed int yy_get_next_buffer(void)
{
  char *dest = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf;
  char *source = yytext;
  signed int number_to_move;
  signed int i;
  signed int ret_val;
  if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf + 1l + (signed long int)yy_n_chars >= yy_c_buf_p))
    yy_fatal_error("fatal flex scanner internal error--end of buffer missed");

  char *tmp_post_1;
  char *tmp_post_2;
  _Bool tmp_if_expr_4;
  unsigned long int tmp_post_5;
  signed int return_value_ferror_6;
  signed int return_value_ferror_8;
  if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_fill_buffer == 0)
  {
    if(yy_c_buf_p - yytext == 1l)
      return 1;

    return 2;
  }

  else
  {
    number_to_move = (signed int)(yy_c_buf_p - yytext) - 1;
    i = 0;
    for( ; !(i >= number_to_move); i = i + 1)
    {
      tmp_post_1 = dest;
      dest = dest + 1l;
      tmp_post_2 = source;
      source = source + 1l;
      *tmp_post_1 = *tmp_post_2;
    }
    if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buffer_status == 2)
    {
      yy_n_chars = (unsigned long int)0;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }

    else
    {
      unsigned long int num_to_read = (yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size - (unsigned long int)number_to_move) - (unsigned long int)1;
      while(!(num_to_read >= 1ul))
      {
        struct yy_buffer_state *b = yy_buffer_stack[(signed long int)yy_buffer_stack_top];
        signed int yy_c_buf_p_offset = (signed int)(yy_c_buf_p - b->yy_ch_buf);
        if(!(b->yy_is_our_buffer == 0))
        {
          unsigned long int new_size = b->yy_buf_size * (unsigned long int)2;
          if(!(new_size >= 1ul))
            b->yy_buf_size = b->yy_buf_size + b->yy_buf_size / (unsigned long int)8;

          else
            b->yy_buf_size = b->yy_buf_size * (unsigned long int)2;
          void *return_value_yyrealloc_3;
          return_value_yyrealloc_3=yyrealloc((void *)b->yy_ch_buf, b->yy_buf_size + (unsigned long int)2);
          b->yy_ch_buf = (char *)return_value_yyrealloc_3;
        }

        else
          b->yy_ch_buf = ((char *)NULL);
        if(b->yy_ch_buf == ((char *)NULL))
          yy_fatal_error("fatal error - scanner input buffer overflow");

        yy_c_buf_p = &b->yy_ch_buf[(signed long int)yy_c_buf_p_offset];
        num_to_read = (yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size - (unsigned long int)number_to_move) - (unsigned long int)1;
      }
      if(num_to_read >= 8193ul)
        num_to_read = (unsigned long int)8192;

      if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_is_interactive == 0))
      {
        signed int c = 42;
        unsigned long int n = (unsigned long int)0;
        do
        {
          if(!(n >= num_to_read))
          {
            c=_IO_getc(yyin);
            tmp_if_expr_4 = c != -1 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          if(c == 10 || !tmp_if_expr_4)
            break;

          (&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move])[(signed long int)n] = (char)c;
          n = n + 1ul;
        }
        while((_Bool)1);
        if(c == 10)
        {
          tmp_post_5 = n;
          n = n + 1ul;
          (&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move])[(signed long int)tmp_post_5] = (char)c;
        }

        if(c == -1)
        {
          return_value_ferror_6=ferror(yyin);
          if(!(return_value_ferror_6 == 0))
            yy_fatal_error("input in flex scanner failed");

        }

        yy_n_chars = n;
      }

      else
      {
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        *return_value___errno_location_7 = 0;
        do
        {
          yy_n_chars=fread((void *)&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move], (unsigned long int)1, num_to_read, yyin);
          if(!(yy_n_chars == 0ul))
            break;

          return_value_ferror_8=ferror(yyin);
          if(return_value_ferror_8 == 0)
            break;

          signed int *return_value___errno_location_9;
          return_value___errno_location_9=__errno_location();
          if(!(*return_value___errno_location_9 == 4))
          {
            yy_fatal_error("input in flex scanner failed");
            break;
          }

          signed int *return_value___errno_location_10;
          return_value___errno_location_10=__errno_location();
          *return_value___errno_location_10 = 0;
          clearerr(yyin);
        }
        while((_Bool)1);
      }
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }
    if(yy_n_chars == 0ul)
    {
      if(number_to_move == 0)
      {
        ret_val = 1;
        yyrestart(yyin);
      }

      else
      {
        ret_val = 2;
        yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buffer_status = 2;
      }
    }

    else
      ret_val = 0;
    if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size >= yy_n_chars + (unsigned long int)number_to_move))
    {
      unsigned long int yy_get_next_buffer__1__5__new_size = yy_n_chars + (unsigned long int)number_to_move + (yy_n_chars >> 1);
      void *return_value_yyrealloc_11;
      return_value_yyrealloc_11=yyrealloc((void *)yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf, yy_get_next_buffer__1__5__new_size);
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf = (char *)return_value_yyrealloc_11;
      if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf == ((char *)NULL))
        yy_fatal_error("out of dynamic memory in yy_get_next_buffer()");

    }

    yy_n_chars = yy_n_chars + (unsigned long int)number_to_move;
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)yy_n_chars] = (char)0;
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)(yy_n_chars + (unsigned long int)1)] = (char)0;
    yytext = &yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)0];
    return ret_val;
  }
}

// yy_get_previous_state
// file tokenparser.c line 1127
static signed int yy_get_previous_state(void)
{
  signed int yy_current_state;
  char *yy_cp;
  yy_current_state = yy_start;
  yy_cp = yytext + (signed long int)0;
  signed int tmp_if_expr_1;
  for( ; !(yy_cp >= yy_c_buf_p); yy_cp = yy_cp + 1l)
  {
    unsigned char yy_c;
    if(!(*yy_cp == 0))
      tmp_if_expr_1 = yy_ec[(signed long int)(unsigned int)(unsigned char)*yy_cp];

    else
      tmp_if_expr_1 = 1;
    yy_c = (unsigned char)tmp_if_expr_1;
    if(!(yy_accept[(signed long int)yy_current_state] == 0))
    {
      yy_last_accepting_state = yy_current_state;
      yy_last_accepting_cpos = yy_cp;
    }

    while(!((signed int)yy_chk[(signed long int)((signed int)yy_base[(signed long int)yy_current_state] + (signed int)yy_c)] == yy_current_state))
    {
      yy_current_state = (signed int)yy_def[(signed long int)yy_current_state];
      if(yy_current_state >= 39)
        yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

    }
    yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
  }
  return yy_current_state;
}

// yy_init_buffer
// file tokenparser.c line 1370
static void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file)
{
  signed int oerrno;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  oerrno = *return_value___errno_location_1;
  yy_flush_buffer(b);
  b->yy_input_file = file;
  b->yy_fill_buffer = 1;
  struct yy_buffer_state *tmp_if_expr_2;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
  if(!(b == tmp_if_expr_2))
  {
    b->yy_bs_lineno = 1;
    b->yy_bs_column = 0;
  }

  signed int tmp_if_expr_5;
  signed int return_value_fileno_3;
  signed int return_value_isatty_4;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    return_value_fileno_3=fileno(file);
    return_value_isatty_4=isatty(return_value_fileno_3);
    tmp_if_expr_5 = (signed int)(return_value_isatty_4 > 0);
  }

  else
    tmp_if_expr_5 = 0;
  b->yy_is_interactive = tmp_if_expr_5;
  signed int *return_value___errno_location_6;
  return_value___errno_location_6=__errno_location();
  *return_value___errno_location_6 = oerrno;
}

// yy_init_globals
// file tokenparser.c line 1712
static signed int yy_init_globals(void)
{
  yy_buffer_stack = ((struct yy_buffer_state **)NULL);
  yy_buffer_stack_top = (unsigned long int)0;
  yy_buffer_stack_max = (unsigned long int)0;
  yy_c_buf_p = (char *)0;
  yy_init = 0;
  yy_start = 0;
  yyin = (struct _IO_FILE *)0;
  yyout = (struct _IO_FILE *)0;
  return 0;
}

// yy_load_buffer_state
// file tokenparser.c line 1309
static void yy_load_buffer_state(void)
{
  yy_n_chars = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars;
  yy_c_buf_p = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_pos;
  yytext = yy_c_buf_p;
  yyin = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_input_file;
  yy_hold_char = *yy_c_buf_p;
}

// yy_scan_buffer
// file tokenparser.c line 1525
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned long int size)
{
  struct yy_buffer_state *b;
  _Bool tmp_if_expr_1;
  if(!(size >= 2ul))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)base[(signed long int)(size - (unsigned long int)2)] != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)base[(signed long int)(size - (unsigned long int)1)] != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return ((struct yy_buffer_state *)NULL);

  else
  {
    void *return_value_yyalloc_3;
    return_value_yyalloc_3=yyalloc(sizeof(struct yy_buffer_state) /*72ul*/ );
    b = (struct yy_buffer_state *)return_value_yyalloc_3;
    if(b == ((struct yy_buffer_state *)NULL))
      yy_fatal_error("out of dynamic memory in yy_scan_buffer()");

    b->yy_buf_size = size - (unsigned long int)2;
    b->yy_ch_buf = base;
    b->yy_buf_pos = b->yy_ch_buf;
    b->yy_is_our_buffer = 0;
    b->yy_input_file = ((struct _IO_FILE *)NULL);
    b->yy_n_chars = b->yy_buf_size;
    b->yy_is_interactive = 0;
    b->yy_at_bol = 1;
    b->yy_fill_buffer = 0;
    b->yy_buffer_status = 0;
    yy_switch_to_buffer(b);
    return b;
  }
}

// yy_scan_bytes
// file tokenparser.c line 1575
struct yy_buffer_state * yy_scan_bytes(const char *yybytes, unsigned long int _yybytes_len)
{
  struct yy_buffer_state *b;
  char *buf;
  unsigned long int n;
  unsigned long int i;
  n = _yybytes_len + (unsigned long int)2;
  void *return_value_yyalloc_1;
  return_value_yyalloc_1=yyalloc(n);
  buf = (char *)return_value_yyalloc_1;
  if(buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");

  i = (unsigned long int)0;
  for( ; !(i >= _yybytes_len); i = i + 1ul)
    buf[(signed long int)i] = yybytes[(signed long int)i];
  buf[(signed long int)(_yybytes_len + (unsigned long int)1)] = (char)0;
  buf[(signed long int)_yybytes_len] = buf[(signed long int)(_yybytes_len + (unsigned long int)1)];
  b=yy_scan_buffer(buf, n);
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("bad buffer in yy_scan_bytes()");

  b->yy_is_our_buffer = 1;
  return b;
}

// yy_scan_string
// file tokenparser.c line 1562
struct yy_buffer_state * yy_scan_string(const char *yystr)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(yystr);
  struct yy_buffer_state *return_value_yy_scan_bytes_2;
  return_value_yy_scan_bytes_2=yy_scan_bytes(yystr, return_value_strlen_1);
  return return_value_yy_scan_bytes_2;
}

// yy_switch_to_buffer
// file tokenparser.c line 1278
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer)
{
  yyensure_buffer_stack();
  struct yy_buffer_state *tmp_if_expr_1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
  struct yy_buffer_state *tmp_if_expr_2;
  if(!(tmp_if_expr_1 == new_buffer))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr_2 == ((struct yy_buffer_state *)NULL)))
    {
      *yy_c_buf_p = yy_hold_char;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_pos = yy_c_buf_p;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }

    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = new_buffer;
    yy_load_buffer_state();
    yy_did_buffer_switch_on_eof = 1;
  }

}

// yy_try_NUL_trans
// file tokenparser.c line 1159
static signed int yy_try_NUL_trans(signed int yy_current_state)
{
  signed int yy_is_jam;
  char *yy_cp = yy_c_buf_p;
  unsigned char yy_c = (unsigned char)1;
  if(!(yy_accept[(signed long int)yy_current_state] == 0))
  {
    yy_last_accepting_state = yy_current_state;
    yy_last_accepting_cpos = yy_cp;
  }

  while(!((signed int)yy_chk[(signed long int)((signed int)yy_base[(signed long int)yy_current_state] + (signed int)yy_c)] == yy_current_state))
  {
    yy_current_state = (signed int)yy_def[(signed long int)yy_current_state];
    if(yy_current_state >= 39)
      yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

  }
  yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
  yy_is_jam = (signed int)(yy_current_state == 38);
  return yy_is_jam != 0 ? 0 : yy_current_state;
}

// yyalloc
// file tokenparser.c line 1786
void * yyalloc(unsigned long int size)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(size);
  return (void *)return_value_malloc_1;
}

// yyensure_buffer_stack
// file tokenparser.c line 1476
static void yyensure_buffer_stack(void)
{
  unsigned long int num_to_alloc;
  if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
  {
    num_to_alloc = (unsigned long int)1;
    void *return_value_yyalloc_1;
    return_value_yyalloc_1=yyalloc(num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack = (struct yy_buffer_state **)return_value_yyalloc_1;
    if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
      yy_fatal_error("out of dynamic memory in yyensure_buffer_stack()");

    memset((void *)yy_buffer_stack, 0, num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack_max = num_to_alloc;
    yy_buffer_stack_top = (unsigned long int)0;
    goto __CPROVER_DUMP_L5;
  }

  if(yy_buffer_stack_top >= yy_buffer_stack_max + 18446744073709551615ul)
  {
    signed int grow_size = 8;
    num_to_alloc = yy_buffer_stack_max + (unsigned long int)grow_size;
    void *return_value_yyrealloc_2;
    return_value_yyrealloc_2=yyrealloc((void *)yy_buffer_stack, num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack = (struct yy_buffer_state **)return_value_yyrealloc_2;
    if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
      yy_fatal_error("out of dynamic memory in yyensure_buffer_stack()");

    memset((void *)(yy_buffer_stack + (signed long int)yy_buffer_stack_max), 0, (unsigned long int)grow_size * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack_max = num_to_alloc;
  }


__CPROVER_DUMP_L5:
  ;
}

// yyfree
// file tokenparser.c line 1803
void yyfree(void *ptr)
{
  free((void *)(char *)ptr);
}

// yyget_debug
// file tokenparser.c line 1702
signed int yyget_debug(void)
{
  return yy_flex_debug;
}

// yyget_in
// file tokenparser.c line 1646
struct _IO_FILE * yyget_in(void)
{
  return yyin;
}

// yyget_leng
// file tokenparser.c line 1662
unsigned long int yyget_leng(void)
{
  return yyleng;
}

// yyget_lineno
// file tokenparser.c line 1637
signed int yyget_lineno(void)
{
  return yylineno;
}

// yyget_out
// file tokenparser.c line 1654
struct _IO_FILE * yyget_out(void)
{
  return yyout;
}

// yyget_text
// file tokenparser.c line 1671
char * yyget_text(void)
{
  return yytext;
}

// yylex
// file tokenparser.c line 723
extern signed int yylex(void)
{
  signed int yy_current_state;
  char *yy_cp;
  char *yy_bp;
  signed int yy_act;
  struct yy_buffer_state *tmp_if_expr_1;
  if(yy_init == 0)
  {
    yy_init = 1;
    if(yy_start == 0)
      yy_start = 1;

    if(yyin == ((struct _IO_FILE *)NULL))
      yyin = stdin;

    if(yyout == ((struct _IO_FILE *)NULL))
      yyout = stdout;

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
    if(tmp_if_expr_1 == ((struct yy_buffer_state *)NULL))
    {
      yyensure_buffer_stack();
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]=yy_create_buffer(yyin, 16384);
    }

    yy_load_buffer_state();
  }

  signed int yy_amount_of_matched_text;
  signed int return_value_yy_get_next_buffer_3;
  while((_Bool)1)
  {
    yy_cp = yy_c_buf_p;
    *yy_cp = yy_hold_char;
    yy_bp = yy_cp;
    yy_current_state = yy_start;
    do
    {

    yy_match:
      ;
      unsigned char yy_c = (unsigned char)yy_ec[(signed long int)(unsigned int)(unsigned char)*yy_cp];
      if(!(yy_accept[(signed long int)yy_current_state] == 0))
      {
        yy_last_accepting_state = yy_current_state;
        yy_last_accepting_cpos = yy_cp;
      }

      while(!((signed int)yy_chk[(signed long int)((signed int)yy_base[(signed long int)yy_current_state] + (signed int)yy_c)] == yy_current_state))
      {
        yy_current_state = (signed int)yy_def[(signed long int)yy_current_state];
        if(yy_current_state >= 39)
          yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

      }
      yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
      yy_cp = yy_cp + 1l;
      if(!((signed int)yy_base[(signed long int)yy_current_state] == 50))
        goto yy_match;


    yy_find_action:
      ;
      yy_act = (signed int)yy_accept[(signed long int)yy_current_state];
      if(yy_act == 0)
      {
        yy_cp = yy_last_accepting_cpos;
        yy_current_state = yy_last_accepting_state;
        yy_act = (signed int)yy_accept[(signed long int)yy_current_state];
      }

      yytext = yy_bp;
      yyleng = (unsigned long int)(yy_cp - yy_bp);
      yy_hold_char = *yy_cp;
      *yy_cp = (char)0;
      yy_c_buf_p = yy_cp;

    do_action:
      ;
      for( ; (_Bool)1; yy_act = 8 + (yy_start - 1) / 2 + 1)
      {
        if(!(yy_act == 0))
        {
          if(yy_act == 1)
            goto __CPROVER_DUMP_L16;

          if(yy_act == 2)
            goto __CPROVER_DUMP_L17;

          if(yy_act == 3)
            goto __CPROVER_DUMP_L18;

          if(yy_act == 4)
            goto __CPROVER_DUMP_L19;

          if(yy_act == 5)
            goto __CPROVER_DUMP_L20;

          if(yy_act == 6)
            goto __CPROVER_DUMP_L21;

          if(yy_act == 7)
            goto __CPROVER_DUMP_L22;

          if(yy_act == 1)
            goto __CPROVER_DUMP_L23;

          if(yy_act == 8)
            goto __CPROVER_DUMP_L24;

          goto __CPROVER_DUMP_L35;
        }

        *yy_cp = yy_hold_char;
        yy_cp = yy_last_accepting_cpos;
        yy_current_state = yy_last_accepting_state;
        goto yy_find_action;

      __CPROVER_DUMP_L16:
        ;
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L17:
        ;
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L18:
        ;
        eval_key(yytext, ListKeys);
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L19:
        ;
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L20:
        ;
        eval_value(yytext, ListValues);
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L21:
        ;
        tperrorCheck(yytext);
        goto __CPROVER_DUMP_L36;
        do
        {

        __CPROVER_DUMP_L22:
          ;
          unsigned long int return_value_fwrite_2;
          return_value_fwrite_2=fwrite((const void *)yytext, yyleng, (unsigned long int)1, yyout);
        }
        while((_Bool)0);
        goto __CPROVER_DUMP_L36;

      __CPROVER_DUMP_L23:
        ;
        return 0;

      __CPROVER_DUMP_L24:
        ;
        yy_amount_of_matched_text = (signed int)(yy_cp - yytext) - 1;
        *yy_cp = yy_hold_char;
        if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buffer_status == 0)
        {
          yy_n_chars = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars;
          yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_input_file = yyin;
          yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buffer_status = 1;
        }

        if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf + (signed long int)yy_n_chars >= yy_c_buf_p)
        {
          signed int yy_next_state;
          yy_c_buf_p = yytext + (signed long int)yy_amount_of_matched_text;
          yy_current_state=yy_get_previous_state();
          yy_next_state=yy_try_NUL_trans(yy_current_state);
          yy_bp = yytext + (signed long int)0;
          if(!(yy_next_state == 0))
          {
            yy_c_buf_p = yy_c_buf_p + 1l;
            yy_cp = yy_c_buf_p;
            yy_current_state = yy_next_state;
            goto yy_match;
          }

          else
          {
            yy_cp = yy_c_buf_p;
            goto yy_find_action;
          }
        }

        return_value_yy_get_next_buffer_3=yy_get_next_buffer();
        if(!(return_value_yy_get_next_buffer_3 == 1))
        {
          if(return_value_yy_get_next_buffer_3 == 0)
            goto __CPROVER_DUMP_L32;

          if(return_value_yy_get_next_buffer_3 == 2)
            goto __CPROVER_DUMP_L33;

          goto __CPROVER_DUMP_L34;
        }

        yy_did_buffer_switch_on_eof = 0;
        yy_c_buf_p = yytext + (signed long int)0;
      }
      if(yy_did_buffer_switch_on_eof == 0)
        yyrestart(yyin);

      goto __CPROVER_DUMP_L34;

    __CPROVER_DUMP_L32:
      ;
      yy_c_buf_p = yytext + (signed long int)yy_amount_of_matched_text;
      yy_current_state=yy_get_previous_state();
      yy_cp = yy_c_buf_p;
      yy_bp = yytext + (signed long int)0;
    }
    while((_Bool)1);

  __CPROVER_DUMP_L33:
    ;
    yy_c_buf_p = &yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)yy_n_chars];
    yy_current_state=yy_get_previous_state();
    yy_cp = yy_c_buf_p;
    yy_bp = yytext + (signed long int)0;
    goto yy_find_action;

  __CPROVER_DUMP_L34:
    ;
    continue;

  __CPROVER_DUMP_L35:
    ;
    yy_fatal_error("fatal flex scanner internal error--no action found");

  __CPROVER_DUMP_L36:
    ;
  }
}

// yylex_destroy
// file tokenparser.c line 1741
signed int yylex_destroy(void)
{
  struct yy_buffer_state *tmp_if_expr_1;
  struct yy_buffer_state *tmp_if_expr_2;
  do
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
    if(tmp_if_expr_1 == ((struct yy_buffer_state *)NULL))
      break;

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
    yy_delete_buffer(tmp_if_expr_2);
    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = (struct yy_buffer_state *)(void *)0;
    yypop_buffer_state();
  }
  while((_Bool)1);
  yyfree((void *)yy_buffer_stack);
  yy_buffer_stack = (struct yy_buffer_state **)(void *)0;
  yy_init_globals();
  return 0;
}

// yypop_buffer_state
// file tokenparser.c line 1457
void yypop_buffer_state(void)
{
  struct yy_buffer_state *tmp_if_expr_1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
  struct yy_buffer_state *tmp_if_expr_2;
  struct yy_buffer_state *tmp_if_expr_3;
  if(!(tmp_if_expr_1 == ((struct yy_buffer_state *)NULL)))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
    yy_delete_buffer(tmp_if_expr_2);
    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = (struct yy_buffer_state *)(void *)0;
    if(yy_buffer_stack_top >= 1ul)
      yy_buffer_stack_top = yy_buffer_stack_top - 1ul;

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_3 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_3 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr_3 == ((struct yy_buffer_state *)NULL)))
    {
      yy_load_buffer_state();
      yy_did_buffer_switch_on_eof = 1;
    }

  }

}

// yypush_buffer_state
// file tokenparser.c line 1427
void yypush_buffer_state(struct yy_buffer_state *new_buffer)
{
  struct yy_buffer_state *tmp_if_expr_1;
  struct yy_buffer_state *tmp_if_expr_2;
  if(!(new_buffer == ((struct yy_buffer_state *)NULL)))
  {
    yyensure_buffer_stack();
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr_1 == ((struct yy_buffer_state *)NULL)))
    {
      *yy_c_buf_p = yy_hold_char;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_pos = yy_c_buf_p;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr_2 == ((struct yy_buffer_state *)NULL)))
      yy_buffer_stack_top = yy_buffer_stack_top + 1ul;

    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = new_buffer;
    yy_load_buffer_state();
    yy_did_buffer_switch_on_eof = 1;
  }

}

// yyrealloc
// file tokenparser.c line 1791
void * yyrealloc(void *ptr, unsigned long int size)
{
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)(char *)ptr, size);
  return (void *)return_value_realloc_1;
}

// yyrestart
// file tokenparser.c line 1261
void yyrestart(struct _IO_FILE *input_file)
{
  struct yy_buffer_state *tmp_if_expr_1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr_1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr_1 = (struct yy_buffer_state *)(void *)0;
  if(tmp_if_expr_1 == ((struct yy_buffer_state *)NULL))
  {
    yyensure_buffer_stack();
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]=yy_create_buffer(yyin, 16384);
  }

  struct yy_buffer_state *tmp_if_expr_2;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr_2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr_2 = (struct yy_buffer_state *)(void *)0;
  yy_init_buffer(tmp_if_expr_2, input_file);
  yy_load_buffer_state();
}

// yyset_debug
// file tokenparser.c line 1707
void yyset_debug(signed int bdebug)
{
  yy_flex_debug = bdebug;
}

// yyset_in
// file tokenparser.c line 1692
void yyset_in(struct _IO_FILE *in_str)
{
  yyin = in_str;
}

// yyset_lineno
// file tokenparser.c line 1680
void yyset_lineno(signed int line_number)
{
  yylineno = line_number;
}

// yyset_out
// file tokenparser.c line 1697
void yyset_out(struct _IO_FILE *out_str)
{
  yyout = out_str;
}

