// #anon_enum$GPIO_PIN0=0$GPIO_PIN1=1$GPIO_PIN2=2$GPIO_PIN3=3$GPIO_PIN4=4$GPIO_PIN5=5$GPIO_PIN6=6$GPIO_PIN7=7$GPIO_PIN8=8$GPIO_PIN9=9$GPIO_PIN10=10$GPIO_PIN11=11$GPIO_PIN12=12$GPIO_PIN13=13$GPIO_PIN14=14$GPIO_PIN15=15$GPIO_PIN16=16$GPIO_PIN17=17$GPIO_PIN18=18$GPIO_PIN19=19$GPIO_PIN20=20$GPIO_PIN21=21$GPIO_PIN22=22$GPIO_PIN23=23$GPIO_PIN24=24$GPIO_PIN25=25$GPIO_PIN26=26$GPIO_PIN27=27$GPIO_PIN28=28$GPIO_PIN29=29$GPIO_PIN30=30$GPIO_PIN31=31
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy_commands.h line 98
enum anonymous$2 { GPIO_PIN0=0, GPIO_PIN1=1, GPIO_PIN2=2, GPIO_PIN3=3, GPIO_PIN4=4, GPIO_PIN5=5, GPIO_PIN6=6, GPIO_PIN7=7, GPIO_PIN8=8, GPIO_PIN9=9, GPIO_PIN10=10, GPIO_PIN11=11, GPIO_PIN12=12, GPIO_PIN13=13, GPIO_PIN14=14, GPIO_PIN15=15, GPIO_PIN16=16, GPIO_PIN17=17, GPIO_PIN18=18, GPIO_PIN19=19, GPIO_PIN20=20, GPIO_PIN21=21, GPIO_PIN22=22, GPIO_PIN23=23, GPIO_PIN24=24, GPIO_PIN25=25, GPIO_PIN26=26, GPIO_PIN27=27, GPIO_PIN28=28, GPIO_PIN29=29, GPIO_PIN30=30, GPIO_PIN31=31 };

// #anon_enum$GPIO_PORT0=0$GPIO_PORT1=1$GPIO_PORT2=2$GPIO_PORT3=3$GPIO_PORT4=4$GPIO_PORT5=5$GPIO_PORT6=6$GPIO_PORT7=7
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy_commands.h line 86
enum anonymous$1 { GPIO_PORT0=0, GPIO_PORT1=1, GPIO_PORT2=2, GPIO_PORT3=3, GPIO_PORT4=4, GPIO_PORT5=5, GPIO_PORT6=6, GPIO_PORT7=7 };

// #anon_enum$RECEIVER_MODE_OFF=0$RECEIVER_MODE_RX=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy_commands.h line 32
enum anonymous$9 { RECEIVER_MODE_OFF=0, RECEIVER_MODE_RX=1 };

// tag-#anon#ST[*{SYM#tag-airspy_device#}$SYM#tag-airspy_device#$'device'||*{V}$V$'ctx'||*{V}$V$'samples'||S32'sample_count'||ENtag-airspy_sample_type#{U32}$U32$'sample_type'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 95
struct anonymous;

// tag-#anon#ST[ARR2{U32}$U32$'part_id'||ARR4{U32}$U32$'serial_no'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 103
struct anonymous$6;

// tag-#anon#ST[F32'avg'||F32'hbc'||S32'len'||S32'fir_index'||S32'delay_index'||U32'$pad0'||*{F32}$F32$'fir_kernel'||*{F32}$F32$'fir_queue'||*{F32}$F32$'delay_line'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 31
struct anonymous$8;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$3;

// tag-#anon#ST[S32'len'||S32'fir_index'||S32'delay_index'||S16'old_x'||S16'old_y'||S32'old_e'||U32'$pad0'||*{S32}$S32$'fir_kernel'||*{S32}$S32$'fir_queue'||*{S16}$S16$'delay_line'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 28
struct anonymous$0;

// tag-#anon#ST[U32'freq_hz'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 64
struct anonymous$7;

// tag-#anon#ST[U32'major_version'||U32'minor_version'||U32'revision'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 108
struct anonymous$11;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$10;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$5;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-airspy_board_id
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 77
enum airspy_board_id { AIRSPY_BOARD_ID_PROTO_AIRSPY=0, AIRSPY_BOARD_ID_INVALID=255 };

// tag-airspy_device
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 93
struct airspy_device;

// tag-airspy_error
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 62
enum airspy_error { AIRSPY_SUCCESS=0, AIRSPY_TRUE=1, AIRSPY_ERROR_INVALID_PARAM=-2, AIRSPY_ERROR_NOT_FOUND=-5, AIRSPY_ERROR_BUSY=-6, AIRSPY_ERROR_NO_MEM=-11, AIRSPY_ERROR_LIBUSB=-1000, AIRSPY_ERROR_THREAD=-1001, AIRSPY_ERROR_STREAMING_THREAD_ERR=-1002, AIRSPY_ERROR_STREAMING_STOPPED=-1003, AIRSPY_ERROR_OTHER=-9999 };

// tag-airspy_sample_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 83
enum airspy_sample_type { AIRSPY_SAMPLE_FLOAT32_IQ=0, AIRSPY_SAMPLE_FLOAT32_REAL=1, AIRSPY_SAMPLE_INT16_IQ=2, AIRSPY_SAMPLE_INT16_REAL=3, AIRSPY_SAMPLE_UINT16_REAL=4, AIRSPY_SAMPLE_END=5 };

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

// tag-libusb_iso_packet_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1177
struct libusb_iso_packet_descriptor;

// tag-libusb_transfer
// file /usr/include/libusb-1.0/libusb.h line 1188
struct libusb_transfer;

// tag-libusb_transfer_status
// file /usr/include/libusb-1.0/libusb.h line 1106
enum libusb_transfer_status { LIBUSB_TRANSFER_COMPLETED=0, LIBUSB_TRANSFER_ERROR=1, LIBUSB_TRANSFER_TIMED_OUT=2, LIBUSB_TRANSFER_CANCELLED=3, LIBUSB_TRANSFER_STALL=4, LIBUSB_TRANSFER_NO_DEVICE=5, LIBUSB_TRANSFER_OVERFLOW=6 };

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#ifndef NULL
#define NULL ((void*)0)
#endif

