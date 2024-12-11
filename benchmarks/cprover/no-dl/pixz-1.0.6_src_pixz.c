// #anon_enum_BLOCK_IN=1_BLOCK_OUT=2_BLOCK_ALL=3
// file write.c line 52
enum anonymous_18 { BLOCK_IN=1, BLOCK_OUT=2, BLOCK_ALL=3 };

// #anon_enum_BLOCK_SIZED=0_BLOCK_UNSIZED=1_BLOCK_CONTINUATION=2
// file read.c line 26
enum anonymous_2 { BLOCK_SIZED=0, BLOCK_UNSIZED=1, BLOCK_CONTINUATION=2 };

// #anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10
// file /usr/include/lzma/check.h line 27
enum anonymous_12 { LZMA_CHECK_NONE=0, LZMA_CHECK_CRC32=1, LZMA_CHECK_CRC64=4, LZMA_CHECK_SHA256=10 };

// #anon_enum_LZMA_INDEX_ITER_ANY=0_LZMA_INDEX_ITER_STREAM=1_LZMA_INDEX_ITER_BLOCK=2_LZMA_INDEX_ITER_NONEMPTY_BLOCK=3
// file /usr/include/lzma/index.h line 226
enum anonymous_26 { LZMA_INDEX_ITER_ANY=0, LZMA_INDEX_ITER_STREAM=1, LZMA_INDEX_ITER_BLOCK=2, LZMA_INDEX_ITER_NONEMPTY_BLOCK=3 };

// #anon_enum_LZMA_MF_HC3=3_LZMA_MF_HC4=4_LZMA_MF_BT2=18_LZMA_MF_BT3=19_LZMA_MF_BT4=20
// file /usr/include/lzma/lzma.h line 58
enum anonymous_21 { LZMA_MF_HC3=3, LZMA_MF_HC4=4, LZMA_MF_BT2=18, LZMA_MF_BT3=19, LZMA_MF_BT4=20 };

// #anon_enum_LZMA_MODE_FAST=1_LZMA_MODE_NORMAL=2
// file /usr/include/lzma/lzma.h line 138
enum anonymous_20 { LZMA_MODE_FAST=1, LZMA_MODE_NORMAL=2 };

// #anon_enum_LZMA_OK=0_LZMA_STREAM_END=1_LZMA_NO_CHECK=2_LZMA_UNSUPPORTED_CHECK=3_LZMA_GET_CHECK=4_LZMA_MEM_ERROR=5_LZMA_MEMLIMIT_ERROR=6_LZMA_FORMAT_ERROR=7_LZMA_OPTIONS_ERROR=8_LZMA_DATA_ERROR=9_LZMA_BUF_ERROR=10_LZMA_PROG_ERROR=11
// file /usr/include/lzma/base.h line 57
enum anonymous_3 { LZMA_OK=0, LZMA_STREAM_END=1, LZMA_NO_CHECK=2, LZMA_UNSUPPORTED_CHECK=3, LZMA_GET_CHECK=4, LZMA_MEM_ERROR=5, LZMA_MEMLIMIT_ERROR=6, LZMA_FORMAT_ERROR=7, LZMA_OPTIONS_ERROR=8, LZMA_DATA_ERROR=9, LZMA_BUF_ERROR=10, LZMA_PROG_ERROR=11 };

// #anon_enum_LZMA_RESERVED_ENUM=0
// file /usr/include/lzma/base.h line 44
enum anonymous_7 { LZMA_RESERVED_ENUM=0 };

// #anon_enum_LZMA_RUN=0_LZMA_SYNC_FLUSH=1_LZMA_FULL_FLUSH=2_LZMA_FINISH=3
// file /usr/include/lzma/base.h line 250
enum anonymous_19 { LZMA_RUN=0, LZMA_SYNC_FLUSH=1, LZMA_FULL_FLUSH=2, LZMA_FINISH=3 };

// #anon_enum_OP_WRITE=0_OP_READ=1_OP_EXTRACT=2_OP_LIST=3
// file pixz.c line 7
enum anonymous_0 { OP_WRITE=0, OP_READ=1, OP_EXTRACT=2, OP_LIST=3 };

// #anon_enum_PIPELINE_ITEM=0_PIPELINE_STOP=1
// file pixz.h line 126
enum anonymous_1 { PIPELINE_ITEM=0, PIPELINE_STOP=1 };

// #anon_enum_RBUF_ERR=0_RBUF_EOF=1_RBUF_PART=2_RBUF_FULL=3
// file read.c line 70
enum anonymous_11 { RBUF_ERR=0, RBUF_EOF=1, RBUF_PART=2, RBUF_FULL=3 };

// tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]
// file /usr/include/lzma/base.h line 349
struct anonymous_6;

// tag-#anon#ST[*{SYM#tag-queue_item_t#}_SYM#tag-queue_item_t#_'first'||*{SYM#tag-queue_item_t#}_SYM#tag-queue_item_t#_'last'||SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#'mutex'||SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]#'pop_cond'||*{V(S32|*{V}_V_)->V}_V(S32|*{V}_V_)->V_'freer'|]
// file pixz.h line 103
struct anonymous;

// tag-#anon#ST[*{U8}_U8_'input'||*{U8}_U8_'output'||U64'incap'||U64'outcap'||U64'insize'||U64'outsize'||S64'uoffset'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_BLOCK_SIZED=0_BLOCK_UNSIZED=1_BLOCK_CONTINUATION=2#{U32}_U32_'btype'|]
// file read.c line 28
struct anonymous_4;

// tag-#anon#ST[*{cSYM#tag-#anon#ST[U32'version'||U32'_pad0'||U64'backward_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'||U32'reserved_int1'||U32'reserved_int2'||U32'_pad1'|]#}_cSYM#tag-#anon#ST[U32'version'||U32'_pad0'||U64'backward_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'||U32'reserved_int1'||U32'reserved_int2'||U32'_pad1'|]#_'flags'||*{cV}_cV_'reserved_ptr1'||*{cV}_cV_'reserved_ptr2'||*{cV}_cV_'reserved_ptr3'||U64'number'||U64'block_count'||U64'compressed_offset'||U64'uncompressed_offset'||U64'compressed_size'||U64'uncompressed_size'||U64'padding'||U64'reserved_vli1'||U64'reserved_vli2'||U64'reserved_vli3'||U64'reserved_vli4'|]
// file /usr/include/lzma/index.h line 44
struct anonymous_24;

// tag-#anon#ST[*{cU8}_cU8_'next_in'||U64'avail_in'||U64'total_in'||*{U8}_U8_'next_out'||U64'avail_out'||U64'total_out'||*{SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#}_SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'||*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'||*{V}_V_'opaque'|]#_'allocator'||*{SYM#tag-lzma_internal_s#}_SYM#tag-lzma_internal_s#_'internal'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'||*{V}_V_'reserved_ptr3'||*{V}_V_'reserved_ptr4'||U64'reserved_int1'||U64'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'|]
// file /usr/include/lzma/base.h line 461
struct anonymous_5;

// tag-#anon#ST[ARR512{U8}_U8_'buf'||S64'pos'||U64'size'|]
// file common.c line 251
struct anonymous_17;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_9;

// tag-#anon#ST[SYM#tag-#anon#ST[*{cSYM#tag-#anon#ST[U32'version'||U32'_pad0'||U64'backward_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'||U32'reserved_int1'||U32'reserved_int2'||U32'_pad1'|]#}_cSYM#tag-#anon#ST[U32'version'||U32'_pad0'||U64'backward_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'||U32'reserved_int1'||U32'reserved_int2'||U32'_pad1'|]#_'flags'||*{cV}_cV_'reserved_ptr1'||*{cV}_cV_'reserved_ptr2'||*{cV}_cV_'reserved_ptr3'||U64'number'||U64'block_count'||U64'compressed_offset'||U64'uncompressed_offset'||U64'compressed_size'||U64'uncompressed_size'||U64'padding'||U64'reserved_vli1'||U64'reserved_vli2'||U64'reserved_vli3'||U64'reserved_vli4'|]#'stream'||SYM#tag-#anon#ST[U64'number_in_file'||U64'compressed_file_offset'||U64'uncompressed_file_offset'||U64'number_in_stream'||U64'compressed_stream_offset'||U64'uncompressed_stream_offset'||U64'uncompressed_size'||U64'unpadded_size'||U64'total_size'||U64'reserved_vli1'||U64'reserved_vli2'||U64'reserved_vli3'||U64'reserved_vli4'||*{cV}_cV_'reserved_ptr1'||*{cV}_cV_'reserved_ptr2'||*{cV}_cV_'reserved_ptr3'||*{cV}_cV_'reserved_ptr4'|]#'block'||ARR6{SYM#tag-#anon#UN[*{cV}_cV_'p'||U64's'||U64'v'|]#}_SYM#tag-#anon#UN[*{cV}_cV_'p'||U64's'||U64'v'|]#_'internal'|]
// file /usr/include/lzma/index.h line 43
struct anonymous_13;

// tag-#anon#ST[SYM#tag-#anon#ST[U32'version'||U32'header_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||U32'_pad0'||U64'compressed_size'||U64'uncompressed_size'||*{SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#}_SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#_'filters'||ARR64{U8}_U8_'raw_check'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'||*{V}_V_'reserved_ptr3'||U32'reserved_int1'||U32'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||U64'reserved_int5'||U64'reserved_int6'||U64'reserved_int7'||U64'reserved_int8'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'|]#'block'||ARR5{SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#}_SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#_'filters'|]
// file common.c line 84
struct anonymous_23;

// tag-#anon#ST[U32'dict_size'||U32'_pad0'||*{cU8}_cU8_'preset_dict'||U32'preset_dict_size'||U32'lc'||U32'lp'||U32'pb'||EN#anon_enum_LZMA_MODE_FAST=1_LZMA_MODE_NORMAL=2#{U32}_U32_'mode'||U32'nice_len'||EN#anon_enum_LZMA_MF_HC3=3_LZMA_MF_HC4=4_LZMA_MF_BT2=18_LZMA_MF_BT3=19_LZMA_MF_BT4=20#{U32}_U32_'mf'||U32'depth'||U32'reserved_int1'||U32'reserved_int2'||U32'reserved_int3'||U32'reserved_int4'||U32'reserved_int5'||U32'reserved_int6'||U32'reserved_int7'||U32'reserved_int8'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'|]
// file /usr/include/lzma/lzma.h line 185
struct anonymous_22;

// tag-#anon#ST[U32'version'||U32'_pad0'||U64'backward_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'||U32'reserved_int1'||U32'reserved_int2'||U32'_pad1'|]
// file /usr/include/lzma/stream_flags.h line 33
struct anonymous_8;

// tag-#anon#ST[U32'version'||U32'header_size'||EN#anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10#{U32}_U32_'check'||U32'_pad0'||U64'compressed_size'||U64'uncompressed_size'||*{SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#}_SYM#tag-#anon#ST[U64'id'||*{V}_V_'options'|]#_'filters'||ARR64{U8}_U8_'raw_check'||*{V}_V_'reserved_ptr1'||*{V}_V_'reserved_ptr2'||*{V}_V_'reserved_ptr3'||U32'reserved_int1'||U32'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||U64'reserved_int5'||U64'reserved_int6'||U64'reserved_int7'||U64'reserved_int8'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum1'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum2'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum3'||EN#anon_enum_LZMA_RESERVED_ENUM=0#{U32}_U32_'reserved_enum4'||U8'reserved_bool1'||U8'reserved_bool2'||U8'reserved_bool3'||U8'reserved_bool4'||U8'reserved_bool5'||U8'reserved_bool6'||U8'reserved_bool7'||U8'reserved_bool8'|]
// file /usr/include/lzma/block.h line 30
struct anonymous_16;

// tag-#anon#ST[U64'id'||*{V}_V_'options'|]
// file /usr/include/lzma/filter.h line 43
struct anonymous_15;

// tag-#anon#ST[U64'number_in_file'||U64'compressed_file_offset'||U64'uncompressed_file_offset'||U64'number_in_stream'||U64'compressed_stream_offset'||U64'uncompressed_stream_offset'||U64'uncompressed_size'||U64'unpadded_size'||U64'total_size'||U64'reserved_vli1'||U64'reserved_vli2'||U64'reserved_vli3'||U64'reserved_vli4'||*{cV}_cV_'reserved_ptr1'||*{cV}_cV_'reserved_ptr2'||*{cV}_cV_'reserved_ptr3'||*{cV}_cV_'reserved_ptr4'|]
// file /usr/include/lzma/index.h line 116
struct anonymous_14;

// tag-#anon#UN[*{cV}_cV_'p'||U64's'||U64'v'|]
// file /usr/include/lzma/index.h line 215
union anonymous_25;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_28;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_10;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_27;

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

// tag-archive
// file /usr/include/archive.h line 137
struct archive;

// tag-archive_entry
// file /usr/include/archive.h line 138
struct archive_entry;

// tag-file_index_t
// file pixz.h line 75
struct file_index_t;

// tag-io_block_t
// file write.c line 9
struct io_block_t;

// tag-lzma_index_s
// file /usr/include/lzma/index.h line 37
struct lzma_index_s;

// tag-lzma_internal_s
// file /usr/include/lzma/base.h line 419
struct lzma_internal_s;

