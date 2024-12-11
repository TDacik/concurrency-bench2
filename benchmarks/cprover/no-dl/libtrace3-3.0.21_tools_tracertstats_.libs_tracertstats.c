// #anon_enum_EMPTY=0_FULL=1
// file ior-thread.c line 69
enum anonymous_17 { EMPTY=0, FULL=1 };

// #anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10
// file /usr/include/lzma/check.h line 27
enum anonymous_14 { LZMA_CHECK_NONE=0, LZMA_CHECK_CRC32=1, LZMA_CHECK_CRC64=4, LZMA_CHECK_SHA256=10 };

// #anon_enum_LZMA_OK=0_LZMA_STREAM_END=1_LZMA_NO_CHECK=2_LZMA_UNSUPPORTED_CHECK=3_LZMA_GET_CHECK=4_LZMA_MEM_ERROR=5_LZMA_MEMLIMIT_ERROR=6_LZMA_FORMAT_ERROR=7_LZMA_OPTIONS_ERROR=8_LZMA_DATA_ERROR=9_LZMA_BUF_ERROR=10_LZMA_PROG_ERROR=11
// file /usr/include/lzma/base.h line 57
enum anonymous_12 { LZMA_OK=0, LZMA_STREAM_END=1, LZMA_NO_CHECK=2, LZMA_UNSUPPORTED_CHECK=3, LZMA_GET_CHECK=4, LZMA_MEM_ERROR=5, LZMA_MEMLIMIT_ERROR=6, LZMA_FORMAT_ERROR=7, LZMA_OPTIONS_ERROR=8, LZMA_DATA_ERROR=9, LZMA_BUF_ERROR=10, LZMA_PROG_ERROR=11 };

// #anon_enum_LZMA_RESERVED_ENUM=0
// file /usr/include/lzma/base.h line 44
enum anonymous_10 { LZMA_RESERVED_ENUM=0 };

// #anon_enum_LZMA_RUN=0_LZMA_SYNC_FLUSH=1_LZMA_FULL_FLUSH=2_LZMA_FINISH=3
// file /usr/include/lzma/base.h line 250
enum anonymous_13 { LZMA_RUN=0, LZMA_SYNC_FLUSH=1, LZMA_FULL_FLUSH=2, LZMA_FINISH=3 };

// #anon_enum_TRACE_CTRL_PACKET=112_TRACE_CTRL_EXTERNAL=101
// file ../../lib/libtrace.h line 234
enum anonymous_21 { TRACE_CTRL_PACKET=112, TRACE_CTRL_EXTERNAL=101 };

// #anon_enum_TRACE_DIR_OUTGOING=0_TRACE_DIR_INCOMING=1_TRACE_DIR_OTHER=2_TRACE_DIR_UNKNOWN=-1
// file libtrace.h line 519
enum anonymous_2 { TRACE_DIR_OUTGOING=0, TRACE_DIR_INCOMING=1, TRACE_DIR_OTHER=2, TRACE_DIR_UNKNOWN=-1 };

// #anon_enum_TRACE_DLT_ERROR=-1_TRACE_DLT_NULL=0_TRACE_DLT_EN10MB=1_TRACE_DLT_PPP=9_TRACE_DLT_ATM_RFC1483=11_TRACE_DLT_RAW=12_TRACE_DLT_OPENBSD_LOOP=108_TRACE_DLT_PPP_SERIAL=50_TRACE_DLT_LINKTYPE_RAW=101_TRACE_DLT_C_HDLC=104_TRACE_DLT_IEEE802_11=105_TRACE_DLT_LINUX_SLL=113_TRACE_DLT_PFLOG=117_TRACE_DLT_IEEE802_11_RADIO=127
// file libtrace.h line 278
enum anonymous_3 { TRACE_DLT_ERROR=-1, TRACE_DLT_NULL=0, TRACE_DLT_EN10MB=1, TRACE_DLT_PPP=9, TRACE_DLT_ATM_RFC1483=11, TRACE_DLT_RAW=12, TRACE_DLT_OPENBSD_LOOP=108, TRACE_DLT_PPP_SERIAL=50, TRACE_DLT_LINKTYPE_RAW=101, TRACE_DLT_C_HDLC=104, TRACE_DLT_IEEE802_11=105, TRACE_DLT_LINUX_SLL=113, TRACE_DLT_PFLOG=117, TRACE_DLT_IEEE802_11_RADIO=127 };

// #anon_enum_TRACE_EVENT_IOWAIT=0_TRACE_EVENT_SLEEP=1_TRACE_EVENT_PACKET=2_TRACE_EVENT_TERMINATE=3
// file libtrace.h line 1442
enum anonymous_1 { TRACE_EVENT_IOWAIT=0, TRACE_EVENT_SLEEP=1, TRACE_EVENT_PACKET=2, TRACE_EVENT_TERMINATE=3 };

// #anon_enum_TRACE_OPTION_OUTPUT_FILEFLAGS=0_TRACE_OPTION_OUTPUT_COMPRESS=1_TRACE_OPTION_OUTPUT_COMPRESSTYPE=2
// file libtrace.h line 1246
enum anonymous_0 { TRACE_OPTION_OUTPUT_FILEFLAGS=0, TRACE_OPTION_OUTPUT_COMPRESS=1, TRACE_OPTION_OUTPUT_COMPRESSTYPE=2 };

// #anon_enum_TRACE_OPTION_SNAPLEN=0_TRACE_OPTION_PROMISC=1_TRACE_OPTION_FILTER=2_TRACE_OPTION_META_FREQ=3_TRACE_OPTION_EVENT_REALTIME=4
// file libtrace.h line 1204
enum anonymous { TRACE_OPTION_SNAPLEN=0, TRACE_OPTION_PROMISC=1, TRACE_OPTION_FILTER=2, TRACE_OPTION_META_FREQ=3, TRACE_OPTION_EVENT_REALTIME=4 };

// #anon_enum_TRACE_RT_HELLO=1_TRACE_RT_START=2_TRACE_RT_ACK=3_TRACE_RT_STATUS=4_TRACE_RT_DUCK=5_TRACE_RT_END_DATA=6_TRACE_RT_CLOSE=7_TRACE_RT_DENY_CONN=8_TRACE_RT_PAUSE=9_TRACE_RT_PAUSE_ACK=10_TRACE_RT_OPTION=11_TRACE_RT_KEYCHANGE=12_TRACE_RT_DUCK_2_4=13_TRACE_RT_DUCK_2_5=14_TRACE_RT_LOSTCONN=15_TRACE_RT_SERVERSTART=16_TRACE_RT_CLIENTDROP=17_TRACE_RT_METADATA=18_TRACE_RT_DATA_SIMPLE=1000_TRACE_RT_DATA_ERF=1001_TRACE_RT_DATA_WAG=1004_TRACE_RT_DATA_LEGACY_ATM=1006_TRACE_RT_DATA_LEGACY_POS=1007_TRACE_RT_DATA_LEGACY_ETH=1008_TRACE_RT_DATA_LINUX_NATIVE=1009_TRACE_RT_DATA_TSH=1012_TRACE_RT_DATA_ATMHDR=1013_TRACE_RT_DATA_LEGACY_NZIX=1014_TRACE_RT_DATA_LINUX_RING=1015_TRACE_RT_DATA_DPDK=1017_TRACE_RT_DATA_DLT=2000_TRACE_RT_DLT_NULL=2000_TRACE_RT_DLT_EN10MB=2001_TRACE_RT_DLT_IEEE802_11=2105_TRACE_RT_DLT_LINUX_SLL=2113_TRACE_RT_DLT_PFLOG=2117_TRACE_RT_DLT_ATM_RFC1483=2011_TRACE_RT_DATA_DLT_END=2999_TRACE_RT_DATA_BPF=3000_TRACE_RT_BPF_NULL=3000_TRACE_RT_BPF_EN10MB=3001_TRACE_RT_BPF_IEEE802_11=3105_TRACE_RT_BPF_PFLOG=3117_TRACE_RT_BPF_ATM_RFC1483=3011_TRACE_RT_DATA_BPF_END=3999_TRACE_RT_LAST=4000
// file ../../lib/libtrace.h line 362
enum anonymous_20 { TRACE_RT_HELLO=1, TRACE_RT_START=2, TRACE_RT_ACK=3, TRACE_RT_STATUS=4, TRACE_RT_DUCK=5, TRACE_RT_END_DATA=6, TRACE_RT_CLOSE=7, TRACE_RT_DENY_CONN=8, TRACE_RT_PAUSE=9, TRACE_RT_PAUSE_ACK=10, TRACE_RT_OPTION=11, TRACE_RT_KEYCHANGE=12, TRACE_RT_DUCK_2_4=13, TRACE_RT_DUCK_2_5=14, TRACE_RT_LOSTCONN=15, TRACE_RT_SERVERSTART=16, TRACE_RT_CLIENTDROP=17, TRACE_RT_METADATA=18, TRACE_RT_DATA_SIMPLE=1000, TRACE_RT_DATA_ERF=1001, TRACE_RT_DATA_WAG=1004, TRACE_RT_DATA_LEGACY_ATM=1006, TRACE_RT_DATA_LEGACY_POS=1007, TRACE_RT_DATA_LEGACY_ETH=1008, TRACE_RT_DATA_LINUX_NATIVE=1009, TRACE_RT_DATA_TSH=1012, TRACE_RT_DATA_ATMHDR=1013, TRACE_RT_DATA_LEGACY_NZIX=1014, TRACE_RT_DATA_LINUX_RING=1015, TRACE_RT_DATA_DPDK=1017, TRACE_RT_DATA_DLT=2000, TRACE_RT_DLT_NULL=2000, TRACE_RT_DLT_EN10MB=2001, TRACE_RT_DLT_IEEE802_11=2105, TRACE_RT_DLT_LINUX_SLL=2113, TRACE_RT_DLT_PFLOG=2117, TRACE_RT_DLT_ATM_RFC1483=2011, TRACE_RT_DATA_DLT_END=2999, TRACE_RT_DATA_BPF=3000, TRACE_RT_BPF_NULL=3000, TRACE_RT_BPF_EN10MB=3001, TRACE_RT_BPF_IEEE802_11=3105, TRACE_RT_BPF_PFLOG=3117, TRACE_RT_BPF_ATM_RFC1483=3011, TRACE_RT_DATA_BPF_END=3999, TRACE_RT_LAST=4000 };

// #anon_enum_TRACE_TYPE_UNKNOWN=-1_TRACE_TYPE_HDLC_POS=1_TRACE_TYPE_ETH=2_TRACE_TYPE_ATM=3_TRACE_TYPE_80211=4_TRACE_TYPE_NONE=5_TRACE_TYPE_LINUX_SLL=6_TRACE_TYPE_PFLOG=7_TRACE_TYPE_POS=9_TRACE_TYPE_80211_PRISM=12_TRACE_TYPE_AAL5=13_TRACE_TYPE_DUCK=14_TRACE_TYPE_80211_RADIO=15_TRACE_TYPE_LLCSNAP=16_TRACE_TYPE_PPP=17_TRACE_TYPE_METADATA=18_TRACE_TYPE_NONDATA=19_TRACE_TYPE_OPENBSD_LOOP=20
// file ../../lib/libtrace.h line 312
enum anonymous_22 { TRACE_TYPE_UNKNOWN=-1, TRACE_TYPE_HDLC_POS=1, TRACE_TYPE_ETH=2, TRACE_TYPE_ATM=3, TRACE_TYPE_80211=4, TRACE_TYPE_NONE=5, TRACE_TYPE_LINUX_SLL=6, TRACE_TYPE_PFLOG=7, TRACE_TYPE_POS=9, TRACE_TYPE_80211_PRISM=12, TRACE_TYPE_AAL5=13, TRACE_TYPE_DUCK=14, TRACE_TYPE_80211_RADIO=15, TRACE_TYPE_LLCSNAP=16, TRACE_TYPE_PPP=17, TRACE_TYPE_METADATA=18, TRACE_TYPE_NONDATA=19, TRACE_TYPE_OPENBSD_LOOP=20 };

// #anon_enum_TYPE_str=0_TYPE_int=1_TYPE_float=2_TYPE_time=3
// file output.h line 10
enum anonymous_18 { TYPE_str=0, TYPE_int=1, TYPE_float=2, TYPE_time=3 };

// tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]
// file /usr/include/lzma/base.h line 349
struct anonymous_9;

// tag-#anon#ST[*{S8}_S8_'next_in'||U32'avail_in'||U32'total_in_lo32'||U32'total_in_hi32'||U32'_pad0'||*{S8}_S8_'next_out'||U32'avail_out'||U32'total_out_lo32'||U32'total_out_hi32'||U32'_pad1'||*{V}_V_'state'||*{*{V}_V_(*{V}_V_|S32|S32)->*{V}_V_}_*{V}_V_(*{V}_V_|S32|S32)->*{V}_V__'bzalloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'bzfree'||*{V}_V_'opaque'|]
// file /usr/include/bzlib.h line 49
struct anonymous_8;

// tag-#anon#ST[*{cS8}_cS8_'name'||*{S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|*{V}_V_|S64)->S64}_S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|*{V}_V_|S64)->S64_'read'||*{S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|*{V}_V_|S64)->S64}_S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|*{V}_V_|S64)->S64_'peek'||*{S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_)->S64}_S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_)->S64_'tell'||*{S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|S64|S32)->S64}_S64(*{SYM#tag-io_t#}_SYM#tag-io_t#_|S64|S32)->S64_'seek'||*{V(*{SYM#tag-io_t#}_SYM#tag-io_t#_)->V}_V(*{SYM#tag-io_t#}_SYM#tag-io_t#_)->V_'close'|]
// file wandio.h line 82
struct anonymous_6;

// tag-#anon#ST[*{cS8}_cS8_'name'||*{S64(*{SYM#tag-iow_t#}_SYM#tag-iow_t#_|*{cS8}_cS8_|S64)->S64}_S64(*{SYM#tag-iow_t#}_SYM#tag-iow_t#_|*{cS8}_cS8_|S64)->S64_'write'||*{V(*{SYM#tag-iow_t#}_SYM#tag-iow_t#_)->V}_V(*{SYM#tag-iow_t#}_SYM#tag-iow_t#_)->V_'close'|]
// file wandio.h line 134
struct anonymous_7;

// tag-#anon#ST[*{cU8}_cU8_'next_in'||U64'avail_in'||U64'total_in'||*{U8}_U8_'next_out'||U64'avail_out'||U64'total_out'||*{SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#}_SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#_'allocator'||*{SYM#tag-lzma_internal_s#}_SYM#tag-lzma_internal_s#_'internal'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'||*{V}_V_'reserved_ptr3'||*{V}_V_'reserved_ptr4'||U64'reserved_int1'||U64'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'|]
// file /usr/include/lzma/base.h line 461
struct anonymous_11;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_16;

// tag-#anon#UN[*{S8}_S8_'d_str'||U64'd_int'||F64'd_float'||F64'd_time'|]
// file output.h line 11
union anonymous_19;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_15;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_5;

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

// tag-base_format_t
// file libtrace.h line 341
enum base_format_t { TRACE_FORMAT_ERF=1, TRACE_FORMAT_PCAP=2, TRACE_FORMAT_PCAPFILE=3, TRACE_FORMAT_WAG=4, TRACE_FORMAT_RT=5, TRACE_FORMAT_LEGACY_ATM=6, TRACE_FORMAT_LEGACY_POS=7, TRACE_FORMAT_LEGACY_ETH=8, TRACE_FORMAT_LINUX_NATIVE=9, TRACE_FORMAT_DUCK=10, TRACE_FORMAT_BPF=11, TRACE_FORMAT_TSH=12, TRACE_FORMAT_ATMHDR=13, TRACE_FORMAT_LEGACY_NZIX=14, TRACE_FORMAT_LINUX_RING=15, TRACE_FORMAT_RAWERF=16, TRACE_FORMAT_DPDK=17 };

// tag-bpf_insn
// file /usr/include/pcap/bpf.h line 108
struct bpf_insn;

// tag-bpf_jit_t
// file libtrace_int.h line 917
struct bpf_jit_t;

// tag-bpf_program
// file /usr/include/pcap/bpf.h line 106
struct bpf_program;

// tag-buffer_t
// file ior-thread.c line 66
struct buffer_t;

// tag-bz_t
// file ior-bzip.c line 52
struct bz_t;

// tag-bzw_t
// file iow-bzip.c line 50
struct bzw_t;

// tag-data_t
// file output.h line 9
struct data_t;

// tag-err_t
// file ior-zlib.c line 46
enum err_t { ERR_OK=1, ERR_EOF=0, ERR_ERROR=-1 };

// tag-filter_t
// file tracertstats.c line 70
struct filter_t;

// tag-internal_state
// file /usr/include/zlib.h line 83
struct internal_state;

// tag-io_t
// file wandio.h line 64
struct io_t;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-iow_t
// file wandio.h line 65
struct iow_t;

// tag-libtrace_event_status_t
// file libtrace_int.h line 154
struct libtrace_event_status_t;

// tag-libtrace_eventobj_t
// file libtrace.h line 1450
struct libtrace_eventobj_t;

// tag-libtrace_filter_t
// file libtrace.h line 224
struct libtrace_filter_t;

// tag-libtrace_format_t
// file libtrace_int.h line 174
struct libtrace_format_t;

// tag-libtrace_out_t
// file libtrace.h line 218
struct libtrace_out_t;

// tag-libtrace_packet_t
// file ../../lib/libtrace.h line 492
struct libtrace_packet_t;

// tag-libtrace_pcapfile_pkt_hdr_t
// file libtrace_int.h line 926
struct libtrace_pcapfile_pkt_hdr_t;

// tag-libtrace_t
// file libtrace.h line 221
struct libtrace_t;

// tag-lzma_internal_s
// file /usr/include/lzma/base.h line 419
struct lzma_internal_s;

// tag-lzma_t
// file ior-lzma.c line 52
struct lzma_t;

// tag-lzmaw_t
// file iow-lzma.c line 51
struct lzmaw_t;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-output_data_t
// file output.h line 19
struct output_data_t;

// tag-output_type_t
// file output.h line 24
struct output_type_t;

// tag-pcap
// file /usr/include/pcap/pcap.h line 79
struct pcap;

// tag-peek_t
// file ior-peek.c line 61
struct peek_t;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-state_t
// file ior-thread.c line 72
struct state_t_0;

// tag-state_t_link1
// file iow-thread.c line 72
struct state_t;

// tag-stdio_t
// file ior-stdio.c line 48
struct stdio_t;

// tag-stdiow_t
// file iow-stdio.c line 52
struct stdiow_t;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-trace_err_t
// file libtrace.h line 243
struct trace_err_t;

// tag-wandio_compression_type
// file wandio.h line 68
struct wandio_compression_type;

// tag-z_stream_s
// file /usr/include/zlib.h line 85
struct z_stream_s;

// tag-zlib_t
// file ior-zlib.c line 52
struct zlib_t;