// airspy_board_id_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1707
extern const char * airspy_board_id_name(enum airspy_board_id board_id);
// airspy_board_id_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1245
extern signed int airspy_board_id_read(struct airspy_device *device, unsigned char *value);
// airspy_board_partid_serialno_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1300
extern signed int airspy_board_partid_serialno_read(struct airspy_device *device, struct anonymous$6 *read_partid_serialno);
// airspy_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 840
extern signed int airspy_close(struct airspy_device *device);
// airspy_error_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1665
extern const char * airspy_error_name(enum airspy_error errcode);
// airspy_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 819
extern signed int airspy_exit(void);
// airspy_get_samplerates
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 864
extern signed int airspy_get_samplerates(struct airspy_device *device, unsigned int *buffer, const unsigned int len);
// airspy_gpio_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1070
extern signed int airspy_gpio_read(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char *value);
// airspy_gpio_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1096
extern signed int airspy_gpio_write(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char value);
// airspy_gpiodir_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1123
extern signed int airspy_gpiodir_read(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char *value);
// airspy_gpiodir_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1149
extern signed int airspy_gpiodir_write(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char value);
// airspy_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 813
extern signed int airspy_init(void);
// airspy_is_streaming
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1660
extern signed int airspy_is_streaming(struct airspy_device *device);
// airspy_lib_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 116
extern void airspy_lib_version(struct anonymous$11 *lib_version);
// airspy_libusb_transfer_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 420
static void airspy_libusb_transfer_callback(struct libusb_transfer *usb_transfer);
// airspy_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 832
extern signed int airspy_open(struct airspy_device **device);
// airspy_open_device
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 567
static void airspy_open_device(struct airspy_device *device, signed int *ret, unsigned short int vid, unsigned short int pid, unsigned long int serial_number_val);
// airspy_open_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 542
static void airspy_open_exit(struct airspy_device *device);
// airspy_open_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 737
static signed int airspy_open_init(struct airspy_device **device, unsigned long int serial_number);
// airspy_open_sn
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 824
extern signed int airspy_open_sn(struct airspy_device **device, unsigned long int serial_number);
// airspy_r820t_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1026
extern signed int airspy_r820t_read(struct airspy_device *device, unsigned char register_number, unsigned char *value);
// airspy_r820t_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1048
extern signed int airspy_r820t_write(struct airspy_device *device, unsigned char register_number, unsigned char value);
// airspy_set_conversion_filter_float32
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1366
extern signed int airspy_set_conversion_filter_float32(struct airspy_device *device, const float *kernel, const unsigned int len);
// airspy_set_conversion_filter_int16
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1379
extern signed int airspy_set_conversion_filter_int16(struct airspy_device *device, const signed short int *kernel, const unsigned int len);
// airspy_set_freq
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1338
extern signed int airspy_set_freq(struct airspy_device *device, const unsigned int freq_hz);
// airspy_set_linearity_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1536
extern signed int airspy_set_linearity_gain(struct airspy_device *device, unsigned char value);
// airspy_set_lna_agc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1482
extern signed int airspy_set_lna_agc(struct airspy_device *device, unsigned char value);
// airspy_set_lna_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1392
extern signed int airspy_set_lna_gain(struct airspy_device *device, unsigned char value);
// airspy_set_mixer_agc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1509
extern signed int airspy_set_mixer_agc(struct airspy_device *device, unsigned char value);
// airspy_set_mixer_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1422
extern signed int airspy_set_mixer_gain(struct airspy_device *device, unsigned char value);
// airspy_set_packing
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1615
extern signed int airspy_set_packing(struct airspy_device *device, unsigned char value);
// airspy_set_receiver_mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 926
signed int airspy_set_receiver_mode(struct airspy_device *device, enum anonymous$9 value);
// airspy_set_rf_bias
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1610
extern signed int airspy_set_rf_bias(struct airspy_device *device, unsigned char value);
// airspy_set_sample_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1332
extern signed int airspy_set_sample_type(struct airspy_device *device, enum airspy_sample_type sample_type);
// airspy_set_samplerate
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 897
extern signed int airspy_set_samplerate(struct airspy_device *device, unsigned int samplerate);
// airspy_set_sensitivity_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1573
extern signed int airspy_set_sensitivity_gain(struct airspy_device *device, unsigned char value);
// airspy_set_vga_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1452
extern signed int airspy_set_vga_gain(struct airspy_device *device, unsigned char value);
// airspy_si5351c_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 979
extern signed int airspy_si5351c_read(struct airspy_device *device, unsigned char register_number, unsigned char *value);
// airspy_si5351c_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1004
extern signed int airspy_si5351c_write(struct airspy_device *device, unsigned char register_number, unsigned char value);
// airspy_spiflash_erase
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1175
extern signed int airspy_spiflash_erase(struct airspy_device *device);
// airspy_spiflash_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1223
extern signed int airspy_spiflash_read(struct airspy_device *device, const unsigned int address, const unsigned short int length, unsigned char *data);
// airspy_spiflash_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1196
extern signed int airspy_spiflash_write(struct airspy_device *device, const unsigned int address, const unsigned short int length, unsigned char * const data);
// airspy_start_rx
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 948
extern signed int airspy_start_rx(struct airspy_device *device, signed int (*callback)(struct anonymous *), void *ctx);
// airspy_start_rx::callback$object
//
signed int callback$object(struct anonymous *);
// airspy_stop_rx
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 966
extern signed int airspy_stop_rx(struct airspy_device *device);
// airspy_version_string_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1266
extern signed int airspy_version_string_read(struct airspy_device *device, char *version, unsigned char length);
// allocate_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 181
static signed int allocate_transfers(struct airspy_device * const device);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cancel_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 118
static signed int cancel_transfers(struct airspy_device *device);
// conversion_threadproc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 321
static void * conversion_threadproc(void *arg);
// convert_samples_float
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 295
static void convert_samples_float(unsigned short int *src, float *dest, signed int count);
// convert_samples_int16
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 286
static void convert_samples_int16(unsigned short int *src, signed short int *dest, signed int count);
// create_io_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 498
static signed int create_io_threads(struct airspy_device *device, signed int (*callback)(struct anonymous *));
// create_io_threads::callback$object
//
signed int callback$object(struct anonymous *);
// delay_interleaved
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 269
static void delay_interleaved(struct anonymous$8 *cnv, float *samples, signed int len);
// delay_interleaved$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 128
static void delay_interleaved$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1);
// fir_interleaved
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 175
static void fir_interleaved(struct anonymous$8 *cnv, float *samples, signed int len);
// fir_interleaved$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 90
static void fir_interleaved$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 137
static signed int free_transfers(struct airspy_device *device);
// iqconverter_float_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 42
struct anonymous$8 * iqconverter_float_create(const float *hb_kernel, signed int len);
// iqconverter_float_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 43
void iqconverter_float_free(struct anonymous$8 *cnv);
// iqconverter_float_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 45
void iqconverter_float_process(struct anonymous$8 *cnv, float *samples, signed int len);
// iqconverter_float_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 44
void iqconverter_float_reset(struct anonymous$8 *cnv);
// iqconverter_int16_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 40
struct anonymous$0 * iqconverter_int16_create(const signed short int *hb_kernel, signed int len);
// iqconverter_int16_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 41
void iqconverter_int16_free(struct anonymous$0 *cnv);
// iqconverter_int16_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 43
void iqconverter_int16_process(struct anonymous$0 *cnv, signed short int *samples, signed int len);
// iqconverter_int16_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 42
void iqconverter_int16_reset(struct anonymous$0 *cnv);
// kill_io_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 479
static signed int kill_io_threads(struct airspy_device *device);
// libusb_alloc_transfer
// file /usr/include/libusb-1.0/libusb.h line 1477
struct libusb_transfer * libusb_alloc_transfer(signed int);
// libusb_cancel_transfer
// file /usr/include/libusb-1.0/libusb.h line 1479
signed int libusb_cancel_transfer(struct libusb_transfer *);
// libusb_claim_interface
// file /usr/include/libusb-1.0/libusb.h line 1376
signed int libusb_claim_interface(struct libusb_device_handle *, signed int);
// libusb_clear_halt
// file /usr/include/libusb-1.0/libusb.h line 1386
signed int libusb_clear_halt(struct libusb_device_handle *, unsigned char);
// libusb_close
// file /usr/include/libusb-1.0/libusb.h line 1371
void libusb_close(struct libusb_device_handle *);
// libusb_control_transfer
// file /usr/include/libusb-1.0/libusb.h line 1740
signed int libusb_control_transfer(struct libusb_device_handle *, unsigned char, unsigned char, unsigned short int, unsigned short int, unsigned char *, unsigned short int, unsigned int);
// libusb_detach_kernel_driver
// file /usr/include/libusb-1.0/libusb.h line 1397
signed int libusb_detach_kernel_driver(struct libusb_device_handle *, signed int);
// libusb_exit
// file /usr/include/libusb-1.0/libusb.h line 1304
void libusb_exit(struct libusb_context *);
// libusb_fill_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout);
// libusb_fill_bulk_transfer::callback$object
//
void callback$object(struct libusb_transfer *);
// libusb_free_device_list
// file /usr/include/libusb-1.0/libusb.h line 1314
void libusb_free_device_list(struct libusb_device **, signed int);
// libusb_free_transfer
// file /usr/include/libusb-1.0/libusb.h line 1480
void libusb_free_transfer(struct libusb_transfer *);
// libusb_get_device_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1321
signed int libusb_get_device_descriptor(struct libusb_device *, struct libusb_device_descriptor *);
// libusb_get_device_list
// file /usr/include/libusb-1.0/libusb.h line 1312
signed long int libusb_get_device_list(struct libusb_context *, struct libusb_device ***);
// libusb_get_string_descriptor_ascii
// file /usr/include/libusb-1.0/libusb.h line 1794
signed int libusb_get_string_descriptor_ascii(struct libusb_device_handle *, unsigned char, unsigned char *, signed int);
// libusb_handle_events_timeout_completed
// file /usr/include/libusb-1.0/libusb.h line 1810
signed int libusb_handle_events_timeout_completed(struct libusb_context *, struct timeval *, signed int *);
// libusb_init
// file /usr/include/libusb-1.0/libusb.h line 1303
signed int libusb_init(struct libusb_context **);
// libusb_kernel_driver_active
// file /usr/include/libusb-1.0/libusb.h line 1395
signed int libusb_kernel_driver_active(struct libusb_device_handle *, signed int);
// libusb_open
// file /usr/include/libusb-1.0/libusb.h line 1370
signed int libusb_open(struct libusb_device *, struct libusb_device_handle **);
// libusb_release_interface
// file /usr/include/libusb-1.0/libusb.h line 1378
signed int libusb_release_interface(struct libusb_device_handle *, signed int);
// libusb_set_configuration
// file /usr/include/libusb-1.0/libusb.h line 1374
signed int libusb_set_configuration(struct libusb_device_handle *, signed int);
// libusb_submit_transfer
// file /usr/include/libusb-1.0/libusb.h line 1478
signed int libusb_submit_transfer(struct libusb_transfer *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memalign
// file /usr/include/malloc.h line 59
extern void * memalign(unsigned long int, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// prepare_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 262
static signed int prepare_transfers(struct airspy_device *device, const unsigned char endpoint_address, void (*callback)(struct libusb_transfer *));
// prepare_transfers::callback$object
//
void callback$object(struct libusb_transfer *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$4 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$4 *, const union anonymous$10 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$4 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$4 *, union anonymous$5 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$5 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$5 *, const union anonymous$10 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$5 *);
// remove_dc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 296
static void remove_dc(struct anonymous$8 *cnv, float *samples, signed int len);
// remove_dc$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 153
static void remove_dc$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// transfer_threadproc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 454
static void * transfer_threadproc(void *arg);
// translate_fs_4
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 312
static void translate_fs_4(struct anonymous$8 *cnv, float *samples, signed int len);
// translate_fs_4$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 181
static void translate_fs_4$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1);
// unpack_samples
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 304
static inline void unpack_samples(unsigned int *input, unsigned short int *output, signed int length);
// upper_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 554
static void upper_string(unsigned char *string, unsigned long int len);

struct anonymous
{
  // device
  struct airspy_device *device;
  // ctx
  void *ctx;
  // samples
  void *samples;
  // sample_count
  signed int sample_count;
  // sample_type
  enum airspy_sample_type sample_type;
};

struct anonymous$6
{
  // part_id
  unsigned int part_id[2l];
  // serial_no
  unsigned int serial_no[4l];
};

struct anonymous$8
{
  // avg
  float avg;
  // hbc
  float hbc;
  // len
  signed int len;
  // fir_index
  signed int fir_index;
  // delay_index
  signed int delay_index;
  // fir_kernel
  float *fir_kernel;
  // fir_queue
  float *fir_queue;
  // delay_line
  float *delay_line;
};

struct anonymous$3
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

struct anonymous$0
{
  // len
  signed int len;
  // fir_index
  signed int fir_index;
  // delay_index
  signed int delay_index;
  // old_x
  signed short int old_x;
  // old_y
  signed short int old_y;
  // old_e
  signed int old_e;
  // fir_kernel
  signed int *fir_kernel;
  // fir_queue
  signed int *fir_queue;
  // delay_line
  signed short int *delay_line;
};

struct anonymous$7
{
  // freq_hz
  unsigned int freq_hz;
};

struct anonymous$11
{
  // major_version
  unsigned int major_version;
  // minor_version
  unsigned int minor_version;
  // revision
  unsigned int revision;
};

union anonymous$10
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$4
{
  // __data
  struct anonymous$3 __data;
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

union anonymous$5
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct airspy_device
{
  // usb_context
  struct libusb_context *usb_context;
  // usb_device
  struct libusb_device_handle *usb_device;
  // transfers
  struct libusb_transfer **transfers;
  // callback
  signed int (*callback)(struct anonymous *);
  // streaming
  volatile signed int streaming;
  // stop_requested
  volatile signed int stop_requested;
  // transfer_thread
  unsigned long int transfer_thread;
  // conversion_thread
  unsigned long int conversion_thread;
  // conversion_cv
  union anonymous$4 conversion_cv;
  // conversion_mp
  union anonymous$5 conversion_mp;
  // transfer_count
  unsigned int transfer_count;
  // buffer_size
  unsigned int buffer_size;
  // total_dropped_samples
  unsigned int total_dropped_samples;
  // received_samples_queue
  unsigned short int *received_samples_queue[8l];
  // received_samples_queue_head
  volatile signed int received_samples_queue_head;
  // received_samples_queue_tail
  volatile signed int received_samples_queue_tail;
  // converter_is_waiting
  volatile signed int converter_is_waiting;
  // output_buffer
  void *output_buffer;
  // unpacked_samples
  unsigned short int *unpacked_samples;
  // packing_enabled
  signed int packing_enabled;
  // cnv_f
  struct anonymous$8 *cnv_f;
  // cnv_i
  struct anonymous$0 *cnv_i;
  // ctx
  void *ctx;
  // sample_type
  enum airspy_sample_type sample_type;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// HB_KERNEL_FLOAT
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/filters.h line 30
const float HB_KERNEL_FLOAT[47l] = { (const float)-0.000998606272947510, (const float)0.000000000000000000, (const float)0.001695637278417295, (const float)0.000000000000000000, (const float)-0.003054430179754289, (const float)0.000000000000000000, (const float)0.005055504379767936, (const float)0.000000000000000000, (const float)-0.007901319195893647, (const float)0.000000000000000000, (const float)0.011873357051047719, (const float)0.000000000000000000, (const float)-0.017411159379930066, (const float)0.000000000000000000, (const float)0.025304817427568772, (const float)0.000000000000000000, (const float)-0.037225225204559217, (const float)0.000000000000000000, (const float)0.057533286997004301, (const float)0.000000000000000000, (const float)-0.102327462004259350, (const float)0.000000000000000000, (const float)0.317034472508947400, (const float)0.500000000000000000, (const float)0.317034472508947400, (const float)0.000000000000000000, (const float)-0.102327462004259350, (const float)0.000000000000000000, (const float)0.057533286997004301, (const float)0.000000000000000000, (const float)-0.037225225204559217, (const float)0.000000000000000000, (const float)0.025304817427568772, (const float)0.000000000000000000, (const float)-0.017411159379930066, (const float)0.000000000000000000, (const float)0.011873357051047719, (const float)0.000000000000000000, (const float)-0.007901319195893647, (const float)0.000000000000000000, (const float)0.005055504379767936, (const float)0.000000000000000000, (const float)-0.003054430179754289, (const float)0.000000000000000000, (const float)0.001695637278417295, (const float)0.000000000000000000, (const float)-0.000998606272947510 };
// HB_KERNEL_INT16
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/filters.h line 83
const signed short int HB_KERNEL_INT16[47l] = { (const signed short int)-33, (const signed short int)0, (const signed short int)56, (const signed short int)0, (const signed short int)-100, (const signed short int)0, (const signed short int)166, (const signed short int)0, (const signed short int)-259, (const signed short int)0, (const signed short int)389, (const signed short int)0, (const signed short int)-571, (const signed short int)0, (const signed short int)829, (const signed short int)0, (const signed short int)-1220, (const signed short int)0, (const signed short int)1885, (const signed short int)0, (const signed short int)-3353, (const signed short int)0, (const signed short int)10389, (const signed short int)16384, (const signed short int)10389, (const signed short int)0, (const signed short int)-3353, (const signed short int)0, (const signed short int)1885, (const signed short int)0, (const signed short int)-1220, (const signed short int)0, (const signed short int)829, (const signed short int)0, (const signed short int)-571, (const signed short int)0, (const signed short int)389, (const signed short int)0, (const signed short int)-259, (const signed short int)0, (const signed short int)166, (const signed short int)0, (const signed short int)-100, (const signed short int)0, (const signed short int)56, (const signed short int)0, (const signed short int)-33 };
// airspy_linearity_lna_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 113
unsigned char airspy_linearity_lna_gains[22l] = { (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)13, (unsigned char)12, (unsigned char)10, (unsigned char)9, (unsigned char)9, (unsigned char)8, (unsigned char)9, (unsigned char)8, (unsigned char)6, (unsigned char)5, (unsigned char)3, (unsigned char)1, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 };
// airspy_linearity_mixer_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 112
unsigned char airspy_linearity_mixer_gains[22l] = { (unsigned char)12, (unsigned char)12, (unsigned char)11, (unsigned char)9, (unsigned char)8, (unsigned char)7, (unsigned char)6, (unsigned char)6, (unsigned char)5, (unsigned char)0, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)0, (unsigned char)2, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)0, (unsigned char)0 };
// airspy_linearity_vga_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 111
unsigned char airspy_linearity_vga_gains[22l] = { (unsigned char)13, (unsigned char)12, (unsigned char)11, (unsigned char)11, (unsigned char)11, (unsigned char)11, (unsigned char)11, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)10, (unsigned char)9, (unsigned char)8, (unsigned char)7, (unsigned char)6, (unsigned char)5, (unsigned char)4 };
// airspy_sensitivity_lna_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 116
unsigned char airspy_sensitivity_lna_gains[22l] = { (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)14, (unsigned char)13, (unsigned char)12, (unsigned char)12, (unsigned char)9, (unsigned char)9, (unsigned char)8, (unsigned char)7, (unsigned char)6, (unsigned char)5, (unsigned char)3, (unsigned char)2, (unsigned char)1, (unsigned char)0 };
// airspy_sensitivity_mixer_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 115
unsigned char airspy_sensitivity_mixer_gains[22l] = { (unsigned char)12, (unsigned char)12, (unsigned char)12, (unsigned char)12, (unsigned char)11, (unsigned char)10, (unsigned char)10, (unsigned char)9, (unsigned char)9, (unsigned char)8, (unsigned char)7, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)3, (unsigned char)2, (unsigned char)2, (unsigned char)1, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 };
// airspy_sensitivity_vga_gains
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 114
unsigned char airspy_sensitivity_vga_gains[22l] = { (unsigned char)13, (unsigned char)12, (unsigned char)11, (unsigned char)10, (unsigned char)9, (unsigned char)8, (unsigned char)7, (unsigned char)6, (unsigned char)5, (unsigned char)5, (unsigned char)5, (unsigned char)5, (unsigned char)5, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4, (unsigned char)4 };
// airspy_usb_pid
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 97
static const unsigned short int airspy_usb_pid = (const unsigned short int)0x60a1;
// airspy_usb_vid
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 96
static const unsigned short int airspy_usb_vid = (const unsigned short int)0x1d50;
// str_prefix_serial_airspy
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 104
static const char str_prefix_serial_airspy[10l] = { (const char)65, (const char)73, (const char)82, (const char)83, (const char)80, (const char)89, (const char)32, (const char)83, (const char)78, (const char)58 };

