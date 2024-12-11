// #anon_enum_LZMA_CHECK_NONE=0_LZMA_CHECK_CRC32=1_LZMA_CHECK_CRC64=4_LZMA_CHECK_SHA256=10
// file /usr/include/lzma/check.h line 27
enum anonymous_14 { LZMA_CHECK_NONE=0, LZMA_CHECK_CRC32=1, LZMA_CHECK_CRC64=4, LZMA_CHECK_SHA256=10 };

// #anon_enum_LZMA_OK=0_LZMA_STREAM_END=1_LZMA_NO_CHECK=2_LZMA_UNSUPPORTED_CHECK=3_LZMA_GET_CHECK=4_LZMA_MEM_ERROR=5_LZMA_MEMLIMIT_ERROR=6_LZMA_FORMAT_ERROR=7_LZMA_OPTIONS_ERROR=8_LZMA_DATA_ERROR=9_LZMA_BUF_ERROR=10_LZMA_PROG_ERROR=11
// file /usr/include/lzma/base.h line 57
enum anonymous_10 { LZMA_OK=0, LZMA_STREAM_END=1, LZMA_NO_CHECK=2, LZMA_UNSUPPORTED_CHECK=3, LZMA_GET_CHECK=4, LZMA_MEM_ERROR=5, LZMA_MEMLIMIT_ERROR=6, LZMA_FORMAT_ERROR=7, LZMA_OPTIONS_ERROR=8, LZMA_DATA_ERROR=9, LZMA_BUF_ERROR=10, LZMA_PROG_ERROR=11 };

// #anon_enum_LZMA_RESERVED_ENUM=0
// file /usr/include/lzma/base.h line 44
enum anonymous_9 { LZMA_RESERVED_ENUM=0 };

// #anon_enum_LZMA_RUN=0_LZMA_SYNC_FLUSH=1_LZMA_FULL_FLUSH=2_LZMA_FINISH=3
// file /usr/include/lzma/base.h line 250
enum anonymous_11 { LZMA_RUN=0, LZMA_SYNC_FLUSH=1, LZMA_FULL_FLUSH=2, LZMA_FINISH=3 };

// ST[S32'devtype'|ARR256{S8}_S8_'devname'|ARR256{S8}_S8_'longname'|ARR512{S8}_S8_'label'|ARR128{S8}_S8_'uuid'|ARR128{S8}_S8_'fsname'|ARR512{S8}_S8_'name'|ARR64{S8}_S8_'txtsize'|U32'_pad0'|U64'devsize'|S32'minor'|S32'major'|U64'rdev']
// file devinfo.h line 23
struct s_devinfo;

// tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'|*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'|*{V}_V_'opaque']
// file /usr/include/lzma/base.h line 349
struct anonymous_12;

// tag-#anon#ST[*{cU8}_cU8_'next_in'|U64'avail_in'|U64'total_in'|*{U8}_U8_'next_out'|U64'avail_out'|U64'total_out'|*{SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'|*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'|*{V}_V_'opaque']#}_SYM#tag-#anon#ST[*{*{V}_V_(*{V}_V_|U64|U64)->*{V}_V_}_*{V}_V_(*{V}_V_|U64|U64)->*{V}_V__'alloc'|*{V(*{V}_V_|*{V}_V_)->V}_V(*{V}_V_|*{V}_V_)->V_'free'|*{V}_V_'opaque']#_'allocator'|*{SYM#tag-lzma_internal_s#}_SYM#tag-lzma_internal_s#_'internal'|*{V}_V_'reserved_ptr1'|*{V}_V_'reserved_ptr2'|*{V}_V_'reserved_ptr3'|*{V}_V_'reserved_ptr4'|U64'reserved_int1'|U64'reserved_int2'|U64'reserved_int3'|U64'reserved_int4'|SYM##anon_enum_LZMA_RESERVED_ENUM=0#'reserved_enum1'|SYM##anon_enum_LZMA_RESERVED_ENUM=0#'reserved_enum2']
// file /usr/include/lzma/base.h line 461
struct anonymous_13;

// tag-#anon#ST[ARR16{U64}_U64_'__val']
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous;

// tag-#anon#ST[ARR2{S32}_S32_'__val']
// file /usr/include/x86_64-linux-gnu/bits/types.h line 134
struct anonymous_8;

// tag-#anon#ST[BF{U32}_U32_'len'|BF{U32}_U32_'addr1'|U32'addr2']
// file fs_jfs.h line 39
struct anonymous_0;

// tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_5;

// tag-#anon#ST[U16'l_i_blocks_hi'|U16'l_i_file_acl_high'|U16'l_i_uid_high'|U16'l_i_gid_high'|U16'l_i_checksum_lo'|U16'l_i_reserved']
// file /usr/include/ext2fs/ext2_fs.h line 387
struct anonymous_19;

// tag-#anon#ST[U32'h_i_translator']
// file /usr/include/ext2fs/ext2_fs.h line 377
struct anonymous_18;

// tag-#anon#ST[U32'l_i_version']
// file /usr/include/ext2fs/ext2_fs.h line 374
struct anonymous_17;

// tag-#anon#ST[U64'we_wordc'|*{*{S8}_S8_}_*{S8}_S8__'we_wordv'|U64'we_offs']
// file /usr/include/wordexp.h line 41
struct anonymous_4;

// tag-#anon#ST[U8'h_i_frag'|U8'h_i_fsize'|U16'h_i_mode_high'|U16'h_i_uid_high'|U16'h_i_gid_high'|U32'h_i_author']
// file /usr/include/ext2fs/ext2_fs.h line 395
struct anonymous_20;

// tag-#anon#ST[vS32'counter']
// file types.h line 68
struct anonymous_7;

// tag-#anon#UN[ARR4{S8}_S8_'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'|U32'__futex'|U64'__total_seq'|U64'__wakeup_seq'|U64'__woken_seq'|*{V}_V_'__mutex'|U32'__nwaiters'|U32'__broadcast_seq']#'__data'|ARR48{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_2;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'l_i_blocks_hi'|U16'l_i_file_acl_high'|U16'l_i_uid_high'|U16'l_i_gid_high'|U16'l_i_checksum_lo'|U16'l_i_reserved']#'linux2'|SYM#tag-#anon#ST[U8'h_i_frag'|U8'h_i_fsize'|U16'h_i_mode_high'|U16'h_i_uid_high'|U16'h_i_gid_high'|U32'h_i_author']#'hurd2']
// file /usr/include/ext2fs/ext2_fs.h line 386
union anonymous_16;

// tag-#anon#UN[SYM#tag-#anon#ST[U32'l_i_version']#'linux1'|SYM#tag-#anon#ST[U32'h_i_translator']#'hurd1']
// file /usr/include/ext2fs/ext2_fs.h line 373
union anonymous_15;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}_S8_'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_1;

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

// tag-blkid_struct_cache
// file /usr/include/blkid/blkid.h line 48
struct blkid_struct_cache;

// tag-blkid_struct_dev
// file /usr/include/blkid/blkid.h line 41
struct blkid_struct_dev;

// tag-blkid_struct_tag_iterate
// file /usr/include/blkid/blkid.h line 97
struct blkid_struct_tag_iterate;

// tag-btrfs_dev_item
// file fs_btrfs.h line 87
struct btrfs_dev_item;

// tag-btrfs_super_block
// file fs_btrfs.h line 139
struct btrfs_super_block;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-ext2_image_hdr
// file /usr/include/ext2fs/ext2fs.h line 238
struct ext2_image_hdr;

// tag-ext2_inode
// file /usr/include/ext2fs/ext2_fs.h line 361
struct ext2_inode;

// tag-ext2_inode_cache
// file /usr/include/ext2fs/ext2fs.h line 257
struct ext2_inode_cache;

// tag-ext2_struct_dblist
// file /usr/include/ext2fs/ext2fs.h line 150
struct ext2_struct_dblist;

// tag-ext2_struct_u32_list
// file /usr/include/ext2fs/ext2fs.h line 122
struct ext2_struct_u32_list;

// tag-ext2_super_block
// file /usr/include/ext2fs/ext2_fs.h line 546
struct ext2_super_block;

// tag-ext2fs_struct_generic_bitmap
// file /usr/include/ext2fs/ext2fs.h line 111
struct ext2fs_struct_generic_bitmap;

// tag-fsa_ext2_sb
// file fs_ext2.h line 134
struct fsa_ext2_sb;

// tag-gcry_cipher_handle
// file /usr/include/gcrypt.h line 842
struct gcry_cipher_handle;

// tag-gcry_ctl_cmds
// file /usr/include/gcrypt.h line 263
enum gcry_ctl_cmds { GCRYCTL_CFB_SYNC=3, GCRYCTL_RESET=4, GCRYCTL_FINALIZE=5, GCRYCTL_GET_KEYLEN=6, GCRYCTL_GET_BLKLEN=7, GCRYCTL_TEST_ALGO=8, GCRYCTL_IS_SECURE=9, GCRYCTL_GET_ASNOID=10, GCRYCTL_ENABLE_ALGO=11, GCRYCTL_DISABLE_ALGO=12, GCRYCTL_DUMP_RANDOM_STATS=13, GCRYCTL_DUMP_SECMEM_STATS=14, GCRYCTL_GET_ALGO_NPKEY=15, GCRYCTL_GET_ALGO_NSKEY=16, GCRYCTL_GET_ALGO_NSIGN=17, GCRYCTL_GET_ALGO_NENCR=18, GCRYCTL_SET_VERBOSITY=19, GCRYCTL_SET_DEBUG_FLAGS=20, GCRYCTL_CLEAR_DEBUG_FLAGS=21, GCRYCTL_USE_SECURE_RNDPOOL=22, GCRYCTL_DUMP_MEMORY_STATS=23, GCRYCTL_INIT_SECMEM=24, GCRYCTL_TERM_SECMEM=25, GCRYCTL_DISABLE_SECMEM_WARN=27, GCRYCTL_SUSPEND_SECMEM_WARN=28, GCRYCTL_RESUME_SECMEM_WARN=29, GCRYCTL_DROP_PRIVS=30, GCRYCTL_ENABLE_M_GUARD=31, GCRYCTL_START_DUMP=32, GCRYCTL_STOP_DUMP=33, GCRYCTL_GET_ALGO_USAGE=34, GCRYCTL_IS_ALGO_ENABLED=35, GCRYCTL_DISABLE_INTERNAL_LOCKING=36, GCRYCTL_DISABLE_SECMEM=37, GCRYCTL_INITIALIZATION_FINISHED=38, GCRYCTL_INITIALIZATION_FINISHED_P=39, GCRYCTL_ANY_INITIALIZATION_P=40, GCRYCTL_SET_CBC_CTS=41, GCRYCTL_SET_CBC_MAC=42, GCRYCTL_ENABLE_QUICK_RANDOM=44, GCRYCTL_SET_RANDOM_SEED_FILE=45, GCRYCTL_UPDATE_RANDOM_SEED_FILE=46, GCRYCTL_SET_THREAD_CBS=47, GCRYCTL_FAST_POLL=48, GCRYCTL_SET_RANDOM_DAEMON_SOCKET=49, GCRYCTL_USE_RANDOM_DAEMON=50, GCRYCTL_FAKED_RANDOM_P=51, GCRYCTL_SET_RNDEGD_SOCKET=52, GCRYCTL_PRINT_CONFIG=53, GCRYCTL_OPERATIONAL_P=54, GCRYCTL_FIPS_MODE_P=55, GCRYCTL_FORCE_FIPS_MODE=56, GCRYCTL_SELFTEST=57, GCRYCTL_DISABLE_HWF=63, GCRYCTL_SET_ENFORCED_FIPS_FLAG=64, GCRYCTL_SET_PREFERRED_RNG_TYPE=65, GCRYCTL_GET_CURRENT_RNG_TYPE=66, GCRYCTL_DISABLE_LOCKED_SECMEM=67, GCRYCTL_DISABLE_PRIV_DROP=68, GCRYCTL_SET_CCM_LENGTHS=69, GCRYCTL_CLOSE_RANDOM_DEVICE=70, GCRYCTL_INACTIVATE_FIPS_FLAG=71, GCRYCTL_REACTIVATE_FIPS_FLAG=72 };

// tag-gcry_md_context
// file /usr/include/gcrypt.h line 1159
struct gcry_md_context;

// tag-gcry_md_handle
// file /usr/include/gcrypt.h line 1164
struct gcry_md_handle;

// tag-gcry_random_level
// file /usr/include/gcrypt.h line 1455
enum gcry_random_level { GCRY_WEAK_RANDOM=0, GCRY_STRONG_RANDOM=1, GCRY_VERY_STRONG_RANDOM=2 };

// tag-gcry_thread_cbs
// file /usr/include/gcrypt.h line 211
struct gcry_thread_cbs;

// tag-jfs_superblock
// file fs_jfs.h line 59
struct jfs_superblock;

// tag-lzma_internal_s
// file /usr/include/lzma/base.h line 419
struct lzma_internal_s;

// tag-lzo_callback_t
// file /usr/include/lzo/lzoconf.h line 265
struct lzo_callback_t;

// tag-opaque_ext2_group_desc
// file /usr/include/ext2fs/ext2fs.h line 210
struct opaque_ext2_group_desc;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-reiser4_master_sb
// file fs_reiser4.h line 35
struct reiser4_master_sb;

// tag-reiserfs_super_block
// file fs_reiserfs.h line 61
struct reiserfs_super_block;

// tag-reiserfs_super_block_v1
// file fs_reiserfs.h line 37
struct reiserfs_super_block_v1;

// tag-s_archreader
// file archreader.h line 27
struct s_archreader;

// tag-s_archwriter
// file archwriter.h line 29
struct s_archwriter;

// tag-s_blockinfo
// file queue.h line 28
struct s_blockinfo;

// tag-s_datafile
// file datafile.h line 23
struct s_datafile;

// tag-s_devinfo
// file oper_save.c line 73
struct s_devinfo_0;

// tag-s_dichl
// file dichl.h line 23
struct s_dichl;

// tag-s_dichlitem
// file dichl.h line 26
struct s_dichlitem;

// tag-s_dico
// file dico.h line 26
struct s_dico;

// tag-s_dicoitem
// file dico.h line 27
struct s_dicoitem;

// tag-s_diskinfo
// file oper_probe.c line 31
struct s_diskinfo;

// tag-s_extractar
// file oper_restore.c line 58
struct s_extractar;

// tag-s_features
// file fs_ext2.c line 44
struct s_features;

// tag-s_filesys
// file filesys.h line 26
struct s_filesys;

// tag-s_headinfo
// file queue.h line 31
struct s_headinfo;

// tag-s_ntfsinfo
// file fs_ntfs.h line 29
struct s_ntfsinfo;

// tag-s_options
// file options.h line 23
struct s_options;

// tag-s_queue
// file syncthread.h line 22
struct s_queue;

// tag-s_queueitem
// file queue.h line 34
struct s_queueitem;

// tag-s_regmulti
// file regmulti.h line 24
struct s_regmulti;

// tag-s_savear
// file oper_save.c line 61
struct s_savear;

// tag-s_stats
// file common.h line 25
struct s_stats;

// tag-s_strdico
// file strdico.h line 21
struct s_strdico;

// tag-s_strdicoitem
// file strdico.h line 22
struct s_strdicoitem;

// tag-s_strlist
// file common.h line 24
struct s_strlist;

// tag-s_strlistitem
// file strlist.h line 24
struct s_strlistitem;

// tag-s_writebuf
// file archwriter.h line 24
struct s_writebuf;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stat64
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 119
struct stat64;

// tag-statfs
// file /usr/include/x86_64-linux-gnu/bits/statfs.h line 24
struct statfs;

// tag-statvfs64
// file /usr/include/x86_64-linux-gnu/bits/statvfs.h line 58
struct statvfs64;

// tag-struct_ext2_filsys
// file /usr/include/ext2fs/ext2fs.h line 105
struct struct_ext2_filsys;

// tag-struct_io_channel
// file /usr/include/ext2fs/ext2_io.h line 28
struct struct_io_channel;

// tag-struct_io_manager
// file /usr/include/ext2fs/ext2_io.h line 27
struct struct_io_manager;

// tag-struct_io_stats
// file /usr/include/ext2fs/ext2_io.h line 29
struct struct_io_stats;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timestruc_t
// file fs_jfs.h line 48
struct timestruc_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-utsname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 48
struct utsname;

// tag-xfs_sb
// file fs_xfs.h line 98
struct xfs_sb;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
#endif

// BZ2_bzBuffToBuffCompress
// file /usr/include/bzlib.h line 204
extern signed int BZ2_bzBuffToBuffCompress(char *, unsigned int *, char *, unsigned int, signed int, signed int, signed int);
// BZ2_bzBuffToBuffDecompress
// file /usr/include/bzlib.h line 214
extern signed int BZ2_bzBuffToBuffDecompress(char *, unsigned int *, char *, unsigned int, signed int, signed int);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __lzo_init_v2
// file /usr/include/lzo/lzoconf.h line 335
extern signed int __lzo_init_v2(unsigned int, signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int, signed int);
// __sync_add_and_fetch
// file gcc_builtin_headers_generic.h line 99
signed int __sync_add_and_fetch();
// __sync_sub_and_fetch
// file gcc_builtin_headers_generic.h line 100
signed int __sync_sub_and_fetch();
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// archinfo_show_fshead
// file archinfo.h line 25
signed int archinfo_show_fshead(struct s_dico *dicofshead, signed int fsid);
// archinfo_show_mainhead
// file archinfo.h line 24
signed int archinfo_show_mainhead(struct s_archreader *ai, struct s_dico *dicomainhead);
// archreader_close
// file archreader.h line 54
signed int archreader_close(struct s_archreader *ai);
// archreader_destroy
// file archreader.h line 52
signed int archreader_destroy(struct s_archreader *ai);
// archreader_incvolume
// file archreader.h line 55
signed int archreader_incvolume(struct s_archreader *ai, _Bool waitkeypress);
// archreader_init
// file archreader.h line 51
signed int archreader_init(struct s_archreader *ai);
// archreader_open
// file archreader.h line 53
signed int archreader_open(struct s_archreader *ai);
// archreader_read_block
// file archreader.h line 61
signed int archreader_read_block(struct s_archreader *ai, struct s_dico *in_blkdico, signed int in_skipblock, signed int *out_sumok, struct s_blockinfo *out_blkinfo);
// archreader_read_data
// file archreader.c line 150
signed int archreader_read_data(struct s_archreader *ai, void *data, unsigned long int size);
// archreader_read_dico
// file archreader.c line 164
signed int archreader_read_dico(struct s_archreader *ai, struct s_dico *d);
// archreader_read_header
// file archreader.h line 60
signed int archreader_read_header(struct s_archreader *ai, char *magic, struct s_dico **d, _Bool allowseek, unsigned short int *fsid);
// archreader_read_volheader
// file archreader.h line 59
signed int archreader_read_volheader(struct s_archreader *ai);
// archreader_volpath
// file archreader.h line 56
signed int archreader_volpath(struct s_archreader *ai);
// archwriter_close
// file archwriter.h line 48
signed int archwriter_close(struct s_archwriter *ai);
// archwriter_create
// file archwriter.h line 47
signed int archwriter_create(struct s_archwriter *ai);
// archwriter_destroy
// file archwriter.h line 46
signed int archwriter_destroy(struct s_archwriter *ai);
// archwriter_dowrite_block
// file archwriter.h line 60
signed int archwriter_dowrite_block(struct s_archwriter *ai, struct s_blockinfo *blkinfo);
// archwriter_dowrite_header
// file archwriter.h line 61
signed int archwriter_dowrite_header(struct s_archwriter *ai, struct s_headinfo *headinfo);
// archwriter_generate_id
// file archwriter.h line 50
signed int archwriter_generate_id(struct s_archwriter *ai);
// archwriter_get_currentpos
// file archwriter.c line 178
signed long int archwriter_get_currentpos(struct s_archwriter *ai);
// archwriter_incvolume
// file archwriter.c line 239
signed int archwriter_incvolume(struct s_archwriter *ai, _Bool waitkeypress);
// archwriter_init
// file archwriter.h line 45
signed int archwriter_init(struct s_archwriter *ai);
// archwriter_is_path_to_curvol
// file archwriter.h line 52
signed int archwriter_is_path_to_curvol(struct s_archwriter *ai, char *path);
// archwriter_remove
// file archwriter.h line 49
signed int archwriter_remove(struct s_archwriter *ai);
// archwriter_split_check
// file archwriter.c line 327
signed int archwriter_split_check(struct s_archwriter *ai, struct s_writebuf *wb);
// archwriter_split_if_necessary
// file archwriter.c line 347
signed int archwriter_split_if_necessary(struct s_archwriter *ai, struct s_writebuf *wb);
// archwriter_volpath
// file archwriter.h line 55
signed int archwriter_volpath(struct s_archwriter *ai);
// archwriter_write_buffer
// file archwriter.c line 184
signed int archwriter_write_buffer(struct s_archwriter *ai, struct s_writebuf *wb);
// archwriter_write_volfooter
// file archwriter.h line 57
signed int archwriter_write_volfooter(struct s_archwriter *ai, _Bool lastvol);
// archwriter_write_volheader
// file archwriter.h line 56
signed int archwriter_write_volheader(struct s_archwriter *ai);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// atoll
// file /usr/include/stdlib.h line 157
extern signed long long int atoll(const char *);
// backtrace
// file /usr/include/execinfo.h line 27
extern signed int backtrace(void **, signed int);
// backtrace_symbols
// file /usr/include/execinfo.h line 32
extern char ** backtrace_symbols(void * const *, signed int);
// blkid_get_cache
// file /usr/include/blkid/blkid.h line 143
extern signed int blkid_get_cache(struct blkid_struct_cache **, const char *);
// blkid_get_dev
// file /usr/include/blkid/blkid.h line 168
extern struct blkid_struct_dev * blkid_get_dev(struct blkid_struct_cache *, const char *, signed int);
// blkid_put_cache
// file /usr/include/blkid/blkid.h line 142
extern void blkid_put_cache(struct blkid_struct_cache *);
// blkid_tag_iterate_begin
// file /usr/include/blkid/blkid.h line 187
extern struct blkid_struct_tag_iterate * blkid_tag_iterate_begin(struct blkid_struct_dev *);
// blkid_tag_iterate_end
// file /usr/include/blkid/blkid.h line 190
extern void blkid_tag_iterate_end(struct blkid_struct_tag_iterate *);
// blkid_tag_next
// file /usr/include/blkid/blkid.h line 188
extern signed int blkid_tag_next(struct blkid_struct_tag_iterate *, const char **, const char **);
// btrfs_check_compatibility
// file fs_btrfs.c line 38
signed int btrfs_check_compatibility(unsigned long int compat, unsigned long int incompat, unsigned long int ro_compat);
// btrfs_get_reqmntopt
// file fs_btrfs.c line 209
signed int btrfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// btrfs_getinfo
// file fs_btrfs.c line 105
signed int btrfs_getinfo(struct s_dico *d, char *devname);
// btrfs_mkfs
// file fs_btrfs.c line 53
signed int btrfs_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// btrfs_mount
// file fs_btrfs.c line 172
signed int btrfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// btrfs_test
// file fs_btrfs.c line 182
signed int btrfs_test(char *devname);
// btrfs_umount
// file fs_btrfs.c line 177
signed int btrfs_umount(char *partition, char *mntbuf);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_prog_version
// file fs_ext2.c line 514
unsigned long int check_prog_version(char *prog);
// chmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 283
extern signed int chmod(const char *, unsigned int);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// compalgostr
// file archinfo.c line 31
char * compalgostr(signed int algo);
// compress2
// file /usr/include/zlib.h line 1174
extern signed int compress2(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int, signed int);
// compress_block_bzip2
// file comp_bzip2.h line 21
signed int compress_block_bzip2(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level);
// compress_block_generic
// file thread_comp.c line 41
signed int compress_block_generic(struct s_blockinfo *blkinfo);
// compress_block_gzip
// file comp_gzip.h line 21
signed int compress_block_gzip(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level);
// compress_block_lzma
// file comp_lzma.h line 23
signed int compress_block_lzma(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level);
// compress_block_lzo
// file comp_lzo.h line 25
signed int compress_block_lzo(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level);
// compression_function
// file thread_comp.c line 249
signed int compression_function(signed int oper);
// concatenate_paths
// file common.h line 29
void concatenate_paths(char *buffer, signed int maxbufsize, char *p1, char *p2);
// convert_argv_to_strdicos
// file oper_restore.c line 110
signed int convert_argv_to_strdicos(struct s_strdico **dicoargv, signed int argc, char **cmdargv);
// creat
// file /usr/include/fcntl.h line 195
extern signed int creat(const char *, unsigned int);
// createar_item_stdattr
// file oper_save.c line 400
signed int createar_item_stdattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d, signed int *objtype, unsigned long int *filecost);
// createar_item_winattr
// file oper_save.c line 323
signed int createar_item_winattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d);
// createar_item_xattr
// file oper_save.c line 255
signed int createar_item_xattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d);
// createar_obj_regfile_multi
// file oper_save.c line 80
signed int createar_obj_regfile_multi(struct s_savear *save, struct s_dico *header, char *relpath, char *fullpath, unsigned long int filesize);
// createar_obj_regfile_unique
// file oper_save.c line 135
signed int createar_obj_regfile_unique(struct s_savear *save, struct s_dico *header, char *relpath, char *fullpath, unsigned long int filesize);
// createar_oper_savedir
// file oper_save.c line 1128
signed int createar_oper_savedir(struct s_savear *save, char *rootdir);
// createar_oper_savefs
// file oper_save.c line 1097
signed int createar_oper_savefs(struct s_savear *save, struct s_devinfo_0 *devinfo);
// createar_save_directory
// file oper_save.c line 735
signed int createar_save_directory(struct s_savear *save, char *root, char *path, unsigned long int *costeval);
// createar_save_directory_wrapper
// file oper_save.c line 817
signed int createar_save_directory_wrapper(struct s_savear *save, char *root, char *path, unsigned long int *costeval);
// createar_save_file
// file oper_save.c line 576
signed int createar_save_file(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, unsigned long int *costeval);
// createar_write_mainhead
// file oper_save.c line 845
signed int createar_write_mainhead(struct s_savear *save, signed int archtype, signed int fscount);
// cryptalgostr
// file archinfo.c line 44
char * cryptalgostr(signed int algo);
// crypto_blowfish
// file crypto.h line 24
signed int crypto_blowfish(unsigned long int insize, unsigned long int *outsize, unsigned char *inbuf, unsigned char *outbuf, unsigned char *password, signed int passlen, signed int enc);
// crypto_cleanup
// file crypto.h line 26
signed int crypto_cleanup();
// crypto_init
// file crypto.h line 23
signed int crypto_init();
// crypto_random
// file crypto.h line 25
signed int crypto_random(unsigned char *buf, signed int bufsize);
// datafile_alloc
// file datafile.h line 26
struct s_datafile * datafile_alloc();
// datafile_close
// file datafile.h line 30
signed int datafile_close(struct s_datafile *f, unsigned char *md5bufdat, signed int md5bufsize);
// datafile_destroy
// file datafile.h line 27
signed int datafile_destroy(struct s_datafile *f);
// datafile_is_block_zero
// file datafile.c line 105
signed int datafile_is_block_zero(struct s_datafile *f, char *data, unsigned long int len);
// datafile_open_write
// file datafile.h line 28
signed int datafile_open_write(struct s_datafile *f, char *path, _Bool simul, _Bool sparse);
// datafile_write
// file datafile.h line 29
signed int datafile_write(struct s_datafile *f, char *data, unsigned long int len);
// dec_secthreads
// file syncthread.h line 35
void dec_secthreads();
// decompress_block_generic
// file thread_comp.c line 149
signed int decompress_block_generic(struct s_blockinfo *blkinfo);
// devcmp
// file filesys.c line 114
signed int devcmp(char *dev1, char *dev2);
// dichl_add
// file dichl.h line 43
signed int dichl_add(struct s_dichl *d, unsigned long int key1, unsigned long int key2, char *str);
// dichl_alloc
// file dichl.h line 41
struct s_dichl * dichl_alloc();
// dichl_destroy
// file dichl.h line 42
signed int dichl_destroy(struct s_dichl *d);
// dichl_get
// file dichl.h line 44
signed int dichl_get(struct s_dichl *d, unsigned long int key1, unsigned long int key2, char *buf, signed int bufsize);
// dico_add_data
// file dico.h line 51
signed int dico_add_data(struct s_dico *d, unsigned char section, unsigned short int key, const void *data, unsigned short int size);
// dico_add_generic
// file dico.h line 52
signed int dico_add_generic(struct s_dico *d, unsigned char section, unsigned short int key, const void *data, unsigned short int size, unsigned char type);
// dico_add_string
// file dico.h line 61
signed int dico_add_string(struct s_dico *d, unsigned char section, unsigned short int key, const char *szstring);
// dico_add_u16
// file dico.h line 55
signed int dico_add_u16(struct s_dico *d, unsigned char section, unsigned short int key, unsigned short int data);
// dico_add_u32
// file dico.h line 56
signed int dico_add_u32(struct s_dico *d, unsigned char section, unsigned short int key, unsigned int data);
// dico_add_u64
// file dico.h line 57
signed int dico_add_u64(struct s_dico *d, unsigned char section, unsigned short int key, unsigned long int data);
// dico_alloc
// file dico.h line 46
struct s_dico * dico_alloc();
// dico_count_all_sections
// file dico.h line 49
signed int dico_count_all_sections(struct s_dico *d);
// dico_count_one_section
// file dico.h line 50
signed int dico_count_one_section(struct s_dico *d, unsigned char section);
// dico_destroy
// file dico.h line 47
signed int dico_destroy(struct s_dico *d);
// dico_get_data
// file dico.h line 54
signed int dico_get_data(struct s_dico *d, unsigned char section, unsigned short int key, void *data, unsigned short int maxsize, unsigned short int *size);
// dico_get_generic
// file dico.c line 129
signed int dico_get_generic(struct s_dico *d, unsigned char section, unsigned short int key, void *data, unsigned short int maxsize, unsigned short int *size);
// dico_get_string
// file dico.h line 62
signed int dico_get_string(struct s_dico *d, unsigned char section, unsigned short int key, char *buffer, unsigned short int bufsize);
// dico_get_u16
// file dico.h line 58
signed int dico_get_u16(struct s_dico *d, unsigned char section, unsigned short int key, unsigned short int *data);
// dico_get_u32
// file dico.h line 59
signed int dico_get_u32(struct s_dico *d, unsigned char section, unsigned short int key, unsigned int *data);
// dico_get_u64
// file dico.h line 60
signed int dico_get_u64(struct s_dico *d, unsigned char section, unsigned short int key, unsigned long int *data);
// dico_show
// file dico.h line 48
signed int dico_show(struct s_dico *d, unsigned char section, char *debugtxt);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// e2p_mntopt2string
// file /usr/include/e2p/e2p.h line 64
const char * e2p_mntopt2string(unsigned int);
// error_int_to_string
// file error.h line 53
char * error_int_to_string(signed long int err);
// exclude_check
// file common.h line 51
signed int exclude_check(struct s_strlist *patlist, char *string);
// exec_command
// file common.h line 27
signed int exec_command(char *command, signed int cmdbufsize, signed int *exitst, char *stdoutbuf, signed int stdoutsize, char *stderrbuf, signed int stderrsize, char *format, ...);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// ext2_mkfs
// file fs_ext2.c line 87
signed int ext2_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// ext2_test
// file fs_ext2.c line 488
signed int ext2_test(char *partition);
// ext2fs_close
// file /usr/include/ext2fs/ext2fs.h line 932
extern signed long int ext2fs_close(struct struct_ext2_filsys *);
// ext2fs_div64_ceil
// file /usr/include/ext2fs/ext2fs.h line 1748
inline unsigned long long int ext2fs_div64_ceil(unsigned long long int a, unsigned long long int b);
// ext2fs_div_ceil
// file /usr/include/ext2fs/ext2fs.h line 1741
inline unsigned int ext2fs_div_ceil(unsigned int a, unsigned int b);
// ext2fs_fast_clear_bit
// file /usr/include/ext2fs/bitops.h line 261
inline void ext2fs_fast_clear_bit(unsigned int nr, void *addr);
// ext2fs_fast_clear_bit64
// file /usr/include/ext2fs/bitops.h line 278
inline void ext2fs_fast_clear_bit64(unsigned long long int nr, void *addr);
// ext2fs_fast_mark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 431
inline void ext2fs_fast_mark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_fast_mark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 550
inline void ext2fs_fast_mark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_fast_mark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 495
inline void ext2fs_fast_mark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num);
// ext2fs_fast_mark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 675
inline void ext2fs_fast_mark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num);
// ext2fs_fast_mark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 450
inline void ext2fs_fast_mark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_fast_mark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 569
inline void ext2fs_fast_mark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_fast_set_bit
// file /usr/include/ext2fs/bitops.h line 253
inline void ext2fs_fast_set_bit(unsigned int nr, void *addr);
// ext2fs_fast_set_bit64
// file /usr/include/ext2fs/bitops.h line 270
inline void ext2fs_fast_set_bit64(unsigned long long int nr, void *addr);
// ext2fs_fast_test_block_bitmap
// file /usr/include/ext2fs/bitops.h line 443
inline signed int ext2fs_fast_test_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_fast_test_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 562
inline signed int ext2fs_fast_test_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_fast_test_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 489
inline signed int ext2fs_fast_test_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num);
// ext2fs_fast_test_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 668
inline signed int ext2fs_fast_test_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num);
// ext2fs_fast_test_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 462
inline signed int ext2fs_fast_test_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_fast_test_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 581
inline signed int ext2fs_fast_test_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_fast_unmark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 437
inline void ext2fs_fast_unmark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_fast_unmark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 556
inline void ext2fs_fast_unmark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_fast_unmark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 501
inline void ext2fs_fast_unmark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num);
// ext2fs_fast_unmark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 682
inline void ext2fs_fast_unmark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num);
// ext2fs_fast_unmark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 456
inline void ext2fs_fast_unmark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_fast_unmark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 575
inline void ext2fs_fast_unmark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_find_first_set_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 618
inline signed long int ext2fs_find_first_set_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int start, unsigned long long int end, unsigned long long int *out);
// ext2fs_find_first_set_generic_bmap
// file /usr/include/ext2fs/bitops.h line 209
extern signed long int ext2fs_find_first_set_generic_bmap(struct ext2fs_struct_generic_bitmap *, unsigned long long int, unsigned long long int, unsigned long long int *);
// ext2fs_find_first_set_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 633
inline signed long int ext2fs_find_first_set_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int start, unsigned int end, unsigned int *out);
// ext2fs_find_first_zero_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 588
inline signed long int ext2fs_find_first_zero_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int start, unsigned long long int end, unsigned long long int *out);
// ext2fs_find_first_zero_generic_bmap
// file /usr/include/ext2fs/bitops.h line 206
extern signed long int ext2fs_find_first_zero_generic_bmap(struct ext2fs_struct_generic_bitmap *, unsigned long long int, unsigned long long int, unsigned long long int *);
// ext2fs_find_first_zero_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 603
inline signed long int ext2fs_find_first_zero_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int start, unsigned int end, unsigned int *out);
// ext2fs_free_mem
// file /usr/include/ext2fs/ext2fs.h line 1591
inline signed long int ext2fs_free_mem(void *ptr);
// ext2fs_get_array
// file /usr/include/ext2fs/ext2fs.h line 1567
inline signed long int ext2fs_get_array(unsigned long int count, unsigned long int size, void *ptr);
// ext2fs_get_arrayzero
// file /usr/include/ext2fs/ext2fs.h line 1574
inline signed long int ext2fs_get_arrayzero(unsigned long int count, unsigned long int size, void *ptr);
// ext2fs_get_block_bitmap_end
// file /usr/include/ext2fs/bitops.h line 479
inline unsigned int ext2fs_get_block_bitmap_end(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_block_bitmap_end2
// file /usr/include/ext2fs/bitops.h line 658
inline unsigned long long int ext2fs_get_block_bitmap_end2(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_block_bitmap_start
// file /usr/include/ext2fs/bitops.h line 469
inline unsigned int ext2fs_get_block_bitmap_start(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_block_bitmap_start2
// file /usr/include/ext2fs/bitops.h line 648
inline unsigned long long int ext2fs_get_block_bitmap_start2(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_generic_bitmap_end
// file /usr/include/ext2fs/bitops.h line 120
extern unsigned int ext2fs_get_generic_bitmap_end(struct ext2fs_struct_generic_bitmap *);
// ext2fs_get_generic_bitmap_start
// file /usr/include/ext2fs/bitops.h line 119
extern unsigned int ext2fs_get_generic_bitmap_start(struct ext2fs_struct_generic_bitmap *);
// ext2fs_get_generic_bmap_end
// file /usr/include/ext2fs/bitops.h line 199
extern unsigned long long int ext2fs_get_generic_bmap_end(struct ext2fs_struct_generic_bitmap *);
// ext2fs_get_generic_bmap_start
// file /usr/include/ext2fs/bitops.h line 198
extern unsigned long long int ext2fs_get_generic_bmap_start(struct ext2fs_struct_generic_bitmap *);
// ext2fs_get_inode_bitmap_end
// file /usr/include/ext2fs/bitops.h line 484
inline unsigned int ext2fs_get_inode_bitmap_end(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_inode_bitmap_end2
// file /usr/include/ext2fs/bitops.h line 663
inline unsigned int ext2fs_get_inode_bitmap_end2(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_inode_bitmap_start
// file /usr/include/ext2fs/bitops.h line 474
inline unsigned int ext2fs_get_inode_bitmap_start(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_inode_bitmap_start2
// file /usr/include/ext2fs/bitops.h line 653
inline unsigned int ext2fs_get_inode_bitmap_start2(struct ext2fs_struct_generic_bitmap *bitmap);
// ext2fs_get_mem
// file /usr/include/ext2fs/ext2fs.h line 1544
inline signed long int ext2fs_get_mem(unsigned long int size, void *ptr);
// ext2fs_get_memzero
// file /usr/include/ext2fs/ext2fs.h line 1555
inline signed long int ext2fs_get_memzero(unsigned long int size, void *ptr);
// ext2fs_group_first_block
// file /usr/include/ext2fs/ext2fs.h line 1719
inline unsigned int ext2fs_group_first_block(struct struct_ext2_filsys *fs, unsigned int group);
// ext2fs_group_first_block2
// file /usr/include/ext2fs/ext2fs.h line 813
extern unsigned long long int ext2fs_group_first_block2(struct struct_ext2_filsys *, unsigned int);
// ext2fs_group_last_block
// file /usr/include/ext2fs/ext2fs.h line 1727
inline unsigned int ext2fs_group_last_block(struct struct_ext2_filsys *fs, unsigned int group);
// ext2fs_group_last_block2
// file /usr/include/ext2fs/ext2fs.h line 814
extern unsigned long long int ext2fs_group_last_block2(struct struct_ext2_filsys *, unsigned int);
// ext2fs_group_of_blk
// file /usr/include/ext2fs/ext2fs.h line 1704
inline unsigned int ext2fs_group_of_blk(struct struct_ext2_filsys *fs, unsigned int blk);
// ext2fs_group_of_blk2
// file /usr/include/ext2fs/ext2fs.h line 812
extern unsigned int ext2fs_group_of_blk2(struct struct_ext2_filsys *, unsigned long long int);
// ext2fs_group_of_ino
// file /usr/include/ext2fs/ext2fs.h line 1711
inline unsigned int ext2fs_group_of_ino(struct struct_ext2_filsys *fs, unsigned int ino);
// ext2fs_inode_data_blocks
// file /usr/include/ext2fs/ext2fs.h line 1732
inline unsigned int ext2fs_inode_data_blocks(struct struct_ext2_filsys *fs, struct ext2_inode *inode);
// ext2fs_inode_data_blocks2
// file /usr/include/ext2fs/ext2fs.h line 816
extern unsigned long long int ext2fs_inode_data_blocks2(struct struct_ext2_filsys *, struct ext2_inode *);
// ext2fs_mark_bb_dirty
// file /usr/include/ext2fs/ext2fs.h line 1680
inline void ext2fs_mark_bb_dirty(struct struct_ext2_filsys *fs);
// ext2fs_mark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 389
inline signed int ext2fs_mark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_mark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 509
inline signed int ext2fs_mark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_mark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 102
extern void ext2fs_mark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *, unsigned int, signed int);
// ext2fs_mark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 202
extern void ext2fs_mark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *, unsigned long long int, unsigned int);
// ext2fs_mark_changed
// file /usr/include/ext2fs/ext2fs.h line 1632
inline void ext2fs_mark_changed(struct struct_ext2_filsys *fs);
// ext2fs_mark_generic_bitmap
// file /usr/include/ext2fs/bitops.h line 110
extern signed int ext2fs_mark_generic_bitmap(struct ext2fs_struct_generic_bitmap *, unsigned int);
// ext2fs_mark_generic_bmap
// file /usr/include/ext2fs/bitops.h line 190
extern signed int ext2fs_mark_generic_bmap(struct ext2fs_struct_generic_bitmap *, unsigned long long int);
// ext2fs_mark_ib_dirty
// file /usr/include/ext2fs/ext2fs.h line 1672
inline void ext2fs_mark_ib_dirty(struct struct_ext2_filsys *fs);
// ext2fs_mark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 410
inline signed int ext2fs_mark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_mark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 529
inline signed int ext2fs_mark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_mark_super_dirty
// file /usr/include/ext2fs/ext2fs.h line 1624
inline void ext2fs_mark_super_dirty(struct struct_ext2_filsys *fs);
// ext2fs_mark_valid
// file /usr/include/ext2fs/ext2fs.h line 1648
inline void ext2fs_mark_valid(struct struct_ext2_filsys *fs);
// ext2fs_open
// file /usr/include/ext2fs/ext2fs.h line 1385
extern signed long int ext2fs_open(const char *, signed int, signed int, unsigned int, struct struct_io_manager *, struct struct_ext2_filsys **);
// ext2fs_resize_mem
// file /usr/include/ext2fs/ext2fs.h line 1605
inline signed long int ext2fs_resize_mem(unsigned long int old_size, unsigned long int size, void *ptr);
// ext2fs_swab16
// file /usr/include/ext2fs/bitops.h line 370
inline unsigned short int ext2fs_swab16(unsigned short int val);
// ext2fs_swab32
// file /usr/include/ext2fs/bitops.h line 375
inline unsigned int ext2fs_swab32(unsigned int val);
// ext2fs_swab64
// file /usr/include/ext2fs/bitops.h line 383
inline unsigned long long int ext2fs_swab64(unsigned long long int val);
// ext2fs_test_bb_dirty
// file /usr/include/ext2fs/ext2fs.h line 1696
inline signed int ext2fs_test_bb_dirty(struct struct_ext2_filsys *fs);
// ext2fs_test_block_bitmap
// file /usr/include/ext2fs/bitops.h line 403
inline signed int ext2fs_test_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_test_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 522
inline signed int ext2fs_test_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_test_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 106
extern signed int ext2fs_test_block_bitmap_range(struct ext2fs_struct_generic_bitmap *, unsigned int, signed int);
// ext2fs_test_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 196
extern signed int ext2fs_test_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *, unsigned long long int, unsigned int);
// ext2fs_test_changed
// file /usr/include/ext2fs/ext2fs.h line 1640
inline signed int ext2fs_test_changed(struct struct_ext2_filsys *fs);
// ext2fs_test_generic_bitmap
// file /usr/include/ext2fs/bitops.h line 114
extern signed int ext2fs_test_generic_bitmap(struct ext2fs_struct_generic_bitmap *, unsigned int);
// ext2fs_test_generic_bmap
// file /usr/include/ext2fs/bitops.h line 194
extern signed int ext2fs_test_generic_bmap(struct ext2fs_struct_generic_bitmap *, unsigned long long int);
// ext2fs_test_ib_dirty
// file /usr/include/ext2fs/ext2fs.h line 1688
inline signed int ext2fs_test_ib_dirty(struct struct_ext2_filsys *fs);
// ext2fs_test_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 424
inline signed int ext2fs_test_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_test_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 543
inline signed int ext2fs_test_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_test_valid
// file /usr/include/ext2fs/ext2fs.h line 1664
inline signed int ext2fs_test_valid(struct struct_ext2_filsys *fs);
// ext2fs_unmark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 396
inline signed int ext2fs_unmark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block);
// ext2fs_unmark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 516
inline signed int ext2fs_unmark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block);
// ext2fs_unmark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 104
extern void ext2fs_unmark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *, unsigned int, signed int);
// ext2fs_unmark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 204
extern void ext2fs_unmark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *, unsigned long long int, unsigned int);
// ext2fs_unmark_generic_bitmap
// file /usr/include/ext2fs/bitops.h line 112
extern signed int ext2fs_unmark_generic_bitmap(struct ext2fs_struct_generic_bitmap *, unsigned int);
// ext2fs_unmark_generic_bmap
// file /usr/include/ext2fs/bitops.h line 192
extern signed int ext2fs_unmark_generic_bmap(struct ext2fs_struct_generic_bitmap *, unsigned long long int);
// ext2fs_unmark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 417
inline signed int ext2fs_unmark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_unmark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 536
inline signed int ext2fs_unmark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode);
// ext2fs_unmark_valid
// file /usr/include/ext2fs/ext2fs.h line 1656
inline void ext2fs_unmark_valid(struct struct_ext2_filsys *fs);
// ext3_mkfs
// file fs_ext2.c line 92
signed int ext3_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// ext3_test
// file fs_ext2.c line 493
signed int ext3_test(char *partition);
// ext4_mkfs
// file fs_ext2.c line 97
signed int ext4_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// ext4_test
// file fs_ext2.c line 498
signed int ext4_test(char *partition);
// extfs_check_compatibility
// file fs_ext2.c line 121
signed int extfs_check_compatibility(unsigned long int compat, unsigned long int incompat, unsigned long int ro_compat);
// extfs_get_fstype_from_compat_flags
// file fs_ext2.c line 102
signed int extfs_get_fstype_from_compat_flags(unsigned int compat, unsigned int incompat, unsigned int ro_compat);
// extfs_get_reqmntopt
// file fs_ext2.c line 503
signed int extfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// extfs_getinfo
// file fs_ext2.c line 325
signed int extfs_getinfo(struct s_dico *d, char *devname);
// extfs_mkfs
// file fs_ext2.c line 140
signed int extfs_mkfs(struct s_dico *d, char *partition, signed int extfstype, char *fsoptions);
// extfs_mount
// file fs_ext2.c line 433
signed int extfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// extfs_test
// file fs_ext2.c line 468
signed int extfs_test(char *partition, signed int extfstype);
// extfs_umount
// file fs_ext2.c line 463
signed int extfs_umount(char *partition, char *mntbuf);
// extract_basename
// file common.h line 34
signed int extract_basename(char *filepath, char *basenamebuf, signed int basenamebufsize);
// extract_dirpath
// file common.h line 33
signed int extract_dirpath(char *filepath, char *dirbuf, signed int dirbufsize);
// extractar_extract_read_objects
// file oper_restore.c line 975
signed int extractar_extract_read_objects(struct s_extractar *exar, signed int *errors, char *destdir, signed int fstype);
// extractar_filesystem_extract
// file oper_restore.c line 1173
signed int extractar_filesystem_extract(struct s_extractar *exar, struct s_dico *dicofs, struct s_strdico *dicocmdline);
// extractar_listing_print_file
// file oper_restore.c line 168
signed int extractar_listing_print_file(struct s_extractar *exar, signed int objtype, char *relpath);
// extractar_read_mainhead
// file oper_restore.c line 1041
signed int extractar_read_mainhead(struct s_extractar *exar, struct s_dico **dicomainhead);
// extractar_restore_attr_everything
// file oper_restore.c line 322
signed int extractar_restore_attr_everything(struct s_extractar *exar, signed int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr);
// extractar_restore_attr_std
// file oper_restore.c line 268
signed int extractar_restore_attr_std(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr);
// extractar_restore_attr_windows
// file oper_restore.c line 225
signed int extractar_restore_attr_windows(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr);
// extractar_restore_attr_xattr
// file oper_restore.c line 184
signed int extractar_restore_attr_xattr(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr);
// extractar_restore_obj_devfile
// file oper_restore.c line 484
signed int extractar_restore_obj_devfile(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype);
// extractar_restore_obj_directory
// file oper_restore.c line 537
signed int extractar_restore_obj_directory(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype);
// extractar_restore_obj_hardlink
// file oper_restore.c line 426
signed int extractar_restore_obj_hardlink(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype);
// extractar_restore_obj_regfile_multi
// file oper_restore.c line 582
signed int extractar_restore_obj_regfile_multi(struct s_extractar *exar, char *destdir, struct s_dico *dicofirstfile, signed int objtype, signed int fstype);
// extractar_restore_obj_regfile_unique
// file oper_restore.c line 740
signed int extractar_restore_obj_regfile_unique(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype);
// extractar_restore_obj_symlink
// file oper_restore.c line 338
signed int extractar_restore_obj_symlink(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype);
// extractar_restore_object
// file oper_restore.c line 899
signed int extractar_restore_object(struct s_extractar *exar, signed int *errors, char *destdir, struct s_dico *dicoattr, signed int fstype);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// filesystem_mount_partition
// file oper_save.c line 909
signed int filesystem_mount_partition(struct s_devinfo_0 *devinfo, struct s_dico *dicofsinfo, unsigned short int fsid);
// fletcher32
// file common.h line 44
unsigned int fletcher32(unsigned char *data, unsigned int len);
// fnmatch
// file /usr/include/fnmatch.h line 56
extern signed int fnmatch(const char *, const char *, signed int);
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// format_fstype
// file fs_ext2.c line 76
char * format_fstype(signed int fstype);
// format_md5
// file common.h line 38
char * format_md5(char *buf, signed int maxbuf, unsigned char *md5bin);
// format_prog_version
// file filesys.h line 52
char * format_prog_version(unsigned long int version, char *bufdat, signed int buflen);
// format_size
// file common.h line 31
char * format_size(unsigned long int size, char *text, signed int max, char units);
// format_stacktrace
// file common.c line 550
signed int format_stacktrace(char *buffer, signed int bufsize);
// format_time
// file common.h line 36
char * format_time(char *buffer, signed int bufsize, unsigned long int t);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fsaprintf
// file error.h line 37
signed int fsaprintf(signed int level, _Bool showerrno, _Bool showloc, const char *file, const char *fct, signed int line, char *format, ...);
// fstat64
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 229
extern signed int fstat64(signed int, struct stat64 *);
// fstatvfs64
// file /usr/include/x86_64-linux-gnu/sys/statvfs.h line 84
extern signed int fstatvfs64(signed int, struct statvfs64 *);
// fsync
// file /usr/include/unistd.h line 956
extern signed int fsync(signed int);
// ftruncate
// file /usr/include/unistd.h line 1019
extern signed int ftruncate(signed int, signed long int);
// gcry_check_version
// file /usr/include/gcrypt.h line 258
const char * gcry_check_version(const char *);
// gcry_cipher_close
// file /usr/include/gcrypt.h line 928
void gcry_cipher_close(struct gcry_cipher_handle *);
// gcry_cipher_decrypt
// file /usr/include/gcrypt.h line 965
unsigned int gcry_cipher_decrypt(struct gcry_cipher_handle *, void *, unsigned long int, const void *, unsigned long int);
// gcry_cipher_encrypt
// file /usr/include/gcrypt.h line 960
unsigned int gcry_cipher_encrypt(struct gcry_cipher_handle *, void *, unsigned long int, const void *, unsigned long int);
// gcry_cipher_open
// file /usr/include/gcrypt.h line 924
unsigned int gcry_cipher_open(struct gcry_cipher_handle **, signed int, signed int, unsigned int);
// gcry_cipher_setiv
// file /usr/include/gcrypt.h line 975
unsigned int gcry_cipher_setiv(struct gcry_cipher_handle *, const void *, unsigned long int);
// gcry_cipher_setkey
// file /usr/include/gcrypt.h line 970
unsigned int gcry_cipher_setkey(struct gcry_cipher_handle *, const void *, unsigned long int);
// gcry_control
// file /usr/include/gcrypt.h line 334
unsigned int gcry_control(enum gcry_ctl_cmds, ...);
// gcry_md_close
// file /usr/include/gcrypt.h line 1188
void gcry_md_close(struct gcry_md_handle *);
// gcry_md_hash_buffer
// file /usr/include/gcrypt.h line 1217
void gcry_md_hash_buffer(signed int, void *, const void *, unsigned long int);
// gcry_md_open
// file /usr/include/gcrypt.h line 1185
unsigned int gcry_md_open(struct gcry_md_handle **, signed int, unsigned int);
// gcry_md_read
// file /usr/include/gcrypt.h line 1210
unsigned char * gcry_md_read(struct gcry_md_handle *, signed int);
// gcry_md_write
// file /usr/include/gcrypt.h line 1206
void gcry_md_write(struct gcry_md_handle *, const void *, unsigned long int);
// gcry_randomize
// file /usr/include/gcrypt.h line 1465
void gcry_randomize(void *, unsigned long int, enum gcry_random_level);
// generate_random_tmpdir
// file common.h line 35
signed int generate_random_tmpdir(char *buffer, signed int bufsize, signed int n);
// generate_random_u32_id
// file common.h line 43
unsigned int generate_random_u32_id(void);
// generic_get_fsrwstatus
// file filesys.c line 95
signed int generic_get_fsrwstatus(char *options);
// generic_get_fstype
// file filesys.h line 49
signed int generic_get_fstype(char *fsname, signed int *fstype);
// generic_get_mntinfo
// file filesys.h line 50
signed int generic_get_mntinfo(char *devname, signed int *readwrite, char *mntbuf, signed int maxmntbuf, char *optbuf, signed int maxoptbuf, char *fsbuf, signed int maxfsbuf);
// generic_get_spacestats
// file filesys.c line 75
signed int generic_get_spacestats(char *dev, char *mnt, char *text, signed int textlen);
// generic_mount
// file filesys.h line 51
signed int generic_mount(char *partition, char *mntbuf, char *fsbuf, char *mntopt, signed int flags);
// generic_umount
// file filesys.h line 53
signed int generic_umount(char *mntbuf);
// get_abort
// file syncthread.h line 25
signed int get_abort();
// get_devinfo
// file devinfo.h line 39
signed int get_devinfo(struct s_devinfo *outdev, char *indevname, signed int min, signed int maj);
// get_interrupted
// file syncthread.h line 27
_Bool get_interrupted();
// get_objtype_name
// file common.h line 41
char * get_objtype_name(signed int objtype);
// get_parent_dir_time_attrib
// file common.h line 28
signed int get_parent_dir_time_attrib(char *filepath, char *parentdirbuf, signed int bufsize, struct timeval *tv);
// get_path_to_volume
// file common.h line 52
signed int get_path_to_volume(char *newvolbuf, signed int bufsize, char *basepath, signed long int curvol);
// get_secthreads
// file syncthread.h line 36
signed int get_secthreads();
// get_stopfillqueue
// file syncthread.h line 31
_Bool get_stopfillqueue();
// get_timeout
// file queue.c line 38
struct timespec get_timeout();
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpass
// file /usr/include/unistd.h line 948
extern char * getpass(const char *);
// getpathtoprog
// file common.c line 254
signed int getpathtoprog(char *buffer, signed int bufsize, char *prog);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// gnu_dev_major
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 27
extern unsigned int gnu_dev_major(unsigned long long int);
// gnu_dev_minor
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 30
extern unsigned int gnu_dev_minor(unsigned long long int);
// inc_secthreads
// file syncthread.h line 34
void inc_secthreads();
// is_dir_empty
// file common.c line 174
signed int is_dir_empty(char *path);
// is_filedir_excluded
// file oper_restore.c line 67
signed int is_filedir_excluded(char *relpath);
// is_magic_valid
// file common.h line 46
signed int is_magic_valid(char *magic);
// jfs_get_reqmntopt
// file fs_jfs.c line 170
signed int jfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// jfs_getinfo
// file fs_jfs.c line 80
signed int jfs_getinfo(struct s_dico *d, char *devname);
// jfs_mkfs
// file fs_jfs.c line 38
signed int jfs_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// jfs_mount
// file fs_jfs.c line 133
signed int jfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// jfs_test
// file fs_jfs.c line 143
signed int jfs_test(char *devname);
// jfs_umount
// file fs_jfs.c line 138
signed int jfs_umount(char *partition, char *mntbuf);
// lchown
// file /usr/include/unistd.h line 483
extern signed int lchown(const char *, unsigned int, unsigned int);
// lgetxattr
// file /usr/include/attr/xattr.h line 45
extern signed long int lgetxattr(const char *, const char *, void *, unsigned long int);
// link
// file /usr/include/unistd.h line 790
extern signed int link(const char *, const char *);
// llistxattr
// file /usr/include/attr/xattr.h line 52
extern signed long int llistxattr(const char *, char *, unsigned long int);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// lockf
// file /usr/include/unistd.h line 1084
extern signed int lockf(signed int, signed int, signed long int);
// logfile_close
// file logfile.h line 24
signed int logfile_close();
// logfile_open
// file logfile.h line 23
signed int logfile_open();
// logfile_write
// file logfile.h line 25
signed int logfile_write(char *str, signed int len);
// lseek
// file /usr/include/unistd.h line 337
extern signed long int lseek(signed int, signed long int, signed int);
// lseek64
// file /usr/include/unistd.h line 345
extern signed long int lseek64(signed int, signed long int, signed int);
// lsetxattr
// file /usr/include/attr/xattr.h line 38
extern signed int lsetxattr(const char *, const char *, const void *, unsigned long int, signed int);
// lstat64
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 275
extern signed int lstat64(const char *, struct stat64 *);
// lutimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 143
extern signed int lutimes(const char *, struct timeval *);
// lzma_auto_decoder
// file /usr/include/lzma/container.h line 361
extern enum anonymous_10 lzma_auto_decoder(struct anonymous_13 *, unsigned long int, unsigned int);
// lzma_code
// file /usr/include/lzma/base.h line 537
extern enum anonymous_10 lzma_code(struct anonymous_13 *, enum anonymous_11);
// lzma_easy_encoder
// file /usr/include/lzma/container.h line 133
extern enum anonymous_10 lzma_easy_encoder(struct anonymous_13 *, unsigned int, enum anonymous_14);
// lzma_end
// file /usr/include/lzma/base.h line 554
extern void lzma_end(struct anonymous_13 *);
// lzma_memlimit_set
// file /usr/include/lzma/base.h line 608
extern enum anonymous_10 lzma_memlimit_set(struct anonymous_13 *, unsigned long int);
// lzo1x_1_compress
// file /usr/include/lzo/lzo1x.h line 74
extern signed int lzo1x_1_compress(const unsigned char *, unsigned long int, unsigned char *, unsigned long int *, void *);
// lzo1x_decompress_safe
// file /usr/include/lzo/lzo1x.h line 62
extern signed int lzo1x_decompress_safe(const unsigned char *, unsigned long int, unsigned char *, unsigned long int *, void *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// mempcpy
// file /usr/include/string.h line 390
extern void * mempcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// mkdir_recursive
// file common.h line 40
signed int mkdir_recursive(char *path);
// mknod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 335
extern signed int mknod(const char *, unsigned int, unsigned long int);
// mount
// file /usr/include/x86_64-linux-gnu/sys/mount.h line 135
extern signed int mount(const char *, const char *, const char *, unsigned long int, const void *);
// ntfs_get_reqmntopt
// file fs_ntfs.c line 244
signed int ntfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// ntfs_getinfo
// file fs_ntfs.c line 79
signed int ntfs_getinfo(struct s_dico *d, char *devname);
// ntfs_mkfs
// file fs_ntfs.c line 37
signed int ntfs_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// ntfs_mount
// file fs_ntfs.c line 132
signed int ntfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// ntfs_replace_uuid
// file fs_ntfs.c line 253
signed int ntfs_replace_uuid(char *devname, unsigned long int uuid);
// ntfs_test
// file fs_ntfs.c line 222
signed int ntfs_test(char *devname);
// ntfs_umount
// file fs_ntfs.c line 204
signed int ntfs_umount(char *partition, char *mntbuf);
// open64
// file /usr/include/fcntl.h line 156
extern signed int open64(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// oper_probe
// file oper_probe.h line 21
signed int oper_probe(_Bool details);
// oper_restore
// file oper_restore.h line 23
signed int oper_restore(char *archive, signed int argc, char **argv, signed int oper);
// oper_save
// file oper_save.h line 21
signed int oper_save(char *archive, signed int argc, char **argv, signed int archtype);
// options_destroy
// file options.h line 49
signed int options_destroy();
// options_init
// file options.h line 48
signed int options_init();
// options_select_compress_level
// file options.h line 50
signed int options_select_compress_level(signed int opt);
// partlist_getinfo
// file oper_probe.c line 149
char * partlist_getinfo(char *bufdat, signed int bufsize, struct s_devinfo *blkdev, signed int item);
// partlist_getlist
// file oper_probe.c line 38
signed int partlist_getlist(struct s_devinfo *blkdev, signed int maxblkdev, signed int *diskcount, signed int *partcount);
// path_force_extension
// file common.h line 30
signed int path_force_extension(char *buf, signed int bufsize, char *origpath, char *ext);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_cmdline
// file fsarchiver.c line 140
signed int process_cmdline(signed int argc, char **argv);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_2 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_2 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_2 *, const union anonymous_6 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_2 *, union anonymous_1 *, struct timespec *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_1 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_1 *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_1 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_6 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous_6 *, signed int);
// queue_add_block
// file queue.h line 96
signed long int queue_add_block(struct s_queue *q, struct s_blockinfo *blkinfo, signed int status);
// queue_add_header
// file queue.h line 97
signed long int queue_add_header(struct s_queue *q, struct s_dico *d, char *magic, unsigned short int fsid);
// queue_add_header_internal
// file queue.c line 261
signed long int queue_add_header_internal(struct s_queue *q, struct s_headinfo *headinfo);
// queue_check_next_item
// file queue.h line 92
signed long int queue_check_next_item(struct s_queue *q, signed int *type, char *magic);
// queue_count
// file queue.h line 89
signed long int queue_count(struct s_queue *q);
// queue_count_items_todo
// file queue.h line 93
signed long int queue_count_items_todo(struct s_queue *q);
// queue_count_status
// file queue.c line 165
signed long int queue_count_status(struct s_queue *q, signed int status);
// queue_dequeue_block
// file queue.h line 110
signed long int queue_dequeue_block(struct s_queue *q, struct s_blockinfo *blkinfo);
// queue_dequeue_first
// file queue.h line 111
signed long int queue_dequeue_first(struct s_queue *q, signed int *type, struct s_headinfo *headinfo, struct s_blockinfo *blkinfo);
// queue_dequeue_header
// file queue.h line 108
signed long int queue_dequeue_header(struct s_queue *q, struct s_dico **d, char *magicbuf, unsigned short int *fsid);
// queue_dequeue_header_internal
// file queue.c line 555
signed long int queue_dequeue_header_internal(struct s_queue *q, struct s_headinfo *headinfo);
// queue_destroy
// file queue.h line 86
signed long int queue_destroy(struct s_queue *q);
// queue_destroy_first_item
// file queue.h line 100
signed long int queue_destroy_first_item(struct s_queue *q);
// queue_get_end_of_queue
// file queue.h line 104
_Bool queue_get_end_of_queue(struct s_queue *q);
// queue_get_first_block_todo
// file queue.h line 107
signed long int queue_get_first_block_todo(struct s_queue *q, struct s_blockinfo *blkinfo);
// queue_init
// file queue.h line 85
signed long int queue_init(struct s_queue *q, signed long int blkmax);
// queue_replace_block
// file queue.h line 99
signed long int queue_replace_block(struct s_queue *q, signed long int itemnum, struct s_blockinfo *blkinfo, signed int newstatus);
// queue_set_end_of_queue
// file queue.h line 103
signed long int queue_set_end_of_queue(struct s_queue *q, _Bool state);
// queuelocked_get_end_of_queue
// file queue.c line 135
_Bool queuelocked_get_end_of_queue(struct s_queue *q);
// queuelocked_is_first_item_ready
// file queue.c line 609
_Bool queuelocked_is_first_item_ready(struct s_queue *q);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 165
extern struct dirent * readdir(struct __dirstream *);
// readlink
// file /usr/include/unistd.h line 809
extern signed long int readlink(const char *, char *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// realpath
// file /usr/include/stdlib.h line 733
extern char * realpath(const char *, char *);
// regfile_exists
// file common.h line 45
signed int regfile_exists(char *filepath);
// regmulti_count
// file regmulti.c line 63
signed int regmulti_count(struct s_regmulti *m, struct s_dico *header, char *data, unsigned int datsize);
// regmulti_empty
// file regmulti.h line 42
signed int regmulti_empty(struct s_regmulti *m);
// regmulti_init
// file regmulti.h line 43
signed int regmulti_init(struct s_regmulti *m, unsigned int maxblksize);
// regmulti_rest_addheader
// file regmulti.h line 48
signed int regmulti_rest_addheader(struct s_regmulti *m, struct s_dico *header);
// regmulti_rest_getfile
// file regmulti.h line 50
signed int regmulti_rest_getfile(struct s_regmulti *m, signed int index, struct s_dico **filehead, char *data, unsigned long int *datsize, unsigned int bufsize);
// regmulti_rest_setdatablock
// file regmulti.h line 49
signed int regmulti_rest_setdatablock(struct s_regmulti *m, char *data, unsigned int datsize);
// regmulti_save_addfile
// file regmulti.h line 46
signed int regmulti_save_addfile(struct s_regmulti *m, struct s_dico *header, char *data, unsigned int datsize);
// regmulti_save_enough_space_for_new_file
// file regmulti.h line 45
_Bool regmulti_save_enough_space_for_new_file(struct s_regmulti *m, unsigned int filesize);
// regmulti_save_enqueue
// file regmulti.h line 47
signed int regmulti_save_enqueue(struct s_regmulti *m, struct s_queue *q, signed int fsid);
// reiser4_get_reqmntopt
// file fs_reiser4.c line 183
signed int reiser4_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// reiser4_getinfo
// file fs_reiser4.c line 74
signed int reiser4_getinfo(struct s_dico *d, char *devname);
// reiser4_mkfs
// file fs_reiser4.c line 38
signed int reiser4_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// reiser4_mount
// file fs_reiser4.c line 146
signed int reiser4_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// reiser4_test
// file fs_reiser4.c line 156
signed int reiser4_test(char *devname);
// reiser4_umount
// file fs_reiser4.c line 151
signed int reiser4_umount(char *partition, char *mntbuf);
// reiserfs_get_reqmntopt
// file fs_reiserfs.c line 178
signed int reiserfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// reiserfs_getinfo
// file fs_reiserfs.c line 74
signed int reiserfs_getinfo(struct s_dico *d, char *devname);
// reiserfs_mkfs
// file fs_reiserfs.c line 38
signed int reiserfs_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// reiserfs_mount
// file fs_reiserfs.c line 140
signed int reiserfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// reiserfs_test
// file fs_reiserfs.c line 150
signed int reiserfs_test(char *devname);
// reiserfs_umount
// file fs_reiserfs.c line 145
signed int reiserfs_umount(char *partition, char *mntbuf);
// rmdir
// file /usr/include/unistd.h line 835
extern signed int rmdir(const char *);
// scanf
// file /usr/include/stdio.h line 431
extern signed int scanf(const char *, ...);
// set_stopfillqueue
// file syncthread.h line 30
void set_stopfillqueue();
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous *);
// sigismember
// file /usr/include/signal.h line 227
extern signed int sigismember(const struct anonymous *, signed int);
// sigpending
// file /usr/include/signal.h line 263
extern signed int sigpending(struct anonymous *);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous *, struct anonymous *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 216
extern signed int stat(const char *, struct stat *);
// stat64
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 227
extern signed int stat64(const char *, struct stat64 *);
// statfs
// file /usr/include/x86_64-linux-gnu/sys/statfs.h line 35
extern signed int statfs(const char *, struct statfs *);
// stats_errcount
// file common.h line 50
unsigned long int stats_errcount(struct s_stats stats);
// stats_show
// file common.h line 49
signed int stats_show(struct s_stats stats, signed int fsid);
// statvfs64
// file /usr/include/x86_64-linux-gnu/sys/statvfs.h line 65
extern signed int statvfs64(const char *, struct statvfs64 *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdico_alloc
// file strdico.h line 38
struct s_strdico * strdico_alloc();
// strdico_destroy
// file strdico.h line 39
signed int strdico_destroy(struct s_strdico *d);
// strdico_get_s64
// file strdico.h line 44
signed int strdico_get_s64(struct s_strdico *d, signed long int *value, const char *key);
// strdico_get_string
// file strdico.h line 43
signed int strdico_get_string(struct s_strdico *d, char *outbuffer, signed int outbufsize, const char *key);
// strdico_parse_string
// file strdico.h line 41
signed int strdico_parse_string(struct s_strdico *d, const char *strdefs);
// strdico_print
// file strdico.c line 286
signed int strdico_print(struct s_strdico *d);
// strdico_set_valid_keys
// file strdico.h line 40
signed int strdico_set_valid_keys(struct s_strdico *d, const char *keys);
// strdico_set_value
// file strdico.c line 145
signed int strdico_set_value(struct s_strdico *d, const char *key, const char *value);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// stream_readline
// file common.h line 37
signed int stream_readline(struct _IO_FILE *f, char *buf, signed int buflen);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlcatf
// file common.h line 47
char * strlcatf(char *dest, signed int destbufsize, char *format, ...);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strlist_add
// file strlist.h line 40
signed int strlist_add(struct s_strlist *l, char *str);
// strlist_count
// file strlist.h line 46
signed int strlist_count(struct s_strlist *l);
// strlist_destroy
// file strlist.h line 37
signed int strlist_destroy(struct s_strlist *l);
// strlist_empty
// file strlist.h line 39
signed int strlist_empty(struct s_strlist *l);
// strlist_exists
// file strlist.h line 42
signed int strlist_exists(struct s_strlist *l, char *str);
// strlist_getitem
// file strlist.h line 43
signed int strlist_getitem(struct s_strlist *l, signed int index, char *buf, signed int bufsize);
// strlist_init
// file strlist.h line 38
signed int strlist_init(struct s_strlist *l);
// strlist_merge
// file strlist.h line 44
char * strlist_merge(struct s_strlist *l, char *bufdat, signed int bufsize, char sep);
// strlist_remove
// file strlist.c line 133
signed int strlist_remove(struct s_strlist *l, char *str);
// strlist_show
// file strlist.c line 272
signed int strlist_show(struct s_strlist *l);
// strlist_split
// file strlist.h line 45
signed int strlist_split(struct s_strlist *l, char *text, char sep);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strnlen
// file /usr/include/string.h line 405
extern unsigned long int strnlen(const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtok_r
// file /usr/include/string.h line 358
extern char * strtok_r(char *, const char *, char ** restrict );
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// symlink
// file /usr/include/unistd.h line 803
extern signed int symlink(const char *, const char *);
// sync
// file /usr/include/unistd.h line 972
extern void sync(void);
// thread_comp_fct
// file thread_comp.h line 23
void * thread_comp_fct(void *args);
// thread_decomp_fct
// file thread_comp.h line 24
void * thread_decomp_fct(void *args);
// thread_reader_fct
// file thread_archio.h line 24
void * thread_reader_fct(void *args);
// thread_writer_fct
// file thread_archio.h line 23
void * thread_writer_fct(void *args);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// truncate
// file /usr/include/unistd.h line 997
extern signed int truncate(const char *, signed long int);
// umount2
// file /usr/include/x86_64-linux-gnu/sys/mount.h line 143
extern signed int umount2(const char *, signed int);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// uncompress
// file /usr/include/zlib.h line 1197
extern signed int uncompress(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int);
// uncompress_block_bzip2
// file comp_bzip2.h line 22
signed int uncompress_block_bzip2(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf);
// uncompress_block_gzip
// file comp_gzip.h line 22
signed int uncompress_block_gzip(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf);
// uncompress_block_lzma
// file comp_lzma.h line 24
signed int uncompress_block_lzma(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf);
// uncompress_block_lzo
// file comp_lzo.h line 26
signed int uncompress_block_lzo(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file fsarchiver.c line 47
void usage(char *progname, _Bool examples);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// utimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 138
extern signed int utimes(const char *, struct timeval *);
// uuid_unparse_lower
// file /usr/include/uuid/uuid.h line 92
extern void uuid_unparse_lower(unsigned char *, char *);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// wordexp
// file /usr/include/wordexp.h line 62
extern signed int wordexp(const char *, struct anonymous_4 *, signed int);
// wordfree
// file /usr/include/wordexp.h line 66
extern void wordfree(struct anonymous_4 *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writebuf_add_block
// file writebuf.h line 37
signed int writebuf_add_block(struct s_writebuf *wb, struct s_blockinfo *blkinfo, unsigned int archid, unsigned short int fsid);
// writebuf_add_data
// file writebuf.c line 63
signed int writebuf_add_data(struct s_writebuf *wb, void *data, unsigned long int size);
// writebuf_add_dico
// file writebuf.c line 89
signed int writebuf_add_dico(struct s_writebuf *wb, struct s_dico *d, char *magic);
// writebuf_add_header
// file writebuf.h line 36
signed int writebuf_add_header(struct s_writebuf *wb, struct s_dico *d, char *magic, unsigned int archid, unsigned short int fsid);
// writebuf_alloc
// file writebuf.h line 32
struct s_writebuf * writebuf_alloc();
// writebuf_destroy
// file writebuf.h line 33
signed int writebuf_destroy(struct s_writebuf *wb);
// xfs_check_compatibility
// file fs_xfs.c line 37
signed int xfs_check_compatibility(unsigned long int compat, unsigned long int ro_compat, unsigned long int incompat, unsigned long int log_incompat);
// xfs_get_reqmntopt
// file fs_xfs.c line 361
signed int xfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt);
// xfs_getinfo
// file fs_xfs.c line 223
signed int xfs_getinfo(struct s_dico *d, char *devname);
// xfs_mkfs
// file fs_xfs.c line 68
signed int xfs_mkfs(struct s_dico *d, char *partition, char *fsoptions);
// xfs_mount
// file fs_xfs.c line 322
signed int xfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo);
// xfs_test
// file fs_xfs.c line 332
signed int xfs_test(char *devname);
// xfs_umount
// file fs_xfs.c line 327
signed int xfs_umount(char *partition, char *mntbuf);

struct s_devinfo
{
  // devtype
  signed int devtype;
  // devname
  char devname[256l];
  // longname
  char longname[256l];
  // label
  char label[512l];
  // uuid
  char uuid[128l];
  // fsname
  char fsname[128l];
  // name
  char name[512l];
  // txtsize
  char txtsize[64l];
  // devsize
  unsigned long int devsize;
  // minor
  signed int minor;
  // major
  signed int major;
  // rdev
  unsigned long int rdev;
};

struct anonymous_12
{
  // alloc
  void * (*alloc)(void *, unsigned long int, unsigned long int);
  // free
  void (*free)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous_13
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
  struct anonymous_12 *allocator;
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
  enum anonymous_9 reserved_enum1;
  // reserved_enum2
  enum anonymous_9 reserved_enum2;
};

struct anonymous
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_8
{
  // __val
  signed int __val[2l];
};

struct anonymous_0
{
  // len
  unsigned int len : 24;
  // addr1
  unsigned int addr1 : 8;
  // addr2
  unsigned int addr2;
};

struct anonymous_5
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

struct anonymous_19
{
  // l_i_blocks_hi
  unsigned short int l_i_blocks_hi;
  // l_i_file_acl_high
  unsigned short int l_i_file_acl_high;
  // l_i_uid_high
  unsigned short int l_i_uid_high;
  // l_i_gid_high
  unsigned short int l_i_gid_high;
  // l_i_checksum_lo
  unsigned short int l_i_checksum_lo;
  // l_i_reserved
  unsigned short int l_i_reserved;
};

struct anonymous_18
{
  // h_i_translator
  unsigned int h_i_translator;
};

struct anonymous_17
{
  // l_i_version
  unsigned int l_i_version;
};

struct anonymous_4
{
  // we_wordc
  unsigned long int we_wordc;
  // we_wordv
  char **we_wordv;
  // we_offs
  unsigned long int we_offs;
};

struct anonymous_20
{
  // h_i_frag
  unsigned char h_i_frag;
  // h_i_fsize
  unsigned char h_i_fsize;
  // h_i_mode_high
  unsigned short int h_i_mode_high;
  // h_i_uid_high
  unsigned short int h_i_uid_high;
  // h_i_gid_high
  unsigned short int h_i_gid_high;
  // h_i_author
  unsigned int h_i_author;
};

struct anonymous_7
{
  // counter
  volatile signed int counter;
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_2
{
  // __data
  struct anonymous_5 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_16
{
  // linux2
  struct anonymous_19 linux2;
  // hurd2
  struct anonymous_20 hurd2;
};

union anonymous_15
{
  // linux1
  struct anonymous_17 linux1;
  // hurd1
  struct anonymous_18 hurd1;
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

struct btrfs_dev_item
{
  // devid
  unsigned long long int devid;
  // total_bytes
  unsigned long long int total_bytes;
  // bytes_used
  unsigned long long int bytes_used;
  // io_align
  unsigned int io_align;
  // io_width
  unsigned int io_width;
  // sector_size
  unsigned int sector_size;
  // type
  unsigned long long int type;
  // generation
  unsigned long long int generation;
  // start_offset
  unsigned long long int start_offset;
  // dev_group
  unsigned int dev_group;
  // seek_speed
  unsigned char seek_speed;
  // bandwidth
  unsigned char bandwidth;
  // uuid
  unsigned char uuid[16l];
  // fsid
  unsigned char fsid[16l];
} __attribute__ ((__packed__));

struct btrfs_super_block
{
  // csum
  unsigned char csum[32l];
  // fsid
  unsigned char fsid[16l];
  // bytenr
  unsigned long long int bytenr;
  // flags
  unsigned long long int flags;
  // magic
  unsigned long long int magic;
  // generation
  unsigned long long int generation;
  // root
  unsigned long long int root;
  // chunk_root
  unsigned long long int chunk_root;
  // log_root
  unsigned long long int log_root;
  // log_root_transid
  unsigned long long int log_root_transid;
  // total_bytes
  unsigned long long int total_bytes;
  // bytes_used
  unsigned long long int bytes_used;
  // root_dir_objectid
  unsigned long long int root_dir_objectid;
  // num_devices
  unsigned long long int num_devices;
  // sectorsize
  unsigned int sectorsize;
  // nodesize
  unsigned int nodesize;
  // leafsize
  unsigned int leafsize;
  // stripesize
  unsigned int stripesize;
  // sys_chunk_array_size
  unsigned int sys_chunk_array_size;
  // chunk_root_generation
  unsigned long long int chunk_root_generation;
  // compat_flags
  unsigned long long int compat_flags;
  // compat_ro_flags
  unsigned long long int compat_ro_flags;
  // incompat_flags
  unsigned long long int incompat_flags;
  // csum_type
  unsigned short int csum_type;
  // root_level
  unsigned char root_level;
  // chunk_root_level
  unsigned char chunk_root_level;
  // log_root_level
  unsigned char log_root_level;
  // dev_item
  struct btrfs_dev_item dev_item;
  // label
  char label[256l];
  // reserved
  unsigned long long int reserved[32l];
  // sys_chunk_array
  unsigned char sys_chunk_array[2048l];
} __attribute__ ((__packed__));

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

struct ext2_inode
{
  // i_mode
  unsigned short int i_mode;
  // i_uid
  unsigned short int i_uid;
  // i_size
  unsigned int i_size;
  // i_atime
  unsigned int i_atime;
  // i_ctime
  unsigned int i_ctime;
  // i_mtime
  unsigned int i_mtime;
  // i_dtime
  unsigned int i_dtime;
  // i_gid
  unsigned short int i_gid;
  // i_links_count
  unsigned short int i_links_count;
  // i_blocks
  unsigned int i_blocks;
  // i_flags
  unsigned int i_flags;
  // osd1
  union anonymous_15 osd1;
  // i_block
  unsigned int i_block[15l];
  // i_generation
  unsigned int i_generation;
  // i_file_acl
  unsigned int i_file_acl;
  // i_size_high
  unsigned int i_size_high;
  // i_faddr
  unsigned int i_faddr;
  // osd2
  union anonymous_16 osd2;
};

struct ext2_super_block
{
  // s_inodes_count
  unsigned int s_inodes_count;
  // s_blocks_count
  unsigned int s_blocks_count;
  // s_r_blocks_count
  unsigned int s_r_blocks_count;
  // s_free_blocks_count
  unsigned int s_free_blocks_count;
  // s_free_inodes_count
  unsigned int s_free_inodes_count;
  // s_first_data_block
  unsigned int s_first_data_block;
  // s_log_block_size
  unsigned int s_log_block_size;
  // s_log_cluster_size
  unsigned int s_log_cluster_size;
  // s_blocks_per_group
  unsigned int s_blocks_per_group;
  // s_clusters_per_group
  unsigned int s_clusters_per_group;
  // s_inodes_per_group
  unsigned int s_inodes_per_group;
  // s_mtime
  unsigned int s_mtime;
  // s_wtime
  unsigned int s_wtime;
  // s_mnt_count
  unsigned short int s_mnt_count;
  // s_max_mnt_count
  signed short int s_max_mnt_count;
  // s_magic
  unsigned short int s_magic;
  // s_state
  unsigned short int s_state;
  // s_errors
  unsigned short int s_errors;
  // s_minor_rev_level
  unsigned short int s_minor_rev_level;
  // s_lastcheck
  unsigned int s_lastcheck;
  // s_checkinterval
  unsigned int s_checkinterval;
  // s_creator_os
  unsigned int s_creator_os;
  // s_rev_level
  unsigned int s_rev_level;
  // s_def_resuid
  unsigned short int s_def_resuid;
  // s_def_resgid
  unsigned short int s_def_resgid;
  // s_first_ino
  unsigned int s_first_ino;
  // s_inode_size
  unsigned short int s_inode_size;
  // s_block_group_nr
  unsigned short int s_block_group_nr;
  // s_feature_compat
  unsigned int s_feature_compat;
  // s_feature_incompat
  unsigned int s_feature_incompat;
  // s_feature_ro_compat
  unsigned int s_feature_ro_compat;
  // s_uuid
  unsigned char s_uuid[16l];
  // s_volume_name
  char s_volume_name[16l];
  // s_last_mounted
  char s_last_mounted[64l];
  // s_algorithm_usage_bitmap
  unsigned int s_algorithm_usage_bitmap;
  // s_prealloc_blocks
  unsigned char s_prealloc_blocks;
  // s_prealloc_dir_blocks
  unsigned char s_prealloc_dir_blocks;
  // s_reserved_gdt_blocks
  unsigned short int s_reserved_gdt_blocks;
  // s_journal_uuid
  unsigned char s_journal_uuid[16l];
  // s_journal_inum
  unsigned int s_journal_inum;
  // s_journal_dev
  unsigned int s_journal_dev;
  // s_last_orphan
  unsigned int s_last_orphan;
  // s_hash_seed
  unsigned int s_hash_seed[4l];
  // s_def_hash_version
  unsigned char s_def_hash_version;
  // s_jnl_backup_type
  unsigned char s_jnl_backup_type;
  // s_desc_size
  unsigned short int s_desc_size;
  // s_default_mount_opts
  unsigned int s_default_mount_opts;
  // s_first_meta_bg
  unsigned int s_first_meta_bg;
  // s_mkfs_time
  unsigned int s_mkfs_time;
  // s_jnl_blocks
  unsigned int s_jnl_blocks[17l];
  // s_blocks_count_hi
  unsigned int s_blocks_count_hi;
  // s_r_blocks_count_hi
  unsigned int s_r_blocks_count_hi;
  // s_free_blocks_hi
  unsigned int s_free_blocks_hi;
  // s_min_extra_isize
  unsigned short int s_min_extra_isize;
  // s_want_extra_isize
  unsigned short int s_want_extra_isize;
  // s_flags
  unsigned int s_flags;
  // s_raid_stride
  unsigned short int s_raid_stride;
  // s_mmp_update_interval
  unsigned short int s_mmp_update_interval;
  // s_mmp_block
  unsigned long long int s_mmp_block;
  // s_raid_stripe_width
  unsigned int s_raid_stripe_width;
  // s_log_groups_per_flex
  unsigned char s_log_groups_per_flex;
  // s_reserved_char_pad
  unsigned char s_reserved_char_pad;
  // s_reserved_pad
  unsigned short int s_reserved_pad;
  // s_kbytes_written
  unsigned long long int s_kbytes_written;
  // s_snapshot_inum
  unsigned int s_snapshot_inum;
  // s_snapshot_id
  unsigned int s_snapshot_id;
  // s_snapshot_r_blocks_count
  unsigned long long int s_snapshot_r_blocks_count;
  // s_snapshot_list
  unsigned int s_snapshot_list;
  // s_error_count
  unsigned int s_error_count;
  // s_first_error_time
  unsigned int s_first_error_time;
  // s_first_error_ino
  unsigned int s_first_error_ino;
  // s_first_error_block
  unsigned long long int s_first_error_block;
  // s_first_error_func
  unsigned char s_first_error_func[32l];
  // s_first_error_line
  unsigned int s_first_error_line;
  // s_last_error_time
  unsigned int s_last_error_time;
  // s_last_error_ino
  unsigned int s_last_error_ino;
  // s_last_error_line
  unsigned int s_last_error_line;
  // s_last_error_block
  unsigned long long int s_last_error_block;
  // s_last_error_func
  unsigned char s_last_error_func[32l];
  // s_mount_opts
  unsigned char s_mount_opts[64l];
  // s_usr_quota_inum
  unsigned int s_usr_quota_inum;
  // s_grp_quota_inum
  unsigned int s_grp_quota_inum;
  // s_overhead_blocks
  unsigned int s_overhead_blocks;
  // s_backup_bgs
  unsigned int s_backup_bgs[2l];
  // s_reserved
  unsigned int s_reserved[106l];
  // s_checksum
  unsigned int s_checksum;
};

struct fsa_ext2_sb
{
  // s_inodes_count
  unsigned int s_inodes_count;
  // s_blocks_count
  unsigned int s_blocks_count;
  // s_r_blocks_count
  unsigned int s_r_blocks_count;
  // s_free_blocks_count
  unsigned int s_free_blocks_count;
  // s_free_inodes_count
  unsigned int s_free_inodes_count;
  // s_first_data_block
  unsigned int s_first_data_block;
  // s_log_block_size
  unsigned int s_log_block_size;
  // s_log_frag_size
  signed int s_log_frag_size;
  // s_blocks_per_group
  unsigned int s_blocks_per_group;
  // s_frags_per_group
  unsigned int s_frags_per_group;
  // s_inodes_per_group
  unsigned int s_inodes_per_group;
  // s_mtime
  unsigned int s_mtime;
  // s_wtime
  unsigned int s_wtime;
  // s_mnt_count
  unsigned short int s_mnt_count;
  // s_max_mnt_count
  signed short int s_max_mnt_count;
  // s_magic
  unsigned short int s_magic;
  // s_state
  unsigned short int s_state;
  // s_errors
  unsigned short int s_errors;
  // s_minor_rev_level
  unsigned short int s_minor_rev_level;
  // s_lastcheck
  unsigned int s_lastcheck;
  // s_checkinterval
  unsigned int s_checkinterval;
  // s_creator_os
  unsigned int s_creator_os;
  // s_rev_level
  unsigned int s_rev_level;
  // s_def_resuid
  unsigned short int s_def_resuid;
  // s_def_resgid
  unsigned short int s_def_resgid;
  // s_first_ino
  unsigned int s_first_ino;
  // s_inode_size
  unsigned short int s_inode_size;
  // s_block_group_nr
  unsigned short int s_block_group_nr;
  // s_feature_compat
  unsigned int s_feature_compat;
  // s_feature_incompat
  unsigned int s_feature_incompat;
  // s_feature_ro_compat
  unsigned int s_feature_ro_compat;
  // s_uuid
  unsigned char s_uuid[16l];
  // s_volume_name
  char s_volume_name[16l];
  // s_last_mounted
  char s_last_mounted[64l];
  // s_algorithm_usage_bitmap
  unsigned int s_algorithm_usage_bitmap;
  // s_prealloc_blocks
  unsigned char s_prealloc_blocks;
  // s_prealloc_dir_blocks
  unsigned char s_prealloc_dir_blocks;
  // s_reserved_gdt_blocks
  unsigned short int s_reserved_gdt_blocks;
  // s_journal_uuid
  unsigned char s_journal_uuid[16l];
  // s_journal_inum
  unsigned int s_journal_inum;
  // s_journal_dev
  unsigned int s_journal_dev;
  // s_last_orphan
  unsigned int s_last_orphan;
  // s_hash_seed
  unsigned int s_hash_seed[4l];
  // s_def_hash_version
  unsigned char s_def_hash_version;
  // s_jnl_backup_type
  unsigned char s_jnl_backup_type;
  // s_desc_size
  unsigned short int s_desc_size;
  // s_default_mount_opts
  unsigned int s_default_mount_opts;
  // s_first_meta_bg
  unsigned int s_first_meta_bg;
  // s_mkfs_time
  unsigned int s_mkfs_time;
  // s_jnl_blocks
  unsigned int s_jnl_blocks[17l];
  // s_blocks_count_hi
  unsigned int s_blocks_count_hi;
  // s_r_blocks_count_hi
  unsigned int s_r_blocks_count_hi;
  // s_free_blocks_hi
  unsigned int s_free_blocks_hi;
  // s_min_extra_isize
  unsigned short int s_min_extra_isize;
  // s_want_extra_isize
  unsigned short int s_want_extra_isize;
  // s_flags
  unsigned int s_flags;
  // s_raid_stride
  unsigned short int s_raid_stride;
  // s_mmp_interval
  unsigned short int s_mmp_interval;
  // s_mmp_block
  unsigned long int s_mmp_block;
  // s_raid_stripe_width
  unsigned int s_raid_stripe_width;
  // s_log_groups_per_flex
  unsigned char s_log_groups_per_flex;
  // s_reserved_char_pad
  unsigned char s_reserved_char_pad;
  // s_reserved_pad
  unsigned short int s_reserved_pad;
  // s_reserved
  unsigned int s_reserved[162l];
};

struct gcry_md_handle
{
  // ctx
  struct gcry_md_context *ctx;
  // bufpos
  signed int bufpos;
  // bufsize
  signed int bufsize;
  // buf
  unsigned char buf[1l];
};

struct gcry_thread_cbs
{
  // option
  unsigned int option;
};

struct timestruc_t
{
  // tv_sec
  unsigned int tv_sec;
  // tv_nsec
  unsigned int tv_nsec;
};

struct jfs_superblock
{
  // s_magic
  char s_magic[4l];
  // s_version
  unsigned int s_version;
  // s_size
  unsigned long int s_size;
  // s_bsize
  unsigned int s_bsize;
  // s_l2bsize
  unsigned short int s_l2bsize;
  // s_l2bfactor
  unsigned short int s_l2bfactor;
  // s_pbsize
  unsigned int s_pbsize;
  // s_l2pbsize
  unsigned short int s_l2pbsize;
  // pad
  unsigned short int pad;
  // s_agsize
  unsigned int s_agsize;
  // s_flag
  unsigned int s_flag;
  // s_state
  unsigned int s_state;
  // s_compress
  unsigned int s_compress;
  // s_ait2
  struct anonymous_0 s_ait2;
  // s_aim2
  struct anonymous_0 s_aim2;
  // s_logdev
  unsigned int s_logdev;
  // s_logserial
  unsigned int s_logserial;
  // s_logpxd
  struct anonymous_0 s_logpxd;
  // s_fsckpxd
  struct anonymous_0 s_fsckpxd;
  // s_time
  struct timestruc_t s_time;
  // s_fsckloglen
  unsigned int s_fsckloglen;
  // s_fscklog
  signed char s_fscklog;
  // s_fpack
  char s_fpack[11l];
  // s_xsize
  unsigned long int s_xsize;
  // s_xfsckpxd
  struct anonymous_0 s_xfsckpxd;
  // s_xlogpxd
  struct anonymous_0 s_xlogpxd;
  // s_uuid
  char s_uuid[16l];
  // s_label
  char s_label[16l];
  // s_loguuid
  char s_loguuid[16l];
};

struct lzo_callback_t
{
  // nalloc
  void * (*nalloc)(struct lzo_callback_t *, unsigned long int, unsigned long int);
  // nfree
  void (*nfree)(struct lzo_callback_t *, void *);
  // nprogress
  void (*nprogress)(struct lzo_callback_t *, unsigned long int, unsigned long int, signed int);
  // user1
  void *user1;
  // user2
  unsigned long int user2;
  // user3
  unsigned long int user3;
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

struct reiser4_master_sb
{
  // magic
  char magic[16l];
  // disk_plugin_id
  unsigned short int disk_plugin_id;
  // blocksize
  unsigned short int blocksize;
  // uuid
  char uuid[16l];
  // label
  char label[16l];
  // diskmap
  unsigned long int diskmap;
} __attribute__ ((__packed__));

struct reiserfs_super_block_v1
{
  // s_block_count
  unsigned int s_block_count;
  // s_free_blocks
  unsigned int s_free_blocks;
  // s_root_block
  unsigned int s_root_block;
  // s_journal_block
  unsigned int s_journal_block;
  // s_journal_dev
  unsigned int s_journal_dev;
  // s_orig_journal_size
  unsigned int s_orig_journal_size;
  // s_journal_trans_max
  unsigned int s_journal_trans_max;
  // s_journal_block_count
  unsigned int s_journal_block_count;
  // s_journal_max_batch
  unsigned int s_journal_max_batch;
  // s_journal_max_commit_age
  unsigned int s_journal_max_commit_age;
  // s_journal_max_trans_age
  unsigned int s_journal_max_trans_age;
  // s_blocksize
  unsigned short int s_blocksize;
  // s_oid_maxsize
  unsigned short int s_oid_maxsize;
  // s_oid_cursize
  unsigned short int s_oid_cursize;
  // s_state
  unsigned short int s_state;
  // s_magic
  char s_magic[12l];
  // s_hash_function_code
  unsigned int s_hash_function_code;
  // s_tree_height
  unsigned short int s_tree_height;
  // s_bmap_nr
  unsigned short int s_bmap_nr;
  // s_reserved
  unsigned short int s_reserved;
} __attribute__ ((__packed__));

struct reiserfs_super_block
{
  // s_v1
  struct reiserfs_super_block_v1 s_v1;
  // s_inode_generation
  unsigned int s_inode_generation;
  // s_flags
  unsigned int s_flags;
  // s_uuid
  unsigned char s_uuid[16l];
  // s_label
  unsigned char s_label[16l];
  // s_unused
  char s_unused[88l];
};

struct s_archreader
{
  // archfd
  signed int archfd;
  // archid
  unsigned int archid;
  // fscount
  unsigned long int fscount;
  // archtype
  unsigned int archtype;
  // curvol
  unsigned int curvol;
  // compalgo
  unsigned int compalgo;
  // cryptalgo
  unsigned int cryptalgo;
  // complevel
  unsigned int complevel;
  // fsacomp
  unsigned int fsacomp;
  // creattime
  unsigned long int creattime;
  // minfsaver
  unsigned long int minfsaver;
  // hasdirsinfohead
  unsigned int hasdirsinfohead;
  // filefmtver
  signed int filefmtver;
  // filefmt
  char filefmt[32l];
  // creatver
  char creatver[32l];
  // label
  char label[512l];
  // basepath
  char basepath[4096l];
  // volpath
  char volpath[4096l];
};

struct s_strlist
{
  // head
  struct s_strlistitem *head;
};

struct s_archwriter
{
  // archfd
  signed int archfd;
  // archid
  unsigned int archid;
  // curvol
  unsigned int curvol;
  // newarch
  _Bool newarch;
  // filefmt
  char filefmt[32l];
  // creatver
  char creatver[32l];
  // label
  char label[512l];
  // basepath
  char basepath[4096l];
  // volpath
  char volpath[4096l];
  // vollist
  struct s_strlist vollist;
};

struct s_blockinfo
{
  // blkdata
  char *blkdata;
  // blkrealsize
  unsigned int blkrealsize;
  // blkoffset
  unsigned long int blkoffset;
  // blkarcsum
  unsigned int blkarcsum;
  // blkarsize
  unsigned int blkarsize;
  // blkcompalgo
  unsigned short int blkcompalgo;
  // blkcompsize
  unsigned int blkcompsize;
  // blkcryptalgo
  unsigned short int blkcryptalgo;
  // blkfsid
  unsigned short int blkfsid;
  // blklocked
  _Bool blklocked;
};

struct s_datafile
{
  // fd
  signed int fd;
  // simul
  _Bool simul;
  // open
  _Bool open;
  // sparse
  _Bool sparse;
  // path
  char path[4096l];
  // md5ctx
  struct gcry_md_handle *md5ctx;
};

struct s_devinfo_0
{
  // devpath
  char devpath[4096l];
  // partmount
  char partmount[4096l];
  // mountedbyfsa
  _Bool mountedbyfsa;
  // fstype
  signed int fstype;
};

struct s_dichl
{
  // head
  struct s_dichlitem *head;
};

struct s_dichlitem
{
  // key1
  unsigned long int key1;
  // key2
  unsigned long int key2;
  // str
  char *str;
  // next
  struct s_dichlitem *next;
};

struct s_dico
{
  // head
  struct s_dicoitem *head;
};

struct s_dicoitem
{
  // type
  unsigned char type;
  // section
  unsigned char section;
  // key
  unsigned short int key;
  // size
  unsigned short int size;
  // data
  char *data;
  // next
  struct s_dicoitem *next;
};

struct s_diskinfo
{
  // detailed
  _Bool detailed;
  // format
  char format[256l];
  // title
  char title[256l];
};

struct s_stats
{
  // cnt_regfile
  unsigned long int cnt_regfile;
  // cnt_dir
  unsigned long int cnt_dir;
  // cnt_symlink
  unsigned long int cnt_symlink;
  // cnt_hardlink
  unsigned long int cnt_hardlink;
  // cnt_special
  unsigned long int cnt_special;
  // err_regfile
  unsigned long int err_regfile;
  // err_dir
  unsigned long int err_dir;
  // err_symlink
  unsigned long int err_symlink;
  // err_hardlink
  unsigned long int err_hardlink;
  // err_special
  unsigned long int err_special;
};

struct s_extractar
{
  // ai
  struct s_archreader ai;
  // fsid
  signed int fsid;
  // stats
  struct s_stats stats;
  // cost_global
  unsigned long int cost_global;
  // cost_current
  unsigned long int cost_current;
};

struct s_features
{
  // name
  char *name;
  // mask
  signed int mask;
  // compat
  signed int compat;
  // firstfs
  signed int firstfs;
  // firste2p
  unsigned long int firste2p;
};

struct s_filesys
{
  // name
  char *name;
  // mount
  signed int (*mount)(char *, char *, char *, signed int, char *);
  // umount
  signed int (*umount)(char *, char *);
  // getinfo
  signed int (*getinfo)(struct s_dico *, char *);
  // mkfs
  signed int (*mkfs)(struct s_dico *, char *, char *);
  // test
  signed int (*test)(char *);
  // reqmntopt
  signed int (*reqmntopt)(char *, struct s_strlist *, struct s_strlist *);
  // support_for_xattr
  _Bool support_for_xattr;
  // support_for_acls
  _Bool support_for_acls;
  // winattr
  _Bool winattr;
  // savesymtargettype
  _Bool savesymtargettype;
};

struct s_headinfo
{
  // magic
  char magic[5l];
  // fsid
  unsigned short int fsid;
  // dico
  struct s_dico *dico;
};

struct s_ntfsinfo
{
  // bytes_per_sector
  unsigned int bytes_per_sector;
  // sectors_per_clusters
  unsigned int sectors_per_clusters;
  // bytes_per_cluster
  unsigned int bytes_per_cluster;
  // uuid
  unsigned long int uuid;
};

struct s_options
{
  // overwrite
  _Bool overwrite;
  // allowsaverw
  _Bool allowsaverw;
  // dontcheckmountopts
  _Bool dontcheckmountopts;
  // verboselevel
  signed int verboselevel;
  // debuglevel
  signed int debuglevel;
  // compresslevel
  signed int compresslevel;
  // compressjobs
  signed int compressjobs;
  // compressalgo
  unsigned short int compressalgo;
  // datablocksize
  unsigned int datablocksize;
  // smallfilethresh
  unsigned int smallfilethresh;
  // splitsize
  unsigned long int splitsize;
  // encryptalgo
  unsigned short int encryptalgo;
  // fsacomplevel
  unsigned short int fsacomplevel;
  // archlabel
  char archlabel[512l];
  // encryptpass
  unsigned char encryptpass[65l];
  // exclude
  struct s_strlist exclude;
};

struct s_queue
{
  // head
  struct s_queueitem *head;
  // mutex
  union anonymous_1 mutex;
  // cond
  union anonymous_2 cond;
  // curitemnum
  signed long int curitemnum;
  // itemcount
  unsigned long int itemcount;
  // blkcount
  unsigned long int blkcount;
  // blkmax
  unsigned long int blkmax;
  // endofqueue
  _Bool endofqueue;
};

struct s_queueitem
{
  // type
  signed int type;
  // status
  signed int status;
  // itemnum
  signed long int itemnum;
  // next
  struct s_queueitem *next;
  // blkinfo
  struct s_blockinfo blkinfo;
  // headinfo
  struct s_headinfo headinfo;
};

struct s_regmulti
{
  // count
  unsigned int count;
  // maxitems
  unsigned int maxitems;
  // maxblksize
  unsigned int maxblksize;
  // objhead
  struct s_dico *objhead[512l];
  // data
  char data[921600l];
  // usedsize
  unsigned int usedsize;
};

struct s_savear
{
  // ai
  struct s_archwriter ai;
  // regmulti
  struct s_regmulti regmulti;
  // dichardlinks
  struct s_dichl *dichardlinks;
  // stats
  struct s_stats stats;
  // fstype
  signed int fstype;
  // fsid
  signed int fsid;
  // objectid
  unsigned long int objectid;
  // cost_global
  unsigned long int cost_global;
  // cost_current
  unsigned long int cost_current;
};

struct s_strdico
{
  // head
  struct s_strdicoitem *head;
  // validkeys
  char *validkeys;
};

struct s_strdicoitem
{
  // key
  char *key;
  // value
  char *value;
  // next
  struct s_strdicoitem *next;
};

struct s_strlistitem
{
  // str
  char *str;
  // next
  struct s_strlistitem *next;
};

struct s_writebuf
{
  // data
  char *data;
  // size
  unsigned long int size;
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

struct stat64
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

struct statfs
{
  // f_type
  signed long int f_type;
  // f_bsize
  signed long int f_bsize;
  // f_blocks
  unsigned long int f_blocks;
  // f_bfree
  unsigned long int f_bfree;
  // f_bavail
  unsigned long int f_bavail;
  // f_files
  unsigned long int f_files;
  // f_ffree
  unsigned long int f_ffree;
  // f_fsid
  struct anonymous_8 f_fsid;
  // f_namelen
  signed long int f_namelen;
  // f_frsize
  signed long int f_frsize;
  // f_flags
  signed long int f_flags;
  // f_spare
  signed long int f_spare[4l];
};

struct statvfs64
{
  // f_bsize
  unsigned long int f_bsize;
  // f_frsize
  unsigned long int f_frsize;
  // f_blocks
  unsigned long int f_blocks;
  // f_bfree
  unsigned long int f_bfree;
  // f_bavail
  unsigned long int f_bavail;
  // f_files
  unsigned long int f_files;
  // f_ffree
  unsigned long int f_ffree;
  // f_favail
  unsigned long int f_favail;
  // f_fsid
  unsigned long int f_fsid;
  // f_flag
  unsigned long int f_flag;
  // f_namemax
  unsigned long int f_namemax;
  // __f_spare
  signed int __f_spare[6l];
};

struct struct_ext2_filsys
{
  // magic
  signed long int magic;
  // io
  struct struct_io_channel *io;
  // flags
  signed int flags;
  // device_name
  char *device_name;
  // super
  struct ext2_super_block *super;
  // blocksize
  unsigned int blocksize;
  // fragsize
  signed int fragsize;
  // group_desc_count
  unsigned int group_desc_count;
  // desc_blocks
  unsigned long int desc_blocks;
  // group_desc
  struct opaque_ext2_group_desc *group_desc;
  // inode_blocks_per_group
  unsigned int inode_blocks_per_group;
  // inode_map
  struct ext2fs_struct_generic_bitmap *inode_map;
  // block_map
  struct ext2fs_struct_generic_bitmap *block_map;
  // get_blocks
  signed long int (*get_blocks)(struct struct_ext2_filsys *, unsigned int, unsigned int *);
  // check_directory
  signed long int (*check_directory)(struct struct_ext2_filsys *, unsigned int);
  // write_bitmaps
  signed long int (*write_bitmaps)(struct struct_ext2_filsys *);
  // read_inode
  signed long int (*read_inode)(struct struct_ext2_filsys *, unsigned int, struct ext2_inode *);
  // write_inode
  signed long int (*write_inode)(struct struct_ext2_filsys *, unsigned int, struct ext2_inode *);
  // badblocks
  struct ext2_struct_u32_list *badblocks;
  // dblist
  struct ext2_struct_dblist *dblist;
  // stride
  unsigned int stride;
  // orig_super
  struct ext2_super_block *orig_super;
  // image_header
  struct ext2_image_hdr *image_header;
  // umask
  unsigned int umask;
  // now
  signed long int now;
  // cluster_ratio_bits
  signed int cluster_ratio_bits;
  // default_bitmap_type
  unsigned short int default_bitmap_type;
  // pad
  unsigned short int pad;
  // reserved
  unsigned int reserved[5l];
  // priv_data
  void *priv_data;
  // icache
  struct ext2_inode_cache *icache;
  // image_io
  struct struct_io_channel *image_io;
  // get_alloc_block
  signed long int (*get_alloc_block)(struct struct_ext2_filsys *, unsigned long long int, unsigned long long int *);
  // block_alloc_stats
  void (*block_alloc_stats)(struct struct_ext2_filsys *, unsigned long long int, signed int);
  // mmp_buf
  void *mmp_buf;
  // mmp_cmp
  void *mmp_cmp;
  // mmp_fd
  signed int mmp_fd;
  // mmp_last_written
  signed long int mmp_last_written;
};

struct struct_io_channel
{
  // magic
  signed long int magic;
  // manager
  struct struct_io_manager *manager;
  // name
  char *name;
  // block_size
  signed int block_size;
  // read_error
  signed long int (*read_error)(struct struct_io_channel *, unsigned long int, signed int, void *, unsigned long int, signed int, signed long int);
  // write_error
  signed long int (*write_error)(struct struct_io_channel *, unsigned long int, signed int, const void *, unsigned long int, signed int, signed long int);
  // refcount
  signed int refcount;
  // flags
  signed int flags;
  // reserved
  signed long int reserved[14l];
  // private_data
  void *private_data;
  // app_data
  void *app_data;
  // align
  signed int align;
};

struct struct_io_manager
{
  // magic
  signed long int magic;
  // name
  const char *name;
  // open
  signed long int (*open)(const char *, signed int, struct struct_io_channel **);
  // close
  signed long int (*close)(struct struct_io_channel *);
  // set_blksize
  signed long int (*set_blksize)(struct struct_io_channel *, signed int);
  // read_blk
  signed long int (*read_blk)(struct struct_io_channel *, unsigned long int, signed int, void *);
  // write_blk
  signed long int (*write_blk)(struct struct_io_channel *, unsigned long int, signed int, const void *);
  // flush
  signed long int (*flush)(struct struct_io_channel *);
  // write_byte
  signed long int (*write_byte)(struct struct_io_channel *, unsigned long int, signed int, const void *);
  // set_option
  signed long int (*set_option)(struct struct_io_channel *, const char *, const char *);
  // get_stats
  signed long int (*get_stats)(struct struct_io_channel *, struct struct_io_stats **);
  // read_blk64
  signed long int (*read_blk64)(struct struct_io_channel *, unsigned long long int, signed int, void *);
  // write_blk64
  signed long int (*write_blk64)(struct struct_io_channel *, unsigned long long int, signed int, const void *);
  // discard
  signed long int (*discard)(struct struct_io_channel *, unsigned long long int, unsigned long long int);
  // reserved
  signed long int reserved[16l];
};

struct struct_io_stats
{
  // num_fields
  signed int num_fields;
  // reserved
  signed int reserved;
  // bytes_read
  unsigned long long int bytes_read;
  // bytes_written
  unsigned long long int bytes_written;
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

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
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

struct xfs_sb
{
  // sb_magicnum
  unsigned int sb_magicnum;
  // sb_blocksize
  unsigned int sb_blocksize;
  // sb_dblocks
  unsigned long int sb_dblocks;
  // sb_rblocks
  unsigned long int sb_rblocks;
  // sb_rextents
  unsigned long int sb_rextents;
  // sb_uuid
  unsigned char sb_uuid[16l];
  // sb_logstart
  unsigned long int sb_logstart;
  // sb_rootino
  unsigned long long int sb_rootino;
  // sb_rbmino
  unsigned long long int sb_rbmino;
  // sb_rsumino
  unsigned long long int sb_rsumino;
  // sb_rextsize
  unsigned int sb_rextsize;
  // sb_agblocks
  unsigned int sb_agblocks;
  // sb_agcount
  unsigned int sb_agcount;
  // sb_rbmblocks
  unsigned int sb_rbmblocks;
  // sb_logblocks
  unsigned int sb_logblocks;
  // sb_versionnum
  unsigned short int sb_versionnum;
  // sb_sectsize
  unsigned short int sb_sectsize;
  // sb_inodesize
  unsigned short int sb_inodesize;
  // sb_inopblock
  unsigned short int sb_inopblock;
  // sb_fname
  char sb_fname[12l];
  // sb_blocklog
  unsigned char sb_blocklog;
  // sb_sectlog
  unsigned char sb_sectlog;
  // sb_inodelog
  unsigned char sb_inodelog;
  // sb_inopblog
  unsigned char sb_inopblog;
  // sb_agblklog
  unsigned char sb_agblklog;
  // sb_rextslog
  unsigned char sb_rextslog;
  // sb_inprogress
  unsigned char sb_inprogress;
  // sb_imax_pct
  unsigned char sb_imax_pct;
  // sb_icount
  unsigned long int sb_icount;
  // sb_ifree
  unsigned long int sb_ifree;
  // sb_fdblocks
  unsigned long int sb_fdblocks;
  // sb_frextents
  unsigned long int sb_frextents;
  // sb_uquotino
  unsigned long long int sb_uquotino;
  // sb_gquotino
  unsigned long long int sb_gquotino;
  // sb_qflags
  unsigned short int sb_qflags;
  // sb_flags
  unsigned char sb_flags;
  // sb_shared_vn
  unsigned char sb_shared_vn;
  // sb_inoalignmt
  unsigned int sb_inoalignmt;
  // sb_unit
  unsigned int sb_unit;
  // sb_width
  unsigned int sb_width;
  // sb_dirblklog
  unsigned char sb_dirblklog;
  // sb_logsectlog
  unsigned char sb_logsectlog;
  // sb_logsectsize
  unsigned short int sb_logsectsize;
  // sb_logsunit
  unsigned int sb_logsunit;
  // sb_features2
  unsigned int sb_features2;
  // sb_bad_features2
  unsigned int sb_bad_features2;
  // sb_features_compat
  unsigned int sb_features_compat;
  // sb_features_ro_compat
  unsigned int sb_features_ro_compat;
  // sb_features_incompat
  unsigned int sb_features_incompat;
  // sb_features_log_incompat
  unsigned int sb_features_log_incompat;
  // sb_crc
  unsigned int sb_crc;
  // sb_spino_align
  unsigned int sb_spino_align;
  // sb_pquotino
  unsigned long long int sb_pquotino;
  // sb_lsn
  signed long int sb_lsn;
  // sb_meta_uuid
  unsigned char sb_meta_uuid[16l];
};


// e2fsprogs_minver
// file fs_ext2.c line 37
unsigned long int e2fsprogs_minver[3l] = { ((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0),
    ((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0),
    ((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) };
// filesys
// file filesys.c line 45
struct s_filesys filesys[10l];
// filesys
// file filesys.c line 45
struct s_filesys filesys[10l] = { { .name="ext2", .mount=extfs_mount, .umount=extfs_umount, .getinfo=extfs_getinfo,
    .mkfs=ext2_mkfs, .test=ext2_test,
    .reqmntopt=extfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="ext3", .mount=extfs_mount, .umount=extfs_umount, .getinfo=extfs_getinfo,
    .mkfs=ext3_mkfs, .test=ext3_test,
    .reqmntopt=extfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="ext4", .mount=extfs_mount, .umount=extfs_umount, .getinfo=extfs_getinfo,
    .mkfs=ext4_mkfs, .test=ext4_test,
    .reqmntopt=extfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="reiserfs", .mount=reiserfs_mount, .umount=reiserfs_umount,
    .getinfo=reiserfs_getinfo, .mkfs=reiserfs_mkfs,
    .test=reiserfs_test, .reqmntopt=reiserfs_get_reqmntopt,
    .support_for_xattr=(_Bool)1, .support_for_acls=(_Bool)1,
    .winattr=(_Bool)0, .savesymtargettype=(_Bool)0 },
    { .name="reiser4", .mount=reiser4_mount, .umount=reiser4_umount,
    .getinfo=reiser4_getinfo, .mkfs=reiser4_mkfs,
    .test=reiser4_test, .reqmntopt=reiser4_get_reqmntopt,
    .support_for_xattr=(_Bool)1, .support_for_acls=(_Bool)1,
    .winattr=(_Bool)0, .savesymtargettype=(_Bool)0 },
    { .name="btrfs", .mount=btrfs_mount, .umount=btrfs_umount, .getinfo=btrfs_getinfo,
    .mkfs=btrfs_mkfs, .test=btrfs_test,
    .reqmntopt=btrfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="xfs", .mount=xfs_mount, .umount=xfs_umount, .getinfo=xfs_getinfo,
    .mkfs=xfs_mkfs, .test=xfs_test,
    .reqmntopt=xfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="jfs", .mount=jfs_mount, .umount=jfs_umount, .getinfo=jfs_getinfo,
    .mkfs=jfs_mkfs, .test=jfs_test,
    .reqmntopt=jfs_get_reqmntopt, .support_for_xattr=(_Bool)1,
    .support_for_acls=(_Bool)1, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 },
    { .name="ntfs", .mount=ntfs_mount, .umount=ntfs_umount, .getinfo=ntfs_getinfo,
    .mkfs=ntfs_mkfs, .test=ntfs_test,
    .reqmntopt=ntfs_get_reqmntopt, .support_for_xattr=(_Bool)0,
    .support_for_acls=(_Bool)0, .winattr=(_Bool)1,
    .savesymtargettype=(_Bool)1 },
    { .name=(char *)(void *)0, .mount=(signed int (*)(char *, char *, char *, signed int, char *))(void *)0, .umount=(signed int (*)(char *, char *))(void *)0,
    .getinfo=(signed int (*)(struct s_dico *, char *))(void *)0,
    .mkfs=(signed int (*)(struct s_dico *, char *, char *))(void *)0,
    .test=(signed int (*)(char *))(void *)0,
    .reqmntopt=(signed int (*)(char *, struct s_strlist *, struct s_strlist *))(void *)0,
    .support_for_xattr=(_Bool)0,
    .support_for_acls=(_Bool)0, .winattr=(_Bool)0,
    .savesymtargettype=(_Bool)0 } };
// g_aborted
// file syncthread.c line 39
struct anonymous_7 g_aborted = { .counter=0 };
// g_fsbitmap
// file syncthread.c line 34
unsigned char g_fsbitmap[128l];
// g_logfile
// file logfile.c line 36
signed int g_logfile = -1;
// g_options
// file options.c line 28
struct s_options g_options;
// g_queue
// file syncthread.c line 30
struct s_queue g_queue;
// g_secthreads
// file syncthread.c line 52
struct anonymous_7 g_secthreads = { .counter=0 };
// g_stopfillqueue
// file syncthread.c line 38
struct anonymous_7 g_stopfillqueue = { .counter=0 };
// gcry_threads_pthread
// file crypto.c line 34
static struct gcry_thread_cbs gcry_threads_pthread = { .option=(unsigned int)(3 | 1 << 8) };
// long_options
// file fsarchiver.c line 122
static struct option long_options[14l] = { { .name="overwrite", .has_arg=0, .flag=(signed int *)(void *)0, .val=111 },
    { .name="allow-no-acl-xattr", .has_arg=0, .flag=(signed int *)(void *)0,
    .val=97 },
    { .name="allow-rw-mounted", .has_arg=0, .flag=(signed int *)(void *)0, .val=65 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="debug", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name="compress", .has_arg=1, .flag=(signed int *)(void *)0, .val=122 },
    { .name="jobs", .has_arg=1, .flag=(signed int *)(void *)0, .val=106 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="split", .has_arg=1, .flag=(signed int *)(void *)0, .val=115 },
    { .name="cryptpass", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="label", .has_arg=1, .flag=(signed int *)(void *)0, .val=76 },
    { .name="exclude", .has_arg=1, .flag=(signed int *)(void *)0, .val=101 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
// mkfeatures
// file fs_ext2.c line 54
struct s_features mkfeatures[18l] = { { .name="has_journal", .mask=0x0004, .compat=0, .firstfs=1,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0) },
    { .name="ext_attr", .mask=0x0008, .compat=0, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)40 << 8) + ((unsigned long int)5 << 0) },
    { .name="resize_inode", .mask=0x0010, .compat=0, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0) },
    { .name="dir_index", .mask=0x0020, .compat=0, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)33 << 8) + ((unsigned long int)0 << 0) },
    { .name="filetype", .mask=0x0002, .compat=1, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)16 << 8) + ((unsigned long int)0 << 0) },
    { .name="extent", .mask=0x0040, .compat=1, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="journal_dev", .mask=0x0008, .compat=1, .firstfs=1,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0) },
    { .name="flex_bg", .mask=0x0200, .compat=1, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="meta_bg", .mask=0x0010, .compat=1, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)39 << 8) + ((unsigned long int)0 << 0) },
    { .name="mmp", .mask=0x0100, .compat=1, .firstfs=2, .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)42 << 8) + ((unsigned long int)0 << 0) },
    { .name="large_file", .mask=0x0002, .compat=2, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)40 << 8) + ((unsigned long int)7 << 0) },
    { .name="huge_file", .mask=0x0008, .compat=2, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="sparse_super", .mask=0x0001, .compat=2, .firstfs=0,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)8 << 8) + ((unsigned long int)0 << 0) },
    { .name="uninit_bg", .mask=0x0010, .compat=2, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="dir_nlink", .mask=0x0020, .compat=2, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="extra_isize", .mask=0x0040, .compat=2, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)41 << 8) + ((unsigned long int)0 << 0) },
    { .name="bigalloc", .mask=0x0200, .compat=2, .firstfs=2,
    .firste2p=((unsigned long int)1 << 16) + ((unsigned long int)42 << 8) + ((unsigned long int)0 << 0) },
    { .name=(char *)(void *)0, .mask=0, .compat=0, .firstfs=0,
    .firste2p=(unsigned long int)0 } };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// partinfo
// file oper_probe.c line 136
struct s_diskinfo partinfo[9l] = { { .detailed=(_Bool)0, .format={ '[', '%', '-', '1', '6', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', '=', '=', '=', 'D', 'E', 'V', 'I', 'C', 'E', '=', '=', '=', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ '[', '%', '-', '1', '1', '.', '1', '1', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', 'F', 'I', 'L', 'E', 'S', 'Y', 'S', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ '[', '%', '-', '1', '7', '.', '1', '7', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', '=', '=', '=', '=', 'L', 'A', 'B', 'E', 'L', '=', '=', '=', '=', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ '[', '%', '1', '2', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', '=', '=', 'S', 'I', 'Z', 'E', '=', '=', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ '[', '%', '3', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', 'M', 'A', 'J', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ '[', '%', '3', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', 'M', 'I', 'N', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)1, .format={ '[', '%', '-', '3', '6', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', 'L', 'O', 'N', 'G', 'N', 'A', 'M', 'E', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)1, .format={ '[', '%', '-', '3', '8', 's', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ '[', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', 'U', 'U', 'I', 'D', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', ']', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { .detailed=(_Bool)0, .format={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .title={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// unix_io_manager
// file /usr/include/ext2fs/ext2_io.h line 129
extern struct struct_io_manager *unix_io_manager;
// valid_magic
// file fsarchiver.c line 43
char *valid_magic[11l] = { "ArCh", "FsA0", "FsAE", "FsIn", "FsYs", "DaEn", "ObJt", "BlKh", "FiLf", "DiRs", (char *)(void *)0 };

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32_1;
  return_value___builtin_bswap32_1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32_1;
}

// archinfo_show_fshead
// file archinfo.h line 25
signed int archinfo_show_fshead(struct s_dico *dicofshead, signed int fsid)
{
  char magic[5l];
  char fsbuf[128l];
  unsigned long int temp64;
  unsigned long int fsbytestotal;
  unsigned long int fsbytesused;
  char buffer[256l];
  char fslabel[256l];
  char fsuuid[256l];
  char fsorigdev[256l];
  memset((void *)magic, 0, sizeof(char [5l]) /*5ul*/ );
  signed int return_value_dico_get_string_7;
  unsigned long int return_value_strlen_6;
  if(dicofshead == ((struct s_dico *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archinfo.c", "archinfo_show_fshead", 98, "dicofshead is null\n");
    return -1;
  }

  else
  {
    signed int return_value_dico_get_data_1;
    return_value_dico_get_data_1=dico_get_data(dicofshead, (unsigned char)0, (unsigned short int)1, (void *)fsbuf, (unsigned short int)sizeof(char [128l]) /*128ul*/ , (unsigned short int *)(void *)0);
    if(!(return_value_dico_get_data_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archinfo.c", "archinfo_show_fshead", 103, "cannot find FSYSHEADKEY_FILESYSTEM in filesystem-header\n");
      return -1;
    }

    else
    {
      signed int return_value_dico_get_u64_2;
      return_value_dico_get_u64_2=dico_get_u64(dicofshead, (unsigned char)0, (unsigned short int)3, &fsbytestotal);
      if(!(return_value_dico_get_u64_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archinfo.c", "archinfo_show_fshead", 108, "cannot find FSYSHEADKEY_BYTESTOTAL in filesystem-header\n");
        return -1;
      }

      else
      {
        signed int return_value_dico_get_u64_3;
        return_value_dico_get_u64_3=dico_get_u64(dicofshead, (unsigned char)0, (unsigned short int)4, &fsbytesused);
        if(!(return_value_dico_get_u64_3 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "archinfo.c", "archinfo_show_fshead", 113, "cannot find FSYSHEADKEY_BYTESUSED in filesystem-header\n");
          return -1;
        }

        else
        {
          signed int return_value_dico_get_string_4;
          return_value_dico_get_string_4=dico_get_string(dicofshead, (unsigned char)0, (unsigned short int)5, fslabel, (unsigned short int)sizeof(char [256l]) /*256ul*/ );
          if(!(return_value_dico_get_string_4 >= 0))
            snprintf(fslabel, sizeof(char [256l]) /*256ul*/ , "<none>");

          signed int return_value_dico_get_string_5;
          return_value_dico_get_string_5=dico_get_string(dicofshead, (unsigned char)0, (unsigned short int)27, fsorigdev, (unsigned short int)sizeof(char [256l]) /*256ul*/ );
          if(!(return_value_dico_get_string_5 >= 0))
            snprintf(fsorigdev, sizeof(char [256l]) /*256ul*/ , "<unknown>");

          snprintf(fsuuid, sizeof(char [256l]) /*256ul*/ , "<none>");
          signed int return_value_dico_get_u64_8;
          return_value_dico_get_u64_8=dico_get_u64(dicofshead, (unsigned char)0, (unsigned short int)24, &temp64);
          if(return_value_dico_get_u64_8 == 0)
            snprintf(fsuuid, sizeof(char [256l]) /*256ul*/ , "%016llX", (unsigned long long int)temp64);

          else
          {
            return_value_dico_get_string_7=dico_get_string(dicofshead, (unsigned char)0, (unsigned short int)6, buffer, (unsigned short int)sizeof(char [256l]) /*256ul*/ );
            if(return_value_dico_get_string_7 == 0)
            {
              return_value_strlen_6=strlen(buffer);
              if(return_value_strlen_6 == 36ul)
                snprintf(fsuuid, sizeof(char [256l]) /*256ul*/ , "%s", (const void *)buffer);

            }

          }
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 130, "===================== filesystem information ====================\n");
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 131, "Filesystem id in archive: \t%ld\n", (signed long int)fsid);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 132, "Filesystem format: \t\t%s\n", (const void *)fsbuf);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 133, "Filesystem label: \t\t%s\n", (const void *)fslabel);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 134, "Filesystem uuid: \t\t%s\n", (const void *)fsuuid);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 135, "Original device: \t\t%s\n", (const void *)fsorigdev);
          char *return_value_format_size_9;
          return_value_format_size_9=format_size(fsbytestotal, buffer, (signed int)sizeof(char [256l]) /*256ul*/ , (char)104);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 136, "Original filesystem size: \t%s (%lld bytes)\n", return_value_format_size_9, (signed long long int)fsbytestotal);
          char *return_value_format_size_10;
          return_value_format_size_10=format_size(fsbytesused, buffer, (signed int)sizeof(char [256l]) /*256ul*/ , (char)104);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 137, "Space used in filesystem: \t%s (%lld bytes)\n", return_value_format_size_10, (signed long long int)fsbytesused);
          fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_fshead", 138, "\n");
          return 0;
        }
      }
    }
  }
}

// archinfo_show_mainhead
// file archinfo.h line 24
signed int archinfo_show_mainhead(struct s_archreader *ai, struct s_dico *dicomainhead)
{
  char buffer[256l];
  if(ai == ((struct s_archreader *)NULL) || dicomainhead == ((struct s_dico *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archinfo.c", "archinfo_show_mainhead", 59, "a parameter is null\n");
    return -1;
  }

  else
  {
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 63, "====================== archive information ======================\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 64, "Archive type: \t\t\t%s\n", ai->archtype == (unsigned int)1 ? "filesystems" : "flat files");
    if(ai->archtype == 1u)
      fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 66, "Filesystems count: \t\t%ld\n", (signed long int)ai->fscount);

    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 67, "Archive id: \t\t\t%.8x\n", (unsigned int)ai->archid);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 68, "Archive file format: \t\t%s\n", (const void *)ai->filefmt);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 69, "Archive created with: \t\t%s\n", (const void *)ai->creatver);
    char *return_value_format_time_1;
    return_value_format_time_1=format_time(buffer, (signed int)sizeof(char [256l]) /*256ul*/ , ai->creattime);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 70, "Archive creation date: \t\t%s\n", return_value_format_time_1);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 71, "Archive label: \t\t\t%s\n", (const void *)ai->label);
    if(ai->minfsaver >= 1ul)
      fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 74, "Minimum fsarchiver version:\t%d.%d.%d.%d\n", (signed int)((unsigned long int)ai->minfsaver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)ai->minfsaver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)ai->minfsaver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)ai->minfsaver >> 0 & (unsigned long int)0xFFFF));

    char *return_value_compalgostr_2;
    return_value_compalgostr_2=compalgostr((signed int)ai->compalgo);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 75, "Compression level: \t\t%d (%s level %d)\n", ai->fsacomp, return_value_compalgostr_2, ai->complevel);
    char *return_value_cryptalgostr_3;
    return_value_cryptalgostr_3=cryptalgostr((signed int)ai->cryptalgo);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 76, "Encryption algorithm: \t\t%s\n", return_value_cryptalgostr_3);
    fsaprintf(0, (_Bool)0, 0 >= 3, "archinfo.c", "archinfo_show_mainhead", 77, "\n");
    return 0;
  }
}

// archreader_close
// file archreader.h line 54
signed int archreader_close(struct s_archreader *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  if(!(ai->archfd >= 0))
    return -1;

  else
  {
    lockf(ai->archfd, 0, (signed long int)0);
    close(ai->archfd);
    ai->archfd = -1;
    return 0;
  }
}

// archreader_destroy
// file archreader.h line 52
signed int archreader_destroy(struct s_archreader *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  return 0;
}

// archreader_incvolume
// file archreader.h line 55
signed int archreader_incvolume(struct s_archreader *ai, _Bool waitkeypress)
{
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  ai->curvol = ai->curvol + 1u;
  signed int return_value_archreader_volpath_1;
  return_value_archreader_volpath_1=archreader_volpath(ai);
  return return_value_archreader_volpath_1;
}

// archreader_init
// file archreader.h line 51
signed int archreader_init(struct s_archreader *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  memset((void *)ai, 0, sizeof(struct s_archreader) /*8832ul*/ );
  ai->cryptalgo = (unsigned int)0;
  ai->compalgo = (unsigned int)0;
  ai->fsacomp = (unsigned int)-1;
  ai->complevel = (unsigned int)-1;
  ai->archfd = -1;
  ai->archid = (unsigned int)0;
  ai->curvol = (unsigned int)0;
  ai->filefmtver = 0;
  ai->hasdirsinfohead = (unsigned int)0;
  return 0;
}

// archreader_open
// file archreader.h line 53
signed int archreader_open(struct s_archreader *ai)
{
  struct stat64 st;
  char volhead[64l];
  signed int magiclen;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  ai->archfd=open64(ai->volpath, 00 | 0);
  signed int return_value_memcmp_7;
  signed int return_value_memcmp_5;
  if(!(ai->archfd >= 0))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_open", 73, "cannot open archive %s\n", (const void *)ai->volpath);
    return -1;
  }

  else
  {
    signed int return_value_fstat64_1;
    return_value_fstat64_1=fstat64(ai->archfd, &st);
    if(!(return_value_fstat64_1 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_open", 79, "fstat64(%s) failed\n", (const void *)ai->volpath);
      return -1;
    }

    else
      if(!((61440u & st.st_mode) == 32768u))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_open", 83, "%s is not a regular file, cannot continue\n", (const void *)ai->volpath);
        close(ai->archfd);
        return -1;
      }

      else
      {
        signed long int return_value_read_2;
        return_value_read_2=read(ai->archfd, (void *)volhead, sizeof(char [64l]) /*64ul*/ );
        if(!((unsigned long int)return_value_read_2 == sizeof(char [64l]) /*64ul*/ ))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_open", 90, "cannot read magic from %s\n", (const void *)ai->volpath);
          close(ai->archfd);
          return -1;
        }

        else
        {
          signed long int return_value_lseek64_3;
          return_value_lseek64_3=lseek64(ai->archfd, (signed long int)0, 0);
          if(!(return_value_lseek64_3 == 0l))
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_open", 95, "cannot rewind volume %s\n", (const void *)ai->volpath);
            close(ai->archfd);
            return -1;
          }

          else
          {
            unsigned long int return_value_strlen_4;
            return_value_strlen_4=strlen("FsArCh_002");
            magiclen = (signed int)return_value_strlen_4;
            signed int return_value_memcmp_6;
            return_value_memcmp_6=memcmp((const void *)(volhead + (signed long int)40), (const void *)"FsArCh_001", (unsigned long int)magiclen);
            _Bool tmp_if_expr_8;
            if(return_value_memcmp_6 == 0)
              tmp_if_expr_8 = (_Bool)1;

            else
            {
              return_value_memcmp_7=memcmp((const void *)(volhead + (signed long int)40), (const void *)"FsArCh_00Y", (unsigned long int)magiclen);
              tmp_if_expr_8 = return_value_memcmp_7 == 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_8)
              ai->filefmtver = 1;

            else
            {
              return_value_memcmp_5=memcmp((const void *)(volhead + (signed long int)42), (const void *)"FsArCh_002", (unsigned long int)magiclen);
              if(return_value_memcmp_5 == 0)
                ai->filefmtver = 2;

              else
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_open", 112, "%s is not a supported fsarchiver file format\n", (const void *)ai->volpath);
                close(ai->archfd);
                return -1;
              }
            }
            fsaprintf(2, (_Bool)0, 2 >= 3, "archreader.c", "archreader_open", 117, "Detected fileformat=%d in archive %s\n", (signed int)ai->filefmtver, (const void *)ai->volpath);
            return 0;
          }
        }
      }
  }
}

// archreader_read_block
// file archreader.h line 61
signed int archreader_read_block(struct s_archreader *ai, struct s_dico *in_blkdico, signed int in_skipblock, signed int *out_sumok, struct s_blockinfo *out_blkinfo)
{
  unsigned int arblockcsumorig;
  unsigned int arblockcsumcalc;
  unsigned int curblocksize;
  unsigned long int blockoffset;
  unsigned short int compalgo;
  unsigned short int cryptalgo;
  unsigned int finalsize;
  unsigned int compsize;
  unsigned char *buffer;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  /* assertion out_sumok */
  assert(out_sumok != ((signed int *)NULL));
  /* assertion in_blkdico */
  assert(in_blkdico != ((struct s_dico *)NULL));
  /* assertion out_blkinfo */
  assert(out_blkinfo != ((struct s_blockinfo *)NULL));
  memset((void *)out_blkinfo, 0, sizeof(struct s_blockinfo) /*48ul*/ );
  *out_sumok = -1;
  signed int return_value_dico_get_u64_1;
  return_value_dico_get_u64_1=dico_get_u64(in_blkdico, (unsigned char)0, (unsigned short int)2, &blockoffset);
  if(!(return_value_dico_get_u64_1 == 0))
  {
    fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 457, "cannot get blockoffset from block-header\n");
    return -1;
  }

  else
  {
    signed int return_value_dico_get_u32_2;
    return_value_dico_get_u32_2=dico_get_u32(in_blkdico, (unsigned char)0, (unsigned short int)1, &curblocksize);
    if(curblocksize >= 921601u || !(return_value_dico_get_u32_2 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 462, "cannot get blocksize from block-header\n");
      return -1;
    }

    else
    {
      signed int return_value_dico_get_u16_3;
      return_value_dico_get_u16_3=dico_get_u16(in_blkdico, (unsigned char)0, (unsigned short int)3, &compalgo);
      if(!(return_value_dico_get_u16_3 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 467, "cannot get BLOCKHEADITEMKEY_COMPRESSALGO from block-header\n");
        return -1;
      }

      else
      {
        signed int return_value_dico_get_u16_4;
        return_value_dico_get_u16_4=dico_get_u16(in_blkdico, (unsigned char)0, (unsigned short int)4, &cryptalgo);
        if(!(return_value_dico_get_u16_4 == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 472, "cannot get BLOCKHEADITEMKEY_ENCRYPTALGO from block-header\n");
          return -1;
        }

        else
        {
          signed int return_value_dico_get_u32_5;
          return_value_dico_get_u32_5=dico_get_u32(in_blkdico, (unsigned char)0, (unsigned short int)5, &finalsize);
          if(!(return_value_dico_get_u32_5 == 0))
          {
            fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 477, "cannot get BLOCKHEADITEMKEY_ARSIZE from block-header\n");
            return -1;
          }

          else
          {
            signed int return_value_dico_get_u32_6;
            return_value_dico_get_u32_6=dico_get_u32(in_blkdico, (unsigned char)0, (unsigned short int)6, &compsize);
            if(!(return_value_dico_get_u32_6 == 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 482, "cannot get BLOCKHEADITEMKEY_COMPSIZE from block-header\n");
              return -1;
            }

            else
            {
              signed int return_value_dico_get_u32_7;
              return_value_dico_get_u32_7=dico_get_u32(in_blkdico, (unsigned char)0, (unsigned short int)7, &arblockcsumorig);
              if(!(return_value_dico_get_u32_7 == 0))
              {
                fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_block", 487, "cannot get BLOCKHEADITEMKEY_ARCSUM from block-header\n");
                return -1;
              }

              else
              {
                if(in_skipblock == 1)
                {
                  signed long int return_value_lseek64_8;
                  return_value_lseek64_8=lseek64(ai->archfd, (signed long int)finalsize, 1);
                  if(!(return_value_lseek64_8 >= 0l))
                  {
                    fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_read_block", 494, "cannot skip block (finalsize=%ld) failed\n", (signed long int)finalsize);
                    return -1;
                  }

                  return 0;
                }

                void *return_value_malloc_9;
                return_value_malloc_9=malloc((unsigned long int)finalsize);
                buffer = (unsigned char *)return_value_malloc_9;
                if(buffer == ((unsigned char *)NULL))
                {
                  fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_block", 502, "cannot allocate block: malloc(%d) failed\n", finalsize);
                  return -2;
                }

                else
                {
                  signed long int return_value_read_10;
                  return_value_read_10=read(ai->archfd, (void *)buffer, (unsigned long int)(signed long int)finalsize);
                  if(!(return_value_read_10 == (signed long int)finalsize))
                  {
                    fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_read_block", 507, "cannot read block (finalsize=%ld) failed\n", (signed long int)finalsize);
                    free((void *)buffer);
                    return -1;
                  }

                  else
                  {
                    out_blkinfo->blkdata = (char *)buffer;
                    out_blkinfo->blkrealsize = curblocksize;
                    out_blkinfo->blkoffset = blockoffset;
                    out_blkinfo->blkarcsum = arblockcsumorig;
                    out_blkinfo->blkcompalgo = compalgo;
                    out_blkinfo->blkcryptalgo = cryptalgo;
                    out_blkinfo->blkarsize = finalsize;
                    out_blkinfo->blkcompsize = compsize;
                    arblockcsumcalc=fletcher32(buffer, finalsize);
                    if(!(arblockcsumcalc == arblockcsumorig))
                    {
                      fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_block", 526, "block is corrupt at offset=%ld, blksize=%ld\n", (signed long int)blockoffset, (signed long int)curblocksize);
                      free((void *)out_blkinfo->blkdata);
                      void *return_value_malloc_11;
                      return_value_malloc_11=malloc((unsigned long int)curblocksize);
                      out_blkinfo->blkdata = (char *)return_value_malloc_11;
                      if(out_blkinfo->blkdata == ((char *)NULL))
                      {
                        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_block", 529, "cannot allocate block: malloc(%d) failed\n", curblocksize);
                        return -2;
                      }

                      memset((void *)out_blkinfo->blkdata, 0, (unsigned long int)curblocksize);
                      *out_sumok = 0;
                      signed long int return_value_lseek64_12;
                      return_value_lseek64_12=lseek64(ai->archfd, -((signed long long int)finalsize), 1);
                      if(!(return_value_lseek64_12 >= 0l))
                        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_block", 536, "lseek64() failed\n");

                    }

                    else
                      *out_sumok = 1;
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

// archreader_read_data
// file archreader.c line 150
signed int archreader_read_data(struct s_archreader *ai, void *data, unsigned long int size)
{
  signed long int lres;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  lres=read(ai->archfd, (void *)(char *)data, (unsigned long int)(signed long int)size);
  if(!(lres == (signed long int)size))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_read_data", 157, "read failed: read(size=%ld)=%ld\n", (signed long int)size, lres);
    return -1;
  }

  else
    return 0;
}

// archreader_read_dico
// file archreader.c line 164
signed int archreader_read_dico(struct s_archreader *ai, struct s_dico *d)
{
  unsigned short int size;
  unsigned int headerlen;
  unsigned int origsum;
  unsigned int newsum;
  unsigned char *buffer;
  unsigned char *bufpos;
  unsigned short int temp16;
  unsigned int temp32;
  unsigned char section;
  unsigned short int count;
  unsigned char type;
  unsigned short int key;
  signed int i;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  signed int return_value_archreader_read_data_1;
  signed int return_value_archreader_read_data_2;
  switch(ai->filefmtver)
  {
    case 1:
    {
      return_value_archreader_read_data_1=archreader_read_data(ai, (void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
      if(!(return_value_archreader_read_data_1 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 188, "imgdisk_read_data() failed\n");
        return 1;
      }

      headerlen = (unsigned int)(unsigned short int)temp16;
      break;
    }
    case 2:
    {
      return_value_archreader_read_data_2=archreader_read_data(ai, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
      if(!(return_value_archreader_read_data_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 195, "imgdisk_read_data() failed\n");
        return 1;
      }

      headerlen = (unsigned int)temp32;
      break;
    }
    default:
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 201, "Fatal error: invalid file format version: ai->filefmtver=%d\n", ai->filefmtver);
      return 1;
    }
  }
  void *return_value_malloc_3;
  return_value_malloc_3=malloc((unsigned long int)headerlen);
  buffer = (unsigned char *)return_value_malloc_3;
  bufpos = buffer;
  if(buffer == ((unsigned char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 207, "cannot allocate memory for header\n");
    return -2;
  }

  else
  {
    signed int return_value_archreader_read_data_4;
    return_value_archreader_read_data_4=archreader_read_data(ai, (void *)buffer, (unsigned long int)headerlen);
    if(!(return_value_archreader_read_data_4 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 212, "cannot read header data\n");
      free((void *)buffer);
      return 1;
    }

    else
    {
      signed int return_value_archreader_read_data_5;
      return_value_archreader_read_data_5=archreader_read_data(ai, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
      if(!(return_value_archreader_read_data_5 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 218, "cannot read header checksum\n");
        free((void *)buffer);
        return 1;
      }

      else
      {
        origsum = (unsigned int)temp32;
        newsum=fletcher32(buffer, headerlen);
        if(!(newsum == origsum))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_dico", 228, "bad checksum for header\n");
          free((void *)buffer);
          return 2;
        }

        else
        {
          memcpy((void *)&temp16, (const void *)bufpos, sizeof(unsigned short int) /*2ul*/ );
          bufpos = bufpos + (signed long int)sizeof(unsigned short int) /*2ul*/ ;
          count = (unsigned short int)temp16;
          i = 0;
          for( ; !(i >= (signed int)count); i = i + 1)
          {
            memcpy((void *)&type, (const void *)bufpos, sizeof(unsigned char) /*1ul*/ );
            bufpos = bufpos + (signed long int)sizeof(unsigned char) /*1ul*/ ;
            memcpy((void *)&section, (const void *)bufpos, sizeof(unsigned char) /*1ul*/ );
            bufpos = bufpos + (signed long int)sizeof(unsigned char) /*1ul*/ ;
            memcpy((void *)&temp16, (const void *)bufpos, sizeof(unsigned short int) /*2ul*/ );
            bufpos = bufpos + (signed long int)sizeof(unsigned short int) /*2ul*/ ;
            key = (unsigned short int)temp16;
            memcpy((void *)&temp16, (const void *)bufpos, sizeof(unsigned short int) /*2ul*/ );
            bufpos = bufpos + (signed long int)sizeof(unsigned short int) /*2ul*/ ;
            size = (unsigned short int)temp16;
            signed int return_value_dico_add_generic_6;
            return_value_dico_add_generic_6=dico_add_generic(d, section, key, (const void *)bufpos, size, type);
            if(!(return_value_dico_add_generic_6 == 0))
              return 1;

            bufpos = bufpos + (signed long int)size;
          }
          free((void *)buffer);
          return 0;
        }
      }
    }
  }
}

// archreader_read_header
// file archreader.h line 60
signed int archreader_read_header(struct s_archreader *ai, char *magic, struct s_dico **d, _Bool allowseek, unsigned short int *fsid)
{
  signed long int curpos;
  unsigned short int temp16;
  unsigned int temp32;
  unsigned int archid;
  signed int res;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  /* assertion d */
  assert(d != ((struct s_dico **)NULL));
  /* assertion fsid */
  assert(fsid != ((unsigned short int *)NULL));
  memset((void *)magic, 0, (unsigned long int)4);
  *fsid = (unsigned short int)0xFFFF;
  *d = (struct s_dico *)(void *)0;
  *d=dico_alloc();
  signed int return_value_is_magic_valid_2;
  if(*d == ((struct s_dico *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_header", 287, "dico_alloc() failed\n");
    return 1;
  }

  else
  {
    curpos=lseek64(ai->archfd, (signed long int)0, 1);
    if(!(curpos >= 0l))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_read_header", 293, "lseek64() failed to get the current position in archive\n");
      return 1;
    }

    else
    {
      res=archreader_read_data(ai, (void *)magic, (unsigned long int)4);
      if(!(res == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_header", 298, "cannot read header magic: res=%d\n", res);
        return 1;
      }

      else
      {
        signed int return_value_is_magic_valid_1;
        return_value_is_magic_valid_1=is_magic_valid(magic);
        if(!(return_value_is_magic_valid_1 == 1))
        {
          if((signed int)allowseek == 1)
            goto __CPROVER_DUMP_L4;

          fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_header", 304, "cannot read header magic: this is not a valid fsarchiver file, or it has been created with a different version.\n");
          return 1;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          do
          {
            return_value_is_magic_valid_2=is_magic_valid(magic);
            if(return_value_is_magic_valid_2 == 1)
              break;

            signed long int tmp_post_3 = curpos;
            curpos = curpos + 1l;
            signed long int return_value_lseek64_4;
            return_value_lseek64_4=lseek64(ai->archfd, tmp_post_3, 0);
            if(!(return_value_lseek64_4 >= 0l))
            {
              fsaprintf(0, (_Bool)1, (_Bool)1, "archreader.c", "archreader_read_header", 311, "lseek64(pos=%lld, SEEK_SET) failed\n", (signed long long int)curpos);
              return 1;
            }

            res=archreader_read_data(ai, (void *)magic, (unsigned long int)4);
            if(!(res == 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_header", 315, "cannot read header magic: res=%d\n", res);
              return 1;
            }

          }
          while((_Bool)1);
          res=archreader_read_data(ai, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
          if(!(res == 0))
          {
            fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_header", 322, "cannot read archive-id in header: res=%d\n", res);
            return 1;
          }

          else
          {
            archid = (unsigned int)temp32;
            if(!(ai->archid == 0u))
            {
              if(archid == ai->archid)
                goto __CPROVER_DUMP_L10;

              fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_header", 329, "archive-id in header does not match: archid=[%.8x], expected=[%.8x]\n", archid, ai->archid);
              return 2;
            }

            else
            {

            __CPROVER_DUMP_L10:
              ;
              res=archreader_read_data(ai, (void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
              if(!(res == 0))
              {
                fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_header", 336, "cannot read filesystem-id in header: res=%d\n", res);
                return 1;
              }

              else
              {
                *fsid = (unsigned short int)temp16;
                res=archreader_read_dico(ai, *d);
                if(!(res == 0))
                {
                  fsaprintf(3, (_Bool)0, 3 >= 3, "archreader.c", "archreader_read_header", 343, "imgdisk_read_dico() failed\n");
                  return res;
                }

                else
                  return 0;
              }
            }
          }
        }
      }
    }
  }
}

// archreader_read_volheader
// file archreader.h line 59
signed int archreader_read_volheader(struct s_archreader *ai)
{
  char creatver[32l];
  char filefmt[32l];
  char magic[4l];
  struct s_dico *d;
  unsigned int volnum;
  unsigned int readid;
  unsigned short int fsid;
  signed int res;
  signed int ret = 0;
  /* assertion ai */
  assert(ai != ((struct s_archreader *)NULL));
  memset((void *)magic, 0, sizeof(char [4l]) /*4ul*/ );
  res=archreader_read_header(ai, magic, &d, (_Bool)0, &fsid);
  signed int return_value_dico_get_u32_2;
  signed int return_value_dico_get_u32_3;
  signed int return_value_dico_get_data_4;
  signed int return_value_strncmp_5;
  signed int return_value_dico_get_data_6;
  if(!(res == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 368, "archreader_read_header() failed to read the archive header\n");
    return -1;
  }

  else
  {
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(magic, "FsA0", (unsigned long int)4);
    if(!(return_value_strncmp_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 374, "magic is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"FsA0");
      ret = -1;
    }

    else
    {
      return_value_dico_get_u32_2=dico_get_u32(d, (unsigned char)0, (unsigned short int)1, &readid);
      if(!(return_value_dico_get_u32_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 379, "cannot get VOLUMEHEADKEY_ARCHID from the volume header\n");
        ret = -1;
      }

      else
      {
        if(ai->archid == 0u)
          ai->archid = readid;

        else
          if(!(readid == ai->archid))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 389, "wrong header id: found=%.8x and expected=%.8x\n", readid, ai->archid);
            ret = -1;
            goto archio_read_volheader_error;
          }

        return_value_dico_get_u32_3=dico_get_u32(d, (unsigned char)0, (unsigned short int)0, &volnum);
        if(!(return_value_dico_get_u32_3 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 395, "cannot get VOLUMEHEADKEY_VOLNUM from the volume header\n");
          ret = -1;
        }

        else
          if(!(volnum == ai->curvol))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 399, "wrong volume number in [%s]: volnum is %d and we need volnum %d\n", (const void *)ai->volpath, (signed int)volnum, (signed int)ai->curvol);
            ret = -1;
          }

          else
          {
            return_value_dico_get_data_4=dico_get_data(d, (unsigned char)0, (unsigned short int)2, (void *)filefmt, (unsigned short int)32, (unsigned short int *)(void *)0);
            if(!(return_value_dico_get_data_4 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 405, "cannot find VOLUMEHEADKEY_FILEFORMATVER in main-header\n");
              ret = -1;
            }

            else
            {
              if((signed int)ai->filefmt[0l] == 0)
                memcpy((void *)ai->filefmt, (const void *)filefmt, (unsigned long int)32);

              else
              {
                return_value_strncmp_5=strncmp(filefmt, ai->filefmt, (unsigned long int)32);
                if(!(return_value_strncmp_5 == 0))
                {
                  fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 415, "This archive is based on a different file format: [%s]. Cannot continue.\n", (const void *)ai->filefmt);
                  fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 416, "It has been created with fsarchiver [%s], you should extrat the archive using that version.\n", (const void *)ai->creatver);
                  fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 417, "The current version of the program is [%s], and it's based on format [%s]\n", (const void *)"0.6.22", (const void *)"FsArCh_002");
                  ret = -1;
                  goto archio_read_volheader_error;
                }

              }
              return_value_dico_get_data_6=dico_get_data(d, (unsigned char)0, (unsigned short int)3, (void *)creatver, (unsigned short int)32, (unsigned short int *)(void *)0);
              if(!(return_value_dico_get_data_6 == 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "archreader.c", "archreader_read_volheader", 422, "cannot find VOLUMEHEADKEY_PROGVERCREAT in main-header\n");
                ret = -1;
              }

              else
                if((signed int)ai->creatver[0l] == 0)
                  memcpy((void *)ai->creatver, (const void *)creatver, (unsigned long int)32);

            }
          }
      }
    }

  archio_read_volheader_error:
    ;
    dico_destroy(d);
    return ret;
  }
}

// archreader_volpath
// file archreader.h line 56
signed int archreader_volpath(struct s_archreader *ai)
{
  signed int res;
  res=get_path_to_volume(ai->volpath, 4096, ai->basepath, (signed long int)ai->curvol);
  return res;
}

// archwriter_close
// file archwriter.h line 48
signed int archwriter_close(struct s_archwriter *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  if(!(ai->archfd >= 0))
    return -1;

  else
  {
    fsync(ai->archfd);
    close(ai->archfd);
    ai->archfd = -1;
    return 0;
  }
}

// archwriter_create
// file archwriter.h line 47
signed int archwriter_create(struct s_archwriter *ai)
{
  struct stat64 st;
  signed long int archflags = (signed long int)0;
  signed long int archperm;
  signed int res;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  memset((void *)&st, 0, sizeof(struct stat64) /*144ul*/ );
  archflags = (signed long int)(02 | 0100 | 01000 | 0);
  archperm = (signed long int)(0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  res=stat64(ai->volpath, &st);
  if(res == 0 && !((61440u & st.st_mode) == 32768u))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_create", 90, "%s already exists, and is not a regular file.\n", (const void *)ai->basepath);
    return -1;
  }

  else
    if((61440u & st.st_mode) == 32768u && res == 0 && (signed int)g_options.overwrite == 0)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_create", 94, "%s already exists, please remove it first.\n", (const void *)ai->basepath);
      return -1;
    }

  ai->archfd=open64(ai->volpath, (signed int)archflags, archperm);
  if(!(ai->archfd >= 0))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "archwriter.c", "archwriter_create", 116, "cannot create archive %s\n", (const void *)ai->volpath);
    return -1;
  }

  else
  {
    ai->newarch = (_Bool)1;
    strlist_add(&ai->vollist, ai->volpath);
    return 0;
  }
}

// archwriter_destroy
// file archwriter.h line 46
signed int archwriter_destroy(struct s_archwriter *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  strlist_destroy(&ai->vollist);
  return 0;
}

// archwriter_dowrite_block
// file archwriter.h line 60
signed int archwriter_dowrite_block(struct s_archwriter *ai, struct s_blockinfo *blkinfo)
{
  struct s_writebuf *wb = (struct s_writebuf *)(void *)0;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  wb=writebuf_alloc();
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_dowrite_block", 379, "writebuf_alloc() failed\n");
    return -1;
  }

  else
  {
    signed int return_value_writebuf_add_block_1;
    return_value_writebuf_add_block_1=writebuf_add_block(wb, blkinfo, ai->archid, blkinfo->blkfsid);
    if(!(return_value_writebuf_add_block_1 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_block", 384, "archio_write_block() failed\n");
      return -1;
    }

    else
    {
      signed int return_value_archwriter_split_if_necessary_2;
      return_value_archwriter_split_if_necessary_2=archwriter_split_if_necessary(ai, wb);
      if(!(return_value_archwriter_split_if_necessary_2 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_block", 389, "archwriter_split_if_necessary() failed\n");
        return -1;
      }

      else
      {
        signed int return_value_archwriter_write_buffer_3;
        return_value_archwriter_write_buffer_3=archwriter_write_buffer(ai, wb);
        if(!(return_value_archwriter_write_buffer_3 == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_block", 394, "archwriter_write_buffer() failed\n");
          return -1;
        }

        else
        {
          writebuf_destroy(wb);
          return 0;
        }
      }
    }
  }
}

// archwriter_dowrite_header
// file archwriter.h line 61
signed int archwriter_dowrite_header(struct s_archwriter *ai, struct s_headinfo *headinfo)
{
  struct s_writebuf *wb = (struct s_writebuf *)(void *)0;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  wb=writebuf_alloc();
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_dowrite_header", 409, "writebuf_alloc() failed\n");
    return -1;
  }

  else
  {
    signed int return_value_writebuf_add_header_1;
    return_value_writebuf_add_header_1=writebuf_add_header(wb, headinfo->dico, headinfo->magic, ai->archid, headinfo->fsid);
    if(!(return_value_writebuf_add_header_1 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_header", 414, "archio_write_block() failed\n");
      return -1;
    }

    else
    {
      signed int return_value_archwriter_split_if_necessary_2;
      return_value_archwriter_split_if_necessary_2=archwriter_split_if_necessary(ai, wb);
      if(!(return_value_archwriter_split_if_necessary_2 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_header", 419, "archwriter_split_if_necessary() failed\n");
        return -1;
      }

      else
      {
        signed int return_value_archwriter_write_buffer_3;
        return_value_archwriter_write_buffer_3=archwriter_write_buffer(ai, wb);
        if(!(return_value_archwriter_write_buffer_3 == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_dowrite_header", 424, "archwriter_write_buffer() failed\n");
          return -1;
        }

        else
        {
          writebuf_destroy(wb);
          return 0;
        }
      }
    }
  }
}

// archwriter_generate_id
// file archwriter.h line 50
signed int archwriter_generate_id(struct s_archwriter *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  ai->archid=generate_random_u32_id();
  return 0;
}

// archwriter_get_currentpos
// file archwriter.c line 178
signed long int archwriter_get_currentpos(struct s_archwriter *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  signed long int return_value_lseek64_1;
  return_value_lseek64_1=lseek64(ai->archfd, (signed long int)0, 1);
  return (signed long int)return_value_lseek64_1;
}

// archwriter_incvolume
// file archwriter.c line 239
signed int archwriter_incvolume(struct s_archwriter *ai, _Bool waitkeypress)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  ai->curvol = ai->curvol + 1u;
  signed int return_value_archwriter_volpath_1;
  return_value_archwriter_volpath_1=archwriter_volpath(ai);
  return return_value_archwriter_volpath_1;
}

// archwriter_init
// file archwriter.h line 45
signed int archwriter_init(struct s_archwriter *ai)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  memset((void *)ai, 0, sizeof(struct s_archwriter) /*8792ul*/ );
  strlist_init(&ai->vollist);
  ai->newarch = (_Bool)0;
  ai->archfd = -1;
  ai->archid = (unsigned int)0;
  ai->curvol = (unsigned int)0;
  return 0;
}

// archwriter_is_path_to_curvol
// file archwriter.h line 52
signed int archwriter_is_path_to_curvol(struct s_archwriter *ai, char *path)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  /* assertion path */
  assert(path != ((char *)NULL));
  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(ai->volpath, path, (unsigned long int)4096);
  return return_value_strncmp_1 == 0 ? 1 : 0;
}

// archwriter_remove
// file archwriter.h line 49
signed int archwriter_remove(struct s_archwriter *ai)
{
  char volpath[4096l];
  signed int count;
  signed int i;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  if(ai->archfd >= 0)
    archwriter_close(ai);

  if((signed int)ai->newarch == 1)
  {
    count=strlist_count(&ai->vollist);
    i = 0;
    for( ; !(i >= count); i = i + 1)
    {
      signed int return_value_strlist_getitem_2;
      return_value_strlist_getitem_2=strlist_getitem(&ai->vollist, i, volpath, (signed int)sizeof(char [4096l]) /*4096ul*/ );
      if(return_value_strlist_getitem_2 == 0)
      {
        signed int return_value_unlink_1;
        return_value_unlink_1=unlink(volpath);
        if(return_value_unlink_1 == 0)
          fsaprintf(0, (_Bool)0, 0 >= 3, "archwriter.c", "archwriter_remove", 169, "removed %s\n", (const void *)volpath);

        else
          fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_remove", 171, "cannot remove %s\n", (const void *)volpath);
      }

    }
  }

  return 0;
}

// archwriter_split_check
// file archwriter.c line 327
signed int archwriter_split_check(struct s_archwriter *ai, struct s_writebuf *wb)
{
  signed long int cursize;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  cursize=archwriter_get_currentpos(ai);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(cursize >= 0l)
  {
    if(g_options.splitsize >= 1ul)
      tmp_if_expr_1 = (unsigned long int)cursize + wb->size > g_options.splitsize ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    fsaprintf(7, (_Bool)0, 7 >= 3, "archwriter.c", "archwriter_split_check", 336, "splitchk: YES --> cursize=%lld, g_options.splitsize=%lld, cursize+wb->size=%lld, wb->size=%lld\n", (signed long long int)cursize, (signed long long int)g_options.splitsize, (unsigned long int)(signed long long int)cursize + wb->size, (signed long long int)wb->size);
    return 1;
  }

  else
  {
    fsaprintf(7, (_Bool)0, 7 >= 3, "archwriter.c", "archwriter_split_check", 342, "splitchk: NO --> cursize=%lld, g_options.splitsize=%lld, cursize+wb->size=%lld, wb->size=%lld\n", (signed long long int)cursize, (signed long long int)g_options.splitsize, (unsigned long int)(signed long long int)cursize + wb->size, (signed long long int)wb->size);
    return 0;
  }
}

// archwriter_split_if_necessary
// file archwriter.c line 347
signed int archwriter_split_if_necessary(struct s_archwriter *ai, struct s_writebuf *wb)
{
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  signed int return_value_archwriter_split_check_4;
  return_value_archwriter_split_check_4=archwriter_split_check(ai, wb);
  if(return_value_archwriter_split_check_4 == 1)
  {
    signed int return_value_archwriter_write_volfooter_1;
    return_value_archwriter_write_volfooter_1=archwriter_write_volfooter(ai, (_Bool)0);
    if(!(return_value_archwriter_write_volfooter_1 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_split_if_necessary", 354, "cannot write volume footer: archio_write_volfooter() failed\n");
      return -1;
    }

    archwriter_close(ai);
    archwriter_incvolume(ai, (_Bool)0);
    fsaprintf(2, (_Bool)0, 2 >= 3, "archwriter.c", "archwriter_split_if_necessary", 359, "Creating new volume: [%s]\n", (const void *)ai->volpath);
    signed int return_value_archwriter_create_2;
    return_value_archwriter_create_2=archwriter_create(ai);
    if(!(return_value_archwriter_create_2 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_split_if_necessary", 361, "archwriter_create() failed\n");
      return -1;
    }

    signed int return_value_archwriter_write_volheader_3;
    return_value_archwriter_write_volheader_3=archwriter_write_volheader(ai);
    if(!(return_value_archwriter_write_volheader_3 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_split_if_necessary", 365, "cannot write volume header: archio_write_volheader() failed\n");
      return -1;
    }

  }

  return 0;
}

// archwriter_volpath
// file archwriter.h line 55
signed int archwriter_volpath(struct s_archwriter *ai)
{
  signed int res;
  res=get_path_to_volume(ai->volpath, 4096, ai->basepath, (signed long int)ai->curvol);
  return res;
}

// archwriter_write_buffer
// file archwriter.c line 184
signed int archwriter_write_buffer(struct s_archwriter *ai, struct s_writebuf *wb)
{
  struct statvfs64 statvfsbuf;
  char textbuf[128l];
  signed long int lres;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  /* assertion wb */
  assert(wb != ((struct s_writebuf *)NULL));
  if(!(wb->size >= 1ul))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_buffer", 194, "wb->size=%ld\n", (signed long int)wb->size);
    return -1;
  }

  else
  {
    lres=write(ai->archfd, (const void *)(char *)wb->data, (unsigned long int)(signed long int)wb->size);
    if(!(lres == (signed long int)wb->size))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_buffer", 200, "write(size=%ld) returned %ld\n", (signed long int)wb->size, (signed long int)lres);
      _Bool tmp_if_expr_3;
      if(lres >= 1l)
        tmp_if_expr_3 = lres < (signed long int)wb->size ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        signed int return_value_fstatvfs64_1;
        return_value_fstatvfs64_1=fstatvfs64(ai->archfd, &statvfsbuf);
        if(!(return_value_fstatvfs64_1 == 0))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "archwriter.c", "archwriter_write_buffer", 204, "fstatvfs(fd=%d) failed\n", ai->archfd);
          return -1;
        }

        unsigned long int freebytes = statvfsbuf.f_bfree * statvfsbuf.f_bsize;
        char *return_value_format_size_2;
        return_value_format_size_2=format_size(freebytes, textbuf, (signed int)sizeof(char [128l]) /*128ul*/ , (char)104);
        fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_buffer", 212, "Can't write to the archive file. Space on device is %s. \nIf the archive is being written to a FAT filesystem, you may have reached \nthe maximum filesize that it can handle (in general 2 GB)\n", return_value_format_size_2);
        return -1;
      }

      else
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "archwriter.c", "archwriter_write_buffer", 217, "write(size=%ld) failed\n", (signed long int)wb->size);
        return -1;
      }
    }

    return 0;
  }
}

// archwriter_write_volfooter
// file archwriter.h line 57
signed int archwriter_write_volfooter(struct s_archwriter *ai, _Bool lastvol)
{
  struct s_writebuf *wb = (struct s_writebuf *)(void *)0;
  struct s_dico *voldico;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  wb=writebuf_alloc();
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_volfooter", 295, "writebuf_alloc() failed\n");
    return -1;
  }

  else
  {
    voldico=dico_alloc();
    if(voldico == ((struct s_dico *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_volfooter", 300, "voldico=dico_alloc() failed\n");
      return -1;
    }

    else
    {
      dico_add_u32(voldico, (unsigned char)0, (unsigned short int)0, ai->curvol);
      dico_add_u32(voldico, (unsigned char)0, (unsigned short int)1, ai->archid);
      dico_add_u32(voldico, (unsigned char)0, (unsigned short int)2, (unsigned int)lastvol);
      signed int return_value_writebuf_add_header_1;
      return_value_writebuf_add_header_1=writebuf_add_header(wb, voldico, "FsAE", ai->archid, (unsigned short int)0xFFFF);
      if(!(return_value_writebuf_add_header_1 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_write_volfooter", 311, "archio_write_header() failed\n");
        return -1;
      }

      else
      {
        signed int return_value_archwriter_write_buffer_2;
        return_value_archwriter_write_buffer_2=archwriter_write_buffer(ai, wb);
        if(!(return_value_archwriter_write_buffer_2 == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_write_volfooter", 317, "archwriter_write_data(size=%ld) failed\n", (signed long int)wb->size);
          return -1;
        }

        else
        {
          dico_destroy(voldico);
          writebuf_destroy(wb);
          return 0;
        }
      }
    }
  }
}

// archwriter_write_volheader
// file archwriter.h line 56
signed int archwriter_write_volheader(struct s_archwriter *ai)
{
  struct s_writebuf *wb = (struct s_writebuf *)(void *)0;
  struct s_dico *voldico;
  /* assertion ai */
  assert(ai != ((struct s_archwriter *)NULL));
  wb=writebuf_alloc();
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_write_volheader", 254, "writebuf_alloc() failed\n");
    return -1;
  }

  else
  {
    voldico=dico_alloc();
    if(voldico == ((struct s_dico *)NULL))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "archwriter.c", "archwriter_write_volheader", 259, "voldico=dico_alloc() failed\n");
      return -1;
    }

    else
    {
      dico_add_u32(voldico, (unsigned char)0, (unsigned short int)0, ai->curvol);
      dico_add_u32(voldico, (unsigned char)0, (unsigned short int)1, ai->archid);
      dico_add_string(voldico, (unsigned char)0, (unsigned short int)2, "FsArCh_002");
      dico_add_string(voldico, (unsigned char)0, (unsigned short int)3, "0.6.22");
      signed int return_value_writebuf_add_header_1;
      return_value_writebuf_add_header_1=writebuf_add_header(wb, voldico, "FsA0", ai->archid, (unsigned short int)0xFFFF);
      if(!(return_value_writebuf_add_header_1 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_volheader", 271, "archio_write_header() failed\n");
        return -1;
      }

      else
      {
        signed int return_value_archwriter_write_buffer_2;
        return_value_archwriter_write_buffer_2=archwriter_write_buffer(ai, wb);
        if(!(return_value_archwriter_write_buffer_2 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "archwriter.c", "archwriter_write_volheader", 277, "archwriter_write_buffer() failed\n");
          return -1;
        }

        else
        {
          dico_destroy(voldico);
          writebuf_destroy(wb);
          return 0;
        }
      }
    }
  }
}

// btrfs_check_compatibility
// file fs_btrfs.c line 38
signed int btrfs_check_compatibility(unsigned long int compat, unsigned long int incompat, unsigned long int ro_compat)
{
  if(!((18446744073709551615ull & compat) == 0ul))
    return -1;

  else
    if(!((18446744073709550592ull & incompat) == 0ul))
      return -1;

    else
      if(!((18446744073709551615ull & ro_compat) == 0ul))
        return -1;

      else
        return 0;
}

// btrfs_get_reqmntopt
// file fs_btrfs.c line 209
signed int btrfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    strlist_add(badopt, "noacl");
    return 0;
  }
}

// btrfs_getinfo
// file fs_btrfs.c line 105
signed int btrfs_getinfo(struct s_dico *d, char *devname)
{
  struct btrfs_super_block sb;
  char uuid[512l];
  unsigned short int temp32;
  signed int ret = 0;
  signed int fd;
  fd=open64(devname, 00 | 0);
  signed long int return_value_lseek_1;
  signed long int return_value_read_2;
  signed int return_value_strncmp_3;
  signed int return_value_btrfs_check_compatibility_4;
  if(!(fd >= 0))
  {
    ret = -1;
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_getinfo", 115, "cannot open(%s, O_RDONLY)\n", devname);
  }

  else
  {
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      ret = -2;
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_getinfo", 121, "cannot lseek(fd, BTRFS_SUPER_INFO_OFFSET, SEEK_SET) on %s\n", devname);
    }

    else
    {
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct btrfs_super_block) /*2859ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct btrfs_super_block) /*2859ul*/ ))
      {
        ret = -3;
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_getinfo", 127, "cannot read the btrfs superblock on device [%s]\n", devname);
      }

      else
      {
        return_value_strncmp_3=strncmp((char *)&sb.magic, "_BHRfS_M", sizeof(unsigned long long int) /*8ul*/ );
        if(!(return_value_strncmp_3 == 0))
        {
          ret = -4;
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_getinfo", 133, "magic different from expectations superblock on [%s]: magic=[%.8s], expected=[%.8s]\n", devname, (char *)&sb.magic, (const void *)"_BHRfS_M");
        }

        else
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_btrfs.c", "btrfs_getinfo", 138, "btrfs_label=[%s]\n", (const void *)sb.label);
          dico_add_string(d, (unsigned char)0, (unsigned short int)5, (char *)sb.label);
          memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
          uuid_unparse_lower((unsigned char *)sb.dev_item.fsid, uuid);
          dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_btrfs.c", "btrfs_getinfo", 147, "btrfs_uuid=[%s]\n", (const void *)uuid);
          temp32 = (unsigned short int)(unsigned int)sb.sectorsize;
          dico_add_u64(d, (unsigned char)0, (unsigned short int)18, (unsigned long int)temp32);
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_btrfs.c", "btrfs_getinfo", 152, "btrfs_sectorsize=[%ld]\n", (signed long int)temp32);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)21, (unsigned long int)sb.compat_flags);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)22, (unsigned long int)sb.incompat_flags);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)23, (unsigned long int)sb.compat_ro_flags);
          return_value_btrfs_check_compatibility_4=btrfs_check_compatibility((unsigned long int)sb.compat_flags, (unsigned long int)sb.incompat_flags, (unsigned long int)sb.compat_ro_flags);
          if(!(return_value_btrfs_check_compatibility_4 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_getinfo", 159, "this filesystem has features which are not supported by this fsarchiver version.\n");
            return -1;
          }

          dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
        }
      }
    }

  btrfs_read_sb_close:
    ;
    close(fd);
  }

btrfs_read_sb_return:
  ;
  return ret;
}

// btrfs_mkfs
// file fs_btrfs.c line 53
signed int btrfs_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char command[2048l];
  char buffer[2048l];
  char options[2048l];
  unsigned long int compat_flags;
  unsigned long int incompat_flags;
  unsigned long int compat_ro_flags;
  signed int exitst;
  unsigned long int temp64;
  signed int return_value_dico_get_u64_1;
  return_value_dico_get_u64_1=dico_get_u64(d, (unsigned char)0, (unsigned short int)21, &compat_flags);
  _Bool tmp_if_expr_3;
  signed int return_value_dico_get_u64_2;
  if(!(return_value_dico_get_u64_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_dico_get_u64_2=dico_get_u64(d, (unsigned char)0, (unsigned short int)22, &incompat_flags);
    tmp_if_expr_3 = return_value_dico_get_u64_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_dico_get_u64_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_dico_get_u64_4=dico_get_u64(d, (unsigned char)0, (unsigned short int)23, &compat_ro_flags);
    tmp_if_expr_5 = return_value_dico_get_u64_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_5)
  {
    compat_flags = (unsigned long int)0;
    incompat_flags = (unsigned long int)0;
    compat_ro_flags = (unsigned long int)0;
  }

  signed int return_value_btrfs_check_compatibility_6;
  return_value_btrfs_check_compatibility_6=btrfs_check_compatibility(compat_flags, incompat_flags, compat_ro_flags);
  unsigned long int return_value_strlen_8;
  if(!(return_value_btrfs_check_compatibility_6 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_mkfs", 76, "this filesystem has features which are not supported by this fsarchiver version.\n");
    return -1;
  }

  else
  {
    signed int return_value_exec_command_7;
    return_value_exec_command_7=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.btrfs");
    if(!(return_value_exec_command_7 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_mkfs", 82, "mkfs.btrfs not found. please install btrfs-progs on your system or check the PATH.\n");
      return -1;
    }

    else
    {
      memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
      signed int return_value_dico_get_string_9;
      return_value_dico_get_string_9=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
      if(return_value_dico_get_string_9 == 0)
      {
        return_value_strlen_8=strlen(buffer);
        if(return_value_strlen_8 >= 1ul)
          strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -L '%s' ", (const void *)buffer);

      }

      signed int return_value_dico_get_u64_10;
      return_value_dico_get_u64_10=dico_get_u64(d, (unsigned char)0, (unsigned short int)18, &temp64);
      if(return_value_dico_get_u64_10 == 0)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -s %ld ", (signed long int)temp64);

      signed int return_value_exec_command_11;
      return_value_exec_command_11=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.btrfs -f %s %s", partition, (const void *)options);
      if(!(return_value_exec_command_11 == 0) || !(exitst == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_btrfs.c", "btrfs_mkfs", 98, "command [%s] failed\n", (const void *)command);
        return -1;
      }

      else
        return 0;
    }
  }
}

// btrfs_mount
// file fs_btrfs.c line 172
signed int btrfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  signed int return_value_generic_mount_1;
  return_value_generic_mount_1=generic_mount(partition, mntbuf, fsbuf, (char *)(void *)0, flags);
  return return_value_generic_mount_1;
}

// btrfs_test
// file fs_btrfs.c line 182
signed int btrfs_test(char *devname)
{
  struct btrfs_super_block sb;
  signed int fd;
  fd=open64(devname, 00 | 0);
  if(!(fd >= 0))
    return 0;

  else
  {
    signed long int return_value_lseek_1;
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      close(fd);
      return 0;
    }

    else
    {
      signed long int return_value_read_2;
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct btrfs_super_block) /*2859ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct btrfs_super_block) /*2859ul*/ ))
      {
        close(fd);
        return 0;
      }

      else
      {
        signed int return_value_strncmp_3;
        return_value_strncmp_3=strncmp((char *)&sb.magic, "_BHRfS_M", sizeof(unsigned long long int) /*8ul*/ );
        if(!(return_value_strncmp_3 == 0))
        {
          close(fd);
          return 0;
        }

        else
        {
          close(fd);
          return 1;
        }
      }
    }
  }
}

// btrfs_umount
// file fs_btrfs.c line 177
signed int btrfs_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

// check_prog_version
// file fs_ext2.c line 514
unsigned long int check_prog_version(char *prog)
{
  char stderrbuf[2048l];
  char command[2048l];
  char options[1024l];
  char temp1[1024l];
  char delims[3l] = { '\n', '\r', 0 };
  char *saveptr;
  char *result;
  signed int foundversion;
  signed int x;
  signed int y;
  signed int z;
  memset((void *)options, 0, sizeof(char [1024l]) /*1024ul*/ );
  memset((void *)stderrbuf, 0, sizeof(char [2048l]) /*2048ul*/ );
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, stderrbuf, (signed int)sizeof(char [2048l]) /*2048ul*/ , "%s -V", prog);
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "check_prog_version", 531, "program %s was not found or has bad permissions.\n", prog);
    return (unsigned long int)-1;
  }

  else
  {
    foundversion = 0;
    result=strtok_r(stderrbuf, delims, &saveptr);
    while(foundversion == 0 && !(result == ((char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(prog);
      signed int return_value_memcmp_3;
      return_value_memcmp_3=memcmp((const void *)result, (const void *)prog, return_value_strlen_2);
      if(return_value_memcmp_3 == 0)
        foundversion = 1;

      else
        result=strtok_r((char *)(void *)0, delims, &saveptr);
    }
    if(foundversion == 0)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "check_prog_version", 545, "can't parse %s version number: no match\n", prog);
      return (unsigned long int)0;
    }

    else
    {
      z = 0;
      y = z;
      x = y;
      sscanf(result, "%s %d.%d.%d", (const void *)temp1, &x, &y, &z);
      if(x == 0 && y == 0)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "check_prog_version", 553, "can't parse %s version number: x=y=0\n", prog);
        return (unsigned long int)0;
      }

      else
        return ((unsigned long int)x << 16) + ((unsigned long int)y << 8) + ((unsigned long int)z << 0);
    }
  }
}

// compalgostr
// file archinfo.c line 31
char * compalgostr(signed int algo)
{
  switch(algo)
  {
    case 1:
      return "none";
    case 2:
      return "lzo";
    case 3:
      return "gzip";
    case 4:
      return "bzip2";
    case 5:
      return "lzma";
    default:
      return "unknown";
  }
}

// compress_block_bzip2
// file comp_bzip2.h line 21
signed int compress_block_bzip2(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level)
{
  unsigned int destsize = (unsigned int)compbufsize;
  signed int return_value_BZ2_bzBuffToBuffCompress_1;
  return_value_BZ2_bzBuffToBuffCompress_1=BZ2_bzBuffToBuffCompress((char *)compbuf, &destsize, (char *)origbuf, (unsigned int)origsize, 9, 0, 30);
  if(!(return_value_BZ2_bzBuffToBuffCompress_1 == 0))
  {
    if(return_value_BZ2_bzBuffToBuffCompress_1 == -3)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    *compsize = (unsigned long int)destsize;
    return 0;

  __CPROVER_DUMP_L2:
    ;
    fsaprintf(0, (_Bool)0, (_Bool)1, "comp_bzip2.c", "compress_block_bzip2", 41, "BZ2_bzBuffToBuffCompress(): BZIP2 compression failed with an out of memory error.\nYou should use a lower compression level to reduce the memory requirement.\n");
    return -2;
  }
  return -1;
  return -1;
}

// compress_block_generic
// file thread_comp.c line 41
signed int compress_block_generic(struct s_blockinfo *blkinfo)
{
  char *bufcomp = (char *)(void *)0;
  signed int attempt = 0;
  signed int compalgo;
  signed int complevel;
  unsigned long int compsize;
  unsigned long int bufsize;
  signed int res;
  bufsize = (unsigned long int)(blkinfo->blkrealsize + blkinfo->blkrealsize / (unsigned int)16 + (unsigned int)64 + (unsigned int)3);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(bufsize);
  bufcomp = (char *)return_value_malloc_1;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  if(bufcomp == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "compress_block_generic", 53, "malloc(%ld) failed: out of memory\n", (signed long int)bufsize);
    return -1;
  }

  else
  {
    compalgo = (signed int)g_options.compressalgo;
    complevel = g_options.compresslevel;
    while((_Bool)1)
    {
      switch(compalgo)
      {
        case 2:
        {
          res=compress_block_lzo((unsigned long int)blkinfo->blkrealsize, &compsize, (unsigned char *)blkinfo->blkdata, (unsigned char *)(void *)bufcomp, bufsize, complevel);
          blkinfo->blkcompalgo = (unsigned short int)2;
          break;
        }
        case 3:
        {
          res=compress_block_gzip((unsigned long int)blkinfo->blkrealsize, &compsize, (unsigned char *)blkinfo->blkdata, (unsigned char *)(void *)bufcomp, bufsize, complevel);
          blkinfo->blkcompalgo = (unsigned short int)3;
          break;
        }
        case 4:
        {
          res=compress_block_bzip2((unsigned long int)blkinfo->blkrealsize, &compsize, (unsigned char *)blkinfo->blkdata, (unsigned char *)(void *)bufcomp, bufsize, complevel);
          blkinfo->blkcompalgo = (unsigned short int)4;
          break;
        }
        case 5:
        {
          res=compress_block_lzma((unsigned long int)blkinfo->blkrealsize, &compsize, (unsigned char *)blkinfo->blkdata, (unsigned char *)(void *)bufcomp, bufsize, complevel);
          blkinfo->blkcompalgo = (unsigned short int)5;
          break;
        }
        default:
        {
          free((void *)bufcomp);
          fsaprintf(2, (_Bool)0, 2 >= 3, "thread_comp.c", "compress_block_generic", 88, "invalid compression level: %d\n", (signed int)compalgo);
          return -1;
        }
      }
      if(res == -2 && compalgo >= 4)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "compress_block_generic", 95, "attempt to compress the current block using an alternative algorithm (\"-z%d\")\n", 3);
        compalgo = 3;
        complevel = 6;
      }

      if(res == -2)
      {
        tmp_post_2 = attempt;
        attempt = attempt + 1;
        tmp_if_expr_3 = tmp_post_2 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      if(!tmp_if_expr_3)
        break;

    }
    _Bool tmp_if_expr_4;
    if(res == 0)
      tmp_if_expr_4 = compsize < (unsigned long int)blkinfo->blkrealsize ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      free((void *)blkinfo->blkdata);
      blkinfo->blkdata = bufcomp;
      blkinfo->blkcompsize = (unsigned int)compsize;
      blkinfo->blkarsize = (unsigned int)compsize;
    }

    else
    {
      memcpy((void *)bufcomp, (const void *)blkinfo->blkdata, (unsigned long int)blkinfo->blkrealsize);
      free((void *)blkinfo->blkdata);
      blkinfo->blkdata = bufcomp;
      blkinfo->blkcompsize = blkinfo->blkrealsize;
      blkinfo->blkarsize = blkinfo->blkrealsize;
      blkinfo->blkcompalgo = (unsigned short int)1;
    }
    unsigned long int cryptsize;
    char *bufcrypt = (char *)(void *)0;
    if((signed int)g_options.encryptalgo == 2)
    {
      void *return_value_malloc_5;
      return_value_malloc_5=malloc(bufsize + (unsigned long int)8);
      bufcrypt = (char *)return_value_malloc_5;
      if(bufcrypt == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "compress_block_generic", 125, "malloc(%ld) failed: out of memory\n", (signed long int)bufsize + (signed long int)8);
        return -1;
      }

      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen((char *)g_options.encryptpass);
      res=crypto_blowfish((unsigned long int)blkinfo->blkcompsize, &cryptsize, (unsigned char *)bufcomp, (unsigned char *)bufcrypt, g_options.encryptpass, (signed int)return_value_strlen_6, 1);
      if(!(res == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "compress_block_generic", 130, "crypt_block_blowfish() failed\n");
        return -1;
      }

      free((void *)bufcomp);
      blkinfo->blkdata = bufcrypt;
      blkinfo->blkarsize = (unsigned int)cryptsize;
      blkinfo->blkcryptalgo = (unsigned short int)2;
    }

    else
      blkinfo->blkcryptalgo = (unsigned short int)1;
    blkinfo->blkarcsum=fletcher32((unsigned char *)(void *)blkinfo->blkdata, blkinfo->blkarsize);
    return 0;
  }
}

// compress_block_gzip
// file comp_gzip.h line 21
signed int compress_block_gzip(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level)
{
  unsigned long int gzsize;
  unsigned char *gzbuffer;
  gzsize = (unsigned long int)compbufsize;
  gzbuffer = (unsigned char *)compbuf;
  signed int return_value_compress2_1;
  return_value_compress2_1=compress2(gzbuffer, &gzsize, (const unsigned char *)origbuf, (unsigned long int)origsize, level);
  if(!(return_value_compress2_1 == 0))
  {
    if(return_value_compress2_1 == -4)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    *compsize = (unsigned long int)gzsize;
    return 0;

  __CPROVER_DUMP_L2:
    ;
    return -2;
  }
  return -1;
  return -1;
}

// compress_block_lzma
// file comp_lzma.h line 23
signed int compress_block_lzma(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level)
{
  struct anonymous_13 lzma = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_12 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_9)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_9)LZMA_RESERVED_ENUM };
  signed int res;
  lzma.next_in = origbuf;
  lzma.avail_in = origsize;
  lzma.next_out = compbuf;
  lzma.avail_out = compbufsize;
  enum anonymous_10 return_value_lzma_easy_encoder_1;
  return_value_lzma_easy_encoder_1=lzma_easy_encoder(&lzma, (unsigned int)level, (enum anonymous_14)LZMA_CHECK_CRC32);
  res = (signed int)return_value_lzma_easy_encoder_1;
  if(!(res == LZMA_OK))
  {
    if(res == LZMA_MEM_ERROR)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "compress_block_lzma", 49, "lzma_easy_encoder(%d): LZMA compression failed with an out of memory error.\nYou should use a lower compression level to reduce the memory requirement.\n", level);
      lzma_end(&lzma);
      return -2;
    }

    fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "compress_block_lzma", 53, "lzma_easy_encoder(%d) failed with res=%d\n", level, res);
    lzma_end(&lzma);
    return -1;
  }

  else
  {
    enum anonymous_10 return_value_lzma_code_2;
    return_value_lzma_code_2=lzma_code(&lzma, (enum anonymous_11)LZMA_RUN);
    res = (signed int)return_value_lzma_code_2;
    if(!(res == LZMA_OK))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "compress_block_lzma", 60, "lzma_code(LZMA_RUN) failed with res=%d\n", res);
      lzma_end(&lzma);
      return -1;
    }

    else
    {
      enum anonymous_10 return_value_lzma_code_3;
      return_value_lzma_code_3=lzma_code(&lzma, (enum anonymous_11)LZMA_FINISH);
      res = (signed int)return_value_lzma_code_3;
      if(!(res == LZMA_STREAM_END))
      {
        if(res == LZMA_OK)
          goto __CPROVER_DUMP_L5;

        fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "compress_block_lzma", 66, "lzma_code(LZMA_FINISH) failed with res=%d\n", res);
        lzma_end(&lzma);
        return -1;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        *compsize = (unsigned long int)lzma.total_out;
        lzma_end(&lzma);
        return 0;
      }
    }
  }
}

// compress_block_lzo
// file comp_lzo.h line 25
signed int compress_block_lzo(unsigned long int origsize, unsigned long int *compsize, unsigned char *origbuf, unsigned char *compbuf, unsigned long int compbufsize, signed int level)
{
  unsigned long int destsize = (unsigned long int)compbufsize;
  char workmem[(signed long int)(sizeof(unsigned char *) * 16384) /*131072l*/ ];
  signed int return_value_lzo1x_1_compress_1;
  return_value_lzo1x_1_compress_1=lzo1x_1_compress((unsigned char *)origbuf, (unsigned long int)origsize, (unsigned char *)compbuf, (unsigned long int *)&destsize, (void *)workmem);
  if(!(return_value_lzo1x_1_compress_1 == 0))
  {
    if(return_value_lzo1x_1_compress_1 == -2)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    *compsize = (unsigned long int)destsize;
    return 0;

  __CPROVER_DUMP_L2:
    ;
    return -2;
  }
  return -1;
  return -1;
}

// compression_function
// file thread_comp.c line 249
signed int compression_function(signed int oper)
{
  struct s_blockinfo blkinfo;
  signed long int blknum;
  signed int res;
  _Bool return_value_queue_get_end_of_queue_1;
  do
  {
    return_value_queue_get_end_of_queue_1=queue_get_end_of_queue(&g_queue);
    if(!((signed int)return_value_queue_get_end_of_queue_1 == 0))
      break;

    blknum=queue_get_first_block_todo(&g_queue, &blkinfo);
    if(blknum >= 1l)
    {
      switch(oper)
      {
        case 1:
        {
          res=compress_block_generic(&blkinfo);
          break;
        }
        case 2:
        {
          res=decompress_block_generic(&blkinfo);
          break;
        }
        default:
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "compression_function", 268, "oper is invalid: %d\n", oper);
          goto thread_comp_fct_error;
        }
      }
      if(!(res == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "thread_comp.c", "compression_function", 272, "compress_block()=%d failed\n", res);
        goto thread_comp_fct_error;
      }

      queue_replace_block(&g_queue, blknum, &blkinfo, 3);
    }

  }
  while((_Bool)1);
  fsaprintf(4, (_Bool)0, 4 >= 3, "thread_comp.c", "compression_function", 280, "THREAD-COMP: exit success\n");
  return 0;

thread_comp_fct_error:
  ;
  get_stopfillqueue();
  fsaprintf(4, (_Bool)0, 4 >= 3, "thread_comp.c", "compression_function", 285, "THREAD-COMP: exit error\n");
  return 0;
}

// concatenate_paths
// file common.h line 29
void concatenate_paths(char *buffer, signed int maxbufsize, char *p1, char *p2)
{
  signed int i;
  memset((void *)buffer, 0, (unsigned long int)maxbufsize);
  i = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(p1[(signed long int)i] == 0))
    {
      if(!((signed int)p1[(signed long int)i] == 47))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = p1[(signed long int)(i + 1)] != 0 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    char *tmp_post_3 = buffer;
    buffer = buffer + 1l;
    *tmp_post_3 = p1[(signed long int)i];
    i = i + 1;
  }
  while((_Bool)1);
  char *tmp_post_4 = buffer;
  buffer = buffer + 1l;
  *tmp_post_4 = (char)47;
  for( ; (signed int)*p2 == 47; p2 = p2 + 1l)
    ;
  strlcatf(buffer, maxbufsize, "%s", p2);
}

// convert_argv_to_strdicos
// file oper_restore.c line 110
signed int convert_argv_to_strdicos(struct s_strdico **dicoargv, signed int argc, char **cmdargv)
{
  struct s_strdico *tmpdico = (struct s_strdico *)(void *)0;
  char buffer[1024l];
  struct stat64 st;
  signed long int temp64;
  signed int fsid;
  signed int i = 0;
  _Bool tmp_if_expr_1;
  signed int return_value_strdico_parse_string_3;
  do
  {
    if(!(i >= 128) && !(i >= argc))
      tmp_if_expr_1 = cmdargv[(signed long int)i] != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    tmpdico=strdico_alloc();
    if(tmpdico == ((struct s_strdico *)NULL))
      return -1;

    signed int return_value_strdico_set_valid_keys_2;
    return_value_strdico_set_valid_keys_2=strdico_set_valid_keys(tmpdico, "id,dest,mkfs,mkfsopt");
    _Bool tmp_if_expr_4;
    if(!(return_value_strdico_set_valid_keys_2 == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_strdico_parse_string_3=strdico_parse_string(tmpdico, cmdargv[(signed long int)i]);
      tmp_if_expr_4 = return_value_strdico_parse_string_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      strdico_destroy(tmpdico);
      return -1;
    }

    signed int return_value_strdico_get_s64_5;
    return_value_strdico_get_s64_5=strdico_get_s64(tmpdico, &temp64, "id");
    if(!(return_value_strdico_get_s64_5 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "convert_argv_to_strdicos", 133, "cannot find \"id=\" key in \"%s\"\n", cmdargv[(signed long int)i]);
      strdico_destroy(tmpdico);
      return -1;
    }

    fsid = (signed int)temp64;
    if(fsid >= 128 || !(fsid >= 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "convert_argv_to_strdicos", 139, "invalid filesystem id [%d]: it must match a valid filesystem id as shown by archinfo\n", fsid);
      strdico_destroy(tmpdico);
      return -1;
    }

    signed int return_value_strdico_get_string_6;
    return_value_strdico_get_string_6=strdico_get_string(tmpdico, buffer, (signed int)sizeof(char [1024l]) /*1024ul*/ , "dest");
    if(!(return_value_strdico_get_string_6 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "convert_argv_to_strdicos", 146, "cannot find \"dest=\" key in \"%s\"\n", cmdargv[(signed long int)i]);
      strdico_destroy(tmpdico);
      return -1;
    }

    signed int return_value_stat64_7;
    return_value_stat64_7=stat64(buffer, &st);
    if(!((61440u & st.st_mode) == 24576u) || !(return_value_stat64_7 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "convert_argv_to_strdicos", 151, "\"%s\" is not a valid block device\n", (const void *)buffer);
      strdico_destroy(tmpdico);
      return -1;
    }

    if(!(dicoargv[(signed long int)fsid] == ((struct s_strdico *)NULL)))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "convert_argv_to_strdicos", 158, "you mentioned filesystem with id=%d multiple times, cannot continue\n", fsid);
      strdico_destroy(tmpdico);
      return -1;
    }

    dicoargv[(signed long int)fsid] = tmpdico;
    i = i + 1;
  }
  while((_Bool)1);
  return 0;
}

// createar_item_stdattr
// file oper_save.c line 400
signed int createar_item_stdattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d, signed int *objtype, unsigned long int *filecost)
{
  struct stat64 stattarget;
  char fullpath[4096l];
  char buffer[4096l];
  char buffer2[4096l];
  char directory[4096l];
  char *linktarget = (char *)(void *)0;
  unsigned long int flags;
  signed int res;
  signed int i;
  flags = (unsigned long int)0;
  *objtype = 0;
  *filecost = (unsigned long int)16384;
  concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , root, relpath);
  fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_item_stdattr", 418, "Adding [%.5lld]=[%s]\n", (signed long long int)save->objectid, relpath);
  unsigned long int tmp_post_1 = save->objectid;
  save->objectid = save->objectid + 1ul;
  signed int return_value_dico_add_u64_2;
  return_value_dico_add_u64_2=dico_add_u64(d, (unsigned char)0, (unsigned short int)1, (unsigned long int)tmp_post_1);
  signed long int return_value_readlink_10;
  signed int return_value_memcmp_11;
  if(!(return_value_dico_add_u64_2 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 420, "dico_add_u64(DICO_OBJ_SECTION_STDATTR) failed\n");
    return -1;
  }

  else
  {
    signed int return_value_dico_add_string_3;
    return_value_dico_add_string_3=dico_add_string(d, (unsigned char)0, (unsigned short int)2, relpath);
    if(!(return_value_dico_add_string_3 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 424, "dico_add_string(DICO_OBJ_SECTION_STDATTR) failed\n");
      return -1;
    }

    else
    {
      signed int return_value_dico_add_u64_4;
      return_value_dico_add_u64_4=dico_add_u64(d, (unsigned char)0, (unsigned short int)8, (unsigned long int)statbuf->st_size);
      if(!(return_value_dico_add_u64_4 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 428, "dico_add_u64(DICO_OBJ_SECTION_STDATTR) failed\n");
        return -1;
      }

      else
      {
        signed int return_value_dico_add_u32_5;
        return_value_dico_add_u32_5=dico_add_u32(d, (unsigned char)0, (unsigned short int)7, (unsigned int)statbuf->st_mode);
        if(!(return_value_dico_add_u32_5 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 432, "dico_add_u32(DICO_OBJ_SECTION_STDATTR) failed\n");
          return -1;
        }

        else
        {
          signed int return_value_dico_add_u32_6;
          return_value_dico_add_u32_6=dico_add_u32(d, (unsigned char)0, (unsigned short int)9, (unsigned int)statbuf->st_uid);
          if(!(return_value_dico_add_u32_6 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 436, "dico_add_u32(DICO_OBJ_SECTION_STDATTR) failed\n");
            return -1;
          }

          else
          {
            signed int return_value_dico_add_u32_7;
            return_value_dico_add_u32_7=dico_add_u32(d, (unsigned char)0, (unsigned short int)10, (unsigned int)statbuf->st_gid);
            if(!(return_value_dico_add_u32_7 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 440, "dico_add_u32(gid) failed\n");
              return -1;
            }

            else
            {
              signed int return_value_dico_add_u64_8;
              return_value_dico_add_u64_8=dico_add_u64(d, (unsigned char)0, (unsigned short int)11, (unsigned long int)(unsigned int)statbuf->st_atim.tv_sec);
              if(!(return_value_dico_add_u64_8 == 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 444, "dico_add_u32(DICO_OBJ_SECTION_STDATTR) failed\n");
                return -1;
              }

              else
              {
                signed int return_value_dico_add_u64_9;
                return_value_dico_add_u64_9=dico_add_u64(d, (unsigned char)0, (unsigned short int)12, (unsigned long int)(unsigned int)statbuf->st_mtim.tv_sec);
                if(!(return_value_dico_add_u64_9 == 0))
                {
                  fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 448, "dico_add_u32(DICO_OBJ_SECTION_STDATTR) failed\n");
                  return -1;
                }

                else
                {
                  switch(statbuf->st_mode & (unsigned int)0170000)
                  {
                    case (unsigned int)0040000:
                    {
                      *objtype = 1;
                      break;
                    }
                    case (unsigned int)0120000:
                    {
                      *objtype = 2;
                      memset((void *)buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
                      memset((void *)buffer2, 0, sizeof(char [4096l]) /*4096ul*/ );
                      return_value_readlink_10=readlink(fullpath, buffer, sizeof(char [4096l]) /*4096ul*/ );
                      if(!(return_value_readlink_10 >= 0l))
                      {
                        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_stdattr", 464, "readlink(%s) failed\n", (const void *)fullpath);
                        return -1;
                      }

                      linktarget = buffer;
                      return_value_memcmp_11=memcmp((const void *)linktarget, (const void *)"/tmp/fsa/", (unsigned long int)9);
                      if(return_value_memcmp_11 == 0)
                      {
                        i = 0;
                        for( ; !(i >= 3); i = i + 1)
                        {
                          if((signed int)*linktarget == 47)
                            linktarget = linktarget + 1l;

                          for( ; !((signed int)*linktarget == 0); linktarget = linktarget + 1l)
                            if((signed int)*linktarget == 47)
                              break;

                        }
                      }

                      fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 479, "fixed-readlink([%s])=[%s]\n", (const void *)fullpath, linktarget);
                      dico_add_string(d, (unsigned char)0, (unsigned short int)4, linktarget);
                      if((signed int)filesys[(signed long int)save->fstype].savesymtargettype == 1)
                      {
                        if((signed int)*linktarget == 47)
                        {
                          snprintf(buffer2, sizeof(char [4096l]) /*4096ul*/ , "%s", (const void *)buffer);
                          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 488, "absolute-symlink: fullpath=[%s] --> lstat64=[%s]\n", (const void *)fullpath, (const void *)buffer2);
                        }

                        else
                        {
                          extract_dirpath(fullpath, directory, (signed int)sizeof(char [4096l]) /*4096ul*/ );
                          concatenate_paths(buffer2, (signed int)sizeof(char [4096l]) /*4096ul*/ , directory, linktarget);
                          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 494, "relative-symlink: fullpath=[%s] --> lstat64=[%s]\n", (const void *)fullpath, (const void *)buffer2);
                        }
                        signed int return_value_lstat64_12;
                        return_value_lstat64_12=lstat64(buffer2, &stattarget);
                        if(return_value_lstat64_12 == 0)
                          switch(stattarget.st_mode & (unsigned int)0170000)
                          {
                            case (unsigned int)0040000:
                            {
                              dico_add_u64(d, (unsigned char)0, (unsigned short int)16, (unsigned long int)1);
                              fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 502, "LINK: link=[%s], target=[%s]=DIR\n", relpath, (const void *)buffer2);
                              break;
                            }
                            case (unsigned int)0100000:
                            {
                              dico_add_u64(d, (unsigned char)0, (unsigned short int)16, (unsigned long int)8);
                              fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 506, "LINK: link=[%s], target=[%s]=REGFILE\n", relpath, (const void *)buffer2);
                              break;
                            }
                            default:
                              fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_item_stdattr", 509, "LINK: link=[%s], target=[%s]=UNKNOWN\n", relpath, (const void *)buffer2);
                          }

                      }

                      break;
                    }
                    case (unsigned int)0100000:
                    {
                      if(statbuf->st_nlink >= 2ul)
                      {
                        res=dichl_get(save->dichardlinks, (unsigned long int)statbuf->st_rdev, (unsigned long int)statbuf->st_ino, buffer, (signed int)sizeof(char [4096l]) /*4096ul*/ );
                        if(res == 0)
                        {
                          dico_add_string(d, (unsigned char)0, (unsigned short int)5, buffer);
                          *objtype = 3;
                        }

                        else
                          dichl_add(save->dichardlinks, (unsigned long int)statbuf->st_rdev, (unsigned long int)statbuf->st_ino, relpath);
                      }

                      if(*objtype == 0)
                      {
                        *filecost = *filecost + (unsigned long int)statbuf->st_size;
                        _Bool tmp_if_expr_13;
                        if(statbuf->st_size >= 1l)
                          tmp_if_expr_13 = statbuf->st_size < (signed long int)g_options.smallfilethresh ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr_13 = (_Bool)0;
                        _Bool tmp_if_expr_14;
                        if(tmp_if_expr_13)
                          tmp_if_expr_14 = statbuf->st_nlink == (unsigned long int)1 ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr_14 = (_Bool)0;
                        if(tmp_if_expr_14)
                          *objtype = 9;

                        else
                          *objtype = 8;
                      }

                      _Bool tmp_if_expr_15;
                      if(*objtype == 8)
                        tmp_if_expr_15 = (_Bool)1;

                      else
                        tmp_if_expr_15 = *objtype == 9 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_15)
                      {
                        if(!(512ul * (unsigned long int)statbuf->st_blocks >= (unsigned long int)statbuf->st_size))
                          flags = flags | (unsigned long int)(1 << 0);

                      }

                      break;
                    }
                    case (unsigned int)0020000:
                    {
                      dico_add_u64(d, (unsigned char)0, (unsigned short int)6, statbuf->st_rdev);
                      *objtype = 4;
                      break;
                    }
                    case (unsigned int)0060000:
                    {
                      dico_add_u64(d, (unsigned char)0, (unsigned short int)6, statbuf->st_rdev);
                      *objtype = 5;
                      break;
                    }
                    case (unsigned int)0010000:
                    {
                      dico_add_u64(d, (unsigned char)0, (unsigned short int)6, statbuf->st_rdev);
                      *objtype = 6;
                      break;
                    }
                    case (unsigned int)0140000:
                    {
                      dico_add_u64(d, (unsigned char)0, (unsigned short int)6, statbuf->st_rdev);
                      *objtype = 7;
                      break;
                    }
                    default:
                    {
                      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_stdattr", 564, "unknown item %s\n", (const void *)fullpath);
                      return -1;
                    }
                  }
                  dico_add_u32(d, (unsigned char)0, (unsigned short int)3, (unsigned int)*objtype);
                  if(!(flags == 0ul))
                    dico_add_u64(d, (unsigned char)0, (unsigned short int)17, flags);

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

// createar_item_winattr
// file oper_save.c line 323
signed int createar_item_winattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d)
{
  char fullpath[4096l];
  char *valbuf = (char *)(void *)0;
  signed int valsize = 0;
  signed long int attrsize;
  unsigned long int attrcnt;
  signed int ret = 0;
  signed int i;
  char *winattr[6l] = { "system.ntfs_acl", "system.ntfs_attrib", "system.ntfs_reparse_data", "system.ntfs_times", "system.ntfs_dos_name", (char *)(void *)0 };
  concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , root, relpath);
  attrcnt = (unsigned long int)0;
  i = 0;
  signed int return_value_strcmp_1;
  signed int *return_value___errno_location_9;
  signed int *return_value___errno_location_8;
  for( ; !(winattr[(signed long int)i] == ((char *)NULL)); i = i + 1)
  {
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(relpath, "/");
    if(return_value_strcmp_2 == 0)
    {
      return_value_strcmp_1=strcmp(winattr[(signed long int)i], "system.ntfs_dos_name");
      if(return_value_strcmp_1 == 0)
        goto __CPROVER_DUMP_L13;

    }

    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 0;
    attrsize=lgetxattr(fullpath, winattr[(signed long int)i], (void *)0, (unsigned long int)0);
    if(!(attrsize >= 0l))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(!(*return_value___errno_location_4 == 61))
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_winattr", 349, "           winattr:lgetxattr(%s,%s): returned negative attribute size\n", relpath, winattr[(signed long int)i]);
        ret = -1;
      }

      goto __CPROVER_DUMP_L13;
    }

    fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_winattr", 354, "            winattr:file=[%s], attrcnt=%d, name=[%s], size=%ld\n", relpath, (signed int)attrcnt, winattr[(signed long int)i], (signed long int)attrsize);
    if(attrsize >= 1l && attrsize >= 65536ll)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_winattr", 357, "file [%s] has an xattr [%s] with data size=%ld too big (max xattr size is 65535)\n", relpath, winattr[(signed long int)i], (signed long int)attrsize);
      ret = -1;
    }

    else
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      *return_value___errno_location_5 = 0;
      void *return_value_malloc_6;
      return_value_malloc_6=malloc((unsigned long int)(attrsize + (signed long int)1));
      valbuf = (char *)return_value_malloc_6;
      if(valbuf == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_winattr", 364, "malloc(%d) failed\n", (signed int)(attrsize + (signed long int)1));
        ret = -1;
      }

      else
      {
        signed long int return_value_lgetxattr_7;
        return_value_lgetxattr_7=lgetxattr(fullpath, winattr[(signed long int)i], (void *)valbuf, (unsigned long int)attrsize);
        valsize = (signed int)return_value_lgetxattr_7;
        fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_winattr", 369, "            winattr:lgetxattr-win(%s,%s)=%d\n", relpath, winattr[(signed long int)i], valsize);
        if(valsize >= 0)
        {
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_winattr", 372, "            winattr:dico_add_string(%s, winattr): key=%d, name=[%s]\n", relpath, (signed int)((unsigned long int)2 * attrcnt) + 0, winattr[(signed long int)i]);
          dico_add_string(d, (unsigned char)2, (unsigned short int)((unsigned long int)2 * attrcnt + (unsigned long int)0), winattr[(signed long int)i]);
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_winattr", 374, "            winattr:dico_add_data(%s, winattr): key=%d, data (size=[%d])\n", relpath, (signed int)((unsigned long int)2 * attrcnt) + 1, valsize);
          dico_add_data(d, (unsigned char)2, (unsigned short int)((unsigned long int)2 * attrcnt + (unsigned long int)1), (const void *)valbuf, (unsigned short int)valsize);
          free((void *)valbuf);
          attrcnt = attrcnt + 1ul;
        }

        else
        {
          return_value___errno_location_9=__errno_location();
          if(!(*return_value___errno_location_9 == 61))
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_winattr", 381, "            winattr:lgetxattr(%s,%s)=%d\n", relpath, winattr[(signed long int)i], valsize);
            ret = -1;
            free((void *)valbuf);
            goto __CPROVER_DUMP_L13;
          }

          else
          {
            return_value___errno_location_8=__errno_location();
            if(*return_value___errno_location_8 == 61)
            {
              fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_winattr", 388, "            winattr:lgetxattr-win(%s,%s)=-1: errno==ENOATTR\n", relpath, winattr[(signed long int)i]);
              free((void *)valbuf);
            }

            else
              free((void *)valbuf);
          }
        }
      }
    }

  __CPROVER_DUMP_L13:
    ;
  }
  return ret;
}

// createar_item_xattr
// file oper_save.c line 255
signed int createar_item_xattr(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, struct s_dico *d)
{
  char fullpath[4096l];
  char *valbuf = (char *)(void *)0;
  char buffer[4096l];
  signed long int attrsize;
  signed int valsize = 0;
  signed int listlen;
  unsigned long int attrcnt;
  signed int ret = 0;
  signed int pos;
  signed int len;
  concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , root, relpath);
  attrcnt = (unsigned long int)0;
  memset((void *)buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
  signed long int return_value_llistxattr_1;
  return_value_llistxattr_1=llistxattr(fullpath, buffer, sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)1);
  listlen = (signed int)return_value_llistxattr_1;
  fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_item_xattr", 274, "xattr:llistxattr(%s)=%d\n", relpath, listlen);
  pos = 0;
  signed int *return_value___errno_location_8;
  signed int *return_value___errno_location_7;
  for( ; !(pos >= listlen) && !((unsigned long int)pos >= sizeof(char [4096l]) /*4096ul*/ ); pos = pos + len)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(buffer + (signed long int)pos);
    len = (signed int)(return_value_strlen_2 + (unsigned long int)1);
    attrsize=lgetxattr(fullpath, buffer + (signed long int)pos, (void *)0, (unsigned long int)0);
    fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_xattr", 280, "            xattr:file=[%s], attrid=%d, name=[%s], size=%ld\n", relpath, (signed int)attrcnt, buffer + (signed long int)pos, (signed long int)attrsize);
    if(attrsize >= 1l && attrsize >= 65536ll)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_item_xattr", 282, "file [%s] has an xattr [%s] with data too big (size=%ld, maxsize=64k)\n", relpath, buffer + (signed long int)pos, (signed long int)attrsize);
      ret = -1;
    }

    else
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 0;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc((unsigned long int)(attrsize + (signed long int)1));
      valbuf = (char *)return_value_malloc_4;
      if(valbuf == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_xattr", 288, "malloc(%ld) failed\n", (signed long int)(attrsize + (signed long int)1));
        ret = -1;
      }

      else
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = 0;
        signed long int return_value_lgetxattr_6;
        return_value_lgetxattr_6=lgetxattr(fullpath, buffer + (signed long int)pos, (void *)valbuf, (unsigned long int)attrsize);
        valsize = (signed int)return_value_lgetxattr_6;
        fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_xattr", 294, "            xattr:lgetxattr(%s,%s)=%d\n", relpath, buffer + (signed long int)pos, valsize);
        if(valsize >= 0)
        {
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_xattr", 297, "            xattr:lgetxattr(%s,%s)=%d: [%s]\n", relpath, buffer + (signed long int)pos, valsize, buffer + (signed long int)pos);
          fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_item_xattr", 298, "            xattr:lgetxattr(%s)=%d: [%s]=[%s]\n", relpath, valsize, buffer + (signed long int)pos, valbuf);
          fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_item_xattr", 299, "            xattr:dico_add_string(%s, xattr): key=%d, name=[%s]\n", relpath, (signed int)((unsigned long int)2 * attrcnt) + 0, buffer + (signed long int)pos);
          dico_add_string(d, (unsigned char)1, (unsigned short int)((unsigned long int)2 * attrcnt + (unsigned long int)0), buffer + (signed long int)pos);
          fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_item_xattr", 301, "            xattr:dico_add_data(%s, xattr): key=%d, data (size=[%d])\n", relpath, (signed int)((unsigned long int)2 * attrcnt) + 1, valsize);
          dico_add_data(d, (unsigned char)1, (unsigned short int)((unsigned long int)2 * attrcnt + (unsigned long int)1), (const void *)valbuf, (unsigned short int)valsize);
          attrcnt = attrcnt + 1ul;
          free((void *)valbuf);
        }

        else
        {
          return_value___errno_location_8=__errno_location();
          if(!(*return_value___errno_location_8 == 61))
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_item_xattr", 308, "            xattr:lgetxattr(%s,%s)=%d\n", relpath, buffer + (signed long int)pos, valsize);
            ret = -1;
            free((void *)valbuf);
            goto __CPROVER_DUMP_L9;
          }

          else
          {
            return_value___errno_location_7=__errno_location();
            if(*return_value___errno_location_7 == 61)
            {
              fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_item_xattr", 315, "            xattr:lgetxattr-win(%s,%s)=-1: errno==ENOATTR\n", relpath, buffer + (signed long int)pos);
              free((void *)valbuf);
            }

          }
        }
      }
    }

  __CPROVER_DUMP_L9:
    ;
  }
  return ret;
}

// createar_obj_regfile_multi
// file oper_save.c line 80
signed int createar_obj_regfile_multi(struct s_savear *save, struct s_dico *header, char *relpath, char *fullpath, unsigned long int filesize)
{
  char databuf[131072l];
  unsigned char md5sum[16l];
  signed int ret = 0;
  signed int res;
  signed int fd;
  fd=open64(fullpath, 00 | 0);
  if(!(fd >= 0))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_obj_regfile_multi", 90, "Cannot open small file %s for reading\n", relpath);
    return -1;
  }

  else
  {
    fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_obj_regfile_multi", 94, "backup_obj_regfile_multi(file=%s, size=%lld)\n", relpath, (signed long long int)filesize);
    signed long int return_value_read_1;
    return_value_read_1=read(fd, (void *)databuf, (unsigned long int)(signed long int)filesize);
    res = (signed int)return_value_read_1;
    close(fd);
    if(!((unsigned long int)res == filesize))
    {
      if(res >= 0 && !((unsigned long int)res >= filesize))
      {
        ret = -1;
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_multi", 103, "file [%s] has been truncated to %lld bytes (original size: %lld): padding with zeros\n", relpath, (signed long long int)res, (signed long long int)filesize);
        memset((void *)(databuf + (signed long int)res), 0, filesize - (unsigned long int)res);
        goto __CPROVER_DUMP_L3;
      }

      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_obj_regfile_multi", 107, "Cannot read data block size=%ld from small file %s, res=%ld\n", (signed long int)filesize, relpath, (signed long int)res);
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      gcry_md_hash_buffer(1, (void *)md5sum, (const void *)databuf, filesize);
      dico_add_data(header, (unsigned char)0, (unsigned short int)13, (const void *)md5sum, (unsigned short int)16);
      _Bool return_value_regmulti_save_enough_space_for_new_file_3;
      return_value_regmulti_save_enough_space_for_new_file_3=regmulti_save_enough_space_for_new_file(&save->regmulti, (unsigned int)filesize);
      if((signed int)return_value_regmulti_save_enough_space_for_new_file_3 == 0)
      {
        signed int return_value_regmulti_save_enqueue_2;
        return_value_regmulti_save_enqueue_2=regmulti_save_enqueue(&save->regmulti, &g_queue, save->fsid);
        if(!(return_value_regmulti_save_enqueue_2 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_multi", 119, "Cannot queue last block of small-files\n");
          return -1;
        }

        regmulti_empty(&save->regmulti);
      }

      signed int return_value_regmulti_save_addfile_4;
      return_value_regmulti_save_addfile_4=regmulti_save_addfile(&save->regmulti, header, databuf, (unsigned int)filesize);
      if(!(return_value_regmulti_save_addfile_4 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_multi", 128, "Cannot add small-file %s to regmulti structure\n", relpath);
        return -1;
      }

      else
        return ret;
    }
  }
}

// createar_obj_regfile_unique
// file oper_save.c line 135
signed int createar_obj_regfile_unique(struct s_savear *save, struct s_dico *header, char *relpath, char *fullpath, unsigned long int filesize)
{
  struct s_dico *footerdico = (struct s_dico *)(void *)0;
  struct s_blockinfo blkinfo;
  struct gcry_md_handle *md5ctx;
  unsigned int curblocksize;
  _Bool eof = (_Bool)0;
  unsigned long int remaining;
  char text[256l];
  unsigned char *origblock;
  unsigned char *md5tmp;
  unsigned char md5sum[16l];
  unsigned long int filepos;
  signed int ret = 0;
  signed int res;
  signed int fd;
  unsigned int return_value_gcry_md_open_1;
  return_value_gcry_md_open_1=gcry_md_open(&md5ctx, 1, (unsigned int)0);
  _Bool tmp_if_expr_3;
  _Bool return_value_get_interrupted_2;
  char *return_value_format_md5_8;
  if(!(return_value_gcry_md_open_1 == 0u))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 153, "gcry_md_open() failed\n");
    return -1;
  }

  else
  {
    fd=open64(fullpath, 00 | 0);
    if(!(fd >= 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 158, "Cannot open %s for reading\n", relpath);
      return -1;
    }

    else
    {
      queue_add_header(&g_queue, header, "ObJt", (unsigned short int)save->fsid);
      fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_obj_regfile_unique", 165, "backup_obj_regfile_unique(file=%s, size=%lld)\n", relpath, (signed long long int)filesize);
      filepos = (unsigned long int)0;
      do
      {
        if(filesize >= 1ul && !(filepos >= filesize))
        {
          return_value_get_interrupted_2=get_interrupted();
          tmp_if_expr_3 = (signed int)return_value_get_interrupted_2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        if(!tmp_if_expr_3)
          break;

        remaining = filesize - filepos;
        curblocksize = (unsigned int)(remaining < (unsigned long int)g_options.datablocksize ? remaining : (unsigned long int)g_options.datablocksize);
        fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "createar_obj_regfile_unique", 170, "----> filepos=%lld, remaining=%lld, curblocksize=%lld\n", (signed long long int)filepos, (signed long long int)remaining, (signed long long int)curblocksize);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc((unsigned long int)curblocksize);
        origblock = (unsigned char *)return_value_malloc_4;
        if(origblock == ((unsigned char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 174, "malloc(%ld) failed: cannot allocate data block\n", (signed long int)origblock);
          ret = -1;
          goto backup_obj_regfile_unique_error;
        }

        if((signed int)eof == 0)
        {
          signed long int return_value_read_5;
          return_value_read_5=read(fd, (void *)origblock, (unsigned long int)(signed long int)curblocksize);
          res = (signed int)return_value_read_5;
          if(!((unsigned int)res == curblocksize))
          {
            ret = -1;
            if(res >= 0 && !((unsigned int)res >= curblocksize))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 185, "file [%s] has been truncated to %lld bytes (original size: %lld): padding with zeros\n", relpath, (signed long long int)(filepos + (unsigned long int)res), (signed long long int)filesize);
              eof = (_Bool)1;
              memset((void *)(origblock + (signed long int)res), 0, (unsigned long int)(curblocksize - (unsigned int)res));
            }

            else
              if(!(res >= 0))
              {
                fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 190, "Cannot read data block from %s, block=%ld and res=%ld\n", relpath, (signed long int)curblocksize, (signed long int)res);
                ret = -1;
                goto backup_obj_regfile_unique_error;
              }

          }

        }

        else
          memset((void *)origblock, 0, (unsigned long int)curblocksize);
        gcry_md_write(md5ctx, (const void *)origblock, (unsigned long int)curblocksize);
        memset((void *)&blkinfo, 0, sizeof(struct s_blockinfo) /*48ul*/ );
        blkinfo.blkrealsize = curblocksize;
        blkinfo.blkdata = (char *)origblock;
        blkinfo.blkoffset = filepos;
        blkinfo.blkfsid = (unsigned short int)save->fsid;
        signed long int return_value_queue_add_block_6;
        return_value_queue_add_block_6=queue_add_block(&g_queue, &blkinfo, 1);
        if(!(return_value_queue_add_block_6 == 0l))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 210, "queue_add_block(%s) failed\n", relpath);
          ret = -1;
          goto backup_obj_regfile_unique_error;
        }

        filepos = filepos + (unsigned long int)curblocksize;
      }
      while((_Bool)1);
      _Bool return_value_get_interrupted_7;
      return_value_get_interrupted_7=get_interrupted();
      if((signed int)return_value_get_interrupted_7 == 1)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 217, "operation has been interrupted\n");
        ret = -1;
      }

      else
      {
        md5tmp=gcry_md_read(md5ctx, 1);
        if(md5tmp == ((unsigned char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 224, "gcry_md_read() failed\n");
          ret = -1;
        }

        else
        {
          memcpy((void *)md5sum, (const void *)md5tmp, (unsigned long int)16);
          gcry_md_close(md5ctx);
          return_value_format_md5_8=format_md5(text, (signed int)sizeof(char [256l]) /*256ul*/ , md5sum);
          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "createar_obj_regfile_unique", 231, "--> finished loop for file=%s, size=%lld, md5=[%s]\n", relpath, (signed long long int)filesize, return_value_format_md5_8);
          if(filesize >= 1ul)
          {
            footerdico=dico_alloc();
            if(footerdico == ((struct s_dico *)NULL))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_obj_regfile_unique", 237, "dico_alloc() failed\n");
              ret = -1;
            }

            else
            {
              dico_add_data(footerdico, (unsigned char)0, (unsigned short int)1, (const void *)md5sum, (unsigned short int)16);
              signed long int return_value_queue_add_header_9;
              return_value_queue_add_header_9=queue_add_header(&g_queue, footerdico, "FiLf", (unsigned short int)save->fsid);
              if(!(return_value_queue_add_header_9 == 0l))
              {
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_obj_regfile_unique", 244, "Cannot write footer for file %s\n", relpath);
                ret = -1;
              }

            }
          }

        }
      }

    backup_obj_regfile_unique_error:
      ;
      close(fd);
      return ret;
    }
  }
}

// createar_oper_savedir
// file oper_save.c line 1128
signed int createar_oper_savedir(struct s_savear *save, char *rootdir)
{
  char fullpath[4096l];
  char currentdir[4096l];
  if((signed int)*rootdir == 47)
  {
    snprintf(fullpath, sizeof(char [4096l]) /*4096ul*/ , "%s", rootdir);
    createar_save_directory_wrapper(save, "/", fullpath, (unsigned long int *)(void *)0);
  }

  else
  {
    char *return_value_getcwd_1;
    return_value_getcwd_1=getcwd(currentdir, sizeof(char [4096l]) /*4096ul*/ );
    concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , return_value_getcwd_1, rootdir);
    createar_save_directory_wrapper(save, ".", rootdir, (unsigned long int *)(void *)0);
  }
  return 0;
}

// createar_oper_savefs
// file oper_save.c line 1097
signed int createar_oper_savefs(struct s_savear *save, struct s_devinfo_0 *devinfo)
{
  struct s_dico *dicobegin = (struct s_dico *)(void *)0;
  struct s_dico *dicoend = (struct s_dico *)(void *)0;
  signed int ret = 0;
  dicobegin=dico_alloc();
  if(dicobegin == ((struct s_dico *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_oper_savefs", 1105, "dicostart=dico_alloc() failed\n");
    return -1;
  }

  else
  {
    queue_add_header(&g_queue, dicobegin, "FsYs", (unsigned short int)save->fsid);
    save->fstype = devinfo->fstype;
    ret=createar_save_directory_wrapper(save, devinfo->partmount, "/", (unsigned long int *)(void *)0);
    dicoend=dico_alloc();
    if(dicoend == ((struct s_dico *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_oper_savefs", 1118, "dicoend=dico_alloc() failed\n");
      return -1;
    }

    else
    {
      queue_add_header(&g_queue, dicoend, "DaEn", (unsigned short int)save->fsid);
      return ret;
    }
  }
}

// createar_save_directory
// file oper_save.c line 735
signed int createar_save_directory(struct s_savear *save, char *root, char *path, unsigned long int *costeval)
{
  char fulldirpath[4096l];
  char fullpath[4096l];
  char relpath[4096l];
  struct stat64 statbuf;
  struct dirent *dir;
  struct __dirstream *dirdesc;
  signed int ret = 0;
  concatenate_paths(fulldirpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , root, path);
  dirdesc=opendir(fulldirpath);
  signed int return_value_createar_save_file_2;
  _Bool return_value_get_interrupted_3;
  signed int return_value_strcmp_5;
  signed int return_value_exclude_check_9;
  if(dirdesc == ((struct __dirstream *)NULL))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_save_directory", 749, "cannot open directory %s\n", (const void *)fulldirpath);
    return 0;
  }

  else
  {
    signed int return_value_lstat64_1;
    return_value_lstat64_1=lstat64(fulldirpath, &statbuf);
    if(!(return_value_lstat64_1 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_save_directory", 755, "cannot lstat64(%s)\n", (const void *)fulldirpath);
      ret = -1;
    }

    else
    {
      return_value_createar_save_file_2=createar_save_file(save, root, path, &statbuf, costeval);
      if(!(return_value_createar_save_file_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_directory", 762, "createar_save_file(%s,%s) failed\n", root, path);
        ret = -1;
      }

      else
        do
        {
          dir=readdir(dirdesc);
          if(dir == ((struct dirent *)NULL))
            break;

          return_value_get_interrupted_3=get_interrupted();
          if(!((signed int)return_value_get_interrupted_3 == 0))
            break;

          signed int return_value_strcmp_4;
          return_value_strcmp_4=strcmp(dir->d_name, ".");
          _Bool tmp_if_expr_6;
          if(return_value_strcmp_4 == 0)
            tmp_if_expr_6 = (_Bool)1;

          else
          {
            return_value_strcmp_5=strcmp(dir->d_name, "..");
            tmp_if_expr_6 = return_value_strcmp_5 == 0 ? (_Bool)1 : (_Bool)0;
          }
          if(!tmp_if_expr_6)
          {
            concatenate_paths(relpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , path, dir->d_name);
            concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , fulldirpath, dir->d_name);
            signed int return_value_lstat64_7;
            return_value_lstat64_7=lstat64(fullpath, &statbuf);
            if(!(return_value_lstat64_7 == 0))
            {
              fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "createar_save_directory", 779, "cannot lstat64(%s)\n", (const void *)fullpath);
              ret = -1;
              goto backup_dir_err;
            }

            signed int return_value_exclude_check_8;
            return_value_exclude_check_8=exclude_check(&g_options.exclude, dir->d_name);
            _Bool tmp_if_expr_10;
            if(return_value_exclude_check_8 == 1)
              tmp_if_expr_10 = (_Bool)1;

            else
            {
              return_value_exclude_check_9=exclude_check(&g_options.exclude, relpath);
              tmp_if_expr_10 = return_value_exclude_check_9 == 1 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_10)
            {
              if(costeval == ((unsigned long int *)NULL))
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "createar_save_directory", 789, "file/dir=[%s] excluded\n", (const void *)relpath);

            }

            else
              if((61440u & statbuf.st_mode) == 16384u)
              {
                signed int return_value_createar_save_directory_11;
                return_value_createar_save_directory_11=createar_save_directory(save, root, relpath, costeval);
                if(!(return_value_createar_save_directory_11 == 0))
                {
                  fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_directory", 797, "createar_save_directory(%s) failed\n", (const void *)relpath);
                  ret = -1;
                  goto backup_dir_err;
                }

              }

              else
              {
                signed int return_value_createar_save_file_12;
                return_value_createar_save_file_12=createar_save_file(save, root, relpath, &statbuf, costeval);
                if(!(return_value_createar_save_file_12 == 0))
                {
                  fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_directory", 805, "createar_save_directory(%s) failed\n", (const void *)relpath);
                  ret = -1;
                  goto backup_dir_err;
                }

              }
          }

        }
        while((_Bool)1);
    }

  backup_dir_err:
    ;
    closedir(dirdesc);
    return ret;
  }
}

// createar_save_directory_wrapper
// file oper_save.c line 817
signed int createar_save_directory_wrapper(struct s_savear *save, char *root, char *path, unsigned long int *costeval)
{
  signed int ret;
  save->dichardlinks=dichl_alloc();
  if(save->dichardlinks == ((struct s_dichl *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_directory_wrapper", 822, "dichardlinks=dichl_alloc() failed\n");
    return -1;
  }

  else
  {
    signed int return_value_regmulti_init_1;
    return_value_regmulti_init_1=regmulti_init(&save->regmulti, g_options.datablocksize);
    if(!(return_value_regmulti_init_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_directory_wrapper", 827, "regmulti_init failed\n");
      return -1;
    }

    else
    {
      ret=createar_save_directory(save, root, path, costeval);
      signed int return_value_regmulti_save_enqueue_2;
      return_value_regmulti_save_enqueue_2=regmulti_save_enqueue(&save->regmulti, &g_queue, save->fsid);
      if(!(return_value_regmulti_save_enqueue_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_directory_wrapper", 835, "Cannot queue last block of small-files\n");
        return -1;
      }

      else
      {
        dichl_destroy(save->dichardlinks);
        return ret;
      }
    }
  }
}

// createar_save_file
// file oper_save.c line 576
signed int createar_save_file(struct s_savear *save, char *root, char *relpath, struct stat64 *statbuf, unsigned long int *costeval)
{
  char fullpath[4096l];
  char strprogress[256l];
  struct s_dico *dicoattr;
  signed int attrerrors = 0;
  unsigned long int filecost;
  unsigned long int progress;
  signed int objtype;
  signed int res;
  concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , root, relpath);
  signed int return_value_archwriter_is_path_to_curvol_1;
  return_value_archwriter_is_path_to_curvol_1=archwriter_is_path_to_curvol(&save->ai, fullpath);
  signed long int return_value_queue_add_header_7;
  signed long int return_value_queue_add_header_8;
  signed long int return_value_queue_add_header_9;
  signed long int return_value_queue_add_header_10;
  if(return_value_archwriter_is_path_to_curvol_1 == 1)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 592, "file [%s] ignored: it's the current archive file\n", (const void *)fullpath);
    save->stats.err_regfile = save->stats.err_regfile + 1ul;
    return 0;
  }

  else
  {
    dicoattr=dico_alloc();
    if(dicoattr == ((struct s_dico *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 599, "dico_alloc() failed\n");
      return -1;
    }

    else
    {
      signed int return_value_createar_item_stdattr_2;
      return_value_createar_item_stdattr_2=createar_item_stdattr(save, root, relpath, statbuf, dicoattr, &objtype, &filecost);
      if(!(return_value_createar_item_stdattr_2 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_file", 604, "backup_item_stdattr() failed: cannot read standard attributes on [%s]\n", relpath);
        attrerrors = attrerrors + 1;
      }

      if(!(costeval == ((unsigned long int *)NULL)))
      {
        *costeval = *costeval + filecost;
        dico_destroy(dicoattr);
        return 0;
      }

      else
      {
        signed int return_value_createar_item_xattr_3;
        return_value_createar_item_xattr_3=createar_item_xattr(save, root, relpath, statbuf, dicoattr);
        if(!(return_value_createar_item_xattr_3 == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_file", 617, "backup_item_xattr() failed: cannot prepare xattr-dico for item %s\n", relpath);
          attrerrors = attrerrors + 1;
        }

        if((signed int)filesys[(signed long int)save->fstype].winattr == 1)
        {
          signed int return_value_createar_item_winattr_4;
          return_value_createar_item_winattr_4=createar_item_winattr(save, root, relpath, statbuf, dicoattr);
          if(!(return_value_createar_item_winattr_4 == 0))
          {
            fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_file", 624, "backup_item_winattr() failed: cannot prepare winattr-dico for item %s\n", relpath);
            attrerrors = attrerrors + 1;
          }

        }

        _Bool return_value_get_interrupted_6;
        return_value_get_interrupted_6=get_interrupted();
        if((signed int)return_value_get_interrupted_6 == 0)
        {
          memset((void *)strprogress, 0, sizeof(char [256l]) /*256ul*/ );
          if(save->cost_global >= 1ul)
          {
            save->cost_current = save->cost_current + filecost;
            progress = (save->cost_current * (unsigned long int)100) / save->cost_global;
            if(!(progress >= 101ul))
              snprintf(strprogress, sizeof(char [256l]) /*256ul*/ , "[%3d%%]", (signed int)progress);

          }

          char *return_value_get_objtype_name_5;
          return_value_get_objtype_name_5=get_objtype_name(objtype);
          fsaprintf(1, (_Bool)0, 1 >= 3, "oper_save.c", "createar_save_file", 639, "-[%.2d]%s[%s] %s\n", save->fsid, (const void *)strprogress, return_value_get_objtype_name_5, relpath);
        }

        switch(objtype)
        {
          case 1:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_dir = save->stats.err_dir + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            return_value_queue_add_header_7=queue_add_header(&g_queue, dicoattr, "ObJt", (unsigned short int)save->fsid);
            if(!(return_value_queue_add_header_7 == 0l))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 652, "queue_add_header(%s) failed\n", relpath);
              return -1;
            }

            save->stats.cnt_dir = save->stats.cnt_dir + 1ul;
            break;
          }
          case 2:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_symlink = save->stats.err_symlink + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            return_value_queue_add_header_8=queue_add_header(&g_queue, dicoattr, "ObJt", (unsigned short int)save->fsid);
            if(!(return_value_queue_add_header_8 == 0l))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 664, "queue_add_header(%s) failed\n", relpath);
              return -1;
            }

            save->stats.cnt_symlink = save->stats.cnt_symlink + 1ul;
            break;
          }
          case 3:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_hardlink = save->stats.err_hardlink + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            return_value_queue_add_header_9=queue_add_header(&g_queue, dicoattr, "ObJt", (unsigned short int)save->fsid);
            if(!(return_value_queue_add_header_9 == 0l))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 676, "queue_add_header(%s) failed\n", relpath);
              return -1;
            }

            save->stats.cnt_hardlink = save->stats.cnt_hardlink + 1ul;
            break;
          }
          case 4:

          case 5:

          case 6:

          case 7:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_special = save->stats.err_special + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            return_value_queue_add_header_10=queue_add_header(&g_queue, dicoattr, "ObJt", (unsigned short int)save->fsid);
            if(!(return_value_queue_add_header_10 == 0l))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 691, "queue_add_header(%s) failed\n", relpath);
              return -1;
            }

            save->stats.cnt_special = save->stats.cnt_special + 1ul;
            break;
          }
          case 8:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_regfile = save->stats.err_regfile + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            res=createar_obj_regfile_unique(save, dicoattr, relpath, fullpath, (unsigned long int)statbuf->st_size);
            if(!(res == 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_file", 703, "backup_obj_regfile_unique(%s)=%d failed\n", relpath, res);
              save->stats.err_regfile = save->stats.err_regfile + 1ul;
              return 0;
            }

            else
              save->stats.cnt_regfile = save->stats.cnt_regfile + 1ul;
            break;
          }
          case 9:
          {
            if(attrerrors >= 1)
            {
              save->stats.err_regfile = save->stats.err_regfile + 1ul;
              dico_destroy(dicoattr);
              return 0;
            }

            res=createar_obj_regfile_multi(save, dicoattr, relpath, fullpath, (unsigned long int)statbuf->st_size);
            if(!(res == 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "createar_save_file", 718, "backup_obj_regfile_multi(%s)=%d failed\n", relpath, res);
              save->stats.err_regfile = save->stats.err_regfile + 1ul;
              return 0;
            }

            else
              save->stats.cnt_regfile = save->stats.cnt_regfile + 1ul;
            break;
          }
          default:
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_save_file", 727, "invalid object type: %ld for file %s\n", (signed long int)objtype, relpath);
            return -1;
          }
        }
        return 0;
      }
    }
  }
}

// createar_write_mainhead
// file oper_save.c line 845
signed int createar_write_mainhead(struct s_savear *save, signed int archtype, signed int fscount)
{
  unsigned char bufcheckclear[4104l];
  unsigned char bufcheckcrypt[4104l];
  unsigned long int cryptsize;
  unsigned char md5sum[16l];
  struct timeval now;
  struct s_dico *d;
  if(save == ((struct s_savear *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_write_mainhead", 855, "ai is NULL\n");
    return -1;
  }

  else
  {
    gettimeofday(&now, (struct timezone *)(void *)0);
    d=dico_alloc();
    if(d == ((struct s_dico *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_write_mainhead", 862, "dico_alloc() failed\n");
      return -1;
    }

    else
    {
      dico_add_string(d, (unsigned char)0, (unsigned short int)1, "FsArCh_002");
      dico_add_string(d, (unsigned char)0, (unsigned short int)2, "0.6.22");
      dico_add_string(d, (unsigned char)0, (unsigned short int)5, g_options.archlabel);
      dico_add_u64(d, (unsigned char)0, (unsigned short int)4, (unsigned long int)now.tv_sec);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)3, save->ai.archid);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)6, (unsigned int)archtype);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)8, (unsigned int)g_options.compressalgo);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)9, (unsigned int)g_options.compresslevel);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)10, (unsigned int)g_options.encryptalgo);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)13, (unsigned int)g_options.fsacomplevel);
      dico_add_u32(d, (unsigned char)0, (unsigned short int)15, (unsigned int)1);
      dico_add_u64(d, (unsigned char)0, (unsigned short int)14, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
      if(archtype == 1)
        dico_add_u64(d, (unsigned char)0, (unsigned short int)7, (unsigned long int)fscount);

      if(!((signed int)g_options.encryptalgo == 1))
      {
        memset((void *)md5sum, 0, sizeof(unsigned char [16l]) /*16ul*/ );
        crypto_random(bufcheckclear, 4096);
        unsigned long int return_value_strlen_1;
        return_value_strlen_1=strlen((char *)g_options.encryptpass);
        crypto_blowfish((unsigned long int)4096, &cryptsize, bufcheckclear, bufcheckcrypt, g_options.encryptpass, (signed int)return_value_strlen_1, 1);
        gcry_md_hash_buffer(1, (void *)md5sum, (const void *)bufcheckclear, (unsigned long int)4096);
        signed int return_value_dico_add_data_2;
        return_value_dico_add_data_2=dico_add_data(d, (unsigned char)0, (unsigned short int)11, (const void *)md5sum, (unsigned short int)16);
        /* assertion dico_add_data(d, 0, MAINHEADKEY_BUFCHECKPASSCLEARMD5, md5sum, 16)==0 */
        assert(return_value_dico_add_data_2 == 0);
        signed int return_value_dico_add_data_3;
        return_value_dico_add_data_3=dico_add_data(d, (unsigned char)0, (unsigned short int)12, (const void *)bufcheckcrypt, (unsigned short int)4096);
        /* assertion dico_add_data(d, 0, MAINHEADKEY_BUFCHECKPASSCRYPTBUF, bufcheckcrypt, 4096)==0 */
        assert(return_value_dico_add_data_3 == 0);
      }

      signed long int return_value_queue_add_header_4;
      return_value_queue_add_header_4=queue_add_header(&g_queue, d, "ArCh", (unsigned short int)0xFFFF);
      if(!(return_value_queue_add_header_4 == 0l))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "createar_write_mainhead", 901, "cannot write dico for main header\n");
        dico_destroy(d);
        return -1;
      }

      else
        return 0;
    }
  }
}

// cryptalgostr
// file archinfo.c line 44
char * cryptalgostr(signed int algo)
{
  switch(algo)
  {
    case 1:
      return "none";
    case 2:
      return "blowfish";
    default:
      return "unknown";
  }
}

// crypto_blowfish
// file crypto.h line 24
signed int crypto_blowfish(unsigned long int insize, unsigned long int *outsize, unsigned char *inbuf, unsigned char *outbuf, unsigned char *password, signed int passlen, signed int enc)
{
  struct gcry_cipher_handle *hd;
  unsigned char iv[9l] = { 'f', 's', 'a', 'r', 'c', 'h', 'i', 'v', 0 };
  signed int res;
  unsigned int return_value_gcry_cipher_encrypt_5;
  unsigned int return_value_gcry_cipher_decrypt_6;
  if(password == ((unsigned char *)NULL) || passlen == 0)
    return -1;

  else
  {
    unsigned int return_value_gcry_cipher_open_1;
    return_value_gcry_cipher_open_1=gcry_cipher_open(&hd, 4, 2, (unsigned int)1);
    res = (signed int)return_value_gcry_cipher_open_1;
    if(!(res == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "crypto.c", "crypto_blowfish", 74, "gcry_cipher_open() failed\n");
      gcry_cipher_close(hd);
      return -1;
    }

    else
    {
      unsigned int return_value_gcry_cipher_setkey_2;
      return_value_gcry_cipher_setkey_2=gcry_cipher_setkey(hd, (const void *)password, (unsigned long int)passlen);
      res = (signed int)return_value_gcry_cipher_setkey_2;
      if(!(res == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "crypto.c", "crypto_blowfish", 81, "gcry_cipher_setkey() failed\n");
        gcry_cipher_close(hd);
        return -1;
      }

      else
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen((char *)iv);
        unsigned int return_value_gcry_cipher_setiv_4;
        return_value_gcry_cipher_setiv_4=gcry_cipher_setiv(hd, (const void *)iv, return_value_strlen_3);
        if(!(return_value_gcry_cipher_setiv_4 == 0u))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "crypto.c", "crypto_blowfish", 88, "gcry_cipher_setiv() failed\n");
          gcry_cipher_close(hd);
          return -1;
        }

        else
        {
          switch(enc)
          {
            case 1:
            {
              return_value_gcry_cipher_encrypt_5=gcry_cipher_encrypt(hd, (void *)outbuf, insize, (const void *)inbuf, insize);
              res = (signed int)return_value_gcry_cipher_encrypt_5;
              break;
            }
            case 0:
            {
              return_value_gcry_cipher_decrypt_6=gcry_cipher_decrypt(hd, (void *)outbuf, insize, (const void *)inbuf, insize);
              res = (signed int)return_value_gcry_cipher_decrypt_6;
              break;
            }
            default:
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "crypto.c", "crypto_blowfish", 102, "invalid parameter: enc=%d\n", (signed int)enc);
              gcry_cipher_close(hd);
              return -1;
            }
          }
          gcry_cipher_close(hd);
          *outsize = insize;
          return res == 0 ? 0 : -1;
        }
      }
    }
  }
}

// crypto_cleanup
// file crypto.h line 26
signed int crypto_cleanup()
{
  return 0;
}

// crypto_init
// file crypto.h line 23
signed int crypto_init()
{
  gcry_control((enum gcry_ctl_cmds)GCRYCTL_SET_THREAD_CBS, &gcry_threads_pthread);
  const char *return_value_gcry_check_version_1;
  return_value_gcry_check_version_1=gcry_check_version("1.2.3");
  if(return_value_gcry_check_version_1 == ((const char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "crypto.c", "crypto_init", 44, "libgcrypt version mismatch\n");
    return -1;
  }

  else
  {
    gcry_control((enum gcry_ctl_cmds)GCRYCTL_DISABLE_SECMEM, 0);
    gcry_control((enum gcry_ctl_cmds)GCRYCTL_INITIALIZATION_FINISHED, 0);
    return 0;
  }
}

// crypto_random
// file crypto.h line 25
signed int crypto_random(unsigned char *buf, signed int bufsize)
{
  memset((void *)buf, 0, (unsigned long int)bufsize);
  gcry_randomize((void *)buf, (unsigned long int)bufsize, (enum gcry_random_level)GCRY_STRONG_RANDOM);
  return 0;
}

// datafile_alloc
// file datafile.h line 26
struct s_datafile * datafile_alloc()
{
  struct s_datafile *f;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_datafile) /*4112ul*/ );
  f = (struct s_datafile *)return_value_malloc_1;
  if(f == ((struct s_datafile *)NULL))
    return (struct s_datafile *)(void *)0;

  else
  {
    f->path[(signed long int)0] = (char)0;
    f->fd = -1;
    f->simul = (_Bool)0;
    f->open = (_Bool)0;
    f->sparse = (_Bool)0;
    return f;
  }
}

// datafile_close
// file datafile.h line 30
signed int datafile_close(struct s_datafile *f, unsigned char *md5bufdat, signed int md5bufsize)
{
  char md5store[16l];
  unsigned char *md5tmp;
  signed int res = 0;
  /* assertion f */
  assert(f != ((struct s_datafile *)NULL));
  signed long int return_value_lseek64_1;
  signed int return_value_ftruncate_2;
  signed int return_value_close_4;
  if(f->open == (_Bool)0)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_close", 168, "File is not open\n");
    return -1;
  }

  else
  {
    md5tmp=gcry_md_read(f->md5ctx, 1);
    if(md5tmp == ((unsigned char *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_close", 173, "gcry_md_read() failed\n");
      return -1;
    }

    else
    {
      memcpy((void *)md5store, (const void *)md5tmp, (unsigned long int)16);
      gcry_md_close(f->md5ctx);
      if(!(md5bufdat == ((unsigned char *)NULL)))
      {
        if(!(md5bufsize >= 16))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_close", 182, "Buffer too small for md5 checksum\n");
          return -1;
        }

        memcpy((void *)md5bufdat, (const void *)md5store, (unsigned long int)16);
      }

      if((signed int)f->open == 1)
      {
        if((signed int)f->simul == 0)
        {
          if((signed int)f->sparse == 1)
          {
            return_value_lseek64_1=lseek64(f->fd, (signed long int)0, 1);
            return_value_ftruncate_2=ftruncate(f->fd, return_value_lseek64_1);
            if(!(return_value_ftruncate_2 >= 0))
            {
              fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_close", 191, "ftruncate() failed for file [%s]\n", (const void *)f->path);
              res = -1;
            }

          }

          signed int return_value_close_3;
          return_value_close_3=close(f->fd);
          signed int tmp_if_expr_5;
          if(!(return_value_close_3 >= res))
          {
            return_value_close_4=close(f->fd);
            tmp_if_expr_5 = return_value_close_4;
          }

          else
            tmp_if_expr_5 = res;
          res = tmp_if_expr_5;
        }

      }

      f->open = (_Bool)0;
      f->path[(signed long int)0] = (char)0;
      f->fd = -1;
      return res;
    }
  }
}

// datafile_destroy
// file datafile.h line 27
signed int datafile_destroy(struct s_datafile *f)
{
  /* assertion f */
  assert(f != ((struct s_datafile *)NULL));
  if(!(f->open == (_Bool)0))
    datafile_close(f, (unsigned char *)(void *)0, 0);

  free((void *)f);
  return 0;
}

// datafile_is_block_zero
// file datafile.c line 105
signed int datafile_is_block_zero(struct s_datafile *f, char *data, unsigned long int len)
{
  _Bool zero = (_Bool)1;
  unsigned long int pos = (unsigned long int)0;
  for( ; (signed int)zero == 1 && !(pos >= len); pos = pos + 1ul)
    if(!((signed int)data[(signed long int)pos] == 0))
      zero = (_Bool)0;

  return (signed int)zero;
}

// datafile_open_write
// file datafile.h line 28
signed int datafile_open_write(struct s_datafile *f, char *path, _Bool simul, _Bool sparse)
{
  /* assertion f */
  assert(f != ((struct s_datafile *)NULL));
  if(!(f->open == (_Bool)0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_open_write", 74, "File is already open\n");
    return -1;
  }

  else
  {
    if((signed int)simul == 0)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 0;
      f->fd=open64(path, 02 | 0100 | 01000 | 0, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
      if(!(f->fd >= 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        if(*return_value___errno_location_2 == 28)
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_open_write", 83, "can't write file [%s]: no space left on device\n", path);
          return -1;
        }

        else
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_open_write", 87, "Cannot open %s for writing\n", path);
          return -1;
        }
      }

    }

    unsigned int return_value_gcry_md_open_3;
    return_value_gcry_md_open_3=gcry_md_open(&f->md5ctx, 1, (unsigned int)0);
    if(!(return_value_gcry_md_open_3 == 0u))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_open_write", 94, "gcry_md_open() failed\n");
      return -1;
    }

    else
    {
      snprintf(f->path, (unsigned long int)4096, "%s", path);
      f->simul = simul;
      f->open = (_Bool)1;
      f->sparse = sparse;
      return 0;
    }
  }
}

// datafile_write
// file datafile.h line 29
signed int datafile_write(struct s_datafile *f, char *data, unsigned long int len)
{
  signed long int lres;
  /* assertion f */
  assert(f != ((struct s_datafile *)NULL));
  signed int return_value_datafile_is_block_zero_4;
  if(f->open == (_Bool)0)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "datafile.c", "datafile_write", 124, "File is not open\n");
    return -7;
  }

  else
  {
    if((signed int)f->simul == 0)
    {
      _Bool tmp_if_expr_5;
      if((signed int)f->sparse == 1)
      {
        return_value_datafile_is_block_zero_4=datafile_is_block_zero(f, data, len);
        tmp_if_expr_5 = return_value_datafile_is_block_zero_4 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        signed long int return_value_lseek64_1;
        return_value_lseek64_1=lseek64(f->fd, (signed long int)len, 1);
        if(!(return_value_lseek64_1 >= 0l))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_write", 133, "Can't lseek64() in file [%s]\n", (const void *)f->path);
          return -9;
        }

      }

      else
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 0;
        lres=write(f->fd, (const void *)data, len);
        if(!((unsigned long int)lres == len))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          if(*return_value___errno_location_3 == 28 || !((unsigned long int)lres >= len) && lres >= 1l)
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_write", 143, "Can't write file [%s]: no space left on device\n", (const void *)f->path);
            return -8;
          }

          fsaprintf(0, (_Bool)1, (_Bool)1, "datafile.c", "datafile_write", 147, "cannot write %s: size=%ld\n", (const void *)f->path, (signed long int)len);
          return -11;
        }

      }
    }

    gcry_md_write(f->md5ctx, (const void *)data, len);
    return 0;
  }
}

// dec_secthreads
// file syncthread.h line 35
void dec_secthreads()
{
  __CPROVER_atomic_begin();
  *(&g_secthreads.counter) = *(&g_secthreads.counter) - 1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
}

// decompress_block_generic
// file thread_comp.c line 149
signed int decompress_block_generic(struct s_blockinfo *blkinfo)
{
  unsigned long int checkorigsize;
  char *bufcomp = (char *)(void *)0;
  signed int res;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)blkinfo->blkrealsize);
  bufcomp = (char *)return_value_malloc_1;
  if(bufcomp == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 157, "malloc(%ld) failed: cannot allocate memory for compressed block\n", (signed long int)blkinfo->blkrealsize);
    return -1;
  }

  else
  {
    unsigned int return_value_fletcher32_4;
    return_value_fletcher32_4=fletcher32((unsigned char *)blkinfo->blkdata, blkinfo->blkarsize);
    if(!(return_value_fletcher32_4 == blkinfo->blkarcsum))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 163, "block is corrupt at blockoffset=%ld, blksize=%ld\n", (signed long int)blkinfo->blkoffset, (signed long int)blkinfo->blkrealsize);
      memset((void *)bufcomp, 0, (unsigned long int)blkinfo->blkrealsize);
    }

    else
    {
      if(!((signed int)blkinfo->blkcryptalgo == 1))
      {
        if(!((signed int)g_options.encryptalgo == 2))
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "thread_comp.c", "decompress_block_generic", 170, "this archive has been encrypted, you have to provide a password on the command line using option '-c'\n");
          return -1;
        }

      }

      char *bufcrypt = (char *)(void *)0;
      unsigned long int clearsize;
      if((signed int)blkinfo->blkcryptalgo == 2)
      {
        void *return_value_malloc_2;
        return_value_malloc_2=malloc((unsigned long int)(blkinfo->blkrealsize + (unsigned int)8));
        bufcrypt = (char *)return_value_malloc_2;
        if(bufcrypt == ((char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 179, "malloc(%ld) failed: out of memory\n", (signed long int)blkinfo->blkrealsize + (signed long int)8);
          return -1;
        }

        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen((char *)g_options.encryptpass);
        res=crypto_blowfish((unsigned long int)blkinfo->blkarsize, &clearsize, (unsigned char *)blkinfo->blkdata, (unsigned char *)bufcrypt, g_options.encryptpass, (signed int)return_value_strlen_3, 0);
        if(!(res == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 184, "crypt_block_blowfish() failed\n");
          return -1;
        }

        if(!(clearsize == (unsigned long int)blkinfo->blkcompsize))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 189, "clearsize does not match blkcompsize: clearsize=%ld and blkcompsize=%ld\n", (signed long int)clearsize, (signed long int)blkinfo->blkcompsize);
          return -1;
        }

        free((void *)blkinfo->blkdata);
        blkinfo->blkdata = bufcrypt;
      }

      switch((signed int)blkinfo->blkcompalgo)
      {
        case 1:
        {
          memcpy((void *)bufcomp, (const void *)blkinfo->blkdata, (unsigned long int)blkinfo->blkarsize);
          res = 0;
          break;
        }
        case 2:
        {
          res=uncompress_block_lzo((unsigned long int)blkinfo->blkcompsize, &checkorigsize, (unsigned char *)(void *)bufcomp, (unsigned long int)blkinfo->blkrealsize, (unsigned char *)blkinfo->blkdata);
          if(!(res == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 206, "uncompress_block_lzo()=%d failed: finalsize=%ld and checkorigsize=%ld\n", res, (signed long int)blkinfo->blkarsize, (signed long int)checkorigsize);
            memset((void *)bufcomp, 0, (unsigned long int)blkinfo->blkrealsize);
          }

          break;
        }
        case 3:
        {
          res=uncompress_block_gzip((unsigned long int)blkinfo->blkcompsize, &checkorigsize, (unsigned char *)(void *)bufcomp, (unsigned long int)blkinfo->blkrealsize, (unsigned char *)blkinfo->blkdata);
          if(!(res == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 215, "uncompress_block_gzip()=%d failed: finalsize=%ld and checkorigsize=%ld\n", res, (signed long int)blkinfo->blkarsize, (signed long int)checkorigsize);
            memset((void *)bufcomp, 0, (unsigned long int)blkinfo->blkrealsize);
          }

          break;
        }
        case 4:
        {
          res=uncompress_block_bzip2((unsigned long int)blkinfo->blkcompsize, &checkorigsize, (unsigned char *)(void *)bufcomp, (unsigned long int)blkinfo->blkrealsize, (unsigned char *)blkinfo->blkdata);
          if(!(res == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 223, "uncompress_block_bzip2()=%d failed: finalsize=%ld and checkorigsize=%ld\n", res, (signed long int)blkinfo->blkarsize, (signed long int)checkorigsize);
            memset((void *)bufcomp, 0, (unsigned long int)blkinfo->blkrealsize);
          }

          break;
        }
        case 5:
        {
          res=uncompress_block_lzma((unsigned long int)blkinfo->blkcompsize, &checkorigsize, (unsigned char *)(void *)bufcomp, (unsigned long int)blkinfo->blkrealsize, (unsigned char *)blkinfo->blkdata);
          if(!(res == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 232, "uncompress_block_lzma()=%d failed: finalsize=%ld and checkorigsize=%ld\n", res, (signed long int)blkinfo->blkarsize, (signed long int)checkorigsize);
            memset((void *)bufcomp, 0, (unsigned long int)blkinfo->blkrealsize);
          }

          break;
        }
        default:
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_comp.c", "decompress_block_generic", 239, "unsupported compression algorithm: %ld\n", (signed long int)blkinfo->blkcompalgo);
          return -1;
        }
      }
      free((void *)blkinfo->blkdata);
      blkinfo->blkdata = bufcomp;
    }
    return 0;
  }
}

// devcmp
// file filesys.c line 114
signed int devcmp(char *dev1, char *dev2)
{
  struct stat64 devstat[2l];
  char *devname[2l] = { dev1, dev2 };
  signed int i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(devname[(signed long int)i], "/dev/", (unsigned long int)5);
    if(!(return_value_strncmp_1 == 0))
      return -1;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 0;
    signed int return_value_stat64_4;
    return_value_stat64_4=stat64(devname[(signed long int)i], &devstat[(signed long int)i]);
    if(!(return_value_stat64_4 == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 2)
        fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "devcmp", 129, "Warning: node for device [%s] does not exist in /dev/\n", devname[(signed long int)i]);

      else
        fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "devcmp", 131, "Warning: cannot get details for device [%s]\n", devname[(signed long int)i]);
      return -1;
    }

    if(!((61440u & devstat[0l].st_mode) == 24576u))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "devcmp", 137, "Warning: [%s] is not a block device\n", devname[(signed long int)i]);
      return -1;
    }

  }
  return devstat[(signed long int)0].st_rdev == devstat[(signed long int)1].st_rdev ? 0 : 1;
}

// dichl_add
// file dichl.h line 43
signed int dichl_add(struct s_dichl *d, unsigned long int key1, unsigned long int key2, char *str)
{
  struct s_dichlitem *item;
  struct s_dichlitem *lnew;
  struct s_dichlitem *last;
  signed int len;
  if(str == ((char *)NULL) || d == ((struct s_dichl *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "dichl.c", "dichl_add", 66, "invalid parameters\n");
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(str);
    len = (signed int)return_value_strlen_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct s_dichlitem) /*32ul*/ );
    lnew = (struct s_dichlitem *)return_value_malloc_2;
    if(lnew == ((struct s_dichlitem *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "dichl.c", "dichl_add", 74, "malloc(%ld) failed: out of memory\n", (signed long int)sizeof(struct s_dichlitem) /*32ul*/ );
      return -1;
    }

    else
    {
      memset((void *)lnew, 0, sizeof(struct s_dichlitem) /*32ul*/ );
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)(len + 1));
      lnew->str = (char *)return_value_malloc_3;
      if(lnew->str == ((char *)NULL))
      {
        free((void *)lnew);
        fsaprintf(0, (_Bool)0, (_Bool)1, "dichl.c", "dichl_add", 82, "malloc(%ld) failed: out of memory\n", (signed long int)len + (signed long int)1);
        return -1;
      }

      else
      {
        memcpy((void *)lnew->str, (const void *)str, (unsigned long int)(len + 1));
        lnew->key1 = key1;
        lnew->key2 = key2;
        lnew->next = (struct s_dichlitem *)(void *)0;
        if(d->head == ((struct s_dichlitem *)NULL))
          d->head = lnew;

        else
        {
          item = d->head;
          for( ; !(item == ((struct s_dichlitem *)NULL)); item = item->next)
          {
            last = item;
            if(item->key1 == key1)
            {
              if(item->key2 == key2)
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "dichl.c", "dichl_add", 102, "dichl_add_internal(): item with key1=%ld and key2=%ld is already in dico\n", (signed long int)item->key1, (signed long int)item->key2);
                return -1;
              }

            }

          }
          last->next = lnew;
        }
        return 0;
      }
    }
  }
}

// dichl_alloc
// file dichl.h line 41
struct s_dichl * dichl_alloc()
{
  struct s_dichl *d;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_dichl) /*8ul*/ );
  d = (struct s_dichl *)return_value_malloc_1;
  if(d == ((struct s_dichl *)NULL))
    return (struct s_dichl *)(void *)0;

  else
  {
    d->head = (struct s_dichlitem *)(void *)0;
    return d;
  }
}

// dichl_destroy
// file dichl.h line 42
signed int dichl_destroy(struct s_dichl *d)
{
  struct s_dichlitem *item;
  struct s_dichlitem *next;
  if(d == ((struct s_dichl *)NULL))
    return -1;

  else
  {
    item = d->head;
    for( ; !(item == ((struct s_dichlitem *)NULL)); item = next)
    {
      next = item->next;
      free((void *)item->str);
      free((void *)item);
    }
    free((void *)d);
    return 0;
  }
}

// dichl_get
// file dichl.h line 44
signed int dichl_get(struct s_dichl *d, unsigned long int key1, unsigned long int key2, char *buf, signed int bufsize)
{
  struct s_dichlitem *item;
  signed int len;
  if(buf == ((char *)NULL) || d == ((struct s_dichl *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "dichl.c", "dichl_get", 118, "invalid dichl\n");
    return -1;
  }

  else
  {
    item = d->head;
    for( ; !(item == ((struct s_dichlitem *)NULL)); item = item->next)
      if(!(item == ((struct s_dichlitem *)NULL)))
      {
        if(item->key1 == key1)
        {
          if(item->key2 == key2)
          {
            unsigned long int return_value_strlen_1;
            return_value_strlen_1=strlen(item->str);
            len = (signed int)return_value_strlen_1;
            if(!(bufsize >= 1 + len))
              return -2;

            snprintf(buf, (unsigned long int)bufsize, "%s", item->str);
            return 0;
          }

        }

      }

    return -3;
  }
}

// dico_add_data
// file dico.h line 51
signed int dico_add_data(struct s_dico *d, unsigned char section, unsigned short int key, const void *data, unsigned short int size)
{
  signed int return_value_dico_add_generic_1;
  return_value_dico_add_generic_1=dico_add_generic(d, section, key, data, size, (unsigned char)5);
  return return_value_dico_add_generic_1;
}

// dico_add_generic
// file dico.h line 52
signed int dico_add_generic(struct s_dico *d, unsigned char section, unsigned short int key, const void *data, unsigned short int size, unsigned char type)
{
  struct s_dicoitem *item;
  struct s_dicoitem *lnew;
  struct s_dicoitem *last;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_dicoitem) /*24ul*/ );
  lnew = (struct s_dicoitem *)return_value_malloc_1;
  if(lnew == ((struct s_dicoitem *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "dico.c", "dico_add_generic", 79, "malloc(%ld) failed: out of memory\n", (signed long int)sizeof(struct s_dicoitem) /*24ul*/ );
    return -3;
  }

  else
  {
    memset((void *)lnew, 0, sizeof(struct s_dicoitem) /*24ul*/ );
    if(d->head == ((struct s_dicoitem *)NULL))
      d->head = lnew;

    else
    {
      item = d->head;
      for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
      {
        last = item;
        if(item->section == section)
        {
          if(item->key == key)
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "dico.c", "dico_add_generic", 94, "dico_add_generic(): item with key=%ld is already in dico\n", (signed long int)item->key);
            return -3;
          }

        }

      }
      last->next = lnew;
    }
    lnew->key = key;
    lnew->section = section;
    lnew->size = size;
    lnew->type = type;
    lnew->data = (char *)(void *)0;
    if((signed int)size >= 1)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)size);
      lnew->data = (char *)return_value_malloc_2;
      if(lnew->data == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "dico.c", "dico_add_generic", 113, "malloc(%ld) failed: out of memory\n", (signed long int)size);
        return -3;
      }

      memcpy((void *)lnew->data, data, (unsigned long int)size);
    }

    return 0;
  }
}

// dico_add_string
// file dico.h line 61
signed int dico_add_string(struct s_dico *d, unsigned char section, unsigned short int key, const char *szstring)
{
  unsigned short int len;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion szstring */
  assert(szstring != ((const char *)NULL));
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(szstring);
  len = (unsigned short int)return_value_strlen_1;
  signed int return_value_dico_add_generic_2;
  return_value_dico_add_generic_2=dico_add_generic(d, section, key, (const void *)szstring, (unsigned short int)((signed int)len + 1), (unsigned char)6);
  return return_value_dico_add_generic_2;
}

// dico_add_u16
// file dico.h line 55
signed int dico_add_u16(struct s_dico *d, unsigned char section, unsigned short int key, unsigned short int data)
{
  unsigned short int ledata;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  ledata = (unsigned short int)data;
  signed int return_value_dico_add_generic_1;
  return_value_dico_add_generic_1=dico_add_generic(d, section, key, (const void *)&ledata, (unsigned short int)sizeof(unsigned short int) /*2ul*/ , (unsigned char)2);
  return return_value_dico_add_generic_1;
}

// dico_add_u32
// file dico.h line 56
signed int dico_add_u32(struct s_dico *d, unsigned char section, unsigned short int key, unsigned int data)
{
  unsigned int ledata;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  ledata = (unsigned int)data;
  signed int return_value_dico_add_generic_1;
  return_value_dico_add_generic_1=dico_add_generic(d, section, key, (const void *)&ledata, (unsigned short int)sizeof(unsigned int) /*4ul*/ , (unsigned char)3);
  return return_value_dico_add_generic_1;
}

// dico_add_u64
// file dico.h line 57
signed int dico_add_u64(struct s_dico *d, unsigned char section, unsigned short int key, unsigned long int data)
{
  unsigned long int ledata;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  ledata = (unsigned long int)data;
  signed int return_value_dico_add_generic_1;
  return_value_dico_add_generic_1=dico_add_generic(d, section, key, (const void *)&ledata, (unsigned short int)sizeof(unsigned long int) /*8ul*/ , (unsigned char)4);
  return return_value_dico_add_generic_1;
}

// dico_alloc
// file dico.h line 46
struct s_dico * dico_alloc()
{
  struct s_dico *d;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_dico) /*8ul*/ );
  d = (struct s_dico *)return_value_malloc_1;
  if(d == ((struct s_dico *)NULL))
    return (struct s_dico *)(void *)0;

  else
  {
    d->head = (struct s_dicoitem *)(void *)0;
    return d;
  }
}

// dico_count_all_sections
// file dico.h line 49
signed int dico_count_all_sections(struct s_dico *d)
{
  struct s_dicoitem *item;
  signed int count;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  count = 0;
  item = d->head;
  for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
    count = count + 1;
  return count;
}

// dico_count_one_section
// file dico.h line 50
signed int dico_count_one_section(struct s_dico *d, unsigned char section)
{
  struct s_dicoitem *item;
  signed int count;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  count = 0;
  item = d->head;
  for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
    if(item->section == section)
      count = count + 1;

  return count;
}

// dico_destroy
// file dico.h line 47
signed int dico_destroy(struct s_dico *d)
{
  struct s_dicoitem *item;
  struct s_dicoitem *next;
  if(d == ((struct s_dico *)NULL))
    return -1;

  else
  {
    item = d->head;
    for( ; !(item == ((struct s_dicoitem *)NULL)); item = next)
    {
      next = item->next;
      if(!(item->data == ((char *)NULL)))
        free((void *)item->data);

      free((void *)item);
    }
    free((void *)d);
    return 0;
  }
}

// dico_get_data
// file dico.h line 54
signed int dico_get_data(struct s_dico *d, unsigned char section, unsigned short int key, void *data, unsigned short int maxsize, unsigned short int *size)
{
  signed int return_value_dico_get_generic_1;
  return_value_dico_get_generic_1=dico_get_generic(d, section, key, data, maxsize, size);
  return return_value_dico_get_generic_1;
}

// dico_get_generic
// file dico.c line 129
signed int dico_get_generic(struct s_dico *d, unsigned char section, unsigned short int key, void *data, unsigned short int maxsize, unsigned short int *size)
{
  struct s_dicoitem *item;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion data */
  assert(data != NULL);
  if(!(size == ((unsigned short int *)NULL)))
    *size = (unsigned short int)0;

  if(d->head == ((struct s_dicoitem *)NULL))
  {
    fsaprintf(4, (_Bool)0, 4 >= 3, "dico.c", "dico_get_generic", 141, "dico is empty\n");
    return -1;
  }

  else
    if(!((signed int)maxsize >= 1))
    {
      fsaprintf(4, (_Bool)0, 4 >= 3, "dico.c", "dico_get_generic", 146, "case1: maxsize=%d\n", maxsize);
      return -3;
    }

    else
    {
      item = d->head;
      for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
        if(!(item == ((struct s_dicoitem *)NULL)))
        {
          if(item->key == key)
          {
            if(item->section == section)
            {
              if(!((signed int)maxsize >= (signed int)item->size))
              {
                fsaprintf(4, (_Bool)0, 4 >= 3, "dico.c", "dico_get_generic", 155, "case2: (item->size > maxsize): item->size =%d, maxsize=%d\n", item->size, maxsize);
                return -4;
              }

              if((signed int)item->size >= 1)
              {
                if(!(item->data == ((char *)NULL)))
                  memcpy(data, (const void *)item->data, (unsigned long int)item->size);

              }

              if(!(size == ((unsigned short int *)NULL)))
                *size = item->size;

              return 0;
            }

          }

        }

      fsaprintf(4, (_Bool)0, 4 >= 3, "dico.c", "dico_get_generic", 166, "case3: not found\n");
      return -5;
    }
}

// dico_get_string
// file dico.h line 62
signed int dico_get_string(struct s_dico *d, unsigned char section, unsigned short int key, char *buffer, unsigned short int bufsize)
{
  unsigned short int size;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion buffer */
  assert(buffer != ((char *)NULL));
  memset((void *)buffer, 0, (unsigned long int)bufsize);
  signed int return_value_dico_get_data_1;
  return_value_dico_get_data_1=dico_get_data(d, section, key, (void *)buffer, bufsize, &size);
  return return_value_dico_get_data_1;
}

// dico_get_u16
// file dico.h line 58
signed int dico_get_u16(struct s_dico *d, unsigned char section, unsigned short int key, unsigned short int *data)
{
  unsigned short int ledata;
  unsigned short int size;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion data */
  assert(data != ((unsigned short int *)NULL));
  *data = (unsigned short int)0;
  signed int return_value_dico_get_data_1;
  return_value_dico_get_data_1=dico_get_data(d, section, key, (void *)&ledata, (unsigned short int)sizeof(unsigned short int) /*2ul*/ , &size);
  if(!(return_value_dico_get_data_1 == 0))
    return -1;

  else
  {
    *data = (unsigned short int)ledata;
    return 0;
  }
}

// dico_get_u32
// file dico.h line 59
signed int dico_get_u32(struct s_dico *d, unsigned char section, unsigned short int key, unsigned int *data)
{
  unsigned int ledata;
  unsigned short int size;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion data */
  assert(data != ((unsigned int *)NULL));
  *data = (unsigned int)0;
  signed int return_value_dico_get_data_1;
  return_value_dico_get_data_1=dico_get_data(d, section, key, (void *)&ledata, (unsigned short int)sizeof(unsigned int) /*4ul*/ , &size);
  if(!(return_value_dico_get_data_1 == 0))
    return -1;

  else
  {
    *data = (unsigned int)ledata;
    return 0;
  }
}

// dico_get_u64
// file dico.h line 60
signed int dico_get_u64(struct s_dico *d, unsigned char section, unsigned short int key, unsigned long int *data)
{
  unsigned long int ledata;
  unsigned short int size;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  /* assertion data */
  assert(data != ((unsigned long int *)NULL));
  *data = (unsigned long int)0;
  signed int return_value_dico_get_data_1;
  return_value_dico_get_data_1=dico_get_data(d, section, key, (void *)&ledata, (unsigned short int)sizeof(unsigned long int) /*8ul*/ , &size);
  if(!(return_value_dico_get_data_1 == 0))
    return -1;

  else
  {
    *data = (unsigned long int)ledata;
    return 0;
  }
}

// dico_show
// file dico.h line 48
signed int dico_show(struct s_dico *d, unsigned char section, char *debugtxt)
{
  char buffer[2048l];
  char text[2048l];
  struct s_dicoitem *item;
  /* assertion d */
  assert(d != ((struct s_dico *)NULL));
  fsaprintf(0, (_Bool)0, 0 >= 3, "dico.c", "dico_show", 295, "\n-----------------debug-dico-begin(%s)---------------\n", debugtxt);
  if(!(d->head == ((struct s_dicoitem *)NULL)))
  {
    item = d->head;
    for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
      if(item->section == section)
      {
        snprintf(buffer, sizeof(char [2048l]) /*2048ul*/ , "key=[%ld], sizeof(data)=[%d], ", (signed long int)item->key, (signed int)item->size);
        switch((signed int)item->type)
        {
          case 1:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=u8, size=[%d]", (signed int)item->size);
            break;
          }
          case 2:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=u16, size=[%d]", (signed int)item->size);
            break;
          }
          case 3:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=u32, size=[%d]", (signed int)item->size);
            break;
          }
          case 4:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=u64, size=[%d]", (signed int)item->size);
            break;
          }
          case 6:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=str, size=[%d], data=[%s]", (signed int)item->size, (char *)item->data);
            break;
          }
          case 5:
          {
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=dat, size=[%d]", (signed int)item->size);
            break;
          }
          default:
            snprintf(text, sizeof(char [2048l]) /*2048ul*/ , "type=unknown");
        }
        strlcatf(buffer, (signed int)sizeof(char [2048l]) /*2048ul*/ , "%s", (const void *)text);
        fsaprintf(0, (_Bool)0, 0 >= 3, "dico.c", "dico_show", 330, "%s\n", (const void *)buffer);
      }

  }

  else
    fsaprintf(0, (_Bool)0, 0 >= 3, "dico.c", "dico_show", 336, "dico is empty\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "dico.c", "dico_show", 339, "-----------------debug-dico-end(%s)------------------\n\n", debugtxt);
  return 0;
}

// error_int_to_string
// file error.h line 53
char * error_int_to_string(signed long int err)
{
  switch(err)
  {
    case (signed long int)0:
      return "FSAERR_SUCCESS";
    case (signed long int)-1:
      return "FSAERR_UNKNOWN";
    case (signed long int)-2:
      return "FSAERR_ENOMEM";
    case (signed long int)-3:
      return "FSAERR_EINVAL";
    case (signed long int)-4:
      return "FSAERR_ENOENT";
    case (signed long int)-5:
      return "FSAERR_ENDOFFILE";
    case (signed long int)-6:
      return "FSAERR_WRONGTYPE";
    case (signed long int)-7:
      return "FSAERR_NOTOPEN";
    default:
      return "FSAERR_?";
  }
}

// exclude_check
// file common.h line 51
signed int exclude_check(struct s_strlist *patlist, char *string)
{
  char pattern[1024l];
  signed int count;
  signed int i;
  count=strlist_count(patlist);
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    strlist_getitem(patlist, i, pattern, (signed int)sizeof(char [1024l]) /*1024ul*/ );
    signed int return_value_fnmatch_1;
    return_value_fnmatch_1=fnmatch(pattern, string, 0);
    if(return_value_fnmatch_1 == 0)
      return 1;

  }
  return 0;
}

// exec_command
// file common.h line 27
signed int exec_command(char *command, signed int cmdbufsize, signed int *exitst, char *stdoutbuf, signed int stdoutsize, char *stderrbuf, signed int stderrsize, char *format, ...)
{
  char pathtoprog[4096l];
  const signed int max_argv = 128;
  const signed long int max_argv_array_size0 = (signed long int)max_argv;
  char *argv[max_argv_array_size0];
  signed int outpos = 0;
  signed int errpos = 0;
  signed int pfildes1[2l];
  signed int pfildes2[2l];
  struct anonymous_4 p;
  signed int status;
  signed int mystdout;
  signed int mystderr;
  void **ap;
  signed int cmdpid;
  signed int flags;
  signed int pid;
  signed int res;
  char c;
  signed int i;
  memset((void *)pathtoprog, 0, sizeof(char [4096l]) /*4096ul*/ );
  i = 0;
  signed int tmp_post_1;
  for( ; !(i >= max_argv); argv[(signed long int)tmp_post_1] = (char *)(void *)0)
  {
    tmp_post_1 = i;
    i = i + 1;
  }
  if(!(exitst == ((signed int *)NULL)))
    *exitst = -1;

  if(!(stdoutbuf == ((char *)NULL)) && !(stdoutsize == 0))
    memset((void *)stdoutbuf, 0, (unsigned long int)stdoutsize);

  if(!(stderrbuf == ((char *)NULL)) && !(stderrsize == 0))
    memset((void *)stderrbuf, 0, (unsigned long int)stderrsize);

  memset((void *)command, 0, (unsigned long int)cmdbufsize);
  ap = (void **)&format;
  vsnprintf(command, (unsigned long int)cmdbufsize, format, ap);
  ap = ((void **)NULL);
  wordexp(command, &p, 0);
  i = 0;
  for( ; !(i >= max_argv) && !((unsigned long int)i >= p.we_wordc); i = i + 1)
  {
    argv[(signed long int)i] = p.we_wordv[(signed long int)i];
    fsaprintf(4, (_Bool)0, 4 >= 3, "common.c", "exec_command", 324, "argv[%d]=[%s]\n", i, argv[(signed long int)i]);
  }
  signed int return_value_getpathtoprog_2;
  return_value_getpathtoprog_2=getpathtoprog(pathtoprog, (signed int)sizeof(char [4096l]) /*4096ul*/ , argv[(signed long int)0]);
  signed int return_value_pipe_4;
  signed long int return_value_read_10;
  signed long int return_value_read_11;
  if(!(return_value_getpathtoprog_2 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "common.c", "exec_command", 329, "program [%s] no found in PATH or bad permissions on that program\n", argv[(signed long int)0]);
    wordfree(&p);
    return -1;
  }

  else
  {
    fsaprintf(2, (_Bool)0, 2 >= 3, "common.c", "exec_command", 333, "getpathtoprog(%s)=[%s]\n", argv[(signed long int)0], (const void *)pathtoprog);
    signed int return_value_pipe_3;
    return_value_pipe_3=pipe(pfildes1);
    _Bool tmp_if_expr_5;
    if(return_value_pipe_3 == -1)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_pipe_4=pipe(pfildes2);
      tmp_if_expr_5 = return_value_pipe_4 == -1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "common.c", "exec_command", 337, "pipe() failed\n");
      wordfree(&p);
      return -1;
    }

    else
    {
      fsaprintf(1, (_Bool)0, 1 >= 3, "common.c", "exec_command", 342, "executing [%s]...\n", command);
      pid=fork();
      if(pid == -1)
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "common.c", "exec_command", 345, "fork() failed\n");
        wordfree(&p);
        return -1;
      }

      else
        if(pid == 0)
        {
          close(pfildes1[(signed long int)0]);
          close(pfildes2[(signed long int)0]);
          dup2(pfildes1[(signed long int)1], 1);
          close(pfildes1[(signed long int)1]);
          dup2(pfildes2[(signed long int)1], 2);
          close(pfildes2[(signed long int)1]);
          execvp(pathtoprog, argv);
          fsaprintf(0, (_Bool)0, (_Bool)1, "common.c", "exec_command", 358, "execvp(%s) failed\n", (const void *)pathtoprog);
          wordfree(&p);
          exit(1);
        }

        else
        {
          mystdout = pfildes1[(signed long int)0];
          mystderr = pfildes2[(signed long int)0];
          cmdpid = pid;
          close(pfildes1[(signed long int)1]);
          close(pfildes2[(signed long int)1]);
          flags=fcntl(mystdout, 3, 0);
          fcntl(mystdout, 4, flags | 04000);
          flags=fcntl(mystderr, 3, 0);
          fcntl(mystderr, 4, flags | 04000);
          do
          {

          __CPROVER_DUMP_L14:
            ;
            signed long int return_value_read_6;
            return_value_read_6=read(mystdout, (void *)&c, (unsigned long int)1);
            res = (signed int)return_value_read_6;
            if(res >= 1 && !(stdoutbuf == ((char *)NULL)) && !(1 + outpos >= stdoutsize))
            {
              signed int tmp_post_7 = outpos;
              outpos = outpos + 1;
              stdoutbuf[(signed long int)tmp_post_7] = c;
            }

            if(res >= 1)
              goto __CPROVER_DUMP_L14;

            do
            {
              signed long int return_value_read_8;
              return_value_read_8=read(mystderr, (void *)&c, (unsigned long int)1);
              res = (signed int)return_value_read_8;
              if(res >= 1 && !(stderrbuf == ((char *)NULL)) && !(1 + errpos >= stderrsize))
              {
                signed int tmp_post_9 = errpos;
                errpos = errpos + 1;
                stderrbuf[(signed long int)tmp_post_9] = c;
              }

            }
            while(res >= 1);
            usleep((unsigned int)100000);
            res=waitpid(cmdpid, &status, 1);
          }
          while(!(res == -1) && !(res == cmdpid));
          if(!(stdoutbuf == ((char *)NULL)) && !(1 + outpos >= stdoutsize))
          {
            return_value_read_10=read(mystdout, (void *)(stdoutbuf + (signed long int)outpos), (unsigned long int)((stdoutsize - outpos) - 1));
            res = (signed int)return_value_read_10;
          }

          if(!(stderrbuf == ((char *)NULL)) && !(1 + errpos >= stderrsize))
          {
            return_value_read_11=read(mystderr, (void *)(stderrbuf + (signed long int)errpos), (unsigned long int)((stderrsize - errpos) - 1));
            res = (signed int)return_value_read_11;
          }

          /* tag-#anon#lUN[lS32'__in'|S32'__i'] */
union anonymous_3
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
          ;
          fsaprintf(1, (_Bool)0, 1 >= 3, "common.c", "exec_command", 399, "command [%s] returned %d\n", command, (((union anonymous_3){ .__in=status }).__i & 0xff00) >> 8);
          if(!(exitst == ((signed int *)NULL)))
            *exitst = (((union anonymous_3){ .__in=status }).__i & 0xff00) >> 8;

          if(outpos >= 1 && !(stdoutbuf == ((char *)NULL)))
            fsaprintf(4, (_Bool)0, 4 >= 3, "common.c", "exec_command", 404, "\n----stdout----\n%s\n----stdout----\n\n", stdoutbuf);

          if(errpos >= 1 && !(stderrbuf == ((char *)NULL)))
            fsaprintf(4, (_Bool)0, 4 >= 3, "common.c", "exec_command", 406, "\n----stderr----\n%s\n----stderr----\n\n", stderrbuf);

          wordfree(&p);
          return 0;
        }
    }
  }
}

// ext2_mkfs
// file fs_ext2.c line 87
signed int ext2_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  signed int return_value_extfs_mkfs_1;
  return_value_extfs_mkfs_1=extfs_mkfs(d, partition, 0, fsoptions);
  return return_value_extfs_mkfs_1;
}

// ext2_test
// file fs_ext2.c line 488
signed int ext2_test(char *partition)
{
  signed int return_value_extfs_test_1;
  return_value_extfs_test_1=extfs_test(partition, 0);
  return return_value_extfs_test_1;
}

// ext2fs_div64_ceil
// file /usr/include/ext2fs/ext2fs.h line 1748
inline unsigned long long int ext2fs_div64_ceil(unsigned long long int a, unsigned long long int b)
{
  if(a == 0ull)
    return (unsigned long long int)0;

  else
    return (a - (unsigned long int)1) / b + (unsigned long int)1;
}

// ext2fs_div_ceil
// file /usr/include/ext2fs/ext2fs.h line 1741
inline unsigned int ext2fs_div_ceil(unsigned int a, unsigned int b)
{
  if(a == 0u)
    return (unsigned int)0;

  else
    return (a - (unsigned int)1) / b + (unsigned int)1;
}

// ext2fs_fast_clear_bit
// file /usr/include/ext2fs/bitops.h line 261
inline void ext2fs_fast_clear_bit(unsigned int nr, void *addr)
{
  unsigned char *ADDR = (unsigned char *)addr;
  ADDR = ADDR + (signed long int)(nr >> 3);
  *ADDR = *ADDR & (unsigned char)~(1 << (nr & (unsigned int)0x07));
}

// ext2fs_fast_clear_bit64
// file /usr/include/ext2fs/bitops.h line 278
inline void ext2fs_fast_clear_bit64(unsigned long long int nr, void *addr)
{
  unsigned char *ADDR = (unsigned char *)addr;
  ADDR = ADDR + (signed long int)(nr >> 3);
  *ADDR = *ADDR & (unsigned char)~(1 << (nr & (unsigned long int)0x07));
}

// ext2fs_fast_mark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 431
inline void ext2fs_fast_mark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  ext2fs_mark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
}

// ext2fs_fast_mark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 550
inline void ext2fs_fast_mark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  ext2fs_mark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
}

// ext2fs_fast_mark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 495
inline void ext2fs_fast_mark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num)
{
  ext2fs_mark_block_bitmap_range(bitmap, block, num);
}

// ext2fs_fast_mark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 675
inline void ext2fs_fast_mark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num)
{
  ext2fs_mark_block_bitmap_range2(bitmap, block, num);
}

// ext2fs_fast_mark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 450
inline void ext2fs_fast_mark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  ext2fs_mark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
}

// ext2fs_fast_mark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 569
inline void ext2fs_fast_mark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  ext2fs_mark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
}

// ext2fs_fast_set_bit
// file /usr/include/ext2fs/bitops.h line 253
inline void ext2fs_fast_set_bit(unsigned int nr, void *addr)
{
  unsigned char *ADDR = (unsigned char *)addr;
  ADDR = ADDR + (signed long int)(nr >> 3);
  *ADDR = *ADDR | (unsigned char)(1 << (nr & (unsigned int)0x07));
}

// ext2fs_fast_set_bit64
// file /usr/include/ext2fs/bitops.h line 270
inline void ext2fs_fast_set_bit64(unsigned long long int nr, void *addr)
{
  unsigned char *ADDR = (unsigned char *)addr;
  ADDR = ADDR + (signed long int)(nr >> 3);
  *ADDR = *ADDR | (unsigned char)(1 << (nr & (unsigned long int)0x07));
}

// ext2fs_fast_test_block_bitmap
// file /usr/include/ext2fs/bitops.h line 443
inline signed int ext2fs_fast_test_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  signed int return_value_ext2fs_test_generic_bitmap_1;
  return_value_ext2fs_test_generic_bitmap_1=ext2fs_test_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_test_generic_bitmap_1;
}

// ext2fs_fast_test_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 562
inline signed int ext2fs_fast_test_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  signed int return_value_ext2fs_test_generic_bmap_1;
  return_value_ext2fs_test_generic_bmap_1=ext2fs_test_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_test_generic_bmap_1;
}

// ext2fs_fast_test_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 489
inline signed int ext2fs_fast_test_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num)
{
  signed int return_value_ext2fs_test_block_bitmap_range_1;
  return_value_ext2fs_test_block_bitmap_range_1=ext2fs_test_block_bitmap_range(bitmap, block, num);
  return return_value_ext2fs_test_block_bitmap_range_1;
}

// ext2fs_fast_test_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 668
inline signed int ext2fs_fast_test_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num)
{
  signed int return_value_ext2fs_test_block_bitmap_range2_1;
  return_value_ext2fs_test_block_bitmap_range2_1=ext2fs_test_block_bitmap_range2(bitmap, block, num);
  return return_value_ext2fs_test_block_bitmap_range2_1;
}

// ext2fs_fast_test_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 462
inline signed int ext2fs_fast_test_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_test_generic_bitmap_1;
  return_value_ext2fs_test_generic_bitmap_1=ext2fs_test_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
  return return_value_ext2fs_test_generic_bitmap_1;
}

// ext2fs_fast_test_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 581
inline signed int ext2fs_fast_test_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_test_generic_bmap_1;
  return_value_ext2fs_test_generic_bmap_1=ext2fs_test_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
  return return_value_ext2fs_test_generic_bmap_1;
}

// ext2fs_fast_unmark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 437
inline void ext2fs_fast_unmark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  ext2fs_unmark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
}

// ext2fs_fast_unmark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 556
inline void ext2fs_fast_unmark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  ext2fs_unmark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
}

// ext2fs_fast_unmark_block_bitmap_range
// file /usr/include/ext2fs/bitops.h line 501
inline void ext2fs_fast_unmark_block_bitmap_range(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block, signed int num)
{
  ext2fs_unmark_block_bitmap_range(bitmap, block, num);
}

// ext2fs_fast_unmark_block_bitmap_range2
// file /usr/include/ext2fs/bitops.h line 682
inline void ext2fs_fast_unmark_block_bitmap_range2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block, unsigned int num)
{
  ext2fs_unmark_block_bitmap_range2(bitmap, block, num);
}

// ext2fs_fast_unmark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 456
inline void ext2fs_fast_unmark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  ext2fs_unmark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
}

// ext2fs_fast_unmark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 575
inline void ext2fs_fast_unmark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  ext2fs_unmark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
}

// ext2fs_find_first_set_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 618
inline signed long int ext2fs_find_first_set_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int start, unsigned long long int end, unsigned long long int *out)
{
  unsigned long long int o;
  signed long int rv;
  rv=ext2fs_find_first_set_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, start, end, &o);
  if(rv == 0l)
    *out = o;

  return rv;
}

// ext2fs_find_first_set_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 633
inline signed long int ext2fs_find_first_set_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int start, unsigned int end, unsigned int *out)
{
  unsigned long long int o;
  signed long int rv;
  rv=ext2fs_find_first_set_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)start, (unsigned long long int)end, &o);
  if(rv == 0l)
    *out = (unsigned int)o;

  return rv;
}

// ext2fs_find_first_zero_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 588
inline signed long int ext2fs_find_first_zero_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int start, unsigned long long int end, unsigned long long int *out)
{
  unsigned long long int o;
  signed long int rv;
  rv=ext2fs_find_first_zero_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, start, end, &o);
  if(rv == 0l)
    *out = o;

  return rv;
}

// ext2fs_find_first_zero_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 603
inline signed long int ext2fs_find_first_zero_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int start, unsigned int end, unsigned int *out)
{
  unsigned long long int o;
  signed long int rv;
  rv=ext2fs_find_first_zero_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)start, (unsigned long long int)end, &o);
  if(rv == 0l)
    *out = (unsigned int)o;

  return rv;
}

// ext2fs_free_mem
// file /usr/include/ext2fs/ext2fs.h line 1591
inline signed long int ext2fs_free_mem(void *ptr)
{
  void *p;
  memcpy((void *)&p, ptr, sizeof(void *) /*8ul*/ );
  free(p);
  p = NULL;
  memcpy(ptr, (const void *)&p, sizeof(void *) /*8ul*/ );
  return (signed long int)0;
}

// ext2fs_get_array
// file /usr/include/ext2fs/ext2fs.h line 1567
inline signed long int ext2fs_get_array(unsigned long int count, unsigned long int size, void *ptr)
{
  if(!(count == 0ul) && !(18446744073709551615ul / count >= size))
    return 2133571398L;

  else
  {
    signed long int return_value_ext2fs_get_mem_1;
    return_value_ext2fs_get_mem_1=ext2fs_get_mem(count * size, ptr);
    return return_value_ext2fs_get_mem_1;
  }
}

// ext2fs_get_arrayzero
// file /usr/include/ext2fs/ext2fs.h line 1574
inline signed long int ext2fs_get_arrayzero(unsigned long int count, unsigned long int size, void *ptr)
{
  void *pp;
  if(!(count == 0ul) && !(18446744073709551615ul / count >= size))
    return 2133571398L;

  else
  {
    pp=calloc(count, size);
    if(pp == NULL)
      return 2133571398L;

    else
    {
      memcpy(ptr, (const void *)&pp, sizeof(void *) /*8ul*/ );
      return (signed long int)0;
    }
  }
}

// ext2fs_get_block_bitmap_end
// file /usr/include/ext2fs/bitops.h line 479
inline unsigned int ext2fs_get_block_bitmap_end(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned int return_value_ext2fs_get_generic_bitmap_end_1;
  return_value_ext2fs_get_generic_bitmap_end_1=ext2fs_get_generic_bitmap_end((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bitmap_end_1;
}

// ext2fs_get_block_bitmap_end2
// file /usr/include/ext2fs/bitops.h line 658
inline unsigned long long int ext2fs_get_block_bitmap_end2(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned long long int return_value_ext2fs_get_generic_bmap_end_1;
  return_value_ext2fs_get_generic_bmap_end_1=ext2fs_get_generic_bmap_end((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bmap_end_1;
}

// ext2fs_get_block_bitmap_start
// file /usr/include/ext2fs/bitops.h line 469
inline unsigned int ext2fs_get_block_bitmap_start(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned int return_value_ext2fs_get_generic_bitmap_start_1;
  return_value_ext2fs_get_generic_bitmap_start_1=ext2fs_get_generic_bitmap_start((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bitmap_start_1;
}

// ext2fs_get_block_bitmap_start2
// file /usr/include/ext2fs/bitops.h line 648
inline unsigned long long int ext2fs_get_block_bitmap_start2(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned long long int return_value_ext2fs_get_generic_bmap_start_1;
  return_value_ext2fs_get_generic_bmap_start_1=ext2fs_get_generic_bmap_start((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bmap_start_1;
}

// ext2fs_get_inode_bitmap_end
// file /usr/include/ext2fs/bitops.h line 484
inline unsigned int ext2fs_get_inode_bitmap_end(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned int return_value_ext2fs_get_generic_bitmap_end_1;
  return_value_ext2fs_get_generic_bitmap_end_1=ext2fs_get_generic_bitmap_end((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bitmap_end_1;
}

// ext2fs_get_inode_bitmap_end2
// file /usr/include/ext2fs/bitops.h line 663
inline unsigned int ext2fs_get_inode_bitmap_end2(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned long long int return_value_ext2fs_get_generic_bmap_end_1;
  return_value_ext2fs_get_generic_bmap_end_1=ext2fs_get_generic_bmap_end((struct ext2fs_struct_generic_bitmap *)bitmap);
  return (unsigned int)return_value_ext2fs_get_generic_bmap_end_1;
}

// ext2fs_get_inode_bitmap_start
// file /usr/include/ext2fs/bitops.h line 474
inline unsigned int ext2fs_get_inode_bitmap_start(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned int return_value_ext2fs_get_generic_bitmap_start_1;
  return_value_ext2fs_get_generic_bitmap_start_1=ext2fs_get_generic_bitmap_start((struct ext2fs_struct_generic_bitmap *)bitmap);
  return return_value_ext2fs_get_generic_bitmap_start_1;
}

// ext2fs_get_inode_bitmap_start2
// file /usr/include/ext2fs/bitops.h line 653
inline unsigned int ext2fs_get_inode_bitmap_start2(struct ext2fs_struct_generic_bitmap *bitmap)
{
  unsigned long long int return_value_ext2fs_get_generic_bmap_start_1;
  return_value_ext2fs_get_generic_bmap_start_1=ext2fs_get_generic_bmap_start((struct ext2fs_struct_generic_bitmap *)bitmap);
  return (unsigned int)return_value_ext2fs_get_generic_bmap_start_1;
}

// ext2fs_get_mem
// file /usr/include/ext2fs/ext2fs.h line 1544
inline signed long int ext2fs_get_mem(unsigned long int size, void *ptr)
{
  void *pp;
  pp=malloc(size);
  if(pp == NULL)
    return 2133571398L;

  else
  {
    memcpy(ptr, (const void *)&pp, sizeof(void *) /*8ul*/ );
    return (signed long int)0;
  }
}

// ext2fs_get_memzero
// file /usr/include/ext2fs/ext2fs.h line 1555
inline signed long int ext2fs_get_memzero(unsigned long int size, void *ptr)
{
  void *pp;
  pp=malloc(size);
  if(pp == NULL)
    return 2133571398L;

  else
  {
    memset(pp, 0, size);
    memcpy(ptr, (const void *)&pp, sizeof(void *) /*8ul*/ );
    return (signed long int)0;
  }
}

// ext2fs_group_first_block
// file /usr/include/ext2fs/ext2fs.h line 1719
inline unsigned int ext2fs_group_first_block(struct struct_ext2_filsys *fs, unsigned int group)
{
  unsigned long long int return_value_ext2fs_group_first_block2_1;
  return_value_ext2fs_group_first_block2_1=ext2fs_group_first_block2(fs, group);
  return (unsigned int)return_value_ext2fs_group_first_block2_1;
}

// ext2fs_group_last_block
// file /usr/include/ext2fs/ext2fs.h line 1727
inline unsigned int ext2fs_group_last_block(struct struct_ext2_filsys *fs, unsigned int group)
{
  unsigned long long int return_value_ext2fs_group_last_block2_1;
  return_value_ext2fs_group_last_block2_1=ext2fs_group_last_block2(fs, group);
  return (unsigned int)return_value_ext2fs_group_last_block2_1;
}

// ext2fs_group_of_blk
// file /usr/include/ext2fs/ext2fs.h line 1704
inline unsigned int ext2fs_group_of_blk(struct struct_ext2_filsys *fs, unsigned int blk)
{
  unsigned int return_value_ext2fs_group_of_blk2_1;
  return_value_ext2fs_group_of_blk2_1=ext2fs_group_of_blk2(fs, (unsigned long long int)blk);
  return return_value_ext2fs_group_of_blk2_1;
}

// ext2fs_group_of_ino
// file /usr/include/ext2fs/ext2fs.h line 1711
inline unsigned int ext2fs_group_of_ino(struct struct_ext2_filsys *fs, unsigned int ino)
{
  return (ino - (unsigned int)1) / fs->super->s_inodes_per_group;
}

// ext2fs_inode_data_blocks
// file /usr/include/ext2fs/ext2fs.h line 1732
inline unsigned int ext2fs_inode_data_blocks(struct struct_ext2_filsys *fs, struct ext2_inode *inode)
{
  unsigned long long int return_value_ext2fs_inode_data_blocks2_1;
  return_value_ext2fs_inode_data_blocks2_1=ext2fs_inode_data_blocks2(fs, inode);
  return (unsigned int)return_value_ext2fs_inode_data_blocks2_1;
}

// ext2fs_mark_bb_dirty
// file /usr/include/ext2fs/ext2fs.h line 1680
inline void ext2fs_mark_bb_dirty(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags | 0x20 | 0x02;
}

// ext2fs_mark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 389
inline signed int ext2fs_mark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  signed int return_value_ext2fs_mark_generic_bitmap_1;
  return_value_ext2fs_mark_generic_bitmap_1=ext2fs_mark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_mark_generic_bitmap_1;
}

// ext2fs_mark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 509
inline signed int ext2fs_mark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  signed int return_value_ext2fs_mark_generic_bmap_1;
  return_value_ext2fs_mark_generic_bmap_1=ext2fs_mark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_mark_generic_bmap_1;
}

// ext2fs_mark_changed
// file /usr/include/ext2fs/ext2fs.h line 1632
inline void ext2fs_mark_changed(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags | 0x02;
}

// ext2fs_mark_ib_dirty
// file /usr/include/ext2fs/ext2fs.h line 1672
inline void ext2fs_mark_ib_dirty(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags | 0x10 | 0x02;
}

// ext2fs_mark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 410
inline signed int ext2fs_mark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_mark_generic_bitmap_1;
  return_value_ext2fs_mark_generic_bitmap_1=ext2fs_mark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
  return return_value_ext2fs_mark_generic_bitmap_1;
}

// ext2fs_mark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 529
inline signed int ext2fs_mark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_mark_generic_bmap_1;
  return_value_ext2fs_mark_generic_bmap_1=ext2fs_mark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
  return return_value_ext2fs_mark_generic_bmap_1;
}

// ext2fs_mark_super_dirty
// file /usr/include/ext2fs/ext2fs.h line 1624
inline void ext2fs_mark_super_dirty(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags | 0x04 | 0x02;
}

// ext2fs_mark_valid
// file /usr/include/ext2fs/ext2fs.h line 1648
inline void ext2fs_mark_valid(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags | 0x08;
}

// ext2fs_resize_mem
// file /usr/include/ext2fs/ext2fs.h line 1605
inline signed long int ext2fs_resize_mem(unsigned long int old_size, unsigned long int size, void *ptr)
{
  void *p;
  memcpy((void *)&p, ptr, sizeof(void *) /*8ul*/ );
  p=realloc(p, size);
  if(p == NULL)
    return 2133571398L;

  else
  {
    memcpy(ptr, (const void *)&p, sizeof(void *) /*8ul*/ );
    return (signed long int)0;
  }
}

// ext2fs_swab16
// file /usr/include/ext2fs/bitops.h line 370
inline unsigned short int ext2fs_swab16(unsigned short int val)
{
  return (unsigned short int)((signed int)val >> 8 | (signed int)(unsigned short int)((signed int)val << 8));
}

// ext2fs_swab32
// file /usr/include/ext2fs/bitops.h line 375
inline unsigned int ext2fs_swab32(unsigned int val)
{
  return val >> 24 | val >> 8 & (unsigned int)0xFF00 | val << 8 & (unsigned int)0xFF0000 | val << 24;
}

// ext2fs_swab64
// file /usr/include/ext2fs/bitops.h line 383
inline unsigned long long int ext2fs_swab64(unsigned long long int val)
{
  unsigned int return_value_ext2fs_swab32_1;
  return_value_ext2fs_swab32_1=ext2fs_swab32((unsigned int)(val >> 32));
  unsigned int return_value_ext2fs_swab32_2;
  return_value_ext2fs_swab32_2=ext2fs_swab32((unsigned int)(val & 0xFFFFFFFFUL));
  return (unsigned long int)return_value_ext2fs_swab32_1 | (unsigned long long int)return_value_ext2fs_swab32_2 << 32;
}

// ext2fs_test_bb_dirty
// file /usr/include/ext2fs/ext2fs.h line 1696
inline signed int ext2fs_test_bb_dirty(struct struct_ext2_filsys *fs)
{
  return fs->flags & 0x20;
}

// ext2fs_test_block_bitmap
// file /usr/include/ext2fs/bitops.h line 403
inline signed int ext2fs_test_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  signed int return_value_ext2fs_test_generic_bitmap_1;
  return_value_ext2fs_test_generic_bitmap_1=ext2fs_test_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_test_generic_bitmap_1;
}

// ext2fs_test_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 522
inline signed int ext2fs_test_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  signed int return_value_ext2fs_test_generic_bmap_1;
  return_value_ext2fs_test_generic_bmap_1=ext2fs_test_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_test_generic_bmap_1;
}

// ext2fs_test_changed
// file /usr/include/ext2fs/ext2fs.h line 1640
inline signed int ext2fs_test_changed(struct struct_ext2_filsys *fs)
{
  return fs->flags & 0x02;
}

// ext2fs_test_ib_dirty
// file /usr/include/ext2fs/ext2fs.h line 1688
inline signed int ext2fs_test_ib_dirty(struct struct_ext2_filsys *fs)
{
  return fs->flags & 0x10;
}

// ext2fs_test_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 424
inline signed int ext2fs_test_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_test_generic_bitmap_1;
  return_value_ext2fs_test_generic_bitmap_1=ext2fs_test_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
  return return_value_ext2fs_test_generic_bitmap_1;
}

// ext2fs_test_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 543
inline signed int ext2fs_test_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_test_generic_bmap_1;
  return_value_ext2fs_test_generic_bmap_1=ext2fs_test_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
  return return_value_ext2fs_test_generic_bmap_1;
}

// ext2fs_test_valid
// file /usr/include/ext2fs/ext2fs.h line 1664
inline signed int ext2fs_test_valid(struct struct_ext2_filsys *fs)
{
  return fs->flags & 0x08;
}

// ext2fs_unmark_block_bitmap
// file /usr/include/ext2fs/bitops.h line 396
inline signed int ext2fs_unmark_block_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int block)
{
  signed int return_value_ext2fs_unmark_generic_bitmap_1;
  return_value_ext2fs_unmark_generic_bitmap_1=ext2fs_unmark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_unmark_generic_bitmap_1;
}

// ext2fs_unmark_block_bitmap2
// file /usr/include/ext2fs/bitops.h line 516
inline signed int ext2fs_unmark_block_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned long long int block)
{
  signed int return_value_ext2fs_unmark_generic_bmap_1;
  return_value_ext2fs_unmark_generic_bmap_1=ext2fs_unmark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, block);
  return return_value_ext2fs_unmark_generic_bmap_1;
}

// ext2fs_unmark_inode_bitmap
// file /usr/include/ext2fs/bitops.h line 417
inline signed int ext2fs_unmark_inode_bitmap(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_unmark_generic_bitmap_1;
  return_value_ext2fs_unmark_generic_bitmap_1=ext2fs_unmark_generic_bitmap((struct ext2fs_struct_generic_bitmap *)bitmap, inode);
  return return_value_ext2fs_unmark_generic_bitmap_1;
}

// ext2fs_unmark_inode_bitmap2
// file /usr/include/ext2fs/bitops.h line 536
inline signed int ext2fs_unmark_inode_bitmap2(struct ext2fs_struct_generic_bitmap *bitmap, unsigned int inode)
{
  signed int return_value_ext2fs_unmark_generic_bmap_1;
  return_value_ext2fs_unmark_generic_bmap_1=ext2fs_unmark_generic_bmap((struct ext2fs_struct_generic_bitmap *)bitmap, (unsigned long long int)inode);
  return return_value_ext2fs_unmark_generic_bmap_1;
}

// ext2fs_unmark_valid
// file /usr/include/ext2fs/ext2fs.h line 1656
inline void ext2fs_unmark_valid(struct struct_ext2_filsys *fs)
{
  fs->flags = fs->flags & ~0x08;
}

// ext3_mkfs
// file fs_ext2.c line 92
signed int ext3_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  signed int return_value_extfs_mkfs_1;
  return_value_extfs_mkfs_1=extfs_mkfs(d, partition, 1, fsoptions);
  return return_value_extfs_mkfs_1;
}

// ext3_test
// file fs_ext2.c line 493
signed int ext3_test(char *partition)
{
  signed int return_value_extfs_test_1;
  return_value_extfs_test_1=extfs_test(partition, 1);
  return return_value_extfs_test_1;
}

// ext4_mkfs
// file fs_ext2.c line 97
signed int ext4_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  signed int return_value_extfs_mkfs_1;
  return_value_extfs_mkfs_1=extfs_mkfs(d, partition, 2, fsoptions);
  return return_value_extfs_mkfs_1;
}

// ext4_test
// file fs_ext2.c line 498
signed int ext4_test(char *partition)
{
  signed int return_value_extfs_test_1;
  return_value_extfs_test_1=extfs_test(partition, 2);
  return return_value_extfs_test_1;
}

// extfs_check_compatibility
// file fs_ext2.c line 121
signed int extfs_check_compatibility(unsigned long int compat, unsigned long int incompat, unsigned long int ro_compat)
{
  if(!((18446744073709551488ul & compat) == 0ul))
    return -1;

  else
    if(!((18446744073709488161ul & incompat) == 0ul))
      return -1;

    else
      if(!((18446744073709549696ul & ro_compat) == 0ul))
        return -1;

      else
        return 0;
}

// extfs_get_fstype_from_compat_flags
// file fs_ext2.c line 102
signed int extfs_get_fstype_from_compat_flags(unsigned int compat, unsigned int incompat, unsigned int ro_compat)
{
  signed int fstype = 0;
  if(!((4u & compat) == 0u))
    fstype = 1;

  if(!((4294967277u & incompat) == 0u) || !((4294967288u & ro_compat) == 0u))
    fstype = 1;

  if(!((4294967273u & incompat) == 0u) || !((4294967288u & ro_compat) == 0u))
    fstype = 2;

  return fstype;
}

// extfs_get_reqmntopt
// file fs_ext2.c line 503
signed int extfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    strlist_add(badopt, "nouser_xattr");
    strlist_add(badopt, "noacl");
    return 0;
  }
}

// extfs_getinfo
// file fs_ext2.c line 325
signed int extfs_getinfo(struct s_dico *d, char *devname)
{
  struct fsa_ext2_sb *super;
  unsigned int use_superblock = (unsigned int)0;
  signed int use_blocksize = 0;
  char uuid[512l];
  struct struct_ext2_filsys *fs;
  signed int origextfstype;
  char mntopt[1024l];
  char label[80l];
  unsigned int mask;
  unsigned int m;
  signed int count;
  signed int i;
  signed long int return_value_ext2fs_open_1;
  return_value_ext2fs_open_1=ext2fs_open(devname, 0x1000 | 0x8000, (signed int)use_superblock, (unsigned int)use_blocksize, unix_io_manager, &fs);
  if(!(return_value_ext2fs_open_1 == 0l))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_getinfo", 341, "ext2fs_open(%s) failed\n", devname);
    return -1;
  }

  else
  {
    super = (struct fsa_ext2_sb *)fs->super;
    memset((void *)label, 0, sizeof(char [80l]) /*80ul*/ );
    if(!(super->s_volume_name[0l] == 0))
    {
      memset((void *)label, 0, sizeof(char [80l]) /*80ul*/ );
      strncpy(label, super->s_volume_name, sizeof(char [16l]) /*16ul*/ );
    }

    dico_add_string(d, (unsigned char)0, (unsigned short int)5, label);
    memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
    uuid_unparse_lower((unsigned char *)super->s_uuid, uuid);
    dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 360, "extfs_uuid=[%s]\n", (const void *)uuid);
    dico_add_u64(d, (unsigned char)0, (unsigned short int)11, (unsigned long int)((1 << 10) << super->s_log_block_size));
    dico_add_u64(d, (unsigned char)0, (unsigned short int)10, (unsigned long int)super->s_rev_level);
    if(super->s_rev_level >= 1u)
      dico_add_u64(d, (unsigned char)0, (unsigned short int)7, (unsigned long int)super->s_inode_size);

    else
      dico_add_u64(d, (unsigned char)0, (unsigned short int)7, (unsigned long int)128);
    if((signed int)super->s_raid_stride >= 1)
    {
      dico_add_u64(d, (unsigned char)0, (unsigned short int)32, (unsigned long int)super->s_raid_stride);
      fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 377, "extfs_raid_stride: %u\n", super->s_raid_stride);
    }

    if(super->s_raid_stripe_width >= 1u)
    {
      dico_add_u64(d, (unsigned char)0, (unsigned short int)31, (unsigned long int)super->s_raid_stripe_width);
      fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 381, "extfs_raid_stripe_width: %u\n", super->s_raid_stripe_width);
    }

    signed int tmp_if_expr_2;
    if((signed int)super->s_max_mnt_count >= 1)
      tmp_if_expr_2 = (signed int)super->s_max_mnt_count;

    else
      tmp_if_expr_2 = 0;
    dico_add_u64(d, (unsigned char)0, (unsigned short int)29, (unsigned long int)tmp_if_expr_2);
    dico_add_u64(d, (unsigned char)0, (unsigned short int)30, (unsigned long int)super->s_checkinterval);
    signed int tmp_if_expr_3;
    if((signed int)super->s_max_mnt_count >= 1)
      tmp_if_expr_3 = (signed int)super->s_max_mnt_count;

    else
      tmp_if_expr_3 = 0;
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 387, "extfs_max_mount_count: %ld\n", (signed long int)tmp_if_expr_3);
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 388, "extfs_check_interval: %ld\n", (signed long int)super->s_checkinterval);
    memset((void *)mntopt, 0, sizeof(char [1024l]) /*1024ul*/ );
    count = 0;
    mask = super->s_default_mount_opts;
    if(!((96u & mask) == 0u))
    {
      const char *return_value_e2p_mntopt2string_4;
      return_value_e2p_mntopt2string_4=e2p_mntopt2string(mask & (unsigned int)0x0060);
      strlcatf(mntopt, (signed int)sizeof(char [1024l]) /*1024ul*/ , "%s", return_value_e2p_mntopt2string_4);
      count = count + 1;
    }

    i = 0;
    m = (unsigned int)1;
    for( ; !(i >= 32); m = m << 1)
    {
      if((96u & m) == 0u)
      {
        if(!((m & mask) == 0u))
        {
          signed int tmp_post_5 = count;
          count = count + 1;
          if(!(tmp_post_5 == 0))
            strlcatf(mntopt, (signed int)sizeof(char [1024l]) /*1024ul*/ , ",");

          const char *return_value_e2p_mntopt2string_6;
          return_value_e2p_mntopt2string_6=e2p_mntopt2string(m);
          strlcatf(mntopt, (signed int)sizeof(char [1024l]) /*1024ul*/ , "%s", return_value_e2p_mntopt2string_6);
        }

      }

      i = i + 1;
    }
    dico_add_string(d, (unsigned char)0, (unsigned short int)9, mntopt);
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 409, "default mount options: [%s]\n", (const void *)mntopt);
    dico_add_u64(d, (unsigned char)0, (unsigned short int)12, (unsigned long int)super->s_feature_compat);
    dico_add_u64(d, (unsigned char)0, (unsigned short int)13, (unsigned long int)super->s_feature_incompat);
    dico_add_u64(d, (unsigned char)0, (unsigned short int)14, (unsigned long int)super->s_feature_ro_compat);
    origextfstype=extfs_get_fstype_from_compat_flags((unsigned int)(unsigned long int)super->s_feature_compat, (unsigned int)(unsigned long int)super->s_feature_incompat, (unsigned int)(unsigned long int)super->s_feature_ro_compat);
    char *return_value_format_fstype_7;
    return_value_format_fstype_7=format_fstype(origextfstype);
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_getinfo", 417, "the filesystem type determined by the features is [%s]\n", return_value_format_fstype_7);
    signed int return_value_extfs_check_compatibility_8;
    return_value_extfs_check_compatibility_8=extfs_check_compatibility((unsigned long int)super->s_feature_compat, (unsigned long int)super->s_feature_incompat, (unsigned long int)super->s_feature_ro_compat);
    if(!(return_value_extfs_check_compatibility_8 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_getinfo", 421, "this filesystem has ext{2,3,4} features which are not supported by this fsarchiver version.\n");
      return -1;
    }

    else
    {
      dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
      ext2fs_close(fs);
      return 0;
    }
  }
}

// extfs_mkfs
// file fs_ext2.c line 140
signed int extfs_mkfs(struct s_dico *d, char *partition, signed int extfstype, char *fsoptions)
{
  struct s_strlist strfeatures;
  unsigned long int features_tab[3l];
  unsigned long int fsextrevision;
  signed int origextfstype;
  char buffer[2048l];
  char command[2048l];
  char options[2048l];
  char temp[1024l];
  char progname[64l];
  unsigned long int e2fstoolsver;
  signed int compat_type;
  unsigned long int temp64;
  signed int exitst;
  signed int ret = 0;
  signed int res;
  signed int i;
  memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
  snprintf(progname, sizeof(char [64l]) /*64ul*/ , "mke2fs");
  strlist_init(&strfeatures);
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "%s -V", (const void *)progname);
  signed int return_value_dico_get_u64_2;
  signed int return_value_dico_get_string_4;
  unsigned long int return_value_strlen_3;
  signed int return_value_dico_get_u64_5;
  signed int return_value_dico_get_u64_6;
  signed int return_value_dico_get_u64_7;
  signed int return_value_dico_get_u64_8;
  signed int return_value_dico_get_u64_10;
  signed int return_value_extfs_check_compatibility_12;
  char *return_value_format_fstype_13;
  char *return_value_format_fstype_14;
  signed int return_value_strlist_count_15;
  char *return_value_format_prog_version_16;
  char *return_value_format_prog_version_17;
  signed int return_value_dico_get_u64_19;
  signed int return_value_dico_get_u64_20;
  signed int return_value_exec_command_21;
  signed int return_value_dico_get_string_23;
  unsigned long int return_value_strlen_22;
  signed int return_value_dico_get_string_25;
  unsigned long int return_value_strlen_24;
  signed int return_value_dico_get_u64_26;
  signed int return_value_dico_get_u64_27;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 166, "%s not found. please install a recent e2fsprogs on your system or check the PATH.\n", (const void *)progname);
    ret = -1;
  }

  else
  {
    e2fstoolsver=check_prog_version(progname);
    return_value_dico_get_u64_2=dico_get_u64(d, (unsigned char)0, (unsigned short int)10, &fsextrevision);
    if(!(return_value_dico_get_u64_2 == 0))
      fsextrevision = (unsigned long int)1;

    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -q ");
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -r %d ", (signed int)fsextrevision);
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
    return_value_dico_get_string_4=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_4 == 0)
    {
      return_value_strlen_3=strlen(buffer);
      if(return_value_strlen_3 >= 1ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -L '%.16s' ", (const void *)buffer);

    }

    return_value_dico_get_u64_5=dico_get_u64(d, (unsigned char)0, (unsigned short int)11, &temp64);
    if(return_value_dico_get_u64_5 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -b %ld ", (signed long int)temp64);

    return_value_dico_get_u64_6=dico_get_u64(d, (unsigned char)0, (unsigned short int)7, &temp64);
    if(return_value_dico_get_u64_6 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -I %ld ", (signed long int)temp64);

    return_value_dico_get_u64_7=dico_get_u64(d, (unsigned char)0, (unsigned short int)12, &features_tab[(signed long int)0]);
    _Bool tmp_if_expr_9;
    if(!(return_value_dico_get_u64_7 == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_dico_get_u64_8=dico_get_u64(d, (unsigned char)0, (unsigned short int)13, &features_tab[(signed long int)1]);
      tmp_if_expr_9 = return_value_dico_get_u64_8 != 0 ? (_Bool)1 : (_Bool)0;
    }
    _Bool tmp_if_expr_11;
    if(tmp_if_expr_9)
      tmp_if_expr_11 = (_Bool)1;

    else
    {
      return_value_dico_get_u64_10=dico_get_u64(d, (unsigned char)0, (unsigned short int)14, &features_tab[(signed long int)2]);
      tmp_if_expr_11 = return_value_dico_get_u64_10 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_11)
    {
      features_tab[(signed long int)0] = (unsigned long int)(0x0010 | 0x0020);
      features_tab[(signed long int)1] = (unsigned long int)0x0002;
      features_tab[(signed long int)2] = (unsigned long int)0x0001;
    }

    return_value_extfs_check_compatibility_12=extfs_check_compatibility(features_tab[(signed long int)0], features_tab[(signed long int)1], features_tab[(signed long int)2]);
    if(!(return_value_extfs_check_compatibility_12 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 206, "this filesystem has ext{2,3,4} features which are not supported by this fsarchiver version.\n");
      return -1;
    }

    origextfstype=extfs_get_fstype_from_compat_flags((unsigned int)features_tab[(signed long int)0], (unsigned int)features_tab[(signed long int)1], (unsigned int)features_tab[(signed long int)2]);
    return_value_format_fstype_13=format_fstype(origextfstype);
    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 213, "the filesystem type determined by the original filesystem features is [%s]\n", return_value_format_fstype_13);
    i = 0;
    for( ; !(mkfeatures[(signed long int)i].name == ((char *)NULL)); i = i + 1)
    {
      compat_type = mkfeatures[(signed long int)i].compat;
      if(!(extfstype >= mkfeatures[(signed long int)i].firstfs))
        features_tab[(signed long int)compat_type] = features_tab[(signed long int)compat_type] & (unsigned long int)~mkfeatures[(signed long int)i].mask;

    }
    return_value_format_fstype_14=format_fstype(extfstype);
    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 227, "the filesystem type to create considering the command options is [%s]\n", return_value_format_fstype_14);
    if(origextfstype == 0 && extfstype >= 1)
    {
      fsextrevision = (unsigned long int)1;
      features_tab[(signed long int)0] = features_tab[(signed long int)0] | (unsigned long int)0x0004;
    }

    if(extfstype >= 2 && !(origextfstype >= 2))
    {
      fsextrevision = (unsigned long int)1;
      features_tab[(signed long int)1] = features_tab[(signed long int)1] | (unsigned long int)0x0040;
    }

    i = 0;
    for( ; !(mkfeatures[(signed long int)i].name == ((char *)NULL)); i = i + 1)
      if(e2fstoolsver >= mkfeatures[(signed long int)i].firste2p)
      {
        compat_type = mkfeatures[(signed long int)i].compat;
        if(!((features_tab[(signed long int)compat_type] & (unsigned long int)mkfeatures[(signed long int)i].mask) == 0ul))
        {
          fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 244, "--> feature [%s]=YES\n", mkfeatures[(signed long int)i].name);
          strlist_add(&strfeatures, mkfeatures[(signed long int)i].name);
        }

        else
        {
          fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 248, "--> feature [%s]=NO\n", mkfeatures[(signed long int)i].name);
          snprintf(temp, sizeof(char [1024l]) /*1024ul*/ , "^%s", mkfeatures[(signed long int)i].name);
          strlist_add(&strfeatures, temp);
        }
      }

    if(!(fsextrevision == 0ul))
    {
      return_value_strlist_count_15=strlist_count(&strfeatures);
      if(return_value_strlist_count_15 >= 1)
      {
        strlist_merge(&strfeatures, temp, (signed int)sizeof(char [1024l]) /*1024ul*/ , (char)44);
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -O %s ", (const void *)temp);
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 259, "features: mkfs_options+=[-O %s]\n", (const void *)temp);
      }

    }

    return_value_format_prog_version_16=format_prog_version(e2fstoolsver, temp, (signed int)sizeof(char [1024l]) /*1024ul*/ );
    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 263, "mke2fs version detected: %s\n", return_value_format_prog_version_16);
    return_value_format_prog_version_17=format_prog_version(e2fsprogs_minver[(signed long int)extfstype], temp, (signed int)sizeof(char [1024l]) /*1024ul*/ );
    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 264, "mke2fs version required: %s\n", return_value_format_prog_version_17);
    if(!(e2fstoolsver >= e2fsprogs_minver[(signed long int)extfstype]))
    {
      char *return_value_format_prog_version_18;
      return_value_format_prog_version_18=format_prog_version(e2fsprogs_minver[(signed long int)extfstype], temp, (signed int)sizeof(char [1024l]) /*1024ul*/ );
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 267, "mke2fs was found but is too old, please upgrade to a version %s or more recent.\n", return_value_format_prog_version_18);
      ret = -1;
      goto extfs_mkfs_cleanup;
    }

    return_value_dico_get_u64_19=dico_get_u64(d, (unsigned char)0, (unsigned short int)32, &temp64);
    if(return_value_dico_get_u64_19 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -E stride=%ld ", (signed long int)temp64);

    return_value_dico_get_u64_20=dico_get_u64(d, (unsigned char)0, (unsigned short int)31, &temp64);
    if(return_value_dico_get_u64_20 == 0)
    {
      if(e2fstoolsver >= 75783ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -E stripe-width=%ld ", (signed long int)temp64);

    }

    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mkfs", 279, "exec: %s\n", (const void *)command);
    return_value_exec_command_21=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "%s %s %s", (const void *)progname, partition, (const void *)options);
    if(!(return_value_exec_command_21 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 281, "command [%s] failed with return status=%d\n", (const void *)command, exitst);
      ret = -1;
    }

    else
    {
      memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
      return_value_dico_get_string_23=dico_get_string(d, (unsigned char)0, (unsigned short int)6, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
      if(return_value_dico_get_string_23 == 0)
      {
        return_value_strlen_22=strlen(buffer);
        if(return_value_strlen_22 == 36ul)
          strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -U %s ", (const void *)buffer);

      }

      return_value_dico_get_string_25=dico_get_string(d, (unsigned char)0, (unsigned short int)9, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
      if(return_value_dico_get_string_25 == 0)
      {
        return_value_strlen_24=strlen(buffer);
        if(return_value_strlen_24 >= 1ul)
          strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -o %s ", (const void *)buffer);

      }

      return_value_dico_get_u64_26=dico_get_u64(d, (unsigned char)0, (unsigned short int)29, &temp64);
      if(return_value_dico_get_u64_26 == 0)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -c %ld ", (signed long int)temp64);

      return_value_dico_get_u64_27=dico_get_u64(d, (unsigned char)0, (unsigned short int)30, &temp64);
      if(return_value_dico_get_u64_27 == 0)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -i %ldd ", (signed long int)(temp64 / (unsigned long int)86400L));

      if(!(options[0l] == 0))
      {
        signed int return_value_exec_command_28;
        return_value_exec_command_28=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "tune2fs %s %s", partition, (const void *)options);
        if(!(return_value_exec_command_28 == 0) || !(exitst == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 303, "command [%s] failed with return status=%d\n", (const void *)command, exitst);
          ret = -1;
        }

        else
          if(extfstype == 2 && !(e2fstoolsver >= 76036ul))
          {
            res=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "e2fsck -fy %s", partition);
            if((exitst == 0 || exitst == 1) && res == 0)
              goto __CPROVER_DUMP_L35;

            fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ext2.c", "extfs_mkfs", 313, "command [%s] failed with return status=%d\n", (const void *)command, exitst);
            ret = -1;
          }

          else

            __CPROVER_DUMP_L35:
              ;
      }

    }
  }

extfs_mkfs_cleanup:
  ;
  strlist_destroy(&strfeatures);
  return ret;
}

// extfs_mount
// file fs_ext2.c line 433
signed int extfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  unsigned int use_superblock = (unsigned int)0;
  signed int use_blocksize = 0;
  struct struct_ext2_filsys *fs;
  signed int origextfstype;
  char fsname[32l];
  fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_mount", 441, "extfs_mount(partition=[%s], mnt=[%s], fsbuf=[%s])\n", partition, mntbuf, fsbuf);
  signed long int return_value_ext2fs_open_1;
  return_value_ext2fs_open_1=ext2fs_open(partition, 0x1000 | 0x8000, (signed int)use_superblock, (unsigned int)use_blocksize, unix_io_manager, &fs);
  if(!(return_value_ext2fs_open_1 == 0l))
  {
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_mount", 444, "ext2fs_open(%s) failed\n", partition);
    return -1;
  }

  else
  {
    origextfstype=extfs_get_fstype_from_compat_flags((unsigned int)(unsigned long int)fs->super->s_feature_compat, (unsigned int)(unsigned long int)fs->super->s_feature_incompat, (unsigned int)(unsigned long int)fs->super->s_feature_ro_compat);
    char *return_value_format_fstype_2;
    return_value_format_fstype_2=format_fstype(origextfstype);
    snprintf(fsname, sizeof(char [32l]) /*32ul*/ , "%s", return_value_format_fstype_2);
    fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ext2.c", "extfs_mount", 451, "the filesystem of [%s] type determined by the features is [%s]\n", partition, (const void *)fsname);
    ext2fs_close(fs);
    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(fsname, fsbuf);
    if(!(return_value_strcmp_3 == 0))
    {
      fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_mount", 456, "extfs_mount: the filesystem requested [%s] does not match the filesystem detected [%s]\n", fsbuf, (const void *)fsname);
      return -1;
    }

    else
    {
      signed int return_value_generic_mount_4;
      return_value_generic_mount_4=generic_mount(partition, mntbuf, fsbuf, "user_xattr,acl", flags);
      return return_value_generic_mount_4;
    }
  }
}

// extfs_test
// file fs_ext2.c line 468
signed int extfs_test(char *partition, signed int extfstype)
{
  unsigned int use_superblock = (unsigned int)0;
  signed int use_blocksize = 0;
  signed int extfstypedetected;
  struct struct_ext2_filsys *fs;
  signed long int return_value_ext2fs_open_1;
  return_value_ext2fs_open_1=ext2fs_open(partition, 0x1000 | 0x8000, (signed int)use_superblock, (unsigned int)use_blocksize, unix_io_manager, &fs);
  if(!(return_value_ext2fs_open_1 == 0l))
    return 0;

  else
  {
    extfstypedetected=extfs_get_fstype_from_compat_flags((unsigned int)(unsigned long int)fs->super->s_feature_compat, (unsigned int)(unsigned long int)fs->super->s_feature_incompat, (unsigned int)(unsigned long int)fs->super->s_feature_ro_compat);
    char *return_value_format_fstype_2;
    return_value_format_fstype_2=format_fstype(extfstypedetected);
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_ext2.c", "extfs_test", 480, "the filesystem type determined by the extfs features is [%s]\n", return_value_format_fstype_2);
    ext2fs_close(fs);
    return (signed int)(extfstypedetected == extfstype);
  }
}

// extfs_umount
// file fs_ext2.c line 463
signed int extfs_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

// extract_basename
// file common.h line 34
signed int extract_basename(char *filepath, char *basenamebuf, signed int basenamebufsize)
{
  signed int i = 0;
  for( ; !(filepath[(signed long int)i] == 0); i = i + 1)
    ;
  for( ; i >= 1; i = i - 1)
  {
    if((signed int)filepath[(signed long int)i] == 47)
      break;

    if((signed int)filepath[(signed long int)(i + -1)] == 47)
      break;

  }
  snprintf(basenamebuf, (unsigned long int)basenamebufsize, "%s", &filepath[(signed long int)i]);
  return 0;
}

// extract_dirpath
// file common.h line 33
signed int extract_dirpath(char *filepath, char *dirbuf, signed int dirbufsize)
{
  signed int i;
  snprintf(dirbuf, (unsigned long int)dirbufsize, "%s", filepath);
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(i >= dirbufsize))
      tmp_if_expr_1 = (signed int)dirbuf[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  while(i >= 0)
  {
    if((signed int)dirbuf[(signed long int)i] == 47)
      break;

    signed int tmp_post_2 = i;
    i = i - 1;
    dirbuf[(signed long int)tmp_post_2] = (char)0;
  }
  if(i >= 1)
  {
    if((signed int)dirbuf[(signed long int)i] == 47)
      dirbuf[(signed long int)i] = (char)0;

  }

  return 0;
}

// extractar_extract_read_objects
// file oper_restore.c line 975
signed int extractar_extract_read_objects(struct s_extractar *exar, signed int *errors, char *destdir, signed int fstype)
{
  char magic[5l];
  struct s_dico *dicoattr = (struct s_dico *)(void *)0;
  signed int headerisend;
  signed int headerisobj;
  unsigned short int checkfsid;
  signed int curerr;
  signed int type;
  signed int res;
  memset((void *)magic, 0, sizeof(char [5l]) /*5ul*/ );
  *errors = 0;
  signed long int return_value_queue_dequeue_header_8;
  _Bool tmp_if_expr_2;
  signed int return_value_get_abort_1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed long int return_value_queue_check_next_item_3;
    return_value_queue_check_next_item_3=queue_check_next_item(&g_queue, &type, magic);
    if(!(return_value_queue_check_next_item_3 == 0l))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_extract_read_objects", 995, "queue_check_next_item() failed: cannot read object from archive\n");
      return -1;
    }

    signed int return_value_memcmp_4;
    return_value_memcmp_4=memcmp((const void *)magic, (const void *)"ObJt", (unsigned long int)4);
    headerisobj = (signed int)(return_value_memcmp_4 == 0);
    signed int return_value_memcmp_5;
    return_value_memcmp_5=memcmp((const void *)magic, (const void *)"DaEn", (unsigned long int)4);
    headerisend = (signed int)(return_value_memcmp_5 == 0);
    if(!(headerisend == 1) && !(headerisobj == 1))
    {
      char *tmp_if_expr_6;
      if(type == 2)
        tmp_if_expr_6 = magic;

      else
        tmp_if_expr_6 = "-block-";
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_extract_read_objects", 1005, "unexpected header found in archive, skipping it: type=%d, magic=[%s]\n", type, tmp_if_expr_6);
      signed long int return_value_queue_destroy_first_item_7;
      return_value_queue_destroy_first_item_7=queue_destroy_first_item(&g_queue);
      if(!(return_value_queue_destroy_first_item_7 == 0l))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_extract_read_objects", 1007, "queue_destroy_first_item() failed: cannot read object from archive\n");
        return -1;
      }

    }

    if(!(headerisend == 1) && !(headerisobj == 1))
      goto __CPROVER_DUMP_L1;

    if(headerisobj == 1)
    {
      do
      {
        return_value_queue_dequeue_header_8=queue_dequeue_header(&g_queue, &dicoattr, magic, &checkfsid);
        if(return_value_queue_dequeue_header_8 >= 1l)
          break;

        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_extract_read_objects", 1017, "queue_dequeue_header() failed\n");
        *errors = *errors + 1;
      }
      while((_Bool)1);
      if((signed int)checkfsid == exar->fsid)
      {
        res=extractar_restore_object(exar, &curerr, destdir, dicoattr, fstype);
        if(!(res == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_extract_read_objects", 1024, "restore_object() failed with res=%d\n", res);
          return -1;
        }

      }

      else
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_extract_read_objects", 1030, "restore_object(): object has a wrong filesystem id: found=[%d], expected=[%d]\n", checkfsid, exar->fsid);
        *errors = *errors + 1;
      }
    }

    if(!(headerisend == 1))
    {
      return_value_get_abort_1=get_abort();
      tmp_if_expr_2 = return_value_get_abort_1 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
  }
  while(tmp_if_expr_2);
  return 0;
}

// extractar_filesystem_extract
// file oper_restore.c line 1173
signed int extractar_filesystem_extract(struct s_extractar *exar, struct s_dico *dicofs, struct s_strdico *dicocmdline)
{
  char filesystem[128l];
  char text[128l];
  char fsbuf[128l];
  char magic[5l];
  char mountinfo[4096l];
  char partition[1024l];
  char mkfsoptions[1024l];
  char tempbuf[1024l];
  struct s_dico *dicobegin = (struct s_dico *)(void *)0;
  struct s_dico *dicoend = (struct s_dico *)(void *)0;
  char mntbuf[4096l];
  unsigned long int fsbytestotal;
  unsigned long int fsbytesused;
  char optbuf[128l];
  signed int readwrite;
  signed int errors = 0;
  unsigned long int minver;
  unsigned long int curver;
  signed int fstype;
  signed int ret = 0;
  signed int res;
  memset((void *)magic, 0, sizeof(char [5l]) /*5ul*/ );
  memset((void *)partition, 0, sizeof(char [1024l]) /*1024ul*/ );
  signed int return_value_strdico_get_string_1;
  return_value_strdico_get_string_1=strdico_get_string(dicocmdline, partition, (signed int)sizeof(char [1024l]) /*1024ul*/ , "dest");
  signed int return_value_dico_get_string_5;
  _Bool return_value_get_interrupted_17;
  signed int return_value_memcmp_16;
  if(!(return_value_strdico_get_string_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1203, "strdico_get_string(dicocmdline, 'dest') failed\n");
    return -1;
  }

  else
  {
    signed int return_value_dico_get_u64_2;
    return_value_dico_get_u64_2=dico_get_u64(dicofs, (unsigned char)0, (unsigned short int)25, &minver);
    if(!(return_value_dico_get_u64_2 == 0))
      minver = (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0));

    curver = (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)22 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0));
    fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1212, "Current fsarchiver version: %d.%d.%d.%d\n", (signed int)((unsigned long int)curver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 0 & (unsigned long int)0xFFFF));
    fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1214, "Minimum fsarchiver version for that filesystem: %d.%d.%d.%d\n", (signed int)((unsigned long int)minver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 0 & (unsigned long int)0xFFFF));
    if(!(curver >= minver))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1218, "This filesystem can only be restored with fsarchiver %d.%d.%d.%d or more recent\n", (signed int)((unsigned long int)minver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)minver >> 0 & (unsigned long int)0xFFFF));
      return -1;
    }

    else
    {
      res=generic_get_mntinfo(partition, &readwrite, mntbuf, (signed int)sizeof(char [4096l]) /*4096ul*/ , optbuf, (signed int)sizeof(char [128l]) /*128ul*/ , fsbuf, (signed int)sizeof(char [128l]) /*128ul*/ );
      if(res == 0)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1226, "partition [%s] is mounted on [%s].\ncannot restore an archive to a partition which is mounted, unmount it first: umount %s\n", (const void *)partition, (const void *)mntbuf, (const void *)mntbuf);
        return -1;
      }

      else
      {
        signed long int return_value_queue_dequeue_header_3;
        return_value_queue_dequeue_header_3=queue_dequeue_header(&g_queue, &dicobegin, magic, (unsigned short int *)(void *)0);
        if(!(return_value_queue_dequeue_header_3 >= 1l))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1232, "queue_dequeue_header() failed: cannot read file system dico\n");
          return -1;
        }

        else
        {
          dico_destroy(dicobegin);
          signed int return_value_memcmp_4;
          return_value_memcmp_4=memcmp((const void *)magic, (const void *)"FsYs", (unsigned long int)4);
          if(!(return_value_memcmp_4 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1238, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"FsYs");
            return -1;
          }

          else
          {
            signed int return_value_strdico_get_string_6;
            return_value_strdico_get_string_6=strdico_get_string(dicocmdline, tempbuf, (signed int)sizeof(char [1024l]) /*1024ul*/ , "mkfs");
            if(return_value_strdico_get_string_6 == 0)
              snprintf(filesystem, sizeof(char [128l]) /*128ul*/ , "%s", (const void *)tempbuf);

            else
            {
              return_value_dico_get_string_5=dico_get_string(dicofs, (unsigned char)0, (unsigned short int)1, filesystem, (unsigned short int)sizeof(char [128l]) /*128ul*/ );
              if(!(return_value_dico_get_string_5 >= 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1248, "dico_get_string(FSYSHEADKEY_FILESYSTEM) failed\n");
                return -1;
              }

            }
            signed int return_value_strdico_get_string_7;
            return_value_strdico_get_string_7=strdico_get_string(dicocmdline, mkfsoptions, (signed int)sizeof(char [1024l]) /*1024ul*/ , "mkfsopt");
            if(!(return_value_strdico_get_string_7 == 0))
              fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1255, "strdico_get_string(dicocmdline, 'mkfsopt') doesn't exist\n");

            signed int return_value_dico_get_u64_8;
            return_value_dico_get_u64_8=dico_get_u64(dicofs, (unsigned char)0, (unsigned short int)3, &fsbytestotal);
            if(!(return_value_dico_get_u64_8 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1259, "dico_get_string(FSYSHEADKEY_BYTESTOTAL) failed\n");
              return -1;
            }

            else
            {
              signed int return_value_dico_get_u64_9;
              return_value_dico_get_u64_9=dico_get_u64(dicofs, (unsigned char)0, (unsigned short int)4, &fsbytesused);
              if(!(return_value_dico_get_u64_9 == 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1264, "dico_get_string(FSYSHEADKEY_BYTESUSED) failed\n");
                return -1;
              }

              else
              {
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1268, "filesystem=[%s]\n", (const void *)filesystem);
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1269, "filesystemoptions=[%s]\n", (const void *)mkfsoptions);
                char *return_value_format_size_10;
                return_value_format_size_10=format_size(fsbytestotal, text, (signed int)sizeof(char [128l]) /*128ul*/ , (char)104);
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1270, "fsbytestotal=[%s]\n", return_value_format_size_10);
                char *return_value_format_size_11;
                return_value_format_size_11=format_size(fsbytesused, text, (signed int)sizeof(char [128l]) /*128ul*/ , (char)104);
                fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1271, "fsbytesused=[%s]\n", return_value_format_size_11);
                signed int return_value_generic_get_fstype_12;
                return_value_generic_get_fstype_12=generic_get_fstype(filesystem, &fstype);
                if(!(return_value_generic_get_fstype_12 == 0))
                {
                  fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1275, "filesystem [%s] is not supported by fsarchiver\n", (const void *)filesystem);
                  return -1;
                }

                else
                {
                  signed int return_value;
                  return_value=filesys[(signed long int)fstype].mkfs(dicofs, partition, mkfsoptions);
                  if(!(return_value == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1281, "cannot format the filesystem %s on partition %s\n", (const void *)filesystem, (const void *)partition);
                    return -1;
                  }

                  else
                  {
                    mkdir_recursive(mntbuf);
                    generate_random_tmpdir(mntbuf, (signed int)sizeof(char [4096l]) /*4096ul*/ , 0);
                    mkdir_recursive(mntbuf);
                    signed int return_value_dico_get_string_13;
                    return_value_dico_get_string_13=dico_get_string(dicofs, (unsigned char)0, (unsigned short int)26, mountinfo, (unsigned short int)sizeof(char [4096l]) /*4096ul*/ );
                    if(!(return_value_dico_get_string_13 >= 0))
                      memset((void *)mountinfo, 0, sizeof(char [4096l]) /*4096ul*/ );

                    fsaprintf(1, (_Bool)0, 1 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1292, "Mount information: [%s]\n", (const void *)mountinfo);
                    signed int return_value_1;
                    return_value_1=filesys[(signed long int)fstype].mount(partition, mntbuf, filesys[(signed long int)fstype].name, 0, mountinfo);
                    if(!(return_value_1 == 0))
                    {
                      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1294, "partition [%s] cannot be mounted on %s. cannot continue.\n", (const void *)partition, (const void *)mntbuf);
                      return -1;
                    }

                    else
                    {
                      signed int return_value_extractar_extract_read_objects_14;
                      return_value_extractar_extract_read_objects_14=extractar_extract_read_objects(exar, &errors, mntbuf, fstype);
                      if(!(return_value_extractar_extract_read_objects_14 == 0))
                      {
                        fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1299, "extract_read_objects(%s) failed\n", (const void *)mntbuf);
                        ret = -1;
                      }

                      else
                        if(errors >= 1)
                        {
                          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "extractar_filesystem_extract", 1304, "extract_read_objects(%s) worked with errors\n", (const void *)mntbuf);
                          ret = -1;
                        }

                      signed long int return_value_queue_dequeue_header_15;
                      return_value_queue_dequeue_header_15=queue_dequeue_header(&g_queue, &dicoend, magic, (unsigned short int *)(void *)0);
                      if(!(return_value_queue_dequeue_header_15 >= 1l))
                      {
                        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1311, "queue_dequeue_header() failed\n");
                        ret = -1;
                      }

                      else
                      {
                        dico_destroy(dicoend);
                        return_value_get_interrupted_17=get_interrupted();
                        if((signed int)return_value_get_interrupted_17 == 0)
                        {
                          return_value_memcmp_16=memcmp((const void *)magic, (const void *)"DaEn", (unsigned long int)4);
                          if(!(return_value_memcmp_16 == 0))
                            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1318, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"DaEn");

                        }

                      }

                    filesystem_extract_umount:
                      ;
                      signed int return_value_2;
                      return_value_2=filesys[(signed long int)fstype].umount(partition, mntbuf);
                      if(!(return_value_2 == 0))
                      {
                        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_filesystem_extract", 1324, "cannot umount %s\n", (const void *)mntbuf);
                        ret = -1;
                      }

                      else
                        rmdir(mntbuf);
                      return ret;
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

// extractar_listing_print_file
// file oper_restore.c line 168
signed int extractar_listing_print_file(struct s_extractar *exar, signed int objtype, char *relpath)
{
  char strprogress[256l];
  unsigned long int progress;
  memset((void *)strprogress, 0, sizeof(char [256l]) /*256ul*/ );
  if(exar->cost_global >= 1ul)
  {
    progress = (exar->cost_current * (unsigned long int)100) / exar->cost_global;
    if(!(progress >= 101ul))
      snprintf(strprogress, sizeof(char [256l]) /*256ul*/ , "[%3d%%]", (signed int)progress);

  }

  char *return_value_get_objtype_name_1;
  return_value_get_objtype_name_1=get_objtype_name(objtype);
  fsaprintf(1, (_Bool)0, 1 >= 3, "oper_restore.c", "extractar_listing_print_file", 180, "-[%.2d]%s[%s] %s\n", exar->fsid, (const void *)strprogress, return_value_get_objtype_name_1, relpath);
  return 0;
}

// extractar_read_mainhead
// file oper_restore.c line 1041
signed int extractar_read_mainhead(struct s_extractar *exar, struct s_dico **dicomainhead)
{
  unsigned char bufcheckclear[4104l];
  unsigned char bufcheckcrypt[4104l];
  char magic[5l];
  unsigned short int cryptbufsize;
  unsigned char md5sumar[16l];
  unsigned char md5sumnew[16l];
  unsigned long int clearsize;
  signed int passlen;
  unsigned int temp32;
  /* assertion exar */
  assert(exar != ((struct s_extractar *)NULL));
  /* assertion dicomainhead */
  assert(dicomainhead != ((struct s_dico **)NULL));
  memset((void *)magic, 0, sizeof(char [5l]) /*5ul*/ );
  signed long int return_value_queue_dequeue_header_1;
  return_value_queue_dequeue_header_1=queue_dequeue_header(&g_queue, dicomainhead, magic, (unsigned short int *)(void *)0);
  signed int return_value_dico_get_u64_4;
  signed int return_value_strcmp_16;
  signed int return_value_strcmp_15;
  if(!(return_value_queue_dequeue_header_1 >= 1l))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1060, "queue_dequeue_header() failed: cannot read main header\n");
    return -1;
  }

  else
  {
    signed int return_value_memcmp_2;
    return_value_memcmp_2=memcmp((const void *)magic, (const void *)"ArCh", (unsigned long int)4);
    if(!(return_value_memcmp_2 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1065, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"ArCh");
      return -1;
    }

    else
    {
      signed int return_value_dico_get_u32_3;
      return_value_dico_get_u32_3=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)6, &exar->ai.archtype);
      if(!(return_value_dico_get_u32_3 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1070, "cannot find MAINHEADKEY_ARCHTYPE in main-header\n");
        return -1;
      }

      else
      {
        if(exar->ai.archtype == 1u)
        {
          return_value_dico_get_u64_4=dico_get_u64(*dicomainhead, (unsigned char)0, (unsigned short int)7, &exar->ai.fscount);
          if(!(return_value_dico_get_u64_4 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1075, "cannot find MAINHEADKEY_FSCOUNT in main-header\n");
            return -1;
          }

        }

        signed int return_value_dico_get_u32_5;
        return_value_dico_get_u32_5=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)3, &exar->ai.archid);
        if(!(return_value_dico_get_u32_5 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1080, "cannot find MAINHEADKEY_ARCHIVEID in main-header\n");
          return -1;
        }

        else
        {
          signed int return_value_dico_get_data_6;
          return_value_dico_get_data_6=dico_get_data(*dicomainhead, (unsigned char)0, (unsigned short int)1, (void *)exar->ai.filefmt, (unsigned short int)32, (unsigned short int *)(void *)0);
          if(!(return_value_dico_get_data_6 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1085, "cannot find MAINHEADKEY_FILEFORMATVER in main-header\n");
            return -1;
          }

          else
          {
            signed int return_value_dico_get_data_7;
            return_value_dico_get_data_7=dico_get_data(*dicomainhead, (unsigned char)0, (unsigned short int)2, (void *)exar->ai.creatver, (unsigned short int)32, (unsigned short int *)(void *)0);
            if(!(return_value_dico_get_data_7 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1090, "cannot find MAINHEADKEY_PROGVERCREAT in main-header\n");
              return -1;
            }

            else
            {
              signed int return_value_dico_get_data_8;
              return_value_dico_get_data_8=dico_get_data(*dicomainhead, (unsigned char)0, (unsigned short int)5, (void *)exar->ai.label, (unsigned short int)512, (unsigned short int *)(void *)0);
              if(!(return_value_dico_get_data_8 == 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1095, "cannot find MAINHEADKEY_ARCHLABEL in main-header\n");
                return -1;
              }

              else
              {
                signed int return_value_dico_get_u32_9;
                return_value_dico_get_u32_9=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)8, &exar->ai.compalgo);
                if(!(return_value_dico_get_u32_9 == 0))
                {
                  fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1100, "cannot find MAINHEADKEY_COMPRESSALGO in main-header\n");
                  return -1;
                }

                else
                {
                  signed int return_value_dico_get_u32_10;
                  return_value_dico_get_u32_10=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)10, &exar->ai.cryptalgo);
                  if(!(return_value_dico_get_u32_10 == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1105, "cannot find MAINHEADKEY_ENCRYPTALGO in main-header\n");
                    return -1;
                  }

                  else
                  {
                    signed int return_value_dico_get_u32_11;
                    return_value_dico_get_u32_11=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)9, &exar->ai.complevel);
                    if(!(return_value_dico_get_u32_11 == 0))
                    {
                      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1110, "cannot find MAINHEADKEY_COMPRESSLEVEL in main-header\n");
                      return -1;
                    }

                    else
                    {
                      signed int return_value_dico_get_u32_12;
                      return_value_dico_get_u32_12=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)13, &exar->ai.fsacomp);
                      if(!(return_value_dico_get_u32_12 == 0))
                      {
                        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1115, "cannot find MAINHEADKEY_FSACOMPLEVEL in main-header\n");
                        return -1;
                      }

                      else
                      {
                        signed int return_value_dico_get_u64_13;
                        return_value_dico_get_u64_13=dico_get_u64(*dicomainhead, (unsigned char)0, (unsigned short int)4, &exar->ai.creattime);
                        if(!(return_value_dico_get_u64_13 == 0))
                        {
                          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1120, "cannot find MAINHEADKEY_CREATTIME in main-header\n");
                          return -1;
                        }

                        else
                        {
                          signed int return_value_dico_get_u32_14;
                          return_value_dico_get_u32_14=dico_get_u32(*dicomainhead, (unsigned char)0, (unsigned short int)15, &temp32);
                          if(return_value_dico_get_u32_14 == 0)
                            exar->ai.hasdirsinfohead = temp32;

                          signed int return_value_strcmp_17;
                          return_value_strcmp_17=strcmp(exar->ai.filefmt, "FsArCh_002");
                          if(!(return_value_strcmp_17 == 0))
                          {
                            return_value_strcmp_16=strcmp(exar->ai.filefmt, "FsArCh_00Y");
                            if(!(return_value_strcmp_16 == 0))
                            {
                              return_value_strcmp_15=strcmp(exar->ai.filefmt, "FsArCh_001");
                              if(!(return_value_strcmp_15 == 0))
                              {
                                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1131, "This archive is based on a different file format: [%s]. Cannot continue.\n", (const void *)exar->ai.filefmt);
                                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1132, "It has been created with fsarchiver [%s], you should extrat the archive using that version.\n", (const void *)exar->ai.creatver);
                                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1133, "The current version of the program is [%s], and it's based on format [%s]\n", (const void *)"0.6.22", (const void *)"FsArCh_002");
                                return -1;
                              }

                            }

                          }

                          signed int return_value_dico_get_u64_18;
                          return_value_dico_get_u64_18=dico_get_u64(*dicomainhead, (unsigned char)0, (unsigned short int)14, &exar->ai.minfsaver);
                          if(!(return_value_dico_get_u64_18 == 0))
                            exar->ai.minfsaver = (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0));

                          if(!(exar->ai.cryptalgo == 1u))
                          {
                            memset((void *)md5sumar, 0, sizeof(unsigned char [16l]) /*16ul*/ );
                            memset((void *)md5sumnew, 0, sizeof(unsigned char [16l]) /*16ul*/ );
                            signed int return_value_dico_get_data_19;
                            return_value_dico_get_data_19=dico_get_data(*dicomainhead, (unsigned char)0, (unsigned short int)12, (void *)bufcheckcrypt, (unsigned short int)sizeof(unsigned char [4104l]) /*4104ul*/ , &cryptbufsize);
                            if(!(return_value_dico_get_data_19 == 0))
                            {
                              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1147, "cannot find MAINHEADKEY_BUFCHECKPASSCRYPTBUF in main-header\n");
                              return -1;
                            }

                            signed int return_value_dico_get_data_20;
                            return_value_dico_get_data_20=dico_get_data(*dicomainhead, (unsigned char)0, (unsigned short int)11, (void *)md5sumar, (unsigned short int)(sizeof(unsigned char [16l]) /*16ul*/  + (unsigned long int)99), (unsigned short int *)(void *)0);
                            if(!(return_value_dico_get_data_20 == 0))
                            {
                              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1151, "cannot find MAINHEADKEY_BUFCHECKPASSCLEARMD5 in main-header\n");
                              return -1;
                            }

                            unsigned long int return_value_strlen_21;
                            return_value_strlen_21=strlen((char *)g_options.encryptpass);
                            passlen = (signed int)return_value_strlen_21;
                            if(passlen >= 65 || !(passlen >= 6))
                            {
                              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1157, "you have to provide the password which was used to create archive, no password given on the command line\n");
                              return -1;
                            }

                            unsigned long int return_value_strlen_22;
                            return_value_strlen_22=strlen((char *)g_options.encryptpass);
                            signed int return_value_crypto_blowfish_23;
                            return_value_crypto_blowfish_23=crypto_blowfish((unsigned long int)cryptbufsize, &clearsize, bufcheckcrypt, bufcheckclear, g_options.encryptpass, (signed int)return_value_strlen_22, 0);
                            if(return_value_crypto_blowfish_23 == 0)
                              gcry_md_hash_buffer(1, (void *)md5sumnew, (const void *)bufcheckclear, clearsize);

                            signed int return_value_memcmp_24;
                            return_value_memcmp_24=memcmp((const void *)md5sumar, (const void *)md5sumnew, (unsigned long int)16);
                            if(!(return_value_memcmp_24 == 0))
                            {
                              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_read_mainhead", 1165, "you have to provide the password which was used to create archive, cannot decrypt the test buffer.\n");
                              return -1;
                            }

                          }

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

// extractar_restore_attr_everything
// file oper_restore.c line 322
signed int extractar_restore_attr_everything(struct s_extractar *exar, signed int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr)
{
  signed int res = 0;
  signed int return_value_extractar_restore_attr_std_1;
  return_value_extractar_restore_attr_std_1=extractar_restore_attr_std(exar, (unsigned int)objtype, fullpath, relpath, dicoattr);
  res = res + return_value_extractar_restore_attr_std_1;
  signed int return_value_extractar_restore_attr_xattr_2;
  return_value_extractar_restore_attr_xattr_2=extractar_restore_attr_xattr(exar, (unsigned int)objtype, fullpath, relpath, dicoattr);
  res = res + return_value_extractar_restore_attr_xattr_2;
  signed int return_value_extractar_restore_attr_windows_3;
  return_value_extractar_restore_attr_windows_3=extractar_restore_attr_windows(exar, (unsigned int)objtype, fullpath, relpath, dicoattr);
  res = res + return_value_extractar_restore_attr_windows_3;
  return res == 0 ? 0 : -1;
}

// extractar_restore_attr_std
// file oper_restore.c line 268
signed int extractar_restore_attr_std(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr)
{
  unsigned int mode;
  unsigned int uid;
  unsigned int gid;
  unsigned long int atime;
  unsigned long int mtime;
  signed int return_value_dico_get_u32_1;
  return_value_dico_get_u32_1=dico_get_u32(dicoattr, (unsigned char)0, (unsigned short int)7, &mode);
  if(!(return_value_dico_get_u32_1 == 0))
    return -1;

  else
  {
    signed int return_value_dico_get_u32_2;
    return_value_dico_get_u32_2=dico_get_u32(dicoattr, (unsigned char)0, (unsigned short int)9, &uid);
    if(!(return_value_dico_get_u32_2 == 0))
      return -2;

    else
    {
      signed int return_value_dico_get_u32_3;
      return_value_dico_get_u32_3=dico_get_u32(dicoattr, (unsigned char)0, (unsigned short int)10, &gid);
      if(!(return_value_dico_get_u32_3 == 0))
        return -3;

      else
      {
        signed int return_value_dico_get_u64_4;
        return_value_dico_get_u64_4=dico_get_u64(dicoattr, (unsigned char)0, (unsigned short int)11, &atime);
        if(!(return_value_dico_get_u64_4 == 0))
          return -4;

        else
        {
          signed int return_value_dico_get_u64_5;
          return_value_dico_get_u64_5=dico_get_u64(dicoattr, (unsigned char)0, (unsigned short int)12, &mtime);
          if(!(return_value_dico_get_u64_5 == 0))
            return -5;

          else
          {
            signed int return_value_lchown_7;
            return_value_lchown_7=lchown(fullpath, (unsigned int)uid, (unsigned int)gid);
            if(!(return_value_lchown_7 == 0))
            {
              char *return_value_get_objtype_name_6;
              return_value_get_objtype_name_6=get_objtype_name((signed int)objtype);
              fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_attr_std", 286, "Cannot lchown(%s) which is %s\n", fullpath, return_value_get_objtype_name_6);
              return -6;
            }

            if(!(objtype == 2u))
            {
              signed int return_value_chmod_8;
              return_value_chmod_8=chmod(fullpath, (unsigned int)mode);
              if(!(return_value_chmod_8 == 0))
              {
                fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_attr_std", 293, "chmod(%s, %lld) failed\n", fullpath, (signed long long int)mode);
                return -7;
              }

            }

            struct timeval tv[2l];
            tv[(signed long int)0].tv_usec = (signed long int)0;
            tv[(signed long int)0].tv_sec = (signed long int)atime;
            tv[(signed long int)1].tv_usec = (signed long int)0;
            tv[(signed long int)1].tv_sec = (signed long int)mtime;
            if(!(objtype == 2u))
            {
              signed int return_value_utimes_9;
              return_value_utimes_9=utimes(fullpath, tv);
              if(!(return_value_utimes_9 == 0))
              {
                fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_attr_std", 307, "utimes(%s) failed\n", relpath);
                return -8;
              }

            }

            else
              lutimes(fullpath, tv);
            return 0;
          }
        }
      }
    }
  }
}

// extractar_restore_attr_windows
// file oper_restore.c line 225
signed int extractar_restore_attr_windows(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr)
{
  char xattrname[2048l];
  char xattrvalue[65535l];
  unsigned short int xattrdatasize;
  signed int xattrdicsize;
  signed int ret = 0;
  signed int res;
  signed int i;
  xattrdicsize=dico_count_one_section(dicoattr, (unsigned char)2);
  i = 0;
  for( ; !(i >= xattrdicsize); i = i + 2)
  {
    signed int return_value_dico_get_string_1;
    return_value_dico_get_string_1=dico_get_string(dicoattr, (unsigned char)2, (unsigned short int)(unsigned long int)(i + 0), xattrname, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(!(return_value_dico_get_string_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_attr_windows", 241, "Cannot retrieve the name of an winattr for file %s\n", relpath);
      dico_show(dicoattr, (unsigned char)2, "winattr");
      ret = -1;
    }

    else
    {
      memset((void *)xattrvalue, 0, sizeof(char [65535l]) /*65535ul*/ );
      signed int return_value_dico_get_data_2;
      return_value_dico_get_data_2=dico_get_data(dicoattr, (unsigned char)2, (unsigned short int)(unsigned long int)(i + 1), (void *)xattrvalue, (unsigned short int)sizeof(char [65535l]) /*65535ul*/ , &xattrdatasize);
      if(!(return_value_dico_get_data_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_attr_windows", 249, "Cannot retrieve the value of an winattr for file %s\n", relpath);
        ret = -1;
      }

      else
      {
        res=lsetxattr(fullpath, xattrname, (const void *)xattrvalue, (unsigned long int)xattrdatasize, 0);
        if(!(res == 0))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_attr_windows", 256, "winattr:lsetxattr(%s,%s) failed\n", relpath, (const void *)xattrname);
          ret = -1;
        }

        else
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_restore_attr_windows", 261, "            winattr:lsetxattr(%s, %s)=%d\n", relpath, (const void *)xattrname, res);
      }
    }
  }
  return ret;
}

// extractar_restore_attr_xattr
// file oper_restore.c line 184
signed int extractar_restore_attr_xattr(struct s_extractar *exar, unsigned int objtype, char *fullpath, char *relpath, struct s_dico *dicoattr)
{
  char xattrname[2048l];
  char xattrvalue[65535l];
  unsigned short int xattrdatasize;
  signed int xattrdicsize;
  signed int ret = 0;
  signed int res;
  signed int i;
  xattrdicsize=dico_count_one_section(dicoattr, (unsigned char)1);
  i = 0;
  for( ; !(i >= xattrdicsize); i = i + 2)
  {
    signed int return_value_dico_get_string_1;
    return_value_dico_get_string_1=dico_get_string(dicoattr, (unsigned char)1, (unsigned short int)(unsigned long int)(i + 0), xattrname, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(!(return_value_dico_get_string_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_attr_xattr", 200, "Cannot retrieve the name of an xattr for file %s: DICO_OBJ_SECTION_XATTR, key=%ld\n", relpath, (signed long int)(i + 0));
      dico_show(dicoattr, (unsigned char)1, "xattr");
      ret = -1;
    }

    else
    {
      memset((void *)xattrvalue, 0, sizeof(char [65535l]) /*65535ul*/ );
      signed int return_value_dico_get_data_2;
      return_value_dico_get_data_2=dico_get_data(dicoattr, (unsigned char)1, (unsigned short int)(unsigned long int)(i + 1), (void *)xattrvalue, (unsigned short int)sizeof(char [65535l]) /*65535ul*/ , &xattrdatasize);
      if(!(return_value_dico_get_data_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_attr_xattr", 207, "Cannot retrieve the value of an xattr for file %s: DICO_OBJ_SECTION_XATTR, key=%ld\n", relpath, (signed long int)(i + 1));
        dico_show(dicoattr, (unsigned char)1, "xattr");
        ret = -1;
      }

      else
      {
        res=lsetxattr(fullpath, xattrname, (const void *)xattrvalue, (unsigned long int)xattrdatasize, 0);
        if(!(res == 0))
        {
          fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_attr_xattr", 214, "xattr:lsetxattr(%s,%s) failed\n", relpath, (const void *)xattrname);
          ret = -1;
        }

        else
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "extractar_restore_attr_xattr", 218, "            xattr:lsetxattr(%s, %s)=%d\n", relpath, (const void *)xattrname, res);
      }
    }
  }
  return ret;
}

// extractar_restore_obj_devfile
// file oper_restore.c line 484
signed int extractar_restore_obj_devfile(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype)
{
  char parentdir[4096l];
  struct timeval tv[2l];
  unsigned long int dev;
  unsigned int mode;
  exar->cost_current = exar->cost_current + (unsigned long int)16384;
  signed int return_value_is_filedir_excluded_1;
  return_value_is_filedir_excluded_1=is_filedir_excluded(relpath);
  signed int return_value_dico_get_u64_2;
  signed int return_value_dico_get_u32_3;
  signed int return_value_mknod_4;
  signed int return_value_extractar_restore_attr_everything_5;
  signed int return_value_utimes_6;
  if(!(return_value_is_filedir_excluded_1 == 1))
  {
    extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    mkdir_recursive(parentdir);
    get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
    extractar_listing_print_file(exar, objtype, relpath);
    return_value_dico_get_u64_2=dico_get_u64(d, (unsigned char)0, (unsigned short int)6, &dev);
    if(!(return_value_dico_get_u64_2 == 0))
      goto extractar_restore_obj_devfile_err;

    return_value_dico_get_u32_3=dico_get_u32(d, (unsigned char)0, (unsigned short int)7, &mode);
    if(!(return_value_dico_get_u32_3 == 0))
      goto extractar_restore_obj_devfile_err;

    return_value_mknod_4=mknod(fullpath, mode, dev);
    if(!(return_value_mknod_4 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_devfile", 513, "mknod failed on [%s]\n", relpath);
      goto extractar_restore_obj_devfile_err;
    }

    return_value_extractar_restore_attr_everything_5=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, d);
    if(!(return_value_extractar_restore_attr_everything_5 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_devfile", 517, "cannot restore file attributes for file [%s]\n", relpath);
      goto extractar_restore_obj_devfile_err;
    }

    return_value_utimes_6=utimes(parentdir, tv);
    if(!(return_value_utimes_6 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_devfile", 523, "utimes(%s) failed\n", (const void *)parentdir);
      goto extractar_restore_obj_devfile_err;
    }

    dico_destroy(d);
    exar->stats.cnt_special = exar->stats.cnt_special + 1ul;
    return 0;
  }

  else
  {

  extractar_restore_obj_devfile_err:
    ;
    dico_destroy(d);
    exar->stats.err_special = exar->stats.err_special + 1ul;
    return 0;
  }
}

// extractar_restore_obj_directory
// file oper_restore.c line 537
signed int extractar_restore_obj_directory(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype)
{
  char parentdir[4096l];
  struct timeval tv[2l];
  exar->cost_current = exar->cost_current + (unsigned long int)16384;
  signed int return_value_is_filedir_excluded_1;
  return_value_is_filedir_excluded_1=is_filedir_excluded(relpath);
  signed int return_value_extractar_restore_attr_everything_2;
  signed int return_value_utimes_3;
  if(!(return_value_is_filedir_excluded_1 == 1))
  {
    extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    mkdir_recursive(parentdir);
    get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
    extractar_listing_print_file(exar, objtype, relpath);
    mkdir_recursive(fullpath);
    return_value_extractar_restore_attr_everything_2=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, d);
    if(!(return_value_extractar_restore_attr_everything_2 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_directory", 562, "cannot restore file attributes for file [%s]\n", relpath);
      goto extractar_restore_obj_directory_err;
    }

    return_value_utimes_3=utimes(parentdir, tv);
    if(!(return_value_utimes_3 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_directory", 568, "utimes(%s) failed\n", (const void *)parentdir);
      goto extractar_restore_obj_directory_err;
    }

    dico_destroy(d);
    exar->stats.cnt_dir = exar->stats.cnt_dir + 1ul;
    return 0;
  }

  else
  {

  extractar_restore_obj_directory_err:
    ;
    dico_destroy(d);
    exar->stats.err_dir = exar->stats.err_dir + 1ul;
    return 0;
  }
}

// extractar_restore_obj_hardlink
// file oper_restore.c line 426
signed int extractar_restore_obj_hardlink(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype)
{
  char parentdir[4096l];
  struct timeval tv[2l];
  char buffer[4096l];
  char regfile[4096l];
  signed int res;
  exar->cost_current = exar->cost_current + (unsigned long int)16384;
  signed int return_value_is_filedir_excluded_1;
  return_value_is_filedir_excluded_1=is_filedir_excluded(relpath);
  signed int return_value_dico_get_string_2;
  signed int return_value_extractar_restore_attr_everything_3;
  signed int return_value_utimes_4;
  if(!(return_value_is_filedir_excluded_1 == 1))
  {
    extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    mkdir_recursive(parentdir);
    get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
    extractar_listing_print_file(exar, objtype, relpath);
    return_value_dico_get_string_2=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)4096);
    if(!(return_value_dico_get_string_2 >= 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_hardlink", 452, "dico_get_string(DICO_OBJ_SECTION_STDATTR, DISKITEMKEY_HARDLINK) failed\n");
      goto extractar_restore_obj_hardlink_err;
    }

    concatenate_paths(regfile, 4096, destdir, buffer);
    res=link(regfile, fullpath);
    if(!(res == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_hardlink", 459, "link(%s, %s) failed\n", (const void *)regfile, fullpath);
      goto extractar_restore_obj_hardlink_err;
    }

    return_value_extractar_restore_attr_everything_3=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, d);
    if(!(return_value_extractar_restore_attr_everything_3 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_hardlink", 464, "cannot restore file attributes for file [%s]\n", relpath);
      goto extractar_restore_obj_hardlink_err;
    }

    return_value_utimes_4=utimes(parentdir, tv);
    if(!(return_value_utimes_4 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_hardlink", 470, "utimes(%s) failed\n", (const void *)parentdir);
      goto extractar_restore_obj_hardlink_err;
    }

    dico_destroy(d);
    exar->stats.cnt_hardlink = exar->stats.cnt_hardlink + 1ul;
    return 0;
  }

  else
  {

  extractar_restore_obj_hardlink_err:
    ;
    dico_destroy(d);
    exar->stats.err_hardlink = exar->stats.err_hardlink + 1ul;
    return 0;
  }
}

// extractar_restore_obj_regfile_multi
// file oper_restore.c line 582
signed int extractar_restore_obj_regfile_multi(struct s_extractar *exar, char *destdir, struct s_dico *dicofirstfile, signed int objtype, signed int fstype)
{
  struct s_datafile *datafile = (struct s_datafile *)(void *)0;
  char databuf[131072l];
  char basename[4096l];
  struct s_dico *filehead = (struct s_dico *)(void *)0;
  char magic[5l];
  char fullpath[4096l];
  char relpath[4096l];
  char parentdir[4096l];
  struct timeval tv[2l];
  struct s_blockinfo blkinfo;
  struct s_regmulti regmulti;
  unsigned char md5sumcalc[16l];
  unsigned char md5sumorig[16l];
  signed int errors;
  unsigned int filescount;
  unsigned int tmpobjtype;
  unsigned long int datsize;
  signed long int lres;
  signed int res;
  signed int i;
  errors = 0;
  memset((void *)&blkinfo, 0, sizeof(struct s_blockinfo) /*48ul*/ );
  regmulti_init(&regmulti, (unsigned int)921600);
  datafile=datafile_alloc();
  signed int return_value_dico_get_u32_1;
  return_value_dico_get_u32_1=dico_get_u32(dicofirstfile, (unsigned char)0, (unsigned short int)14, &filescount);
  signed int return_value_dico_get_u32_9;
  signed int return_value_is_filedir_excluded_15;
  if(!(return_value_dico_get_u32_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 613, "cannot read DISKITEMKEY_MULTIFILESCOUNT from header in archive\n");
    return -1;
  }

  else
  {
    signed int return_value_regmulti_rest_addheader_2;
    return_value_regmulti_rest_addheader_2=regmulti_rest_addheader(&regmulti, dicofirstfile);
    if(!(return_value_regmulti_rest_addheader_2 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 617, "rest_addheader() failed\n");
      return -1;
    }

    else
    {
      i = 1;
      for( ; !((unsigned int)i >= filescount); i = i + 1)
      {
        signed long int return_value_queue_dequeue_header_3;
        return_value_queue_dequeue_header_3=queue_dequeue_header(&g_queue, &filehead, magic, (unsigned short int *)(void *)0);
        if(!(return_value_queue_dequeue_header_3 >= 1l))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 624, "queue_dequeue_header() failed: cannot read multireg object header\n");
          errors = errors + 1;
          return -1;
        }

        signed int return_value_memcmp_4;
        return_value_memcmp_4=memcmp((const void *)magic, (const void *)"ObJt", (unsigned long int)4);
        if(!(return_value_memcmp_4 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 629, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"ObJt");
          return -1;
        }

        signed int return_value_regmulti_rest_addheader_5;
        return_value_regmulti_rest_addheader_5=regmulti_rest_addheader(&regmulti, filehead);
        if(!(return_value_regmulti_rest_addheader_5 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 633, "rest_addheader() failed for file %d\n", i);
          return -1;
        }

      }
      lres=queue_dequeue_block(&g_queue, &blkinfo);
      if(!(lres >= 1l))
      {
        char *return_value_error_int_to_string_6;
        return_value_error_int_to_string_6=error_int_to_string(lres);
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 640, "queue_dequeue_block()=%ld=%s failed\n", (signed long int)lres, return_value_error_int_to_string_6);
        return -1;
      }

      signed int return_value_regmulti_rest_setdatablock_7;
      return_value_regmulti_rest_setdatablock_7=regmulti_rest_setdatablock(&regmulti, blkinfo.blkdata, blkinfo.blkrealsize);
      if(!(return_value_regmulti_rest_setdatablock_7 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 645, "regmulti_rest_setdatablock() failed\n");
        return -1;
      }

      else
      {
        free((void *)blkinfo.blkdata);
        i = 0;
        for( ; !((unsigned int)i >= filescount); i = i + 1)
        {
          signed int return_value_regmulti_rest_getfile_8;
          return_value_regmulti_rest_getfile_8=regmulti_rest_getfile(&regmulti, i, &filehead, databuf, &datsize, (unsigned int)sizeof(char [131072l]) /*131072ul*/ );
          if(!(return_value_regmulti_rest_getfile_8 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 655, "rest_addheader() failed for file %d\n", i);
            filehead = (struct s_dico *)(void *)0;
          }

          else
          {
            return_value_dico_get_u32_9=dico_get_u32(filehead, (unsigned char)0, (unsigned short int)3, &tmpobjtype);
            if(!(return_value_dico_get_u32_9 == 0))
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 661, "Cannot read object type\n");

            else
            {
              res=dico_get_data(filehead, (unsigned char)0, (unsigned short int)2, (void *)relpath, (unsigned short int)sizeof(char [4096l]) /*4096ul*/ , (unsigned short int *)(void *)0);
              if(!(res == 0))
              {
                fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 666, "Cannot read DISKITEMKEY_PATH from header, res=%d, key=%d\n", res, 2);
                dico_show(filehead, (unsigned char)0, "DISKITEMKEY_PATH");
              }

              else
              {
                concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , destdir, relpath);
                extract_basename(fullpath, basename, (signed int)sizeof(char [4096l]) /*4096ul*/ );
                exar->cost_current = exar->cost_current + (unsigned long int)16384;
                exar->cost_current = exar->cost_current + datsize;
                return_value_is_filedir_excluded_15=is_filedir_excluded(relpath);
                if(!(return_value_is_filedir_excluded_15 == 1))
                {
                  extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
                  mkdir_recursive(parentdir);
                  get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
                  extractar_listing_print_file(exar, (signed int)tmpobjtype, relpath);
                  signed int return_value_dico_get_data_10;
                  return_value_dico_get_data_10=dico_get_data(filehead, (unsigned char)0, (unsigned short int)13, (void *)md5sumorig, (unsigned short int)16, (unsigned short int *)(void *)0);
                  if(!(return_value_dico_get_data_10 == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 690, "cannot get md5sum from file footer for file=[%s]\n", (const void *)relpath);
                    dico_show(filehead, (unsigned char)0, "filehead");
                    goto extractar_restore_obj_regfile_multi_err;
                  }

                  signed int return_value_datafile_open_write_11;
                  return_value_datafile_open_write_11=datafile_open_write(datafile, fullpath, (_Bool)0, (_Bool)0);
                  if(!(return_value_datafile_open_write_11 >= 0))
                    goto extractar_restore_obj_regfile_multi_err;

                  res=datafile_write(datafile, databuf, datsize);
                  datafile_close(datafile, md5sumcalc, (signed int)sizeof(unsigned char [16l]) /*16ul*/ );
                  if(!(res == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 703, "removing %s\n", (const void *)fullpath);
                    unlink(fullpath);
                    return -1;
                  }

                  signed int return_value_memcmp_12;
                  return_value_memcmp_12=memcmp((const void *)md5sumcalc, (const void *)md5sumorig, (unsigned long int)16);
                  if(!(return_value_memcmp_12 == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 709, "cannot restore file %s, the data block (which is shared by multiple files) is corrupt\n", (const void *)relpath);
                    res=truncate(fullpath, (signed long int)0);
                    goto extractar_restore_obj_regfile_multi_err;
                  }

                  signed int return_value_extractar_restore_attr_everything_13;
                  return_value_extractar_restore_attr_everything_13=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, filehead);
                  if(!(return_value_extractar_restore_attr_everything_13 == 0))
                  {
                    fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_regfile_multi", 715, "cannot restore file attributes for file [%s]\n", (const void *)relpath);
                    goto extractar_restore_obj_regfile_multi_err;
                  }

                  signed int return_value_utimes_14;
                  return_value_utimes_14=utimes(parentdir, tv);
                  if(!(return_value_utimes_14 == 0))
                  {
                    fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_multi", 721, "utimes(%s) failed\n", (const void *)parentdir);
                    goto extractar_restore_obj_regfile_multi_err;
                  }

                  exar->stats.cnt_regfile = exar->stats.cnt_regfile + 1ul;
                }

                dico_destroy(filehead);
                goto __CPROVER_DUMP_L21;
              }
            }
          }

        extractar_restore_obj_regfile_multi_err:
          ;
          dico_destroy(filehead);
          exar->stats.err_regfile = exar->stats.err_regfile + 1ul;

        __CPROVER_DUMP_L21:
          ;
        }
        datafile_destroy(datafile);
        return 0;
      }
    }
  }
}

// extractar_restore_obj_regfile_unique
// file oper_restore.c line 740
signed int extractar_restore_obj_regfile_unique(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype)
{
  char magic[5l];
  struct s_blockinfo blkinfo;
  char parentdir[4096l];
  struct s_datafile *datafile = (struct s_datafile *)(void *)0;
  struct s_dico *footerdico = (struct s_dico *)(void *)0;
  _Bool fatalerr = (_Bool)0;
  _Bool minorerr = (_Bool)0;
  _Bool delfile = (_Bool)0;
  struct timeval tv[2l];
  unsigned char md5sumcalc[16l];
  unsigned char md5sumorig[16l];
  signed int excluded = 0;
  _Bool sparse = (_Bool)0;
  unsigned long int filesize = (unsigned long int)0;
  unsigned long int filepos = (unsigned long int)0;
  unsigned long int flags = (unsigned long int)0;
  signed long int lres;
  memset((void *)&blkinfo, 0, sizeof(struct s_blockinfo) /*48ul*/ );
  memset((void *)magic, 0, sizeof(char [5l]) /*5ul*/ );
  datafile=datafile_alloc();
  signed int return_value_dico_get_u64_1;
  return_value_dico_get_u64_1=dico_get_u64(d, (unsigned char)0, (unsigned short int)8, &filesize);
  if(!(return_value_dico_get_u64_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 766, "Cannot read filesize DISKITEMKEY_SIZE from archive for file=[%s]\n", relpath);
    minorerr = (_Bool)1;
  }

  signed int return_value_dico_get_u64_2;
  return_value_dico_get_u64_2=dico_get_u64(d, (unsigned char)0, (unsigned short int)17, &flags);
  sparse = return_value_dico_get_u64_2 == 0 ? ((flags & (unsigned long int)(1 << 0)) != 0ul ? (_Bool)1 : (_Bool)0) : (_Bool)0;
  exar->cost_current = exar->cost_current + (unsigned long int)16384;
  exar->cost_current = exar->cost_current + filesize;
  signed int return_value_is_filedir_excluded_3;
  return_value_is_filedir_excluded_3=is_filedir_excluded(relpath);
  if(return_value_is_filedir_excluded_3 == 1)
    excluded = 1;

  else
    if((signed int)minorerr == 0)
    {
      extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
      mkdir_recursive(parentdir);
      get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
      extractar_listing_print_file(exar, objtype, relpath);
    }

  signed int return_value_datafile_open_write_4;
  if((signed int)minorerr == 0)
  {
    return_value_datafile_open_write_4=datafile_open_write(datafile, fullpath, (_Bool)excluded, sparse);
    if(!(return_value_datafile_open_write_4 >= 0))
      minorerr = (_Bool)1;

  }

  fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_obj_regfile_unique", 797, "restore_obj_regfile_unique(file=%s, size=%lld)\n", relpath, (signed long long int)filesize);
  filepos = (unsigned long int)0;
  _Bool tmp_if_expr_6;
  _Bool return_value_get_interrupted_5;
  do
  {
    if((signed int)minorerr == 0 && filesize >= 1ul && !(filepos >= filesize))
    {
      return_value_get_interrupted_5=get_interrupted();
      tmp_if_expr_6 = (signed int)return_value_get_interrupted_5 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_6 = (_Bool)0;
    if(!tmp_if_expr_6)
      break;

    lres=queue_dequeue_block(&g_queue, &blkinfo);
    if(!(lres >= 1l))
    {
      char *return_value_error_int_to_string_7;
      return_value_error_int_to_string_7=error_int_to_string(lres);
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 801, "queue_dequeue_block()=%ld=%s for file(%s) failed\n", (signed long int)lres, return_value_error_int_to_string_7, relpath);
      delfile = (_Bool)1;
      minorerr = (_Bool)1;
      break;
    }

    if(!(blkinfo.blkoffset == filepos))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 809, "file offset do not match for file(%s) failed: filepos=%lld, blkinfo.blkoffset=%lld, blkinfo.blkrealsize=%lld\n", relpath, (signed long long int)filepos, (signed long long int)blkinfo.blkoffset, (signed long long int)blkinfo.blkrealsize);
      free((void *)blkinfo.blkdata);
      delfile = (_Bool)1;
      minorerr = (_Bool)1;
      break;
    }

    signed int return_value_datafile_write_8;
    return_value_datafile_write_8=datafile_write(datafile, blkinfo.blkdata, (unsigned long int)blkinfo.blkrealsize);
    if(!(return_value_datafile_write_8 == 0))
    {
      free((void *)blkinfo.blkdata);
      delfile = (_Bool)1;
      minorerr = (_Bool)1;
      fatalerr = (_Bool)1;
      break;
    }

    free((void *)blkinfo.blkdata);
    filepos = filepos + (unsigned long int)blkinfo.blkrealsize;
  }
  while((_Bool)1);
  signed int return_value_datafile_close_9;
  if((signed int)minorerr == 0)
  {
    return_value_datafile_close_9=datafile_close(datafile, md5sumcalc, (signed int)sizeof(unsigned char [16l]) /*16ul*/ );
    if(!(return_value_datafile_close_9 == 0))
      minorerr = (_Bool)1;

  }

  if(excluded == 0 && (signed int)minorerr == 0)
  {
    signed int return_value_extractar_restore_attr_everything_10;
    return_value_extractar_restore_attr_everything_10=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, d);
    if(!(return_value_extractar_restore_attr_everything_10 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_regfile_unique", 833, "cannot restore file attributes for file [%s]\n", relpath);
      minorerr = (_Bool)1;
    }

    signed int return_value_utimes_11;
    return_value_utimes_11=utimes(parentdir, tv);
    if(!(return_value_utimes_11 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 839, "utimes(%s) failed\n", (const void *)parentdir);
      minorerr = (_Bool)1;
    }

  }

  if((signed int)fatalerr == 0 && filesize >= 1ul)
  {
    signed long int return_value_queue_dequeue_header_12;
    return_value_queue_dequeue_header_12=queue_dequeue_header(&g_queue, &footerdico, magic, (unsigned short int *)(void *)0);
    if(!(return_value_queue_dequeue_header_12 >= 1l))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 848, "queue_dequeue_header() failed: cannot read footer dico\n");
      minorerr = (_Bool)1;
    }

    else
      if(!(excluded == 1))
      {
        signed int return_value_memcmp_13;
        return_value_memcmp_13=memcmp((const void *)magic, (const void *)"FiLf", (unsigned long int)4);
        if(!(return_value_memcmp_13 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 856, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"FiLf");
          minorerr = (_Bool)1;
          goto restore_obj_regfile_unique_end;
        }

        signed int return_value_dico_get_data_14;
        return_value_dico_get_data_14=dico_get_data(footerdico, (unsigned char)0, (unsigned short int)1, (void *)md5sumorig, (unsigned short int)16, (unsigned short int *)(void *)0);
        if(!(return_value_dico_get_data_14 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 862, "cannot get md5sum from file footer for file=[%s]\n", relpath);
          minorerr = (_Bool)1;
          goto restore_obj_regfile_unique_end;
        }

        signed int return_value_memcmp_15;
        return_value_memcmp_15=memcmp((const void *)md5sumcalc, (const void *)md5sumorig, (unsigned long int)16);
        if(!(return_value_memcmp_15 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 868, "cannot restore file %s, file is corrupt\n", relpath);
          delfile = (_Bool)1;
          minorerr = (_Bool)1;
          goto restore_obj_regfile_unique_end;
        }

      }

  }


restore_obj_regfile_unique_end:
  ;
  if((signed int)delfile == 1)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 878, "removing %s\n", fullpath);
    unlink(fullpath);
  }

  if(!(excluded == 1))
  {
    if((signed int)minorerr == 1)
      exar->stats.err_regfile = exar->stats.err_regfile + 1ul;

    else
      exar->stats.cnt_regfile = exar->stats.cnt_regfile + 1ul;
  }

  _Bool return_value_get_interrupted_16;
  return_value_get_interrupted_16=get_interrupted();
  if((signed int)return_value_get_interrupted_16 == 1)
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_regfile_unique", 891, "operation has been interrupted\n");

  dico_destroy(footerdico);
  dico_destroy(d);
  datafile_destroy(datafile);
  return (signed int)fatalerr == 0 ? 0 : -1;
}

// extractar_restore_obj_symlink
// file oper_restore.c line 338
signed int extractar_restore_obj_symlink(struct s_extractar *exar, char *fullpath, char *relpath, char *destdir, struct s_dico *d, signed int objtype, signed int fstype)
{
  char parentdir[4096l];
  struct timeval tv[2l];
  char buffer[4096l];
  unsigned long int targettype;
  signed int fdtemp;
  exar->cost_current = exar->cost_current + (unsigned long int)16384;
  signed int return_value_is_filedir_excluded_1;
  return_value_is_filedir_excluded_1=is_filedir_excluded(relpath);
  signed int return_value_dico_get_string_2;
  signed int return_value_dico_get_u64_5;
  signed int return_value_strcmp_6;
  signed int return_value_mkdir_recursive_3;
  signed int return_value_extractar_restore_attr_everything_8;
  signed int return_value_utimes_9;
  if(!(return_value_is_filedir_excluded_1 == 1))
  {
    extractar_listing_print_file(exar, objtype, relpath);
    extract_dirpath(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    mkdir_recursive(parentdir);
    get_parent_dir_time_attrib(fullpath, parentdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , tv);
    return_value_dico_get_string_2=dico_get_string(d, (unsigned char)0, (unsigned short int)4, buffer, (unsigned short int)4096);
    if(!(return_value_dico_get_string_2 >= 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 364, "Cannot read field=symlink for file=[%s]\n", fullpath);
      goto extractar_restore_obj_symlink_err;
    }

    return_value_dico_get_u64_5=dico_get_u64(d, (unsigned char)0, (unsigned short int)16, &targettype);
    _Bool tmp_if_expr_7;
    if(return_value_dico_get_u64_5 == 0)
    {
      return_value_strcmp_6=strcmp(filesys[(signed long int)fstype].name, "ntfs");
      tmp_if_expr_7 = return_value_strcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      switch(targettype)
      {
        case (unsigned long int)1:
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "extractar_restore_obj_symlink", 375, "LINK: mklink=[%s], target=[%s], targettype=DIR\n", relpath, (const void *)buffer);
          return_value_mkdir_recursive_3=mkdir_recursive(fullpath);
          if(!(return_value_mkdir_recursive_3 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 377, "Cannot create directory for ntfs symlink: path=[%s]\n", fullpath);
            goto extractar_restore_obj_symlink_err;
          }

          break;
        }
        case (unsigned long int)8:
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "extractar_restore_obj_symlink", 382, "LINK: mklink=[%s], target=[%s], targettype=REGFILE\n", relpath, (const void *)buffer);
          fdtemp=creat(fullpath, (unsigned int)0644);
          if(!(fdtemp >= 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 384, "Cannot create file for ntfs symlink: path=[%s]\n", fullpath);
            goto extractar_restore_obj_symlink_err;
          }

          close(fdtemp);
          break;
        }
        default:
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "extractar_restore_obj_symlink", 390, "LINK: mklink=[%s], target=[%s], targettype=UNKNOWN\n", relpath, (const void *)buffer);
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 391, "Unexpected target type for ntfs symlink: path=[%s]\n", fullpath);
          goto extractar_restore_obj_symlink_err;
        }
      }

    else
    {
      fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "extractar_restore_obj_symlink", 398, "LINK: symlink=[%s], target=[%s] (normal symlink)\n", relpath, (const void *)buffer);
      signed int return_value_symlink_4;
      return_value_symlink_4=symlink(buffer, fullpath);
      if(!(return_value_symlink_4 >= 0))
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 400, "symlink(%s, %s) failed\n", (const void *)buffer, fullpath);
        goto extractar_restore_obj_symlink_err;
      }

    }
    return_value_extractar_restore_attr_everything_8=extractar_restore_attr_everything(exar, objtype, fullpath, relpath, d);
    if(!(return_value_extractar_restore_attr_everything_8 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_obj_symlink", 406, "cannot restore file attributes for file [%s]\n", relpath);
      goto extractar_restore_obj_symlink_err;
    }

    return_value_utimes_9=utimes(parentdir, tv);
    if(!(return_value_utimes_9 == 0))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "extractar_restore_obj_symlink", 412, "utimes(%s) failed\n", (const void *)parentdir);
      goto extractar_restore_obj_symlink_err;
    }

    dico_destroy(d);
    exar->stats.cnt_symlink = exar->stats.cnt_symlink + 1ul;
    return 0;
  }

  else
  {

  extractar_restore_obj_symlink_err:
    ;
    dico_destroy(d);
    exar->stats.err_symlink = exar->stats.err_symlink + 1ul;
    return 0;
  }
}

// extractar_restore_object
// file oper_restore.c line 899
signed int extractar_restore_object(struct s_extractar *exar, signed int *errors, char *destdir, struct s_dico *dicoattr, signed int fstype)
{
  char relpath[4096l];
  char fullpath[4096l];
  unsigned long int filesize;
  unsigned int objtype;
  signed int res;
  *errors = 0;
  signed int return_value_dico_get_data_1;
  return_value_dico_get_data_1=dico_get_data(dicoattr, (unsigned char)0, (unsigned short int)2, (void *)relpath, (unsigned short int)sizeof(char [4096l]) /*4096ul*/ , (unsigned short int *)(void *)0);
  if(!(return_value_dico_get_data_1 == 0))
    return -1;

  else
  {
    signed int return_value_dico_get_u32_2;
    return_value_dico_get_u32_2=dico_get_u32(dicoattr, (unsigned char)0, (unsigned short int)3, &objtype);
    if(!(return_value_dico_get_u32_2 == 0))
      return -2;

    else
    {
      signed int return_value_dico_get_u64_3;
      return_value_dico_get_u64_3=dico_get_u64(dicoattr, (unsigned char)0, (unsigned short int)8, &filesize);
      if(!(return_value_dico_get_u64_3 == 0))
        return -3;

      else
      {
        concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , destdir, relpath);
        switch(objtype)
        {
          case (unsigned int)1:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 922, "objtype=OBJTYPE_DIR, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_directory(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)2:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 926, "objtype=OBJTYPE_SYMLINK, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_symlink(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)3:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 930, "objtype=OBJTYPE_HARDLINK, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_hardlink(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)4:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 934, "objtype=OBJTYPE_CHARDEV, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_devfile(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)5:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 938, "objtype=OBJTYPE_BLOCKDEV, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_devfile(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)6:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 942, "objtype=OBJTYPE_FIFO, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_devfile(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)7:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 946, "objtype=OBJTYPE_SOCKET, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_devfile(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            break;
          }
          case (unsigned int)8:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 950, "objtype=OBJTYPE_REGFILEUNIQUE, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_regfile_unique(exar, fullpath, relpath, destdir, dicoattr, (signed int)objtype, fstype);
            if(!(res >= 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_object", 952, "restore_obj_regfile_unique(%s) failed with res=%d\n", (const void *)relpath, res);
              return -1;
            }

            break;
          }
          case (unsigned int)9:
          {
            fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "extractar_restore_object", 957, "objtype=OBJTYPE_REGFILEMULTI, path=[%s]\n", (const void *)relpath);
            res=extractar_restore_obj_regfile_multi(exar, destdir, dicoattr, (signed int)objtype, fstype);
            if(!(res >= 0))
            {
              fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "extractar_restore_object", 959, "restore_obj_regfile_multi(%s) failed with res=%d\n", (const void *)relpath, res);
              return -1;
            }

            break;
          }
          default:
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_object", 964, "Unknown objtype %d\n", objtype);
            return -3;
          }
        }
        if(!(res == 0))
        {
          char *return_value_get_objtype_name_4;
          return_value_get_objtype_name_4=get_objtype_name((signed int)objtype);
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "extractar_restore_object", 968, "Restoring file=[%s], objtype=[%s] failed\n", (const void *)fullpath, return_value_get_objtype_name_4);
          return -1;
        }

        return 0;
      }
    }
  }
}

// filesystem_mount_partition
// file oper_save.c line 909
signed int filesystem_mount_partition(struct s_devinfo_0 *devinfo, struct s_dico *dicofsinfo, unsigned short int fsid)
{
  char fsbuf[128l];
  struct statvfs64 statfsbuf;
  struct s_strlist reqmntopt;
  struct s_strlist badmntopt;
  struct s_strlist curmntopt;
  signed int showwarningcount1 = 0;
  signed int showwarningcount2 = 0;
  signed int errorattr = 0;
  char temp[4096l];
  char curmntdir[4096l];
  char optbuf[128l];
  unsigned long int fsbytestotal;
  unsigned long int fsbytesused;
  signed int readwrite;
  signed int tmptype;
  signed int count;
  signed int res;
  signed int i;
  res=generic_get_mntinfo(devinfo->devpath, &readwrite, curmntdir, (signed int)sizeof(char [4096l]) /*4096ul*/ , optbuf, (signed int)sizeof(char [128l]) /*128ul*/ , fsbuf, (signed int)sizeof(char [128l]) /*128ul*/ );
  char *return_value_strlist_merge_6;
  char *return_value_strlist_merge_9;
  signed int return_value_1;
  if(res == 0)
  {
    devinfo->mountedbyfsa = (_Bool)0;
    fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "filesystem_mount_partition", 935, "generic_get_mntinfo(%s): mnt=[%s], opt=[%s], fs=[%s], rw=[%d]\n", (const void *)devinfo->devpath, (const void *)curmntdir, (const void *)optbuf, (const void *)fsbuf, readwrite);
    if(readwrite == 1 && (signed int)g_options.allowsaverw == 0)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 941, "partition [%s] is mounted read/write. please mount it read-only \nand then try again. you can do \"mount -o remount,ro %s\". you can \nalso run fsarchiver with option '-A' if you know what you are doing.\n", (const void *)devinfo->devpath, (const void *)devinfo->devpath);
      return -1;
    }

    signed int return_value_generic_get_fstype_2;
    return_value_generic_get_fstype_2=generic_get_fstype(fsbuf, &devinfo->fstype);
    if(!(return_value_generic_get_fstype_2 == 0))
    {
      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(fsbuf, "fuseblk");
      if(return_value_strcmp_1 == 0)
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 947, "partition [%s] is using a fuse based filesystem (probably ntfs-3g). Unmount it and try again\n", (const void *)devinfo->devpath);

      else
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 949, "filesystem of partition [%s] is not supported by fsarchiver: filesystem=[%s]\n", (const void *)devinfo->devpath, (const void *)fsbuf);
      return -1;
    }

    strlist_init(&reqmntopt);
    strlist_init(&badmntopt);
    strlist_init(&curmntopt);
    signed int return_value;
    return_value=filesys[(signed long int)devinfo->fstype].reqmntopt(devinfo->devpath, &reqmntopt, &badmntopt);
    if(!(return_value == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 958, "cannot get the required mount options for partition=[%s]\n", (const void *)devinfo->devpath);
      strlist_empty(&reqmntopt);
      strlist_empty(&badmntopt);
      return -1;
    }

    strlist_split(&curmntopt, optbuf, (char)44);
    char *return_value_strlist_merge_3;
    return_value_strlist_merge_3=strlist_merge(&curmntopt, temp, (signed int)sizeof(char [4096l]) /*4096ul*/ , (char)44);
    fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "filesystem_mount_partition", 964, "mount options found for partition=[%s]: [%s]\n", (const void *)devinfo->devpath, return_value_strlist_merge_3);
    char *return_value_strlist_merge_4;
    return_value_strlist_merge_4=strlist_merge(&reqmntopt, temp, (signed int)sizeof(char [4096l]) /*4096ul*/ , (char)44);
    fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "filesystem_mount_partition", 965, "mount options required for partition=[%s]: [%s]\n", (const void *)devinfo->devpath, return_value_strlist_merge_4);
    char *return_value_strlist_merge_5;
    return_value_strlist_merge_5=strlist_merge(&badmntopt, temp, (signed int)sizeof(char [4096l]) /*4096ul*/ , (char)44);
    fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "filesystem_mount_partition", 966, "mount options to avoid for partition=[%s]: [%s]\n", (const void *)devinfo->devpath, return_value_strlist_merge_5);
    count=strlist_count(&reqmntopt);
    i = 0;
    if(!(i >= count))
    {
      strlist_getitem(&reqmntopt, i, optbuf, (signed int)sizeof(char [128l]) /*128ul*/ );
      fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "filesystem_mount_partition", 971, "checking there is reqmntopt[%d]=[%s]\n", i, (const void *)optbuf);
      signed int return_value_strlist_exists_8;
      return_value_strlist_exists_8=strlist_exists(&curmntopt, optbuf);
      if(!(return_value_strlist_exists_8 == 1))
      {
        if(showwarningcount1 == 0)
        {
          return_value_strlist_merge_6=strlist_merge(&reqmntopt, temp, (signed int)sizeof(char [4096l]) /*4096ul*/ , (char)44);
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 977, "partition [%s] has to be mounted with options [%s] in order to preserve all its attributes. you can use mount with option remount to do that.\n", (const void *)devinfo->devpath, return_value_strlist_merge_6);
        }

        if((signed int)g_options.dontcheckmountopts == 1)
        {
          signed int tmp_post_7 = showwarningcount1;
          showwarningcount1 = showwarningcount1 + 1;
          if(tmp_post_7 == 0)
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 980, "fsarchiver will continue anyway since the option '-a' was used\n");

        }

        else
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 984, "fsarchiver cannot continue, you can use option '-a' to ignore the mount options (xattr or acl may not be preserved)\n");
          return -1;
        }
      }

      i = i + 1;
    }

    count=strlist_count(&badmntopt);
    i = 0;
    if(!(i >= count))
    {
      strlist_getitem(&badmntopt, i, optbuf, (signed int)sizeof(char [128l]) /*128ul*/ );
      fsaprintf(5, (_Bool)0, 5 >= 3, "oper_save.c", "filesystem_mount_partition", 993, "checking there is not badmntopt[%d]=[%s]\n", i, (const void *)optbuf);
      signed int return_value_strlist_exists_11;
      return_value_strlist_exists_11=strlist_exists(&curmntopt, optbuf);
      if(return_value_strlist_exists_11 == 1)
      {
        if(showwarningcount2 == 0)
        {
          return_value_strlist_merge_9=strlist_merge(&badmntopt, temp, (signed int)sizeof(char [4096l]) /*4096ul*/ , (char)44);
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 998, "partition [%s] has to be mounted without options [%s] in order to preserve all its attributes\n", (const void *)devinfo->devpath, return_value_strlist_merge_9);
        }

        if((signed int)g_options.dontcheckmountopts == 1)
        {
          signed int tmp_post_10 = showwarningcount2;
          showwarningcount2 = showwarningcount2 + 1;
          if(tmp_post_10 == 0)
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1001, "fsarchiver will continue anyway since the option '-a' was used\n");

        }

        else
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1005, "fsarchiver cannot continue, you can use option '-a' to ignore the mount options (xattr or acl may not be preserverd)\n");
          return -1;
        }
      }

      i = i + 1;
    }

    strlist_empty(&reqmntopt);
    strlist_empty(&badmntopt);
    strlist_empty(&curmntopt);
    mkdir_recursive(devinfo->partmount);
    signed int return_value_mount_12;
    return_value_mount_12=mount(curmntdir, devinfo->partmount, (const char *)(void *)0, (unsigned long int)(4096 | 1), (void *)0);
    if(!(return_value_mount_12 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1017, "mount(src=[%s], target=[%s], NULL, MS_BIND|MS_RDONLY, NULL) failed\n", (const void *)curmntdir, (const void *)devinfo->partmount);
      return -1;
    }

    devinfo->mountedbyfsa = (_Bool)1;
  }

  else
  {
    mkdir_recursive(devinfo->partmount);
    fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "filesystem_mount_partition", 1025, "partition %s is not mounted\n", (const void *)devinfo->devpath);
    tmptype = -1;
    i = 0;
    if(tmptype == -1 && !(filesys[(signed long int)i].name == ((char *)NULL)))
    {
      signed int return_value_2;
      return_value_2=filesys[(signed long int)i].test(devinfo->devpath);
      if(return_value_2 == 1)
      {
        return_value_1=filesys[(signed long int)i].mount(devinfo->devpath, devinfo->partmount, filesys[(signed long int)i].name, 1, (char *)(void *)0);
        if(return_value_1 == 0)
        {
          tmptype = i;
          fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "filesystem_mount_partition", 1030, "partition %s successfully mounted on [%s] as [%s]\n", (const void *)devinfo->devpath, (const void *)devinfo->partmount, filesys[(signed long int)i].name);
        }

      }

      i = i + 1;
    }

    if(tmptype == -1)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1034, "cannot mount partition [%s]: filesystem may not be supported by either fsarchiver or the kernel.\n", (const void *)devinfo->devpath);
      return -1;
    }

    devinfo->fstype = tmptype;
    devinfo->mountedbyfsa = (_Bool)1;
  }
  signed int *return_value___errno_location_16;
  signed int *return_value___errno_location_20;
  if((signed int)g_options.dontcheckmountopts == 0)
  {
    errorattr = 0;
    if((signed int)filesys[(signed long int)i].support_for_xattr == 1)
    {
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      *return_value___errno_location_13 = 0;
      signed long int return_value_lgetxattr_14;
      return_value_lgetxattr_14=lgetxattr(devinfo->partmount, "user.fsa_test_xattr", (void *)temp, sizeof(char [4096l]) /*4096ul*/ );
      res = (signed int)return_value_lgetxattr_14;
      signed int *return_value___errno_location_15;
      return_value___errno_location_15=__errno_location();
      fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "filesystem_mount_partition", 1049, "lgetxattr(\"%s\", \"user.fsa_test_attr\", buf, bufsize)=[%d] and errno=[%d]\n", (const void *)devinfo->partmount, (signed int)res, (signed int)*return_value___errno_location_15);
      if(!(res == 0))
      {
        return_value___errno_location_16=__errno_location();
        if(*return_value___errno_location_16 == 95)
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1052, "fsarchiver is unable to access extended attributes on device [%s].\n", (const void *)devinfo->devpath);
          errorattr = 1;
        }

      }

    }

    if((signed int)filesys[(signed long int)i].support_for_acls == 1)
    {
      signed int *return_value___errno_location_17;
      return_value___errno_location_17=__errno_location();
      *return_value___errno_location_17 = 0;
      signed long int return_value_lgetxattr_18;
      return_value_lgetxattr_18=lgetxattr(devinfo->partmount, "system.posix_acl_access", (void *)temp, sizeof(char [4096l]) /*4096ul*/ );
      res = (signed int)return_value_lgetxattr_18;
      signed int *return_value___errno_location_19;
      return_value___errno_location_19=__errno_location();
      fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "filesystem_mount_partition", 1060, "lgetxattr(\"%s\", \"system.posix_acl_access\", buf, bufsize)=[%d] and errno=[%d]\n", (const void *)devinfo->partmount, (signed int)res, (signed int)*return_value___errno_location_19);
      if(!(res == 0))
      {
        return_value___errno_location_20=__errno_location();
        if(*return_value___errno_location_20 == 95)
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1063, "fsarchiver is unable to access ACLs on device [%s].\n", (const void *)devinfo->devpath);
          errorattr = 1;
        }

      }

    }

    if(!(errorattr == 1))
      goto __CPROVER_DUMP_L34;

    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1070, "Cannot continue, you can use option '-a' to ignore support for xattr and acl (they will not be preserved)\n");
    return -1;
  }

  else
  {

  __CPROVER_DUMP_L34:
    ;
    signed int return_value_statvfs64_21;
    return_value_statvfs64_21=statvfs64(devinfo->partmount, &statfsbuf);
    if(!(return_value_statvfs64_21 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1077, "statvfs64(%s) failed\n", (const void *)devinfo->partmount);
      return -1;
    }

    else
    {
      fsbytestotal = (unsigned long int)statfsbuf.f_frsize * (unsigned long int)statfsbuf.f_blocks;
      fsbytesused = fsbytestotal - (unsigned long int)statfsbuf.f_frsize * (unsigned long int)statfsbuf.f_bfree;
      dico_add_string(dicofsinfo, (unsigned char)0, (unsigned short int)1, filesys[(signed long int)devinfo->fstype].name);
      dico_add_string(dicofsinfo, (unsigned char)0, (unsigned short int)2, devinfo->partmount);
      dico_add_string(dicofsinfo, (unsigned char)0, (unsigned short int)27, devinfo->devpath);
      dico_add_u64(dicofsinfo, (unsigned char)0, (unsigned short int)3, fsbytestotal);
      dico_add_u64(dicofsinfo, (unsigned char)0, (unsigned short int)4, fsbytesused);
      signed int return_value_3;
      return_value_3=filesys[(signed long int)devinfo->fstype].getinfo(dicofsinfo, devinfo->devpath);
      if(!(return_value_3 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "filesystem_mount_partition", 1090, "cannot save filesystem attributes for partition %s\n", (const void *)devinfo->devpath);
        return -1;
      }

      else
        return 0;
    }
  }
}

// fletcher32
// file common.h line 44
unsigned int fletcher32(unsigned char *data, unsigned int len)
{
  unsigned int sum1 = (unsigned int)0xffff;
  unsigned int sum2 = (unsigned int)0xffff;
  while(!(len == 0u))
  {
    unsigned int tlen = len > (unsigned int)360 ? (unsigned int)360 : len;
    len = len - tlen;
    do
    {
      unsigned char *tmp_post_1 = data;
      data = data + 1l;
      sum1 = sum1 + (unsigned int)*tmp_post_1;
      sum2 = sum2 + sum1;
      tlen = tlen - 1u;
    }
    while(!(tlen == 0u));
    sum1 = (sum1 & (unsigned int)0xffff) + (sum1 >> 16);
    sum2 = (sum2 & (unsigned int)0xffff) + (sum2 >> 16);
  }
  sum1 = (sum1 & (unsigned int)0xffff) + (sum1 >> 16);
  sum2 = (sum2 & (unsigned int)0xffff) + (sum2 >> 16);
  return sum2 << 16 | sum1;
}

// format_fstype
// file fs_ext2.c line 76
char * format_fstype(signed int fstype)
{
  switch(fstype)
  {
    case 0:
      return "ext2";
    case 1:
      return "ext3";
    case 2:
      return "ext4";
    default:
      return "invalid";
  }
}

// format_md5
// file common.h line 38
char * format_md5(char *buf, signed int maxbuf, unsigned char *md5bin)
{
  signed int i;
  memset((void *)buf, 0, (unsigned long int)maxbuf);
  i = 0;
  for( ; !(i >= 16); i = i + 1)
    strlcatf(buf, maxbuf, "%.2x", md5bin[(signed long int)i]);
  return buf;
}

// format_prog_version
// file filesys.h line 52
char * format_prog_version(unsigned long int version, char *bufdat, signed int buflen)
{
  snprintf(bufdat, (unsigned long int)buflen, "%ld.%ld.%ld", (signed long int)(version >> 16 & (unsigned long int)0xFF), (signed long int)(version >> 8 & (unsigned long int)0xFF), (signed long int)(version >> 0 & (unsigned long int)0xFF));
  return bufdat;
}

// format_size
// file common.h line 31
char * format_size(unsigned long int size, char *text, signed int max, char units)
{
  double dSize;
  unsigned long int llKiloB = (unsigned long int)1024LL;
  unsigned long int llMegaB = (unsigned long int)1024LL * llKiloB;
  unsigned long int llGigaB = (unsigned long int)1024LL * llMegaB;
  unsigned long int llTeraB = (unsigned long int)1024LL * llGigaB;
  if((signed int)units == 98 || (signed int)units == 104 && !(size >= llKiloB))
    snprintf(text, (unsigned long int)max, "%lld bytes", (signed long long int)size);

  else
    if((signed int)units == 107 || (signed int)units == 104 && !(size >= llMegaB))
    {
      dSize = (double)size / (double)llKiloB;
      snprintf(text, (unsigned long int)max, "%.2f KB", (float)dSize);
    }

    else
      if((signed int)units == 109 || (signed int)units == 104 && !(size >= llGigaB))
      {
        dSize = (double)size / (double)llMegaB;
        snprintf(text, (unsigned long int)max, "%.2f MB", (float)dSize);
      }

      else
        if((signed int)units == 103 || (signed int)units == 104 && !(size >= llTeraB))
        {
          dSize = (double)size / (double)llGigaB;
          snprintf(text, (unsigned long int)max, "%.2f GB", (float)dSize);
        }

        else
        {
          dSize = (double)size / (double)llTeraB;
          snprintf(text, (unsigned long int)max, "%.2f TB", (float)dSize);
        }
  return text;
}

// format_stacktrace
// file common.c line 550
signed int format_stacktrace(char *buffer, signed int bufsize)
{
  const signed int stack_depth = 20;
  const signed long int stack_depth_array_size0 = (signed long int)stack_depth;
  void *temp[stack_depth_array_size0];
  char **strings;
  signed int nptrs;
  signed int i;
  memset((void *)buffer, 0, (unsigned long int)bufsize);
  nptrs=backtrace(temp, stack_depth);
  strings=backtrace_symbols(temp, nptrs);
  if(!(strings == ((char **)NULL)))
  {
    i = 0;
    for( ; !(i >= nptrs); i = i + 1)
      strlcatf(buffer, bufsize, "%s\n", strings[(signed long int)i]);
    free((void *)strings);
  }

  return 0;
}

// format_time
// file common.h line 36
char * format_time(char *buffer, signed int bufsize, unsigned long int t)
{
  struct tm timeres;
  signed long int t2;
  if(buffer == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    t2 = (signed long int)t;
    localtime_r(&t2, &timeres);
    snprintf(buffer, (unsigned long int)bufsize, "%.4d-%.2d-%.2d_%.2d-%.2d-%.2d", timeres.tm_year + 1900, timeres.tm_mon + 1, timeres.tm_mday, timeres.tm_hour, timeres.tm_min, timeres.tm_sec);
    return buffer;
  }
}

// fsaprintf
// file error.h line 37
signed int fsaprintf(signed int level, _Bool showerrno, _Bool showloc, const char *file, const char *fct, signed int line, char *format, ...)
{
  char buffer[8192l];
  char temp[1024l];
  _Bool msgscreen;
  _Bool msglogfile;
  void **ap;
  memset((void *)buffer, 0, sizeof(char [8192l]) /*8192ul*/ );
  msgscreen = level <= g_options.verboselevel;
  msglogfile = level <= g_options.debuglevel;
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  unsigned long int return_value_strlen_4;
  if(!(msglogfile == (_Bool)0) || !(msgscreen == (_Bool)0))
  {
    if(!(showerrno == (_Bool)0))
    {
      return_value___errno_location_1=__errno_location();
      return_value___errno_location_2=__errno_location();
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      strlcatf(buffer, (signed int)sizeof(char [8192l]) /*8192ul*/ , "[errno=%d, %s]: ", *return_value___errno_location_1, return_value_strerror_3);
    }

    if(!(showloc == (_Bool)0))
      strlcatf(buffer, (signed int)sizeof(char [8192l]) /*8192ul*/ , "%s#%d,%s(): ", file, line, fct);

    ap = (void **)&format;
    vsnprintf(temp, sizeof(char [1024l]) /*1024ul*/ , format, ap);
    ap = ((void **)NULL);
    strlcatf(buffer, (signed int)sizeof(char [8192l]) /*8192ul*/ , "%s", (const void *)temp);
    if(!(msgscreen == (_Bool)0))
    {
      fprintf(stderr, "%s", (const void *)buffer);
      fflush(stderr);
    }

    if(!(msglogfile == (_Bool)0))
    {
      return_value_strlen_4=strlen(buffer);
      logfile_write(buffer, (signed int)return_value_strlen_4);
    }

  }

  return 0;
}

// generate_random_tmpdir
// file common.h line 35
signed int generate_random_tmpdir(char *buffer, signed int bufsize, signed int n)
{
  struct tm tbreak;
  signed long int abstime;
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  abstime = tv.tv_sec;
  localtime_r(&abstime, &tbreak);
  snprintf(buffer, (unsigned long int)bufsize, "/tmp/fsa/%.4d%.2d%.2d-%.2d%.2d%.2d-%.2d", tbreak.tm_year + 1900, tbreak.tm_mon + 1, tbreak.tm_mday, tbreak.tm_hour, tbreak.tm_min, tbreak.tm_sec, n);
  return 0;
}

// generate_random_u32_id
// file common.h line 43
unsigned int generate_random_u32_id(void)
{
  struct timeval now;
  unsigned int archid;
  memset((void *)&now, 0, sizeof(struct timeval) /*16ul*/ );
  do
  {
    gettimeofday(&now, (struct timezone *)(void *)0);
    archid = (unsigned int)now.tv_sec ^ (unsigned int)now.tv_usec;
  }
  while(archid == 0u);
  return archid;
}

// generic_get_fsrwstatus
// file filesys.c line 95
signed int generic_get_fsrwstatus(char *options)
{
  char temp[128l];
  char delims[2l] = { ',', 0 };
  char *saveptr;
  char *result;
  snprintf(temp, sizeof(char [128l]) /*128ul*/ , "%s", options);
  result=strtok_r(temp, delims, &saveptr);
  while(!(result == ((char *)NULL)))
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(result, "rw");
    if(return_value_strcmp_1 == 0)
      return 1;

    result=strtok_r((char *)(void *)0, delims, &saveptr);
  }
  return 0;
}

// generic_get_fstype
// file filesys.h line 49
signed int generic_get_fstype(char *fsname, signed int *fstype)
{
  signed int i = 0;
  for( ; !(filesys[(signed long int)i].name == ((char *)NULL)); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(filesys[(signed long int)i].name, fsname);
    if(return_value_strcmp_1 == 0)
    {
      *fstype = i;
      return 0;
    }

  }
  *fstype = -1;
  return -1;
}

// generic_get_mntinfo
// file filesys.h line 50
signed int generic_get_mntinfo(char *devname, signed int *readwrite, char *mntbuf, signed int maxmntbuf, char *optbuf, signed int maxoptbuf, char *fsbuf, signed int maxfsbuf)
{
  char col_fs[128l];
  signed int devisroot = 0;
  struct stat64 devstat;
  struct stat64 rootstat;
  signed long int major;
  signed long int minor;
  char delims[5l] = { ' ', '\t', '\n', ':', 0 };
  struct utsname suname;
  char col_dev[128l];
  char col_mnt[128l];
  char col_opt[128l];
  char line[1024l];
  char temp[2048l];
  char *saveptr;
  char *result;
  struct _IO_FILE *f;
  signed int sep;
  signed int i;
  uname(&suname);
  *readwrite = -1;
  memset((void *)mntbuf, 0, (unsigned long int)maxmntbuf);
  memset((void *)optbuf, 0, (unsigned long int)maxoptbuf);
  signed int return_value_stat64_9;
  return_value_stat64_9=stat64(devname, &devstat);
  signed int return_value_feof_3;
  unsigned int return_value_gnu_dev_minor_6;
  if(return_value_stat64_9 == 0)
  {
    f=fopen("/proc/self/mountinfo", "rb");
    if(!(f == ((struct _IO_FILE *)NULL)))
    {
      unsigned int return_value_gnu_dev_major_1;
      return_value_gnu_dev_major_1=gnu_dev_major(devstat.st_rdev);
      unsigned int return_value_gnu_dev_minor_2;
      return_value_gnu_dev_minor_2=gnu_dev_minor(devstat.st_rdev);
      fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_get_mntinfo", 174, "device=[%s] has major=[%ld] and minor=[%ld]\n", devname, (signed long int)return_value_gnu_dev_major_1, (signed long int)return_value_gnu_dev_minor_2);
      do
      {
        return_value_feof_3=feof(f);
        if(!(return_value_feof_3 == 0))
          break;

        signed int return_value_stream_readline_8;
        return_value_stream_readline_8=stream_readline(f, line, 1024);
        if(return_value_stream_readline_8 >= 2)
        {
          result=strtok_r(line, delims, &saveptr);
          major = (signed long int)-1;
          minor = (signed long int)-1;
          sep = -1;
          col_opt[(signed long int)0] = (char)0;
          col_fs[(signed long int)0] = col_opt[(signed long int)0];
          col_mnt[(signed long int)0] = col_fs[(signed long int)0];
          col_dev[(signed long int)0] = col_mnt[(signed long int)0];
          i = 0;
          for( ; !(result == ((char *)NULL)); i = i + 1)
          {
            signed int return_value_strcmp_4;
            return_value_strcmp_4=strcmp(result, "-");
            if(return_value_strcmp_4 == 0)
              sep = i;

            switch(i)
            {
              case 2:
              {
                major=atol(result);
                break;
              }
              case 3:
              {
                minor=atol(result);
                break;
              }
              case 5:
                snprintf(col_mnt, sizeof(char [128l]) /*128ul*/ , "%s", result);
            }
            if(i == 1 + sep && !(sep == -1))
              snprintf(col_fs, sizeof(char [128l]) /*128ul*/ , "%s", result);

            if(i == 3 + sep && !(sep == -1))
              snprintf(col_opt, sizeof(char [128l]) /*128ul*/ , "%s", result);

            result=strtok_r((char *)(void *)0, delims, &saveptr);
          }
          fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_get_mntinfo", 207, "mountinfo entry: major=[%ld] minor=[%ld] filesys=[%s] col_opt=[%s] col_mnt=[%s]\n", major, minor, (const void *)col_fs, (const void *)col_opt, (const void *)col_mnt);
          unsigned int return_value_gnu_dev_major_7;
          return_value_gnu_dev_major_7=gnu_dev_major(devstat.st_rdev);
          if(major == (signed long int)return_value_gnu_dev_major_7)
          {
            return_value_gnu_dev_minor_6=gnu_dev_minor(devstat.st_rdev);
            if(minor == (signed long int)return_value_gnu_dev_minor_6)
            {
              signed int return_value_generic_get_spacestats_5;
              return_value_generic_get_spacestats_5=generic_get_spacestats(devname, col_mnt, temp, (signed int)sizeof(char [2048l]) /*2048ul*/ );
              if(return_value_generic_get_spacestats_5 == 0)
              {
                fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_get_mntinfo", 213, "found mountinfo entry for device=[%s]: mnt=[%s] fs=[%s] opt=[%s]\n", devname, (const void *)col_mnt, (const void *)col_fs, (const void *)col_opt);
                *readwrite=generic_get_fsrwstatus(col_opt);
                snprintf(mntbuf, (unsigned long int)maxmntbuf, "%s", (const void *)col_mnt);
                snprintf(optbuf, (unsigned long int)maxoptbuf, "%s", (const void *)col_opt);
                snprintf(fsbuf, (unsigned long int)maxfsbuf, "%s", (const void *)col_fs);
                fclose(f);
                return 0;
              }

            }

          }

        }

      }
      while((_Bool)1);
      fclose(f);
    }

  }

  signed int return_value_stat64_11;
  return_value_stat64_11=stat64(devname, &devstat);
  signed int return_value_stat64_10;
  if(return_value_stat64_11 == 0)
  {
    return_value_stat64_10=stat64("/", &rootstat);
    if(return_value_stat64_10 == 0)
    {
      if(devstat.st_rdev == rootstat.st_dev)
      {
        devisroot = 1;
        fsaprintf(1, (_Bool)0, 1 >= 3, "filesys.c", "generic_get_mntinfo", 242, "device [%s] is the root device\n", devname);
      }

    }

  }

  f=fopen("/proc/mounts", "rb");
  signed int return_value_feof_12;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  if(f == ((struct _IO_FILE *)NULL))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "filesys.c", "generic_get_mntinfo", 247, "Cannot open /proc/mounts\n");
    return 1;
  }

  else
  {
    do
    {
      return_value_feof_12=feof(f);
      if(!(return_value_feof_12 == 0))
        break;

      signed int return_value_stream_readline_17;
      return_value_stream_readline_17=stream_readline(f, line, 1024);
      if(return_value_stream_readline_17 >= 2)
      {
        result=strtok_r(line, delims, &saveptr);
        col_opt[(signed long int)0] = (char)0;
        col_fs[(signed long int)0] = col_opt[(signed long int)0];
        col_mnt[(signed long int)0] = col_fs[(signed long int)0];
        col_dev[(signed long int)0] = col_mnt[(signed long int)0];
        i = 0;
        for( ; !(result == ((char *)NULL)) && !(i >= 4); i = i + 1)
        {
          switch(i)
          {
            case 0:
            {
              snprintf(col_dev, sizeof(char [128l]) /*128ul*/ , "%s", result);
              break;
            }
            case 1:
            {
              snprintf(col_mnt, sizeof(char [128l]) /*128ul*/ , "%s", result);
              break;
            }
            case 2:
            {
              snprintf(col_fs, sizeof(char [128l]) /*128ul*/ , "%s", result);
              break;
            }
            case 3:
              snprintf(col_opt, sizeof(char [128l]) /*128ul*/ , "%s", result);
          }
          result=strtok_r((char *)(void *)0, delims, &saveptr);
        }
        if(devisroot == 1)
        {
          return_value_strcmp_14=strcmp(col_mnt, "/");
          if(return_value_strcmp_14 == 0)
          {
            return_value_strcmp_13=strcmp(col_fs, "rootfs");
            if(!(return_value_strcmp_13 == 0))
              snprintf(col_dev, sizeof(char [128l]) /*128ul*/ , "%s", devname);

          }

        }

        fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_get_mntinfo", 280, "mount entry: col_dev=[%s] col_mnt=[%s] col_fs=[%s] col_opt=[%s]\n", (const void *)col_dev, (const void *)col_mnt, (const void *)col_fs, (const void *)col_opt);
        signed int return_value_devcmp_16;
        return_value_devcmp_16=devcmp(col_dev, devname);
        if(return_value_devcmp_16 == 0)
        {
          signed int return_value_generic_get_spacestats_15;
          return_value_generic_get_spacestats_15=generic_get_spacestats(col_dev, col_mnt, temp, (signed int)sizeof(char [2048l]) /*2048ul*/ );
          if(return_value_generic_get_spacestats_15 == 0)
          {
            fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_get_mntinfo", 286, "found mount entry for device=[%s]: mnt=[%s] fs=[%s] opt=[%s]\n", devname, (const void *)col_mnt, (const void *)col_fs, (const void *)col_opt);
            *readwrite=generic_get_fsrwstatus(col_opt);
            snprintf(mntbuf, (unsigned long int)maxmntbuf, "%s", (const void *)col_mnt);
            snprintf(optbuf, (unsigned long int)maxoptbuf, "%s", (const void *)col_opt);
            snprintf(fsbuf, (unsigned long int)maxfsbuf, "%s", (const void *)col_fs);
            fclose(f);
            return 0;
          }

        }

      }

    }
    while((_Bool)1);
    fclose(f);
    return -1;
  }
}

// generic_get_spacestats
// file filesys.c line 75
signed int generic_get_spacestats(char *dev, char *mnt, char *text, signed int textlen)
{
  struct statfs stf;
  struct stat64 st;
  memset((void *)text, 0, (unsigned long int)textlen);
  signed int return_value_stat64_1;
  return_value_stat64_1=stat64(dev, &st);
  if(!(return_value_stat64_1 == 0))
    return -1;

  else
  {
    signed int return_value_statfs_2;
    return_value_statfs_2=statfs(dev, &stf);
    if(!(return_value_statfs_2 == 0))
      return -1;

    else
      if(!((61440u & st.st_mode) == 24576u))
        return -1;

      else
        return 0;
  }
}

// generic_mount
// file filesys.h line 51
signed int generic_mount(char *partition, char *mntbuf, char *fsbuf, char *mntopt, signed int flags)
{
  _Bool tmp_if_expr_1;
  if(fsbuf == ((char *)NULL) || mntbuf == ((char *)NULL) || partition == ((char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(fsbuf[(signed long int)0] != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "generic_mount", 305, "invalid parameters\n");
    return -1;
  }

  else
  {
    flags = flags | 1024 | 2048;
    fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_mount", 313, "trying to mount [%s] on [%s] as [%s] with options [%s]\n", partition, mntbuf, fsbuf, mntopt);
    signed int return_value_mount_2;
    return_value_mount_2=mount(partition, mntbuf, fsbuf, (unsigned long int)flags, (const void *)mntopt);
    if(!(return_value_mount_2 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "generic_mount", 315, "partition [%s] cannot be mounted on [%s] as [%s] with options [%s]\n", partition, mntbuf, fsbuf, mntopt);
      return -1;
    }

    else
    {
      fsaprintf(2, (_Bool)0, 2 >= 3, "filesys.c", "generic_mount", 318, "partition [%s] was successfully mounted on [%s] as [%s] with options [%s]\n", partition, mntbuf, fsbuf, mntopt);
      return 0;
    }
  }
}

// generic_umount
// file filesys.h line 53
signed int generic_umount(char *mntbuf)
{
  signed int res = 0;
  signed int i;
  _Bool tmp_if_expr_3;
  signed int return_value_umount2_2;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  if(mntbuf == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "generic_umount", 328, "invalid param: mntbuf is null\n");
    return -1;
  }

  else
  {
    fsaprintf(4, (_Bool)0, 4 >= 3, "filesys.c", "generic_umount", 332, "unmount_partition(%s)\n", mntbuf);
    i = 0;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 0;
    do
    {
      if(!(i >= 4))
      {
        return_value_umount2_2=umount2(mntbuf, 0);
        res = (signed int)(return_value_umount2_2 != 0);
        tmp_if_expr_3 = res != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        return_value___errno_location_4=__errno_location();
        tmp_if_expr_5 = *return_value___errno_location_4 == 16 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(!tmp_if_expr_5)
        break;

      sync();
      sleep((unsigned int)(i + 1));
      i = i + 1;
    }
    while((_Bool)1);
    if(!(res == 0))
      fsaprintf(0, (_Bool)0, (_Bool)1, "filesys.c", "generic_umount", 339, "Failed to umount device %s after %d attempts\n", mntbuf, (signed int)i);

    return res;
  }
}

// get_abort
// file syncthread.h line 25
signed int get_abort()
{
  signed int mysigs[3l] = { 2, 15, -1 };
  struct anonymous mask_set;
  sigpending(&mask_set);
  signed int i;
  if(g_aborted.counter == 1)
    return 1;

  else
  {
    signed int return_value_sigpending_2;
    return_value_sigpending_2=sigpending(&mask_set);
    if(return_value_sigpending_2 == 0)
    {
      i = 0;
      for( ; !(mysigs[(signed long int)i] == -1); i = i + 1)
      {
        signed int return_value_sigismember_1;
        return_value_sigismember_1=sigismember(&mask_set, mysigs[(signed long int)i]);
        if(!(return_value_sigismember_1 == 0))
        {
          (&g_aborted)->counter = 1;
          return 1;
        }

      }
    }

    return 0;
  }
}

// get_devinfo
// file devinfo.h line 39
signed int get_devinfo(struct s_devinfo *outdev, char *indevname, signed int min, signed int maj)
{
  char sysblkdevname[512l];
  struct blkid_struct_tag_iterate *iter;
  char sysblkinfo[4096l];
  const char *type;
  const char *value;
  struct stat64 statbuf;
  struct dirent *dir;
  char temp[4096l];
  struct blkid_struct_dev *dev;
  struct __dirstream *dirdesc;
  struct _IO_FILE *finfo;
  signed int found;
  signed int fd;
  signed int i;
  memset((void *)outdev, 0, sizeof(struct s_devinfo) /*1888ul*/ );
  outdev->devtype = -1;
  snprintf(outdev->label, sizeof(char [512l]) /*512ul*/ , "<unknown>");
  snprintf(outdev->uuid, sizeof(char [128l]) /*128ul*/ , "<unknown>");
  snprintf(outdev->fsname, sizeof(char [128l]) /*128ul*/ , "<unknown>");
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(indevname);
  _Bool tmp_if_expr_3;
  signed int return_value_memcmp_2;
  if(!(return_value_strlen_1 >= 5ul))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_memcmp_2=memcmp((const void *)indevname, (const void *)"/dev/", (unsigned long int)5);
    tmp_if_expr_3 = return_value_memcmp_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  unsigned int return_value_gnu_dev_major_5;
  unsigned int return_value_gnu_dev_minor_4;
  signed long int return_value_lseek64_7;
  signed int return_value_fstat64_9;
  signed int return_value_close_11;
  unsigned long int return_value_fread_18;
  signed int return_value_fclose_17;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  signed int return_value_blkid_tag_next_21;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
  if(tmp_if_expr_3)
    return -1;

  else
  {
    snprintf(outdev->devname, sizeof(char [256l]) /*256ul*/ , "%s", indevname + (signed long int)5);
    snprintf(outdev->longname, sizeof(char [256l]) /*256ul*/ , "%s", indevname);
    dirdesc=opendir("/dev/mapper");
    if(!(dirdesc == ((struct __dirstream *)NULL)))
    {
      found = 0;
      do
      {
        dir=readdir(dirdesc);
        if(dir == ((struct dirent *)NULL))
          break;

        if(!(found == 0))
          break;

        snprintf(temp, sizeof(char [4096l]) /*4096ul*/ , "/dev/mapper/%s", (const void *)dir->d_name);
        signed int return_value_stat64_6;
        return_value_stat64_6=stat64(temp, &statbuf);
        if(return_value_stat64_6 == 0)
        {
          if((61440u & statbuf.st_mode) == 24576u)
          {
            return_value_gnu_dev_major_5=gnu_dev_major(statbuf.st_rdev);
            if(return_value_gnu_dev_major_5 == (unsigned int)maj)
            {
              return_value_gnu_dev_minor_4=gnu_dev_minor(statbuf.st_rdev);
              if(return_value_gnu_dev_minor_4 == (unsigned int)min)
              {
                snprintf(outdev->longname, sizeof(char [256l]) /*256ul*/ , "%s", (const void *)temp);
                found = 1;
              }

            }

          }

        }

      }
      while((_Bool)1);
      closedir(dirdesc);
    }

    fd=open64(outdev->longname, 00 | 0);
    _Bool tmp_if_expr_8;
    if(!(fd >= 0))
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      return_value_lseek64_7=lseek64(fd, (signed long int)0, 2);
      outdev->devsize = (unsigned long int)return_value_lseek64_7;
      tmp_if_expr_8 = outdev->devsize < (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    }
    _Bool tmp_if_expr_10;
    if(tmp_if_expr_8)
      tmp_if_expr_10 = (_Bool)1;

    else
    {
      return_value_fstat64_9=fstat64(fd, &statbuf);
      tmp_if_expr_10 = return_value_fstat64_9 != 0 ? (_Bool)1 : (_Bool)0;
    }
    _Bool tmp_if_expr_12;
    if(!((61440u & statbuf.st_mode) == 24576u) || tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_close_11=close(fd);
      tmp_if_expr_12 = return_value_close_11 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_12)
      return -1;

    else
    {
      outdev->rdev = statbuf.st_rdev;
      unsigned int return_value_gnu_dev_major_13;
      return_value_gnu_dev_major_13=gnu_dev_major(statbuf.st_rdev);
      outdev->major = (signed int)return_value_gnu_dev_major_13;
      unsigned int return_value_gnu_dev_minor_14;
      return_value_gnu_dev_minor_14=gnu_dev_minor(statbuf.st_rdev);
      outdev->minor = (signed int)return_value_gnu_dev_minor_14;
      format_size(outdev->devsize, outdev->txtsize, (signed int)sizeof(char [64l]) /*64ul*/ , (char)104);
      if(outdev->devsize == 1024ul)
        return -1;

      else
      {
        snprintf(sysblkdevname, sizeof(char [512l]) /*512ul*/ , "%s", (const void *)outdev->devname);
        i = 0;
        for( ; !((signed int)sysblkdevname[(signed long int)i] == 0) && !((unsigned long int)i >= sizeof(char [512l]) /*512ul*/ ); i = i + 1)
          if((signed int)sysblkdevname[(signed long int)i] == 47)
            sysblkdevname[(signed long int)i] = (char)33;

        snprintf(sysblkinfo, sizeof(char [4096l]) /*4096ul*/ , "/sys/block/%s/device", (const void *)sysblkdevname);
        signed int return_value_stat64_19;
        return_value_stat64_19=stat64(sysblkinfo, &statbuf);
        if(return_value_stat64_19 == 0)
        {
          outdev->devtype = 0;
          snprintf(sysblkinfo, sizeof(char [4096l]) /*4096ul*/ , "/sys/block/%s/device/model", (const void *)sysblkdevname);
          finfo=fopen(sysblkinfo, "rb");
          if(!(finfo == ((struct _IO_FILE *)NULL)))
          {
            return_value_fread_18=fread((void *)temp, (unsigned long int)1, sizeof(char [4096l]) /*4096ul*/ , finfo);
            if(return_value_fread_18 >= 1ul)
            {
              return_value_fclose_17=fclose(finfo);
              if(return_value_fclose_17 == 0)
              {
                i = 0;
                do
                {
                  if(!((signed int)temp[(signed long int)i] == 0))
                    tmp_if_expr_15 = (signed int)temp[(signed long int)i] != 13 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_15 = (_Bool)0;
                  if(tmp_if_expr_15)
                    tmp_if_expr_16 = (signed int)temp[(signed long int)i] != 10 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_16 = (_Bool)0;
                  if(!tmp_if_expr_16)
                    break;

                  outdev->name[(signed long int)i] = temp[(signed long int)i];
                  i = i + 1;
                }
                while((_Bool)1);
              }

            }

          }

        }

        else
          outdev->devtype = 1;
        struct blkid_struct_cache *cache = (struct blkid_struct_cache *)(void *)0;
        signed int return_value_blkid_get_cache_20;
        return_value_blkid_get_cache_20=blkid_get_cache(&cache, (const char *)(void *)0);
        if(!(return_value_blkid_get_cache_20 >= 0))
          return -1;

        else
        {
          dev=blkid_get_dev(cache, outdev->longname, 0x0001 | 0x0002);
          if(!(dev == ((struct blkid_struct_dev *)NULL)))
          {
            iter=blkid_tag_iterate_begin(dev);
            do
            {
              return_value_blkid_tag_next_21=blkid_tag_next(iter, &type, &value);
              if(!(return_value_blkid_tag_next_21 == 0))
                break;

              signed int return_value_strcmp_24;
              return_value_strcmp_24=strcmp(type, "LABEL");
              if(return_value_strcmp_24 == 0)
                snprintf(outdev->label, sizeof(char [512l]) /*512ul*/ , "%s", value);

              else
              {
                return_value_strcmp_23=strcmp(type, "UUID");
                if(return_value_strcmp_23 == 0)
                  snprintf(outdev->uuid, sizeof(char [128l]) /*128ul*/ , "%s", value);

                else
                {
                  return_value_strcmp_22=strcmp(type, "TYPE");
                  if(return_value_strcmp_22 == 0)
                    snprintf(outdev->fsname, sizeof(char [128l]) /*128ul*/ , "%s", value);

                }
              }
            }
            while((_Bool)1);
            blkid_tag_iterate_end(iter);
            signed int return_value_strcmp_26;
            return_value_strcmp_26=strcmp(outdev->fsname, "ext3");
            if(return_value_strcmp_26 == 0)
            {
              signed int return_value_ext3_test_25;
              return_value_ext3_test_25=ext3_test(outdev->longname);
              if(return_value_ext3_test_25 == 1)
                snprintf(outdev->fsname, sizeof(char [128l]) /*128ul*/ , "ext3");

              else
                snprintf(outdev->fsname, sizeof(char [128l]) /*128ul*/ , "ext4");
            }

          }

          blkid_put_cache(cache);
          return 0;
        }
      }
    }
  }
}

// get_interrupted
// file syncthread.h line 27
_Bool get_interrupted()
{
  signed int return_value_get_abort_1;
  return_value_get_abort_1=get_abort();
  _Bool tmp_if_expr_3;
  _Bool return_value_get_stopfillqueue_2;
  if(return_value_get_abort_1 == 1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_get_stopfillqueue_2=get_stopfillqueue();
    tmp_if_expr_3 = (signed int)return_value_get_stopfillqueue_2 == 1 ? (_Bool)1 : (_Bool)0;
  }
  return tmp_if_expr_3;
}

// get_objtype_name
// file common.h line 41
char * get_objtype_name(signed int objtype)
{
  switch(objtype)
  {
    case 1:
      return "DIR     ";
    case 2:
      return "SYMLINK ";
    case 8:
      return "REGFILE ";
    case 9:
      return "REGFILEM";
    case 3:
      return "HARDLINK";
    case 4:
      return "CHARDEV ";
    case 5:
      return "BLOCKDEV";
    case 6:
      return "FIFO    ";
    case 7:
      return "SOCKET  ";
    default:
      return "UNKNOWN ";
  }
}

// get_parent_dir_time_attrib
// file common.h line 28
signed int get_parent_dir_time_attrib(char *filepath, char *parentdirbuf, signed int bufsize, struct timeval *tv)
{
  struct stat64 statbuf;
  extract_dirpath(filepath, parentdirbuf, bufsize);
  signed int return_value_lstat64_1;
  return_value_lstat64_1=lstat64(parentdirbuf, &statbuf);
  if(!(return_value_lstat64_1 == 0))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "common.c", "get_parent_dir_time_attrib", 513, "cannot lstat64(%s)\n", parentdirbuf);
    return -1;
  }

  else
    if(!((61440u & statbuf.st_mode) == 16384u))
    {
      fsaprintf(0, (_Bool)1, (_Bool)1, "common.c", "get_parent_dir_time_attrib", 518, "error: [%s] is not a directory\n", parentdirbuf);
      return -1;
    }

    else
    {
      (tv + (signed long int)0)->tv_usec = (signed long int)0;
      (tv + (signed long int)0)->tv_sec = statbuf.st_atim.tv_sec;
      (tv + (signed long int)1)->tv_usec = (signed long int)0;
      (tv + (signed long int)1)->tv_sec = statbuf.st_mtim.tv_sec;
      return 0;
    }
}

// get_path_to_volume
// file common.h line 52
signed int get_path_to_volume(char *newvolbuf, signed int bufsize, char *basepath, signed long int curvol)
{
  char prefix[4096l];
  signed int pathlen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(basepath);
  pathlen = (signed int)return_value_strlen_1;
  if(!(pathlen >= 4))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "common.c", "get_path_to_volume", 594, "archive has an invalid basepath: [%s]\n", basepath);
    return -1;
  }

  else
  {
    if(curvol == 0l)
    {
      char *return_value_realpath_2;
      return_value_realpath_2=realpath(basepath, newvolbuf);
      if(!(return_value_realpath_2 == newvolbuf))
        snprintf(newvolbuf, (unsigned long int)bufsize, "%s", basepath);

    }

    else
    {
      memset((void *)prefix, 0, sizeof(char [4096l]) /*4096ul*/ );
      memcpy((void *)prefix, (const void *)basepath, (unsigned long int)(pathlen - 2));
      snprintf(newvolbuf, (unsigned long int)bufsize, "%s%.2ld", (const void *)prefix, (signed long int)curvol);
    }
    return 0;
  }
}

// get_secthreads
// file syncthread.h line 36
signed int get_secthreads()
{
  return (&g_secthreads)->counter;
}

// get_stopfillqueue
// file syncthread.h line 31
_Bool get_stopfillqueue()
{
  return (_Bool)(&g_stopfillqueue)->counter;
}

// get_timeout
// file queue.c line 38
struct timespec get_timeout()
{
  struct timespec t;
  clock_gettime(0, &t);
  t.tv_sec = t.tv_sec + 1l;
  return t;
}

// getpathtoprog
// file common.c line 254
signed int getpathtoprog(char *buffer, signed int bufsize, char *prog)
{
  char pathtest[4096l];
  char delims[4l] = { ':', '\t', '\n', 0 };
  struct stat bufstat;
  char pathenv[4096l];
  char *saveptr = ((char *)NULL);
  char *result;
  char *vp;
  signed int i;
  memset((void *)buffer, 0, (unsigned long int)bufsize);
  vp=getenv("PATH");
  signed int return_value_access_1;
  if(vp == ((char *)NULL))
    return -1;

  else
  {
    snprintf(pathenv, sizeof(char [4096l]) /*4096ul*/ , "%s", vp);
    result=strtok_r(pathenv, delims, &saveptr);
    i = 0;
    for( ; !(result == ((char *)NULL)); i = i + 1)
    {
      snprintf(pathtest, sizeof(char [4096l]) /*4096ul*/ , "%s/%s", result, prog);
      signed int return_value_stat_2;
      return_value_stat_2=stat(pathtest, &bufstat);
      if(return_value_stat_2 == 0)
      {
        return_value_access_1=access(pathtest, 1);
        if(return_value_access_1 == 0)
        {
          snprintf(buffer, (unsigned long int)bufsize, "%s", (const void *)pathtest);
          return 0;
        }

      }

      result=strtok_r((char *)(void *)0, delims, &saveptr);
    }
    return -1;
  }
}

// inc_secthreads
// file syncthread.h line 34
void inc_secthreads()
{
  __CPROVER_atomic_begin();
  *(&g_secthreads.counter) = *(&g_secthreads.counter) + 1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
}

// is_dir_empty
// file common.c line 174
signed int is_dir_empty(char *path)
{
  char fullpath[4096l];
  struct stat64 statbuf;
  struct dirent *dir;
  struct __dirstream *dirdesc;
  dirdesc=opendir(path);
  signed int return_value_strcmp_2;
  if(dirdesc == ((struct __dirstream *)NULL))
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "common.c", "is_dir_empty", 183, "cannot open directory %s\n", path);
    return -1;
  }

  else
  {
    do
    {
      dir=readdir(dirdesc);
      if(dir == ((struct dirent *)NULL))
        break;

      concatenate_paths(fullpath, (signed int)sizeof(char [4096l]) /*4096ul*/ , path, dir->d_name);
      signed int return_value_lstat64_1;
      return_value_lstat64_1=lstat64(fullpath, &statbuf);
      if(!(return_value_lstat64_1 == 0))
      {
        fsaprintf(0, (_Bool)1, (_Bool)1, "common.c", "is_dir_empty", 191, "cannot stat %s\n", (const void *)fullpath);
        closedir(dirdesc);
        return -1;
      }

      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(dir->d_name, ".");
      if(!(return_value_strcmp_3 == 0))
      {
        return_value_strcmp_2=strcmp(dir->d_name, "..");
        if(!(return_value_strcmp_2 == 0))
        {
          closedir(dirdesc);
          return 1;
        }

      }

    }
    while((_Bool)1);
    closedir(dirdesc);
    return 0;
  }
}

// is_filedir_excluded
// file oper_restore.c line 67
signed int is_filedir_excluded(char *relpath)
{
  char dirpath[4096l];
  char basename[4096l];
  signed int pos;
  extract_basename(relpath, basename, (signed int)sizeof(char [4096l]) /*4096ul*/ );
  signed int return_value_exclude_check_1;
  return_value_exclude_check_1=exclude_check(&g_options.exclude, basename);
  _Bool tmp_if_expr_3;
  signed int return_value_exclude_check_2;
  if(return_value_exclude_check_1 == 1)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_exclude_check_2=exclude_check(&g_options.exclude, relpath);
    tmp_if_expr_3 = return_value_exclude_check_2 == 1 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int return_value_strlen_8;
  signed int return_value_exclude_check_6;
  if(tmp_if_expr_3)
  {
    fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "is_filedir_excluded", 79, "file/dir=[%s] excluded because of its own name/path\n", relpath);
    return 1;
  }

  else
  {
    snprintf(dirpath, sizeof(char [4096l]) /*4096ul*/ , "%s", relpath);
    pos = 0;
    for( ; !(dirpath[(signed long int)pos] == 0); pos = pos + 1)
      ;
    while(pos >= 1)
    {
      while(pos >= 0)
      {
        if((signed int)dirpath[(signed long int)pos] == 47)
          break;

        signed int tmp_post_4 = pos;
        pos = pos - 1;
        dirpath[(signed long int)tmp_post_4] = (char)0;
      }
      if(pos >= 1)
      {
        if((signed int)dirpath[(signed long int)pos] == 47)
          dirpath[(signed long int)pos] = (char)0;

      }

      extract_basename(dirpath, basename, (signed int)sizeof(char [4096l]) /*4096ul*/ );
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(dirpath);
      if(return_value_strlen_9 >= 2ul)
      {
        return_value_strlen_8=strlen(basename);
        if(return_value_strlen_8 >= 1ul)
        {
          signed int return_value_exclude_check_5;
          return_value_exclude_check_5=exclude_check(&g_options.exclude, basename);
          _Bool tmp_if_expr_7;
          if(return_value_exclude_check_5 == 1)
            tmp_if_expr_7 = (_Bool)1;

          else
          {
            return_value_exclude_check_6=exclude_check(&g_options.exclude, dirpath);
            tmp_if_expr_7 = return_value_exclude_check_6 == 1 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_7)
          {
            fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "is_filedir_excluded", 100, "file/dir=[%s] excluded because of its parent=[%s]\n", relpath, (const void *)dirpath);
            return 1;
          }

        }

      }

    }
    return 0;
  }
}

// is_magic_valid
// file common.h line 46
signed int is_magic_valid(char *magic)
{
  signed int i = 0;
  signed int return_value_memcmp_1;
  for( ; !(valid_magic[(signed long int)i] == ((char *)NULL)); i = i + 1)
  {
    return_value_memcmp_1=memcmp((const void *)magic, (const void *)valid_magic[(signed long int)i], (unsigned long int)4);
    if(return_value_memcmp_1 == 0)
      return 1;

  }
  return 0;
}

// jfs_get_reqmntopt
// file fs_jfs.c line 170
signed int jfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
    return 0;
}

// jfs_getinfo
// file fs_jfs.c line 80
signed int jfs_getinfo(struct s_dico *d, char *devname)
{
  struct jfs_superblock sb;
  char uuid[512l];
  signed int ret = 0;
  signed int fd;
  fd=open64(devname, 00 | 0);
  signed long int return_value_lseek_1;
  signed long int return_value_read_2;
  unsigned long int return_value_strlen_3;
  signed int return_value_strncmp_4;
  if(!(fd >= 0))
  {
    ret = -1;
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_getinfo", 89, "cannot open(%s, O_RDONLY)\n", devname);
  }

  else
  {
    return_value_lseek_1=lseek(fd, (signed long int)0x8000, 0);
    if(!(return_value_lseek_1 == 32768l))
    {
      ret = -2;
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_getinfo", 95, "cannot lseek(fd, JFS_SUPER1_OFF, SEEK_SET) on %s\n", devname);
    }

    else
    {
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct jfs_superblock) /*184ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct jfs_superblock) /*184ul*/ ))
      {
        ret = -3;
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_getinfo", 101, "cannot read the jfs superblock on [%s]\n", devname);
      }

      else
      {
        return_value_strlen_3=strlen("JFS1");
        return_value_strncmp_4=strncmp(sb.s_magic, "JFS1", return_value_strlen_3);
        if(!(return_value_strncmp_4 == 0))
        {
          ret = -4;
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_getinfo", 107, "magic different from expectations superblock on %s: magic=[%s], expected=[%s]\n", devname, (const void *)sb.s_magic, (const void *)"JFS1");
        }

        else
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_jfs.c", "jfs_getinfo", 110, "jfs_magic=[%s]\n", (const void *)sb.s_magic);
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_jfs.c", "jfs_getinfo", 113, "jfs_label=[%s]\n", (const void *)sb.s_label);
          dico_add_string(d, (unsigned char)0, (unsigned short int)5, (char *)sb.s_label);
          memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
          uuid_unparse_lower((unsigned char *)sb.s_uuid, uuid);
          dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_jfs.c", "jfs_getinfo", 122, "jfs_uuid=[%s]\n", (const void *)uuid);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
        }
      }
    }

  jfs_getinfo_close:
    ;
    close(fd);
  }

jfs_getinfo_return:
  ;
  return ret;
}

// jfs_mkfs
// file fs_jfs.c line 38
signed int jfs_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char command[2048l];
  char buffer[2048l];
  char options[2048l];
  signed int exitst;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.jfs -V");
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_5;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_mkfs", 47, "mkfs.jfs not found. please install jfsutils on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
    signed int return_value_dico_get_string_3;
    return_value_dico_get_string_3=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_3 == 0)
    {
      return_value_strlen_2=strlen(buffer);
      if(return_value_strlen_2 >= 1ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -L '%s' ", (const void *)buffer);

    }

    signed int return_value_exec_command_4;
    return_value_exec_command_4=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.jfs -q %s %s", (const void *)options, partition);
    if(!(return_value_exec_command_4 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_mkfs", 60, "command [%s] failed\n", (const void *)command);
      return -1;
    }

    else
    {
      memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
      signed int return_value_dico_get_string_6;
      return_value_dico_get_string_6=dico_get_string(d, (unsigned char)0, (unsigned short int)6, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
      if(return_value_dico_get_string_6 == 0)
      {
        return_value_strlen_5=strlen(buffer);
        if(return_value_strlen_5 == 36ul)
          strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -U %s ", (const void *)buffer);

      }

      if(!(options[0l] == 0))
      {
        signed int return_value_exec_command_7;
        return_value_exec_command_7=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "jfs_tune %s %s", partition, (const void *)options);
        if(!(return_value_exec_command_7 == 0) || !(exitst == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_jfs.c", "jfs_mkfs", 72, "command [%s] failed\n", (const void *)command);
          return -1;
        }

      }

      return 0;
    }
  }
}

// jfs_mount
// file fs_jfs.c line 133
signed int jfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  signed int return_value_generic_mount_1;
  return_value_generic_mount_1=generic_mount(partition, mntbuf, fsbuf, (char *)(void *)0, flags);
  return return_value_generic_mount_1;
}

// jfs_test
// file fs_jfs.c line 143
signed int jfs_test(char *devname)
{
  struct jfs_superblock sb;
  signed int fd;
  fd=open64(devname, 00 | 0);
  if(!(fd >= 0))
    return 0;

  else
  {
    signed long int return_value_lseek_1;
    return_value_lseek_1=lseek(fd, (signed long int)0x8000, 0);
    if(!(return_value_lseek_1 == 32768l))
    {
      close(fd);
      return 0;
    }

    else
    {
      signed long int return_value_read_2;
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct jfs_superblock) /*184ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct jfs_superblock) /*184ul*/ ))
      {
        close(fd);
        return 0;
      }

      else
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen("JFS1");
        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(sb.s_magic, "JFS1", return_value_strlen_3);
        if(!(return_value_strncmp_4 == 0))
        {
          close(fd);
          return 0;
        }

        else
        {
          close(fd);
          return 1;
        }
      }
    }
  }
}

// jfs_umount
// file fs_jfs.c line 138
signed int jfs_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

// logfile_close
// file logfile.h line 24
signed int logfile_close()
{
  close(g_logfile);
  return 0;
}

// logfile_open
// file logfile.h line 23
signed int logfile_open()
{
  char logpath[4096l];
  char timestamp[1024l];
  char *logdir = "/var/log";
  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  format_time(timestamp, (signed int)sizeof(char [1024l]) /*1024ul*/ , (unsigned long int)return_value_time_1);
  signed int return_value_getpid_2;
  return_value_getpid_2=getpid();
  snprintf(logpath, sizeof(char [4096l]) /*4096ul*/ , "%s/fsarchiver_%s_%ld.log", logdir, (const void *)timestamp, (signed long int)return_value_getpid_2);
  mkdir_recursive(logdir);
  g_logfile=open64(logpath, 02 | 0100 | 01000 | 0, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  if(g_logfile >= 0)
  {
    fsaprintf(1, (_Bool)0, 1 >= 3, "logfile.c", "logfile_open", 50, "Creating logfile in %s\n", (const void *)logpath);
    fsaprintf(1, (_Bool)0, 1 >= 3, "logfile.c", "logfile_open", 51, "Running fsarchiver version=[%s], fileformat=[%s]\n", (const void *)"0.6.22", (const void *)"FsArCh_002");
    return 0;
  }

  else
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "logfile.c", "logfile_open", 55, "Cannot create logfile in %s\n", (const void *)logpath);
    return -1;
  }
}

// logfile_write
// file logfile.h line 25
signed int logfile_write(char *str, signed int len)
{
  signed long int return_value_write_1;
  if(g_logfile >= 0)
  {
    return_value_write_1=write(g_logfile, (const void *)str, (unsigned long int)len);
    return (signed int)return_value_write_1;
  }

  else
    return -1;
}

// main
// file fsarchiver.c line 419
signed int main(signed int argc, char **argv)
{
  signed int ret;
  signed int return_value___lzo_init_v2_1;
  return_value___lzo_init_v2_1=__lzo_init_v2((unsigned int)0x2080, (signed int)sizeof(signed short int) /*2ul*/ , (signed int)sizeof(signed int) /*4ul*/ , (signed int)sizeof(signed long int) /*8ul*/ , (signed int)sizeof(unsigned int) /*4ul*/ , (signed int)sizeof(unsigned long int) /*8ul*/ , (signed int)(unsigned int)sizeof(unsigned char *) /*8ul*/ , (signed int)sizeof(char *) /*8ul*/ , (signed int)sizeof(void *) /*8ul*/ , (signed int)sizeof(struct lzo_callback_t) /*48ul*/ );
  if(!(return_value___lzo_init_v2_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "main", 426, "internal error - lzo_init() failed\n");
    exit(1);
  }

  signed int return_value_crypto_init_2;
  return_value_crypto_init_2=crypto_init();
  if(!(return_value_crypto_init_2 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "main", 433, "cannot initialize the crypto environment\n");
    exit(1);
  }

  options_init();
  queue_init(&g_queue, (signed long int)32);
  ret=process_cmdline(argc, argv);
  queue_destroy(&g_queue);
  options_destroy();
  crypto_cleanup();
  return (signed int)!(!(ret != 0));
}

// mkdir_recursive
// file common.h line 40
signed int mkdir_recursive(char *path)
{
  char buffer[4096l];
  struct stat64 statbuf;
  signed int len;
  signed int pos;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(path);
  len = (signed int)return_value_strlen_1;
  pos = 0;
  signed int *return_value___errno_location_2;
  for( ; len >= pos; pos = pos + 1)
  {
    _Bool tmp_if_expr_4;
    if((signed int)path[(signed long int)pos] == 47)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)path[(signed long int)pos] == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
    {
      memset((void *)buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
      memcpy((void *)buffer, (const void *)path, (unsigned long int)pos);
      signed int return_value_stat64_3;
      return_value_stat64_3=stat64(buffer, &statbuf);
      if(return_value_stat64_3 == -1)
      {
        return_value___errno_location_2=__errno_location();
        if(*return_value___errno_location_2 == 2)
          mkdir(buffer, (unsigned int)0755);

      }

    }

  }
  return 0;
}

// ntfs_get_reqmntopt
// file fs_ntfs.c line 244
signed int ntfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    strlist_add(reqopt, "streams_interface=xattr");
    return 0;
  }
}

// ntfs_getinfo
// file fs_ntfs.c line 79
signed int ntfs_getinfo(struct s_dico *d, char *devname)
{
  struct s_devinfo devinfo;
  struct s_ntfsinfo info;
  char bootsect[512l];
  signed int fd = -1;
  fd=open64(devname, 00 | 0);
  _Bool tmp_if_expr_2;
  signed long int return_value_read_1;
  if(!(fd >= 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_read_1=read(fd, (void *)bootsect, sizeof(char [512l]) /*512ul*/ );
    tmp_if_expr_2 = (unsigned long int)return_value_read_1 != sizeof(char [512l]) /*512ul*/  ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  signed int return_value_close_3;
  if(tmp_if_expr_2)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_close_3=close(fd);
    tmp_if_expr_4 = return_value_close_3 < 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
  {
    fsaprintf(0, (_Bool)1, (_Bool)1, "fs_ntfs.c", "ntfs_getinfo", 89, "cannot open device or read bootsector on %s\n", devname);
    return -1;
  }

  else
  {
    signed int return_value_memcmp_5;
    return_value_memcmp_5=memcmp((const void *)(bootsect + (signed long int)3), (const void *)"NTFS", (unsigned long int)4);
    if(!(return_value_memcmp_5 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_getinfo", 95, "cannot find the ntfs signature on %s\n", devname);
      return -1;
    }

    else
    {
      signed int return_value_get_devinfo_6;
      return_value_get_devinfo_6=get_devinfo(&devinfo, devname, -1, -1);
      if(!(return_value_get_devinfo_6 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_getinfo", 101, "get_devinfo(%s) failed\n", devname);
        return -1;
      }

      else
      {
        info.bytes_per_sector = (unsigned int)(unsigned short int)*((unsigned short int *)(bootsect + (signed long int)0xB));
        info.sectors_per_clusters = (unsigned int)*((unsigned char *)(bootsect + (signed long int)0xD));
        info.bytes_per_cluster = info.bytes_per_sector * info.sectors_per_clusters;
        info.uuid = (unsigned long int)*((unsigned long int *)(bootsect + (signed long int)0x48));
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_getinfo", 110, "bytes_per_sector=[%lld]\n", (signed long long int)info.bytes_per_sector);
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_getinfo", 111, "sectors_per_clusters=[%lld]\n", (signed long long int)info.sectors_per_clusters);
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_getinfo", 112, "bytes_per_cluster=[%lld]\n", (signed long long int)info.bytes_per_cluster);
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_getinfo", 113, "uuid=[%016llX]\n", (unsigned long long int)info.uuid);
        dico_add_u16(d, (unsigned char)0, (unsigned short int)19, (unsigned short int)info.bytes_per_sector);
        dico_add_u32(d, (unsigned char)0, (unsigned short int)20, info.bytes_per_cluster);
        dico_add_u64(d, (unsigned char)0, (unsigned short int)24, info.uuid);
        dico_add_string(d, (unsigned char)0, (unsigned short int)5, devinfo.label);
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_getinfo", 121, "ntfs_label=[%s]\n", (const void *)devinfo.label);
        dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
        dico_add_string(d, (unsigned char)0, (unsigned short int)26, "streams_interface=xattr");
        return 0;
      }
    }
  }
}

// ntfs_mkfs
// file fs_ntfs.c line 37
signed int ntfs_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char command[2048l];
  char buffer[2048l];
  char options[2048l];
  signed int exitst;
  unsigned long int temp64;
  unsigned int temp32;
  unsigned short int temp16;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.ntfs");
  unsigned long int return_value_strlen_2;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_mkfs", 49, "mkfs.ntfs not found. please install ntfsprogs-2.0.0 on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
    signed int return_value_dico_get_string_3;
    return_value_dico_get_string_3=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_3 == 0)
    {
      return_value_strlen_2=strlen(buffer);
      if(return_value_strlen_2 >= 1ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " --label '%s' ", (const void *)buffer);

    }

    signed int return_value_dico_get_u16_4;
    return_value_dico_get_u16_4=dico_get_u16(d, (unsigned char)0, (unsigned short int)19, &temp16);
    if(return_value_dico_get_u16_4 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -s %ld ", (signed long int)temp16);

    signed int return_value_dico_get_u32_5;
    return_value_dico_get_u32_5=dico_get_u32(d, (unsigned char)0, (unsigned short int)20, &temp32);
    if(return_value_dico_get_u32_5 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -c %ld ", (signed long int)temp32);

    signed int return_value_exec_command_6;
    return_value_exec_command_6=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.ntfs -f %s %s", partition, (const void *)options);
    if(!(return_value_exec_command_6 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_mkfs", 68, "command [%s] failed\n", (const void *)command);
      return -1;
    }

    else
    {
      signed int return_value_dico_get_u64_7;
      return_value_dico_get_u64_7=dico_get_u64(d, (unsigned char)0, (unsigned short int)24, &temp64);
      if(return_value_dico_get_u64_7 == 0)
        ntfs_replace_uuid(partition, (unsigned long int)temp64);

      return 0;
    }
  }
}

// ntfs_mount
// file fs_ntfs.c line 132
signed int ntfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  char minversion[1024l];
  char streamif[1024l];
  signed int year = 0;
  signed int month = 0;
  signed int day = 0;
  char stderrbuf[2048l];
  char command[2048l];
  char options[1024l];
  char delims[3l] = { '\n', '\r', 0 };
  char *saveptr;
  char *result;
  unsigned long int instver = (unsigned long int)0;
  signed int exitst;
  memset((void *)options, 0, sizeof(char [1024l]) /*1024ul*/ );
  memset((void *)stderrbuf, 0, sizeof(char [2048l]) /*2048ul*/ );
  snprintf(minversion, sizeof(char [1024l]) /*1024ul*/ , "ntfs-3g %.4d.%.2d.%.2d (standard release)", 2009, 11, 14);
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, stderrbuf, (signed int)sizeof(char [2048l]) /*2048ul*/ , "ntfs-3g -h");
  unsigned long int return_value_strlen_5;
  char *return_value_strstr_3;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_mount", 155, "ntfs-3g not found. please install %s\nor a newer version on your system or check the PATH.\n", (const void *)minversion);
    return -1;
  }

  else
  {
    result=strtok_r(stderrbuf, delims, &saveptr);
    while(instver == 0ul && !(result == ((char *)NULL)))
    {
      signed int return_value_sscanf_2;
      return_value_sscanf_2=sscanf(result, "ntfs-3g %4d.%2d.%2d ", &year, &month, &day);
      if(return_value_sscanf_2 == 3)
      {
        instver = (unsigned long int)((((unsigned long int)year & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)month & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)day & (unsigned long int)0xFFFF) << 16));
        fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_mount", 164, "ntfs-3g detected version: year=[%.4d], month=[%.2d], day=[%.2d]\n", year, month, day);
      }

      result=strtok_r((char *)(void *)0, delims, &saveptr);
    }
    if(!(instver >= 565483275457265664ul))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_mount", 171, "fsarchiver requires %s to operate. The detected version is too old\n", (const void *)minversion);
      return -1;
    }

    else
      fsaprintf(2, (_Bool)0, 2 >= 3, "fs_ntfs.c", "ntfs_mount", 176, "ntfs-3g has been found: version is %d.%d.%d\n", year, month, day);
    snprintf(streamif, sizeof(char [1024l]) /*1024ul*/ , "xattr");
    if(!(mntinfo == ((char *)NULL)))
    {
      return_value_strlen_5=strlen(mntinfo);
      if(return_value_strlen_5 >= 1ul)
      {
        char *return_value_strstr_4;
        return_value_strstr_4=strstr(mntinfo, "streams_interface=xattr");
        if(!(return_value_strstr_4 == ((char *)NULL)))
          snprintf(streamif, sizeof(char [1024l]) /*1024ul*/ , "xattr");

        else
        {
          return_value_strstr_3=strstr(mntinfo, "streams_interface=windows");
          if(!(return_value_strstr_3 == ((char *)NULL)))
            snprintf(streamif, sizeof(char [1024l]) /*1024ul*/ , "windows");

        }
      }

    }

    strlcatf(options, (signed int)sizeof(char [1024l]) /*1024ul*/ , " -o streams_interface=%s -o efs_raw ", (const void *)streamif);
    if(!((1 & flags) == 0))
      strlcatf(options, (signed int)sizeof(char [1024l]) /*1024ul*/ , " -o ro ");

    signed int return_value_exec_command_6;
    return_value_exec_command_6=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "ntfs-3g %s %s %s", (const void *)options, partition, mntbuf);
    if(!(return_value_exec_command_6 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_mount", 197, "command [%s] failed, make sure a recent version of ntfs-3g is installed\n", (const void *)command);
      return -1;
    }

    else
      return 0;
  }
}

// ntfs_replace_uuid
// file fs_ntfs.c line 253
signed int ntfs_replace_uuid(char *devname, unsigned long int uuid)
{
  unsigned char bootsect[512l];
  signed int fd = -1;
  fd=open64(devname, 02 | 0);
  if(!(fd >= 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_replace_uuid", 260, "cannot open(%s, O_RDWR)\n", devname);
    return -1;
  }

  else
  {
    signed long int return_value_read_1;
    return_value_read_1=read(fd, (void *)bootsect, sizeof(unsigned char [512l]) /*512ul*/ );
    if(!((unsigned long int)return_value_read_1 == sizeof(unsigned char [512l]) /*512ul*/ ))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_replace_uuid", 266, "cannot read the boot sector on %s\n", devname);
      close(fd);
      return -1;
    }

    else
    {
      memcpy((void *)(bootsect + (signed long int)0x48), (const void *)&uuid, sizeof(unsigned long int) /*8ul*/ );
      signed long int return_value_lseek_2;
      return_value_lseek_2=lseek(fd, (signed long int)0, 0);
      if(!(return_value_lseek_2 == 0l))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_replace_uuid", 275, "lseek(fd, 0, SEEK_SET) failed\n");
        close(fd);
        return -1;
      }

      else
      {
        signed long int return_value_write_3;
        return_value_write_3=write(fd, (const void *)bootsect, sizeof(unsigned char [512l]) /*512ul*/ );
        if(!((unsigned long int)return_value_write_3 == sizeof(unsigned char [512l]) /*512ul*/ ))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_replace_uuid", 282, "cannot modify the boot sector on %s\n", devname);
          close(fd);
          return -1;
        }

        else
        {
          close(fd);
          return 0;
        }
      }
    }
  }
}

// ntfs_test
// file fs_ntfs.c line 222
signed int ntfs_test(char *devname)
{
  char bootsect[16384l];
  signed int fd = -1;
  fd=open64(devname, 00 | 0);
  if(!(fd >= 0))
    return 0;

  else
  {
    signed long int return_value_read_1;
    return_value_read_1=read(fd, (void *)bootsect, sizeof(char [16384l]) /*16384ul*/ );
    if(!((unsigned long int)return_value_read_1 == sizeof(char [16384l]) /*16384ul*/ ))
    {
      close(fd);
      return 0;
    }

    else
    {
      signed int return_value_memcmp_2;
      return_value_memcmp_2=memcmp((const void *)(bootsect + (signed long int)3), (const void *)"NTFS", (unsigned long int)4);
      if(!(return_value_memcmp_2 == 0))
      {
        close(fd);
        return 0;
      }

      else
      {
        close(fd);
        return 1;
      }
    }
  }
}

// ntfs_umount
// file fs_ntfs.c line 204
signed int ntfs_umount(char *partition, char *mntbuf)
{
  char command[2048l];
  signed int existst;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "fusermount");
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_umount", 210, "fusermount not found. please install fuse on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    signed int return_value_exec_command_2;
    return_value_exec_command_2=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &existst, (char *)(void *)0, 0, (char *)(void *)0, 0, "fusermount -u %s", mntbuf);
    if(!(return_value_exec_command_2 == 0) || !(existst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_ntfs.c", "ntfs_umount", 215, "cannot unmount [%s]\n", mntbuf);
      return -1;
    }

    else
      return 0;
  }
}

// oper_probe
// file oper_probe.h line 21
signed int oper_probe(_Bool details)
{
  struct s_devinfo blkdev[256l];
  signed int diskcount;
  signed int partcount;
  char temp[1024l];
  signed int res;
  signed int i;
  signed int j;
  res=partlist_getlist(blkdev, 256, &diskcount, &partcount);
  char *return_value_partlist_getinfo_2;
  if(!(res >= 1))
  {
    fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 177, "Failed to detect disks and filesystems\n");
    return -1;
  }

  else
  {
    if(diskcount >= 1)
    {
      fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 184, "[======DISK======] [=============NAME==============] [====SIZE====] [MAJ] [MIN]\n");
      i = 0;
      for( ; !(i >= res); i = i + 1)
        if(blkdev[(signed long int)i].devtype == 0)
          fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 188, "[%-16s] [%-31s] [%12s] [%3d] [%3d]\n", (const void *)blkdev[(signed long int)i].devname, (const void *)blkdev[(signed long int)i].name, (const void *)blkdev[(signed long int)i].txtsize, blkdev[(signed long int)i].major, blkdev[(signed long int)i].minor);

      fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 189, "\n");
    }

    else
      fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 193, "No physical disk found\n");
    if(partcount >= 1)
    {
      j = 0;
      for( ; !(partinfo[(signed long int)j].title[0l] == 0); j = j + 1)
      {
        _Bool tmp_if_expr_1;
        if((signed int)details == 1)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)partinfo[(signed long int)j].detailed == 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 203, "%s", (const void *)partinfo[(signed long int)j].title);

      }
      fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 205, "\n");
      i = 0;
      for( ; !(i >= res); i = i + 1)
        if(blkdev[(signed long int)i].devtype == 1)
        {
          j = 0;
          for( ; !(partinfo[(signed long int)j].title[0l] == 0); j = j + 1)
          {
            _Bool tmp_if_expr_3;
            if((signed int)details == 1)
              tmp_if_expr_3 = (_Bool)1;

            else
              tmp_if_expr_3 = (signed int)partinfo[(signed long int)j].detailed == 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_3)
            {
              return_value_partlist_getinfo_2=partlist_getinfo(temp, (signed int)sizeof(char [1024l]) /*1024ul*/ , &blkdev[(signed long int)i], j);
              fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 215, partinfo[(signed long int)j].format, return_value_partlist_getinfo_2);
            }

          }
          fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 217, "\n");
        }

    }

    else
      fsaprintf(0, (_Bool)0, 0 >= 3, "oper_probe.c", "oper_probe", 223, "No filesystem found\n");
    return 0;
  }
}

// oper_restore
// file oper_restore.h line 23
signed int oper_restore(char *archive, signed int argc, char **argv, signed int oper)
{
  struct s_dico *dicofsinfo[128l];
  struct s_strdico *dicoargv[128l];
  unsigned long int thread_decomp[32l];
  char magic[5l];
  struct s_dico *dicomainhead = (struct s_dico *)(void *)0;
  struct s_dico *dirsinfo = (struct s_dico *)(void *)0;
  unsigned long int thread_reader;
  struct stat64 st;
  char *destdir;
  struct s_extractar exar;
  unsigned long int totalerr = (unsigned long int)0;
  unsigned long int fscost;
  unsigned long int curver;
  signed int errors = 0;
  signed int ret = 0;
  signed int i;
  memset((void *)&exar, 0, sizeof(struct s_extractar) /*8936ul*/ );
  exar.cost_global = (unsigned long int)0;
  exar.cost_current = (unsigned long int)0;
  archreader_init(&exar.ai);
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    dicoargv[(signed long int)i] = (struct s_strdico *)(void *)0;
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    dicofsinfo[(signed long int)i] = (struct s_dico *)(void *)0;
  i = 0;
  for( ; !(i >= 32); i = i + 1)
    thread_decomp[(signed long int)i] = (unsigned long int)0;
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    g_fsbitmap[(signed long int)i] = (unsigned char)0;
  thread_reader = (unsigned long int)0;
  snprintf(exar.ai.basepath, (unsigned long int)4096, "%s", archive);
  signed int return_value_convert_argv_to_strdicos_1;
  switch(oper)
  {
    case 2:
    {
      return_value_convert_argv_to_strdicos_1=convert_argv_to_strdicos(dicoargv, argc, argv);
      if(!(return_value_convert_argv_to_strdicos_1 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "oper_restore", 1378, "convert_argv_to_dico() failed\n");
        goto do_extract_error;
      }

      i = 0;
      for( ; !(i >= 128); i = i + 1)
        g_fsbitmap[(signed long int)i] = (unsigned char)!(!(dicoargv[(signed long int)i] != (struct s_strdico *)(void *)0));
      break;
    }
    case 4:
      g_fsbitmap[(signed long int)0] = (unsigned char)1;
  }
  i = 0;
  for( ; !(i >= 32) && !(i >= g_options.compressjobs); i = i + 1)
  {
    signed int return_value_pthread_create_2;
    return_value_pthread_create_2=pthread_create(&thread_decomp[(signed long int)i], (const union pthread_attr_t *)(void *)0, thread_decomp_fct, (void *)0);
    if(!(return_value_pthread_create_2 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1395, "pthread_create(thread_decomp_fct) failed\n");
      goto do_extract_error;
    }

  }
  signed int return_value_pthread_create_3;
  return_value_pthread_create_3=pthread_create(&thread_reader, (const union pthread_attr_t *)(void *)0, thread_reader_fct, (void *)&exar.ai);
  signed int return_value_extractar_read_mainhead_4;
  signed int return_value_archinfo_show_mainhead_5;
  signed int return_value_archinfo_show_fshead_8;
  signed int return_value_dico_get_u64_9;
  signed int return_value_dico_get_u64_12;
  _Bool tmp_if_expr_14;
  signed int return_value_get_abort_13;
  signed int return_value_get_abort_22;
  signed int return_value_get_abort_24;
  _Bool return_value_get_stopfillqueue_23;
  if(!(return_value_pthread_create_3 == 0))
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1402, "pthread_create(thread_reader_fct) failed\n");

  else
  {
    return_value_extractar_read_mainhead_4=extractar_read_mainhead(&exar, &dicomainhead);
    if(!(return_value_extractar_read_mainhead_4 >= 0))
      fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "oper_restore", 1408, "read_mainhead(%s) failed\n", archive);

    else
    {
      curver = (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)22 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0));
      if(exar.ai.minfsaver >= 1ul)
      {
        fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "oper_restore", 1417, "Current fsarchiver version: %d.%d.%d.%d\n", (signed int)((unsigned long int)curver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)curver >> 0 & (unsigned long int)0xFFFF));
        fsaprintf(2, (_Bool)0, 2 >= 3, "oper_restore.c", "oper_restore", 1419, "Minimum fsarchiver version for that archive: %d.%d.%d.%d\n", (signed int)((unsigned long int)exar.ai.minfsaver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 0 & (unsigned long int)0xFFFF));
      }

      if(!(curver >= exar.ai.minfsaver) && (oper == 2 || oper == 4))
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1424, "This archive can only be restored with fsarchiver %d.%d.%d.%d or more recent\n", (signed int)((unsigned long int)exar.ai.minfsaver >> 48 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 32 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 16 & (unsigned long int)0xFFFF), (signed int)((unsigned long int)exar.ai.minfsaver >> 0 & (unsigned long int)0xFFFF));

      else
      {
        if(oper == 5)
        {
          return_value_archinfo_show_mainhead_5=archinfo_show_mainhead(&exar.ai, dicomainhead);
          if(!(return_value_archinfo_show_mainhead_5 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1430, "archinfo_show_mainhead(%s) failed\n", archive);
            goto do_extract_error;
          }

        }

        switch(exar.ai.archtype)
        {
          case (unsigned int)2:
          {
            if(oper == 2)
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1439, "this archive does not contain filesystems, cannot use \"restfs\". Try \"restdir\" instead.\n");
              goto do_extract_error;
            }

            break;
          }
          case (unsigned int)1:
          {
            if(oper == 4)
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1445, "this archive does not contain simple directories, cannot use \"restdir\". Try \"restfs\" instead.\n");
              goto do_extract_error;
            }

            break;
          }
          default:
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1450, "this archive has an unknown type: %d, cannot continue\n", exar.ai.archtype);
            goto do_extract_error;
          }
        }
        i = 0;
        for( ; !(i >= 128); i = i + 1)
          if(!(dicoargv[(signed long int)i] == ((struct s_strdico *)NULL)))
          {
            if((unsigned long int)i >= exar.ai.fscount)
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1458, "invalid filesystem id: [%d]. the filesystem id must be an integer between 0 and %d\n", (signed int)i, (signed int)(exar.ai.fscount - (unsigned long int)1));
              goto do_extract_error;
            }

          }

        i = 0;
        for( ; exar.ai.archtype == 1u && !(i >= 128) && !((unsigned long int)i >= exar.ai.fscount); i = i + 1)
        {
          signed long int return_value_queue_dequeue_header_6;
          return_value_queue_dequeue_header_6=queue_dequeue_header(&g_queue, &dicofsinfo[(signed long int)i], magic, (unsigned short int *)(void *)0);
          if(!(return_value_queue_dequeue_header_6 >= 1l))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1468, "queue_dequeue_header() failed: cannot read filesystem-info dico\n");
            goto do_extract_error;
          }

          signed int return_value_memcmp_7;
          return_value_memcmp_7=memcmp((const void *)magic, (const void *)"FsIn", (unsigned long int)4);
          if(!(return_value_memcmp_7 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1473, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"FsIn");
            goto do_extract_error;
          }

          if(oper == 5)
          {
            return_value_archinfo_show_fshead_8=archinfo_show_fshead(dicofsinfo[(signed long int)i], i);
            if(!(return_value_archinfo_show_fshead_8 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1478, "archinfo_show_fshead() failed\n");
              goto do_extract_error;
            }

          }

          if(!(dicoargv[(signed long int)i] == ((struct s_strdico *)NULL)))
          {
            return_value_dico_get_u64_9=dico_get_u64(dicofsinfo[(signed long int)i], (unsigned char)0, (unsigned short int)28, &fscost);
            if(return_value_dico_get_u64_9 == 0)
              exar.cost_global = exar.cost_global + fscost;

          }

        }
        if(exar.ai.archtype == 2u && exar.ai.hasdirsinfohead == 1u)
        {
          signed long int return_value_queue_dequeue_header_10;
          return_value_queue_dequeue_header_10=queue_dequeue_header(&g_queue, &dirsinfo, magic, (unsigned short int *)(void *)0);
          if(!(return_value_queue_dequeue_header_10 >= 1l))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1494, "queue_dequeue_header() failed: cannot read the dirsinfo header\n");
            goto do_extract_error;
          }

          signed int return_value_memcmp_11;
          return_value_memcmp_11=memcmp((const void *)magic, (const void *)"DiRs", (unsigned long int)4);
          if(!(return_value_memcmp_11 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1498, "header is not what we expected: found=[%s] and expected=[%s]\n", (const void *)magic, (const void *)"DiRs");
            goto do_extract_error;
          }

          if(!(dirsinfo == ((struct s_dico *)NULL)))
          {
            return_value_dico_get_u64_12=dico_get_u64(dirsinfo, (unsigned char)0, (unsigned short int)1, &exar.cost_global);
            if(!(return_value_dico_get_u64_12 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1502, "cannot read DIRSINFOKEY_TOTALCOST in dirsinfo\n");
              goto do_extract_error;
            }

          }

        }

        if(oper == 2 || oper == 4)
        {
          if(!(exar.ai.cryptalgo == 1u) && !((signed int)g_options.encryptalgo == 2))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1510, "this archive has been encrypted, you have to provide a password on the command line using option '-c'\n");
            goto do_extract_error;
          }

          if(exar.ai.archtype == 1u)
          {
            i = 0;
            do
            {
              if(!(i >= 128) && !((unsigned long int)i >= exar.ai.fscount))
              {
                return_value_get_abort_13=get_abort();
                tmp_if_expr_14 = return_value_get_abort_13 == 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_14 = (_Bool)0;
              if(!tmp_if_expr_14)
                break;

              if(!(dicoargv[(signed long int)i] == ((struct s_strdico *)NULL)))
              {
                exar.fsid = i;
                memset((void *)&exar.stats, 0, sizeof(struct s_stats) /*80ul*/ );
                fsaprintf(1, (_Bool)0, 1 >= 3, "oper_restore.c", "oper_restore", 1523, "============= extracting filesystem %d =============\n", i);
                signed int return_value_extractar_filesystem_extract_15;
                return_value_extractar_filesystem_extract_15=extractar_filesystem_extract(&exar, dicofsinfo[(signed long int)i], dicoargv[(signed long int)i]);
                if(!(return_value_extractar_filesystem_extract_15 == 0))
                {
                  fsaprintf(3, (_Bool)0, 3 >= 3, "oper_restore.c", "oper_restore", 1525, "extract_filesystem(%d) failed\n", i);
                  goto do_extract_error;
                }

                signed int return_value_get_abort_16;
                return_value_get_abort_16=get_abort();
                if(return_value_get_abort_16 == 0)
                  stats_show(exar.stats, i);

                unsigned long int return_value_stats_errcount_17;
                return_value_stats_errcount_17=stats_errcount(exar.stats);
                totalerr = totalerr + return_value_stats_errcount_17;
              }

              i = i + 1;
            }
            while((_Bool)1);
            goto __CPROVER_DUMP_L62;
          }

          if(exar.ai.archtype == 2u)
          {
            exar.fsid = 0;
            destdir = argv[(signed long int)0];
            signed int return_value_stat64_19;
            return_value_stat64_19=stat64(destdir, &st);
            if(!(return_value_stat64_19 == 0))
            {
              signed int *return_value___errno_location_18;
              return_value___errno_location_18=__errno_location();
              if(*return_value___errno_location_18 == 2)
              {
                fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "oper_restore", 1544, "%s does not exist, cannot continue\n", destdir);
                goto __CPROVER_DUMP_L57;
              }

              fsaprintf(0, (_Bool)1, (_Bool)1, "oper_restore.c", "oper_restore", 1547, "fstat64(%s) failed\n", destdir);

            __CPROVER_DUMP_L57:
              ;
              goto do_extract_error;
            }

            if(!((61440u & st.st_mode) == 16384u))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1554, "%s is not a valid directory, cannot continue\n", destdir);
              goto do_extract_error;
            }

            memset((void *)&exar.stats, 0, sizeof(struct s_stats) /*80ul*/ );
            signed int return_value_extractar_extract_read_objects_20;
            return_value_extractar_extract_read_objects_20=extractar_extract_read_objects(&exar, &errors, destdir, 0);
            if(!(return_value_extractar_extract_read_objects_20 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1560, "extract_read_objects(%s) failed\n", destdir);
              goto do_extract_error;
            }

            stats_show(exar.stats, 0);
            unsigned long int return_value_stats_errcount_21;
            return_value_stats_errcount_21=stats_errcount(exar.stats);
            totalerr = totalerr + return_value_stats_errcount_21;
            goto __CPROVER_DUMP_L62;
          }

          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1567, "unsupported archtype: %d\n", exar.ai.archtype);
        }

        else
        {

        __CPROVER_DUMP_L62:
          ;
          return_value_get_abort_22=get_abort();
          if(return_value_get_abort_22 == 1)
            fsaprintf(0, (_Bool)0, 0 >= 3, "oper_restore.c", "oper_restore", 1573, "operation aborted by user\n");

          return_value_get_abort_24=get_abort();
          if(return_value_get_abort_24 == 0)
          {
            return_value_get_stopfillqueue_23=get_stopfillqueue();
            if((signed int)return_value_get_stopfillqueue_23 == 0)
              goto do_extract_success;

          }

        }
      }
    }
  }

do_extract_error:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "oper_restore", 1579, "THREAD-MAIN2: exit error\n");
  ret = -1;

do_extract_success:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "oper_restore", 1583, "THREAD-MAIN2: exit\n");
  set_stopfillqueue();
  signed long int return_value_queue_count_items_todo_25;
  return_value_queue_count_items_todo_25=queue_count_items_todo(&g_queue);
  fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "oper_restore", 1585, "queue_count_items_todo(&g_queue)=%d\n", (signed int)return_value_queue_count_items_todo_25);
  signed long int return_value_queue_count_items_todo_26;
  do
  {
    return_value_queue_count_items_todo_26=queue_count_items_todo(&g_queue);
    if(!(return_value_queue_count_items_todo_26 >= 1l))
      break;

    signed long int return_value_queue_count_items_todo_27;
    return_value_queue_count_items_todo_27=queue_count_items_todo(&g_queue);
    fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "oper_restore", 1587, "queue_count_items_todo(): %ld\n", (signed long int)return_value_queue_count_items_todo_27);
    usleep((unsigned int)10000);
  }
  while((_Bool)1);
  signed long int return_value_queue_count_items_todo_28;
  return_value_queue_count_items_todo_28=queue_count_items_todo(&g_queue);
  fsaprintf(5, (_Bool)0, 5 >= 3, "oper_restore.c", "oper_restore", 1590, "queue_count_items_todo(&g_queue)=%d\n", (signed int)return_value_queue_count_items_todo_28);
  signed int return_value_get_secthreads_29;
  _Bool return_value_queue_get_end_of_queue_30;
  do
  {
    return_value_get_secthreads_29=get_secthreads();
    if(!(return_value_get_secthreads_29 >= 1))
      break;

    return_value_queue_get_end_of_queue_30=queue_get_end_of_queue(&g_queue);
    if(!((signed int)return_value_queue_get_end_of_queue_30 == 0))
      break;

    queue_destroy_first_item(&g_queue);
  }
  while((_Bool)1);
  fsaprintf(4, (_Bool)0, 4 >= 3, "oper_restore.c", "oper_restore", 1594, "THREAD-MAIN2: queue is now empty\n");
  i = 0;
  signed int return_value_pthread_join_31;
  for( ; !(i >= 32) && !(i >= g_options.compressjobs); i = i + 1)
    if(!(thread_decomp[(signed long int)i] == 0ul))
    {
      return_value_pthread_join_31=pthread_join(thread_decomp[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_31 == 0))
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1599, "pthread_join(thread_decomp) failed\n");

    }

  signed int return_value_pthread_join_32;
  if(!(thread_reader == 0ul))
  {
    return_value_pthread_join_32=pthread_join(thread_reader, (void **)(void *)0);
    if(!(return_value_pthread_join_32 == 0))
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_restore.c", "oper_restore", 1602, "pthread_join(thread_reader) failed\n");

  }

  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(!(dicoargv[(signed long int)i] == ((struct s_strdico *)NULL)))
      strdico_destroy(dicoargv[(signed long int)i]);

  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(!(dicofsinfo[(signed long int)i] == ((struct s_dico *)NULL)))
    {
      dico_destroy(dicofsinfo[(signed long int)i]);
      dicofsinfo[(signed long int)i] = (struct s_dico *)(void *)0;
    }

  if(totalerr >= 1ul)
    ret = -1;

  dico_destroy(dicomainhead);
  archreader_destroy(&exar.ai);
  return ret;
}

// oper_save
// file oper_save.h line 21
signed int oper_save(char *archive, signed int argc, char **argv, signed int archtype)
{
  unsigned long int thread_comp[32l];
  struct s_dico *dicofsinfo[128l];
  struct s_devinfo_0 devinfo[128l];
  unsigned long int thread_writer;
  unsigned long int cost_evalfs = (unsigned long int)0;
  unsigned long int totalerr = (unsigned long int)0;
  struct s_dico *dicoend = (struct s_dico *)(void *)0;
  struct s_dico *dirsinfo = (struct s_dico *)(void *)0;
  struct stat64 st;
  struct s_savear save;
  signed int ret = 0;
  signed int i;
  memset((void *)&save, 0, sizeof(struct s_savear) /*934632ul*/ );
  save.cost_global = (unsigned long int)0;
  archwriter_init(&save.ai);
  archwriter_generate_id(&save.ai);
  path_force_extension(save.ai.basepath, 4096, archive, ".fsa");
  thread_writer = (unsigned long int)0;
  i = 0;
  for( ; !(i >= 32); i = i + 1)
    thread_comp[(signed long int)i] = (unsigned long int)0;
  i = 0;
  for( ; !(i >= 128); i = i + 1)
  {
    memset((void *)&devinfo[(signed long int)i], 0, sizeof(struct s_devinfo_0) /*8200ul*/ );
    devinfo[(signed long int)i].mountedbyfsa = (_Bool)0;
    devinfo[(signed long int)i].fstype = -1;
    dicofsinfo[(signed long int)i] = (struct s_dico *)(void *)0;
  }
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(archtype == 1 && !(i >= argc))
      tmp_if_expr_1 = argv[(signed long int)i] != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    signed int return_value_stat64_2;
    return_value_stat64_2=stat64(argv[(signed long int)i], &st);
    if(!((61440u & st.st_mode) == 24576u) || !(return_value_stat64_2 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1191, "%s is not a valid block device\n", argv[(signed long int)i]);
      ret = -1;
      goto do_create_error;
    }

    i = i + 1;
  }
  while((_Bool)1);
  i = 0;
  _Bool tmp_if_expr_3;
  do
  {
    if(archtype == 2 && !(i >= argc))
      tmp_if_expr_3 = argv[(signed long int)i] != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(!tmp_if_expr_3)
      break;

    signed int return_value_stat64_4;
    return_value_stat64_4=stat64(argv[(signed long int)i], &st);
    if(!((61440u & st.st_mode) == 16384u) || !(return_value_stat64_4 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1201, "%s is not a valid directory\n", argv[(signed long int)i]);
      ret = -1;
      goto do_create_error;
    }

    i = i + 1;
  }
  while((_Bool)1);
  i = 0;
  for( ; !(i >= 32) && !(i >= g_options.compressjobs); i = i + 1)
  {
    signed int return_value_pthread_create_5;
    return_value_pthread_create_5=pthread_create(&thread_comp[(signed long int)i], (const union pthread_attr_t *)(void *)0, thread_comp_fct, (void *)0);
    if(!(return_value_pthread_create_5 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1211, "pthread_create(thread_comp_fct) failed\n");
      ret = -1;
      goto do_create_error;
    }

  }
  signed int return_value_pthread_create_6;
  return_value_pthread_create_6=pthread_create(&thread_writer, (const union pthread_attr_t *)(void *)0, thread_writer_fct, (void *)&save.ai);
  signed int return_value_createar_write_mainhead_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_20;
  _Bool return_value_get_interrupted_19;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_26;
  _Bool return_value_get_interrupted_25;
  _Bool return_value_get_interrupted_28;
  unsigned long int return_value_stats_errcount_29;
  _Bool return_value_get_interrupted_30;
  signed int return_value_get_abort_31;
  if(!(return_value_pthread_create_6 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1219, "pthread_create(thread_writer_fct) failed\n");
    ret = -1;
  }

  else
  {
    return_value_createar_write_mainhead_7=createar_write_mainhead(&save, archtype, argc);
    if(!(return_value_createar_write_mainhead_7 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1226, "archive_write_mainhead(%s) failed\n", archive);
      ret = -1;
    }

    else
    {
      if(archtype == 1)
      {
        i = 0;
        do
        {
          if(!(i >= argc))
            tmp_if_expr_8 = argv[(signed long int)i] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_8 = (_Bool)0;
          if(!tmp_if_expr_8)
            break;

          dicofsinfo[(signed long int)i]=dico_alloc();
          if(dicofsinfo[(signed long int)i] == ((struct s_dico *)NULL))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1238, "dico_alloc() failed\n");
            goto do_create_error;
          }

          snprintf(devinfo[(signed long int)i].devpath, sizeof(char [4096l]) /*4096ul*/ , "%s", argv[(signed long int)i]);
          generate_random_tmpdir(devinfo[(signed long int)i].partmount, 4096, i);
          fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "oper_save", 1245, "Mounting filesystem on %s...\n", (const void *)devinfo[(signed long int)i].devpath);
          signed int return_value_filesystem_mount_partition_9;
          return_value_filesystem_mount_partition_9=filesystem_mount_partition(&devinfo[(signed long int)i], dicofsinfo[(signed long int)i], (unsigned short int)i);
          if(!(return_value_filesystem_mount_partition_9 == 0))
          {
            fsaprintf(3, (_Bool)0, 3 >= 3, "oper_save.c", "oper_save", 1247, "archive_filesystem(%s) failed\n", (const void *)devinfo[(signed long int)i].devpath);
            goto do_create_error;
          }

          i = i + 1;
        }
        while((_Bool)1);
        i = 0;
        do
        {
          if(!(i >= argc))
            tmp_if_expr_10 = argv[(signed long int)i] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_10 = (_Bool)0;
          if(!tmp_if_expr_10)
            break;

          cost_evalfs = (unsigned long int)0;
          fsaprintf(1, (_Bool)0, 1 >= 3, "oper_save.c", "oper_save", 1257, "Analysing filesystem on %s...\n", (const void *)devinfo[(signed long int)i].devpath);
          signed int return_value_createar_save_directory_wrapper_11;
          return_value_createar_save_directory_wrapper_11=createar_save_directory_wrapper(&save, devinfo[(signed long int)i].partmount, "/", &cost_evalfs);
          if(!(return_value_createar_save_directory_wrapper_11 == 0))
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "oper_save", 1259, "cannot run evaluation createar_save_directory(%s)\n", (const void *)devinfo[(signed long int)i].partmount);
            goto do_create_error;
          }

          signed int return_value_dico_add_u64_12;
          return_value_dico_add_u64_12=dico_add_u64(dicofsinfo[(signed long int)i], (unsigned char)0, (unsigned short int)28, cost_evalfs);
          if(!(return_value_dico_add_u64_12 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1263, "dico_add_u64(FSYSHEADKEY_TOTALCOST) failed\n");
            goto do_create_error;
          }

          save.cost_global = save.cost_global + cost_evalfs;
          signed long int return_value_queue_add_header_13;
          return_value_queue_add_header_13=queue_add_header(&g_queue, dicofsinfo[(signed long int)i], "FsIn", (unsigned short int)0xFFFF);
          if(!(return_value_queue_add_header_13 == 0l))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1270, "queue_add_header(FSA_MAGIC_FSIN, %s) failed\n", (const void *)devinfo[(signed long int)i].devpath);
            goto do_create_error;
          }

          dicofsinfo[(signed long int)i] = (struct s_dico *)(void *)0;
          i = i + 1;
        }
        while((_Bool)1);
      }

      if(archtype == 2)
      {
        i = 0;
        do
        {
          if(!(i >= argc))
            tmp_if_expr_14 = argv[(signed long int)i] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_14 = (_Bool)0;
          if(!tmp_if_expr_14)
            break;

          cost_evalfs = (unsigned long int)0;
          fsaprintf(1, (_Bool)0, 1 >= 3, "oper_save.c", "oper_save", 1284, "Analysing directory %s...\n", argv[(signed long int)i]);
          signed int return_value_createar_save_directory_wrapper_15;
          return_value_createar_save_directory_wrapper_15=createar_save_directory_wrapper(&save, argv[(signed long int)i], "/", &cost_evalfs);
          if(!(return_value_createar_save_directory_wrapper_15 == 0))
          {
            fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "oper_save", 1286, "cannot run evaluation createar_save_directory(%s)\n", argv[(signed long int)i]);
            goto do_create_error;
          }

          save.cost_global = save.cost_global + cost_evalfs;
          i = i + 1;
        }
        while((_Bool)1);
        dirsinfo=dico_alloc();
        if(dirsinfo == ((struct s_dico *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1294, "dico_alloc() failed\n");
          goto do_create_error;
        }

        signed int return_value_dico_add_u64_16;
        return_value_dico_add_u64_16=dico_add_u64(dirsinfo, (unsigned char)0, (unsigned short int)1, save.cost_global);
        if(!(return_value_dico_add_u64_16 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1298, "dico_add_u64(DIRSINFOKEY_TOTALCOST) failed\n");
          goto do_create_error;
        }

        signed long int return_value_queue_add_header_17;
        return_value_queue_add_header_17=queue_add_header(&g_queue, dirsinfo, "DiRs", (unsigned short int)0xFFFF);
        if(!(return_value_queue_add_header_17 == 0l))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1303, "queue_add_header(FSA_MAGIC_DIRS) failed\n");
          goto do_create_error;
        }

        dirsinfo = (struct s_dico *)(void *)0;
      }

      save.cost_current = (unsigned long int)0;
      save.objectid = (unsigned long int)0;
      switch(archtype)
      {
        case 1:
        {
          i = 0;
          do
          {
            if(!(i >= argc))
              tmp_if_expr_18 = devinfo[(signed long int)i].devpath != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_18 = (_Bool)0;
            if(tmp_if_expr_18)
            {
              return_value_get_interrupted_19=get_interrupted();
              tmp_if_expr_20 = (signed int)return_value_get_interrupted_19 == 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_20 = (_Bool)0;
            if(!tmp_if_expr_20)
              break;

            fsaprintf(1, (_Bool)0, 1 >= 3, "oper_save.c", "oper_save", 1319, "============= archiving filesystem %s =============\n", (const void *)devinfo[(signed long int)i].devpath);
            save.fsid = i;
            memset((void *)&save.stats, 0, sizeof(struct s_stats) /*80ul*/ );
            signed int return_value_createar_oper_savefs_21;
            return_value_createar_oper_savefs_21=createar_oper_savefs(&save, &devinfo[(signed long int)i]);
            if(!(return_value_createar_oper_savefs_21 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1323, "archive_filesystem(%s) failed\n", (const void *)devinfo[(signed long int)i].devpath);
              goto do_create_error;
            }

            _Bool return_value_get_interrupted_22;
            return_value_get_interrupted_22=get_interrupted();
            if((signed int)return_value_get_interrupted_22 == 0)
              stats_show(save.stats, i);

            unsigned long int return_value_stats_errcount_23;
            return_value_stats_errcount_23=stats_errcount(save.stats);
            totalerr = totalerr + return_value_stats_errcount_23;
            i = i + 1;
          }
          while((_Bool)1);
          break;
        }
        case 2:
        {
          save.fsid = 0;
          save.fstype = 0;
          save.objectid = (unsigned long int)0;
          memset((void *)&save.stats, 0, sizeof(struct s_stats) /*80ul*/ );
          i = 0;
          do
          {
            if(!(i >= argc))
              tmp_if_expr_24 = argv[(signed long int)i] != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_24 = (_Bool)0;
            if(tmp_if_expr_24)
            {
              return_value_get_interrupted_25=get_interrupted();
              tmp_if_expr_26 = (signed int)return_value_get_interrupted_25 == 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_26 = (_Bool)0;
            if(!tmp_if_expr_26)
              break;

            fsaprintf(1, (_Bool)0, 1 >= 3, "oper_save.c", "oper_save", 1340, "============= archiving directory %s =============\n", argv[(signed long int)i]);
            signed int return_value_createar_oper_savedir_27;
            return_value_createar_oper_savedir_27=createar_oper_savedir(&save, argv[(signed long int)i]);
            if(!(return_value_createar_oper_savedir_27 == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1342, "archive_filesystem(%s) failed\n", argv[(signed long int)i]);
              goto do_create_error;
            }

            i = i + 1;
          }
          while((_Bool)1);
          return_value_get_interrupted_28=get_interrupted();
          if((signed int)return_value_get_interrupted_28 == 0)
            stats_show(save.stats, 0);

          return_value_stats_errcount_29=stats_errcount(save.stats);
          totalerr = totalerr + return_value_stats_errcount_29;
          dicoend=dico_alloc();
          if(dicoend == ((struct s_dico *)NULL))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1351, "dicoend=dico_alloc() failed\n");
            goto do_create_error;
          }

          queue_add_header(&g_queue, dicoend, "DaEn", (unsigned short int)0xFFFF);
          break;
        }
        default:
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1360, "unsupported archtype: %d\n", archtype);
          goto do_create_error;
        }
      }
      return_value_get_interrupted_30=get_interrupted();
      if((signed int)return_value_get_interrupted_30 == 0)
        goto do_create_success;

      return_value_get_abort_31=get_abort();
      if(return_value_get_abort_31 == 1)
        fsaprintf(0, (_Bool)0, 0 >= 3, "oper_save.c", "oper_save", 1367, "operation aborted by user\n");

    }
  }

do_create_error:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "oper_save", 1370, "THREAD-MAIN1: exit error\n");
  ret = -1;

do_create_success:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "oper_save.c", "oper_save", 1374, "THREAD-MAIN1: exit\n");
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if((signed int)devinfo[(signed long int)i].mountedbyfsa == 1)
    {
      fsaprintf(2, (_Bool)0, 2 >= 3, "oper_save.c", "oper_save", 1380, "unmounting [%s] which is mounted on [%s]\n", (const void *)devinfo[(signed long int)i].devpath, (const void *)devinfo[(signed long int)i].partmount);
      signed int return_value;
      return_value=filesys[(signed long int)devinfo[(signed long int)i].fstype].umount(devinfo[(signed long int)i].devpath, devinfo[(signed long int)i].partmount);
      if(!(return_value == 0))
        fsaprintf(0, (_Bool)1, (_Bool)1, "oper_save.c", "oper_save", 1382, "cannot umount [%s]\n", (const void *)devinfo[(signed long int)i].partmount);

      else
        rmdir(devinfo[(signed long int)i].partmount);
    }

  queue_set_end_of_queue(&g_queue, (_Bool)1);
  i = 0;
  signed int return_value_pthread_join_32;
  for( ; !(i >= 32) && !(i >= g_options.compressjobs); i = i + 1)
    if(!(thread_comp[(signed long int)i] == 0ul))
    {
      return_value_pthread_join_32=pthread_join(thread_comp[(signed long int)i], (void **)(void *)0);
      if(!(return_value_pthread_join_32 == 0))
        fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1392, "pthread_join(thread_comp[%d]) failed\n", i);

    }

  signed int return_value_pthread_join_33;
  if(!(thread_writer == 0ul))
  {
    return_value_pthread_join_33=pthread_join(thread_writer, (void **)(void *)0);
    if(!(return_value_pthread_join_33 == 0))
      fsaprintf(0, (_Bool)0, (_Bool)1, "oper_save.c", "oper_save", 1395, "pthread_join(thread_writer) failed\n");

  }

  if(!(ret == 0))
    archwriter_remove(&save.ai);

  if(totalerr >= 1ul)
    ret = -1;

  archwriter_destroy(&save.ai);
  return ret;
}

// options_destroy
// file options.h line 49
signed int options_destroy()
{
  signed int return_value_strlist_destroy_1;
  return_value_strlist_destroy_1=strlist_destroy(&g_options.exclude);
  if(!(return_value_strlist_destroy_1 == 0))
    return -1;

  else
  {
    memset((void *)&g_options, 0, sizeof(struct s_options) /*632ul*/ );
    return 0;
  }
}

// options_init
// file options.h line 48
signed int options_init()
{
  memset((void *)&g_options, 0, sizeof(struct s_options) /*632ul*/ );
  signed int return_value_strlist_init_1;
  return_value_strlist_init_1=strlist_init(&g_options.exclude);
  if(!(return_value_strlist_init_1 == 0))
    return -1;

  else
    return 0;
}

// options_select_compress_level
// file options.h line 50
signed int options_select_compress_level(signed int opt)
{
  switch(opt)
  {
    case 1:
    {
      g_options.compressalgo = (unsigned short int)2;
      g_options.compresslevel = 3;
      break;
    }
    case 2:
    {
      g_options.compressalgo = (unsigned short int)3;
      g_options.compresslevel = 3;
      break;
    }
    case 3:
    {
      g_options.compressalgo = (unsigned short int)3;
      g_options.compresslevel = 6;
      break;
    }
    case 4:
    {
      g_options.compressalgo = (unsigned short int)3;
      g_options.compresslevel = 9;
      break;
    }
    case 5:
    {
      g_options.compressalgo = (unsigned short int)4;
      g_options.datablocksize = (unsigned int)262144;
      g_options.compresslevel = 2;
      break;
    }
    case 6:
    {
      g_options.compressalgo = (unsigned short int)4;
      g_options.datablocksize = (unsigned int)524288;
      g_options.compresslevel = 5;
      break;
    }
    case 7:
    {
      g_options.compressalgo = (unsigned short int)5;
      g_options.datablocksize = (unsigned int)262144;
      g_options.compresslevel = 1;
      break;
    }
    case 8:
    {
      g_options.compressalgo = (unsigned short int)5;
      g_options.datablocksize = (unsigned int)524288;
      g_options.compresslevel = 6;
      break;
    }
    case 9:
    {
      g_options.compressalgo = (unsigned short int)5;
      g_options.datablocksize = (unsigned int)921600;
      g_options.compresslevel = 9;
      break;
    }
    default:
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "options.c", "options_select_compress_level", 106, "invalid compression level: %d\n", opt);
      return -1;
    }
  }
  return 0;
}

// partlist_getinfo
// file oper_probe.c line 149
char * partlist_getinfo(char *bufdat, signed int bufsize, struct s_devinfo *blkdev, signed int item)
{
  memset((void *)bufdat, 0, (unsigned long int)bufsize);
  switch(item)
  {
    case 0:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->devname);
      break;
    }
    case 1:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->fsname);
      break;
    }
    case 2:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->label);
      break;
    }
    case 3:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->txtsize);
      break;
    }
    case 4:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%d", blkdev->major);
      break;
    }
    case 5:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%d", blkdev->minor);
      break;
    }
    case 6:
    {
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->longname);
      break;
    }
    case 7:
      snprintf(bufdat, (unsigned long int)bufsize, "%s", (const void *)blkdev->uuid);
  }
  return bufdat;
}

// partlist_getlist
// file oper_probe.c line 38
signed int partlist_getlist(struct s_devinfo *blkdev, signed int maxblkdev, signed int *diskcount, signed int *partcount)
{
  struct s_devinfo blkdev1[256l];
  struct s_devinfo tmpdev;
  signed int best;
  signed int pos = 0;
  char devname[1024l];
  char longname[1024l];
  char delims[4l] = { ' ', '\t', '\n', 0 };
  char line[1024l];
  char *saveptr;
  char *result;
  char major[256l];
  char minor[256l];
  struct _IO_FILE *fpart;
  signed int count = 0;
  signed int i;
  signed int j;
  *diskcount = 0;
  *partcount = 0;
  fpart=fopen("/proc/partitions", "rb");
  signed int return_value_feof_1;
  signed int return_value_atoi_3;
  _Bool tmp_if_expr_5;
  signed int return_value_atoi_4;
  if(fpart == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    do
    {
      return_value_feof_1=feof(fpart);
      if(!(return_value_feof_1 == 0))
        break;

      if(count >= 256)
        break;

      if(count >= maxblkdev)
        break;

      signed int return_value_stream_readline_11;
      return_value_stream_readline_11=stream_readline(fpart, line, (signed int)sizeof(char [1024l]) /*1024ul*/ );
      if(return_value_stream_readline_11 >= 2)
      {
        major[(signed long int)0] = (char)0;
        minor[(signed long int)0] = major[(signed long int)0];
        devname[(signed long int)0] = (char)0;
        result=strtok_r(line, delims, &saveptr);
        i = 0;
        for( ; !(result == ((char *)NULL)) && !(i >= 5); i = i + 1)
        {
          switch(i)
          {
            case 0:
            {
              snprintf(major, sizeof(char [256l]) /*256ul*/ , "%s", result);
              break;
            }
            case 1:
            {
              snprintf(minor, sizeof(char [256l]) /*256ul*/ , "%s", result);
              break;
            }
            case 3:
              snprintf(devname, sizeof(char [1024l]) /*1024ul*/ , "%s", result);
          }
          result=strtok_r((char *)(void *)0, delims, &saveptr);
        }
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(devname);
        _Bool tmp_if_expr_6;
        if(return_value_strlen_2 == 0ul)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_atoi_3=atoi(major);
          if(return_value_atoi_3 == 0)
          {
            return_value_atoi_4=atoi(minor);
            tmp_if_expr_5 = return_value_atoi_4 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_5 = (_Bool)0;
          tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          continue;

        snprintf(longname, sizeof(char [1024l]) /*1024ul*/ , "/dev/%s", (const void *)devname);
        signed int return_value_atoi_7;
        return_value_atoi_7=atoi(minor);
        signed int return_value_atoi_8;
        return_value_atoi_8=atoi(major);
        signed int return_value_get_devinfo_9;
        return_value_get_devinfo_9=get_devinfo(&tmpdev, longname, return_value_atoi_7, return_value_atoi_8);
        if(!(return_value_get_devinfo_9 == 0))
          continue;

        i = 0;
        for( ; !(i >= count); i = i + 1)
          ;
        signed int tmp_post_10 = count;
        count = count + 1;
        blkdev1[(signed long int)tmp_post_10] = tmpdev;
      }

    }
    while((_Bool)1);
    fclose(fpart);
    pos = 0;
    i = 0;
    for( ; !(i >= count); i = i + 1)
    {
      j = 0;
      best = -1;
      for( ; best == -1 && !(j >= count); j = j + 1)
        if(!(blkdev1[(signed long int)j].rdev == 0ul))
          best = j;

      j = 0;
      for( ; !(j >= count); j = j + 1)
        if(blkdev1[(signed long int)j].rdev >= 1ul)
        {
          if(!(blkdev1[(signed long int)j].rdev >= blkdev1[(signed long int)best].rdev))
            best = j;

        }

      switch(blkdev1[(signed long int)best].devtype)
      {
        case 1:
        {
          *partcount = *partcount + 1;
          break;
        }
        case 0:
          *diskcount = *diskcount + 1;
      }
      signed int tmp_post_12 = pos;
      pos = pos + 1;
      blkdev[(signed long int)tmp_post_12] = blkdev1[(signed long int)best];
      blkdev1[(signed long int)best].rdev = (unsigned long int)0;
    }
    return count;
  }
}

// path_force_extension
// file common.h line 30
signed int path_force_extension(char *buf, signed int bufsize, char *origpath, char *ext)
{
  signed int oldlen;
  signed int extlen;
  signed int return_value_memcmp_3;
  if(buf == ((char *)NULL) || ext == ((char *)NULL) || origpath == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "common.c", "path_force_extension", 445, "a parameter is null\n");
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(origpath);
    oldlen = (signed int)return_value_strlen_1;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(ext);
    extlen = (signed int)return_value_strlen_2;
    _Bool tmp_if_expr_4;
    if(!(oldlen >= extlen))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_memcmp_3=memcmp((const void *)((origpath + (signed long int)oldlen) - (signed long int)extlen), (const void *)ext, (unsigned long int)extlen);
      tmp_if_expr_4 = return_value_memcmp_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
      snprintf(buf, (unsigned long int)bufsize, "%s%s", origpath, ext);

    else
      snprintf(buf, (unsigned long int)bufsize, "%s", origpath);
    return 0;
  }
}

// process_cmdline
// file fsarchiver.c line 140
signed int process_cmdline(signed int argc, char **argv)
{
  char *partition[128l];
  _Bool runasroot = (_Bool)1;
  char *probemode;
  struct anonymous mask_set;
  _Bool probedetailed = (_Bool)0;
  char *command = (char *)(void *)0;
  char *archive = (char *)(void *)0;
  char tempbuf[1024l];
  char *progname;
  signed int fscount;
  signed int argcok;
  signed int ret = 0;
  signed int cmd;
  signed int c;
  memset((void *)partition, 0, sizeof(char *[128l]) /*1024ul*/ );
  progname = argv[(signed long int)0];
  g_options.overwrite = (_Bool)0;
  g_options.allowsaverw = (_Bool)0;
  g_options.dontcheckmountopts = (_Bool)0;
  g_options.verboselevel = 0;
  g_options.debuglevel = 0;
  g_options.compressjobs = 1;
  g_options.fsacomplevel = (unsigned short int)3;
  g_options.compressalgo = (unsigned short int)3;
  g_options.compresslevel = 6;
  g_options.datablocksize = (unsigned int)262144;
  g_options.encryptalgo = (unsigned short int)1;
  snprintf(g_options.archlabel, sizeof(char [512l]) /*512ul*/ , "<none>");
  g_options.encryptpass[(signed long int)0] = (unsigned char)0;
  signed long long int return_value_atoll_1;
  signed int return_value_atoi_3;
  signed int return_value_options_select_compress_level_4;
  unsigned long int return_value_strlen_6;
  unsigned long int return_value_strlen_7;
  signed int return_value_strcmp_5;
  do
  {
    c=getopt_long(argc, argv, "oaAvdz:j:hVs:c:L:e:", long_options, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 111:
      {
        g_options.overwrite = (_Bool)1;
        break;
      }
      case 97:
      {
        g_options.dontcheckmountopts = (_Bool)1;
        break;
      }
      case 65:
      {
        g_options.allowsaverw = (_Bool)1;
        break;
      }
      case 118:
      {
        g_options.verboselevel = g_options.verboselevel + 1;
        break;
      }
      case 86:
      {
        fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "process_cmdline", 193, "fsarchiver %s (%s)\n", (const void *)"0.6.22", (const void *)"2016-02-13");
        return 0;
      }
      case 100:
      {
        g_options.debuglevel = g_options.debuglevel + 1;
        break;
      }
      case 106:
      {
        g_options.compressjobs=atoi(optarg);
        if(g_options.compressjobs >= 33 || !(g_options.compressjobs >= 1))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 202, "[%s] is not a valid number of jobs. Must be between 1 and %d\n", optarg, 32);
          usage(progname, (_Bool)0);
          return 1;
        }

        break;
      }
      case 101:
      {
        strlist_add(&g_options.exclude, optarg);
        break;
      }
      case 115:
      {
        return_value_atoll_1=atoll(optarg);
        g_options.splitsize = (unsigned long int)return_value_atoll_1 * (unsigned long int)1024LL * (unsigned long int)1024LL;
        if(g_options.splitsize == 0ul)
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 214, "argument of option -s is invalid (%s). It must be a valid integer\n", optarg);
          usage(progname, (_Bool)0);
          return -1;
        }

        else
        {
          char *return_value_format_size_2;
          return_value_format_size_2=format_size(g_options.splitsize, tempbuf, (signed int)sizeof(char [1024l]) /*1024ul*/ , (char)104);
          fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "process_cmdline", 221, "Archive will be split into volumes of %lld bytes (%s)\n", (signed long long int)g_options.splitsize, return_value_format_size_2);
        }
        break;
      }
      case 122:
      {
        return_value_atoi_3=atoi(optarg);
        g_options.fsacomplevel = (unsigned short int)return_value_atoi_3;
        if((signed int)g_options.fsacomplevel >= 10 || !((signed int)g_options.fsacomplevel >= 1))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 227, "[%s] is not a valid compression level, it must be an integer between 1 and 9.\n", optarg);
          usage(progname, (_Bool)0);
          return -1;
        }

        return_value_options_select_compress_level_4=options_select_compress_level((signed int)g_options.fsacomplevel);
        if(!(return_value_options_select_compress_level_4 >= 0))
          return -1;

        if((signed int)g_options.fsacomplevel >= 8)
          fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "process_cmdline", 235, "Compression levels >= 8 may require a huge amount of memory\nPlease read the man page or \"http://www.fsarchiver.org/Compression\" for more details.\n");

        break;
      }
      case 99:
      {
        g_options.encryptalgo = (unsigned short int)2;
        return_value_strlen_6=strlen(optarg);
        _Bool tmp_if_expr_8;
        if(!(return_value_strlen_6 >= 6ul))
          tmp_if_expr_8 = (_Bool)1;

        else
        {
          return_value_strlen_7=strlen(optarg);
          tmp_if_expr_8 = return_value_strlen_7 > (unsigned long int)64 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_8)
        {
          return_value_strcmp_5=strcmp(optarg, "-");
          if(!(return_value_strcmp_5 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 240, "the password lenght is incorrect, it must between %d and %d chars, or \"-\" for interactive password prompt.\n", 6, 64);
            usage(progname, (_Bool)0);
            return -1;
          }

        }

        snprintf((char *)g_options.encryptpass, (unsigned long int)64, "%s", optarg);
        break;
      }
      case 76:
      {
        snprintf(g_options.archlabel, sizeof(char [512l]) /*512ul*/ , "%s", optarg);
        break;
      }
      case 104:
      {
        usage(progname, (_Bool)1);
        return 0;
      }
      default:
      {
        usage(progname, (_Bool)0);
        return -1;
      }
    }
  }
  while((_Bool)1);
  argc = argc - optind;
  argv = argv + (signed long int)optind;
  if(!(argc >= 1))
  {
    fprintf(stderr, "No arguments provided, cannot continue\n");
    usage(progname, (_Bool)0);
    return -1;
  }

  else
  {
    char **tmp_post_9 = argv;
    argv = argv + 1l;
    command = *tmp_post_9;
    argc = argc - 1;
  }
  g_options.smallfilethresh = g_options.datablocksize / (unsigned int)4 < (unsigned int)131072 ? g_options.datablocksize / (unsigned int)4 : (unsigned int)131072;
  fsaprintf(4, (_Bool)0, 4 >= 3, "fsarchiver.c", "process_cmdline", 274, "Files smaller than %ld will be packed with other small files\n", (signed long int)g_options.smallfilethresh);
  signed int return_value_strcmp_15;
  return_value_strcmp_15=strcmp(command, "savefs");
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_10;
  if(return_value_strcmp_15 == 0)
  {
    cmd = 1;
    runasroot = (_Bool)1;
    argcok = (signed int)(argc >= 2);
  }

  else
  {
    return_value_strcmp_14=strcmp(command, "restfs");
    if(return_value_strcmp_14 == 0)
    {
      cmd = 2;
      runasroot = (_Bool)1;
      argcok = (signed int)(argc >= 2);
    }

    else
    {
      return_value_strcmp_13=strcmp(command, "savedir");
      if(return_value_strcmp_13 == 0)
      {
        cmd = 3;
        runasroot = (_Bool)1;
        argcok = (signed int)(argc >= 2);
      }

      else
      {
        return_value_strcmp_12=strcmp(command, "restdir");
        if(return_value_strcmp_12 == 0)
        {
          cmd = 4;
          runasroot = (_Bool)1;
          argcok = (signed int)(argc == 2);
        }

        else
        {
          return_value_strcmp_11=strcmp(command, "archinfo");
          if(return_value_strcmp_11 == 0)
          {
            cmd = 5;
            runasroot = (_Bool)0;
            argcok = (signed int)(argc == 1);
          }

          else
          {
            return_value_strcmp_10=strcmp(command, "probe");
            if(return_value_strcmp_10 == 0)
            {
              cmd = 6;
              runasroot = (_Bool)1;
              argcok = (signed int)(argc <= 1);
            }

            else
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 308, "[%s] is not a valid command.\n", command);
              usage(progname, (_Bool)0);
              return -1;
            }
          }
        }
      }
    }
  }
  unsigned int return_value_geteuid_16;
  unsigned long int return_value_strlen_18;
  _Bool tmp_if_expr_25;
  if(!(argcok == 1))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 315, "invalid number of arguments.\n");
    usage(progname, (_Bool)0);
    return -1;
  }

  else
  {
    if((signed int)runasroot == 1)
    {
      return_value_geteuid_16=geteuid();
      if(!(return_value_geteuid_16 == 0u))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 322, "\"fsarchiver %s\" must be run as root. cannot continue.\n", command);
        return -1;
      }

    }

    signed int return_value_strcmp_21;
    return_value_strcmp_21=strcmp((char *)g_options.encryptpass, "-");
    if(return_value_strcmp_21 == 0)
    {
      signed int passconfirm;
      char *passtmp = (char *)(void *)0;
      passconfirm = (signed int)(cmd == 1 || cmd == 3);
      passtmp=getpass("Enter password: ");
      if(passtmp == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 334, "failed to get interactive password from the console\n");
        return -1;
      }

      unsigned long int return_value_strlen_17;
      return_value_strlen_17=strlen(passtmp);
      _Bool tmp_if_expr_19;
      if(!(return_value_strlen_17 >= 6ul))
        tmp_if_expr_19 = (_Bool)1;

      else
      {
        return_value_strlen_18=strlen(passtmp);
        tmp_if_expr_19 = return_value_strlen_18 > (unsigned long int)64 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_19)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 338, "the password lenght is incorrect, it must between %d and %d chars\n", 6, 64);
        return -1;
      }

      snprintf((char *)g_options.encryptpass, (unsigned long int)64, "%s", passtmp);
      if(passconfirm == 1)
      {
        passtmp=getpass("Confirm password: ");
        if(passtmp == ((char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 346, "failed to get interactive password from the console\n");
          return -1;
        }

        signed int return_value_strcmp_20;
        return_value_strcmp_20=strcmp((char *)g_options.encryptpass, passtmp);
        if(!(return_value_strcmp_20 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 350, "the passwords do not match\n");
          return -1;
        }

      }

    }

    switch(cmd)
    {
      case 1:

      case 2:

      case 3:

      case 4:

      case 5:
      {
        char **tmp_post_22 = argv;
        argv = argv + 1l;
        archive = *tmp_post_22;
        argc = argc - 1;
        break;
      }
      case 6:
      {
        probedetailed = (_Bool)0;
        if(g_options.verboselevel >= 1)
          probedetailed = (_Bool)1;

        if(argc >= 1)
        {
          char **tmp_post_23 = argv;
          argv = argv + 1l;
          probemode = *tmp_post_23;
          argc = argc - 1;
          signed int return_value_strcmp_24;
          return_value_strcmp_24=strcmp(probemode, "detailed");
          if(return_value_strcmp_24 == 0)
            probedetailed = (_Bool)1;

        }

      }
    }
    fscount = 0;
    do
    {
      if(!(fscount >= argc))
        tmp_if_expr_25 = argv[(signed long int)fscount] != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_25 = (_Bool)0;
      if(!tmp_if_expr_25)
        break;

      partition[(signed long int)fscount] = argv[(signed long int)fscount];
      fscount = fscount + 1;
    }
    while((_Bool)1);
    sigemptyset(&mask_set);
    sigaddset(&mask_set, 2);
    sigaddset(&mask_set, 15);
    sigprocmask(2, &mask_set, (struct anonymous *)(void *)0);
    if(g_options.debuglevel >= 1)
      logfile_open();

    switch(cmd)
    {
      case 1:
      {
        ret=oper_save(archive, fscount, partition, 1);
        break;
      }
      case 3:
      {
        ret=oper_save(archive, fscount, partition, 2);
        break;
      }
      case 2:

      case 4:

      case 5:
      {
        ret=oper_restore(archive, fscount, partition, cmd);
        break;
      }
      case 6:
      {
        ret=oper_probe(probedetailed);
        break;
      }
      default:
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "fsarchiver.c", "process_cmdline", 408, "[%s] is not a valid command.\n", command);
        usage(progname, (_Bool)0);
        ret = -1;
      }
    }
    logfile_close();
    return ret;
  }
}

// queue_add_block
// file queue.h line 96
signed long int queue_add_block(struct s_queue *q, struct s_blockinfo *blkinfo, signed int status)
{
  struct s_queueitem *item;
  struct s_queueitem *cur;
  _Bool tmp_if_expr_4;
  if(blkinfo == ((struct s_blockinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_add_block", 195, "a parameter is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct s_queueitem) /*88ul*/ );
    item = (struct s_queueitem *)return_value_malloc_1;
    if(item == ((struct s_queueitem *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_add_block", 202, "malloc(%ld) failed: out of memory\n", (signed long int)sizeof(struct s_queueitem) /*88ul*/ );
      return (signed long int)-2;
    }

    else
    {
      item->type = 1;
      item->status = status;
      item->blkinfo = *blkinfo;
      item->next = (struct s_queueitem *)(void *)0;
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&q->mutex);
      /* assertion pthread_mutex_lock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_lock_2 == 0);
      if((signed int)q->endofqueue == 1)
      {
        signed int return_value_pthread_mutex_unlock_3;
        return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_3 == 0);
        return (signed long int)-5;
      }

      while(!(q->blkmax >= q->blkcount))
      {
        struct timespec t;
        t=get_timeout();
        pthread_cond_timedwait(&q->cond, &q->mutex, &t);
      }
      if(q->head == ((struct s_queueitem *)NULL))
        q->head = item;

      else
      {
        cur = q->head;
        do
        {
          if(!(cur == ((struct s_queueitem *)NULL)))
            tmp_if_expr_4 = cur->next != (struct s_queueitem *)(void *)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_4 = (_Bool)0;
          if(!tmp_if_expr_4)
            break;

          cur = cur->next;
        }
        while((_Bool)1);
        cur->next = item;
      }
      q->blkcount = q->blkcount + 1ul;
      q->itemcount = q->itemcount + 1ul;
      signed long int tmp_post_5 = q->curitemnum;
      q->curitemnum = q->curitemnum + 1l;
      item->itemnum = tmp_post_5;
      signed int return_value_pthread_mutex_unlock_6;
      return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_6 == 0);
      pthread_cond_broadcast(&q->cond);
      return (signed long int)0;
    }
  }
}

// queue_add_header
// file queue.h line 97
signed long int queue_add_header(struct s_queue *q, struct s_dico *d, char *magic, unsigned short int fsid)
{
  struct s_headinfo headinfo;
  if(magic == ((char *)NULL) || d == ((struct s_dico *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_add_header", 249, "parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    memset((void *)&headinfo, 0, sizeof(struct s_headinfo) /*16ul*/ );
    memcpy((void *)headinfo.magic, (const void *)magic, (unsigned long int)4);
    headinfo.fsid = fsid;
    headinfo.dico = d;
    signed long int return_value_queue_add_header_internal_1;
    return_value_queue_add_header_internal_1=queue_add_header_internal(q, &headinfo);
    return return_value_queue_add_header_internal_1;
  }
}

// queue_add_header_internal
// file queue.c line 261
signed long int queue_add_header_internal(struct s_queue *q, struct s_headinfo *headinfo)
{
  struct s_queueitem *item;
  struct s_queueitem *cur;
  _Bool tmp_if_expr_5;
  if(headinfo == ((struct s_headinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_add_header_internal", 267, "parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct s_queueitem) /*88ul*/ );
    item = (struct s_queueitem *)return_value_malloc_1;
    if(item == ((struct s_queueitem *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_add_header_internal", 274, "malloc(%ld) failed: out of memory 1\n", (signed long int)sizeof(struct s_queueitem) /*88ul*/ );
      return (signed long int)-2;
    }

    else
    {
      item->headinfo = *headinfo;
      item->type = 2;
      item->status = 3;
      item->next = (struct s_queueitem *)(void *)0;
      signed int return_value_pthread_mutex_lock_2;
      return_value_pthread_mutex_lock_2=pthread_mutex_lock(&q->mutex);
      /* assertion pthread_mutex_lock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_lock_2 == 0);
      if((signed int)q->endofqueue == 1)
      {
        signed int return_value_pthread_mutex_unlock_3;
        return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_3 == 0);
        return (signed long int)-5;
      }

      while(!(q->blkmax >= q->blkcount))
      {
        struct timespec t;
        t=get_timeout();
        pthread_cond_timedwait(&q->cond, &q->mutex, &t);
      }
      signed long int tmp_post_4 = q->curitemnum;
      q->curitemnum = q->curitemnum + 1l;
      item->itemnum = tmp_post_4;
      if(q->head == ((struct s_queueitem *)NULL))
        q->head = item;

      else
      {
        cur = q->head;
        do
        {
          if(!(cur == ((struct s_queueitem *)NULL)))
            tmp_if_expr_5 = cur->next != (struct s_queueitem *)(void *)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_5 = (_Bool)0;
          if(!tmp_if_expr_5)
            break;

          cur = cur->next;
        }
        while((_Bool)1);
        cur->next = item;
      }
      q->itemcount = q->itemcount + 1ul;
      signed int return_value_pthread_mutex_unlock_6;
      return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_6 == 0);
      pthread_cond_broadcast(&q->cond);
      return (signed long int)0;
    }
  }
}

// queue_check_next_item
// file queue.h line 92
signed long int queue_check_next_item(struct s_queue *q, signed int *type, char *magic)
{
  struct s_queueitem *cur;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  if(type == ((signed int *)NULL) || magic == ((char *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_check_next_item", 634, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    memset((void *)magic, 0, (unsigned long int)4);
    *type = 0;
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      cur = q->head;
      if(!(cur == ((struct s_queueitem *)NULL)))
      {
        if(cur->status == 3)
          break;

      }

      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      struct timespec t;
      t=get_timeout();
      pthread_cond_timedwait(&q->cond, &q->mutex, &t);
    }
    while((_Bool)1);
    _Bool return_value_queuelocked_get_end_of_queue_4;
    return_value_queuelocked_get_end_of_queue_4=queuelocked_get_end_of_queue(q);
    if(!(return_value_queuelocked_get_end_of_queue_4 == (_Bool)0))
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_3 == 0);
      return (signed long int)-5;
    }

    cur = q->head;
    if(!(cur == ((struct s_queueitem *)NULL)))
    {
      if(cur->status == 3)
      {
        if(cur->type == 1)
        {
          *type = cur->type;
          memset((void *)magic, 0, (unsigned long int)4);
          signed int return_value_pthread_mutex_unlock_5;
          return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
          /* assertion pthread_mutex_unlock(&q->mutex)==0 */
          assert(return_value_pthread_mutex_unlock_5 == 0);
          return (signed long int)0;
        }

        else
          if(cur->type == 2)
          {
            memcpy((void *)magic, (const void *)cur->headinfo.magic, (unsigned long int)4);
            *type = cur->type;
            signed int return_value_pthread_mutex_unlock_6;
            return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&q->mutex);
            /* assertion pthread_mutex_unlock(&q->mutex)==0 */
            assert(return_value_pthread_mutex_unlock_6 == 0);
            return (signed long int)0;
          }

          else
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_check_next_item", 675, "invalid item type in queue: type=%d\n", cur->type);
            signed int return_value_pthread_mutex_unlock_7;
            return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&q->mutex);
            /* assertion pthread_mutex_unlock(&q->mutex)==0 */
            assert(return_value_pthread_mutex_unlock_7 == 0);
            return (signed long int)-3;
          }
      }

    }

    signed int return_value_pthread_mutex_unlock_8;
    return_value_pthread_mutex_unlock_8=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_8 == 0);
    pthread_cond_broadcast(&q->cond);
    return (signed long int)-4;
  }
}

// queue_count
// file queue.h line 89
signed long int queue_count(struct s_queue *q)
{
  signed long int itemcount;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_count", 153, "q is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    itemcount = (signed long int)q->itemcount;
    signed int return_value_pthread_mutex_unlock_2;
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_2 == 0);
    return itemcount;
  }
}

// queue_count_items_todo
// file queue.h line 93
signed long int queue_count_items_todo(struct s_queue *q)
{
  struct s_queueitem *cur;
  signed long int count = (signed long int)0;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_count_items_todo", 356, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    cur = q->head;
    for( ; !(cur == ((struct s_queueitem *)NULL)); cur = cur->next)
      if(cur->type == 1)
      {
        if(!(cur->status == 3))
          count = count + 1l;

      }

    signed int return_value_pthread_mutex_unlock_2;
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_2 == 0);
    return count;
  }
}

// queue_count_status
// file queue.c line 165
signed long int queue_count_status(struct s_queue *q, signed int status)
{
  struct s_queueitem *cur;
  signed int count = 0;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_count_status", 171, "q is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    cur = q->head;
    for( ; !(cur == ((struct s_queueitem *)NULL)); cur = cur->next)
    {
      _Bool tmp_if_expr_2;
      if(status == 0)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = cur->status == status ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        count = count + 1;

    }
    signed int return_value_pthread_mutex_unlock_3;
    return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_3 == 0);
    return (signed long int)count;
  }
}

// queue_dequeue_block
// file queue.h line 110
signed long int queue_dequeue_block(struct s_queue *q, struct s_blockinfo *blkinfo)
{
  struct s_queueitem *cur;
  signed long int itemnum;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  if(blkinfo == ((struct s_blockinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_block", 489, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      cur = q->head;
      if(!(cur == ((struct s_queueitem *)NULL)))
      {
        if(cur->status == 3)
          break;

      }

      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      struct timespec t;
      t=get_timeout();
      pthread_cond_timedwait(&q->cond, &q->mutex, &t);
    }
    while((_Bool)1);
    _Bool return_value_queuelocked_get_end_of_queue_4;
    return_value_queuelocked_get_end_of_queue_4=queuelocked_get_end_of_queue(q);
    if(!(return_value_queuelocked_get_end_of_queue_4 == (_Bool)0))
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_3 == 0);
      return (signed long int)-5;
    }

    cur = q->head;
    /* assertion (cur=q->head)!=((void *)0) */
    assert(cur != (struct s_queueitem *)(void *)0);
    _Bool tmp_if_expr_7;
    if(cur->type == 1)
      tmp_if_expr_7 = cur->status == 3 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
    {
      *blkinfo = cur->blkinfo;
      q->head = cur->next;
      itemnum = cur->itemnum;
      free((void *)cur);
      q->blkcount = q->blkcount - 1ul;
      q->itemcount = q->itemcount - 1ul;
      signed int return_value_pthread_mutex_unlock_5;
      return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_5 == 0);
      pthread_cond_broadcast(&q->cond);
      return itemnum;
    }

    else
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_block", 526, "dequeue - wrong type of data in the queue: wanted a block, found an header\n");
      signed int return_value_pthread_mutex_unlock_6;
      return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_6 == 0);
      pthread_cond_broadcast(&q->cond);
      return (signed long int)-6;
    }
  }
}

// queue_dequeue_first
// file queue.h line 111
signed long int queue_dequeue_first(struct s_queue *q, signed int *type, struct s_headinfo *headinfo, struct s_blockinfo *blkinfo)
{
  struct s_queueitem *cur = (struct s_queueitem *)(void *)0;
  signed long int itemfound = (signed long int)-1;
  signed int ret;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  if(blkinfo == ((struct s_blockinfo *)NULL) || headinfo == ((struct s_headinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_first", 428, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      cur = q->head;
      if(!(cur == ((struct s_queueitem *)NULL)))
      {
        if(cur->status == 3)
        {
          if(cur->type == 1)
          {
            q->blkcount = q->blkcount - 1ul;
            *type = cur->type;
            itemfound = cur->itemnum;
            *blkinfo = cur->blkinfo;
            q->head = cur->next;
            free((void *)cur);
            q->itemcount = q->itemcount - 1ul;
            signed int return_value_pthread_mutex_unlock_3;
            return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
            /* assertion pthread_mutex_unlock(&q->mutex)==0 */
            assert(return_value_pthread_mutex_unlock_3 == 0);
            pthread_cond_broadcast(&q->cond);
            return itemfound;
          }

          else
            if(cur->type == 2)
            {
              *headinfo = cur->headinfo;
              *type = cur->type;
              itemfound = cur->itemnum;
              q->head = cur->next;
              free((void *)cur);
              q->itemcount = q->itemcount - 1ul;
              signed int return_value_pthread_mutex_unlock_4;
              return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&q->mutex);
              /* assertion pthread_mutex_unlock(&q->mutex)==0 */
              assert(return_value_pthread_mutex_unlock_4 == 0);
              pthread_cond_broadcast(&q->cond);
              return itemfound;
            }

            else
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_first", 465, "invalid item type in queue\n");
              signed int return_value_pthread_mutex_unlock_5;
              return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
              /* assertion pthread_mutex_unlock(&q->mutex)==0 */
              assert(return_value_pthread_mutex_unlock_5 == 0);
              return (signed long int)-3;
            }
        }

      }

      struct timespec t;
      t=get_timeout();
      pthread_cond_timedwait(&q->cond, &q->mutex, &t);
    }
    while((_Bool)1);
    _Bool return_value_queuelocked_get_end_of_queue_6;
    return_value_queuelocked_get_end_of_queue_6=queuelocked_get_end_of_queue(q);
    ret = (signed int)return_value_queuelocked_get_end_of_queue_6 == 1 ? -5 : -1;
    signed int return_value_pthread_mutex_unlock_7;
    return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_7 == 0);
    return (signed long int)ret;
  }
}

// queue_dequeue_header
// file queue.h line 108
signed long int queue_dequeue_header(struct s_queue *q, struct s_dico **d, char *magicbuf, unsigned short int *fsid)
{
  struct s_headinfo headinfo;
  signed long int lres;
  if(d == ((struct s_dico **)NULL) || magicbuf == ((char *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_header", 539, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    lres=queue_dequeue_header_internal(q, &headinfo);
    if(!(lres >= 1l))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "queue.c", "queue_dequeue_header", 544, "queue_dequeue_header_internal() failed\n");
      return lres;
    }

    else
    {
      memcpy((void *)magicbuf, (const void *)headinfo.magic, (unsigned long int)4);
      *d = headinfo.dico;
      if(!(fsid == ((unsigned short int *)NULL)))
        *fsid = headinfo.fsid;

      return lres;
    }
  }
}

// queue_dequeue_header_internal
// file queue.c line 555
signed long int queue_dequeue_header_internal(struct s_queue *q, struct s_headinfo *headinfo)
{
  struct s_queueitem *cur;
  signed long int itemnum;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  signed int return_value_pthread_mutex_unlock_5;
  signed int return_value_pthread_mutex_unlock_6;
  signed int return_value_pthread_mutex_unlock_7;
  if(headinfo == ((struct s_headinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_header_internal", 561, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      cur = q->head;
      if(!(cur == ((struct s_queueitem *)NULL)))
      {
        if(cur->status == 3)
          break;

      }

      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      struct timespec t;
      t=get_timeout();
      pthread_cond_timedwait(&q->cond, &q->mutex, &t);
    }
    while((_Bool)1);
    _Bool return_value_queuelocked_get_end_of_queue_4;
    return_value_queuelocked_get_end_of_queue_4=queuelocked_get_end_of_queue(q);
    if(!(return_value_queuelocked_get_end_of_queue_4 == (_Bool)0))
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_3 == 0);
      return (signed long int)-5;
    }

    cur = q->head;
    /* assertion (cur=q->head)!=((void *)0) */
    assert(cur != (struct s_queueitem *)(void *)0);
    switch(cur->type)
    {
      case 2:
      {
        q->head = cur->next;
        *headinfo = cur->headinfo;
        itemnum = cur->itemnum;
        free((void *)cur);
        q->itemcount = q->itemcount - 1ul;
        return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_5 == 0);
        pthread_cond_broadcast(&q->cond);
        return itemnum;
      }
      case 1:
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_header_internal", 596, "dequeue - wrong type of data in the queue: expected a dico and found a block\n");
        return_value_pthread_mutex_unlock_6=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_6 == 0);
        pthread_cond_broadcast(&q->cond);
        return (signed long int)-6;
      }
      default:
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_dequeue_header_internal", 601, "dequeue - wrong type of data in the queue: expected a dico and found an unknown item\n");
        return_value_pthread_mutex_unlock_7=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_7 == 0);
        pthread_cond_broadcast(&q->cond);
        return (signed long int)-6;
      }
    }
  }
}

// queue_destroy
// file queue.h line 86
signed long int queue_destroy(struct s_queue *q)
{
  struct s_queueitem *cur;
  struct s_queueitem *next;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_destroy", 85, "q is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    cur = q->head;
    for( ; !(cur == ((struct s_queueitem *)NULL)); cur = next)
    {
      next = cur->next;
      free((void *)cur);
    }
    q->head = (struct s_queueitem *)(void *)0;
    q->itemcount = (unsigned long int)0;
    signed int return_value_pthread_mutex_unlock_2;
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_2 == 0);
    signed int return_value_pthread_mutex_destroy_3;
    return_value_pthread_mutex_destroy_3=pthread_mutex_destroy(&q->mutex);
    /* assertion pthread_mutex_destroy(&q->mutex)==0 */
    assert(return_value_pthread_mutex_destroy_3 == 0);
    signed int return_value_pthread_cond_destroy_4;
    return_value_pthread_cond_destroy_4=pthread_cond_destroy(&q->cond);
    /* assertion pthread_cond_destroy(&q->cond)==0 */
    assert(return_value_pthread_cond_destroy_4 == 0);
    return (signed long int)0;
  }
}

// queue_destroy_first_item
// file queue.h line 100
signed long int queue_destroy_first_item(struct s_queue *q)
{
  struct s_queueitem *cur;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_destroy_first_item", 693, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      cur = q->head;
      if(!(cur == ((struct s_queueitem *)NULL)))
      {
        if(!(cur->status == 2))
          break;

      }

      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      struct timespec t;
      t=get_timeout();
      pthread_cond_timedwait(&q->cond, &q->mutex, &t);
    }
    while((_Bool)1);
    _Bool return_value_queuelocked_get_end_of_queue_4;
    return_value_queuelocked_get_end_of_queue_4=queuelocked_get_end_of_queue(q);
    if(!(return_value_queuelocked_get_end_of_queue_4 == (_Bool)0))
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_3 == 0);
      return (signed long int)-5;
    }

    cur = q->head;
    /* assertion (cur=q->head)!=((void *)0) */
    assert(cur != (struct s_queueitem *)(void *)0);
    switch(cur->type)
    {
      case 1:
      {
        q->blkcount = q->blkcount - 1ul;
        free((void *)cur->blkinfo.blkdata);
        break;
      }
      case 2:
        dico_destroy(cur->headinfo.dico);
    }
    q->head = cur->next;
    free((void *)cur);
    q->itemcount = q->itemcount - 1ul;
    signed int return_value_pthread_mutex_unlock_5;
    return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_5 == 0);
    pthread_cond_broadcast(&q->cond);
    return (signed long int)0;
  }
}

// queue_get_end_of_queue
// file queue.h line 104
_Bool queue_get_end_of_queue(struct s_queue *q)
{
  _Bool res;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_get_end_of_queue", 125, "q is NULL\n");
    return (_Bool)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    _Bool tmp_if_expr_2;
    if(!(q->itemcount >= 1ul))
      tmp_if_expr_2 = (signed int)q->endofqueue == 1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    res = tmp_if_expr_2;
    signed int return_value_pthread_mutex_unlock_3;
    return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_3 == 0);
    return res;
  }
}

// queue_get_first_block_todo
// file queue.h line 107
signed long int queue_get_first_block_todo(struct s_queue *q, struct s_blockinfo *blkinfo)
{
  struct s_queueitem *cur;
  signed long int itemfound = (signed long int)-1;
  signed int res;
  _Bool return_value_queuelocked_get_end_of_queue_2;
  if(blkinfo == ((struct s_blockinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_get_first_block_todo", 381, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    do
    {
      return_value_queuelocked_get_end_of_queue_2=queuelocked_get_end_of_queue(q);
      if(!((signed int)return_value_queuelocked_get_end_of_queue_2 == 0))
        break;

      cur = q->head;
      for( ; !(cur == ((struct s_queueitem *)NULL)); cur = cur->next)
        if(cur->type == 1)
        {
          if(cur->status == 1)
          {
            *blkinfo = cur->blkinfo;
            cur->status = 2;
            itemfound = cur->itemnum;
            signed int return_value_pthread_mutex_unlock_3;
            return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
            /* assertion pthread_mutex_unlock(&q->mutex)==0 */
            assert(return_value_pthread_mutex_unlock_3 == 0);
            pthread_cond_broadcast(&q->cond);
            return itemfound;
          }

        }

      struct timespec t;
      t=get_timeout();
      res=pthread_cond_timedwait(&q->cond, &q->mutex, &t);
      if(!(res == 0))
      {
        if(!(res == 110))
        {
          signed int return_value_pthread_mutex_unlock_4;
          return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&q->mutex);
          /* assertion pthread_mutex_unlock(&q->mutex)==0 */
          assert(return_value_pthread_mutex_unlock_4 == 0);
          return (signed long int)-1;
        }

      }

    }
    while((_Bool)1);
    signed int return_value_pthread_mutex_unlock_5;
    return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_5 == 0);
    _Bool return_value_queuelocked_get_end_of_queue_6;
    return_value_queuelocked_get_end_of_queue_6=queuelocked_get_end_of_queue(q);
    if(!(return_value_queuelocked_get_end_of_queue_6 == (_Bool)0))
      return (signed long int)-5;

    else
      return (signed long int)-1;
  }
}

// queue_init
// file queue.h line 85
signed long int queue_init(struct s_queue *q, signed long int blkmax)
{
  union anonymous_6 attr;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_init", 51, "q is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    q->head = (struct s_queueitem *)(void *)0;
    q->curitemnum = (signed long int)1;
    q->itemcount = (unsigned long int)0;
    q->blkcount = (unsigned long int)0;
    q->blkmax = (unsigned long int)blkmax;
    q->endofqueue = (_Bool)0;
    signed int return_value_pthread_mutexattr_init_1;
    return_value_pthread_mutexattr_init_1=pthread_mutexattr_init(&attr);
    /* assertion pthread_mutexattr_init(&attr)==0 */
    assert(return_value_pthread_mutexattr_init_1 == 0);
    signed int return_value_pthread_mutexattr_settype_2;
    return_value_pthread_mutexattr_settype_2=pthread_mutexattr_settype(&attr, 2);
    /* assertion pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_ERRORCHECK)==0 */
    assert(return_value_pthread_mutexattr_settype_2 == 0);
    signed int return_value_pthread_mutex_init_3;
    return_value_pthread_mutex_init_3=pthread_mutex_init(&q->mutex, &attr);
    if(!(return_value_pthread_mutex_init_3 == 0))
    {
      fsaprintf(3, (_Bool)0, 3 >= 3, "queue.c", "queue_init", 67, "pthread_mutex_init failed\n");
      return (signed long int)-1;
    }

    else
    {
      signed int return_value_pthread_cond_init_4;
      return_value_pthread_cond_init_4=pthread_cond_init(&q->cond, (const union anonymous_6 *)(void *)0);
      if(!(return_value_pthread_cond_init_4 == 0))
      {
        fsaprintf(3, (_Bool)0, 3 >= 3, "queue.c", "queue_init", 72, "pthread_cond_init failed\n");
        return (signed long int)-1;
      }

      else
        return (signed long int)0;
    }
  }
}

// queue_replace_block
// file queue.h line 99
signed long int queue_replace_block(struct s_queue *q, signed long int itemnum, struct s_blockinfo *blkinfo, signed int newstatus)
{
  struct s_queueitem *cur;
  if(blkinfo == ((struct s_blockinfo *)NULL) || q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_replace_block", 321, "a parameter is null\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    if(q->head == ((struct s_queueitem *)NULL))
    {
      signed int return_value_pthread_mutex_unlock_2;
      return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&q->mutex);
      /* assertion pthread_mutex_unlock(&q->mutex)==0 */
      assert(return_value_pthread_mutex_unlock_2 == 0);
      fsaprintf(4, (_Bool)0, 4 >= 3, "queue.c", "queue_replace_block", 329, "q->head is NULL: list is empty\n");
      return (signed long int)-4;
    }

    cur = q->head;
    for( ; !(cur == ((struct s_queueitem *)NULL)); cur = cur->next)
      if(cur->itemnum == itemnum)
      {
        cur->status = newstatus;
        cur->blkinfo = *blkinfo;
        signed int return_value_pthread_mutex_unlock_3;
        return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&q->mutex);
        /* assertion pthread_mutex_unlock(&q->mutex)==0 */
        assert(return_value_pthread_mutex_unlock_3 == 0);
        pthread_cond_broadcast(&q->cond);
        return (signed long int)0;
      }

    signed int return_value_pthread_mutex_unlock_4;
    return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_4 == 0);
    return (signed long int)-4;
  }
}

// queue_set_end_of_queue
// file queue.h line 103
signed long int queue_set_end_of_queue(struct s_queue *q, _Bool state)
{
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queue_set_end_of_queue", 110, "q is NULL\n");
    return (signed long int)-3;
  }

  else
  {
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&q->mutex);
    /* assertion pthread_mutex_lock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_lock_1 == 0);
    q->endofqueue = state;
    signed int return_value_pthread_mutex_unlock_2;
    return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&q->mutex);
    /* assertion pthread_mutex_unlock(&q->mutex)==0 */
    assert(return_value_pthread_mutex_unlock_2 == 0);
    pthread_cond_broadcast(&q->cond);
    return (signed long int)0;
  }
}

// queuelocked_get_end_of_queue
// file queue.c line 135
_Bool queuelocked_get_end_of_queue(struct s_queue *q)
{
  _Bool res;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queuelocked_get_end_of_queue", 139, "q is NULL\n");
    return (_Bool)-3;
  }

  else
  {
    _Bool tmp_if_expr_1;
    if(!(q->itemcount >= 1ul))
      tmp_if_expr_1 = (signed int)q->endofqueue == 1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    res = tmp_if_expr_1;
    return res;
  }
}

// queuelocked_is_first_item_ready
// file queue.c line 609
_Bool queuelocked_is_first_item_ready(struct s_queue *q)
{
  struct s_queueitem *cur;
  if(q == ((struct s_queue *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "queue.c", "queuelocked_is_first_item_ready", 614, "a parameter is null\n");
    return (_Bool)0;
  }

  else
  {
    cur = q->head;
    if(cur == ((struct s_queueitem *)NULL))
      return (_Bool)0;

    else
      if(cur->type == 2)
        return (_Bool)1;

      else
      {
        _Bool tmp_if_expr_1;
        if(cur->type == 1)
          tmp_if_expr_1 = cur->status == 3 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          return (_Bool)1;

        else
          return (_Bool)0;
      }
  }
}

// regfile_exists
// file common.h line 45
signed int regfile_exists(char *filepath)
{
  struct stat64 st;
  signed int res;
  res=stat64(filepath, &st);
  signed int *return_value___errno_location_1;
  if((61440u & st.st_mode) == 32768u && res == 0)
    return 1;

  else
  {
    if(res == -1)
    {
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 2)
        return 0;

    }

    return -1;
  }
}

// regmulti_count
// file regmulti.c line 63
signed int regmulti_count(struct s_regmulti *m, struct s_dico *header, char *data, unsigned int datsize)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_count", 66, "invalid param\n");
    return -1;
  }

  else
    return (signed int)m->count;
}

// regmulti_empty
// file regmulti.h line 42
signed int regmulti_empty(struct s_regmulti *m)
{
  signed int i;
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_empty", 38, "invalid param\n");
    return -1;
  }

  else
  {
    m->count = (unsigned int)0;
    m->usedsize = (unsigned int)0;
    i = 0;
    for( ; !((unsigned int)i >= m->maxitems); i = i + 1)
      m->objhead[(signed long int)i] = (struct s_dico *)(void *)0;
    return 0;
  }
}

// regmulti_init
// file regmulti.h line 43
signed int regmulti_init(struct s_regmulti *m, unsigned int maxblksize)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_init", 54, "invalid param\n");
    return -1;
  }

  else
  {
    m->maxitems = (unsigned int)512;
    m->maxblksize = maxblksize < (unsigned int)921600 ? maxblksize : (unsigned int)921600;
    signed int return_value_regmulti_empty_1;
    return_value_regmulti_empty_1=regmulti_empty(m);
    return return_value_regmulti_empty_1;
  }
}

// regmulti_rest_addheader
// file regmulti.h line 48
signed int regmulti_rest_addheader(struct s_regmulti *m, struct s_dico *header)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_addheader", 184, "invalid param\n");
    return -1;
  }

  else
    if(m->count >= m->maxitems)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_addheader", 189, "regmulti is full: it contains %ld items\n", (signed long int)m->count);
      return -1;
    }

    else
    {
      m->objhead[(signed long int)m->count] = header;
      m->count = m->count + 1u;
      return 0;
    }
}

// regmulti_rest_getfile
// file regmulti.h line 50
signed int regmulti_rest_getfile(struct s_regmulti *m, signed int index, struct s_dico **filehead, char *data, unsigned long int *datsize, unsigned int bufsize)
{
  unsigned int offset;
  unsigned long int filesize;
  if(filehead == ((struct s_dico **)NULL) || m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_getfile", 222, "invalid param\n");
    return -1;
  }

  else
    if((unsigned int)index >= m->count)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_getfile", 227, "index=%d out of scope: the structure only contains %ld items\n", index, (signed long int)m->count);
      return -1;
    }

    else
    {
      *filehead = m->objhead[(signed long int)index];
      signed int return_value_dico_get_u64_1;
      return_value_dico_get_u64_1=dico_get_u64(m->objhead[(signed long int)index], (unsigned char)0, (unsigned short int)8, &filesize);
      if(!(return_value_dico_get_u64_1 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_getfile", 236, "Cannot read filesize DISKITEMKEY_SIZE from archive\n");
        return -1;
      }

      else
      {
        signed int return_value_dico_get_u32_2;
        return_value_dico_get_u32_2=dico_get_u32(m->objhead[(signed long int)index], (unsigned char)0, (unsigned short int)15, &offset);
        if(!(return_value_dico_get_u32_2 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_getfile", 240, "Cannot read filesize DISKITEMKEY_SIZE from archive\n");
          return -1;
        }

        else
        {
          *datsize = filesize;
          memcpy((void *)data, (const void *)(m->data + (signed long int)offset), filesize);
          return 0;
        }
      }
    }
}

// regmulti_rest_setdatablock
// file regmulti.h line 49
signed int regmulti_rest_setdatablock(struct s_regmulti *m, char *data, unsigned int datsize)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_setdatablock", 201, "invalid param\n");
    return -1;
  }

  else
    if(!(m->maxblksize >= m->usedsize + datsize))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_rest_setdatablock", 206, "block is too small to store that new sub-block of data\n");
      return -1;
    }

    else
    {
      memcpy((void *)m->data, (const void *)data, (unsigned long int)datsize);
      m->usedsize = datsize;
      return 0;
    }
}

// regmulti_save_addfile
// file regmulti.h line 46
signed int regmulti_save_addfile(struct s_regmulti *m, struct s_dico *header, char *data, unsigned int datsize)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_addfile", 90, "invalid param\n");
    return -1;
  }

  else
    if(m->count >= m->maxitems)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_addfile", 95, "regmulti is full: it contains %ld items\n", (signed long int)m->count);
      return -1;
    }

    else
      if(!(m->maxblksize >= m->usedsize + datsize))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_addfile", 100, "block is too small to store that new sub-block of data\n");
        return -1;
      }

      else
      {
        m->objhead[(signed long int)m->count] = header;
        memcpy((void *)(m->data + (signed long int)m->usedsize), (const void *)data, (unsigned long int)datsize);
        m->usedsize = m->usedsize + datsize;
        m->count = m->count + 1u;
        return 0;
      }
}

// regmulti_save_enough_space_for_new_file
// file regmulti.h line 45
_Bool regmulti_save_enough_space_for_new_file(struct s_regmulti *m, unsigned int filesize)
{
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enough_space_for_new_file", 76, "invalid param\n");
    return (_Bool)0;
  }

  else
    if(m->count >= m->maxitems)
      return (_Bool)0;

    else
      if(!(m->maxblksize >= m->usedsize + filesize))
        return (_Bool)0;

      else
        return (_Bool)1;
}

// regmulti_save_enqueue
// file regmulti.h line 47
signed int regmulti_save_enqueue(struct s_regmulti *m, struct s_queue *q, signed int fsid)
{
  struct s_blockinfo blkinfo;
  char *dynblock;
  unsigned int offset = (unsigned int)0;
  unsigned long int filesize;
  signed int i;
  if(m == ((struct s_regmulti *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 121, "invalid param\n");
    return -1;
  }

  else
    if(m->count == 0u)
      return 0;

    else
    {
      i = 0;
      for( ; !((unsigned int)i >= m->count); i = i + 1)
      {
        if(m->objhead[(signed long int)i] == ((struct s_dico *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 132, "error: objhead[%d]==NULL\n", i);
          return -1;
        }

        signed int return_value_dico_get_u64_1;
        return_value_dico_get_u64_1=dico_get_u64(m->objhead[(signed long int)i], (unsigned char)0, (unsigned short int)8, &filesize);
        if(!(return_value_dico_get_u64_1 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 138, "Cannot read filesize DISKITEMKEY_SIZE from archive\n");
          return -1;
        }

        signed int return_value_dico_add_u32_2;
        return_value_dico_add_u32_2=dico_add_u32(m->objhead[(signed long int)i], (unsigned char)0, (unsigned short int)14, (unsigned int)m->count);
        if(!(return_value_dico_add_u32_2 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 144, "dico_add_u32(DISKITEMKEY_MULTIFILESCOUNT) failed\n");
          return -1;
        }

        signed int return_value_dico_add_u32_3;
        return_value_dico_add_u32_3=dico_add_u32(m->objhead[(signed long int)i], (unsigned char)0, (unsigned short int)15, (unsigned int)offset);
        if(!(return_value_dico_add_u32_3 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 150, "dico_add_u32(DISKITEMKEY_MULTIFILESCOUNT) failed\n");
          return -1;
        }

        offset = offset + (unsigned int)filesize;
        signed long int return_value_queue_add_header_4;
        return_value_queue_add_header_4=queue_add_header(q, m->objhead[(signed long int)i], "ObJt", (unsigned short int)fsid);
        if(!(return_value_queue_add_header_4 == 0l))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 156, "queue_add_header() failed\n");
          return -1;
        }

      }
      void *return_value_malloc_5;
      return_value_malloc_5=malloc((unsigned long int)m->usedsize);
      dynblock = (char *)return_value_malloc_5;
      if(dynblock == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 163, "malloc(%ld) failed: out of memory\n", (signed long int)m->usedsize);
        return -1;
      }

      else
      {
        memcpy((void *)dynblock, (const void *)m->data, (unsigned long int)m->usedsize);
        memset((void *)&blkinfo, 0, sizeof(struct s_blockinfo) /*48ul*/ );
        blkinfo.blkrealsize = m->usedsize;
        blkinfo.blkdata = (char *)dynblock;
        blkinfo.blkoffset = (unsigned long int)0;
        blkinfo.blkfsid = (unsigned short int)fsid;
        signed long int return_value_queue_add_block_6;
        return_value_queue_add_block_6=queue_add_block(q, &blkinfo, 1);
        if(!(return_value_queue_add_block_6 == 0l))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "regmulti.c", "regmulti_save_enqueue", 174, "queue_add_block() failed\n");
          return -1;
        }

        else
          return 0;
      }
    }
}

// reiser4_get_reqmntopt
// file fs_reiser4.c line 183
signed int reiser4_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
    return 0;
}

// reiser4_getinfo
// file fs_reiser4.c line 74
signed int reiser4_getinfo(struct s_dico *d, char *devname)
{
  struct reiser4_master_sb sb;
  char uuid[512l];
  unsigned short int temp16;
  signed int ret = 0;
  signed int fd;
  signed int res;
  fd=open64(devname, 00 | 0);
  signed long int return_value_lseek_1;
  signed long int return_value_read_2;
  unsigned long int return_value_strlen_3;
  signed int return_value_strncmp_4;
  if(!(fd >= 0))
  {
    ret = -1;
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_getinfo", 85, "cannot open(%s, O_RDONLY)\n", devname);
  }

  else
  {
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      ret = -2;
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_getinfo", 91, "cannot lseek(fd, REISER4_DISK_OFFSET_IN_BYTES, SEEK_SET) on %s\n", devname);
    }

    else
    {
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct reiser4_master_sb) /*60ul*/ );
      res = (signed int)return_value_read_2;
      if(!((unsigned long int)res == sizeof(struct reiser4_master_sb) /*60ul*/ ))
      {
        ret = -3;
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_getinfo", 98, "cannot read the reiser4 superblock on device [%s]\n", devname);
      }

      else
      {
        return_value_strlen_3=strlen("ReIsEr4");
        return_value_strncmp_4=strncmp(sb.magic, "ReIsEr4", return_value_strlen_3);
        if(return_value_strncmp_4 == 0)
          dico_add_string(d, (unsigned char)0, (unsigned short int)8, "reiserfs-4.0");

        else
        {
          ret = -4;
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_getinfo", 108, "magic different from expectations superblock on %s: magic=[%s], expected=[%s]\n", devname, (const void *)sb.magic, (const void *)"ReIsEr4");
          goto reiser4_get_specific_close;
        }
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiser4.c", "reiser4_getinfo", 111, "reiser4_magic=[%s]\n", (const void *)sb.magic);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiser4.c", "reiser4_getinfo", 114, "reiser4_label=[%s]\n", (const void *)sb.label);
        dico_add_string(d, (unsigned char)0, (unsigned short int)5, (char *)sb.label);
        memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
        uuid_unparse_lower((unsigned char *)sb.uuid, uuid);
        dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiser4.c", "reiser4_getinfo", 123, "reiser4_uuid=[%s]\n", (const void *)uuid);
        temp16 = (unsigned short int)sb.blocksize;
        if(!((signed int)temp16 == 4096))
        {
          ret = -5;
          goto reiser4_get_specific_close;
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_getinfo", 130, "invalid reiser4 block-size: %ld, it should be 4096\n", (signed long int)temp16);
        }

        else
        {
          dico_add_u64(d, (unsigned char)0, (unsigned short int)16, (unsigned long int)temp16);
          fsaprintf(3, (_Bool)0, 3 >= 3, "fs_reiser4.c", "reiser4_getinfo", 134, "reiser4_blksize=[%ld]\n", (signed long int)temp16);
        }
        dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
      }
    }

  reiser4_get_specific_close:
    ;
    close(fd);
  }

reiser4_get_specific_return:
  ;
  return ret;
}

// reiser4_mkfs
// file fs_reiser4.c line 38
signed int reiser4_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char command[2048l];
  char buffer[2048l];
  char options[2048l];
  signed int exitst;
  unsigned long int temp64;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.reiser4 -V");
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_5;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_mkfs", 48, "mkfs.reiser4 not found. please install reiser4progs on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
    signed int return_value_dico_get_string_3;
    return_value_dico_get_string_3=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_3 == 0)
    {
      return_value_strlen_2=strlen(buffer);
      if(return_value_strlen_2 >= 1ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -L '%.16s' ", (const void *)buffer);

    }

    signed int return_value_dico_get_u64_4;
    return_value_dico_get_u64_4=dico_get_u64(d, (unsigned char)0, (unsigned short int)16, &temp64);
    if(return_value_dico_get_u64_4 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -b %ld ", (signed long int)temp64);

    signed int return_value_dico_get_string_6;
    return_value_dico_get_string_6=dico_get_string(d, (unsigned char)0, (unsigned short int)6, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_6 == 0)
    {
      return_value_strlen_5=strlen(buffer);
      if(return_value_strlen_5 == 36ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -U %s ", (const void *)buffer);

    }

    signed int return_value_exec_command_7;
    return_value_exec_command_7=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.reiser4 -y %s %s", partition, (const void *)options);
    if(!(return_value_exec_command_7 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiser4.c", "reiser4_mkfs", 67, "command [%s] failed\n", (const void *)command);
      return -1;
    }

    else
      return 0;
  }
}

// reiser4_mount
// file fs_reiser4.c line 146
signed int reiser4_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  signed int return_value_generic_mount_1;
  return_value_generic_mount_1=generic_mount(partition, mntbuf, fsbuf, (char *)(void *)0, flags);
  return return_value_generic_mount_1;
}

// reiser4_test
// file fs_reiser4.c line 156
signed int reiser4_test(char *devname)
{
  struct reiser4_master_sb sb;
  signed int fd;
  fd=open64(devname, 00 | 0);
  if(!(fd >= 0))
    return 0;

  else
  {
    signed long int return_value_lseek_1;
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      close(fd);
      return 0;
    }

    else
    {
      signed long int return_value_read_2;
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct reiser4_master_sb) /*60ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct reiser4_master_sb) /*60ul*/ ))
      {
        close(fd);
        return 0;
      }

      else
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen("ReIsEr4");
        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(sb.magic, "ReIsEr4", return_value_strlen_3);
        if(!(return_value_strncmp_4 == 0))
        {
          close(fd);
          return 0;
        }

        else
        {
          close(fd);
          return 1;
        }
      }
    }
  }
}

// reiser4_umount
// file fs_reiser4.c line 151
signed int reiser4_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

// reiserfs_get_reqmntopt
// file fs_reiserfs.c line 178
signed int reiserfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    strlist_add(badopt, "nouser_xattr");
    strlist_add(badopt, "noacl");
    return 0;
  }
}

// reiserfs_getinfo
// file fs_reiserfs.c line 74
signed int reiserfs_getinfo(struct s_dico *d, char *devname)
{
  struct reiserfs_super_block sb;
  char uuid[512l];
  unsigned short int temp16;
  signed int ret = 0;
  signed int fd = -1;
  signed int res;
  fd=open64(devname, 00 | 0);
  signed long int return_value_lseek_1;
  signed long int return_value_read_2;
  unsigned long int return_value_strlen_5;
  signed int return_value_strncmp_6;
  unsigned long int return_value_strlen_3;
  signed int return_value_strncmp_4;
  if(!(fd >= 0))
  {
    ret = -1;
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_getinfo", 85, "cannot open(%s, O_RDONLY)\n", devname);
  }

  else
  {
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      ret = -2;
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_getinfo", 91, "cannot lseek(fd, REISERFS_DISK_OFFSET_IN_BYTES, SEEK_SET) on %s\n", devname);
    }

    else
    {
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct reiserfs_super_block) /*204ul*/ );
      res = (signed int)return_value_read_2;
      if(!((unsigned long int)res == sizeof(struct reiserfs_super_block) /*204ul*/ ))
      {
        ret = -3;
        fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_getinfo", 98, "cannot read the reiserfs superblock on device [%s]\n", devname);
      }

      else
      {
        return_value_strlen_5=strlen("ReIsErFs");
        return_value_strncmp_6=strncmp(sb.s_v1.s_magic, "ReIsErFs", return_value_strlen_5);
        if(return_value_strncmp_6 == 0)
          dico_add_string(d, (unsigned char)0, (unsigned short int)8, "reiserfs-3.5");

        else
        {
          return_value_strlen_3=strlen("ReIsEr2Fs");
          return_value_strncmp_4=strncmp(sb.s_v1.s_magic, "ReIsEr2Fs", return_value_strlen_3);
          if(return_value_strncmp_4 == 0)
            dico_add_string(d, (unsigned char)0, (unsigned short int)8, "reiserfs-3.6");

          else
          {
            ret = -4;
            fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_getinfo", 108, "magic different from expectations superblock on %s: magic=[%s]\n", devname, (const void *)sb.s_v1.s_magic);
            goto reiserfs_read_sb_close;
          }
        }
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiserfs.c", "reiserfs_getinfo", 112, "reiserfs_magic=[%s]\n", (const void *)sb.s_v1.s_magic);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiserfs.c", "reiserfs_getinfo", 115, "reiserfs_label=[%s]\n", (const void *)sb.s_label);
        dico_add_string(d, (unsigned char)0, (unsigned short int)5, (char *)sb.s_label);
        memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
        uuid_unparse_lower((unsigned char *)sb.s_uuid, uuid);
        dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiserfs.c", "reiserfs_getinfo", 124, "reiserfs_uuid=[%s]\n", (const void *)uuid);
        temp16 = (unsigned short int)sb.s_v1.s_blocksize;
        dico_add_u64(d, (unsigned char)0, (unsigned short int)15, (unsigned long int)temp16);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_reiserfs.c", "reiserfs_getinfo", 129, "reiserfs_blksize=[%ld]\n", (signed long int)temp16);
        dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)4 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
      }
    }

  reiserfs_read_sb_close:
    ;
    close(fd);
  }

reiserfs_read_sb_return:
  ;
  return ret;
}

// reiserfs_mkfs
// file fs_reiserfs.c line 38
signed int reiserfs_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char command[2048l];
  char buffer[2048l];
  char options[2048l];
  signed int exitst;
  unsigned long int temp64;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkreiserfs -V");
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_5;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_mkfs", 48, "mkreiserfs not found. please install reiserfsprogs-3.6 on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    memset((void *)options, 0, sizeof(char [2048l]) /*2048ul*/ );
    strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
    signed int return_value_dico_get_string_3;
    return_value_dico_get_string_3=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_3 == 0)
    {
      return_value_strlen_2=strlen(buffer);
      if(return_value_strlen_2 >= 1ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -l '%.16s' ", (const void *)buffer);

    }

    signed int return_value_dico_get_u64_4;
    return_value_dico_get_u64_4=dico_get_u64(d, (unsigned char)0, (unsigned short int)15, &temp64);
    if(return_value_dico_get_u64_4 == 0)
      strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -b %ld ", (signed long int)temp64);

    signed int return_value_dico_get_string_6;
    return_value_dico_get_string_6=dico_get_string(d, (unsigned char)0, (unsigned short int)6, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
    if(return_value_dico_get_string_6 == 0)
    {
      return_value_strlen_5=strlen(buffer);
      if(return_value_strlen_5 == 36ul)
        strlcatf(options, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -u %s ", (const void *)buffer);

    }

    signed int return_value_exec_command_7;
    return_value_exec_command_7=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkreiserfs -f %s %s", partition, (const void *)options);
    if(!(return_value_exec_command_7 == 0) || !(exitst == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_reiserfs.c", "reiserfs_mkfs", 67, "command [%s] failed\n", (const void *)command);
      return -1;
    }

    else
      return 0;
  }
}

// reiserfs_mount
// file fs_reiserfs.c line 140
signed int reiserfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  signed int return_value_generic_mount_1;
  return_value_generic_mount_1=generic_mount(partition, mntbuf, fsbuf, "user_xattr,acl", flags);
  return return_value_generic_mount_1;
}

// reiserfs_test
// file fs_reiserfs.c line 150
signed int reiserfs_test(char *devname)
{
  struct reiserfs_super_block sb;
  signed int fd = -1;
  fd=open64(devname, 00 | 0);
  unsigned long int return_value_strlen_3;
  signed int return_value_strncmp_4;
  if(!(fd >= 0))
    return 0;

  else
  {
    signed long int return_value_lseek_1;
    return_value_lseek_1=lseek(fd, (signed long int)(64 * 1024), 0);
    if(!(return_value_lseek_1 == 65536l))
    {
      close(fd);
      return 0;
    }

    else
    {
      signed long int return_value_read_2;
      return_value_read_2=read(fd, (void *)&sb, sizeof(struct reiserfs_super_block) /*204ul*/ );
      if(!((unsigned long int)return_value_read_2 == sizeof(struct reiserfs_super_block) /*204ul*/ ))
      {
        close(fd);
        return 0;
      }

      else
      {
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen("ReIsErFs");
        signed int return_value_strncmp_6;
        return_value_strncmp_6=strncmp(sb.s_v1.s_magic, "ReIsErFs", return_value_strlen_5);
        if(!(return_value_strncmp_6 == 0))
        {
          return_value_strlen_3=strlen("ReIsEr2Fs");
          return_value_strncmp_4=strncmp(sb.s_v1.s_magic, "ReIsEr2Fs", return_value_strlen_3);
          if(!(return_value_strncmp_4 == 0))
          {
            close(fd);
            return 0;
          }

        }

        close(fd);
        return 1;
      }
    }
  }
}

// reiserfs_umount
// file fs_reiserfs.c line 145
signed int reiserfs_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

// set_stopfillqueue
// file syncthread.h line 30
void set_stopfillqueue()
{
  (&g_stopfillqueue)->counter = 1;
}

// stats_errcount
// file common.h line 50
unsigned long int stats_errcount(struct s_stats stats)
{
  return stats.err_regfile + stats.err_dir + stats.err_symlink + stats.err_hardlink + stats.err_special;
}

// stats_show
// file common.h line 49
signed int stats_show(struct s_stats stats, signed int fsid)
{
  fsaprintf(0, (_Bool)0, 0 >= 3, "common.c", "stats_show", 533, "Statistics for filesystem %d\n", fsid);
  fsaprintf(0, (_Bool)0, 0 >= 3, "common.c", "stats_show", 537, "* files successfully processed:....regfiles=%lld, directories=%lld, symlinks=%lld, hardlinks=%lld, specials=%lld\n", (signed long long int)stats.cnt_regfile, (signed long long int)stats.cnt_dir, (signed long long int)stats.cnt_symlink, (signed long long int)stats.cnt_hardlink, (signed long long int)stats.cnt_special);
  fsaprintf(0, (_Bool)0, 0 >= 3, "common.c", "stats_show", 541, "* files with errors:...............regfiles=%lld, directories=%lld, symlinks=%lld, hardlinks=%lld, specials=%lld\n", (signed long long int)stats.err_regfile, (signed long long int)stats.err_dir, (signed long long int)stats.err_symlink, (signed long long int)stats.err_hardlink, (signed long long int)stats.err_special);
  return 0;
}

// strdico_alloc
// file strdico.h line 38
struct s_strdico * strdico_alloc()
{
  struct s_strdico *d;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_strdico) /*16ul*/ );
  d = (struct s_strdico *)return_value_malloc_1;
  if(d == ((struct s_strdico *)NULL))
    return (struct s_strdico *)(void *)0;

  else
  {
    d->head = (struct s_strdicoitem *)(void *)0;
    d->validkeys = (char *)(void *)0;
    return d;
  }
}

// strdico_destroy
// file strdico.h line 39
signed int strdico_destroy(struct s_strdico *d)
{
  struct s_strdicoitem *item;
  struct s_strdicoitem *next;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  item = d->head;
  for( ; !(item == ((struct s_strdicoitem *)NULL)); item = next)
  {
    next = item->next;
    free((void *)item->key);
    if(!(item->value == ((char *)NULL)))
      free((void *)item->value);

    free((void *)item);
  }
  if(!(d->validkeys == ((char *)NULL)))
    free((void *)d->validkeys);

  free((void *)d);
  return 0;
}

// strdico_get_s64
// file strdico.h line 44
signed int strdico_get_s64(struct s_strdico *d, signed long int *value, const char *key)
{
  char buffer[1024l];
  char *endptr = (char *)(void *)0;
  signed int res;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  /* assertion value */
  assert(value != ((signed long int *)NULL));
  /* assertion key */
  assert(key != ((const char *)NULL));
  *value = (signed long int)-1;
  res=strdico_get_string(d, buffer, (signed int)sizeof(char [1024l]) /*1024ul*/ , key);
  if(!(res == 0))
    return res;

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(buffer);
    if(!(return_value_strlen_1 >= 1ul))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_get_s64", 272, "key \"%s\" has an empty value. expected a valid number\n", key);
      return -3;
    }

    else
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 0;
      *value=strtoll(buffer, &endptr, 10);
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      _Bool tmp_if_expr_4;
      if(!(*return_value___errno_location_3 == 0))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)*endptr != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_get_s64", 279, "key \"%s\" does not contain a valid number: \"%s\"\n", key, (const void *)buffer);
        return -3;
      }

      else
        return 0;
    }
  }
}

// strdico_get_string
// file strdico.h line 43
signed int strdico_get_string(struct s_strdico *d, char *outbuffer, signed int outbufsize, const char *key)
{
  struct s_strdicoitem *item = (struct s_strdicoitem *)(void *)0;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  /* assertion outbuffer */
  assert(outbuffer != ((char *)NULL));
  /* assertion key */
  assert(key != ((const char *)NULL));
  memset((void *)outbuffer, 0, (unsigned long int)outbufsize);
  item = d->head;
  for( ; !(item == ((struct s_strdicoitem *)NULL)); item = item->next)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(item->key, key);
    if(return_value_strcmp_1 == 0)
    {
      if(!(item->value == ((char *)NULL)))
        snprintf(outbuffer, (unsigned long int)outbufsize, "%s", item->value);

      return 0;
    }

  }
  return -4;
}

// strdico_parse_string
// file strdico.h line 41
signed int strdico_parse_string(struct s_strdico *d, const char *strdefs)
{
  char *bakdefs;
  char *saveptr;
  char *result;
  char delims[5l] = { ',', ';', '\t', '\n', 0 };
  char key[1024l];
  char value[1024l];
  signed int i;
  signed int pos;
  signed int res;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  /* assertion strdefs */
  assert(strdefs != ((const char *)NULL));
  bakdefs=strdup(strdefs);
  _Bool tmp_if_expr_1;
  if(bakdefs == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_parse_string", 110, "strdup() failed: out of memory\n");
    return -2;
  }

  else
  {
    result=strtok_r(bakdefs, delims, &saveptr);
    while(!(result == ((char *)NULL)))
    {
      memset((void *)key, 0, sizeof(char [1024l]) /*1024ul*/ );
      memset((void *)value, 0, sizeof(char [1024l]) /*1024ul*/ );
      i = 0;
      do
      {
        if(!((signed int)result[(signed long int)i] == 0))
          tmp_if_expr_1 = (signed int)result[(signed long int)i] != 61 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if((unsigned long int)i >= 1023ul || !tmp_if_expr_1)
          break;

        key[(signed long int)i] = result[(signed long int)i];
        i = i + 1;
      }
      while((_Bool)1);
      signed int tmp_post_2 = i;
      i = i + 1;
      if(!((signed int)result[(signed long int)tmp_post_2] == 61))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_parse_string", 126, "Incorrect syntax in \"%s\" . Cannot find symbol '=' to separate the key and the value. expected something like \"name1=val1,name2=val2\"\n", result);
        free((void *)bakdefs);
        return -3;
      }

      pos = 0;
      for( ; !((signed int)result[(signed long int)i] == 0) && !((unsigned long int)pos >= 1023ul); pos = pos + 1)
      {
        signed int tmp_post_3 = i;
        i = i + 1;
        value[(signed long int)pos] = result[(signed long int)tmp_post_3];
      }
      res=strdico_set_value(d, key, value);
      if(!(res == 0))
        return res;

      result=strtok_r((char *)(void *)0, delims, &saveptr);
    }
    free((void *)bakdefs);
    return 0;
  }
}

// strdico_print
// file strdico.c line 286
signed int strdico_print(struct s_strdico *d)
{
  struct s_strdicoitem *item = (struct s_strdicoitem *)(void *)0;
  signed int pos = 0;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  item = d->head;
  for( ; !(item == ((struct s_strdicoitem *)NULL)); item = item->next)
  {
    signed int tmp_post_1 = pos;
    pos = pos + 1;
    printf("item[%d]: key=[%s] value=[%s]\n", tmp_post_1, item->key, item->value);
  }
  return 0;
}

// strdico_set_valid_keys
// file strdico.h line 40
signed int strdico_set_valid_keys(struct s_strdico *d, const char *keys)
{
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  d->validkeys=strdup(keys);
  if(d->validkeys == ((char *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_valid_keys", 87, "strdup() failed: out of memory\n");
    return -2;
  }

  else
    return 0;
}

// strdico_set_value
// file strdico.c line 145
signed int strdico_set_value(struct s_strdico *d, const char *key, const char *value)
{
  struct s_strdicoitem *existingitem;
  struct s_strdicoitem *lnew;
  struct s_strdicoitem *item;
  char *bakvalidkeys;
  char *result;
  char *saveptr;
  char delims[5l] = { ',', ';', '\t', '\n', 0 };
  signed int validkey;
  char *oldvalue;
  signed int vallen;
  signed int keylen;
  /* assertion d */
  assert(d != ((struct s_strdico *)NULL));
  /* assertion key */
  assert(key != ((const char *)NULL));
  /* assertion value */
  assert(value != ((const char *)NULL));
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(key);
  keylen = (signed int)return_value_strlen_1;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(value);
  vallen = (signed int)return_value_strlen_2;
  signed int return_value_strcmp_4;
  if(!(d->validkeys == ((char *)NULL)))
  {
    bakvalidkeys=strdup(d->validkeys);
    if(bakvalidkeys == ((char *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 171, "strdup() failed: out of memory\n");
      return -2;
    }

    validkey = 0;
    result=strtok_r(bakvalidkeys, delims, &saveptr);
    while(validkey == 0 && !(result == ((char *)NULL)))
    {
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(result, key);
      if(return_value_strcmp_3 == 0)
        validkey = 1;

      result=strtok_r((char *)(void *)0, delims, &saveptr);
    }
    free((void *)bakvalidkeys);
    if(!(validkey == 0))
      goto __CPROVER_DUMP_L5;

    fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 185, "unexpected key \"%s\". valid keys are \"%s\"\n", key, d->validkeys);
    return -3;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    existingitem = (struct s_strdicoitem *)(void *)0;
    item = d->head;
    for( ; existingitem == ((struct s_strdicoitem *)NULL) && !(item == ((struct s_strdicoitem *)NULL)); item = item->next)
    {
      return_value_strcmp_4=strcmp(item->key, key);
      if(return_value_strcmp_4 == 0)
        existingitem = item;

    }
    if(!(existingitem == ((struct s_strdicoitem *)NULL)))
    {
      oldvalue = existingitem->value;
      void *return_value_malloc_5;
      return_value_malloc_5=malloc((unsigned long int)(vallen + 1));
      existingitem->value = (char *)return_value_malloc_5;
      if(existingitem->value == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 201, "malloc(%d) failed: out of memory\n", vallen + 1);
        return -(-2);
      }

      snprintf(existingitem->value, (unsigned long int)(vallen + 1), "%s", value);
      if(!(oldvalue == ((char *)NULL)))
        free((void *)oldvalue);

      return 0;
    }

    void *return_value_malloc_6;
    return_value_malloc_6=malloc(sizeof(struct s_strdicoitem) /*24ul*/ );
    lnew = (struct s_strdicoitem *)return_value_malloc_6;
    if(lnew == ((struct s_strdicoitem *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 212, "malloc(%ld) failed: out of memory\n", (signed long int)sizeof(struct s_strdicoitem) /*24ul*/ );
      return -(-2);
    }

    else
    {
      memset((void *)lnew, 0, sizeof(struct s_strdicoitem) /*24ul*/ );
      void *return_value_malloc_7;
      return_value_malloc_7=malloc((unsigned long int)(keylen + 1));
      lnew->key = (char *)return_value_malloc_7;
      if(lnew->key == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 217, "malloc(%d) failed: out of memory\n", keylen + 1);
        return -(-2);
      }

      else
      {
        snprintf(lnew->key, (unsigned long int)(keylen + 1), "%s", key);
        void *return_value_malloc_8;
        return_value_malloc_8=malloc((unsigned long int)(vallen + 1));
        lnew->value = (char *)return_value_malloc_8;
        if(lnew->value == ((char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "strdico.c", "strdico_set_value", 222, "malloc(%d) failed: out of memory\n", vallen + 1);
          return -(-2);
        }

        else
        {
          snprintf(lnew->value, (unsigned long int)(vallen + 1), "%s", value);
          lnew->next = d->head;
          d->head = lnew;
          return 0;
        }
      }
    }
  }
}

// stream_readline
// file common.h line 37
signed int stream_readline(struct _IO_FILE *f, char *buf, signed int buflen)
{
  signed int i;
  char c;
  memset((void *)buf, 0, (unsigned long int)buflen);
  i = 0;
  signed int return_value_feof_1;
  _Bool tmp_if_expr_3;
  signed int return_value_fgetc_2;
  _Bool tmp_if_expr_5;
  signed int return_value_feof_4;
  do
  {
    return_value_feof_1=feof(f);
    if(return_value_feof_1 == 0)
    {
      return_value_fgetc_2=fgetc(f);
      c = (char)return_value_fgetc_2;
      tmp_if_expr_3 = (signed int)c != 10 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_feof_4=feof(f);
      tmp_if_expr_5 = !(return_value_feof_4 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(i >= buflen || !tmp_if_expr_5)
      break;

    buf[(signed long int)i] = c;
    i = i + 1;
  }
  while((_Bool)1);
  return i;
}

// strlcatf
// file common.h line 47
char * strlcatf(char *dest, signed int destbufsize, char *format, ...)
{
  void **ap;
  signed int len1;
  unsigned long int return_value_strnlen_1;
  return_value_strnlen_1=strnlen(dest, (unsigned long int)destbufsize);
  len1 = (signed int)return_value_strnlen_1;
  if(len1 == destbufsize)
    return dest;

  else
  {
    ap = (void **)&format;
    vsnprintf(dest + (signed long int)len1, (unsigned long int)(destbufsize - len1), format, ap);
    ap = ((void **)NULL);
    return dest;
  }
}

// strlist_add
// file strlist.h line 40
signed int strlist_add(struct s_strlist *l, char *str)
{
  struct s_strlistitem *item;
  struct s_strlistitem *lnew;
  signed int len;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(str == ((char *)NULL) || l == ((struct s_strlist *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_strlen_1=strlen(str);
    tmp_if_expr_2 = !(return_value_strlen_1 != 0ul) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_2)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_add", 72, "invalid param\n");
    return -1;
  }

  else
  {
    signed int return_value_strlist_exists_3;
    return_value_strlist_exists_3=strlist_exists(l, str);
    if(return_value_strlist_exists_3 == 1)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_add", 77, "canot add dring: [%s] is already in the list\n", str);
      return -1;
    }

    else
    {
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct s_strlistitem) /*16ul*/ );
      lnew = (struct s_strlistitem *)return_value_malloc_4;
      if(lnew == ((struct s_strlistitem *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_add", 82, "malloc() failed\n");
        return -1;
      }

      else
      {
        memset((void *)lnew, 0, sizeof(struct s_strlistitem) /*16ul*/ );
        lnew->next = (struct s_strlistitem *)(void *)0;
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(str);
        len = (signed int)return_value_strlen_5;
        void *return_value_malloc_6;
        return_value_malloc_6=malloc((unsigned long int)(len + 1));
        lnew->str = (char *)return_value_malloc_6;
        if(lnew->str == ((char *)NULL))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_add", 90, "malloc() failed\n");
          free((void *)lnew);
          return -1;
        }

        else
        {
          memcpy((void *)lnew->str, (const void *)str, (unsigned long int)(len + 1));
          if(l->head == ((struct s_strlistitem *)NULL))
            l->head = lnew;

          else
          {
            item = l->head;
            do
            {
              if(!(item == ((struct s_strlistitem *)NULL)))
                tmp_if_expr_7 = item->next != (struct s_strlistitem *)(void *)0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_7 = (_Bool)0;
              if(!tmp_if_expr_7)
                break;

              item = item->next;
            }
            while((_Bool)1);
            item->next = lnew;
          }
          return 0;
        }
      }
    }
  }
}

// strlist_count
// file strlist.h line 46
signed int strlist_count(struct s_strlist *l)
{
  struct s_strlistitem *item;
  signed int count = 0;
  if(l == ((struct s_strlist *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_count", 255, "invalid param\n");
    return -1;
  }

  else
  {
    if(l->head == ((struct s_strlistitem *)NULL))
      return 0;

    else
    {
      item = l->head;
      for( ; !(item == ((struct s_strlistitem *)NULL)); item = item->next)
        count = count + 1;
    }
    return count;
  }
}

// strlist_destroy
// file strlist.h line 37
signed int strlist_destroy(struct s_strlist *l)
{
  if(l == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    strlist_empty(l);
    return 0;
  }
}

// strlist_empty
// file strlist.h line 39
signed int strlist_empty(struct s_strlist *l)
{
  struct s_strlistitem *item;
  struct s_strlistitem *next;
  if(l == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    item = l->head;
    for( ; !(item == ((struct s_strlistitem *)NULL)); item = next)
    {
      next = item->next;
      free((void *)item->str);
      free((void *)item);
    }
    l->head = (struct s_strlistitem *)(void *)0;
    return 0;
  }
}

// strlist_exists
// file strlist.h line 42
signed int strlist_exists(struct s_strlist *l, char *str)
{
  struct s_strlistitem *item;
  signed int return_value_strcmp_1;
  if(str == ((char *)NULL) || l == ((struct s_strlist *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_exists", 197, "invalid param\n");
    return -1;
  }

  else
    if(l->head == ((struct s_strlistitem *)NULL))
      return 0;

    else
    {
      item = l->head;
      for( ; !(item == ((struct s_strlistitem *)NULL)); item = item->next)
      {
        return_value_strcmp_1=strcmp(item->str, str);
        if(return_value_strcmp_1 == 0)
          return 1;

      }
      return 0;
    }
}

// strlist_getitem
// file strlist.h line 43
signed int strlist_getitem(struct s_strlist *l, signed int index, char *buf, signed int bufsize)
{
  struct s_strlistitem *item;
  signed int pos = 0;
  _Bool tmp_if_expr_2;
  signed int tmp_post_1;
  if(buf == ((char *)NULL) || l == ((struct s_strlist *)NULL) || !(bufsize >= 1))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_getitem", 116, "invalid param\n");
    return -1;
  }

  else
  {
    item = l->head;
    do
    {
      if(!(item == ((struct s_strlistitem *)NULL)))
      {
        tmp_post_1 = pos;
        pos = pos + 1;
        tmp_if_expr_2 = tmp_post_1 < index ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      item = item->next;
    }
    while((_Bool)1);
    if(!(item == ((struct s_strlistitem *)NULL)))
    {
      snprintf(buf, (unsigned long int)bufsize, "%s", item->str);
      return 0;
    }

    else
      return -1;
  }
}

// strlist_init
// file strlist.h line 38
signed int strlist_init(struct s_strlist *l)
{
  if(l == ((struct s_strlist *)NULL))
    return -1;

  else
  {
    l->head = (struct s_strlistitem *)(void *)0;
    return 0;
  }
}

// strlist_merge
// file strlist.h line 44
char * strlist_merge(struct s_strlist *l, char *bufdat, signed int bufsize, char sep)
{
  struct s_strlistitem *item;
  if(bufdat == ((char *)NULL) || l == ((struct s_strlist *)NULL) || !(bufsize >= 1))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_merge", 174, "invalid param\n");
    return (char *)(void *)0;
  }

  else
  {
    memset((void *)bufdat, 0, (unsigned long int)bufsize);
    item = l->head;
    for( ; !(item == ((struct s_strlistitem *)NULL)); item = item->next)
    {
      if(!(item == l->head))
        strlcatf(bufdat, bufsize, "%c", sep);

      strlcatf(bufdat, bufsize, "%s", item->str);
    }
    return bufdat;
  }
}

// strlist_remove
// file strlist.c line 133
signed int strlist_remove(struct s_strlist *l, char *str)
{
  struct s_strlistitem *item;
  struct s_strlistitem *next;
  _Bool tmp_if_expr_2;
  if(str == ((char *)NULL) || l == ((struct s_strlist *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_remove", 138, "invalid param\n");
    return -1;
  }

  else
    if(l->head == ((struct s_strlistitem *)NULL))
      return -1;

    else
    {
      item = l->head;
      signed int return_value_strcmp_1;
      return_value_strcmp_1=strcmp(item->str, str);
      if(return_value_strcmp_1 == 0)
      {
        free((void *)item->str);
        l->head = item->next;
        free((void *)item);
        return 0;
      }

      else
      {
        item = l->head;
        do
        {
          if(!(item == ((struct s_strlistitem *)NULL)))
            tmp_if_expr_2 = item->next != (struct s_strlistitem *)(void *)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_2 = (_Bool)0;
          if(!tmp_if_expr_2)
            break;

          next = item->next;
          signed int return_value_strcmp_3;
          return_value_strcmp_3=strcmp(next->str, str);
          if(return_value_strcmp_3 == 0)
          {
            free((void *)next->str);
            item->next = next->next;
            free((void *)next);
            return 0;
          }

          item = item->next;
        }
        while((_Bool)1);
        return -1;
      }
    }
}

// strlist_show
// file strlist.c line 272
signed int strlist_show(struct s_strlist *l)
{
  struct s_strlistitem *item;
  signed int count = 0;
  if(l == ((struct s_strlist *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_show", 278, "invalid param\n");
    return -1;
  }

  else
  {
    if(l->head == ((struct s_strlistitem *)NULL))
      printf("list is empty");

    else
    {
      item = l->head;
      for( ; !(item == ((struct s_strlistitem *)NULL)); item = item->next)
      {
        signed int tmp_post_1 = count;
        count = count + 1;
        printf("item[%d]: [%s]\n", tmp_post_1, item->str);
      }
    }
    return 0;
  }
}

// strlist_split
// file strlist.h line 45
signed int strlist_split(struct s_strlist *l, char *text, char sep)
{
  char *textcopy;
  char delims[4l];
  char *saveptr;
  char *result;
  signed int len;
  if(text == ((char *)NULL) || l == ((struct s_strlist *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_split", 221, "invalid param\n");
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(text);
    len = (signed int)return_value_strlen_1;
    snprintf(delims, sizeof(char [4l]) /*4ul*/ , "%c", sep);
    strlist_empty(l);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)(len + 1));
    textcopy = (char *)return_value_malloc_2;
    if(textcopy == ((char *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_split", 231, "malloc(%d) failed\n", len + 1);
      return -1;
    }

    else
    {
      memcpy((void *)textcopy, (const void *)text, (unsigned long int)(len + 1));
      result=strtok_r(textcopy, delims, &saveptr);
      while(!(result == ((char *)NULL)))
      {
        signed int return_value_strlist_add_3;
        return_value_strlist_add_3=strlist_add(l, result);
        if(!(return_value_strlist_add_3 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "strlist.c", "strlist_split", 239, "strlist_add(l, [%s]) failed\n", result);
          free((void *)textcopy);
          return -1;
        }

        result=strtok_r((char *)(void *)0, delims, &saveptr);
      }
      free((void *)textcopy);
      return 0;
    }
  }
}

// thread_comp_fct
// file thread_comp.h line 23
void * thread_comp_fct(void *args)
{
  inc_secthreads();
  compression_function(1);
  dec_secthreads();
  return (void *)0;
}

// thread_decomp_fct
// file thread_comp.h line 24
void * thread_decomp_fct(void *args)
{
  inc_secthreads();
  compression_function(2);
  dec_secthreads();
  return (void *)0;
}

// thread_reader_fct
// file thread_archio.h line 24
void * thread_reader_fct(void *args)
{
  char magic[4l];
  struct s_blockinfo blkinfo;
  unsigned int endofarchive = (unsigned int)0;
  struct s_archreader *ai = (struct s_archreader *)(void *)0;
  struct s_dico *dico = (struct s_dico *)(void *)0;
  signed int skipblock;
  unsigned short int fsid;
  signed int sumok;
  signed int status;
  unsigned long int errors;
  signed long int lres;
  signed int res;
  errors = (unsigned long int)0;
  inc_secthreads();
  ai = (struct s_archreader *)args;
  signed int return_value_archreader_volpath_1;
  signed int return_value_archreader_open_2;
  signed int return_value_archreader_read_volheader_3;
  signed int return_value_dico_get_u32_4;
  _Bool return_value_get_stopfillqueue_6;
  signed int return_value_regfile_exists_8;
  signed long int return_value_queue_count_9;
  char *return_value_error_int_to_string_13;
  if(ai == ((struct s_archreader *)NULL))
    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 134, "ai is NULL\n");

  else
  {
    return_value_archreader_volpath_1=archreader_volpath(ai);
    if(!(return_value_archreader_volpath_1 == 0))
      fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 140, "archreader_volpath() failed\n");

    else
    {
      return_value_archreader_open_2=archreader_open(ai);
      if(!(return_value_archreader_open_2 == 0))
        fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 145, "archreader_open(%s) failed\n", (const void *)ai->basepath);

      else
      {
        return_value_archreader_read_volheader_3=archreader_read_volheader(ai);
        if(!(return_value_archreader_read_volheader_3 == 0))
          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 151, "archio_read_volheader() failed\n");

        else
        {
          res=archreader_read_header(ai, magic, &dico, (_Bool)0, &fsid);
          if(!(res == 0))
            fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 157, "archreader_read_header() failed to read the archive header\n");

          else
          {
            return_value_dico_get_u32_4=dico_get_u32(dico, (unsigned char)0, (unsigned short int)3, &ai->archid);
            if(!(return_value_dico_get_u32_4 == 0))
              fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 162, "cannot get archive-id from main header\n");

            else
            {
              lres=queue_add_header(&g_queue, dico, magic, fsid);
              if(!(lres == 0l))
              {
                char *return_value_error_int_to_string_5;
                return_value_error_int_to_string_5=error_int_to_string(lres);
                fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 167, "queue_add_header()=%ld=%s failed to add the archive header\n", (signed long int)lres, return_value_error_int_to_string_5);
                goto thread_reader_fct_error;
              }

              while(endofarchive == 0u)
              {
                return_value_get_stopfillqueue_6=get_stopfillqueue();
                if(!((signed int)return_value_get_stopfillqueue_6 == 0))
                  break;

                res=archreader_read_header(ai, magic, &dico, (_Bool)1, &fsid);
                if(!(res == 0))
                {
                  dico_destroy(dico);
                  fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 176, "archreader_read_header() failed to read next header\n");
                  if(res == 2)
                  {
                    errors = errors + 1ul;
                    fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_reader_fct", 179, "OLDERR_MINOR\n");
                    continue;
                  }

                  else
                  {
                    fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_reader_fct", 184, "!OLDERR_MINOR\n");
                    goto thread_reader_fct_error;
                  }
                }

                signed int return_value_strncmp_17;
                return_value_strncmp_17=strncmp(magic, "FsAE", (unsigned long int)4);
                if(return_value_strncmp_17 == 0)
                {
                  archreader_close(ai);
                  signed int return_value_dico_get_u32_7;
                  return_value_dico_get_u32_7=dico_get_u32(dico, (unsigned char)0, (unsigned short int)2, &endofarchive);
                  if(!(return_value_dico_get_u32_7 == 0))
                  {
                    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 196, "cannot get compr from block-header\n");
                    goto thread_reader_fct_error;
                  }

                  fsaprintf(2, (_Bool)0, 2 >= 3, "thread_archio.c", "thread_reader_fct", 199, "End of volume [%s]\n", (const void *)ai->volpath);
                  if(!(endofarchive == 1u))
                  {
                    archreader_incvolume(ai, (_Bool)0);
                    do
                    {
                      return_value_regfile_exists_8=regfile_exists(ai->volpath);
                      if(return_value_regfile_exists_8 == 1)
                        break;

                      do
                      {
                        return_value_queue_count_9=queue_count(&g_queue);
                        if(!(return_value_queue_count_9 >= 1l))
                          break;

                        usleep((unsigned int)5000);
                      }
                      while((_Bool)1);
                      fflush(stdout);
                      fflush(stderr);
                      fsaprintf(0, (_Bool)0, 0 >= 3, "thread_archio.c", "thread_reader_fct", 210, "File [%s] is not found, please type the path to volume %ld:\n", (const void *)ai->volpath, (signed long int)ai->curvol);
                      fprintf(stdout, "New path:> ");
                      res=scanf("%s", (const void *)ai->volpath);
                    }
                    while((_Bool)1);
                    fsaprintf(2, (_Bool)0, 2 >= 3, "thread_archio.c", "thread_reader_fct", 215, "New volume is [%s]\n", (const void *)ai->volpath);
                    signed int return_value_archreader_open_10;
                    return_value_archreader_open_10=archreader_open(ai);
                    if(!(return_value_archreader_open_10 == 0))
                    {
                      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 217, "archreader_open() failed\n");
                      goto thread_reader_fct_error;
                    }

                    signed int return_value_archreader_read_volheader_11;
                    return_value_archreader_read_volheader_11=archreader_read_volheader(ai);
                    if(!(return_value_archreader_read_volheader_11 == 0))
                    {
                      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 221, "archio_read_volheader() failed\n");
                      goto thread_reader_fct_error;
                    }

                  }

                  dico_destroy(dico);
                }

                else
                {
                  signed int return_value_strncmp_16;
                  return_value_strncmp_16=strncmp(magic, "BlKh", (unsigned long int)4);
                  if(return_value_strncmp_16 == 0)
                  {
                    skipblock = (signed int)((signed int)g_fsbitmap[(signed long int)fsid] == 0);
                    signed int return_value_archreader_read_block_12;
                    return_value_archreader_read_block_12=archreader_read_block(ai, dico, skipblock, &sumok, &blkinfo);
                    if(!(return_value_archreader_read_block_12 == 0))
                    {
                      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 234, "archreader_read_block() failed\n");
                      goto thread_reader_fct_error;
                    }

                    if(skipblock == 0)
                    {
                      status = sumok == 1 ? 1 : 3;
                      lres=queue_add_block(&g_queue, &blkinfo, status);
                      if(!(lres == 0l))
                      {
                        if(!(lres == -7l))
                        {
                          return_value_error_int_to_string_13=error_int_to_string(lres);
                          fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_reader_fct", 243, "queue_add_block()=%ld=%s failed\n", (signed long int)lres, return_value_error_int_to_string_13);
                        }

                        goto thread_reader_fct_error;
                      }

                      if(sumok == 0)
                        errors = errors + 1ul;

                      dico_destroy(dico);
                    }

                  }

                  else
                  {
                    _Bool tmp_if_expr_15;
                    if((signed int)fsid == 0xFFFF)
                      tmp_if_expr_15 = (_Bool)1;

                    else
                      tmp_if_expr_15 = (signed int)g_fsbitmap[(signed long int)fsid] == 1 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_15)
                    {
                      lres=queue_add_header(&g_queue, dico, magic, fsid);
                      if(!(lres == 0l))
                      {
                        char *return_value_error_int_to_string_14;
                        return_value_error_int_to_string_14=error_int_to_string(lres);
                        fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_reader_fct", 256, "queue_add_header()=%ld=%s failed\n", (signed long int)lres, return_value_error_int_to_string_14);
                        goto thread_reader_fct_error;
                      }

                    }

                    else
                      dico_destroy(dico);
                  }
                }
              }
            }
          }
        }
      }
    }
  }

thread_reader_fct_error:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_reader_fct", 269, "THREAD-READER: queue_set_end_of_queue(&g_queue, true)\n");
  queue_set_end_of_queue(&g_queue, (_Bool)1);
  dec_secthreads();
  fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_reader_fct", 272, "THREAD-READER: exit\n");
  return (void *)0;
}

// thread_writer_fct
// file thread_archio.h line 23
void * thread_writer_fct(void *args)
{
  struct s_headinfo headinfo;
  struct s_blockinfo blkinfo;
  struct s_archwriter *ai = (struct s_archwriter *)(void *)0;
  signed long int blknum;
  signed int type;
  inc_secthreads();
  ai = (struct s_archwriter *)args;
  signed int return_value_archwriter_volpath_1;
  signed int return_value_archwriter_create_2;
  signed int return_value_archwriter_write_volheader_3;
  _Bool return_value_queue_get_end_of_queue_4;
  signed int return_value_archwriter_dowrite_block_6;
  signed int return_value_archwriter_dowrite_header_7;
  signed int return_value_archwriter_write_volfooter_8;
  if(ai == ((struct s_archwriter *)NULL))
    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_writer_fct", 47, "ai is NULL\n");

  else
  {
    return_value_archwriter_volpath_1=archwriter_volpath(ai);
    if(!(return_value_archwriter_volpath_1 == 0))
      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 51, "archwriter_volpath() failed\n");

    else
    {
      return_value_archwriter_create_2=archwriter_create(ai);
      if(!(return_value_archwriter_create_2 == 0))
        fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 55, "archwriter_create(%s) failed\n", (const void *)ai->basepath);

      else
      {
        return_value_archwriter_write_volheader_3=archwriter_write_volheader(ai);
        if(!(return_value_archwriter_write_volheader_3 == 0))
          fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 59, "cannot write volume header: archwriter_write_volheader() failed\n");

        else
        {
          do
          {
            return_value_queue_get_end_of_queue_4=queue_get_end_of_queue(&g_queue);
            if(!((signed int)return_value_queue_get_end_of_queue_4 == 0))
              break;

            blknum=queue_dequeue_first(&g_queue, &type, &headinfo, &blkinfo);
            if(!(blknum == -5l) && !(blknum >= 0l))
            {
              char *return_value_error_int_to_string_5;
              return_value_error_int_to_string_5=error_int_to_string(blknum);
              fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 66, "queue_dequeue_first()=%ld=%s failed\n", (signed long int)blknum, return_value_error_int_to_string_5);
              goto thread_writer_fct_error;
            }

            else
              if(blknum >= 1l)
                switch(type)
                {
                  case 1:
                  {
                    return_value_archwriter_dowrite_block_6=archwriter_dowrite_block(ai, &blkinfo);
                    if(!(return_value_archwriter_dowrite_block_6 == 0))
                    {
                      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 75, "archive_dowrite_block() failed\n");
                      goto thread_writer_fct_error;
                    }

                    free((void *)blkinfo.blkdata);
                    break;
                  }
                  case 2:
                  {
                    return_value_archwriter_dowrite_header_7=archwriter_dowrite_header(ai, &headinfo);
                    if(!(return_value_archwriter_dowrite_header_7 == 0))
                    {
                      fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 82, "archive_write_header() failed\n");
                      goto thread_writer_fct_error;
                    }

                    dico_destroy(headinfo.dico);
                    break;
                  }
                  default:
                    fsaprintf(0, (_Bool)0, (_Bool)1, "thread_archio.c", "thread_writer_fct", 88, "unexpected item type from queue: type=%d\n", type);
                }

          }
          while((_Bool)1);
          return_value_archwriter_write_volfooter_8=archwriter_write_volfooter(ai, (_Bool)1);
          if(!(return_value_archwriter_write_volfooter_8 == 0))
            fsaprintf(3, (_Bool)0, 3 >= 3, "thread_archio.c", "thread_writer_fct", 96, "cannot write volume footer: archio_write_volfooter() failed\n");

          else
          {
            archwriter_close(ai);
            fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_writer_fct", 100, "THREAD-WRITER: exit success\n");
            dec_secthreads();
            return (void *)0;
          }
        }
      }
    }
  }

thread_writer_fct_error:
  ;
  fsaprintf(4, (_Bool)0, 4 >= 3, "thread_archio.c", "thread_writer_fct", 105, "THREAD-WRITER: exit remove\n");
  set_stopfillqueue();
  _Bool return_value_queue_get_end_of_queue_9;
  do
  {
    return_value_queue_get_end_of_queue_9=queue_get_end_of_queue(&g_queue);
    if(!((signed int)return_value_queue_get_end_of_queue_9 == 0))
      break;

    queue_destroy_first_item(&g_queue);
  }
  while((_Bool)1);
  archwriter_close(ai);
  dec_secthreads();
  return (void *)0;
}

// uncompress_block_bzip2
// file comp_bzip2.h line 22
signed int uncompress_block_bzip2(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf)
{
  unsigned int destsize = (unsigned int)origbufsize;
  signed int res;
  res=BZ2_bzBuffToBuffDecompress((char *)origbuf, &destsize, (char *)compbuf, (unsigned int)compsize, 0, 0);
  if(res == 0)
  {
    *origsize = (unsigned long int)destsize;
    return 0;
  }

  fsaprintf(0, (_Bool)0, (_Bool)1, "comp_bzip2.c", "uncompress_block_bzip2", 61, "BZ2_bzBuffToBuffDecompress() failed, res=%d\n", res);
  return -1;
  return -1;
}

// uncompress_block_gzip
// file comp_gzip.h line 22
signed int uncompress_block_gzip(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf)
{
  unsigned long int gzsize = (unsigned long int)origbufsize;
  unsigned char *gzbuffer = (unsigned char *)origbuf;
  signed int res;
  res=uncompress(gzbuffer, &gzsize, (const unsigned char *)compbuf, (unsigned long int)compsize);
  if(!(res == 0))
  {
    if(res == -4)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    *origsize = (unsigned long int)gzsize;
    return 0;

  __CPROVER_DUMP_L2:
    ;
    return -2;
  }
  fsaprintf(0, (_Bool)0, (_Bool)1, "comp_gzip.c", "uncompress_block_gzip", 65, "uncompress() failed, res=%d\n", res);
  return -1;
}

// uncompress_block_lzma
// file comp_lzma.h line 24
signed int uncompress_block_lzma(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf)
{
  struct anonymous_13 lzma = { .next_in=(const unsigned char *)(void *)0, .avail_in=(unsigned long int)0,
    .total_in=(unsigned long int)0, .next_out=(unsigned char *)(void *)0,
    .avail_out=(unsigned long int)0,
    .total_out=(unsigned long int)0, .allocator=(struct anonymous_12 *)(void *)0,
    .internal=(struct lzma_internal_s *)(void *)0,
    .reserved_ptr1=(void *)0,
    .reserved_ptr2=(void *)0, .reserved_ptr3=(void *)0,
    .reserved_ptr4=(void *)0, .reserved_int1=(unsigned long int)0,
    .reserved_int2=(unsigned long int)0,
    .reserved_int3=(unsigned long int)0,
    .reserved_int4=(unsigned long int)0,
    .reserved_enum1=(enum anonymous_9)LZMA_RESERVED_ENUM,
    .reserved_enum2=(enum anonymous_9)LZMA_RESERVED_ENUM };
  unsigned long int maxmemlimit = 3ULL * 1024ULL * 1024ULL * 1024ULL;
  unsigned long int memlimit = (unsigned long int)(96 * 1024 * 1024);
  signed int res;
  lzma.next_in = compbuf;
  lzma.avail_in = compsize;
  lzma.next_out = origbuf;
  lzma.avail_out = origbufsize;
  enum anonymous_10 return_value_lzma_auto_decoder_1;
  return_value_lzma_auto_decoder_1=lzma_auto_decoder(&lzma, memlimit, (unsigned int)0);
  res = (signed int)return_value_lzma_auto_decoder_1;
  if(!(res == LZMA_OK))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "uncompress_block_lzma", 91, "lzma_auto_decoder() failed with res=%d\n", res);
    lzma_end(&lzma);
    return -1;
  }

  else
  {
    do
    {
      enum anonymous_10 return_value_lzma_code_2;
      return_value_lzma_code_2=lzma_code(&lzma, (enum anonymous_11)LZMA_RUN);
      res = (signed int)return_value_lzma_code_2;
      if(!(res == LZMA_STREAM_END))
      {
        if(res == LZMA_MEMLIMIT_ERROR)
        {
          memlimit = memlimit + (unsigned long int)(64 * 1024 * 1024);
          lzma_memlimit_set(&lzma, memlimit);
          fsaprintf(2, (_Bool)0, 2 >= 3, "comp_lzma.c", "uncompress_block_lzma", 103, "lzma_memlimit_set(%lld)\n", (signed long long int)memlimit);
        }

        else
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzma.c", "uncompress_block_lzma", 106, "lzma_code(LZMA_RUN) failed with res=%d\n", res);
          lzma_end(&lzma);
          return -1;
        }
      }

    }
    while(res == LZMA_MEMLIMIT_ERROR && !(memlimit >= maxmemlimit));
    *origsize = (unsigned long int)lzma.total_out;
    lzma_end(&lzma);
    switch(res)
    {
      case LZMA_STREAM_END:
        return 0;
      case LZMA_MEMLIMIT_ERROR:
        return -2;
      default:
        return -1;
    }
  }
}

// uncompress_block_lzo
// file comp_lzo.h line 26
signed int uncompress_block_lzo(unsigned long int compsize, unsigned long int *origsize, unsigned char *origbuf, unsigned long int origbufsize, unsigned char *compbuf)
{
  unsigned long int new_len = origbufsize;
  signed int res;
  res=lzo1x_decompress_safe(compbuf, compsize, origbuf, &new_len, (void *)0);
  if(!(res == 0))
  {
    if(res == -2)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    *origsize = (unsigned long int)new_len;
    return 0;

  __CPROVER_DUMP_L2:
    ;
    return -2;
  }
  fsaprintf(0, (_Bool)0, (_Bool)1, "comp_lzo.c", "uncompress_block_lzo", 60, "lzo1x_decompress_safe() failed, res=%d\n", res);
  return -1;
  return -1;
}

// usage
// file fsarchiver.c line 47
void usage(char *progname, _Bool examples)
{
  signed int lzo = 0;
  signed int lzma = 0;
  lzo = 1;
  lzma = 1;
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 58, "====> fsarchiver version %s (%s) - http://www.fsarchiver.org <====\n", (const void *)"0.6.22", (const void *)"2016-02-13");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 59, "Distributed under the GPL v2 license (GNU General Public License v2).\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 60, " * usage: %s [<options>] <command> <archive> [<part1> [<part2> [...]]]\n", progname);
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 61, "<commands>\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 62, " * savefs: save filesystems to an archive file (backup a partition to a file)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 63, " * restfs: restore filesystems from an archive (overwrites the existing data)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 64, " * savedir: save directories to the archive (similar to a compressed tarball)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 65, " * restdir: restore data from an archive which is not based on a filesystem\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 66, " * archinfo: show information about an existing archive file and its contents\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 67, " * probe [detailed]: show list of filesystems detected on the disks\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 68, "<options>\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 69, " -o: overwrite the archive if it already exists instead of failing\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 70, " -v: verbose mode (can be used several times to increase the level of details)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 71, " -d: debug mode (can be used several times to increase the level of details)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 72, " -A: allow to save a filesystem which is mounted in read-write (live backup)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 73, " -a: allow running savefs when partition mounted without the acl/xattr options\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 74, " -e <pattern>: exclude files and directories that match that pattern\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 75, " -L <label>: set the label of the archive (comment about the contents)\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 76, " -z <level>: compression level from 1 (very fast)  to  9 (very good) default=3\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 77, " -s <mbsize>: split the archive into several files of <mbsize> megabytes each\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 78, " -j <count>: create more than one compression thread. useful on multi-core cpu\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 79, " -c <password>: encrypt/decrypt data in archive, \"-c -\" for interactive password\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 80, " -h: show help and information about how to use fsarchiver with examples\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 81, " -V: show program version and exit\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 82, "<information>\n");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 83, " * Support included for: lzo=%s, lzma=%s\n", lzo == 1 ? "yes" : "no", lzma == 1 ? "yes" : "no");
  fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 84, " * support for ntfs filesystems is unstable: don't use it for production.\n");
  if((signed int)examples == 1)
  {
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 88, "<examples>\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 89, " * e[1msave only one filesystem (/dev/sda1) to an archive:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 90, "   fsarchiver savefs /data/myarchive1.fsa /dev/sda1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 91, " * e[1msave two filesystems (/dev/sda1 and /dev/sdb1) to an archive:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 92, "   fsarchiver savefs /data/myarchive2.fsa /dev/sda1 /dev/sdb1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 93, " * e[1mrestore the first filesystem from an archive (first = number 0):e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 94, "   fsarchiver restfs /data/myarchive2.fsa id=0,dest=/dev/sda1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 95, " * e[1mrestore the second filesystem from an archive (second = number 1):e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 96, "   fsarchiver restfs /data/myarchive2.fsa id=1,dest=/dev/sdb1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 97, " * e[1mrestore two filesystems from an archive (number 0 and 1):e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 98, "   fsarchiver restfs /data/arch2.fsa id=0,dest=/dev/sda1 id=1,dest=/dev/sdb1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 99, " * e[1mrestore a filesystem from an archive and convert it to reiserfs:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 100, "   fsarchiver restfs /data/myarchive1.fsa id=0,dest=/dev/sda1,mkfs=reiserfs\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 101, " * e[1msave the contents of /usr/src/linux to an archive (similar to tar):e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 102, "   fsarchiver savedir /data/linux-sources.fsa /usr/src/linux\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 103, " * e[1msave a filesystem (/dev/sda1) to an archive split into volumes of 680MB:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 104, "   fsarchiver savefs -s 680 /data/myarchive1.fsa /dev/sda1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 105, " * e[1msave a filesystem and exclude all files/dirs called 'pagefile.*':e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 106, "   fsarchiver savefs /data/myarchive.fsa /dev/sda1 --exclude='pagefile.*'\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 107, " * e[1mgeneric exclude for 'share' such as '/usr/share' and '/usr/local/share':e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 108, "   fsarchiver savefs /data/myarchive.fsa --exclude=share\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 109, " * e[1mabsolute exclude valid for '/usr/share' but not for '/usr/local/share':e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 110, "   fsarchiver savefs /data/myarchive.fsa --exclude=/usr/share\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 111, " * e[1msave a filesystem (/dev/sda1) to an encrypted archive:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 112, "   fsarchiver savefs -c mypassword /data/myarchive1.fsa /dev/sda1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 113, " * e[1mSame as before but prompt for password in the terminal:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 114, "   fsarchiver savefs -c - /data/myarchive1.fsa /dev/sda1\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 115, " * e[1mextract an archive made of simple files to /tmp/extract:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 116, "   fsarchiver restdir /data/linux-sources.fsa /tmp/extract\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 117, " * e[1mshow information about an archive and its file systems:e[0m\n");
    fsaprintf(0, (_Bool)0, 0 >= 3, "fsarchiver.c", "usage", 118, "   fsarchiver archinfo /data/myarchive2.fsa\n");
  }

}

// writebuf_add_block
// file writebuf.h line 37
signed int writebuf_add_block(struct s_writebuf *wb, struct s_blockinfo *blkinfo, unsigned int archid, unsigned short int fsid)
{
  struct s_dico *blkdico;
  signed int res;
  if(blkinfo == ((struct s_blockinfo *)NULL) || wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_block", 236, "a parameter is null\n");
    return -1;
  }

  else
  {
    blkdico=dico_alloc();
    if(blkdico == ((struct s_dico *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_block", 241, "dico_alloc() failed\n");
      return -1;
    }

    else
      if(blkinfo->blkarsize == 0u)
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_block", 246, "blkinfo->blkarsize=0: block is empty\n");
        return -1;
      }

      else
      {
        dico_add_u64(blkdico, (unsigned char)0, (unsigned short int)2, blkinfo->blkoffset);
        dico_add_u32(blkdico, (unsigned char)0, (unsigned short int)1, blkinfo->blkrealsize);
        dico_add_u32(blkdico, (unsigned char)0, (unsigned short int)5, blkinfo->blkarsize);
        dico_add_u32(blkdico, (unsigned char)0, (unsigned short int)6, blkinfo->blkcompsize);
        dico_add_u32(blkdico, (unsigned char)0, (unsigned short int)7, blkinfo->blkarcsum);
        dico_add_u16(blkdico, (unsigned char)0, (unsigned short int)3, blkinfo->blkcompalgo);
        dico_add_u16(blkdico, (unsigned char)0, (unsigned short int)4, blkinfo->blkcryptalgo);
        res=writebuf_add_header(wb, blkdico, "BlKh", archid, fsid);
        dico_destroy(blkdico);
        if(!(res == 0))
        {
          fsaprintf(3, (_Bool)0, 3 >= 3, "writebuf.c", "writebuf_add_block", 263, "cannot write FSA_MAGIC_BLKH block-header\n");
          return -1;
        }

        else
        {
          signed int return_value_writebuf_add_data_1;
          return_value_writebuf_add_data_1=writebuf_add_data(wb, (void *)blkinfo->blkdata, (unsigned long int)blkinfo->blkarsize);
          if(!(return_value_writebuf_add_data_1 == 0))
          {
            fsaprintf(3, (_Bool)0, 3 >= 3, "writebuf.c", "writebuf_add_block", 269, "cannot write data block: writebuf_add_data() failed\n");
            return -1;
          }

          else
            return 0;
        }
      }
  }
}

// writebuf_add_data
// file writebuf.c line 63
signed int writebuf_add_data(struct s_writebuf *wb, void *data, unsigned long int size)
{
  unsigned long int newsize;
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_data", 68, "wb is NULL\n");
    return -1;
  }

  else
    if(size == 0ul)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_data", 73, "size=0\n");
      return -1;
    }

    else
    {
      newsize = wb->size + size;
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)wb->data, newsize + (unsigned long int)4);
      wb->data = (char *)return_value_realloc_1;
      if(wb->data == ((char *)NULL))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_data", 80, "realloc(oldsize=%ld, newsize=%ld) failed\n", (signed long int)wb->size, (signed long int)newsize + (signed long int)4);
        return -1;
      }

      else
      {
        memcpy((void *)(wb->data + (signed long int)wb->size), data, size);
        wb->size = wb->size + size;
        return 0;
      }
    }
}

// writebuf_add_dico
// file writebuf.c line 89
signed int writebuf_add_dico(struct s_writebuf *wb, struct s_dico *d, char *magic)
{
  struct s_dicoitem *item;
  signed int itemnum;
  unsigned int headerlen;
  unsigned int checksum;
  unsigned char *buffer;
  unsigned char *bufpos;
  unsigned short int temp16;
  unsigned int temp32;
  unsigned short int count;
  signed int return_value_memcmp_1;
  void *return_value_mempcpy_10;
  if(d == ((struct s_dico *)NULL) || wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_dico", 102, "a parameter is null\n");
    return -1;
  }

  else
  {
    fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 107, "archio_write_dico(wb=%p, dico=%p, magic=[%c%c%c%c])\n", wb, d, magic[(signed long int)0], magic[(signed long int)1], magic[(signed long int)2], magic[(signed long int)3]);
    item = d->head;
    for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
      if((signed int)item->section == 0)
      {
        if((signed int)item->key == 2)
        {
          return_value_memcmp_1=memcmp((const void *)magic, (const void *)"ObJt", (unsigned long int)4);
          if(return_value_memcmp_1 == 0)
            fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 110, "filepath=[%s]\n", item->data);

        }

      }

    signed int return_value_dico_count_all_sections_2;
    return_value_dico_count_all_sections_2=dico_count_all_sections(d);
    count = (unsigned short int)return_value_dico_count_all_sections_2;
    fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 114, "dico_count_all_sections(dico=%p)=%d\n", d, (signed int)count);
    headerlen = (unsigned int)sizeof(unsigned short int) /*2ul*/ ;
    item = d->head;
    for( ; !(item == ((struct s_dicoitem *)NULL)); item = item->next)
    {
      headerlen = headerlen + (unsigned int)sizeof(unsigned char) /*1ul*/ ;
      headerlen = headerlen + (unsigned int)sizeof(unsigned char) /*1ul*/ ;
      headerlen = headerlen + (unsigned int)sizeof(unsigned short int) /*2ul*/ ;
      headerlen = headerlen + (unsigned int)sizeof(unsigned short int) /*2ul*/ ;
      headerlen = headerlen + (unsigned int)item->size;
    }
    fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 126, "calculated headerlen for that dico: headerlen=%d\n", (signed int)headerlen);
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)headerlen);
    buffer = (unsigned char *)return_value_malloc_3;
    bufpos = buffer;
    if(buffer == ((unsigned char *)NULL))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_dico", 131, "cannot allocate memory for buffer");
      return -1;
    }

    else
    {
      temp16 = (unsigned short int)count;
      fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 137, "mempcpy items count to buffer: u16 count=%d\n", (signed int)count);
      void *return_value_mempcpy_4;
      return_value_mempcpy_4=mempcpy((void *)bufpos, (const void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
      bufpos = (unsigned char *)return_value_mempcpy_4;
      item = d->head;
      itemnum = 0;
      for( ; !(item == ((struct s_dicoitem *)NULL)); itemnum = itemnum + 1)
      {
        signed int tmp_post_5 = itemnum;
        itemnum = itemnum + 1;
        fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 144, "itemnum=%d (type=%d, section=%d, key=%d, size=%d)\n", (signed int)tmp_post_5, (signed int)item->type, (signed int)item->section, (signed int)item->key, (signed int)item->size);
        void *return_value_mempcpy_6;
        return_value_mempcpy_6=mempcpy((void *)bufpos, (const void *)&item->type, sizeof(unsigned char) /*1ul*/ );
        bufpos = (unsigned char *)return_value_mempcpy_6;
        void *return_value_mempcpy_7;
        return_value_mempcpy_7=mempcpy((void *)bufpos, (const void *)&item->section, sizeof(unsigned char) /*1ul*/ );
        bufpos = (unsigned char *)return_value_mempcpy_7;
        temp16 = (unsigned short int)item->key;
        void *return_value_mempcpy_8;
        return_value_mempcpy_8=mempcpy((void *)bufpos, (const void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
        bufpos = (unsigned char *)return_value_mempcpy_8;
        temp16 = (unsigned short int)item->size;
        void *return_value_mempcpy_9;
        return_value_mempcpy_9=mempcpy((void *)bufpos, (const void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
        bufpos = (unsigned char *)return_value_mempcpy_9;
        if((signed int)item->size >= 1)
        {
          return_value_mempcpy_10=mempcpy((void *)bufpos, (const void *)item->data, (unsigned long int)item->size);
          bufpos = (unsigned char *)return_value_mempcpy_10;
        }

        item = item->next;
      }
      fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 164, "all %d items mempcopied to buffer\n", (signed int)itemnum);
      temp32 = (unsigned int)headerlen;
      signed int return_value_writebuf_add_data_11;
      return_value_writebuf_add_data_11=writebuf_add_data(wb, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
      if(!(return_value_writebuf_add_data_11 == 0))
      {
        free((void *)buffer);
        return -1;
      }

      else
      {
        signed int return_value_writebuf_add_data_12;
        return_value_writebuf_add_data_12=writebuf_add_data(wb, (void *)buffer, (unsigned long int)headerlen);
        if(!(return_value_writebuf_add_data_12 == 0))
        {
          free((void *)buffer);
          return -1;
        }

        else
        {
          checksum=fletcher32(buffer, headerlen);
          temp32 = (unsigned int)checksum;
          signed int return_value_writebuf_add_data_13;
          return_value_writebuf_add_data_13=writebuf_add_data(wb, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
          if(!(return_value_writebuf_add_data_13 == 0))
          {
            free((void *)buffer);
            return -1;
          }

          else
          {
            free((void *)buffer);
            fsaprintf(5, (_Bool)0, 5 >= 3, "writebuf.c", "writebuf_add_dico", 186, "end of archio_write_dico(wb=%p, dico=%p, magic=[%c%c%c%c])\n", wb, d, magic[(signed long int)0], magic[(signed long int)1], magic[(signed long int)2], magic[(signed long int)3]);
            return 0;
          }
        }
      }
    }
  }
}

// writebuf_add_header
// file writebuf.h line 36
signed int writebuf_add_header(struct s_writebuf *wb, struct s_dico *d, char *magic, unsigned int archid, unsigned short int fsid)
{
  unsigned short int temp16;
  unsigned int temp32;
  if(magic == ((char *)NULL) || d == ((struct s_dico *)NULL) || wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_header", 197, "a parameter is null\n");
    return -1;
  }

  else
  {
    signed int return_value_writebuf_add_data_1;
    return_value_writebuf_add_data_1=writebuf_add_data(wb, (void *)magic, (unsigned long int)4);
    if(!(return_value_writebuf_add_data_1 == 0))
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_header", 203, "writebuf_add_data() failed to write FSA_SIZEOF_MAGIC\n");
      return -2;
    }

    else
    {
      temp32 = (unsigned int)archid;
      signed int return_value_writebuf_add_data_2;
      return_value_writebuf_add_data_2=writebuf_add_data(wb, (void *)&temp32, sizeof(unsigned int) /*4ul*/ );
      if(!(return_value_writebuf_add_data_2 == 0))
      {
        fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_header", 210, "writebuf_add_data() failed to write archid\n");
        return -3;
      }

      else
      {
        temp16 = (unsigned short int)fsid;
        signed int return_value_writebuf_add_data_3;
        return_value_writebuf_add_data_3=writebuf_add_data(wb, (void *)&temp16, sizeof(unsigned short int) /*2ul*/ );
        if(!(return_value_writebuf_add_data_3 == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_header", 217, "writebuf_add_data() failed to write fsid\n");
          return -3;
        }

        else
        {
          signed int return_value_writebuf_add_dico_4;
          return_value_writebuf_add_dico_4=writebuf_add_dico(wb, d, magic);
          if(!(return_value_writebuf_add_dico_4 == 0))
          {
            fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_add_header", 223, "archio_write_dico() failed to write the header dico\n");
            return -4;
          }

          else
            return 0;
        }
      }
    }
  }
}

// writebuf_alloc
// file writebuf.h line 32
struct s_writebuf * writebuf_alloc()
{
  struct s_writebuf *wb;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct s_writebuf) /*16ul*/ );
  wb = (struct s_writebuf *)return_value_malloc_1;
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_alloc", 38, "malloc(%d) failed: cannot allocate memory for writebuf\n", (signed int)sizeof(struct s_writebuf) /*16ul*/ );
    return (struct s_writebuf *)(void *)0;
  }

  else
  {
    wb->size = (unsigned long int)0;
    wb->data = (char *)(void *)0;
    return wb;
  }
}

// writebuf_destroy
// file writebuf.h line 33
signed int writebuf_destroy(struct s_writebuf *wb)
{
  if(wb == ((struct s_writebuf *)NULL))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "writebuf.c", "writebuf_destroy", 49, "wb is NULL\n");
    return -1;
  }

  else
  {
    if(!(wb->data == ((char *)NULL)))
    {
      free((void *)wb->data);
      wb->data = (char *)(void *)0;
    }

    wb->size = (unsigned long int)0;
    free((void *)wb);
    return 0;
  }
}

// xfs_check_compatibility
// file fs_xfs.c line 37
signed int xfs_check_compatibility(unsigned long int compat, unsigned long int ro_compat, unsigned long int incompat, unsigned long int log_incompat)
{
  signed int errors = 0;
  fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_check_compatibility", 41, "xfs features: compat=[%ld]\n", (signed long int)compat);
  fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_check_compatibility", 42, "xfs features: ro_compat=[%ld]\n", (signed long int)ro_compat);
  fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_check_compatibility", 43, "xfs features: incompat=[%ld]\n", (signed long int)incompat);
  fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_check_compatibility", 44, "xfs features: log_incompat=[%ld]\n", (signed long int)log_incompat);
  if(!((18446744073709551615ul & compat) == 0ul))
    errors = errors + 1;

  if(!((18446744073709551614ul & ro_compat) == 0ul))
    errors = errors + 1;

  if(!((18446744073709551608ul & incompat) == 0ul))
    errors = errors + 1;

  if(!((18446744073709551615ul & log_incompat) == 0ul))
    errors = errors + 1;

  if(errors >= 1)
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_xfs.c", "xfs_check_compatibility", 60, "this filesystem has XFS features which are not supported by this fsarchiver version.\n");
    return -1;
  }

  else
    return 0;
}

// xfs_get_reqmntopt
// file fs_xfs.c line 361
signed int xfs_get_reqmntopt(char *partition, struct s_strlist *reqopt, struct s_strlist *badopt)
{
  if(badopt == ((struct s_strlist *)NULL) || reqopt == ((struct s_strlist *)NULL))
    return -1;

  else
    return 0;
}

// xfs_getinfo
// file fs_xfs.c line 223
signed int xfs_getinfo(struct s_dico *d, char *devname)
{
  struct xfs_sb sb;
  char uuid[512l];
  unsigned long int xfsver;
  unsigned int temp32;
  signed int ret = 0;
  signed int fd;
  signed int res;
  unsigned long int sb_features_compat = (unsigned long int)0;
  unsigned long int sb_features_ro_compat = (unsigned long int)0;
  unsigned long int sb_features_incompat = (unsigned long int)0;
  unsigned long int sb_features_log_incompat = (unsigned long int)0;
  fd=open64(devname, 00 | 0);
  signed long int return_value_read_1;
  unsigned int return_value___bswap_32_2;
  signed int return_value_xfs_check_compatibility_8;
  if(!(fd >= 0))
    ret = -1;

  else
  {
    return_value_read_1=read(fd, (void *)&sb, sizeof(struct xfs_sb) /*264ul*/ );
    res = (signed int)return_value_read_1;
    if(!((unsigned long int)res == sizeof(struct xfs_sb) /*264ul*/ ))
      ret = -1;

    else
    {
      return_value___bswap_32_2=__bswap_32(sb.sb_magicnum);
      if(!(return_value___bswap_32_2 == 1481003842u))
      {
        ret = -1;
        fsaprintf(3, (_Bool)0, 3 >= 3, "fs_xfs.c", "xfs_getinfo", 252, "sb.sb_magicnum!=XFS_SB_MAGIC\n");
      }

      else
      {
        unsigned short int tmp_statement_expression_3;
        unsigned short int __v;
        unsigned short int __x = (unsigned short int)sb.sb_versionnum;
        asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
        tmp_statement_expression_3 = __v;
        xfsver = (unsigned long int)((signed int)tmp_statement_expression_3 & 0x000f);
        if(xfsver == 4ul || xfsver == 5ul)
        {
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_getinfo", 262, "Detected XFS filesystem version %d\n", (signed int)xfsver);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)34, xfsver);
          goto __CPROVER_DUMP_L8;
        }

        ret = -1;
        fsaprintf(3, (_Bool)0, 3 >= 3, "fs_xfs.c", "xfs_getinfo", 267, "Invalid XFS filesystem version: version=[%d]\n", (signed int)xfsver);
        goto xfs_read_sb_close;

      __CPROVER_DUMP_L8:
        ;
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_getinfo", 273, "xfs_label=[%s]\n", (const void *)sb.sb_fname);
        dico_add_string(d, (unsigned char)0, (unsigned short int)5, (char *)sb.sb_fname);
        memset((void *)uuid, 0, sizeof(char [512l]) /*512ul*/ );
        uuid_unparse_lower((unsigned char *)&sb.sb_uuid, uuid);
        dico_add_string(d, (unsigned char)0, (unsigned short int)6, uuid);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_getinfo", 282, "xfs_uuid=[%s]\n", (const void *)uuid);
        temp32=__bswap_32(sb.sb_blocksize);
        if(temp32 >= 65537u || !(temp32 % 512u == 0u) || !(temp32 >= 512u))
        {
          ret = -1;
          fsaprintf(3, (_Bool)0, 3 >= 3, "fs_xfs.c", "xfs_getinfo", 288, "xfs_blksize=[%ld] is an invalid xfs block size\n", (signed long int)temp32);
        }

        else
        {
          dico_add_u64(d, (unsigned char)0, (unsigned short int)17, (unsigned long int)temp32);
          fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_getinfo", 292, "xfs_blksize=[%ld]\n", (signed long int)temp32);
          if(xfsver == 5ul)
          {
            unsigned int return_value___bswap_32_4;
            return_value___bswap_32_4=__bswap_32(sb.sb_features_compat);
            sb_features_compat = (unsigned long int)return_value___bswap_32_4;
            unsigned int return_value___bswap_32_5;
            return_value___bswap_32_5=__bswap_32(sb.sb_features_ro_compat);
            sb_features_ro_compat = (unsigned long int)return_value___bswap_32_5;
            unsigned int return_value___bswap_32_6;
            return_value___bswap_32_6=__bswap_32(sb.sb_features_incompat);
            sb_features_incompat = (unsigned long int)return_value___bswap_32_6;
            unsigned int return_value___bswap_32_7;
            return_value___bswap_32_7=__bswap_32(sb.sb_features_log_incompat);
            sb_features_log_incompat = (unsigned long int)return_value___bswap_32_7;
          }

          return_value_xfs_check_compatibility_8=xfs_check_compatibility(sb_features_compat, sb_features_ro_compat, sb_features_incompat, sb_features_log_incompat);
          if(!(return_value_xfs_check_compatibility_8 == 0))
            return -1;

          dico_add_u64(d, (unsigned char)0, (unsigned short int)35, (unsigned long int)sb_features_compat);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)36, (unsigned long int)sb_features_ro_compat);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)37, (unsigned long int)sb_features_incompat);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)38, (unsigned long int)sb_features_log_incompat);
          dico_add_u64(d, (unsigned char)0, (unsigned short int)25, (unsigned long int)((((unsigned long int)0 & (unsigned long int)0xFFFF) << 48) + (((unsigned long int)6 & (unsigned long int)0xFFFF) << 32) + (((unsigned long int)20 & (unsigned long int)0xFFFF) << 16) + (((unsigned long int)0 & (unsigned long int)0xFFFF) << 0)));
        }
      }
    }

  xfs_read_sb_close:
    ;
    close(fd);
  }

xfs_read_sb_return:
  ;
  return ret;
}

// xfs_mkfs
// file fs_xfs.c line 68
signed int xfs_mkfs(struct s_dico *d, char *partition, char *fsoptions)
{
  char stdoutbuf[2048l];
  char command[2048l];
  char buffer[2048l];
  char mkfsopts[2048l];
  char xadmopts[2048l];
  char uuid[64l];
  unsigned long int xfstoolsver;
  signed int exitst;
  unsigned long int temp64;
  unsigned long int xfsver;
  signed int x;
  signed int y;
  signed int z;
  signed int optval;
  unsigned long int sb_features_compat = (unsigned long int)0;
  unsigned long int sb_features_ro_compat = (unsigned long int)0;
  unsigned long int sb_features_incompat = (unsigned long int)0;
  unsigned long int sb_features_log_incompat = (unsigned long int)0;
  signed int return_value_exec_command_1;
  return_value_exec_command_1=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , (signed int *)(void *)0, stdoutbuf, (signed int)sizeof(char [2048l]) /*2048ul*/ , (char *)(void *)0, 0, "mkfs.xfs -V");
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_7;
  if(!(return_value_exec_command_1 == 0))
  {
    fsaprintf(0, (_Bool)0, (_Bool)1, "fs_xfs.c", "xfs_mkfs", 90, "mkfs.xfs not found. please install xfsprogs on your system or check the PATH.\n");
    return -1;
  }

  else
  {
    z = 0;
    y = z;
    x = y;
    sscanf(stdoutbuf, "mkfs.xfs version %d.%d.%d", &x, &y, &z);
    if(x == 0 && y == 0)
    {
      fsaprintf(0, (_Bool)0, (_Bool)1, "fs_xfs.c", "xfs_mkfs", 96, "Can't parse mkfs.xfs version number: x=y=0\n");
      return -1;
    }

    else
    {
      xfstoolsver = ((unsigned long int)x << 16) + ((unsigned long int)y << 8) + ((unsigned long int)z << 0);
      fsaprintf(2, (_Bool)0, 2 >= 3, "fs_xfs.c", "xfs_mkfs", 100, "Detected mkfs.xfs version %d.%d.%d\n", x, y, z);
      memset((void *)mkfsopts, 0, sizeof(char [2048l]) /*2048ul*/ );
      memset((void *)xadmopts, 0, sizeof(char [2048l]) /*2048ul*/ );
      memset((void *)uuid, 0, sizeof(char [64l]) /*64ul*/ );
      strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " %s ", fsoptions);
      signed int return_value_dico_get_string_3;
      return_value_dico_get_string_3=dico_get_string(d, (unsigned char)0, (unsigned short int)5, buffer, (unsigned short int)sizeof(char [2048l]) /*2048ul*/ );
      if(return_value_dico_get_string_3 == 0)
      {
        return_value_strlen_2=strlen(buffer);
        if(return_value_strlen_2 >= 1ul)
          strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -L '%.12s' ", (const void *)buffer);

      }

      signed int return_value_dico_get_u64_4;
      return_value_dico_get_u64_4=dico_get_u64(d, (unsigned char)0, (unsigned short int)17, &temp64);
      if(return_value_dico_get_u64_4 == 0)
      {
        if(temp64 % 512ul == 0ul)
        {
          if(temp64 >= 512ul)
          {
            if(!(temp64 >= 65537ul))
              strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -b size=%ld ", (signed long int)temp64);

          }

        }

      }

      dico_get_u64(d, (unsigned char)0, (unsigned short int)35, &sb_features_compat);
      dico_get_u64(d, (unsigned char)0, (unsigned short int)36, &sb_features_ro_compat);
      dico_get_u64(d, (unsigned char)0, (unsigned short int)37, &sb_features_incompat);
      dico_get_u64(d, (unsigned char)0, (unsigned short int)38, &sb_features_log_incompat);
      signed int return_value_xfs_check_compatibility_5;
      return_value_xfs_check_compatibility_5=xfs_check_compatibility(sb_features_compat, sb_features_ro_compat, sb_features_incompat, sb_features_log_incompat);
      if(!(return_value_xfs_check_compatibility_5 == 0))
        return -1;

      else
      {
        signed int return_value_dico_get_u64_6;
        return_value_dico_get_u64_6=dico_get_u64(d, (unsigned char)0, (unsigned short int)34, &temp64);
        if(temp64 == 4ul || !(return_value_dico_get_u64_6 == 0))
          xfsver = (unsigned long int)4;

        else
          xfsver = (unsigned long int)5;
        if(xfsver == 5ul && !(xfstoolsver >= 262912ul))
        {
          xfsver = (unsigned long int)4;
          fsaprintf(0, (_Bool)0, 0 >= 3, "fs_xfs.c", "xfs_mkfs", 152, "It is impossible to restore this filesystem as an XFSv5 and preserve its UUID\nwith mkfs.xfs < 4.3.0. This filesystem will be restored as an XFSv4 instead\nas this is a much safer option (preserving the UUID may be required on\nboot/root filesystems for the operating system to be able to start). If you\nreally want to have an XFSv5 filesystem, please upgrade xfsprogs to version\n4.3.0 or more recent and rerun this operation to get an XFSv5 with the same\nUUID as original filesystem\n");
        }

        if(xfstoolsver >= 197120ul)
        {
          optval = (signed int)(xfsver == (unsigned long int)5);
          strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -m crc=%d ", (signed int)optval);
        }

        if(xfstoolsver >= 197121ul)
        {
          optval = (signed int)(xfsver == (unsigned long int)5 && (sb_features_ro_compat & (unsigned long int)(1 << 0)) != 0ul);
          strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -m finobt=%d ", (signed int)optval);
        }

        signed int return_value_dico_get_string_8;
        return_value_dico_get_string_8=dico_get_string(d, (unsigned char)0, (unsigned short int)6, uuid, (unsigned short int)sizeof(char [64l]) /*64ul*/ );
        if(return_value_dico_get_string_8 == 0)
        {
          return_value_strlen_7=strlen(uuid);
          if(return_value_strlen_7 == 36ul)
          {
            if(xfstoolsver >= 262912ul)
              strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -m uuid=%s ", (const void *)uuid);

            else
              strlcatf(xadmopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -U %s ", (const void *)uuid);
          }

        }

        if(xfstoolsver >= 197120ul)
        {
          if(xfsver == 4ul)
            strlcatf(mkfsopts, (signed int)sizeof(char [2048l]) /*2048ul*/ , " -n ftype=0 ");

        }

        signed int return_value_exec_command_9;
        return_value_exec_command_9=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "mkfs.xfs -f %s %s", partition, (const void *)mkfsopts);
        if(!(return_value_exec_command_9 == 0) || !(exitst == 0))
        {
          fsaprintf(0, (_Bool)0, (_Bool)1, "fs_xfs.c", "xfs_mkfs", 207, "command [%s] failed\n", (const void *)command);
          return -1;
        }

        else
        {
          if(!(xadmopts[0l] == 0))
          {
            signed int return_value_exec_command_10;
            return_value_exec_command_10=exec_command(command, (signed int)sizeof(char [2048l]) /*2048ul*/ , &exitst, (char *)(void *)0, 0, (char *)(void *)0, 0, "xfs_admin %s %s", (const void *)xadmopts, partition);
            if(!(return_value_exec_command_10 == 0) || !(exitst == 0))
            {
              fsaprintf(0, (_Bool)0, (_Bool)1, "fs_xfs.c", "xfs_mkfs", 215, "command [%s] failed\n", (const void *)command);
              return -1;
            }

          }

          return 0;
        }
      }
    }
  }
}

// xfs_mount
// file fs_xfs.c line 322
signed int xfs_mount(char *partition, char *mntbuf, char *fsbuf, signed int flags, char *mntinfo)
{
  signed int return_value_generic_mount_1;
  return_value_generic_mount_1=generic_mount(partition, mntbuf, fsbuf, "nouuid", flags);
  return return_value_generic_mount_1;
}

// xfs_test
// file fs_xfs.c line 332
signed int xfs_test(char *devname)
{
  struct xfs_sb sb;
  signed int fd;
  fd=open64(devname, 00 | 0);
  if(!(fd >= 0))
  {
    fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_test", 339, "open64(%s) failed\n", devname);
    return 0;
  }

  else
  {
    memset((void *)&sb, 0, sizeof(struct xfs_sb) /*264ul*/ );
    signed long int return_value_read_1;
    return_value_read_1=read(fd, (void *)&sb, sizeof(struct xfs_sb) /*264ul*/ );
    if(!((unsigned long int)return_value_read_1 == sizeof(struct xfs_sb) /*264ul*/ ))
    {
      close(fd);
      fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_test", 346, "read failed\n");
      return 0;
    }

    else
    {
      unsigned int return_value___bswap_32_3;
      return_value___bswap_32_3=__bswap_32(sb.sb_magicnum);
      if(!(return_value___bswap_32_3 == 1481003842u))
      {
        close(fd);
        unsigned int return_value___bswap_32_2;
        return_value___bswap_32_2=__bswap_32(sb.sb_magicnum);
        fsaprintf(4, (_Bool)0, 4 >= 3, "fs_xfs.c", "xfs_test", 353, "(be32_to_cpu(sb.sb_magicnum)=%.8x) != (XFS_SB_MAGIC=%.8x)\n", return_value___bswap_32_2, 0x58465342);
        return 0;
      }

      close(fd);
      return 1;
    }
  }
}

// xfs_umount
// file fs_xfs.c line 327
signed int xfs_umount(char *partition, char *mntbuf)
{
  signed int return_value_generic_umount_1;
  return_value_generic_umount_1=generic_umount(mntbuf);
  return return_value_generic_umount_1;
}