// tag-zlibw_t
// file iow-zlib.c line 52
struct zlibw_t;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// BZ2_bzCompress
// file /usr/include/bzlib.h line 107
extern signed int BZ2_bzCompress(struct anonymous_8 *, signed int);
// BZ2_bzCompressEnd
// file /usr/include/bzlib.h line 112
extern signed int BZ2_bzCompressEnd(struct anonymous_8 *);
// BZ2_bzCompressInit
// file /usr/include/bzlib.h line 100
extern signed int BZ2_bzCompressInit(struct anonymous_8 *, signed int, signed int, signed int);
// BZ2_bzDecompress
// file /usr/include/bzlib.h line 122
extern signed int BZ2_bzDecompress(struct anonymous_8 *);
// BZ2_bzDecompressEnd
// file /usr/include/bzlib.h line 126
extern signed int BZ2_bzDecompressEnd(struct anonymous_8 *);
// BZ2_bzDecompressInit
// file /usr/include/bzlib.h line 116
extern signed int BZ2_bzDecompressInit(struct anonymous_8 *, signed int, signed int);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// alignedrealloc
// file ior-peek.c line 223
static void * alignedrealloc(void *old, unsigned long int oldsize, unsigned long int size, signed int *res);
// atmhdr_constructor
// file libtrace_int.h line 954
void atmhdr_constructor(void);
// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bpf_constructor
// file libtrace_int.h line 957
void bpf_constructor(void);
// bpf_filter
// file /usr/include/pcap/bpf.h line 1497
extern unsigned int bpf_filter(struct bpf_insn *, const unsigned char *, unsigned int, unsigned int);
// bz_close
// file ior-bzip.c line 144
static void bz_close(struct io_t *io);
// bz_open
// file wandio.h line 194
struct io_t * bz_open(struct io_t *parent);
// bz_read
// file ior-bzip.c line 94
static signed long int bz_read(struct io_t *io, void *buffer, signed long int len);
// bz_wclose
// file iow-bzip.c line 138
static void bz_wclose(struct iow_t *iow);
// bz_wopen
// file wandio.h line 202
struct iow_t * bz_wopen(struct iow_t *child, signed int compress_level);
// bz_wwrite
// file iow-bzip.c line 93
static signed long int bz_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// create_io_reader
// file wandio.c line 134
static struct io_t * create_io_reader(const char *filename, signed int autodetect);
// create_output
// file tracertstats.c line 100
static void create_output(char *title);
// deflate
// file /usr/include/zlib.h line 246
extern signed int deflate(struct z_stream_s *, signed int);
// deflateEnd
// file /usr/include/zlib.h line 353
extern signed int deflateEnd(struct z_stream_s *);
// deflateInit2_
// file /usr/include/zlib.h line 1637
extern signed int deflateInit2_(struct z_stream_s *, signed int, signed int, signed int, signed int, signed int, const char *, signed int);
// demote_packet
// file libtrace_int.h line 853
_Bool demote_packet(struct libtrace_packet_t *);
// do_option
// file wandio.c line 75
static void do_option(const char *option);
// duck_constructor
// file libtrace_int.h line 952
void duck_constructor(void);
// erf_constructor
// file libtrace_int.h line 938
void erf_constructor(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fchown
// file /usr/include/unistd.h line 478
extern signed int fchown(signed int, unsigned int, unsigned int);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// guess_format
// file trace.c line 175
static void guess_format(struct libtrace_t *libtrace, const char *filename);
// inflate
// file /usr/include/zlib.h line 392
extern signed int inflate(struct z_stream_s *, signed int);
// inflateEnd
// file /usr/include/zlib.h line 508
extern signed int inflateEnd(struct z_stream_s *);
// inflateInit2_
// file /usr/include/zlib.h line 1641
extern signed int inflateInit2_(struct z_stream_s *, signed int, const char *, signed int);
// legacy_constructor
// file libtrace_int.h line 942
void legacy_constructor(void);
// libtrace_to_pcap_dlt
// file libtrace_int.h line 785
enum anonymous_3 libtrace_to_pcap_dlt(enum anonymous_22);
// libtrace_to_pcap_linktype
// file libtrace_int.h line 777
enum anonymous_3 libtrace_to_pcap_linktype(enum anonymous_22);
// linuxnative_constructor
// file libtrace_int.h line 944
void linuxnative_constructor(void);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// lzma_auto_decoder
// file /usr/include/lzma/container.h line 361
extern enum anonymous_12 lzma_auto_decoder(struct anonymous_11 *, unsigned long int, unsigned int);
// lzma_close
// file ior-lzma.c line 149
static void lzma_close(struct io_t *io);
// lzma_code
// file /usr/include/lzma/base.h line 537
extern enum anonymous_12 lzma_code(struct anonymous_11 *, enum anonymous_13);
// lzma_easy_encoder
// file /usr/include/lzma/container.h line 133
extern enum anonymous_12 lzma_easy_encoder(struct anonymous_11 *, unsigned int, enum anonymous_14);
// lzma_end
// file /usr/include/lzma/base.h line 554
extern void lzma_end(struct anonymous_11 *);
// lzma_open
// file wandio.h line 197
struct io_t * lzma_open(struct io_t *parent);
// lzma_read
// file ior-lzma.c line 91
static signed long int lzma_read(struct io_t *io, void *buffer, signed long int len);
// lzma_wclose
// file iow-lzma.c line 137
static void lzma_wclose(struct iow_t *iow);
// lzma_wopen
// file wandio.h line 204
struct iow_t * lzma_wopen(struct iow_t *child, signed int compress_level);
// lzma_wwrite
// file iow-lzma.c line 93
static signed long int lzma_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
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
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// output_add_column
// file output.h line 41
void output_add_column(struct output_data_t *out, char *col);
// output_csv_destroy
// file output_csv.c line 42
static void output_csv_destroy(struct output_data_t *out);
// output_csv_flush
// file output_csv.c line 18
static void output_csv_flush(struct output_data_t *out);
// output_csv_init
// file output_csv.c line 7
static void output_csv_init(struct output_data_t *out);
// output_destroy
// file output.h line 48
void output_destroy(struct output_data_t *out);
// output_flush_headings
// file output.h line 42
void output_flush_headings(struct output_data_t *out);
// output_flush_row
// file output.h line 47
void output_flush_row(struct output_data_t *out);
// output_html_destroy
// file output_html.c line 59
static void output_html_destroy(struct output_data_t *out);
// output_html_flush
// file output_html.c line 35
static void output_html_flush(struct output_data_t *out);
// output_html_init
// file output_html.c line 7
static void output_html_init(struct output_data_t *out);
// output_init
// file output.h line 40
struct output_data_t * output_init(char *title, char *type);
// output_set_data_float
// file output.c line 66
void output_set_data_float(struct output_data_t *out, signed int col, double data);
// output_set_data_int
// file output.h line 43
void output_set_data_int(struct output_data_t *out, signed int col, unsigned long int data);
// output_set_data_str
// file output.c line 64
void output_set_data_str(struct output_data_t *out, signed int col, char *data);
// output_set_data_time
// file output.h line 46
void output_set_data_time(struct output_data_t *out, signed int col, double data);
// output_txt_destroy
// file output_txt.c line 50
static void output_txt_destroy(struct output_data_t *out);
// output_txt_flush
// file output_txt.c line 27
static void output_txt_flush(struct output_data_t *out);
// output_txt_init
// file output_txt.c line 10
static void output_txt_init(struct output_data_t *out);
// parse_env
// file wandio.c line 100
static void parse_env(void);
// pcap_close
// file /usr/include/pcap/pcap.h line 371
void pcap_close(struct pcap *);
// pcap_compile
// file /usr/include/pcap/pcap.h line 389
signed int pcap_compile(struct pcap *, struct bpf_program *, const char *, signed int, unsigned int);
// pcap_constructor
// file libtrace_int.h line 946
void pcap_constructor(void);
// pcap_freecode
// file /usr/include/pcap/pcap.h line 393
void pcap_freecode(struct bpf_program *);
// pcap_geterr
// file /usr/include/pcap/pcap.h line 387
char * pcap_geterr(struct pcap *);
// pcap_linktype_to_rt
// file libtrace_int.h line 769
enum anonymous_20 pcap_linktype_to_rt(enum anonymous_3);
// pcap_open_dead
// file /usr/include/pcap/pcap.h line 350
struct pcap * pcap_open_dead(signed int, signed int);
// pcapfile_constructor
// file libtrace_int.h line 948
void pcapfile_constructor(void);
// peek_close
// file ior-peek.c line 304
static void peek_close(struct io_t *io);
// peek_open
// file wandio.h line 198
struct io_t * peek_open(struct io_t *child);
// peek_peek
// file ior-peek.c line 250
static signed long int peek_peek(struct io_t *io, void *buffer, signed long int len);
// peek_read
// file ior-peek.c line 152
static signed long int peek_read(struct io_t *io, void *buffer, signed long int len);
// peek_seek
// file ior-peek.c line 297
static signed long int peek_seek(struct io_t *io, signed long int offset, signed int whence);
// peek_tell
// file ior-peek.c line 290
static signed long int peek_tell(struct io_t *io);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// posix_memalign
// file /usr/include/stdlib.h line 503
extern signed int posix_memalign(void **, unsigned long int, unsigned long int);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_4 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_4 *, const union anonymous_15 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_4 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_4 *, union anonymous_5 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_5 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_5 *, const union anonymous_15 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_5 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// refill_buffer
// file ior-peek.c line 94
static signed long int refill_buffer(struct io_t *io, signed long int len);
// register_format
// file trace.c line 1859
void register_format(struct libtrace_format_t *f);
// report_results
// file tracertstats.c line 86
static void report_results(double ts, unsigned long int count, unsigned long int bytes);
// rt_constructor
// file libtrace_int.h line 950
void rt_constructor(void);
// run_trace
// file tracertstats.c line 123
static void run_trace(char *uri);
// safe_open
// file iow-stdio.c line 62
static signed int safe_open(const char *filename, signed int flags);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stdio_close
// file ior-stdio.c line 95
static void stdio_close(struct io_t *io);
// stdio_open
// file wandio.h line 199
struct io_t * stdio_open(const char *filename);
// stdio_read
// file ior-stdio.c line 80
static signed long int stdio_read(struct io_t *io, void *buffer, signed long int len);
// stdio_seek
// file ior-stdio.c line 90
static signed long int stdio_seek(struct io_t *io, signed long int offset, signed int whence);
// stdio_tell
// file ior-stdio.c line 85
static signed long int stdio_tell(struct io_t *io);
// stdio_wclose
// file iow-stdio.c line 214
static void stdio_wclose(struct iow_t *iow);
// stdio_wopen
// file wandio.h line 206
struct iow_t * stdio_wopen(const char *filename, signed int flags);
// stdio_wwrite
// file iow-stdio.c line 146
static signed long int stdio_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// thread_close
// file ior-thread.c line 260
static void thread_close(struct io_t *io);
// thread_consumer
// file iow-thread.c line 98
static void * thread_consumer(void *userdata);
// thread_open
// file wandio.h line 196
struct io_t * thread_open(struct io_t *parent);
// thread_producer
// file ior-thread.c line 98
static void * thread_producer(void *userdata);
// thread_read
// file ior-thread.c line 196
static signed long int thread_read(struct io_t *state, void *buffer, signed long int len);
// thread_wclose
// file iow-thread.c line 242
static void thread_wclose(struct iow_t *iow);
// thread_wopen
// file wandio.h line 205
struct iow_t * thread_wopen(struct iow_t *child);
// thread_wwrite
// file iow-thread.c line 188
static signed long int thread_wwrite(struct iow_t *state, const char *buffer, signed long int len);
// trace_apply_filter
// file ../../lib/libtrace.h line 2885
signed int trace_apply_filter(struct libtrace_filter_t *filter, const struct libtrace_packet_t *packet);
// trace_bpf_compile
// file trace.c line 1204
static signed int trace_bpf_compile(struct libtrace_filter_t *filter, const struct libtrace_packet_t *packet, void *linkptr, enum anonymous_22 linktype);
// trace_clear_cache
// file trace.c line 1838
void trace_clear_cache(struct libtrace_packet_t *packet);
// trace_config
// file trace.c line 498
signed int trace_config(struct libtrace_t *libtrace, enum anonymous option, void *value);
// trace_config_output
// file trace.c line 568
signed int trace_config_output(struct libtrace_out_t *libtrace, enum anonymous_0 option, void *value);
// trace_construct_packet
// file trace.c line 1749
void trace_construct_packet(struct libtrace_packet_t *packet, enum anonymous_22 linktype, const void *data, unsigned short int len);
// trace_copy_packet
// file trace.c line 645
struct libtrace_packet_t * trace_copy_packet(const struct libtrace_packet_t *packet);
// trace_create
// file ../../lib/libtrace.h line 1140
struct libtrace_t * trace_create(const char *uri);
// trace_create_dead
// file trace.c line 321
struct libtrace_t * trace_create_dead(const char *uri);
// trace_create_filter
// file ../../lib/libtrace.h line 2860
struct libtrace_filter_t * trace_create_filter(const char *filterstring);
// trace_create_filter_from_bytecode
// file trace.c line 1139
struct libtrace_filter_t * trace_create_filter_from_bytecode(void *bf_insns, unsigned int bf_len);
// trace_create_output
// file trace.c line 380
struct libtrace_out_t * trace_create_output(const char *uri);
// trace_create_packet
// file ../../lib/libtrace.h line 1397
struct libtrace_packet_t * trace_create_packet(void);
// trace_destroy
// file ../../lib/libtrace.h line 1275
void trace_destroy(struct libtrace_t *libtrace);
// trace_destroy_dead
// file trace.c line 611
void trace_destroy_dead(struct libtrace_t *libtrace);
// trace_destroy_filter
// file trace.c line 1181
void trace_destroy_filter(struct libtrace_filter_t *filter);
// trace_destroy_output
// file trace.c line 625
void trace_destroy_output(struct libtrace_out_t *libtrace);
// trace_destroy_packet
// file ../../lib/libtrace.h line 1417
void trace_destroy_packet(struct libtrace_packet_t *packet);
// trace_ether_aton
// file trace.c line 1723
unsigned char * trace_ether_aton(const char *buf, unsigned char *addr);
// trace_ether_ntoa
// file trace.c line 1711
char * trace_ether_ntoa(const unsigned char *addr, char *buf);
// trace_event
// file trace.c line 1103
struct libtrace_eventobj_t trace_event(struct libtrace_t *trace, struct libtrace_packet_t *packet);
// trace_get_accepted_packets
// file trace.c line 1832
unsigned long int trace_get_accepted_packets(struct libtrace_t *trace);
// trace_get_capture_length
// file trace.c line 1024
unsigned long int trace_get_capture_length(const struct libtrace_packet_t *packet);
// trace_get_direction
// file trace.c line 1372
enum anonymous_2 trace_get_direction(const struct libtrace_packet_t *packet);
// trace_get_dropped_packets
// file trace.c line 1823
unsigned long int trace_get_dropped_packets(struct libtrace_t *trace);
// trace_get_erf_timestamp
// file trace.c line 890
unsigned long int trace_get_erf_timestamp(const struct libtrace_packet_t *packet);
// trace_get_err
// file trace.c line 1555
struct trace_err_t trace_get_err(struct libtrace_t *trace);
// trace_get_err_output
// file trace.c line 1594
struct trace_err_t trace_get_err_output(struct libtrace_out_t *trace);
// trace_get_filtered_packets
// file trace.c line 1813
unsigned long int trace_get_filtered_packets(struct libtrace_t *trace);
// trace_get_format
// file trace.c line 1548
enum base_format_t trace_get_format(struct libtrace_packet_t *packet);
// trace_get_framing_length
// file trace.c line 1068
unsigned long int trace_get_framing_length(const struct libtrace_packet_t *packet);
// trace_get_link
// file trace.c line 881
void * trace_get_link(const struct libtrace_packet_t *packet);
// trace_get_link_type
// file trace.c line 1080
enum anonymous_22 trace_get_link_type(const struct libtrace_packet_t *packet);
// trace_get_packet_buffer
// file ../../lib/libtrace.h line 1557
void * trace_get_packet_buffer(const struct libtrace_packet_t *packet, enum anonymous_22 *linktype, unsigned int *remaining);
// trace_get_received_packets
// file trace.c line 1804
unsigned long int trace_get_received_packets(struct libtrace_t *trace);
// trace_get_seconds
// file ../../lib/libtrace.h line 2657
double trace_get_seconds(const struct libtrace_packet_t *packet);
// trace_get_server_port
// file trace.c line 1395
signed char trace_get_server_port(unsigned char protocol, unsigned short int source, unsigned short int dest);
// trace_get_timespec
// file trace.c line 958
struct timespec trace_get_timespec(const struct libtrace_packet_t *packet);
// trace_get_timeval
// file trace.c line 925
struct timeval trace_get_timeval(const struct libtrace_packet_t *packet);
// trace_get_wire_length
// file ../../lib/libtrace.h line 2759
unsigned long int trace_get_wire_length(const struct libtrace_packet_t *packet);
// trace_help
// file ../../lib/libtrace.h line 1081
void trace_help(void);
// trace_init
// file trace.c line 131
static void trace_init(void);
// trace_interrupt
// file trace.c line 1855
void trace_interrupt(void);
// trace_is_err
// file ../../lib/libtrace.h line 1302
_Bool trace_is_err(struct libtrace_t *trace);
// trace_is_err_output
// file trace.c line 1602
_Bool trace_is_err_output(struct libtrace_out_t *trace);
// trace_parse_uri
// file trace.c line 1525
const char * trace_parse_uri(const char *uri, char **format);
// trace_pause
// file trace.c line 485
signed int trace_pause(struct libtrace_t *libtrace);
// trace_perror
// file ../../lib/libtrace.h line 1311
void trace_perror(struct libtrace_t *trace, const char *msg, ...);
// trace_perror_output
// file trace.c line 1609
void trace_perror_output(struct libtrace_out_t *trace, const char *msg, ...);
// trace_prepare_packet
// file trace.c line 777
signed int trace_prepare_packet(struct libtrace_t *trace, struct libtrace_packet_t *packet, void *buffer, enum anonymous_20 rt_type, unsigned int flags);
// trace_read_packet
// file ../../lib/libtrace.h line 1437
signed int trace_read_packet(struct libtrace_t *libtrace, struct libtrace_packet_t *packet);
// trace_seek_erf_timestamp
// file trace.c line 1628
signed int trace_seek_erf_timestamp(struct libtrace_t *trace, unsigned long int ts);
// trace_seek_seconds
// file trace.c line 1663
signed int trace_seek_seconds(struct libtrace_t *trace, double seconds);
// trace_seek_timeval
// file trace.c line 1688
signed int trace_seek_timeval(struct libtrace_t *trace, struct timeval tv);
// trace_set_capture_length
// file trace.c line 1507
unsigned long int trace_set_capture_length(struct libtrace_packet_t *packet, unsigned long int size);
// trace_set_direction
// file trace.c line 1354
enum anonymous_2 trace_set_direction(struct libtrace_packet_t *packet, enum anonymous_2 direction);
// trace_set_err
// file libtrace_int.h line 221
void trace_set_err(struct libtrace_t *, signed int, const char *, ...);
// trace_set_err_out
// file libtrace_int.h line 230
void trace_set_err_out(struct libtrace_out_t *, signed int, const char *, ...);
// trace_start
// file ../../lib/libtrace.h line 1181
signed int trace_start(struct libtrace_t *libtrace);
// trace_start_output
// file trace.c line 471
signed int trace_start_output(struct libtrace_out_t *libtrace);
// trace_write_packet
// file trace.c line 813
signed int trace_write_packet(struct libtrace_out_t *libtrace, struct libtrace_packet_t *packet);
// tsh_constructor
// file libtrace_int.h line 940
void tsh_constructor(void);
// usage
// file tracertstats.c line 205
static void usage(char *argv0);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// wandio_create
// file wandio.c line 224
struct io_t * wandio_create(const char *filename);
// wandio_create_uncompressed
// file wandio.c line 229
struct io_t * wandio_create_uncompressed(const char *filename);
// wandio_destroy
// file wandio.c line 278
void wandio_destroy(struct io_t *io);
// wandio_lookup_compression_type
// file wandio.c line 210
struct wandio_compression_type * wandio_lookup_compression_type(const char *name);
// wandio_peek
// file wandio.c line 263
signed long int wandio_peek(struct io_t *io, void *buffer, signed long int len);
// wandio_read
// file wandio.c line 253
signed long int wandio_read(struct io_t *io, void *buffer, signed long int len);
// wandio_seek
// file wandio.c line 244
signed long int wandio_seek(struct io_t *io, signed long int offset, signed int whence);
// wandio_tell
// file wandio.c line 235
signed long int wandio_tell(struct io_t *io);
// wandio_wcreate
// file wandio.c line 288
struct iow_t * wandio_wcreate(const char *filename, signed int compress_type, signed int compression_level, signed int flags);
// wandio_wdestroy
// file wandio.c line 341
void wandio_wdestroy(struct iow_t *iow);
// wandio_wwrite
// file wandio.c line 333
signed long int wandio_wwrite(struct iow_t *iow, const void *buffer, signed long int len);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);
// xstrncpy
// file trace.c line 112
static void xstrncpy(char *dest, const char *src, unsigned long int n);
// xstrndup
// file trace.c line 118
static char * xstrndup(const char *src, unsigned long int n);
// zlib_close
// file ior-zlib.c line 156
static void zlib_close(struct io_t *io);
// zlib_open
// file wandio.h line 195
struct io_t * zlib_open(struct io_t *parent);
// zlib_read
// file ior-zlib.c line 92
static signed long int zlib_read(struct io_t *io, void *buffer, signed long int len);
// zlib_wclose
// file iow-zlib.c line 143
static void zlib_wclose(struct iow_t *iow);
// zlib_wopen
// file wandio.h line 201
struct iow_t * zlib_wopen(struct iow_t *child, signed int compress_level);
// zlib_wwrite
// file iow-zlib.c line 98
static signed long int zlib_wwrite(struct iow_t *iow, const char *buffer, signed long int len);