// airspy_board_id_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1707
extern const char * airspy_board_id_name(enum airspy_board_id board_id)
{
  switch((signed int)board_id)
  {
    case AIRSPY_BOARD_ID_PROTO_AIRSPY:
      return "AIRSPY";
    case AIRSPY_BOARD_ID_INVALID:
      return "Invalid Board ID";
    default:
      return "Unknown Board ID";
  }
}

// airspy_board_id_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1245
extern signed int airspy_board_id_read(struct airspy_device *device, unsigned char *value)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)9, (unsigned short int)0, (unsigned short int)0, value, (unsigned short int)1, (unsigned int)0);
  if(!(result >= 1))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_board_partid_serialno_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1300
extern signed int airspy_board_partid_serialno_read(struct airspy_device *device, struct anonymous$6 *read_partid_serialno)
{
  unsigned char length;
  signed int result;
  length = (unsigned char)sizeof(struct anonymous$6) /*24ul*/ ;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)11, (unsigned short int)0, (unsigned short int)0, (unsigned char *)read_partid_serialno, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
  {
    read_partid_serialno->part_id[(signed long int)0] = read_partid_serialno->part_id[(signed long int)0];
    read_partid_serialno->part_id[(signed long int)1] = read_partid_serialno->part_id[(signed long int)1];
    read_partid_serialno->serial_no[(signed long int)0] = read_partid_serialno->serial_no[(signed long int)0];
    read_partid_serialno->serial_no[(signed long int)1] = read_partid_serialno->serial_no[(signed long int)1];
    read_partid_serialno->serial_no[(signed long int)2] = read_partid_serialno->serial_no[(signed long int)2];
    read_partid_serialno->serial_no[(signed long int)3] = read_partid_serialno->serial_no[(signed long int)3];
    return AIRSPY_SUCCESS;
  }
}

// airspy_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 840
extern signed int airspy_close(struct airspy_device *device)
{
  signed int result = AIRSPY_SUCCESS;
  if(!(device == ((struct airspy_device *)NULL)))
  {
    result=airspy_stop_rx(device);
    iqconverter_float_free(device->cnv_f);
    iqconverter_int16_free(device->cnv_i);
    pthread_cond_destroy(&device->conversion_cv);
    pthread_mutex_destroy(&device->conversion_mp);
    airspy_open_exit(device);
    free_transfers(device);
    free((void *)device);
  }

  return result;
}

// airspy_error_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1665
extern const char * airspy_error_name(enum airspy_error errcode)
{
  switch((signed int)errcode)
  {
    case AIRSPY_SUCCESS:
      return "AIRSPY_SUCCESS";
    case AIRSPY_TRUE:
      return "AIRSPY_TRUE";
    case AIRSPY_ERROR_INVALID_PARAM:
      return "AIRSPY_ERROR_INVALID_PARAM";
    case AIRSPY_ERROR_NOT_FOUND:
      return "AIRSPY_ERROR_NOT_FOUND";
    case AIRSPY_ERROR_BUSY:
      return "AIRSPY_ERROR_BUSY";
    case AIRSPY_ERROR_NO_MEM:
      return "AIRSPY_ERROR_NO_MEM";
    case AIRSPY_ERROR_LIBUSB:
      return "AIRSPY_ERROR_LIBUSB";
    case AIRSPY_ERROR_THREAD:
      return "AIRSPY_ERROR_THREAD";
    case AIRSPY_ERROR_STREAMING_THREAD_ERR:
      return "AIRSPY_ERROR_STREAMING_THREAD_ERR";
    case AIRSPY_ERROR_STREAMING_STOPPED:
      return "AIRSPY_ERROR_STREAMING_STOPPED";
    case AIRSPY_ERROR_OTHER:
      return "AIRSPY_ERROR_OTHER";
    default:
      return "airspy unknown error";
  }
}

// airspy_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 819
extern signed int airspy_exit(void)
{
  return AIRSPY_SUCCESS;
}

// airspy_get_samplerates
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 864
extern signed int airspy_get_samplerates(struct airspy_device *device, unsigned int *buffer, const unsigned int len)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)25, (unsigned short int)0, (unsigned short int)len, (unsigned char *)buffer, (unsigned short int)((unsigned long int)(len > (unsigned int)0 ? len : (unsigned int)1) * sizeof(unsigned int) /*4ul*/ ), (unsigned int)0);
  if(!(result >= 1))
  {
    if(len == 0u)
    {
      *buffer = (unsigned int)2;
      goto __CPROVER_DUMP_L3;
    }

    if(len >= 2u)
    {
      buffer[(signed long int)0] = (unsigned int)10000000;
      buffer[(signed long int)1] = (unsigned int)2500000;
      goto __CPROVER_DUMP_L3;
    }

    return AIRSPY_ERROR_INVALID_PARAM;
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    return AIRSPY_SUCCESS;
  }
}

