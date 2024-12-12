// #anon_enum_LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED=1_LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT=2
// file ../../libusb/libusb.h line 1897
enum anonymous_2 { LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED=1, LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT=2 };

// #anon_enum_LIBUSB_HOTPLUG_NO_FLAGS=0_LIBUSB_HOTPLUG_ENUMERATE=1
// file ../../libusb/libusb.h line 1884
enum anonymous_1 { LIBUSB_HOTPLUG_NO_FLAGS=0, LIBUSB_HOTPLUG_ENUMERATE=1 };

// #anon_enum_TEST_STATUS_SUCCESS=0_TEST_STATUS_FAILURE=1_TEST_STATUS_ERROR=2_TEST_STATUS_SKIP=3
// file ../../tests/libusb_testlib.h line 36
enum anonymous_6 { TEST_STATUS_SUCCESS=0, TEST_STATUS_FAILURE=1, TEST_STATUS_ERROR=2, TEST_STATUS_SKIP=3 };

// tag-#anon#ST[*{*{S8}_S8_}_*{S8}_S8__'test_names'||S32'test_count'||S32'list_tests'||S32'verbose'||S32'old_stdout'||S32'old_stderr'||U32'_pad0'||*{SYM#tag-_IO_FILE#}_SYM#tag-_IO_FILE#_'output_file'||S32'null_fd'||U32'_pad1'|]
// file ../../tests/libusb_testlib.h line 51
struct anonymous_5;

// tag-#anon#ST[*{cS8}_cS8_'name'||*{EN#anon_enum_TEST_STATUS_SUCCESS=0_TEST_STATUS_FAILURE=1_TEST_STATUS_ERROR=2_TEST_STATUS_SKIP=3#{U32}_U32_(*{SYM#tag-#anon#ST[*{*{S8}_S8_}_*{S8}_S8__'test_names'||S32'test_count'||S32'list_tests'||S32'verbose'||S32'old_stdout'||S32'old_stderr'||U32'_pad0'||*{SYM#tag-_IO_FILE#}_SYM#tag-_IO_FILE#_'output_file'||S32'null_fd'||U32'_pad1'|]#}_SYM#tag-#anon#ST[*{*{S8}_S8_}_*{S8}_S8__'test_names'||S32'test_count'||S32'list_tests'||S32'verbose'||S32'old_stdout'||S32'old_stderr'||U32'_pad0'||*{SYM#tag-_IO_FILE#}_SYM#tag-_IO_FILE#_'output_file'||S32'null_fd'||U32'_pad1'|]#_)->EN#anon_enum_TEST_STATUS_SUCCESS=0_TEST_STATUS_FAILURE=1_TEST_STATUS_ERROR=2_TEST_STATUS_SKIP=3#{U32}_U32_}_EN#anon_enum_TEST_STATUS_SUCCESS=0_TEST_STATUS_FAILURE=1_TEST_STATUS_ERROR=2_TEST_STATUS_SKIP=3#{U32}_U32_(*{SYM#tag-#anon#ST[*{*{S8}_S8_}_*{S8}_S8__'test_names'||S32'test_count'||S32'list_tests'||S32'verbose'||S32'old_stdout'||S32'old_stderr'||U32'_pad0'||*{SYM#tag-_IO_FILE#}_SYM#tag-_IO_FILE#_'output_file'||S32'null_fd'||U32'_pad1'|]#}_SYM#tag-#anon#ST[*{*{S8}_S8_}_*{S8}_S8__'test_names'||S32'test_count'||S32'list_tests'||S32'verbose'||S32'old_stdout'||S32'old_stderr'||U32'_pad0'||*{SYM#tag-_IO_FILE#}_SYM#tag-_IO_FILE#_'output_file'||S32'null_fd'||U32'_pad1'|]#_)->EN#anon_enum_TEST_STATUS_SUCCESS=0_TEST_STATUS_FAILURE=1_TEST_STATUS_ERROR=2_TEST_STATUS_SKIP=3#{U32}_U32__'function'|]
// file ../../tests/libusb_testlib.h line 79
struct anonymous_7;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous;

// tag-#anon#UN[*{SYM#tag-usbfs_urb#}_SYM#tag-usbfs_urb#_'urbs'||*{*{SYM#tag-usbfs_urb#}_SYM#tag-usbfs_urb#_}_*{SYM#tag-usbfs_urb#}_SYM#tag-usbfs_urb#__'iso_urbs'|]
// file ../../libusb/os/linux_usbfs.c line 167
union anonymous_10;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_4;

// tag-#anon#UN[S32'number_of_packets'||U32'stream_id'|]
// file ../../libusb/os/linux_usbfs.h line 97
union anonymous_8;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_9;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-discovered_devs
// file ../../libusb/libusbi.h line 533
struct discovered_devs;

// tag-itimerspec
// file /usr/include/time.h line 161
struct itimerspec;

// tag-libusb_bos_descriptor
// file ../../libusb/libusb.h line 746
struct libusb_bos_descriptor;

// tag-libusb_bos_dev_capability_descriptor
// file ../../libusb/libusb.h line 722
struct libusb_bos_dev_capability_descriptor;

// tag-libusb_config_descriptor
// file ../../libusb/libusb.h line 643
struct libusb_config_descriptor;

// tag-libusb_container_id_descriptor
// file ../../libusb/libusb.h line 845
struct libusb_container_id_descriptor;

// tag-libusb_context
// file ../../libusb/libusb.h line 898
struct libusb_context;

// tag-libusb_control_setup
// file ../../libusb/libusb.h line 868
struct libusb_control_setup;

// tag-libusb_device
// file ../../libusb/libusb.h line 899
struct libusb_device;

// tag-libusb_device_descriptor
// file ../../libusb/libusb.h line 477
struct libusb_device_descriptor;

// tag-libusb_device_handle
// file ../../libusb/libusb.h line 900
struct libusb_device_handle;

// tag-libusb_endpoint_descriptor
// file ../../libusb/libusb.h line 531
struct libusb_endpoint_descriptor;

// tag-libusb_error
// file ../../libusb/libusb.h line 1054
enum libusb_error { LIBUSB_SUCCESS=0, LIBUSB_ERROR_IO=-1, LIBUSB_ERROR_INVALID_PARAM=-2, LIBUSB_ERROR_ACCESS=-3, LIBUSB_ERROR_NO_DEVICE=-4, LIBUSB_ERROR_NOT_FOUND=-5, LIBUSB_ERROR_BUSY=-6, LIBUSB_ERROR_TIMEOUT=-7, LIBUSB_ERROR_OVERFLOW=-8, LIBUSB_ERROR_PIPE=-9, LIBUSB_ERROR_INTERRUPTED=-10, LIBUSB_ERROR_NO_MEM=-11, LIBUSB_ERROR_NOT_SUPPORTED=-12, LIBUSB_ERROR_OTHER=-99 };

// tag-libusb_hotplug_callback
// file ../../libusb/hotplug.h line 34
struct libusb_hotplug_callback;

// tag-libusb_hotplug_message
// file ../../libusb/hotplug.h line 71
struct libusb_hotplug_message;

// tag-libusb_interface
// file ../../libusb/libusb.h line 629
struct libusb_interface;

// tag-libusb_interface_descriptor
// file ../../libusb/libusb.h line 581
struct libusb_interface_descriptor;

// tag-libusb_iso_packet_descriptor
// file ../../libusb/libusb.h line 1177
struct libusb_iso_packet_descriptor;

// tag-libusb_log_level
// file ../../libusb/libusb.h line 1295
enum libusb_log_level { LIBUSB_LOG_LEVEL_NONE=0, LIBUSB_LOG_LEVEL_ERROR=1, LIBUSB_LOG_LEVEL_WARNING=2, LIBUSB_LOG_LEVEL_INFO=3, LIBUSB_LOG_LEVEL_DEBUG=4 };

// tag-libusb_pollfd
// file ../../libusb/libusb.h line 1823
struct libusb_pollfd;

// tag-libusb_speed
// file ../../libusb/libusb.h line 975
enum libusb_speed { LIBUSB_SPEED_UNKNOWN=0, LIBUSB_SPEED_LOW=1, LIBUSB_SPEED_FULL=2, LIBUSB_SPEED_HIGH=3, LIBUSB_SPEED_SUPER=4 };

// tag-libusb_ss_endpoint_companion_descriptor
// file ../../libusb/libusb.h line 691
struct libusb_ss_endpoint_companion_descriptor;

// tag-libusb_ss_usb_device_capability_descriptor
// file ../../libusb/libusb.h line 803
struct libusb_ss_usb_device_capability_descriptor;

// tag-libusb_transfer
// file ../../libusb/libusb.h line 1188
struct libusb_transfer;

// tag-libusb_transfer_status
// file ../../libusb/libusb.h line 1106
enum libusb_transfer_status { LIBUSB_TRANSFER_COMPLETED=0, LIBUSB_TRANSFER_ERROR=1, LIBUSB_TRANSFER_TIMED_OUT=2, LIBUSB_TRANSFER_CANCELLED=3, LIBUSB_TRANSFER_STALL=4, LIBUSB_TRANSFER_NO_DEVICE=5, LIBUSB_TRANSFER_OVERFLOW=6 };

// tag-libusb_transfer_type
// file ../../libusb/libusb.h line 332
enum libusb_transfer_type { LIBUSB_TRANSFER_TYPE_CONTROL=0, LIBUSB_TRANSFER_TYPE_ISOCHRONOUS=1, LIBUSB_TRANSFER_TYPE_BULK=2, LIBUSB_TRANSFER_TYPE_INTERRUPT=3, LIBUSB_TRANSFER_TYPE_BULK_STREAM=4 };

// tag-libusb_usb_2_0_extension_descriptor
// file ../../libusb/libusb.h line 777
struct libusb_usb_2_0_extension_descriptor;

// tag-libusb_version
// file ../../libusb/libusb.h line 905
struct libusb_version;

// tag-linux_device_handle_priv
// file ../../libusb/os/linux_usbfs.c line 145
struct linux_device_handle_priv;

// tag-linux_device_priv
// file ../../libusb/os/linux_usbfs.c line 138
struct linux_device_priv;

// tag-linux_transfer_priv
// file ../../libusb/os/linux_usbfs.c line 166
struct linux_transfer_priv;

// tag-list_head
// file ../../libusb/libusbi.h line 77
struct list_head;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-reap_action
// file ../../libusb/os/linux_usbfs.c line 150
enum reap_action { NORMAL=0, SUBMIT_FAILED=1, CANCELLED=2, COMPLETED_EARLY=3, ERROR=4 };

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

// tag-udev
// file /usr/include/libudev.h line 36
struct udev;

// tag-udev_device
// file /usr/include/libudev.h line 76
struct udev_device;

// tag-udev_enumerate
// file /usr/include/libudev.h line 140
struct udev_enumerate;

// tag-udev_list_entry
// file /usr/include/libudev.h line 54
struct udev_list_entry;

// tag-udev_monitor
// file /usr/include/libudev.h line 117
struct udev_monitor;

// tag-usb_descriptor_header
// file ../../libusb/libusbi.h line 461
struct usb_descriptor_header;

// tag-usbfs_ctrltransfer
// file ../../libusb/os/linux_usbfs.h line 28
struct usbfs_ctrltransfer;

// tag-usbfs_disconnect_claim
// file ../../libusb/os/linux_usbfs.h line 132
struct usbfs_disconnect_claim;

// tag-usbfs_getdriver
// file ../../libusb/os/linux_usbfs.h line 60
struct usbfs_getdriver;

// tag-usbfs_ioctl
// file ../../libusb/os/linux_usbfs.h line 112
struct usbfs_ioctl;

// tag-usbfs_iso_packet_desc
// file ../../libusb/os/linux_usbfs.h line 78
struct usbfs_iso_packet_desc;

// tag-usbfs_setinterface
// file ../../libusb/os/linux_usbfs.h line 52
struct usbfs_setinterface;

// tag-usbfs_streams
// file ../../libusb/os/linux_usbfs.h line 138
struct usbfs_streams;

// tag-usbfs_urb
// file ../../libusb/os/linux_usbfs.h line 88
struct usbfs_urb;

// tag-usbi_os_backend
// file ../../libusb/libusbi.h line 552
struct usbi_os_backend;

// tag-usbi_pollfd
// file ../../libusb/libusbi.h line 516
struct usbi_pollfd;

// tag-usbi_transfer
// file ../../libusb/libusbi.h line 394
struct usbi_transfer;

// tag-utsname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 48
struct utsname;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __read_sysfs_attr
// file ../../libusb/os/linux_usbfs.c line 538
static signed int __read_sysfs_attr(struct libusb_context *ctx, const char *devname, const char *attr);
// _device_handle_priv
// file ../../libusb/os/linux_usbfs.c line 231
static struct linux_device_handle_priv * _device_handle_priv(struct libusb_device_handle *handle);
// _device_priv
// file ../../libusb/os/linux_usbfs.c line 226
static struct linux_device_priv * _device_priv(struct libusb_device *dev);
// _get_usbfs_fd
// file ../../libusb/os/linux_usbfs.c line 181
static signed int _get_usbfs_fd(struct libusb_device *dev, unsigned int mode, signed int silent);
// _is_usbdev_entry
// file ../../libusb/os/linux_usbfs.c line 239
static signed int _is_usbdev_entry(struct dirent *entry, signed int *bus_p, signed int *dev_p);
// _open_sysfs_attr
// file ../../libusb/os/linux_usbfs.c line 519
static signed int _open_sysfs_attr(struct libusb_device *dev, const char *attr);
// add_to_flying_list
// file ../../libusb/io.c line 1360
static signed int add_to_flying_list(struct usbi_transfer *transfer);
// arm_timerfd_for_next_timeout
// file ../../libusb/io.c line 1321
static signed int arm_timerfd_for_next_timeout(struct libusb_context *ctx);
// asprintf
// file /usr/include/stdio.h line 405
extern signed int asprintf(char ** restrict , const char *, ...);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calculate_timeout
// file ../../libusb/io.c line 1195
static signed int calculate_timeout(struct usbi_transfer *transfer);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_usb_vfs
// file ../../libusb/os/linux_usbfs.c line 254
static signed int check_usb_vfs(const char *dirname);
// claim_interface
// file ../../libusb/os/linux_usbfs.c line 1377
static signed int claim_interface(struct libusb_device_handle *handle, signed int iface);
// cleanup_test_output
// file ../../tests/testlib.c line 80
static void cleanup_test_output(struct anonymous_5 *ctx);
// clear_configuration
// file ../../libusb/descriptor.c line 365
static void clear_configuration(struct libusb_config_descriptor *config);
// clear_endpoint
// file ../../libusb/descriptor.c line 95
static void clear_endpoint(struct libusb_endpoint_descriptor *endpoint);
// clear_interface
// file ../../libusb/descriptor.c line 191
static void clear_interface(struct libusb_interface *usb_interface);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// detach_kernel_driver_and_claim
// file ../../libusb/os/linux_usbfs.c line 1647
static signed int detach_kernel_driver_and_claim(struct libusb_device_handle *handle, signed int interface);
// disarm_timerfd
// file ../../libusb/io.c line 1303
static signed int disarm_timerfd(struct libusb_context *ctx);
// discard_urbs
// file ../../libusb/os/linux_usbfs.c line 1715
static signed int discard_urbs(struct usbi_transfer *itransfer, signed int first, signed int last_plus_one);
// discovered_devs_alloc
// file ../../libusb/core.c line 606
static struct discovered_devs * discovered_devs_alloc(void);
// discovered_devs_append
// file ../../libusb/core.c line 620
struct discovered_devs * discovered_devs_append(struct discovered_devs *discdevs, struct libusb_device *dev);
// discovered_devs_free
// file ../../libusb/core.c line 647
static void discovered_devs_free(struct discovered_devs *discdevs);
// do_close
// file ../../libusb/core.c line 1315
static void do_close(struct libusb_context *ctx, struct libusb_device_handle *dev_handle);
// do_streams_ioctl
// file ../../libusb/os/linux_usbfs.c line 1508
static signed int do_streams_ioctl(struct libusb_device_handle *handle, signed long int req, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints);
// do_sync_bulk_transfer
// file ../../libusb/sync.c line 159
static signed int do_sync_bulk_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, signed int *transferred, unsigned int timeout, unsigned char type);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// find_endpoint
// file ../../libusb/core.c line 984
static struct libusb_endpoint_descriptor * find_endpoint(struct libusb_config_descriptor *config, unsigned char endpoint);
// find_monotonic_clock
// file ../../libusb/os/linux_usbfs.c line 326
static signed int find_monotonic_clock(void);
// find_usbfs_path
// file ../../libusb/os/linux_usbfs.c line 277
static const char * find_usbfs_path(void);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_iso_urbs
// file ../../libusb/os/linux_usbfs.c line 1751
static void free_iso_urbs(struct linux_transfer_priv *tpriv);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// get_next_timeout
// file ../../libusb/io.c line 2220
static signed int get_next_timeout(struct libusb_context *ctx, struct timeval *tv, struct timeval *out);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_bulk_completion
// file ../../libusb/os/linux_usbfs.c line 2208
static signed int handle_bulk_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb);
// handle_control_completion
// file ../../libusb/os/linux_usbfs.c line 2465
static signed int handle_control_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb);
// handle_events
// file ../../libusb/io.c line 2030
static signed int handle_events(struct libusb_context *ctx, struct timeval *tv);
// handle_iso_completion
// file ../../libusb/os/linux_usbfs.c line 2344
static signed int handle_iso_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb);
// handle_timeout
// file ../../libusb/io.c line 1940
static void handle_timeout(struct usbi_transfer *itransfer);
// handle_timeouts
// file ../../libusb/io.c line 1997
static signed int handle_timeouts(struct libusb_context *ctx);
// handle_timeouts_locked
// file ../../libusb/io.c line 1955
static signed int handle_timeouts_locked(struct libusb_context *ctx);
// handle_timerfd_trigger
// file ../../libusb/io.c line 2008
static signed int handle_timerfd_trigger(struct libusb_context *ctx);
// initialize_device
// file ../../libusb/os/linux_usbfs.c line 872
static signed int initialize_device(struct libusb_device *dev, unsigned char busnum, unsigned char devaddr, const char *sysfs_dir);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// kernel_version_ge
// file ../../libusb/os/linux_usbfs.c line 343
static signed int kernel_version_ge(signed int major, signed int minor, signed int sublevel);
// libusb_alloc_streams
// file ../../libusb/core.c line 1763
signed int libusb_alloc_streams(struct libusb_device_handle *dev, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints);
// libusb_alloc_transfer
// file ../../libusb/io.c line 1248
struct libusb_transfer * libusb_alloc_transfer(signed int iso_packets);
// libusb_attach_kernel_driver
// file ../../libusb/core.c line 1891
signed int libusb_attach_kernel_driver(struct libusb_device_handle *dev, signed int interface_number);
// libusb_bulk_transfer
// file ../../libusb/sync.c line 253
signed int libusb_bulk_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *data, signed int length, signed int *transferred, unsigned int timeout);
// libusb_cancel_transfer
// file ../../libusb/io.c line 1536
signed int libusb_cancel_transfer(struct libusb_transfer *transfer);
// libusb_claim_interface
// file ../../libusb/core.c line 1575
signed int libusb_claim_interface(struct libusb_device_handle *dev, signed int interface_number);
// libusb_clear_halt
// file ../../libusb/core.c line 1704
signed int libusb_clear_halt(struct libusb_device_handle *dev, unsigned char endpoint);
// libusb_close
// file ../../libusb/core.c line 1384
void libusb_close(struct libusb_device_handle *dev_handle);
// libusb_control_transfer
// file ../../libusb/libusb.h line 1740
signed int libusb_control_transfer(struct libusb_device_handle *dev_handle, unsigned char bmRequestType, unsigned char bRequest, unsigned short int wValue, unsigned short int wIndex, unsigned char *data, unsigned short int wLength, unsigned int timeout);
// libusb_control_transfer_get_data
// file ../../libusb/libusb.h line 1418
static inline unsigned char * libusb_control_transfer_get_data(struct libusb_transfer *transfer);
// libusb_cpu_to_le16
// file ../../libusb/libusb.h line 161
static inline unsigned short int libusb_cpu_to_le16(const unsigned short int x);
// libusb_cpu_to_le16_link1
// file ../../libusb/libusb.h line 161
static inline unsigned short int libusb_cpu_to_le16_link1(const unsigned short int x_link1);
// libusb_detach_kernel_driver
// file ../../libusb/core.c line 1857
signed int libusb_detach_kernel_driver(struct libusb_device_handle *dev, signed int interface_number);
// libusb_error_name
// file ../../libusb/core.c line 2394
const char * libusb_error_name(signed int error_code);
// libusb_event_handler_active
// file ../../libusb/io.c line 1832
signed int libusb_event_handler_active(struct libusb_context *ctx);
// libusb_event_handling_ok
// file ../../libusb/io.c line 1804
signed int libusb_event_handling_ok(struct libusb_context *ctx);
// libusb_exit
// file ../../libusb/libusb.h line 1304
void libusb_exit(struct libusb_context *ctx);
// libusb_fill_bulk_transfer
// file ../../libusb/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout);

//

// libusb_fill_control_setup
// file ../../libusb/libusb.h line 1465
static inline void libusb_fill_control_setup(unsigned char *buffer, unsigned char bmRequestType, unsigned char bRequest, unsigned short int wValue, unsigned short int wIndex, unsigned short int wLength);
// libusb_fill_control_transfer
// file ../../libusb/libusb.h line 1514
static inline void libusb_fill_control_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char *buffer, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout);

//

// libusb_free_bos_descriptor
// file ../../libusb/descriptor.c line 953
void libusb_free_bos_descriptor(struct libusb_bos_descriptor *bos);
// libusb_free_config_descriptor
// file ../../libusb/libusb.h line 1329
void libusb_free_config_descriptor(struct libusb_config_descriptor *config);
// libusb_free_container_id_descriptor
// file ../../libusb/descriptor.c line 1132
void libusb_free_container_id_descriptor(struct libusb_container_id_descriptor *container_id);
// libusb_free_device_list
// file ../../libusb/libusb.h line 1314
void libusb_free_device_list(struct libusb_device **list, signed int unref_devices);
// libusb_free_pollfds
// file ../../libusb/io.c line 2699
void libusb_free_pollfds(struct libusb_pollfd **pollfds);
// libusb_free_ss_endpoint_companion_descriptor
// file ../../libusb/descriptor.c line 808
void libusb_free_ss_endpoint_companion_descriptor(struct libusb_ss_endpoint_companion_descriptor *ep_comp);
// libusb_free_ss_usb_device_capability_descriptor
// file ../../libusb/descriptor.c line 1075
void libusb_free_ss_usb_device_capability_descriptor(struct libusb_ss_usb_device_capability_descriptor *ss_usb_device_cap);
// libusb_free_streams
// file ../../libusb/core.c line 1790
signed int libusb_free_streams(struct libusb_device_handle *dev, unsigned char *endpoints, signed int num_endpoints);
// libusb_free_transfer
// file ../../libusb/io.c line 1286
void libusb_free_transfer(struct libusb_transfer *transfer);
// libusb_free_usb_2_0_extension_descriptor
// file ../../libusb/descriptor.c line 1017
void libusb_free_usb_2_0_extension_descriptor(struct libusb_usb_2_0_extension_descriptor *usb_2_0_extension);
// libusb_get_active_config_descriptor
// file ../../libusb/libusb.h line 1323
signed int libusb_get_active_config_descriptor(struct libusb_device *dev, struct libusb_config_descriptor **config);
// libusb_get_bos_descriptor
// file ../../libusb/descriptor.c line 904
signed int libusb_get_bos_descriptor(struct libusb_device_handle *handle, struct libusb_bos_descriptor **bos);
// libusb_get_bus_number
// file ../../libusb/core.c line 877
unsigned char libusb_get_bus_number(struct libusb_device *dev);
// libusb_get_config_descriptor
// file ../../libusb/descriptor.c line 625
signed int libusb_get_config_descriptor(struct libusb_device *dev, unsigned char config_index, struct libusb_config_descriptor **config);
// libusb_get_config_descriptor_by_value
// file ../../libusb/descriptor.c line 709
signed int libusb_get_config_descriptor_by_value(struct libusb_device *dev, unsigned char bConfigurationValue, struct libusb_config_descriptor **config);
// libusb_get_configuration
// file ../../libusb/core.c line 1462
signed int libusb_get_configuration(struct libusb_device_handle *dev, signed int *config);
// libusb_get_container_id_descriptor
// file ../../libusb/descriptor.c line 1094
signed int libusb_get_container_id_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_container_id_descriptor **container_id);
// libusb_get_descriptor
// file ../../libusb/libusb.h line 1764
static inline signed int libusb_get_descriptor(struct libusb_device_handle *dev, unsigned char desc_type, unsigned char desc_index, unsigned char *data, signed int length);
// libusb_get_device
// file ../../libusb/core.c line 1437
struct libusb_device * libusb_get_device(struct libusb_device_handle *dev_handle);
// libusb_get_device_address
// file ../../libusb/core.c line 968
unsigned char libusb_get_device_address(struct libusb_device *dev);
// libusb_get_device_descriptor
// file ../../libusb/libusb.h line 1321
signed int libusb_get_device_descriptor(struct libusb_device *dev, struct libusb_device_descriptor *desc);
// libusb_get_device_list
// file ../../libusb/libusb.h line 1312
signed long int libusb_get_device_list(struct libusb_context *ctx, struct libusb_device ***list);
// libusb_get_device_speed
// file ../../libusb/core.c line 979
signed int libusb_get_device_speed(struct libusb_device *dev);
// libusb_get_max_iso_packet_size
// file ../../libusb/core.c line 1078
signed int libusb_get_max_iso_packet_size(struct libusb_device *dev, unsigned char endpoint);
// libusb_get_max_packet_size
// file ../../libusb/core.c line 1025
signed int libusb_get_max_packet_size(struct libusb_device *dev, unsigned char endpoint);
// libusb_get_next_timeout
// file ../../libusb/io.c line 2487
signed int libusb_get_next_timeout(struct libusb_context *ctx, struct timeval *tv);
// libusb_get_parent
// file ../../libusb/core.c line 958
struct libusb_device * libusb_get_parent(struct libusb_device *dev);
// libusb_get_pollfds
// file ../../libusb/io.c line 2659
struct libusb_pollfd ** libusb_get_pollfds(struct libusb_context *ctx);
// libusb_get_port_number
// file ../../libusb/core.c line 896
unsigned char libusb_get_port_number(struct libusb_device *dev);
// libusb_get_port_numbers
// file ../../libusb/core.c line 912
signed int libusb_get_port_numbers(struct libusb_device *dev, unsigned char *port_numbers, signed int port_numbers_len);
// libusb_get_port_path
// file ../../libusb/core.c line 938
signed int libusb_get_port_path(struct libusb_context *ctx, struct libusb_device *dev, unsigned char *port_numbers, unsigned char port_numbers_len);
// libusb_get_ss_endpoint_companion_descriptor
// file ../../libusb/descriptor.c line 763
signed int libusb_get_ss_endpoint_companion_descriptor(struct libusb_context *ctx, struct libusb_endpoint_descriptor *endpoint, struct libusb_ss_endpoint_companion_descriptor **ep_comp);
// libusb_get_ss_usb_device_capability_descriptor
// file ../../libusb/descriptor.c line 1036
signed int libusb_get_ss_usb_device_capability_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_ss_usb_device_capability_descriptor **ss_usb_device_cap);
// libusb_get_string_descriptor
// file ../../libusb/libusb.h line 1786
static inline signed int libusb_get_string_descriptor(struct libusb_device_handle *dev, unsigned char desc_index, unsigned short int langid, unsigned char *data, signed int length);
// libusb_get_string_descriptor_ascii
// file ../../libusb/descriptor.c line 1150
signed int libusb_get_string_descriptor_ascii(struct libusb_device_handle *dev, unsigned char desc_index, unsigned char *data, signed int length);
// libusb_get_usb_2_0_extension_descriptor
// file ../../libusb/descriptor.c line 978
signed int libusb_get_usb_2_0_extension_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_usb_2_0_extension_descriptor **usb_2_0_extension);
// libusb_get_version
// file ../../libusb/core.c line 2449
struct libusb_version * libusb_get_version(void);
// libusb_handle_events
// file ../../libusb/io.c line 2356
signed int libusb_handle_events(struct libusb_context *ctx);
// libusb_handle_events_completed
// file ../../libusb/io.c line 2378
signed int libusb_handle_events_completed(struct libusb_context *ctx, signed int *completed);
// libusb_handle_events_locked
// file ../../libusb/io.c line 2404
signed int libusb_handle_events_locked(struct libusb_context *ctx, struct timeval *tv);
// libusb_handle_events_timeout
// file ../../libusb/libusb.h line 1808
signed int libusb_handle_events_timeout(struct libusb_context *ctx, struct timeval *tv);
// libusb_handle_events_timeout_completed
// file ../../libusb/io.c line 2267
signed int libusb_handle_events_timeout_completed(struct libusb_context *ctx, struct timeval *tv, signed int *completed);
// libusb_has_capability
// file ../../libusb/core.c line 2170
signed int libusb_has_capability(unsigned int capability);
// libusb_hotplug_deregister_callback
// file ../../libusb/hotplug.c line 308
void libusb_hotplug_deregister_callback(struct libusb_context *ctx, signed int handle);
// libusb_hotplug_register_callback
// file ../../libusb/hotplug.c line 230
signed int libusb_hotplug_register_callback(struct libusb_context *ctx, enum anonymous_2 events, enum anonymous_1 flags, signed int vendor_id, signed int product_id, signed int dev_class, signed int (*cb_fn)(struct libusb_context *, struct libusb_device *, enum anonymous_2, void *), void *user_data, signed int *handle);

//

// libusb_init
// file ../../libusb/libusb.h line 1303
signed int libusb_init(struct libusb_context **context);
// libusb_interrupt_transfer
// file ../../libusb/sync.c line 302
signed int libusb_interrupt_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *data, signed int length, signed int *transferred, unsigned int timeout);
// libusb_kernel_driver_active
// file ../../libusb/core.c line 1822
signed int libusb_kernel_driver_active(struct libusb_device_handle *dev, signed int interface_number);
// libusb_lock_event_waiters
// file ../../libusb/io.c line 1869
void libusb_lock_event_waiters(struct libusb_context *ctx);
// libusb_lock_events
// file ../../libusb/libusb.h line 1800
void libusb_lock_events(struct libusb_context *ctx);
// libusb_open
// file ../../libusb/core.c line 1218
signed int libusb_open(struct libusb_device *dev, struct libusb_device_handle **handle);
// libusb_open_device_with_vid_pid
// file ../../libusb/core.c line 1280
struct libusb_device_handle * libusb_open_device_with_vid_pid(struct libusb_context *ctx, unsigned short int vendor_id, unsigned short int product_id);
// libusb_pollfds_handle_timeouts
// file ../../libusb/io.c line 2448
signed int libusb_pollfds_handle_timeouts(struct libusb_context *ctx);
// libusb_ref_device
// file ../../libusb/core.c line 1119
struct libusb_device * libusb_ref_device(struct libusb_device *dev);
// libusb_release_interface
// file ../../libusb/core.c line 1619
signed int libusb_release_interface(struct libusb_device_handle *dev, signed int interface_number);
// libusb_reset_device
// file ../../libusb/core.c line 1733
signed int libusb_reset_device(struct libusb_device_handle *dev);
// libusb_set_auto_detach_kernel_driver
// file ../../libusb/core.c line 1927
signed int libusb_set_auto_detach_kernel_driver(struct libusb_device_handle *dev, signed int enable);
// libusb_set_configuration
// file ../../libusb/core.c line 1540
signed int libusb_set_configuration(struct libusb_device_handle *dev, signed int configuration);
// libusb_set_debug
// file ../../libusb/libusb.h line 1305
void libusb_set_debug(struct libusb_context *ctx, signed int level);
// libusb_set_interface_alt_setting
// file ../../libusb/core.c line 1664
signed int libusb_set_interface_alt_setting(struct libusb_device_handle *dev, signed int interface_number, signed int alternate_setting);
// libusb_set_pollfd_notifiers
// file ../../libusb/io.c line 2565
void libusb_set_pollfd_notifiers(struct libusb_context *ctx, void (*added_cb)(signed int, signed short int, void *), void (*removed_cb)(signed int, void *), void *user_data);

//


//

// libusb_setlocale
// file ../../libusb/strerror.c line 158
signed int libusb_setlocale(const char *locale);
// libusb_strerror
// file ../../libusb/strerror.c line 192
const char * libusb_strerror(enum libusb_error errcode);
// libusb_submit_transfer
// file ../../libusb/io.c line 1459
signed int libusb_submit_transfer(struct libusb_transfer *transfer);
// libusb_testlib_logf
// file ../../tests/libusb_testlib.h line 65
void libusb_testlib_logf(struct anonymous_5 *ctx, const char *fmt, ...);
// libusb_testlib_run_tests
// file ../../tests/libusb_testlib.h line 103
signed int libusb_testlib_run_tests(signed int argc, char **argv, const struct anonymous_7 *tests);
// libusb_transfer_get_stream_id
// file ../../libusb/io.c line 1599
unsigned int libusb_transfer_get_stream_id(struct libusb_transfer *transfer);
// libusb_transfer_set_stream_id
// file ../../libusb/io.c line 1582
void libusb_transfer_set_stream_id(struct libusb_transfer *transfer, unsigned int stream_id);
// libusb_try_lock_events
// file ../../libusb/io.c line 1712
signed int libusb_try_lock_events(struct libusb_context *ctx);
// libusb_unlock_event_waiters
// file ../../libusb/io.c line 1880
void libusb_unlock_event_waiters(struct libusb_context *ctx);
// libusb_unlock_events
// file ../../libusb/libusb.h line 1801
void libusb_unlock_events(struct libusb_context *ctx);
// libusb_unref_device
// file ../../libusb/core.c line 1132
void libusb_unref_device(struct libusb_device *dev);
// libusb_wait_for_event
// file ../../libusb/io.c line 1911
signed int libusb_wait_for_event(struct libusb_context *ctx, struct timeval *tv);
// linux_device_disconnected
// file ../../libusb/os/linux_usbfs.c line 1118
void linux_device_disconnected(unsigned char busnum, unsigned char devaddr, const char *sys_name);
// linux_enumerate_device
// file ../../libusb/os/linux_usbfs.c line 1060
signed int linux_enumerate_device(struct libusb_context *ctx, unsigned char busnum, unsigned char devaddr, const char *sysfs_dir);
// linux_get_device_address
// file ../../libusb/os/linux_usbfs.c line 626
signed int linux_get_device_address(struct libusb_context *ctx, signed int detached, unsigned char *busnum, unsigned char *devaddr, const char *dev_node, const char *sys_name);
// linux_get_parent_info
// file ../../libusb/os/linux_usbfs.c line 994
static signed int linux_get_parent_info(struct libusb_device *dev, const char *sysfs_dir);
// linux_hotplug_enumerate
// file ../../libusb/os/linux_usbfs.c line 1107
void linux_hotplug_enumerate(unsigned char busnum, unsigned char devaddr, const char *sys_name);
// linux_scan_devices
// file ../../libusb/os/linux_usbfs.c line 493
static signed int linux_scan_devices(struct libusb_context *ctx);
// linux_start_event_monitor
// file ../../libusb/os/linux_usbfs.c line 475
static signed int linux_start_event_monitor(void);
// linux_stop_event_monitor
// file ../../libusb/os/linux_usbfs.c line 484
static signed int linux_stop_event_monitor(void);
// linux_udev_event_thread_main
// file ../../libusb/os/linux_udev.c line 161
static void * linux_udev_event_thread_main(void *arg);
// linux_udev_hotplug_poll
// file ../../libusb/os/linux_usbfs.h line 176
void linux_udev_hotplug_poll(void);
// linux_udev_scan_devices
// file ../../libusb/os/linux_usbfs.h line 175
signed int linux_udev_scan_devices(struct libusb_context *ctx);
// linux_udev_start_event_monitor
// file ../../libusb/os/linux_usbfs.h line 173
signed int linux_udev_start_event_monitor(void);
// linux_udev_stop_event_monitor
// file ../../libusb/os/linux_usbfs.h line 174
signed int linux_udev_stop_event_monitor(void);
// list_add
// file ../../libusb/libusbi.h line 116
static inline void list_add(struct list_head *entry, struct list_head *head);
// list_add_link1
// file ../../libusb/libusbi.h line 116
static inline void list_add_link1(struct list_head *entry_link1, struct list_head *head_link1);
// list_add_link2
// file ../../libusb/libusbi.h line 116
static inline void list_add_link2(struct list_head *entry_link2, struct list_head *head_link2);
// list_add_tail
// file ../../libusb/libusbi.h line 125
static inline void list_add_tail(struct list_head *entry, struct list_head *head);
// list_add_tail_link1
// file ../../libusb/libusbi.h line 125
static inline void list_add_tail_link1(struct list_head *entry_link1, struct list_head *head_link1);
// list_del
// file ../../libusb/libusbi.h line 135
static inline void list_del(struct list_head *entry);
// list_del_link1
// file ../../libusb/libusbi.h line 135
static inline void list_del_link1(struct list_head *entry_link1);
// list_del_link2
// file ../../libusb/libusbi.h line 135
static inline void list_del_link2(struct list_head *entry_link2);
// list_init
// file ../../libusb/libusbi.h line 111
static inline void list_init(struct list_head *entry);
// list_init_link1
// file ../../libusb/libusbi.h line 111
static inline void list_init_link1(struct list_head *entry_link1);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// op_alloc_streams
// file ../../libusb/os/linux_usbfs.c line 1544
static signed int op_alloc_streams(struct libusb_device_handle *handle, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints);
// op_attach_kernel_driver
// file ../../libusb/os/linux_usbfs.c line 1615
static signed int op_attach_kernel_driver(struct libusb_device_handle *handle, signed int interface);
// op_cancel_transfer
// file ../../libusb/os/linux_usbfs.c line 2152
static signed int op_cancel_transfer(struct usbi_transfer *itransfer);
// op_claim_interface
// file ../../libusb/os/linux_usbfs.c line 1683
static signed int op_claim_interface(struct libusb_device_handle *handle, signed int iface);
// op_clear_halt
// file ../../libusb/os/linux_usbfs.c line 1435
static signed int op_clear_halt(struct libusb_device_handle *handle, unsigned char endpoint);
// op_clear_transfer_priv
// file ../../libusb/os/linux_usbfs.c line 2179
static void op_clear_transfer_priv(struct usbi_transfer *itransfer);
// op_clock_gettime
// file ../../libusb/os/linux_usbfs.c line 2625
static signed int op_clock_gettime(signed int clk_id, struct timespec *tp);
// op_close
// file ../../libusb/os/linux_usbfs.c line 1325
static void op_close(struct libusb_device_handle *dev_handle);
// op_destroy_device
// file ../../libusb/os/linux_usbfs.c line 1705
static void op_destroy_device(struct libusb_device *dev);
// op_detach_kernel_driver
// file ../../libusb/os/linux_usbfs.c line 1581
static signed int op_detach_kernel_driver(struct libusb_device_handle *handle, signed int interface);
// op_exit
// file ../../libusb/os/linux_usbfs.c line 464
static void op_exit(void);
// op_free_streams
// file ../../libusb/os/linux_usbfs.c line 1551
static signed int op_free_streams(struct libusb_device_handle *handle, unsigned char *endpoints, signed int num_endpoints);
// op_get_active_config_descriptor
// file ../../libusb/os/linux_usbfs.c line 784
static signed int op_get_active_config_descriptor(struct libusb_device *dev, unsigned char *buffer, unsigned long int len, signed int *host_endian);
// op_get_config_descriptor
// file ../../libusb/os/linux_usbfs.c line 812
static signed int op_get_config_descriptor(struct libusb_device *dev, unsigned char config_index, unsigned char *buffer, unsigned long int len, signed int *host_endian);
// op_get_config_descriptor_by_value
// file ../../libusb/os/linux_usbfs.c line 752
static signed int op_get_config_descriptor_by_value(struct libusb_device *dev, unsigned char value, unsigned char **buffer, signed int *host_endian);
// op_get_configuration
// file ../../libusb/os/linux_usbfs.c line 1332
static signed int op_get_configuration(struct libusb_device_handle *handle, signed int *config);
// op_get_device_descriptor
// file ../../libusb/os/linux_usbfs.c line 572
static signed int op_get_device_descriptor(struct libusb_device *dev, unsigned char *buffer, signed int *host_endian);
// op_get_timerfd_clockid
// file ../../libusb/os/linux_usbfs.c line 2638
static signed int op_get_timerfd_clockid(void);
// op_handle_events
// file ../../libusb/os/linux_usbfs.c line 2569
static signed int op_handle_events(struct libusb_context *ctx, struct pollfd *fds, unsigned long int nfds, signed int num_ready);
// op_hotplug_poll
// file ../../libusb/os/linux_usbfs.c line 510
static void op_hotplug_poll(void);
// op_init
// file ../../libusb/os/linux_usbfs.c line 374
static signed int op_init(struct libusb_context *ctx);
// op_kernel_driver_active
// file ../../libusb/os/linux_usbfs.c line 1558
static signed int op_kernel_driver_active(struct libusb_device_handle *handle, signed int interface);
// op_open
// file ../../libusb/os/linux_usbfs.c line 1288
static signed int op_open(struct libusb_device_handle *handle);
// op_release_interface
// file ../../libusb/os/linux_usbfs.c line 1691
static signed int op_release_interface(struct libusb_device_handle *handle, signed int iface);
// op_reset_device
// file ../../libusb/os/linux_usbfs.c line 1455
static signed int op_reset_device(struct libusb_device_handle *handle);
// op_set_configuration
// file ../../libusb/os/linux_usbfs.c line 1354
static signed int op_set_configuration(struct libusb_device_handle *handle, signed int config);
// op_set_interface
// file ../../libusb/os/linux_usbfs.c line 1411
static signed int op_set_interface(struct libusb_device_handle *handle, signed int iface, signed int altsetting);
// op_submit_transfer
// file ../../libusb/os/linux_usbfs.c line 2130
static signed int op_submit_transfer(struct usbi_transfer *itransfer);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// parse_bos
// file ../../libusb/descriptor.c line 814
static signed int parse_bos(struct libusb_context *ctx, struct libusb_bos_descriptor **bos, unsigned char *buffer, signed int size, signed int host_endian);
// parse_configuration
// file ../../libusb/descriptor.c line 378
static signed int parse_configuration(struct libusb_context *ctx, struct libusb_config_descriptor *config, unsigned char *buffer, signed int size, signed int host_endian);
// parse_endpoint
// file ../../libusb/descriptor.c line 101
static signed int parse_endpoint(struct libusb_context *ctx, struct libusb_endpoint_descriptor *endpoint, unsigned char *buffer, signed int size, signed int host_endian);
// parse_interface
// file ../../libusb/descriptor.c line 216
static signed int parse_interface(struct libusb_context *ctx, struct libusb_interface *usb_interface, unsigned char *buffer, signed int size, signed int host_endian);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// print_usage
// file ../../tests/testlib.c line 72
static void print_usage(signed int argc, char **argv);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_9 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_9 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_9 *, const union anonymous_4 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_9 *, union anonymous_3 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_9 *, union anonymous_3 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_3 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_3 *, const union anonymous_4 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_3 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous_3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_3 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous_4 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_4 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous_4 *, signed int);
// raw_desc_to_config
// file ../../libusb/descriptor.c line 499
static signed int raw_desc_to_config(struct libusb_context *ctx, unsigned char *buf, signed int size, signed int host_endian, struct libusb_config_descriptor **config);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reap_for_handle
// file ../../libusb/os/linux_usbfs.c line 2527
static signed int reap_for_handle(struct libusb_device_handle *handle);
// release_interface
// file ../../libusb/os/linux_usbfs.c line 1396
static signed int release_interface(struct libusb_device_handle *handle, signed int iface);
// remove_from_flying_list
// file ../../libusb/io.c line 1430
static signed int remove_from_flying_list(struct usbi_transfer *transfer);
// seek_to_next_config
// file ../../libusb/os/linux_usbfs.c line 697
static signed int seek_to_next_config(struct libusb_context *ctx, unsigned char *buffer, signed int size);
// seek_to_next_descriptor
// file ../../libusb/os/linux_usbfs.c line 673
static signed int seek_to_next_descriptor(struct libusb_context *ctx, unsigned char descriptor_type, unsigned char *buffer, signed int size);
// setup_test_output
// file ../../tests/testlib.c line 108
static signed int setup_test_output(struct anonymous_5 *ctx);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
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
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// submit_bulk_transfer
// file ../../libusb/os/linux_usbfs.c line 1765
static signed int submit_bulk_transfer(struct usbi_transfer *itransfer);
// submit_control_transfer
// file ../../libusb/os/linux_usbfs.c line 2090
static signed int submit_control_transfer(struct usbi_transfer *itransfer);
// submit_iso_transfer
// file ../../libusb/os/linux_usbfs.c line 1937
static signed int submit_iso_transfer(struct usbi_transfer *itransfer);
// sync_transfer_cb
// file ../../libusb/sync.c line 37
static void sync_transfer_cb(struct libusb_transfer *transfer);
// sync_transfer_wait_for_completion
// file ../../libusb/sync.c line 45
static void sync_transfer_wait_for_completion(struct libusb_transfer *transfer);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysfs_get_active_config
// file ../../libusb/os/linux_usbfs.c line 584
static signed int sysfs_get_active_config(struct libusb_device *dev, signed int *config);
// sysfs_scan_device
// file ../../libusb/os/linux_usbfs.c line 1226
static signed int sysfs_scan_device(struct libusb_context *ctx, const char *devname);
// test_default_context_change
// file ../../tests/stress.c line 115
static enum anonymous_6 test_default_context_change(struct anonymous_5 *tctx);
// test_get_device_list
// file ../../tests/stress.c line 49
static enum anonymous_6 test_get_device_list(struct anonymous_5 *tctx);
// test_init_and_exit
// file ../../tests/stress.c line 29
static enum anonymous_6 test_init_and_exit(struct anonymous_5 *tctx);
// test_many_device_lists
// file ../../tests/stress.c line 74
static enum anonymous_6 test_many_device_lists(struct anonymous_5 *tctx);
// test_result_to_str
// file ../../tests/testlib.c line 56
static const char * test_result_to_str(enum anonymous_6 result);
// timerfd_create
// file /usr/include/x86_64-linux-gnu/sys/timerfd.h line 38
extern signed int timerfd_create(signed int, signed int);
// timerfd_settime
// file /usr/include/x86_64-linux-gnu/sys/timerfd.h line 43
extern signed int timerfd_settime(signed int, signed int, struct itimerspec *, struct itimerspec *);
// udev_device_get_action
// file /usr/include/libudev.h line 105
const char * udev_device_get_action(struct udev_device *);
// udev_device_get_devnode
// file /usr/include/libudev.h line 96
const char * udev_device_get_devnode(struct udev_device *);
// udev_device_get_sysname
// file /usr/include/libudev.h line 94
const char * udev_device_get_sysname(struct udev_device *);
// udev_device_info
// file ../../libusb/os/linux_udev.c line 198
static signed int udev_device_info(struct libusb_context *ctx, signed int detached, struct udev_device *udev_dev, unsigned char *busnum, unsigned char *devaddr, const char **sys_name);
// udev_device_new_from_syspath
// file /usr/include/libudev.h line 80
struct udev_device * udev_device_new_from_syspath(struct udev *, const char *);
// udev_device_unref
// file /usr/include/libudev.h line 78
struct udev_device * udev_device_unref(struct udev_device *);
// udev_enumerate_add_match_subsystem
// file /usr/include/libudev.h line 146
signed int udev_enumerate_add_match_subsystem(struct udev_enumerate *, const char *);
// udev_enumerate_get_list_entry
// file /usr/include/libudev.h line 160
struct udev_list_entry * udev_enumerate_get_list_entry(struct udev_enumerate *);
// udev_enumerate_new
// file /usr/include/libudev.h line 144
struct udev_enumerate * udev_enumerate_new(struct udev *);
// udev_enumerate_scan_devices
// file /usr/include/libudev.h line 157
signed int udev_enumerate_scan_devices(struct udev_enumerate *);
// udev_enumerate_unref
// file /usr/include/libudev.h line 142
struct udev_enumerate * udev_enumerate_unref(struct udev_enumerate *);
// udev_hotplug_event
// file ../../libusb/os/linux_udev.c line 217
static void udev_hotplug_event(struct udev_device *udev_dev);
// udev_list_entry_get_name
// file /usr/include/libudev.h line 57
const char * udev_list_entry_get_name(struct udev_list_entry *);
// udev_list_entry_get_next
// file /usr/include/libudev.h line 55
struct udev_list_entry * udev_list_entry_get_next(struct udev_list_entry *);
// udev_monitor_enable_receiving
// file /usr/include/libudev.h line 124
signed int udev_monitor_enable_receiving(struct udev_monitor *);
// udev_monitor_filter_add_match_subsystem_devtype
// file /usr/include/libudev.h line 129
signed int udev_monitor_filter_add_match_subsystem_devtype(struct udev_monitor *, const char *, const char *);
// udev_monitor_get_fd
// file /usr/include/libudev.h line 126
signed int udev_monitor_get_fd(struct udev_monitor *);
// udev_monitor_new_from_netlink
// file /usr/include/libudev.h line 122
struct udev_monitor * udev_monitor_new_from_netlink(struct udev *, const char *);
// udev_monitor_receive_device
// file /usr/include/libudev.h line 127
struct udev_device * udev_monitor_receive_device(struct udev_monitor *);
// udev_monitor_unref
// file /usr/include/libudev.h line 119
struct udev_monitor * udev_monitor_unref(struct udev_monitor *);
// udev_new
// file /usr/include/libudev.h line 39
struct udev * udev_new(void);
// udev_unref
// file /usr/include/libudev.h line 38
struct udev * udev_unref(struct udev *);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// usbfs_get_active_config
// file ../../libusb/os/linux_usbfs.c line 843
static signed int usbfs_get_active_config(struct libusb_device *dev, signed int fd);
// usbi_add_pollfd
// file ../../libusb/io.c line 2594
signed int usbi_add_pollfd(struct libusb_context *ctx, signed int fd, signed short int events);
// usbi_alloc_device
// file ../../libusb/core.c line 659
struct libusb_device * usbi_alloc_device(struct libusb_context *ctx, unsigned long int session_id);
// usbi_clear_event
// file ../../libusb/core.c line 1184
signed int usbi_clear_event(struct libusb_context *ctx);
// usbi_connect_device
// file ../../libusb/core.c line 687
void usbi_connect_device(struct libusb_device *dev);
// usbi_device_cache_descriptor
// file ../../libusb/libusbi.h line 485
signed int usbi_device_cache_descriptor(struct libusb_device *dev);
// usbi_disconnect_device
// file ../../libusb/core.c line 705
void usbi_disconnect_device(struct libusb_device *dev);
// usbi_fd_notification
// file ../../libusb/io.c line 2579
static void usbi_fd_notification(struct libusb_context *ctx);
// usbi_get_config_index_by_value
// file ../../libusb/descriptor.c line 667
signed int usbi_get_config_index_by_value(struct libusb_device *dev, unsigned char bConfigurationValue, signed int *idx);
// usbi_get_device_by_session_id
// file ../../libusb/core.c line 752
struct libusb_device * usbi_get_device_by_session_id(struct libusb_context *ctx, unsigned long int session_id);
// usbi_get_tid
// file ../../libusb/os/threads_posix.h line 48
signed int usbi_get_tid(void);
// usbi_handle_disconnect
// file ../../libusb/io.c line 2711
void usbi_handle_disconnect(struct libusb_device_handle *handle);
// usbi_handle_transfer_cancellation
// file ../../libusb/io.c line 1665
signed int usbi_handle_transfer_cancellation(struct usbi_transfer *transfer);
// usbi_handle_transfer_completion
// file ../../libusb/io.c line 1616
signed int usbi_handle_transfer_completion(struct usbi_transfer *itransfer, enum libusb_transfer_status status);
// usbi_hotplug_deregister_all
// file ../../libusb/hotplug.h line 84
void usbi_hotplug_deregister_all(struct libusb_context *ctx);
// usbi_hotplug_match
// file ../../libusb/hotplug.h line 85
void usbi_hotplug_match(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event);
// usbi_hotplug_match_cb
// file ../../libusb/hotplug.c line 150
static signed int usbi_hotplug_match_cb(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event, struct libusb_hotplug_callback *hotplug_cb);
// usbi_hotplug_notification
// file ../../libusb/hotplug.h line 87
void usbi_hotplug_notification(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event);
// usbi_io_exit
// file ../../libusb/libusbi.h line 469
void usbi_io_exit(struct libusb_context *ctx);
// usbi_io_init
// file ../../libusb/libusbi.h line 468
signed int usbi_io_init(struct libusb_context *ctx);
// usbi_log
// file ../../libusb/core.c line 2374
void usbi_log(struct libusb_context *ctx, enum libusb_log_level level, const char *function, const char *format, ...);
// usbi_log_str
// file ../../libusb/core.c line 2237
static void usbi_log_str(struct libusb_context *ctx, enum libusb_log_level level, const char *str);
// usbi_log_v
// file ../../libusb/core.c line 2275
void usbi_log_v(struct libusb_context *ctx, enum libusb_log_level level, const char *function, const char *format, void **args);
// usbi_mutex_init_recursive
// file ../../libusb/os/threads_posix.h line 46
extern signed int usbi_mutex_init_recursive(union anonymous_3 *mutex, union anonymous_4 *attr);
// usbi_parse_descriptor
// file ../../libusb/descriptor.c line 45
signed int usbi_parse_descriptor(const unsigned char *source, const char *descriptor, void *dest, signed int host_endian);
// usbi_pipe
// file ../../libusb/os/poll_posix.h line 9
signed int usbi_pipe(signed int *pipefd);
// usbi_reallocf
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf(void *ptr, unsigned long int size);
// usbi_reallocf_link1
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf_link1(void *ptr_link1, unsigned long int size_link1);
// usbi_reallocf_link2
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf_link2(void *ptr_link2, unsigned long int size_link2);
// usbi_remove_pollfd
// file ../../libusb/io.c line 2615
void usbi_remove_pollfd(struct libusb_context *ctx, signed int fd);
// usbi_sanitize_device
// file ../../libusb/core.c line 729
signed int usbi_sanitize_device(struct libusb_device *dev);
// usbi_signal_event
// file ../../libusb/core.c line 1165
signed int usbi_signal_event(struct libusb_context *ctx);
// usbi_signal_transfer_completion
// file ../../libusb/io.c line 1680
void usbi_signal_transfer_completion(struct usbi_transfer *transfer);
// usbi_transfer_get_os_priv
// file ../../libusb/libusbi.h line 450
static inline void * usbi_transfer_get_os_priv(struct usbi_transfer *transfer);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_5
{
  // test_names
  char **test_names;
  // test_count
  signed int test_count;
  // list_tests
  signed int list_tests;
  // verbose
  signed int verbose;
  // old_stdout
  signed int old_stdout;
  // old_stderr
  signed int old_stderr;
  // output_file
  struct _IO_FILE *output_file;
  // null_fd
  signed int null_fd;
};

struct anonymous_7
{
  // name
  const char *name;
  // function
  enum anonymous_6 (*function)(struct anonymous_5 *);
};

struct anonymous
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

union anonymous_10
{
  // urbs
  struct usbfs_urb *urbs;
  // iso_urbs
  struct usbfs_urb **iso_urbs;
};

union anonymous_4
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_8
{
  // number_of_packets
  signed int number_of_packets;
  // stream_id
  unsigned int stream_id;
};

union anonymous_9
{
  // __data
  struct anonymous __data;
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

union anonymous_3
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

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

struct list_head
{
  // prev
  struct list_head *prev;
  // next
  struct list_head *next;
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

struct libusb_device
{
  // lock
  union anonymous_3 lock;
  // refcnt
  signed int refcnt;
  // ctx
  struct libusb_context *ctx;
  // bus_number
  unsigned char bus_number;
  // port_number
  unsigned char port_number;
  // parent_dev
  struct libusb_device *parent_dev;
  // device_address
  unsigned char device_address;
  // num_configurations
  unsigned char num_configurations;
  // speed
  enum libusb_speed speed;
  // list
  struct list_head list;
  // session_data
  unsigned long int session_data;
  // device_descriptor
  struct libusb_device_descriptor device_descriptor;
  // attached
  signed int attached;
  // os_priv
  unsigned char os_priv[0l];
};

struct discovered_devs
{
  // len
  unsigned long int len;
  // capacity
  unsigned long int capacity;
  // devices
  struct libusb_device *devices[0l];
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct itimerspec
{
  // it_interval
  struct timespec it_interval;
  // it_value
  struct timespec it_value;
};

struct libusb_bos_dev_capability_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bDevCapabilityType
  unsigned char bDevCapabilityType;
  // dev_capability_data
  unsigned char dev_capability_data[0l];
};

struct libusb_bos_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // wTotalLength
  unsigned short int wTotalLength;
  // bNumDeviceCaps
  unsigned char bNumDeviceCaps;
  // dev_capability
  struct libusb_bos_dev_capability_descriptor *dev_capability[0l];
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

struct libusb_container_id_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bDevCapabilityType
  unsigned char bDevCapabilityType;
  // bReserved
  unsigned char bReserved;
  // ContainerID
  unsigned char ContainerID[16l];
};

struct libusb_context
{
  // debug
  signed int debug;
  // debug_fixed
  signed int debug_fixed;
  // event_pipe
  signed int event_pipe[2l];
  // usb_devs
  struct list_head usb_devs;
  // usb_devs_lock
  union anonymous_3 usb_devs_lock;
  // open_devs
  struct list_head open_devs;
  // open_devs_lock
  union anonymous_3 open_devs_lock;
  // hotplug_cbs
  struct list_head hotplug_cbs;
  // hotplug_cbs_lock
  union anonymous_3 hotplug_cbs_lock;
  // flying_transfers
  struct list_head flying_transfers;
  // flying_transfers_lock
  union anonymous_3 flying_transfers_lock;
  // fd_added_cb
  void (*fd_added_cb)(signed int, signed short int, void *);
  // fd_removed_cb
  void (*fd_removed_cb)(signed int, void *);
  // fd_cb_user_data
  void *fd_cb_user_data;
  // events_lock
  union anonymous_3 events_lock;
  // event_handler_active
  signed int event_handler_active;
  // event_waiters_lock
  union anonymous_3 event_waiters_lock;
  // event_waiters_cond
  union anonymous_9 event_waiters_cond;
  // event_data_lock
  union anonymous_3 event_data_lock;
  // device_close
  unsigned int device_close;
  // ipollfds
  struct list_head ipollfds;
  // pollfds
  struct pollfd *pollfds;
  // pollfds_cnt
  unsigned long int pollfds_cnt;
  // pollfds_modified
  unsigned int pollfds_modified;
  // hotplug_msgs
  struct list_head hotplug_msgs;
  // completed_transfers
  struct list_head completed_transfers;
  // timerfd
  signed int timerfd;
  // list
  struct list_head list;
};

struct libusb_control_setup
{
  // bmRequestType
  unsigned char bmRequestType;
  // bRequest
  unsigned char bRequest;
  // wValue
  unsigned short int wValue;
  // wIndex
  unsigned short int wIndex;
  // wLength
  unsigned short int wLength;
};

struct libusb_device_handle
{
  // lock
  union anonymous_3 lock;
  // claimed_interfaces
  unsigned long int claimed_interfaces;
  // list
  struct list_head list;
  // dev
  struct libusb_device *dev;
  // auto_detach_kernel_driver
  signed int auto_detach_kernel_driver;
  // os_priv
  unsigned char os_priv[0l];
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

struct libusb_hotplug_callback
{
  // ctx
  struct libusb_context *ctx;
  // vendor_id
  signed int vendor_id;
  // product_id
  signed int product_id;
  // dev_class
  signed int dev_class;
  // flags
  enum anonymous_1 flags;
  // events
  enum anonymous_2 events;
  // cb
  signed int (*cb)(struct libusb_context *, struct libusb_device *, enum anonymous_2, void *);
  // handle
  signed int handle;
  // user_data
  void *user_data;
  // needs_free
  signed int needs_free;
  // list
  struct list_head list;
};

struct libusb_hotplug_message
{
  // event
  enum anonymous_2 event;
  // device
  struct libusb_device *device;
  // list
  struct list_head list;
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

struct libusb_pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
};

struct libusb_ss_endpoint_companion_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bMaxBurst
  unsigned char bMaxBurst;
  // bmAttributes
  unsigned char bmAttributes;
  // wBytesPerInterval
  unsigned short int wBytesPerInterval;
};

struct libusb_ss_usb_device_capability_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bDevCapabilityType
  unsigned char bDevCapabilityType;
  // bmAttributes
  unsigned char bmAttributes;
  // wSpeedSupported
  unsigned short int wSpeedSupported;
  // bFunctionalitySupport
  unsigned char bFunctionalitySupport;
  // bU1DevExitLat
  unsigned char bU1DevExitLat;
  // bU2DevExitLat
  unsigned short int bU2DevExitLat;
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

struct libusb_usb_2_0_extension_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bDevCapabilityType
  unsigned char bDevCapabilityType;
  // bmAttributes
  unsigned int bmAttributes;
};

struct libusb_version
{
  // major
  const unsigned short int major;
  // minor
  const unsigned short int minor;
  // micro
  const unsigned short int micro;
  // nano
  const unsigned short int nano;
  // rc
  const char *rc;
  // describe
  const char *describe;
};

struct linux_device_handle_priv
{
  // fd
  signed int fd;
  // caps
  unsigned int caps;
};

struct linux_device_priv
{
  // sysfs_dir
  char *sysfs_dir;
  // descriptors
  unsigned char *descriptors;
  // descriptors_len
  signed int descriptors_len;
  // active_config
  signed int active_config;
};

struct linux_transfer_priv
{
  // _anon0
  union anonymous_10 _anon0;
  // reap_action
  enum reap_action reap_action;
  // num_urbs
  signed int num_urbs;
  // num_retired
  signed int num_retired;
  // reap_status
  enum libusb_transfer_status reap_status;
  // iso_packet_offset
  signed int iso_packet_offset;
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct usb_descriptor_header
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
};

struct usbfs_ctrltransfer
{
  // bmRequestType
  unsigned char bmRequestType;
  // bRequest
  unsigned char bRequest;
  // wValue
  unsigned short int wValue;
  // wIndex
  unsigned short int wIndex;
  // wLength
  unsigned short int wLength;
  // timeout
  unsigned int timeout;
  // data
  void *data;
};

struct usbfs_disconnect_claim
{
  // interface
  unsigned int interface;
  // flags
  unsigned int flags;
  // driver
  char driver[256l];
};

struct usbfs_getdriver
{
  // interface
  unsigned int interface;
  // driver
  char driver[256l];
};

struct usbfs_ioctl
{
  // ifno
  signed int ifno;
  // ioctl_code
  signed int ioctl_code;
  // data
  void *data;
};

struct usbfs_iso_packet_desc
{
  // length
  unsigned int length;
  // actual_length
  unsigned int actual_length;
  // status
  unsigned int status;
};

struct usbfs_setinterface
{
  // interface
  unsigned int interface;
  // altsetting
  unsigned int altsetting;
};

struct usbfs_streams
{
  // num_streams
  unsigned int num_streams;
  // num_eps
  unsigned int num_eps;
  // eps
  unsigned char eps[0l];
};

struct usbfs_urb
{
  // type
  unsigned char type;
  // endpoint
  unsigned char endpoint;
  // status
  signed int status;
  // flags
  unsigned int flags;
  // buffer
  void *buffer;
  // buffer_length
  signed int buffer_length;
  // actual_length
  signed int actual_length;
  // start_frame
  signed int start_frame;
  // _anon0
  union anonymous_8 _anon0;
  // error_count
  signed int error_count;
  // signr
  unsigned int signr;
  // usercontext
  void *usercontext;
  // iso_frame_desc
  struct usbfs_iso_packet_desc iso_frame_desc[0l];
};

struct usbi_os_backend
{
  // name
  const char *name;
  // caps
  unsigned int caps;
  // init
  signed int (*init)(struct libusb_context *);
  // exit
  void (*exit)(void);
  // get_device_list
  signed int (*get_device_list)(struct libusb_context *, struct discovered_devs **);
  // hotplug_poll
  void (*hotplug_poll)(void);
  // open
  signed int (*open)(struct libusb_device_handle *);
  // close
  void (*close)(struct libusb_device_handle *);
  // get_device_descriptor
  signed int (*get_device_descriptor)(struct libusb_device *, unsigned char *, signed int *);
  // get_active_config_descriptor
  signed int (*get_active_config_descriptor)(struct libusb_device *, unsigned char *, unsigned long int, signed int *);
  // get_config_descriptor
  signed int (*get_config_descriptor)(struct libusb_device *, unsigned char, unsigned char *, unsigned long int, signed int *);
  // get_config_descriptor_by_value
  signed int (*get_config_descriptor_by_value)(struct libusb_device *, unsigned char, unsigned char **, signed int *);
  // get_configuration
  signed int (*get_configuration)(struct libusb_device_handle *, signed int *);
  // set_configuration
  signed int (*set_configuration)(struct libusb_device_handle *, signed int);
  // claim_interface
  signed int (*claim_interface)(struct libusb_device_handle *, signed int);
  // release_interface
  signed int (*release_interface)(struct libusb_device_handle *, signed int);
  // set_interface_altsetting
  signed int (*set_interface_altsetting)(struct libusb_device_handle *, signed int, signed int);
  // clear_halt
  signed int (*clear_halt)(struct libusb_device_handle *, unsigned char);
  // reset_device
  signed int (*reset_device)(struct libusb_device_handle *);
  // alloc_streams
  signed int (*alloc_streams)(struct libusb_device_handle *, unsigned int, unsigned char *, signed int);
  // free_streams
  signed int (*free_streams)(struct libusb_device_handle *, unsigned char *, signed int);
  // kernel_driver_active
  signed int (*kernel_driver_active)(struct libusb_device_handle *, signed int);
  // detach_kernel_driver
  signed int (*detach_kernel_driver)(struct libusb_device_handle *, signed int);
  // attach_kernel_driver
  signed int (*attach_kernel_driver)(struct libusb_device_handle *, signed int);
  // destroy_device
  void (*destroy_device)(struct libusb_device *);
  // submit_transfer
  signed int (*submit_transfer)(struct usbi_transfer *);
  // cancel_transfer
  signed int (*cancel_transfer)(struct usbi_transfer *);
  // clear_transfer_priv
  void (*clear_transfer_priv)(struct usbi_transfer *);
  // handle_events
  signed int (*handle_events)(struct libusb_context *, struct pollfd *, unsigned long int, signed int);
  // handle_transfer_completion
  signed int (*handle_transfer_completion)(struct usbi_transfer *);
  // clock_gettime
  signed int (*clock_gettime)(signed int, struct timespec *);
  // get_timerfd_clockid
  signed int (*get_timerfd_clockid)(void);
  // device_priv_size
  unsigned long int device_priv_size;
  // device_handle_priv_size
  unsigned long int device_handle_priv_size;
  // transfer_priv_size
  unsigned long int transfer_priv_size;
};

struct usbi_pollfd
{
  // pollfd
  struct libusb_pollfd pollfd;
  // list
  struct list_head list;
};

struct usbi_transfer
{
  // num_iso_packets
  signed int num_iso_packets;
  // list
  struct list_head list;
  // completed_list
  struct list_head completed_list;
  // timeout
  struct timeval timeout;
  // transferred
  signed int transferred;
  // stream_id
  unsigned int stream_id;
  // flags
  unsigned char flags;
  // lock
  union anonymous_3 lock;
  // flags_lock
  union anonymous_3 flags_lock;
};

struct utsname
{
  // sysname
  char sysname[65l];
  // nodename
  char nodename[65l];
  // release
  char release[65l];
  // version
  char version[65l];
  // machine
  char machine[65l];
  // domainname
  char domainname[65l];
};


// active_contexts_list
// file ../../libusb/core.c line 74
struct list_head active_contexts_list;
// active_contexts_lock
// file ../../libusb/core.c line 73
union anonymous_3 active_contexts_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// default_context_lock
// file ../../libusb/core.c line 70
static union anonymous_3 default_context_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// default_context_refcnt
// file ../../libusb/core.c line 69
static signed int default_context_refcnt = 0;
// init_count
// file ../../libusb/os/linux_usbfs.c line 121
static signed int init_count = 0;
// libusb_version_internal
// file ../../libusb/core.c line 66
static struct libusb_version libusb_version_internal = { .major=(const unsigned short int)1, .minor=(const unsigned short int)0, .micro=(const unsigned short int)20,
    .nano=(const unsigned short int)11004,
    .rc="",
    .describe="http://libusb.info" };
// linux_event_thread
// file ../../libusb/os/linux_udev.c line 50
static unsigned long int linux_event_thread;
// linux_hotplug_lock
// file ../../libusb/os/linux_usbfs.c line 126
union anonymous_3 linux_hotplug_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// linux_hotplug_startstop_lock
// file ../../libusb/os/linux_usbfs.c line 124
union anonymous_3 linux_hotplug_startstop_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// linux_usbfs_backend
// file ../../libusb/os/linux_usbfs.c line 2645
struct usbi_os_backend linux_usbfs_backend;
// linux_usbfs_backend
// file ../../libusb/os/linux_usbfs.c line 2645
struct usbi_os_backend linux_usbfs_backend = { .name="Linux usbfs", .caps=(unsigned int)(0x00010000 | 0x00020000), .init=op_init,
    .exit=op_exit, .get_device_list=(signed int (*)(struct libusb_context *, struct discovered_devs **))(void *)0, .hotplug_poll=op_hotplug_poll,
    .open=op_open, .close=op_close,
    .get_device_descriptor=op_get_device_descriptor, .get_active_config_descriptor=op_get_active_config_descriptor,
    .get_config_descriptor=op_get_config_descriptor,
    .get_config_descriptor_by_value=op_get_config_descriptor_by_value,
    .get_configuration=op_get_configuration,
    .set_configuration=op_set_configuration,
    .claim_interface=op_claim_interface,
    .release_interface=op_release_interface,
    .set_interface_altsetting=op_set_interface,
    .clear_halt=op_clear_halt,
    .reset_device=op_reset_device, .alloc_streams=op_alloc_streams,
    .free_streams=op_free_streams, .kernel_driver_active=op_kernel_driver_active,
    .detach_kernel_driver=op_detach_kernel_driver,
    .attach_kernel_driver=op_attach_kernel_driver,
    .destroy_device=op_destroy_device,
    .submit_transfer=op_submit_transfer, .cancel_transfer=op_cancel_transfer,
    .clear_transfer_priv=op_clear_transfer_priv,
    .handle_events=op_handle_events,
    .handle_transfer_completion=((signed int (*)(struct usbi_transfer *))NULL), .clock_gettime=op_clock_gettime,
    .get_timerfd_clockid=op_get_timerfd_clockid, .device_priv_size=sizeof(struct linux_device_priv) /*24ul*/ ,
    .device_handle_priv_size=sizeof(struct linux_device_handle_priv) /*8ul*/ ,
    .transfer_priv_size=sizeof(struct linux_transfer_priv) /*32ul*/  };
// monotonic_clkid
// file ../../libusb/os/linux_usbfs.c line 108
static signed int monotonic_clkid = -1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// supports_flag_bulk_continuation
// file ../../libusb/os/linux_usbfs.c line 98
static signed int supports_flag_bulk_continuation = -1;
// supports_flag_zero_packet
// file ../../libusb/os/linux_usbfs.c line 104
static signed int supports_flag_zero_packet = -1;
// sysfs_can_relate_devices
// file ../../libusb/os/linux_usbfs.c line 113
static signed int sysfs_can_relate_devices = -1;
// sysfs_has_descriptors
// file ../../libusb/os/linux_usbfs.c line 118
static signed int sysfs_has_descriptors = -1;
// tests
// file ../../tests/stress.c line 149
static const struct anonymous_7 tests[5l];
// tests
// file ../../tests/stress.c line 149
static const struct anonymous_7 tests[5l] = { { .name="init_and_exit", .function=test_init_and_exit },
    { .name="get_device_list", .function=test_get_device_list },
    { .name="many_device_lists", .function=test_many_device_lists },
    { .name="default_context_change", .function=test_default_context_change },
    { .name=(const char *)(void *)0, .function=(enum anonymous_6 (*)(struct anonymous_5 *))(void *)0 } };
// timestamp_origin
// file ../../libusb/core.c line 71
static struct timeval timestamp_origin = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
// udev_control_pipe
// file ../../libusb/os/linux_udev.c line 48
static signed int udev_control_pipe[2l] = { -1, -1 };
// udev_ctx
// file ../../libusb/os/linux_udev.c line 46
static struct udev *udev_ctx = (struct udev *)(void *)0;
// udev_monitor
// file ../../libusb/os/linux_udev.c line 49
static struct udev_monitor *udev_monitor = (struct udev_monitor *)(void *)0;
// udev_monitor_fd
// file ../../libusb/os/linux_udev.c line 47
static signed int udev_monitor_fd = -1;
// usbdev_names
// file ../../libusb/os/linux_usbfs.c line 81
static signed int usbdev_names = 0;
// usbfs_path
// file ../../libusb/os/linux_usbfs.c line 78
static const char *usbfs_path = (const char *)(void *)0;
// usbi_backend
// file ../../libusb/core.c line 48
struct usbi_os_backend * const usbi_backend;
// usbi_backend
// file ../../libusb/core.c line 48
struct usbi_os_backend * const usbi_backend = &linux_usbfs_backend;
// usbi_default_context
// file ../../libusb/core.c line 65
struct libusb_context *usbi_default_context = (struct libusb_context *)(void *)0;
// usbi_locale
// file ../../libusb/strerror.c line 35
static unsigned long int usbi_locale = (unsigned long int)0;
// usbi_locale_supported
// file ../../libusb/strerror.c line 63
static const char *usbi_locale_supported[4l] = { "en", "nl", "fr", "ru" };
// usbi_localized_errors
// file ../../libusb/strerror.c line 64
static const char *usbi_localized_errors[4l][14l] = { { "Success", "Input/Output Error", "Invalid parameter", "Access denied (insufficient permissions)",
    "No such device (it may have been disconnected)",
    "Entity not found", "Resource busy", "Operation timed out", "Overflow", "Pipe error", "System call interrupted (perhaps due to signal)",
    "Insufficient memory", "Operation not supported or unimplemented on this platform",
    "Other error" },
    { "Gelukt", "Invoer-/uitvoerfout", "Ongeldig argument", "Toegang geweigerd (onvoldoende toegangsrechten)",
    "Apparaat bestaat niet (verbinding met apparaat verbroken?)",
    "Niet gevonden", "Apparaat of hulpbron is bezig", "Bewerking verlopen", "Waarde is te groot", "Gebroken pijp", "Onderbroken systeemaanroep", "Onvoldoende geheugen beschikbaar", "Bewerking wordt niet ondersteund", "Andere fout" },
    { "Succès", "Erreur d'entrée/sortie", "Paramètre invalide", "Accès refusé (permissions insuffisantes)",
    "Périphérique introuvable (peut-être déconnecté)",
    "Elément introuvable", "Resource déjà occupée", "Operation expirée", "Débordement", "Erreur de pipe", "Appel système abandonné (peut-être à cause d’un signal)",
    "Mémoire insuffisante", "Opération non supportée or non implémentée sur cette plateforme",
    "Autre erreur" },
    { "Успех", "Ошибка ввода/вывода", "Неверный параметр", "Доступ запрещён (не хватает прав)",
    "Устройство отсутствует (возможно, оно было отсоединено)",
    "Элемент не найден", "Ресурс занят", "Истекло время ожидания операции",
    "Переполнение", "Ошибка канала", "Системный вызов прерван (возможно, сигналом)",
    "Память исчерпана", "Операция не поддерживается данной платформой",
    "Неизвестная ошибка" } };

// __read_sysfs_attr
// file ../../libusb/os/linux_usbfs.c line 538
static signed int __read_sysfs_attr(struct libusb_context *ctx, const char *devname, const char *attr)
{
  char filename[4096l];
  struct _IO_FILE *f;
  signed int r;
  signed int value;
  snprintf(filename, (unsigned long int)4096, "%s/%s/%s", (const void *)"/sys/bus/usb/devices", devname, attr);
  f=fopen(filename, "r");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 2)
      return LIBUSB_ERROR_NO_DEVICE;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "__read_sysfs_attr", "open %s failed errno=%d", (const void *)filename, *return_value___errno_location_2);
    return LIBUSB_ERROR_IO;
  }

  r=fscanf(f, "%d", &value);
  fclose(f);
  if(!(r == 1))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "__read_sysfs_attr", "fscanf %s returned %d, errno=%d", attr, r, *return_value___errno_location_3);
    return LIBUSB_ERROR_NO_DEVICE;
  }

  if(!(value >= 0))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "__read_sysfs_attr", "%s contains a negative value", (const void *)filename);
    return LIBUSB_ERROR_IO;
  }

  else
    return value;
}

// _device_handle_priv
// file ../../libusb/os/linux_usbfs.c line 231
static struct linux_device_handle_priv * _device_handle_priv(struct libusb_device_handle *handle)
{
  return (struct linux_device_handle_priv *)handle->os_priv;
}

// _device_priv
// file ../../libusb/os/linux_usbfs.c line 226
static struct linux_device_priv * _device_priv(struct libusb_device *dev)
{
  return (struct linux_device_priv *)dev->os_priv;
}

// _get_usbfs_fd
// file ../../libusb/os/linux_usbfs.c line 181
static signed int _get_usbfs_fd(struct libusb_device *dev, unsigned int mode, signed int silent)
{
  struct libusb_context *ctx = dev->ctx;
  char path[4096l];
  signed int fd;
  signed int delay = 10000;
  if(!(usbdev_names == 0))
    snprintf(path, (unsigned long int)4096, "%s/usbdev%d.%d", usbfs_path, dev->bus_number, dev->device_address);

  else
    snprintf(path, (unsigned long int)4096, "%s/%03d/%03d", usbfs_path, dev->bus_number, dev->device_address);
  fd=open(path, (signed int)mode);
  if(!(fd == -1))
    return fd;

  else
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 2)
    {
      if(silent == 0)
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "_get_usbfs_fd", "File doesn't exist, wait %d ms and try again", delay / 1000);

      usleep((unsigned int)delay);
      fd=open(path, (signed int)mode);
      if(fd == -1)
        goto __CPROVER_DUMP_L5;

      return fd;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      if(silent == 0)
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "_get_usbfs_fd", "libusb couldn't open USB device %s: %s", (const void *)path, return_value_strerror_3);
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        if(*return_value___errno_location_4 == 13)
        {
          if(mode == 2u)
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "_get_usbfs_fd", "libusb requires write access to USB device nodes.");

        }

      }

      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      if(*return_value___errno_location_5 == 13)
        return LIBUSB_ERROR_ACCESS;

      else
      {
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        if(*return_value___errno_location_6 == 2)
          return LIBUSB_ERROR_NO_DEVICE;

        else
          return LIBUSB_ERROR_IO;
      }
    }
  }
}

// _is_usbdev_entry
// file ../../libusb/os/linux_usbfs.c line 239
static signed int _is_usbdev_entry(struct dirent *entry, signed int *bus_p, signed int *dev_p)
{
  signed int busnum;
  signed int devnum;
  signed int return_value_sscanf_1;
  return_value_sscanf_1=sscanf(entry->d_name, "usbdev%d.%d", &busnum, &devnum);
  if(!(return_value_sscanf_1 == 2))
    return 0;

  else
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "_is_usbdev_entry", "found: %s", (const void *)entry->d_name);
    if(!(bus_p == ((signed int *)NULL)))
      *bus_p = busnum;

    if(!(dev_p == ((signed int *)NULL)))
      *dev_p = devnum;

    return 1;
  }
}

// _open_sysfs_attr
// file ../../libusb/os/linux_usbfs.c line 519
static signed int _open_sysfs_attr(struct libusb_device *dev, const char *attr)
{
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  char filename[4096l];
  signed int fd;
  snprintf(filename, (unsigned long int)4096, "%s/%s/%s", (const void *)"/sys/bus/usb/devices", priv->sysfs_dir, attr);
  fd=open(filename, 00);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "_open_sysfs_attr", "open %s failed ret=%d errno=%d", (const void *)filename, fd, *return_value___errno_location_1);
    return LIBUSB_ERROR_IO;
  }

  return fd;
}

// add_to_flying_list
// file ../../libusb/io.c line 1360
static signed int add_to_flying_list(struct usbi_transfer *transfer)
{
  struct usbi_transfer *cur;
  struct timeval *timeout = &transfer->timeout;
  struct libusb_context *ctx = ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx;
  signed int r = 0;
  signed int first = 1;
  pthread_mutex_lock(&ctx->flying_transfers_lock);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  if(ctx->flying_transfers.next == &ctx->flying_transfers)
    list_add_link1(&transfer->list, &ctx->flying_transfers);

  else
  {
    if(!(timeout->tv_sec == 0l))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = timeout->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      list_add_tail(&transfer->list, &ctx->flying_transfers);

    else
    {
      cur = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul);
      for( ; !(&cur->list == &ctx->flying_transfers); cur = (struct usbi_transfer *)((unsigned long int)cur->list.next - (unsigned long int)8ul))
      {
        struct timeval *cur_tv = &cur->timeout;
        if(!(cur_tv->tv_sec == 0l))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = cur_tv->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_2)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = cur_tv->tv_sec > timeout->tv_sec ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          if(cur_tv->tv_sec == timeout->tv_sec)
            tmp_if_expr_4 = cur_tv->tv_usec > timeout->tv_usec ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_4 = (_Bool)0;
          tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
        {
          list_add_tail(&transfer->list, &cur->list);
          goto out;
        }

        first = 0;
      }
      list_add_tail(&transfer->list, &ctx->flying_transfers);
    }
  }

out:
  ;
  _Bool tmp_if_expr_7;
  if(!(first == 0))
  {
    if(ctx->timerfd >= 0)
    {
      if(!(timeout->tv_sec == 0l))
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = timeout->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
      {
        struct itimerspec it = { .it_interval={ .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 }, .it_value={ .tv_sec=timeout->tv_sec, .tv_nsec=timeout->tv_usec * (signed long int)1000 } };
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "add_to_flying_list", "arm timerfd for timeout in %dms (first in line)", ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->timeout);
        r=timerfd_settime(ctx->timerfd, 1, &it, (struct itimerspec *)(void *)0);
        if(!(r >= 0))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "add_to_flying_list", "failed to arm first timerfd (errno %d)", *return_value___errno_location_6);
          r = LIBUSB_ERROR_OTHER;
        }

      }

    }

  }

  if(!(r == 0))
    list_del_link1(&transfer->list);

  pthread_mutex_unlock(&ctx->flying_transfers_lock);
  return r;
}

// arm_timerfd_for_next_timeout
// file ../../libusb/io.c line 1321
static signed int arm_timerfd_for_next_timeout(struct libusb_context *ctx)
{
  struct usbi_transfer *transfer = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul);
  _Bool tmp_if_expr_1;
  for( ; !(&transfer->list == &ctx->flying_transfers); transfer = (struct usbi_transfer *)((unsigned long int)transfer->list.next - (unsigned long int)8ul))
  {
    struct timeval *cur_tv = &transfer->timeout;
    if(!(cur_tv->tv_sec == 0l))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = cur_tv->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if((128 & (signed int)transfer->flags) == 0)
    {
      signed int r;
      struct itimerspec it = { .it_interval={ .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 }, .it_value={ .tv_sec=cur_tv->tv_sec, .tv_nsec=cur_tv->tv_usec * (signed long int)1000 } };
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "arm_timerfd_for_next_timeout", "next timeout originally %dms", ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->timeout);
      r=timerfd_settime(ctx->timerfd, 1, &it, (struct itimerspec *)(void *)0);
      if(!(r >= 0))
        return LIBUSB_ERROR_OTHER;

      return 0;
    }

  }

disarm:
  ;
  signed int return_value_disarm_timerfd_2;
  return_value_disarm_timerfd_2=disarm_timerfd(ctx);
  return return_value_disarm_timerfd_2;
}

// calculate_timeout
// file ../../libusb/io.c line 1195
static signed int calculate_timeout(struct usbi_transfer *transfer)
{
  signed int r;
  struct timespec current_time;
  unsigned int timeout = ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->timeout;
  if(timeout == 0u)
    return 0;

  else
  {
    r=usbi_backend->clock_gettime(0, &current_time);
    if(!(r >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      usbi_log(((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "calculate_timeout", "failed to read monotonic clock, errno=%d", *return_value___errno_location_1);
      return r;
    }

    current_time.tv_sec = current_time.tv_sec + (signed long int)(timeout / (unsigned int)1000);
    current_time.tv_nsec = current_time.tv_nsec + (signed long int)((timeout % (unsigned int)1000) * (unsigned int)1000000);
    if(current_time.tv_nsec >= 1000000000l)
    {
      current_time.tv_nsec = current_time.tv_nsec - (signed long int)1000000000;
      current_time.tv_sec = current_time.tv_sec + 1l;
    }

    (&transfer->timeout)->tv_sec = (&current_time)->tv_sec;
    (&transfer->timeout)->tv_usec = (&current_time)->tv_nsec / (signed long int)1000;
    return 0;
  }
}

// check_usb_vfs
// file ../../libusb/os/linux_usbfs.c line 254
static signed int check_usb_vfs(const char *dirname)
{
  struct __dirstream *dir;
  struct dirent *entry;
  signed int found = 0;
  dir=opendir(dirname);
  if(dir == ((struct __dirstream *)NULL))
    return 0;

  else
  {
    do
    {
      entry=readdir(dir);
      if(entry == ((struct dirent *)NULL))
        break;

      if(!((signed int)entry->d_name[0l] == 46))
      {
        found = 1;
        break;
      }

    }
    while((_Bool)1);
    closedir(dir);
    return found;
  }
}

// claim_interface
// file ../../libusb/os/linux_usbfs.c line 1377
static signed int claim_interface(struct libusb_device_handle *handle, signed int iface)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  signed int r;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(15 << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, &iface);
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_2;
  if(!(r == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    if(*return_value___errno_location_4 == 2)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 16)
        return LIBUSB_ERROR_BUSY;

      else
      {
        return_value___errno_location_2=__errno_location();
        if(*return_value___errno_location_2 == 19)
          return LIBUSB_ERROR_NO_DEVICE;

      }
    }
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "claim_interface", "claim interface failed, error %d errno %d", r, *return_value___errno_location_5);
    return LIBUSB_ERROR_OTHER;
  }

  return 0;
}

// cleanup_test_output
// file ../../tests/testlib.c line 80
static void cleanup_test_output(struct anonymous_5 *ctx)
{
  if(ctx->verbose == 0)
  {
    if(!(ctx->old_stdout == -1))
    {
      do
        dup2(ctx->old_stdout, 1);
      while((_Bool)0);
      ctx->old_stdout = -1;
    }

    if(!(ctx->old_stderr == -1))
    {
      do
        dup2(ctx->old_stderr, 2);
      while((_Bool)0);
      ctx->old_stderr = -1;
    }

    if(!(ctx->null_fd == -1))
    {
      close(ctx->null_fd);
      ctx->null_fd = -1;
    }

    if(!(ctx->output_file == stdout))
    {
      fclose(ctx->output_file);
      ctx->output_file = stdout;
    }

  }

}

// clear_configuration
// file ../../libusb/descriptor.c line 365
static void clear_configuration(struct libusb_config_descriptor *config)
{
  if(!(config->interface == ((struct libusb_interface *)NULL)))
  {
    signed int i = 0;
    for( ; !(i >= (signed int)config->bNumInterfaces); i = i + 1)
      clear_interface((struct libusb_interface *)config->interface + (signed long int)i);
    free((void *)config->interface);
  }

  if(!(config->extra == ((const unsigned char *)NULL)))
    free((void *)config->extra);

}

// clear_endpoint
// file ../../libusb/descriptor.c line 95
static void clear_endpoint(struct libusb_endpoint_descriptor *endpoint)
{
  if(!(endpoint->extra == ((const unsigned char *)NULL)))
    free((void *)(unsigned char *)endpoint->extra);

}

// clear_interface
// file ../../libusb/descriptor.c line 191
static void clear_interface(struct libusb_interface *usb_interface)
{
  signed int i;
  signed int j;
  if(!(usb_interface->altsetting == ((struct libusb_interface_descriptor *)NULL)))
  {
    i = 0;
    for( ; !(i >= usb_interface->num_altsetting); i = i + 1)
    {
      struct libusb_interface_descriptor *ifp = (struct libusb_interface_descriptor *)usb_interface->altsetting + (signed long int)i;
      if(!(ifp->extra == ((const unsigned char *)NULL)))
        free((void *)ifp->extra);

      if(!(ifp->endpoint == ((struct libusb_endpoint_descriptor *)NULL)))
      {
        j = 0;
        for( ; !(j >= (signed int)ifp->bNumEndpoints); j = j + 1)
          clear_endpoint((struct libusb_endpoint_descriptor *)ifp->endpoint + (signed long int)j);
        free((void *)ifp->endpoint);
      }

    }
    free((void *)usb_interface->altsetting);
    usb_interface->altsetting = (struct libusb_interface_descriptor *)(void *)0;
  }

}

// detach_kernel_driver_and_claim
// file ../../libusb/os/linux_usbfs.c line 1647
static signed int detach_kernel_driver_and_claim(struct libusb_device_handle *handle, signed int interface)
{
  struct usbfs_disconnect_claim dc;
  signed int r;
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  dc.interface = (unsigned int)interface;
  strcpy(dc.driver, "usbfs");
  dc.flags = (unsigned int)0x02;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(27 << 0)) | sizeof(struct usbfs_disconnect_claim) /*264ul*/  << 0 + 8 + 8, &dc);
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  if(r == 0)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    if(!(r == 0))
    {
      return_value___errno_location_4=__errno_location();
      tmp_if_expr_5 = *return_value___errno_location_4 != 25 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
  }
  signed int *return_value___errno_location_3;
  if(tmp_if_expr_6)
  {
    if(r == 0)
      return 0;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    switch(*return_value___errno_location_2)
    {
      case 16:
        return LIBUSB_ERROR_BUSY;
      case 22:
        return LIBUSB_ERROR_INVALID_PARAM;
      case 19:
        return LIBUSB_ERROR_NO_DEVICE;
      default:
      {
        return_value___errno_location_3=__errno_location();
        usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "detach_kernel_driver_and_claim", "disconnect-and-claim failed errno %d", *return_value___errno_location_3);
        return LIBUSB_ERROR_OTHER;
      }
    }
  }

  r=op_detach_kernel_driver(handle, interface);
  if(!(r == 0) && !(r == LIBUSB_ERROR_NOT_FOUND))
    return r;

  else
  {
    signed int return_value_claim_interface_7;
    return_value_claim_interface_7=claim_interface(handle, interface);
    return return_value_claim_interface_7;
  }
}

// disarm_timerfd
// file ../../libusb/io.c line 1303
static signed int disarm_timerfd(struct libusb_context *ctx)
{
  struct itimerspec disarm_timer = { .it_interval={ .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 }, .it_value={ .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 } };
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "disarm_timerfd", "");
  r=timerfd_settime(ctx->timerfd, 0, &disarm_timer, (struct itimerspec *)(void *)0);
  if(!(r >= 0))
    return LIBUSB_ERROR_OTHER;

  else
    return 0;
}

// discard_urbs
// file ../../libusb/os/linux_usbfs.c line 1715
static signed int discard_urbs(struct usbi_transfer *itransfer, signed int first, signed int last_plus_one)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct linux_device_handle_priv *dpriv;
  dpriv=_device_handle_priv(transfer->dev_handle);
  signed int i;
  signed int ret = 0;
  struct usbfs_urb *urb;
  i = last_plus_one - 1;
  signed int *return_value___errno_location_4;
  for( ; i >= first; i = i - 1)
  {
    if((signed int)transfer->type == LIBUSB_TRANSFER_TYPE_ISOCHRONOUS)
      urb = tpriv->_anon0.iso_urbs[(signed long int)i];

    else
      urb = &tpriv->_anon0.urbs[(signed long int)i];
    signed int return_value_ioctl_2;
    return_value_ioctl_2=ioctl(dpriv->fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(11 << 0) | (unsigned int)(0 << 0 + 8 + 8)), urb);
    if(!(return_value_ioctl_2 == 0))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      if(*return_value___errno_location_5 == 22)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "discard_urbs", "URB not found --> assuming ready to be reaped");
        if(i == last_plus_one + -1)
          ret = LIBUSB_ERROR_NOT_FOUND;

      }

      else
      {
        return_value___errno_location_4=__errno_location();
        if(*return_value___errno_location_4 == 19)
        {
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "discard_urbs", "Device not found for URB --> assuming ready to be reaped");
          ret = LIBUSB_ERROR_NO_DEVICE;
        }

        else
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "discard_urbs", "unrecognised discard errno %d", *return_value___errno_location_3);
          ret = LIBUSB_ERROR_OTHER;
        }
      }
    }

  }
  return ret;
}

// discovered_devs_alloc
// file ../../libusb/core.c line 606
static struct discovered_devs * discovered_devs_alloc(void)
{
  struct discovered_devs *ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct discovered_devs) /*16ul*/  + sizeof(void *) /*8ul*/  * (unsigned long int)8);
  ret = (struct discovered_devs *)return_value_malloc_1;
  if(!(ret == ((struct discovered_devs *)NULL)))
  {
    ret->len = (unsigned long int)0;
    ret->capacity = (unsigned long int)8;
  }

  return ret;
}

// discovered_devs_append
// file ../../libusb/core.c line 620
struct discovered_devs * discovered_devs_append(struct discovered_devs *discdevs, struct libusb_device *dev)
{
  unsigned long int len = discdevs->len;
  unsigned long int capacity;
  if(!(len >= discdevs->capacity))
  {
    discdevs->devices[(signed long int)len]=libusb_ref_device(dev);
    discdevs->len = discdevs->len + 1ul;
    return discdevs;
  }

  else
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "discovered_devs_append", "need to increase capacity");
    capacity = discdevs->capacity + (unsigned long int)8;
    void *return_value_usbi_reallocf_1;
    return_value_usbi_reallocf_1=usbi_reallocf((void *)discdevs, sizeof(struct discovered_devs) /*16ul*/  + sizeof(void *) /*8ul*/  * capacity);
    discdevs = (struct discovered_devs *)return_value_usbi_reallocf_1;
    if(!(discdevs == ((struct discovered_devs *)NULL)))
    {
      discdevs->capacity = capacity;
      discdevs->devices[(signed long int)len]=libusb_ref_device(dev);
      discdevs->len = discdevs->len + 1ul;
    }

    return discdevs;
  }
}

// discovered_devs_free
// file ../../libusb/core.c line 647
static void discovered_devs_free(struct discovered_devs *discdevs)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= discdevs->len); i = i + 1ul)
    libusb_unref_device(discdevs->devices[(signed long int)i]);
  free((void *)discdevs);
}

// do_close
// file ../../libusb/core.c line 1315
static void do_close(struct libusb_context *ctx, struct libusb_device_handle *dev_handle)
{
  struct usbi_transfer *itransfer;
  struct usbi_transfer *tmp;
  libusb_lock_events(ctx);
  pthread_mutex_lock(&ctx->flying_transfers_lock);
  itransfer = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul);
  tmp = (struct usbi_transfer *)((unsigned long int)itransfer->list.next - (unsigned long int)8ul);
  for( ; !(&itransfer->list == &ctx->flying_transfers); tmp = (struct usbi_transfer *)((unsigned long int)tmp->list.next - (unsigned long int)8ul))
  {
    struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
    if(transfer->dev_handle == dev_handle)
    {
      if((8 & (signed int)itransfer->flags) == 0)
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "do_close", "Device handle closed while transfer was still being processed, but the device is still connected as far as we know");
        if(!((4 & (signed int)itransfer->flags) == 0))
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "do_close", "A cancellation for an in-flight transfer hasn't completed but closing the device handle");

        else
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "do_close", "A cancellation hasn't even been scheduled on the transfer for which the device is closing");
      }

      pthread_mutex_lock(&itransfer->lock);
      list_del(&itransfer->list);
      transfer->dev_handle = (struct libusb_device_handle *)(void *)0;
      pthread_mutex_unlock(&itransfer->lock);
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "do_close", "Removed transfer %p from the in-flight list because device handle %p closed", transfer, dev_handle);
    }

    itransfer = tmp;
  }
  pthread_mutex_unlock(&ctx->flying_transfers_lock);
  libusb_unlock_events(ctx);
  pthread_mutex_lock(&ctx->open_devs_lock);
  list_del(&dev_handle->list);
  pthread_mutex_unlock(&ctx->open_devs_lock);
  usbi_backend->close(dev_handle);
  libusb_unref_device(dev_handle->dev);
  pthread_mutex_destroy(&dev_handle->lock);
  free((void *)dev_handle);
}

// do_streams_ioctl
// file ../../libusb/os/linux_usbfs.c line 1508
static signed int do_streams_ioctl(struct libusb_device_handle *handle, signed long int req, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints)
{
  signed int r;
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  struct usbfs_streams *streams;
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_3;
  if(num_endpoints >= 31)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct usbfs_streams) /*8ul*/  + (unsigned long int)num_endpoints);
    streams = (struct usbfs_streams *)return_value_malloc_2;
    if(streams == ((struct usbfs_streams *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      streams->num_streams = num_streams;
      streams->num_eps = (unsigned int)num_endpoints;
      memcpy((void *)streams->eps, (const void *)endpoints, (unsigned long int)num_endpoints);
      r=ioctl(fd, (unsigned long int)req, streams);
      free((void *)streams);
      if(!(r >= 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        if(*return_value___errno_location_5 == 25)
          return LIBUSB_ERROR_NOT_SUPPORTED;

        else
        {
          return_value___errno_location_4=__errno_location();
          if(*return_value___errno_location_4 == 22)
            return LIBUSB_ERROR_INVALID_PARAM;

          else
          {
            return_value___errno_location_3=__errno_location();
            if(*return_value___errno_location_3 == 19)
              return LIBUSB_ERROR_NO_DEVICE;

          }
        }
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "do_streams_ioctl", "streams-ioctl failed error %d errno %d", r, *return_value___errno_location_6);
        return LIBUSB_ERROR_OTHER;
      }

      return r;
    }
  }
}

// do_sync_bulk_transfer
// file ../../libusb/sync.c line 159
static signed int do_sync_bulk_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, signed int *transferred, unsigned int timeout, unsigned char type)
{
  struct libusb_transfer *transfer;
  transfer=libusb_alloc_transfer(0);
  signed int completed = 0;
  signed int r;
  if(transfer == ((struct libusb_transfer *)NULL))
    return LIBUSB_ERROR_NO_MEM;

  else
  {
    libusb_fill_bulk_transfer(transfer, dev_handle, endpoint, buffer, length, sync_transfer_cb, (void *)&completed, timeout);
    transfer->type = type;
    r=libusb_submit_transfer(transfer);
    if(!(r >= 0))
    {
      libusb_free_transfer(transfer);
      return r;
    }

    else
    {
      sync_transfer_wait_for_completion(transfer);
      *transferred = transfer->actual_length;
      switch((signed int)transfer->status)
      {
        case LIBUSB_TRANSFER_COMPLETED:
        {
          r = 0;
          break;
        }
        case LIBUSB_TRANSFER_TIMED_OUT:
        {
          r = LIBUSB_ERROR_TIMEOUT;
          break;
        }
        case LIBUSB_TRANSFER_STALL:
        {
          r = LIBUSB_ERROR_PIPE;
          break;
        }
        case LIBUSB_TRANSFER_OVERFLOW:
        {
          r = LIBUSB_ERROR_OVERFLOW;
          break;
        }
        case LIBUSB_TRANSFER_NO_DEVICE:
        {
          r = LIBUSB_ERROR_NO_DEVICE;
          break;
        }
        case LIBUSB_TRANSFER_ERROR:

        case LIBUSB_TRANSFER_CANCELLED:
        {
          r = LIBUSB_ERROR_IO;
          break;
        }
        default:
        {
          usbi_log(dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "do_sync_bulk_transfer", "unrecognised status code %d", transfer->status);
          r = LIBUSB_ERROR_OTHER;
        }
      }
      libusb_free_transfer(transfer);
      return r;
    }
  }
}

// find_endpoint
// file ../../libusb/core.c line 984
static struct libusb_endpoint_descriptor * find_endpoint(struct libusb_config_descriptor *config, unsigned char endpoint)
{
  signed int iface_idx = 0;
  for( ; !(iface_idx >= (signed int)config->bNumInterfaces); iface_idx = iface_idx + 1)
  {
    struct libusb_interface *iface = &config->interface[(signed long int)iface_idx];
    signed int altsetting_idx = 0;
    for( ; !(altsetting_idx >= iface->num_altsetting); altsetting_idx = altsetting_idx + 1)
    {
      struct libusb_interface_descriptor *altsetting = &iface->altsetting[(signed long int)altsetting_idx];
      signed int ep_idx = 0;
      for( ; !(ep_idx >= (signed int)altsetting->bNumEndpoints); ep_idx = ep_idx + 1)
      {
        struct libusb_endpoint_descriptor *ep = &altsetting->endpoint[(signed long int)ep_idx];
        if(ep->bEndpointAddress == endpoint)
          return ep;

      }
    }
  }
  return (struct libusb_endpoint_descriptor *)(void *)0;
}

// find_monotonic_clock
// file ../../libusb/os/linux_usbfs.c line 326
static signed int find_monotonic_clock(void)
{
  struct timespec ts;
  signed int r;
  r=clock_gettime(1, &ts);
  if(r == 0)
    return 1;

  else
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "find_monotonic_clock", "monotonic clock doesn't work, errno %d", *return_value___errno_location_1);
    return 0;
  }
}

// find_usbfs_path
// file ../../libusb/os/linux_usbfs.c line 277
static const char * find_usbfs_path(void)
{
  const char *path = "/dev/bus/usb";
  const char *ret = (const char *)(void *)0;
  signed int return_value_check_usb_vfs_2;
  return_value_check_usb_vfs_2=check_usb_vfs(path);
  if(!(return_value_check_usb_vfs_2 == 0))
    ret = path;

  else
  {
    path = "/proc/bus/usb";
    signed int return_value_check_usb_vfs_1;
    return_value_check_usb_vfs_1=check_usb_vfs(path);
    if(!(return_value_check_usb_vfs_1 == 0))
      ret = path;

  }
  if(ret == ((const char *)NULL))
  {
    struct dirent *entry;
    struct __dirstream *dir;
    path = "/dev";
    dir=opendir(path);
    if(!(dir == ((struct __dirstream *)NULL)))
    {
      do
      {
        entry=readdir(dir);
        if(entry == ((struct dirent *)NULL))
          break;

        signed int return_value__is_usbdev_entry_3;
        return_value__is_usbdev_entry_3=_is_usbdev_entry(entry, (signed int *)(void *)0, (signed int *)(void *)0);
        if(!(return_value__is_usbdev_entry_3 == 0))
        {
          ret = path;
          usbdev_names = 1;
          break;
        }

      }
      while((_Bool)1);
      closedir(dir);
    }

  }

  if(ret == ((const char *)NULL))
    ret = "/dev/bus/usb";

  if(!(ret == ((const char *)NULL)))
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "find_usbfs_path", "found usbfs at %s", ret);

  return ret;
}

// free_iso_urbs
// file ../../libusb/os/linux_usbfs.c line 1751
static void free_iso_urbs(struct linux_transfer_priv *tpriv)
{
  signed int i = 0;
  for( ; !(i >= tpriv->num_urbs); i = i + 1)
  {
    struct usbfs_urb *urb = tpriv->_anon0.iso_urbs[(signed long int)i];
    if(urb == ((struct usbfs_urb *)NULL))
      break;

    free((void *)urb);
  }
  free((void *)tpriv->_anon0.iso_urbs);
  tpriv->_anon0.iso_urbs = (struct usbfs_urb **)(void *)0;
}

// get_next_timeout
// file ../../libusb/io.c line 2220
static signed int get_next_timeout(struct libusb_context *ctx, struct timeval *tv, struct timeval *out)
{
  struct timeval timeout;
  signed int r;
  r=libusb_get_next_timeout(ctx, &timeout);
  _Bool tmp_if_expr_1;
  signed int tmp_if_expr_2;
  if(!(r == 0))
  {
    if(!(timeout.tv_sec == 0l))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (&timeout)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
      return 1;

    if(timeout.tv_sec == tv->tv_sec)
      tmp_if_expr_2 = (signed int)((&timeout)->tv_usec < tv->tv_usec);

    else
      tmp_if_expr_2 = (signed int)((&timeout)->tv_sec < tv->tv_sec);
    if(!(tmp_if_expr_2 == 0))
      *out = timeout;

    else
      *out = *tv;
  }

  else
    *out = *tv;
  return 0;
}

// handle_bulk_completion
// file ../../libusb/os/linux_usbfs.c line 2208
static signed int handle_bulk_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb)
{
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int urb_idx = (signed int)(urb - tpriv->_anon0.urbs);
  pthread_mutex_lock(&itransfer->lock);
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "handling completion status %d of bulk urb %d/%d", urb->status, urb_idx + 1, tpriv->num_urbs);
  tpriv->num_retired = tpriv->num_retired + 1;
  if(!((signed int)tpriv->reap_action == NORMAL))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "abnormal reap: urb status %d", urb->status);
    if(urb->actual_length >= 1)
    {
      unsigned char *target = transfer->buffer + (signed long int)itransfer->transferred;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "received %d bytes of surplus data", urb->actual_length);
      if(!((unsigned char *)urb->buffer == target))
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "moving surplus data from offset %d to offset %d", (unsigned char *)urb->buffer - transfer->buffer, target - transfer->buffer);
        memmove((void *)target, urb->buffer, (unsigned long int)urb->actual_length);
      }

      itransfer->transferred = itransfer->transferred + urb->actual_length;
    }

    if(tpriv->num_retired == tpriv->num_urbs)
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "abnormal reap: last URB handled, reporting");
      if(!((signed int)tpriv->reap_action == COMPLETED_EARLY))
      {
        if((signed int)tpriv->reap_status == LIBUSB_TRANSFER_COMPLETED)
          tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;

      }

      goto completed;
    }

  }

  else
  {
    itransfer->transferred = itransfer->transferred + urb->actual_length;
    if(!(urb->status == 0))
    {
      if(urb->status == -121)
        goto __CPROVER_DUMP_L7;

      if(urb->status == -104 || urb->status == -2)
        goto __CPROVER_DUMP_L8;

      if(urb->status == -108 || urb->status == -19)
        goto __CPROVER_DUMP_L9;

      if(urb->status == -32)
        goto __CPROVER_DUMP_L10;

      if(urb->status == -75)
        goto __CPROVER_DUMP_L12;

      if(urb->status == -84 || urb->status == -71 || urb->status == -70 || urb->status == -63 || urb->status == -62)
        goto __CPROVER_DUMP_L14;

    }

    else
    {
      goto __CPROVER_DUMP_L16;

    __CPROVER_DUMP_L7:
      ;
      goto __CPROVER_DUMP_L16;

    __CPROVER_DUMP_L8:
      ;
      goto __CPROVER_DUMP_L16;

    __CPROVER_DUMP_L9:
      ;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "device removed");
      tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_NO_DEVICE;
      goto cancel_remaining;

    __CPROVER_DUMP_L10:
      ;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "detected endpoint stall");
      if((signed int)tpriv->reap_status == LIBUSB_TRANSFER_COMPLETED)
        tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_STALL;

      goto cancel_remaining;

    __CPROVER_DUMP_L12:
      ;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "overflow, actual_length=%d", urb->actual_length);
      if((signed int)tpriv->reap_status == LIBUSB_TRANSFER_COMPLETED)
        tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_OVERFLOW;

      goto completed;

    __CPROVER_DUMP_L14:
      ;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "low level error %d", urb->status);
      tpriv->reap_action = (enum reap_action)ERROR;
      goto cancel_remaining;
    }
    usbi_log(((struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_bulk_completion", "unrecognised urb status %d", urb->status);
    tpriv->reap_action = (enum reap_action)ERROR;
    goto cancel_remaining;

  __CPROVER_DUMP_L16:
    ;
    if(urb_idx == tpriv->num_urbs + -1)
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "last URB in transfer --> complete!");
      goto completed;
    }

    else
      if(!(urb->actual_length >= urb->buffer_length))
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_bulk_completion", "short transfer %d/%d --> complete!", urb->actual_length, urb->buffer_length);
        if((signed int)tpriv->reap_action == NORMAL)
          tpriv->reap_action = (enum reap_action)COMPLETED_EARLY;

      }

      else
        goto out_unlock;

  cancel_remaining:
    ;
    if((signed int)tpriv->reap_action == ERROR)
    {
      if((signed int)tpriv->reap_status == LIBUSB_TRANSFER_COMPLETED)
        tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;

    }

    if(tpriv->num_retired == tpriv->num_urbs)
      goto completed;

    discard_urbs(itransfer, urb_idx + 1, tpriv->num_urbs);
  }

out_unlock:
  ;
  pthread_mutex_unlock(&itransfer->lock);
  return 0;

completed:
  ;
  free((void *)tpriv->_anon0.urbs);
  tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
  pthread_mutex_unlock(&itransfer->lock);
  signed int tmp_if_expr_4;
  signed int return_value_usbi_handle_transfer_cancellation_2;
  signed int return_value_usbi_handle_transfer_completion_3;
  if((signed int)tpriv->reap_action == CANCELLED)
  {
    return_value_usbi_handle_transfer_cancellation_2=usbi_handle_transfer_cancellation(itransfer);
    tmp_if_expr_4 = return_value_usbi_handle_transfer_cancellation_2;
  }

  else
  {
    return_value_usbi_handle_transfer_completion_3=usbi_handle_transfer_completion(itransfer, tpriv->reap_status);
    tmp_if_expr_4 = return_value_usbi_handle_transfer_completion_3;
  }
  return tmp_if_expr_4;
}

// handle_control_completion
// file ../../libusb/os/linux_usbfs.c line 2465
static signed int handle_control_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb)
{
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  signed int status;
  pthread_mutex_lock(&itransfer->lock);
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_control_completion", "handling completion status %d", urb->status);
  itransfer->transferred = itransfer->transferred + urb->actual_length;
  if((signed int)tpriv->reap_action == CANCELLED)
  {
    if(!(urb->status == 0))
    {
      if(!(urb->status == -2))
        usbi_log(((struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_control_completion", "cancel: unrecognised urb status %d", urb->status);

    }

    free((void *)tpriv->_anon0.urbs);
    tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
    pthread_mutex_unlock(&itransfer->lock);
    signed int return_value_usbi_handle_transfer_cancellation_2;
    return_value_usbi_handle_transfer_cancellation_2=usbi_handle_transfer_cancellation(itransfer);
    return return_value_usbi_handle_transfer_cancellation_2;
  }

  if(!(urb->status == 0))
  {
    if(urb->status == -2)
      goto __CPROVER_DUMP_L4;

    if(urb->status == -108 || urb->status == -19)
      goto __CPROVER_DUMP_L5;

    if(urb->status == -32)
      goto __CPROVER_DUMP_L6;

    if(urb->status == -75)
      goto __CPROVER_DUMP_L7;

    if(urb->status == -84 || urb->status == -71 || urb->status == -70 || urb->status == -63 || urb->status == -62)
      goto __CPROVER_DUMP_L8;

  }

  else
  {
    status = LIBUSB_TRANSFER_COMPLETED;
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L4:
    ;
    status = LIBUSB_TRANSFER_CANCELLED;
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L5:
    ;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_control_completion", "device removed");
    status = LIBUSB_TRANSFER_NO_DEVICE;
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L6:
    ;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_control_completion", "unsupported control request");
    status = LIBUSB_TRANSFER_STALL;
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L7:
    ;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_control_completion", "control overflow error");
    status = LIBUSB_TRANSFER_OVERFLOW;
    goto __CPROVER_DUMP_L10;

  __CPROVER_DUMP_L8:
    ;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_control_completion", "low-level bus error occurred");
    status = LIBUSB_TRANSFER_ERROR;
    goto __CPROVER_DUMP_L10;
  }
  usbi_log(((struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_control_completion", "unrecognised urb status %d", urb->status);
  status = LIBUSB_TRANSFER_ERROR;

__CPROVER_DUMP_L10:
  ;
  free((void *)tpriv->_anon0.urbs);
  tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
  pthread_mutex_unlock(&itransfer->lock);
  signed int return_value_usbi_handle_transfer_completion_3;
  return_value_usbi_handle_transfer_completion_3=usbi_handle_transfer_completion(itransfer, (enum libusb_transfer_status)status);
  return return_value_usbi_handle_transfer_completion_3;
}

// handle_events
// file ../../libusb/io.c line 2030
static signed int handle_events(struct libusb_context *ctx, struct timeval *tv)
{
  signed int r;
  struct usbi_pollfd *ipollfd;
  unsigned long int nfds = (unsigned long int)0;
  unsigned long int internal_nfds;
  struct pollfd *fds = (struct pollfd *)(void *)0;
  signed int i = -1;
  signed int timeout_ms;
  signed int special_event;
  if(ctx->timerfd >= 0)
    internal_nfds = (unsigned long int)2;

  else
    internal_nfds = (unsigned long int)1;
  pthread_mutex_lock(&ctx->event_data_lock);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(ctx->pollfds_modified == 0u))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "poll fds modified, reallocating");
    if(!(ctx->pollfds == ((struct pollfd *)NULL)))
    {
      free((void *)ctx->pollfds);
      ctx->pollfds = (struct pollfd *)(void *)0;
    }

    /* assertion ctx->pollfds_cnt >= internal_nfds */
    assert(ctx->pollfds_cnt >= internal_nfds);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc(ctx->pollfds_cnt, sizeof(struct pollfd) /*8ul*/ );
    ctx->pollfds = (struct pollfd *)return_value_calloc_1;
    if(ctx->pollfds == ((struct pollfd *)NULL))
    {
      pthread_mutex_unlock(&ctx->event_data_lock);
      return LIBUSB_ERROR_NO_MEM;
    }

    ipollfd = (struct usbi_pollfd *)((unsigned long int)(&ctx->ipollfds)->next - (unsigned long int)8ul);
    for( ; !(&ipollfd->list == &ctx->ipollfds); ipollfd = (struct usbi_pollfd *)((unsigned long int)ipollfd->list.next - (unsigned long int)8ul))
    {
      struct libusb_pollfd *pollfd = &ipollfd->pollfd;
      i = i + 1;
      (ctx->pollfds + (signed long int)i)->fd = pollfd->fd;
      (ctx->pollfds + (signed long int)i)->events = pollfd->events;
    }
    ctx->pollfds_modified = (unsigned int)0;
    if(!(ctx->device_close == 0u))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
      usbi_clear_event(ctx);

  }

  fds = ctx->pollfds;
  nfds = ctx->pollfds_cnt;
  pthread_mutex_unlock(&ctx->event_data_lock);
  timeout_ms = (signed int)((signed long int)(signed int)(tv->tv_sec * (signed long int)1000) + tv->tv_usec / (signed long int)1000);
  if(!(tv->tv_usec % 1000l == 0l))
    timeout_ms = timeout_ms + 1;

  signed int return_value_handle_timeouts_5;
  _Bool tmp_if_expr_8;
  signed int *return_value___errno_location_7;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  do
  {

  redo_poll:
    ;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "poll() %d fds with timeout in %dms", nfds, timeout_ms);
    r=poll(fds, nfds, timeout_ms);
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "poll() returned %d", r);
    if(r == 0)
    {
      return_value_handle_timeouts_5=handle_timeouts(ctx);
      return return_value_handle_timeouts_5;
    }

    else
    {
      if(r == -1)
      {
        return_value___errno_location_7=__errno_location();
        tmp_if_expr_8 = *return_value___errno_location_7 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        return LIBUSB_ERROR_INTERRUPTED;

      else
        if(!(r >= 0))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "handle_events", "poll failed %d err=%d", r, *return_value___errno_location_6);
          return LIBUSB_ERROR_IO;
        }

    }
    special_event = 0;
    if(!(fds->revents == 0))
    {
      struct libusb_hotplug_message *message = (struct libusb_hotplug_message *)(void *)0;
      struct usbi_transfer *itransfer;
      signed int ret = 0;
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "caught a fish on the event pipe");
      pthread_mutex_lock(&ctx->event_data_lock);
      if(!(ctx->pollfds_modified == 0u))
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "someone updated the poll fds");

      if(!(ctx->device_close == 0u))
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "someone is closing a device");

      if(!(ctx->hotplug_msgs.next == &ctx->hotplug_msgs))
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "hotplug message received");
        special_event = 1;
        message = (struct libusb_hotplug_message *)((unsigned long int)(&ctx->hotplug_msgs)->next - (unsigned long int)16ul);
        list_del_link1(&message->list);
      }

      if(ret == 0)
      {
        if(!(ctx->completed_transfers.next == &ctx->completed_transfers))
        {
          itransfer = (struct usbi_transfer *)((unsigned long int)(&ctx->completed_transfers)->next - (unsigned long int)24ul);
          list_del_link1(&itransfer->completed_list);
          pthread_mutex_unlock(&ctx->event_data_lock);
          ret=usbi_backend->handle_transfer_completion(itransfer);
          if(!(ret == 0))
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "handle_events", "backend handle_transfer_completion failed with error %d", ret);

          pthread_mutex_lock(&ctx->event_data_lock);
        }

      }

      if(!(ctx->device_close == 0u))
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
        tmp_if_expr_10 = (_Bool)1;

      else
        tmp_if_expr_10 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_10)
        tmp_if_expr_11 = (_Bool)1;

      else
        tmp_if_expr_11 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_11)
        usbi_clear_event(ctx);

      pthread_mutex_unlock(&ctx->event_data_lock);
      if(!(message == ((struct libusb_hotplug_message *)NULL)))
      {
        usbi_hotplug_match(ctx, message->device, message->event);
        if((signed int)message->event == LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT)
          libusb_unref_device(message->device);

        free((void *)message);
      }

      if(!(ret == 0))
      {
        r = ret;
        goto handled;
      }

      r = r - 1;
      if(r == 0)
        goto handled;

    }

    if(ctx->timerfd >= 0)
    {
      if(!((fds + 1l)->revents == 0))
      {
        signed int handle_events__1__4__ret;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_events", "timerfd triggered");
        special_event = 1;
        handle_events__1__4__ret=handle_timerfd_trigger(ctx);
        if(!(handle_events__1__4__ret >= 0))
        {
          r = handle_events__1__4__ret;
          goto handled;
        }

        r = r - 1;
        if(r == 0)
          goto handled;

      }

    }

    r=usbi_backend->handle_events(ctx, fds + (signed long int)internal_nfds, nfds - internal_nfds, r);
    if(!(r == 0))
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "handle_events", "backend handle_events failed with error %d", r);


  handled:
    ;
    if(!(r == 0) || special_event == 0)
      break;

    timeout_ms = 0;
  }
  while((_Bool)1);
  return r;
}

// handle_iso_completion
// file ../../libusb/os/linux_usbfs.c line 2344
static signed int handle_iso_completion(struct usbi_transfer *itransfer, struct usbfs_urb *urb)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  signed int num_urbs = tpriv->num_urbs;
  signed int urb_idx = 0;
  signed int i;
  enum libusb_transfer_status status = (enum libusb_transfer_status)LIBUSB_TRANSFER_COMPLETED;
  pthread_mutex_lock(&itransfer->lock);
  i = 0;
  for( ; !(i >= num_urbs); i = i + 1)
    if(urb == tpriv->_anon0.iso_urbs[(signed long int)i])
    {
      urb_idx = i + 1;
      break;
    }

  signed int tmp_post_2;
  if(urb_idx == 0)
  {
    usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "handle_iso_completion", "could not locate urb!");
    pthread_mutex_unlock(&itransfer->lock);
    return LIBUSB_ERROR_NOT_FOUND;
  }

  else
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "handling completion status %d of iso urb %d/%d", urb->status, urb_idx, num_urbs);
    i = 0;
    for( ; !(i >= urb->_anon0.number_of_packets); i = i + 1)
    {
      struct usbfs_iso_packet_desc *urb_desc = &urb->iso_frame_desc[(signed long int)i];
      struct libusb_iso_packet_descriptor *lib_desc;
      tmp_post_2 = tpriv->iso_packet_offset;
      tpriv->iso_packet_offset = tpriv->iso_packet_offset + 1;
      lib_desc = &transfer->iso_packet_desc[(signed long int)tmp_post_2];
      lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_COMPLETED;
      if(!(urb_desc->status == 0u))
      {
        if(urb_desc->status == 4294967192u || urb_desc->status == 4294967294u)
          goto __CPROVER_DUMP_L7;

        if(urb_desc->status == 4294967188u || urb_desc->status == 4294967277u)
          goto __CPROVER_DUMP_L8;

        if(urb_desc->status == 4294967264u)
          goto __CPROVER_DUMP_L9;

        if(urb_desc->status == 4294967221u)
          goto __CPROVER_DUMP_L10;

        if(urb_desc->status == 4294967212u || urb_desc->status == 4294967225u || urb_desc->status == 4294967226u || urb_desc->status == 4294967233u || urb_desc->status == 4294967234u || urb_desc->status == 4294967278u)
          goto __CPROVER_DUMP_L11;

      }

      else
      {
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L7:
        ;
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L8:
        ;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "device removed");
        lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_NO_DEVICE;
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L9:
        ;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "detected endpoint stall");
        lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_STALL;
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L10:
        ;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "overflow error");
        lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_OVERFLOW;
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L11:
        ;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "low-level USB error %d", urb_desc->status);
        lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;
        goto __CPROVER_DUMP_L13;
      }
      usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_iso_completion", "unrecognised urb status %d", urb_desc->status);
      lib_desc->status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;

    __CPROVER_DUMP_L13:
      ;
      lib_desc->actual_length = urb_desc->actual_length;
    }
    tpriv->num_retired = tpriv->num_retired + 1;
    if(!((signed int)tpriv->reap_action == NORMAL))
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "CANCEL: urb status %d", urb->status);
      if(tpriv->num_retired == num_urbs)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "CANCEL: last URB handled, reporting");
        free_iso_urbs(tpriv);
        if((signed int)tpriv->reap_action == CANCELLED)
        {
          pthread_mutex_unlock(&itransfer->lock);
          signed int return_value_usbi_handle_transfer_cancellation_3;
          return_value_usbi_handle_transfer_cancellation_3=usbi_handle_transfer_cancellation(itransfer);
          return return_value_usbi_handle_transfer_cancellation_3;
        }

        else
        {
          pthread_mutex_unlock(&itransfer->lock);
          signed int return_value_usbi_handle_transfer_completion_4;
          return_value_usbi_handle_transfer_completion_4=usbi_handle_transfer_completion(itransfer, (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR);
          return return_value_usbi_handle_transfer_completion_4;
        }
      }

    }

    else
    {
      if(!(urb->status == 0))
      {
        if(urb->status == -104 || urb->status == -2)
          goto __CPROVER_DUMP_L19;

        if(urb->status == -108)
          goto __CPROVER_DUMP_L20;

      }

      else
      {
        goto __CPROVER_DUMP_L22;

      __CPROVER_DUMP_L19:
        ;
        goto __CPROVER_DUMP_L22;

      __CPROVER_DUMP_L20:
        ;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "device removed");
        status = (enum libusb_transfer_status)LIBUSB_TRANSFER_NO_DEVICE;
        goto __CPROVER_DUMP_L22;
      }
      usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_iso_completion", "unrecognised urb status %d", urb->status);
      status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;

    __CPROVER_DUMP_L22:
      ;
      if(urb_idx == num_urbs)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "handle_iso_completion", "last URB in transfer --> complete!");
        free_iso_urbs(tpriv);
        pthread_mutex_unlock(&itransfer->lock);
        signed int return_value_usbi_handle_transfer_completion_5;
        return_value_usbi_handle_transfer_completion_5=usbi_handle_transfer_completion(itransfer, status);
        return return_value_usbi_handle_transfer_completion_5;
      }

    }

  out:
    ;
    pthread_mutex_unlock(&itransfer->lock);
    return 0;
  }
}

// handle_timeout
// file ../../libusb/io.c line 1940
static void handle_timeout(struct usbi_transfer *itransfer)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int r;
  itransfer->flags = itransfer->flags | (unsigned char)128;
  r=libusb_cancel_transfer(transfer);
  signed int *return_value___errno_location_1;
  if(r == 0)
    itransfer->flags = itransfer->flags | (unsigned char)1;

  else
  {
    return_value___errno_location_1=__errno_location();
    usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "handle_timeout", "async cancel failed %d errno=%d", r, *return_value___errno_location_1);
  }
}

// handle_timeouts
// file ../../libusb/io.c line 1997
static signed int handle_timeouts(struct libusb_context *ctx)
{
  signed int r;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->flying_transfers_lock);
  r=handle_timeouts_locked(ctx);
  pthread_mutex_unlock(&ctx->flying_transfers_lock);
  return r;
}

// handle_timeouts_locked
// file ../../libusb/io.c line 1955
static signed int handle_timeouts_locked(struct libusb_context *ctx)
{
  signed int r;
  struct timespec systime_ts;
  struct timeval systime;
  struct usbi_transfer *transfer;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(ctx->flying_transfers.next == &ctx->flying_transfers)
    return 0;

  else
  {
    r=usbi_backend->clock_gettime(0, &systime_ts);
    if(!(r >= 0))
      return r;

    else
    {
      (&systime)->tv_sec = (&systime_ts)->tv_sec;
      (&systime)->tv_usec = (&systime_ts)->tv_nsec / (signed long int)1000;
      transfer = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul);
      if(!(&transfer->list == &ctx->flying_transfers))
      {
        struct timeval *cur_tv = &transfer->timeout;
        if(!(cur_tv->tv_sec == 0l))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = cur_tv->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_1)
          return 0;

        if((130 & (signed int)transfer->flags) == 0)
        {
          if(!(systime.tv_sec >= cur_tv->tv_sec))
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            if(cur_tv->tv_sec == systime.tv_sec)
              tmp_if_expr_2 = cur_tv->tv_usec > systime.tv_usec ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_2 = (_Bool)0;
            tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_3)
            return 0;

          handle_timeout(transfer);
        }

        transfer = (struct usbi_transfer *)((unsigned long int)transfer->list.next - (unsigned long int)8ul);
      }

      return 0;
    }
  }
}

// handle_timerfd_trigger
// file ../../libusb/io.c line 2008
static signed int handle_timerfd_trigger(struct libusb_context *ctx)
{
  signed int r;
  pthread_mutex_lock(&ctx->flying_transfers_lock);
  r=handle_timeouts_locked(ctx);
  if(r >= 0)
    r=arm_timerfd_for_next_timeout(ctx);


out:
  ;
  pthread_mutex_unlock(&ctx->flying_transfers_lock);
  return r;
}

// initialize_device
// file ../../libusb/os/linux_usbfs.c line 872
static signed int initialize_device(struct libusb_device *dev, unsigned char busnum, unsigned char devaddr, const char *sysfs_dir)
{
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  struct libusb_context *ctx = dev->ctx;
  signed int descriptors_size = 512;
  signed int fd;
  signed int speed;
  signed long int r;
  dev->bus_number = busnum;
  dev->device_address = devaddr;
  if(!(sysfs_dir == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(sysfs_dir);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(return_value_strlen_1 + (unsigned long int)1);
    priv->sysfs_dir = (char *)return_value_malloc_2;
    if(priv->sysfs_dir == ((char *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    strcpy(priv->sysfs_dir, sysfs_dir);
    speed=__read_sysfs_attr(dev->ctx, sysfs_dir, "speed");
    if(speed >= 0)
      switch(speed)
      {
        case 1:
        {
          dev->speed = (enum libusb_speed)LIBUSB_SPEED_LOW;
          break;
        }
        case 12:
        {
          dev->speed = (enum libusb_speed)LIBUSB_SPEED_FULL;
          break;
        }
        case 480:
        {
          dev->speed = (enum libusb_speed)LIBUSB_SPEED_HIGH;
          break;
        }
        case 5000:
        {
          dev->speed = (enum libusb_speed)LIBUSB_SPEED_SUPER;
          break;
        }
        default:
          usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "initialize_device", "Unknown device speed: %d Mbps", speed);
      }

  }

  if(!(sysfs_has_descriptors == 0))
    fd=_open_sysfs_attr(dev, "descriptors");

  else
    fd=_get_usbfs_fd(dev, (unsigned int)00, 0);
  if(!(fd >= 0))
    return fd;

  else
  {
    do
    {
      descriptors_size = descriptors_size * 2;
      void *return_value_usbi_reallocf_3;
      return_value_usbi_reallocf_3=usbi_reallocf_link2((void *)priv->descriptors, (unsigned long int)descriptors_size);
      priv->descriptors = (unsigned char *)return_value_usbi_reallocf_3;
      if(priv->descriptors == ((unsigned char *)NULL))
      {
        close(fd);
        return LIBUSB_ERROR_NO_MEM;
      }

      if(sysfs_has_descriptors == 0)
        memset((void *)(priv->descriptors + (signed long int)priv->descriptors_len), 0, (unsigned long int)(descriptors_size - priv->descriptors_len));

      r=read(fd, (void *)(priv->descriptors + (signed long int)priv->descriptors_len), (unsigned long int)(descriptors_size - priv->descriptors_len));
      if(!(r >= 0l))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "initialize_device", "read descriptor failed ret=%d errno=%d", fd, *return_value___errno_location_4);
        close(fd);
        return LIBUSB_ERROR_IO;
      }

      priv->descriptors_len = priv->descriptors_len + (signed int)r;
    }
    while(priv->descriptors_len == descriptors_size);
    close(fd);
    if(!(priv->descriptors_len >= 18))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "initialize_device", "short descriptor read (%d)", priv->descriptors_len);
      return LIBUSB_ERROR_IO;
    }

    else
      if(!(sysfs_can_relate_devices == 0))
        return LIBUSB_SUCCESS;

      else
      {
        fd=_get_usbfs_fd(dev, (unsigned int)02, 1);
        if(!(fd >= 0))
        {
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "initialize_device", "Missing rw usbfs access; cannot determine active configuration descriptor");
          if(priv->descriptors_len >= 9)
          {
            struct libusb_config_descriptor config;
            usbi_parse_descriptor(priv->descriptors + (signed long int)18, "bbwbbbbb", (void *)&config, 0);
            priv->active_config = (signed int)config.bConfigurationValue;
          }

          else
            priv->active_config = -1;
          return LIBUSB_SUCCESS;
        }

        else
        {
          signed int return_value_usbfs_get_active_config_5;
          return_value_usbfs_get_active_config_5=usbfs_get_active_config(dev, fd);
          r = (signed long int)return_value_usbfs_get_active_config_5;
          if(r >= 1l)
          {
            priv->active_config = (signed int)r;
            r = (signed long int)LIBUSB_SUCCESS;
          }

          else
            if(r == 0l)
            {
              usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "initialize_device", "active cfg 0? assuming unconfigured device");
              priv->active_config = -1;
              r = (signed long int)LIBUSB_SUCCESS;
            }

            else
              if(r == -1l)
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "initialize_device", "couldn't query active configuration, assuming unconfigured");
                priv->active_config = -1;
                r = (signed long int)LIBUSB_SUCCESS;
              }

          close(fd);
          return (signed int)r;
        }
      }
  }
}

// kernel_version_ge
// file ../../libusb/os/linux_usbfs.c line 343
static signed int kernel_version_ge(signed int major, signed int minor, signed int sublevel)
{
  struct utsname uts;
  signed int atoms;
  signed int kmajor;
  signed int kminor;
  signed int ksublevel;
  signed int return_value_uname_1;
  return_value_uname_1=uname(&uts);
  if(!(return_value_uname_1 >= 0))
    return -1;

  else
  {
    atoms=sscanf(uts.release, "%d.%d.%d", &kmajor, &kminor, &ksublevel);
    if(!(atoms >= 1))
      return -1;

    else
      if(!(major >= kmajor))
        return 1;

      else
        if(!(kmajor >= major))
          return 0;

        else
          if(!(atoms >= 2))
            return (signed int)(0 == minor && 0 == sublevel);

          else
            if(!(minor >= kminor))
              return 1;

            else
              if(!(kminor >= minor))
                return 0;

              else
                if(!(atoms >= 3))
                  return (signed int)(0 == sublevel);

                else
                  return (signed int)(ksublevel >= sublevel);
  }
}

// libusb_alloc_streams
// file ../../libusb/core.c line 1763
signed int libusb_alloc_streams(struct libusb_device_handle *dev, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_alloc_streams", "streams %u eps %d", (unsigned int)num_streams, num_endpoints);
  signed int return_value;
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
    if(!(usbi_backend->alloc_streams == ((signed int (*)(struct libusb_device_handle *, unsigned int, unsigned char *, signed int))NULL)))
    {
      return_value=usbi_backend->alloc_streams(dev, num_streams, endpoints, num_endpoints);
      return return_value;
    }

    else
      return LIBUSB_ERROR_NOT_SUPPORTED;
}

// libusb_alloc_transfer
// file ../../libusb/io.c line 1248
struct libusb_transfer * libusb_alloc_transfer(signed int iso_packets)
{
  struct libusb_transfer *transfer;
  unsigned long int os_alloc_size = usbi_backend->transfer_priv_size;
  unsigned long int alloc_size = sizeof(struct usbi_transfer) /*152ul*/  + sizeof(struct libusb_transfer) /*64ul*/  + sizeof(struct libusb_iso_packet_descriptor) /*12ul*/  * (unsigned long int)iso_packets + os_alloc_size;
  struct usbi_transfer *itransfer;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, alloc_size);
  itransfer = (struct usbi_transfer *)return_value_calloc_1;
  if(itransfer == ((struct usbi_transfer *)NULL))
    return (struct libusb_transfer *)(void *)0;

  else
  {
    itransfer->num_iso_packets = iso_packets;
    pthread_mutex_init(&itransfer->lock, (const union anonymous_4 *)(void *)0);
    pthread_mutex_init(&itransfer->flags_lock, (const union anonymous_4 *)(void *)0);
    transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_alloc_transfer", "transfer %p", transfer);
    return transfer;
  }
}

// libusb_attach_kernel_driver
// file ../../libusb/core.c line 1891
signed int libusb_attach_kernel_driver(struct libusb_device_handle *dev, signed int interface_number)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_attach_kernel_driver", "interface %d", interface_number);
  signed int return_value;
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
    if(!(usbi_backend->attach_kernel_driver == ((signed int (*)(struct libusb_device_handle *, signed int))NULL)))
    {
      return_value=usbi_backend->attach_kernel_driver(dev, interface_number);
      return return_value;
    }

    else
      return LIBUSB_ERROR_NOT_SUPPORTED;
}

// libusb_bulk_transfer
// file ../../libusb/sync.c line 253
signed int libusb_bulk_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *data, signed int length, signed int *transferred, unsigned int timeout)
{
  signed int return_value_do_sync_bulk_transfer_1;
  return_value_do_sync_bulk_transfer_1=do_sync_bulk_transfer(dev_handle, endpoint, data, length, transferred, timeout, (unsigned char)LIBUSB_TRANSFER_TYPE_BULK);
  return return_value_do_sync_bulk_transfer_1;
}

// libusb_cancel_transfer
// file ../../libusb/io.c line 1536
signed int libusb_cancel_transfer(struct libusb_transfer *transfer)
{
  struct usbi_transfer *itransfer = (struct usbi_transfer *)((unsigned char *)transfer - (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_cancel_transfer", "transfer %p", transfer);
  pthread_mutex_lock(&itransfer->lock);
  pthread_mutex_lock(&itransfer->flags_lock);
  _Bool tmp_if_expr_1;
  if((32 & (signed int)itransfer->flags) == 0)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ((signed int)itransfer->flags & 4) != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    r = LIBUSB_ERROR_NOT_FOUND;

  else
  {
    r=usbi_backend->cancel_transfer(itransfer);
    if(!(r >= 0))
    {
      if(!(r == LIBUSB_ERROR_NOT_FOUND) && !(r == LIBUSB_ERROR_NO_DEVICE))
        usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_cancel_transfer", "cancel transfer failed error %d", r);

      else
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_cancel_transfer", "cancel transfer failed error %d", r);
      if(r == LIBUSB_ERROR_NO_DEVICE)
        itransfer->flags = itransfer->flags | (unsigned char)8;

    }

    itransfer->flags = itransfer->flags | (unsigned char)4;
  }

out:
  ;
  pthread_mutex_unlock(&itransfer->flags_lock);
  pthread_mutex_unlock(&itransfer->lock);
  return r;
}

// libusb_claim_interface
// file ../../libusb/core.c line 1575
signed int libusb_claim_interface(struct libusb_device_handle *dev, signed int interface_number)
{
  signed int r = 0;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_claim_interface", "interface %d", interface_number);
  if(interface_number >= 32)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
    if(dev->dev->attached == 0)
      return LIBUSB_ERROR_NO_DEVICE;

    else
    {
      pthread_mutex_lock(&dev->lock);
      if((dev->claimed_interfaces & (unsigned long int)(1 << interface_number)) == 0ul)
      {
        r=usbi_backend->claim_interface(dev, interface_number);
        if(r == 0)
          dev->claimed_interfaces = dev->claimed_interfaces | (unsigned long int)(1 << interface_number);

      }


    out:
      ;
      pthread_mutex_unlock(&dev->lock);
      return r;
    }
}

// libusb_clear_halt
// file ../../libusb/core.c line 1704
signed int libusb_clear_halt(struct libusb_device_handle *dev, unsigned char endpoint)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_clear_halt", "endpoint %x", endpoint);
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
  {
    signed int return_value;
    return_value=usbi_backend->clear_halt(dev, endpoint);
    return return_value;
  }
}

// libusb_close
// file ../../libusb/core.c line 1384
void libusb_close(struct libusb_device_handle *dev_handle)
{
  struct libusb_context *ctx;
  signed int pending_events;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(!(dev_handle == ((struct libusb_device_handle *)NULL)))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_close", "");
    ctx = dev_handle->dev->ctx;
    pthread_mutex_lock(&ctx->event_data_lock);
    if(!(ctx->device_close == 0u))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
    pending_events = (signed int)tmp_if_expr_3;
    ctx->device_close = ctx->device_close + 1u;
    if(pending_events == 0)
      usbi_signal_event(ctx);

    pthread_mutex_unlock(&ctx->event_data_lock);
    libusb_lock_events(ctx);
    do_close(ctx, dev_handle);
    pthread_mutex_lock(&ctx->event_data_lock);
    ctx->device_close = ctx->device_close - 1u;
    if(!(ctx->device_close == 0u))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
    pending_events = (signed int)tmp_if_expr_6;
    if(pending_events == 0)
      usbi_clear_event(ctx);

    pthread_mutex_unlock(&ctx->event_data_lock);
    libusb_unlock_events(ctx);
  }

}

// libusb_control_transfer
// file ../../libusb/libusb.h line 1740
signed int libusb_control_transfer(struct libusb_device_handle *dev_handle, unsigned char bmRequestType, unsigned char bRequest, unsigned short int wValue, unsigned short int wIndex, unsigned char *data, unsigned short int wLength, unsigned int timeout)
{
  struct libusb_transfer *transfer;
  transfer=libusb_alloc_transfer(0);
  unsigned char *buffer;
  signed int completed = 0;
  signed int r;
  unsigned char *return_value_libusb_control_transfer_get_data_2;
  if(transfer == ((struct libusb_transfer *)NULL))
    return LIBUSB_ERROR_NO_MEM;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct libusb_control_setup) /*8ul*/  + (unsigned long int)wLength);
    buffer = (unsigned char *)return_value_malloc_1;
    if(buffer == ((unsigned char *)NULL))
    {
      libusb_free_transfer(transfer);
      return LIBUSB_ERROR_NO_MEM;
    }

    else
    {
      libusb_fill_control_setup(buffer, bmRequestType, bRequest, wValue, wIndex, wLength);
      if((0x80 & (signed int)bmRequestType) == 0)
        memcpy((void *)(buffer + (signed long int)sizeof(struct libusb_control_setup) /*8ul*/ ), (const void *)data, (unsigned long int)wLength);

      libusb_fill_control_transfer(transfer, dev_handle, buffer, sync_transfer_cb, (void *)&completed, timeout);
      transfer->flags = (unsigned char)2;
      r=libusb_submit_transfer(transfer);
      if(!(r >= 0))
      {
        libusb_free_transfer(transfer);
        return r;
      }

      else
      {
        sync_transfer_wait_for_completion(transfer);
        if((0x80 & (signed int)bmRequestType) == 128)
        {
          return_value_libusb_control_transfer_get_data_2=libusb_control_transfer_get_data(transfer);
          memcpy((void *)data, (const void *)return_value_libusb_control_transfer_get_data_2, (unsigned long int)transfer->actual_length);
        }

        switch((signed int)transfer->status)
        {
          case LIBUSB_TRANSFER_COMPLETED:
          {
            r = transfer->actual_length;
            break;
          }
          case LIBUSB_TRANSFER_TIMED_OUT:
          {
            r = LIBUSB_ERROR_TIMEOUT;
            break;
          }
          case LIBUSB_TRANSFER_STALL:
          {
            r = LIBUSB_ERROR_PIPE;
            break;
          }
          case LIBUSB_TRANSFER_NO_DEVICE:
          {
            r = LIBUSB_ERROR_NO_DEVICE;
            break;
          }
          case LIBUSB_TRANSFER_OVERFLOW:
          {
            r = LIBUSB_ERROR_OVERFLOW;
            break;
          }
          case LIBUSB_TRANSFER_ERROR:

          case LIBUSB_TRANSFER_CANCELLED:
          {
            r = LIBUSB_ERROR_IO;
            break;
          }
          default:
          {
            usbi_log(dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "libusb_control_transfer", "unrecognised status code %d", transfer->status);
            r = LIBUSB_ERROR_OTHER;
          }
        }
        libusb_free_transfer(transfer);
        return r;
      }
    }
  }
}

// libusb_control_transfer_get_data
// file ../../libusb/libusb.h line 1418
static inline unsigned char * libusb_control_transfer_get_data(struct libusb_transfer *transfer)
{
  return transfer->buffer + (signed long int)sizeof(struct libusb_control_setup) /*8ul*/ ;
}

// libusb_cpu_to_le16
// file ../../libusb/libusb.h line 161
static inline unsigned short int libusb_cpu_to_le16(const unsigned short int x)
{
  /* tag-#anon#lUN[lARR2{U8}_U8_'b8'||U16'b16'|] */
union anonymous_0
{
  // b8
  unsigned char b8[2l];
  // b16
  unsigned short int b16;
};

/* */
  ;
  union anonymous_0 _tmp;
  _tmp.b8[(signed long int)1] = (unsigned char)((signed int)x >> 8);
  _tmp.b8[(signed long int)0] = (unsigned char)((signed int)x & 0xff);
  return _tmp.b16;
}

// libusb_cpu_to_le16_link1
// file ../../libusb/libusb.h line 161
static inline unsigned short int libusb_cpu_to_le16_link1(const unsigned short int x_link1)
{
  /* tag-#anon#lUN[lARR2{U8}_U8_'b8'||U16'b16'|] */
union anonymous_0
{
  // b8
  unsigned char b8[2l];
  // b16
  unsigned short int b16;
};

/* */
  ;
  union anonymous_0 _tmp_link1;
  _tmp_link1.b8[(signed long int)1] = (unsigned char)((signed int)x_link1 >> 8);
  _tmp_link1.b8[(signed long int)0] = (unsigned char)((signed int)x_link1 & 0xff);
  return _tmp_link1.b16;
}

// libusb_detach_kernel_driver
// file ../../libusb/core.c line 1857
signed int libusb_detach_kernel_driver(struct libusb_device_handle *dev, signed int interface_number)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_detach_kernel_driver", "interface %d", interface_number);
  signed int return_value;
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
    if(!(usbi_backend->detach_kernel_driver == ((signed int (*)(struct libusb_device_handle *, signed int))NULL)))
    {
      return_value=usbi_backend->detach_kernel_driver(dev, interface_number);
      return return_value;
    }

    else
      return LIBUSB_ERROR_NOT_SUPPORTED;
}

// libusb_error_name
// file ../../libusb/core.c line 2394
const char * libusb_error_name(signed int error_code)
{
  switch(error_code)
  {
    case LIBUSB_ERROR_IO:
      return "LIBUSB_ERROR_IO";
    case LIBUSB_ERROR_INVALID_PARAM:
      return "LIBUSB_ERROR_INVALID_PARAM";
    case LIBUSB_ERROR_ACCESS:
      return "LIBUSB_ERROR_ACCESS";
    case LIBUSB_ERROR_NO_DEVICE:
      return "LIBUSB_ERROR_NO_DEVICE";
    case LIBUSB_ERROR_NOT_FOUND:
      return "LIBUSB_ERROR_NOT_FOUND";
    case LIBUSB_ERROR_BUSY:
      return "LIBUSB_ERROR_BUSY";
    case LIBUSB_ERROR_TIMEOUT:
      return "LIBUSB_ERROR_TIMEOUT";
    case LIBUSB_ERROR_OVERFLOW:
      return "LIBUSB_ERROR_OVERFLOW";
    case LIBUSB_ERROR_PIPE:
      return "LIBUSB_ERROR_PIPE";
    case LIBUSB_ERROR_INTERRUPTED:
      return "LIBUSB_ERROR_INTERRUPTED";
    case LIBUSB_ERROR_NO_MEM:
      return "LIBUSB_ERROR_NO_MEM";
    case LIBUSB_ERROR_NOT_SUPPORTED:
      return "LIBUSB_ERROR_NOT_SUPPORTED";
    case LIBUSB_ERROR_OTHER:
      return "LIBUSB_ERROR_OTHER";
    case LIBUSB_TRANSFER_ERROR:
      return "LIBUSB_TRANSFER_ERROR";
    case LIBUSB_TRANSFER_TIMED_OUT:
      return "LIBUSB_TRANSFER_TIMED_OUT";
    case LIBUSB_TRANSFER_CANCELLED:
      return "LIBUSB_TRANSFER_CANCELLED";
    case LIBUSB_TRANSFER_STALL:
      return "LIBUSB_TRANSFER_STALL";
    case LIBUSB_TRANSFER_NO_DEVICE:
      return "LIBUSB_TRANSFER_NO_DEVICE";
    case LIBUSB_TRANSFER_OVERFLOW:
      return "LIBUSB_TRANSFER_OVERFLOW";
    case 0:
      return "LIBUSB_SUCCESS / LIBUSB_TRANSFER_COMPLETED";
    default:
      return "**UNKNOWN**";
  }
}

// libusb_event_handler_active
// file ../../libusb/io.c line 1832
signed int libusb_event_handler_active(struct libusb_context *ctx)
{
  unsigned int r;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->event_data_lock);
  r = ctx->device_close;
  pthread_mutex_unlock(&ctx->event_data_lock);
  if(!(r == 0u))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_event_handler_active", "someone else is closing a device");
    return 1;
  }

  else
    return ctx->event_handler_active;
}

// libusb_event_handling_ok
// file ../../libusb/io.c line 1804
signed int libusb_event_handling_ok(struct libusb_context *ctx)
{
  unsigned int r;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->event_data_lock);
  r = ctx->device_close;
  pthread_mutex_unlock(&ctx->event_data_lock);
  if(!(r == 0u))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_event_handling_ok", "someone else is closing a device");
    return 0;
  }

  else
    return 1;
}

// libusb_exit
// file ../../libusb/libusb.h line 1304
void libusb_exit(struct libusb_context *ctx)
{
  struct libusb_device *dev;
  struct libusb_device *next;
  struct timeval tv = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_exit", "");
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&default_context_lock);
  if(ctx == usbi_default_context)
  {
    default_context_refcnt = default_context_refcnt - 1;
    if(default_context_refcnt >= 1)
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_exit", "not destroying default context");
      pthread_mutex_unlock(&default_context_lock);
      goto __CPROVER_DUMP_L11;
    }

    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_exit", "destroying default context");
    usbi_default_context = (struct libusb_context *)(void *)0;
  }

  pthread_mutex_unlock(&default_context_lock);
  pthread_mutex_lock(&active_contexts_lock);
  list_del(&ctx->list);
  pthread_mutex_unlock(&active_contexts_lock);
  signed int return_value_libusb_has_capability_1;
  return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
  if(!(return_value_libusb_has_capability_1 == 0))
  {
    usbi_hotplug_deregister_all(ctx);
    if(ctx->open_devs.next == &ctx->open_devs)
      libusb_handle_events_timeout(ctx, &tv);

    pthread_mutex_lock(&ctx->usb_devs_lock);
    dev = (struct libusb_device *)((unsigned long int)(&ctx->usb_devs)->next - (unsigned long int)80ul);
    next = (struct libusb_device *)((unsigned long int)dev->list.next - (unsigned long int)80ul);
    for( ; !(&dev->list == &ctx->usb_devs); next = (struct libusb_device *)((unsigned long int)next->list.next - (unsigned long int)80ul))
    {
      list_del(&dev->list);
      libusb_unref_device(dev);
      dev = next;
    }
    pthread_mutex_unlock(&ctx->usb_devs_lock);
  }

  if(!(ctx->usb_devs.next == &ctx->usb_devs))
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "libusb_exit", "some libusb_devices were leaked");

  if(!(ctx->open_devs.next == &ctx->open_devs))
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "libusb_exit", "application left some devices open");

  usbi_io_exit(ctx);
  if(!(usbi_backend->exit == ((void (*)(void))NULL)))
    usbi_backend->exit();

  pthread_mutex_destroy(&ctx->open_devs_lock);
  pthread_mutex_destroy(&ctx->usb_devs_lock);
  pthread_mutex_destroy(&ctx->hotplug_cbs_lock);
  free((void *)ctx);

__CPROVER_DUMP_L11:
  ;
}

// libusb_fill_bulk_transfer
// file ../../libusb/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout)
{
  transfer->dev_handle = dev_handle;
  transfer->endpoint = endpoint;
  transfer->type = (unsigned char)LIBUSB_TRANSFER_TYPE_BULK;
  transfer->timeout = timeout;
  transfer->buffer = buffer;
  transfer->length = length;
  transfer->user_data = user_data;
  transfer->callback = callback;
}

// libusb_fill_control_setup
// file ../../libusb/libusb.h line 1465
static inline void libusb_fill_control_setup(unsigned char *buffer, unsigned char bmRequestType, unsigned char bRequest, unsigned short int wValue, unsigned short int wIndex, unsigned short int wLength)
{
  struct libusb_control_setup *setup = (struct libusb_control_setup *)(void *)buffer;
  setup->bmRequestType = bmRequestType;
  setup->bRequest = bRequest;
  setup->wValue=libusb_cpu_to_le16_link1(wValue);
  setup->wIndex=libusb_cpu_to_le16_link1(wIndex);
  setup->wLength=libusb_cpu_to_le16_link1(wLength);
}

// libusb_fill_control_transfer
// file ../../libusb/libusb.h line 1514
static inline void libusb_fill_control_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char *buffer, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout)
{
  struct libusb_control_setup *setup = (struct libusb_control_setup *)(void *)buffer;
  transfer->dev_handle = dev_handle;
  transfer->endpoint = (unsigned char)0;
  transfer->type = (unsigned char)LIBUSB_TRANSFER_TYPE_CONTROL;
  transfer->timeout = timeout;
  transfer->buffer = buffer;
  unsigned short int return_value_libusb_cpu_to_le16_1;
  if(!(setup == ((struct libusb_control_setup *)NULL)))
  {
    return_value_libusb_cpu_to_le16_1=libusb_cpu_to_le16_link1(setup->wLength);
    transfer->length = (signed int)(sizeof(struct libusb_control_setup) /*8ul*/  + (unsigned long int)return_value_libusb_cpu_to_le16_1);
  }

  transfer->user_data = user_data;
  transfer->callback = callback;
}

// libusb_free_bos_descriptor
// file ../../libusb/descriptor.c line 953
void libusb_free_bos_descriptor(struct libusb_bos_descriptor *bos)
{
  signed int i;
  if(!(bos == ((struct libusb_bos_descriptor *)NULL)))
  {
    i = 0;
    for( ; !(i >= (signed int)bos->bNumDeviceCaps); i = i + 1)
      free((void *)bos->dev_capability[(signed long int)i]);
    free((void *)bos);
  }

}

// libusb_free_config_descriptor
// file ../../libusb/libusb.h line 1329
void libusb_free_config_descriptor(struct libusb_config_descriptor *config)
{
  if(!(config == ((struct libusb_config_descriptor *)NULL)))
  {
    clear_configuration(config);
    free((void *)config);
  }

}

// libusb_free_container_id_descriptor
// file ../../libusb/descriptor.c line 1132
void libusb_free_container_id_descriptor(struct libusb_container_id_descriptor *container_id)
{
  free((void *)container_id);
}

// libusb_free_device_list
// file ../../libusb/libusb.h line 1314
void libusb_free_device_list(struct libusb_device **list, signed int unref_devices)
{
  signed int tmp_post_1;
  if(!(list == ((struct libusb_device **)NULL)))
  {
    if(!(unref_devices == 0))
    {
      signed int i = 0;
      struct libusb_device *dev;
      do
      {
        tmp_post_1 = i;
        i = i + 1;
        dev = list[(signed long int)tmp_post_1];
        if(dev == ((struct libusb_device *)NULL))
          break;

        libusb_unref_device(dev);
      }
      while((_Bool)1);
    }

    free((void *)list);
  }

}

// libusb_free_pollfds
// file ../../libusb/io.c line 2699
void libusb_free_pollfds(struct libusb_pollfd **pollfds)
{
  if(!(pollfds == ((struct libusb_pollfd **)NULL)))
    free((void *)pollfds);

}

// libusb_free_ss_endpoint_companion_descriptor
// file ../../libusb/descriptor.c line 808
void libusb_free_ss_endpoint_companion_descriptor(struct libusb_ss_endpoint_companion_descriptor *ep_comp)
{
  free((void *)ep_comp);
}

// libusb_free_ss_usb_device_capability_descriptor
// file ../../libusb/descriptor.c line 1075
void libusb_free_ss_usb_device_capability_descriptor(struct libusb_ss_usb_device_capability_descriptor *ss_usb_device_cap)
{
  free((void *)ss_usb_device_cap);
}

// libusb_free_streams
// file ../../libusb/core.c line 1790
signed int libusb_free_streams(struct libusb_device_handle *dev, unsigned char *endpoints, signed int num_endpoints)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_free_streams", "eps %d", num_endpoints);
  signed int return_value;
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
    if(!(usbi_backend->free_streams == ((signed int (*)(struct libusb_device_handle *, unsigned char *, signed int))NULL)))
    {
      return_value=usbi_backend->free_streams(dev, endpoints, num_endpoints);
      return return_value;
    }

    else
      return LIBUSB_ERROR_NOT_SUPPORTED;
}

// libusb_free_transfer
// file ../../libusb/io.c line 1286
void libusb_free_transfer(struct libusb_transfer *transfer)
{
  struct usbi_transfer *itransfer;
  if(!(transfer == ((struct libusb_transfer *)NULL)))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_free_transfer", "transfer %p", transfer);
    if(!((2 & (signed int)transfer->flags) == 0))
    {
      if(!(transfer->buffer == ((unsigned char *)NULL)))
        free((void *)transfer->buffer);

    }

    itransfer = (struct usbi_transfer *)((unsigned char *)transfer - (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
    pthread_mutex_destroy(&itransfer->lock);
    pthread_mutex_destroy(&itransfer->flags_lock);
    free((void *)itransfer);
  }

}

// libusb_free_usb_2_0_extension_descriptor
// file ../../libusb/descriptor.c line 1017
void libusb_free_usb_2_0_extension_descriptor(struct libusb_usb_2_0_extension_descriptor *usb_2_0_extension)
{
  free((void *)usb_2_0_extension);
}

// libusb_get_active_config_descriptor
// file ../../libusb/libusb.h line 1323
signed int libusb_get_active_config_descriptor(struct libusb_device *dev, struct libusb_config_descriptor **config)
{
  struct libusb_config_descriptor _config;
  unsigned char tmp[9l];
  unsigned char *buf = (unsigned char *)(void *)0;
  signed int host_endian = 0;
  signed int r;
  r=usbi_backend->get_active_config_descriptor(dev, tmp, (unsigned long int)9, &host_endian);
  if(!(r >= 0))
    return r;

  else
    if(!(r >= 9))
    {
      usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_active_config_descriptor", "short config descriptor read %d/%d", r, 9);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      usbi_parse_descriptor(tmp, "bbw", (void *)&_config, host_endian);
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)_config.wTotalLength);
      buf = (unsigned char *)return_value_malloc_1;
      if(buf == ((unsigned char *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        r=usbi_backend->get_active_config_descriptor(dev, buf, (unsigned long int)_config.wTotalLength, &host_endian);
        if(r >= 0)
          r=raw_desc_to_config(dev->ctx, buf, r, host_endian, config);

        free((void *)buf);
        return r;
      }
    }
}

// libusb_get_bos_descriptor
// file ../../libusb/descriptor.c line 904
signed int libusb_get_bos_descriptor(struct libusb_device_handle *handle, struct libusb_bos_descriptor **bos)
{
  struct libusb_bos_descriptor _bos;
  unsigned char bos_header[5l] = { (unsigned char)0, 0, 0, 0, 0 };
  unsigned char *bos_data = (unsigned char *)(void *)0;
  const signed int host_endian = 0;
  signed int r;
  r=libusb_get_descriptor(handle, (unsigned char)15, (unsigned char)0, bos_header, 5);
  if(!(r >= 0))
  {
    if(!(r == LIBUSB_ERROR_PIPE))
      usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_bos_descriptor", "failed to read BOS (%d)", r);

    return r;
  }

  else
    if(!(r >= 5))
    {
      usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_bos_descriptor", "short BOS read %d/%d", r, 5);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      usbi_parse_descriptor(bos_header, "bbwb", (void *)&_bos, host_endian);
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_bos_descriptor", "found BOS descriptor: size %d bytes, %d capabilities", _bos.wTotalLength, _bos.bNumDeviceCaps);
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)_bos.wTotalLength, (unsigned long int)1);
      bos_data = (unsigned char *)return_value_calloc_1;
      if(bos_data == ((unsigned char *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        r=libusb_get_descriptor(handle, (unsigned char)15, (unsigned char)0, bos_data, (signed int)_bos.wTotalLength);
        if(r >= 0)
          r=parse_bos(handle->dev->ctx, bos, bos_data, r, host_endian);

        else
          usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_bos_descriptor", "failed to read BOS (%d)", r);
        free((void *)bos_data);
        return r;
      }
    }
}

// libusb_get_bus_number
// file ../../libusb/core.c line 877
unsigned char libusb_get_bus_number(struct libusb_device *dev)
{
  return dev->bus_number;
}

// libusb_get_config_descriptor
// file ../../libusb/descriptor.c line 625
signed int libusb_get_config_descriptor(struct libusb_device *dev, unsigned char config_index, struct libusb_config_descriptor **config)
{
  struct libusb_config_descriptor _config;
  unsigned char tmp[9l];
  unsigned char *buf = (unsigned char *)(void *)0;
  signed int host_endian = 0;
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_config_descriptor", "index %d", config_index);
  if((signed int)config_index >= (signed int)dev->num_configurations)
    return LIBUSB_ERROR_NOT_FOUND;

  else
  {
    r=usbi_backend->get_config_descriptor(dev, config_index, tmp, (unsigned long int)9, &host_endian);
    if(!(r >= 0))
      return r;

    else
      if(!(r >= 9))
      {
        usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_config_descriptor", "short config descriptor read %d/%d", r, 9);
        return LIBUSB_ERROR_IO;
      }

      else
      {
        usbi_parse_descriptor(tmp, "bbw", (void *)&_config, host_endian);
        void *return_value_malloc_1;
        return_value_malloc_1=malloc((unsigned long int)_config.wTotalLength);
        buf = (unsigned char *)return_value_malloc_1;
        if(buf == ((unsigned char *)NULL))
          return LIBUSB_ERROR_NO_MEM;

        else
        {
          r=usbi_backend->get_config_descriptor(dev, config_index, buf, (unsigned long int)_config.wTotalLength, &host_endian);
          if(r >= 0)
            r=raw_desc_to_config(dev->ctx, buf, r, host_endian, config);

          free((void *)buf);
          return r;
        }
      }
  }
}

// libusb_get_config_descriptor_by_value
// file ../../libusb/descriptor.c line 709
signed int libusb_get_config_descriptor_by_value(struct libusb_device *dev, unsigned char bConfigurationValue, struct libusb_config_descriptor **config)
{
  signed int r;
  signed int idx;
  signed int host_endian;
  unsigned char *buf = (unsigned char *)(void *)0;
  if(!(usbi_backend->get_config_descriptor_by_value == ((signed int (*)(struct libusb_device *, unsigned char, unsigned char **, signed int *))NULL)))
  {
    r=usbi_backend->get_config_descriptor_by_value(dev, bConfigurationValue, &buf, &host_endian);
    if(!(r >= 0))
      return r;

    signed int return_value_raw_desc_to_config_1;
    return_value_raw_desc_to_config_1=raw_desc_to_config(dev->ctx, buf, r, host_endian, config);
    return return_value_raw_desc_to_config_1;
  }

  r=usbi_get_config_index_by_value(dev, bConfigurationValue, &idx);
  signed int return_value_libusb_get_config_descriptor_2;
  if(!(r >= 0))
    return r;

  else
    if(idx == -1)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value_libusb_get_config_descriptor_2=libusb_get_config_descriptor(dev, (unsigned char)idx, config);
      return return_value_libusb_get_config_descriptor_2;
    }
}

// libusb_get_configuration
// file ../../libusb/core.c line 1462
signed int libusb_get_configuration(struct libusb_device_handle *dev, signed int *config)
{
  signed int r = LIBUSB_ERROR_NOT_SUPPORTED;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_configuration", "");
  if(!(usbi_backend->get_configuration == ((signed int (*)(struct libusb_device_handle *, signed int *))NULL)))
    r=usbi_backend->get_configuration(dev, config);

  if(r == LIBUSB_ERROR_NOT_SUPPORTED)
  {
    unsigned char tmp = (unsigned char)0;
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_configuration", "falling back to control message");
    r=libusb_control_transfer(dev, (unsigned char)128, (unsigned char)8, (unsigned short int)0, (unsigned short int)0, &tmp, (unsigned short int)1, (unsigned int)1000);
    if(r == 0)
    {
      usbi_log(dev->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_configuration", "zero bytes returned in ctrl transfer?");
      r = LIBUSB_ERROR_IO;
    }

    else
      if(r == 1)
      {
        r = 0;
        *config = (signed int)tmp;
      }

      else
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_configuration", "control failed, error %d", r);
  }

  if(r == 0)
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_configuration", "active config %d", *config);

  return r;
}

// libusb_get_container_id_descriptor
// file ../../libusb/descriptor.c line 1094
signed int libusb_get_container_id_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_container_id_descriptor **container_id)
{
  struct libusb_container_id_descriptor *_container_id;
  const signed int host_endian = 0;
  if(!((signed int)dev_cap->bDevCapabilityType == 4))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_container_id_descriptor", "unexpected bDevCapabilityType %x (expected %x)", dev_cap->bDevCapabilityType, 4);
    return LIBUSB_ERROR_INVALID_PARAM;
  }

  else
    if(!((signed int)dev_cap->bLength >= 20))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_container_id_descriptor", "short dev-cap descriptor read %d/%d", dev_cap->bLength, 20);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct libusb_container_id_descriptor) /*20ul*/ );
      _container_id = (struct libusb_container_id_descriptor *)return_value_malloc_1;
      if(_container_id == ((struct libusb_container_id_descriptor *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        usbi_parse_descriptor((unsigned char *)dev_cap, "bbbbu", (void *)_container_id, host_endian);
        *container_id = _container_id;
        return LIBUSB_SUCCESS;
      }
    }
}

// libusb_get_descriptor
// file ../../libusb/libusb.h line 1764
static inline signed int libusb_get_descriptor(struct libusb_device_handle *dev, unsigned char desc_type, unsigned char desc_index, unsigned char *data, signed int length)
{
  signed int return_value_libusb_control_transfer_1;
  return_value_libusb_control_transfer_1=libusb_control_transfer(dev, (unsigned char)128, (unsigned char)6, (unsigned short int)((signed int)desc_type << 8 | (signed int)desc_index), (unsigned short int)0, data, (unsigned short int)length, (unsigned int)1000);
  return return_value_libusb_control_transfer_1;
}

// libusb_get_device
// file ../../libusb/core.c line 1437
struct libusb_device * libusb_get_device(struct libusb_device_handle *dev_handle)
{
  return dev_handle->dev;
}

// libusb_get_device_address
// file ../../libusb/core.c line 968
unsigned char libusb_get_device_address(struct libusb_device *dev)
{
  return dev->device_address;
}

// libusb_get_device_descriptor
// file ../../libusb/libusb.h line 1321
signed int libusb_get_device_descriptor(struct libusb_device *dev, struct libusb_device_descriptor *desc)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_device_descriptor", "");
  memcpy((void *)(unsigned char *)desc, (const void *)(unsigned char *)&dev->device_descriptor, sizeof(struct libusb_device_descriptor) /*18ul*/ );
  return 0;
}

// libusb_get_device_list
// file ../../libusb/libusb.h line 1312
signed long int libusb_get_device_list(struct libusb_context *ctx, struct libusb_device ***list)
{
  struct discovered_devs *discdevs;
  discdevs=discovered_devs_alloc();
  struct libusb_device **ret;
  signed int r = 0;
  signed long int i;
  signed long int len;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_device_list", "");
  void *return_value_calloc_2;
  if(discdevs == ((struct discovered_devs *)NULL))
    return (signed long int)LIBUSB_ERROR_NO_MEM;

  else
  {
    signed int return_value_libusb_has_capability_1;
    return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
    if(!(return_value_libusb_has_capability_1 == 0))
    {
      struct libusb_device *libusb_get_device_list__1__1__dev;
      if(!(usbi_backend->hotplug_poll == ((void (*)(void))NULL)))
        usbi_backend->hotplug_poll();

      pthread_mutex_lock(&ctx->usb_devs_lock);
      libusb_get_device_list__1__1__dev = (struct libusb_device *)((unsigned long int)(&ctx->usb_devs)->next - (unsigned long int)80ul);
      for( ; !(&libusb_get_device_list__1__1__dev->list == &ctx->usb_devs); libusb_get_device_list__1__1__dev = (struct libusb_device *)((unsigned long int)libusb_get_device_list__1__1__dev->list.next - (unsigned long int)80ul))
      {
        discdevs=discovered_devs_append(discdevs, libusb_get_device_list__1__1__dev);
        if(discdevs == ((struct discovered_devs *)NULL))
        {
          r = LIBUSB_ERROR_NO_MEM;
          break;
        }

      }
      pthread_mutex_unlock(&ctx->usb_devs_lock);
    }

    else
      r=usbi_backend->get_device_list(ctx, &discdevs);
    if(!(r >= 0))
      len = (signed long int)r;

    else
    {
      len = (signed long int)discdevs->len;
      return_value_calloc_2=calloc((unsigned long int)(len + (signed long int)1), sizeof(struct libusb_device *) /*8ul*/ );
      ret = (struct libusb_device **)return_value_calloc_2;
      if(ret == ((struct libusb_device **)NULL))
        len = (signed long int)LIBUSB_ERROR_NO_MEM;

      else
      {
        ret[len] = (struct libusb_device *)(void *)0;
        i = (signed long int)0;
        for( ; !(i >= len); i = i + 1l)
        {
          struct libusb_device *dev = discdevs->devices[i];
          ret[i]=libusb_ref_device(dev);
        }
        *list = ret;
      }
    }

  out:
    ;
    discovered_devs_free(discdevs);
    return len;
  }
}

// libusb_get_device_speed
// file ../../libusb/core.c line 979
signed int libusb_get_device_speed(struct libusb_device *dev)
{
  return (signed int)dev->speed;
}

// libusb_get_max_iso_packet_size
// file ../../libusb/core.c line 1078
signed int libusb_get_max_iso_packet_size(struct libusb_device *dev, unsigned char endpoint)
{
  struct libusb_config_descriptor *config;
  struct libusb_endpoint_descriptor *ep;
  enum libusb_transfer_type ep_type;
  unsigned short int val;
  signed int r;
  r=libusb_get_active_config_descriptor(dev, &config);
  if(!(r >= 0))
  {
    usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_max_iso_packet_size", "could not retrieve active config descriptor");
    return LIBUSB_ERROR_OTHER;
  }

  else
  {
    ep=find_endpoint(config, endpoint);
    if(ep == ((struct libusb_endpoint_descriptor *)NULL))
      r = LIBUSB_ERROR_NOT_FOUND;

    else
    {
      val = ep->wMaxPacketSize;
      ep_type = (enum libusb_transfer_type)((signed int)ep->bmAttributes & 0x3);
      r = (signed int)val & 0x07ff;
      if((signed int)ep_type == LIBUSB_TRANSFER_TYPE_ISOCHRONOUS || (signed int)ep_type == LIBUSB_TRANSFER_TYPE_INTERRUPT)
        r = r * (1 + ((signed int)val >> 11 & 3));

    }

  out:
    ;
    libusb_free_config_descriptor(config);
    return r;
  }
}

// libusb_get_max_packet_size
// file ../../libusb/core.c line 1025
signed int libusb_get_max_packet_size(struct libusb_device *dev, unsigned char endpoint)
{
  struct libusb_config_descriptor *config;
  struct libusb_endpoint_descriptor *ep;
  signed int r;
  r=libusb_get_active_config_descriptor(dev, &config);
  if(!(r >= 0))
  {
    usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_max_packet_size", "could not retrieve active config descriptor");
    return LIBUSB_ERROR_OTHER;
  }

  else
  {
    ep=find_endpoint(config, endpoint);
    if(ep == ((struct libusb_endpoint_descriptor *)NULL))
      r = LIBUSB_ERROR_NOT_FOUND;

    else
      r = (signed int)ep->wMaxPacketSize;

  out:
    ;
    libusb_free_config_descriptor(config);
    return r;
  }
}

// libusb_get_next_timeout
// file ../../libusb/io.c line 2487
signed int libusb_get_next_timeout(struct libusb_context *ctx, struct timeval *tv)
{
  struct usbi_transfer *transfer;
  struct timespec cur_ts;
  struct timeval cur_tv;
  struct timeval next_timeout = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  signed int r;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  signed int tmp_if_expr_4;
  if(ctx->timerfd >= 0)
    return 0;

  else
  {
    pthread_mutex_lock(&ctx->flying_transfers_lock);
    if(ctx->flying_transfers.next == &ctx->flying_transfers)
    {
      pthread_mutex_unlock(&ctx->flying_transfers_lock);
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_next_timeout", "no URBs, no timeout!");
      return 0;
    }

    else
    {
      transfer = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul);
      for( ; !(&transfer->list == &ctx->flying_transfers); transfer = (struct usbi_transfer *)((unsigned long int)transfer->list.next - (unsigned long int)8ul))
        if((130 & (signed int)transfer->flags) == 0)
        {
          if(!(transfer->timeout.tv_sec == 0l))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = (&transfer->timeout)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_1)
            break;

          next_timeout = transfer->timeout;
          break;
        }

      pthread_mutex_unlock(&ctx->flying_transfers_lock);
      if(!(next_timeout.tv_sec == 0l))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (&next_timeout)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_2)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_next_timeout", "no URB with timeout or all handled by OS; no timeout!");
        return 0;
      }

      else
      {
        r=usbi_backend->clock_gettime(0, &cur_ts);
        if(!(r >= 0))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_next_timeout", "failed to read monotonic clock, errno=%d", *return_value___errno_location_3);
          return 0;
        }

        (&cur_tv)->tv_sec = (&cur_ts)->tv_sec;
        (&cur_tv)->tv_usec = (&cur_ts)->tv_nsec / (signed long int)1000;
        if(cur_tv.tv_sec == next_timeout.tv_sec)
          tmp_if_expr_4 = (signed int)((&cur_tv)->tv_usec < (&next_timeout)->tv_usec);

        else
          tmp_if_expr_4 = (signed int)((&cur_tv)->tv_sec < (&next_timeout)->tv_sec);
        if(tmp_if_expr_4 == 0)
        {
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_next_timeout", "first timeout already expired");
          tv->tv_usec = (signed long int)0;
          tv->tv_sec = tv->tv_usec;
        }

        else
        {
          tv->tv_sec = (&next_timeout)->tv_sec - (&cur_tv)->tv_sec;
          tv->tv_usec = (&next_timeout)->tv_usec - (&cur_tv)->tv_usec;
          if(!(tv->tv_usec >= 0l))
          {
            tv->tv_sec = tv->tv_sec - 1l;
            tv->tv_usec = tv->tv_usec + (signed long int)1000000;
          }

          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_get_next_timeout", "next timeout in %d.%06ds", tv->tv_sec, tv->tv_usec);
        }
        return 1;
      }
    }
  }
}

// libusb_get_parent
// file ../../libusb/core.c line 958
struct libusb_device * libusb_get_parent(struct libusb_device *dev)
{
  return dev->parent_dev;
}

// libusb_get_pollfds
// file ../../libusb/io.c line 2659
struct libusb_pollfd ** libusb_get_pollfds(struct libusb_context *ctx)
{
  struct libusb_pollfd **ret = (struct libusb_pollfd **)(void *)0;
  struct usbi_pollfd *ipollfd;
  unsigned long int i = (unsigned long int)0;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->event_data_lock);
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(ctx->pollfds_cnt + (unsigned long int)1, sizeof(struct libusb_pollfd *) /*8ul*/ );
  ret = (struct libusb_pollfd **)return_value_calloc_1;
  unsigned long int tmp_post_2;
  if(!(ret == ((struct libusb_pollfd **)NULL)))
  {
    ipollfd = (struct usbi_pollfd *)((unsigned long int)(&ctx->ipollfds)->next - (unsigned long int)8ul);
    for( ; !(&ipollfd->list == &ctx->ipollfds); ipollfd = (struct usbi_pollfd *)((unsigned long int)ipollfd->list.next - (unsigned long int)8ul))
    {
      tmp_post_2 = i;
      i = i + 1ul;
      ret[(signed long int)tmp_post_2] = (struct libusb_pollfd *)ipollfd;
    }
    ret[(signed long int)ctx->pollfds_cnt] = (struct libusb_pollfd *)(void *)0;
  }


out:
  ;
  pthread_mutex_unlock(&ctx->event_data_lock);
  return (struct libusb_pollfd **)ret;
}

// libusb_get_port_number
// file ../../libusb/core.c line 896
unsigned char libusb_get_port_number(struct libusb_device *dev)
{
  return dev->port_number;
}

// libusb_get_port_numbers
// file ../../libusb/core.c line 912
signed int libusb_get_port_numbers(struct libusb_device *dev, unsigned char *port_numbers, signed int port_numbers_len)
{
  signed int i = port_numbers_len;
  struct libusb_context *ctx = dev->ctx;
  if(!(port_numbers_len >= 1))
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    for( ; !(dev == ((struct libusb_device *)NULL)); dev = dev->parent_dev)
    {
      if((signed int)dev->port_number == 0)
        break;

      i = i - 1;
      if(!(i >= 0))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "libusb_get_port_numbers", "port numbers array is too small");
        return LIBUSB_ERROR_OVERFLOW;
      }

      port_numbers[(signed long int)i] = dev->port_number;
    }
    if(!(i >= port_numbers_len))
      memmove((void *)port_numbers, (const void *)&port_numbers[(signed long int)i], (unsigned long int)(port_numbers_len - i));

    return port_numbers_len - i;
  }
}

// libusb_get_port_path
// file ../../libusb/core.c line 938
signed int libusb_get_port_path(struct libusb_context *ctx, struct libusb_device *dev, unsigned char *port_numbers, unsigned char port_numbers_len)
{
  do
    (void)ctx;
  while((_Bool)0);
  signed int return_value_libusb_get_port_numbers_1;
  return_value_libusb_get_port_numbers_1=libusb_get_port_numbers(dev, port_numbers, (signed int)port_numbers_len);
  return return_value_libusb_get_port_numbers_1;
}

// libusb_get_ss_endpoint_companion_descriptor
// file ../../libusb/descriptor.c line 763
signed int libusb_get_ss_endpoint_companion_descriptor(struct libusb_context *ctx, struct libusb_endpoint_descriptor *endpoint, struct libusb_ss_endpoint_companion_descriptor **ep_comp)
{
  struct usb_descriptor_header header;
  signed int size = endpoint->extra_length;
  const unsigned char *buffer = endpoint->extra;
  *ep_comp = (struct libusb_ss_endpoint_companion_descriptor *)(void *)0;
  while(size >= 2)
  {
    usbi_parse_descriptor(buffer, "bb", (void *)&header, 0);
    if(!(size >= (signed int)header.bLength) || !((signed int)header.bLength >= 2))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_ss_endpoint_companion_descriptor", "invalid descriptor length %d", header.bLength);
      return LIBUSB_ERROR_IO;
    }

    if(!((signed int)header.bDescriptorType == 48))
    {
      buffer = buffer + (signed long int)header.bLength;
      size = size - (signed int)header.bLength;
    }

    else
    {
      if(!((signed int)header.bLength >= 6))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_ss_endpoint_companion_descriptor", "invalid ss-ep-comp-desc length %d", header.bLength);
        return LIBUSB_ERROR_IO;
      }

      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct libusb_ss_endpoint_companion_descriptor) /*6ul*/ );
      *ep_comp = (struct libusb_ss_endpoint_companion_descriptor *)return_value_malloc_1;
      if(*ep_comp == ((struct libusb_ss_endpoint_companion_descriptor *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      usbi_parse_descriptor(buffer, "bbbbw", (void *)*ep_comp, 0);
      return LIBUSB_SUCCESS;
    }
  }
  return LIBUSB_ERROR_NOT_FOUND;
}

// libusb_get_ss_usb_device_capability_descriptor
// file ../../libusb/descriptor.c line 1036
signed int libusb_get_ss_usb_device_capability_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_ss_usb_device_capability_descriptor **ss_usb_device_cap)
{
  struct libusb_ss_usb_device_capability_descriptor *_ss_usb_device_cap;
  const signed int host_endian = 0;
  if(!((signed int)dev_cap->bDevCapabilityType == 3))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_ss_usb_device_capability_descriptor", "unexpected bDevCapabilityType %x (expected %x)", dev_cap->bDevCapabilityType, 3);
    return LIBUSB_ERROR_INVALID_PARAM;
  }

  else
    if(!((signed int)dev_cap->bLength >= 10))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_ss_usb_device_capability_descriptor", "short dev-cap descriptor read %d/%d", dev_cap->bLength, 10);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct libusb_ss_usb_device_capability_descriptor) /*10ul*/ );
      _ss_usb_device_cap = (struct libusb_ss_usb_device_capability_descriptor *)return_value_malloc_1;
      if(_ss_usb_device_cap == ((struct libusb_ss_usb_device_capability_descriptor *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        usbi_parse_descriptor((unsigned char *)dev_cap, "bbbbwbbw", (void *)_ss_usb_device_cap, host_endian);
        *ss_usb_device_cap = _ss_usb_device_cap;
        return LIBUSB_SUCCESS;
      }
    }
}

// libusb_get_string_descriptor
// file ../../libusb/libusb.h line 1786
static inline signed int libusb_get_string_descriptor(struct libusb_device_handle *dev, unsigned char desc_index, unsigned short int langid, unsigned char *data, signed int length)
{
  signed int return_value_libusb_control_transfer_1;
  return_value_libusb_control_transfer_1=libusb_control_transfer(dev, (unsigned char)128, (unsigned char)6, (unsigned short int)(3 << 8 | (signed int)desc_index), langid, data, (unsigned short int)length, (unsigned int)1000);
  return return_value_libusb_control_transfer_1;
}

// libusb_get_string_descriptor_ascii
// file ../../libusb/descriptor.c line 1150
signed int libusb_get_string_descriptor_ascii(struct libusb_device_handle *dev, unsigned char desc_index, unsigned char *data, signed int length)
{
  unsigned char tbuf[255l];
  signed int r;
  signed int si;
  signed int di;
  unsigned short int langid;
  _Bool tmp_if_expr_3;
  signed int tmp_post_1;
  signed int tmp_post_2;
  if((signed int)desc_index == 0)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    r=libusb_get_string_descriptor(dev, (unsigned char)0, (unsigned short int)0, tbuf, (signed int)sizeof(unsigned char [255l]) /*255ul*/ );
    if(!(r >= 0))
      return r;

    else
      if(!(r >= 4))
        return LIBUSB_ERROR_IO;

      else
      {
        langid = (unsigned short int)((signed int)tbuf[(signed long int)2] | (signed int)tbuf[(signed long int)3] << 8);
        r=libusb_get_string_descriptor(dev, desc_index, langid, tbuf, (signed int)sizeof(unsigned char [255l]) /*255ul*/ );
        if(!(r >= 0))
          return r;

        else
          if(!((signed int)tbuf[1l] == 3))
            return LIBUSB_ERROR_IO;

          else
            if(!(r >= (signed int)tbuf[0l]))
              return LIBUSB_ERROR_IO;

            else
            {
              di = 0;
              si = 2;
              for( ; !(si >= (signed int)tbuf[0l]); si = si + 2)
              {
                if(di >= length + -1)
                  break;

                if(!((0x80 & (signed int)tbuf[(signed long int)si]) == 0))
                  tmp_if_expr_3 = (_Bool)1;

                else
                  tmp_if_expr_3 = tbuf[(signed long int)(si + 1)] != 0 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_3)
                {
                  tmp_post_1 = di;
                  di = di + 1;
                  data[(signed long int)tmp_post_1] = (unsigned char)63;
                }

                else
                {
                  tmp_post_2 = di;
                  di = di + 1;
                  data[(signed long int)tmp_post_2] = tbuf[(signed long int)si];
                }
              }
              data[(signed long int)di] = (unsigned char)0;
              return di;
            }
      }
  }
}

// libusb_get_usb_2_0_extension_descriptor
// file ../../libusb/descriptor.c line 978
signed int libusb_get_usb_2_0_extension_descriptor(struct libusb_context *ctx, struct libusb_bos_dev_capability_descriptor *dev_cap, struct libusb_usb_2_0_extension_descriptor **usb_2_0_extension)
{
  struct libusb_usb_2_0_extension_descriptor *_usb_2_0_extension;
  const signed int host_endian = 0;
  if(!((signed int)dev_cap->bDevCapabilityType == 2))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_usb_2_0_extension_descriptor", "unexpected bDevCapabilityType %x (expected %x)", dev_cap->bDevCapabilityType, 2);
    return LIBUSB_ERROR_INVALID_PARAM;
  }

  else
    if(!((signed int)dev_cap->bLength >= 7))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_get_usb_2_0_extension_descriptor", "short dev-cap descriptor read %d/%d", dev_cap->bLength, 7);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct libusb_usb_2_0_extension_descriptor) /*8ul*/ );
      _usb_2_0_extension = (struct libusb_usb_2_0_extension_descriptor *)return_value_malloc_1;
      if(_usb_2_0_extension == ((struct libusb_usb_2_0_extension_descriptor *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        usbi_parse_descriptor((unsigned char *)dev_cap, "bbbd", (void *)_usb_2_0_extension, host_endian);
        *usb_2_0_extension = _usb_2_0_extension;
        return LIBUSB_SUCCESS;
      }
    }
}

// libusb_get_version
// file ../../libusb/core.c line 2449
struct libusb_version * libusb_get_version(void)
{
  return &libusb_version_internal;
}

// libusb_handle_events
// file ../../libusb/io.c line 2356
signed int libusb_handle_events(struct libusb_context *ctx)
{
  struct timeval tv;
  tv.tv_sec = (signed long int)60;
  tv.tv_usec = (signed long int)0;
  signed int return_value_libusb_handle_events_timeout_completed_1;
  return_value_libusb_handle_events_timeout_completed_1=libusb_handle_events_timeout_completed(ctx, &tv, (signed int *)(void *)0);
  return return_value_libusb_handle_events_timeout_completed_1;
}

// libusb_handle_events_completed
// file ../../libusb/io.c line 2378
signed int libusb_handle_events_completed(struct libusb_context *ctx, signed int *completed)
{
  struct timeval tv;
  tv.tv_sec = (signed long int)60;
  tv.tv_usec = (signed long int)0;
  signed int return_value_libusb_handle_events_timeout_completed_1;
  return_value_libusb_handle_events_timeout_completed_1=libusb_handle_events_timeout_completed(ctx, &tv, completed);
  return return_value_libusb_handle_events_timeout_completed_1;
}

// libusb_handle_events_locked
// file ../../libusb/io.c line 2404
signed int libusb_handle_events_locked(struct libusb_context *ctx, struct timeval *tv)
{
  signed int r;
  struct timeval poll_timeout;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  r=get_next_timeout(ctx, tv, &poll_timeout);
  if(!(r == 0))
  {
    signed int return_value_handle_timeouts_1;
    return_value_handle_timeouts_1=handle_timeouts(ctx);
    return return_value_handle_timeouts_1;
  }

  signed int return_value_handle_events_2;
  return_value_handle_events_2=handle_events(ctx, &poll_timeout);
  return return_value_handle_events_2;
}

// libusb_handle_events_timeout
// file ../../libusb/libusb.h line 1808
signed int libusb_handle_events_timeout(struct libusb_context *ctx, struct timeval *tv)
{
  signed int return_value_libusb_handle_events_timeout_completed_1;
  return_value_libusb_handle_events_timeout_completed_1=libusb_handle_events_timeout_completed(ctx, tv, (signed int *)(void *)0);
  return return_value_libusb_handle_events_timeout_completed_1;
}

// libusb_handle_events_timeout_completed
// file ../../libusb/io.c line 2267
signed int libusb_handle_events_timeout_completed(struct libusb_context *ctx, struct timeval *tv, signed int *completed)
{
  signed int r;
  struct timeval poll_timeout;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  r=get_next_timeout(ctx, tv, &poll_timeout);
  if(!(r == 0))
  {
    signed int return_value_handle_timeouts_1;
    return_value_handle_timeouts_1=handle_timeouts(ctx);
    return return_value_handle_timeouts_1;
  }

  signed int return_value_libusb_try_lock_events_3;
  _Bool tmp_if_expr_2;
  signed int return_value_libusb_event_handler_active_4;
  do
  {

  retry:
    ;
    return_value_libusb_try_lock_events_3=libusb_try_lock_events(ctx);
    if(return_value_libusb_try_lock_events_3 == 0)
    {
      if(completed == ((signed int *)NULL))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = !(*completed != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_handle_events_timeout_completed", "doing our own event handling");
        r=handle_events(ctx, &poll_timeout);
      }

      libusb_unlock_events(ctx);
      return r;
    }

    libusb_lock_event_waiters(ctx);
    if(!(completed == ((signed int *)NULL)))
    {
      if(!(*completed == 0))
        goto already_done;

    }

    return_value_libusb_event_handler_active_4=libusb_event_handler_active(ctx);
    if(!(return_value_libusb_event_handler_active_4 == 0))
      break;

    libusb_unlock_event_waiters(ctx);
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_handle_events_timeout_completed", "event handler was active but went away, retrying");
  }
  while((_Bool)1);
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_handle_events_timeout_completed", "another thread is doing event handling");
  r=libusb_wait_for_event(ctx, &poll_timeout);

already_done:
  ;
  libusb_unlock_event_waiters(ctx);
  signed int return_value_handle_timeouts_5;
  if(!(r >= 0))
    return r;

  else
    if(r == 1)
    {
      return_value_handle_timeouts_5=handle_timeouts(ctx);
      return return_value_handle_timeouts_5;
    }

    else
      return 0;
}

// libusb_has_capability
// file ../../libusb/core.c line 2170
signed int libusb_has_capability(unsigned int capability)
{
  switch(capability)
  {
    case (unsigned int)0:
      return 1;
    case (unsigned int)1:
      return (signed int)!(usbi_backend->get_device_list != ((signed int (*)(struct libusb_context *, struct discovered_devs **))NULL));
    case (unsigned int)256:
      return (signed int)(usbi_backend->caps & (unsigned int)0x00010000);
    case (unsigned int)257:
      return (signed int)(usbi_backend->caps & (unsigned int)0x00020000);
    default:
      return 0;
  }
}

// libusb_hotplug_deregister_callback
// file ../../libusb/hotplug.c line 308
void libusb_hotplug_deregister_callback(struct libusb_context *ctx, signed int handle)
{
  struct libusb_hotplug_callback *hotplug_cb;
  signed int return_value_libusb_has_capability_1;
  return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
  if(!(return_value_libusb_has_capability_1 == 0))
  {
    if(ctx == ((struct libusb_context *)NULL))
      ctx = usbi_default_context;

    pthread_mutex_lock(&ctx->hotplug_cbs_lock);
    hotplug_cb = (struct libusb_hotplug_callback *)((unsigned long int)(&ctx->hotplug_cbs)->next - (unsigned long int)64ul);
    for( ; !(&hotplug_cb->list == &ctx->hotplug_cbs); hotplug_cb = (struct libusb_hotplug_callback *)((unsigned long int)hotplug_cb->list.next - (unsigned long int)64ul))
      if(handle == hotplug_cb->handle)
        hotplug_cb->needs_free = 1;

    pthread_mutex_unlock(&ctx->hotplug_cbs_lock);
    usbi_hotplug_notification(ctx, (struct libusb_device *)(void *)0, (enum anonymous_2)0);
  }

}

// libusb_hotplug_register_callback
// file ../../libusb/hotplug.c line 230
signed int libusb_hotplug_register_callback(struct libusb_context *ctx, enum anonymous_2 events, enum anonymous_1 flags, signed int vendor_id, signed int product_id, signed int dev_class, signed int (*cb_fn)(struct libusb_context *, struct libusb_device *, enum anonymous_2, void *), void *user_data, signed int *handle)
{
  struct libusb_hotplug_callback *new_callback;
  signed int return_value_libusb_has_capability_1;
  return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
  signed int tmp_post_3;
  if(return_value_libusb_has_capability_1 == 0)
    return LIBUSB_ERROR_NOT_SUPPORTED;

  else
    if(cb_fn == ((signed int (*)(struct libusb_context *, struct libusb_device *, enum anonymous_2, void *))NULL) || !((-65536 & product_id) == 0) && !(product_id == -1) || !((-65536 & vendor_id) == 0) && !(vendor_id == -1) || !((-256 & dev_class) == 0) && !(dev_class == -1))
      return LIBUSB_ERROR_INVALID_PARAM;

    else
    {
      if(ctx == ((struct libusb_context *)NULL))
        ctx = usbi_default_context;

      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct libusb_hotplug_callback) /*80ul*/ );
      new_callback = (struct libusb_hotplug_callback *)return_value_calloc_2;
      if(new_callback == ((struct libusb_hotplug_callback *)NULL))
        return LIBUSB_ERROR_NO_MEM;

      else
      {
        new_callback->ctx = ctx;
        new_callback->vendor_id = vendor_id;
        new_callback->product_id = product_id;
        new_callback->dev_class = dev_class;
        new_callback->flags = flags;
        new_callback->events = events;
        new_callback->cb = cb_fn;
        new_callback->user_data = user_data;
        new_callback->needs_free = 0;
        pthread_mutex_lock(&ctx->hotplug_cbs_lock);
        static signed int handle_id = 1;
        tmp_post_3 = handle_id;
        handle_id = handle_id + 1;
        new_callback->handle = tmp_post_3;
        list_add_link2(&new_callback->list, &ctx->hotplug_cbs);
        pthread_mutex_unlock(&ctx->hotplug_cbs_lock);
        if(!((LIBUSB_HOTPLUG_ENUMERATE & (signed int)flags) == 0))
        {
          signed int i;
          signed int len;
          struct libusb_device **devs;
          signed long int return_value_libusb_get_device_list_4;
          return_value_libusb_get_device_list_4=libusb_get_device_list(ctx, &devs);
          len = (signed int)return_value_libusb_get_device_list_4;
          if(!(len >= 0))
          {
            libusb_hotplug_deregister_callback(ctx, new_callback->handle);
            return len;
          }

          i = 0;
          for( ; !(i >= len); i = i + 1)
            usbi_hotplug_match_cb(ctx, devs[(signed long int)i], (enum anonymous_2)LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED, new_callback);
          libusb_free_device_list(devs, 1);
        }

        if(!(handle == ((signed int *)NULL)))
          *handle = new_callback->handle;

        return LIBUSB_SUCCESS;
      }
    }
}

// libusb_init
// file ../../libusb/libusb.h line 1303
signed int libusb_init(struct libusb_context **context)
{
  struct libusb_device *dev;
  struct libusb_device *next;
  char *dbg;
  dbg=getenv("LIBUSB_DEBUG");
  struct libusb_context *ctx;
  signed int r = 0;
  pthread_mutex_lock(&default_context_lock);
  if(timestamp_origin.tv_sec == 0l)
    gettimeofday(&timestamp_origin, (struct timezone *)(void *)0);

  if(context == ((struct libusb_context **)NULL) && !(usbi_default_context == ((struct libusb_context *)NULL)))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_init", "reusing default context");
    default_context_refcnt = default_context_refcnt + 1;
    pthread_mutex_unlock(&default_context_lock);
    return 0;
  }

  else
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct libusb_context) /*544ul*/ );
    ctx = (struct libusb_context *)return_value_calloc_1;
    if(ctx == ((struct libusb_context *)NULL))
      r = LIBUSB_ERROR_NO_MEM;

    else
    {
      if(!(dbg == ((char *)NULL)))
      {
        ctx->debug=atoi(dbg);
        if(!(ctx->debug == 0))
          ctx->debug_fixed = 1;

      }

      if(usbi_default_context == ((struct libusb_context *)NULL))
      {
        usbi_default_context = ctx;
        default_context_refcnt = default_context_refcnt + 1;
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_init", "created default context");
      }

      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_init", "libusb v%u.%u.%u.%u%s", libusb_version_internal.major, libusb_version_internal.minor, libusb_version_internal.micro, libusb_version_internal.nano, libusb_version_internal.rc);
      pthread_mutex_init(&ctx->usb_devs_lock, (const union anonymous_4 *)(void *)0);
      pthread_mutex_init(&ctx->open_devs_lock, (const union anonymous_4 *)(void *)0);
      pthread_mutex_init(&ctx->hotplug_cbs_lock, (const union anonymous_4 *)(void *)0);
      list_init(&ctx->usb_devs);
      list_init(&ctx->open_devs);
      list_init(&ctx->hotplug_cbs);
      pthread_mutex_lock(&active_contexts_lock);
      static signed int first_init = 1;
      if(!(first_init == 0))
      {
        first_init = 0;
        list_init(&active_contexts_list);
      }

      list_add(&ctx->list, &active_contexts_list);
      pthread_mutex_unlock(&active_contexts_lock);
      if(!(usbi_backend->init == ((signed int (*)(struct libusb_context *))NULL)))
        r=usbi_backend->init(ctx);

      r=usbi_io_init(ctx);
      if(r >= 0)
      {
        pthread_mutex_unlock(&default_context_lock);
        if(!(context == ((struct libusb_context **)NULL)))
          *context = ctx;

        return 0;
      }


    err_backend_exit:
      ;
      if(!(usbi_backend->exit == ((void (*)(void))NULL)))
        usbi_backend->exit();


    err_free_ctx:
      ;
      if(ctx == usbi_default_context)
      {
        usbi_default_context = (struct libusb_context *)(void *)0;
        default_context_refcnt = default_context_refcnt - 1;
      }

      pthread_mutex_lock(&active_contexts_lock);
      list_del(&ctx->list);
      pthread_mutex_unlock(&active_contexts_lock);
      pthread_mutex_lock(&ctx->usb_devs_lock);
      dev = (struct libusb_device *)((unsigned long int)(&ctx->usb_devs)->next - (unsigned long int)80ul);
      next = (struct libusb_device *)((unsigned long int)dev->list.next - (unsigned long int)80ul);
      for( ; !(&dev->list == &ctx->usb_devs); next = (struct libusb_device *)((unsigned long int)next->list.next - (unsigned long int)80ul))
      {
        list_del(&dev->list);
        libusb_unref_device(dev);
        dev = next;
      }
      pthread_mutex_unlock(&ctx->usb_devs_lock);
      pthread_mutex_destroy(&ctx->open_devs_lock);
      pthread_mutex_destroy(&ctx->usb_devs_lock);
      pthread_mutex_destroy(&ctx->hotplug_cbs_lock);
      free((void *)ctx);
    }

  err_unlock:
    ;
    pthread_mutex_unlock(&default_context_lock);
    return r;
  }
}

// libusb_interrupt_transfer
// file ../../libusb/sync.c line 302
signed int libusb_interrupt_transfer(struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *data, signed int length, signed int *transferred, unsigned int timeout)
{
  signed int return_value_do_sync_bulk_transfer_1;
  return_value_do_sync_bulk_transfer_1=do_sync_bulk_transfer(dev_handle, endpoint, data, length, transferred, timeout, (unsigned char)LIBUSB_TRANSFER_TYPE_INTERRUPT);
  return return_value_do_sync_bulk_transfer_1;
}

// libusb_kernel_driver_active
// file ../../libusb/core.c line 1822
signed int libusb_kernel_driver_active(struct libusb_device_handle *dev, signed int interface_number)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_kernel_driver_active", "interface %d", interface_number);
  signed int return_value;
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
    if(!(usbi_backend->kernel_driver_active == ((signed int (*)(struct libusb_device_handle *, signed int))NULL)))
    {
      return_value=usbi_backend->kernel_driver_active(dev, interface_number);
      return return_value;
    }

    else
      return LIBUSB_ERROR_NOT_SUPPORTED;
}

// libusb_lock_event_waiters
// file ../../libusb/io.c line 1869
void libusb_lock_event_waiters(struct libusb_context *ctx)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->event_waiters_lock);
}

// libusb_lock_events
// file ../../libusb/libusb.h line 1800
void libusb_lock_events(struct libusb_context *ctx)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->events_lock);
  ctx->event_handler_active = 1;
}

// libusb_open
// file ../../libusb/core.c line 1218
signed int libusb_open(struct libusb_device *dev, struct libusb_device_handle **handle)
{
  struct libusb_context *ctx = dev->ctx;
  struct libusb_device_handle *_handle;
  unsigned long int priv_size = usbi_backend->device_handle_priv_size;
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_open", "open %d.%d", dev->bus_number, dev->device_address);
  if(dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct libusb_device_handle) /*80ul*/  + priv_size);
    _handle = (struct libusb_device_handle *)return_value_malloc_1;
    if(_handle == ((struct libusb_device_handle *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      r=pthread_mutex_init(&_handle->lock, (const union anonymous_4 *)(void *)0);
      if(!(r == 0))
      {
        free((void *)_handle);
        return LIBUSB_ERROR_OTHER;
      }

      else
      {
        _handle->dev=libusb_ref_device(dev);
        _handle->auto_detach_kernel_driver = 0;
        _handle->claimed_interfaces = (unsigned long int)0;
        memset((void *)&_handle->os_priv, 0, priv_size);
        r=usbi_backend->open(_handle);
        if(!(r >= 0))
        {
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_open", "open %d.%d returns %d", dev->bus_number, dev->device_address, r);
          libusb_unref_device(dev);
          pthread_mutex_destroy(&_handle->lock);
          free((void *)_handle);
          return r;
        }

        else
        {
          pthread_mutex_lock(&ctx->open_devs_lock);
          list_add(&_handle->list, &ctx->open_devs);
          pthread_mutex_unlock(&ctx->open_devs_lock);
          *handle = _handle;
          return 0;
        }
      }
    }
  }
}

// libusb_open_device_with_vid_pid
// file ../../libusb/core.c line 1280
struct libusb_device_handle * libusb_open_device_with_vid_pid(struct libusb_context *ctx, unsigned short int vendor_id, unsigned short int product_id)
{
  struct libusb_device **devs;
  struct libusb_device *found = (struct libusb_device *)(void *)0;
  struct libusb_device *dev;
  struct libusb_device_handle *handle = (struct libusb_device_handle *)(void *)0;
  unsigned long int i = (unsigned long int)0;
  signed int r;
  signed long int return_value_libusb_get_device_list_1;
  return_value_libusb_get_device_list_1=libusb_get_device_list(ctx, &devs);
  unsigned long int tmp_post_2;
  if(!(return_value_libusb_get_device_list_1 >= 0l))
    return (struct libusb_device_handle *)(void *)0;

  else
  {
    do
    {
      tmp_post_2 = i;
      i = i + 1ul;
      dev = devs[(signed long int)tmp_post_2];
      if(dev == ((struct libusb_device *)NULL))
        break;

      struct libusb_device_descriptor desc;
      r=libusb_get_device_descriptor(dev, &desc);
      if(!(r >= 0))
        goto out;

      if(desc.idProduct == product_id && desc.idVendor == vendor_id)
      {
        found = dev;
        break;
      }

    }
    while((_Bool)1);
    if(!(found == ((struct libusb_device *)NULL)))
    {
      r=libusb_open(found, &handle);
      if(!(r >= 0))
        handle = (struct libusb_device_handle *)(void *)0;

    }


  out:
    ;
    libusb_free_device_list(devs, 1);
    return handle;
  }
}

// libusb_pollfds_handle_timeouts
// file ../../libusb/io.c line 2448
signed int libusb_pollfds_handle_timeouts(struct libusb_context *ctx)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  return (signed int)(ctx->timerfd >= 0);
}

// libusb_ref_device
// file ../../libusb/core.c line 1119
struct libusb_device * libusb_ref_device(struct libusb_device *dev)
{
  pthread_mutex_lock(&dev->lock);
  dev->refcnt = dev->refcnt + 1;
  pthread_mutex_unlock(&dev->lock);
  return dev;
}

// libusb_release_interface
// file ../../libusb/core.c line 1619
signed int libusb_release_interface(struct libusb_device_handle *dev, signed int interface_number)
{
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_release_interface", "interface %d", interface_number);
  if(interface_number >= 32)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    pthread_mutex_lock(&dev->lock);
    if((dev->claimed_interfaces & (unsigned long int)(1 << interface_number)) == 0ul)
      r = LIBUSB_ERROR_NOT_FOUND;

    else
    {
      r=usbi_backend->release_interface(dev, interface_number);
      if(r == 0)
        dev->claimed_interfaces = dev->claimed_interfaces & (unsigned long int)~(1 << interface_number);

    }

  out:
    ;
    pthread_mutex_unlock(&dev->lock);
    return r;
  }
}

// libusb_reset_device
// file ../../libusb/core.c line 1733
signed int libusb_reset_device(struct libusb_device_handle *dev)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_reset_device", "");
  if(dev->dev->attached == 0)
    return LIBUSB_ERROR_NO_DEVICE;

  else
  {
    signed int return_value;
    return_value=usbi_backend->reset_device(dev);
    return return_value;
  }
}

// libusb_set_auto_detach_kernel_driver
// file ../../libusb/core.c line 1927
signed int libusb_set_auto_detach_kernel_driver(struct libusb_device_handle *dev, signed int enable)
{
  if((131072u & usbi_backend->caps) == 0u)
    return LIBUSB_ERROR_NOT_SUPPORTED;

  else
  {
    dev->auto_detach_kernel_driver = enable;
    return LIBUSB_SUCCESS;
  }
}

// libusb_set_configuration
// file ../../libusb/core.c line 1540
signed int libusb_set_configuration(struct libusb_device_handle *dev, signed int configuration)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_set_configuration", "configuration %d", configuration);
  signed int return_value;
  return_value=usbi_backend->set_configuration(dev, configuration);
  return return_value;
}

// libusb_set_debug
// file ../../libusb/libusb.h line 1305
void libusb_set_debug(struct libusb_context *ctx, signed int level)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  if(ctx->debug_fixed == 0)
    ctx->debug = level;

}

// libusb_set_interface_alt_setting
// file ../../libusb/core.c line 1664
signed int libusb_set_interface_alt_setting(struct libusb_device_handle *dev, signed int interface_number, signed int alternate_setting)
{
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_set_interface_alt_setting", "interface %d altsetting %d", interface_number, alternate_setting);
  if(interface_number >= 32)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    pthread_mutex_lock(&dev->lock);
    if(dev->dev->attached == 0)
    {
      pthread_mutex_unlock(&dev->lock);
      return LIBUSB_ERROR_NO_DEVICE;
    }

    else
      if((dev->claimed_interfaces & (unsigned long int)(1 << interface_number)) == 0ul)
      {
        pthread_mutex_unlock(&dev->lock);
        return LIBUSB_ERROR_NOT_FOUND;
      }

      else
      {
        pthread_mutex_unlock(&dev->lock);
        signed int return_value;
        return_value=usbi_backend->set_interface_altsetting(dev, interface_number, alternate_setting);
        return return_value;
      }
  }
}

// libusb_set_pollfd_notifiers
// file ../../libusb/io.c line 2565
void libusb_set_pollfd_notifiers(struct libusb_context *ctx, void (*added_cb)(signed int, signed short int, void *), void (*removed_cb)(signed int, void *), void *user_data)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  ctx->fd_added_cb = added_cb;
  ctx->fd_removed_cb = removed_cb;
  ctx->fd_cb_user_data = user_data;
}

// libusb_setlocale
// file ../../libusb/strerror.c line 158
signed int libusb_setlocale(const char *locale)
{
  unsigned long int i;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(locale == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_strlen_1=strlen(locale);
    tmp_if_expr_2 = return_value_strlen_1 < (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  unsigned long int return_value_strlen_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_2)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_strlen_3=strlen(locale);
    if(return_value_strlen_3 >= 3ul)
      tmp_if_expr_4 = (signed int)locale[(signed long int)2] != 45 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (signed int)locale[(signed long int)2] != 95 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (signed int)locale[(signed long int)2] != 46 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_7)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= 4ul); i = i + 1ul)
    {
      signed int return_value_strncasecmp_8;
      return_value_strncasecmp_8=strncasecmp(usbi_locale_supported[(signed long int)i], locale, (unsigned long int)2);
      if(return_value_strncasecmp_8 == 0)
        break;

    }
    if(i >= 4ul)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      usbi_locale = i;
      return LIBUSB_SUCCESS;
    }
  }
}

// libusb_strerror
// file ../../libusb/strerror.c line 192
const char * libusb_strerror(enum libusb_error errcode)
{
  signed int errcode_index = -((signed int)errcode);
  if(errcode_index >= 14 || !(errcode_index >= 0))
    errcode_index = 14 - 1;

  return usbi_localized_errors[(signed long int)usbi_locale][(signed long int)errcode_index];
}

// libusb_submit_transfer
// file ../../libusb/io.c line 1459
signed int libusb_submit_transfer(struct libusb_transfer *transfer)
{
  struct usbi_transfer *itransfer = (struct usbi_transfer *)((unsigned char *)transfer - (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int remove = 0;
  signed int r;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_submit_transfer", "transfer %p", transfer);
  pthread_mutex_lock(&itransfer->lock);
  pthread_mutex_lock(&itransfer->flags_lock);
  if(!((32 & (signed int)itransfer->flags) == 0))
    r = LIBUSB_ERROR_BUSY;

  else
  {
    itransfer->transferred = 0;
    itransfer->flags = (unsigned char)0;
    r=calculate_timeout(itransfer);
    if(!(r >= 0))
      r = LIBUSB_ERROR_OTHER;

    else
    {
      itransfer->flags = itransfer->flags | (unsigned char)16;
      pthread_mutex_unlock(&itransfer->flags_lock);
      r=add_to_flying_list(itransfer);
      if(!(r == 0))
      {
        pthread_mutex_lock(&itransfer->flags_lock);
        itransfer->flags = (unsigned char)0;
      }

      else
      {
        libusb_ref_device(transfer->dev_handle->dev);
        r=usbi_backend->submit_transfer(itransfer);
        pthread_mutex_lock(&itransfer->flags_lock);
        itransfer->flags = itransfer->flags & (unsigned char)~16;
        if(r == LIBUSB_SUCCESS)
        {
          if(!((8 & (signed int)itransfer->flags) == 0))
          {
            usbi_backend->clear_transfer_priv(itransfer);
            remove = 1;
            r = LIBUSB_ERROR_NO_DEVICE;
          }

          else
            if((64 & (signed int)itransfer->flags) == 0)
              itransfer->flags = itransfer->flags | (unsigned char)32;

        }

        else
          remove = 1;
      }
    }
  }

out:
  ;
  pthread_mutex_unlock(&itransfer->flags_lock);
  if(!(remove == 0))
  {
    libusb_unref_device(transfer->dev_handle->dev);
    remove_from_flying_list(itransfer);
  }

  pthread_mutex_unlock(&itransfer->lock);
  return r;
}

// libusb_testlib_logf
// file ../../tests/libusb_testlib.h line 65
void libusb_testlib_logf(struct anonymous_5 *ctx, const char *fmt, ...)
{
  void **va = (void **)&fmt;
  vfprintf(ctx->output_file, fmt, va);
  va = ((void **)NULL);
  fprintf(ctx->output_file, "\n");
  fflush(ctx->output_file);
}

// libusb_testlib_run_tests
// file ../../tests/libusb_testlib.h line 103
signed int libusb_testlib_run_tests(signed int argc, char **argv, const struct anonymous_7 *tests)
{
  signed int run_count = 0;
  signed int idx = 0;
  signed int pass_count = 0;
  signed int fail_count = 0;
  signed int error_count = 0;
  signed int skip_count = 0;
  signed int r;
  signed int j;
  unsigned long int arglen;
  enum anonymous_6 test_result;
  struct anonymous_5 ctx;
  ctx.test_names = (char **)(void *)0;
  ctx.test_count = 0;
  ctx.list_tests = (signed int)!(1 == 1);
  ctx.verbose = (signed int)!(1 == 1);
  ctx.old_stdout = -1;
  ctx.old_stderr = -1;
  ctx.output_file = stdout;
  ctx.null_fd = -1;
  _Bool tmp_if_expr_1;
  if(argc >= 2)
  {
    j = 1;
    for( ; !(j >= argc); j = j + 1)
    {
      arglen=strlen(argv[(signed long int)j]);
      if((signed int)*argv[(signed long int)j] == 45)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)argv[(signed long int)j][(signed long int)0] == 47 ? (_Bool)1 : (_Bool)0;
      if(arglen >= 2ul && tmp_if_expr_1)
        switch((signed int)argv[(signed long int)j][(signed long int)1])
        {
          case 108:
          {
            ctx.list_tests = (signed int)(1 == 1);
            break;
          }
          case 118:
          {
            ctx.verbose = (signed int)(1 == 1);
            break;
          }
          default:
          {
            printf("Unknown option: '%s'\n", argv[(signed long int)j]);
            print_usage(argc, argv);
            return 1;
          }
        }

      else
      {
        ctx.test_names = argv + (signed long int)j;
        ctx.test_count = argc - j;
        break;
      }
    }
  }

  if(!(ctx.test_names == ((char **)NULL)) && !(ctx.list_tests == 0))
  {
    printf("List of tests requested but test list provided\n");
    print_usage(argc, argv);
    return 1;
  }

  else
  {
    r=setup_test_output(&ctx);
    if(!(r == 0))
      return r;

    else
      if(!(ctx.list_tests == 0))
      {
        for( ; !((tests + (signed long int)idx)->function == ((enum anonymous_6 (*)(struct anonymous_5 *))NULL)); idx = idx + 1)
          libusb_testlib_logf(&ctx, (tests + (signed long int)idx)->name);
        cleanup_test_output(&ctx);
        return 0;
      }

      else
      {
        while(!((tests + (signed long int)idx)->function == ((enum anonymous_6 (*)(struct anonymous_5 *))NULL)))
        {
          const struct anonymous_7 *test = &tests[(signed long int)idx];
          idx = idx + 1;
          if(ctx.test_count >= 1)
          {
            signed int i = 0;
            for( ; !(i >= ctx.test_count); i = i + 1)
            {
              signed int return_value_strcmp_2;
              return_value_strcmp_2=strcmp(ctx.test_names[(signed long int)i], test->name);
              if(return_value_strcmp_2 == 0)
                break;

            }
            if(i >= ctx.test_count)
              continue;

          }

          libusb_testlib_logf(&ctx, "Starting test run: %s...", test->name);
          test_result=test->function(&ctx);
          const char *return_value_test_result_to_str_3;
          return_value_test_result_to_str_3=test_result_to_str(test_result);
          libusb_testlib_logf(&ctx, "%s (%d)", return_value_test_result_to_str_3, test_result);
          if((signed int)test_result == TEST_STATUS_SUCCESS)
          {
            pass_count = pass_count + 1;
            fail_count = fail_count + 1;
            error_count = error_count + 1;
            skip_count = skip_count + 1;
          }

          run_count = run_count + 1;
        }
        libusb_testlib_logf(&ctx, "---");
        libusb_testlib_logf(&ctx, "Ran %d tests", run_count);
        libusb_testlib_logf(&ctx, "Passed %d tests", pass_count);
        libusb_testlib_logf(&ctx, "Failed %d tests", fail_count);
        libusb_testlib_logf(&ctx, "Error in %d tests", error_count);
        libusb_testlib_logf(&ctx, "Skipped %d tests", skip_count);
        cleanup_test_output(&ctx);
        return (signed int)(pass_count != run_count);
      }
  }
}

// libusb_transfer_get_stream_id
// file ../../libusb/io.c line 1599
unsigned int libusb_transfer_get_stream_id(struct libusb_transfer *transfer)
{
  struct usbi_transfer *itransfer = (struct usbi_transfer *)((unsigned char *)transfer - (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  return itransfer->stream_id;
}

// libusb_transfer_set_stream_id
// file ../../libusb/io.c line 1582
void libusb_transfer_set_stream_id(struct libusb_transfer *transfer, unsigned int stream_id)
{
  struct usbi_transfer *itransfer = (struct usbi_transfer *)((unsigned char *)transfer - (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  itransfer->stream_id = stream_id;
}

// libusb_try_lock_events
// file ../../libusb/io.c line 1712
signed int libusb_try_lock_events(struct libusb_context *ctx)
{
  signed int r;
  unsigned int ru;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_lock(&ctx->event_data_lock);
  ru = ctx->device_close;
  pthread_mutex_unlock(&ctx->event_data_lock);
  if(!(ru == 0u))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_try_lock_events", "someone else is closing a device");
    return 1;
  }

  else
  {
    r=pthread_mutex_trylock(&ctx->events_lock);
    if(!(r == 0))
      return 1;

    else
    {
      ctx->event_handler_active = 1;
      return 0;
    }
  }
}

// libusb_unlock_event_waiters
// file ../../libusb/io.c line 1880
void libusb_unlock_event_waiters(struct libusb_context *ctx)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  pthread_mutex_unlock(&ctx->event_waiters_lock);
}

// libusb_unlock_events
// file ../../libusb/libusb.h line 1801
void libusb_unlock_events(struct libusb_context *ctx)
{
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  ctx->event_handler_active = 0;
  pthread_mutex_unlock(&ctx->events_lock);
  pthread_mutex_lock(&ctx->event_waiters_lock);
  pthread_cond_broadcast(&ctx->event_waiters_cond);
  pthread_mutex_unlock(&ctx->event_waiters_lock);
}

// libusb_unref_device
// file ../../libusb/core.c line 1132
void libusb_unref_device(struct libusb_device *dev)
{
  signed int refcnt;
  if(!(dev == ((struct libusb_device *)NULL)))
  {
    pthread_mutex_lock(&dev->lock);
    dev->refcnt = dev->refcnt - 1;
    refcnt = dev->refcnt;
    pthread_mutex_unlock(&dev->lock);
    if(refcnt == 0)
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "libusb_unref_device", "destroy device %d.%d", dev->bus_number, dev->device_address);
      libusb_unref_device(dev->parent_dev);
      if(!(usbi_backend->destroy_device == ((void (*)(struct libusb_device *))NULL)))
        usbi_backend->destroy_device(dev);

      signed int return_value_libusb_has_capability_1;
      return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
      if(return_value_libusb_has_capability_1 == 0)
        usbi_disconnect_device(dev);

      pthread_mutex_destroy(&dev->lock);
      free((void *)dev);
    }

  }

}

// libusb_wait_for_event
// file ../../libusb/io.c line 1911
signed int libusb_wait_for_event(struct libusb_context *ctx, struct timeval *tv)
{
  struct timespec timeout;
  signed int r;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  if(tv == ((struct timeval *)NULL))
  {
    pthread_cond_wait(&ctx->event_waiters_cond, &ctx->event_waiters_lock);
    return 0;
  }

  else
  {
    r=usbi_backend->clock_gettime(1, &timeout);
    if(!(r >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "libusb_wait_for_event", "failed to read realtime clock, error %d", *return_value___errno_location_1);
      return LIBUSB_ERROR_OTHER;
    }

    timeout.tv_sec = timeout.tv_sec + tv->tv_sec;
    timeout.tv_nsec = timeout.tv_nsec + tv->tv_usec * (signed long int)1000;
    if(timeout.tv_nsec >= 1000000000l)
    {
      timeout.tv_nsec = timeout.tv_nsec - (signed long int)1000000000;
      timeout.tv_sec = timeout.tv_sec + 1l;
    }

    r=pthread_cond_timedwait(&ctx->event_waiters_cond, &ctx->event_waiters_lock, &timeout);
    return (signed int)(r == 110);
  }
}

// linux_device_disconnected
// file ../../libusb/os/linux_usbfs.c line 1118
void linux_device_disconnected(unsigned char busnum, unsigned char devaddr, const char *sys_name)
{
  struct libusb_context *ctx;
  struct libusb_device *dev;
  unsigned long int session_id = (unsigned long int)((signed int)busnum << 8 | (signed int)devaddr);
  pthread_mutex_lock(&active_contexts_lock);
  ctx = (struct libusb_context *)((unsigned long int)(&active_contexts_list)->next - (unsigned long int)528ul);
  for( ; !(&ctx->list == &active_contexts_list); ctx = (struct libusb_context *)((unsigned long int)ctx->list.next - (unsigned long int)528ul))
  {
    dev=usbi_get_device_by_session_id(ctx, session_id);
    if(!(dev == ((struct libusb_device *)NULL)))
    {
      usbi_disconnect_device(dev);
      libusb_unref_device(dev);
    }

    else
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_device_disconnected", "device not found for session %x", session_id);
  }
  pthread_mutex_unlock(&active_contexts_lock);
}

// linux_enumerate_device
// file ../../libusb/os/linux_usbfs.c line 1060
signed int linux_enumerate_device(struct libusb_context *ctx, unsigned char busnum, unsigned char devaddr, const char *sysfs_dir)
{
  unsigned long int session_id;
  struct libusb_device *dev;
  signed int r = 0;
  session_id = (unsigned long int)((signed int)busnum << 8 | (signed int)devaddr);
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_enumerate_device", "busnum %d devaddr %d session_id %ld", busnum, devaddr, session_id);
  dev=usbi_get_device_by_session_id(ctx, session_id);
  if(!(dev == ((struct libusb_device *)NULL)))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_enumerate_device", "session_id %ld already exists", session_id);
    libusb_unref_device(dev);
    return LIBUSB_SUCCESS;
  }

  else
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_enumerate_device", "allocating new device for %d/%d (session %ld)", busnum, devaddr, session_id);
    dev=usbi_alloc_device(ctx, session_id);
    if(dev == ((struct libusb_device *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      r=initialize_device(dev, busnum, devaddr, sysfs_dir);
      if(r >= 0)
      {
        r=usbi_sanitize_device(dev);
        if(r >= 0)
          r=linux_get_parent_info(dev, sysfs_dir);

      }


    out:
      ;
      if(!(r >= 0))
        libusb_unref_device(dev);

      else
        usbi_connect_device(dev);
      return r;
    }
  }
}

// linux_get_device_address
// file ../../libusb/os/linux_usbfs.c line 626
signed int linux_get_device_address(struct libusb_context *ctx, signed int detached, unsigned char *busnum, unsigned char *devaddr, const char *dev_node, const char *sys_name)
{
  signed int sysfs_attr;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_get_device_address", "getting address for device: %s detached: %d", sys_name, detached);
  signed int return_value_strncmp_1;
  if(sys_name == ((const char *)NULL) || sysfs_can_relate_devices == 0 || !(detached == 0))
  {
    if(dev_node == ((const char *)NULL))
      return LIBUSB_ERROR_OTHER;

    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(dev_node, "/dev/bus/usb", (unsigned long int)12);
    if(return_value_strncmp_2 == 0)
      sscanf(dev_node, "/dev/bus/usb/%hhu/%hhu", busnum, devaddr);

    else
    {
      return_value_strncmp_1=strncmp(dev_node, "/proc/bus/usb", (unsigned long int)13);
      if(return_value_strncmp_1 == 0)
        sscanf(dev_node, "/proc/bus/usb/%hhu/%hhu", busnum, devaddr);

    }
    return LIBUSB_SUCCESS;
  }

  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_get_device_address", "scan %s", sys_name);
  sysfs_attr=__read_sysfs_attr(ctx, sys_name, "busnum");
  if(!(sysfs_attr >= 0))
    return sysfs_attr;

  else
    if(sysfs_attr >= 256)
      return LIBUSB_ERROR_INVALID_PARAM;

    else
    {
      *busnum = (unsigned char)sysfs_attr;
      sysfs_attr=__read_sysfs_attr(ctx, sys_name, "devnum");
      if(!(sysfs_attr >= 0))
        return sysfs_attr;

      else
        if(sysfs_attr >= 256)
          return LIBUSB_ERROR_INVALID_PARAM;

        else
        {
          *devaddr = (unsigned char)sysfs_attr;
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_get_device_address", "bus=%d dev=%d", *busnum, *devaddr);
          return LIBUSB_SUCCESS;
        }
    }
}

// linux_get_parent_info
// file ../../libusb/os/linux_usbfs.c line 994
static signed int linux_get_parent_info(struct libusb_device *dev, const char *sysfs_dir)
{
  struct libusb_context *ctx = dev->ctx;
  struct libusb_device *it;
  char *parent_sysfs_dir;
  char *tmp;
  signed int ret;
  signed int add_parent = 1;
  _Bool tmp_if_expr_2;
  signed int return_value_strncmp_1;
  if(sysfs_dir == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_strncmp_1=strncmp(sysfs_dir, "usb", (unsigned long int)3);
    tmp_if_expr_2 = 0 == return_value_strncmp_1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_2)
    return LIBUSB_SUCCESS;

  else
  {
    parent_sysfs_dir=strdup(sysfs_dir);
    if(parent_sysfs_dir == ((char *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      tmp=strrchr(parent_sysfs_dir, 46);
      if(!(tmp == ((char *)NULL)))
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        tmp=strrchr(parent_sysfs_dir, 45);
        tmp_if_expr_4 = (char *)(void *)0 != tmp ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
      {
        signed int return_value_atoi_3;
        return_value_atoi_3=atoi(tmp + (signed long int)1);
        dev->port_number = (unsigned char)return_value_atoi_3;
        *tmp = (char)0;
      }

      else
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "linux_get_parent_info", "Can not parse sysfs_dir: %s, no parent info", parent_sysfs_dir);
        free((void *)parent_sysfs_dir);
        return LIBUSB_SUCCESS;
      }
      char *return_value_strchr_5;
      return_value_strchr_5=strchr(parent_sysfs_dir, 45);
      if(return_value_strchr_5 == ((char *)NULL))
      {
        tmp = parent_sysfs_dir;
        ret=asprintf(&parent_sysfs_dir, "usb%s", tmp);
        free((void *)tmp);
        if(ret >= 0)
          goto retry;

        return LIBUSB_ERROR_NO_MEM;
      }

      else
      {
        do
        {

        retry:
          ;
          pthread_mutex_lock(&ctx->usb_devs_lock);
          it = (struct libusb_device *)((unsigned long int)(&ctx->usb_devs)->next - (unsigned long int)80ul);
          for( ; !(&it->list == &ctx->usb_devs); it = (struct libusb_device *)((unsigned long int)it->list.next - (unsigned long int)80ul))
          {
            struct linux_device_priv *priv;
            priv=_device_priv(it);
            signed int return_value_strcmp_6;
            return_value_strcmp_6=strcmp(priv->sysfs_dir, parent_sysfs_dir);
            if(return_value_strcmp_6 == 0)
            {
              dev->parent_dev=libusb_ref_device(it);
              break;
            }

          }
          pthread_mutex_unlock(&ctx->usb_devs_lock);
          if(!(dev->parent_dev == ((struct libusb_device *)NULL)))
            break;

          if(add_parent == 0)
            break;

          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_get_parent_info", "parent_dev %s not enumerated yet, enumerating now", parent_sysfs_dir);
          sysfs_scan_device(ctx, parent_sysfs_dir);
          add_parent = 0;
        }
        while((_Bool)1);
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_get_parent_info", "Dev %p (%s) has parent %p (%s) port %d", dev, sysfs_dir, dev->parent_dev, parent_sysfs_dir, dev->port_number);
        free((void *)parent_sysfs_dir);
        return LIBUSB_SUCCESS;
      }
    }
  }
}

// linux_hotplug_enumerate
// file ../../libusb/os/linux_usbfs.c line 1107
void linux_hotplug_enumerate(unsigned char busnum, unsigned char devaddr, const char *sys_name)
{
  struct libusb_context *ctx;
  pthread_mutex_lock(&active_contexts_lock);
  ctx = (struct libusb_context *)((unsigned long int)(&active_contexts_list)->next - (unsigned long int)528ul);
  for( ; !(&ctx->list == &active_contexts_list); ctx = (struct libusb_context *)((unsigned long int)ctx->list.next - (unsigned long int)528ul))
    linux_enumerate_device(ctx, busnum, devaddr, sys_name);
  pthread_mutex_unlock(&active_contexts_lock);
}

// linux_scan_devices
// file ../../libusb/os/linux_usbfs.c line 493
static signed int linux_scan_devices(struct libusb_context *ctx)
{
  signed int ret;
  pthread_mutex_lock(&linux_hotplug_lock);
  ret=linux_udev_scan_devices(ctx);
  pthread_mutex_unlock(&linux_hotplug_lock);
  return ret;
}

// linux_start_event_monitor
// file ../../libusb/os/linux_usbfs.c line 475
static signed int linux_start_event_monitor(void)
{
  signed int return_value_linux_udev_start_event_monitor_1;
  return_value_linux_udev_start_event_monitor_1=linux_udev_start_event_monitor();
  return return_value_linux_udev_start_event_monitor_1;
}

// linux_stop_event_monitor
// file ../../libusb/os/linux_usbfs.c line 484
static signed int linux_stop_event_monitor(void)
{
  signed int return_value_linux_udev_stop_event_monitor_1;
  return_value_linux_udev_stop_event_monitor_1=linux_udev_stop_event_monitor();
  return return_value_linux_udev_stop_event_monitor_1;
}

// linux_udev_event_thread_main
// file ../../libusb/os/linux_udev.c line 161
static void * linux_udev_event_thread_main(void *arg)
{
  char dummy;
  signed int r;
  struct udev_device *udev_dev;
  struct pollfd fds[2l] = { { .fd=udev_control_pipe[(signed long int)0], .events=(signed short int)0x001,
    .revents=0 },
    { .fd=udev_monitor_fd, .events=(signed short int)0x001, .revents=0 } };
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_udev_event_thread_main", "udev event thread entering.");
  signed int return_value_poll_1;
  do
  {
    return_value_poll_1=poll(fds, (unsigned long int)2, -1);
    if(!(return_value_poll_1 >= 0))
      break;

    if(!((0x001 & (signed int)fds[0l].revents) == 0))
    {
      signed long int return_value_read_2;
      return_value_read_2=read(udev_control_pipe[(signed long int)0], (void *)&dummy, sizeof(char) /*1ul*/ );
      r = (signed int)return_value_read_2;
      if(!(r >= 1))
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "linux_udev_event_thread_main", "udev control pipe read failed");

      break;
    }

    if(!((0x001 & (signed int)fds[1l].revents) == 0))
    {
      pthread_mutex_lock(&linux_hotplug_lock);
      udev_dev=udev_monitor_receive_device(udev_monitor);
      if(!(udev_dev == ((struct udev_device *)NULL)))
        udev_hotplug_event(udev_dev);

      pthread_mutex_unlock(&linux_hotplug_lock);
    }

  }
  while((_Bool)1);
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_udev_event_thread_main", "udev event thread exiting");
  return (void *)0;
}

// linux_udev_hotplug_poll
// file ../../libusb/os/linux_usbfs.h line 176
void linux_udev_hotplug_poll(void)
{
  struct udev_device *udev_dev;
  pthread_mutex_lock(&linux_hotplug_lock);
  do
  {
    udev_dev=udev_monitor_receive_device(udev_monitor);
    if(!(udev_dev == ((struct udev_device *)NULL)))
    {
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "linux_udev_hotplug_poll", "Handling hotplug event from hotplug_poll");
      udev_hotplug_event(udev_dev);
    }

  }
  while(!(udev_dev == ((struct udev_device *)NULL)));
  pthread_mutex_unlock(&linux_hotplug_lock);
}

// linux_udev_scan_devices
// file ../../libusb/os/linux_usbfs.h line 175
signed int linux_udev_scan_devices(struct libusb_context *ctx)
{
  struct udev_enumerate *enumerator;
  struct udev_list_entry *devices;
  struct udev_list_entry *entry;
  struct udev_device *udev_dev;
  const char *sys_name;
  signed int r;
  /* assertion udev_ctx != ((void *)0) */
  assert(udev_ctx != (struct udev *)(void *)0);
  enumerator=udev_enumerate_new(udev_ctx);
  if(enumerator == ((struct udev_enumerate *)NULL))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_scan_devices", "error creating udev enumerator");
    return LIBUSB_ERROR_OTHER;
  }

  else
  {
    udev_enumerate_add_match_subsystem(enumerator, "usb");
    udev_enumerate_scan_devices(enumerator);
    devices=udev_enumerate_get_list_entry(enumerator);
    entry = devices;
    while(!(entry == ((struct udev_list_entry *)NULL)))
    {
      const char *path;
      path=udev_list_entry_get_name(entry);
      unsigned char busnum = (unsigned char)0;
      unsigned char devaddr = (unsigned char)0;
      udev_dev=udev_device_new_from_syspath(udev_ctx, path);
      r=udev_device_info(ctx, 0, udev_dev, &busnum, &devaddr, &sys_name);
      if(!(r == 0))
        udev_device_unref(udev_dev);

      else
      {
        linux_enumerate_device(ctx, busnum, devaddr, sys_name);
        udev_device_unref(udev_dev);
      }
      entry=udev_list_entry_get_next(entry);
    }
    udev_enumerate_unref(enumerator);
    return LIBUSB_SUCCESS;
  }
}

// linux_udev_start_event_monitor
// file ../../libusb/os/linux_usbfs.h line 173
signed int linux_udev_start_event_monitor(void)
{
  signed int r;
  /* assertion udev_ctx == ((void *)0) */
  assert(udev_ctx == (struct udev *)(void *)0);
  udev_ctx=udev_new();
  signed int return_value_udev_monitor_enable_receiving_1;
  if(udev_ctx == ((struct udev *)NULL))
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "could not create udev context");

  else
  {
    udev_monitor=udev_monitor_new_from_netlink(udev_ctx, "udev");
    if(udev_monitor == ((struct udev_monitor *)NULL))
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "could not initialize udev monitor");

    else
    {
      r=udev_monitor_filter_add_match_subsystem_devtype(udev_monitor, "usb", ((const char *)NULL));
      if(!(r == 0))
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "could not initialize udev monitor filter for \"usb\" subsystem");

      else
      {
        return_value_udev_monitor_enable_receiving_1=udev_monitor_enable_receiving(udev_monitor);
        if(!(return_value_udev_monitor_enable_receiving_1 == 0))
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "failed to enable the udev monitor");

        else
        {
          udev_monitor_fd=udev_monitor_get_fd(udev_monitor);
          r=fcntl(udev_monitor_fd, 3);
          if(r == -1)
          {
            signed int *return_value___errno_location_2;
            return_value___errno_location_2=__errno_location();
            usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "getting udev monitor fd flags (%d)", *return_value___errno_location_2);
            goto err_free_monitor;
          }

          r=fcntl(udev_monitor_fd, 4, r | 04000);
          if(!(r == 0))
          {
            signed int *return_value___errno_location_3;
            return_value___errno_location_3=__errno_location();
            usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "setting udev monitor fd flags (%d)", *return_value___errno_location_3);
            goto err_free_monitor;
          }

          r=usbi_pipe(udev_control_pipe);
          if(!(r == 0))
            usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "could not create udev control pipe");

          else
          {
            r=pthread_create(&linux_event_thread, (const union pthread_attr_t *)(void *)0, linux_udev_event_thread_main, (void *)0);
            if(!(r == 0))
              usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "linux_udev_start_event_monitor", "creating hotplug event thread (%d)", r);

            else
              return LIBUSB_SUCCESS;

          err_close_pipe:
            ;
            close(udev_control_pipe[(signed long int)0]);
            close(udev_control_pipe[(signed long int)1]);
          }
        }
      }

    err_free_monitor:
      ;
      udev_monitor_unref(udev_monitor);
      udev_monitor = (struct udev_monitor *)(void *)0;
      udev_monitor_fd = -1;
    }

  err_free_ctx:
    ;
    udev_unref(udev_ctx);
  }

err:
  ;
  udev_ctx = (struct udev *)(void *)0;
  return LIBUSB_ERROR_OTHER;
}

// linux_udev_stop_event_monitor
// file ../../libusb/os/linux_usbfs.h line 174
signed int linux_udev_stop_event_monitor(void)
{
  char dummy = (char)1;
  signed int r;
  /* assertion udev_ctx != ((void *)0) */
  assert(udev_ctx != (struct udev *)(void *)0);
  /* assertion udev_monitor != ((void *)0) */
  assert(udev_monitor != (struct udev_monitor *)(void *)0);
  /* assertion udev_monitor_fd != -1 */
  assert(udev_monitor_fd != -1);
  signed long int return_value_write_1;
  return_value_write_1=write(udev_control_pipe[(signed long int)1], (const void *)&dummy, sizeof(char) /*1ul*/ );
  r = (signed int)return_value_write_1;
  if(!(r >= 1))
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "linux_udev_stop_event_monitor", "udev control pipe signal failed");

  pthread_join(linux_event_thread, (void **)(void *)0);
  udev_monitor_unref(udev_monitor);
  udev_monitor = (struct udev_monitor *)(void *)0;
  udev_monitor_fd = -1;
  udev_unref(udev_ctx);
  udev_ctx = (struct udev *)(void *)0;
  close(udev_control_pipe[(signed long int)0]);
  close(udev_control_pipe[(signed long int)1]);
  udev_control_pipe[(signed long int)0] = -1;
  udev_control_pipe[(signed long int)1] = -1;
  return LIBUSB_SUCCESS;
}

// list_add
// file ../../libusb/libusbi.h line 116
static inline void list_add(struct list_head *entry, struct list_head *head)
{
  entry->next = head->next;
  entry->prev = head;
  head->next->prev = entry;
  head->next = entry;
}

// list_add_link1
// file ../../libusb/libusbi.h line 116
static inline void list_add_link1(struct list_head *entry_link1, struct list_head *head_link1)
{
  entry_link1->next = head_link1->next;
  entry_link1->prev = head_link1;
  head_link1->next->prev = entry_link1;
  head_link1->next = entry_link1;
}

// list_add_link2
// file ../../libusb/libusbi.h line 116
static inline void list_add_link2(struct list_head *entry_link2, struct list_head *head_link2)
{
  entry_link2->next = head_link2->next;
  entry_link2->prev = head_link2;
  head_link2->next->prev = entry_link2;
  head_link2->next = entry_link2;
}

// list_add_tail
// file ../../libusb/libusbi.h line 125
static inline void list_add_tail(struct list_head *entry, struct list_head *head)
{
  entry->next = head;
  entry->prev = head->prev;
  head->prev->next = entry;
  head->prev = entry;
}

// list_add_tail_link1
// file ../../libusb/libusbi.h line 125
static inline void list_add_tail_link1(struct list_head *entry_link1, struct list_head *head_link1)
{
  entry_link1->next = head_link1;
  entry_link1->prev = head_link1->prev;
  head_link1->prev->next = entry_link1;
  head_link1->prev = entry_link1;
}

// list_del
// file ../../libusb/libusbi.h line 135
static inline void list_del(struct list_head *entry)
{
  entry->next->prev = entry->prev;
  entry->prev->next = entry->next;
  entry->prev = (struct list_head *)(void *)0;
  entry->next = entry->prev;
}

// list_del_link1
// file ../../libusb/libusbi.h line 135
static inline void list_del_link1(struct list_head *entry_link1)
{
  entry_link1->next->prev = entry_link1->prev;
  entry_link1->prev->next = entry_link1->next;
  entry_link1->prev = (struct list_head *)(void *)0;
  entry_link1->next = entry_link1->prev;
}

// list_del_link2
// file ../../libusb/libusbi.h line 135
static inline void list_del_link2(struct list_head *entry_link2)
{
  entry_link2->next->prev = entry_link2->prev;
  entry_link2->prev->next = entry_link2->next;
  entry_link2->prev = (struct list_head *)(void *)0;
  entry_link2->next = entry_link2->prev;
}

// list_init
// file ../../libusb/libusbi.h line 111
static inline void list_init(struct list_head *entry)
{
  entry->next = entry;
  entry->prev = entry->next;
}

// list_init_link1
// file ../../libusb/libusbi.h line 111
static inline void list_init_link1(struct list_head *entry_link1)
{
  entry_link1->next = entry_link1;
  entry_link1->prev = entry_link1->next;
}

// main
// file ../../tests/stress.c line 157
signed int main(signed int argc, char **argv)
{
  signed int return_value_libusb_testlib_run_tests_1;
  return_value_libusb_testlib_run_tests_1=libusb_testlib_run_tests(argc, argv, tests);
  return return_value_libusb_testlib_run_tests_1;
}

// op_alloc_streams
// file ../../libusb/os/linux_usbfs.c line 1544
static signed int op_alloc_streams(struct libusb_device_handle *handle, unsigned int num_streams, unsigned char *endpoints, signed int num_endpoints)
{
  signed int return_value_do_streams_ioctl_1;
  return_value_do_streams_ioctl_1=do_streams_ioctl(handle, (signed long int)((unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(28 << 0)) | sizeof(struct usbfs_streams) /*8ul*/  << 0 + 8 + 8), num_streams, endpoints, num_endpoints);
  return return_value_do_streams_ioctl_1;
}

// op_attach_kernel_driver
// file ../../libusb/os/linux_usbfs.c line 1615
static signed int op_attach_kernel_driver(struct libusb_device_handle *handle, signed int interface)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  struct usbfs_ioctl command;
  signed int r;
  command.ifno = interface;
  command.ioctl_code = (signed int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(23 << 0) | (unsigned int)(0 << 0 + 8 + 8));
  command.data = (void *)0;
  r=ioctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(18 << 0)) | sizeof(struct usbfs_ioctl) /*16ul*/  << 0 + 8 + 8, &command);
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_2;
  if(!(r >= 0))
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    if(*return_value___errno_location_5 == 61)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value___errno_location_4=__errno_location();
      if(*return_value___errno_location_4 == 22)
        return LIBUSB_ERROR_INVALID_PARAM;

      else
      {
        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 19)
          return LIBUSB_ERROR_NO_DEVICE;

        else
        {
          return_value___errno_location_2=__errno_location();
          if(*return_value___errno_location_2 == 16)
            return LIBUSB_ERROR_BUSY;

        }
      }
    }
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_attach_kernel_driver", "attach failed error %d errno %d", r, *return_value___errno_location_6);
    return LIBUSB_ERROR_OTHER;
  }

  else
    if(r == 0)
      return LIBUSB_ERROR_NOT_FOUND;

  return 0;
}

// op_cancel_transfer
// file ../../libusb/os/linux_usbfs.c line 2152
static signed int op_cancel_transfer(struct usbi_transfer *itransfer)
{
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int r;
  if(tpriv->_anon0.urbs == ((struct usbfs_urb *)NULL))
    return LIBUSB_ERROR_NOT_FOUND;

  else
  {
    r=discard_urbs(itransfer, 0, tpriv->num_urbs);
    if(!(r == 0))
      return r;

    else
    {
      if((signed int)transfer->type == LIBUSB_TRANSFER_TYPE_BULK || (signed int)transfer->type == LIBUSB_TRANSFER_TYPE_BULK_STREAM)
      {
        if((signed int)tpriv->reap_action == ERROR)
          goto __CPROVER_DUMP_L5;

      }

      tpriv->reap_action = (enum reap_action)CANCELLED;

    __CPROVER_DUMP_L5:
      ;
      return 0;
    }
  }
}

// op_claim_interface
// file ../../libusb/os/linux_usbfs.c line 1683
static signed int op_claim_interface(struct libusb_device_handle *handle, signed int iface)
{
  signed int return_value_detach_kernel_driver_and_claim_1;
  signed int return_value_claim_interface_2;
  if(!(handle->auto_detach_kernel_driver == 0))
  {
    return_value_detach_kernel_driver_and_claim_1=detach_kernel_driver_and_claim(handle, iface);
    return return_value_detach_kernel_driver_and_claim_1;
  }

  else
  {
    return_value_claim_interface_2=claim_interface(handle, iface);
    return return_value_claim_interface_2;
  }
}

// op_clear_halt
// file ../../libusb/os/linux_usbfs.c line 1435
static signed int op_clear_halt(struct libusb_device_handle *handle, unsigned char endpoint)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  unsigned int _endpoint = (unsigned int)endpoint;
  signed int r;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(21 << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, &_endpoint);
  signed int *return_value___errno_location_2;
  if(!(r == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 2)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 19)
        return LIBUSB_ERROR_NO_DEVICE;

    }
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_clear_halt", "clear_halt failed error %d errno %d", r, *return_value___errno_location_4);
    return LIBUSB_ERROR_OTHER;
  }

  return 0;
}

// op_clear_transfer_priv
// file ../../libusb/os/linux_usbfs.c line 2179
static void op_clear_transfer_priv(struct usbi_transfer *itransfer)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  switch((signed int)transfer->type)
  {
    case LIBUSB_TRANSFER_TYPE_CONTROL:

    case LIBUSB_TRANSFER_TYPE_BULK:

    case LIBUSB_TRANSFER_TYPE_BULK_STREAM:

    case LIBUSB_TRANSFER_TYPE_INTERRUPT:
    {
      if(!(tpriv->_anon0.urbs == ((struct usbfs_urb *)NULL)))
      {
        free((void *)tpriv->_anon0.urbs);
        tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
      }

      break;
    }
    case LIBUSB_TRANSFER_TYPE_ISOCHRONOUS:
    {
      if(!(tpriv->_anon0.iso_urbs == ((struct usbfs_urb **)NULL)))
      {
        free_iso_urbs(tpriv);
        tpriv->_anon0.iso_urbs = (struct usbfs_urb **)(void *)0;
      }

      break;
    }
    default:
      usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_clear_transfer_priv", "unknown endpoint type %d", transfer->type);
  }
}

// op_clock_gettime
// file ../../libusb/os/linux_usbfs.c line 2625
static signed int op_clock_gettime(signed int clk_id, struct timespec *tp)
{
  signed int return_value_clock_gettime_1;
  signed int return_value_clock_gettime_2;
  switch(clk_id)
  {
    case 0:
    {
      return_value_clock_gettime_1=clock_gettime(monotonic_clkid, tp);
      return return_value_clock_gettime_1;
    }
    case 1:
    {
      return_value_clock_gettime_2=clock_gettime(0, tp);
      return return_value_clock_gettime_2;
    }
    default:
      return LIBUSB_ERROR_INVALID_PARAM;
  }
}

// op_close
// file ../../libusb/os/linux_usbfs.c line 1325
static void op_close(struct libusb_device_handle *dev_handle)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(dev_handle);
  fd = return_value__device_handle_priv_1->fd;
  usbi_remove_pollfd(dev_handle->dev->ctx, fd);
  close(fd);
}

// op_destroy_device
// file ../../libusb/os/linux_usbfs.c line 1705
static void op_destroy_device(struct libusb_device *dev)
{
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  if(!(priv->descriptors == ((unsigned char *)NULL)))
    free((void *)priv->descriptors);

  if(!(priv->sysfs_dir == ((char *)NULL)))
    free((void *)priv->sysfs_dir);

}

// op_detach_kernel_driver
// file ../../libusb/os/linux_usbfs.c line 1581
static signed int op_detach_kernel_driver(struct libusb_device_handle *handle, signed int interface)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  struct usbfs_ioctl command;
  struct usbfs_getdriver getdrv;
  signed int r;
  command.ifno = interface;
  command.ioctl_code = (signed int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(22 << 0) | (unsigned int)(0 << 0 + 8 + 8));
  command.data = (void *)0;
  getdrv.interface = (unsigned int)interface;
  r=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(8 << 0)) | sizeof(struct usbfs_getdriver) /*260ul*/  << 0 + 8 + 8, &getdrv);
  signed int return_value_strcmp_2;
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_3;
  if(r == 0)
  {
    return_value_strcmp_2=strcmp(getdrv.driver, "usbfs");
    if(!(return_value_strcmp_2 == 0))
      goto __CPROVER_DUMP_L1;

    return LIBUSB_ERROR_NOT_FOUND;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    r=ioctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(18 << 0)) | sizeof(struct usbfs_ioctl) /*16ul*/  << 0 + 8 + 8, &command);
    if(!(r == 0))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      if(*return_value___errno_location_5 == 61)
        return LIBUSB_ERROR_NOT_FOUND;

      else
      {
        return_value___errno_location_4=__errno_location();
        if(*return_value___errno_location_4 == 22)
          return LIBUSB_ERROR_INVALID_PARAM;

        else
        {
          return_value___errno_location_3=__errno_location();
          if(*return_value___errno_location_3 == 19)
            return LIBUSB_ERROR_NO_DEVICE;

        }
      }
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_detach_kernel_driver", "detach failed error %d errno %d", r, *return_value___errno_location_6);
      return LIBUSB_ERROR_OTHER;
    }

    return 0;
  }
}

// op_exit
// file ../../libusb/os/linux_usbfs.c line 464
static void op_exit(void)
{
  pthread_mutex_lock(&linux_hotplug_startstop_lock);
  /* assertion init_count != 0 */
  assert(init_count != 0);
  init_count = init_count - 1;
  if(init_count == 0)
    linux_stop_event_monitor();

  pthread_mutex_unlock(&linux_hotplug_startstop_lock);
}

// op_free_streams
// file ../../libusb/os/linux_usbfs.c line 1551
static signed int op_free_streams(struct libusb_device_handle *handle, unsigned char *endpoints, signed int num_endpoints)
{
  signed int return_value_do_streams_ioctl_1;
  return_value_do_streams_ioctl_1=do_streams_ioctl(handle, (signed long int)((unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(29 << 0)) | sizeof(struct usbfs_streams) /*8ul*/  << 0 + 8 + 8), (unsigned int)0, endpoints, num_endpoints);
  return return_value_do_streams_ioctl_1;
}

// op_get_active_config_descriptor
// file ../../libusb/os/linux_usbfs.c line 784
static signed int op_get_active_config_descriptor(struct libusb_device *dev, unsigned char *buffer, unsigned long int len, signed int *host_endian)
{
  signed int r;
  signed int config;
  unsigned char *config_desc;
  if(!(sysfs_can_relate_devices == 0))
  {
    r=sysfs_get_active_config(dev, &config);
    if(!(r >= 0))
      return r;

  }

  else
  {
    struct linux_device_priv *priv;
    priv=_device_priv(dev);
    config = priv->active_config;
  }
  if(config == -1)
    return LIBUSB_ERROR_NOT_FOUND;

  else
  {
    r=op_get_config_descriptor_by_value(dev, (unsigned char)config, &config_desc, host_endian);
    if(!(r >= 0))
      return r;

    else
    {
      len = len < (unsigned long int)r ? len : (unsigned long int)r;
      memcpy((void *)buffer, (const void *)config_desc, len);
      return (signed int)len;
    }
  }
}

// op_get_config_descriptor
// file ../../libusb/os/linux_usbfs.c line 812
static signed int op_get_config_descriptor(struct libusb_device *dev, unsigned char config_index, unsigned char *buffer, unsigned long int len, signed int *host_endian)
{
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  unsigned char *descriptors = priv->descriptors;
  signed int i;
  signed int r;
  signed int size = priv->descriptors_len;
  *host_endian = 0;
  descriptors = descriptors + (signed long int)18;
  size = size - 18;
  i = 0;
  do
  {
    r=seek_to_next_config(dev->ctx, descriptors, size);
    if(!(r >= 0))
      return r;

    if(i == (signed int)config_index)
      break;

    size = size - r;
    descriptors = descriptors + (signed long int)r;
    i = i + 1;
  }
  while((_Bool)1);
  len = len < (unsigned long int)r ? len : (unsigned long int)r;
  memcpy((void *)buffer, (const void *)descriptors, len);
  return (signed int)len;
}

// op_get_config_descriptor_by_value
// file ../../libusb/os/linux_usbfs.c line 752
static signed int op_get_config_descriptor_by_value(struct libusb_device *dev, unsigned char value, unsigned char **buffer, signed int *host_endian)
{
  struct libusb_context *ctx = dev->ctx;
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  unsigned char *descriptors = priv->descriptors;
  signed int size = priv->descriptors_len;
  struct libusb_config_descriptor *config;
  *buffer = (unsigned char *)(void *)0;
  *host_endian = 0;
  descriptors = descriptors + (signed long int)18;
  size = size - 18;
  while((_Bool)1)
  {
    signed int next;
    next=seek_to_next_config(ctx, descriptors, size);
    if(!(next >= 0))
      return next;

    config = (struct libusb_config_descriptor *)descriptors;
    if(config->bConfigurationValue == value)
    {
      *buffer = descriptors;
      return next;
    }

    size = size - next;
    descriptors = descriptors + (signed long int)next;
  }
}

// op_get_configuration
// file ../../libusb/os/linux_usbfs.c line 1332
static signed int op_get_configuration(struct libusb_device_handle *handle, signed int *config)
{
  signed int r;
  if(!(sysfs_can_relate_devices == 0))
    r=sysfs_get_active_config(handle->dev, config);

  else
  {
    struct linux_device_handle_priv *return_value__device_handle_priv_1;
    return_value__device_handle_priv_1=_device_handle_priv(handle);
    r=usbfs_get_active_config(handle->dev, return_value__device_handle_priv_1->fd);
  }
  if(!(r >= 0))
    return r;

  else
  {
    if(*config == -1)
    {
      usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_get_configuration", "device unconfigured");
      *config = 0;
    }

    return 0;
  }
}

// op_get_device_descriptor
// file ../../libusb/os/linux_usbfs.c line 572
static signed int op_get_device_descriptor(struct libusb_device *dev, unsigned char *buffer, signed int *host_endian)
{
  struct linux_device_priv *priv;
  priv=_device_priv(dev);
  *host_endian = sysfs_has_descriptors != 0 ? 0 : 1;
  memcpy((void *)buffer, (const void *)priv->descriptors, (unsigned long int)18);
  return 0;
}

// op_get_timerfd_clockid
// file ../../libusb/os/linux_usbfs.c line 2638
static signed int op_get_timerfd_clockid(void)
{
  return monotonic_clkid;
}

// op_handle_events
// file ../../libusb/os/linux_usbfs.c line 2569
static signed int op_handle_events(struct libusb_context *ctx, struct pollfd *fds, unsigned long int nfds, signed int num_ready)
{
  signed int r;
  unsigned int i = (unsigned int)0;
  pthread_mutex_lock(&ctx->open_devs_lock);
  i = (unsigned int)0;
  _Bool tmp_if_expr_1;
  for( ; num_ready >= 1 && !((unsigned long int)i >= nfds); i = i + 1u)
  {
    struct pollfd *pollfd = &fds[(signed long int)i];
    struct libusb_device_handle *handle;
    struct linux_device_handle_priv *hpriv = (struct linux_device_handle_priv *)(void *)0;
    if(!(pollfd->revents == 0))
    {
      num_ready = num_ready - 1;
      handle = (struct libusb_device_handle *)((unsigned long int)(&ctx->open_devs)->next - (unsigned long int)48ul);
      for( ; !(&handle->list == &ctx->open_devs); handle = (struct libusb_device_handle *)((unsigned long int)handle->list.next - (unsigned long int)48ul))
      {
        hpriv=_device_handle_priv(handle);
        if(hpriv->fd == pollfd->fd)
          break;

      }
      if(hpriv == ((struct linux_device_handle_priv *)NULL))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = hpriv->fd != pollfd->fd ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_handle_events", "cannot find handle for fd %d", pollfd->fd);

      else
        if(!((0x008 & (signed int)pollfd->revents) == 0))
        {
          usbi_remove_pollfd(handle->dev->ctx, hpriv->fd);
          usbi_handle_disconnect(handle);
          pthread_mutex_lock(&linux_hotplug_lock);
          if(!(handle->dev->attached == 0))
            linux_device_disconnected(handle->dev->bus_number, handle->dev->device_address, (const char *)(void *)0);

          pthread_mutex_unlock(&linux_hotplug_lock);
        }

        else
        {
          do
            r=reap_for_handle(handle);
          while(r == 0);
          if(r == 1 || r == LIBUSB_ERROR_NO_DEVICE)
            goto __CPROVER_DUMP_L12;

          else
            if(!(r >= 0))
              goto out;

        }
    }


  __CPROVER_DUMP_L12:
    ;
  }
  r = 0;

out:
  ;
  pthread_mutex_unlock(&ctx->open_devs_lock);
  return r;
}

// op_hotplug_poll
// file ../../libusb/os/linux_usbfs.c line 510
static void op_hotplug_poll(void)
{
  linux_udev_hotplug_poll();
}

// op_init
// file ../../libusb/os/linux_usbfs.c line 374
static signed int op_init(struct libusb_context *ctx)
{
  struct stat statbuf;
  signed int r;
  usbfs_path=find_usbfs_path();
  if(usbfs_path == ((const char *)NULL))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "could not find usbfs");
    return LIBUSB_ERROR_OTHER;
  }

  else
  {
    if(monotonic_clkid == -1)
      monotonic_clkid=find_monotonic_clock();

    if(supports_flag_bulk_continuation == -1)
    {
      supports_flag_bulk_continuation=kernel_version_ge(2, 6, 32);
      if(!(supports_flag_bulk_continuation == -1))
        goto __CPROVER_DUMP_L3;

      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "error checking for bulk continuation support");
      return LIBUSB_ERROR_OTHER;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      if(!(supports_flag_bulk_continuation == 0))
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_init", "bulk continuation flag supported");

      if(supports_flag_zero_packet == -1)
      {
        supports_flag_zero_packet=kernel_version_ge(2, 6, 31);
        if(!(supports_flag_zero_packet == -1))
          goto __CPROVER_DUMP_L5;

        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "error checking for zero length packet support");
        return LIBUSB_ERROR_OTHER;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        if(!(supports_flag_zero_packet == 0))
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_init", "zero length packet flag supported");

        if(sysfs_has_descriptors == -1)
        {
          sysfs_has_descriptors=kernel_version_ge(2, 6, 26);
          if(!(sysfs_has_descriptors == -1))
            goto __CPROVER_DUMP_L7;

          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "error checking for sysfs descriptors");
          return LIBUSB_ERROR_OTHER;
        }

        else
        {

        __CPROVER_DUMP_L7:
          ;
          if(sysfs_can_relate_devices == -1)
          {
            sysfs_can_relate_devices=kernel_version_ge(2, 6, 22);
            if(!(sysfs_can_relate_devices == -1))
              goto __CPROVER_DUMP_L8;

            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "error checking for sysfs busnum");
            return LIBUSB_ERROR_OTHER;
          }

          else
          {

          __CPROVER_DUMP_L8:
            ;
            if(!(sysfs_can_relate_devices == 0) || !(sysfs_has_descriptors == 0))
            {
              r=stat("/sys/bus/usb/devices", &statbuf);
              if(!((61440u & statbuf.st_mode) == 16384u) || !(r == 0))
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "op_init", "sysfs not mounted");
                sysfs_can_relate_devices = 0;
                sysfs_has_descriptors = 0;
              }

            }

            if(!(sysfs_can_relate_devices == 0))
              usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_init", "sysfs can relate devices");

            if(!(sysfs_has_descriptors == 0))
              usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_init", "sysfs has complete descriptors");

            pthread_mutex_lock(&linux_hotplug_startstop_lock);
            r = LIBUSB_SUCCESS;
            if(init_count == 0)
              r=linux_start_event_monitor();

            if(r == LIBUSB_SUCCESS)
            {
              r=linux_scan_devices(ctx);
              if(r == LIBUSB_SUCCESS)
                init_count = init_count + 1;

              else
                if(init_count == 0)
                  linux_stop_event_monitor();

            }

            else
              usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_init", "error starting hotplug event monitor");
            pthread_mutex_unlock(&linux_hotplug_startstop_lock);
            return r;
          }
        }
      }
    }
  }
}

// op_kernel_driver_active
// file ../../libusb/os/linux_usbfs.c line 1558
static signed int op_kernel_driver_active(struct libusb_device_handle *handle, signed int interface)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  struct usbfs_getdriver getdrv;
  signed int r;
  getdrv.interface = (unsigned int)interface;
  r=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(8 << 0)) | sizeof(struct usbfs_getdriver) /*260ul*/  << 0 + 8 + 8, &getdrv);
  signed int *return_value___errno_location_2;
  if(!(r == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 61)
      return 0;

    else
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 19)
        return LIBUSB_ERROR_NO_DEVICE;

    }
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_kernel_driver_active", "get driver failed error %d errno %d", r, *return_value___errno_location_4);
    return LIBUSB_ERROR_OTHER;
  }

  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(getdrv.driver, "usbfs");
  return return_value_strcmp_5 == 0 ? 0 : 1;
}

// op_open
// file ../../libusb/os/linux_usbfs.c line 1288
static signed int op_open(struct libusb_device_handle *handle)
{
  struct linux_device_handle_priv *hpriv;
  hpriv=_device_handle_priv(handle);
  signed int r;
  hpriv->fd=_get_usbfs_fd(handle->dev, (unsigned int)02, 0);
  signed int *return_value___errno_location_1;
  if(!(hpriv->fd >= 0))
  {
    if(hpriv->fd == LIBUSB_ERROR_NO_DEVICE)
    {
      pthread_mutex_lock(&linux_hotplug_lock);
      if(!(handle->dev->attached == 0))
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_open", "open failed with no device, but device still attached");
        linux_device_disconnected(handle->dev->bus_number, handle->dev->device_address, (const char *)(void *)0);
      }

      pthread_mutex_unlock(&linux_hotplug_lock);
    }

    return hpriv->fd;
  }

  else
  {
    r=ioctl(hpriv->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(26 << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, &hpriv->caps);
    if(!(r >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 25)
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "op_open", "getcap not available");

      else
      {
        return_value___errno_location_1=__errno_location();
        usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_open", "getcap failed (%d)", *return_value___errno_location_1);
      }
      hpriv->caps = (unsigned int)0;
      if(!(supports_flag_zero_packet == 0))
        hpriv->caps = hpriv->caps | (unsigned int)0x01;

      if(!(supports_flag_bulk_continuation == 0))
        hpriv->caps = hpriv->caps | (unsigned int)0x02;

    }

    signed int return_value_usbi_add_pollfd_3;
    return_value_usbi_add_pollfd_3=usbi_add_pollfd(handle->dev->ctx, hpriv->fd, (signed short int)0x004);
    return return_value_usbi_add_pollfd_3;
  }
}

// op_release_interface
// file ../../libusb/os/linux_usbfs.c line 1691
static signed int op_release_interface(struct libusb_device_handle *handle, signed int iface)
{
  signed int r;
  r=release_interface(handle, iface);
  if(!(r == 0))
    return r;

  else
  {
    if(!(handle->auto_detach_kernel_driver == 0))
      op_attach_kernel_driver(handle, iface);

    return 0;
  }
}

// op_reset_device
// file ../../libusb/os/linux_usbfs.c line 1455
static signed int op_reset_device(struct libusb_device_handle *handle)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  signed int i;
  signed int r;
  signed int ret = 0;
  i = 0;
  for( ; !(i >= 32); i = i + 1)
    if(!((handle->claimed_interfaces & (unsigned long int)(1L << i)) == 0ul))
      release_interface(handle, i);

  pthread_mutex_lock(&handle->lock);
  r=ioctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(20 << 0) | (unsigned int)(0 << 0 + 8 + 8)), (void *)0);
  if(!(r == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 19)
    {
      ret = LIBUSB_ERROR_NOT_FOUND;
      goto out;
    }

    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_reset_device", "reset failed error %d errno %d", r, *return_value___errno_location_3);
    ret = LIBUSB_ERROR_OTHER;
    goto out;
  }

  i = 0;
  for( ; !(i >= 32); i = i + 1)
    if(!((handle->claimed_interfaces & (unsigned long int)(1L << i)) == 0ul))
    {
      r=detach_kernel_driver_and_claim(handle, i);
      if(!(r == 0))
      {
        const char *return_value_libusb_error_name_4;
        return_value_libusb_error_name_4=libusb_error_name(r);
        usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "op_reset_device", "failed to re-claim interface %d after reset: %s", i, return_value_libusb_error_name_4);
        handle->claimed_interfaces = handle->claimed_interfaces & (unsigned long int)~(1L << i);
        ret = LIBUSB_ERROR_NOT_FOUND;
      }

    }


out:
  ;
  pthread_mutex_unlock(&handle->lock);
  return ret;
}

// op_set_configuration
// file ../../libusb/os/linux_usbfs.c line 1354
static signed int op_set_configuration(struct libusb_device_handle *handle, signed int config)
{
  struct linux_device_priv *priv;
  priv=_device_priv(handle->dev);
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  signed int r;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(5 << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, &config);
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_2;
  if(!(r == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    if(*return_value___errno_location_4 == 22)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 16)
        return LIBUSB_ERROR_BUSY;

      else
      {
        return_value___errno_location_2=__errno_location();
        if(*return_value___errno_location_2 == 19)
          return LIBUSB_ERROR_NO_DEVICE;

      }
    }
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_set_configuration", "failed, error %d errno %d", r, *return_value___errno_location_5);
    return LIBUSB_ERROR_OTHER;
  }

  priv->active_config = config;
  return LIBUSB_SUCCESS;
}

// op_set_interface
// file ../../libusb/os/linux_usbfs.c line 1411
static signed int op_set_interface(struct libusb_device_handle *handle, signed int iface, signed int altsetting)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  struct usbfs_setinterface setintf;
  signed int r;
  setintf.interface = (unsigned int)iface;
  setintf.altsetting = (unsigned int)altsetting;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(4 << 0)) | sizeof(struct usbfs_setinterface) /*8ul*/  << 0 + 8 + 8, &setintf);
  signed int *return_value___errno_location_2;
  if(!(r == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 22)
      return LIBUSB_ERROR_NOT_FOUND;

    else
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 19)
        return LIBUSB_ERROR_NO_DEVICE;

    }
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_set_interface", "setintf failed error %d errno %d", r, *return_value___errno_location_4);
    return LIBUSB_ERROR_OTHER;
  }

  return 0;
}

// op_submit_transfer
// file ../../libusb/os/linux_usbfs.c line 2130
static signed int op_submit_transfer(struct usbi_transfer *itransfer)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  signed int return_value_submit_control_transfer_1;
  signed int return_value_submit_bulk_transfer_2;
  signed int return_value_submit_bulk_transfer_3;
  signed int return_value_submit_iso_transfer_4;
  switch((signed int)transfer->type)
  {
    case LIBUSB_TRANSFER_TYPE_CONTROL:
    {
      return_value_submit_control_transfer_1=submit_control_transfer(itransfer);
      return return_value_submit_control_transfer_1;
    }
    case LIBUSB_TRANSFER_TYPE_BULK:

    case LIBUSB_TRANSFER_TYPE_BULK_STREAM:
    {
      return_value_submit_bulk_transfer_2=submit_bulk_transfer(itransfer);
      return return_value_submit_bulk_transfer_2;
    }
    case LIBUSB_TRANSFER_TYPE_INTERRUPT:
    {
      return_value_submit_bulk_transfer_3=submit_bulk_transfer(itransfer);
      return return_value_submit_bulk_transfer_3;
    }
    case LIBUSB_TRANSFER_TYPE_ISOCHRONOUS:
    {
      return_value_submit_iso_transfer_4=submit_iso_transfer(itransfer);
      return return_value_submit_iso_transfer_4;
    }
    default:
    {
      usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "op_submit_transfer", "unknown endpoint type %d", transfer->type);
      return LIBUSB_ERROR_INVALID_PARAM;
    }
  }
}

// parse_bos
// file ../../libusb/descriptor.c line 814
static signed int parse_bos(struct libusb_context *ctx, struct libusb_bos_descriptor **bos, unsigned char *buffer, signed int size, signed int host_endian)
{
  struct libusb_bos_descriptor bos_header;
  struct libusb_bos_descriptor *_bos;
  struct libusb_bos_dev_capability_descriptor dev_cap;
  signed int i;
  if(!(size >= 5))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_bos", "short bos descriptor read %d/%d", size, 5);
    return LIBUSB_ERROR_IO;
  }

  else
  {
    usbi_parse_descriptor(buffer, "bbwb", (void *)&bos_header, host_endian);
    if(!((signed int)bos_header.bDescriptorType == 15))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_bos", "unexpected descriptor %x (expected %x)", bos_header.bDescriptorType, 15);
      return LIBUSB_ERROR_IO;
    }

    else
      if(!((signed int)bos_header.bLength >= 5))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_bos", "invalid bos bLength (%d)", bos_header.bLength);
        return LIBUSB_ERROR_IO;
      }

      else
        if(!(size >= (signed int)bos_header.bLength))
        {
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_bos", "short bos descriptor read %d/%d", size, bos_header.bLength);
          return LIBUSB_ERROR_IO;
        }

        else
        {
          void *return_value_calloc_1;
          return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct libusb_bos_descriptor) /*8ul*/  + (unsigned long int)bos_header.bNumDeviceCaps * sizeof(void *) /*8ul*/ );
          _bos = (struct libusb_bos_descriptor *)return_value_calloc_1;
          if(_bos == ((struct libusb_bos_descriptor *)NULL))
            return LIBUSB_ERROR_NO_MEM;

          else
          {
            usbi_parse_descriptor(buffer, "bbwb", (void *)_bos, host_endian);
            buffer = buffer + (signed long int)bos_header.bLength;
            size = size - (signed int)bos_header.bLength;
            i = 0;
            for( ; !(i >= (signed int)bos_header.bNumDeviceCaps); i = i + 1)
            {
              if(!(size >= 3))
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_bos", "short dev-cap descriptor read %d/%d", size, 3);
                break;
              }

              usbi_parse_descriptor(buffer, "bbb", (void *)&dev_cap, host_endian);
              if(!((signed int)dev_cap.bDescriptorType == 16))
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_bos", "unexpected descriptor %x (expected %x)", dev_cap.bDescriptorType, 16);
                break;
              }

              if(!((signed int)dev_cap.bLength >= 3))
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_bos", "invalid dev-cap bLength (%d)", dev_cap.bLength);
                libusb_free_bos_descriptor(_bos);
                return LIBUSB_ERROR_IO;
              }

              if(!(size >= (signed int)dev_cap.bLength))
              {
                usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_bos", "short dev-cap descriptor read %d/%d", size, dev_cap.bLength);
                break;
              }

              void *return_value_malloc_2;
              return_value_malloc_2=malloc((unsigned long int)dev_cap.bLength);
              _bos->dev_capability[(signed long int)i] = (struct libusb_bos_dev_capability_descriptor *)return_value_malloc_2;
              if(_bos->dev_capability[(signed long int)i] == ((struct libusb_bos_dev_capability_descriptor *)NULL))
              {
                libusb_free_bos_descriptor(_bos);
                return LIBUSB_ERROR_NO_MEM;
              }

              memcpy((void *)_bos->dev_capability[(signed long int)i], (const void *)buffer, (unsigned long int)dev_cap.bLength);
              buffer = buffer + (signed long int)dev_cap.bLength;
              size = size - (signed int)dev_cap.bLength;
            }
            _bos->bNumDeviceCaps = (unsigned char)i;
            *bos = _bos;
            return LIBUSB_SUCCESS;
          }
        }
  }
}

// parse_configuration
// file ../../libusb/descriptor.c line 378
static signed int parse_configuration(struct libusb_context *ctx, struct libusb_config_descriptor *config, unsigned char *buffer, signed int size, signed int host_endian)
{
  signed int i;
  signed int r;
  unsigned long int tmp;
  struct usb_descriptor_header header;
  struct libusb_interface *usb_interface;
  if(!(size >= 9))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "short config descriptor read %d/%d", size, 9);
    return LIBUSB_ERROR_IO;
  }

  else
  {
    usbi_parse_descriptor(buffer, "bbwbbbbb", (void *)config, host_endian);
    if(!((signed int)config->bDescriptorType == 2))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "unexpected descriptor %x (expected %x)", config->bDescriptorType, 2);
      return LIBUSB_ERROR_IO;
    }

    else
      if(!((signed int)config->bLength >= 9))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "invalid config bLength (%d)", config->bLength);
        return LIBUSB_ERROR_IO;
      }

      else
        if(!(size >= (signed int)config->bLength))
        {
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "short config descriptor read %d/%d", size, config->bLength);
          return LIBUSB_ERROR_IO;
        }

        else
          if((signed int)config->bNumInterfaces >= 33)
          {
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "too many interfaces (%d)", config->bNumInterfaces);
            return LIBUSB_ERROR_IO;
          }

          else
          {
            tmp = (unsigned long int)config->bNumInterfaces * sizeof(struct libusb_interface) /*16ul*/ ;
            void *return_value_malloc_1;
            return_value_malloc_1=malloc(tmp);
            usb_interface = (struct libusb_interface *)return_value_malloc_1;
            config->interface = usb_interface;
            if(config->interface == ((struct libusb_interface *)NULL))
              return LIBUSB_ERROR_NO_MEM;

            else
            {
              memset((void *)usb_interface, 0, tmp);
              buffer = buffer + (signed long int)config->bLength;
              size = size - (signed int)config->bLength;
              config->extra = (const unsigned char *)(void *)0;
              config->extra_length = 0;
              i = 0;
              for( ; !(i >= (signed int)config->bNumInterfaces); i = i + 1)
              {
                signed int len;
                unsigned char *begin = buffer;
                for( ; size >= 2; size = size - (signed int)header.bLength)
                {
                  usbi_parse_descriptor(buffer, "bb", (void *)&header, 0);
                  if(!((signed int)header.bLength >= 2))
                  {
                    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_configuration", "invalid extra config desc len (%d)", header.bLength);
                    r = LIBUSB_ERROR_IO;
                    goto err;
                  }

                  else
                    if(!(size >= (signed int)header.bLength))
                    {
                      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_configuration", "short extra config desc read %d/%d", size, header.bLength);
                      config->bNumInterfaces = (unsigned char)i;
                      return size;
                    }

                  if((signed int)header.bDescriptorType == 1 || (signed int)header.bDescriptorType == 2 || (signed int)header.bDescriptorType == 4 || (signed int)header.bDescriptorType == 5)
                    break;

                  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "parse_configuration", "skipping descriptor 0x%x", header.bDescriptorType);
                  buffer = buffer + (signed long int)header.bLength;
                }
                len = (signed int)(buffer - begin);
                if(!(len == 0))
                {
                  if(config->extra_length == 0)
                  {
                    void *return_value_malloc_2;
                    return_value_malloc_2=malloc((unsigned long int)len);
                    config->extra = (const unsigned char *)return_value_malloc_2;
                    if(config->extra == ((const unsigned char *)NULL))
                    {
                      r = LIBUSB_ERROR_NO_MEM;
                      goto err;
                    }

                    memcpy((void *)(unsigned char *)config->extra, (const void *)begin, (unsigned long int)len);
                    config->extra_length = len;
                  }

                }

                r=parse_interface(ctx, usb_interface + (signed long int)i, buffer, size, host_endian);
                if(!(r >= 0))
                  goto err;

                if(r == 0)
                {
                  config->bNumInterfaces = (unsigned char)i;
                  break;
                }

                buffer = buffer + (signed long int)r;
                size = size - r;
              }
              return size;

            err:
              ;
              clear_configuration(config);
              return r;
            }
          }
  }
}

// parse_endpoint
// file ../../libusb/descriptor.c line 101
static signed int parse_endpoint(struct libusb_context *ctx, struct libusb_endpoint_descriptor *endpoint, unsigned char *buffer, signed int size, signed int host_endian)
{
  struct usb_descriptor_header header;
  unsigned char *extra;
  unsigned char *begin;
  signed int parsed = 0;
  signed int len;
  if(!(size >= 2))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_endpoint", "short endpoint descriptor read %d/%d", size, 2);
    return LIBUSB_ERROR_IO;
  }

  else
  {
    usbi_parse_descriptor(buffer, "bb", (void *)&header, 0);
    if(!((signed int)header.bDescriptorType == 5))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_endpoint", "unexpected descriptor %x (expected %x)", header.bDescriptorType, 5);
      return parsed;
    }

    else
      if(!(size >= (signed int)header.bLength))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_endpoint", "short endpoint descriptor read %d/%d", size, header.bLength);
        return parsed;
      }

      else
      {
        if((signed int)header.bLength >= 9)
          usbi_parse_descriptor(buffer, "bbbbwbbb", (void *)endpoint, host_endian);

        else
          if((signed int)header.bLength >= 7)
            usbi_parse_descriptor(buffer, "bbbbwb", (void *)endpoint, host_endian);

          else
          {
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_endpoint", "invalid endpoint bLength (%d)", header.bLength);
            return LIBUSB_ERROR_IO;
          }
        buffer = buffer + (signed long int)header.bLength;
        size = size - (signed int)header.bLength;
        parsed = parsed + (signed int)header.bLength;
        begin = buffer;
        for( ; size >= 2; parsed = parsed + (signed int)header.bLength)
        {
          usbi_parse_descriptor(buffer, "bb", (void *)&header, 0);
          if(!((signed int)header.bLength >= 2))
          {
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_endpoint", "invalid extra ep desc len (%d)", header.bLength);
            return LIBUSB_ERROR_IO;
          }

          else
            if(!(size >= (signed int)header.bLength))
            {
              usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_endpoint", "short extra ep desc read %d/%d", size, header.bLength);
              return parsed;
            }

          if((signed int)header.bDescriptorType == 1 || (signed int)header.bDescriptorType == 2 || (signed int)header.bDescriptorType == 4 || (signed int)header.bDescriptorType == 5)
            break;

          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "parse_endpoint", "skipping descriptor %x", header.bDescriptorType);
          buffer = buffer + (signed long int)header.bLength;
          size = size - (signed int)header.bLength;
        }
        len = (signed int)(buffer - begin);
        if(len == 0)
        {
          endpoint->extra = (const unsigned char *)(void *)0;
          endpoint->extra_length = 0;
          return parsed;
        }

        else
        {
          void *return_value_malloc_1;
          return_value_malloc_1=malloc((unsigned long int)len);
          extra = (unsigned char *)return_value_malloc_1;
          endpoint->extra = extra;
          if(extra == ((unsigned char *)NULL))
          {
            endpoint->extra_length = 0;
            return LIBUSB_ERROR_NO_MEM;
          }

          else
          {
            memcpy((void *)extra, (const void *)begin, (unsigned long int)len);
            endpoint->extra_length = len;
            return parsed;
          }
        }
      }
  }
}

// parse_interface
// file ../../libusb/descriptor.c line 216
static signed int parse_interface(struct libusb_context *ctx, struct libusb_interface *usb_interface, unsigned char *buffer, signed int size, signed int host_endian)
{
  signed int i;
  signed int len;
  signed int r;
  signed int parsed = 0;
  signed int interface_number = -1;
  unsigned long int tmp;
  struct usb_descriptor_header header;
  struct libusb_interface_descriptor *ifp;
  unsigned char *begin;
  usb_interface->num_altsetting = 0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  while(size >= 9)
  {
    struct libusb_interface_descriptor *altsetting = (struct libusb_interface_descriptor *)usb_interface->altsetting;
    void *return_value_usbi_reallocf_1;
    return_value_usbi_reallocf_1=usbi_reallocf_link1((void *)altsetting, sizeof(struct libusb_interface_descriptor) /*40ul*/  * (unsigned long int)(usb_interface->num_altsetting + 1));
    altsetting = (struct libusb_interface_descriptor *)return_value_usbi_reallocf_1;
    if(altsetting == ((struct libusb_interface_descriptor *)NULL))
    {
      r = LIBUSB_ERROR_NO_MEM;
      goto err;
    }

    usb_interface->altsetting = altsetting;
    ifp = altsetting + (signed long int)usb_interface->num_altsetting;
    usbi_parse_descriptor(buffer, "bbbbbbbbb", (void *)ifp, 0);
    if(!((signed int)ifp->bDescriptorType == 4))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_interface", "unexpected descriptor %x (expected %x)", ifp->bDescriptorType, 4);
      return parsed;
    }

    if(!((signed int)ifp->bLength >= 9))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_interface", "invalid interface bLength (%d)", ifp->bLength);
      r = LIBUSB_ERROR_IO;
      goto err;
    }

    if(!(size >= (signed int)ifp->bLength))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_interface", "short intf descriptor read %d/%d", size, ifp->bLength);
      return parsed;
    }

    if((signed int)ifp->bNumEndpoints >= 33)
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_interface", "too many endpoints (%d)", ifp->bNumEndpoints);
      r = LIBUSB_ERROR_IO;
      goto err;
    }

    usb_interface->num_altsetting = usb_interface->num_altsetting + 1;
    ifp->extra = (const unsigned char *)(void *)0;
    ifp->extra_length = 0;
    ifp->endpoint = (struct libusb_endpoint_descriptor *)(void *)0;
    if(interface_number == -1)
      interface_number = (signed int)ifp->bInterfaceNumber;

    buffer = buffer + (signed long int)ifp->bLength;
    parsed = parsed + (signed int)ifp->bLength;
    size = size - (signed int)ifp->bLength;
    begin = buffer;
    for( ; size >= 2; size = size - (signed int)header.bLength)
    {
      usbi_parse_descriptor(buffer, "bb", (void *)&header, 0);
      if(!((signed int)header.bLength >= 2))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "parse_interface", "invalid extra intf desc len (%d)", header.bLength);
        r = LIBUSB_ERROR_IO;
        goto err;
      }

      else
        if(!(size >= (signed int)header.bLength))
        {
          usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "parse_interface", "short extra intf desc read %d/%d", size, header.bLength);
          return parsed;
        }

      if((signed int)header.bDescriptorType == 1 || (signed int)header.bDescriptorType == 2 || (signed int)header.bDescriptorType == 4 || (signed int)header.bDescriptorType == 5)
        break;

      buffer = buffer + (signed long int)header.bLength;
      parsed = parsed + (signed int)header.bLength;
    }
    len = (signed int)(buffer - begin);
    if(!(len == 0))
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)len);
      ifp->extra = (const unsigned char *)return_value_malloc_2;
      if(ifp->extra == ((const unsigned char *)NULL))
      {
        r = LIBUSB_ERROR_NO_MEM;
        goto err;
      }

      memcpy((void *)(unsigned char *)ifp->extra, (const void *)begin, (unsigned long int)len);
      ifp->extra_length = len;
    }

    if((signed int)ifp->bNumEndpoints >= 1)
    {
      struct libusb_endpoint_descriptor *endpoint;
      tmp = (unsigned long int)ifp->bNumEndpoints * sizeof(struct libusb_endpoint_descriptor) /*32ul*/ ;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(tmp);
      endpoint = (struct libusb_endpoint_descriptor *)return_value_malloc_3;
      ifp->endpoint = endpoint;
      if(endpoint == ((struct libusb_endpoint_descriptor *)NULL))
      {
        r = LIBUSB_ERROR_NO_MEM;
        goto err;
      }

      memset((void *)endpoint, 0, tmp);
      i = 0;
      for( ; !(i >= (signed int)ifp->bNumEndpoints); i = i + 1)
      {
        r=parse_endpoint(ctx, endpoint + (signed long int)i, buffer, size, host_endian);
        if(!(r >= 0))
          goto err;

        if(r == 0)
        {
          ifp->bNumEndpoints = (unsigned char)i;
          break;
        }

        buffer = buffer + (signed long int)r;
        parsed = parsed + r;
        size = size - r;
      }
    }

    ifp = (struct libusb_interface_descriptor *)buffer;
    if(!(size >= 9))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)ifp->bDescriptorType != 4 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = (signed int)ifp->bInterfaceNumber != interface_number ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      return parsed;

  }
  return parsed;

err:
  ;
  clear_interface(usb_interface);
  return r;
}

// print_usage
// file ../../tests/testlib.c line 72
static void print_usage(signed int argc, char **argv)
{
  char *tmp_if_expr_1;
  if(argc >= 1)
    tmp_if_expr_1 = argv[(signed long int)0];

  else
    tmp_if_expr_1 = "test_*";
  printf("Usage: %s [-l] [-v] [<test_name> ...]\n", tmp_if_expr_1);
  printf("   -l   List available tests\n");
  printf("   -v   Don't redirect STDERR/STDOUT during tests\n");
}

// raw_desc_to_config
// file ../../libusb/descriptor.c line 499
static signed int raw_desc_to_config(struct libusb_context *ctx, unsigned char *buf, signed int size, signed int host_endian, struct libusb_config_descriptor **config)
{
  struct libusb_config_descriptor *_config;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libusb_config_descriptor) /*40ul*/ );
  _config = (struct libusb_config_descriptor *)return_value_malloc_1;
  signed int r;
  if(_config == ((struct libusb_config_descriptor *)NULL))
    return LIBUSB_ERROR_NO_MEM;

  else
  {
    r=parse_configuration(ctx, _config, buf, size, host_endian);
    if(!(r >= 0))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "raw_desc_to_config", "parse_configuration failed with error %d", r);
      free((void *)_config);
      return r;
    }

    else
      if(r >= 1)
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "raw_desc_to_config", "still %d bytes of descriptor data left", r);

    *config = _config;
    return LIBUSB_SUCCESS;
  }
}

// reap_for_handle
// file ../../libusb/os/linux_usbfs.c line 2527
static signed int reap_for_handle(struct libusb_device_handle *handle)
{
  struct linux_device_handle_priv *hpriv;
  hpriv=_device_handle_priv(handle);
  signed int r;
  struct usbfs_urb *urb;
  struct usbi_transfer *itransfer;
  struct libusb_transfer *transfer;
  r=ioctl(hpriv->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(13 << 0)) | sizeof(void *) /*8ul*/  << 0 + 8 + 8, &urb);
  signed int *return_value___errno_location_1;
  signed int return_value_handle_iso_completion_4;
  signed int return_value_handle_bulk_completion_5;
  signed int return_value_handle_control_completion_6;
  if(r == -1)
  {
    return_value___errno_location_1=__errno_location();
    if(!(*return_value___errno_location_1 == 11))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(r >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 19)
        return LIBUSB_ERROR_NO_DEVICE;

      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "reap_for_handle", "reap failed error %d errno=%d", r, *return_value___errno_location_3);
      return LIBUSB_ERROR_IO;
    }

    itransfer = (struct usbi_transfer *)urb->usercontext;
    transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "reap_for_handle", "urb type=%d status=%d transferred=%d", urb->type, urb->status, urb->actual_length);
    switch((signed int)transfer->type)
    {
      case LIBUSB_TRANSFER_TYPE_ISOCHRONOUS:
      {
        return_value_handle_iso_completion_4=handle_iso_completion(itransfer, urb);
        return return_value_handle_iso_completion_4;
      }
      case LIBUSB_TRANSFER_TYPE_BULK:

      case LIBUSB_TRANSFER_TYPE_BULK_STREAM:

      case LIBUSB_TRANSFER_TYPE_INTERRUPT:
      {
        return_value_handle_bulk_completion_5=handle_bulk_completion(itransfer, urb);
        return return_value_handle_bulk_completion_5;
      }
      case LIBUSB_TRANSFER_TYPE_CONTROL:
      {
        return_value_handle_control_completion_6=handle_control_completion(itransfer, urb);
        return return_value_handle_control_completion_6;
      }
      default:
      {
        usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "reap_for_handle", "unrecognised endpoint type %x", transfer->type);
        return LIBUSB_ERROR_OTHER;
      }
    }
  }
}

// release_interface
// file ../../libusb/os/linux_usbfs.c line 1396
static signed int release_interface(struct libusb_device_handle *handle, signed int iface)
{
  signed int fd;
  struct linux_device_handle_priv *return_value__device_handle_priv_1;
  return_value__device_handle_priv_1=_device_handle_priv(handle);
  fd = return_value__device_handle_priv_1->fd;
  signed int r;
  r=ioctl(fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(unsigned int) /*4ul*/  << 0 + 8 + 8, &iface);
  if(!(r == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 19)
      return LIBUSB_ERROR_NO_DEVICE;

    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    usbi_log(handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "release_interface", "release interface failed, error %d errno %d", r, *return_value___errno_location_3);
    return LIBUSB_ERROR_OTHER;
  }

  return 0;
}

// remove_from_flying_list
// file ../../libusb/io.c line 1430
static signed int remove_from_flying_list(struct usbi_transfer *transfer)
{
  struct libusb_context *ctx = ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx;
  signed int rearm_timerfd;
  signed int r = 0;
  pthread_mutex_lock(&ctx->flying_transfers_lock);
  _Bool tmp_if_expr_1;
  if(!(transfer->timeout.tv_sec == 0l))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (&transfer->timeout)->tv_usec != 0l ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (struct usbi_transfer *)((unsigned long int)(&ctx->flying_transfers)->next - (unsigned long int)8ul) == transfer ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  rearm_timerfd = (signed int)tmp_if_expr_2;
  list_del_link1(&transfer->list);
  if(ctx->timerfd >= 0)
  {
    if(!(rearm_timerfd == 0))
      r=arm_timerfd_for_next_timeout(ctx);

  }

  pthread_mutex_unlock(&ctx->flying_transfers_lock);
  return r;
}

// seek_to_next_config
// file ../../libusb/os/linux_usbfs.c line 697
static signed int seek_to_next_config(struct libusb_context *ctx, unsigned char *buffer, signed int size)
{
  struct libusb_config_descriptor config;
  if(size == 0)
    return LIBUSB_ERROR_NOT_FOUND;

  else
    if(!(size >= 9))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "seek_to_next_config", "short descriptor read %d/%d", size, 9);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      usbi_parse_descriptor(buffer, "bbwbbbbb", (void *)&config, 0);
      if(!((signed int)config.bDescriptorType == 2))
      {
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "seek_to_next_config", "descriptor is not a config desc (type 0x%02x)", config.bDescriptorType);
        return LIBUSB_ERROR_IO;
      }

      else
        if(!(sysfs_has_descriptors == 0))
        {
          signed int next;
          next=seek_to_next_descriptor(ctx, (unsigned char)2, buffer, size);
          if(next == LIBUSB_ERROR_NOT_FOUND)
            next = size;

          if(!(next >= 0))
            return next;

          if(!(next == (signed int)config.wTotalLength))
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "seek_to_next_config", "config length mismatch wTotalLength %d real %d", config.wTotalLength, next);

          return next;
        }

        else
          if(!((signed int)config.wTotalLength >= 9))
          {
            usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "seek_to_next_config", "invalid wTotalLength %d", config.wTotalLength);
            return LIBUSB_ERROR_IO;
          }

          else
            if(!(size >= (signed int)config.wTotalLength))
            {
              usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "seek_to_next_config", "short descriptor read %d/%d", size, config.wTotalLength);
              return size;
            }

            else
              return (signed int)config.wTotalLength;
    }
}

// seek_to_next_descriptor
// file ../../libusb/os/linux_usbfs.c line 673
static signed int seek_to_next_descriptor(struct libusb_context *ctx, unsigned char descriptor_type, unsigned char *buffer, signed int size)
{
  struct usb_descriptor_header header;
  signed int i = 0;
  for( ; size >= 0; size = size - (signed int)header.bLength)
  {
    if(size == 0)
      return LIBUSB_ERROR_NOT_FOUND;

    if(!(size >= 2))
    {
      usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "seek_to_next_descriptor", "short descriptor read %d/2", size);
      return LIBUSB_ERROR_IO;
    }

    usbi_parse_descriptor(buffer + (signed long int)i, "bb", (void *)&header, 0);
    if(header.bDescriptorType == descriptor_type && !(i == 0))
      return i;

    i = i + (signed int)header.bLength;
  }
  usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "seek_to_next_descriptor", "bLength overflow by %d bytes", -size);
  return LIBUSB_ERROR_IO;
}

// setup_test_output
// file ../../tests/testlib.c line 108
static signed int setup_test_output(struct anonymous_5 *ctx)
{
  _Bool tmp_if_expr_6;
  signed int return_value_dup2_5;
  if(ctx->verbose == 0)
  {
    ctx->old_stdout=dup(1);
    if(!(ctx->old_stdout >= 0))
    {
      ctx->old_stdout = -1;
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      printf("Failed to duplicate stdout handle: %d\n", *return_value___errno_location_1);
      return 1;
    }

    ctx->old_stderr=dup(2);
    if(!(ctx->old_stderr >= 0))
    {
      ctx->old_stderr = -1;
      cleanup_test_output(ctx);
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      printf("Failed to duplicate stderr handle: %d\n", *return_value___errno_location_2);
      return 1;
    }

    ctx->null_fd=open("/dev/null", 01);
    if(!(ctx->null_fd >= 0))
    {
      ctx->null_fd = -1;
      cleanup_test_output(ctx);
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      printf("Failed to open null handle: %d\n", *return_value___errno_location_3);
      return 1;
    }

    signed int return_value_dup2_4;
    return_value_dup2_4=dup2(ctx->null_fd, 1);
    if(!(return_value_dup2_4 >= 0))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_dup2_5=dup2(ctx->null_fd, 2);
      tmp_if_expr_6 = return_value_dup2_5 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
    {
      cleanup_test_output(ctx);
      return 1;
    }

    ctx->output_file=fdopen(ctx->old_stdout, "w");
    if(ctx->output_file == ((struct _IO_FILE *)NULL))
    {
      ctx->output_file = stdout;
      cleanup_test_output(ctx);
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      printf("Failed to open FILE for output handle: %d\n", *return_value___errno_location_7);
      return 1;
    }

  }

  return 0;
}

// submit_bulk_transfer
// file ../../libusb/os/linux_usbfs.c line 1765
static signed int submit_bulk_transfer(struct usbi_transfer *itransfer)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct linux_device_handle_priv *dpriv;
  dpriv=_device_handle_priv(transfer->dev_handle);
  struct usbfs_urb *urbs;
  signed int is_out = (signed int)(((signed int)transfer->endpoint & 0x80) == 0);
  signed int bulk_buffer_len;
  signed int use_bulk_continuation;
  signed int r;
  signed int i;
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  if(!(is_out == 0))
  {
    if((8 & (signed int)transfer->flags) == 0)
      goto __CPROVER_DUMP_L1;

    if(!((1u & dpriv->caps) == 0u))
      goto __CPROVER_DUMP_L1;

    return LIBUSB_ERROR_NOT_SUPPORTED;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!((8u & dpriv->caps) == 0u))
    {
      if(!(transfer->length == 0))
        tmp_if_expr_2 = transfer->length;

      else
        tmp_if_expr_2 = 1;
      bulk_buffer_len = tmp_if_expr_2;
      use_bulk_continuation = 0;
    }

    else
      if(!((2u & dpriv->caps) == 0u))
      {
        bulk_buffer_len = 16384;
        use_bulk_continuation = 1;
      }

      else
        if(!((4u & dpriv->caps) == 0u))
        {
          if(!(transfer->length == 0))
            tmp_if_expr_3 = transfer->length;

          else
            tmp_if_expr_3 = 1;
          bulk_buffer_len = tmp_if_expr_3;
          use_bulk_continuation = 0;
        }

        else
        {
          bulk_buffer_len = 16384;
          use_bulk_continuation = 0;
        }
    signed int num_urbs = transfer->length / bulk_buffer_len;
    signed int last_urb_partial = 0;
    if(transfer->length == 0)
      num_urbs = 1;

    else
      if(transfer->length % bulk_buffer_len >= 1)
      {
        last_urb_partial = 1;
        num_urbs = num_urbs + 1;
      }

    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_bulk_transfer", "need %d urbs for new transfer with length %d", num_urbs, transfer->length);
    void *return_value_calloc_4;
    return_value_calloc_4=calloc((unsigned long int)num_urbs, sizeof(struct usbfs_urb) /*56ul*/ );
    urbs = (struct usbfs_urb *)return_value_calloc_4;
    if(urbs == ((struct usbfs_urb *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      tpriv->_anon0.urbs = urbs;
      tpriv->num_urbs = num_urbs;
      tpriv->num_retired = 0;
      tpriv->reap_action = (enum reap_action)NORMAL;
      tpriv->reap_status = (enum libusb_transfer_status)LIBUSB_TRANSFER_COMPLETED;
      i = 0;
      for( ; !(i >= num_urbs); i = i + 1)
      {
        struct usbfs_urb *urb = &urbs[(signed long int)i];
        urb->usercontext = (void *)itransfer;
        switch((signed int)transfer->type)
        {
          case LIBUSB_TRANSFER_TYPE_BULK:
          {
            urb->type = (unsigned char)3;
            urb->_anon0.stream_id = (unsigned int)0;
            break;
          }
          case LIBUSB_TRANSFER_TYPE_BULK_STREAM:
          {
            urb->type = (unsigned char)3;
            urb->_anon0.stream_id = itransfer->stream_id;
            break;
          }
          case LIBUSB_TRANSFER_TYPE_INTERRUPT:
            urb->type = (unsigned char)1;
        }
        urb->endpoint = transfer->endpoint;
        urb->buffer = (void *)(transfer->buffer + (signed long int)(i * bulk_buffer_len));
        if(is_out == 0 && !(use_bulk_continuation == 0) && !(i >= num_urbs + -1))
          urb->flags = (unsigned int)0x01;

        if(i == num_urbs + -1 && !(last_urb_partial == 0))
          urb->buffer_length = transfer->length % bulk_buffer_len;

        else
          if(transfer->length == 0)
            urb->buffer_length = 0;

          else
            urb->buffer_length = bulk_buffer_len;
        if(i >= 1 && !(use_bulk_continuation == 0))
          urb->flags = urb->flags | (unsigned int)0x04;

        if(i == num_urbs + -1 && !(is_out == 0))
        {
          if(!((8 & (signed int)transfer->flags) == 0))
            urb->flags = urb->flags | (unsigned int)0x40;

        }

        r=ioctl(dpriv->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(struct usbfs_urb) /*56ul*/  << 0 + 8 + 8, urb);
        if(!(r >= 0))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          if(*return_value___errno_location_6 == 19)
            r = LIBUSB_ERROR_NO_DEVICE;

          else
          {
            signed int *return_value___errno_location_5;
            return_value___errno_location_5=__errno_location();
            usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "submit_bulk_transfer", "submiturb failed error %d errno=%d", r, *return_value___errno_location_5);
            r = LIBUSB_ERROR_IO;
          }
          if(i == 0)
          {
            usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_bulk_transfer", "first URB failed, easy peasy");
            free((void *)urbs);
            tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
            return r;
          }

          signed int *return_value___errno_location_7;
          return_value___errno_location_7=__errno_location();
          tpriv->reap_action = (enum reap_action)(121 == *return_value___errno_location_7 ? COMPLETED_EARLY : SUBMIT_FAILED);
          tpriv->num_retired = tpriv->num_retired + (num_urbs - i);
          if((signed int)tpriv->reap_action == COMPLETED_EARLY)
            return 0;

          discard_urbs(itransfer, 0, i);
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_bulk_transfer", "reporting successful submission but waiting for %d discards before reporting error", i);
          return 0;
        }

      }
      return 0;
    }
  }
}

// submit_control_transfer
// file ../../libusb/os/linux_usbfs.c line 2090
static signed int submit_control_transfer(struct usbi_transfer *itransfer)
{
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_device_handle_priv *dpriv;
  dpriv=_device_handle_priv(transfer->dev_handle);
  struct usbfs_urb *urb;
  signed int r;
  if((unsigned long int)transfer->length + 18446744073709551608ul >= 4097ul)
    return LIBUSB_ERROR_INVALID_PARAM;

  else
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct usbfs_urb) /*56ul*/ );
    urb = (struct usbfs_urb *)return_value_calloc_2;
    if(urb == ((struct usbfs_urb *)NULL))
      return LIBUSB_ERROR_NO_MEM;

    else
    {
      tpriv->_anon0.urbs = urb;
      tpriv->num_urbs = 1;
      tpriv->reap_action = (enum reap_action)NORMAL;
      urb->usercontext = (void *)itransfer;
      urb->type = (unsigned char)2;
      urb->endpoint = transfer->endpoint;
      urb->buffer = (void *)transfer->buffer;
      urb->buffer_length = transfer->length;
      r=ioctl(dpriv->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(struct usbfs_urb) /*56ul*/  << 0 + 8 + 8, urb);
      if(!(r >= 0))
      {
        free((void *)urb);
        tpriv->_anon0.urbs = (struct usbfs_urb *)(void *)0;
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 19)
          return LIBUSB_ERROR_NO_DEVICE;

        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "submit_control_transfer", "submiturb failed error %d errno=%d", r, *return_value___errno_location_4);
        return LIBUSB_ERROR_IO;
      }

      return 0;
    }
  }
}

// submit_iso_transfer
// file ../../libusb/os/linux_usbfs.c line 1937
static signed int submit_iso_transfer(struct usbi_transfer *itransfer)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct linux_transfer_priv *tpriv;
  void *return_value_usbi_transfer_get_os_priv_1;
  return_value_usbi_transfer_get_os_priv_1=usbi_transfer_get_os_priv(itransfer);
  tpriv = (struct linux_transfer_priv *)return_value_usbi_transfer_get_os_priv_1;
  struct linux_device_handle_priv *dpriv;
  dpriv=_device_handle_priv(transfer->dev_handle);
  struct usbfs_urb **urbs;
  unsigned long int alloc_size;
  signed int num_packets = transfer->num_iso_packets;
  signed int i;
  signed int this_urb_len = 0;
  signed int num_urbs = 1;
  signed int packet_offset = 0;
  unsigned int packet_len;
  unsigned char *urb_buffer = transfer->buffer;
  i = 0;
  for( ; !(i >= num_packets); i = i + 1)
  {
    unsigned int space_remaining = (unsigned int)(49152 * 128 - this_urb_len);
    packet_len = transfer->iso_packet_desc[(signed long int)i].length;
    if(!(space_remaining >= packet_len))
    {
      num_urbs = num_urbs + 1;
      this_urb_len = (signed int)packet_len;
      if(this_urb_len >= 6291457)
        return LIBUSB_ERROR_INVALID_PARAM;

    }

    else
      this_urb_len = this_urb_len + (signed int)packet_len;
  }
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_iso_transfer", "need %d %dk URBs for transfer", num_urbs, (49152 * 128) / 1024);
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)num_urbs, sizeof(struct usbfs_urb *) /*8ul*/ );
  urbs = (struct usbfs_urb **)return_value_calloc_2;
  signed int *return_value___errno_location_5;
  if(urbs == ((struct usbfs_urb **)NULL))
    return LIBUSB_ERROR_NO_MEM;

  else
  {
    tpriv->_anon0.iso_urbs = urbs;
    tpriv->num_urbs = num_urbs;
    tpriv->num_retired = 0;
    tpriv->reap_action = (enum reap_action)NORMAL;
    tpriv->iso_packet_offset = 0;
    i = 0;
    for( ; !(i >= num_urbs); i = i + 1)
    {
      struct usbfs_urb *urb;
      unsigned int space_remaining_in_urb = (unsigned int)(49152 * 128);
      signed int urb_packet_offset = 0;
      unsigned char *urb_buffer_orig = urb_buffer;
      signed int j;
      signed int k;
      while(!(packet_offset >= transfer->num_iso_packets))
      {
        packet_len = transfer->iso_packet_desc[(signed long int)packet_offset].length;
        if(space_remaining_in_urb >= packet_len)
        {
          urb_packet_offset = urb_packet_offset + 1;
          packet_offset = packet_offset + 1;
          space_remaining_in_urb = space_remaining_in_urb - packet_len;
          urb_buffer = urb_buffer + (signed long int)packet_len;
        }

        else
          break;
      }
      alloc_size = sizeof(struct usbfs_urb) /*56ul*/  + (unsigned long int)urb_packet_offset * sizeof(struct usbfs_iso_packet_desc) /*12ul*/ ;
      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)1, alloc_size);
      urb = (struct usbfs_urb *)return_value_calloc_3;
      if(urb == ((struct usbfs_urb *)NULL))
      {
        free_iso_urbs(tpriv);
        return LIBUSB_ERROR_NO_MEM;
      }

      urbs[(signed long int)i] = urb;
      j = 0;
      k = packet_offset - urb_packet_offset;
      for( ; !(k >= packet_offset); j = j + 1)
      {
        packet_len = transfer->iso_packet_desc[(signed long int)k].length;
        urb->iso_frame_desc[(signed long int)j].length = packet_len;
        k = k + 1;
      }
      urb->usercontext = (void *)itransfer;
      urb->type = (unsigned char)0;
      urb->flags = (unsigned int)0x02;
      urb->endpoint = transfer->endpoint;
      urb->_anon0.number_of_packets = urb_packet_offset;
      urb->buffer = (void *)urb_buffer_orig;
    }
    i = 0;
    for( ; !(i >= num_urbs); i = i + 1)
    {
      signed int r;
      r=ioctl(dpriv->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(struct usbfs_urb) /*56ul*/  << 0 + 8 + 8, urbs[(signed long int)i]);
      if(!(r >= 0))
      {
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        if(*return_value___errno_location_6 == 19)
          r = LIBUSB_ERROR_NO_DEVICE;

        else
        {
          return_value___errno_location_5=__errno_location();
          if(*return_value___errno_location_5 == 22)
          {
            usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "submit_iso_transfer", "submiturb failed, transfer too large");
            r = LIBUSB_ERROR_INVALID_PARAM;
          }

          else
          {
            signed int *return_value___errno_location_4;
            return_value___errno_location_4=__errno_location();
            usbi_log(transfer->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "submit_iso_transfer", "submiturb failed error %d errno=%d", r, *return_value___errno_location_4);
            r = LIBUSB_ERROR_IO;
          }
        }
        if(i == 0)
        {
          usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_iso_transfer", "first URB failed, easy peasy");
          free_iso_urbs(tpriv);
          return r;
        }

        tpriv->reap_action = (enum reap_action)SUBMIT_FAILED;
        tpriv->num_retired = num_urbs - i;
        discard_urbs(itransfer, 0, i);
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "submit_iso_transfer", "reporting successful submission but waiting for %d discards before reporting error", i);
        return 0;
      }

    }
    return 0;
  }
}

// sync_transfer_cb
// file ../../libusb/sync.c line 37
static void sync_transfer_cb(struct libusb_transfer *transfer)
{
  signed int *completed = (signed int *)transfer->user_data;
  *completed = 1;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "sync_transfer_cb", "actual_length=%d", transfer->actual_length);
}

// sync_transfer_wait_for_completion
// file ../../libusb/sync.c line 45
static void sync_transfer_wait_for_completion(struct libusb_transfer *transfer)
{
  signed int r;
  signed int *completed = (signed int *)transfer->user_data;
  struct libusb_context *ctx = transfer->dev_handle->dev->ctx;
  while(*completed == 0)
  {
    r=libusb_handle_events_completed(ctx, completed);
    if(!(r >= 0))
    {
      if(!(r == LIBUSB_ERROR_INTERRUPTED))
      {
        const char *return_value_libusb_error_name_1;
        return_value_libusb_error_name_1=libusb_error_name(r);
        usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "sync_transfer_wait_for_completion", "libusb_handle_events failed: %s, cancelling transfer and retrying", return_value_libusb_error_name_1);
        libusb_cancel_transfer(transfer);
      }

    }

  }
}

// sysfs_get_active_config
// file ../../libusb/os/linux_usbfs.c line 584
static signed int sysfs_get_active_config(struct libusb_device *dev, signed int *config)
{
  char *endptr;
  char tmp[5l] = { (char)0, (char)0, (char)0, (char)0, (char)0 };
  signed long int num;
  signed int fd;
  signed long int r;
  fd=_open_sysfs_attr(dev, "bConfigurationValue");
  if(!(fd >= 0))
    return fd;

  else
  {
    r=read(fd, (void *)tmp, sizeof(char [5l]) /*5ul*/ );
    close(fd);
    if(!(r >= 0l))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "sysfs_get_active_config", "read bConfigurationValue failed ret=%d errno=%d", r, *return_value___errno_location_1);
      return LIBUSB_ERROR_IO;
    }

    else
      if(r == 0l)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "sysfs_get_active_config", "device unconfigured");
        *config = -1;
        return 0;
      }

    if(!((signed int)tmp[4l] == 0))
    {
      usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "sysfs_get_active_config", "not null-terminated?");
      return LIBUSB_ERROR_IO;
    }

    else
      if((signed int)tmp[0l] == 0)
      {
        usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "sysfs_get_active_config", "no configuration value?");
        return LIBUSB_ERROR_IO;
      }

    num=strtol(tmp, &endptr, 10);
    if(endptr == tmp)
    {
      usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "sysfs_get_active_config", "error converting '%s' to integer", (const void *)tmp);
      return LIBUSB_ERROR_IO;
    }

    else
    {
      *config = (signed int)num;
      return 0;
    }
  }
}

// sysfs_scan_device
// file ../../libusb/os/linux_usbfs.c line 1226
static signed int sysfs_scan_device(struct libusb_context *ctx, const char *devname)
{
  unsigned char busnum;
  unsigned char devaddr;
  signed int ret;
  ret=linux_get_device_address(ctx, 0, &busnum, &devaddr, (const char *)(void *)0, devname);
  if(!(ret == LIBUSB_SUCCESS))
    return ret;

  else
  {
    signed int return_value_linux_enumerate_device_1;
    return_value_linux_enumerate_device_1=linux_enumerate_device(ctx, (unsigned char)((signed int)busnum & 0xff), (unsigned char)((signed int)devaddr & 0xff), devname);
    return return_value_linux_enumerate_device_1;
  }
}

// test_default_context_change
// file ../../tests/stress.c line 115
static enum anonymous_6 test_default_context_change(struct anonymous_5 *tctx)
{
  struct libusb_context *ctx = (struct libusb_context *)(void *)0;
  signed int r;
  signed int i = 0;
  for( ; !(i >= 100); i = i + 1)
  {
    r=libusb_init(&ctx);
    if(!(r == LIBUSB_SUCCESS))
    {
      libusb_testlib_logf(tctx, "Failed to init libusb: %d", r);
      return (enum anonymous_6)TEST_STATUS_FAILURE;
    }

    libusb_set_debug((struct libusb_context *)(void *)0, LIBUSB_LOG_LEVEL_DEBUG);
    libusb_set_debug(ctx, LIBUSB_LOG_LEVEL_DEBUG);
    r=libusb_init((struct libusb_context **)(void *)0);
    if(!(r == LIBUSB_SUCCESS))
    {
      libusb_testlib_logf(tctx, "Failed to init libusb: %d", r);
      return (enum anonymous_6)TEST_STATUS_FAILURE;
    }

    libusb_exit(ctx);
    libusb_exit((struct libusb_context *)(void *)0);
  }
  return (enum anonymous_6)TEST_STATUS_SUCCESS;
}

// test_get_device_list
// file ../../tests/stress.c line 49
static enum anonymous_6 test_get_device_list(struct anonymous_5 *tctx)
{
  struct libusb_context *ctx = (struct libusb_context *)(void *)0;
  signed int r;
  signed int i;
  r=libusb_init(&ctx);
  if(!(r == LIBUSB_SUCCESS))
  {
    libusb_testlib_logf(tctx, "Failed to init libusb: %d", r);
    return (enum anonymous_6)TEST_STATUS_FAILURE;
  }

  else
  {
    i = 0;
    for( ; !(i >= 1000); i = i + 1)
    {
      struct libusb_device **device_list;
      signed long int list_size;
      list_size=libusb_get_device_list(ctx, &device_list);
      if(device_list == ((struct libusb_device **)NULL) || !(list_size >= 0l))
      {
        libusb_testlib_logf(tctx, "Failed to get device list on iteration %d: %d (%p)", i, -list_size, device_list);
        return (enum anonymous_6)TEST_STATUS_FAILURE;
      }

      libusb_free_device_list(device_list, 1);
    }
    libusb_exit(ctx);
    return (enum anonymous_6)TEST_STATUS_SUCCESS;
  }
}

// test_init_and_exit
// file ../../tests/stress.c line 29
static enum anonymous_6 test_init_and_exit(struct anonymous_5 *tctx)
{
  struct libusb_context *ctx = (struct libusb_context *)(void *)0;
  signed int i = 0;
  for( ; !(i >= 10000); i = i + 1)
  {
    signed int r;
    r=libusb_init(&ctx);
    if(!(r == LIBUSB_SUCCESS))
    {
      libusb_testlib_logf(tctx, "Failed to init libusb on iteration %d: %d", i, r);
      return (enum anonymous_6)TEST_STATUS_FAILURE;
    }

    libusb_exit(ctx);
    ctx = (struct libusb_context *)(void *)0;
  }
  return (enum anonymous_6)TEST_STATUS_SUCCESS;
}

// test_many_device_lists
// file ../../tests/stress.c line 74
static enum anonymous_6 test_many_device_lists(struct anonymous_5 *tctx)
{
  struct libusb_context *ctx = (struct libusb_context *)(void *)0;
  struct libusb_device **device_lists[100l];
  signed int r;
  signed int i;
  memset((void *)device_lists, 0, sizeof(struct libusb_device **[100l]) /*800ul*/ );
  r=libusb_init(&ctx);
  _Bool tmp_if_expr_1;
  if(!(r == LIBUSB_SUCCESS))
  {
    libusb_testlib_logf(tctx, "Failed to init libusb: %d", r);
    return (enum anonymous_6)TEST_STATUS_FAILURE;
  }

  else
  {
    i = 0;
    for( ; !(i >= 100); i = i + 1)
    {
      signed long int list_size;
      list_size=libusb_get_device_list(ctx, &device_lists[(signed long int)i]);
      if(!(list_size >= 0l))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = device_lists[(signed long int)i] == (struct libusb_device **)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        libusb_testlib_logf(tctx, "Failed to get device list on iteration %d: %d (%p)", i, -list_size, device_lists[(signed long int)i]);
        return (enum anonymous_6)TEST_STATUS_FAILURE;
      }

    }
    i = 0;
    for( ; !(i >= 100); i = i + 1)
      if(!(device_lists[(signed long int)i] == ((struct libusb_device **)NULL)))
      {
        libusb_free_device_list(device_lists[(signed long int)i], 1);
        device_lists[(signed long int)i] = (struct libusb_device **)(void *)0;
      }

    libusb_exit(ctx);
    return (enum anonymous_6)TEST_STATUS_SUCCESS;
  }
}

// test_result_to_str
// file ../../tests/testlib.c line 56
static const char * test_result_to_str(enum anonymous_6 result)
{
  switch((signed int)result)
  {
    case TEST_STATUS_SUCCESS:
      return "Success";
    case TEST_STATUS_FAILURE:
      return "Failure";
    case TEST_STATUS_ERROR:
      return "Error";
    case TEST_STATUS_SKIP:
      return "Skip";
    default:
      return "Unknown";
  }
}

// udev_device_info
// file ../../libusb/os/linux_udev.c line 198
static signed int udev_device_info(struct libusb_context *ctx, signed int detached, struct udev_device *udev_dev, unsigned char *busnum, unsigned char *devaddr, const char **sys_name)
{
  const char *dev_node;
  dev_node=udev_device_get_devnode(udev_dev);
  if(dev_node == ((const char *)NULL))
    return LIBUSB_ERROR_OTHER;

  else
  {
    *sys_name=udev_device_get_sysname(udev_dev);
    if(*sys_name == ((const char *)NULL))
      return LIBUSB_ERROR_OTHER;

    else
    {
      signed int return_value_linux_get_device_address_1;
      return_value_linux_get_device_address_1=linux_get_device_address(ctx, detached, busnum, devaddr, dev_node, *sys_name);
      return return_value_linux_get_device_address_1;
    }
  }
}

// udev_hotplug_event
// file ../../libusb/os/linux_udev.c line 217
static void udev_hotplug_event(struct udev_device *udev_dev)
{
  const char *udev_action;
  const char *sys_name = (const char *)(void *)0;
  unsigned char busnum = (unsigned char)0;
  unsigned char devaddr = (unsigned char)0;
  signed int detached;
  signed int r;
  do
  {
    udev_action=udev_device_get_action(udev_dev);
    if(udev_action == ((const char *)NULL))
      break;

    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(udev_action, "remove", (unsigned long int)6);
    detached = (signed int)!(return_value_strncmp_1 != 0);
    r=udev_device_info((struct libusb_context *)(void *)0, detached, udev_dev, &busnum, &devaddr, &sys_name);
    if(!(r == LIBUSB_SUCCESS))
      break;

    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "udev_hotplug_event", "udev hotplug event. action: %s.", udev_action);
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(udev_action, "add", (unsigned long int)3);
    if(return_value_strncmp_2 == 0)
      linux_hotplug_enumerate(busnum, devaddr, sys_name);

    else
      if(!(detached == 0))
        linux_device_disconnected(busnum, devaddr, sys_name);

      else
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "udev_hotplug_event", "ignoring udev action %s", udev_action);
  }
  while((_Bool)0);
  udev_device_unref(udev_dev);
}

// usbfs_get_active_config
// file ../../libusb/os/linux_usbfs.c line 843
static signed int usbfs_get_active_config(struct libusb_device *dev, signed int fd)
{
  unsigned char active_config = (unsigned char)0;
  signed int r;
  struct usbfs_ctrltransfer ctrl = { .bmRequestType=(unsigned char)128, .bRequest=(unsigned char)8, .wValue=(unsigned short int)0,
    .wIndex=(unsigned short int)0, .wLength=(unsigned short int)1,
    .timeout=(unsigned int)1000, .data=(void *)&active_config };
  r=ioctl(fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(85 << 0 + 8) | (unsigned int)(0 << 0)) | sizeof(struct usbfs_ctrltransfer) /*24ul*/  << 0 + 8 + 8, &ctrl);
  if(!(r >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 19)
      return LIBUSB_ERROR_NO_DEVICE;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "usbfs_get_active_config", "get_configuration failed ret=%d errno=%d", r, *return_value___errno_location_2);
    return LIBUSB_ERROR_IO;
  }

  return (signed int)active_config;
}

// usbi_add_pollfd
// file ../../libusb/io.c line 2594
signed int usbi_add_pollfd(struct libusb_context *ctx, signed int fd, signed short int events)
{
  struct usbi_pollfd *ipollfd;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct usbi_pollfd) /*24ul*/ );
  ipollfd = (struct usbi_pollfd *)return_value_malloc_1;
  if(ipollfd == ((struct usbi_pollfd *)NULL))
    return LIBUSB_ERROR_NO_MEM;

  else
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_add_pollfd", "add fd %d events %d", fd, events);
    ipollfd->pollfd.fd = fd;
    ipollfd->pollfd.events = events;
    pthread_mutex_lock(&ctx->event_data_lock);
    list_add_tail(&ipollfd->list, &ctx->ipollfds);
    ctx->pollfds_cnt = ctx->pollfds_cnt + 1ul;
    usbi_fd_notification(ctx);
    pthread_mutex_unlock(&ctx->event_data_lock);
    if(!(ctx->fd_added_cb == ((void (*)(signed int, signed short int, void *))NULL)))
      ctx->fd_added_cb(fd, events, ctx->fd_cb_user_data);

    return 0;
  }
}

// usbi_alloc_device
// file ../../libusb/core.c line 659
struct libusb_device * usbi_alloc_device(struct libusb_context *ctx, unsigned long int session_id)
{
  unsigned long int priv_size = usbi_backend->device_priv_size;
  struct libusb_device *dev;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct libusb_device) /*128ul*/  + priv_size);
  dev = (struct libusb_device *)return_value_calloc_1;
  signed int r;
  if(dev == ((struct libusb_device *)NULL))
    return (struct libusb_device *)(void *)0;

  else
  {
    r=pthread_mutex_init(&dev->lock, (const union anonymous_4 *)(void *)0);
    if(!(r == 0))
    {
      free((void *)dev);
      return (struct libusb_device *)(void *)0;
    }

    else
    {
      dev->ctx = ctx;
      dev->refcnt = 1;
      dev->session_data = session_id;
      dev->speed = (enum libusb_speed)LIBUSB_SPEED_UNKNOWN;
      signed int return_value_libusb_has_capability_2;
      return_value_libusb_has_capability_2=libusb_has_capability((unsigned int)1);
      if(return_value_libusb_has_capability_2 == 0)
        usbi_connect_device(dev);

      return dev;
    }
  }
}

// usbi_clear_event
// file ../../libusb/core.c line 1184
signed int usbi_clear_event(struct libusb_context *ctx)
{
  unsigned char dummy;
  signed long int r;
  r=read(ctx->event_pipe[(signed long int)0], (void *)&dummy, sizeof(unsigned char) /*1ul*/ );
  if(!((unsigned long int)r == sizeof(unsigned char) /*1ul*/ ))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "usbi_clear_event", "internal signalling read failed");
    return LIBUSB_ERROR_IO;
  }

  else
    return 0;
}

// usbi_connect_device
// file ../../libusb/core.c line 687
void usbi_connect_device(struct libusb_device *dev)
{
  struct libusb_context *ctx = dev->ctx;
  dev->attached = 1;
  pthread_mutex_lock(&dev->ctx->usb_devs_lock);
  list_add(&dev->list, &dev->ctx->usb_devs);
  pthread_mutex_unlock(&dev->ctx->usb_devs_lock);
  signed int return_value_libusb_has_capability_1;
  return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
  if(!(return_value_libusb_has_capability_1 == 0))
  {
    if(!(dev->ctx->hotplug_msgs.next == ((struct list_head *)NULL)))
      usbi_hotplug_notification(ctx, dev, (enum anonymous_2)LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED);

  }

}

// usbi_device_cache_descriptor
// file ../../libusb/libusbi.h line 485
signed int usbi_device_cache_descriptor(struct libusb_device *dev)
{
  signed int r;
  signed int host_endian = 0;
  r=usbi_backend->get_device_descriptor(dev, (unsigned char *)&dev->device_descriptor, &host_endian);
  if(!(r >= 0))
    return r;

  else
  {
    if(host_endian == 0)
    {
      dev->device_descriptor.bcdUSB=libusb_cpu_to_le16(dev->device_descriptor.bcdUSB);
      dev->device_descriptor.idVendor=libusb_cpu_to_le16(dev->device_descriptor.idVendor);
      dev->device_descriptor.idProduct=libusb_cpu_to_le16(dev->device_descriptor.idProduct);
      dev->device_descriptor.bcdDevice=libusb_cpu_to_le16(dev->device_descriptor.bcdDevice);
    }

    return LIBUSB_SUCCESS;
  }
}

// usbi_disconnect_device
// file ../../libusb/core.c line 705
void usbi_disconnect_device(struct libusb_device *dev)
{
  struct libusb_context *ctx = dev->ctx;
  pthread_mutex_lock(&dev->lock);
  dev->attached = 0;
  pthread_mutex_unlock(&dev->lock);
  pthread_mutex_lock(&ctx->usb_devs_lock);
  list_del(&dev->list);
  pthread_mutex_unlock(&ctx->usb_devs_lock);
  signed int return_value_libusb_has_capability_1;
  return_value_libusb_has_capability_1=libusb_has_capability((unsigned int)1);
  if(!(return_value_libusb_has_capability_1 == 0))
  {
    if(!(dev->ctx->hotplug_msgs.next == ((struct list_head *)NULL)))
      usbi_hotplug_notification(ctx, dev, (enum anonymous_2)LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT);

  }

}

// usbi_fd_notification
// file ../../libusb/io.c line 2579
static void usbi_fd_notification(struct libusb_context *ctx)
{
  signed int pending_events;
  _Bool tmp_if_expr_1;
  if(!(ctx->device_close == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
  pending_events = (signed int)tmp_if_expr_3;
  ctx->pollfds_modified = (unsigned int)1;
  if(pending_events == 0)
    usbi_signal_event(ctx);

}

// usbi_get_config_index_by_value
// file ../../libusb/descriptor.c line 667
signed int usbi_get_config_index_by_value(struct libusb_device *dev, unsigned char bConfigurationValue, signed int *idx)
{
  unsigned char i;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_get_config_index_by_value", "value %d", bConfigurationValue);
  i = (unsigned char)0;
  if(!((signed int)i >= (signed int)dev->num_configurations))
  {
    unsigned char tmp[6l];
    signed int host_endian;
    signed int r;
    r=usbi_backend->get_config_descriptor(dev, i, tmp, sizeof(unsigned char [6l]) /*6ul*/ , &host_endian);
    if(!(r >= 0))
    {
      *idx = -1;
      return r;
    }

    if(tmp[5l] == bConfigurationValue)
    {
      *idx = (signed int)i;
      return 0;
    }

    i = i + 1;
  }

  *idx = -1;
  return 0;
}

// usbi_get_device_by_session_id
// file ../../libusb/core.c line 752
struct libusb_device * usbi_get_device_by_session_id(struct libusb_context *ctx, unsigned long int session_id)
{
  struct libusb_device *dev;
  struct libusb_device *ret = (struct libusb_device *)(void *)0;
  pthread_mutex_lock(&ctx->usb_devs_lock);
  dev = (struct libusb_device *)((unsigned long int)(&ctx->usb_devs)->next - (unsigned long int)80ul);
  for( ; !(&dev->list == &ctx->usb_devs); dev = (struct libusb_device *)((unsigned long int)dev->list.next - (unsigned long int)80ul))
    if(dev->session_data == session_id)
    {
      ret=libusb_ref_device(dev);
      break;
    }

  pthread_mutex_unlock(&ctx->usb_devs_lock);
  return ret;
}

// usbi_get_tid
// file ../../libusb/os/threads_posix.h line 48
signed int usbi_get_tid(void)
{
  signed int ret = -1;
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)186);
  ret = (signed int)return_value_syscall_1;
  return ret;
}

// usbi_handle_disconnect
// file ../../libusb/io.c line 2711
void usbi_handle_disconnect(struct libusb_device_handle *handle)
{
  struct usbi_transfer *cur;
  struct usbi_transfer *to_cancel;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_handle_disconnect", "device %d.%d", handle->dev->bus_number, handle->dev->device_address);
  to_cancel = (struct usbi_transfer *)(void *)0;
  pthread_mutex_lock(&handle->dev->ctx->flying_transfers_lock);
  cur = (struct usbi_transfer *)((unsigned long int)(&handle->dev->ctx->flying_transfers)->next - (unsigned long int)8ul);
  for( ; !(&cur->list == &handle->dev->ctx->flying_transfers); cur = (struct usbi_transfer *)((unsigned long int)cur->list.next - (unsigned long int)8ul))
    if(((struct libusb_transfer *)((unsigned char *)cur + (signed long int)sizeof(struct usbi_transfer) /*152l*/ ))->dev_handle == handle)
    {
      pthread_mutex_lock(&cur->flags_lock);
      if(!((32 & (signed int)cur->flags) == 0))
        to_cancel = cur;

      else
        cur->flags = cur->flags | (unsigned char)8;
      pthread_mutex_unlock(&cur->flags_lock);
      if(!(to_cancel == ((struct usbi_transfer *)NULL)))
        break;

    }

  pthread_mutex_unlock(&handle->dev->ctx->flying_transfers_lock);
  if(!(to_cancel == ((struct usbi_transfer *)NULL)))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_handle_disconnect", "cancelling transfer %p from disconnect", (struct libusb_transfer *)((unsigned char *)to_cancel + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ));
    pthread_mutex_lock(&to_cancel->lock);
    usbi_backend->clear_transfer_priv(to_cancel);
    pthread_mutex_unlock(&to_cancel->lock);
    usbi_handle_transfer_completion(to_cancel, (enum libusb_transfer_status)LIBUSB_TRANSFER_NO_DEVICE);
  }

}

// usbi_handle_transfer_cancellation
// file ../../libusb/io.c line 1665
signed int usbi_handle_transfer_cancellation(struct usbi_transfer *transfer)
{
  if(!((1 & (signed int)transfer->flags) == 0))
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_handle_transfer_cancellation", "detected timeout cancellation");
    signed int return_value_usbi_handle_transfer_completion_1;
    return_value_usbi_handle_transfer_completion_1=usbi_handle_transfer_completion(transfer, (enum libusb_transfer_status)LIBUSB_TRANSFER_TIMED_OUT);
    return return_value_usbi_handle_transfer_completion_1;
  }

  signed int return_value_usbi_handle_transfer_completion_2;
  return_value_usbi_handle_transfer_completion_2=usbi_handle_transfer_completion(transfer, (enum libusb_transfer_status)LIBUSB_TRANSFER_CANCELLED);
  return return_value_usbi_handle_transfer_completion_2;
}

// usbi_handle_transfer_completion
// file ../../libusb/io.c line 1616
signed int usbi_handle_transfer_completion(struct usbi_transfer *itransfer, enum libusb_transfer_status status)
{
  struct libusb_transfer *transfer = (struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ );
  struct libusb_device_handle *handle = transfer->dev_handle;
  unsigned char flags;
  signed int r;
  r=remove_from_flying_list(itransfer);
  signed int *return_value___errno_location_1;
  if(!(r >= 0))
  {
    return_value___errno_location_1=__errno_location();
    usbi_log(((struct libusb_transfer *)((unsigned char *)itransfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "usbi_handle_transfer_completion", "failed to set timer for next timeout, errno=%d", *return_value___errno_location_1);
  }

  pthread_mutex_lock(&itransfer->flags_lock);
  itransfer->flags = itransfer->flags & (unsigned char)~32;
  itransfer->flags = itransfer->flags | (unsigned char)64;
  pthread_mutex_unlock(&itransfer->flags_lock);
  if((signed int)status == LIBUSB_TRANSFER_COMPLETED)
  {
    if(!((1 & (signed int)transfer->flags) == 0))
    {
      signed int rqlen = transfer->length;
      if((signed int)transfer->type == LIBUSB_TRANSFER_TYPE_CONTROL)
        rqlen = rqlen - (signed int)sizeof(struct libusb_control_setup) /*8ul*/ ;

      if(!(rqlen == itransfer->transferred))
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_handle_transfer_completion", "interpreting short transfer as error");
        status = (enum libusb_transfer_status)LIBUSB_TRANSFER_ERROR;
      }

    }

  }

  flags = transfer->flags;
  transfer->status = status;
  transfer->actual_length = itransfer->transferred;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_handle_transfer_completion", "transfer %p has callback %p", transfer, transfer->callback);
  if(!(transfer->callback == ((void (*)(struct libusb_transfer *))NULL)))
    transfer->callback(transfer);

  if(!((4 & (signed int)flags) == 0))
    libusb_free_transfer(transfer);

  libusb_unref_device(handle->dev);
  return r;
}

// usbi_hotplug_deregister_all
// file ../../libusb/hotplug.h line 84
void usbi_hotplug_deregister_all(struct libusb_context *ctx)
{
  struct libusb_hotplug_callback *hotplug_cb;
  struct libusb_hotplug_callback *next;
  pthread_mutex_lock(&ctx->hotplug_cbs_lock);
  hotplug_cb = (struct libusb_hotplug_callback *)((unsigned long int)(&ctx->hotplug_cbs)->next - (unsigned long int)64ul);
  next = (struct libusb_hotplug_callback *)((unsigned long int)hotplug_cb->list.next - (unsigned long int)64ul);
  for( ; !(&hotplug_cb->list == &ctx->hotplug_cbs); next = (struct libusb_hotplug_callback *)((unsigned long int)next->list.next - (unsigned long int)64ul))
  {
    list_del_link2(&hotplug_cb->list);
    free((void *)hotplug_cb);
    hotplug_cb = next;
  }
  pthread_mutex_unlock(&ctx->hotplug_cbs_lock);
}

// usbi_hotplug_match
// file ../../libusb/hotplug.h line 85
void usbi_hotplug_match(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event)
{
  struct libusb_hotplug_callback *hotplug_cb;
  struct libusb_hotplug_callback *next;
  signed int ret;
  pthread_mutex_lock(&ctx->hotplug_cbs_lock);
  hotplug_cb = (struct libusb_hotplug_callback *)((unsigned long int)(&ctx->hotplug_cbs)->next - (unsigned long int)64ul);
  next = (struct libusb_hotplug_callback *)((unsigned long int)hotplug_cb->list.next - (unsigned long int)64ul);
  for( ; !(&hotplug_cb->list == &ctx->hotplug_cbs); next = (struct libusb_hotplug_callback *)((unsigned long int)next->list.next - (unsigned long int)64ul))
  {
    pthread_mutex_unlock(&ctx->hotplug_cbs_lock);
    ret=usbi_hotplug_match_cb(ctx, dev, event, hotplug_cb);
    pthread_mutex_lock(&ctx->hotplug_cbs_lock);
    if(!(ret == 0))
    {
      list_del_link2(&hotplug_cb->list);
      free((void *)hotplug_cb);
    }

    hotplug_cb = next;
  }
  pthread_mutex_unlock(&ctx->hotplug_cbs_lock);
}

// usbi_hotplug_match_cb
// file ../../libusb/hotplug.c line 150
static signed int usbi_hotplug_match_cb(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event, struct libusb_hotplug_callback *hotplug_cb)
{
  if(!(hotplug_cb->needs_free == 0))
    return 1;

  else
    if(((signed int)hotplug_cb->events & (signed int)event) == 0)
      return 0;

    else
      if(!(hotplug_cb->vendor_id == -1))
      {
        if(hotplug_cb->vendor_id == (signed int)dev->device_descriptor.idVendor)
          goto __CPROVER_DUMP_L3;

        return 0;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        if(!(hotplug_cb->product_id == -1))
        {
          if(hotplug_cb->product_id == (signed int)dev->device_descriptor.idProduct)
            goto __CPROVER_DUMP_L4;

          return 0;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          if(!(hotplug_cb->dev_class == -1))
          {
            if(hotplug_cb->dev_class == (signed int)dev->device_descriptor.bDeviceClass)
              goto __CPROVER_DUMP_L5;

            return 0;
          }

          else
          {

          __CPROVER_DUMP_L5:
            ;
            signed int return_value;
            return_value=hotplug_cb->cb(ctx, dev, event, hotplug_cb->user_data);
            return return_value;
          }
        }
      }
}

// usbi_hotplug_notification
// file ../../libusb/hotplug.h line 87
void usbi_hotplug_notification(struct libusb_context *ctx, struct libusb_device *dev, enum anonymous_2 event)
{
  signed int pending_events;
  struct libusb_hotplug_message *message;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct libusb_hotplug_message) /*32ul*/ );
  message = (struct libusb_hotplug_message *)return_value_calloc_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(message == ((struct libusb_hotplug_message *)NULL))
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "usbi_hotplug_notification", "error allocating hotplug message");

  else
  {
    message->event = event;
    message->device = dev;
    pthread_mutex_lock(&ctx->event_data_lock);
    if(!(ctx->device_close == 0u))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
    pending_events = (signed int)tmp_if_expr_4;
    list_add_tail_link1(&message->list, &ctx->hotplug_msgs);
    if(pending_events == 0)
      usbi_signal_event(ctx);

    pthread_mutex_unlock(&ctx->event_data_lock);
  }
}

// usbi_io_exit
// file ../../libusb/libusbi.h line 469
void usbi_io_exit(struct libusb_context *ctx)
{
  usbi_remove_pollfd(ctx, ctx->event_pipe[(signed long int)0]);
  close(ctx->event_pipe[(signed long int)0]);
  close(ctx->event_pipe[(signed long int)1]);
  if(ctx->timerfd >= 0)
  {
    usbi_remove_pollfd(ctx, ctx->timerfd);
    close(ctx->timerfd);
  }

  pthread_mutex_destroy(&ctx->flying_transfers_lock);
  pthread_mutex_destroy(&ctx->events_lock);
  pthread_mutex_destroy(&ctx->event_waiters_lock);
  pthread_cond_destroy(&ctx->event_waiters_cond);
  pthread_mutex_destroy(&ctx->event_data_lock);
  if(!(ctx->pollfds == ((struct pollfd *)NULL)))
    free((void *)ctx->pollfds);

}

// usbi_io_init
// file ../../libusb/libusbi.h line 468
signed int usbi_io_init(struct libusb_context *ctx)
{
  signed int r;
  pthread_mutex_init(&ctx->flying_transfers_lock, (const union anonymous_4 *)(void *)0);
  usbi_mutex_init_recursive(&ctx->events_lock, (union anonymous_4 *)(void *)0);
  pthread_mutex_init(&ctx->event_waiters_lock, (const union anonymous_4 *)(void *)0);
  pthread_cond_init(&ctx->event_waiters_cond, (const union anonymous_4 *)(void *)0);
  pthread_mutex_init(&ctx->event_data_lock, (const union anonymous_4 *)(void *)0);
  list_init_link1(&ctx->flying_transfers);
  list_init_link1(&ctx->ipollfds);
  list_init_link1(&ctx->hotplug_msgs);
  list_init_link1(&ctx->completed_transfers);
  r=usbi_pipe(ctx->event_pipe);
  signed int return_value;
  if(!(r >= 0))
    r = LIBUSB_ERROR_OTHER;

  else
  {
    r=usbi_add_pollfd(ctx, ctx->event_pipe[(signed long int)0], (signed short int)0x001);
    if(r >= 0)
    {
      return_value=usbi_backend->get_timerfd_clockid();
      ctx->timerfd=timerfd_create(return_value, 2048);
      if(ctx->timerfd >= 0)
      {
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_io_init", "using timerfd for timeouts");
        r=usbi_add_pollfd(ctx, ctx->timerfd, (signed short int)0x001);
      }

      else
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_io_init", "timerfd not available (code %d error %d)", ctx->timerfd, *return_value___errno_location_1);
        ctx->timerfd = -1;
      }
      return 0;

    err_close_timerfd:
      ;
      close(ctx->timerfd);
      usbi_remove_pollfd(ctx, ctx->event_pipe[(signed long int)0]);
    }


  err_close_pipe:
    ;
    close(ctx->event_pipe[(signed long int)0]);
    close(ctx->event_pipe[(signed long int)1]);
  }

err:
  ;
  pthread_mutex_destroy(&ctx->flying_transfers_lock);
  pthread_mutex_destroy(&ctx->events_lock);
  pthread_mutex_destroy(&ctx->event_waiters_lock);
  pthread_cond_destroy(&ctx->event_waiters_cond);
  pthread_mutex_destroy(&ctx->event_data_lock);
  return r;
}

// usbi_log
// file ../../libusb/core.c line 2374
void usbi_log(struct libusb_context *ctx, enum libusb_log_level level, const char *function, const char *format, ...)
{
  void **args = (void **)&format;
  usbi_log_v(ctx, level, function, format, args);
  args = ((void **)NULL);
}

// usbi_log_str
// file ../../libusb/core.c line 2237
static void usbi_log_str(struct libusb_context *ctx, enum libusb_log_level level, const char *str)
{
  fputs(str, stderr);
  do
    (void)ctx;
  while((_Bool)0);
  do
    (void)level;
  while((_Bool)0);
}

// usbi_log_v
// file ../../libusb/core.c line 2275
void usbi_log_v(struct libusb_context *ctx, enum libusb_log_level level, const char *function, const char *format, void **args)
{
  const char *prefix = "";
  char buf[1024l];
  struct timeval now;
  signed int global_debug;
  signed int header_len;
  signed int text_len;
  signed int ctx_level = 0;
  if(ctx == ((struct libusb_context *)NULL))
    ctx = usbi_default_context;

  if(!(ctx == ((struct libusb_context *)NULL)))
    ctx_level = ctx->debug;

  else
  {
    char *dbg;
    dbg=getenv("LIBUSB_DEBUG");
    if(!(dbg == ((char *)NULL)))
      ctx_level=atoi(dbg);

  }
  global_debug = (signed int)(ctx_level == LIBUSB_LOG_LEVEL_DEBUG);
  if(!(ctx_level == 0))
  {
    if(!((signed int)level == LIBUSB_LOG_LEVEL_WARNING) || ctx_level >= LIBUSB_LOG_LEVEL_WARNING)
    {
      if(!((signed int)level == LIBUSB_LOG_LEVEL_INFO) || ctx_level >= LIBUSB_LOG_LEVEL_INFO)
      {
        if(!((signed int)level == LIBUSB_LOG_LEVEL_DEBUG) || ctx_level >= LIBUSB_LOG_LEVEL_DEBUG)
        {
          gettimeofday(&now, (struct timezone *)(void *)0);
          static signed int has_debug_header_been_displayed = 0;
          if(has_debug_header_been_displayed == 0 && !(global_debug == 0))
          {
            has_debug_header_been_displayed = 1;
            usbi_log_str(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "[timestamp] [threadID] facility level [function call] <message>\n");
            usbi_log_str(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "--------------------------------------------------------------------------------\n");
          }

          if(!(now.tv_usec >= timestamp_origin.tv_usec))
          {
            now.tv_sec = now.tv_sec - 1l;
            now.tv_usec = now.tv_usec + (signed long int)1000000;
          }

          now.tv_sec = now.tv_sec - timestamp_origin.tv_sec;
          now.tv_usec = now.tv_usec - timestamp_origin.tv_usec;
          switch((signed int)level)
          {
            case LIBUSB_LOG_LEVEL_INFO:
            {
              prefix = "info";
              break;
            }
            case LIBUSB_LOG_LEVEL_WARNING:
            {
              prefix = "warning";
              break;
            }
            case LIBUSB_LOG_LEVEL_ERROR:
            {
              prefix = "error";
              break;
            }
            case LIBUSB_LOG_LEVEL_DEBUG:
            {
              prefix = "debug";
              break;
            }
            case LIBUSB_LOG_LEVEL_NONE:
              goto __CPROVER_DUMP_L23;
            default:
              prefix = "unknown";
          }
          if(!(global_debug == 0))
          {
            signed int return_value_usbi_get_tid_1;
            return_value_usbi_get_tid_1=usbi_get_tid();
            header_len=snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "[%2d.%06d] [%08x] libusb: %s [%s] ", (signed int)now.tv_sec, (signed int)now.tv_usec, return_value_usbi_get_tid_1, prefix, function);
          }

          else
            header_len=snprintf(buf, sizeof(char [1024l]) /*1024ul*/ , "libusb: %s [%s] ", prefix, function);
          if((unsigned long int)header_len >= sizeof(char [1024l]) /*1024ul*/  || !(header_len >= 0))
            header_len = 0;

          buf[(signed long int)header_len] = (char)0;
          text_len=vsnprintf(buf + (signed long int)header_len, sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)header_len, format, args);
          if((unsigned long int)(header_len + text_len) >= sizeof(char [1024l]) /*1024ul*/  || !(text_len >= 0))
            text_len = (signed int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)header_len);

          if(sizeof(char [2l]) /*2ul*/  + (unsigned long int)(header_len + text_len) >= sizeof(char [1024l]) /*1024ul*/ )
            text_len = text_len - (signed int)(((unsigned long int)(header_len + text_len) + sizeof(char [2l]) /*2ul*/ ) - sizeof(char [1024l]) /*1024ul*/ );

          strcpy(buf + (signed long int)header_len + (signed long int)text_len, "\n");
          usbi_log_str(ctx, level, buf);
        }

      }

    }

  }


__CPROVER_DUMP_L23:
  ;
}

// usbi_mutex_init_recursive
// file ../../libusb/os/threads_posix.h line 46
extern signed int usbi_mutex_init_recursive(union anonymous_3 *mutex, union anonymous_4 *attr)
{
  signed int err;
  union anonymous_4 stack_attr;
  if(attr == ((union anonymous_4 *)NULL))
  {
    attr = &stack_attr;
    err=pthread_mutexattr_init(&stack_attr);
    if(err == 0)
      goto __CPROVER_DUMP_L1;

    return err;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    err=pthread_mutexattr_settype(attr, 1);
    if(err == 0)
      err=pthread_mutex_init(mutex, attr);


  finish:
    ;
    if(attr == &stack_attr)
      pthread_mutexattr_destroy(&stack_attr);

    return err;
  }
}

// usbi_parse_descriptor
// file ../../libusb/descriptor.c line 45
signed int usbi_parse_descriptor(const unsigned char *source, const char *descriptor, void *dest, signed int host_endian)
{
  const unsigned char *sp = source;
  unsigned char *dp = (unsigned char *)dest;
  unsigned short int w;
  const char *cp;
  unsigned int d;
  cp = descriptor;
  unsigned char *tmp_post_1;
  const unsigned char *tmp_post_2;
  for( ; !(*cp == 0); cp = cp + 1l)
    switch((signed int)*cp)
    {
      case 98:
      {
        tmp_post_1 = dp;
        dp = dp + 1l;
        tmp_post_2 = sp;
        sp = sp + 1l;
        *tmp_post_1 = *tmp_post_2;
        break;
      }
      case 119:
      {
        dp = dp + (signed long int)((unsigned long int)dp & (unsigned long int)1);
        if(!(host_endian == 0))
          memcpy((void *)dp, (const void *)sp, (unsigned long int)2);

        else
        {
          w = (unsigned short int)((signed int)sp[(signed long int)1] << 8 | (signed int)sp[(signed long int)0]);
          *((unsigned short int *)dp) = w;
        }
        sp = sp + (signed long int)2;
        dp = dp + (signed long int)2;
        break;
      }
      case 100:
      {
        dp = dp + (signed long int)((unsigned long int)dp & (unsigned long int)1);
        if(!(host_endian == 0))
          memcpy((void *)dp, (const void *)sp, (unsigned long int)4);

        else
        {
          d = (unsigned int)((signed int)sp[(signed long int)3] << 24 | (signed int)sp[(signed long int)2] << 16 | (signed int)sp[(signed long int)1] << 8 | (signed int)sp[(signed long int)0]);
          *((unsigned int *)dp) = d;
        }
        sp = sp + (signed long int)4;
        dp = dp + (signed long int)4;
        break;
      }
      case 117:
      {
        memcpy((void *)dp, (const void *)sp, (unsigned long int)16);
        sp = sp + (signed long int)16;
        dp = dp + (signed long int)16;
      }
    }
  return (signed int)(sp - source);
}

// usbi_pipe
// file ../../libusb/os/poll_posix.h line 9
signed int usbi_pipe(signed int *pipefd)
{
  signed int ret;
  ret=pipe(pipefd);
  if(!(ret == 0))
    return ret;

  else
  {
    ret=fcntl(pipefd[(signed long int)1], 3);
    if(ret == -1)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_pipe", "Failed to get pipe fd flags: %d", *return_value___errno_location_1);
      goto err_close_pipe;
    }

    ret=fcntl(pipefd[(signed long int)1], 4, ret | 04000);
    if(!(ret == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_pipe", "Failed to set non-blocking on new pipe: %d", *return_value___errno_location_2);
      goto err_close_pipe;
    }

    return 0;

  err_close_pipe:
    ;
    close(pipefd[(signed long int)0]);
    close(pipefd[(signed long int)1]);
    return ret;
  }
}

// usbi_reallocf
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf(void *ptr, unsigned long int size)
{
  void *ret;
  ret=realloc(ptr, size);
  if(ret == NULL)
    free(ptr);

  return ret;
}

// usbi_reallocf_link1
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf_link1(void *ptr_link1, unsigned long int size_link1)
{
  void *ret_link1;
  ret_link1=realloc(ptr_link1, size_link1);
  if(ret_link1 == NULL)
    free(ptr_link1);

  return ret_link1;
}

// usbi_reallocf_link2
// file ../../libusb/libusbi.h line 142
static inline void * usbi_reallocf_link2(void *ptr_link2, unsigned long int size_link2)
{
  void *ret_link2;
  ret_link2=realloc(ptr_link2, size_link2);
  if(ret_link2 == NULL)
    free(ptr_link2);

  return ret_link2;
}

// usbi_remove_pollfd
// file ../../libusb/io.c line 2615
void usbi_remove_pollfd(struct libusb_context *ctx, signed int fd)
{
  struct usbi_pollfd *ipollfd;
  signed int found = 0;
  usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_remove_pollfd", "remove fd %d", fd);
  pthread_mutex_lock(&ctx->event_data_lock);
  ipollfd = (struct usbi_pollfd *)((unsigned long int)(&ctx->ipollfds)->next - (unsigned long int)8ul);
  for( ; !(&ipollfd->list == &ctx->ipollfds); ipollfd = (struct usbi_pollfd *)((unsigned long int)ipollfd->list.next - (unsigned long int)8ul))
    if(ipollfd->pollfd.fd == fd)
    {
      found = 1;
      break;
    }

  if(found == 0)
  {
    usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_remove_pollfd", "couldn't find fd %d to remove", fd);
    pthread_mutex_unlock(&ctx->event_data_lock);
  }

  else
  {
    list_del_link1(&ipollfd->list);
    ctx->pollfds_cnt = ctx->pollfds_cnt - 1ul;
    usbi_fd_notification(ctx);
    pthread_mutex_unlock(&ctx->event_data_lock);
    free((void *)ipollfd);
    if(!(ctx->fd_removed_cb == ((void (*)(signed int, void *))NULL)))
      ctx->fd_removed_cb(fd, ctx->fd_cb_user_data);

  }
}

// usbi_sanitize_device
// file ../../libusb/core.c line 729
signed int usbi_sanitize_device(struct libusb_device *dev)
{
  signed int r;
  unsigned char num_configurations;
  r=usbi_device_cache_descriptor(dev);
  if(!(r >= 0))
    return r;

  else
  {
    num_configurations = dev->device_descriptor.bNumConfigurations;
    if((signed int)num_configurations >= 9)
    {
      usbi_log(dev->ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_ERROR, "usbi_sanitize_device", "too many configurations");
      return LIBUSB_ERROR_IO;
    }

    else
      if((signed int)num_configurations == 0)
        usbi_log((struct libusb_context *)(void *)0, (enum libusb_log_level)LIBUSB_LOG_LEVEL_DEBUG, "usbi_sanitize_device", "zero configurations, maybe an unauthorized device");

    dev->num_configurations = num_configurations;
    return 0;
  }
}

// usbi_signal_event
// file ../../libusb/core.c line 1165
signed int usbi_signal_event(struct libusb_context *ctx)
{
  unsigned char dummy = (unsigned char)1;
  signed long int r;
  r=write(ctx->event_pipe[(signed long int)1], (const void *)&dummy, sizeof(unsigned char) /*1ul*/ );
  if(!((unsigned long int)r == sizeof(unsigned char) /*1ul*/ ))
  {
    usbi_log(ctx, (enum libusb_log_level)LIBUSB_LOG_LEVEL_WARNING, "usbi_signal_event", "internal signalling write failed");
    return LIBUSB_ERROR_IO;
  }

  else
    return 0;
}

// usbi_signal_transfer_completion
// file ../../libusb/io.c line 1680
void usbi_signal_transfer_completion(struct usbi_transfer *transfer)
{
  struct libusb_context *ctx = ((struct libusb_transfer *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/ ))->dev_handle->dev->ctx;
  signed int pending_events;
  pthread_mutex_lock(&ctx->event_data_lock);
  _Bool tmp_if_expr_1;
  if(!(ctx->device_close == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ctx->pollfds_modified != 0u ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !((&ctx->hotplug_msgs)->next == &ctx->hotplug_msgs) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = !((&ctx->completed_transfers)->next == &ctx->completed_transfers) ? (_Bool)1 : (_Bool)0;
  pending_events = (signed int)tmp_if_expr_3;
  list_add_tail(&transfer->completed_list, &ctx->completed_transfers);
  if(pending_events == 0)
    usbi_signal_event(ctx);

  pthread_mutex_unlock(&ctx->event_data_lock);
}

// usbi_transfer_get_os_priv
// file ../../libusb/libusbi.h line 450
static inline void * usbi_transfer_get_os_priv(struct usbi_transfer *transfer)
{
  return (void *)((unsigned char *)transfer + (signed long int)sizeof(struct usbi_transfer) /*152ul*/  + (signed long int)sizeof(struct libusb_transfer) /*64ul*/  + (signed long int)((unsigned long int)transfer->num_iso_packets * sizeof(struct libusb_iso_packet_descriptor) /*12ul*/ ));
}