struct anonymous_9
{
  // alloc
  void * (*alloc)(void *, unsigned long int, unsigned long int);
  // free
  void (*free)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous_8
{
  // next_in
  char *next_in;
  // avail_in
  unsigned int avail_in;
  // total_in_lo32
  unsigned int total_in_lo32;
  // total_in_hi32
  unsigned int total_in_hi32;
  // next_out
  char *next_out;
  // avail_out
  unsigned int avail_out;
  // total_out_lo32
  unsigned int total_out_lo32;
  // total_out_hi32
  unsigned int total_out_hi32;
  // state
  void *state;
  // bzalloc
  void * (*bzalloc)(void *, signed int, signed int);
  // bzfree
  void (*bzfree)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous_6
{
  // name
  const char *name;
  // read
  signed long int (*read)(struct io_t *, void *, signed long int);
  // peek
  signed long int (*peek)(struct io_t *, void *, signed long int);
  // tell
  signed long int (*tell)(struct io_t *);
  // seek
  signed long int (*seek)(struct io_t *, signed long int, signed int);
  // close
  void (*close)(struct io_t *);
};

struct anonymous_7
{
  // name
  const char *name;
  // write
  signed long int (*write)(struct iow_t *, const char *, signed long int);
  // close
  void (*close)(struct iow_t *);
};

struct anonymous_11
{
  // next_in
  const unsigned char *next_in;
  // avail_in
  unsigned long int avail_in;
  // total_in
  unsigned long int total_in;
  // next_out
  unsigned char *next_out;
  // avail_out
  unsigned long int avail_out;
  // total_out
  unsigned long int total_out;
  // allocator
  struct anonymous_9 *allocator;
  // internal
  struct lzma_internal_s *internal;
  // reserved_ptr1
  void *reserved_ptr1;
  // reserved_ptr2
  void *reserved_ptr2;
  // reserved_ptr3
  void *reserved_ptr3;
  // reserved_ptr4
  void *reserved_ptr4;
  // reserved_int1
  unsigned long int reserved_int1;
  // reserved_int2
  unsigned long int reserved_int2;
  // reserved_int3
  unsigned long int reserved_int3;
  // reserved_int4
  unsigned long int reserved_int4;
  // reserved_enum1
  enum anonymous_10 reserved_enum1;
  // reserved_enum2
  enum anonymous_10 reserved_enum2;
};

struct anonymous_16
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

union anonymous_19
{
  // d_str
  char *d_str;
  // d_int
  unsigned long int d_int;
  // d_float
  double d_float;
  // d_time
  double d_time;
};

union anonymous_15
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_4
{
  // __data
  struct anonymous_16 __data;
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

union anonymous_5
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

struct bpf_insn
{
  // code
  unsigned short int code;
  // jt
  unsigned char jt;
  // jf
  unsigned char jf;
  // k
  unsigned int k;
};

struct bpf_program
{
  // bf_len
  unsigned int bf_len;
  // bf_insns
  struct bpf_insn *bf_insns;
};

struct buffer_t
{
  // buffer
  char buffer[1048576l];
  // len
  signed int len;
  // state
  enum anonymous_17 state;
};

struct bz_t
{
  // strm
  struct anonymous_8 strm;
  // inbuff
  char inbuff[1048576l];
  // outoffset
  signed int outoffset;
  // parent
  struct io_t *parent;
  // err
  enum err_t err;
};

struct bzw_t
{
  // strm
  struct anonymous_8 strm;
  // outbuff
  char outbuff[1048576l];
  // inoffset
  signed int inoffset;
  // child
  struct iow_t *child;
  // err
  enum err_t err;
};

struct data_t
{
  // type
  enum anonymous_18 type;
  // d
  union anonymous_19 d;
};

struct filter_t
{
  // expr
  char *expr;
  // filter
  struct libtrace_filter_t *filter;
  // count
  unsigned long int count;
  // bytes
  unsigned long int bytes;
};

struct internal_state
{
  // dummy
  signed int dummy;
};

struct io_t
{
  // source
  struct anonymous_6 *source;
  // data
  void *data;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct iow_t
{
  // source
  struct anonymous_7 *source;
  // data
  void *data;
};

struct libtrace_event_status_t
{
  // packet
  struct libtrace_packet_t *packet;
  // tdelta
  double tdelta;
  // trace_last_ts
  double trace_last_ts;
  // psize
  signed int psize;
  // waiting
  _Bool waiting;
};

struct libtrace_eventobj_t
{
  // type
  enum anonymous_1 type;
  // fd
  signed int fd;
  // seconds
  double seconds;
  // size
  signed int size;
};

struct libtrace_filter_t
{
  // filter
  struct bpf_program filter;
  // filterstring
  char *filterstring;
  // flag
  signed int flag;
  // jitfilter
  struct bpf_jit_t *jitfilter;
};

struct libtrace_format_t
{
  // name
  const char *name;
  // version
  const char *version;
  // type
  enum base_format_t type;
  // probe_filename
  signed int (*probe_filename)(const char *);
  // probe_magic
  signed int (*probe_magic)(struct io_t *);
  // init_input
  signed int (*init_input)(struct libtrace_t *);
  // config_input
  signed int (*config_input)(struct libtrace_t *, enum anonymous, void *);
  // start_input
  signed int (*start_input)(struct libtrace_t *);
  // pause_input
  signed int (*pause_input)(struct libtrace_t *);
  // init_output
  signed int (*init_output)(struct libtrace_out_t *);
  // config_output
  signed int (*config_output)(struct libtrace_out_t *, enum anonymous_0, void *);
  // start_output
  signed int (*start_output)(struct libtrace_out_t *);
  // fin_input
  signed int (*fin_input)(struct libtrace_t *);
  // fin_output
  signed int (*fin_output)(struct libtrace_out_t *);
  // read_packet
  signed int (*read_packet)(struct libtrace_t *, struct libtrace_packet_t *);
  // prepare_packet
  signed int (*prepare_packet)(struct libtrace_t *, struct libtrace_packet_t *, void *, enum anonymous_20, unsigned int);
  // fin_packet
  void (*fin_packet)(struct libtrace_packet_t *);
  // write_packet
  signed int (*write_packet)(struct libtrace_out_t *, struct libtrace_packet_t *);
  // get_link_type
  enum anonymous_22 (*get_link_type)(const struct libtrace_packet_t *);
  // get_direction
  enum anonymous_2 (*get_direction)(const struct libtrace_packet_t *);
  // set_direction
  enum anonymous_2 (*set_direction)(struct libtrace_packet_t *, enum anonymous_2);
  // get_erf_timestamp
  unsigned long int (*get_erf_timestamp)(const struct libtrace_packet_t *);
  // get_timeval
  struct timeval (*get_timeval)(const struct libtrace_packet_t *);
  // get_timespec
  struct timespec (*get_timespec)(const struct libtrace_packet_t *);
  // get_seconds
  double (*get_seconds)(const struct libtrace_packet_t *);
  // seek_erf
  signed int (*seek_erf)(struct libtrace_t *, unsigned long int);
  // seek_timeval
  signed int (*seek_timeval)(struct libtrace_t *, struct timeval);
  // seek_seconds
  signed int (*seek_seconds)(struct libtrace_t *, double);
  // get_capture_length
  signed int (*get_capture_length)(const struct libtrace_packet_t *);
  // get_wire_length
  signed int (*get_wire_length)(const struct libtrace_packet_t *);
  // get_framing_length
  signed int (*get_framing_length)(const struct libtrace_packet_t *);
  // set_capture_length
  unsigned long int (*set_capture_length)(struct libtrace_packet_t *, unsigned long int);
  // get_received_packets
  unsigned long int (*get_received_packets)(struct libtrace_t *);
  // get_filtered_packets
  unsigned long int (*get_filtered_packets)(struct libtrace_t *);
  // get_dropped_packets
  unsigned long int (*get_dropped_packets)(struct libtrace_t *);
  // get_captured_packets
  unsigned long int (*get_captured_packets)(struct libtrace_t *);
  // get_fd
  signed int (*get_fd)(const struct libtrace_t *);
  // trace_event
  struct libtrace_eventobj_t (*trace_event)(struct libtrace_t *, struct libtrace_packet_t *);
  // help
  void (*help)(void);
  // next
  struct libtrace_format_t *next;
};

struct trace_err_t
{
  // err_num
  signed int err_num;
  // problem
  char problem[255l];
};

struct libtrace_out_t
{
  // format
  struct libtrace_format_t *format;
  // format_data
  void *format_data;
  // uridata
  char *uridata;
  // err
  struct trace_err_t err;
  // started
  _Bool started;
};

struct libtrace_packet_t
{
  // trace
  struct libtrace_t *trace;
  // header
  void *header;
  // payload
  void *payload;
  // buffer
  void *buffer;
  // type
  enum anonymous_20 type;
  // buf_control
  enum anonymous_21 buf_control;
  // capture_length
  signed int capture_length;
  // wire_length
  signed int wire_length;
  // payload_length
  signed int payload_length;
  // l2_header
  void *l2_header;
  // link_type
  enum anonymous_22 link_type;
  // l2_remaining
  unsigned int l2_remaining;
  // l3_header
  void *l3_header;
  // l3_ethertype
  unsigned short int l3_ethertype;
  // l3_remaining
  unsigned int l3_remaining;
  // l4_header
  void *l4_header;
  // transport_proto
  unsigned char transport_proto;
  // l4_remaining
  unsigned int l4_remaining;
};

struct libtrace_pcapfile_pkt_hdr_t
{
  // ts_sec
  unsigned int ts_sec;
  // ts_usec
  unsigned int ts_usec;
  // caplen
  unsigned int caplen;
  // wirelen
  unsigned int wirelen;
};

struct libtrace_t
{
  // format
  struct libtrace_format_t *format;
  // event
  struct libtrace_event_status_t event;
  // format_data
  void *format_data;
  // filter
  struct libtrace_filter_t *filter;
  // snaplen
  unsigned long int snaplen;
  // accepted_packets
  unsigned long int accepted_packets;
  // filtered_packets
  unsigned long int filtered_packets;
  // uridata
  char *uridata;
  // io
  struct io_t *io;
  // err
  struct trace_err_t err;
  // started
  _Bool started;
};

struct lzma_t
{
  // inbuff
  unsigned char inbuff[1048576l];
  // strm
  struct anonymous_11 strm;
  // parent
  struct io_t *parent;
  // outoffset
  signed int outoffset;
  // err
  enum err_t err;
};

struct lzmaw_t
{
  // strm
  struct anonymous_11 strm;
  // outbuff
  unsigned char outbuff[1048576l];
  // child
  struct iow_t *child;
  // err
  enum err_t err;
  // inoffset
  signed int inoffset;
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

struct output_data_t
{
  // title
  char *title;
  // columns
  signed int columns;
  // labels
  char **labels;
  // data
  struct data_t *data;
  // format
  struct output_type_t *format;
  // private_format_data
  void *private_format_data;
};

struct output_type_t
{
  // name
  char *name;
  // init
  void (*init)(struct output_data_t *);
  // flush
  void (*flush)(struct output_data_t *);
  // destroy
  void (*destroy)(struct output_data_t *);
};

struct peek_t
{
  // child
  struct io_t *child;
  // buffer
  char *buffer;
  // length
  signed long int length;
  // offset
  signed long int offset;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct state_t_0
{
  // buffer
  struct buffer_t *buffer;
  // in_buffer
  signed int in_buffer;
  // offset
  signed long int offset;
  // producer
  unsigned long int producer;
  // space_avail
  union anonymous_4 space_avail;
  // data_ready
  union anonymous_4 data_ready;
  // mutex
  union anonymous_5 mutex;
  // io
  struct io_t *io;
  // closing
  _Bool closing;
};

struct state_t
{
  // buffer
  struct buffer_t buffer[5l];
  // offset
  signed long int offset;
  // consumer
  unsigned long int consumer;
  // iow
  struct iow_t *iow;
  // data_ready
  union anonymous_4 data_ready;
  // space_avail
  union anonymous_4 space_avail;
  // mutex
  union anonymous_5 mutex;
  // out_buffer
  signed int out_buffer;
  // closing
  _Bool closing;
};

struct stdio_t
{
  // fd
  signed int fd;
};

struct stdiow_t
{
  // buffer
  char buffer[4096l];
  // offset
  signed int offset;
  // fd
  signed int fd;
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

struct wandio_compression_type
{
  // name
  const char *name;
  // ext
  const char *ext;
  // compress_type
  signed int compress_type;
};

struct z_stream_s
{
  // next_in
  unsigned char *next_in;
  // avail_in
  unsigned int avail_in;
  // total_in
  unsigned long int total_in;
  // next_out
  unsigned char *next_out;
  // avail_out
  unsigned int avail_out;
  // total_out
  unsigned long int total_out;
  // msg
  char *msg;
  // state
  struct internal_state *state;
  // zalloc
  void * (*zalloc)(void *, unsigned int, unsigned int);
  // zfree
  void (*zfree)(void *, void *);
  // opaque
  void *opaque;
  // data_type
  signed int data_type;
  // adler
  unsigned long int adler;
  // reserved
  unsigned long int reserved;
};

struct zlib_t
{
  // inbuff
  unsigned char inbuff[1048576l];
  // strm
  struct z_stream_s strm;
  // parent
  struct io_t *parent;
  // outoffset
  signed int outoffset;
  // err
  enum err_t err;
};

struct zlibw_t
{
  // strm
  struct z_stream_s strm;
  // outbuff
  unsigned char outbuff[1048576l];
  // child
  struct iow_t *child;
  // err
  enum err_t err;
  // inoffset
  signed int inoffset;
};


// bz_source
// file ior-bzip.c line 152
struct anonymous_6 bz_source;
// bz_source
// file ior-bzip.c line 152
struct anonymous_6 bz_source = { .name="bzip", .read=bz_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=bz_close };
// bz_wsource
// file iow-bzip.c line 157
struct anonymous_7 bz_wsource;
// bz_wsource
// file iow-bzip.c line 157
struct anonymous_7 bz_wsource = { .name="bzw", .write=bz_wwrite, .close=bz_wclose };
// compression_type
// file wandio.c line 48
struct wandio_compression_type compression_type[5l] = { { .name="gzip", .ext="gz", .compress_type=1 },
    { .name="bzip2", .ext="bz2", .compress_type=2 },
    { .name="lzo", .ext="lzo", .compress_type=3 },
    { .name="lzma", .ext="xz", .compress_type=4 },
    { .name="NONE", .ext="", .compress_type=0 } };
// filter_count
// file tracertstats.c line 76
signed int filter_count = 0;
// filters
// file tracertstats.c line 75
struct filter_t *filters = (struct filter_t *)(void *)0;
// force_directio_read
// file wandio.c line 58
signed int force_directio_read = 0;
// force_directio_write
// file wandio.c line 57
signed int force_directio_write = 0;
// formats_list
// file trace.c line 105
static struct libtrace_format_t *formats_list = (struct libtrace_format_t *)(void *)0;
// keep_stats
// file wandio.c line 56
signed int keep_stats = 0;
// libtrace_halt
// file trace.c line 107
signed int libtrace_halt = 0;
// lzma_source
// file ior-lzma.c line 157
struct anonymous_6 lzma_source;
// lzma_source
// file ior-lzma.c line 157
struct anonymous_6 lzma_source = { .name="lzma", .read=lzma_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=lzma_close };
// lzma_wsource
// file iow-lzma.c line 166
struct anonymous_7 lzma_wsource;
// lzma_wsource
// file iow-lzma.c line 166
struct anonymous_7 lzma_wsource = { .name="xz", .write=lzma_wwrite, .close=lzma_wclose };
// max_buffers
// file wandio.c line 61
unsigned int max_buffers = (unsigned int)50;
// merge_inputs
// file tracertstats.c line 68
signed int merge_inputs = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// output
// file tracertstats.c line 84
struct output_data_t *output = (struct output_data_t *)(void *)0;
// output_csv
// file output_csv.c line 48
struct output_type_t output_csv;
// output_csv
// file output_csv.c line 48
struct output_type_t output_csv = { .name="csv", .init=output_csv_init, .flush=output_csv_flush, .destroy=output_csv_destroy };
// output_format
// file tracertstats.c line 66
char *output_format = (char *)(void *)0;
// output_formats
// file output.c line 11
struct output_type_t *output_formats[4l];
// output_html
// file output_html.c line 67
struct output_type_t output_html;
// output_html
// file output_html.c line 67
struct output_type_t output_html = { .name="html", .init=output_html_init, .flush=output_html_flush, .destroy=output_html_destroy };
// output_txt
// file output_txt.c line 56
struct output_type_t output_txt;
// output_txt
// file output_txt.c line 56
struct output_type_t output_txt = { .name="txt", .init=output_txt_init, .flush=output_txt_flush, .destroy=output_txt_destroy };
// output_formats
// file output.c line 11
struct output_type_t *output_formats[4l] = { &output_txt, &output_csv, &output_html, (struct output_type_t *)(void *)0 };
// packet_count
// file tracertstats.c line 80
unsigned long int packet_count = 18446744073709551615UL;
// packet_interval
// file tracertstats.c line 81
double packet_interval = (double)4294967295U;
// peek_source
// file ior-peek.c line 314
struct anonymous_6 peek_source;
// peek_source
// file ior-peek.c line 314
struct anonymous_6 peek_source = { .name="peek", .read=peek_read, .peek=peek_peek, .tell=peek_tell,
    .seek=peek_seek, .close=peek_close };
// read_waits
// file wandio.c line 63
unsigned long int read_waits = (unsigned long int)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdio_source
// file ior-stdio.c line 102
struct anonymous_6 stdio_source;
// stdio_source
// file ior-stdio.c line 102
struct anonymous_6 stdio_source = { .name="stdio", .read=stdio_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=stdio_tell,
    .seek=stdio_seek, .close=stdio_close };
// stdio_wsource
// file iow-stdio.c line 233
struct anonymous_7 stdio_wsource;
// stdio_wsource
// file iow-stdio.c line 233
struct anonymous_7 stdio_wsource = { .name="stdiow", .write=stdio_wwrite, .close=stdio_wclose };
// thread_source
// file ior-thread.c line 279
struct anonymous_6 thread_source;
// thread_source
// file ior-thread.c line 279
struct anonymous_6 thread_source = { .name="thread", .read=thread_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=thread_close };
// thread_wsource
// file iow-thread.c line 258
struct anonymous_7 thread_wsource;
// thread_wsource
// file iow-thread.c line 258
struct anonymous_7 thread_wsource = { .name="threadw", .write=thread_wwrite, .close=thread_wclose };
// totbytes
// file tracertstats.c line 78
unsigned long int totbytes;
// totcount
// file tracertstats.c line 77
unsigned long int totcount;
// trace
// file tracertstats.c line 65
struct libtrace_t *trace;
// use_autodetect
// file wandio.c line 59
signed int use_autodetect = 1;
// use_threads
// file wandio.c line 60
unsigned int use_threads = (unsigned int)-1;
// write_waits
// file wandio.c line 64
unsigned long int write_waits = (unsigned long int)0;
// zlib_source
// file ior-zlib.c line 164
struct anonymous_6 zlib_source;
// zlib_source
// file ior-zlib.c line 164
struct anonymous_6 zlib_source = { .name="zlib", .read=zlib_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=zlib_close };
// zlib_wsource
// file iow-zlib.c line 173
struct anonymous_7 zlib_wsource;
// zlib_wsource
// file iow-zlib.c line 173
struct anonymous_7 zlib_wsource = { .name="zlibw", .write=zlib_wwrite, .close=zlib_wclose };

// alignedrealloc
// file ior-peek.c line 223
static void * alignedrealloc(void *old, unsigned long int oldsize, unsigned long int size, signed int *res)
{
  void *new;
  if(!(size >= oldsize))
    return old;

  else
  {
    *res=posix_memalign(&new, (unsigned long int)4096, size);
    if(!(*res == 0))
    {
      fprintf(stderr, "Error aligning IO buffer: %d\n", *res);
      return (void *)0;
    }

    else
    {
      /* assertion oldsize<size */
      assert(oldsize < size);
      memcpy(new, old, oldsize);
      free(old);
      return new;
    }
  }
}

// bz_close
// file ior-bzip.c line 144
static void bz_close(struct io_t *io)
{
  BZ2_bzDecompressEnd(&((struct bz_t *)io->data)->strm);
  wandio_destroy(((struct bz_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// bz_open
// file wandio.h line 194
struct io_t * bz_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc_1;
    io->source = &bz_source;
    io->data=malloc(sizeof(struct bz_t) /*1048680ul*/ );
    ((struct bz_t *)io->data)->parent = parent;
    ((struct bz_t *)io->data)->strm.next_in = (char *)(void *)0;
    ((struct bz_t *)io->data)->strm.avail_in = (unsigned int)0;
    ((struct bz_t *)io->data)->strm.next_out = (char *)(void *)0;
    ((struct bz_t *)io->data)->strm.avail_out = (unsigned int)0;
    ((struct bz_t *)io->data)->strm.bzalloc = (void * (*)(void *, signed int, signed int))(void *)0;
    ((struct bz_t *)io->data)->strm.bzfree = (void (*)(void *, void *))(void *)0;
    ((struct bz_t *)io->data)->strm.opaque = (void *)0;
    ((struct bz_t *)io->data)->err = (enum err_t)ERR_OK;
    BZ2_bzDecompressInit(&((struct bz_t *)io->data)->strm, 0, 0);
    return io;
  }
}

// bz_read
// file ior-bzip.c line 94
static signed long int bz_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct bz_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct bz_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 5;
      return (signed long int)-1;
    }

    ((struct bz_t *)io->data)->strm.avail_out = (unsigned int)len;
    ((struct bz_t *)io->data)->strm.next_out = (char *)buffer;
    while((signed int)((struct bz_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct bz_t *)io->data)->strm.avail_out >= 1u))
        break;

      while(!(((struct bz_t *)io->data)->strm.avail_in >= 1u))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read_2;
        return_value_wandio_read_2=wandio_read(((struct bz_t *)io->data)->parent, (void *)((struct bz_t *)io->data)->inbuff, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read_2;
        if(bytes_read == 0)
          return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;

        if(!(bytes_read >= 0))
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct bz_t *)io->data)->strm.avail_out == (unsigned int)len))
            return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;

          return (signed long int)-1;
        }

        ((struct bz_t *)io->data)->strm.next_in = ((struct bz_t *)io->data)->inbuff;
        ((struct bz_t *)io->data)->strm.avail_in = (unsigned int)bytes_read;
      }
      signed int err;
      err=BZ2_bzDecompress(&((struct bz_t *)io->data)->strm);
      switch(err)
      {
        case 0:
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case 4:
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_EOF;
          break;
        }
        default:
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 5;
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;
  }
}

// bz_wclose
// file iow-bzip.c line 138
static void bz_wclose(struct iow_t *iow)
{
  signed int return_value_BZ2_bzCompress_1;
  do
  {
    return_value_BZ2_bzCompress_1=BZ2_bzCompress(&((struct bzw_t *)iow->data)->strm, 2);
    if(!(return_value_BZ2_bzCompress_1 == 0))
      break;

    wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)(sizeof(char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct bzw_t *)iow->data)->strm.avail_out));
    ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
    ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
  }
  while((_Bool)1);
  BZ2_bzCompressEnd(&((struct bzw_t *)iow->data)->strm);
  wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)(sizeof(char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct bzw_t *)iow->data)->strm.avail_out));
  wandio_wdestroy(((struct bzw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// bz_wopen
// file wandio.h line 202
struct iow_t * bz_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc_1;
    iow->source = &bz_wsource;
    iow->data=malloc(sizeof(struct bzw_t) /*1048680ul*/ );
    ((struct bzw_t *)iow->data)->child = child;
    ((struct bzw_t *)iow->data)->strm.next_in = (char *)(void *)0;
    ((struct bzw_t *)iow->data)->strm.avail_in = (unsigned int)0;
    ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
    ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
    ((struct bzw_t *)iow->data)->strm.bzalloc = (void * (*)(void *, signed int, signed int))(void *)0;
    ((struct bzw_t *)iow->data)->strm.bzfree = (void (*)(void *, void *))(void *)0;
    ((struct bzw_t *)iow->data)->strm.opaque = (void *)0;
    ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_OK;
    BZ2_bzCompressInit(&((struct bzw_t *)iow->data)->strm, compress_level, 0, 30);
    return iow;
  }
}

// bz_wwrite
// file iow-bzip.c line 93
static signed long int bz_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct bzw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct bzw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct bzw_t *)iow->data)->strm.next_in = (char *)buffer;
      ((struct bzw_t *)iow->data)->strm.avail_in = (unsigned int)len;
      while((signed int)((struct bzw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct bzw_t *)iow->data)->strm.avail_in >= 1u))
          break;

        while(!(((struct bzw_t *)iow->data)->strm.avail_out >= 1u))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite_1;
          return_value_wandio_wwrite_1=wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite_1;
          if(!(bytes_written >= 1))
          {
            ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct bzw_t *)iow->data)->strm.avail_in == (unsigned int)len))
              return len - (signed long int)((struct bzw_t *)iow->data)->strm.avail_in;

            return (signed long int)-1;
          }

          ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
          ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
        }
        signed int err;
        err=BZ2_bzCompress(&((struct bzw_t *)iow->data)->strm, 0);
        if(err == 0 || err == 1)
        {
          ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return len - (signed long int)((struct bzw_t *)iow->data)->strm.avail_in;
    }
}

// create_io_reader
// file wandio.c line 134
static struct io_t * create_io_reader(const char *filename, signed int autodetect)
{
  struct io_t *io;
  struct io_t *return_value_stdio_open_1;
  return_value_stdio_open_1=stdio_open(filename);
  io=peek_open(return_value_stdio_open_1);
  unsigned char buffer[1024l];
  signed int len;
  if(io == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    signed long int return_value_wandio_peek_2;
    return_value_wandio_peek_2=wandio_peek(io, (void *)buffer, (signed long int)sizeof(unsigned char [1024l]) /*1024ul*/ );
    len = (signed int)return_value_wandio_peek_2;
    if(!(autodetect == 0))
    {
      if(len >= 3)
      {
        if((signed int)buffer[0l] == 0x1f)
        {
          if((signed int)buffer[1l] == 0x8b)
          {
            if((signed int)buffer[2l] == 0x08)
              io=zlib_open(io);

          }

        }

      }

      if(len >= 2)
      {
        if((signed int)buffer[0l] == 0x1f)
        {
          if((signed int)buffer[1l] == 0x9d)
            io=zlib_open(io);

        }

      }

      if(len >= 3)
      {
        if((signed int)buffer[0l] == 66)
        {
          if((signed int)buffer[1l] == 90)
          {
            if((signed int)buffer[2l] == 104)
              io=bz_open(io);

          }

        }

      }

      if(len >= 5)
      {
        if((signed int)buffer[0l] == 0xfd)
        {
          if((signed int)buffer[1l] == 55)
          {
            if((signed int)buffer[2l] == 122)
            {
              if((signed int)buffer[3l] == 88)
              {
                if((signed int)buffer[4l] == 90)
                  io=lzma_open(io);

              }

            }

          }

        }

      }

    }

    if(!(use_threads == 0u))
      io=thread_open(io);

    struct io_t *return_value_peek_open_3;
    return_value_peek_open_3=peek_open(io);
    return return_value_peek_open_3;
  }
}

// create_output
// file tracertstats.c line 100
static void create_output(char *title)
{
  signed int i;
  output=output_init(title, output_format != ((char *)NULL) ? output_format : "txt");
  if(output == ((struct output_data_t *)NULL))
    fprintf(stderr, "Failed to create output file\n");

  else
  {
    output_add_column(output, "ts");
    output_add_column(output, "packets");
    output_add_column(output, "bytes");
    i = 0;
    for( ; !(i >= filter_count); i = i + 1)
    {
      char buff[1024l];
      snprintf(buff, sizeof(char [1024l]) /*1024ul*/ , "%s packets", (filters + (signed long int)i)->expr);
      output_add_column(output, buff);
      snprintf(buff, sizeof(char [1024l]) /*1024ul*/ , "%s bytes", (filters + (signed long int)i)->expr);
      output_add_column(output, buff);
    }
    output_flush_headings(output);
  }
}

// do_option
// file wandio.c line 75
static void do_option(const char *option)
{
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  signed int return_value_strncmp_4;
  signed int return_value_atoi_1;
  signed int return_value_strncmp_3;
  signed int return_value_atoi_2;
  if(!((signed int)*option == 0))
  {
    return_value_strcmp_7=strcmp(option, "stats");
    if(return_value_strcmp_7 == 0)
      keep_stats = 1;

    else
    {
      return_value_strcmp_6=strcmp(option, "nothreads");
      if(return_value_strcmp_6 == 0)
        use_threads = (unsigned int)0;

      else
      {
        return_value_strcmp_5=strcmp(option, "noautodetect");
        if(return_value_strcmp_5 == 0)
          use_autodetect = 0;

        else
        {
          return_value_strncmp_4=strncmp(option, "threads=", (unsigned long int)8);
          if(return_value_strncmp_4 == 0)
          {
            return_value_atoi_1=atoi(option + (signed long int)8);
            use_threads = (unsigned int)return_value_atoi_1;
          }

          else
          {
            return_value_strncmp_3=strncmp(option, "buffers=", (unsigned long int)8);
            if(return_value_strncmp_3 == 0)
            {
              return_value_atoi_2=atoi(option + (signed long int)8);
              max_buffers = (unsigned int)return_value_atoi_2;
            }

            else
              fprintf(stderr, "Unknown libtraceio debug option '%s'\n", option);
          }
        }
      }
    }
  }

}

// guess_format
// file trace.c line 175
static void guess_format(struct libtrace_t *libtrace, const char *filename)
{
  struct libtrace_format_t *tmp = formats_list;
  signed int return_value;
  for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
    if(!(tmp->probe_filename == ((signed int (*)(const char *))NULL)))
    {
      return_value=tmp->probe_filename(filename);
      if(!(return_value == 0))
      {
        libtrace->format = tmp;
        libtrace->uridata=strdup(filename);
      }

    }

  libtrace->io=wandio_create(filename);
  signed int return_value_1;
  if(!(libtrace->io == ((struct io_t *)NULL)))
  {
    tmp = formats_list;
    for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
      if(!(tmp->probe_magic == ((signed int (*)(struct io_t *))NULL)))
      {
        return_value_1=tmp->probe_magic(libtrace->io);
        if(!(return_value_1 == 0))
        {
          libtrace->format = tmp;
          libtrace->uridata=strdup(filename);
        }

      }

    goto __CPROVER_DUMP_L8;
  }


__CPROVER_DUMP_L8:
  ;
}