// airspy_gpio_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1070
extern signed int airspy_gpio_read(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char *value)
{
  signed int result;
  unsigned char port_pin = (unsigned char)((signed int)(unsigned char)port << 5);
  port_pin = (unsigned char)((signed int)port_pin | (signed int)pin);
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)22, (unsigned short int)0, (unsigned short int)port_pin, (unsigned char *)value, (unsigned short int)1, (unsigned int)0);
  if(!(result >= 1))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_gpio_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1096
extern signed int airspy_gpio_write(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char value)
{
  signed int result;
  unsigned char port_pin = (unsigned char)((signed int)(unsigned char)port << 5);
  port_pin = (unsigned char)((signed int)port_pin | (signed int)pin);
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)21, (unsigned short int)value, (unsigned short int)port_pin, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_gpiodir_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1123
extern signed int airspy_gpiodir_read(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char *value)
{
  signed int result;
  unsigned char port_pin = (unsigned char)((signed int)(unsigned char)port << 5);
  port_pin = (unsigned char)((signed int)port_pin | (signed int)pin);
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)24, (unsigned short int)0, (unsigned short int)port_pin, (unsigned char *)value, (unsigned short int)1, (unsigned int)0);
  if(!(result >= 1))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_gpiodir_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1149
extern signed int airspy_gpiodir_write(struct airspy_device *device, enum anonymous$1 port, enum anonymous$2 pin, unsigned char value)
{
  signed int result;
  unsigned char port_pin = (unsigned char)((signed int)(unsigned char)port << 5);
  port_pin = (unsigned char)((signed int)port_pin | (signed int)pin);
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)23, (unsigned short int)value, (unsigned short int)port_pin, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 813
extern signed int airspy_init(void)
{
  return AIRSPY_SUCCESS;
}

// airspy_is_streaming
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1660
extern signed int airspy_is_streaming(struct airspy_device *device)
{
  return (signed int)(device->streaming == 1);
}

// airspy_lib_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.h line 116
extern void airspy_lib_version(struct anonymous$11 *lib_version)
{
  lib_version->major_version = (unsigned int)1;
  lib_version->minor_version = (unsigned int)0;
  lib_version->revision = (unsigned int)7;
}

// airspy_libusb_transfer_callback
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 420
static void airspy_libusb_transfer_callback(struct libusb_transfer *usb_transfer)
{
  unsigned short int *temp;
  struct airspy_device *device = (struct airspy_device *)usb_transfer->user_data;
  _Bool tmp_if_expr$1;
  if(device->streaming == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = device->stop_requested != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(!tmp_if_expr$1)
  {
    if((signed int)usb_transfer->status == LIBUSB_TRANSFER_COMPLETED)
    {
      if(!(device->received_samples_queue_head == device->received_samples_queue_tail))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = device->converter_is_waiting != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        temp = device->received_samples_queue[(signed long int)device->received_samples_queue_head];
        device->received_samples_queue[(signed long int)device->received_samples_queue_head] = (unsigned short int *)usb_transfer->buffer;
        usb_transfer->buffer = (unsigned char *)temp;
        device->received_samples_queue_head = device->received_samples_queue_head + 1 & 8 - 1;
        if(!(device->converter_is_waiting == 0))
        {
          pthread_mutex_lock(&device->conversion_mp);
          pthread_cond_signal(&device->conversion_cv);
          pthread_mutex_unlock(&device->conversion_mp);
        }

      }

    }

    signed int return_value_libusb_submit_transfer$3;
    return_value_libusb_submit_transfer$3=libusb_submit_transfer(usb_transfer);
    if(!(return_value_libusb_submit_transfer$3 == 0))
      device->streaming = 0;

  }

}

// airspy_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 832
extern signed int airspy_open(struct airspy_device **device)
{
  signed int result;
  result=airspy_open_init(device, 0ULL);
  return result;
}

// airspy_open_device
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 567
static void airspy_open_device(struct airspy_device *device, signed int *ret, unsigned short int vid, unsigned short int pid, unsigned long int serial_number_val)
{
  signed int i;
  signed int result;
  struct libusb_device_handle **libusb_dev_handle;
  signed int serial_number_len;
  struct libusb_device_handle *dev_handle;
  struct libusb_device *dev;
  struct libusb_device **devices = (struct libusb_device **)(void *)0;
  signed long int cnt;
  signed int serial_descriptor_index;
  struct libusb_device_descriptor device_descriptor;
  char serial_number_expected[27l];
  unsigned char serial_number[27l];
  unsigned int serial_number_msb_val;
  unsigned int serial_number_lsb_val;
  libusb_dev_handle = &device->usb_device;
  *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
  cnt=libusb_get_device_list(device->usb_context, &devices);
  signed int tmp_post$1;
  if(!(cnt >= 0l))
    *ret = AIRSPY_ERROR_NOT_FOUND;

  else
  {
    i = 0;
    do
    {
      tmp_post$1 = i;
      i = i + 1;
      dev = devices[(signed long int)tmp_post$1];
      if(dev == ((struct libusb_device *)NULL))
        break;

      libusb_get_device_descriptor(dev, &device_descriptor);
      if(device_descriptor.idProduct == pid && device_descriptor.idVendor == vid)
      {
        if(!(serial_number_val == 0ULL))
        {
          serial_descriptor_index = (signed int)device_descriptor.iSerialNumber;
          if(serial_descriptor_index >= 1)
          {
            signed int return_value_libusb_open$2;
            return_value_libusb_open$2=libusb_open(dev, libusb_dev_handle);
            if(!(return_value_libusb_open$2 == 0))
            {
              *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
              continue;
            }

            dev_handle = *libusb_dev_handle;
            serial_number_len=libusb_get_string_descriptor_ascii(dev_handle, (unsigned char)serial_descriptor_index, serial_number, (signed int)sizeof(unsigned char [27l]) /*27ul*/ );
            if(serial_number_len == 26)
            {
              serial_number[(signed long int)26] = (unsigned char)0;
              upper_string(serial_number, (unsigned long int)26);
              serial_number_msb_val = (unsigned int)(serial_number_val >> 32);
              serial_number_lsb_val = (unsigned int)(serial_number_val & (unsigned long int)0xFFFFFFFF);
              sprintf(serial_number_expected, "%s%08X%08X", (const void *)str_prefix_serial_airspy, serial_number_msb_val, serial_number_lsb_val);
              signed int return_value_strncmp$5;
              return_value_strncmp$5=strncmp((const char *)serial_number, serial_number_expected, (unsigned long int)26);
              if(return_value_strncmp$5 == 0)
              {
                signed int return_value_libusb_kernel_driver_active$3;
                return_value_libusb_kernel_driver_active$3=libusb_kernel_driver_active(dev_handle, 0);
                if(!(return_value_libusb_kernel_driver_active$3 == 0))
                  libusb_detach_kernel_driver(dev_handle, 0);

                result=libusb_set_configuration(dev_handle, 1);
                if(!(result == 0))
                {
                  libusb_close(dev_handle);
                  *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
                  continue;
                }

                signed int return_value_libusb_kernel_driver_active$4;
                return_value_libusb_kernel_driver_active$4=libusb_kernel_driver_active(dev_handle, 0);
                if(!(return_value_libusb_kernel_driver_active$4 == 0))
                  libusb_detach_kernel_driver(dev_handle, 0);

                result=libusb_claim_interface(dev_handle, 0);
                if(!(result == 0))
                {
                  libusb_close(dev_handle);
                  *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
                  continue;
                }

                break;
              }

              else
              {
                libusb_close(dev_handle);
                *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
                continue;
              }
            }

            else
            {
              libusb_close(dev_handle);
              *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
              continue;
            }
          }

        }

        else
        {
          signed int return_value_libusb_open$8;
          return_value_libusb_open$8=libusb_open(dev, libusb_dev_handle);
          if(return_value_libusb_open$8 == 0)
          {
            dev_handle = *libusb_dev_handle;
            signed int return_value_libusb_kernel_driver_active$6;
            return_value_libusb_kernel_driver_active$6=libusb_kernel_driver_active(dev_handle, 0);
            if(!(return_value_libusb_kernel_driver_active$6 == 0))
              libusb_detach_kernel_driver(dev_handle, 0);

            result=libusb_set_configuration(dev_handle, 1);
            if(!(result == 0))
            {
              libusb_close(dev_handle);
              *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
              continue;
            }

            signed int return_value_libusb_kernel_driver_active$7;
            return_value_libusb_kernel_driver_active$7=libusb_kernel_driver_active(dev_handle, 0);
            if(!(return_value_libusb_kernel_driver_active$7 == 0))
              libusb_detach_kernel_driver(dev_handle, 0);

            result=libusb_claim_interface(dev_handle, 0);
            if(!(result == 0))
            {
              libusb_close(dev_handle);
              *libusb_dev_handle = (struct libusb_device_handle *)(void *)0;
              continue;
            }

            break;
          }

        }
      }

    }
    while((_Bool)1);
    libusb_free_device_list(devices, 1);
    dev_handle = device->usb_device;
    if(dev_handle == ((struct libusb_device_handle *)NULL))
      *ret = AIRSPY_ERROR_NOT_FOUND;

    else
    {
      *ret = AIRSPY_SUCCESS;
      goto __CPROVER_DUMP_L22;
    }
  }

__CPROVER_DUMP_L22:
  ;
}

// airspy_open_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 542
static void airspy_open_exit(struct airspy_device *device)
{
  if(!(device->usb_device == ((struct libusb_device_handle *)NULL)))
  {
    libusb_release_interface(device->usb_device, 0);
    libusb_close(device->usb_device);
    device->usb_device = (struct libusb_device_handle *)(void *)0;
  }

  libusb_exit(device->usb_context);
  device->usb_context = (struct libusb_context *)(void *)0;
}