// tag-pipeline_item_t
// file pixz.h line 131
struct pipeline_item_t;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-queue_item_t
// file pixz.h line 94
struct queue_item_t;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-wanted_t
// file read.c line 9
struct wanted_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// add_file
// file write.c line 225
static void add_file(signed long int offset, const char *name);
// archive_entry_pathname
// file /usr/include/archive_entry.h line 222
const char * archive_entry_pathname(struct archive_entry *);
// archive_error_string
// file /usr/include/archive.h line 916
const char * archive_error_string(struct archive *);
// archive_format
// file /usr/include/archive.h line 918
signed int archive_format(struct archive *);
// archive_read_free
// file /usr/include/archive.h line 584
signed int archive_read_free(struct archive *);
// archive_read_header_position
// file /usr/include/archive.h line 467
signed long int archive_read_header_position(struct archive *);
// archive_read_new
// file /usr/include/archive.h line 300
struct archive * archive_read_new(void);
// archive_read_next_header
// file /usr/include/archive.h line 456
signed int archive_read_next_header(struct archive *, struct archive_entry **);
// archive_read_open
// file /usr/include/archive.h line 418
signed int archive_read_open(struct archive *, void *, signed int (*)(struct archive *, void *), signed long int (*)(struct archive *, void *, const void **), signed int (*)(struct archive *, void *));
// archive_read_open_memory
// file /usr/include/archive.h line 443
signed int archive_read_open_memory(struct archive *, void *, unsigned long int);
// archive_read_support_filter_none
// file /usr/include/archive.h line 348
signed int archive_read_support_filter_none(struct archive *);
// archive_read_support_format_raw
// file /usr/include/archive.h line 370
signed int archive_read_support_format_raw(struct archive *);
// archive_read_support_format_tar
// file /usr/include/archive.h line 371
signed int archive_read_support_format_tar(struct archive *);
// auto_output
// file pixz.c line 185
static char * auto_output(enum anonymous_0 op, char *in);
// block_alloc
// file write.c line 260
static void block_alloc(struct io_block_t *ib, enum anonymous_18 parts);
// block_capacity
// file read.c line 292
static void block_capacity(struct anonymous_4 *ib, unsigned long int incap, unsigned long int outcap);
// block_create
// file read.c line 199
static void * block_create(void);
// block_create_link1
// file write.c line 254
static void * block_create_link1();
// block_dealloc
// file write.c line 269
static void block_dealloc(struct io_block_t *ib, enum anonymous_18 parts);
// block_free
// file read.c line 206
static void block_free(void *data);
// block_free_link1
// file write.c line 247
static void block_free_link1(void *data_link1);
// block_init
// file write.c line 397
static void block_init(struct anonymous_16 *block, unsigned long int insize);
// bw_read
// file common.c line 257
static unsigned int * bw_read(struct anonymous_17 *b);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// decode_file_index_start
// file common.c line 89
static void * decode_file_index_start(signed long int block_seek, enum anonymous_12 check);
// decode_index
// file common.c line 346
_Bool decode_index(void);
// decode_thread
// file read.c line 561
static void decode_thread(unsigned long int thnum);
// die
// file common.c line 14
void die(const char *fmt, ...);
// dump_file_index
// file common.c line 62
void dump_file_index(struct _IO_FILE *out, _Bool verbose);
// encode_index
// file write.c line 448
static void encode_index(void);
// encode_thread
// file write.c line 344
static void encode_thread(unsigned long int thnum);
// encode_uncompressible
// file write.c line 294
static void encode_uncompressible(struct io_block_t *ib);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// find_file_index
// file common.c line 115
static unsigned long int find_file_index(void **bdatap);
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
// free_file_index
// file common.c line 74
void free_file_index(void);
// fseeko
// file /usr/include/stdio.h line 773
extern signed int fseeko(struct _IO_FILE *, signed long int, signed int);
// ftello
// file /usr/include/stdio.h line 778
extern signed long int ftello(struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gPLFreer_object
//
void gPLFreer_object(void *);
// gPLProcess_object
//
void gPLProcess_object(unsigned long int);
// gPLSplit_object
//
void gPLSplit_object(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// is_multi_header
// file common.c line 34
_Bool is_multi_header(const char *name);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// lzma_block_buffer_bound
// file /usr/include/lzma/block.h line 451
extern unsigned long int lzma_block_buffer_bound(unsigned long int);
// lzma_block_decoder
// file /usr/include/lzma/block.h line 440
extern enum anonymous_3 lzma_block_decoder(struct anonymous_5 *, struct anonymous_16 *);
// lzma_block_encoder
// file /usr/include/lzma/block.h line 422
extern enum anonymous_3 lzma_block_encoder(struct anonymous_5 *, struct anonymous_16 *);
// lzma_block_header_decode
// file /usr/include/lzma/block.h line 343
extern enum anonymous_3 lzma_block_header_decode(struct anonymous_16 *, struct anonymous_6 *, const unsigned char *);
// lzma_block_header_encode
// file /usr/include/lzma/block.h line 305
extern enum anonymous_3 lzma_block_header_encode(const struct anonymous_16 *, unsigned char *);
// lzma_block_header_size
// file /usr/include/lzma/block.h line 283
extern enum anonymous_3 lzma_block_header_size(struct anonymous_16 *);
// lzma_block_total_size
// file /usr/include/lzma/block.h line 404
extern unsigned long int lzma_block_total_size(const struct anonymous_16 *);
// lzma_block_unpadded_size
// file /usr/include/lzma/block.h line 391
extern unsigned long int lzma_block_unpadded_size(const struct anonymous_16 *);
// lzma_check_size
// file /usr/include/lzma/check.h line 95
extern unsigned int lzma_check_size(enum anonymous_12);
// lzma_code
// file /usr/include/lzma/base.h line 537
extern enum anonymous_3 lzma_code(struct anonymous_5 *, enum anonymous_19);
// lzma_crc32
// file /usr/include/lzma/check.h line 119
extern unsigned int lzma_crc32(const unsigned char *, unsigned long int, unsigned int);
// lzma_end
// file /usr/include/lzma/base.h line 554
extern void lzma_end(struct anonymous_5 *);
// lzma_index_append
// file /usr/include/lzma/index.h line 343
extern enum anonymous_3 lzma_index_append(struct lzma_index_s *, struct anonymous_6 *, unsigned long int, unsigned long int);
// lzma_index_cat
// file /usr/include/lzma/index.h line 567
extern enum anonymous_3 lzma_index_cat(struct lzma_index_s *, struct lzma_index_s *, struct anonymous_6 *);
// lzma_index_decoder
// file /usr/include/lzma/index.h line 624
extern enum anonymous_3 lzma_index_decoder(struct anonymous_5 *, struct lzma_index_s **, unsigned long int);
// lzma_index_encoder
// file /usr/include/lzma/index.h line 596
extern enum anonymous_3 lzma_index_encoder(struct anonymous_5 *, const struct lzma_index_s *);
// lzma_index_end
// file /usr/include/lzma/index.h line 315
extern void lzma_index_end(struct lzma_index_s *, struct anonymous_6 *);
// lzma_index_init
// file /usr/include/lzma/index.h line 306
extern struct lzma_index_s * lzma_index_init(struct anonymous_6 *);
// lzma_index_iter_init
// file /usr/include/lzma/index.h line 487
extern void lzma_index_iter_init(struct anonymous_13 *, const struct lzma_index_s *);
// lzma_index_iter_locate
// file /usr/include/lzma/index.h line 542
extern unsigned char lzma_index_iter_locate(struct anonymous_13 *, unsigned long int);
// lzma_index_iter_next
// file /usr/include/lzma/index.h line 514
extern unsigned char lzma_index_iter_next(struct anonymous_13 *, enum anonymous_26);
// lzma_index_size
// file /usr/include/lzma/index.h line 424
extern unsigned long int lzma_index_size(const struct lzma_index_s *);
// lzma_index_stream_flags
// file /usr/include/lzma/index.h line 365
extern enum anonymous_3 lzma_index_stream_flags(struct lzma_index_s *, const struct anonymous_8 *);
// lzma_index_stream_padding
// file /usr/include/lzma/index.h line 397
extern enum anonymous_3 lzma_index_stream_padding(struct lzma_index_s *, unsigned long int);
// lzma_index_stream_size
// file /usr/include/lzma/index.h line 435
extern unsigned long int lzma_index_stream_size(const struct lzma_index_s *);
// lzma_index_uncompressed_size
// file /usr/include/lzma/index.h line 464
extern unsigned long int lzma_index_uncompressed_size(const struct lzma_index_s *);
// lzma_lzma_preset
// file /usr/include/lzma/lzma.h line 419
extern unsigned char lzma_lzma_preset(struct anonymous_22 *, unsigned int);
// lzma_stream_footer_decode
// file /usr/include/lzma/stream_flags.h line 201
extern enum anonymous_3 lzma_stream_footer_decode(struct anonymous_8 *, const unsigned char *);
// lzma_stream_footer_encode
// file /usr/include/lzma/stream_flags.h line 139
extern enum anonymous_3 lzma_stream_footer_encode(const struct anonymous_8 *, unsigned char *);
// lzma_stream_header_decode
// file /usr/include/lzma/stream_flags.h line 174
extern enum anonymous_3 lzma_stream_header_decode(struct anonymous_8 *, const unsigned char *);
// lzma_stream_header_encode
// file /usr/include/lzma/stream_flags.h line 122
extern enum anonymous_3 lzma_stream_header_encode(const struct anonymous_8 *, unsigned char *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
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
// next_index
// file common.c line 302
static struct lzma_index_s * next_index(signed long int *pos);
// num_threads
// file pixz.h line 68
unsigned long int num_threads(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// pipeline_create
// file common.c line 453
void pipeline_create(void * (*create)(void), void (*destroy)(void *), void (*split)(void), void (*process)(unsigned long int));
// pipeline_create::create_object
//
void * create_object(void);
// pipeline_create::destroy_object
//
void destroy_object(void *);
// pipeline_create::process_object
//
void process_object(unsigned long int);
// pipeline_create::split_object
//
void split_object(void);
// pipeline_destroy
// file common.c line 534
void pipeline_destroy(void);
// pipeline_dispatch
// file common.c line 544
void pipeline_dispatch(struct pipeline_item_t *item, struct anonymous *q);
// pipeline_merged
// file common.c line 554
struct pipeline_item_t * pipeline_merged();
// pipeline_qfree
// file common.c line 497
static void pipeline_qfree(signed int type, void *p);
// pipeline_split
// file common.c line 550
void pipeline_split(struct pipeline_item_t *item);
// pipeline_stop
// file common.c line 523
void pipeline_stop(void);
// pipeline_thread_process
// file common.c line 517
static void * pipeline_thread_process(void *arg);
// pipeline_thread_split
// file common.c line 512
static void * pipeline_thread_split(void *ignore);
// pixz_list
// file list.c line 5
void pixz_list(_Bool tar);
// pixz_read
// file pixz.h line 52
void pixz_read(_Bool verify, unsigned long int nspecs, char **specs);
// pixz_write
// file pixz.h line 51
void pixz_write(_Bool tar, unsigned int level);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_10 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_10 *, const union anonymous_28 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_10 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_10 *, union anonymous_27 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_27 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_27 *, const union anonymous_28 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_27 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_27 *);
// queue_free
// file common.c line 377
void queue_free(struct anonymous *q);
// queue_new
// file common.c line 368
struct anonymous * queue_new(void (*freer)(signed int, void *));
// queue_new::freer_object
//
void freer_object(signed int, void *);
// queue_pop
// file common.c line 409
signed int queue_pop(struct anonymous *q, void **datap);
// queue_push
// file common.c line 390
void queue_push(struct anonymous *q, signed int type, void *data);
// rbuf_consume
// file read.c line 336
static void rbuf_consume(unsigned long int bytes);
// rbuf_cycle
// file read.c line 325
static _Bool rbuf_cycle(struct anonymous_5 *stream, _Bool start, unsigned long int skip);
// rbuf_dispatch
// file read.c line 342
static void rbuf_dispatch(void);
// rbuf_read
// file read.c line 305
static enum anonymous_11 rbuf_read(unsigned long int bytes);
// read_block
// file read.c line 366
static _Bool read_block(_Bool force_stream, enum anonymous_12 check, signed long int uoffset);
// read_file_index
// file common.c line 156
unsigned long int read_file_index(void);
// read_file_index_data
// file common.c line 230
static void read_file_index_data(void);
// read_file_index_make_space
// file common.c line 204
static void read_file_index_make_space(void);
// read_file_index_name
// file common.c line 186
static char * read_file_index_name(void);
// read_footer
// file read.c line 464
static void read_footer(void);
// read_header
// file read.c line 349
static _Bool read_header(enum anonymous_12 *check);
// read_index
// file read.c line 445
static void read_index(void);
// read_streaming
// file read.c line 400
static void read_streaming(struct anonymous_16 *block, enum anonymous_2 sized, signed long int uoffset);
// read_thread
// file read.c line 500
static void read_thread(void);
// read_thread_link1
// file write.c line 133
static void read_thread_link1();
// read_thread_noindex
// file read.c line 485
static void read_thread_noindex(void);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// size_uncompressible
// file write.c line 283
static unsigned long int size_uncompressible(unsigned long int insize);
// spec_match
// file read.c line 225
static _Bool spec_match(char *spec, char *name);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// stream_edge
// file write.c line 408
static void stream_edge(unsigned long int backward_size);
// stream_edge::1::encoder_object
//
enum anonymous_3 encoder_object(const struct anonymous_8 *, unsigned char *);
// stream_footer
// file common.c line 289
static void stream_footer(struct anonymous_17 *b, struct anonymous_8 *flags);
// stream_padding
// file common.c line 274
static signed long int stream_padding(struct anonymous_17 *b, signed long int pos);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strsuf
// file pixz.c line 194
static _Bool strsuf(char *big, char *small);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// subsuf
// file pixz.c line 199
static char * subsuf(char *in, char *suf1, char *suf2);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// tar_next_block
// file read.c line 605
static _Bool tar_next_block(void);
// tar_ok
// file read.c line 601
static signed int tar_ok(struct archive *ar, void *ref);
// tar_ok_link1
// file write.c line 221
static signed int tar_ok_link1(struct archive *ar_link1, void *ref_link1);
// tar_read
// file read.c line 629
static signed long int tar_read(struct archive *ar, void *ref, const void **bufp);
// tar_read_link1
// file write.c line 191
static signed long int tar_read_link1(struct archive *ar_link1, void *ref_link1, const void **bufp_link1);
// tar_write_last
// file read.c line 620
static void tar_write_last(void);
// taste_file_index
// file read.c line 681
static _Bool taste_file_index(struct anonymous_4 *ib);
// taste_tar
// file read.c line 670
static _Bool taste_tar(struct anonymous_4 *ib);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file pixz.c line 18
static void usage(const char *msg);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// wanted_files
// file read.c line 237
static void wanted_files(unsigned long int count, char **specs);
// wanted_free
// file read.c line 216
static void wanted_free(struct wanted_t *w);
// write_block
// file write.c line 424
static void write_block(struct pipeline_item_t *pi);
// write_file_index
// file write.c line 467
static void write_file_index(void);
// write_file_index_buf
// file write.c line 515
static void write_file_index_buf(enum anonymous_19 action);
// write_file_index_bytes
// file write.c line 497
static void write_file_index_bytes(unsigned long int size, unsigned char *buf);
// xle64dec
// file pixz.h line 66
unsigned long int xle64dec(const unsigned char *d);
// xle64enc
// file endian.c line 42
void xle64enc(unsigned char *d, unsigned long int n);
// xstrdup
// file common.c line 24
char * xstrdup(const char *s);

struct anonymous_6
{
  // alloc
  void * (*alloc)(void *, unsigned long int, unsigned long int);
  // free
  void (*free)(void *, void *);
  // opaque
  void *opaque;
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

union anonymous_27
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous_9
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
  // __data
  struct anonymous_9 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct anonymous
{
  // first
  struct queue_item_t *first;
  // last
  struct queue_item_t *last;
  // mutex
  union anonymous_27 mutex;
  // pop_cond
  union anonymous_10 pop_cond;
  // freer
  void (*freer)(signed int, void *);
};

struct anonymous_4
{
  // input
  unsigned char *input;
  // output
  unsigned char *output;
  // incap
  unsigned long int incap;
  // outcap
  unsigned long int outcap;
  // insize
  unsigned long int insize;
  // outsize
  unsigned long int outsize;
  // uoffset
  signed long int uoffset;
  // check
  enum anonymous_12 check;
  // btype
  enum anonymous_2 btype;
};

struct anonymous_24
{
  // flags
  const struct anonymous_8 *flags;
  // reserved_ptr1
  const void *reserved_ptr1;
  // reserved_ptr2
  const void *reserved_ptr2;
  // reserved_ptr3
  const void *reserved_ptr3;
  // number
  unsigned long int number;
  // block_count
  unsigned long int block_count;
  // compressed_offset
  unsigned long int compressed_offset;
  // uncompressed_offset
  unsigned long int uncompressed_offset;
  // compressed_size
  unsigned long int compressed_size;
  // uncompressed_size
  unsigned long int uncompressed_size;
  // padding
  unsigned long int padding;
  // reserved_vli1
  unsigned long int reserved_vli1;
  // reserved_vli2
  unsigned long int reserved_vli2;
  // reserved_vli3
  unsigned long int reserved_vli3;
  // reserved_vli4
  unsigned long int reserved_vli4;
};

struct anonymous_5
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
  struct anonymous_6 *allocator;
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
  enum anonymous_7 reserved_enum1;
  // reserved_enum2
  enum anonymous_7 reserved_enum2;
};

struct anonymous_17
{
  // buf
  unsigned char buf[512l];
  // pos
  signed long int pos;
  // size
  unsigned long int size;
};

struct anonymous_14
{
  // number_in_file
  unsigned long int number_in_file;
  // compressed_file_offset
  unsigned long int compressed_file_offset;
  // uncompressed_file_offset
  unsigned long int uncompressed_file_offset;
  // number_in_stream
  unsigned long int number_in_stream;
  // compressed_stream_offset
  unsigned long int compressed_stream_offset;
  // uncompressed_stream_offset
  unsigned long int uncompressed_stream_offset;
  // uncompressed_size
  unsigned long int uncompressed_size;
  // unpadded_size
  unsigned long int unpadded_size;
  // total_size
  unsigned long int total_size;
  // reserved_vli1
  unsigned long int reserved_vli1;
  // reserved_vli2
  unsigned long int reserved_vli2;
  // reserved_vli3
  unsigned long int reserved_vli3;
  // reserved_vli4
  unsigned long int reserved_vli4;
  // reserved_ptr1
  const void *reserved_ptr1;
  // reserved_ptr2
  const void *reserved_ptr2;
  // reserved_ptr3
  const void *reserved_ptr3;
  // reserved_ptr4
  const void *reserved_ptr4;
};

union anonymous_25
{
  // p
  const void *p;
  // s
  unsigned long int s;
  // v
  unsigned long int v;
};

struct anonymous_13
{
  // stream
  struct anonymous_24 stream;
  // block
  struct anonymous_14 block;
  // internal
  union anonymous_25 internal[6l];
};

struct anonymous_16
{
  // version
  unsigned int version;
  // header_size
  unsigned int header_size;
  // check
  enum anonymous_12 check;
  // compressed_size
  unsigned long int compressed_size;
  // uncompressed_size
  unsigned long int uncompressed_size;
  // filters
  struct anonymous_15 *filters;
  // raw_check
  unsigned char raw_check[64l];
  // reserved_ptr1
  void *reserved_ptr1;
  // reserved_ptr2
  void *reserved_ptr2;
  // reserved_ptr3
  void *reserved_ptr3;
  // reserved_int1
  unsigned int reserved_int1;
  // reserved_int2
  unsigned int reserved_int2;
  // reserved_int3
  unsigned long int reserved_int3;
  // reserved_int4
  unsigned long int reserved_int4;
  // reserved_int5
  unsigned long int reserved_int5;
  // reserved_int6
  unsigned long int reserved_int6;
  // reserved_int7
  unsigned long int reserved_int7;
  // reserved_int8
  unsigned long int reserved_int8;
  // reserved_enum1
  enum anonymous_7 reserved_enum1;
  // reserved_enum2
  enum anonymous_7 reserved_enum2;
  // reserved_enum3
  enum anonymous_7 reserved_enum3;
  // reserved_enum4
  enum anonymous_7 reserved_enum4;
  // reserved_bool1
  unsigned char reserved_bool1;
  // reserved_bool2
  unsigned char reserved_bool2;
  // reserved_bool3
  unsigned char reserved_bool3;
  // reserved_bool4
  unsigned char reserved_bool4;
  // reserved_bool5
  unsigned char reserved_bool5;
  // reserved_bool6
  unsigned char reserved_bool6;
  // reserved_bool7
  unsigned char reserved_bool7;
  // reserved_bool8
  unsigned char reserved_bool8;
};

struct anonymous_15
{
  // id
  unsigned long int id;
  // options
  void *options;
};

struct anonymous_23
{
  // block
  struct anonymous_16 block;
  // filters
  struct anonymous_15 filters[5l];
};

struct anonymous_22
{
  // dict_size
  unsigned int dict_size;
  // preset_dict
  const unsigned char *preset_dict;
  // preset_dict_size
  unsigned int preset_dict_size;
  // lc
  unsigned int lc;
  // lp
  unsigned int lp;
  // pb
  unsigned int pb;
  // mode
  enum anonymous_20 mode;
  // nice_len
  unsigned int nice_len;
  // mf
  enum anonymous_21 mf;
  // depth
  unsigned int depth;
  // reserved_int1
  unsigned int reserved_int1;
  // reserved_int2
  unsigned int reserved_int2;
  // reserved_int3
  unsigned int reserved_int3;
  // reserved_int4
  unsigned int reserved_int4;
  // reserved_int5
  unsigned int reserved_int5;
  // reserved_int6
  unsigned int reserved_int6;
  // reserved_int7
  unsigned int reserved_int7;
  // reserved_int8
  unsigned int reserved_int8;
  // reserved_enum1
  enum anonymous_7 reserved_enum1;
  // reserved_enum2
  enum anonymous_7 reserved_enum2;
  // reserved_enum3
  enum anonymous_7 reserved_enum3;
  // reserved_enum4
  enum anonymous_7 reserved_enum4;
  // reserved_ptr1
  void *reserved_ptr1;
  // reserved_ptr2
  void *reserved_ptr2;
};

struct anonymous_8
{
  // version
  unsigned int version;
  // backward_size
  unsigned long int backward_size;
  // check
  enum anonymous_12 check;
  // reserved_enum1
  enum anonymous_7 reserved_enum1;
  // reserved_enum2
  enum anonymous_7 reserved_enum2;
  // reserved_enum3
  enum anonymous_7 reserved_enum3;
  // reserved_enum4
  enum anonymous_7 reserved_enum4;
  // reserved_bool1
  unsigned char reserved_bool1;
  // reserved_bool2
  unsigned char reserved_bool2;
  // reserved_bool3
  unsigned char reserved_bool3;
  // reserved_bool4
  unsigned char reserved_bool4;
  // reserved_bool5
  unsigned char reserved_bool5;
  // reserved_bool6
  unsigned char reserved_bool6;
  // reserved_bool7
  unsigned char reserved_bool7;
  // reserved_bool8
  unsigned char reserved_bool8;
  // reserved_int1
  unsigned int reserved_int1;
  // reserved_int2
  unsigned int reserved_int2;
};

union anonymous_28
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

struct file_index_t
{
  // name
  char *name;
  // offset
  signed long int offset;
  // next
  struct file_index_t *next;
};

struct io_block_t
{
  // block
  struct anonymous_16 block;
  // input
  unsigned char *input;
  // output
  unsigned char *output;
  // insize
  unsigned long int insize;
  // outsize
  unsigned long int outsize;
};

struct pipeline_item_t
{
  // seq
  unsigned long int seq;
  // next
  struct pipeline_item_t *next;
  // data
  void *data;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct queue_item_t
{
  // type
  signed int type;
  // data
  void *data;
  // next
  struct queue_item_t *next;
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

struct wanted_t
{
  // next
  struct wanted_t *next;
  // name
  char *name;
  // start
  signed long int start;
  // end
  signed long int end;
  // size
  unsigned long int size;
};


// gArItem
// file read.c line 47
static struct pipeline_item_t *gArItem = (struct pipeline_item_t *)(void *)0;
// gArLastItem
// file read.c line 47
static struct pipeline_item_t *gArLastItem = (struct pipeline_item_t *)(void *)0;
// gArLastOffset
// file read.c line 48
static signed long int gArLastOffset;
// gArLastSize
// file read.c line 49
static unsigned long int gArLastSize;
// gArNextItem
// file read.c line 51
static _Bool gArNextItem = (_Bool)0;
// gArWanted
// file read.c line 50
static struct wanted_t *gArWanted = (struct wanted_t *)(void *)0;
// gBlockFraction
// file write.c line 21
double gBlockFraction = 2.0;
// gBlockInSize
// file write.c line 25
static unsigned long int gBlockInSize = (unsigned long int)0;
// gBlockOutSize
// file write.c line 25
static unsigned long int gBlockOutSize = (unsigned long int)0;
// gExplicitFiles
// file read.c line 52
static _Bool gExplicitFiles = (_Bool)0;
// gFIBErr
// file common.c line 50
static enum anonymous_3 gFIBErr = (enum anonymous_3)LZMA_OK;
// gFIBInputBuf
// file common.c line 51
static unsigned char gFIBInputBuf[4096l];
// gFIBPos
// file common.c line 49
static unsigned long int gFIBPos = (unsigned long int)0;
// gFIBSize
// file common.c line 49
static unsigned long int gFIBSize = (unsigned long int)4096;
// gFileIndex
// file common.c line 46
struct file_index_t *gFileIndex = (struct file_index_t *)(void *)0;
// gFileIndexBuf
// file common.c line 48
static unsigned char *gFileIndexBuf = (unsigned char *)(void *)0;
// gFileIndexBuf_link1
// file write.c line 37
static unsigned char gFileIndexBuf_link1[4096l];
// gFileIndexBufPos
// file write.c line 38
static unsigned long int gFileIndexBufPos = (unsigned long int)0;
// gFileIndexOffset
// file read.c line 88
static unsigned long int gFileIndexOffset = (unsigned long int)0;
// gFilters
// file write.c line 35
static struct anonymous_15 gFilters[5l];
// gInFile
// file pixz.h line 57
struct _IO_FILE *gInFile = (struct _IO_FILE *)(void *)0;
// gIndex
// file common.c line 45
struct lzma_index_s *gIndex = (struct lzma_index_s *)(void *)0;
// gLastFile
// file common.c line 46
struct file_index_t *gLastFile = (struct file_index_t *)(void *)0;
// gMoved
// file common.c line 52
static unsigned long int gMoved = (unsigned long int)0;
// gMultiHeader
// file write.c line 28
static _Bool gMultiHeader = (_Bool)0;
// gMultiHeaderStart
// file write.c line 27
static signed long int gMultiHeaderStart = (signed long int)0;
// gOutFile
// file pixz.h line 57
struct _IO_FILE *gOutFile;
// gPLFreer
// file common.c line 437
void (*gPLFreer)(void *) = (void (*)(void *))(void *)0;
// gPLMergeSeq
// file common.c line 446
signed long int gPLMergeSeq = (signed long int)0;
// gPLMergedItems
// file common.c line 447
struct pipeline_item_t *gPLMergedItems = (struct pipeline_item_t *)(void *)0;
// gPLProcess
// file common.c line 439
void (*gPLProcess)(unsigned long int) = (void (*)(unsigned long int))(void *)0;
// gPLProcessCount
// file common.c line 441
unsigned long int gPLProcessCount = (unsigned long int)0;
// gPLProcessThreads
// file common.c line 442
unsigned long int *gPLProcessThreads = (unsigned long int *)(void *)0;
// gPLSplit
// file common.c line 438
void (*gPLSplit)(void) = (void (*)(void))(void *)0;
// gPLSplitSeq
// file common.c line 445
signed long int gPLSplitSeq = (signed long int)0;
// gPLSplitThread
// file common.c line 443
unsigned long int gPLSplitThread;
// gPipelineMergeQ
// file common.c line 432
struct anonymous *gPipelineMergeQ = (struct anonymous *)(void *)0;
// gPipelineProcessMax
// file common.c line 434
unsigned long int gPipelineProcessMax = (unsigned long int)0;
// gPipelineQSize
// file common.c line 435
unsigned long int gPipelineQSize = (unsigned long int)0;
// gPipelineSplitQ
// file common.c line 431
struct anonymous *gPipelineSplitQ = (struct anonymous *)(void *)0;
// gPipelineStartQ
// file common.c line 430
struct anonymous *gPipelineStartQ = (struct anonymous *)(void *)0;
// gRbuf
// file read.c line 66
static struct anonymous_4 *gRbuf = (struct anonymous_4 *)(void *)0;
// gRbufPI
// file read.c line 65
static struct pipeline_item_t *gRbufPI = (struct pipeline_item_t *)(void *)0;
// gReadBlock
// file write.c line 32
static struct io_block_t *gReadBlock = (struct io_block_t *)(void *)0;
// gReadItem
// file write.c line 31
static struct pipeline_item_t *gReadItem = (struct pipeline_item_t *)(void *)0;
// gReadItemCount
// file write.c line 33
static unsigned long int gReadItemCount = (unsigned long int)0;
// gStream
// file pixz.h line 58
struct anonymous_5 gStream = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
// gTar
// file write.c line 23
static _Bool gTar = (_Bool)1;
// gTotalRead
// file write.c line 29
static signed long int gTotalRead = (signed long int)0;
// gWantedFiles
// file read.c line 17
static struct wanted_t *gWantedFiles = (struct wanted_t *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// add_file
// file write.c line 225
static void add_file(signed long int offset, const char *name)
{
  _Bool return_value_is_multi_header_1;
  char *tmp_if_expr_4;
  char *return_value_xstrdup_3;
  if(!(name == ((const char *)NULL)))
  {
    return_value_is_multi_header_1=is_multi_header(name);
    if(return_value_is_multi_header_1 == (_Bool)0)
      goto __CPROVER_DUMP_L2;

    if(gMultiHeader == (_Bool)0)
      gMultiHeaderStart = offset;

    gMultiHeader = (_Bool)1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    struct file_index_t *f;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct file_index_t) /*24ul*/ );
    f = (struct file_index_t *)return_value_malloc_2;
    f->offset = gMultiHeader != (_Bool)0 ? gMultiHeaderStart : offset;
    gMultiHeader = (_Bool)0;
    if(!(name == ((const char *)NULL)))
    {
      return_value_xstrdup_3=xstrdup(name);
      tmp_if_expr_4 = return_value_xstrdup_3;
    }

    else
      tmp_if_expr_4 = (char *)(void *)0;
    f->name = tmp_if_expr_4;
    f->next = (struct file_index_t *)(void *)0;
    if(!(gLastFile == ((struct file_index_t *)NULL)))
      gLastFile->next = f;

    else
      gFileIndex = f;
    gLastFile = f;
  }
}

// auto_output
// file pixz.c line 185
static char * auto_output(enum anonymous_0 op, char *in)
{
  if((signed int)op == OP_READ)
  {
    char *auto_output__1__1__1__r;
    auto_output__1__1__1__r=subsuf(in, ".tar.xz", ".tar");
    if(!(auto_output__1__1__1__r == ((char *)NULL)))
      return auto_output__1__1__1__r;

  }

  if((signed int)op == OP_READ)
  {
    char *r;
    r=subsuf(in, ".tpxz", ".tar");
    if(!(r == ((char *)NULL)))
      return r;

  }

  if((signed int)op == OP_READ)
  {
    char *auto_output__1__3__1__r;
    auto_output__1__3__1__r=subsuf(in, ".xz", "");
    if(!(auto_output__1__3__1__r == ((char *)NULL)))
      return auto_output__1__3__1__r;

  }

  if((signed int)op == OP_WRITE)
  {
    char *auto_output__1__4__1__r;
    auto_output__1__4__1__r=subsuf(in, ".tar", ".tpxz");
    if(!(auto_output__1__4__1__r == ((char *)NULL)))
      return auto_output__1__4__1__r;

  }

  if((signed int)op == OP_WRITE)
  {
    char *auto_output__1__5__1__r;
    auto_output__1__5__1__r=subsuf(in, "", ".xz");
    if(!(auto_output__1__5__1__r == ((char *)NULL)))
      return auto_output__1__5__1__r;

  }

  return (char *)(void *)0;
}

// block_alloc
// file write.c line 260
static void block_alloc(struct io_block_t *ib, enum anonymous_18 parts)
{
  void *return_value_malloc_1;
  if(!((BLOCK_IN & (signed int)parts) == 0))
  {
    if(ib->input == ((unsigned char *)NULL))
    {
      return_value_malloc_1=malloc(gBlockInSize);
      ib->input = (unsigned char *)return_value_malloc_1;
    }

  }

  void *return_value_malloc_2;
  if(!((BLOCK_IN & (signed int)parts) == 0))
  {
    if(ib->output == ((unsigned char *)NULL))
    {
      return_value_malloc_2=malloc(gBlockOutSize);
      ib->output = (unsigned char *)return_value_malloc_2;
    }

  }

  _Bool tmp_if_expr_3;
  if(ib->input == ((unsigned char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = !(ib->output != ((unsigned char *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
    die("Can't allocate blocks");

}

// block_capacity
// file read.c line 292
static void block_capacity(struct anonymous_4 *ib, unsigned long int incap, unsigned long int outcap)
{
  if(!(ib->incap >= incap))
  {
    ib->incap = incap;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)ib->input, incap);
    ib->input = (unsigned char *)return_value_realloc_1;
  }

  if(!(ib->outcap >= outcap))
  {
    ib->outcap = outcap;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(outcap);
    ib->output = (unsigned char *)return_value_malloc_2;
  }

}

// block_create
// file read.c line 199
static void * block_create(void)
{
  struct anonymous_4 *ib;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_4) /*64ul*/ );
  ib = (struct anonymous_4 *)return_value_malloc_1;
  ib->outcap = (unsigned long int)0;
  ib->incap = ib->outcap;
  ib->output = (unsigned char *)(void *)0;
  ib->input = ib->output;
  return (void *)ib;
}

// block_create_link1
// file write.c line 254
static void * block_create_link1()
{
  struct io_block_t *ib_link1;
  void *return_value_malloc_1_link1;
  return_value_malloc_1_link1=malloc(sizeof(struct io_block_t) /*240ul*/ );
  ib_link1 = (struct io_block_t *)return_value_malloc_1_link1;
  ib_link1->output = (unsigned char *)(void *)0;
  ib_link1->input = ib_link1->output;
  return (void *)ib_link1;
}

// block_dealloc
// file write.c line 269
static void block_dealloc(struct io_block_t *ib, enum anonymous_18 parts)
{
  if(!((BLOCK_IN & (signed int)parts) == 0))
  {
    free((void *)ib->input);
    ib->input = (unsigned char *)(void *)0;
  }

  if(!((BLOCK_OUT & (signed int)parts) == 0))
  {
    free((void *)ib->output);
    ib->output = (unsigned char *)(void *)0;
  }

}

// block_free
// file read.c line 206
static void block_free(void *data)
{
  struct anonymous_4 *ib = (struct anonymous_4 *)data;
  free((void *)ib->input);
  free((void *)ib->output);
  free((void *)ib);
}

// block_free_link1
// file write.c line 247
static void block_free_link1(void *data_link1)
{
  struct io_block_t *ib_link1 = (struct io_block_t *)data_link1;
  free((void *)ib_link1->input);
  free((void *)ib_link1->output);
  free((void *)ib_link1);
}

// block_init
// file write.c line 397
static void block_init(struct anonymous_16 *block, unsigned long int insize)
{
  block->version = (unsigned int)0;
  block->check = (enum anonymous_12)LZMA_CHECK_CRC32;
  block->filters = gFilters;
  block->uncompressed_size = insize != 0ul ? insize : 18446744073709551615UL;
  block->compressed_size = insize != 0ul ? gBlockOutSize : 18446744073709551615UL;
  enum anonymous_3 return_value_lzma_block_header_size_1;
  return_value_lzma_block_header_size_1=lzma_block_header_size(block);
  if(!((signed int)return_value_lzma_block_header_size_1 == LZMA_OK))
    die("Error getting block header size");

}

// bw_read
// file common.c line 257
static unsigned int * bw_read(struct anonymous_17 *b)
{
  unsigned long int sz = sizeof(unsigned int) /*4ul*/ ;
  signed long int tmp_if_expr_1;
  if(!(b->size >= sz))
  {
    if(!((unsigned long int)b->pos >= sz))
      return (unsigned int *)(void *)0;

    if(b->pos >= 513l)
      tmp_if_expr_1 = (signed long int)512;

    else
      tmp_if_expr_1 = b->pos;
    b->size = (unsigned long int)tmp_if_expr_1;
    b->pos = b->pos - (signed long int)b->size;
    signed int return_value_fseeko_2;
    return_value_fseeko_2=fseeko(gInFile, b->pos, 0);
    if(return_value_fseeko_2 == -1)
      return (unsigned int *)(void *)0;

    unsigned long int return_value_fread_3;
    return_value_fread_3=fread((void *)b->buf, b->size, (unsigned long int)1, gInFile);
    if(!(return_value_fread_3 == 1ul))
      return (unsigned int *)(void *)0;

  }

  b->size = b->size - sz;
  return &((unsigned int *)b->buf)[(signed long int)(b->size / sz)];
}

// decode_file_index_start
// file common.c line 89
static void * decode_file_index_start(signed long int block_seek, enum anonymous_12 check)
{
  signed int return_value_fseeko_1;
  return_value_fseeko_1=fseeko(gInFile, block_seek, 0);
  if(return_value_fseeko_1 == -1)
    die("Error seeking to block");

  struct anonymous_23 *bw;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct anonymous_23) /*288ul*/ );
  bw = (struct anonymous_23 *)return_value_malloc_2;
  bw->block = (struct anonymous_16){ .version=(unsigned int)0, .header_size=0u, .check=check,
    .compressed_size=0ul, .uncompressed_size=0ul, .filters=bw->filters,
    .raw_check={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .reserved_ptr1=NULL,
    .reserved_ptr2=NULL, .reserved_ptr3=NULL,
    .reserved_int1=0u, .reserved_int2=0u,
    .reserved_int3=0ul, .reserved_int4=0ul,
    .reserved_int5=0ul, .reserved_int6=0ul,
    .reserved_int7=0ul, .reserved_int8=0ul,
    .reserved_enum1=(enum anonymous_7)0, .reserved_enum2=(enum anonymous_7)0,
    .reserved_enum3=(enum anonymous_7)0,
    .reserved_enum4=(enum anonymous_7)0,
    .reserved_bool1=0,
    .reserved_bool2=0, .reserved_bool3=0,
    .reserved_bool4=0, .reserved_bool5=0,
    .reserved_bool6=0, .reserved_bool7=0,
    .reserved_bool8=0 };
  signed int b;
  b=fgetc(gInFile);
  if(b == 0 || b == -1)
    die("Error reading block size");

  bw->block.header_size = ((unsigned int)b + (unsigned int)1) * (unsigned int)4;
  const signed long int b_array_size0 = (signed long int)bw->block.header_size;
  unsigned char hdrbuf[b_array_size0];
  hdrbuf[(signed long int)0] = (unsigned char)b;
  unsigned long int return_value_fread_3;
  return_value_fread_3=fread((void *)(hdrbuf + (signed long int)1), (unsigned long int)(bw->block.header_size - (unsigned int)1), (unsigned long int)1, gInFile);
  if(!(return_value_fread_3 == 1ul))
    die("Error reading block header");

  enum anonymous_3 return_value_lzma_block_header_decode_4;
  return_value_lzma_block_header_decode_4=lzma_block_header_decode(&bw->block, (struct anonymous_6 *)(void *)0, hdrbuf);
  if(!((signed int)return_value_lzma_block_header_decode_4 == LZMA_OK))
    die("Error decoding file index block header");

  enum anonymous_3 return_value_lzma_block_decoder_5;
  return_value_lzma_block_decoder_5=lzma_block_decoder(&gStream, &bw->block);
  if(!((signed int)return_value_lzma_block_decoder_5 == LZMA_OK))
    die("Error initializing file index stream");

  return (void *)bw;
}

// decode_index
// file common.c line 346
_Bool decode_index(void)
{
  signed int return_value_fseeko_3;
  return_value_fseeko_3=fseeko(gInFile, (signed long int)0, 2);
  if(return_value_fseeko_3 == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "can not seek in input: %s\n", return_value_strerror_2);
    return (_Bool)0;
  }

  signed long int pos;
  pos=ftello(gInFile);
  gIndex = (struct lzma_index_s *)(void *)0;
  enum anonymous_3 return_value_lzma_index_cat_4;
  while(pos >= 1l)
  {
    struct lzma_index_s *index;
    index=next_index(&pos);
    if(!(gIndex == ((struct lzma_index_s *)NULL)))
    {
      return_value_lzma_index_cat_4=lzma_index_cat(index, gIndex, (struct anonymous_6 *)(void *)0);
      if(!((signed int)return_value_lzma_index_cat_4 == LZMA_OK))
        die("Error concatenating indices");

    }

    gIndex = index;
  }
  return gIndex != (struct lzma_index_s *)(void *)0;
}

// decode_thread
// file read.c line 561
static void decode_thread(unsigned long int thnum)
{
  struct anonymous_5 stream = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
  struct anonymous_15 filters[5l];
  struct anonymous_16 block = { .version=(unsigned int)0, .header_size=0u, .check=(enum anonymous_12)LZMA_CHECK_NONE,
    .compressed_size=0ul,
    .uncompressed_size=0ul, .filters=filters,
    .raw_check={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .reserved_ptr1=NULL,
    .reserved_ptr2=NULL, .reserved_ptr3=NULL,
    .reserved_int1=0u, .reserved_int2=0u,
    .reserved_int3=0ul, .reserved_int4=0ul,
    .reserved_int5=0ul, .reserved_int6=0ul,
    .reserved_int7=0ul, .reserved_int8=0ul,
    .reserved_enum1=(enum anonymous_7)0, .reserved_enum2=(enum anonymous_7)0,
    .reserved_enum3=(enum anonymous_7)0,
    .reserved_enum4=(enum anonymous_7)0,
    .reserved_bool1=0,
    .reserved_bool2=0, .reserved_bool3=0,
    .reserved_bool4=0, .reserved_bool5=0,
    .reserved_bool6=0, .reserved_bool7=0,
    .reserved_bool8=0 };
  struct pipeline_item_t *pi;
  struct anonymous_4 *ib;
  signed int return_value_queue_pop_1;
  do
  {
    return_value_queue_pop_1=queue_pop(gPipelineSplitQ, (void **)&pi);
    if(return_value_queue_pop_1 == PIPELINE_STOP)
      break;

    ib = (struct anonymous_4 *)pi->data;
    block.header_size = ((unsigned int)*ib->input + (unsigned int)1) * (unsigned int)4;
    block.check = ib->check;
    enum anonymous_3 return_value_lzma_block_header_decode_2;
    return_value_lzma_block_header_decode_2=lzma_block_header_decode(&block, (struct anonymous_6 *)(void *)0, ib->input);
    if(!((signed int)return_value_lzma_block_header_decode_2 == LZMA_OK))
      die("Error decoding block header");

    enum anonymous_3 return_value_lzma_block_decoder_3;
    return_value_lzma_block_decoder_3=lzma_block_decoder(&stream, &block);
    if(!((signed int)return_value_lzma_block_decoder_3 == LZMA_OK))
      die("Error initializing block decode");

    stream.avail_in = ib->insize - (unsigned long int)block.header_size;
    stream.next_in = ib->input + (signed long int)block.header_size;
    stream.avail_out = ib->outcap;
    stream.next_out = ib->output;
    enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
    while(!((signed int)err == LZMA_STREAM_END))
    {
      if(!((signed int)err == LZMA_OK))
        die("Error decoding block");

      err=lzma_code(&stream, (enum anonymous_19)LZMA_FINISH);
    }
    ib->outsize = (unsigned long int)(stream.next_out - ib->output);
    queue_push(gPipelineMergeQ, PIPELINE_ITEM, (void *)pi);
  }
  while((_Bool)1);
  lzma_end(&stream);
}

// die
// file common.c line 14
void die(const char *fmt, ...)
{
  void **args = (void **)&fmt;
  vfprintf(stderr, fmt, args);
  fprintf(stderr, "\n");
  fflush(stderr);
  args = ((void **)NULL);
  exit(1);
}

// dump_file_index
// file common.c line 62
void dump_file_index(struct _IO_FILE *out, _Bool verbose)
{
  struct file_index_t *f = gFileIndex;
  char *tmp_if_expr_1;
  for( ; !(f == ((struct file_index_t *)NULL)); f = f->next)
    if(!(verbose == (_Bool)0))
    {
      if(!(f->name == ((char *)NULL)))
        tmp_if_expr_1 = f->name;

      else
        tmp_if_expr_1 = "";
      fprintf(out, "%10lu %s\n", (unsigned long int)f->offset, tmp_if_expr_1);
    }

    else
      if(!(f->name == ((char *)NULL)))
        fprintf(out, "%s\n", f->name);

}

// encode_index
// file write.c line 448
static void encode_index(void)
{
  enum anonymous_3 return_value_lzma_index_encoder_1;
  return_value_lzma_index_encoder_1=lzma_index_encoder(&gStream, gIndex);
  if(!((signed int)return_value_lzma_index_encoder_1 == LZMA_OK))
    die("Error creating index encoder");

  unsigned char obuf[4096l];
  enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
  while(!((signed int)err == LZMA_STREAM_END))
  {
    gStream.next_out = obuf;
    gStream.avail_out = (unsigned long int)4096;
    err=lzma_code(&gStream, (enum anonymous_19)LZMA_RUN);
    if(!((signed int)err == LZMA_OK) && !((signed int)err == LZMA_STREAM_END))
      die("Error encoding index");

    if(!(gStream.avail_out == 4096ul))
    {
      unsigned long int return_value_fwrite_2;
      return_value_fwrite_2=fwrite((const void *)obuf, (unsigned long int)4096 - gStream.avail_out, (unsigned long int)1, gOutFile);
      if(!(return_value_fwrite_2 == 1ul))
        die("Error writing index data");

    }

  }
  lzma_end(&gStream);
}

// encode_thread
// file write.c line 344
static void encode_thread(unsigned long int thnum)
{
  struct anonymous_5 stream = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
  while((_Bool)1)
  {
    struct pipeline_item_t *pi;
    signed int msg;
    msg=queue_pop(gPipelineSplitQ, (void **)&pi);
    if(msg == PIPELINE_STOP)
      break;

    struct io_block_t *ib = (struct io_block_t *)pi->data;
    block_alloc(ib, (enum anonymous_18)BLOCK_OUT);
    block_init(&ib->block, ib->insize);
    unsigned long int header_size = (unsigned long int)ib->block.header_size;
    unsigned long int uncompressible_size;
    unsigned long int return_value_size_uncompressible_1;
    return_value_size_uncompressible_1=size_uncompressible(ib->insize);
    unsigned int return_value_lzma_check_size_2;
    return_value_lzma_check_size_2=lzma_check_size(ib->block.check);
    uncompressible_size = return_value_size_uncompressible_1 + (unsigned long int)return_value_lzma_check_size_2;
    enum anonymous_3 return_value_lzma_block_encoder_3;
    return_value_lzma_block_encoder_3=lzma_block_encoder(&stream, &ib->block);
    if(!((signed int)return_value_lzma_block_encoder_3 == LZMA_OK))
      die("Error creating block encoder");

    stream.next_in = ib->input;
    stream.avail_in = ib->insize;
    stream.next_out = ib->output + (signed long int)header_size;
    stream.avail_out = uncompressible_size;
    ib->block.uncompressed_size = 18446744073709551615UL;
    enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
    while((signed int)err == LZMA_OK)
      err=lzma_code(&stream, (enum anonymous_19)LZMA_FINISH);
    if((signed int)err == LZMA_BUF_ERROR)
    {
      encode_uncompressible(ib);
      ib->outsize = header_size + uncompressible_size;
    }

    else
      if((signed int)err == LZMA_STREAM_END)
        ib->outsize = (unsigned long int)(stream.next_out - ib->output);

      else
        die("Error encoding block");
    block_dealloc(ib, (enum anonymous_18)BLOCK_IN);
    enum anonymous_3 return_value_lzma_block_header_encode_4;
    return_value_lzma_block_header_encode_4=lzma_block_header_encode(&ib->block, ib->output);
    if(!((signed int)return_value_lzma_block_header_encode_4 == LZMA_OK))
      die("Error encoding block header");

    queue_push(gPipelineMergeQ, PIPELINE_ITEM, (void *)pi);
  }
  lzma_end(&stream);
}

// encode_uncompressible
// file write.c line 294
static void encode_uncompressible(struct io_block_t *ib)
{
  const unsigned char control_uncomp = (const unsigned char)1;
  const unsigned char control_end = (const unsigned char)0;
  unsigned char *output_start = ib->output + (signed long int)ib->block.header_size;
  unsigned char *output = output_start;
  unsigned char *input = ib->input;
  unsigned long int remain = ib->insize;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  while(!(remain == 0ul))
  {
    unsigned long int size = remain;
    if(size >= 65537ul)
      size = (unsigned long int)(1 << 16);

    tmp_post_1 = output;
    output = output + 1l;
    *tmp_post_1 = control_uncomp;
    unsigned short int size_write = (unsigned short int)(size - (unsigned long int)1);
    tmp_post_2 = output;
    output = output + 1l;
    *tmp_post_2 = (unsigned char)((signed int)size_write >> 8);
    tmp_post_3 = output;
    output = output + 1l;
    *tmp_post_3 = (unsigned char)((signed int)size_write & 0xFF);
    memcpy((void *)output, (const void *)input, size);
    remain = remain - size;
    output = output + (signed long int)size;
    input = input + (signed long int)size;
  }
  unsigned char *tmp_post_4 = output;
  output = output + 1l;
  *tmp_post_4 = control_end;
  ib->block.compressed_size = (unsigned long int)(output - output_start);
  ib->block.uncompressed_size = ib->insize;
  unsigned char *tmp_post_5;
  for( ; !((output - output_start) % 4l == 0l); *tmp_post_5 = (unsigned char)0)
  {
    tmp_post_5 = output;
    output = output + 1l;
  }
  if(!((signed int)ib->block.check == LZMA_CHECK_CRC32))
    die("pixz only supports CRC-32 checksums");

  unsigned int check;
  check=lzma_crc32(ib->input, ib->insize, (unsigned int)0);
  unsigned char *tmp_post_6 = output;
  output = output + 1l;
  *tmp_post_6 = (unsigned char)(check & (unsigned int)0xFF);
  unsigned char *tmp_post_7 = output;
  output = output + 1l;
  *tmp_post_7 = (unsigned char)(check >> 8 & (unsigned int)0xFF);
  unsigned char *tmp_post_8 = output;
  output = output + 1l;
  *tmp_post_8 = (unsigned char)(check >> 16 & (unsigned int)0xFF);
  unsigned char *tmp_post_9 = output;
  output = output + 1l;
  *tmp_post_9 = (unsigned char)(check >> 24);
}

// find_file_index
// file common.c line 115
static unsigned long int find_file_index(void **bdatap)
{
  if(gIndex == ((struct lzma_index_s *)NULL))
    decode_index();

  struct anonymous_13 iter;
  lzma_index_iter_init(&iter, gIndex);
  unsigned long int loc;
  unsigned long int return_value_lzma_index_uncompressed_size_1;
  return_value_lzma_index_uncompressed_size_1=lzma_index_uncompressed_size(gIndex);
  loc = return_value_lzma_index_uncompressed_size_1 - (unsigned long int)1;
  unsigned char return_value_lzma_index_iter_locate_2;
  return_value_lzma_index_iter_locate_2=lzma_index_iter_locate(&iter, loc);
  if(!(return_value_lzma_index_iter_locate_2 == 0))
    die("Can't locate file index block");

  if(!(iter.stream.number == 1ul))
    return (unsigned long int)0;

  else
  {
    void *bdata;
    bdata=decode_file_index_start((signed long int)iter.block.compressed_file_offset, iter.stream.flags->check);
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(gFIBSize);
    gFileIndexBuf = (unsigned char *)return_value_malloc_3;
    gStream.avail_out = gFIBSize;
    gStream.avail_in = (unsigned long int)0;
    read_file_index_data();
    unsigned long int ret = iter.block.compressed_file_offset;
    unsigned long int return_value_xle64dec_4;
    return_value_xle64dec_4=xle64dec(gFileIndexBuf + (signed long int)gFIBPos);
    if(!(return_value_xle64dec_4 == 0xDBAE14D62E324CA6LL))
      ret = (unsigned long int)0;

    gFIBPos = gFIBPos + sizeof(unsigned long int) /*8ul*/ ;
    if(!(bdatap == ((void **)NULL)) && !(ret == 0ul))
      *bdatap = bdata;

    else
    {
      if(!(bdatap == ((void **)NULL)))
        *bdatap = (void *)0;

      free(bdata);
      free((void *)gFileIndexBuf);
      gFileIndex = (struct file_index_t *)(void *)0;
      gLastFile = gFileIndex;
      lzma_end(&gStream);
    }
    return ret;
  }
}

// free_file_index
// file common.c line 74
void free_file_index(void)
{
  struct file_index_t *f = gFileIndex;
  while(!(f == ((struct file_index_t *)NULL)))
  {
    struct file_index_t *next = f->next;
    free((void *)f->name);
    free((void *)f);
    f = next;
  }
  gLastFile = (struct file_index_t *)(void *)0;
  gFileIndex = gLastFile;
}

// is_multi_header
// file common.c line 34
_Bool is_multi_header(const char *name)
{
  unsigned long int i;
  i=strlen(name);
  for( ; !(i == 0ul); i = i - 1ul)
    if((signed int)name[-1l + (signed long int)i] == 47)
      break;

  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(name + (signed long int)i, "._", (unsigned long int)2);
  return return_value_strncmp_1 == 0;
}

// main
// file pixz.c line 57
signed int main(signed int argc, char **argv)
{
  unsigned int level = 6U;
  _Bool tar = (_Bool)1;
  _Bool keep_input = (_Bool)0;
  _Bool extreme = (_Bool)0;
  enum anonymous_0 op = (enum anonymous_0)OP_WRITE;
  char *ipath = (char *)(void *)0;
  char *opath = (char *)(void *)0;
  signed int ch;
  char *optend;
  signed long int optint;
  double optdbl;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  do
  {
    ch=getopt(argc, argv, "dcxli:o:tkvhp:0123456789f:q:e");
    if(ch == -1)
      break;

    switch(ch)
    {
      case 99:
        break;
      case 100:
      {
        op = (enum anonymous_0)OP_READ;
        break;
      }
      case 120:
      {
        op = (enum anonymous_0)OP_EXTRACT;
        break;
      }
      case 108:
      {
        op = (enum anonymous_0)OP_LIST;
        break;
      }
      case 105:
      {
        ipath = optarg;
        break;
      }
      case 111:
      {
        opath = optarg;
        break;
      }
      case 116:
      {
        tar = (_Bool)0;
        break;
      }
      case 107:
      {
        keep_input = (_Bool)1;
        break;
      }
      case 104:
      {
        usage((const char *)(void *)0);
        break;
      }
      case 101:
      {
        extreme = (_Bool)1;
        break;
      }
      case 102:
      {
        optdbl=strtod(optarg, &optend);
        if(optdbl <= 0.000000 || !(*optend == 0))
          usage("Need a positive floating-point argument to -f");

        gBlockFraction = optdbl;
        break;
      }
      case 112:
      {
        optint=strtol(optarg, &optend, 10);
        if(!(optint >= 0l))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = *optend != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          usage("Need a non-negative integer argument to -p");

        gPipelineProcessMax = (unsigned long int)optint;
        break;
      }
      case 113:
      {
        optint=strtol(optarg, &optend, 10);
        if(!(optint >= 1l))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = *optend != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          usage("Need a positive integer argument to -q");

        gPipelineQSize = (unsigned long int)optint;
        break;
      }
      default:
        if(ch >= 48 && !(ch >= 58))
          level = (unsigned int)(ch - 48);

        else
          usage("");
    }
  }
  while((_Bool)1);
  argc = argc - optind;
  argv = argv + (signed long int)optind;
  gInFile = stdin;
  gOutFile = stdout;
  _Bool iremove = (_Bool)0;
  if(argc >= 1 && !((signed int)op == OP_EXTRACT))
  {
    if(argc >= 3 || argc == 2 && (signed int)op == OP_LIST)
      usage("Too many arguments");

    if(!(ipath == ((char *)NULL)))
      usage("Multiple input files specified");

    ipath = argv[(signed long int)0];
    if(argc == 2)
    {
      if(!(opath == ((char *)NULL)))
        usage("Multiple output files specified");

      opath = argv[(signed long int)1];
    }

    else
      if(!((signed int)op == OP_LIST))
      {
        iremove = (_Bool)1;
        opath=auto_output(op, argv[(signed long int)0]);
        if(opath == ((char *)NULL))
          usage("Unknown suffix");

      }

  }

  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  if(!(ipath == ((char *)NULL)))
  {
    gInFile=fopen(ipath, "r");
    if(gInFile == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location_3=__errno_location();
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      die("can not open input file: %s: %s", ipath, return_value_strerror_4);
    }

  }

  signed int *return_value___errno_location_5;
  char *return_value_strerror_6;
  signed int *return_value___errno_location_7;
  char *return_value_strerror_8;
  signed int *return_value___errno_location_9;
  char *return_value_strerror_10;
  if(!(opath == ((char *)NULL)))
  {
    if(gInFile == stdin)
    {
      gOutFile=fopen(opath, "w");
      if(gOutFile == ((struct _IO_FILE *)NULL))
      {
        return_value___errno_location_5=__errno_location();
        return_value_strerror_6=strerror(*return_value___errno_location_5);
        die("can not open output file: %s: %s", opath, return_value_strerror_6);
      }

    }

    else
    {
      struct stat input_stat;
      signed int output_fd;
      stat(ipath, &input_stat);
      output_fd=open(opath, 0100 | 01, input_stat.st_mode);
      if(output_fd == -1)
      {
        return_value___errno_location_7=__errno_location();
        return_value_strerror_8=strerror(*return_value___errno_location_7);
        die("can not open output file: %s: %s", opath, return_value_strerror_8);
      }

      gOutFile=fdopen(output_fd, "w");
      if(gOutFile == ((struct _IO_FILE *)NULL))
      {
        return_value___errno_location_9=__errno_location();
        return_value_strerror_10=strerror(*return_value___errno_location_9);
        die("can not open output file: %s: %s", opath, return_value_strerror_10);
      }

    }
  }

  signed int return_value_fileno_11;
  signed int return_value_isatty_12;
  switch((signed int)op)
  {
    case OP_WRITE:
    {
      return_value_fileno_11=fileno(gOutFile);
      return_value_isatty_12=isatty(return_value_fileno_11);
      if(return_value_isatty_12 == 1)
        usage("Refusing to output to a TTY");

      if(!(extreme == (_Bool)0))
        level = level | 1U << 31;

      pixz_write(tar, level);
      break;
    }
    case OP_READ:
    {
      pixz_read(tar, (unsigned long int)0, (char **)(void *)0);
      break;
    }
    case OP_EXTRACT:
    {
      pixz_read(tar, (unsigned long int)argc, argv);
      break;
    }
    case OP_LIST:
      pixz_list(tar);
  }
  if(keep_input == (_Bool)0 && !(iremove == (_Bool)0))
    unlink(ipath);

  return 0;
}

// next_index
// file common.c line 302
static struct lzma_index_s * next_index(signed long int *pos)
{
  struct anonymous_17 b;
  signed long int pad;
  pad=stream_padding(&b, *pos);
  signed long int eos = *pos - pad;
  struct anonymous_8 flags;
  stream_footer(&b, &flags);
  *pos = (signed long int)((unsigned long int)(eos - (signed long int)12) - flags.backward_size);
  signed int return_value_fseeko_1;
  return_value_fseeko_1=fseeko(gInFile, *pos, 0);
  if(return_value_fseeko_1 == -1)
    die("Error seeking to index");

  struct anonymous_5 strm = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
  struct lzma_index_s *index;
  enum anonymous_3 return_value_lzma_index_decoder_2;
  return_value_lzma_index_decoder_2=lzma_index_decoder(&strm, &index, 64ULL * (unsigned long int)1024 * (unsigned long int)1024 * (unsigned long int)1024);
  if(!((signed int)return_value_lzma_index_decoder_2 == LZMA_OK))
    die("Error creating index decoder");

  unsigned char ibuf[4096l];
  strm.avail_in = (unsigned long int)0;
  enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
  while(!((signed int)err == LZMA_STREAM_END))
  {
    if(strm.avail_in == 0ul)
    {
      strm.avail_in=fread((void *)ibuf, (unsigned long int)1, (unsigned long int)4096, gInFile);
      signed int return_value_ferror_3;
      return_value_ferror_3=ferror(gInFile);
      if(!(return_value_ferror_3 == 0))
        die("Error reading index");

      strm.next_in = ibuf;
    }

    err=lzma_code(&strm, (enum anonymous_19)LZMA_RUN);
    if(!((signed int)err == LZMA_OK) && !((signed int)err == LZMA_STREAM_END))
      die("Error decoding index");

  }
  unsigned long int return_value_lzma_index_stream_size_4;
  return_value_lzma_index_stream_size_4=lzma_index_stream_size(index);
  *pos = (signed long int)((unsigned long int)eos - return_value_lzma_index_stream_size_4);
  signed int return_value_fseeko_5;
  return_value_fseeko_5=fseeko(gInFile, *pos, 0);
  if(return_value_fseeko_5 == -1)
    die("Error seeking to beginning of stream");

  enum anonymous_3 return_value_lzma_index_stream_flags_6;
  return_value_lzma_index_stream_flags_6=lzma_index_stream_flags(index, &flags);
  if(!((signed int)return_value_lzma_index_stream_flags_6 == LZMA_OK))
    die("Error setting stream flags");

  enum anonymous_3 return_value_lzma_index_stream_padding_7;
  return_value_lzma_index_stream_padding_7=lzma_index_stream_padding(index, (unsigned long int)pad);
  if(!((signed int)return_value_lzma_index_stream_padding_7 == LZMA_OK))
    die("Error setting stream padding");

  return index;
}

// num_threads
// file pixz.h line 68
unsigned long int num_threads(void)
{
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(84);
  return (unsigned long int)return_value_sysconf_1;
}

// pipeline_create
// file common.c line 453
void pipeline_create(void * (*create)(void), void (*destroy)(void *), void (*split)(void), void (*process)(unsigned long int))
{
  gPLFreer = destroy;
  gPLSplit = split;
  gPLProcess = process;
  gPipelineStartQ=queue_new(pipeline_qfree);
  gPipelineSplitQ=queue_new(pipeline_qfree);
  gPipelineMergeQ=queue_new(pipeline_qfree);
  gPLSplitSeq = (signed long int)0;
  gPLMergeSeq = (signed long int)0;
  gPLMergedItems = (struct pipeline_item_t *)(void *)0;
  gPLProcessCount=num_threads();
  if(gPipelineProcessMax >= 1ul && !(gPipelineProcessMax >= gPLProcessCount))
    gPLProcessCount = gPipelineProcessMax;

  void *return_value_malloc_1;
  return_value_malloc_1=malloc(gPLProcessCount * sizeof(unsigned long int) /*8ul*/ );
  gPLProcessThreads = (unsigned long int *)return_value_malloc_1;
  signed int qsize;
  double tmp_if_expr_3;
  double return_value_ceil_2;
  if(!(gPipelineQSize == 0ul))
    tmp_if_expr_3 = (double)gPipelineQSize;

  else
  {
    return_value_ceil_2=ceil((double)gPLProcessCount * 1.3 + (double)1);
    tmp_if_expr_3 = return_value_ceil_2;
  }
  qsize = (signed int)tmp_if_expr_3;
  if(!((unsigned long int)qsize >= gPLProcessCount))
    fprintf(stderr, "Warning: queue size is less than thread count, performance will suffer!\n");

  unsigned long int i = (unsigned long int)0;
  if(!(i >= (unsigned long int)qsize))
  {
    struct pipeline_item_t *item;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(struct pipeline_item_t) /*24ul*/ );
    item = (struct pipeline_item_t *)return_value_malloc_4;
    item->data=create();
    queue_push(gPipelineStartQ, PIPELINE_ITEM, (void *)item);
    i = i + 1ul;
  }

  unsigned long int pipeline_create__1__3__i = (unsigned long int)0;
  for( ; !(pipeline_create__1__3__i >= gPLProcessCount); pipeline_create__1__3__i = pipeline_create__1__3__i + 1ul)
  {
    signed int return_value_pthread_create_5;
    return_value_pthread_create_5=pthread_create(&gPLProcessThreads[(signed long int)pipeline_create__1__3__i], (const union pthread_attr_t *)(void *)0, pipeline_thread_process, (void *)(unsigned long int)pipeline_create__1__3__i);
    if(!(return_value_pthread_create_5 == 0))
      die("Error creating encode thread");

  }
  signed int return_value_pthread_create_6;
  return_value_pthread_create_6=pthread_create(&gPLSplitThread, (const union pthread_attr_t *)(void *)0, pipeline_thread_split, (void *)0);
  if(!(return_value_pthread_create_6 == 0))
    die("Error creating read thread");

}

// pipeline_destroy
// file common.c line 534
void pipeline_destroy(void)
{
  signed int return_value_pthread_join_1;
  return_value_pthread_join_1=pthread_join(gPLSplitThread, (void **)(void *)0);
  if(!(return_value_pthread_join_1 == 0))
    die("Error joining splitter thread");

  queue_free(gPipelineStartQ);
  queue_free(gPipelineSplitQ);
  queue_free(gPipelineMergeQ);
  free((void *)gPLProcessThreads);
}

// pipeline_dispatch
// file common.c line 544
void pipeline_dispatch(struct pipeline_item_t *item, struct anonymous *q)
{
  signed long int tmp_post_1 = gPLSplitSeq;
  gPLSplitSeq = gPLSplitSeq + 1l;
  item->seq = (unsigned long int)tmp_post_1;
  item->next = (struct pipeline_item_t *)(void *)0;
  queue_push(q, PIPELINE_ITEM, (void *)item);
}

// pipeline_merged
// file common.c line 554
struct pipeline_item_t * pipeline_merged()
{
  struct pipeline_item_t *item;
  while((_Bool)1)
  {
    if(!(gPLMergedItems == ((struct pipeline_item_t *)NULL)))
    {
      if(gPLMergedItems->seq == (unsigned long int)gPLMergeSeq)
        goto __CPROVER_DUMP_L6;

    }

    enum anonymous_1 tag;
    signed int return_value_queue_pop_1;
    return_value_queue_pop_1=queue_pop(gPipelineMergeQ, (void **)&item);
    tag = (enum anonymous_1)return_value_queue_pop_1;
    if((signed int)tag == PIPELINE_STOP)
      return (struct pipeline_item_t *)(void *)0;

    struct pipeline_item_t **prev = &gPLMergedItems;
    for( ; !(*prev == ((struct pipeline_item_t *)NULL)); prev = &(*prev)->next)
      if((*prev)->seq >= item->seq)
        break;

    item->next = *prev;
    *prev = item;
  }

__CPROVER_DUMP_L6:
  ;
  item = gPLMergedItems;
  gPLMergedItems = item->next;
  gPLMergeSeq = gPLMergeSeq + 1l;
  return item;
}

// pipeline_qfree
// file common.c line 497
static void pipeline_qfree(signed int type, void *p)
{
  struct pipeline_item_t *item;
  switch(type)
  {
    case PIPELINE_ITEM:
    {
      item = (struct pipeline_item_t *)p;
      gPLFreer(item->data);
    }
    case PIPELINE_STOP:
      break;
    default:
      die("Unknown msg type %d", type);
  }
}

// pipeline_split
// file common.c line 550
void pipeline_split(struct pipeline_item_t *item)
{
  pipeline_dispatch(item, gPipelineSplitQ);
}

// pipeline_stop
// file common.c line 523
void pipeline_stop(void)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= gPLProcessCount); i = i + 1ul)
    queue_push(gPipelineSplitQ, PIPELINE_STOP, (void *)0);
  unsigned long int pipeline_stop__1__2__i = (unsigned long int)0;
  for( ; !(pipeline_stop__1__2__i >= gPLProcessCount); pipeline_stop__1__2__i = pipeline_stop__1__2__i + 1ul)
  {
    signed int return_value_pthread_join_1;
    return_value_pthread_join_1=pthread_join(gPLProcessThreads[(signed long int)pipeline_stop__1__2__i], (void **)(void *)0);
    if(!(return_value_pthread_join_1 == 0))
      die("Error joining processing thread");

  }
  queue_push(gPipelineMergeQ, PIPELINE_STOP, (void *)0);
}

// pipeline_thread_process
// file common.c line 517
static void * pipeline_thread_process(void *arg)
{
  unsigned long int thnum = (unsigned long int)arg;
  gPLProcess(thnum);
  return (void *)0;
}

// pipeline_thread_split
// file common.c line 512
static void * pipeline_thread_split(void *ignore)
{
  gPLSplit();
  return (void *)0;
}

// pixz_list
// file list.c line 5
void pixz_list(_Bool tar)
{
  _Bool return_value_decode_index_1;
  return_value_decode_index_1=decode_index();
  if(return_value_decode_index_1 == (_Bool)0)
    die("Can't list non-seekable input");

  struct anonymous_13 iter;
  lzma_index_iter_init(&iter, gIndex);
  _Bool tmp_if_expr_4;
  unsigned long int return_value_read_file_index_3;
  if(!(tar == (_Bool)0))
  {
    return_value_read_file_index_3=read_file_index();
    tmp_if_expr_4 = return_value_read_file_index_3 != 0ul ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  unsigned char return_value_lzma_index_iter_next_2;
  if(tmp_if_expr_4)
  {
    dump_file_index(stdout, (_Bool)0);
    free_file_index();
  }

  else
    do
    {
      return_value_lzma_index_iter_next_2=lzma_index_iter_next(&iter, (enum anonymous_26)LZMA_INDEX_ITER_BLOCK);
      if(!(return_value_lzma_index_iter_next_2 == 0))
        break;

      printf("%9lu / %9lu\n", (unsigned long int)iter.block.unpadded_size, (unsigned long int)iter.block.uncompressed_size);
    }
    while((_Bool)1);
  lzma_index_end(gIndex, (struct anonymous_6 *)(void *)0);
  lzma_end(&gStream);
}

// pixz_read
// file pixz.h line 52
void pixz_read(_Bool verify, unsigned long int nspecs, char **specs)
{
  _Bool return_value_decode_index_1;
  return_value_decode_index_1=decode_index();
  if(!(return_value_decode_index_1 == (_Bool)0))
  {
    if(!(verify == (_Bool)0))
      gFileIndexOffset=read_file_index();

    wanted_files(nspecs, specs);
    gExplicitFiles = (_Bool)nspecs;
  }

  pipeline_create(block_create, block_free, gIndex != ((struct lzma_index_s *)NULL) ? read_thread : read_thread_noindex, decode_thread);
  if(!(gFileIndexOffset == 0ul) && !(verify == (_Bool)0))
  {
    gArWanted = gWantedFiles;
    struct wanted_t *w = gWantedFiles;
    struct wanted_t *wlast = (struct wanted_t *)(void *)0;
    _Bool lastmulti = (_Bool)0;
    signed long int lastoff = (signed long int)0;
    struct archive *ar;
    ar=archive_read_new();
    archive_read_support_filter_none(ar);
    archive_read_support_format_tar(ar);
    archive_read_open(ar, (void *)0, tar_ok, tar_read, tar_ok);
    struct archive_entry *entry;
    while((_Bool)1)
    {
      signed int aerr;
      aerr=archive_read_next_header(ar, &entry);
      if(aerr == 1)
        break;

      else
        if(!(aerr == 0) && !(aerr == -20))
        {
          const char *return_value_archive_error_string_2;
          return_value_archive_error_string_2=archive_error_string(ar);
          fprintf(stderr, "%s\n", return_value_archive_error_string_2);
          die("Error reading archive entry");
        }

      signed long int off;
      off=archive_read_header_position(ar);
      const char *path;
      path=archive_entry_pathname(entry);
      if(lastmulti == (_Bool)0)
      {
        if(!(wlast == ((struct wanted_t *)NULL)))
        {
          if(!(wlast->size == (unsigned long int)off + -((unsigned long int)lastoff)))
            die("Index and archive show differing sizes for %s: %d vs %d", wlast->name, wlast->size, off - lastoff);

        }

        lastoff = off;
      }

      lastmulti=is_multi_header(path);
      if(lastmulti == (_Bool)0)
      {
        if(w == ((struct wanted_t *)NULL))
          die("File %s missing in index", path);

        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(path, w->name);
        if(!(return_value_strcmp_3 == 0))
          die("Index and archive differ as to next file: %s vs %s", w->name, path);

        wlast = w;
        w = w->next;
      }

    }
    archive_read_free(ar);
    if(!(w == ((struct wanted_t *)NULL)))
    {
      if(!(w->name == ((char *)NULL)))
        die("File %s missing in archive", w->name);

    }

    tar_write_last();
  }

  _Bool return_value_taste_file_index_4;
  if(gExplicitFiles == (_Bool)0)
  {
    _Bool start = !(gIndex != ((struct lzma_index_s *)NULL)) && verify != (_Bool)0;
    _Bool tar = (_Bool)0;
    _Bool all_sized = (_Bool)1;
    _Bool skipping = (_Bool)0;
    struct pipeline_item_t *pi;
    do
    {
      pi=pipeline_merged();
      if(pi == ((struct pipeline_item_t *)NULL))
        break;

      struct anonymous_4 *ib = (struct anonymous_4 *)pi->data;
      if(!(skipping == (_Bool)0))
      {
        if(!((signed int)ib->btype == BLOCK_CONTINUATION))
        {
          fprintf(stderr, "Warning: File index heuristic failed, use -t flag.\n");
          skipping = (_Bool)0;
        }

      }

      if(skipping == (_Bool)0 && start == (_Bool)0 && !(all_sized == (_Bool)0) && !(tar == (_Bool)0))
      {
        if((signed int)ib->btype == BLOCK_UNSIZED)
        {
          return_value_taste_file_index_4=taste_file_index(ib);
          if(!(return_value_taste_file_index_4 == (_Bool)0))
            skipping = (_Bool)1;

        }

      }

      if(!(start == (_Bool)0))
      {
        tar=taste_tar(ib);
        start = (_Bool)0;
      }

      if((signed int)ib->btype == BLOCK_UNSIZED)
        all_sized = (_Bool)0;

      if(skipping == (_Bool)0)
      {
        unsigned long int return_value_fwrite_5;
        return_value_fwrite_5=fwrite((const void *)ib->output, ib->outsize, (unsigned long int)1, gOutFile);
        if(!(return_value_fwrite_5 == 1ul))
          die("Can't write block");

      }

      queue_push(gPipelineStartQ, PIPELINE_ITEM, (void *)pi);
    }
    while((_Bool)1);
  }

  pipeline_destroy();
  wanted_free(gWantedFiles);
}

// pixz_write
// file pixz.h line 51
void pixz_write(_Bool tar, unsigned int level)
{
  gTar = tar;
  struct anonymous_22 lzma_opts;
  unsigned char return_value_lzma_lzma_preset_1;
  return_value_lzma_lzma_preset_1=lzma_lzma_preset(&lzma_opts, level);
  if(!(return_value_lzma_lzma_preset_1 == 0))
    die("Error setting lzma options");

  gFilters[(signed long int)0] = (struct anonymous_15){ .id=0x21UL, .options=(void *)&lzma_opts };
  gFilters[(signed long int)1] = (struct anonymous_15){ .id=18446744073709551615UL, .options=(void *)0 };
  gBlockInSize = (unsigned long int)((double)lzma_opts.dict_size * gBlockFraction);
  if(!(gBlockInSize >= 1ul))
    die("Block size must be positive");

  gBlockOutSize=lzma_block_buffer_bound(gBlockInSize);
  pipeline_create((void * (*)(void))block_create_link1, block_free_link1, (void (*)(void))read_thread_link1, encode_thread);
  gIndex=lzma_index_init((struct anonymous_6 *)(void *)0);
  if(gIndex == ((struct lzma_index_s *)NULL))
    die("Error creating index");

  stream_edge(18446744073709551615UL);
  while((_Bool)1)
  {
    struct pipeline_item_t *pi;
    pi=pipeline_merged();
    if(pi == ((struct pipeline_item_t *)NULL))
      break;

    write_block(pi);
    queue_push(gPipelineStartQ, PIPELINE_ITEM, (void *)pi);
  }
  if(!(gTar == (_Bool)0))
    write_file_index();

  free_file_index();
  encode_index();
  unsigned long int return_value_lzma_index_size_2;
  return_value_lzma_index_size_2=lzma_index_size(gIndex);
  stream_edge(return_value_lzma_index_size_2);
  lzma_index_end(gIndex, (struct anonymous_6 *)(void *)0);
  fclose(gOutFile);
  pipeline_destroy();
}

// queue_free
// file common.c line 377
void queue_free(struct anonymous *q)
{
  struct queue_item_t *i = q->first;
  while(!(i == ((struct queue_item_t *)NULL)))
  {
    struct queue_item_t *tmp = i->next;
    if(!(q->freer == ((void (*)(signed int, void *))NULL)))
      q->freer(i->type, i->data);

    free((void *)i);
    i = tmp;
  }
  pthread_mutex_destroy(&q->mutex);
  pthread_cond_destroy(&q->pop_cond);
  free((void *)q);
}

// queue_new
// file common.c line 368
struct anonymous * queue_new(void (*freer)(signed int, void *))
{
  struct anonymous *q;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous) /*112ul*/ );
  q = (struct anonymous *)return_value_malloc_1;
  q->last = (struct queue_item_t *)(void *)0;
  q->first = q->last;
  q->freer = freer;
  pthread_mutex_init(&q->mutex, (const union anonymous_28 *)(void *)0);
  pthread_cond_init(&q->pop_cond, (const union anonymous_28 *)(void *)0);
  return q;
}