// lzma_close
// file ior-lzma.c line 149
static void lzma_close(struct io_t *io)
{
  lzma_end(&((struct lzma_t *)io->data)->strm);
  wandio_destroy(((struct lzma_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// lzma_open
// file wandio.h line 197
struct io_t * lzma_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc_1;
    io->source = &lzma_source;
    io->data=malloc(sizeof(struct lzma_t) /*1048728ul*/ );
    ((struct lzma_t *)io->data)->parent = parent;
    memset((void *)&((struct lzma_t *)io->data)->strm, 0, sizeof(struct anonymous_11) /*136ul*/ );
    ((struct lzma_t *)io->data)->err = (enum err_t)ERR_OK;
    enum anonymous_12 return_value_lzma_auto_decoder_2;
    return_value_lzma_auto_decoder_2=lzma_auto_decoder(&((struct lzma_t *)io->data)->strm, 18446744073709551615UL, (unsigned int)0);
    if(!((signed int)return_value_lzma_auto_decoder_2 == LZMA_OK))
    {
      free(io->data);
      free((void *)io);
      fprintf(stderr, "auto decoder failed\n");
      return (struct io_t *)(void *)0;
    }

    else
      return io;
  }
}

// lzma_read
// file ior-lzma.c line 91
static signed long int lzma_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct lzma_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct lzma_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 5;
      return (signed long int)-1;
    }

    ((struct lzma_t *)io->data)->strm.avail_out = (unsigned long int)len;
    ((struct lzma_t *)io->data)->strm.next_out = (unsigned char *)buffer;
    while((signed int)((struct lzma_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct lzma_t *)io->data)->strm.avail_out >= 1ul))
        break;

      while(!(((struct lzma_t *)io->data)->strm.avail_in >= 1ul))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read_2;
        return_value_wandio_read_2=wandio_read(((struct lzma_t *)io->data)->parent, (void *)(char *)((struct lzma_t *)io->data)->inbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read_2;
        if(bytes_read == 0)
        {
          if(((struct lzma_t *)io->data)->strm.avail_out == (unsigned long int)(unsigned int)len)
          {
            ((struct lzma_t *)io->data)->err = (enum err_t)ERR_EOF;
            return (signed long int)0;
          }

          return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);
        }

        if(!(bytes_read >= 0))
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct lzma_t *)io->data)->strm.avail_out == (unsigned long int)(unsigned int)len))
            return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);

          return (signed long int)-1;
        }

        ((struct lzma_t *)io->data)->strm.next_in = ((struct lzma_t *)io->data)->inbuff;
        ((struct lzma_t *)io->data)->strm.avail_in = (unsigned long int)bytes_read;
      }
      enum anonymous_12 err;
      err=lzma_code(&((struct lzma_t *)io->data)->strm, (enum anonymous_13)LZMA_RUN);
      switch((signed int)err)
      {
        case LZMA_OK:
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case LZMA_STREAM_END:
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_EOF;
          break;
        }
        default:
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 5;
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);
  }
}

// lzma_wclose
// file iow-lzma.c line 137
static void lzma_wclose(struct iow_t *iow)
{
  enum anonymous_12 res;
  for( ; (_Bool)1; ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ )
  {
    res=lzma_code(&((struct lzmaw_t *)iow->data)->strm, (enum anonymous_13)LZMA_FINISH);
    if((signed int)res == LZMA_STREAM_END)
      break;

    if(!((signed int)res == LZMA_OK))
    {
      fprintf(stderr, "Z_STREAM_ERROR while closing output\n");
      break;
    }

    wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)(char *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - ((struct lzmaw_t *)iow->data)->strm.avail_out));
    ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
  }
  wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)(char *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - ((struct lzmaw_t *)iow->data)->strm.avail_out));
  lzma_end(&((struct lzmaw_t *)iow->data)->strm);
  wandio_wdestroy(((struct lzmaw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// lzma_wopen
// file wandio.h line 204
struct iow_t * lzma_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc_1;
    iow->source = &lzma_wsource;
    iow->data=malloc(sizeof(struct lzmaw_t) /*1048728ul*/ );
    ((struct lzmaw_t *)iow->data)->child = child;
    memset((void *)&((struct lzmaw_t *)iow->data)->strm, 0, sizeof(struct anonymous_11) /*136ul*/ );
    ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
    ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
    ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_OK;
    enum anonymous_12 return_value_lzma_easy_encoder_2;
    return_value_lzma_easy_encoder_2=lzma_easy_encoder(&((struct lzmaw_t *)iow->data)->strm, (unsigned int)compress_level, (enum anonymous_14)LZMA_CHECK_CRC64);
    if(!((signed int)return_value_lzma_easy_encoder_2 == LZMA_OK))
    {
      free(iow->data);
      free((void *)iow);
      return (struct iow_t *)(void *)0;
    }

    else
      return iow;
  }
}

// lzma_wwrite
// file iow-lzma.c line 93
static signed long int lzma_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct lzmaw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct lzmaw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct lzmaw_t *)iow->data)->strm.next_in = (const unsigned char *)buffer;
      ((struct lzmaw_t *)iow->data)->strm.avail_in = (unsigned long int)len;
      while((signed int)((struct lzmaw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct lzmaw_t *)iow->data)->strm.avail_in >= 1ul))
          break;

        while(!(((struct lzmaw_t *)iow->data)->strm.avail_out >= 1ul))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite_1;
          return_value_wandio_wwrite_1=wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite_1;
          if(!(bytes_written >= 1))
          {
            ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct lzmaw_t *)iow->data)->strm.avail_in == (unsigned long int)(unsigned int)len))
              return (signed long int)((unsigned long int)len - ((struct lzmaw_t *)iow->data)->strm.avail_in);

            return (signed long int)-1;
          }

          ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
          ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
        }
        enum anonymous_12 err;
        err=lzma_code(&((struct lzmaw_t *)iow->data)->strm, (enum anonymous_13)LZMA_RUN);
        if((signed int)err == LZMA_OK)
        {
          ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return (signed long int)((unsigned long int)len - ((struct lzmaw_t *)iow->data)->strm.avail_in);
    }
}

// main
// file tracertstats.c line 218
signed int main(signed int argc, char **argv)
{
  signed int i;
  void *return_value_realloc_1;
  signed int return_value_atoi_2;
  while((_Bool)1)
  {
    signed int option_index;
    struct option long_options[7l] = { { .name="filter", .has_arg=1, .flag=((signed int *)NULL), .val=102 },
    { .name="interval", .has_arg=1, .flag=((signed int *)NULL), .val=105 },
    { .name="count", .has_arg=1, .flag=((signed int *)NULL), .val=99 },
    { .name="output-format", .has_arg=1, .flag=((signed int *)NULL), .val=111 },
    { .name="libtrace-help", .has_arg=0, .flag=((signed int *)NULL), .val=72 },
    { .name="merge-inputs", .has_arg=0, .flag=((signed int *)NULL), .val=109 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    signed int c;
    c=getopt_long(argc, argv, "c:f:i:o:Hm", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 102:
      {
        filter_count = filter_count + 1;
        return_value_realloc_1=realloc((void *)filters, (unsigned long int)filter_count * sizeof(struct filter_t) /*32ul*/ );
        filters = (struct filter_t *)return_value_realloc_1;
        (filters + (signed long int)(filter_count - 1))->expr=strdup(optarg);
        (filters + (signed long int)(filter_count - 1))->filter=trace_create_filter(optarg);
        (filters + (signed long int)(filter_count - 1))->count = (unsigned long int)0;
        (filters + (signed long int)(filter_count - 1))->bytes = (unsigned long int)0;
        break;
      }
      case 105:
      {
        packet_interval=atof(optarg);
        break;
      }
      case 99:
      {
        return_value_atoi_2=atoi(optarg);
        packet_count = (unsigned long int)return_value_atoi_2;
        break;
      }
      case 111:
      {
        if(!(output_format == ((char *)NULL)))
          free((void *)output_format);

        output_format=strdup(optarg);
        break;
      }
      case 109:
      {
        merge_inputs = 1;
        break;
      }
      case 72:
      {
        trace_help();
        exit(1);
        break;
      }
      default:
      {
        fprintf(stderr, "Unknown option: %c\n", c);
        usage(argv[(signed long int)0]);
        return 1;
      }
    }
  }
  if(packet_count == 18446744073709551615UL && IEEE_FLOAT_EQUAL(packet_interval, 4.294967e+9))
    packet_interval = (double)300;

  if(optind >= argc)
    return 0;

  else
  {
    if(!(output_format == ((char *)NULL)))
      fprintf(stderr, "output format: '%s'\n", output_format);

    else
      fprintf(stderr, "output format: '%s'\n", (const void *)"txt");
    if(!(merge_inputs == 0))
    {
      create_output(argv[(signed long int)optind]);
      if(!(output == ((struct output_data_t *)NULL)))
        goto __CPROVER_DUMP_L17;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L17:
      ;
      i = optind;
      for( ; !(i >= argc); i = i + 1)
        run_trace(argv[(signed long int)i]);
      if(!(merge_inputs == 0))
        output_destroy(output);

      return 0;
    }
  }
}

// output_add_column
// file output.h line 41
void output_add_column(struct output_data_t *out, char *col)
{
  out->columns = out->columns + 1;
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)out->labels, (unsigned long int)out->columns * sizeof(char *) /*8ul*/ );
  out->labels = (char **)return_value_realloc_1;
  out->labels[(signed long int)(out->columns - 1)]=strdup(col);
  void *return_value_realloc_2;
  return_value_realloc_2=realloc((void *)out->data, (unsigned long int)out->columns * sizeof(struct data_t) /*16ul*/ );
  out->data = (struct data_t *)return_value_realloc_2;
}

// output_csv_destroy
// file output_csv.c line 42
static void output_csv_destroy(struct output_data_t *out)
{
  (void)out;
}

// output_csv_flush
// file output_csv.c line 18
static void output_csv_flush(struct output_data_t *out)
{
  signed int i = 0;
  for( ; !(i >= out->columns); i = i + 1)
  {
    if(!(i == 0))
      printf(",");

    switch((signed int)(out->data + (signed long int)i)->type)
    {
      case TYPE_int:
      {
        printf("%lu", (out->data + (signed long int)i)->d.d_int);
        break;
      }
      case TYPE_str:
      {
        printf("%s", (out->data + (signed long int)i)->d.d_str);
        free((void *)(out->data + (signed long int)i)->d.d_str);
        break;
      }
      case TYPE_float:
      {
        printf("%f", (out->data + (signed long int)i)->d.d_float);
        break;
      }
      case TYPE_time:
        printf("%.03f", (out->data + (signed long int)i)->d.d_time);
    }
  }
  printf("\n");
}

// output_csv_init
// file output_csv.c line 7
static void output_csv_init(struct output_data_t *out)
{
  signed int i = 0;
  for( ; !(i >= out->columns); i = i + 1)
  {
    if(!(i == 0))
      printf(",");

    printf("%s", out->labels[(signed long int)i]);
  }
  printf("\n");
}

// output_destroy
// file output.h line 48
void output_destroy(struct output_data_t *out)
{
  signed int i;
  out->format->destroy(out);
  i = 0;
  if(!(i >= out->columns))
  {
    free((void *)out->labels[(signed long int)i]);
    i = i + 1;
  }

  free((void *)out->data);
  free((void *)out->labels);
  free((void *)out);
}

// output_flush_headings
// file output.h line 42
void output_flush_headings(struct output_data_t *out)
{
  out->format->init(out);
}

// output_flush_row
// file output.h line 47
void output_flush_row(struct output_data_t *out)
{
  out->format->flush(out);
}

// output_html_destroy
// file output_html.c line 59
static void output_html_destroy(struct output_data_t *out)
{
  (void)out;
  printf("</table>\n");
  printf("</body>\n");
  printf("</html>\n");
}

// output_html_flush
// file output_html.c line 35
static void output_html_flush(struct output_data_t *out)
{
  signed int i;
  signed int tmp_post_1 = *((signed int *)out->private_format_data);
  *((signed int *)out->private_format_data) = *((signed int *)out->private_format_data) + 1;
  printf(" <tr class=\"%s\">\n", (tmp_post_1 & 1) != 0 ? "odd" : "even");
  i = 0;
  for( ; !(i >= out->columns); i = i + 1)
    switch((signed int)(out->data + (signed long int)i)->type)
    {
      case TYPE_int:
      {
        printf("  <td class=\"numeric\">%lu</td>\n", (out->data + (signed long int)i)->d.d_int);
        break;
      }
      case TYPE_str:
      {
        printf("  <td>%s</td>\n", (out->data + (signed long int)i)->d.d_str);
        free((void *)(out->data + (signed long int)i)->d.d_str);
        break;
      }
      case TYPE_float:
      {
        printf("  <td class=\"numeric\">%f</td>\n", (out->data + (signed long int)i)->d.d_float);
        break;
      }
      case TYPE_time:
        printf("  <td class=\"numeric\">%.03f</td>\n", (out->data + (signed long int)i)->d.d_time);
    }
  printf(" </tr>\n");
}

// output_html_init
// file output_html.c line 7
static void output_html_init(struct output_data_t *out)
{
  signed int i;
  printf("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n");
  printf("<html>\n");
  printf("<head>\n");
  printf(" <title>%s</title>\n", out->title);
  printf(" <style type=\"text/css\">\n");
  printf("  table         { border-collapse: collapse; width: 100%%}\n");
  printf("  td            { border: thin black solid; }\n");
  printf("  .numeric      { text-align: right; }\n");
  printf("  .even         { background: #e0e0e0; }\n");
  printf("  .odd          { background: #ffffff; }\n");
  printf("  .rowheading   { text-align: right; }\n");
  printf(" </style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>%s</h1>\n", out->title);
  printf("<table>\n");
  printf(" <tr>\n");
  i = 0;
  for( ; !(i >= out->columns); i = i + 1)
    printf("  <th>%s</th>", out->labels[(signed long int)i]);
  printf(" </tr>\n");
  out->private_format_data=malloc(sizeof(signed int) /*4ul*/ );
  *((signed int *)out->private_format_data) = 0;
}

// output_init
// file output.h line 40
struct output_data_t * output_init(char *title, char *type)
{
  struct output_data_t *data;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct output_data_t) /*48ul*/ );
  data = (struct output_data_t *)return_value_malloc_1;
  signed int i = 0;
  data->title=strdup(title);
  data->labels = (char **)(void *)0;
  data->columns = 0;
  data->data = (struct data_t *)(void *)0;
  while(!(output_formats[(signed long int)i] == ((struct output_type_t *)NULL)))
  {
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(output_formats[(signed long int)i]->name, type);
    if(return_value_strcmp_2 == 0)
    {
      data->format = output_formats[(signed long int)i];
      return data;
    }

    i = i + 1;
  }
  free((void *)data->title);
  free((void *)data);
  return (struct output_data_t *)(void *)0;
}

// output_set_data_float
// file output.c line 66
void output_set_data_float(struct output_data_t *out, signed int col, double data)
{
  _Bool tmp_if_expr_1;
  if(col >= 0)
    tmp_if_expr_1 = col < out->columns ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion col>=0 && col<out->columns */
  assert(tmp_if_expr_1);
  (out->data + (signed long int)col)->type = (enum anonymous_18)TYPE_float;
  (out->data + (signed long int)col)->d.d_float = data;
}

// output_set_data_int
// file output.h line 43
void output_set_data_int(struct output_data_t *out, signed int col, unsigned long int data)
{
  _Bool tmp_if_expr_1;
  if(col >= 0)
    tmp_if_expr_1 = col < out->columns ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion col>=0 && col<out->columns */
  assert(tmp_if_expr_1);
  (out->data + (signed long int)col)->type = (enum anonymous_18)TYPE_int;
  (out->data + (signed long int)col)->d.d_int = data;
}

// output_set_data_str
// file output.c line 64
void output_set_data_str(struct output_data_t *out, signed int col, char *data)
{
  _Bool tmp_if_expr_1;
  if(col >= 0)
    tmp_if_expr_1 = col < out->columns ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion col>=0 && col<out->columns */
  assert(tmp_if_expr_1);
  (out->data + (signed long int)col)->type = (enum anonymous_18)TYPE_str;
  (out->data + (signed long int)col)->d.d_str = data;
}

// output_set_data_time
// file output.h line 46
void output_set_data_time(struct output_data_t *out, signed int col, double data)
{
  _Bool tmp_if_expr_1;
  if(col >= 0)
    tmp_if_expr_1 = col < out->columns ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion col>=0 && col<out->columns */
  assert(tmp_if_expr_1);
  (out->data + (signed long int)col)->type = (enum anonymous_18)TYPE_time;
  (out->data + (signed long int)col)->d.d_time = data;
}

// output_txt_destroy
// file output_txt.c line 50
static void output_txt_destroy(struct output_data_t *out)
{
  (void)out;
}

// output_txt_flush
// file output_txt.c line 27
static void output_txt_flush(struct output_data_t *out)
{
  signed int i = 0;
  for( ; !(i >= out->columns); i = i + 1)
    switch((signed int)(out->data + (signed long int)i)->type)
    {
      case TYPE_int:
      {
        printf("%*lu ", 11 - 1, (out->data + (signed long int)i)->d.d_int);
        break;
      }
      case TYPE_str:
      {
        printf("%*s ", 11 - 1, (out->data + (signed long int)i)->d.d_str);
        free((void *)(out->data + (signed long int)i)->d.d_str);
        break;
      }
      case TYPE_float:
      {
        printf("%*f ", 11 - 1, (out->data + (signed long int)i)->d.d_float);
        break;
      }
      case TYPE_time:
        printf("%*.0f ", 11 - 1, (out->data + (signed long int)i)->d.d_time);
    }
  printf("\n");
}

// output_txt_init
// file output_txt.c line 10
static void output_txt_init(struct output_data_t *out)
{
  signed int i = 0;
  for( ; !(i >= out->columns); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(out->labels[(signed long int)i]);
    if(return_value_strlen_1 >= 9ul)
      printf("[%i]: %s\n", i, out->labels[(signed long int)i]);

  }
  printf("\n");
  i = 0;
  for( ; !(i >= out->columns); i = i + 1)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(out->labels[(signed long int)i]);
    if(return_value_strlen_2 >= 9ul)
      printf("[%*i] ", 11 - 3, i);

    else
      printf("%*s ", 11 - 1, out->labels[(signed long int)i]);
  }
  printf("\n");
}

// parse_env
// file wandio.c line 100
static void parse_env(void)
{
  const char *str;
  str=getenv("LIBTRACEIO");
  char option[1024l];
  const char *ip;
  char *op;
  _Bool tmp_if_expr_1;
  char *tmp_post_2;
  if(!(str == ((const char *)NULL)))
  {
    ip = str;
    op = option;
    do
    {
      if(!((signed int)*ip == 0))
        tmp_if_expr_1 = op < option + (signed long int)sizeof(char [1024l]) /*1024ul*/  ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      if((signed int)*ip == 44)
      {
        *op = (char)0;
        do_option(option);
        op = option;
      }

      else
      {
        tmp_post_2 = op;
        op = op + 1l;
        *tmp_post_2 = *ip;
      }
      ip = ip + 1l;
    }
    while((_Bool)1);
    *op = (char)0;
    do_option(option);
  }

}

// peek_close
// file ior-peek.c line 304
static void peek_close(struct io_t *io)
{
  wandio_destroy(((struct peek_t *)io->data)->child);
  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
    free((void *)((struct peek_t *)io->data)->buffer);

  free(io->data);
  free((void *)io);
}

// peek_open
// file wandio.h line 198
struct io_t * peek_open(struct io_t *child)
{
  struct io_t *io;
  if(child == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc_1;
    io->data=malloc(sizeof(struct peek_t) /*32ul*/ );
    io->source = &peek_source;
    ((struct peek_t *)io->data)->child = child;
    ((struct peek_t *)io->data)->buffer = (char *)(void *)0;
    ((struct peek_t *)io->data)->length = (signed long int)0;
    ((struct peek_t *)io->data)->offset = (signed long int)0;
    return io;
  }
}