// airspy_open_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 737
static signed int airspy_open_init(struct airspy_device **device, unsigned long int serial_number)
{
  struct airspy_device *lib_device;
  signed int libusb_error;
  signed int result;
  *device = (struct airspy_device *)(void *)0;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct airspy_device) /*296ul*/ );
  lib_device = (struct airspy_device *)return_value_calloc$1;
  if(lib_device == ((struct airspy_device *)NULL))
    return AIRSPY_ERROR_NO_MEM;

  else
  {
    libusb_error=libusb_init(&lib_device->usb_context);
    if(!(libusb_error == 0))
    {
      free((void *)lib_device);
      return AIRSPY_ERROR_LIBUSB;
    }

    else
    {
      airspy_open_device(lib_device, &result, airspy_usb_vid, airspy_usb_pid, serial_number);
      if(lib_device->usb_device == ((struct libusb_device_handle *)NULL))
      {
        libusb_exit(lib_device->usb_context);
        free((void *)lib_device);
        return result;
      }

      else
      {
        lib_device->transfers = (struct libusb_transfer **)(void *)0;
        lib_device->callback = (signed int (*)(struct anonymous *))(void *)0;
        lib_device->transfer_count = (unsigned int)16;
        lib_device->buffer_size = (unsigned int)262144;
        lib_device->packing_enabled = 0;
        lib_device->streaming = 0;
        lib_device->stop_requested = 0;
        lib_device->sample_type = (enum airspy_sample_type)AIRSPY_SAMPLE_FLOAT32_IQ;
        airspy_set_packing(lib_device, (unsigned char)0);
        result=allocate_transfers(lib_device);
        if(!(result == 0))
        {
          airspy_open_exit(lib_device);
          free((void *)lib_device);
          return AIRSPY_ERROR_NO_MEM;
        }

        else
        {
          lib_device->cnv_f=iqconverter_float_create(HB_KERNEL_FLOAT, 47);
          lib_device->cnv_i=iqconverter_int16_create(HB_KERNEL_INT16, 47);
          pthread_cond_init(&lib_device->conversion_cv, (const union anonymous$10 *)(void *)0);
          pthread_mutex_init(&lib_device->conversion_mp, (const union anonymous$10 *)(void *)0);
          *device = lib_device;
          return AIRSPY_SUCCESS;
        }
      }
    }
  }
}

// airspy_open_sn
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 824
extern signed int airspy_open_sn(struct airspy_device **device, unsigned long int serial_number)
{
  signed int result;
  result=airspy_open_init(device, serial_number);
  return result;
}

// airspy_r820t_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1026
extern signed int airspy_r820t_read(struct airspy_device *device, unsigned char register_number, unsigned char *value)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)5, (unsigned short int)0, (unsigned short int)register_number, (unsigned char *)value, (unsigned short int)1, (unsigned int)0);
  if(!(result >= 1))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_r820t_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1048
extern signed int airspy_r820t_write(struct airspy_device *device, unsigned char register_number, unsigned char value)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)4, (unsigned short int)value, (unsigned short int)register_number, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_conversion_filter_float32
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1366
extern signed int airspy_set_conversion_filter_float32(struct airspy_device *device, const float *kernel, const unsigned int len)
{
  if(!(device->streaming == 0))
    return AIRSPY_ERROR_BUSY;

  else
  {
    iqconverter_float_free(device->cnv_f);
    device->cnv_f=iqconverter_float_create(kernel, (signed int)len);
    return AIRSPY_SUCCESS;
  }
}

// airspy_set_conversion_filter_int16
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1379
extern signed int airspy_set_conversion_filter_int16(struct airspy_device *device, const signed short int *kernel, const unsigned int len)
{
  if(!(device->streaming == 0))
    return AIRSPY_ERROR_BUSY;

  else
  {
    iqconverter_int16_free(device->cnv_i);
    device->cnv_i=iqconverter_int16_create(kernel, (signed int)len);
    return AIRSPY_SUCCESS;
  }
}

// airspy_set_freq
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1338
extern signed int airspy_set_freq(struct airspy_device *device, const unsigned int freq_hz)
{
  struct anonymous$7 set_freq_params;
  unsigned char length;
  signed int result;
  set_freq_params.freq_hz = freq_hz;
  length = (unsigned char)sizeof(struct anonymous$7) /*4ul*/ ;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)13, (unsigned short int)0, (unsigned short int)0, (unsigned char *)&set_freq_params, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_linearity_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1536
extern signed int airspy_set_linearity_gain(struct airspy_device *device, unsigned char value)
{
  signed int rc;
  value = (unsigned char)((22 - 1) - (signed int)value);
  if((signed int)value >= 22)
    value = (unsigned char)(22 - 1);

  else
    if(!((signed int)value >= 0))
      value = (unsigned char)0;

  rc=airspy_set_mixer_agc(device, (unsigned char)0);
  if(!(rc >= 0))
    return rc;

  else
  {
    rc=airspy_set_lna_agc(device, (unsigned char)0);
    if(!(rc >= 0))
      return rc;

    else
    {
      rc=airspy_set_vga_gain(device, airspy_linearity_vga_gains[(signed long int)value]);
      if(!(rc >= 0))
        return rc;

      else
      {
        rc=airspy_set_mixer_gain(device, airspy_linearity_mixer_gains[(signed long int)value]);
        if(!(rc >= 0))
          return rc;

        else
        {
          rc=airspy_set_lna_gain(device, airspy_linearity_lna_gains[(signed long int)value]);
          if(!(rc >= 0))
            return rc;

          else
            return AIRSPY_SUCCESS;
        }
      }
    }
  }
}

// airspy_set_lna_agc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1482
extern signed int airspy_set_lna_agc(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  unsigned char length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)17, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_lna_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1392
extern signed int airspy_set_lna_gain(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  unsigned char length;
  if((signed int)value >= 15)
    value = (unsigned char)14;

  length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)14, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_mixer_agc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1509
extern signed int airspy_set_mixer_agc(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  unsigned char length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)18, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_mixer_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1422
extern signed int airspy_set_mixer_gain(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  unsigned char length;
  if((signed int)value >= 16)
    value = (unsigned char)15;

  length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)15, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_packing
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1615
extern signed int airspy_set_packing(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  signed int packing_enabled;
  if(!(device->streaming == 0))
    return AIRSPY_ERROR_BUSY;

  else
  {
    result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)26, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)1, (unsigned int)0);
    if(!(result >= 1))
      return AIRSPY_ERROR_LIBUSB;

    else
    {
      packing_enabled = value != 0 ? 1 : 0;
      if(!(packing_enabled == device->packing_enabled))
      {
        cancel_transfers(device);
        free_transfers(device);
        device->packing_enabled = packing_enabled;
        device->buffer_size = (unsigned int)(packing_enabled != 0 ? 6144 * 24 : 262144);
        result=allocate_transfers(device);
        if(result == 0)
          goto __CPROVER_DUMP_L3;

        return AIRSPY_ERROR_NO_MEM;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        return AIRSPY_SUCCESS;
      }
    }
  }
}

// airspy_set_receiver_mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 926
signed int airspy_set_receiver_mode(struct airspy_device *device, enum anonymous$9 value)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)1, (unsigned short int)value, (unsigned short int)0, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_rf_bias
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1610
extern signed int airspy_set_rf_bias(struct airspy_device *device, unsigned char value)
{
  signed int return_value_airspy_gpio_write$1;
  return_value_airspy_gpio_write$1=airspy_gpio_write(device, (enum anonymous$1)GPIO_PORT1, (enum anonymous$2)GPIO_PIN13, value);
  return return_value_airspy_gpio_write$1;
}

// airspy_set_sample_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1332
extern signed int airspy_set_sample_type(struct airspy_device *device, enum airspy_sample_type sample_type)
{
  device->sample_type = sample_type;
  return AIRSPY_SUCCESS;
}

// airspy_set_samplerate
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 897
extern signed int airspy_set_samplerate(struct airspy_device *device, unsigned int samplerate)
{
  signed int result;
  unsigned char retval;
  unsigned char length;
  libusb_clear_halt(device->usb_device, (unsigned char)(128 | 1));
  length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)12, (unsigned short int)0, (unsigned short int)samplerate, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_set_sensitivity_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1573
extern signed int airspy_set_sensitivity_gain(struct airspy_device *device, unsigned char value)
{
  signed int rc;
  value = (unsigned char)((22 - 1) - (signed int)value);
  if((signed int)value >= 22)
    value = (unsigned char)(22 - 1);

  else
    if(!((signed int)value >= 0))
      value = (unsigned char)0;

  rc=airspy_set_mixer_agc(device, (unsigned char)0);
  if(!(rc >= 0))
    return rc;

  else
  {
    rc=airspy_set_lna_agc(device, (unsigned char)0);
    if(!(rc >= 0))
      return rc;

    else
    {
      rc=airspy_set_vga_gain(device, airspy_sensitivity_vga_gains[(signed long int)value]);
      if(!(rc >= 0))
        return rc;

      else
      {
        rc=airspy_set_mixer_gain(device, airspy_sensitivity_mixer_gains[(signed long int)value]);
        if(!(rc >= 0))
          return rc;

        else
        {
          rc=airspy_set_lna_gain(device, airspy_sensitivity_lna_gains[(signed long int)value]);
          if(!(rc >= 0))
            return rc;

          else
            return AIRSPY_SUCCESS;
        }
      }
    }
  }
}

// airspy_set_vga_gain
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1452
extern signed int airspy_set_vga_gain(struct airspy_device *device, unsigned char value)
{
  signed int result;
  unsigned char retval;
  unsigned char length;
  if((signed int)value >= 16)
    value = (unsigned char)15;

  length = (unsigned char)1;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)16, (unsigned short int)0, (unsigned short int)value, &retval, (unsigned short int)length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_si5351c_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 979
extern signed int airspy_si5351c_read(struct airspy_device *device, unsigned char register_number, unsigned char *value)
{
  unsigned char temp_value;
  signed int result;
  temp_value = (unsigned char)0;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)3, (unsigned short int)0, (unsigned short int)register_number, (unsigned char *)&temp_value, (unsigned short int)1, (unsigned int)0);
  if(!(result >= 1))
    return AIRSPY_ERROR_LIBUSB;

  else
  {
    *value = temp_value;
    return AIRSPY_SUCCESS;
  }
}

// airspy_si5351c_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1004
extern signed int airspy_si5351c_write(struct airspy_device *device, unsigned char register_number, unsigned char value)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)2, (unsigned short int)value, (unsigned short int)register_number, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_spiflash_erase
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1175
extern signed int airspy_spiflash_erase(struct airspy_device *device)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)6, (unsigned short int)0, (unsigned short int)0, (unsigned char *)(void *)0, (unsigned short int)0, (unsigned int)0);
  if(!(result == 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_spiflash_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1223
extern signed int airspy_spiflash_read(struct airspy_device *device, const unsigned int address, const unsigned short int length, unsigned char *data)
{
  signed int result;
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)8, (unsigned short int)(address >> 16), (unsigned short int)(address & (unsigned int)0xFFFF), data, length, (unsigned int)0);
  if(!(result >= (signed int)length))
    return AIRSPY_ERROR_LIBUSB;

  else
    return AIRSPY_SUCCESS;
}