// queue_pop
// file common.c line 409
signed int queue_pop(struct anonymous *q, void **datap)
{
  pthread_mutex_lock(&q->mutex);
  while(q->first == ((struct queue_item_t *)NULL))
    pthread_cond_wait(&q->pop_cond, &q->mutex);
  struct queue_item_t *i = q->first;
  q->first = i->next;
  if(q->first == ((struct queue_item_t *)NULL))
    q->last = (struct queue_item_t *)(void *)0;

  *datap = i->data;
  signed int type = i->type;
  free((void *)i);
  pthread_mutex_unlock(&q->mutex);
  return type;
}

// queue_push
// file common.c line 390
void queue_push(struct anonymous *q, signed int type, void *data)
{
  pthread_mutex_lock(&q->mutex);
  struct queue_item_t *i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct queue_item_t) /*24ul*/ );
  i = (struct queue_item_t *)return_value_malloc_1;
  i->type = type;
  i->data = data;
  i->next = (struct queue_item_t *)(void *)0;
  if(!(q->last == ((struct queue_item_t *)NULL)))
    q->last->next = i;

  else
    q->first = i;
  q->last = i;
  pthread_cond_signal(&q->pop_cond);
  pthread_mutex_unlock(&q->mutex);
}

// rbuf_consume
// file read.c line 336
static void rbuf_consume(unsigned long int bytes)
{
  if(!(bytes >= gRbuf->insize))
    memmove((void *)gRbuf->input, (const void *)(gRbuf->input + (signed long int)bytes), gRbuf->insize - bytes);

  gRbuf->insize = gRbuf->insize - bytes;
}