// peek_peek
// file ior-peek.c line 250
static signed long int peek_peek(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret = (signed long int)0;
  signed int res = 0;
  if(!(((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset >= len))
  {
    signed long int read_amount = len - (((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset);
    read_amount = read_amount + ((signed long int)(1024 * 1024) - (((struct peek_t *)io->data)->length + read_amount) % (signed long int)(1024 * 1024));
    void *return_value_alignedrealloc_1;
    return_value_alignedrealloc_1=alignedrealloc((void *)((struct peek_t *)io->data)->buffer, (unsigned long int)((struct peek_t *)io->data)->length, (unsigned long int)(((struct peek_t *)io->data)->length + read_amount), &res);
    ((struct peek_t *)io->data)->buffer = (char *)return_value_alignedrealloc_1;
    if(((struct peek_t *)io->data)->buffer == ((char *)NULL))
      return (signed long int)res;

    read_amount=wandio_read(((struct peek_t *)io->data)->child, (void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->length), read_amount);
    if(!(read_amount >= 0l))
      return read_amount;

    ((struct peek_t *)io->data)->length = ((struct peek_t *)io->data)->length + read_amount;
  }

  signed long int tmp_if_expr_2;
  if(!(len >= ((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset))
    tmp_if_expr_2 = len;

  else
    tmp_if_expr_2 = ((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset;
  ret = tmp_if_expr_2;
  memcpy(buffer, (const void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->offset), (unsigned long int)ret);
  return ret;
}

// peek_read
// file ior-peek.c line 152
static signed long int peek_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret = (signed long int)0;
  signed long int tmp_if_expr_1;
  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
  {
    if(!(len >= ((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset))
      tmp_if_expr_1 = len;

    else
      tmp_if_expr_1 = ((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset;
    ret = tmp_if_expr_1;
    memcpy(buffer, (const void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->offset), (unsigned long int)ret);
    buffer = buffer + ret;
    ((struct peek_t *)io->data)->offset = ((struct peek_t *)io->data)->offset + ret;
    len = len - ret;
  }

  if(len >= 1l)
  {
    /* assertion ((struct peek_t *)((io)->data))->length-((struct peek_t *)((io)->data))->offset == 0 */
    assert(((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset == (signed long int)0);
    signed long int bytes_read;
    if(len % 4096l == 0l && (signed long int)buffer % 4096l == 0l)
    {
      /* assertion ((ptrdiff_t)buffer % 4096) == 0 */
      assert((signed long int)buffer % (signed long int)4096 == (signed long int)0);
      bytes_read=((struct peek_t *)io->data)->child->source->read(((struct peek_t *)io->data)->child, buffer, len);
      if(!(bytes_read >= 1l))
      {
        if(ret >= 1l)
          return ret;

        return bytes_read;
      }

    }

    else
    {
      bytes_read=refill_buffer(io, len);
      if(!(bytes_read >= 1l))
      {
        if(ret >= 1l)
          return ret;

        return bytes_read;
      }

      len = len < bytes_read ? len : bytes_read;
      memcpy(buffer, (const void *)((struct peek_t *)io->data)->buffer, (unsigned long int)len);
      ((struct peek_t *)io->data)->offset = len;
      bytes_read = len;
    }
    ret = ret + bytes_read;
  }

  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
  {
    if(((struct peek_t *)io->data)->offset >= ((struct peek_t *)io->data)->length)
    {
      free((void *)((struct peek_t *)io->data)->buffer);
      ((struct peek_t *)io->data)->buffer = (char *)(void *)0;
      ((struct peek_t *)io->data)->offset = (signed long int)0;
      ((struct peek_t *)io->data)->length = (signed long int)0;
    }

  }

  return ret;
}

// peek_seek
// file ior-peek.c line 297
static signed long int peek_seek(struct io_t *io, signed long int offset, signed int whence)
{
  signed long int return_value_wandio_seek_1;
  return_value_wandio_seek_1=wandio_seek(((struct peek_t *)io->data)->child, offset, whence);
  return return_value_wandio_seek_1;
}

// peek_tell
// file ior-peek.c line 290
static signed long int peek_tell(struct io_t *io)
{
  signed long int return_value_wandio_tell_1;
  return_value_wandio_tell_1=wandio_tell(((struct peek_t *)io->data)->child);
  return return_value_wandio_tell_1;
}

// refill_buffer
// file ior-peek.c line 94
static signed long int refill_buffer(struct io_t *io, signed long int len)
{
  signed long int bytes_read;
  /* assertion ((struct peek_t *)((io)->data))->length - ((struct peek_t *)((io)->data))->offset == 0 */
  assert(((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset == (signed long int)0);
  bytes_read = len < (signed long int)(1024 * 1024) ? (signed long int)(1024 * 1024) : len;
  signed long int tmp_if_expr_1;
  if(!(bytes_read >= ((struct peek_t *)io->data)->length))
    tmp_if_expr_1 = ((struct peek_t *)io->data)->length;

  else
    tmp_if_expr_1 = bytes_read;
  bytes_read = tmp_if_expr_1;
  bytes_read = bytes_read + ((signed long int)4096 - bytes_read % (signed long int)4096);
  if(!(((struct peek_t *)io->data)->length >= bytes_read))
  {
    signed int res = 0;
    void *buf_ptr = (void *)((struct peek_t *)io->data)->buffer;
    if(!(buf_ptr == NULL))
      free(buf_ptr);

    ((struct peek_t *)io->data)->length = bytes_read;
    ((struct peek_t *)io->data)->offset = (signed long int)0;
    res=posix_memalign(&buf_ptr, (unsigned long int)4096, (unsigned long int)((struct peek_t *)io->data)->length);
    if(!(res == 0))
    {
      fprintf(stderr, "Error aligning IO buffer: %d\n", res);
      return (signed long int)res;
    }

    ((struct peek_t *)io->data)->buffer = (char *)buf_ptr;
  }

  else
    ((struct peek_t *)io->data)->length = bytes_read;
  /* assertion ((struct peek_t *)((io)->data))->buffer */
  assert(((struct peek_t *)io->data)->buffer != ((char *)NULL));
  bytes_read=((struct peek_t *)io->data)->child->source->read(((struct peek_t *)io->data)->child, (void *)((struct peek_t *)io->data)->buffer, bytes_read);
  ((struct peek_t *)io->data)->offset = (signed long int)0;
  ((struct peek_t *)io->data)->length = bytes_read;
  if(!(bytes_read >= 1l))
    return bytes_read;

  else
    return bytes_read;
}

// register_format
// file trace.c line 1859
void register_format(struct libtrace_format_t *f)
{
  /* assertion f->next==((void *)0) */
  assert(f->next == (struct libtrace_format_t *)(void *)0);
  f->next = formats_list;
  formats_list = f;
}

// report_results
// file tracertstats.c line 86
static void report_results(double ts, unsigned long int count, unsigned long int bytes)
{
  signed int i = 0;
  output_set_data_time(output, 0, ts);
  output_set_data_int(output, 1, count);
  output_set_data_int(output, 2, bytes);
  i = 0;
  for( ; !(i >= filter_count); i = i + 1)
  {
    output_set_data_int(output, i * 2 + 3, (filters + (signed long int)i)->count);
    output_set_data_int(output, i * 2 + 4, (filters + (signed long int)i)->bytes);
    (filters + (signed long int)i)->bytes = (unsigned long int)0;
    (filters + (signed long int)i)->count = (filters + (signed long int)i)->bytes;
  }
  output_flush_row(output);
}

// run_trace
// file tracertstats.c line 123
static void run_trace(char *uri)
{
  struct libtrace_packet_t *packet;
  packet=trace_create_packet();
  signed int i;
  unsigned long int count = (unsigned long int)0;
  unsigned long int bytes = (unsigned long int)0;
  double last_ts = (double)0;
  double ts = (double)0;
  if(merge_inputs == 0)
    create_output(uri);

  if(!(output == ((struct output_data_t *)NULL)))
  {
    trace=trace_create(uri);
    _Bool return_value_trace_is_err_1;
    return_value_trace_is_err_1=trace_is_err(trace);
    if(!(return_value_trace_is_err_1 == (_Bool)0))
    {
      trace_perror(trace, "trace_create");
      trace_destroy(trace);
      if(merge_inputs == 0)
        output_destroy(output);

    }

    else
    {
      signed int return_value_trace_start_2;
      return_value_trace_start_2=trace_start(trace);
      if(return_value_trace_start_2 == -1)
      {
        trace_perror(trace, "trace_start");
        trace_destroy(trace);
        if(merge_inputs == 0)
          output_destroy(output);

      }

      else
      {
        do
        {
          signed int psize;
          psize=trace_read_packet(trace, packet);
          if(!(psize >= 1))
            break;

          void *return_value_trace_get_packet_buffer_3;
          return_value_trace_get_packet_buffer_3=trace_get_packet_buffer(packet, (enum anonymous_22 *)(void *)0, (unsigned int *)(void *)0);
          if(!(return_value_trace_get_packet_buffer_3 == NULL))
          {
            ts=trace_get_seconds(packet);
            if(IEEE_FLOAT_EQUAL(last_ts, 0.000000))
              last_ts = ts;

            for( ; last_ts < ts && IEEE_FLOAT_NOTEQUAL(packet_interval, 1.844674e+19); last_ts = last_ts + packet_interval)
            {
              report_results(last_ts, count, bytes);
              count = (unsigned long int)0;
              bytes = (unsigned long int)0;
            }
            i = 0;
            for( ; !(i >= filter_count); i = i + 1)
            {
              signed int return_value_trace_apply_filter_5;
              return_value_trace_apply_filter_5=trace_apply_filter((filters + (signed long int)i)->filter, packet);
              if(!(return_value_trace_apply_filter_5 == 0))
              {
                (filters + (signed long int)i)->count = (filters + (signed long int)i)->count + 1ul;
                unsigned long int return_value_trace_get_wire_length_4;
                return_value_trace_get_wire_length_4=trace_get_wire_length(packet);
                (filters + (signed long int)i)->bytes = (filters + (signed long int)i)->bytes + return_value_trace_get_wire_length_4;
              }

            }
            count = count + 1ul;
            unsigned long int return_value_trace_get_wire_length_6;
            return_value_trace_get_wire_length_6=trace_get_wire_length(packet);
            bytes = bytes + return_value_trace_get_wire_length_6;
            if(count >= packet_count)
            {
              report_results(ts, count, bytes);
              count = (unsigned long int)0;
              bytes = (unsigned long int)0;
            }

          }

        }
        while((_Bool)1);
        report_results(ts, count, bytes);
        _Bool return_value_trace_is_err_7;
        return_value_trace_is_err_7=trace_is_err(trace);
        if(!(return_value_trace_is_err_7 == (_Bool)0))
          trace_perror(trace, "%s", uri);

        trace_destroy(trace);
        if(merge_inputs == 0)
          output_destroy(output);

        trace_destroy_packet(packet);
      }
    }
  }

}

// safe_open
// file iow-stdio.c line 62
static signed int safe_open(const char *filename, signed int flags)
{
  signed int fd = -1;
  unsigned int userid = (unsigned int)0;
  unsigned int groupid = (unsigned int)0;
  char *sudoenv = (char *)(void *)0;
  fd=open(filename, flags | 01 | 0100 | 01000 | (force_directio_write != 0 ? 040000 : 0), 0666);
  if(fd == -1)
    fd=open(filename, flags | 01 | 0100 | 01000, 0666);

  signed int return_value_fchown_3;
  if(fd == -1)
    return fd;

  else
  {
    sudoenv=getenv("SUDO_UID");
    if(!(sudoenv == ((char *)NULL)))
    {
      signed long int return_value_strtol_1;
      return_value_strtol_1=strtol(sudoenv, (char ** restrict )(void *)0, 10);
      userid = (unsigned int)return_value_strtol_1;
    }

    sudoenv=getenv("SUDO_GID");
    if(!(sudoenv == ((char *)NULL)))
    {
      signed long int return_value_strtol_2;
      return_value_strtol_2=strtol(sudoenv, (char ** restrict )(void *)0, 10);
      groupid = (unsigned int)return_value_strtol_2;
    }

    if(!(userid == 0u))
    {
      return_value_fchown_3=fchown(fd, userid, groupid);
      if(!(return_value_fchown_3 == -1))
        goto __CPROVER_DUMP_L5;

      perror("fchown");
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      return fd;
    }
  }
}

// stdio_close
// file ior-stdio.c line 95
static void stdio_close(struct io_t *io)
{
  close(((struct stdio_t *)io->data)->fd);
  free(io->data);
  free((void *)io);
}

// stdio_open
// file wandio.h line 199
struct io_t * stdio_open(const char *filename)
{
  struct io_t *io;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
  io = (struct io_t *)return_value_malloc_1;
  io->data=malloc(sizeof(struct stdio_t) /*4ul*/ );
  signed int return_value_strcmp_2;
  return_value_strcmp_2=strcmp(filename, "-");
  if(return_value_strcmp_2 == 0)
    ((struct stdio_t *)io->data)->fd = 0;

  else
    ((struct stdio_t *)io->data)->fd=open(filename, 00 | (force_directio_read != 0 ? 040000 : 0));
  io->source = &stdio_source;
  if(((struct stdio_t *)io->data)->fd == -1)
  {
    free((void *)io);
    return (struct io_t *)(void *)0;
  }

  else
    return io;
}

// stdio_read
// file ior-stdio.c line 80
static signed long int stdio_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int return_value_read_1;
  return_value_read_1=read(((struct stdio_t *)io->data)->fd, buffer, (unsigned long int)len);
  return return_value_read_1;
}

// stdio_seek
// file ior-stdio.c line 90
static signed long int stdio_seek(struct io_t *io, signed long int offset, signed int whence)
{
  signed long int return_value_lseek_1;
  return_value_lseek_1=lseek(((struct stdio_t *)io->data)->fd, offset, whence);
  return return_value_lseek_1;
}

// stdio_tell
// file ior-stdio.c line 85
static signed long int stdio_tell(struct io_t *io)
{
  signed long int return_value_lseek_1;
  return_value_lseek_1=lseek(((struct stdio_t *)io->data)->fd, (signed long int)0, 1);
  return return_value_lseek_1;
}

// stdio_wclose
// file iow-stdio.c line 214
static void stdio_wclose(struct iow_t *iow)
{
  signed long int err;
  signed int return_value_fcntl_1;
  return_value_fcntl_1=fcntl(((struct stdiow_t *)iow->data)->fd, 3);
  err = (signed long int)return_value_fcntl_1;
  if(!((16384l & err) == 0l) && !(err == -1l))
    fcntl(((struct stdiow_t *)iow->data)->fd, 4, err & (signed long int)~040000);

  err=write(((struct stdiow_t *)iow->data)->fd, (const void *)((struct stdiow_t *)iow->data)->buffer, (unsigned long int)((struct stdiow_t *)iow->data)->offset);
  ((struct stdiow_t *)iow->data)->offset = 0;
  close(((struct stdiow_t *)iow->data)->fd);
  free(iow->data);
  free((void *)iow);
}

// stdio_wopen
// file wandio.h line 206
struct iow_t * stdio_wopen(const char *filename, signed int flags)
{
  struct iow_t *iow;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct iow_t) /*16ul*/ );
  iow = (struct iow_t *)return_value_malloc_1;
  iow->source = &stdio_wsource;
  iow->data=malloc(sizeof(struct stdiow_t) /*4104ul*/ );
  signed int return_value_strcmp_2;
  return_value_strcmp_2=strcmp(filename, "-");
  if(return_value_strcmp_2 == 0)
    ((struct stdiow_t *)iow->data)->fd = 1;

  else
    ((struct stdiow_t *)iow->data)->fd=safe_open(filename, flags);
  if(((struct stdiow_t *)iow->data)->fd == -1)
  {
    free((void *)iow);
    return (struct iow_t *)(void *)0;
  }

  else
  {
    ((struct stdiow_t *)iow->data)->offset = 0;
    return iow;
  }
}

// stdio_wwrite
// file iow-stdio.c line 146
static signed long int stdio_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  signed int towrite = (signed int)len;
  /* assertion towrite >= 0 */
  assert(towrite >= 0);
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_3;
  while(((struct stdiow_t *)iow->data)->offset + towrite >= 4096)
  {
    signed int err;
    struct iovec iov[2l];
    signed int total = ((struct stdiow_t *)iow->data)->offset + towrite;
    signed int amount;
    signed int count = 0;
    total = total - total % 4096;
    amount = total;
    if(!(((struct stdiow_t *)iow->data)->offset == 0))
    {
      iov[(signed long int)count].iov_base = (void *)((struct stdiow_t *)iow->data)->buffer;
      if(!(((struct stdiow_t *)iow->data)->offset >= amount))
        tmp_if_expr_1 = ((struct stdiow_t *)iow->data)->offset;

      else
        tmp_if_expr_1 = amount;
      iov[(signed long int)count].iov_len = (unsigned long int)tmp_if_expr_1;
      amount = amount - (signed int)iov[(signed long int)count].iov_len;
      count = count + 1;
    }

    if(!(towrite == 0))
    {
      iov[(signed long int)count].iov_base = (void *)buffer;
      iov[(signed long int)count].iov_len = (unsigned long int)amount;
      amount = amount - (signed int)iov[(signed long int)count].iov_len;
      count = count + 1;
    }

    /* assertion amount == 0 */
    assert(amount == 0);
    signed long int return_value_writev_2;
    return_value_writev_2=writev(((struct stdiow_t *)iow->data)->fd, iov, count);
    err = (signed int)return_value_writev_2;
    if(err == -1)
      return (signed long int)-1;

    if(!(((struct stdiow_t *)iow->data)->offset >= err))
      tmp_if_expr_3 = ((struct stdiow_t *)iow->data)->offset;

    else
      tmp_if_expr_3 = err;
    amount = tmp_if_expr_3;
    memmove((void *)((struct stdiow_t *)iow->data)->buffer, (const void *)(((struct stdiow_t *)iow->data)->buffer + (signed long int)amount), (unsigned long int)(((struct stdiow_t *)iow->data)->offset - amount));
    ((struct stdiow_t *)iow->data)->offset = ((struct stdiow_t *)iow->data)->offset - amount;
    err = err - amount;
    /* assertion err <= towrite */
    assert(err <= towrite);
    buffer = buffer + (signed long int)err;
    towrite = towrite - err;
    /* assertion ((struct stdiow_t *)((iow)->data))->offset == 0 */
    assert(((struct stdiow_t *)iow->data)->offset == 0);
  }
  /* assertion ((struct stdiow_t *)((iow)->data))->offset + towrite <= MIN_WRITE_SIZE */
  assert(((struct stdiow_t *)iow->data)->offset + towrite <= 4096);
  /* assertion towrite >= 0 */
  assert(towrite >= 0);
  if(towrite >= 1)
  {
    memcpy((void *)(((struct stdiow_t *)iow->data)->buffer + (signed long int)((struct stdiow_t *)iow->data)->offset), (const void *)buffer, (unsigned long int)towrite);
    ((struct stdiow_t *)iow->data)->offset = ((struct stdiow_t *)iow->data)->offset + towrite;
  }

  return len;
}

// thread_close
// file ior-thread.c line 260
static void thread_close(struct io_t *io)
{
  pthread_mutex_lock(&((struct state_t_0 *)io->data)->mutex);
  ((struct state_t_0 *)io->data)->closing = (_Bool)1;
  pthread_cond_signal(&((struct state_t_0 *)io->data)->space_avail);
  pthread_mutex_unlock(&((struct state_t_0 *)io->data)->mutex);
  pthread_join(((struct state_t_0 *)io->data)->producer, (void **)(void *)0);
  pthread_mutex_destroy(&((struct state_t_0 *)io->data)->mutex);
  pthread_cond_destroy(&((struct state_t_0 *)io->data)->space_avail);
  pthread_cond_destroy(&((struct state_t_0 *)io->data)->data_ready);
  free((void *)((struct state_t_0 *)io->data)->buffer);
  free((void *)(struct state_t_0 *)io->data);
  free((void *)io);
}

// thread_consumer
// file iow-thread.c line 98
static void * thread_consumer(void *userdata)
{
  signed int buffer = 0;
  _Bool running = (_Bool)1;
  struct iow_t *state = (struct iow_t *)userdata;
  char namebuf[17l];
  signed int return_value_prctl_2;
  return_value_prctl_2=prctl(16, (const void *)namebuf, 0, 0, 0);
  if(return_value_prctl_2 == 0)
  {
    namebuf[(signed long int)16] = (char)0;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(namebuf);
    if(return_value_strlen_1 >= 10ul)
      strcpy(namebuf + (signed long int)10, "[iow]");

    else
      strncat(namebuf, " [iow]", (unsigned long int)16);
    prctl(15, (const void *)namebuf, 0, 0, 0);
  }

  pthread_mutex_lock(&((struct state_t *)state->data)->mutex);

__CPROVER_DUMP_L4:
  ;
  while((_Bool)1)
  {
    if((signed int)((struct state_t *)state->data)->buffer[(signed long int)buffer].state == EMPTY)
    {
      if(((struct state_t *)state->data)->closing == (_Bool)0)
      {
        pthread_cond_wait(&((struct state_t *)state->data)->data_ready, &((struct state_t *)state->data)->mutex);
        goto __CPROVER_DUMP_L4;
      }

    }

    pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
    wandio_wwrite(((struct state_t *)state->data)->iow, (const void *)((struct state_t *)state->data)->buffer[(signed long int)buffer].buffer, (signed long int)((struct state_t *)state->data)->buffer[(signed long int)buffer].len);
    pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
    running = ((struct state_t *)state->data)->buffer[(signed long int)buffer].len > 0;
    ((struct state_t *)state->data)->buffer[(signed long int)buffer].len = 0;
    ((struct state_t *)state->data)->buffer[(signed long int)buffer].state = (enum anonymous_17)EMPTY;
    pthread_cond_signal(&((struct state_t *)state->data)->space_avail);
    buffer = (buffer + 1) % 5;
    if(running == (_Bool)0)
      break;

  }
  wandio_wdestroy(((struct state_t *)state->data)->iow);
  pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
  return (void *)0;
}

// thread_open
// file wandio.h line 196
struct io_t * thread_open(struct io_t *parent)
{
  struct io_t *state;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
    state = (struct io_t *)return_value_malloc_1;
    state->data=calloc((unsigned long int)1, sizeof(struct state_t_0) /*184ul*/ );
    state->source = &thread_source;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct buffer_t) /*1048584ul*/  * (unsigned long int)max_buffers);
    ((struct state_t_0 *)state->data)->buffer = (struct buffer_t *)return_value_malloc_2;
    memset((void *)((struct state_t_0 *)state->data)->buffer, 0, sizeof(struct buffer_t) /*1048584ul*/  * (unsigned long int)max_buffers);
    ((struct state_t_0 *)state->data)->in_buffer = 0;
    ((struct state_t_0 *)state->data)->offset = (signed long int)0;
    pthread_mutex_init(&((struct state_t_0 *)state->data)->mutex, (const union anonymous_15 *)(void *)0);
    pthread_cond_init(&((struct state_t_0 *)state->data)->data_ready, (const union anonymous_15 *)(void *)0);
    pthread_cond_init(&((struct state_t_0 *)state->data)->space_avail, (const union anonymous_15 *)(void *)0);
    ((struct state_t_0 *)state->data)->io = parent;
    ((struct state_t_0 *)state->data)->closing = (_Bool)0;
    pthread_create(&((struct state_t_0 *)state->data)->producer, (const union pthread_attr_t *)(void *)0, thread_producer, (void *)state);
    return state;
  }
}

// thread_producer
// file ior-thread.c line 98
static void * thread_producer(void *userdata)
{
  struct io_t *state = (struct io_t *)userdata;
  signed int buffer = 0;
  _Bool running = (_Bool)1;
  char namebuf[17l];
  signed int return_value_prctl_2;
  return_value_prctl_2=prctl(16, (const void *)namebuf, 0, 0, 0);
  if(return_value_prctl_2 == 0)
  {
    namebuf[(signed long int)16] = (char)0;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(namebuf);
    if(return_value_strlen_1 >= 10ul)
      strcpy(namebuf + (signed long int)10, "[ior]");

    else
      strncat(namebuf, " [ior]", (unsigned long int)16);
    prctl(15, (const void *)namebuf, 0, 0, 0);
  }

  pthread_mutex_lock(&((struct state_t_0 *)state->data)->mutex);

__CPROVER_DUMP_L4:
  ;
  while((_Bool)1)
  {
    if((signed int)(((struct state_t_0 *)state->data)->buffer + (signed long int)buffer)->state == FULL)
    {
      if(((struct state_t_0 *)state->data)->closing == (_Bool)0)
      {
        pthread_cond_wait(&((struct state_t_0 *)state->data)->space_avail, &((struct state_t_0 *)state->data)->mutex);
        goto __CPROVER_DUMP_L4;
      }

    }

    if(((struct state_t_0 *)state->data)->closing != (_Bool)0)
      break;

    pthread_mutex_unlock(&((struct state_t_0 *)state->data)->mutex);
    signed long int return_value_wandio_read_3;
    return_value_wandio_read_3=wandio_read(((struct state_t_0 *)state->data)->io, (void *)(((struct state_t_0 *)state->data)->buffer + (signed long int)buffer)->buffer, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
    (((struct state_t_0 *)state->data)->buffer + (signed long int)buffer)->len = (signed int)return_value_wandio_read_3;
    pthread_mutex_lock(&((struct state_t_0 *)state->data)->mutex);
    (((struct state_t_0 *)state->data)->buffer + (signed long int)buffer)->state = (enum anonymous_17)FULL;
    running = (((struct state_t_0 *)state->data)->buffer + (signed long int)buffer)->len > 0;
    pthread_cond_signal(&((struct state_t_0 *)state->data)->data_ready);
    buffer = (signed int)((unsigned int)(buffer + 1) % max_buffers);
    if(running == (_Bool)0)
      break;

  }
  wandio_destroy(((struct state_t_0 *)state->data)->io);
  pthread_cond_signal(&((struct state_t_0 *)state->data)->data_ready);
  pthread_mutex_unlock(&((struct state_t_0 *)state->data)->mutex);
  return (void *)0;
}

// thread_read
// file ior-thread.c line 196
static signed long int thread_read(struct io_t *state, void *buffer, signed long int len)
{
  signed int slice;
  signed int copied = 0;
  signed int newbuffer;
  signed long int tmp_if_expr_2;
  for( ; len >= 1l; ((struct state_t_0 *)state->data)->in_buffer = newbuffer)
  {
    pthread_mutex_lock(&((struct state_t_0 *)state->data)->mutex);
    while((signed int)(((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->state == EMPTY)
    {
      read_waits = read_waits + 1ul;
      pthread_cond_wait(&((struct state_t_0 *)state->data)->data_ready, &((struct state_t_0 *)state->data)->mutex);
    }
    if(!((((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->len >= 1))
    {
      if(!(copied >= 1))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = 5;
        copied = (((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->len;
      }

      pthread_mutex_unlock(&((struct state_t_0 *)state->data)->mutex);
      return (signed long int)copied;
    }

    if(!((signed long int)(((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->len + -((struct state_t_0 *)state->data)->offset >= len))
      tmp_if_expr_2 = (signed long int)(((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->len - ((struct state_t_0 *)state->data)->offset;

    else
      tmp_if_expr_2 = len;
    slice = (signed int)tmp_if_expr_2;
    pthread_mutex_unlock(&((struct state_t_0 *)state->data)->mutex);
    memcpy(buffer, (const void *)((((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->buffer + ((struct state_t_0 *)state->data)->offset), (unsigned long int)slice);
    buffer = buffer + (signed long int)slice;
    len = len - (signed long int)slice;
    copied = copied + slice;
    pthread_mutex_lock(&((struct state_t_0 *)state->data)->mutex);
    ((struct state_t_0 *)state->data)->offset = ((struct state_t_0 *)state->data)->offset + (signed long int)slice;
    newbuffer = ((struct state_t_0 *)state->data)->in_buffer;
    if(((struct state_t_0 *)state->data)->offset >= (signed long int)(((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->len)
    {
      (((struct state_t_0 *)state->data)->buffer + (signed long int)((struct state_t_0 *)state->data)->in_buffer)->state = (enum anonymous_17)EMPTY;
      pthread_cond_signal(&((struct state_t_0 *)state->data)->space_avail);
      newbuffer = (signed int)((unsigned int)(newbuffer + 1) % max_buffers);
      ((struct state_t_0 *)state->data)->offset = (signed long int)0;
    }

    pthread_mutex_unlock(&((struct state_t_0 *)state->data)->mutex);
  }
  return (signed long int)copied;
}

// thread_wclose
// file iow-thread.c line 242
static void thread_wclose(struct iow_t *iow)
{
  pthread_mutex_lock(&((struct state_t *)iow->data)->mutex);
  ((struct state_t *)iow->data)->closing = (_Bool)1;
  pthread_cond_signal(&((struct state_t *)iow->data)->data_ready);
  pthread_mutex_unlock(&((struct state_t *)iow->data)->mutex);
  pthread_join(((struct state_t *)iow->data)->consumer, (void **)(void *)0);
  pthread_mutex_destroy(&((struct state_t *)iow->data)->mutex);
  pthread_cond_destroy(&((struct state_t *)iow->data)->data_ready);
  pthread_cond_destroy(&((struct state_t *)iow->data)->space_avail);
  free(iow->data);
  free((void *)iow);
}

// thread_wopen
// file wandio.h line 205
struct iow_t * thread_wopen(struct iow_t *child)
{
  struct iow_t *state;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct iow_t) /*16ul*/ );
    state = (struct iow_t *)return_value_malloc_1;
    state->data=calloc((unsigned long int)1, sizeof(struct state_t) /*5243088ul*/ );
    state->source = &thread_wsource;
    ((struct state_t *)state->data)->out_buffer = 0;
    ((struct state_t *)state->data)->offset = (signed long int)0;
    pthread_mutex_init(&((struct state_t *)state->data)->mutex, (const union anonymous_15 *)(void *)0);
    pthread_cond_init(&((struct state_t *)state->data)->data_ready, (const union anonymous_15 *)(void *)0);
    pthread_cond_init(&((struct state_t *)state->data)->space_avail, (const union anonymous_15 *)(void *)0);
    ((struct state_t *)state->data)->iow = child;
    ((struct state_t *)state->data)->closing = (_Bool)0;
    pthread_create(&((struct state_t *)state->data)->consumer, (const union pthread_attr_t *)(void *)0, thread_consumer, (void *)state);
    return state;
  }
}

// thread_wwrite
// file iow-thread.c line 188
static signed long int thread_wwrite(struct iow_t *state, const char *buffer, signed long int len)
{
  signed int slice;
  signed int copied = 0;
  signed int newbuffer;
  pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
  signed long int tmp_if_expr_1;
  for( ; len >= 1l; ((struct state_t *)state->data)->out_buffer = newbuffer)
  {
    while((signed int)((struct state_t *)state->data)->buffer[(signed long int)((struct state_t *)state->data)->out_buffer].state == FULL)
    {
      write_waits = write_waits + 1ul;
      pthread_cond_wait(&((struct state_t *)state->data)->space_avail, &((struct state_t *)state->data)->mutex);
    }
    if(!((signed long int)sizeof(char [1048576l]) /*1048576l*/  + -((struct state_t *)state->data)->offset >= len))
      tmp_if_expr_1 = (signed long int)sizeof(char [1048576l]) /*1048576ul*/  - ((struct state_t *)state->data)->offset;

    else
      tmp_if_expr_1 = len;
    slice = (signed int)tmp_if_expr_1;
    pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
    memcpy((void *)(((struct state_t *)state->data)->buffer[(signed long int)((struct state_t *)state->data)->out_buffer].buffer + ((struct state_t *)state->data)->offset), (const void *)buffer, (unsigned long int)slice);
    pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
    ((struct state_t *)state->data)->offset = ((struct state_t *)state->data)->offset + (signed long int)slice;
    ((struct state_t *)state->data)->buffer[(signed long int)((struct state_t *)state->data)->out_buffer].len = ((struct state_t *)state->data)->buffer[(signed long int)((struct state_t *)state->data)->out_buffer].len + slice;
    buffer = buffer + (signed long int)slice;
    len = len - (signed long int)slice;
    copied = copied + slice;
    newbuffer = ((struct state_t *)state->data)->out_buffer;
    if(((struct state_t *)state->data)->offset >= (signed long int)sizeof(char [1048576l]) /*1048576l*/ )
    {
      ((struct state_t *)state->data)->buffer[(signed long int)((struct state_t *)state->data)->out_buffer].state = (enum anonymous_17)FULL;
      pthread_cond_signal(&((struct state_t *)state->data)->data_ready);
      ((struct state_t *)state->data)->offset = (signed long int)0;
      newbuffer = (newbuffer + 1) % 5;
    }

  }
  pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
  return (signed long int)copied;
}

// trace_apply_filter
// file ../../lib/libtrace.h line 2885
signed int trace_apply_filter(struct libtrace_filter_t *filter, const struct libtrace_packet_t *packet)
{
  void *linkptr = NULL;
  unsigned int clen = (unsigned int)0;
  _Bool free_packet_needed = (_Bool)0;
  signed int ret;
  enum anonymous_22 linktype;
  struct libtrace_packet_t *packet_copy = (struct libtrace_packet_t *)packet;
  /* assertion filter */
  assert(filter != ((struct libtrace_filter_t *)NULL));
  /* assertion packet */
  assert(packet != ((const struct libtrace_packet_t *)NULL));
  linktype=trace_get_link_type(packet);
  enum anonymous_3 return_value_libtrace_to_pcap_dlt_1;
  if((signed int)linktype == TRACE_TYPE_NONDATA)
    return 1;

  else
  {
    enum anonymous_3 return_value_libtrace_to_pcap_dlt_3;
    return_value_libtrace_to_pcap_dlt_3=libtrace_to_pcap_dlt(linktype);
    if((signed int)return_value_libtrace_to_pcap_dlt_3 == TRACE_DLT_ERROR)
    {
      packet_copy=trace_copy_packet(packet);
      free_packet_needed = (_Bool)1;
      do
      {
        return_value_libtrace_to_pcap_dlt_1=libtrace_to_pcap_dlt(linktype);
        if(!((signed int)return_value_libtrace_to_pcap_dlt_1 == TRACE_DLT_ERROR))
          break;

        _Bool return_value_demote_packet_2;
        return_value_demote_packet_2=demote_packet(packet_copy);
        if(return_value_demote_packet_2 == (_Bool)0)
        {
          trace_set_err(packet->trace, -4, "pcap does not support this format");
          if(!(free_packet_needed == (_Bool)0))
            trace_destroy_packet(packet_copy);

          return -1;
        }

        linktype=trace_get_link_type(packet_copy);
      }
      while((_Bool)1);
    }

    linkptr=trace_get_packet_buffer(packet_copy, (enum anonymous_22 *)(void *)0, &clen);
    if(linkptr == NULL)
    {
      if(!(free_packet_needed == (_Bool)0))
        trace_destroy_packet(packet_copy);

      return 0;
    }

    else
    {
      signed int return_value_trace_bpf_compile_4;
      return_value_trace_bpf_compile_4=trace_bpf_compile(filter, packet_copy, linkptr, linktype);
      if(return_value_trace_bpf_compile_4 == -1)
      {
        if(!(free_packet_needed == (_Bool)0))
          trace_destroy_packet(packet_copy);

        return -1;
      }

      else
      {
        /* assertion filter->flag */
        assert(filter->flag != 0);
        unsigned int return_value_bpf_filter_5;
        return_value_bpf_filter_5=bpf_filter(filter->filter.bf_insns, (unsigned char *)linkptr, (unsigned int)clen, (unsigned int)clen);
        ret = (signed int)return_value_bpf_filter_5;
        if(!(free_packet_needed == (_Bool)0))
          trace_destroy_packet(packet_copy);

        return ret;
      }
    }
  }
}

// trace_bpf_compile
// file trace.c line 1204
static signed int trace_bpf_compile(struct libtrace_filter_t *filter, const struct libtrace_packet_t *packet, void *linkptr, enum anonymous_22 linktype)
{
  /* assertion filter */
  assert(filter != ((struct libtrace_filter_t *)NULL));
  if(linkptr == NULL)
  {
    trace_set_err(packet->trace, -9, "Packet has no payload");
    return -1;
  }

  else
  {
    if(!(filter->filterstring == ((char *)NULL)))
    {
      if(filter->flag == 0)
      {
        struct pcap *pcap = (struct pcap *)(void *)0;
        if(linktype == /*enum*/TRACE_TYPE_UNKNOWN)
        {
          trace_set_err(packet->trace, -9, "Packet has an unknown linktype");
          return -1;
        }

        enum anonymous_3 return_value_libtrace_to_pcap_dlt_1;
        return_value_libtrace_to_pcap_dlt_1=libtrace_to_pcap_dlt(linktype);
        if((signed int)return_value_libtrace_to_pcap_dlt_1 == TRACE_DLT_ERROR)
        {
          trace_set_err(packet->trace, -9, "Unknown pcap equivalent linktype");
          return -1;
        }

        enum anonymous_3 return_value_libtrace_to_pcap_dlt_2;
        return_value_libtrace_to_pcap_dlt_2=libtrace_to_pcap_dlt(linktype);
        struct pcap *return_value_pcap_open_dead_3;
        return_value_pcap_open_dead_3=pcap_open_dead((signed int)return_value_libtrace_to_pcap_dlt_2, (signed int)1500U);
        pcap = (struct pcap *)return_value_pcap_open_dead_3;
        /* assertion pcap */
        assert(pcap != ((struct pcap *)NULL));
        signed int return_value_pcap_compile_5;
        return_value_pcap_compile_5=pcap_compile(pcap, &filter->filter, filter->filterstring, 1, (unsigned int)0);
        if(!(return_value_pcap_compile_5 == 0))
        {
          char *return_value_pcap_geterr_4;
          return_value_pcap_geterr_4=pcap_geterr(pcap);
          trace_set_err(packet->trace, -9, "Unable to compile the filter \"%s\": %s", filter->filterstring, return_value_pcap_geterr_4);
          pcap_close(pcap);
          return -1;
        }

        pcap_close(pcap);
        filter->flag = 1;
      }

    }

    return 0;
  }
}

// trace_clear_cache
// file trace.c line 1838
void trace_clear_cache(struct libtrace_packet_t *packet)
{
  packet->l2_header = (void *)0;
  packet->l3_header = (void *)0;
  packet->l4_header = (void *)0;
  packet->link_type = (enum anonymous_22)0;
  packet->l3_ethertype = (unsigned short int)0;
  packet->transport_proto = (unsigned char)0;
  packet->capture_length = -1;
  packet->wire_length = -1;
  packet->payload_length = -1;
  packet->l2_remaining = (unsigned int)0;
  packet->l3_remaining = (unsigned int)0;
  packet->l4_remaining = (unsigned int)0;
}

// trace_config
// file trace.c line 498
signed int trace_config(struct libtrace_t *libtrace, enum anonymous option, void *value)
{
  signed int ret;
  _Bool return_value_trace_is_err_1;
  return_value_trace_is_err_1=trace_is_err(libtrace);
  _Bool return_value_trace_is_err_2;
  _Bool tmp_if_expr_3;
  _Bool return_value_trace_is_err_4;
  _Bool return_value_trace_is_err_5;
  _Bool return_value_trace_is_err_6;
  _Bool return_value_trace_is_err_7;
  _Bool return_value_trace_is_err_8;
  if(!(return_value_trace_is_err_1 == (_Bool)0))
    return -1;

  else
    if(!(libtrace->format->config_input == ((signed int (*)(struct libtrace_t *, enum anonymous, void *))NULL)))
    {
      ret=libtrace->format->config_input(libtrace, option, value);
      return 0;
    }

    else
      switch((signed int)option)
      {
        case TRACE_OPTION_SNAPLEN:
        {
          return_value_trace_is_err_2=trace_is_err(libtrace);
          if(!(return_value_trace_is_err_2 == (_Bool)0))
            trace_get_err(libtrace);

          if(!(*((signed int *)value) >= 0))
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = *((signed int *)value) > 65536 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
            trace_set_err(libtrace, -8, "Invalid snap length");

          libtrace->snaplen = (unsigned long int)*((signed int *)value);
          return 0;
        }
        case TRACE_OPTION_FILTER:
        {
          return_value_trace_is_err_4=trace_is_err(libtrace);
          if(!(return_value_trace_is_err_4 == (_Bool)0))
            trace_get_err(libtrace);

          libtrace->filter = (struct libtrace_filter_t *)value;
          return 0;
        }
        case TRACE_OPTION_PROMISC:
        {
          return_value_trace_is_err_5=trace_is_err(libtrace);
          if(return_value_trace_is_err_5 == (_Bool)0)
            trace_set_err(libtrace, -6, "Promisc mode is not supported by this format module");

          return -1;
        }
        case TRACE_OPTION_META_FREQ:
        {
          return_value_trace_is_err_6=trace_is_err(libtrace);
          if(return_value_trace_is_err_6 == (_Bool)0)
            trace_set_err(libtrace, -6, "This format does not support meta-data gathering");

          return -1;
        }
        case TRACE_OPTION_EVENT_REALTIME:
        {
          return_value_trace_is_err_7=trace_is_err(libtrace);
          if(return_value_trace_is_err_7 == (_Bool)0)
            trace_set_err(libtrace, -6, "This format does not support realtime events");

          return -1;
        }
        default:
        {
          return_value_trace_is_err_8=trace_is_err(libtrace);
          if(return_value_trace_is_err_8 == (_Bool)0)
            trace_set_err(libtrace, -3, "Unknown option %i", option);

          return -1;
        }
      }
}

// trace_config_output
// file trace.c line 568
signed int trace_config_output(struct libtrace_out_t *libtrace, enum anonymous_0 option, void *value)
{
  if(!(libtrace->format->config_output == ((signed int (*)(struct libtrace_out_t *, enum anonymous_0, void *))NULL)))
  {
    signed int return_value;
    return_value=libtrace->format->config_output(libtrace, option, value);
    return return_value;
  }

  return -1;
}

// trace_construct_packet
// file trace.c line 1749
void trace_construct_packet(struct libtrace_packet_t *packet, enum anonymous_22 linktype, const void *data, unsigned short int len)
{
  unsigned long int size;
  struct libtrace_pcapfile_pkt_hdr_t hdr;
  struct timeval tv;
  static struct libtrace_t *deadtrace = (struct libtrace_t *)(void *)0;
  if(deadtrace == ((struct libtrace_t *)NULL))
    deadtrace=trace_create_dead("pcapfile");

  gettimeofday(&tv, (struct timezone *)(void *)0);
  hdr.ts_sec = (unsigned int)tv.tv_sec;
  hdr.ts_usec = (unsigned int)tv.tv_usec;
  hdr.caplen = (unsigned int)len;
  hdr.wirelen = (unsigned int)len;
  packet->trace = deadtrace;
  size = (unsigned long int)len + sizeof(struct libtrace_pcapfile_pkt_hdr_t) /*16ul*/ ;
  if((signed int)packet->buf_control == TRACE_CTRL_PACKET)
    packet->buffer=realloc(packet->buffer, size);

  else
    packet->buffer=malloc(size);
  packet->buf_control = (enum anonymous_21)TRACE_CTRL_PACKET;
  packet->header = packet->buffer;
  packet->payload = (void *)((char *)packet->buffer + (signed long int)sizeof(struct libtrace_pcapfile_pkt_hdr_t) /*16ul*/ );
  memcpy(packet->header, (const void *)&hdr, sizeof(struct libtrace_pcapfile_pkt_hdr_t) /*16ul*/ );
  memcpy(packet->payload, data, (unsigned long int)len);
  enum anonymous_3 return_value_libtrace_to_pcap_linktype_1;
  return_value_libtrace_to_pcap_linktype_1=libtrace_to_pcap_linktype(linktype);
  packet->type=pcap_linktype_to_rt(return_value_libtrace_to_pcap_linktype_1);
  trace_clear_cache(packet);
}

// trace_copy_packet
// file trace.c line 645
struct libtrace_packet_t * trace_copy_packet(const struct libtrace_packet_t *packet)
{
  struct libtrace_packet_t *dest;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_packet_t) /*104ul*/ );
  dest = (struct libtrace_packet_t *)return_value_malloc_1;
  if(dest == ((struct libtrace_packet_t *)NULL))
  {
    printf("Out of memory constructing packet\n");
    abort();
  }

  dest->trace = packet->trace;
  dest->buffer=malloc((unsigned long int)65536);
  if(dest->buffer == NULL)
  {
    printf("Out of memory allocating buffer memory\n");
    abort();
  }

  dest->header = dest->buffer;
  unsigned long int return_value_trace_get_framing_length_2;
  return_value_trace_get_framing_length_2=trace_get_framing_length(packet);
  dest->payload = (void *)((char *)dest->buffer + (signed long int)return_value_trace_get_framing_length_2);
  dest->type = packet->type;
  dest->buf_control = (enum anonymous_21)TRACE_CTRL_PACKET;
  trace_clear_cache(dest);
  unsigned long int return_value_trace_get_framing_length_3;
  return_value_trace_get_framing_length_3=trace_get_framing_length(packet);
  memcpy(dest->header, packet->header, return_value_trace_get_framing_length_3);
  unsigned long int return_value_trace_get_capture_length_4;
  return_value_trace_get_capture_length_4=trace_get_capture_length(packet);
  memcpy(dest->payload, packet->payload, return_value_trace_get_capture_length_4);
  return dest;
}

// trace_create
// file ../../lib/libtrace.h line 1140
struct libtrace_t * trace_create(const char *uri)
{
  struct libtrace_t *libtrace;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_t) /*360ul*/ );
  libtrace = (struct libtrace_t *)return_value_malloc_1;
  char *scan = ((char *)NULL);
  const char *uridata = ((const char *)NULL);
  trace_init();
  /* assertion uri && "Passing NULL to trace_create makes me a very sad program" */
  assert(uri != ((const char *)NULL) && (_Bool)"Passing NULL to trace_create makes me a very sad program");
  unsigned long int return_value_strlen_2;
  signed int return_value_strncasecmp_3;
  if(libtrace == ((struct libtrace_t *)NULL))
    return (struct libtrace_t *)(void *)0;

  else
  {
    libtrace->err.err_num = 0;
    libtrace->format = (struct libtrace_format_t *)(void *)0;
    libtrace->event.tdelta = 0.0;
    libtrace->event.packet = (struct libtrace_packet_t *)(void *)0;
    libtrace->event.psize = 0;
    libtrace->event.trace_last_ts = 0.0;
    libtrace->event.waiting = (_Bool)0;
    libtrace->filter = (struct libtrace_filter_t *)(void *)0;
    libtrace->snaplen = (unsigned long int)0;
    libtrace->started = (_Bool)0;
    libtrace->uridata = (char *)(void *)0;
    libtrace->io = (struct io_t *)(void *)0;
    libtrace->filtered_packets = (unsigned long int)0;
    libtrace->accepted_packets = (unsigned long int)0;
    uridata=trace_parse_uri(uri, &scan);
    if(uridata == ((const char *)NULL))
    {
      guess_format(libtrace, uri);
      if(libtrace->format == ((struct libtrace_format_t *)NULL))
      {
        trace_set_err(libtrace, -1, "Unable to guess format (%s)", uri);
        return libtrace;
      }

    }

    else
    {
      struct libtrace_format_t *tmp = formats_list;
      for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
      {
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(scan);
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(tmp->name);
        if(return_value_strlen_4 == return_value_strlen_5)
        {
          return_value_strlen_2=strlen(scan);
          return_value_strncasecmp_3=strncasecmp(scan, tmp->name, return_value_strlen_2);
          if(return_value_strncasecmp_3 == 0)
          {
            libtrace->format = tmp;
            break;
          }

        }

      }
      if(libtrace->format == ((struct libtrace_format_t *)NULL))
      {
        trace_set_err(libtrace, -1, "Unknown format (%s)", scan);
        return libtrace;
      }

      libtrace->uridata=strdup(uridata);
    }
    if(!(libtrace->format->init_input == ((signed int (*)(struct libtrace_t *))NULL)))
    {
      signed int err;
      err=libtrace->format->init_input(libtrace);
      /* assertion err==-1 || err==0 */
      assert(err == -1 || err == 0);
      if(err == -1)
        return libtrace;

    }

    else
    {
      trace_set_err(libtrace, -7, "Format does not support input (%s)", scan);
      return libtrace;
    }
    if(!(scan == ((char *)NULL)))
      free((void *)scan);

    libtrace->err.err_num = 0;
    libtrace->err.problem[(signed long int)0] = (char)0;
    return libtrace;
  }
}

// trace_create_dead
// file trace.c line 321
struct libtrace_t * trace_create_dead(const char *uri)
{
  struct libtrace_t *libtrace;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_t) /*360ul*/ );
  libtrace = (struct libtrace_t *)return_value_malloc_1;
  char *scan;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc(sizeof(char) /*1ul*/ , (unsigned long int)16U);
  scan = (char *)return_value_calloc_2;
  char *uridata;
  struct libtrace_format_t *tmp;
  trace_init();
  libtrace->err.err_num = 0;
  uridata=strchr(uri, 58);
  if(uridata == ((char *)NULL))
  {
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(uri);
    xstrncpy(scan, uri, return_value_strlen_3);
  }

  else
    xstrncpy(scan, uri, (unsigned long int)(uridata - uri));
  libtrace->err.err_num = 0;
  libtrace->format = (struct libtrace_format_t *)(void *)0;
  libtrace->event.tdelta = 0.0;
  libtrace->event.packet = (struct libtrace_packet_t *)(void *)0;
  libtrace->event.psize = 0;
  libtrace->event.trace_last_ts = 0.0;
  libtrace->filter = (struct libtrace_filter_t *)(void *)0;
  libtrace->snaplen = (unsigned long int)0;
  libtrace->started = (_Bool)0;
  libtrace->uridata = (char *)(void *)0;
  libtrace->io = (struct io_t *)(void *)0;
  libtrace->filtered_packets = (unsigned long int)0;
  tmp = formats_list;
  unsigned long int return_value_strlen_4;
  signed int return_value_strncasecmp_5;
  for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
  {
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(scan);
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(tmp->name);
    if(return_value_strlen_6 == return_value_strlen_7)
    {
      return_value_strlen_4=strlen(scan);
      return_value_strncasecmp_5=strncasecmp(scan, tmp->name, return_value_strlen_4);
      if(return_value_strncasecmp_5 == 0)
      {
        libtrace->format = tmp;
        break;
      }

    }

  }
  if(libtrace->format == ((struct libtrace_format_t *)NULL))
    trace_set_err(libtrace, -1, "Unknown format (%s)", scan);

  libtrace->format_data = (void *)0;
  free((void *)scan);
  return libtrace;
}

// trace_create_filter
// file ../../lib/libtrace.h line 2860
struct libtrace_filter_t * trace_create_filter(const char *filterstring)
{
  struct libtrace_filter_t *filter;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_filter_t) /*40ul*/ );
  filter = (struct libtrace_filter_t *)return_value_malloc_1;
  filter->filterstring=strdup(filterstring);
  filter->jitfilter = (struct bpf_jit_t *)(void *)0;
  filter->flag = 0;
  return filter;
}

// trace_create_filter_from_bytecode
// file trace.c line 1139
struct libtrace_filter_t * trace_create_filter_from_bytecode(void *bf_insns, unsigned int bf_len)
{
  struct libtrace_filter_t *filter;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_filter_t) /*40ul*/ );
  filter = (struct libtrace_filter_t *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct bpf_insn) /*8ul*/  * (unsigned long int)bf_len);
  filter->filter.bf_insns = (struct bpf_insn *)return_value_malloc_2;
  memcpy((void *)filter->filter.bf_insns, bf_insns, (unsigned long int)bf_len * sizeof(struct bpf_insn) /*8ul*/ );
  filter->filter.bf_len = bf_len;
  filter->filterstring = (char *)(void *)0;
  filter->jitfilter = (struct bpf_jit_t *)(void *)0;
  filter->flag = 1;
  return filter;
}

// trace_create_output
// file trace.c line 380
struct libtrace_out_t * trace_create_output(const char *uri)
{
  struct libtrace_out_t *libtrace;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct libtrace_out_t) /*288ul*/ );
  libtrace = (struct libtrace_out_t *)return_value_malloc_1;
  char *scan = ((char *)NULL);
  const char *uridata = ((const char *)NULL);
  struct libtrace_format_t *tmp;
  trace_init();
  libtrace->err.err_num = 0;
  strcpy(libtrace->err.problem, "Error message set\n");
  libtrace->format = (struct libtrace_format_t *)(void *)0;
  libtrace->uridata = (char *)(void *)0;
  uridata=trace_parse_uri(uri, &scan);
  unsigned long int return_value_strlen_2;
  signed int return_value_strncasecmp_3;
  if(uridata == ((const char *)NULL))
  {
    trace_set_err_out(libtrace, -1, "Bad uri format (%s)", uri);
    return libtrace;
  }

  else
  {
    tmp = formats_list;
    for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
    {
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(scan);
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(tmp->name);
      if(return_value_strlen_4 == return_value_strlen_5)
      {
        return_value_strlen_2=strlen(scan);
        return_value_strncasecmp_3=strncasecmp(scan, tmp->name, return_value_strlen_2);
        if(return_value_strncasecmp_3 == 0)
        {
          libtrace->format = tmp;
          break;
        }

      }

    }
    free((void *)scan);
    if(libtrace->format == ((struct libtrace_format_t *)NULL))
    {
      trace_set_err_out(libtrace, -1, "Unknown output format (%s)", scan);
      return libtrace;
    }

    else
    {
      libtrace->uridata=strdup(uridata);
      if(!(libtrace->format->init_output == ((signed int (*)(struct libtrace_out_t *))NULL)))
      {
        signed int return_value;
        return_value=libtrace->format->init_output(libtrace);
        if(return_value == -1)
          return libtrace;

        /* assertion !"Internal error: init_output() should return -1 for failure, or 0 for success" */
        assert(!((_Bool)"Internal error: init_output() should return -1 for failure, or 0 for success"));
      }

      else
      {
        trace_set_err_out(libtrace, -7, "Format does not support writing (%s)", scan);
        return libtrace;
      }
      libtrace->started = (_Bool)0;
      return libtrace;
    }
  }
}

// trace_create_packet
// file ../../lib/libtrace.h line 1397
struct libtrace_packet_t * trace_create_packet(void)
{
  struct libtrace_packet_t *packet;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct libtrace_packet_t) /*104ul*/ );
  packet = (struct libtrace_packet_t *)return_value_calloc_1;
  packet->buf_control = (enum anonymous_21)TRACE_CTRL_PACKET;
  trace_clear_cache(packet);
  return packet;
}

// trace_destroy
// file ../../lib/libtrace.h line 1275
void trace_destroy(struct libtrace_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_t *)NULL));
  if(!(libtrace->format == ((struct libtrace_format_t *)NULL)))
  {
    if(!(libtrace->started == (_Bool)0))
    {
      if(!(libtrace->format->pause_input == ((signed int (*)(struct libtrace_t *))NULL)))
        libtrace->format->pause_input(libtrace);

    }

    if(!(libtrace->format->fin_input == ((signed int (*)(struct libtrace_t *))NULL)))
      libtrace->format->fin_input(libtrace);

  }

  if(!(libtrace->uridata == ((char *)NULL)))
    free((void *)libtrace->uridata);

  if(!(libtrace->event.packet == ((struct libtrace_packet_t *)NULL)))
    free((void *)libtrace->event.packet);

  free((void *)libtrace);
}

// trace_destroy_dead
// file trace.c line 611
void trace_destroy_dead(struct libtrace_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_t *)NULL));
  if(!(libtrace->format_data == NULL))
    free(libtrace->format_data);

  free((void *)libtrace);
}

// trace_destroy_filter
// file trace.c line 1181
void trace_destroy_filter(struct libtrace_filter_t *filter)
{
  free((void *)filter->filterstring);
  if(!(filter->flag == 0))
    pcap_freecode(&filter->filter);

  free((void *)filter);
}

// trace_destroy_output
// file trace.c line 625
void trace_destroy_output(struct libtrace_out_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_out_t *)NULL));
  if(!(libtrace->format == ((struct libtrace_format_t *)NULL)))
  {
    if(!(libtrace->format->fin_output == ((signed int (*)(struct libtrace_out_t *))NULL)))
      libtrace->format->fin_output(libtrace);

  }

  if(!(libtrace->uridata == ((char *)NULL)))
    free((void *)libtrace->uridata);

  free((void *)libtrace);
}

// trace_destroy_packet
// file ../../lib/libtrace.h line 1417
void trace_destroy_packet(struct libtrace_packet_t *packet)
{
  if((signed int)packet->buf_control == TRACE_CTRL_PACKET)
  {
    if(!(packet->buffer == NULL))
      free(packet->buffer);

  }

  packet->buf_control = (enum anonymous_21)0;
  free((void *)packet);
}

// trace_ether_aton
// file trace.c line 1723
unsigned char * trace_ether_aton(const char *buf, unsigned char *addr)
{
  unsigned char *buf2 = addr;
  unsigned int tmp[6l];
  static unsigned char staticaddr[6l];
  if(buf2 == ((unsigned char *)NULL))
    buf2 = staticaddr;

  sscanf(buf, "%x:%x:%x:%x:%x:%x", &tmp[(signed long int)0], &tmp[(signed long int)1], &tmp[(signed long int)2], &tmp[(signed long int)3], &tmp[(signed long int)4], &tmp[(signed long int)5]);
  buf2[(signed long int)0] = (unsigned char)tmp[(signed long int)0];
  buf2[(signed long int)1] = (unsigned char)tmp[(signed long int)1];
  buf2[(signed long int)2] = (unsigned char)tmp[(signed long int)2];
  buf2[(signed long int)3] = (unsigned char)tmp[(signed long int)3];
  buf2[(signed long int)4] = (unsigned char)tmp[(signed long int)4];
  buf2[(signed long int)5] = (unsigned char)tmp[(signed long int)5];
  return buf2;
}

// trace_ether_ntoa
// file trace.c line 1711
char * trace_ether_ntoa(const unsigned char *addr, char *buf)
{
  static char staticbuf[18l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if(buf == ((char *)NULL))
    buf = staticbuf;

  snprintf(buf, (unsigned long int)18, "%02x:%02x:%02x:%02x:%02x:%02x", addr[(signed long int)0], addr[(signed long int)1], addr[(signed long int)2], addr[(signed long int)3], addr[(signed long int)4], addr[(signed long int)5]);
  return buf;
}

// trace_event
// file trace.c line 1103
struct libtrace_eventobj_t trace_event(struct libtrace_t *trace, struct libtrace_packet_t *packet)
{
  struct libtrace_eventobj_t event = { .type=(enum anonymous_1)TRACE_EVENT_IOWAIT, .fd=0,
    .seconds=0.0, .size=0 };
  if(trace == ((struct libtrace_t *)NULL))
    fprintf(stderr, "You called trace_event() with a NULL trace object!\n");

  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  trace_clear_cache(packet);
  packet->trace = trace;
  if(!(packet->trace->format->trace_event == ((struct libtrace_eventobj_t (*)(struct libtrace_t *, struct libtrace_packet_t *))NULL)))
    event=packet->trace->format->trace_event(trace, packet);

  return event;
}

// trace_get_accepted_packets
// file trace.c line 1832
unsigned long int trace_get_accepted_packets(struct libtrace_t *trace)
{
  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  return trace->accepted_packets;
}

// trace_get_capture_length
// file trace.c line 1024
unsigned long int trace_get_capture_length(const struct libtrace_packet_t *packet)
{
  if(packet->capture_length == -1)
  {
    if(packet->trace->format->get_capture_length == ((signed int (*)(const struct libtrace_packet_t *))NULL))
      return (unsigned long int)~0U;

    ((struct libtrace_packet_t *)packet)->capture_length=packet->trace->format->get_capture_length(packet);
  }

  /* assertion packet->capture_length < 65536 */
  assert(packet->capture_length < 65536);
  return (unsigned long int)packet->capture_length;
}

// trace_get_direction
// file trace.c line 1372
enum anonymous_2 trace_get_direction(const struct libtrace_packet_t *packet)
{
  /* assertion packet */
  assert(packet != ((const struct libtrace_packet_t *)NULL));
  if(!(packet->trace->format->get_direction == ((enum anonymous_2 (*)(const struct libtrace_packet_t *))NULL)))
  {
    enum anonymous_2 return_value;
    return_value=packet->trace->format->get_direction(packet);
    return return_value;
  }

  return (enum anonymous_2)~0U;
}

// trace_get_dropped_packets
// file trace.c line 1823
unsigned long int trace_get_dropped_packets(struct libtrace_t *trace)
{
  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  if(!(trace->format->get_dropped_packets == ((unsigned long int (*)(struct libtrace_t *))NULL)))
  {
    unsigned long int return_value;
    return_value=trace->format->get_dropped_packets(trace);
    return return_value;
  }

  return (unsigned long int)-1;
}

// trace_get_erf_timestamp
// file trace.c line 890
unsigned long int trace_get_erf_timestamp(const struct libtrace_packet_t *packet)
{
  if(!(packet->trace->format->get_erf_timestamp == ((unsigned long int (*)(const struct libtrace_packet_t *))NULL)))
  {
    unsigned long int return_value;
    return_value=packet->trace->format->get_erf_timestamp(packet);
    return return_value;
  }

  else
    if(!(packet->trace->format->get_timespec == ((struct timespec (*)(const struct libtrace_packet_t *))NULL)))
    {
      struct timespec ts;
      ts=packet->trace->format->get_timespec(packet);
      return ((unsigned long int)ts.tv_sec << 32) + ((unsigned long int)ts.tv_nsec << 32) / (unsigned long int)1000000000;
    }

    else
      if(!(packet->trace->format->get_timeval == ((struct timeval (*)(const struct libtrace_packet_t *))NULL)))
      {
        struct timeval tv;
        tv=packet->trace->format->get_timeval(packet);
        return ((unsigned long int)tv.tv_sec << 32) + ((unsigned long int)tv.tv_usec << 32) / (unsigned long int)1000000;
      }

      else
        if(!(packet->trace->format->get_seconds == ((double (*)(const struct libtrace_packet_t *))NULL)))
        {
          double seconds;
          seconds=packet->trace->format->get_seconds(packet);
          return ((unsigned long int)seconds << 32) + (unsigned long int)((seconds - (double)(unsigned long int)seconds) * (double)((unsigned int)0x7fffffff * 2U + 1U));
        }

        else
          return (unsigned long int)0;
}

// trace_get_err
// file trace.c line 1555
struct trace_err_t trace_get_err(struct libtrace_t *trace)
{
  struct trace_err_t err = trace->err;
  trace->err.err_num = 0;
  trace->err.problem[(signed long int)0] = (char)0;
  return err;
}

// trace_get_err_output
// file trace.c line 1594
struct trace_err_t trace_get_err_output(struct libtrace_out_t *trace)
{
  struct trace_err_t err = trace->err;
  trace->err.err_num = 0;
  trace->err.problem[(signed long int)0] = (char)0;
  return err;
}

// trace_get_filtered_packets
// file trace.c line 1813
unsigned long int trace_get_filtered_packets(struct libtrace_t *trace)
{
  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  if(!(trace->format->get_filtered_packets == ((unsigned long int (*)(struct libtrace_t *))NULL)))
  {
    unsigned long int return_value;
    return_value=trace->format->get_filtered_packets(trace);
    return return_value + trace->filtered_packets;
  }

  return trace->filtered_packets;
}

// trace_get_format
// file trace.c line 1548
enum base_format_t trace_get_format(struct libtrace_packet_t *packet)
{
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  return packet->trace->format->type;
}

// trace_get_framing_length
// file trace.c line 1068
unsigned long int trace_get_framing_length(const struct libtrace_packet_t *packet)
{
  if(!(packet->trace->format->get_framing_length == ((signed int (*)(const struct libtrace_packet_t *))NULL)))
  {
    signed int return_value;
    return_value=packet->trace->format->get_framing_length(packet);
    return (unsigned long int)return_value;
  }

  return (unsigned long int)~0U;
}

// trace_get_link
// file trace.c line 881
void * trace_get_link(const struct libtrace_packet_t *packet)
{
  return (void *)packet->payload;
}

// trace_get_link_type
// file trace.c line 1080
enum anonymous_22 trace_get_link_type(const struct libtrace_packet_t *packet)
{
  if((signed int)packet->link_type == 0)
  {
    if(packet->trace->format->get_link_type == ((enum anonymous_22 (*)(const struct libtrace_packet_t *))NULL))
      return (enum anonymous_22)TRACE_TYPE_UNKNOWN;

    ((struct libtrace_packet_t *)packet)->link_type=packet->trace->format->get_link_type(packet);
  }

  return packet->link_type;
}

// trace_get_packet_buffer
// file ../../lib/libtrace.h line 1557
void * trace_get_packet_buffer(const struct libtrace_packet_t *packet, enum anonymous_22 *linktype, unsigned int *remaining)
{
  signed int cap_len;
  signed int wire_len;
  /* assertion packet != ((void *)0) */
  assert(packet != (const struct libtrace_packet_t *)(void *)0);
  if(!(linktype == ((enum anonymous_22 *)NULL)))
    *linktype=trace_get_link_type(packet);

  if(!(remaining == ((unsigned int *)NULL)))
  {
    unsigned long int return_value_trace_get_capture_length_1;
    return_value_trace_get_capture_length_1=trace_get_capture_length(packet);
    cap_len = (signed int)return_value_trace_get_capture_length_1;
    unsigned long int return_value_trace_get_wire_length_2;
    return_value_trace_get_wire_length_2=trace_get_wire_length(packet);
    wire_len = (signed int)return_value_trace_get_wire_length_2;
    /* assertion cap_len >= 0 */
    assert(cap_len >= 0);
    if(!(wire_len >= 0))
      *remaining = (unsigned int)cap_len;

    else
      if(!(wire_len >= cap_len))
        *remaining = (unsigned int)wire_len;

      else
        *remaining = (unsigned int)cap_len;
  }

  return (void *)packet->payload;
}

// trace_get_received_packets
// file trace.c line 1804
unsigned long int trace_get_received_packets(struct libtrace_t *trace)
{
  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  if(!(trace->format->get_received_packets == ((unsigned long int (*)(struct libtrace_t *))NULL)))
  {
    unsigned long int return_value;
    return_value=trace->format->get_received_packets(trace);
    return return_value;
  }

  return (unsigned long int)-1;
}

// trace_get_seconds
// file ../../lib/libtrace.h line 2657
double trace_get_seconds(const struct libtrace_packet_t *packet)
{
  double seconds = 0.0;
  if(!(packet->trace->format->get_seconds == ((double (*)(const struct libtrace_packet_t *))NULL)))
    seconds=packet->trace->format->get_seconds(packet);

  else
    if(!(packet->trace->format->get_erf_timestamp == ((unsigned long int (*)(const struct libtrace_packet_t *))NULL)))
    {
      unsigned long int ts = (unsigned long int)0;
      ts=packet->trace->format->get_erf_timestamp(packet);
      seconds = (double)(ts >> 32) + ((double)(ts & (unsigned long int)((unsigned int)0x7fffffff * 2U + 1U)) * 1.0) / (double)((unsigned int)0x7fffffff * 2U + 1U);
    }

    else
      if(!(packet->trace->format->get_timespec == ((struct timespec (*)(const struct libtrace_packet_t *))NULL)))
      {
        struct timespec trace_get_seconds__1__3__ts;
        trace_get_seconds__1__3__ts=packet->trace->format->get_timespec(packet);
        seconds = (double)trace_get_seconds__1__3__ts.tv_sec + ((double)trace_get_seconds__1__3__ts.tv_nsec * 1.0) / (double)1000000000;
      }

      else
        if(!(packet->trace->format->get_timeval == ((struct timeval (*)(const struct libtrace_packet_t *))NULL)))
        {
          struct timeval tv;
          tv=packet->trace->format->get_timeval(packet);
          seconds = (double)tv.tv_sec + ((double)tv.tv_usec * 1.0) / (double)1000000;
        }

  return seconds;
}

// trace_get_server_port
// file trace.c line 1395
signed char trace_get_server_port(unsigned char protocol, unsigned short int source, unsigned short int dest)
{
  if(source == dest)
    return (signed char)0;

  else
    if(!((signed int)dest >= 512) && !((signed int)source >= 512))
    {
      if(!((signed int)source >= (signed int)dest))
        return (signed char)1;

      return (signed char)0;
    }

    else
      if((signed int)dest >= 512 && !((signed int)source >= 512))
        return (signed char)1;

      else
        if((signed int)source >= 512 && !((signed int)dest >= 512))
          return (signed char)0;

        else
          if((signed int)dest >= 5000 && (signed int)source >= 5000)
          {
            if(!((signed int)source >= (signed int)dest))
              return (signed char)1;

            return (signed char)0;
          }

          else
            if((signed int)source >= 5000 && !((signed int)dest >= 5000))
              return (signed char)1;

            else
              if((signed int)dest >= 5000 && !((signed int)source >= 5000))
                return (signed char)0;

              else
                if((signed int)dest >= 512 && (signed int)source >= 512 && !((signed int)dest >= 1024) && !((signed int)source >= 1024))
                {
                  if(!((signed int)source >= (signed int)dest))
                    return (signed char)1;

                  return (signed char)0;
                }

                else
                  if((signed int)source >= 512 && !((signed int)source >= 1024) && (!((signed int)dest >= 512) || (signed int)dest >= 1024))
                  {
                    if((signed int)dest >= 1024 && !((signed int)dest >= 5000))
                      return (signed char)1;

                    return (signed char)0;
                  }

                  else
                    if((signed int)dest >= 512 && !((signed int)dest >= 1024) && (!((signed int)source >= 512) || (signed int)source >= 1024))
                    {
                      if((signed int)source >= 1024 && !((signed int)source >= 5000))
                        return (signed char)0;

                      return (signed char)1;
                    }

                    else
                      if((signed int)dest >= 1024 && (signed int)source >= 1024 && !((signed int)dest >= 5000) && !((signed int)source >= 5000))
                      {
                        if(!((signed int)source >= (signed int)dest))
                          return (signed char)1;

                        return (signed char)0;
                      }

                      else
                        if((signed int)source >= 1024 && !((signed int)source >= 5000) && (!((signed int)dest >= 1024) || (signed int)dest >= 5000))
                          return (signed char)0;

                        else
                          if((signed int)dest >= 1024 && !((signed int)dest >= 5000) && (!((signed int)source >= 1024) || (signed int)source >= 5000))
                            return (signed char)1;

                          else
                            if((signed int)dest >= 49153 && (signed int)source >= 49153 && !((signed int)dest >= 65535) && !((signed int)source >= 65535))
                            {
                              if(!((signed int)source >= (signed int)dest))
                                return (signed char)1;

                              return (signed char)0;
                            }

                            else
                              if((signed int)source >= 49153 && !((signed int)source >= 65535) && (!((signed int)dest >= 49153) || (signed int)dest >= 65535))
                                return (signed char)0;

                              else
                                if((signed int)dest >= 49153 && !((signed int)dest >= 65535) && (!((signed int)source >= 49153) || (signed int)source >= 65535))
                                  return (signed char)1;

                                else
                                  if(!((signed int)source >= (signed int)dest))
                                    return (signed char)1;

                                  else
                                    return (signed char)0;
}

// trace_get_timespec
// file trace.c line 958
struct timespec trace_get_timespec(const struct libtrace_packet_t *packet)
{
  struct timespec ts;
  if(!(packet->trace->format->get_timespec == ((struct timespec (*)(const struct libtrace_packet_t *))NULL)))
  {
    struct timespec return_value;
    return_value=packet->trace->format->get_timespec(packet);
    return return_value;
  }

  else
    if(!(packet->trace->format->get_erf_timestamp == ((unsigned long int (*)(const struct libtrace_packet_t *))NULL)))
    {
      unsigned long int erfts;
      erfts=packet->trace->format->get_erf_timestamp(packet);
      ts.tv_sec = (signed long int)(erfts >> 32);
      ts.tv_nsec = (signed long int)((erfts & (unsigned long int)0xFFFFFFFF) * (unsigned long int)1000000000 >> 32);
      if(ts.tv_nsec >= 1000000000l)
      {
        ts.tv_nsec = ts.tv_nsec - (signed long int)1000000000;
        ts.tv_sec = ts.tv_sec + (signed long int)1;
      }

      return ts;
    }

    else
      if(!(packet->trace->format->get_timeval == ((struct timeval (*)(const struct libtrace_packet_t *))NULL)))
      {
        struct timeval tv;
        tv=packet->trace->format->get_timeval(packet);
        ts.tv_sec = tv.tv_sec;
        ts.tv_nsec = tv.tv_usec * (signed long int)1000;
        return ts;
      }

      else
        if(!(packet->trace->format->get_seconds == ((double (*)(const struct libtrace_packet_t *))NULL)))
        {
          double seconds;
          seconds=packet->trace->format->get_seconds(packet);
          ts.tv_sec = (signed long int)(unsigned int)seconds;
          ts.tv_nsec = (signed long int)(((seconds - (double)ts.tv_sec) * (double)1000000000) / (double)((unsigned int)0x7fffffff * 2U + 1U));
          return ts;
        }

        else
        {
          ts.tv_sec = (signed long int)-1;
          ts.tv_nsec = (signed long int)-1;
          return ts;
        }
}

// trace_get_timeval
// file trace.c line 925
struct timeval trace_get_timeval(const struct libtrace_packet_t *packet)
{
  struct timeval tv;
  unsigned long int trace_get_timeval__1__ts = (unsigned long int)0;
  if(!(packet->trace->format->get_timeval == ((struct timeval (*)(const struct libtrace_packet_t *))NULL)))
    tv=packet->trace->format->get_timeval(packet);

  else
    if(!(packet->trace->format->get_erf_timestamp == ((unsigned long int (*)(const struct libtrace_packet_t *))NULL)))
    {
      trace_get_timeval__1__ts=packet->trace->format->get_erf_timestamp(packet);
      tv.tv_sec = (signed long int)(trace_get_timeval__1__ts >> 32);
      tv.tv_usec = (signed long int)((trace_get_timeval__1__ts & (unsigned long int)0xFFFFFFFF) * (unsigned long int)1000000 >> 32);
      if(tv.tv_usec >= 1000000l)
      {
        tv.tv_usec = tv.tv_usec - (signed long int)1000000;
        tv.tv_sec = tv.tv_sec + (signed long int)1;
      }

    }

    else
      if(!(packet->trace->format->get_timespec == ((struct timespec (*)(const struct libtrace_packet_t *))NULL)))
      {
        struct timespec ts;
        ts=packet->trace->format->get_timespec(packet);
        tv.tv_sec = ts.tv_sec;
        tv.tv_usec = ts.tv_nsec / (signed long int)1000;
      }

      else
        if(!(packet->trace->format->get_seconds == ((double (*)(const struct libtrace_packet_t *))NULL)))
        {
          double seconds;
          seconds=packet->trace->format->get_seconds(packet);
          tv.tv_sec = (signed long int)(unsigned int)seconds;
          tv.tv_usec = (signed long int)(unsigned int)(((seconds - (double)tv.tv_sec) * (double)1000000) / (double)((unsigned int)0x7fffffff * 2U + 1U));
        }

        else
        {
          tv.tv_sec = (signed long int)-1;
          tv.tv_usec = (signed long int)-1;
        }
  return tv;
}

// trace_get_wire_length
// file ../../lib/libtrace.h line 2759
unsigned long int trace_get_wire_length(const struct libtrace_packet_t *packet)
{
  if(packet->wire_length == -1)
  {
    if(packet->trace->format->get_wire_length == ((signed int (*)(const struct libtrace_packet_t *))NULL))
      return (unsigned long int)~0U;

    ((struct libtrace_packet_t *)packet)->wire_length=packet->trace->format->get_wire_length(packet);
  }

  /* assertion packet->wire_length < 65536 */
  assert(packet->wire_length < 65536);
  return (unsigned long int)packet->wire_length;
}

// trace_help
// file ../../lib/libtrace.h line 1081
void trace_help(void)
{
  struct libtrace_format_t *tmp;
  trace_init();
  printf("libtrace %s\n\n", (const void *)"3.0.21");
  printf("Following this are a list of the format modules supported in this build of libtrace\n\n");
  tmp = formats_list;
  for( ; !(tmp == ((struct libtrace_format_t *)NULL)); tmp = tmp->next)
    if(!(tmp->help == ((void (*)(void))NULL)))
      tmp->help();

}

// trace_init
// file trace.c line 131
static void trace_init(void)
{
  if(formats_list == ((struct libtrace_format_t *)NULL))
  {
    duck_constructor();
    erf_constructor();
    tsh_constructor();
    legacy_constructor();
    atmhdr_constructor();
    linuxnative_constructor();
    pcap_constructor();
    bpf_constructor();
    pcapfile_constructor();
    rt_constructor();
  }

}

// trace_interrupt
// file trace.c line 1855
void trace_interrupt(void)
{
  libtrace_halt = 1;
}

// trace_is_err
// file ../../lib/libtrace.h line 1302
_Bool trace_is_err(struct libtrace_t *trace)
{
  return trace->err.err_num != 0;
}

// trace_is_err_output
// file trace.c line 1602
_Bool trace_is_err_output(struct libtrace_out_t *trace)
{
  return trace->err.err_num != 0;
}

// trace_parse_uri
// file trace.c line 1525
const char * trace_parse_uri(const char *uri, char **format)
{
  const char *uridata = ((const char *)NULL);
  uridata=strchr(uri, 58);
  if(uridata == ((const char *)NULL))
    return ((const char *)NULL);

  else
    if((unsigned int)(uridata - uri) >= 17u)
      return ((const char *)NULL);

    else
    {
      *format=xstrndup(uri, (unsigned long int)(uridata - uri));
      uridata = uridata + 1l;
      return uridata;
    }
}

// trace_pause
// file trace.c line 485
signed int trace_pause(struct libtrace_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_t *)NULL));
  if(libtrace->started == (_Bool)0)
  {
    trace_set_err(libtrace, -8, "You must call trace_start() before calling trace_pause()");
    return -1;
  }

  else
  {
    if(!(libtrace->format->pause_input == ((signed int (*)(struct libtrace_t *))NULL)))
      libtrace->format->pause_input(libtrace);

    libtrace->started = (_Bool)0;
    return 0;
  }
}