// airspy_spiflash_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1196
extern signed int airspy_spiflash_write(struct airspy_device *device, const unsigned int address, const unsigned short int length, unsigned char * const data)
{
  signed int result;
  if(address >= 1048576u)
    return AIRSPY_ERROR_INVALID_PARAM;

  else
  {
    result=libusb_control_transfer(device->usb_device, (unsigned char)(0 | 64 | 0), (unsigned char)7, (unsigned short int)(address >> 16), (unsigned short int)(address & (unsigned int)0xFFFF), data, length, (unsigned int)0);
    if(!(result >= (signed int)length))
      return AIRSPY_ERROR_LIBUSB;

    else
      return AIRSPY_SUCCESS;
  }
}

// airspy_start_rx
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 948
extern signed int airspy_start_rx(struct airspy_device *device, signed int (*callback)(struct anonymous *), void *ctx)
{
  signed int result;
  libusb_clear_halt(device->usb_device, (unsigned char)(128 | 1));
  iqconverter_float_reset(device->cnv_f);
  iqconverter_int16_reset(device->cnv_i);
  result=airspy_set_receiver_mode(device, (enum anonymous$9)RECEIVER_MODE_RX);
  if(result == AIRSPY_SUCCESS)
  {
    device->ctx = ctx;
    result=create_io_threads(device, callback);
  }

  return result;
}

// airspy_stop_rx
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 966
extern signed int airspy_stop_rx(struct airspy_device *device)
{
  signed int result1;
  signed int result2;
  result1=kill_io_threads(device);
  result2=airspy_set_receiver_mode(device, (enum anonymous$9)RECEIVER_MODE_OFF);
  if(!(result2 == AIRSPY_SUCCESS))
    return result2;

  else
    return result1;
}

// airspy_version_string_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 1266
extern signed int airspy_version_string_read(struct airspy_device *device, char *version, unsigned char length)
{
  signed int result;
  char version_local[128l];
  result=libusb_control_transfer(device->usb_device, (unsigned char)(128 | 64 | 0), (unsigned char)10, (unsigned short int)0, (unsigned short int)0, (unsigned char *)version_local, (unsigned short int)(128 - 1), (unsigned int)0);
  if(!(result >= 0))
    return AIRSPY_ERROR_LIBUSB;

  else
    if((signed int)length >= 1)
    {
      memcpy((void *)version, (const void *)version_local, (unsigned long int)((signed int)length - 1));
      version[(signed long int)((signed int)length - 1)] = (char)0;
      return AIRSPY_SUCCESS;
    }

    else
      return AIRSPY_ERROR_INVALID_PARAM;
}

// allocate_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 181
static signed int allocate_transfers(struct airspy_device * const device)
{
  signed int i;
  unsigned long int sample_count;
  unsigned int transfer_index;
  if(device->transfers == ((struct libusb_transfer **)NULL))
  {
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)device->buffer_size);
      device->received_samples_queue[(signed long int)i] = (unsigned short int *)return_value_malloc$1;
      if(device->received_samples_queue[(signed long int)i] == ((unsigned short int *)NULL))
        return AIRSPY_ERROR_NO_MEM;

      memset((void *)device->received_samples_queue[(signed long int)i], 0, (unsigned long int)device->buffer_size);
    }
    if(!(device->packing_enabled == 0))
      sample_count = (unsigned long int)(((device->buffer_size / (unsigned int)2) * (unsigned int)4) / (unsigned int)3);

    else
      sample_count = (unsigned long int)(device->buffer_size / (unsigned int)2);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sample_count * sizeof(float) /*4ul*/ );
    device->output_buffer = (void *)(float *)return_value_malloc$2;
    if(device->output_buffer == NULL)
      return AIRSPY_ERROR_NO_MEM;

    if(!(device->packing_enabled == 0))
    {
      void *return_value_malloc$3;
      return_value_malloc$3=malloc(sample_count * sizeof(unsigned short int) /*2ul*/ );
      device->unpacked_samples = (unsigned short int *)return_value_malloc$3;
      if(device->unpacked_samples == ((unsigned short int *)NULL))
        return AIRSPY_ERROR_NO_MEM;

    }

    void *return_value_calloc$4;
    return_value_calloc$4=calloc((unsigned long int)device->transfer_count, sizeof(struct libusb_transfer) /*64ul*/ );
    device->transfers = (struct libusb_transfer **)return_value_calloc$4;
    if(device->transfers == ((struct libusb_transfer **)NULL))
      return AIRSPY_ERROR_NO_MEM;

    transfer_index = (unsigned int)0;
    for( ; !(transfer_index >= device->transfer_count); transfer_index = transfer_index + 1u)
    {
      device->transfers[(signed long int)transfer_index]=libusb_alloc_transfer(0);
      if(device->transfers[(signed long int)transfer_index] == ((struct libusb_transfer *)NULL))
        return AIRSPY_ERROR_LIBUSB;

      void *return_value_malloc$5;
      return_value_malloc$5=malloc((unsigned long int)device->buffer_size);
      libusb_fill_bulk_transfer(device->transfers[(signed long int)transfer_index], device->usb_device, (unsigned char)0, (unsigned char *)return_value_malloc$5, (signed int)device->buffer_size, (void (*)(struct libusb_transfer *))(void *)0, (void *)device, (unsigned int)0);
      if(device->transfers[(signed long int)transfer_index]->buffer == ((unsigned char *)NULL))
        return AIRSPY_ERROR_NO_MEM;

    }
    return AIRSPY_SUCCESS;
  }

  else
    return AIRSPY_ERROR_BUSY;
}

// cancel_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 118
static signed int cancel_transfers(struct airspy_device *device)
{
  unsigned int transfer_index;
  if(!(device->transfers == ((struct libusb_transfer **)NULL)))
  {
    transfer_index = (unsigned int)0;
    for( ; !(transfer_index >= device->transfer_count); transfer_index = transfer_index + 1u)
      if(!(device->transfers[(signed long int)transfer_index] == ((struct libusb_transfer *)NULL)))
        libusb_cancel_transfer(device->transfers[(signed long int)transfer_index]);

    return AIRSPY_SUCCESS;
  }

  else
    return AIRSPY_ERROR_OTHER;
}

// conversion_threadproc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 321
static void * conversion_threadproc(void *arg)
{
  signed int sample_count;
  unsigned short int *input_samples;
  struct airspy_device *device = (struct airspy_device *)arg;
  struct anonymous transfer;
  _Bool tmp_if_expr$1;
  signed int return_value;
  while(!(device->streaming == 0))
  {
    if(!(device->stop_requested == 0))
      break;

    if(device->received_samples_queue_head == device->received_samples_queue_tail)
    {
      pthread_mutex_lock(&device->conversion_mp);
      device->converter_is_waiting = 1;
      while(device->received_samples_queue_head == device->received_samples_queue_tail)
      {
        if(!(device->stop_requested == 0))
          break;

        if(device->streaming == 0)
          break;

        pthread_cond_wait(&device->conversion_cv, &device->conversion_mp);
      }
      device->converter_is_waiting = 0;
      pthread_mutex_unlock(&device->conversion_mp);
      if(!(device->stop_requested == 0))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = !(device->streaming != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        continue;

    }

    input_samples = device->received_samples_queue[(signed long int)device->received_samples_queue_tail];
    if(!(device->packing_enabled == 0))
    {
      sample_count = (signed int)(((device->buffer_size / (unsigned int)2) * (unsigned int)4) / (unsigned int)3);
      unpack_samples((unsigned int *)input_samples, device->unpacked_samples, sample_count);
      input_samples = device->unpacked_samples;
    }

    else
      sample_count = (signed int)(device->buffer_size / (unsigned int)2);
    switch((signed int)device->sample_type)
    {
      case AIRSPY_SAMPLE_FLOAT32_IQ:
      {
        convert_samples_float(input_samples, (float *)device->output_buffer, sample_count);
        iqconverter_float_process(device->cnv_f, (float *)device->output_buffer, sample_count);
        sample_count = sample_count / 2;
        transfer.samples = device->output_buffer;
        goto __CPROVER_DUMP_L14;
      }
      case AIRSPY_SAMPLE_FLOAT32_REAL:
      {
        convert_samples_float(input_samples, (float *)device->output_buffer, sample_count);
        transfer.samples = device->output_buffer;
        goto __CPROVER_DUMP_L14;
      }
      case AIRSPY_SAMPLE_INT16_IQ:
      {
        convert_samples_int16(input_samples, (signed short int *)device->output_buffer, sample_count);
        iqconverter_int16_process(device->cnv_i, (signed short int *)device->output_buffer, sample_count);
        sample_count = sample_count / 2;
        transfer.samples = device->output_buffer;
        goto __CPROVER_DUMP_L14;
      }
      case AIRSPY_SAMPLE_INT16_REAL:
      {
        convert_samples_int16(input_samples, (signed short int *)device->output_buffer, sample_count);
        transfer.samples = device->output_buffer;
        goto __CPROVER_DUMP_L14;
      }
      case AIRSPY_SAMPLE_UINT16_REAL:
        transfer.samples = (void *)input_samples;
      case AIRSPY_SAMPLE_END:

      default:
      {

      __CPROVER_DUMP_L14:
        ;
        transfer.device = device;
        transfer.ctx = device->ctx;
        transfer.sample_count = sample_count;
        transfer.sample_type = device->sample_type;
        return_value=device->callback(&transfer);
      }
    }
    if(!(return_value == 0))
      device->stop_requested = 1;

    device->received_samples_queue_tail = device->received_samples_queue_tail + 1 & 8 - 1;
  }
  return (void *)0;
}

// convert_samples_float
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 295
static void convert_samples_float(unsigned short int *src, float *dest, signed int count)
{
  signed int i = 0;
  for( ; !(i >= count); i = i + 1)
    dest[(signed long int)i] = (float)(((signed int)src[(signed long int)i] & 0xFFF) - 2048) * (1.0f / (float)(1 << 15 - (16 - 12)));
}

// convert_samples_int16
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 286
static void convert_samples_int16(unsigned short int *src, signed short int *dest, signed int count)
{
  signed int i = 0;
  for( ; !(i >= count); i = i + 1)
    dest[(signed long int)i] = (signed short int)(((signed int)src[(signed long int)i] & 0xFFF) - 2048 << 16 - 12);
}

// create_io_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 498
static signed int create_io_threads(struct airspy_device *device, signed int (*callback)(struct anonymous *))
{
  signed int result;
  union pthread_attr_t attr;
  _Bool tmp_if_expr$1;
  if(device->streaming == 0)
    tmp_if_expr$1 = !(device->stop_requested != 0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    device->callback = callback;
    device->streaming = 1;
    result=prepare_transfers(device, (const unsigned char)(128 | 1), (void (*)(struct libusb_transfer *))airspy_libusb_transfer_callback);
    if(!(result == AIRSPY_SUCCESS))
      return result;

    device->received_samples_queue_head = 0;
    device->received_samples_queue_tail = 0;
    device->converter_is_waiting = 1;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, 0);
    result=pthread_create(&device->conversion_thread, &attr, conversion_threadproc, (void *)device);
    if(!(result == 0))
      return AIRSPY_ERROR_THREAD;

    result=pthread_create(&device->transfer_thread, &attr, transfer_threadproc, (void *)device);
    if(!(result == 0))
      return AIRSPY_ERROR_THREAD;

    pthread_attr_destroy(&attr);
  }

  else
    return AIRSPY_ERROR_BUSY;
  return AIRSPY_SUCCESS;
}