// rbuf_cycle
// file read.c line 325
static _Bool rbuf_cycle(struct anonymous_5 *stream, _Bool start, unsigned long int skip)
{
  if(start == (_Bool)0)
  {
    rbuf_consume(gRbuf->insize);
    enum anonymous_11 return_value_rbuf_read_1;
    return_value_rbuf_read_1=rbuf_read((unsigned long int)4096);
    if(!((signed int)return_value_rbuf_read_1 >= RBUF_PART))
      return (_Bool)0;

  }

  stream->next_in = gRbuf->input + (signed long int)skip;
  stream->avail_in = gRbuf->insize - skip;
  return (_Bool)1;
}

// rbuf_dispatch
// file read.c line 342
static void rbuf_dispatch(void)
{
  pipeline_split(gRbufPI);
  gRbufPI = (struct pipeline_item_t *)(void *)0;
  gRbuf = (struct anonymous_4 *)(void *)0;
}

// rbuf_read
// file read.c line 305
static enum anonymous_11 rbuf_read(unsigned long int bytes)
{
  if(gRbufPI == ((struct pipeline_item_t *)NULL))
  {
    queue_pop(gPipelineStartQ, (void **)&gRbufPI);
    gRbuf = (struct anonymous_4 *)gRbufPI->data;
    gRbuf->outsize = (unsigned long int)0;
    gRbuf->insize = gRbuf->outsize;
  }