// trace_perror
// file ../../lib/libtrace.h line 1311
void trace_perror(struct libtrace_t *trace, const char *msg, ...)
{
  char buf[256l];
  void **va = (void **)&msg;
  vsnprintf(buf, sizeof(char [256l]) /*256ul*/ , msg, va);
  va = ((void **)NULL);
  if(!(trace->err.err_num == 0))
  {
    if(!(trace->uridata == ((char *)NULL)))
      fprintf(stderr, "%s(%s): %s\n", (const void *)buf, trace->uridata, (const void *)trace->err.problem);

    else
      fprintf(stderr, "%s: %s\n", (const void *)buf, (const void *)trace->err.problem);
  }

  else
    if(!(trace->uridata == ((char *)NULL)))
      fprintf(stderr, "%s(%s): No error\n", (const void *)buf, trace->uridata);

    else
      fprintf(stderr, "%s: No error\n", (const void *)buf);
  trace->err.err_num = 0;
  trace->err.problem[(signed long int)0] = (char)0;
}

// trace_perror_output
// file trace.c line 1609
void trace_perror_output(struct libtrace_out_t *trace, const char *msg, ...)
{
  char buf[256l];
  void **va = (void **)&msg;
  vsnprintf(buf, sizeof(char [256l]) /*256ul*/ , msg, va);
  va = ((void **)NULL);
  char *tmp_if_expr_1;
  if(!(trace->err.err_num == 0))
  {
    if(!(trace->uridata == ((char *)NULL)))
      tmp_if_expr_1 = trace->uridata;

    else
      tmp_if_expr_1 = "no uri";
    fprintf(stderr, "%s(%s): %s\n", (const void *)buf, tmp_if_expr_1, (const void *)trace->err.problem);
  }

  else
    fprintf(stderr, "%s(%s): No error\n", (const void *)buf, trace->uridata);
  trace->err.err_num = 0;
  trace->err.problem[(signed long int)0] = (char)0;
}