// delay_interleaved
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 269
static void delay_interleaved(struct anonymous$8 *cnv, float *samples, signed int len)
{
  signed int i;
  signed int index;
  signed int half_len;
  float res;
  half_len = cnv->len >> 1;
  index = cnv->delay_index;
  i = 0;
  for( ; !(i >= len); i = i + 2)
  {
    res = cnv->delay_line[(signed long int)index];
    cnv->delay_line[(signed long int)index] = samples[(signed long int)i];
    samples[(signed long int)i] = res;
    index = index + 1;
    if(index >= half_len)
      index = 0;

  }
  cnv->delay_index = index;
}

// delay_interleaved$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 128
static void delay_interleaved$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1)
{
  signed int i$link1;
  signed int index$link1;
  signed int half_len$link1;
  signed short int res$link1;
  half_len$link1 = cnv$link1->len >> 1;
  index$link1 = cnv$link1->delay_index;
  i$link1 = 0;
  for( ; !(i$link1 >= len$link1); i$link1 = i$link1 + 2)
  {
    res$link1 = cnv$link1->delay_line[(signed long int)index$link1];
    cnv$link1->delay_line[(signed long int)index$link1] = samples$link1[(signed long int)i$link1];
    samples$link1[(signed long int)i$link1] = res$link1;
    index$link1 = index$link1 + 1;
    if(index$link1 >= half_len$link1)
      index$link1 = 0;

  }
  cnv$link1->delay_index = index$link1;
}

// fir_interleaved
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 175
static void fir_interleaved(struct anonymous$8 *cnv, float *samples, signed int len)
{
  signed int i;
  signed int fir_index;
  signed int fir_len;
  float *queue;
  float acc;
  float *ptr1;
  float *ptr2;
  float *ptr3;
  fir_index = cnv->fir_index;
  i = 0;
  signed int tmp_post$1;
  float *tmp_post$2;
  float *tmp_post$3;
  float *tmp_post$4;
  for( ; !(i >= len); i = i + 2)
  {
    queue = cnv->fir_queue + (signed long int)fir_index;
    queue[(signed long int)0] = samples[(signed long int)i];
    fir_len = cnv->len;
    ptr1 = cnv->fir_kernel;
    ptr2 = queue;
    ptr3 = (queue + (signed long int)fir_len) - (signed long int)1;
    fir_len = fir_len / 2;
    acc = (float)0;
    do
    {
      acc = acc + ptr1[(signed long int)0] * (ptr2[(signed long int)0] + ptr3[(signed long int)0]) + ptr1[(signed long int)1] * (ptr2[(signed long int)1] + ptr3[(signed long int)-1]) + ptr1[(signed long int)2] * (ptr2[(signed long int)2] + ptr3[(signed long int)-2]) + ptr1[(signed long int)3] * (ptr2[(signed long int)3] + ptr3[(signed long int)-3]);
      ptr1 = ptr1 + (signed long int)4;
      ptr2 = ptr2 + (signed long int)4;
      ptr3 = ptr3 - (signed long int)4;
      fir_len = fir_len - 4;
    }
    while(fir_len >= 4);
    do
    {
      tmp_post$1 = fir_len;
      fir_len = fir_len - 1;
      if(!(tmp_post$1 >= 1))
        break;

      tmp_post$2 = ptr1;
      ptr1 = ptr1 + 1l;
      tmp_post$3 = ptr2;
      ptr2 = ptr2 + 1l;
      tmp_post$4 = ptr3;
      ptr3 = ptr3 - 1l;
      acc = acc + *tmp_post$2 * (*tmp_post$3 + *tmp_post$4);
    }
    while((_Bool)1);
    fir_index = fir_index - 1;
    if(!(fir_index >= 0))
    {
      fir_index = cnv->len * (32 - 1);
      memcpy((void *)(cnv->fir_queue + (signed long int)fir_index + (signed long int)1), (const void *)cnv->fir_queue, (unsigned long int)(cnv->len - 1) * sizeof(float) /*4ul*/ );
    }

    samples[(signed long int)i] = acc;
  }
  cnv->fir_index = fir_index;
}

// fir_interleaved$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 90
static void fir_interleaved$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1)
{
  signed int i$link1;
  signed int j;
  signed int fir_index$link1;
  signed int fir_len$link1;
  signed int *queue$link1;
  signed int acc$link1;
  fir_len$link1 = cnv$link1->len;
  fir_index$link1 = cnv$link1->fir_index;
  i$link1 = 0;
  for( ; !(i$link1 >= len$link1); i$link1 = i$link1 + 2)
  {
    queue$link1 = cnv$link1->fir_queue + (signed long int)fir_index$link1;
    queue$link1[(signed long int)0] = (signed int)samples$link1[(signed long int)i$link1];
    acc$link1 = 0;
    j = 0;
    for( ; !(j >= fir_len$link1); j = j + 1)
      acc$link1 = acc$link1 + cnv$link1->fir_kernel[(signed long int)j] * queue$link1[(signed long int)j];
    fir_index$link1 = fir_index$link1 - 1;
    if(!(fir_index$link1 >= 0))
    {
      fir_index$link1 = cnv$link1->len * (16 - 1);
      memcpy((void *)(cnv$link1->fir_queue + (signed long int)fir_index$link1 + (signed long int)1), (const void *)cnv$link1->fir_queue, (unsigned long int)(cnv$link1->len - 1) * sizeof(signed int) /*4ul*/ );
    }

    samples$link1[(signed long int)i$link1] = (signed short int)(acc$link1 >> 15);
  }
  cnv$link1->fir_index = fir_index$link1;
}

// free_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 137
static signed int free_transfers(struct airspy_device *device)
{
  signed int i;
  unsigned int transfer_index;
  if(!(device->transfers == ((struct libusb_transfer **)NULL)))
  {
    transfer_index = (unsigned int)0;
    for( ; !(transfer_index >= device->transfer_count); transfer_index = transfer_index + 1u)
      if(!(device->transfers[(signed long int)transfer_index] == ((struct libusb_transfer *)NULL)))
      {
        libusb_free_transfer(device->transfers[(signed long int)transfer_index]);
        device->transfers[(signed long int)transfer_index] = (struct libusb_transfer *)(void *)0;
      }

    free((void *)device->transfers);
    device->transfers = (struct libusb_transfer **)(void *)0;
    if(!(device->output_buffer == NULL))
    {
      free(device->output_buffer);
      device->output_buffer = (void *)0;
    }

    if(!(device->unpacked_samples == ((unsigned short int *)NULL)))
    {
      free((void *)device->unpacked_samples);
      device->unpacked_samples = (unsigned short int *)(void *)0;
    }

    i = 0;
    for( ; !(i >= 8); i = i + 1)
      if(!(device->received_samples_queue[(signed long int)i] == ((unsigned short int *)NULL)))
      {
        free((void *)device->received_samples_queue[(signed long int)i]);
        device->received_samples_queue[(signed long int)i] = (unsigned short int *)(void *)0;
      }

  }

  return AIRSPY_SUCCESS;
}

// iqconverter_float_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 42
struct anonymous$8 * iqconverter_float_create(const float *hb_kernel, signed int len)
{
  signed int i;
  signed int j;
  unsigned long int buffer_size;
  struct anonymous$8 *cnv;
  void *return_value_memalign$1;
  return_value_memalign$1=memalign((unsigned long int)16, sizeof(struct anonymous$8) /*48ul*/ );
  cnv = (struct anonymous$8 *)return_value_memalign$1;
  cnv->len = len / 2 + 1;
  cnv->hbc = hb_kernel[(signed long int)(len / 2)];
  buffer_size = (unsigned long int)cnv->len * sizeof(float) /*4ul*/ ;
  void *return_value_memalign$2;
  return_value_memalign$2=memalign((unsigned long int)16, buffer_size);
  cnv->fir_kernel = (float *)return_value_memalign$2;
  void *return_value_memalign$3;
  return_value_memalign$3=memalign((unsigned long int)16, buffer_size * (unsigned long int)32);
  cnv->fir_queue = (float *)return_value_memalign$3;
  void *return_value_memalign$4;
  return_value_memalign$4=memalign((unsigned long int)16, buffer_size / (unsigned long int)2);
  cnv->delay_line = (float *)return_value_memalign$4;
  iqconverter_float_reset(cnv);
  i = 0;
  j = 0;
  for( ; !(i >= cnv->len); j = j + 2)
  {
    cnv->fir_kernel[(signed long int)i] = hb_kernel[(signed long int)j];
    i = i + 1;
  }
  return cnv;
}

// iqconverter_float_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 43
void iqconverter_float_free(struct anonymous$8 *cnv)
{
  free((void *)cnv->fir_kernel);
  free((void *)cnv->fir_queue);
  free((void *)cnv->delay_line);
  free((void *)cnv);
}

// iqconverter_float_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 45
void iqconverter_float_process(struct anonymous$8 *cnv, float *samples, signed int len)
{
  remove_dc(cnv, samples, len);
  translate_fs_4(cnv, samples, len);
}