  if(gRbuf->insize >= bytes)
    return (enum anonymous_11)RBUF_FULL;

  else
  {
    block_capacity(gRbuf, bytes, (unsigned long int)0);
    unsigned long int r;
    r=fread((void *)(gRbuf->input + (signed long int)gRbuf->insize), (unsigned long int)1, bytes - gRbuf->insize, gInFile);
    gRbuf->insize = gRbuf->insize + r;
    if(!(r == 0ul))
      return (enum anonymous_11)(gRbuf->insize == bytes ? RBUF_FULL : RBUF_PART);

    else
    {
      signed int return_value_feof_1;
      return_value_feof_1=feof(gInFile);
      return (enum anonymous_11)(return_value_feof_1 != 0 ? RBUF_EOF : RBUF_ERR);
    }
  }
}

// read_block
// file read.c line 366
static _Bool read_block(_Bool force_stream, enum anonymous_12 check, signed long int uoffset)
{
  struct anonymous_15 filters[5l];
  struct anonymous_16 block = { .version=(unsigned int)0, .header_size=0u, .check=check,
    .compressed_size=0ul, .uncompressed_size=0ul, .filters=filters,
    .raw_check={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .reserved_ptr1=NULL,
    .reserved_ptr2=NULL, .reserved_ptr3=NULL,
    .reserved_int1=0u, .reserved_int2=0u,
    .reserved_int3=0ul, .reserved_int4=0ul,
    .reserved_int5=0ul, .reserved_int6=0ul,
    .reserved_int7=0ul, .reserved_int8=0ul,
    .reserved_enum1=(enum anonymous_7)0, .reserved_enum2=(enum anonymous_7)0,
    .reserved_enum3=(enum anonymous_7)0,
    .reserved_enum4=(enum anonymous_7)0,
    .reserved_bool1=0,
    .reserved_bool2=0, .reserved_bool3=0,
    .reserved_bool4=0, .reserved_bool5=0,
    .reserved_bool6=0, .reserved_bool7=0,
    .reserved_bool8=0 };
  enum anonymous_11 return_value_rbuf_read_1;
  return_value_rbuf_read_1=rbuf_read((unsigned long int)1);
  if(!((signed int)return_value_rbuf_read_1 == RBUF_FULL))
    die("Error reading block header size");

  if((signed int)*gRbuf->input == 0)
    return (_Bool)0;

  else
  {
    block.header_size = ((unsigned int)gRbuf->input[(signed long int)0] + (unsigned int)1) * (unsigned int)4;
    if(block.header_size >= 1025u)
      die("Block header size too large");

    enum anonymous_11 return_value_rbuf_read_2;
    return_value_rbuf_read_2=rbuf_read((unsigned long int)block.header_size);
    if(!((signed int)return_value_rbuf_read_2 == RBUF_FULL))
      die("Error reading block header");

    enum anonymous_3 return_value_lzma_block_header_decode_3;
    return_value_lzma_block_header_decode_3=lzma_block_header_decode(&block, (struct anonymous_6 *)(void *)0, gRbuf->input);
    if(!((signed int)return_value_lzma_block_header_decode_3 == LZMA_OK))
      die("Error decoding block header");

    unsigned long int comp = block.compressed_size;
    unsigned long int outsize = block.uncompressed_size;
    _Bool sized = comp != 18446744073709551615UL && outsize != 18446744073709551615UL;
    if(sized == (_Bool)0 || outsize >= 134217729ul || !(force_stream == (_Bool)0))
      read_streaming(&block, (enum anonymous_2)(sized != (_Bool)0 ? BLOCK_SIZED : BLOCK_UNSIZED), uoffset);

    else
    {
      block_capacity(gRbuf, (unsigned long int)0, outsize);
      gRbuf->outsize = outsize;
      gRbuf->check = check;
      gRbuf->btype = (enum anonymous_2)BLOCK_SIZED;
      unsigned long int return_value_lzma_block_total_size_4;
      return_value_lzma_block_total_size_4=lzma_block_total_size(&block);
      enum anonymous_11 return_value_rbuf_read_5;
      return_value_rbuf_read_5=rbuf_read(return_value_lzma_block_total_size_4);
      if(!((signed int)return_value_rbuf_read_5 == RBUF_FULL))
        die("Error reading block contents");

      rbuf_dispatch();
    }
    return (_Bool)1;
  }
}

// read_file_index
// file common.c line 156
unsigned long int read_file_index(void)
{
  void *bdata = (void *)0;
  unsigned long int offset;
  offset=find_file_index(&bdata);
  char *tmp_if_expr_4;
  char *return_value_xstrdup_3;
  if(offset == 0ul)
    return (unsigned long int)0;

  else
  {
    while((_Bool)1)
    {
      char *name;
      name=read_file_index_name();
      if(name == ((char *)NULL))
        break;

      struct file_index_t *f;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct file_index_t) /*24ul*/ );
      f = (struct file_index_t *)return_value_malloc_1;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(name);
      if(!(return_value_strlen_2 == 0ul))
      {
        return_value_xstrdup_3=xstrdup(name);
        tmp_if_expr_4 = return_value_xstrdup_3;
      }

      else
        tmp_if_expr_4 = (char *)(void *)0;
      f->name = tmp_if_expr_4;
      unsigned long int return_value_xle64dec_5;
      return_value_xle64dec_5=xle64dec(gFileIndexBuf + (signed long int)gFIBPos);
      f->offset = (signed long int)return_value_xle64dec_5;
      gFIBPos = gFIBPos + sizeof(unsigned long int) /*8ul*/ ;
      if(!(gLastFile == ((struct file_index_t *)NULL)))
        gLastFile->next = f;

      else
        gFileIndex = f;
      gLastFile = f;
    }
    free((void *)gFileIndexBuf);
    lzma_end(&gStream);
    free(bdata);
    return offset;
  }
}