// trace_prepare_packet
// file trace.c line 777
signed int trace_prepare_packet(struct libtrace_t *trace, struct libtrace_packet_t *packet, void *buffer, enum anonymous_20 rt_type, unsigned int flags)
{
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  /* assertion trace */
  assert(trace != ((struct libtrace_t *)NULL));
  _Bool tmp_if_expr_1;
  if(buffer == NULL)
    return -1;

  else
  {
    if((signed int)packet->buf_control == TRACE_CTRL_PACKET)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)packet->buf_control == TRACE_CTRL_EXTERNAL ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      trace_set_err(trace, -8, "Packet passed to trace_read_packet() is invalid\n");
      return -1;
    }

    else
    {
      packet->trace = trace;
      trace_clear_cache(packet);
      if(!(trace->format->prepare_packet == ((signed int (*)(struct libtrace_t *, struct libtrace_packet_t *, void *, enum anonymous_20, unsigned int))NULL)))
      {
        signed int return_value;
        return_value=trace->format->prepare_packet(trace, packet, buffer, rt_type, flags);
        return return_value;
      }

      trace_set_err(trace, -7, "This format does not support preparing packets\n");
      return -1;
    }
  }
}

// trace_read_packet
// file ../../lib/libtrace.h line 1437
signed int trace_read_packet(struct libtrace_t *libtrace, struct libtrace_packet_t *packet)
{
  /* assertion libtrace && "You called trace_read_packet() with a NULL libtrace parameter!\n" */
  assert(libtrace != ((struct libtrace_t *)NULL) && (_Bool)"You called trace_read_packet() with a NULL libtrace parameter!\n");
  _Bool return_value_trace_is_err_1;
  return_value_trace_is_err_1=trace_is_err(libtrace);
  _Bool tmp_if_expr_2;
  if(!(return_value_trace_is_err_1 == (_Bool)0))
    return -1;

  else
    if(libtrace->started == (_Bool)0)
    {
      trace_set_err(libtrace, -8, "You must call libtrace_start() before trace_read_packet()\n");
      return -1;
    }

    else
    {
      if((signed int)packet->buf_control == TRACE_CTRL_PACKET)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)packet->buf_control == TRACE_CTRL_EXTERNAL ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_2)
      {
        trace_set_err(libtrace, -8, "Packet passed to trace_read_packet() is invalid\n");
        return -1;
      }

      else
      {
        /* assertion packet */
        assert(packet != ((struct libtrace_packet_t *)NULL));
        packet->trace = libtrace;
        if(!(libtrace->format->fin_packet == ((void (*)(struct libtrace_packet_t *))NULL)))
          libtrace->format->fin_packet(packet);

        if(!(libtrace->format->read_packet == ((signed int (*)(struct libtrace_t *, struct libtrace_packet_t *))NULL)))
        {
          unsigned long int ret;
          signed int filtret;
          trace_clear_cache(packet);
          signed int return_value;
          return_value=libtrace->format->read_packet(libtrace, packet);
          ret = (unsigned long int)return_value;
          if(ret == 0ul || ret == 18446744073709551615ul)
            return (signed int)ret;

          if(!(libtrace->filter == ((struct libtrace_filter_t *)NULL)))
          {
            filtret=trace_apply_filter(libtrace->filter, packet);
            if(filtret == -1)
              return (signed int)~0U;

            libtrace->filtered_packets = libtrace->filtered_packets + 1ul;
          }

          else
          {
            if(libtrace->snaplen >= 1ul)
              trace_set_capture_length(packet, libtrace->snaplen);

            libtrace->accepted_packets = libtrace->accepted_packets + 1ul;
            return (signed int)ret;
          }
        }

        trace_set_err(libtrace, -7, "This format does not support reading packets\n");
        return (signed int)~0U;
      }
    }
}