// iqconverter_float_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.h line 44
void iqconverter_float_reset(struct anonymous$8 *cnv)
{
  cnv->avg = 0.0f;
  cnv->fir_index = 0;
  cnv->delay_index = 0;
  memset((void *)cnv->delay_line, 0, ((unsigned long int)cnv->len * sizeof(float) /*4ul*/ ) / (unsigned long int)2);
  memset((void *)cnv->fir_queue, 0, (unsigned long int)cnv->len * sizeof(float) /*4ul*/  * (unsigned long int)32);
}

// iqconverter_int16_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 40
struct anonymous$0 * iqconverter_int16_create(const signed short int *hb_kernel, signed int len)
{
  signed int i;
  unsigned long int buffer_size;
  struct anonymous$0 *cnv;
  void *return_value_memalign$1;
  return_value_memalign$1=memalign((unsigned long int)16, sizeof(struct anonymous$0) /*48ul*/ );
  cnv = (struct anonymous$0 *)return_value_memalign$1;
  cnv->len = len / 2 + 1;
  buffer_size = (unsigned long int)cnv->len * sizeof(signed int) /*4ul*/ ;
  void *return_value_memalign$2;
  return_value_memalign$2=memalign((unsigned long int)16, buffer_size);
  cnv->fir_kernel = (signed int *)return_value_memalign$2;
  void *return_value_memalign$3;
  return_value_memalign$3=memalign((unsigned long int)16, buffer_size * (unsigned long int)16);
  cnv->fir_queue = (signed int *)return_value_memalign$3;
  void *return_value_memalign$4;
  return_value_memalign$4=memalign((unsigned long int)16, buffer_size / (unsigned long int)4);
  cnv->delay_line = (signed short int *)return_value_memalign$4;
  iqconverter_int16_reset(cnv);
  i = 0;
  for( ; !(i >= cnv->len); i = i + 1)
    cnv->fir_kernel[(signed long int)i] = (signed int)hb_kernel[(signed long int)(i * 2)];
  return cnv;
}

// iqconverter_int16_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 41
void iqconverter_int16_free(struct anonymous$0 *cnv)
{
  free((void *)cnv->fir_kernel);
  free((void *)cnv->fir_queue);
  free((void *)cnv->delay_line);
  free((void *)cnv);
}

// iqconverter_int16_process
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 43
void iqconverter_int16_process(struct anonymous$0 *cnv, signed short int *samples, signed int len)
{
  remove_dc$link1(cnv, samples, len);
  translate_fs_4$link1(cnv, samples, len);
}

// iqconverter_int16_reset
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.h line 42
void iqconverter_int16_reset(struct anonymous$0 *cnv)
{
  cnv->fir_index = 0;
  cnv->delay_index = 0;
  cnv->old_x = (signed short int)0;
  cnv->old_y = (signed short int)0;
  cnv->old_e = 0;
  memset((void *)cnv->delay_line, 0, ((unsigned long int)cnv->len * sizeof(signed short int) /*2ul*/ ) / (unsigned long int)4);
  memset((void *)cnv->fir_queue, 0, (unsigned long int)cnv->len * sizeof(signed short int) /*2ul*/  * (unsigned long int)16);
}

// kill_io_threads
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 479
static signed int kill_io_threads(struct airspy_device *device)
{
  if(!(device->streaming == 0))
  {
    device->stop_requested = 1;
    cancel_transfers(device);
    pthread_cond_signal(&device->conversion_cv);
    pthread_join(device->transfer_thread, (void **)(void *)0);
    pthread_join(device->conversion_thread, (void **)(void *)0);
    device->stop_requested = 0;
    device->streaming = 0;
  }

  return AIRSPY_SUCCESS;
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

// main
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/airspy-tools/src/airspy_lib_version.c line 27
signed int main(signed int argc, char **argv)
{
  struct anonymous$11 lib_version;
  airspy_lib_version(&lib_version);
  printf("AirSpy lib version: %d.%d.%d\n", lib_version.major_version, lib_version.minor_version, lib_version.revision);
  return 0;
}

// prepare_transfers
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 262
static signed int prepare_transfers(struct airspy_device *device, const unsigned char endpoint_address, void (*callback)(struct libusb_transfer *))
{
  signed int error;
  unsigned int transfer_index;
  if(!(device->transfers == ((struct libusb_transfer **)NULL)))
  {
    transfer_index = (unsigned int)0;
    for( ; !(transfer_index >= device->transfer_count); transfer_index = transfer_index + 1u)
    {
      device->transfers[(signed long int)transfer_index]->endpoint = endpoint_address;
      device->transfers[(signed long int)transfer_index]->callback = callback;
      error=libusb_submit_transfer(device->transfers[(signed long int)transfer_index]);
      if(!(error == 0))
        return AIRSPY_ERROR_LIBUSB;

    }
    return AIRSPY_SUCCESS;
  }

  else
    return AIRSPY_ERROR_OTHER;
}

// remove_dc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 296
static void remove_dc(struct anonymous$8 *cnv, float *samples, signed int len)
{
  signed int i;
  float avg = cnv->avg;
  float sample;
  i = 0;
  float *tmp_post$1;
  for( ; !(i >= len); i = i + 1)
  {
    sample = *samples - avg;
    avg = avg + 0.01f * sample;
    tmp_post$1 = samples;
    samples = samples + 1l;
    *tmp_post$1 = sample;
  }
  cnv->avg = avg;
}

// remove_dc$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 153
static void remove_dc$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1)
{
  signed int i$link1;
  signed int u;
  signed int old_e;
  signed short int x;
  signed short int y;
  signed short int w;
  signed short int s;
  signed short int old_x;
  signed short int old_y;
  old_x = cnv$link1->old_x;
  old_y = cnv$link1->old_y;
  old_e = cnv$link1->old_e;
  i$link1 = 0;
  for( ; !(i$link1 >= len$link1); i$link1 = i$link1 + 1)
  {
    x = samples$link1[(signed long int)i$link1];
    w = (signed short int)((signed int)x - (signed int)old_x);
    u = old_e + (signed int)old_y * 32100;
    s = (signed short int)(u >> 15);
    y = (signed short int)((signed int)w + (signed int)s);
    old_e = u - ((signed int)s << 15);
    old_x = x;
    old_y = y;
    samples$link1[(signed long int)i$link1] = y;
  }
  cnv$link1->old_x = old_x;
  cnv$link1->old_y = old_y;
  cnv$link1->old_e = old_e;
}

// transfer_threadproc
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 454
static void * transfer_threadproc(void *arg)
{
  struct airspy_device *device = (struct airspy_device *)arg;
  signed int error;
  struct timeval timeout = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)500000 };
  while(!(device->streaming == 0))
  {
    if(!(device->stop_requested == 0))
      break;

    error=libusb_handle_events_timeout_completed(device->usb_context, &timeout, (signed int *)(void *)0);
    if(!(error >= 0))
    {
      if(!(error == -10))
        device->streaming = 0;

    }

  }
  return (void *)0;
}

// translate_fs_4
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_float.c line 312
static void translate_fs_4(struct anonymous$8 *cnv, float *samples, signed int len)
{
  signed int i;
  float hbc = cnv->hbc;
  signed int j;
  i = 0;
  for( ; !(i >= len / 4); i = i + 1)
  {
    j = i << 2;
    samples[(signed long int)(j + 0)] = -samples[(signed long int)(j + 0)];
    samples[(signed long int)(j + 1)] = -samples[(signed long int)(j + 1)] * hbc;
    samples[(signed long int)(j + 3)] = samples[(signed long int)(j + 3)] * hbc;
  }
  fir_interleaved(cnv, samples, len);
  delay_interleaved(cnv, samples + (signed long int)1, len);
}

// translate_fs_4$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/iqconverter_int16.c line 181
static void translate_fs_4$link1(struct anonymous$0 *cnv$link1, signed short int *samples$link1, signed int len$link1)
{
  signed int i$link1 = 0;
  for( ; !(i$link1 >= len$link1); i$link1 = i$link1 + 4)
  {
    samples$link1[(signed long int)(i$link1 + 0)] = (signed short int)-((signed int)samples$link1[(signed long int)(i$link1 + 0)]);
    samples$link1[(signed long int)(i$link1 + 1)] = (signed short int)(-((signed int)samples$link1[(signed long int)(i$link1 + 1)]) >> 1);
    samples$link1[(signed long int)(i$link1 + 3)] = (signed short int)((signed int)samples$link1[(signed long int)(i$link1 + 3)] >> 1);
  }
  fir_interleaved$link1(cnv$link1, samples$link1, len$link1);
  delay_interleaved$link1(cnv$link1, samples$link1 + (signed long int)1, len$link1);
}

// unpack_samples
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 304
static inline void unpack_samples(unsigned int *input, unsigned short int *output, signed int length)
{
  signed int i;
  signed int j;
  i = 0;
  j = 0;
  for( ; !(j >= length); j = j + 8)
  {
    output[(signed long int)(j + 0)] = (unsigned short int)(input[(signed long int)i] >> 20 & (unsigned int)0xfff);
    output[(signed long int)(j + 1)] = (unsigned short int)(input[(signed long int)i] >> 8 & (unsigned int)0xfff);
    output[(signed long int)(j + 2)] = (unsigned short int)((input[(signed long int)i] & (unsigned int)0xff) << 4 | input[(signed long int)(i + 1)] >> 28 & (unsigned int)0xf);
    output[(signed long int)(j + 3)] = (unsigned short int)((input[(signed long int)(i + 1)] & (unsigned int)0xfff0000) >> 16);
    output[(signed long int)(j + 4)] = (unsigned short int)((input[(signed long int)(i + 1)] & (unsigned int)0xfff0) >> 4);
    output[(signed long int)(j + 5)] = (unsigned short int)((input[(signed long int)(i + 1)] & (unsigned int)0xf) << 8 | (input[(signed long int)(i + 2)] & 0xff000000) >> 24);
    output[(signed long int)(j + 6)] = (unsigned short int)(input[(signed long int)(i + 2)] >> 12 & (unsigned int)0xfff);
    output[(signed long int)(j + 7)] = (unsigned short int)(input[(signed long int)(i + 2)] & (unsigned int)0xfff);
    i = i + 3;
  }
}

// upper_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-airspy-host/airspy-host-1.0.7/libairspy/src/airspy.c line 554
static void upper_string(unsigned char *string, unsigned long int len)
{
  for( ; len >= 1ul; len = len - 1ul)
  {
    if((signed int)*string >= 97)
    {
      if(!((signed int)*string >= 123))
        *string = (unsigned char)((signed int)*string - 32);

    }

    string = string + 1l;
  }
}