// read_file_index_data
// file common.c line 230
static void read_file_index_data(void)
{
  gStream.next_out = (gFileIndexBuf + (signed long int)gFIBSize) - (signed long int)gStream.avail_out;
  while(!(gStream.avail_out == 0ul) && !((signed int)gFIBErr == LZMA_STREAM_END))
  {
    if(gStream.avail_in == 0ul)
    {
      gStream.avail_in=fread((void *)gFIBInputBuf, (unsigned long int)1, (unsigned long int)4096, gInFile);
      signed int return_value_ferror_1;
      return_value_ferror_1=ferror(gInFile);
      if(!(return_value_ferror_1 == 0))
        die("Error reading file index data");

      gStream.next_in = gFIBInputBuf;
    }

    gFIBErr=lzma_code(&gStream, (enum anonymous_19)LZMA_RUN);
    if(!((signed int)gFIBErr == LZMA_OK) && !((signed int)gFIBErr == LZMA_STREAM_END))
      die("Error decoding file index data");

  }
}

// read_file_index_make_space
// file common.c line 204
static void read_file_index_make_space(void)
{
  _Bool expand = gFIBPos == (unsigned long int)0;
  if(!(gFIBPos == 0ul))
  {
    unsigned long int move = (gFIBSize - gStream.avail_out) - gFIBPos;
    memmove((void *)gFileIndexBuf, (const void *)(gFileIndexBuf + (signed long int)gFIBPos), move);
    gMoved = gMoved + move;
    gStream.avail_out = gStream.avail_out + gFIBPos;
    gFIBPos = (unsigned long int)0;
  }

  if(gMoved >= gFIBSize || !(expand == (_Bool)0))
  {
    gStream.avail_out = gStream.avail_out + gFIBSize;
    gFIBSize = gFIBSize * (unsigned long int)2;
    unsigned char *new_gFileIndexBuf;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)gFileIndexBuf, gFIBSize);
    new_gFileIndexBuf = (unsigned char *)return_value_realloc_1;
    if(new_gFileIndexBuf == ((unsigned char *)NULL))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      die("memory re-allocation failure: %s", return_value_strerror_3);
    }

    else
      gFileIndexBuf = new_gFileIndexBuf;
  }

}