// trace_seek_erf_timestamp
// file trace.c line 1628
signed int trace_seek_erf_timestamp(struct libtrace_t *trace, unsigned long int ts)
{
  if(!(trace->format->seek_erf == ((signed int (*)(struct libtrace_t *, unsigned long int))NULL)))
  {
    signed int return_value;
    return_value=trace->format->seek_erf(trace, ts);
    return return_value;
  }

  else
  {
    if(!(trace->format->seek_timeval == ((signed int (*)(struct libtrace_t *, struct timeval))NULL)))
    {
      struct timeval tv;
      tv.tv_sec = (signed long int)(ts >> 32);
      tv.tv_usec = (signed long int)((ts & (unsigned long int)0xFFFFFFFF) * (unsigned long int)1000000 >> 32);
      if(tv.tv_usec >= 1000000l)
      {
        tv.tv_usec = tv.tv_usec - (signed long int)1000000;
        tv.tv_sec = tv.tv_sec + (signed long int)1;
      }

      signed int return_value_1;
      return_value_1=trace->format->seek_timeval(trace, tv);
      return return_value_1;
    }

    if(!(trace->format->seek_seconds == ((signed int (*)(struct libtrace_t *, double))NULL)))
    {
      double seconds = (double)(ts >> 32) + ((double)(ts & (unsigned long int)((unsigned int)0x7fffffff * 2U + 1U)) * 1.0) / (double)((unsigned int)0x7fffffff * 2U + 1U);
      signed int return_value_2;
      return_value_2=trace->format->seek_seconds(trace, seconds);
      return return_value_2;
    }

    trace_set_err(trace, -6, "Feature unimplemented");
    return -1;
  }
}

// trace_seek_seconds
// file trace.c line 1663
signed int trace_seek_seconds(struct libtrace_t *trace, double seconds)
{
  if(!(trace->format->seek_seconds == ((signed int (*)(struct libtrace_t *, double))NULL)))
  {
    signed int return_value;
    return_value=trace->format->seek_seconds(trace, seconds);
    return return_value;
  }

  else
  {
    if(!(trace->format->seek_timeval == ((signed int (*)(struct libtrace_t *, struct timeval))NULL)))
    {
      struct timeval tv;
      tv.tv_sec = (signed long int)(unsigned int)seconds;
      tv.tv_usec = (signed long int)(unsigned int)(((seconds - (double)tv.tv_sec) * (double)1000000) / (double)((unsigned int)0x7fffffff * 2U + 1U));
      signed int return_value_1;
      return_value_1=trace->format->seek_timeval(trace, tv);
      return return_value_1;
    }

    if(!(trace->format->seek_erf == ((signed int (*)(struct libtrace_t *, unsigned long int))NULL)))
    {
      unsigned long int timestamp = ((unsigned long int)(unsigned int)seconds << 32) + (unsigned long int)((seconds - (double)(unsigned int)seconds) * (double)((unsigned int)0x7fffffff * 2U + 1U));
      signed int return_value_2;
      return_value_2=trace->format->seek_erf(trace, timestamp);
      return return_value_2;
    }

    trace_set_err(trace, -6, "Feature unimplemented");
    return -1;
  }
}

// trace_seek_timeval
// file trace.c line 1688
signed int trace_seek_timeval(struct libtrace_t *trace, struct timeval tv)
{
  if(!(trace->format->seek_timeval == ((signed int (*)(struct libtrace_t *, struct timeval))NULL)))
  {
    signed int return_value;
    return_value=trace->format->seek_timeval(trace, tv);
    return return_value;
  }

  else
  {
    if(!(trace->format->seek_erf == ((signed int (*)(struct libtrace_t *, unsigned long int))NULL)))
    {
      unsigned long int timestamp = ((unsigned long int)tv.tv_sec << 32) + ((unsigned long int)tv.tv_usec * (unsigned long int)((unsigned int)0x7fffffff * 2U + 1U)) / (unsigned long int)1000000;
      signed int return_value_1;
      return_value_1=trace->format->seek_erf(trace, timestamp);
      return return_value_1;
    }

    if(!(trace->format->seek_seconds == ((signed int (*)(struct libtrace_t *, double))NULL)))
    {
      double seconds = (double)tv.tv_sec + ((double)tv.tv_usec * 1.0) / (double)1000000;
      signed int return_value_2;
      return_value_2=trace->format->seek_seconds(trace, seconds);
      return return_value_2;
    }

    trace_set_err(trace, -6, "Feature unimplemented");
    return -1;
  }
}

// trace_set_capture_length
// file trace.c line 1507
unsigned long int trace_set_capture_length(struct libtrace_packet_t *packet, unsigned long int size)
{
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  if(!(packet->trace->format->set_capture_length == ((unsigned long int (*)(struct libtrace_packet_t *, unsigned long int))NULL)))
  {
    unsigned long int return_value;
    return_value=packet->trace->format->set_capture_length(packet, size);
    packet->capture_length = (signed int)return_value;
    return (unsigned long int)packet->capture_length;
  }

  return (unsigned long int)~0U;
}

// trace_set_direction
// file trace.c line 1354
enum anonymous_2 trace_set_direction(struct libtrace_packet_t *packet, enum anonymous_2 direction)
{
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  if(!(packet->trace->format->set_direction == ((enum anonymous_2 (*)(struct libtrace_packet_t *, enum anonymous_2))NULL)))
  {
    enum anonymous_2 return_value;
    return_value=packet->trace->format->set_direction(packet, direction);
    return return_value;
  }

  return (enum anonymous_2)~0U;
}

// trace_start
// file ../../lib/libtrace.h line 1181
signed int trace_start(struct libtrace_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_t *)NULL));
  _Bool return_value_trace_is_err_1;
  return_value_trace_is_err_1=trace_is_err(libtrace);
  if(!(return_value_trace_is_err_1 == (_Bool)0))
    return -1;

  else
  {
    if(!(libtrace->format->start_input == ((signed int (*)(struct libtrace_t *))NULL)))
    {
      signed int ret;
      ret=libtrace->format->start_input(libtrace);
      if(!(ret >= 0))
        return ret;

    }

    libtrace->started = (_Bool)1;
    return 0;
  }
}

// trace_start_output
// file trace.c line 471
signed int trace_start_output(struct libtrace_out_t *libtrace)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_out_t *)NULL));
  if(!(libtrace->format->start_output == ((signed int (*)(struct libtrace_out_t *))NULL)))
  {
    signed int ret;
    ret=libtrace->format->start_output(libtrace);
    if(!(ret >= 0))
      return ret;

  }

  libtrace->started = (_Bool)1;
  return 0;
}

// trace_write_packet
// file trace.c line 813
signed int trace_write_packet(struct libtrace_out_t *libtrace, struct libtrace_packet_t *packet)
{
  /* assertion libtrace */
  assert(libtrace != ((struct libtrace_out_t *)NULL));
  /* assertion packet */
  assert(packet != ((struct libtrace_packet_t *)NULL));
  if(libtrace->started == (_Bool)0)
  {
    trace_set_err_out(libtrace, -8, "Trace is not started before trace_write_packet");
    return -1;
  }

  else
  {
    if(!(libtrace->format->write_packet == ((signed int (*)(struct libtrace_out_t *, struct libtrace_packet_t *))NULL)))
    {
      signed int return_value;
      return_value=libtrace->format->write_packet(libtrace, packet);
      return return_value;
    }

    trace_set_err_out(libtrace, -7, "This format does not support writing packets");
    return -1;
  }
}

// usage
// file tracertstats.c line 205
static void usage(char *argv0)
{
  fprintf(stderr, "Usage:\n%s flags libtraceuri [libtraceuri...]\n-i --interval=seconds\tDuration of reporting interval in seconds\n-c --count=packets\tExit after count packets received\n-o --output-format=txt|csv|html|png Reporting output format\n-f --filter=bpf\tApply BPF filter. Can be specified multiple times\n-m --merge-inputs\tDo not create separate outputs for each input trace\n-H --libtrace-help\tPrint libtrace runtime documentation\n", argv0);
}

// wandio_create
// file wandio.c line 224
struct io_t * wandio_create(const char *filename)
{
  parse_env();
  struct io_t *return_value_create_io_reader_1;
  return_value_create_io_reader_1=create_io_reader(filename, use_autodetect);
  return return_value_create_io_reader_1;
}

// wandio_create_uncompressed
// file wandio.c line 229
struct io_t * wandio_create_uncompressed(const char *filename)
{
  parse_env();
  struct io_t *return_value_create_io_reader_1;
  return_value_create_io_reader_1=create_io_reader(filename, 0);
  return return_value_create_io_reader_1;
}

// wandio_destroy
// file wandio.c line 278
void wandio_destroy(struct io_t *io)
{
  if(!(io == ((struct io_t *)NULL)))
  {
    if(!(keep_stats == 0))
      fprintf(stderr, "LIBTRACEIO STATS: %lu blocks on read\n", read_waits);

    io->source->close(io);
  }

}

// wandio_lookup_compression_type
// file wandio.c line 210
struct wandio_compression_type * wandio_lookup_compression_type(const char *name)
{
  struct wandio_compression_type *wct = compression_type;
  signed int return_value_strcmp_1;
  do
  {
    return_value_strcmp_1=strcmp(wct->name, "NONE");
    if(return_value_strcmp_1 == 0)
      break;

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(wct->name, name);
    if(return_value_strcmp_2 == 0)
      return wct;

    wct = wct + 1l;
  }
  while((_Bool)1);
  return (struct wandio_compression_type *)(void *)0;
}

// wandio_peek
// file wandio.c line 263
signed long int wandio_peek(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret;
  /* assertion io->source->peek */
  assert(io->source->peek != ((signed long int (*)(struct io_t *, void *, signed long int))NULL));
  ret=io->source->peek(io, buffer, len);
  return ret;
}

// wandio_read
// file wandio.c line 253
signed long int wandio_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret;
  ret=io->source->read(io, buffer, len);
  return ret;
}

// wandio_seek
// file wandio.c line 244
signed long int wandio_seek(struct io_t *io, signed long int offset, signed int whence)
{
  if(io->source->seek == ((signed long int (*)(struct io_t *, signed long int, signed int))NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = -38;
    return (signed long int)-1;
  }

  signed long int return_value;
  return_value=io->source->seek(io, offset, whence);
  return return_value;
}

// wandio_tell
// file wandio.c line 235
signed long int wandio_tell(struct io_t *io)
{
  if(io->source->tell == ((signed long int (*)(struct io_t *))NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = -38;
    return (signed long int)-1;
  }

  signed long int return_value;
  return_value=io->source->tell(io);
  return return_value;
}

// wandio_wcreate
// file wandio.c line 288
struct iow_t * wandio_wcreate(const char *filename, signed int compress_type, signed int compression_level, signed int flags)
{
  struct iow_t *iow;
  parse_env();
  /* assertion compression_level >= 0 && compression_level <= 9 */
  assert(compression_level >= 0 && compression_level <= 9);
  /* assertion compress_type != WANDIO_COMPRESS_MASK */
  assert(compress_type != 7);
  iow=stdio_wopen(filename, flags);
  struct iow_t *return_value_thread_wopen_1;
  if(iow == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    if(compress_type == 1 && !(compression_level == 0))
      iow=zlib_wopen(iow, compression_level);

    else
      if(compress_type == 2 && !(compression_level == 0))
        iow=bz_wopen(iow, compression_level);

      else
        if(compress_type == 4 && !(compression_level == 0))
          iow=lzma_wopen(iow, compression_level);

    if(!(use_threads == 0u))
    {
      return_value_thread_wopen_1=thread_wopen(iow);
      return return_value_thread_wopen_1;
    }

    else
      return iow;
  }
}

// wandio_wdestroy
// file wandio.c line 341
void wandio_wdestroy(struct iow_t *iow)
{
  iow->source->close(iow);
  if(!(keep_stats == 0))
    fprintf(stderr, "LIBTRACEIO STATS: %lu blocks on write\n", write_waits);

}

// wandio_wwrite
// file wandio.c line 333
signed long int wandio_wwrite(struct iow_t *iow, const void *buffer, signed long int len)
{
  signed long int return_value;
  return_value=iow->source->write(iow, (const char *)buffer, len);
  return return_value;
}

// xstrncpy
// file trace.c line 112
static void xstrncpy(char *dest, const char *src, unsigned long int n)
{
  strncpy(dest, src, n);
  dest[(signed long int)n] = (char)0;
}

// xstrndup
// file trace.c line 118
static char * xstrndup(const char *src, unsigned long int n)
{
  char *ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(n + (unsigned long int)1);
  ret = (char *)return_value_malloc_1;
  if(ret == ((char *)NULL))
  {
    fprintf(stderr, "Out of memory");
    exit(1);
  }

  xstrncpy(ret, src, n);
  return ret;
}

// zlib_close
// file ior-zlib.c line 156
static void zlib_close(struct io_t *io)
{
  inflateEnd(&((struct zlib_t *)io->data)->strm);
  wandio_destroy(((struct zlib_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// zlib_open
// file wandio.h line 195
struct io_t * zlib_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc_1;
    io->source = &zlib_source;
    io->data=malloc(sizeof(struct zlib_t) /*1048704ul*/ );
    ((struct zlib_t *)io->data)->parent = parent;
    ((struct zlib_t *)io->data)->strm.next_in = (unsigned char *)(void *)0;
    ((struct zlib_t *)io->data)->strm.avail_in = (unsigned int)0;
    ((struct zlib_t *)io->data)->strm.next_out = (unsigned char *)(void *)0;
    ((struct zlib_t *)io->data)->strm.avail_out = (unsigned int)0;
    ((struct zlib_t *)io->data)->strm.zalloc = ((void * (*)(void *, unsigned int, unsigned int))NULL);
    ((struct zlib_t *)io->data)->strm.zfree = ((void (*)(void *, void *))NULL);
    ((struct zlib_t *)io->data)->strm.opaque = (void *)0;
    ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
    inflateInit2_(&((struct zlib_t *)io->data)->strm, 15 | 32, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
    return io;
  }
}

// zlib_read
// file ior-zlib.c line 92
static signed long int zlib_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct zlib_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct zlib_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 5;
      return (signed long int)-1;
    }

    ((struct zlib_t *)io->data)->strm.avail_out = (unsigned int)len;
    ((struct zlib_t *)io->data)->strm.next_out = (unsigned char *)buffer;
    while((signed int)((struct zlib_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct zlib_t *)io->data)->strm.avail_out >= 1u))
        break;

      while(!(((struct zlib_t *)io->data)->strm.avail_in >= 1u))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read_2;
        return_value_wandio_read_2=wandio_read(((struct zlib_t *)io->data)->parent, (void *)(char *)((struct zlib_t *)io->data)->inbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read_2;
        if(bytes_read == 0)
        {
          if(((struct zlib_t *)io->data)->strm.avail_out == (unsigned int)len)
          {
            ((struct zlib_t *)io->data)->err = (enum err_t)ERR_EOF;
            return (signed long int)0;
          }

          return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;
        }

        if(!(bytes_read >= 0))
        {
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct zlib_t *)io->data)->strm.avail_out == (unsigned int)len))
            return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;

          return (signed long int)-1;
        }

        ((struct zlib_t *)io->data)->strm.next_in = ((struct zlib_t *)io->data)->inbuff;
        ((struct zlib_t *)io->data)->strm.avail_in = (unsigned int)bytes_read;
      }
      signed int err;
      err=inflate(&((struct zlib_t *)io->data)->strm, 0);
      switch(err)
      {
        case 0:
        {
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case 1:
        {
          inflateEnd(&((struct zlib_t *)io->data)->strm);
          inflateInit2_(&((struct zlib_t *)io->data)->strm, 15 | 32, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        default:
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 5;
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;
  }
}

// zlib_wclose
// file iow-zlib.c line 143
static void zlib_wclose(struct iow_t *iow)
{
  signed int res;
  for( ; (_Bool)1; ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ )
  {
    res=deflate(&((struct zlibw_t *)iow->data)->strm, 4);
    if(res == 1)
      break;

    if(res == -2)
    {
      fprintf(stderr, "Z_STREAM_ERROR while closing output\n");
      break;
    }

    wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct zlibw_t *)iow->data)->strm.avail_out));
    ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
  }
  deflateEnd(&((struct zlibw_t *)iow->data)->strm);
  wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct zlibw_t *)iow->data)->strm.avail_out));
  wandio_wdestroy(((struct zlibw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// zlib_wopen
// file wandio.h line 201
struct iow_t * zlib_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc_1;
    iow->source = &zlib_wsource;
    iow->data=malloc(sizeof(struct zlibw_t) /*1048704ul*/ );
    ((struct zlibw_t *)iow->data)->child = child;
    ((struct zlibw_t *)iow->data)->strm.next_in = (unsigned char *)(void *)0;
    ((struct zlibw_t *)iow->data)->strm.avail_in = (unsigned int)0;
    ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
    ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
    ((struct zlibw_t *)iow->data)->strm.zalloc = ((void * (*)(void *, unsigned int, unsigned int))NULL);
    ((struct zlibw_t *)iow->data)->strm.zfree = ((void (*)(void *, void *))NULL);
    ((struct zlibw_t *)iow->data)->strm.opaque = (void *)0;
    ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_OK;
    deflateInit2_(&((struct zlibw_t *)iow->data)->strm, compress_level, 8, 15 | 16, 9, 0, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
    return iow;
  }
}

// zlib_wwrite
// file iow-zlib.c line 98
static signed long int zlib_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct zlibw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct zlibw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct zlibw_t *)iow->data)->strm.next_in = (unsigned char *)buffer;
      ((struct zlibw_t *)iow->data)->strm.avail_in = (unsigned int)len;
      while((signed int)((struct zlibw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct zlibw_t *)iow->data)->strm.avail_in >= 1u))
          break;

        while(!(((struct zlibw_t *)iow->data)->strm.avail_out >= 1u))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite_1;
          return_value_wandio_wwrite_1=wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite_1;
          if(!(bytes_written >= 1))
          {
            ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct zlibw_t *)iow->data)->strm.avail_in == (unsigned int)len))
              return len - (signed long int)((struct zlibw_t *)iow->data)->strm.avail_in;

            return (signed long int)-1;
          }

          ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
          ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
        }
        signed int err;
        err=deflate(&((struct zlibw_t *)iow->data)->strm, 0);
        if(err == 0)
        {
          ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return len - (signed long int)((struct zlibw_t *)iow->data)->strm.avail_in;
    }
}