// read_file_index_name
// file common.c line 186
static char * read_file_index_name(void)
{
  _Bool tmp_if_expr_2;
  void *return_value_memchr_1;
  while((_Bool)1)
  {
    unsigned char *eos;
    unsigned char *haystack = gFileIndexBuf + (signed long int)gFIBPos;
    signed long int len = (signed long int)(((gFIBSize - gStream.avail_out) - gFIBPos) - sizeof(unsigned long int) /*8ul*/ );
    if(len >= 1l)
    {
      return_value_memchr_1=memchr((const void *)haystack, 0, (unsigned long int)len);
      eos = (unsigned char *)return_value_memchr_1;
      tmp_if_expr_2 = eos != ((unsigned char *)NULL) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      gFIBPos = gFIBPos + (unsigned long int)((eos - haystack) + (signed long int)1);
      return (char *)haystack;
    }

    else
      if((signed int)gFIBErr == LZMA_STREAM_END)
        return (char *)(void *)0;

      else
      {
        if(gStream.avail_out == 0ul)
          read_file_index_make_space();

        read_file_index_data();
      }
  }
}

// read_footer
// file read.c line 464
static void read_footer(void)
{
  struct anonymous_8 stream_flags;
  enum anonymous_11 return_value_rbuf_read_1;
  return_value_rbuf_read_1=rbuf_read((unsigned long int)12);
  if(!((signed int)return_value_rbuf_read_1 == RBUF_FULL))
    die("Error reading stream footer");

  enum anonymous_3 return_value_lzma_stream_footer_decode_2;
  return_value_lzma_stream_footer_decode_2=lzma_stream_footer_decode(&stream_flags, gRbuf->input);
  if(!((signed int)return_value_lzma_stream_footer_decode_2 == LZMA_OK))
    die("Error decoding XZ footer");

  rbuf_consume((unsigned long int)12);
  char zeros[4l] = { 0, 0, 0, 0 };
  while((_Bool)1)
  {
    enum anonymous_11 st;
    st=rbuf_read((unsigned long int)4);
    if((signed int)st == RBUF_EOF)
      goto __CPROVER_DUMP_L8;

    if(!((signed int)st == RBUF_FULL))
      die("Footer must be multiple of four bytes");

    signed int return_value_memcmp_3;
    return_value_memcmp_3=memcmp((const void *)zeros, (const void *)gRbuf->input, (unsigned long int)4);
    if(!(return_value_memcmp_3 == 0))
      goto __CPROVER_DUMP_L8;

    rbuf_consume((unsigned long int)4);
  }

__CPROVER_DUMP_L8:
  ;
}

// read_header
// file read.c line 349
static _Bool read_header(enum anonymous_12 *check)
{
  struct anonymous_8 stream_flags;
  enum anonymous_11 st;
  st=rbuf_read((unsigned long int)12);
  if((signed int)st == RBUF_EOF)
    return (_Bool)0;

  else
    if(!((signed int)st == RBUF_FULL))
      die("Error reading stream header");

  enum anonymous_3 err;
  err=lzma_stream_header_decode(&stream_flags, gRbuf->input);
  if((signed int)err == LZMA_FORMAT_ERROR)
    die("Not an XZ file");

  else
    if(!((signed int)err == LZMA_OK))
      die("Error decoding XZ header");

  *check = stream_flags.check;
  rbuf_consume((unsigned long int)12);
  return (_Bool)1;
}

// read_index
// file read.c line 445
static void read_index(void)
{
  struct anonymous_5 stream = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
  struct lzma_index_s *index;
  enum anonymous_3 return_value_lzma_index_decoder_1;
  return_value_lzma_index_decoder_1=lzma_index_decoder(&stream, &index, 64ULL * (unsigned long int)1024 * (unsigned long int)1024 * (unsigned long int)1024);
  if(!((signed int)return_value_lzma_index_decoder_1 == LZMA_OK))
    die("Error initializing index decoder");

  rbuf_cycle(&stream, (_Bool)1, (unsigned long int)0);
  enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
  _Bool return_value_rbuf_cycle_2;
  while(!((signed int)err == LZMA_STREAM_END))
  {
    if(!((signed int)err == LZMA_OK))
      die("Error decoding index");

    if(stream.avail_in == 0ul)
    {
      return_value_rbuf_cycle_2=rbuf_cycle(&stream, (_Bool)0, (unsigned long int)0);
      if(return_value_rbuf_cycle_2 == (_Bool)0)
        die("Error reading index");

    }

    err=lzma_code(&stream, (enum anonymous_19)LZMA_RUN);
  }
  rbuf_consume(gRbuf->insize - stream.avail_in);
  lzma_end(&stream);
}

// read_streaming
// file read.c line 400
static void read_streaming(struct anonymous_16 *block, enum anonymous_2 sized, signed long int uoffset)
{
  struct anonymous_5 stream = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_6 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_7)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_7)LZMA_RESERVED_ENUM };
  enum anonymous_3 return_value_lzma_block_decoder_1;
  return_value_lzma_block_decoder_1=lzma_block_decoder(&stream, block);
  if(!((signed int)return_value_lzma_block_decoder_1 == LZMA_OK))
    die("Error initializing streaming block decode");

  rbuf_cycle(&stream, (_Bool)1, (unsigned long int)block->header_size);
  stream.avail_out = (unsigned long int)0;
  _Bool first = (_Bool)1;
  struct pipeline_item_t *pi = (struct pipeline_item_t *)(void *)0;
  struct anonymous_4 *ib = (struct anonymous_4 *)(void *)0;
  enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
  _Bool return_value_rbuf_cycle_2;
  while(!((signed int)err == LZMA_STREAM_END))
  {
    if(!((signed int)err == LZMA_OK))
      die("Error decoding streaming block");

    if(stream.avail_out == 0ul)
    {
      if(!(ib == ((struct anonymous_4 *)NULL)))
      {
        ib->outsize = ib->outcap;
        ib->uoffset = uoffset;
        uoffset = uoffset + (signed long int)ib->outsize;
        pipeline_dispatch(pi, gPipelineMergeQ);
        first = (_Bool)0;
      }

      queue_pop(gPipelineStartQ, (void **)&pi);
      ib = (struct anonymous_4 *)pi->data;
      ib->btype = (enum anonymous_2)(first != (_Bool)0 ? (signed int)sized : BLOCK_CONTINUATION);
      block_capacity(ib, (unsigned long int)0, (unsigned long int)(1024 * 1024));
      stream.next_out = ib->output;
      stream.avail_out = ib->outcap;
    }

    if(stream.avail_in == 0ul)
    {
      return_value_rbuf_cycle_2=rbuf_cycle(&stream, (_Bool)0, (unsigned long int)0);
      if(return_value_rbuf_cycle_2 == (_Bool)0)
        die("Error reading streaming block");

    }

    err=lzma_code(&stream, (enum anonymous_19)LZMA_RUN);
  }
  if(!(ib == ((struct anonymous_4 *)NULL)))
  {
    if(!(stream.avail_out == ib->outcap))
    {
      ib->outsize = ib->outcap - stream.avail_out;
      pipeline_dispatch(pi, gPipelineMergeQ);
    }

  }

  rbuf_consume(gRbuf->insize - stream.avail_in);
  lzma_end(&stream);
}

// read_thread
// file read.c line 500
static void read_thread(void)
{
  signed long int offset;
  offset=ftello(gInFile);
  struct wanted_t *w = gWantedFiles;
  struct anonymous_13 iter;
  lzma_index_iter_init(&iter, gIndex);
  unsigned char return_value_lzma_index_iter_next_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  do
  {
    return_value_lzma_index_iter_next_1=lzma_index_iter_next(&iter, (enum anonymous_26)LZMA_INDEX_ITER_BLOCK);
    if(!(return_value_lzma_index_iter_next_1 == 0))
      break;

    signed long int boffset = (signed long int)iter.block.compressed_file_offset;
    unsigned long int bsize = iter.block.total_size;
    if(!((unsigned long int)boffset == gFileIndexOffset) || gFileIndexOffset == 0ul)
    {
      if(!(gWantedFiles == ((struct wanted_t *)NULL)) && !(gExplicitFiles == (_Bool)0))
      {
        signed long int uend = (signed long int)(iter.block.uncompressed_file_offset + iter.block.uncompressed_size);
        if(w == ((struct wanted_t *)NULL))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = w->start >= uend ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          continue;

        do
        {
          if(!(w == ((struct wanted_t *)NULL)))
            tmp_if_expr_3 = w->end < uend ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_3 = (_Bool)0;
          if(!tmp_if_expr_3)
            break;

          w = w->next;
        }
        while((_Bool)1);
      }

      if(!(offset == boffset))
      {
        fseeko(gInFile, boffset, 0);
        offset = boffset;
      }

      if(iter.block.uncompressed_size >= 134217729ul)
      {
        if(!(gRbuf == ((struct anonymous_4 *)NULL)))
          rbuf_consume(gRbuf->insize);

        read_block((_Bool)1, iter.stream.flags->check, (signed long int)iter.block.uncompressed_file_offset);
      }

      else
      {
        struct pipeline_item_t *pi;
        queue_pop(gPipelineStartQ, (void **)&pi);
        struct anonymous_4 *ib = (struct anonymous_4 *)pi->data;
        block_capacity(ib, iter.block.unpadded_size, iter.block.uncompressed_size);
        ib->insize=fread((void *)ib->input, (unsigned long int)1, bsize, gInFile);
        if(!(ib->insize >= bsize))
          die("Error reading block contents");

        offset = offset + (signed long int)bsize;
        ib->uoffset = (signed long int)iter.block.uncompressed_file_offset;
        ib->check = iter.stream.flags->check;
        ib->btype = (enum anonymous_2)BLOCK_SIZED;
        pipeline_split(pi);
      }
    }

  }
  while((_Bool)1);
  pipeline_stop();
}

// read_thread_link1
// file write.c line 133
static void read_thread_link1()
{
  if(!(gTar == (_Bool)0))
  {
    struct archive *ar;
    ar=archive_read_new();
    archive_read_support_filter_none(ar);
    archive_read_support_format_tar(ar);
    archive_read_support_format_raw(ar);
    archive_read_open(ar, (void *)0, tar_ok_link1, tar_read_link1, tar_ok_link1);
    struct archive_entry *entry;
    while((_Bool)1)
    {
      signed int aerr;
      aerr=archive_read_next_header(ar, &entry);
      if(aerr == 1)
        break;

      else
        if(!(aerr == 0) && !(aerr == -20))
        {
          const char *return_value_archive_error_string_1;
          return_value_archive_error_string_1=archive_error_string(ar);
          fprintf(stderr, "%s\n", return_value_archive_error_string_1);
          die("Error reading archive entry");
        }

      signed int return_value_archive_format_2;
      return_value_archive_format_2=archive_format(ar);
      if(return_value_archive_format_2 == 0x90000)
      {
        gTar = (_Bool)0;
        break;
      }

      signed long int return_value_archive_read_header_position_3;
      return_value_archive_read_header_position_3=archive_read_header_position(ar);
      const char *return_value_archive_entry_pathname_4;
      return_value_archive_entry_pathname_4=archive_entry_pathname(entry);
      add_file(return_value_archive_read_header_position_3, return_value_archive_entry_pathname_4);
    }
    signed long int return_value_archive_read_header_position_5;
    return_value_archive_read_header_position_5=archive_read_header_position(ar);
    if(return_value_archive_read_header_position_5 == 0l)
      gTar = (_Bool)0;

    archive_read_free(ar);
  }

  signed int return_value_feof_7;
  return_value_feof_7=feof(gInFile);
  signed long int return_value_tar_read_6;
  if(return_value_feof_7 == 0)
  {
    const void *dummy;
    do
    {
      return_value_tar_read_6=tar_read_link1((struct archive *)(void *)0, (void *)0, &dummy);
      if(return_value_tar_read_6 == 0l)
        break;

    }
    while((_Bool)1);
  }

  fclose(gInFile);
  if(!(gTar == (_Bool)0))
    add_file(gTotalRead, (const char *)(void *)0);

  if(!(gReadItem == ((struct pipeline_item_t *)NULL)))
  {
    if(!(gReadBlock->insize == 0ul))
      pipeline_split(gReadItem);

    else
      queue_push(gPipelineStartQ, PIPELINE_ITEM, (void *)gReadItem);
    gReadItem = (struct pipeline_item_t *)(void *)0;
  }

  pipeline_stop();
}

// read_thread_noindex
// file read.c line 485
static void read_thread_noindex(void)
{
  _Bool empty = (_Bool)1;
  enum anonymous_12 check = (enum anonymous_12)LZMA_CHECK_NONE;
  _Bool return_value_read_header_1;
  _Bool return_value_read_block_2;
  do
  {
    return_value_read_header_1=read_header(&check);
    if(return_value_read_header_1 == (_Bool)0)
      break;

    empty = (_Bool)0;
    do
    {
      return_value_read_block_2=read_block((_Bool)0, check, (signed long int)0);
      if(return_value_read_block_2 == (_Bool)0)
        break;

    }
    while((_Bool)1);
    read_index();
    read_footer();
  }
  while((_Bool)1);
  if(!(empty == (_Bool)0))
    die("Empty input");

  pipeline_stop();
}

// size_uncompressible
// file write.c line 283
static unsigned long int size_uncompressible(unsigned long int insize)
{
  unsigned long int chunks = insize / (unsigned long int)(1 << 16);
  if(!(insize % 65536ul == 0ul))
    chunks = chunks + 1ul;

  unsigned long int data_size = insize + chunks * (unsigned long int)3 + (unsigned long int)1;
  if(!(data_size % 4ul == 0ul))
    data_size = data_size + ((unsigned long int)4 - data_size % (unsigned long int)4);

  return data_size;
}

// spec_match
// file read.c line 225
static _Bool spec_match(char *spec, char *name)
{
  _Bool match = (_Bool)1;
  _Bool tmp_if_expr_1;
  for( ; !(*spec == 0); name = name + 1l)
  {
    if(*name == 0)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = *spec != *name ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      match = (_Bool)0;
      break;
    }

    spec = spec + 1l;
  }
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(!(match == (_Bool)0))
  {
    if(*name == 0)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)*name == 47 ? (_Bool)1 : (_Bool)0;
    tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  return tmp_if_expr_3;
}

// stream_edge
// file write.c line 408
static void stream_edge(unsigned long int backward_size)
{
  struct anonymous_8 flags = { .version=(unsigned int)0, .backward_size=backward_size, .check=(enum anonymous_12)LZMA_CHECK_CRC32,
    .reserved_enum1=(enum anonymous_7)0,
    .reserved_enum2=(enum anonymous_7)0,
    .reserved_enum3=(enum anonymous_7)0,
    .reserved_enum4=(enum anonymous_7)0,
    .reserved_bool1=0,
    .reserved_bool2=0, .reserved_bool3=0,
    .reserved_bool4=0, .reserved_bool5=0,
    .reserved_bool6=0, .reserved_bool7=0,
    .reserved_bool8=0, .reserved_int1=0u,
    .reserved_int2=0u };
  unsigned char buf[12l];
  enum anonymous_3 (*encoder)(const struct anonymous_8 *, unsigned char *) = backward_size == 18446744073709551615UL ? lzma_stream_header_encode : lzma_stream_footer_encode;
  enum anonymous_3 return_value;
  return_value=encoder(&flags, buf);
  if(!((signed int)return_value == LZMA_OK))
    die("Error encoding stream edge");

  unsigned long int return_value_fwrite_1;
  return_value_fwrite_1=fwrite((const void *)buf, (unsigned long int)12, (unsigned long int)1, gOutFile);
  if(!(return_value_fwrite_1 == 1ul))
    die("Error writing stream edge");

}

// stream_footer
// file common.c line 289
static void stream_footer(struct anonymous_17 *b, struct anonymous_8 *flags)
{
  unsigned char ftr[12l];
  signed int i = (signed int)(sizeof(unsigned char [12l]) /*12ul*/  / sizeof(unsigned int) /*4ul*/  - (unsigned long int)1);
  for( ; i >= 0; i = i - 1)
  {
    unsigned int *p;
    p=bw_read(b);
    if(p == ((unsigned int *)NULL))
      die("Error reading stream footer");

    ((unsigned int *)ftr)[(signed long int)i] = *p;
  }
  enum anonymous_3 return_value_lzma_stream_footer_decode_1;
  return_value_lzma_stream_footer_decode_1=lzma_stream_footer_decode(flags, ftr);
  if(!((signed int)return_value_lzma_stream_footer_decode_1 == LZMA_OK))
    die("Error decoding stream footer");

}

// stream_padding
// file common.c line 274
static signed long int stream_padding(struct anonymous_17 *b, signed long int pos)
{
  b->pos = pos;
  b->size = (unsigned long int)0;
  signed long int pad = (signed long int)0;
  for( ; (_Bool)1; pad = pad + (signed long int)sizeof(unsigned int) /*4ul*/ )
  {
    unsigned int *i;
    i=bw_read(b);
    if(i == ((unsigned int *)NULL))
      die("Error reading stream padding");

    if(!(*i == 0u))
    {
      b->size = b->size + sizeof(unsigned int) /*4ul*/ ;
      return pad;
    }

  }
}

// strsuf
// file pixz.c line 194
static _Bool strsuf(char *big, char *small)
{
  unsigned long int bl;
  bl=strlen(big);
  unsigned long int sl;
  sl=strlen(small);
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp((big + (signed long int)bl) - (signed long int)sl, small);
  return return_value_strcmp_1 == 0;
}

// subsuf
// file pixz.c line 199
static char * subsuf(char *in, char *suf1, char *suf2)
{
  _Bool return_value_strsuf_1;
  return_value_strsuf_1=strsuf(in, suf1);
  if(return_value_strsuf_1 == (_Bool)0)
    return (char *)(void *)0;

  else
  {
    unsigned long int li;
    li=strlen(in);
    unsigned long int l1;
    l1=strlen(suf1);
    unsigned long int l2;
    l2=strlen(suf2);
    char *r;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(((li + l2) - l1) + (unsigned long int)1);
    r = (char *)return_value_malloc_2;
    memcpy((void *)r, (const void *)in, li - l1);
    strcpy((r + (signed long int)li) - (signed long int)l1, suf2);
    return r;
  }
}

// tar_next_block
// file read.c line 605
static _Bool tar_next_block(void)
{
  if(gArNextItem == (_Bool)0 && !(gArItem == ((struct pipeline_item_t *)NULL)) && !(gArWanted == ((struct wanted_t *)NULL)) && !(gExplicitFiles == (_Bool)0))
  {
    struct anonymous_4 *ib = (struct anonymous_4 *)gArItem->data;
    if(!((unsigned long int)gArWanted->start >= ib->outsize + (unsigned long int)ib->uoffset))
      return (_Bool)1;

  }

  if(!(gArLastItem == ((struct pipeline_item_t *)NULL)))
    queue_push(gPipelineStartQ, PIPELINE_ITEM, (void *)gArLastItem);

  gArLastItem = gArItem;
  gArItem=pipeline_merged();
  gArNextItem = (_Bool)0;
  return (_Bool)gArItem;
}

// tar_ok
// file read.c line 601
static signed int tar_ok(struct archive *ar, void *ref)
{
  return 0;
}

// tar_ok_link1
// file write.c line 221
static signed int tar_ok_link1(struct archive *ar_link1, void *ref_link1)
{
  return 0;
}

// tar_read
// file read.c line 629
static signed long int tar_read(struct archive *ar, void *ref, const void **bufp)
{
  tar_write_last();
  _Bool return_value_tar_next_block_1;
  return_value_tar_next_block_1=tar_next_block();
  if(return_value_tar_next_block_1 == (_Bool)0)
    return (signed long int)0;

  else
  {
    signed long int off;
    unsigned long int size;
    struct anonymous_4 *ib = (struct anonymous_4 *)gArItem->data;
    if(!(gWantedFiles == ((struct wanted_t *)NULL)) && !(gExplicitFiles == (_Bool)0))
    {
      off = gArWanted->start - ib->uoffset;
      size = gArWanted->size;
      if(!(off >= 0l))
      {
        size = size + (unsigned long int)off;
        off = (signed long int)0;
      }

      if(!(ib->outsize >= size + (unsigned long int)off))
      {
        size = ib->outsize - (unsigned long int)off;
        gArNextItem = (_Bool)1;
      }

      else
        gArWanted = gArWanted->next;
    }

    else
    {
      off = (signed long int)0;
      size = ib->outsize;
    }
    gArLastOffset = off;
    gArLastSize = size;
    if(!(bufp == ((const void **)NULL)))
      *bufp = (const void *)(ib->output + off);

    return (signed long int)size;
  }
}

// tar_read_link1
// file write.c line 191
static signed long int tar_read_link1(struct archive *ar_link1, void *ref_link1, const void **bufp_link1)
{
  if(gReadItem == ((struct pipeline_item_t *)NULL))
  {
    queue_pop(gPipelineStartQ, (void **)&gReadItem);
    gReadBlock = (struct io_block_t *)gReadItem->data;
    block_alloc(gReadBlock, (enum anonymous_18)BLOCK_IN);
    gReadBlock->insize = (unsigned long int)0;
  }

  unsigned long int space = gBlockInSize - gReadBlock->insize;
  if(space >= 4097ul)
    space = (unsigned long int)4096;

  unsigned char *buf = gReadBlock->input + (signed long int)gReadBlock->insize;
  unsigned long int rd;
  rd=fread((void *)buf, (unsigned long int)1, space, gInFile);
  signed int return_value_ferror_1;
  return_value_ferror_1=ferror(gInFile);
  if(!(return_value_ferror_1 == 0))
    die("Error reading input file");

  gReadBlock->insize = gReadBlock->insize + rd;
  gTotalRead = gTotalRead + (signed long int)rd;
  *bufp_link1 = (const void *)buf;
  if(gReadBlock->insize == gBlockInSize)
  {
    pipeline_split(gReadItem);
    gReadItemCount = gReadItemCount + 1ul;
    gReadItem = (struct pipeline_item_t *)(void *)0;
  }

  return (signed long int)rd;
}

// tar_write_last
// file read.c line 620
static void tar_write_last(void)
{
  if(!(gArItem == ((struct pipeline_item_t *)NULL)))
  {
    struct anonymous_4 *ib = (struct anonymous_4 *)gArItem->data;
    unsigned long int return_value_fwrite_1;
    return_value_fwrite_1=fwrite((const void *)(ib->output + gArLastOffset), gArLastSize, (unsigned long int)1, gOutFile);
    if(!(return_value_fwrite_1 == 1ul))
      die("Can't write previous block");

    gArLastSize = (unsigned long int)0;
  }

}

// taste_file_index
// file read.c line 681
static _Bool taste_file_index(struct anonymous_4 *ib)
{
  unsigned long int return_value_xle64dec_1;
  return_value_xle64dec_1=xle64dec(ib->output);
  return return_value_xle64dec_1 == 0xDBAE14D62E324CA6LL;
}

// taste_tar
// file read.c line 670
static _Bool taste_tar(struct anonymous_4 *ib)
{
  struct archive *ar;
  ar=archive_read_new();
  archive_read_support_filter_none(ar);
  archive_read_support_format_tar(ar);
  archive_read_open_memory(ar, (void *)ib->output, ib->outsize);
  struct archive_entry *entry;
  _Bool ok;
  signed int return_value_archive_read_next_header_1;
  return_value_archive_read_next_header_1=archive_read_next_header(ar, &entry);
  ok = return_value_archive_read_next_header_1 == 0;
  archive_read_free(ar);
  return ok;
}

// usage
// file pixz.c line 18
static void usage(const char *msg)
{
  if(!(msg == ((const char *)NULL)))
    fprintf(stderr, "%s\n\n", msg);

  fprintf(stderr, "pixz: Parallel Indexing XZ compression, fully compatible with XZ\n\nBasic usage:\n  pixz input output.pxz           # Compress a file in parallel\n  pixz -d input.pxz output        # Decompress\n\nTarballs:\n  pixz input.tar output.tpxz      # Compress and index a tarball\n  pixz -d input.tpxz output.tar   # Decompress\n  pixz -l input.tpxz              # List tarball contents very fast\n  pixz -x path/to/file < input.tpxz | tar x  # Extract one file very fast\n  tar -Ipixz -cf output.tpxz dir  # Make tar use pixz automatically\n\nInput and output:\n  pixz < input > output.pxz       # Same as `pixz input output.pxz`\n  pixz -i input -o output.pxz     # Ditto\n  pixz [-d] input                 # Automatically choose output filename\n\nOther flags:\n  -0, -1 ... -9      Set compression level, from fastest to strongest\n  -p NUM             Use a maximum of NUM CPU-intensive threads\n  -t                 Don't assume input is in tar format\n  -k                 Keep original input (do not remove it)\n  -c                 ignored  -h                 Print this help\n\npixz %s\n(C) 2009-2012 Dave Vasilevsky <dave@vasilevsky.ca>\nhttps://github.com/vasi/pixz\nYou may use this software under the FreeBSD License\n", (const void *)"1.0.6");
  exit(2);
}

// wanted_files
// file read.c line 237
static void wanted_files(unsigned long int count, char **specs)
{
  char *tmp_post_1;
  if(gFileIndexOffset == 0ul)
  {
    if(!(count == 0ul))
      die("Can't filter non-tarball");

    gWantedFiles = (struct wanted_t *)(void *)0;
  }

  else
  {
    char **spec = specs;
    for( ; !(spec >= specs + (signed long int)count); spec = spec + 1l)
    {
      char *c = *spec;
      do
      {
        tmp_post_1 = c;
        c = c + 1l;
        if(*tmp_post_1 == 0)
          break;

      }
      while((_Bool)1);
      do
      {
        c = c - 1l;
        if(!(c >= *spec))
          break;

        if(!((signed int)*c == 47))
          break;

        *c = (char)0;
      }
      while((_Bool)1);
    }
    const signed long int c_array_size0 = (signed long int)count;
    _Bool matched[c_array_size0];
    memset((void *)matched, 0, (unsigned long int)c_array_size0);
    struct wanted_t *last = (struct wanted_t *)(void *)0;
    struct file_index_t *f = gFileIndex;
    for( ; !(f->name == ((char *)NULL)); f = f->next)
    {
      _Bool match = !(count != 0ul);
      char **wanted_files__1__3__1__1__spec = specs;
      for( ; !(wanted_files__1__3__1__1__spec >= specs + (signed long int)count); wanted_files__1__3__1__1__spec = wanted_files__1__3__1__1__spec + 1l)
      {
        _Bool return_value_spec_match_2;
        return_value_spec_match_2=spec_match(*wanted_files__1__3__1__1__spec, f->name);
        if(!(return_value_spec_match_2 == (_Bool)0))
        {
          match = (_Bool)1;
          matched[wanted_files__1__3__1__1__spec - specs] = (_Bool)1;
          break;
        }

      }
      if(!(match == (_Bool)0))
      {
        struct wanted_t *w;
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(struct wanted_t) /*40ul*/ );
        w = (struct wanted_t *)return_value_malloc_3;
        *w = (struct wanted_t){ .next=(struct wanted_t *)(void *)0, .name=f->name, .start=f->offset,
    .end=f->next->offset, .size=0ul };
        w->size = (unsigned long int)(w->end - w->start);
        if(!(last == ((struct wanted_t *)NULL)))
          last->next = w;

        else
          gWantedFiles = w;
        last = w;
      }

    }
    unsigned long int i = (unsigned long int)0;
    for( ; !(i >= count); i = i + 1ul)
      if(matched[(signed long int)i] == (_Bool)0)
        die("\"%s\" not found in archive", specs[(signed long int)i]);

  }
}

// wanted_free
// file read.c line 216
static void wanted_free(struct wanted_t *w)
{
  struct wanted_t *w = gWantedFiles;
  while(!(w == ((struct wanted_t *)NULL)))
  {
    struct wanted_t *tmp = w->next;
    free((void *)w);
    w = tmp;
  }
}

// write_block
// file write.c line 424
static void write_block(struct pipeline_item_t *pi)
{
  struct io_block_t *ib = (struct io_block_t *)pi->data;
  unsigned long int written = (unsigned long int)0;
  while(!(written >= ib->outsize))
  {
    unsigned long int size = ib->outsize - written;
    if(size >= 4097ul)
      size = (unsigned long int)4096;

    unsigned long int return_value_fwrite_1;
    return_value_fwrite_1=fwrite((const void *)(ib->output + (signed long int)written), size, (unsigned long int)1, gOutFile);
    if(!(return_value_fwrite_1 == 1ul))
      die("Error writing block data");

    written = written + size;
  }
  unsigned long int return_value_lzma_block_unpadded_size_2;
  return_value_lzma_block_unpadded_size_2=lzma_block_unpadded_size(&ib->block);
  enum anonymous_3 return_value_lzma_index_append_3;
  return_value_lzma_index_append_3=lzma_index_append(gIndex, (struct anonymous_6 *)(void *)0, return_value_lzma_block_unpadded_size_2, ib->block.uncompressed_size);
  if(!((signed int)return_value_lzma_index_append_3 == LZMA_OK))
    die("Error adding to index");

  block_dealloc(ib, (enum anonymous_18)BLOCK_ALL);
}

// write_file_index
// file write.c line 467
static void write_file_index(void)
{
  struct anonymous_16 block;
  block_init(&block, (unsigned long int)0);
  const signed long int block_array_size0 = (signed long int)block.header_size;
  unsigned char hdrbuf[block_array_size0];
  enum anonymous_3 return_value_lzma_block_header_encode_1;
  return_value_lzma_block_header_encode_1=lzma_block_header_encode(&block, hdrbuf);
  if(!((signed int)return_value_lzma_block_header_encode_1 == LZMA_OK))
    die("Error encoding file index header");

  unsigned long int return_value_fwrite_2;
  return_value_fwrite_2=fwrite((const void *)hdrbuf, (unsigned long int)block.header_size, (unsigned long int)1, gOutFile);
  if(!(return_value_fwrite_2 == 1ul))
    die("Error writing file index header");

  enum anonymous_3 return_value_lzma_block_encoder_3;
  return_value_lzma_block_encoder_3=lzma_block_encoder(&gStream, &block);
  if(!((signed int)return_value_lzma_block_encoder_3 == LZMA_OK))
    die("Error creating file index encoder");

  unsigned char offbuf[(signed long int)sizeof(unsigned long int) /*8l*/ ];
  xle64enc(offbuf, 0xDBAE14D62E324CA6LL);
  write_file_index_bytes(sizeof(unsigned char [8l]) /*8ul*/ , offbuf);
  struct file_index_t *f = gFileIndex;
  char *tmp_if_expr_4;
  for( ; !(f == ((struct file_index_t *)NULL)); f = f->next)
  {
    char *name;
    if(!(f->name == ((char *)NULL)))
      tmp_if_expr_4 = f->name;

    else
      tmp_if_expr_4 = "";
    name = tmp_if_expr_4;
    unsigned long int len;
    len=strlen(name);
    write_file_index_bytes(len + (unsigned long int)1, (unsigned char *)name);
    xle64enc(offbuf, (unsigned long int)f->offset);
    write_file_index_bytes(sizeof(unsigned char [8l]) /*8ul*/ , offbuf);
  }
  write_file_index_buf((enum anonymous_19)LZMA_FINISH);
  unsigned long int return_value_lzma_block_unpadded_size_5;
  return_value_lzma_block_unpadded_size_5=lzma_block_unpadded_size(&block);
  enum anonymous_3 return_value_lzma_index_append_6;
  return_value_lzma_index_append_6=lzma_index_append(gIndex, (struct anonymous_6 *)(void *)0, return_value_lzma_block_unpadded_size_5, block.uncompressed_size);
  if(!((signed int)return_value_lzma_index_append_6 == LZMA_OK))
    die("Error adding file-index to index");

  lzma_end(&gStream);
}

// write_file_index_buf
// file write.c line 515
static void write_file_index_buf(enum anonymous_19 action)
{
  unsigned char obuf[4096l];
  gStream.avail_in = gFileIndexBufPos;
  gStream.next_in = gFileIndexBuf_link1;
  enum anonymous_3 err = (enum anonymous_3)LZMA_OK;
  while(!((signed int)err == LZMA_STREAM_END) && ((signed int)action == LZMA_FINISH || !(gStream.avail_in == 0ul)))
  {
    gStream.avail_out = (unsigned long int)4096;
    gStream.next_out = obuf;
    err=lzma_code(&gStream, action);
    if(!((signed int)err == LZMA_OK) && !((signed int)err == LZMA_STREAM_END))
      die("Error encoding file index");

    if(!(gStream.avail_out == 4096ul))
    {
      unsigned long int return_value_fwrite_1;
      return_value_fwrite_1=fwrite((const void *)obuf, (unsigned long int)4096 - gStream.avail_out, (unsigned long int)1, gOutFile);
      if(!(return_value_fwrite_1 == 1ul))
        die("Error writing file index");

    }

  }
  gFileIndexBufPos = (unsigned long int)0;
}

// write_file_index_bytes
// file write.c line 497
static void write_file_index_bytes(unsigned long int size, unsigned char *buf)
{
  unsigned long int bufpos = (unsigned long int)0;
  while(!(bufpos >= size))
  {
    unsigned long int len = size - bufpos;
    unsigned long int space = (unsigned long int)4096 - gFileIndexBufPos;
    if(!(space >= len))
      len = space;

    memcpy((void *)(gFileIndexBuf_link1 + (signed long int)gFileIndexBufPos), (const void *)(buf + (signed long int)bufpos), len);
    gFileIndexBufPos = gFileIndexBufPos + len;
    bufpos = bufpos + len;
    if(gFileIndexBufPos == 4096ul)
    {
      write_file_index_buf((enum anonymous_19)LZMA_RUN);
      gFileIndexBufPos = (unsigned long int)0;
    }

  }
}

// xle64dec
// file pixz.h line 66
unsigned long int xle64dec(const unsigned char *d)
{
  return *((unsigned long int *)d);
}

// xle64enc
// file endian.c line 42
void xle64enc(unsigned char *d, unsigned long int n)
{
  *((unsigned long int *)d) = n;
}

// xstrdup
// file common.c line 24
char * xstrdup(const char *s)
{
  if(s == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int len;
    len=strlen(s);
    char *r;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(len + (unsigned long int)1);
    r = (char *)return_value_malloc_1;
    if(r == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      void *return_value_memcpy_2;
      return_value_memcpy_2=memcpy((void *)r, (const void *)s, len + (unsigned long int)1);
      return (char *)return_value_memcpy_2;
    }
  }
}

