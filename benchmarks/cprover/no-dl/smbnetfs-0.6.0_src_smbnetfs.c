// #anon_enum_GNOME_KEYRING_RESULT_OK=0_GNOME_KEYRING_RESULT_DENIED=1_GNOME_KEYRING_RESULT_NO_KEYRING_DAEMON=2_GNOME_KEYRING_RESULT_ALREADY_UNLOCKED=3_GNOME_KEYRING_RESULT_NO_SUCH_KEYRING=4_GNOME_KEYRING_RESULT_BAD_ARGUMENTS=5_GNOME_KEYRING_RESULT_IO_ERROR=6_GNOME_KEYRING_RESULT_CANCELLED=7_GNOME_KEYRING_RESULT_KEYRING_ALREADY_EXISTS=8_GNOME_KEYRING_RESULT_NO_MATCH=9
// file /usr/include/gnome-keyring-1/gnome-keyring-result.h line 29
enum anonymous_8 { GNOME_KEYRING_RESULT_OK=0, GNOME_KEYRING_RESULT_DENIED=1, GNOME_KEYRING_RESULT_NO_KEYRING_DAEMON=2, GNOME_KEYRING_RESULT_ALREADY_UNLOCKED=3, GNOME_KEYRING_RESULT_NO_SUCH_KEYRING=4, GNOME_KEYRING_RESULT_BAD_ARGUMENTS=5, GNOME_KEYRING_RESULT_IO_ERROR=6, GNOME_KEYRING_RESULT_CANCELLED=7, GNOME_KEYRING_RESULT_KEYRING_ALREADY_EXISTS=8, GNOME_KEYRING_RESULT_NO_MATCH=9 };

// tag-#anon#ST[*{S8}_S8_'keyring'||U32'item_id'||U32'_pad0'||*{S8}_S8_'protocol'||*{S8}_S8_'server'||*{S8}_S8_'object'||*{S8}_S8_'authtype'||U32'port'||U32'_pad1'||*{S8}_S8_'user'||*{S8}_S8_'domain'||*{S8}_S8_'password'|]
// file /usr/include/gnome-keyring-1/gnome-keyring.h line 519
struct anonymous_9;

// tag-#anon#ST[*{S8}_S8_'linkpath'|]
// file smbitem.h line 41
struct anonymous_3;

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_17;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_15;

// tag-#anon#ST[ARR16{S64}_S64_'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_6;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_10;

// tag-#anon#ST[S32'child_cnt'||S32'max_child_cnt'||*{*{SYM#tag-authitem#}_SYM#tag-authitem#_}_*{SYM#tag-authitem#}_SYM#tag-authitem#__'childs'|]
// file auth.c line 16
struct anonymous_7;

// tag-#anon#ST[S32'child_cnt'||S32'max_child_cnt'||*{*{SYM#tag-smbitem#}_SYM#tag-smbitem#_}_*{SYM#tag-smbitem#}_SYM#tag-smbitem#__'childs'|]
// file smbitem.h line 36
struct anonymous_2;

// tag-#anon#ST[S32'is_hidden'||U32'_pad0'||*{SYM#tag-smbitem#}_SYM#tag-smbitem#_'parent_group'|]
// file smbitem.h line 32
struct anonymous_1;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_11;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_14;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_13;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_19;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_12;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_16;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_20;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_18;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_5;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'is_hidden'||U32'_pad0'||*{SYM#tag-smbitem#}_SYM#tag-smbitem#_'parent_group'|]#'_anon0'||SYM#tag-#anon#ST[S32'child_cnt'||S32'max_child_cnt'||*{*{SYM#tag-smbitem#}_SYM#tag-smbitem#_}_*{SYM#tag-smbitem#}_SYM#tag-smbitem#__'childs'|]#'_anon1'||SYM#tag-#anon#ST[*{S8}_S8_'linkpath'|]#'_anon2'|]
// file smbitem.h line 31
union anonymous_4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-SMBC_internal_data
// file /usr/include/samba-4.0/libsmbclient.h line 3155
struct SMBC_internal_data;

// tag-_GList
// file /usr/include/glib-2.0/glib/glist.h line 37
struct _GList;

// tag-_GMainContext
// file /usr/include/glib-2.0/glib/gmain.h line 48
struct _GMainContext;

// tag-_GMainLoop
// file /usr/include/glib-2.0/glib/gmain.h line 56
struct _GMainLoop;

// tag-_GSList
// file /usr/include/glib-2.0/glib/gslist.h line 37
struct _GSList;

// tag-_GSource
// file /usr/include/glib-2.0/glib/gmain.h line 64
struct _GSource;

// tag-_GSourceCallbackFuncs
// file /usr/include/glib-2.0/glib/gmain.h line 77
struct _GSourceCallbackFuncs;

// tag-_GSourceFuncs
// file /usr/include/glib-2.0/glib/gmain.h line 130
struct _GSourceFuncs;

// tag-_GSourcePrivate
// file /usr/include/glib-2.0/glib/gmain.h line 65
struct _GSourcePrivate;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_SMBCCTX
// file /usr/include/samba-4.0/libsmbclient.h line 263
struct _SMBCCTX;

// tag-_SMBCFILE
// file /usr/include/samba-4.0/libsmbclient.h line 258
struct _SMBCFILE;

// tag-_SMBCSRV
// file /usr/include/samba-4.0/libsmbclient.h line 253
struct _SMBCSRV;

// tag-__LIST
// file list.h line 6
struct __LIST;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_smbc_callbacks
// file /usr/include/samba-4.0/libsmbclient.h line 3041
struct _smbc_callbacks;

// tag-_smbc_options
// file /usr/include/samba-4.0/libsmbclient.h line 3146
struct _smbc_options;

// tag-authinfo
// file auth.h line 6
struct authinfo;

// tag-authitem
// file auth.c line 12
struct authitem;

// tag-config_read_mode
// file reconfigure.c line 28
enum config_read_mode { DELIMITER=0, PLAIN=1, QUOTED=2 };

// tag-flock
// file /usr/include/x86_64-linux-gnu/bits/fcntl.h line 35
struct flock;

// tag-fuse_args
// file /usr/include/fuse/fuse_opt.h line 108
struct fuse_args;

// tag-fuse_buf
// file /usr/include/fuse/fuse_common.h line 345
struct fuse_buf;

// tag-fuse_buf_flags
// file /usr/include/fuse/fuse_common.h line 269
enum fuse_buf_flags { FUSE_BUF_IS_FD=2, FUSE_BUF_FD_SEEK=4, FUSE_BUF_FD_RETRY=8 };

// tag-fuse_bufvec
// file /usr/include/fuse/fuse_common.h line 386
struct fuse_bufvec;

// tag-fuse_conn_info
// file /usr/include/fuse/fuse_common.h line 140
struct fuse_conn_info;

// tag-fuse_dirhandle
// file /usr/include/fuse/fuse.h line 62
struct fuse_dirhandle;

// tag-fuse_file_info
// file /usr/include/fuse/fuse_common.h line 45
struct fuse_file_info;

// tag-fuse_operations
// file /usr/include/fuse/fuse.h line 88
struct fuse_operations;

// tag-fuse_opt
// file /usr/include/fuse/fuse_opt.h line 76
struct fuse_opt;

// tag-fuse_pollhandle
// file /usr/include/fuse/fuse_common.h line 194
struct fuse_pollhandle;

// tag-gnome_keyring_authinfo
// file auth-gnome-keyring.h line 12
struct gnome_keyring_authinfo;

// tag-gnome_keyring_status
// file auth-gnome-keyring.c line 23
enum gnome_keyring_status { GNOME_KEYRING_NOT_AVAILABLE=-1, GNOME_KEYRING_DISABLED=0, GNOME_KEYRING_ENABLED=1 };

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-neg_cache
// file neg_cache.c line 10
struct neg_cache;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-print_job_info
// file /usr/include/samba-4.0/libsmbclient.h line 220
struct print_job_info;

// tag-process_rec
// file process.c line 20
struct process_rec;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-req_data
// file auth-gnome-keyring.c line 35
struct req_data;

// tag-req_timeout
// file auth-gnome-keyring.c line 29
struct req_timeout;

// tag-samba_ctx
// file samba.c line 13
struct samba_ctx;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-smb_conn_buf_reply
// file smb_conn_proto.h line 153
struct smb_conn_buf_reply;

// tag-smb_conn_cmd
// file smb_conn_proto.h line 13
enum smb_conn_cmd { DIE_MSG=-3, MESSAGE=-2, PASSWORD=-1, OPEN=0, CREAT=1, READ=2, WRITE=3, CLOSE=4, UNLINK=5, RENAME=6, OPENDIR=7, CLOSEDIR=8, READDIR=9, MKDIR=10, RMDIR=11, STAT=12, FSTAT=13, FTRUNCATE=14, CHMOD=15, UTIMES=16, SETXATTR=17, GETXATTR=18, LISTXATTR=19, REMOVEXATTR=20 };

// tag-smb_conn_ctx
// file smb_conn.h line 10
struct smb_conn_ctx;

// tag-smb_conn_dirent_rec
// file smb_conn_proto.h line 52
struct smb_conn_dirent_rec;

// tag-smb_conn_fd_query
// file smb_conn_proto.h line 90
struct smb_conn_fd_query;

// tag-smb_conn_fd_reply
// file smb_conn_proto.h line 148
struct smb_conn_fd_reply;

// tag-smb_conn_file
// file smb_conn.h line 19
struct smb_conn_file;

// tag-smb_conn_ftruncate_query
// file smb_conn_proto.h line 95
struct smb_conn_ftruncate_query;

// tag-smb_conn_getxattr_query
// file smb_conn_proto.h line 114
struct smb_conn_getxattr_query;

// tag-smb_conn_listxattr_query
// file smb_conn_proto.h line 108
struct smb_conn_listxattr_query;

// tag-smb_conn_message_req
// file smb_conn_proto.h line 169
struct smb_conn_message_req;

// tag-smb_conn_open_query
// file smb_conn_proto.h line 71
struct smb_conn_open_query;

// tag-smb_conn_passwd
// file smb_conn_proto.h line 135
struct smb_conn_passwd;

// tag-smb_conn_passwd_req
// file smb_conn_proto.h line 163
struct smb_conn_passwd_req;

// tag-smb_conn_query_hdr
// file smb_conn_proto.h line 40
struct smb_conn_query_hdr;

// tag-smb_conn_query_result
// file smb_conn.c line 35
struct smb_conn_query_result;

// tag-smb_conn_removexattr_query
// file smb_conn_proto.h line 129
struct smb_conn_removexattr_query;

// tag-smb_conn_rename_query
// file smb_conn_proto.h line 78
struct smb_conn_rename_query;

// tag-smb_conn_reply_hdr
// file smb_conn_proto.h line 46
struct smb_conn_reply_hdr;

// tag-smb_conn_rw_query
// file smb_conn_proto.h line 101
struct smb_conn_rw_query;

// tag-smb_conn_setxattr_query
// file smb_conn_proto.h line 121
struct smb_conn_setxattr_query;

// tag-smb_conn_srv_ctx
// file smb_conn_proto.h line 178
struct smb_conn_srv_ctx;

// tag-smb_conn_srv_fd
// file smb_conn_srv.h line 21
struct smb_conn_srv_fd;

// tag-smb_conn_srv_fd_type
// file smb_conn_srv.h line 16
enum smb_conn_srv_fd_type { SMB_CONN_FILE=0, SMB_CONN_DIR=1 };

// tag-smb_conn_stat_reply
// file smb_conn_proto.h line 158
struct smb_conn_stat_reply;

// tag-smb_conn_url_mode_query
// file smb_conn_proto.h line 65
struct smb_conn_url_mode_query;

// tag-smb_conn_url_query
// file smb_conn_proto.h line 60
struct smb_conn_url_query;

// tag-smb_conn_utimes_query
// file smb_conn_proto.h line 84
struct smb_conn_utimes_query;

// tag-smbc_dirent
// file /usr/include/samba-4.0/libsmbclient.h line 109
struct smbc_dirent;

// tag-smbitem
// file smbitem.h line 26
struct smbitem;

// tag-smbitem_path_t
// file smbitem.h line 17
enum smbitem_path_t { SMBITEM_UNKNOWN=0, SMBITEM_SMBNETFS_DIR=1, SMBITEM_SMBNETFS_LINK=2, SMBITEM_SMB_NAME=3, SMBITEM_SMB_SHARE=4, SMBITEM_SMB_SHARE_ITEM=5 };

// tag-smbitem_t
// file smbitem.h line 6
enum smbitem_t { SMBITEM_LINK=0, SMBITEM_HOST=1, SMBITEM_GROUP=2 };

// tag-smbitem_tree_t
// file smbitem.h line 12
enum smbitem_tree_t { SMBITEM_USER_TREE=0, SMBITEM_SAMBA_TREE=1 };

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stat_workaround
// file stat_workaround.c line 18
struct stat_workaround;

// tag-stat_workaround_exception
// file stat_workaround.c line 27
struct stat_workaround_exception;

// tag-stat_workaround_predefined
// file stat_workaround.c line 12
struct stat_workaround_predefined;

// tag-statvfs
// file /usr/include/x86_64-linux-gnu/bits/statvfs.h line 29
struct statvfs;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-trees
// file smbitem.c line 8
struct trees;

// tag-utimbuf
// file /usr/include/utime.h line 37
struct utimbuf;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __atomic_load_4
// file common.h line 27 function common_get_smbnetfs_debug_level
signed int __atomic_load_4(void);
// __atomic_store_4
// file common.c line 21 function common_set_smbnetfs_debug_level
signed int __atomic_store_4(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// add_to_list
// file list.h line 24
static inline void add_to_list(struct __LIST *list, struct __LIST *elem);
// add_to_list_link1
// file list.h line 24
static inline void add_to_list_link1(struct __LIST *list_link1, struct __LIST *elem_link1);
// add_to_list_link2
// file list.h line 24
static inline void add_to_list_link2(struct __LIST *list_link2, struct __LIST *elem_link2);
// add_to_list_link3
// file list.h line 24
static inline void add_to_list_link3(struct __LIST *list_link3, struct __LIST *elem_link3);
// add_to_list_back
// file list.h line 34
static inline void add_to_list_back(struct __LIST *list, struct __LIST *elem);
// add_to_list_back_link1
// file list.h line 34
static inline void add_to_list_back_link1(struct __LIST *list_link1, struct __LIST *elem_link1);
// add_to_list_back_link2
// file list.h line 34
static inline void add_to_list_back_link2(struct __LIST *list_link2, struct __LIST *elem_link2);
// auth_delete_obsolete
// file auth.c line 355
void auth_delete_obsolete(signed long int threshold);
// auth_get_authinfo
// file auth.c line 248
struct authinfo * auth_get_authinfo(const char *domain, const char *server, const char *share, signed int *suitability);
// auth_release_authinfo
// file auth.c line 303
void auth_release_authinfo(struct authinfo *info);
// auth_set_default_login_name
// file auth.c line 31
void auth_set_default_login_name(const char *name);
// auth_store_auth_data
// file auth.c line 309
signed int auth_store_auth_data(const char *server, const char *share, const char *domain, const char *user, const char *password);
// authinfo_compare
// file auth.c line 65
static inline signed int authinfo_compare(struct authinfo *info, const char *domain, const char *user, const char *password);
// authinfo_create_new
// file auth.c line 37
static struct authinfo * authinfo_create_new(const char *domain, const char *user, const char *password);
// authinfo_delete
// file auth.c line 61
static inline void authinfo_delete(struct authinfo *info);
// authinfo_find_in_list
// file auth.c line 74
static struct authinfo * authinfo_find_in_list(const char *domain, const char *user, const char *password);
// authinfo_release
// file auth.c line 114
static void authinfo_release(struct authinfo *info);
// authinfo_store_list
// file auth.c line 91
static struct authinfo * authinfo_store_list(const char *domain, const char *user, const char *password);
// authitem_create_item
// file auth.c line 122
static struct authitem * authitem_create_item(const char *name);
// authitem_delete_item
// file auth.c line 135
static inline void authitem_delete_item(struct authitem *item);
// authitem_delete_obsolete_items
// file auth.c line 141
static void authitem_delete_obsolete_items(struct authitem *item, signed long int threshold);
// authitem_find_subitem
// file auth.c line 178
static signed int authitem_find_subitem(struct authitem *item, const char *name);
// authitem_get_subitem
// file auth.c line 228
static struct authitem * authitem_get_subitem(struct authitem *item, const char *name);
// authitem_insert_subitem
// file auth.c line 200
static signed int authitem_insert_subitem(struct authitem *item, struct authitem *subitem, signed int pos);
// backtrace
// file /usr/include/execinfo.h line 27
extern signed int backtrace(void **, signed int);
// backtrace_symbols_fd
// file /usr/include/execinfo.h line 38
extern void backtrace_symbols_fd(void * const *, signed int, signed int);
// charset_init
// file charset.c line 14
signed int charset_init(const char *local, const char *samba);
// charset_local2smb
// file charset.c line 145
char * charset_local2smb(const char *src);
// charset_local2smb_r
// file charset.c line 120
char * charset_local2smb_r(const char *src, char *dst, unsigned long int dst_len);
// charset_local_to_samba
// file charset.c line 86
static char * charset_local_to_samba(void *cd, const char *str, unsigned long int str_len, char *buf, unsigned long int buf_len);
// charset_samba_to_local
// file charset.c line 27
static char * charset_samba_to_local(void *cd, const char *str, unsigned long int str_len, char *buf, unsigned long int buf_len);
// charset_smb2local
// file charset.c line 151
char * charset_smb2local(const char *src);
// charset_smb2local_r
// file charset.c line 134
char * charset_smb2local_r(const char *src, char *dst, unsigned long int dst_len);
// check_samba_version
// file main.c line 28
static void check_samba_version(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// common_debug_print
// file common.c line 55
void common_debug_print(const char *fmt, ...);
// common_get_smbnetfs_debug_level
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level(void);
// common_get_smbnetfs_debug_level_link1
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link1(void);
// common_get_smbnetfs_debug_level_link10
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link10(void);
// common_get_smbnetfs_debug_level_link11
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link11(void);
// common_get_smbnetfs_debug_level_link2
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link2(void);
// common_get_smbnetfs_debug_level_link3
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link3(void);
// common_get_smbnetfs_debug_level_link4
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link4(void);
// common_get_smbnetfs_debug_level_link5
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link5(void);
// common_get_smbnetfs_debug_level_link6
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link6(void);
// common_get_smbnetfs_debug_level_link7
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link7(void);
// common_get_smbnetfs_debug_level_link8
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link8(void);
// common_get_smbnetfs_debug_level_link9
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link9(void);
// common_print_backtrace
// file common.c line 72
void common_print_backtrace(void);
// common_set_log_file
// file common.c line 25
signed int common_set_log_file(const char *logfile);
// common_set_smbnetfs_debug_level
// file common.c line 18
signed int common_set_smbnetfs_debug_level(signed int level);
// event_destroy
// file event.c line 297
static void event_destroy(void *private_data);
// event_get_query_browser_flag
// file event.c line 38
static inline signed int event_get_query_browser_flag(void);
// event_get_smb_tree_elements_ttl
// file event.c line 78
static inline signed int event_get_smb_tree_elements_ttl(void);
// event_get_smb_tree_scan_period
// file event.c line 62
static inline signed int event_get_smb_tree_scan_period(void);
// event_get_time_step
// file event.c line 49
static inline signed int event_get_time_step(void);
// event_init
// file event.c line 281
static void * event_init(struct fuse_conn_info *conn);
// event_is_time_for_config_update
// file event.c line 113
static signed int event_is_time_for_config_update(void);
// event_is_time_for_smb_tree_scan
// file event.c line 97
static signed int event_is_time_for_smb_tree_scan(void);
// event_reread_config
// file event.c line 234
static void event_reread_config(void);
// event_scan_samba_group
// file event.c line 124
static void event_scan_samba_group(const char *group);
// event_scan_smb_root
// file event.c line 158
static void event_scan_smb_root(void);
// event_scan_smb_tree
// file event.c line 188
void event_scan_smb_tree(void);
// event_set_config_update_period
// file event.c line 82
signed int event_set_config_update_period(signed int period);
// event_set_event_handler
// file event.c line 309
void event_set_event_handler(struct fuse_operations *file_oper);
// event_set_last_config_update
// file event.c line 107
static void event_set_last_config_update(signed long int update_time);
// event_set_last_smb_tree_scan
// file event.c line 91
static void event_set_last_smb_tree_scan(signed long int scan_time);
// event_set_query_browser_flag
// file event.c line 32
signed int event_set_query_browser_flag(signed int flag);
// event_set_smb_tree_elements_ttl
// file event.c line 71
signed int event_set_smb_tree_elements_ttl(signed int ttl);
// event_set_smb_tree_scan_period
// file event.c line 53
signed int event_set_smb_tree_scan_period(signed int period);
// event_set_time_step
// file event.c line 42
signed int event_set_time_step(signed int step);
// event_thread
// file event.c line 247
static void * event_thread(void *data);
// event_update_smb_tree_thread
// file event.c line 201
static void * event_update_smb_tree_thread(void *data);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// first_list_elem
// file list.h line 16
static inline struct __LIST * first_list_elem(struct __LIST *list);
// first_list_elem_link1
// file list.h line 16
static inline struct __LIST * first_list_elem_link1(struct __LIST *list_link1);
// first_list_elem_link2
// file list.h line 16
static inline struct __LIST * first_list_elem_link2(struct __LIST *list_link2);
// first_list_elem_link3
// file list.h line 16
static inline struct __LIST * first_list_elem_link3(struct __LIST *list_link3);
// first_list_elem_link4
// file list.h line 16
static inline struct __LIST * first_list_elem_link4(struct __LIST *list_link4);
// first_list_elem_link5
// file list.h line 16
static inline struct __LIST * first_list_elem_link5(struct __LIST *list_link5);
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 219
extern signed int fstat(signed int, struct stat *);
// fsync
// file /usr/include/unistd.h line 956
extern signed int fsync(signed int);
// function_check_xattr_name
// file function.c line 70
static inline signed int function_check_xattr_name(const char *name);
// function_chmod
// file function.c line 465
static signed int function_chmod(const char *path, unsigned int mode);
// function_chown
// file function.c line 545
static signed int function_chown(const char *path, unsigned int uid, unsigned int gid);
// function_close
// file function.c line 135
static signed int function_close(const char *path, struct fuse_file_info *fi);
// function_closedir
// file function.c line 181
static signed int function_closedir(const char *path, struct fuse_file_info *fi);
// function_creat
// file function.c line 94
static signed int function_creat(const char *path, unsigned int mode, struct fuse_file_info *fi);
// function_fstat
// file function.c line 412
static signed int function_fstat(const char *path, struct stat *stbuf, struct fuse_file_info *fi);
// function_ftruncate
// file function.c line 454
static signed int function_ftruncate(const char *path, signed long int size, struct fuse_file_info *fi);
// function_get_dollar_share_visibility
// file function.c line 56
static inline signed int function_get_dollar_share_visibility(void);
// function_get_fd
// file function.c line 75
static inline struct smb_conn_file * function_get_fd(struct fuse_file_info *fi);
// function_get_free_space_size
// file function.c line 36
static signed int function_get_free_space_size(void);
// function_get_hidden_hosts_visibility
// file function.c line 66
static inline signed int function_get_hidden_hosts_visibility(void);
// function_get_quiet_flag
// file function.c line 46
static inline signed int function_get_quiet_flag(void);
// function_getxattr
// file function.c line 499
static signed int function_getxattr(const char *path, const char *name, char *value, unsigned long int size);
// function_listxattr
// file function.c line 509
static signed int function_listxattr(const char *path, char *list, unsigned long int size);
// function_mkdir
// file function.c line 330
static signed int function_mkdir(const char *path, unsigned int mode);
// function_mknod
// file function.c line 532
static signed int function_mknod(const char *path, unsigned int mode, unsigned long int rdev);
// function_open
// file function.c line 83
static signed int function_open(const char *path, struct fuse_file_info *fi);
// function_opendir
// file function.c line 160
static signed int function_opendir(const char *path, struct fuse_file_info *fi);
// function_read
// file function.c line 107
static signed int function_read(const char *path, char *buf, unsigned long int size, signed long int offset, struct fuse_file_info *fi);
// function_readdir
// file function.c line 191
static signed int function_readdir(const char *path, void *buf, signed int (*filler)(void *, const char *, struct stat *, signed long int), signed long int offset, struct fuse_file_info *fi);
// function_readdir::filler_object
//
signed int filler_object(void *, const char *, struct stat *, signed long int);
// function_readlink
// file function.c line 525
static signed int function_readlink(const char *path, char *buf, unsigned long int size);
// function_removexattr
// file function.c line 517
static signed int function_removexattr(const char *path, const char *name);
// function_rename
// file function.c line 152
static signed int function_rename(const char *from, const char *to);
// function_rmdir
// file function.c line 337
static signed int function_rmdir(const char *path);
// function_set_dollar_share_visibility
// file function.c line 50
signed int function_set_dollar_share_visibility(signed int flag);
// function_set_free_space_size
// file function.c line 30
signed int function_set_free_space_size(signed int blocks_count);
// function_set_hidden_hosts_visibility
// file function.c line 60
signed int function_set_hidden_hosts_visibility(signed int flag);
// function_set_quiet_flag
// file function.c line 40
signed int function_set_quiet_flag(signed int flag);
// function_setxattr
// file function.c line 488
static signed int function_setxattr(const char *path, const char *name, const char *value, unsigned long int size, signed int flags);
// function_stat
// file function.c line 344
static signed int function_stat(const char *path, struct stat *stbuf);
// function_statfs
// file function.c line 571
static signed int function_statfs(const char *path, struct statvfs *stbuf);
// function_store_fd
// file function.c line 79
static inline void function_store_fd(struct fuse_file_info *fi, struct smb_conn_file *fd);
// function_truncate
// file function.c line 555
static signed int function_truncate(const char *path, signed long int size);
// function_unlink
// file function.c line 145
static signed int function_unlink(const char *path);
// function_utimes
// file function.c line 472
static signed int function_utimes(const char *path, struct utimbuf *buffer);
// function_write
// file function.c line 121
static signed int function_write(const char *path, const char *buf, unsigned long int size, signed long int offset, struct fuse_file_info *fi);
// fuse_main_real
// file /usr/include/fuse/fuse.h line 766
signed int fuse_main_real(signed int, char **, struct fuse_operations *, unsigned long int, void *);
// fuse_opt_add_arg
// file /usr/include/fuse/fuse_opt.h line 230
signed int fuse_opt_add_arg(struct fuse_args *, const char *);
// fuse_opt_parse
// file /usr/include/fuse/fuse_opt.h line 202
signed int fuse_opt_parse(struct fuse_args *, void *, struct fuse_opt *, signed int (*)(void *, const char *, signed int, struct fuse_args *));
// g_list_first
// file /usr/include/glib-2.0/glib/glist.h line 128
extern struct _GList * g_list_first(struct _GList *);
// g_main_context_acquire
// file /usr/include/glib-2.0/glib/gmain.h line 338
extern signed int g_main_context_acquire(struct _GMainContext *);
// g_main_context_release
// file /usr/include/glib-2.0/glib/gmain.h line 340
extern void g_main_context_release(struct _GMainContext *);
// g_main_loop_get_context
// file /usr/include/glib-2.0/glib/gmain.h line 413
extern struct _GMainContext * g_main_loop_get_context(struct _GMainLoop *);
// g_main_loop_new
// file /usr/include/glib-2.0/glib/gmain.h line 400
extern struct _GMainLoop * g_main_loop_new(struct _GMainContext *, signed int);
// g_main_loop_quit
// file /usr/include/glib-2.0/glib/gmain.h line 405
extern void g_main_loop_quit(struct _GMainLoop *);
// g_main_loop_run
// file /usr/include/glib-2.0/glib/gmain.h line 403
extern void g_main_loop_run(struct _GMainLoop *);
// g_main_loop_unref
// file /usr/include/glib-2.0/glib/gmain.h line 409
extern void g_main_loop_unref(struct _GMainLoop *);
// g_set_application_name
// file /usr/include/glib-2.0/glib/gutils.h line 102
extern void g_set_application_name(const char *);
// g_source_attach
// file /usr/include/glib-2.0/glib/gmain.h line 426
extern unsigned int g_source_attach(struct _GSource *, struct _GMainContext *);
// g_source_new
// file /usr/include/glib-2.0/glib/gmain.h line 418
extern struct _GSource * g_source_new(struct _GSourceFuncs *, unsigned int);
// get_default_rw_block_size
// file main.c line 92
static inline unsigned long int get_default_rw_block_size(void);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getpagesize
// file /usr/include/unistd.h line 978
extern signed int getpagesize(void);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// gnome_keyring_cancel_request
// file /usr/include/gnome-keyring-1/gnome-keyring.h line 183
void gnome_keyring_cancel_request(void *);
// gnome_keyring_done
// file auth-gnome-keyring.c line 145
void gnome_keyring_done(void);
// gnome_keyring_enable
// file auth-gnome-keyring.c line 163
signed int gnome_keyring_enable(signed int state);
// gnome_keyring_find_network_password
// file /usr/include/gnome-keyring-1/gnome-keyring.h line 540
void * gnome_keyring_find_network_password(const char *, const char *, const char *, const char *, const char *, const char *, unsigned int, void (*)(enum anonymous_8, struct _GList *, void *), void *, void (*)(void *));
// gnome_keyring_free_authinfo
// file auth-gnome-keyring.c line 214
void gnome_keyring_free_authinfo(struct gnome_keyring_authinfo *info);
// gnome_keyring_get_authinfo
// file auth-gnome-keyring.c line 289
struct gnome_keyring_authinfo * gnome_keyring_get_authinfo(const char *domain, const char *server, const char *share);
// gnome_keyring_get_list_callback
// file auth-gnome-keyring.c line 218
static void gnome_keyring_get_list_callback(enum anonymous_8 result, struct _GList *list, void *data);
// gnome_keyring_init
// file auth-gnome-keyring.c line 117
void gnome_keyring_init(void);
// gnome_keyring_is_available
// file /usr/include/gnome-keyring-1/gnome-keyring.h line 169
signed int gnome_keyring_is_available(void);
// gnome_keyring_set_request_timeout
// file auth-gnome-keyring.c line 154
signed int gnome_keyring_set_request_timeout(signed int timeout);
// gnome_keyring_update_authinfo
// file auth-gnome-keyring.c line 182
static struct gnome_keyring_authinfo * gnome_keyring_update_authinfo(struct gnome_keyring_authinfo *info, const char *domain, const char *user, const char *password, signed int suitability);
// iconv
// file /usr/include/iconv.h line 42
extern unsigned long int iconv(void *, char ** restrict , unsigned long int *, char ** restrict , unsigned long int *);
// iconv_close
// file /usr/include/iconv.h line 51
extern signed int iconv_close(void *);
// iconv_open
// file /usr/include/iconv.h line 37
extern void * iconv_open(const char *, const char *);
// init_list
// file list.h line 92
static inline void init_list(struct __LIST *list);
// insert_to_list_before
// file list.h line 56
static inline void insert_to_list_before(struct __LIST *list, struct __LIST *elem, struct __LIST *new_elem);
// is_list_empty
// file list.h line 84
static inline signed int is_list_empty(struct __LIST *list);
// is_valid_list_elem
// file list.h line 88
static inline signed int is_valid_list_elem(struct __LIST *list, struct __LIST *elem);
// is_valid_list_elem_link1
// file list.h line 88
static inline signed int is_valid_list_elem_link1(struct __LIST *list_link1, struct __LIST *elem_link1);
// is_valid_list_elem_link2
// file list.h line 88
static inline signed int is_valid_list_elem_link2(struct __LIST *list_link2, struct __LIST *elem_link2);
// is_valid_list_elem_link3
// file list.h line 88
static inline signed int is_valid_list_elem_link3(struct __LIST *list_link3, struct __LIST *elem_link3);
// is_valid_list_elem_link4
// file list.h line 88
static inline signed int is_valid_list_elem_link4(struct __LIST *list_link4, struct __LIST *elem_link4);
// is_valid_list_elem_link5
// file list.h line 88
static inline signed int is_valid_list_elem_link5(struct __LIST *list_link5, struct __LIST *elem_link5);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// last_list_elem
// file list.h line 20
static inline struct __LIST * last_list_elem(struct __LIST *list);
// last_list_elem_link1
// file list.h line 20
static inline struct __LIST * last_list_elem_link1(struct __LIST *list_link1);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
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
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 61
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// msync
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 89
extern signed int msync(void *, unsigned long int, signed int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// neg_cache_check
// file neg_cache.c line 89
signed int neg_cache_check(const char *url);
// neg_cache_enable
// file neg_cache.c line 80
signed int neg_cache_enable(signed int status);
// neg_cache_find_by_name
// file neg_cache.c line 49
static struct neg_cache * neg_cache_find_by_name(const char *name, unsigned long int len);
// neg_cache_flush
// file neg_cache.c line 149
void neg_cache_flush(void);
// neg_cache_remove_outdate
// file neg_cache.c line 63
static inline void neg_cache_remove_outdate(void);
// neg_cache_remove_outdate_tv
// file neg_cache.c line 27
static void neg_cache_remove_outdate_tv(struct timeval *tv);
// neg_cache_set_timeout
// file neg_cache.c line 70
signed int neg_cache_set_timeout(signed int timeout);
// neg_cache_store
// file neg_cache.c line 112
signed int neg_cache_store(const char *url, signed int errno_value);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// print_help
// file main.c line 133
static void print_help(struct fuse_args *outargs);
// process_cleanup_from_zombies
// file process.c line 276
void process_cleanup_from_zombies(void);
// process_disable_new_smb_conn_starting
// file process.c line 63
void process_disable_new_smb_conn_starting(void);
// process_init
// file process.c line 38
signed int process_init(void);
// process_is_smb_conn_alive
// file process.c line 208
signed int process_is_smb_conn_alive(signed int fd);
// process_kill_all
// file process.c line 230
void process_kill_all(void);
// process_kill_by_smb_conn_fd
// file process.c line 249
void process_kill_by_smb_conn_fd(signed int fd);
// process_set_server_listen_timeout
// file process.c line 70
signed int process_set_server_listen_timeout(signed int timeout);
// process_set_server_local_charset
// file process.c line 97
signed int process_set_server_local_charset(const char *charset);
// process_set_server_samba_charset
// file process.c line 109
signed int process_set_server_samba_charset(const char *charset);
// process_set_server_smb_debug_level
// file process.c line 88
signed int process_set_server_smb_debug_level(signed int level);
// process_set_server_smb_timeout
// file process.c line 79
signed int process_set_server_smb_timeout(signed int timeout);
// process_start_new_smb_conn
// file process.c line 120
signed int process_start_new_smb_conn(char *shmem_ptr, unsigned long int shmem_size);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_10 *, struct anonymous_10 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reconfigure_add_cmd_opt
// file reconfigure.c line 186
static signed int reconfigure_add_cmd_opt(const char *option);
// reconfigure_analyse_cmdline_option
// file reconfigure.c line 369
signed int reconfigure_analyse_cmdline_option(const char *option, char *value);
// reconfigure_analyse_simple_option
// file reconfigure.c line 283
static signed int reconfigure_analyse_simple_option(const char *option, char *value, signed int flags);
// reconfigure_find_cmd_opt
// file reconfigure.c line 177
static signed int reconfigure_find_cmd_opt(const char *option);
// reconfigure_get_boolean
// file reconfigure.c line 158
static signed int reconfigure_get_boolean(char *value, signed int *result);
// reconfigure_get_number
// file reconfigure.c line 128
static signed int reconfigure_get_number(char *value, signed int *result);
// reconfigure_get_size
// file reconfigure.c line 143
static signed int reconfigure_get_size(char *value, unsigned long int *result);
// reconfigure_parse_auth_option
// file reconfigure.c line 426
static signed int reconfigure_parse_auth_option(char **value, signed int count);
// reconfigure_parse_group_option
// file reconfigure.c line 554
static signed int reconfigure_parse_group_option(char **value, signed int count);
// reconfigure_parse_host_option
// file reconfigure.c line 492
static signed int reconfigure_parse_host_option(char **value, signed int count);
// reconfigure_parse_link_option
// file reconfigure.c line 525
static signed int reconfigure_parse_link_option(char **value, signed int count);
// reconfigure_parse_stat_workaround_name_option
// file reconfigure.c line 463
static signed int reconfigure_parse_stat_workaround_name_option(char **value, signed int count);
// reconfigure_read_config
// file reconfigure.h line 13
signed int reconfigure_read_config(signed int flags);
// reconfigure_read_config_file
// file reconfigure.c line 560
static signed int reconfigure_read_config_file(const char *filename, signed int flags);
// reconfigure_set_boolean
// file reconfigure.c line 170
static signed int reconfigure_set_boolean(char *value, signed int (*func)(signed int));

//

// reconfigure_set_config_dir
// file reconfigure.c line 74
static void reconfigure_set_config_dir(const char *path);
// reconfigure_set_default_login_and_configdir
// file reconfigure.c line 95
void reconfigure_set_default_login_and_configdir(void);
// reconfigure_set_kb_size
// file reconfigure.c line 151
static signed int reconfigure_set_kb_size(char *value, signed int (*func)(unsigned long int));

//

// reconfigure_set_number
// file reconfigure.c line 136
static signed int reconfigure_set_number(char *value, signed int (*func)(signed int));

//

// reconfigure_split_line
// file reconfigure.c line 213
static signed int reconfigure_split_line(const char *line, char **arg, unsigned long int *arg_len, signed int arg_cnt);
// remove_from_list
// file list.h line 77
static inline void remove_from_list(struct __LIST *list, struct __LIST *elem);
// remove_from_list_link1
// file list.h line 77
static inline void remove_from_list_link1(struct __LIST *list_link1, struct __LIST *elem_link1);
// remove_from_list_link2
// file list.h line 77
static inline void remove_from_list_link2(struct __LIST *list_link2, struct __LIST *elem_link2);
// remove_from_list_link3
// file list.h line 77
static inline void remove_from_list_link3(struct __LIST *list_link3, struct __LIST *elem_link3);
// remove_from_list_link4
// file list.h line 77
static inline void remove_from_list_link4(struct __LIST *list_link4, struct __LIST *elem_link4);
// remove_from_list_link5
// file list.h line 77
static inline void remove_from_list_link5(struct __LIST *list_link5, struct __LIST *elem_link5);
// req_timeout_check
// file auth-gnome-keyring.c line 83
static signed int req_timeout_check(struct _GSource *source);
// req_timeout_dispatch
// file auth-gnome-keyring.c line 89
static signed int req_timeout_dispatch(struct _GSource *source, signed int (*callback)(void *), void *user_data);

//

// req_timeout_finalize
// file auth-gnome-keyring.c line 103
static void req_timeout_finalize(struct _GSource *source);
// req_timeout_prepare
// file auth-gnome-keyring.c line 59
static signed int req_timeout_prepare(struct _GSource *source, signed int *timeout);
// request_timeout_init
// file auth-gnome-keyring.c line 111
static void request_timeout_init(struct req_timeout *req, signed int timeout);
// samba_add_new_context
// file samba.c line 48
static struct samba_ctx * samba_add_new_context(const char *name, unsigned long int len);
// samba_allocate_ctxs
// file samba.c line 154
void samba_allocate_ctxs(void);
// samba_chmod
// file samba.c line 453
signed int samba_chmod(const char *url, unsigned int mode);
// samba_close
// file samba.c line 303
signed int samba_close(struct smb_conn_file *fd);
// samba_closedir
// file samba.c line 365
signed int samba_closedir(struct smb_conn_file *fd);
// samba_creat
// file samba.c line 241
struct smb_conn_file * samba_creat(const char *url, unsigned int mode);
// samba_destroy_unused_ctxs
// file samba.c line 164
void samba_destroy_unused_ctxs(void);
// samba_find_by_name
// file samba.c line 72
static struct samba_ctx * samba_find_by_name(const char *name, unsigned long int len);
// samba_find_oldest
// file samba.c line 87
static struct samba_ctx * samba_find_oldest(void);
// samba_fstat
// file samba.c line 435
signed int samba_fstat(struct smb_conn_file *fd, struct stat *st);
// samba_ftruncate
// file samba.c line 444
signed int samba_ftruncate(struct smb_conn_file *fd, signed long int size);
// samba_get_context_status_string
// file samba.c line 95
static const char * samba_get_context_status_string(void);
// samba_get_ctx
// file samba.c line 180
static struct samba_ctx * samba_get_ctx(const char *url);
// samba_getxattr
// file samba.c line 500
signed int samba_getxattr(const char *url, const char *name, void *value, unsigned long int size);
// samba_init
// file samba.c line 30
signed int samba_init(unsigned long int max_rw_block_size);
// samba_listxattr
// file samba.c line 517
signed int samba_listxattr(const char *url, char *list, unsigned long int size);
// samba_mkdir
// file samba.c line 390
signed int samba_mkdir(const char *url, unsigned int mode);
// samba_open
// file samba.c line 225
struct smb_conn_file * samba_open(const char *url, signed int flags, unsigned int mode);
// samba_opendir
// file samba.c line 349
struct smb_conn_file * samba_opendir(const char *url);
// samba_read
// file samba.c line 257
signed long int samba_read(struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize);
// samba_readdir
// file samba.c line 381
signed long int samba_readdir(struct smb_conn_file *fd, void *buf, unsigned long int bufsize);
// samba_release_ctx
// file samba.c line 210
static void samba_release_ctx(struct samba_ctx *ctx);
// samba_removexattr
// file samba.c line 532
signed int samba_removexattr(const char *url, const char *name);
// samba_rename
// file samba.c line 334
signed int samba_rename(const char *old_url, const char *new_url);
// samba_rmdir
// file samba.c line 405
signed int samba_rmdir(const char *url);
// samba_set_context_name
// file samba.c line 42
static void samba_set_context_name(struct samba_ctx *ctx, const char *name, unsigned long int len);
// samba_set_max_ctx_count
// file samba.c line 145
signed int samba_set_max_ctx_count(signed int count);
// samba_setxattr
// file samba.c line 483
signed int samba_setxattr(const char *url, const char *name, const void *value, unsigned long int size, signed int flags);
// samba_stat
// file samba.c line 420
signed int samba_stat(const char *url, struct stat *st);
// samba_touch_ctx
// file samba.c line 139
static void samba_touch_ctx(struct samba_ctx *ctx);
// samba_touch_ctx_without_lock
// file samba.c line 133
static inline void samba_touch_ctx_without_lock(struct samba_ctx *ctx);
// samba_try_to_remove_context
// file samba.c line 64
static signed int samba_try_to_remove_context(struct samba_ctx *ctx);
// samba_unlink
// file samba.c line 319
signed int samba_unlink(const char *url);
// samba_utimes
// file samba.c line 468
signed int samba_utimes(const char *url, struct timeval *tbuf);
// samba_write
// file samba.c line 280
signed long int samba_write(struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_6 *, struct anonymous_6 *, struct anonymous_6 *, struct timeval *);
// set_signal_reactions
// file main.c line 103
static void set_signal_reactions(void);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// sig_handler
// file main.c line 96
static void sig_handler(signed int signum);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_10 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_10 *);
// sigtimedwait
// file /usr/include/signal.h line 286
extern signed int sigtimedwait(const struct anonymous_10 *, struct anonymous_19 *, struct timespec *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// smb_conn_chmod
// file smb_conn.c line 1160
signed int smb_conn_chmod(struct smb_conn_ctx *ctx, const char *url, unsigned int mode);
// smb_conn_close
// file smb_conn.c line 784
signed int smb_conn_close(struct smb_conn_ctx *ctx, struct smb_conn_file *fd);
// smb_conn_closedir
// file smb_conn.c line 908
signed int smb_conn_closedir(struct smb_conn_ctx *ctx, struct smb_conn_file *fd);
// smb_conn_connection_close
// file smb_conn.c line 115
static void smb_conn_connection_close(struct smb_conn_ctx *ctx);
// smb_conn_creat
// file smb_conn.c line 652
struct smb_conn_file * smb_conn_creat(struct smb_conn_ctx *ctx, const char *url, unsigned int mode);
// smb_conn_ctx_destroy
// file smb_conn.c line 160
signed int smb_conn_ctx_destroy(struct smb_conn_ctx *ctx);
// smb_conn_ctx_init
// file smb_conn.c line 142
signed int smb_conn_ctx_init(struct smb_conn_ctx *ctx, unsigned long int shmem_size);
// smb_conn_fstat
// file smb_conn.c line 1087
signed int smb_conn_fstat(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, struct stat *st);
// smb_conn_ftruncate
// file smb_conn.c line 1124
signed int smb_conn_ftruncate(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int size);
// smb_conn_get_max_passwd_query_count
// file smb_conn.c line 100
static inline signed int smb_conn_get_max_passwd_query_count(void);
// smb_conn_get_max_retry_count
// file smb_conn.c line 89
static inline signed int smb_conn_get_max_retry_count(void);
// smb_conn_get_server_reply_timeout
// file smb_conn.c line 111
static inline signed int smb_conn_get_server_reply_timeout(void);
// smb_conn_getxattr
// file smb_conn.c line 1237
signed int smb_conn_getxattr(struct smb_conn_ctx *ctx, const char *url, const char *name, void *value, unsigned long int size);
// smb_conn_is_neg_cache_candidate
// file smb_conn.c line 45
static inline signed int smb_conn_is_neg_cache_candidate(enum smb_conn_cmd query_cmd, struct smb_conn_query_result *result);
// smb_conn_listxattr
// file smb_conn.c line 1278
signed int smb_conn_listxattr(struct smb_conn_ctx *ctx, const char *url, char *list, unsigned long int size);
// smb_conn_mkdir
// file smb_conn.c line 1021
signed int smb_conn_mkdir(struct smb_conn_ctx *ctx, const char *url, unsigned int mode);
// smb_conn_open
// file smb_conn.c line 605
struct smb_conn_file * smb_conn_open(struct smb_conn_ctx *ctx, const char *url, signed int flags, unsigned int mode);
// smb_conn_opendir
// file smb_conn.c line 863
struct smb_conn_file * smb_conn_opendir(struct smb_conn_ctx *ctx, const char *url);
// smb_conn_process_fd_query
// file smb_conn.c line 527
static signed int smb_conn_process_fd_query(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, struct smb_conn_file *file, void **query_fd_ptr, void *query, unsigned long int query_len, void *reply, unsigned long int reply_len);
// smb_conn_process_query
// file smb_conn.c line 475
static signed int smb_conn_process_query(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, void *reply, unsigned long int reply_len, ...);
// smb_conn_process_query_lowlevel
// file smb_conn.c line 453
static signed int smb_conn_process_query_lowlevel(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, struct smb_conn_query_result *result, void *reply, unsigned long int reply_len, ...);
// smb_conn_process_query_lowlevel_va
// file smb_conn.c line 290
static signed int smb_conn_process_query_lowlevel_va(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, struct smb_conn_query_result *result, void *reply, unsigned long int reply_len, __builtin_va_list ap);
// smb_conn_query_result_check
// file smb_conn.c line 73
static inline signed int smb_conn_query_result_check(enum smb_conn_cmd query_cmd, struct smb_conn_query_result *result);
// smb_conn_query_result_map
// file smb_conn.c line 67
static inline signed int smb_conn_query_result_map(struct smb_conn_query_result *result);
// smb_conn_read
// file smb_conn.c line 698
signed long int smb_conn_read(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize);
// smb_conn_readdir
// file smb_conn.c line 944
signed long int smb_conn_readdir(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, void *buf, unsigned long int bufsize);
// smb_conn_removexattr
// file smb_conn.c line 1318
signed int smb_conn_removexattr(struct smb_conn_ctx *ctx, const char *url, const char *name);
// smb_conn_rename
// file smb_conn.c line 841
signed int smb_conn_rename(struct smb_conn_ctx *ctx, const char *old_url, const char *new_url);
// smb_conn_rmdir
// file smb_conn.c line 1043
signed int smb_conn_rmdir(struct smb_conn_ctx *ctx, const char *url);
// smb_conn_send_password
// file smb_conn.c line 214
static signed int smb_conn_send_password(struct smb_conn_ctx *ctx, const char *server, const char *share);
// smb_conn_send_password_base
// file smb_conn.c line 177
static signed int smb_conn_send_password_base(struct smb_conn_ctx *ctx, const char *domain, const char *user, const char *password);
// smb_conn_set_max_passwd_query_count
// file smb_conn.c line 93
signed int smb_conn_set_max_passwd_query_count(signed int count);
// smb_conn_set_max_retry_count
// file smb_conn.c line 82
signed int smb_conn_set_max_retry_count(signed int count);
// smb_conn_set_server_reply_timeout
// file smb_conn.c line 104
signed int smb_conn_set_server_reply_timeout(signed int timeout);
// smb_conn_setxattr
// file smb_conn.c line 1204
signed int smb_conn_setxattr(struct smb_conn_ctx *ctx, const char *url, const char *name, const void *value, unsigned long int size, signed int flags);
// smb_conn_srv_auth_fn
// file smb_conn_srv.c line 76
static void smb_conn_srv_auth_fn(struct _SMBCCTX *ctx, const char *server, const char *share, char *wrkgrp, signed int wrkgrplen, char *user, signed int userlen, char *passwd, signed int passwdlen);
// smb_conn_srv_chmod
// file smb_conn_srv.c line 1267
void smb_conn_srv_chmod(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len);
// smb_conn_srv_close
// file smb_conn_srv.c line 642
void smb_conn_srv_close(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len);
// smb_conn_srv_closedir
// file smb_conn_srv.c line 1001
void smb_conn_srv_closedir(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len);
// smb_conn_srv_creat
// file smb_conn_srv.c line 489
void smb_conn_srv_creat(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len);
// smb_conn_srv_debug_print
// file smb_conn_srv.c line 42
void smb_conn_srv_debug_print(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd msg_type, signed int errno_value, signed int level, signed int no_fallback, const char *fmt, ...);
// smb_conn_srv_fstat
// file smb_conn_srv.c line 1190
void smb_conn_srv_fstat(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len);
// smb_conn_srv_ftruncate
// file smb_conn_srv.c line 1225
void smb_conn_srv_ftruncate(struct smb_conn_srv_ctx *ctx, struct smb_conn_ftruncate_query *query, unsigned long int query_len);
// smb_conn_srv_get_url_from_query
// file smb_conn_srv.h line 66
static inline const char * smb_conn_srv_get_url_from_query(const void *query, unsigned long int url_offs);
// smb_conn_srv_getxattr
// file smb_conn_srv.c line 1388
void smb_conn_srv_getxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_getxattr_query *query, unsigned long int query_len);
// smb_conn_srv_listen
// file smb_conn_srv.c line 225
void smb_conn_srv_listen(struct smb_conn_srv_ctx *ctx);
// smb_conn_srv_listxattr
// file smb_conn_srv.c line 1437
void smb_conn_srv_listxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_listxattr_query *query, unsigned long int query_len);
// smb_conn_srv_mkdir
// file smb_conn_srv.c line 1075
void smb_conn_srv_mkdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len);
// smb_conn_srv_open
// file smb_conn_srv.c line 430
void smb_conn_srv_open(struct smb_conn_srv_ctx *ctx, struct smb_conn_open_query *query, unsigned long int query_len);
// smb_conn_srv_opendir
// file smb_conn_srv.c line 953
void smb_conn_srv_opendir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len);
// smb_conn_srv_read
// file smb_conn_srv.c line 548
void smb_conn_srv_read(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len);
// smb_conn_srv_readdir
// file smb_conn_srv.c line 1023
void smb_conn_srv_readdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len);
// smb_conn_srv_removexattr
// file smb_conn_srv.c line 1478
void smb_conn_srv_removexattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_removexattr_query *query, unsigned long int query_len);
// smb_conn_srv_rename
// file smb_conn_srv.c line 754
void smb_conn_srv_rename(struct smb_conn_srv_ctx *ctx, struct smb_conn_rename_query *query, unsigned long int query_len);
// smb_conn_srv_rmdir
// file smb_conn_srv.c line 1114
void smb_conn_srv_rmdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len);
// smb_conn_srv_samba_init
// file smb_conn_srv.c line 204
static void smb_conn_srv_samba_init(struct smb_conn_srv_ctx *srv_ctx);
// smb_conn_srv_send_msg
// file smb_conn_srv.c line 396
signed int smb_conn_srv_send_msg(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd msg_type, signed int errno_value, signed int level, const char *msg);
// smb_conn_srv_send_reply
// file smb_conn_srv.c line 354
void smb_conn_srv_send_reply(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd reply_cmd, signed int errno_value, void *reply, unsigned long int reply_len);
// smb_conn_srv_setxattr
// file smb_conn_srv.c line 1339
void smb_conn_srv_setxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_setxattr_query *query, unsigned long int query_len);
// smb_conn_srv_stat
// file smb_conn_srv.c line 1154
void smb_conn_srv_stat(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len);
// smb_conn_srv_unlink
// file smb_conn_srv.c line 672
void smb_conn_srv_unlink(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len);
// smb_conn_srv_utimes
// file smb_conn_srv.c line 1305
void smb_conn_srv_utimes(struct smb_conn_srv_ctx *ctx, struct smb_conn_utimes_query *query, unsigned long int query_len);
// smb_conn_srv_write
// file smb_conn_srv.c line 594
void smb_conn_srv_write(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len);
// smb_conn_stat
// file smb_conn.c line 1064
signed int smb_conn_stat(struct smb_conn_ctx *ctx, const char *url, struct stat *st);
// smb_conn_unlink
// file smb_conn.c line 820
signed int smb_conn_unlink(struct smb_conn_ctx *ctx, const char *url);
// smb_conn_up_if_broken
// file smb_conn.c line 133
static signed int smb_conn_up_if_broken(struct smb_conn_ctx *ctx);
// smb_conn_utimes
// file smb_conn.c line 1182
signed int smb_conn_utimes(struct smb_conn_ctx *ctx, const char *url, struct timeval *tbuf);
// smb_conn_write
// file smb_conn.c line 741
signed long int smb_conn_write(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize);
// smbc_chmod
// file /usr/include/samba-4.0/libsmbclient.h line 1832
signed int smbc_chmod(const char *, unsigned int);
// smbc_close
// file /usr/include/samba-4.0/libsmbclient.h line 1416
signed int smbc_close(signed int);
// smbc_closedir
// file /usr/include/samba-4.0/libsmbclient.h line 1519
signed int smbc_closedir(signed int);
// smbc_creat
// file /usr/include/samba-4.0/libsmbclient.h line 1324
signed int smbc_creat(const char *, unsigned int);
// smbc_fstat
// file /usr/include/samba-4.0/libsmbclient.h line 1740
signed int smbc_fstat(signed int, struct stat *);
// smbc_ftruncate
// file /usr/include/samba-4.0/libsmbclient.h line 1809
signed int smbc_ftruncate(signed int, signed long int);
// smbc_getOptionUserData
// file /usr/include/samba-4.0/libsmbclient.h line 583
void * smbc_getOptionUserData(struct _SMBCCTX *);
// smbc_getxattr
// file /usr/include/samba-4.0/libsmbclient.h line 2252
signed int smbc_getxattr(const char *, const char *, const void *, unsigned long int);
// smbc_init_context
// file /usr/include/samba-4.0/libsmbclient.h line 1192
struct _SMBCCTX * smbc_init_context(struct _SMBCCTX *);
// smbc_listxattr
// file /usr/include/samba-4.0/libsmbclient.h line 2561
signed int smbc_listxattr(const char *, char *, unsigned long int);
// smbc_lseek
// file /usr/include/samba-4.0/libsmbclient.h line 1402
signed long int smbc_lseek(signed int, signed long int, signed int);
// smbc_mkdir
// file /usr/include/samba-4.0/libsmbclient.h line 1634
signed int smbc_mkdir(const char *, unsigned int);
// smbc_new_context
// file /usr/include/samba-4.0/libsmbclient.h line 1128
struct _SMBCCTX * smbc_new_context(void);
// smbc_open
// file /usr/include/samba-4.0/libsmbclient.h line 1290
signed int smbc_open(const char *, signed int, unsigned int);
// smbc_opendir
// file /usr/include/samba-4.0/libsmbclient.h line 1506
signed int smbc_opendir(const char *);
// smbc_read
// file /usr/include/samba-4.0/libsmbclient.h line 1348
signed long int smbc_read(signed int, void *, unsigned long int);
// smbc_readdir
// file /usr/include/samba-4.0/libsmbclient.h line 1563
struct smbc_dirent * smbc_readdir(unsigned int);
// smbc_removexattr
// file /usr/include/samba-4.0/libsmbclient.h line 2429
signed int smbc_removexattr(const char *, const char *);
// smbc_rename
// file /usr/include/samba-4.0/libsmbclient.h line 1483
signed int smbc_rename(const char *, const char *);
// smbc_rmdir
// file /usr/include/samba-4.0/libsmbclient.h line 1655
signed int smbc_rmdir(const char *);
// smbc_setDebug
// file /usr/include/samba-4.0/libsmbclient.h line 481
void smbc_setDebug(struct _SMBCCTX *, signed int);
// smbc_setFunctionAuthDataWithContext
// file /usr/include/samba-4.0/libsmbclient.h line 796
void smbc_setFunctionAuthDataWithContext(struct _SMBCCTX *, void (*)(struct _SMBCCTX *, const char *, const char *, char *, signed int, char *, signed int, char *, signed int));
// smbc_setOptionFallbackAfterKerberos
// file /usr/include/samba-4.0/libsmbclient.h line 752
void smbc_setOptionFallbackAfterKerberos(struct _SMBCCTX *, signed int);
// smbc_setOptionUseKerberos
// file /usr/include/samba-4.0/libsmbclient.h line 744
void smbc_setOptionUseKerberos(struct _SMBCCTX *, signed int);
// smbc_setOptionUserData
// file /usr/include/samba-4.0/libsmbclient.h line 587
void smbc_setOptionUserData(struct _SMBCCTX *, void *);
// smbc_setTimeout
// file /usr/include/samba-4.0/libsmbclient.h line 518
void smbc_setTimeout(struct _SMBCCTX *, signed int);
// smbc_set_context
// file /usr/include/samba-4.0/libsmbclient.h line 1236
struct _SMBCCTX * smbc_set_context(struct _SMBCCTX *);
// smbc_setxattr
// file /usr/include/samba-4.0/libsmbclient.h line 1972
signed int smbc_setxattr(const char *, const char *, const void *, unsigned long int, signed int);
// smbc_stat
// file /usr/include/samba-4.0/libsmbclient.h line 1718
signed int smbc_stat(const char *, struct stat *);
// smbc_unlink
// file /usr/include/samba-4.0/libsmbclient.h line 1440
signed int smbc_unlink(const char *);
// smbc_utimes
// file /usr/include/samba-4.0/libsmbclient.h line 1851
signed int smbc_utimes(const char *, struct timeval *);
// smbc_version
// file /usr/include/samba-4.0/libsmbclient.h line 2778
const char * smbc_version(void);
// smbc_write
// file /usr/include/samba-4.0/libsmbclient.h line 1371
signed long int smbc_write(signed int, const void *, unsigned long int);
// smbitem_aquire_item
// file smbitem.c line 69
static inline void smbitem_aquire_item(struct smbitem *item);
// smbitem_delete_item
// file smbitem.c line 65
static inline void smbitem_delete_item(struct smbitem *item);
// smbitem_delete_obsolete
// file smbitem.c line 523
void smbitem_delete_obsolete(signed long int threshold, enum smbitem_tree_t tree);
// smbitem_delete_obsolete_items
// file smbitem.c line 103
static void smbitem_delete_obsolete_items(struct smbitem *group, signed long int threshold);
// smbitem_done
// file smbitem.c line 204
void smbitem_done(void);
// smbitem_find_in_group
// file smbitem.c line 148
static inline signed int smbitem_find_in_group(struct smbitem *group, const char *name, signed int first);
// smbitem_find_in_group_wl
// file smbitem.c line 132
static signed int smbitem_find_in_group_wl(struct smbitem *group, const char *name, unsigned long int name_len, signed int first);
// smbitem_get_group
// file smbitem.c line 675
signed int smbitem_get_group(const char *host, char *buf, unsigned long int size);
// smbitem_get_path_end
// file smbitem.c line 535
static inline const char * smbitem_get_path_end(const char *path);
// smbitem_get_samba_groups
// file smbitem.c line 404
struct smbitem * smbitem_get_samba_groups(void);
// smbitem_getdir
// file smbitem.c line 431
struct smbitem * smbitem_getdir(const char *path);
// smbitem_init
// file smbitem.c line 188
signed int smbitem_init(void);
// smbitem_insert_to_group
// file smbitem.c line 160
static signed int smbitem_insert_to_group(struct smbitem *group, struct smbitem *item, signed int pos);
// smbitem_is_name_exist
// file smbitem.c line 610
signed int smbitem_is_name_exist(const char *name);
// smbitem_mkgroup
// file smbitem.c line 212
signed int smbitem_mkgroup(const char *path, enum smbitem_tree_t tree);
// smbitem_mkhost
// file smbitem.c line 256
signed int smbitem_mkhost(const char *path, const char *group, signed int is_hidden, enum smbitem_tree_t tree);
// smbitem_mklink
// file smbitem.c line 331
signed int smbitem_mklink(const char *path, const char *linkpath, enum smbitem_tree_t tree);
// smbitem_new_group
// file smbitem.c line 32
static struct smbitem * smbitem_new_group(const char *name);
// smbitem_new_host
// file smbitem.c line 16
static struct smbitem * smbitem_new_host(const char *name, signed int is_hidden);
// smbitem_new_link
// file smbitem.c line 47
static struct smbitem * smbitem_new_link(const char *name, const char *linkpath);
// smbitem_readlink
// file smbitem.c line 625
signed int smbitem_readlink(const char *path, char *buf, unsigned long int size);
// smbitem_release_dir
// file smbitem.c line 513
void smbitem_release_dir(struct smbitem *item);
// smbitem_release_item
// file smbitem.c line 73
static void smbitem_release_item(struct smbitem *item);
// smbitem_what_is
// file smbitem.c line 540
enum smbitem_path_t smbitem_what_is(const char *path);
// smbnetfs_opt_proc
// file main.c line 149
static signed int smbnetfs_opt_proc(void *data, const char *arg, signed int key, struct fuse_args *outargs);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socketpair
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 119
extern signed int socketpair(signed int, signed int, signed int, signed int *);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 216
extern signed int stat(const char *, struct stat *);
// stat_workaround_add_default_entries
// file stat_workaround.c line 181
void stat_workaround_add_default_entries(void);
// stat_workaround_add_exception
// file stat_workaround.c line 172
signed int stat_workaround_add_exception(const char *path);
// stat_workaround_add_exception_internal
// file stat_workaround.c line 141
static signed int stat_workaround_add_exception_internal(const char *path);
// stat_workaround_add_exception_internal_low
// file stat_workaround.c line 112
static signed int stat_workaround_add_exception_internal_low(const char *path, unsigned long int len, signed int depth);
// stat_workaround_add_name
// file stat_workaround.c line 100
signed int stat_workaround_add_name(const char *name, signed int case_sensitive, signed int depth);
// stat_workaround_add_name_internal
// file stat_workaround.c line 69
static signed int stat_workaround_add_name_internal(const char *name, signed int case_sensitive, signed int depth);
// stat_workaround_check_path
// file stat_workaround.c line 229
static signed int stat_workaround_check_path(const char *path, signed int min_depth);

//

// stat_workaround_delete_obsolete
// file stat_workaround.c line 193
void stat_workaround_delete_obsolete(signed long int threshold);
// stat_workaround_enable_default_entries
// file stat_workaround.c line 52
signed int stat_workaround_enable_default_entries(signed int new_status);
// stat_workaround_is_name_ignored
// file stat_workaround.c line 267
signed int stat_workaround_is_name_ignored(const char *path);
// stat_workaround_set_default_depth
// file stat_workaround.c line 60
signed int stat_workaround_set_default_depth(signed int depth);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
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
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
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
// strndup
// file /usr/include/string.h line 183
extern char * strndup(const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);

struct anonymous_9
{
  // keyring
  char *keyring;
  // item_id
  unsigned int item_id;
  // protocol
  char *protocol;
  // server
  char *server;
  // object
  char *object;
  // authtype
  char *authtype;
  // port
  unsigned int port;
  // user
  char *user;
  // domain
  char *domain;
  // password
  char *password;
};

struct anonymous_3
{
  // linkpath
  char *linkpath;
};

struct anonymous_17
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_15
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_6
{
  // fds_bits
  signed long int fds_bits[16l];
};

struct anonymous_10
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_7
{
  // child_cnt
  signed int child_cnt;
  // max_child_cnt
  signed int max_child_cnt;
  // childs
  struct authitem **childs;
};

struct anonymous_2
{
  // child_cnt
  signed int child_cnt;
  // max_child_cnt
  signed int max_child_cnt;
  // childs
  struct smbitem **childs;
};

struct anonymous_1
{
  // is_hidden
  signed int is_hidden;
  // parent_group
  struct smbitem *parent_group;
};

struct anonymous_11
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_14
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous_13
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_12
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_16
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_18
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_11 _kill;
  // _timer
  struct anonymous_12 _timer;
  // _rt
  struct anonymous_13 _rt;
  // _sigchld
  struct anonymous_14 _sigchld;
  // _sigfault
  struct anonymous_15 _sigfault;
  // _sigpoll
  struct anonymous_16 _sigpoll;
  // _sigsys
  struct anonymous_17 _sigsys;
};

struct anonymous_19
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_18 _sifields;
};

union anonymous_20
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_19 *, void *);
};

union anonymous_5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_4
{
  // _anon0
  struct anonymous_1 _anon0;
  // _anon1
  struct anonymous_2 _anon1;
  // _anon2
  struct anonymous_3 _anon2;
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _GList
{
  // data
  void *data;
  // next
  struct _GList *next;
  // prev
  struct _GList *prev;
};

struct _GSList
{
  // data
  void *data;
  // next
  struct _GSList *next;
};

struct _GSource
{
  // callback_data
  void *callback_data;
  // callback_funcs
  struct _GSourceCallbackFuncs *callback_funcs;
  // source_funcs
  const struct _GSourceFuncs *source_funcs;
  // ref_count
  unsigned int ref_count;
  // context
  struct _GMainContext *context;
  // priority
  signed int priority;
  // flags
  unsigned int flags;
  // source_id
  unsigned int source_id;
  // poll_fds
  struct _GSList *poll_fds;
  // prev
  struct _GSource *prev;
  // next
  struct _GSource *next;
  // name
  char *name;
  // priv
  struct _GSourcePrivate *priv;
};

struct _GSourceCallbackFuncs
{
  // ref
  void (*ref)(void *);
  // unref
  void (*unref)(void *);
  // get
  void (*get)(void *, struct _GSource *, signed int (**)(void *), void **);
};

struct _GSourceFuncs
{
  // prepare
  signed int (*prepare)(struct _GSource *, signed int *);
  // check
  signed int (*check)(struct _GSource *);
  // dispatch
  signed int (*dispatch)(struct _GSource *, signed int (*)(void *), void *);
  // finalize
  void (*finalize)(struct _GSource *);
  // closure_callback
  signed int (*closure_callback)(void *);
  // closure_marshal
  void (*closure_marshal)(void);
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

struct _smbc_callbacks
{
  // auth_fn
  void (*auth_fn)(const char *, const char *, char *, signed int, char *, signed int, char *, signed int);
  // check_server_fn
  signed int (*check_server_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // remove_unused_server_fn
  signed int (*remove_unused_server_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // add_cached_srv_fn
  signed int (*add_cached_srv_fn)(struct _SMBCCTX *, struct _SMBCSRV *, const char *, const char *, const char *, const char *);
  // get_cached_srv_fn
  struct _SMBCSRV * (*get_cached_srv_fn)(struct _SMBCCTX *, const char *, const char *, const char *, const char *);
  // remove_cached_srv_fn
  signed int (*remove_cached_srv_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // purge_cached_fn
  signed int (*purge_cached_fn)(struct _SMBCCTX *);
};

struct _smbc_options
{
  // browse_max_lmb_count
  signed int browse_max_lmb_count;
  // urlencode_readdir_entries
  signed int urlencode_readdir_entries;
  // one_share_per_server
  signed int one_share_per_server;
};

struct _SMBCCTX
{
  // debug
  signed int debug;
  // netbios_name
  char *netbios_name;
  // workgroup
  char *workgroup;
  // user
  char *user;
  // timeout
  signed int timeout;
  // open
  struct _SMBCFILE * (*open)(struct _SMBCCTX *, const char *, signed int, unsigned int);
  // creat
  struct _SMBCFILE * (*creat)(struct _SMBCCTX *, const char *, unsigned int);
  // read
  signed long int (*read)(struct _SMBCCTX *, struct _SMBCFILE *, void *, unsigned long int);
  // write
  signed long int (*write)(struct _SMBCCTX *, struct _SMBCFILE *, const void *, unsigned long int);
  // unlink
  signed int (*unlink)(struct _SMBCCTX *, const char *);
  // rename
  signed int (*rename)(struct _SMBCCTX *, const char *, struct _SMBCCTX *, const char *);
  // lseek
  signed long int (*lseek)(struct _SMBCCTX *, struct _SMBCFILE *, signed long int, signed int);
  // stat
  signed int (*stat)(struct _SMBCCTX *, const char *, struct stat *);
  // fstat
  signed int (*fstat)(struct _SMBCCTX *, struct _SMBCFILE *, struct stat *);
  // close_fn
  signed int (*close_fn)(struct _SMBCCTX *, struct _SMBCFILE *);
  // opendir
  struct _SMBCFILE * (*opendir)(struct _SMBCCTX *, const char *);
  // closedir
  signed int (*closedir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // readdir
  struct smbc_dirent * (*readdir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // getdents
  signed int (*getdents)(struct _SMBCCTX *, struct _SMBCFILE *, struct smbc_dirent *, signed int);
  // mkdir
  signed int (*mkdir)(struct _SMBCCTX *, const char *, unsigned int);
  // rmdir
  signed int (*rmdir)(struct _SMBCCTX *, const char *);
  // telldir
  signed long int (*telldir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // lseekdir
  signed int (*lseekdir)(struct _SMBCCTX *, struct _SMBCFILE *, signed long int);
  // fstatdir
  signed int (*fstatdir)(struct _SMBCCTX *, struct _SMBCFILE *, struct stat *);
  // chmod
  signed int (*chmod)(struct _SMBCCTX *, const char *, unsigned int);
  // utimes
  signed int (*utimes)(struct _SMBCCTX *, const char *, struct timeval *);
  // setxattr
  signed int (*setxattr)(struct _SMBCCTX *, const char *, const char *, const void *, unsigned long int, signed int);
  // getxattr
  signed int (*getxattr)(struct _SMBCCTX *, const char *, const char *, const void *, unsigned long int);
  // removexattr
  signed int (*removexattr)(struct _SMBCCTX *, const char *, const char *);
  // listxattr
  signed int (*listxattr)(struct _SMBCCTX *, const char *, char *, unsigned long int);
  // print_file
  signed int (*print_file)(struct _SMBCCTX *, const char *, struct _SMBCCTX *, const char *);
  // open_print_job
  struct _SMBCFILE * (*open_print_job)(struct _SMBCCTX *, const char *);
  // list_print_jobs
  signed int (*list_print_jobs)(struct _SMBCCTX *, const char *, void (*)(struct print_job_info *));
  // unlink_print_job
  signed int (*unlink_print_job)(struct _SMBCCTX *, const char *, signed int);
  // callbacks
  struct _smbc_callbacks callbacks;
  // reserved
  void *reserved;
  // flags
  signed int flags;
  // options
  struct _smbc_options options;
  // internal
  struct SMBC_internal_data *internal;
};

struct __LIST
{
  // next
  struct __LIST *next;
  // prev
  struct __LIST *prev;
};

struct authinfo
{
  // entries
  struct __LIST entries;
  // ref_count
  signed int ref_count;
  // domain
  char *domain;
  // user
  char *user;
  // password
  char *password;
};

struct authitem
{
  // name
  char *name;
  // touch_time
  signed long int touch_time;
  // info
  struct authinfo *info;
  // _anon0
  struct anonymous_7 _anon0;
};

struct flock
{
  // l_type
  signed short int l_type;
  // l_whence
  signed short int l_whence;
  // l_start
  signed long int l_start;
  // l_len
  signed long int l_len;
  // l_pid
  signed int l_pid;
};

struct fuse_args
{
  // argc
  signed int argc;
  // argv
  char **argv;
  // allocated
  signed int allocated;
};

struct fuse_buf
{
  // size
  unsigned long int size;
  // flags
  enum fuse_buf_flags flags;
  // mem
  void *mem;
  // fd
  signed int fd;
  // pos
  signed long int pos;
};

struct fuse_bufvec
{
  // count
  unsigned long int count;
  // idx
  unsigned long int idx;
  // off
  unsigned long int off;
  // buf
  struct fuse_buf buf[1l];
};

struct fuse_conn_info
{
  // proto_major
  unsigned int proto_major;
  // proto_minor
  unsigned int proto_minor;
  // async_read
  unsigned int async_read;
  // max_write
  unsigned int max_write;
  // max_readahead
  unsigned int max_readahead;
  // capable
  unsigned int capable;
  // want
  unsigned int want;
  // max_background
  unsigned int max_background;
  // congestion_threshold
  unsigned int congestion_threshold;
  // reserved
  unsigned int reserved[23l];
};

struct fuse_file_info
{
  // flags
  signed int flags;
  // fh_old
  unsigned long int fh_old;
  // writepage
  signed int writepage;
  // direct_io
  unsigned int direct_io : 1;
  // keep_cache
  unsigned int keep_cache : 1;
  // flush
  unsigned int flush : 1;
  // nonseekable
  unsigned int nonseekable : 1;
  // flock_release
  unsigned int flock_release : 1;
  // padding
  unsigned int padding : 27;
  // fh
  unsigned long int fh;
  // lock_owner
  unsigned long int lock_owner;
};

struct fuse_operations
{
  // getattr
  signed int (*getattr)(const char *, struct stat *);
  // readlink
  signed int (*readlink)(const char *, char *, unsigned long int);
  // getdir
  signed int (*getdir)(const char *, struct fuse_dirhandle *, signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int));
  // mknod
  signed int (*mknod)(const char *, unsigned int, unsigned long int);
  // mkdir
  signed int (*mkdir)(const char *, unsigned int);
  // unlink
  signed int (*unlink)(const char *);
  // rmdir
  signed int (*rmdir)(const char *);
  // symlink
  signed int (*symlink)(const char *, const char *);
  // rename
  signed int (*rename)(const char *, const char *);
  // link
  signed int (*link)(const char *, const char *);
  // chmod
  signed int (*chmod)(const char *, unsigned int);
  // chown
  signed int (*chown)(const char *, unsigned int, unsigned int);
  // truncate
  signed int (*truncate)(const char *, signed long int);
  // utime
  signed int (*utime)(const char *, struct utimbuf *);
  // open
  signed int (*open)(const char *, struct fuse_file_info *);
  // read
  signed int (*read)(const char *, char *, unsigned long int, signed long int, struct fuse_file_info *);
  // write
  signed int (*write)(const char *, const char *, unsigned long int, signed long int, struct fuse_file_info *);
  // statfs
  signed int (*statfs)(const char *, struct statvfs *);
  // flush
  signed int (*flush)(const char *, struct fuse_file_info *);
  // release
  signed int (*release)(const char *, struct fuse_file_info *);
  // fsync
  signed int (*fsync)(const char *, signed int, struct fuse_file_info *);
  // setxattr
  signed int (*setxattr)(const char *, const char *, const char *, unsigned long int, signed int);
  // getxattr
  signed int (*getxattr)(const char *, const char *, char *, unsigned long int);
  // listxattr
  signed int (*listxattr)(const char *, char *, unsigned long int);
  // removexattr
  signed int (*removexattr)(const char *, const char *);
  // opendir
  signed int (*opendir)(const char *, struct fuse_file_info *);
  // readdir
  signed int (*readdir)(const char *, void *, signed int (*)(void *, const char *, struct stat *, signed long int), signed long int, struct fuse_file_info *);
  // releasedir
  signed int (*releasedir)(const char *, struct fuse_file_info *);
  // fsyncdir
  signed int (*fsyncdir)(const char *, signed int, struct fuse_file_info *);
  // init
  void * (*init)(struct fuse_conn_info *);
  // destroy
  void (*destroy)(void *);
  // access
  signed int (*access)(const char *, signed int);
  // create
  signed int (*create)(const char *, unsigned int, struct fuse_file_info *);
  // ftruncate
  signed int (*ftruncate)(const char *, signed long int, struct fuse_file_info *);
  // fgetattr
  signed int (*fgetattr)(const char *, struct stat *, struct fuse_file_info *);
  // lock
  signed int (*lock)(const char *, struct fuse_file_info *, signed int, struct flock *);
  // utimens
  signed int (*utimens)(const char *, struct timespec *);
  // bmap
  signed int (*bmap)(const char *, unsigned long int, unsigned long int *);
  // flag_nullpath_ok
  unsigned int flag_nullpath_ok : 1;
  // flag_nopath
  unsigned int flag_nopath : 1;
  // flag_utime_omit_ok
  unsigned int flag_utime_omit_ok : 1;
  // flag_reserved
  unsigned int flag_reserved : 29;
  // ioctl
  signed int (*ioctl)(const char *, signed int, void *, struct fuse_file_info *, unsigned int, void *);
  // poll
  signed int (*poll)(const char *, struct fuse_file_info *, struct fuse_pollhandle *, unsigned int *);
  // write_buf
  signed int (*write_buf)(const char *, struct fuse_bufvec *, signed long int, struct fuse_file_info *);
  // read_buf
  signed int (*read_buf)(const char *, struct fuse_bufvec **, unsigned long int, signed long int, struct fuse_file_info *);
  // flock
  signed int (*flock)(const char *, struct fuse_file_info *, signed int);
  // fallocate
  signed int (*fallocate)(const char *, signed int, signed long int, signed long int, struct fuse_file_info *);
};

struct fuse_opt
{
  // templ
  const char *templ;
  // offset
  unsigned long int offset;
  // value
  signed int value;
};

struct gnome_keyring_authinfo
{
  // domain
  char *domain;
  // user
  char *user;
  // password
  char *password;
  // suitability
  signed int suitability;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct neg_cache
{
  // usage_entries
  struct __LIST usage_entries;
  // time_entries
  struct __LIST time_entries;
  // tv
  struct timeval tv;
  // errno_value
  signed int errno_value;
  // hostname
  char hostname[1l];
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

struct print_job_info
{
  // id
  unsigned short int id;
  // priority
  unsigned short int priority;
  // size
  unsigned long int size;
  // user
  char user[128l];
  // name
  char name[128l];
  // t
  signed long int t;
};

struct process_rec
{
  // entries
  struct __LIST entries;
  // child_fd
  signed int child_fd;
  // child_pid
  signed int child_pid;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct req_data
{
  // domain
  const char *domain;
  // server
  const char *server;
  // share
  const char *share;
  // info
  struct gnome_keyring_authinfo *info;
};

struct req_timeout
{
  // start_time
  struct timeval start_time;
  // timeout_len
  signed int timeout_len;
  // expired
  signed int expired;
};

struct smb_conn_ctx
{
  // smb_conn_file_list
  struct __LIST smb_conn_file_list;
  // access_time
  signed long int access_time;
  // mutex
  union anonymous mutex;
  // shmem_ptr
  char *shmem_ptr;
  // shmem_size
  unsigned long int shmem_size;
  // conn_fd
  signed int conn_fd;
};

struct samba_ctx
{
  // entries
  struct __LIST entries;
  // ref_count
  signed int ref_count;
  // smb_ctx
  struct smb_conn_ctx smb_ctx;
  // name
  char name[128l];
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_20 __sigaction_handler;
  // sa_mask
  struct anonymous_10 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct smb_conn_buf_reply
{
  // bufsize
  signed long int bufsize;
};

struct smb_conn_dirent_rec
{
  // smbc_type
  unsigned int smbc_type;
  // d_name
  char d_name[256l];
};

struct smb_conn_fd_query
{
  // srv_fd
  void *srv_fd;
};

struct smb_conn_fd_reply
{
  // srv_fd
  void *srv_fd;
};

struct smb_conn_file
{
  // entries
  struct __LIST entries;
  // access_time
  signed long int access_time;
  // srv_fd
  void *srv_fd;
  // ctx
  struct smb_conn_ctx *ctx;
  // url
  char *url;
  // reopen_cmd
  enum smb_conn_cmd reopen_cmd;
  // reopen_flags
  signed int reopen_flags;
};

struct smb_conn_ftruncate_query
{
  // srv_fd
  void *srv_fd;
  // offset
  signed long int offset;
};

struct smb_conn_getxattr_query
{
  // url_offs
  unsigned long int url_offs;
  // name_offs
  unsigned long int name_offs;
  // bufsize
  unsigned long int bufsize;
};

struct smb_conn_listxattr_query
{
  // url_offs
  unsigned long int url_offs;
  // bufsize
  unsigned long int bufsize;
};

struct smb_conn_message_req
{
  // pid
  signed int pid;
  // debug_level
  signed int debug_level;
  // msg_offs
  unsigned long int msg_offs;
};

struct smb_conn_open_query
{
  // url_offs
  unsigned long int url_offs;
  // mode
  unsigned int mode;
  // flags
  signed int flags;
};

struct smb_conn_passwd
{
  // domain_offs
  unsigned long int domain_offs;
  // username_offs
  unsigned long int username_offs;
  // password_offs
  unsigned long int password_offs;
};

struct smb_conn_passwd_req
{
  // server_offs
  unsigned long int server_offs;
  // share_offs
  unsigned long int share_offs;
};

struct smb_conn_query_hdr
{
  // query_len
  unsigned long int query_len;
  // query_cmd
  enum smb_conn_cmd query_cmd;
  // debug_level
  signed int debug_level;
};

struct smb_conn_query_result
{
  // errno_value
  signed int errno_value;
  // process_state
  signed int process_state;
};

struct smb_conn_removexattr_query
{
  // url_offs
  unsigned long int url_offs;
  // name_offs
  unsigned long int name_offs;
};

struct smb_conn_rename_query
{
  // old_url_offs
  unsigned long int old_url_offs;
  // new_url_offs
  unsigned long int new_url_offs;
};

struct smb_conn_reply_hdr
{
  // reply_len
  unsigned long int reply_len;
  // reply_cmd
  enum smb_conn_cmd reply_cmd;
  // errno_value
  signed int errno_value;
};

struct smb_conn_rw_query
{
  // srv_fd
  void *srv_fd;
  // offset
  signed long int offset;
  // bufsize
  unsigned long int bufsize;
};

struct smb_conn_setxattr_query
{
  // url_offs
  unsigned long int url_offs;
  // name_offs
  unsigned long int name_offs;
  // bufsize
  unsigned long int bufsize;
  // flags
  signed int flags;
};

struct smb_conn_srv_ctx
{
  // conn_fd
  signed int conn_fd;
  // shmem_ptr
  char *shmem_ptr;
  // shmem_size
  unsigned long int shmem_size;
  // timeout
  signed int timeout;
  // smb_timeout
  signed int smb_timeout;
  // debug_level
  signed int debug_level;
  // smb_debug_level
  signed int smb_debug_level;
  // local_charset
  const char *local_charset;
  // samba_charset
  const char *samba_charset;
};

struct smb_conn_srv_fd
{
  // type
  enum smb_conn_srv_fd_type type;
  // fd
  signed int fd;
  // offset
  signed long int offset;
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

struct smb_conn_stat_reply
{
  // stat
  struct stat stat;
};

struct smb_conn_url_mode_query
{
  // url_offs
  unsigned long int url_offs;
  // mode
  unsigned int mode;
};

struct smb_conn_url_query
{
  // url_offs
  unsigned long int url_offs;
};

struct smb_conn_utimes_query
{
  // url_offs
  unsigned long int url_offs;
  // tbuf
  struct timeval tbuf[2l];
};

struct smbc_dirent
{
  // smbc_type
  unsigned int smbc_type;
  // dirlen
  unsigned int dirlen;
  // commentlen
  unsigned int commentlen;
  // comment
  char *comment;
  // namelen
  unsigned int namelen;
  // name
  char name[1l];
};

struct smbitem
{
  // name
  char *name;
  // type
  enum smbitem_t type;
  // touch_time
  signed long int touch_time;
  // ref_count
  signed int ref_count;
  // _anon0
  union anonymous_4 _anon0;
};

struct stat_workaround
{
  // entries
  struct __LIST entries;
  // touch_time
  signed long int touch_time;
  // case_sensitive
  signed int case_sensitive;
  // depth
  signed int depth;
  // len
  signed int len;
  // name
  char name[1l];
};

struct stat_workaround_exception
{
  // entries
  struct __LIST entries;
  // touch_time
  signed long int touch_time;
  // depth
  signed int depth;
  // len
  signed int len;
  // path
  char path[1l];
};

struct stat_workaround_predefined
{
  // case_sensitive
  signed int case_sensitive;
  // depth
  signed int depth;
  // name
  char *name;
};

struct statvfs
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

struct trees
{
  // samba
  struct smbitem *samba;
  // user
  struct smbitem *user;
};

struct utimbuf
{
  // actime
  signed long int actime;
  // modtime
  signed long int modtime;
};


// auth_fake_password
// file auth.c line 24
static char *auth_fake_password = "********";
// auth_login
// file auth.c line 23
static char auth_login[64l] = { 'g', 'u', 'e', 's', 't', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// authinfo_default
// file auth.c line 25
static struct authinfo authinfo_default;
// authinfo_default
// file auth.c line 25
static struct authinfo authinfo_default = { .entries={ .next=(struct __LIST *)(void *)0, .prev=(struct __LIST *)(void *)0 }, .ref_count=1,
    .domain="", .user=auth_login, .password="" };
// authinfo_list
// file auth.c line 26
static struct __LIST authinfo_list;
// authinfo_list
// file auth.c line 26
static struct __LIST authinfo_list = { .next=&authinfo_list, .prev=&authinfo_list };
// authroot
// file auth.c line 27
static struct authitem authroot = { .name=(char *)(void *)0, .touch_time=(signed long int)0, .info=(struct authinfo *)(void *)0,
    ._anon0={ .child_cnt=0, .max_child_cnt=0, .childs=(struct authitem **)(void *)0 } };
// charset_buf
// file charset.c line 7
static char charset_buf[2048l];
// charset_hex_digit
// file charset.c line 9
static char charset_hex_digit[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };
// charset_local2samba
// file charset.c line 10
static void *charset_local2samba = (void *)-1;
// charset_samba2local
// file charset.c line 11
static void *charset_samba2local = (void *)-1;
// common_debug_level
// file common.c line 13
signed int common_debug_level = 0;
// common_logfile
// file common.c line 15
static char common_logfile[256l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// common_stdlog
// file common.c line 14
static struct _IO_FILE *common_stdlog = (struct _IO_FILE *)(void *)0;
// config_cmd_opts
// file reconfigure.c line 40
static char **config_cmd_opts = (char **)(void *)0;
// config_cmd_opts_cnt
// file reconfigure.c line 38
static signed int config_cmd_opts_cnt = 0;
// config_cmd_opts_max_cnt
// file reconfigure.c line 39
static signed int config_cmd_opts_max_cnt = 32;
// config_dir
// file reconfigure.c line 37
static char config_dir[2048l] = { '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// config_dir_postfix
// file reconfigure.c line 35
static const char *config_dir_postfix = "/.smb";
// config_file
// file reconfigure.c line 36
static char config_file[256l] = { 's', 'm', 'b', 'n', 'e', 't', 'f', 's', '.', 'c', 'o', 'n', 'f', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// event_config_update_period
// file event.c line 22
static signed int event_config_update_period = 300;
// event_ev_thread_id
// file event.c line 29
static unsigned long int event_ev_thread_id;
// event_last_config_update
// file event.c line 25
static signed long int event_last_config_update = (signed long int)0;
// event_last_smb_tree_scan
// file event.c line 24
static signed long int event_last_smb_tree_scan = (signed long int)0;
// event_query_browser_flag
// file event.c line 18
static signed int event_query_browser_flag = 1;
// event_smb_thread_id
// file event.c line 30
static unsigned long int event_smb_thread_id;
// event_smb_tree_elements_ttl
// file event.c line 21
static signed int event_smb_tree_elements_ttl = 900;
// event_smb_tree_scan_period
// file event.c line 20
static signed int event_smb_tree_scan_period = 300;
// event_time_step
// file event.c line 19
static signed int event_time_step = 10;
// function_free_space_size
// file function.c line 24
static signed int function_free_space_size = 0;
// function_quiet_flag
// file function.c line 25
static signed int function_quiet_flag = 1;
// function_show_dollar_shares
// file function.c line 26
static signed int function_show_dollar_shares = 0;
// function_show_hidden_hosts
// file function.c line 27
static signed int function_show_hidden_hosts = 0;
// gnome_keyring
// file auth-gnome-keyring.c line 47
static enum gnome_keyring_status gnome_keyring = (enum gnome_keyring_status)-1;
// loop
// file auth-gnome-keyring.c line 49
static struct _GMainLoop *loop = (struct _GMainLoop *)(void *)0;
// m_auth
// file auth.c line 28
static union anonymous m_auth = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_auth_gnome
// file auth-gnome-keyring.c line 48
static union anonymous m_auth_gnome = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_common
// file common.c line 16
static union anonymous m_common = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_evthread
// file event.c line 27
static union anonymous m_evthread = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_neg_cache
// file neg_cache.c line 24
static union anonymous m_neg_cache = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_process
// file process.c line 35
static union anonymous m_process = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_samba
// file samba.c line 27
static union anonymous m_samba = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_smbitem
// file smbitem.c line 14
static union anonymous m_smbitem = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// m_stat_workaround
// file stat_workaround.c line 49
static union anonymous m_stat_workaround = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// max_req_timeout
// file auth-gnome-keyring.c line 46
static signed int max_req_timeout = 500;
// neg_cache_enabled
// file neg_cache.c line 20
static signed int neg_cache_enabled = 1;
// neg_cache_time_list
// file neg_cache.c line 23
static struct __LIST neg_cache_time_list;
// neg_cache_time_list
// file neg_cache.c line 23
static struct __LIST neg_cache_time_list = { .next=&neg_cache_time_list, .prev=&neg_cache_time_list };
// neg_cache_timeout
// file neg_cache.c line 19
static signed int neg_cache_timeout = 3000;
// neg_cache_usage_list
// file neg_cache.c line 22
static struct __LIST neg_cache_usage_list;
// neg_cache_usage_list
// file neg_cache.c line 22
static struct __LIST neg_cache_usage_list = { .next=&neg_cache_usage_list, .prev=&neg_cache_usage_list };
// process_list
// file process.c line 34
static struct __LIST process_list;
// process_list
// file process.c line 34
static struct __LIST process_list = { .next=&process_list, .prev=&process_list };
// process_server_listen_timeout
// file process.c line 29
static signed int process_server_listen_timeout = 300;
// process_server_local_charset
// file process.c line 27
static char process_server_local_charset[64l] = { 'U', 'T', 'F', '-', '8', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// process_server_samba_charset
// file process.c line 28
static char process_server_samba_charset[64l] = { 'U', 'T', 'F', '-', '8', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// process_server_smb_debug_level
// file process.c line 31
static signed int process_server_smb_debug_level = 0;
// process_server_smb_timeout
// file process.c line 30
static signed int process_server_smb_timeout = 20000;
// process_start_enabled
// file process.c line 32
static signed int process_start_enabled = 1;
// process_system_charset
// file process.c line 26
static char process_system_charset[64l] = { 'U', 'T', 'F', '-', '8', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// req_timeout
// file auth-gnome-keyring.c line 50
static struct req_timeout *req_timeout = (struct req_timeout *)(void *)0;
// req_timeout_func
// file auth-gnome-keyring.c line 51
static struct _GSourceFuncs req_timeout_func;
// req_timeout_func
// file auth-gnome-keyring.c line 51
static struct _GSourceFuncs req_timeout_func = { .prepare=req_timeout_prepare, .check=req_timeout_check, .dispatch=req_timeout_dispatch,
    .finalize=req_timeout_finalize, .closure_callback=((signed int (*)(void *))NULL),
    .closure_marshal=((void (*)(void))NULL) };
// samba_ctx_count
// file samba.c line 24
static signed int samba_ctx_count = 0;
// samba_ctx_list
// file samba.c line 26
static struct __LIST samba_ctx_list;
// samba_ctx_list
// file samba.c line 26
static struct __LIST samba_ctx_list = { .next=&samba_ctx_list, .prev=&samba_ctx_list };
// samba_ctx_max_count
// file samba.c line 25
static signed int samba_ctx_max_count = 15;
// samba_max_rw_block_size
// file samba.c line 23
static unsigned long int samba_max_rw_block_size = (unsigned long int)(48 * 1024);
// smb_conn_max_passwd_query_count
// file smb_conn.c line 42
static signed int smb_conn_max_passwd_query_count = 10;
// smb_conn_max_retry_count
// file smb_conn.c line 41
static signed int smb_conn_max_retry_count = 2;
// smb_conn_server_reply_timeout
// file smb_conn.c line 43
static signed int smb_conn_server_reply_timeout = 60;
// smb_oper
// file function.c line 591
struct fuse_operations smb_oper;
// smb_oper
// file function.c line 591
struct fuse_operations smb_oper = { .getattr=function_stat, .readlink=function_readlink, .getdir=((signed int (*)(const char *, struct fuse_dirhandle *, signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int)))NULL),
    .mknod=function_mknod,
    .mkdir=function_mkdir, .unlink=function_unlink,
    .rmdir=function_rmdir, .symlink=((signed int (*)(const char *, const char *))NULL),
    .rename=function_rename,
    .link=((signed int (*)(const char *, const char *))NULL), .chmod=function_chmod,
    .chown=function_chown, .truncate=function_truncate,
    .utime=function_utimes, .open=function_open,
    .read=function_read, .write=function_write,
    .statfs=function_statfs, .flush=((signed int (*)(const char *, struct fuse_file_info *))NULL),
    .release=function_close,
    .fsync=((signed int (*)(const char *, signed int, struct fuse_file_info *))NULL), .setxattr=function_setxattr,
    .getxattr=function_getxattr, .listxattr=function_listxattr,
    .removexattr=function_removexattr, .opendir=function_opendir,
    .readdir=function_readdir, .releasedir=function_closedir,
    .fsyncdir=((signed int (*)(const char *, signed int, struct fuse_file_info *))NULL), .init=((void * (*)(struct fuse_conn_info *))NULL),
    .destroy=((void (*)(void *))NULL),
    .access=((signed int (*)(const char *, signed int))NULL), .create=function_creat,
    .ftruncate=function_ftruncate, .fgetattr=function_fstat,
    .lock=((signed int (*)(const char *, struct fuse_file_info *, signed int, struct flock *))NULL), .utimens=((signed int (*)(const char *, struct timespec *))NULL),
    .bmap=((signed int (*)(const char *, unsigned long int, unsigned long int *))NULL),
    .flag_nullpath_ok=0u,
    .flag_nopath=0u, .flag_utime_omit_ok=0u,
    .flag_reserved=0u, .ioctl=((signed int (*)(const char *, signed int, void *, struct fuse_file_info *, unsigned int, void *))NULL),
    .poll=((signed int (*)(const char *, struct fuse_file_info *, struct fuse_pollhandle *, unsigned int *))NULL),
    .write_buf=((signed int (*)(const char *, struct fuse_bufvec *, signed long int, struct fuse_file_info *))NULL),
    .read_buf=((signed int (*)(const char *, struct fuse_bufvec **, unsigned long int, signed long int, struct fuse_file_info *))NULL),
    .flock=((signed int (*)(const char *, struct fuse_file_info *, signed int))NULL),
    .fallocate=((signed int (*)(const char *, signed int, signed long int, signed long int, struct fuse_file_info *))NULL) };
// smbnetfs_option_list
// file reconfigure.c line 42
const char *smbnetfs_option_list = "    -o config=PATH               path to config (~/.smb/smbnetfs.conf)\n    -o smbnetfs_debug=N          SMBNetFS debug level (N<=10)\n    -o smb_debug_level=N         Samba debug level (N<=10)\n    -o log_file=PATH             File to store SMBNetFS debug messages\n    -o local_charset=CHARSET     Local charset (autodetected)\n    -o samba_charset=CHARSET     Charset used by samba (utf-8)\n    -o use_gnome_keyring=BOOL    Enable/disable usage of gnome-keyring\n    -o gnome_keyring_timeout=T   auth retrieving timeout for gnome_keyring (500ms)\n    -o max_rw_block_size=N       Maximum size of r/w block in Kb (autodetected)\n    -o smb_tree_scan_period=T    Period of scanning samba network tree (300s)\n    -o smb_tree_elements_ttl=T   TTL of scanned elements in samba tree (900s)\n    -o smb_query_browsers=BOOL   Enable/disable scanning of samba tree (on)\n    -o smb_timeout=T               Samba reply timeout (20000ms)\n    -o show___shares=BOOL        Enable/disable showing of hidden shares (off)\n    -o show_hidden_hosts=BOOL    See in documentation (off)\n    -o free_space_size=N         Free space size in pages (0)\n    -o quiet_flag=BOOL           Do not fail on chown/chgroup (on)\n    -o neg_cache=BOOL            Enable/disable negative cache (on)\n    -o neg_cache_timeout=T       Negative cache records expiration time (3000ms)\n    -o stat_workaround_depth=N   konquerror and gnome terminal hack (3)\n    -o time_step=T               Scheduler sleep interval (10s)\n    -o config_update_period=T    Configuration update interval (300s)\n    -o max_ctx_count=N           Maximum number of childs (15)\n    -o max_retry_count=N         Number of retries before fail (2)\n    -o listen_timeout=T          Child process inactivity timeout (300s)\n    -o reply_timeout=T           Child process reply timeout (30s)\n    -o max_passwd_query_count=N  See in documentation (10)\n";
// stat_workaround_default_depth
// file stat_workaround.c line 46
static signed int stat_workaround_default_depth = 3;
// stat_workaround_default_entries
// file stat_workaround.c line 45
static signed int stat_workaround_default_entries = 1;
// stat_workaround_exception_list
// file stat_workaround.c line 48
static struct __LIST stat_workaround_exception_list;
// stat_workaround_exception_list
// file stat_workaround.c line 48
static struct __LIST stat_workaround_exception_list = { .next=&stat_workaround_exception_list, .prev=&stat_workaround_exception_list };
// stat_workaround_list
// file stat_workaround.c line 47
static struct __LIST stat_workaround_list;
// stat_workaround_list
// file stat_workaround.c line 47
static struct __LIST stat_workaround_list = { .next=&stat_workaround_list, .prev=&stat_workaround_list };
// stat_workaround_predefined_list
// file stat_workaround.c line 35
static struct stat_workaround_predefined stat_workaround_predefined_list[7l] = { { .case_sensitive=1, .depth=3, .name=".directory" },
    { .case_sensitive=1, .depth=3, .name=".git" },
    { .case_sensitive=1, .depth=3, .name="HEAD" },
    { .case_sensitive=0, .depth=3, .name="desktop.ini" },
    { .case_sensitive=1, .depth=1, .name="autorun.inf" },
    { .case_sensitive=1, .depth=1, .name=".xdg-volume-info" },
    { .case_sensitive=0, .depth=0, .name=(char *)(void *)0 } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// trees
// file smbitem.c line 13
static struct trees trees = { .samba=(struct smbitem *)(void *)0, .user=(struct smbitem *)(void *)0 };

// add_to_list
// file list.h line 24
static inline void add_to_list(struct __LIST *list, struct __LIST *elem)
{
  _Bool tmp_if_expr_1;
  if(!(elem->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = elem->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    *((char *)(void *)0) = (char)0;

  elem->next = list->next;
  elem->prev = list;
  list->next->prev = elem;
  list->next = elem;
}

// add_to_list_link1
// file list.h line 24
static inline void add_to_list_link1(struct __LIST *list_link1, struct __LIST *elem_link1)
{
  _Bool tmp_if_expr_1_link1;
  if(!(elem_link1->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1_link1 = (_Bool)1;

  else
    tmp_if_expr_1_link1 = elem_link1->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1_link1)
    *((char *)(void *)0) = (char)0;

  elem_link1->next = list_link1->next;
  elem_link1->prev = list_link1;
  list_link1->next->prev = elem_link1;
  list_link1->next = elem_link1;
}

// add_to_list_link2
// file list.h line 24
static inline void add_to_list_link2(struct __LIST *list_link2, struct __LIST *elem_link2)
{
  _Bool tmp_if_expr_1_link2;
  if(!(elem_link2->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1_link2 = (_Bool)1;

  else
    tmp_if_expr_1_link2 = elem_link2->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1_link2)
    *((char *)(void *)0) = (char)0;

  elem_link2->next = list_link2->next;
  elem_link2->prev = list_link2;
  list_link2->next->prev = elem_link2;
  list_link2->next = elem_link2;
}

// add_to_list_link3
// file list.h line 24
static inline void add_to_list_link3(struct __LIST *list_link3, struct __LIST *elem_link3)
{
  _Bool tmp_if_expr_1_link3;
  if(!(elem_link3->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1_link3 = (_Bool)1;

  else
    tmp_if_expr_1_link3 = elem_link3->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1_link3)
    *((char *)(void *)0) = (char)0;

  elem_link3->next = list_link3->next;
  elem_link3->prev = list_link3;
  list_link3->next->prev = elem_link3;
  list_link3->next = elem_link3;
}

// add_to_list_back
// file list.h line 34
static inline void add_to_list_back(struct __LIST *list, struct __LIST *elem)
{
  _Bool tmp_if_expr_1;
  if(!(elem->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = elem->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    *((char *)(void *)0) = (char)0;

  elem->next = list;
  elem->prev = list->prev;
  list->prev->next = elem;
  list->prev = elem;
}

// add_to_list_back_link1
// file list.h line 34
static inline void add_to_list_back_link1(struct __LIST *list_link1, struct __LIST *elem_link1)
{
  _Bool tmp_if_expr_1_link1;
  if(!(elem_link1->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1_link1 = (_Bool)1;

  else
    tmp_if_expr_1_link1 = elem_link1->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1_link1)
    *((char *)(void *)0) = (char)0;

  elem_link1->next = list_link1;
  elem_link1->prev = list_link1->prev;
  list_link1->prev->next = elem_link1;
  list_link1->prev = elem_link1;
}

// add_to_list_back_link2
// file list.h line 34
static inline void add_to_list_back_link2(struct __LIST *list_link2, struct __LIST *elem_link2)
{
  _Bool tmp_if_expr_1_link2;
  if(!(elem_link2->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1_link2 = (_Bool)1;

  else
    tmp_if_expr_1_link2 = elem_link2->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1_link2)
    *((char *)(void *)0) = (char)0;

  elem_link2->next = list_link2;
  elem_link2->prev = list_link2->prev;
  list_link2->prev->next = elem_link2;
  list_link2->prev = elem_link2;
}

// auth_delete_obsolete
// file auth.c line 355
void auth_delete_obsolete(signed long int threshold)
{
  pthread_mutex_lock(&m_auth);
  authitem_delete_obsolete_items(&authroot, threshold);
  pthread_mutex_unlock(&m_auth);
}

// auth_get_authinfo
// file auth.c line 248
struct authinfo * auth_get_authinfo(const char *domain, const char *server, const char *share, signed int *suitability)
{
  signed int pos;
  struct authitem *item;
  struct authinfo *info;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link2();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 10)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: domain=%s, server=%s, share=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"auth_get_authinfo", domain, server, share);
  }

  _Bool tmp_if_expr_3;
  if(server == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*server == 0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_common_get_smbnetfs_debug_level_5;
  if(tmp_if_expr_3)
    return (struct authinfo *)(void *)0;

  else
  {
    if(domain == ((const char *)NULL))
      domain = "";

    if(share == ((const char *)NULL))
      share = "";

    item = &authroot;
    info = &authinfo_default;
    *suitability = 0;
    pthread_mutex_lock(&m_auth);
    if(!(item->info == ((struct authinfo *)NULL)))
    {
      info = item->info;
      *suitability = 1;
    }

    if(!((signed int)*domain == 0))
    {
      pos=authitem_find_subitem(item, domain);
      if(pos >= 0)
      {
        if(!(item->_anon0.childs[(signed long int)pos]->info == ((struct authinfo *)NULL)))
        {
          info = item->_anon0.childs[(signed long int)pos]->info;
          *suitability = 2;
        }

      }

    }

    pos=authitem_find_subitem(item, server);
    if(pos >= 0)
    {
      item = item->_anon0.childs[(signed long int)pos];
      if(!(item->info == ((struct authinfo *)NULL)))
      {
        info = item->info;
        *suitability = 4;
      }

      if(!((signed int)*share == 0))
      {
        pos=authitem_find_subitem(item, share);
        if(pos >= 0)
        {
          item = item->_anon0.childs[(signed long int)pos];
          if(!(item->info == ((struct authinfo *)NULL)))
          {
            info = item->info;
            *suitability = 5;
          }

        }

      }

    }


  end:
    ;
    info->ref_count = info->ref_count + 1;
    pthread_mutex_unlock(&m_auth);
    return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link2();
    if(return_value_common_get_smbnetfs_debug_level_5 >= 10)
    {
      struct timeval auth_get_authinfo__1__6____now;
      gettimeofday(&auth_get_authinfo__1__6____now, (struct timezone *)(void *)0);
      char auth_get_authinfo__1__6____tstamp[20l];
      struct tm auth_get_authinfo__1__6____tm;
      localtime_r(&auth_get_authinfo__1__6____now.tv_sec, &auth_get_authinfo__1__6____tm);
      strftime(auth_get_authinfo__1__6____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &auth_get_authinfo__1__6____tm);
      signed int return_value_getpid_4;
      return_value_getpid_4=getpid();
      common_debug_print("%.19s.%03d %d->%s: domain=%s, user=%s, password=%s, suitability=%d\n", (const void *)auth_get_authinfo__1__6____tstamp, (signed int)(auth_get_authinfo__1__6____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"auth_get_authinfo", info->domain, info->user, auth_fake_password, *suitability);
    }

    return info;
  }
}

// auth_release_authinfo
// file auth.c line 303
void auth_release_authinfo(struct authinfo *info)
{
  pthread_mutex_lock(&m_auth);
  authinfo_release(info);
  pthread_mutex_unlock(&m_auth);
}

// auth_set_default_login_name
// file auth.c line 31
void auth_set_default_login_name(const char *name)
{
  strncpy(auth_login, name, sizeof(char [64l]) /*64ul*/ );
  auth_login[(signed long int)(sizeof(char [64l]) /*64ul*/  - (unsigned long int)1)] = (char)0;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link2();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: login=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"auth_set_default_login_name", (const void *)auth_login);
  }

}

// auth_store_auth_data
// file auth.c line 309
signed int auth_store_auth_data(const char *server, const char *share, const char *domain, const char *user, const char *password)
{
  signed int result;
  struct authinfo *info;
  struct authitem *item;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link2();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 10)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: smb://%s/%s, domain=%s, user=%s, password=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"auth_store_auth_data", server, share, domain, user, auth_fake_password);
  }

  _Bool tmp_if_expr_3;
  if(user == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*user == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  signed int return_value_authinfo_compare_4;
  if(tmp_if_expr_3)
    return -1;

  else
  {
    if(server == ((const char *)NULL))
      server = "";

    if(share == ((const char *)NULL))
      share = "";

    if(domain == ((const char *)NULL))
      domain = "";

    if(password == ((const char *)NULL))
      password = "";

    if((signed int)*server == 0)
    {
      if((signed int)*share == 0)
        goto __CPROVER_DUMP_L9;

      return -1;
    }

    else
    {

    __CPROVER_DUMP_L9:
      ;
      result = -1;
      item = &authroot;
      pthread_mutex_lock(&m_auth);
      if(!((signed int)*server == 0))
      {
        item=authitem_get_subitem(item, server);
        if(item == ((struct authitem *)NULL))
          goto error;

        if(!((signed int)*share == 0))
        {
          item=authitem_get_subitem(item, share);
          if(item == ((struct authitem *)NULL))
            goto error;

        }

      }


    update_info:
      ;
      if(item->info == ((struct authinfo *)NULL))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_authinfo_compare_4=authinfo_compare(item->info, domain, user, password);
        tmp_if_expr_5 = !(return_value_authinfo_compare_4 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        info=authinfo_store_list(domain, user, password);
        if(info == ((struct authinfo *)NULL))
          goto error;

        if(!(item->info == ((struct authinfo *)NULL)))
          authinfo_release(item->info);

        item->info = info;
      }

      item->touch_time=time((signed long int *)(void *)0);
      result = 0;

    error:
      ;
      pthread_mutex_unlock(&m_auth);
      return result;
    }
  }
}

// authinfo_compare
// file auth.c line 65
static inline signed int authinfo_compare(struct authinfo *info, const char *domain, const char *user, const char *password)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(info->domain, domain);
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  if(return_value_strcmp_1 == 0)
  {
    return_value_strcmp_2=strcmp(info->user, user);
    tmp_if_expr_3 = return_value_strcmp_2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  if(tmp_if_expr_3)
  {
    return_value_strcmp_4=strcmp(info->password, password);
    tmp_if_expr_5 = return_value_strcmp_4 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  return (signed int)tmp_if_expr_5;
}

// authinfo_create_new
// file auth.c line 37
static struct authinfo * authinfo_create_new(const char *domain, const char *user, const char *password)
{
  unsigned long int len;
  struct authinfo *info;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(domain);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(user);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(password);
  len = sizeof(struct authinfo) /*48ul*/  + return_value_strlen_1 + return_value_strlen_2 + return_value_strlen_3 + (unsigned long int)3;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(len);
  info = (struct authinfo *)return_value_malloc_4;
  if(info == ((struct authinfo *)NULL))
    return (struct authinfo *)(void *)0;

  else
  {
    memset((void *)info, 0, len);
    info->domain = (char *)(info + (signed long int)1);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(domain);
    info->user = info->domain + (signed long int)return_value_strlen_5 + (signed long int)1;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(user);
    info->password = info->user + (signed long int)return_value_strlen_6 + (signed long int)1;
    strcpy(info->domain, domain);
    strcpy(info->user, user);
    strcpy(info->password, password);
    return info;
  }
}

// authinfo_delete
// file auth.c line 61
static inline void authinfo_delete(struct authinfo *info)
{
  free((void *)info);
}

// authinfo_find_in_list
// file auth.c line 74
static struct authinfo * authinfo_find_in_list(const char *domain, const char *user, const char *password)
{
  struct authinfo *info;
  struct __LIST *elem;
  elem=first_list_elem(&authinfo_list);
  signed int return_value_is_valid_list_elem_1;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem(&authinfo_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    info = (struct authinfo *)((char *)elem - (signed long int)0ul);
    signed int return_value_authinfo_compare_2;
    return_value_authinfo_compare_2=authinfo_compare(info, domain, user, password);
    if(!(return_value_authinfo_compare_2 == 0))
      return info;

    elem = elem->next;
  }
  while((_Bool)1);
  return (struct authinfo *)(void *)0;
}

// authinfo_release
// file auth.c line 114
static void authinfo_release(struct authinfo *info)
{
  info->ref_count = info->ref_count - 1;
  if(info->ref_count == 0)
  {
    remove_from_list(&authinfo_list, &info->entries);
    authinfo_delete(info);
  }

}

// authinfo_store_list
// file auth.c line 91
static struct authinfo * authinfo_store_list(const char *domain, const char *user, const char *password)
{
  struct authinfo *info;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link2();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 10)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: domain=%s, user=%s, password=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"authinfo_store_list", domain, user, auth_fake_password);
  }

  info=authinfo_find_in_list(domain, user, password);
  if(!(info == ((struct authinfo *)NULL)))
    remove_from_list(&authinfo_list, &info->entries);

  else
  {
    info=authinfo_create_new(domain, user, password);
    if(info == ((struct authinfo *)NULL))
      return (struct authinfo *)(void *)0;

  }
  info->ref_count = info->ref_count + 1;
  add_to_list_back(&authinfo_list, &info->entries);
  return info;
}

// authitem_create_item
// file auth.c line 122
static struct authitem * authitem_create_item(const char *name)
{
  struct authitem *item;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct authitem) /*40ul*/  + return_value_strlen_1 + (unsigned long int)1);
  item = (struct authitem *)return_value_malloc_2;
  if(item == ((struct authitem *)NULL))
    return (struct authitem *)(void *)0;

  else
  {
    memset((void *)item, 0, sizeof(struct authitem) /*40ul*/ );
    item->name = (char *)(item + (signed long int)1);
    strcpy(item->name, name);
    item->touch_time=time((signed long int *)(void *)0);
    return item;
  }
}

// authitem_delete_item
// file auth.c line 135
static inline void authitem_delete_item(struct authitem *item)
{
  if(!(item->info == ((struct authinfo *)NULL)))
    authinfo_release(item->info);

  if(!(item->_anon0.childs == ((struct authitem **)NULL)))
    free((void *)item->_anon0.childs);

  free((void *)item);
}

// authitem_delete_obsolete_items
// file auth.c line 141
static void authitem_delete_obsolete_items(struct authitem *item, signed long int threshold)
{
  signed int i = item->_anon0.child_cnt - 1;
  for( ; i >= 0; i = i - 1)
  {
    authitem_delete_obsolete_items(item->_anon0.childs[(signed long int)i], threshold);
    if(item->_anon0.childs[(signed long int)i]->info == ((struct authinfo *)NULL))
    {
      if(item->_anon0.childs[(signed long int)i]->_anon0.childs == ((struct authitem **)NULL))
      {
        authitem_delete_item(item->_anon0.childs[(signed long int)i]);
        if(!(i == item->_anon0.child_cnt + -1))
          memmove((void *)&item->_anon0.childs[(signed long int)i], (const void *)&item->_anon0.childs[(signed long int)(i + 1)], (unsigned long int)((item->_anon0.child_cnt - i) - 1) * sizeof(struct authitem *) /*8ul*/ );

        item->_anon0.child_cnt = item->_anon0.child_cnt - 1;
      }

    }

  }
  if(!(item->touch_time >= threshold))
  {
    if(!(item->info == ((struct authinfo *)NULL)))
    {
      authinfo_release(item->info);
      item->info = (struct authinfo *)(void *)0;
    }

  }

  if(item->_anon0.child_cnt == 0)
  {
    if(!(item->_anon0.childs == ((struct authitem **)NULL)))
    {
      free((void *)item->_anon0.childs);
      item->_anon0.childs = (struct authitem **)(void *)0;
      item->_anon0.max_child_cnt = 0;
    }

  }

}

// authitem_find_subitem
// file auth.c line 178
static signed int authitem_find_subitem(struct authitem *item, const char *name)
{
  signed int first = 0;
  signed int last = item->_anon0.child_cnt - 1;
  while(last >= first)
  {
    signed int i = first + last >> 1;
    signed int result;
    result=strcasecmp(item->_anon0.childs[(signed long int)i]->name, name);
    if(result == 0)
      return i;

    if(!(result >= 0))
      first = i + 1;

    else
      last = i - 1;
  }
  return -(first + 1);
}

// authitem_get_subitem
// file auth.c line 228
static struct authitem * authitem_get_subitem(struct authitem *item, const char *name)
{
  signed int pos;
  struct authitem *subitem;
  pos=authitem_find_subitem(item, name);
  if(!(pos >= 0))
  {
    subitem=authitem_create_item(name);
    if(subitem == ((struct authitem *)NULL))
      return (struct authitem *)(void *)0;

    pos = -(pos + 1);
    signed int return_value_authitem_insert_subitem_1;
    return_value_authitem_insert_subitem_1=authitem_insert_subitem(item, subitem, pos);
    if(!(return_value_authitem_insert_subitem_1 == 0))
    {
      authitem_delete_item(subitem);
      return (struct authitem *)(void *)0;
    }

  }

  return item->_anon0.childs[(signed long int)pos];
}

// authitem_insert_subitem
// file auth.c line 200
static signed int authitem_insert_subitem(struct authitem *item, struct authitem *subitem, signed int pos)
{
  signed int tmp_if_expr_1;
  if(!(item->_anon0.child_cnt >= pos) || !(pos >= 0))
    return -1;

  else
  {
    if(item->_anon0.max_child_cnt == item->_anon0.child_cnt)
    {
      struct authitem **new_childs;
      signed int new_max_cnt;
      if(item->_anon0.max_child_cnt == 0)
        tmp_if_expr_1 = 64;

      else
        tmp_if_expr_1 = 2 * item->_anon0.max_child_cnt;
      new_max_cnt = tmp_if_expr_1;
      void *return_value_realloc_2;
      return_value_realloc_2=realloc((void *)item->_anon0.childs, (unsigned long int)new_max_cnt * sizeof(struct authitem *) /*8ul*/ );
      new_childs = (struct authitem **)return_value_realloc_2;
      if(new_childs == ((struct authitem **)NULL))
        return -1;

      item->_anon0.max_child_cnt = new_max_cnt;
      item->_anon0.childs = new_childs;
    }

    if(!(pos >= item->_anon0.child_cnt))
      memmove((void *)&item->_anon0.childs[(signed long int)(pos + 1)], (const void *)&item->_anon0.childs[(signed long int)pos], (unsigned long int)(item->_anon0.child_cnt - pos) * sizeof(struct authitem *) /*8ul*/ );

    item->_anon0.childs[(signed long int)pos] = subitem;
    item->_anon0.child_cnt = item->_anon0.child_cnt + 1;
    return 0;
  }
}

// charset_init
// file charset.c line 14
signed int charset_init(const char *local, const char *samba)
{
  charset_local2samba=iconv_open(samba, local);
  if(charset_local2samba == (void *)-1)
    return -1;

  else
  {
    charset_samba2local=iconv_open(local, samba);
    if(charset_samba2local == (void *)-1)
    {
      iconv_close(charset_local2samba);
      charset_local2samba = (void *)-1;
      return -1;
    }

    else
      return 0;
  }
}

// charset_local2smb
// file charset.c line 145
char * charset_local2smb(const char *src)
{
  char *return_value_charset_local2smb_r_1;
  return_value_charset_local2smb_r_1=charset_local2smb_r(src, charset_buf, sizeof(char [2048l]) /*2048ul*/ );
  return return_value_charset_local2smb_r_1;
}

// charset_local2smb_r
// file charset.c line 120
char * charset_local2smb_r(const char *src, char *dst, unsigned long int dst_len)
{
  const char *smb_prefix = "smb:/";
  const signed int smb_prefix_len = 5;
  char *res;
  memset((void *)dst, 0, dst_len);
  strcpy(dst, smb_prefix);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(src);
  res=charset_local_to_samba(charset_local2samba, src, return_value_strlen_1, dst + (signed long int)smb_prefix_len, (dst_len - (unsigned long int)smb_prefix_len) - (unsigned long int)1);
  return res != (char *)(void *)0 ? dst : (char *)(void *)0;
}

// charset_local_to_samba
// file charset.c line 86
static char * charset_local_to_samba(void *cd, const char *str, unsigned long int str_len, char *buf, unsigned long int buf_len)
{
  unsigned long int i;
  unsigned long int r;
  unsigned long int len;
  unsigned long int out_len;
  char *in;
  char *out;
  if(cd == (void *)-1 || buf == ((char *)NULL) || buf_len == 0ul)
    return (char *)(void *)0;

  else
  {
    len = (unsigned long int)0;
    for( ; str_len >= 1ul; len = (unsigned long int)(out - buf))
    {
      in = (char *)str;
      out = buf + (signed long int)len;
      out_len = buf_len - len;
      if(out_len == 0ul)
        return (char *)(void *)0;

      i = (unsigned long int)1;
      for( ; str_len >= i; i = i + 1ul)
      {
        r=iconv(cd, &in, &i, &out, &out_len);
        if(!(r == 18446744073709551615ul))
          goto conversion_is_ok;

        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        if(*return_value___errno_location_1 == 7)
          return (char *)(void *)0;

        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        if(!(*return_value___errno_location_2 == 22))
          break;

      }
      return (char *)(void *)0;

    conversion_is_ok:
      ;
      str_len = str_len - (unsigned long int)(in - str);
      str = in;
    }
    return buf;
  }
}

// charset_samba_to_local
// file charset.c line 27
static char * charset_samba_to_local(void *cd, const char *str, unsigned long int str_len, char *buf, unsigned long int buf_len)
{
  unsigned long int i;
  unsigned long int r;
  unsigned long int len;
  unsigned long int out_len;
  char *in;
  char *out;
  unsigned long int tmp_post_3;
  unsigned long int tmp_post_4;
  unsigned long int tmp_post_5;
  if(cd == (void *)-1 || buf == ((char *)NULL) || buf_len == 0ul)
    return (char *)(void *)0;

  else
  {
    len = (unsigned long int)0;
    while(str_len >= 1ul)
    {
      in = (char *)str;
      out = buf + (signed long int)len;
      out_len = buf_len - len;
      if(out_len == 0ul)
        return (char *)(void *)0;

      i = (unsigned long int)1;
      for( ; str_len >= i; i = i + 1ul)
      {
        r=iconv(cd, &in, &i, &out, &out_len);
        if(r == 18446744073709551615ul)
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          if(*return_value___errno_location_1 == 7)
            return (char *)(void *)0;

          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          if(*return_value___errno_location_2 == 22)
            goto __CPROVER_DUMP_L10;

          break;
        }

        if(!(r == 0ul))
          break;

        if((signed int)buf[(signed long int)len] == 37 || (signed int)buf[(signed long int)len] == 47 || (signed int)buf[(signed long int)len] == 58 || (signed int)buf[(signed long int)len] == 64 || (signed int)buf[(signed long int)len] == 92)
          break;

        goto conversion_is_ok;

      __CPROVER_DUMP_L10:
        ;
      }

    conversion_is_bad:
      ;
      if(!(buf_len + -len >= 3ul))
        return (char *)(void *)0;

      tmp_post_3 = len;
      len = len + 1ul;
      buf[(signed long int)tmp_post_3] = (char)37;
      tmp_post_4 = len;
      len = len + 1ul;
      buf[(signed long int)tmp_post_4] = charset_hex_digit[(signed long int)(((signed int)*str & 0xF0) >> 4)];
      tmp_post_5 = len;
      len = len + 1ul;
      buf[(signed long int)tmp_post_5] = charset_hex_digit[(signed long int)((signed int)*str & 0x0F)];
      str = str + 1l;
      str_len = str_len - 1ul;
      continue;

    conversion_is_ok:
      ;
      str_len = str_len - (unsigned long int)(in - str);
      str = in;
      len = (unsigned long int)(out - buf);
    }
    return buf;
  }
}

// charset_smb2local
// file charset.c line 151
char * charset_smb2local(const char *src)
{
  char *return_value_charset_smb2local_r_1;
  return_value_charset_smb2local_r_1=charset_smb2local_r(src, charset_buf, sizeof(char [2048l]) /*2048ul*/ );
  return return_value_charset_smb2local_r_1;
}

// charset_smb2local_r
// file charset.c line 134
char * charset_smb2local_r(const char *src, char *dst, unsigned long int dst_len)
{
  char *res;
  memset((void *)dst, 0, dst_len);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(src);
  res=charset_samba_to_local(charset_samba2local, src, return_value_strlen_1, dst, dst_len - (unsigned long int)1);
  return res != (char *)(void *)0 ? dst : (char *)(void *)0;
}

// check_samba_version
// file main.c line 28
static void check_samba_version(void)
{
  const char *samba_version;
  signed int major;
  signed int minor;
  samba_version=smbc_version();
  signed int return_value_sscanf_1;
  return_value_sscanf_1=sscanf(samba_version, "%d.%d.%*d", &major, &minor);
  if(!(return_value_sscanf_1 == 2))
  {
    fprintf(stderr, "ERROR: Can't parse libsmbclient version: %s\n", samba_version);
    exit(1);
  }

  if(!(major >= 5))
  {
    if(!(major == 4))
    {
      if(major == 3)
      {
        if(!(minor >= 2))
          goto unsupported;

      }

      else
      {

      unsupported:
        ;
        fprintf(stderr, "ERROR: Unsupported libsmbclient version: %s\n       Please consider upgrade to libsmbclient >= 3.2\n\n", samba_version);
        exit(1);
      }
    }

  }

  else
  {

  to_new:
    ;
    fprintf(stderr, "WARNING: Unknown libsmbclient version: %s\n         SMBNetFS may not work as expected.\n\n", samba_version);
    goto __CPROVER_DUMP_L5;
  }

ok:
  ;

__CPROVER_DUMP_L5:
  ;
}

// common_debug_print
// file common.c line 55
void common_debug_print(const char *fmt, ...)
{
  void **ap;
  pthread_mutex_lock(&m_common);
  ap = (void **)&fmt;
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  fflush(stderr);
  if(!(common_stdlog == ((struct _IO_FILE *)NULL)))
  {
    ap = (void **)&fmt;
    vfprintf(common_stdlog, fmt, ap);
    ap = ((void **)NULL);
    fflush(common_stdlog);
  }

  pthread_mutex_unlock(&m_common);
}

// common_get_smbnetfs_debug_level
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// common_get_smbnetfs_debug_level_link1
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link1(void)
{
  signed int tmp_statement_expression_1_link1;
  signed int return_value___atomic_load_4_2_link1;
  return_value___atomic_load_4_2_link1=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link1 = (signed int)return_value___atomic_load_4_2_link1;
  return tmp_statement_expression_1_link1;
}

// common_get_smbnetfs_debug_level_link10
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link10(void)
{
  signed int tmp_statement_expression_1_link10;
  signed int return_value___atomic_load_4_2_link10;
  return_value___atomic_load_4_2_link10=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link10 = (signed int)return_value___atomic_load_4_2_link10;
  return tmp_statement_expression_1_link10;
}

// common_get_smbnetfs_debug_level_link11
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link11(void)
{
  signed int tmp_statement_expression_1_link11;
  signed int return_value___atomic_load_4_2_link11;
  return_value___atomic_load_4_2_link11=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link11 = (signed int)return_value___atomic_load_4_2_link11;
  return tmp_statement_expression_1_link11;
}

// common_get_smbnetfs_debug_level_link2
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link2(void)
{
  signed int tmp_statement_expression_1_link2;
  signed int return_value___atomic_load_4_2_link2;
  return_value___atomic_load_4_2_link2=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link2 = (signed int)return_value___atomic_load_4_2_link2;
  return tmp_statement_expression_1_link2;
}

// common_get_smbnetfs_debug_level_link3
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link3(void)
{
  signed int tmp_statement_expression_1_link3;
  signed int return_value___atomic_load_4_2_link3;
  return_value___atomic_load_4_2_link3=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link3 = (signed int)return_value___atomic_load_4_2_link3;
  return tmp_statement_expression_1_link3;
}

// common_get_smbnetfs_debug_level_link4
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link4(void)
{
  signed int tmp_statement_expression_1_link4;
  signed int return_value___atomic_load_4_2_link4;
  return_value___atomic_load_4_2_link4=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link4 = (signed int)return_value___atomic_load_4_2_link4;
  return tmp_statement_expression_1_link4;
}

// common_get_smbnetfs_debug_level_link5
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link5(void)
{
  signed int tmp_statement_expression_1_link5;
  signed int return_value___atomic_load_4_2_link5;
  return_value___atomic_load_4_2_link5=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link5 = (signed int)return_value___atomic_load_4_2_link5;
  return tmp_statement_expression_1_link5;
}

// common_get_smbnetfs_debug_level_link6
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link6(void)
{
  signed int tmp_statement_expression_1_link6;
  signed int return_value___atomic_load_4_2_link6;
  return_value___atomic_load_4_2_link6=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link6 = (signed int)return_value___atomic_load_4_2_link6;
  return tmp_statement_expression_1_link6;
}

// common_get_smbnetfs_debug_level_link7
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link7(void)
{
  signed int tmp_statement_expression_1_link7;
  signed int return_value___atomic_load_4_2_link7;
  return_value___atomic_load_4_2_link7=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link7 = (signed int)return_value___atomic_load_4_2_link7;
  return tmp_statement_expression_1_link7;
}

// common_get_smbnetfs_debug_level_link8
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link8(void)
{
  signed int tmp_statement_expression_1_link8;
  signed int return_value___atomic_load_4_2_link8;
  return_value___atomic_load_4_2_link8=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link8 = (signed int)return_value___atomic_load_4_2_link8;
  return tmp_statement_expression_1_link8;
}

// common_get_smbnetfs_debug_level_link9
// file common.h line 26
static inline signed int common_get_smbnetfs_debug_level_link9(void)
{
  signed int tmp_statement_expression_1_link9;
  signed int return_value___atomic_load_4_2_link9;
  return_value___atomic_load_4_2_link9=__atomic_load_4(&common_debug_level, 5);
  tmp_statement_expression_1_link9 = (signed int)return_value___atomic_load_4_2_link9;
  return tmp_statement_expression_1_link9;
}

// common_print_backtrace
// file common.c line 72
void common_print_backtrace(void)
{
  signed int fd;
  void *array[200l];
  unsigned long int size;
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  static char buf[256l];
  snprintf(buf, sizeof(char [256l]) /*256ul*/ , "%d->%s: dumping ...\n", return_value_getpid_1, (const void *)"common_print_backtrace");
  buf[(signed long int)(sizeof(char [256l]) /*256ul*/  - (unsigned long int)2)] = (char)10;
  buf[(signed long int)(sizeof(char [256l]) /*256ul*/  - (unsigned long int)1)] = (char)0;
  signed int return_value_backtrace_2;
  return_value_backtrace_2=backtrace(array, 200);
  size = (unsigned long int)return_value_backtrace_2;
  fd=fileno(stderr);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(buf);
  write(fd, (const void *)buf, return_value_strlen_3);
  backtrace_symbols_fd(array, (signed int)size, fd);
  fsync(fd);
  if(!(common_stdlog == ((struct _IO_FILE *)NULL)))
  {
    fd=fileno(common_stdlog);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(buf);
    write(fd, (const void *)buf, return_value_strlen_4);
    backtrace_symbols_fd(array, (signed int)size, fd);
    fsync(fd);
  }

}

// common_set_log_file
// file common.c line 25
signed int common_set_log_file(const char *logfile)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: logfile=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"common_set_log_file", logfile);
  }

  pthread_mutex_lock(&m_common);
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  if(!(logfile == ((const char *)NULL)))
  {
    return_value_strcmp_7=strcmp(common_logfile, logfile);
    tmp_if_expr_8 = return_value_strcmp_7 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_8 = (_Bool)0;
  signed int return_value_common_get_smbnetfs_debug_level_6;
  if(!tmp_if_expr_8)
  {
    if(!(common_stdlog == ((struct _IO_FILE *)NULL)))
    {
      fclose(common_stdlog);
      memset((void *)common_logfile, 0, sizeof(char [256l]) /*256ul*/ );
      common_stdlog = (struct _IO_FILE *)(void *)0;
    }

    if(!(logfile == ((const char *)NULL)))
      strncpy(common_logfile, logfile, sizeof(char [256l]) /*256ul*/  - (unsigned long int)1);

    if(!((signed int)common_logfile[0l] == 0))
    {
      common_stdlog=fopen(common_logfile, "a");
      if(common_stdlog == ((struct _IO_FILE *)NULL))
      {
        memset((void *)common_logfile, 0, sizeof(char [256l]) /*256ul*/ );
        pthread_mutex_unlock(&m_common);
        return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level();
        if(return_value_common_get_smbnetfs_debug_level_6 >= 0)
        {
          struct timeval common_set_log_file__1__2__2__1__1____now;
          gettimeofday(&common_set_log_file__1__2__2__1__1____now, (struct timezone *)(void *)0);
          char common_set_log_file__1__2__2__1__1____tstamp[20l];
          struct tm common_set_log_file__1__2__2__1__1____tm;
          localtime_r(&common_set_log_file__1__2__2__1__1____now.tv_sec, &common_set_log_file__1__2__2__1__1____tm);
          strftime(common_set_log_file__1__2__2__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &common_set_log_file__1__2__2__1__1____tm);
          signed int return_value_getpid_3;
          return_value_getpid_3=getpid();
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          common_debug_print("%.19s.%03d %d->%s: Can't open logfile '%s', error : %s.\n", (const void *)common_set_log_file__1__2__2__1__1____tstamp, (signed int)(common_set_log_file__1__2__2__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_3, (const void *)"common_set_log_file", logfile, return_value_strerror_5);
        }

        return 0;
      }

    }

  }

  pthread_mutex_unlock(&m_common);
  return 1;
}

// common_set_smbnetfs_debug_level
// file common.c line 18
signed int common_set_smbnetfs_debug_level(signed int level)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(level >= 11 || !(level >= 0))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 8)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: level=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"common_set_smbnetfs_debug_level", level);
    }

    __atomic_store_4(&common_debug_level, level, 5);
    return 1;
  }
}

// event_destroy
// file event.c line 297
static void event_destroy(void *private_data)
{
  (void)private_data;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 1)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: Destroy cfg and smb_tree threads\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_destroy");
  }

  process_disable_new_smb_conn_starting();
  process_kill_all();
  pthread_cancel(event_ev_thread_id);
  pthread_cancel(event_smb_thread_id);
  pthread_join(event_ev_thread_id, (void **)(void *)0);
  pthread_join(event_smb_thread_id, (void **)(void *)0);
}

// event_get_query_browser_flag
// file event.c line 38
static inline signed int event_get_query_browser_flag(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&event_query_browser_flag, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// event_get_smb_tree_elements_ttl
// file event.c line 78
static inline signed int event_get_smb_tree_elements_ttl(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&event_smb_tree_elements_ttl, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// event_get_smb_tree_scan_period
// file event.c line 62
static inline signed int event_get_smb_tree_scan_period(void)
{
  signed int period;
  pthread_mutex_lock(&m_evthread);
  period = event_smb_tree_scan_period;
  pthread_mutex_unlock(&m_evthread);
  return period;
}

// event_get_time_step
// file event.c line 49
static inline signed int event_get_time_step(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&event_time_step, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// event_init
// file event.c line 281
static void * event_init(struct fuse_conn_info *conn)
{
  (void)conn;
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&event_smb_thread_id, (const union pthread_attr_t *)(void *)0, event_update_smb_tree_thread, (void *)0);
  if(!(return_value_pthread_create_1 == 0))
  {
    fprintf(stderr, "Could not create smb_tree thread\n");
    exit(1);
  }

  signed int return_value_pthread_create_2;
  return_value_pthread_create_2=pthread_create(&event_ev_thread_id, (const union pthread_attr_t *)(void *)0, event_thread, (void *)0);
  if(!(return_value_pthread_create_2 == 0))
  {
    fprintf(stderr, "Could not create event thread\n");
    exit(1);
  }

  return (void *)0;
}

// event_is_time_for_config_update
// file event.c line 113
static signed int event_is_time_for_config_update(void)
{
  signed int flag;
  pthread_mutex_lock(&m_evthread);
  _Bool tmp_if_expr_2;
  signed long int return_value_time_1;
  if(event_config_update_period >= 1)
  {
    return_value_time_1=time((signed long int *)(void *)0);
    tmp_if_expr_2 = return_value_time_1 >= event_last_config_update + (signed long int)event_config_update_period ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  flag = tmp_if_expr_2 ? 1 : 0;
  pthread_mutex_unlock(&m_evthread);
  return flag;
}

// event_is_time_for_smb_tree_scan
// file event.c line 97
static signed int event_is_time_for_smb_tree_scan(void)
{
  signed int flag;
  pthread_mutex_lock(&m_evthread);
  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  flag = return_value_time_1 >= event_last_smb_tree_scan + (signed long int)event_smb_tree_scan_period ? 1 : 0;
  pthread_mutex_unlock(&m_evthread);
  return flag;
}

// event_reread_config
// file event.c line 234
static void event_reread_config(void)
{
  signed long int reread_time;
  reread_time=time((signed long int *)(void *)0);
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: start at timestamp=%u\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_reread_config", (unsigned int)reread_time);
  }

  reconfigure_read_config(0);
  smbitem_delete_obsolete(reread_time, (enum smbitem_tree_t)SMBITEM_USER_TREE);
  auth_delete_obsolete(reread_time);
  stat_workaround_delete_obsolete(reread_time);
  event_set_last_config_update(reread_time);
}

// event_scan_samba_group
// file event.c line 124
static void event_scan_samba_group(const char *group)
{
  char buf[4096l];
  char name[256l];
  char link[256l];
  signed int count;
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval event_scan_samba_group__1__1____now;
    gettimeofday(&event_scan_samba_group__1__1____now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&event_scan_samba_group__1__1____now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: group=%s\n", (const void *)__tstamp, (signed int)(event_scan_samba_group__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_scan_samba_group", group);
  }

  snprintf(name, sizeof(char [256l]) /*256ul*/ , "/%s", group);
  fd=samba_opendir(name);
  signed int return_value_common_get_smbnetfs_debug_level_5;
  while((_Bool)1)
  {
    struct smb_conn_dirent_rec *rec;
    signed long int return_value_samba_readdir_3;
    return_value_samba_readdir_3=samba_readdir(fd, (void *)buf, sizeof(char [4096l]) /*4096ul*/ );
    count = (signed int)return_value_samba_readdir_3;
    if(!(count >= 1))
      break;

    rec = (struct smb_conn_dirent_rec *)buf;
    for( ; count >= (signed int)sizeof(struct smb_conn_dirent_rec) /*260*/ ; count = count - (signed int)sizeof(struct smb_conn_dirent_rec) /*260ul*/ )
    {
      if(rec->smbc_type == 2u)
      {
        smbitem_mkhost(rec->d_name, group, 1, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
        snprintf(name, sizeof(char [256l]) /*256ul*/ , "%s/%s", group, (const void *)rec->d_name);
        snprintf(link, sizeof(char [256l]) /*256ul*/ , "../%s", (const void *)rec->d_name);
        smbitem_mklink(name, link, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
        goto __CPROVER_DUMP_L8;
      }

      return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link10();
      if(return_value_common_get_smbnetfs_debug_level_5 >= 6)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char event_scan_samba_group__1__2__1__1__1__1____tstamp[20l];
        struct tm event_scan_samba_group__1__2__1__1__1__1____tm;
        localtime_r(&__now.tv_sec, &event_scan_samba_group__1__2__1__1__1__1____tm);
        strftime(event_scan_samba_group__1__2__1__1__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &event_scan_samba_group__1__2__1__1__1__1____tm);
        signed int return_value_getpid_4;
        return_value_getpid_4=getpid();
        common_debug_print("%.19s.%03d %d->%s: ups..., smbc_type=%d, d_name=%s\n", (const void *)event_scan_samba_group__1__2__1__1__1__1____tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"event_scan_samba_group", rec->smbc_type, (const void *)rec->d_name);
      }


    __CPROVER_DUMP_L8:
      ;
      rec = rec + 1l;
    }
  }
  samba_closedir(fd);
}

// event_scan_smb_root
// file event.c line 158
static void event_scan_smb_root(void)
{
  char buf[4096l];
  signed int count;
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: reading group list\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_scan_smb_root");
  }

  fd=samba_opendir("/");
  signed int return_value_common_get_smbnetfs_debug_level_5;
  while((_Bool)1)
  {
    struct smb_conn_dirent_rec *rec;
    signed long int return_value_samba_readdir_3;
    return_value_samba_readdir_3=samba_readdir(fd, (void *)buf, sizeof(char [4096l]) /*4096ul*/ );
    count = (signed int)return_value_samba_readdir_3;
    if(!(count >= 1))
      break;

    rec = (struct smb_conn_dirent_rec *)buf;
    for( ; count >= (signed int)sizeof(struct smb_conn_dirent_rec) /*260*/ ; count = count - (signed int)sizeof(struct smb_conn_dirent_rec) /*260ul*/ )
    {
      if(rec->smbc_type == 1u)
      {
        smbitem_mkgroup(rec->d_name, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
        goto __CPROVER_DUMP_L8;
      }

      return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link10();
      if(return_value_common_get_smbnetfs_debug_level_5 >= 6)
      {
        struct timeval event_scan_smb_root__1__2__1__1__1__1____now;
        gettimeofday(&event_scan_smb_root__1__2__1__1__1__1____now, (struct timezone *)(void *)0);
        char event_scan_smb_root__1__2__1__1__1__1____tstamp[20l];
        struct tm event_scan_smb_root__1__2__1__1__1__1____tm;
        localtime_r(&event_scan_smb_root__1__2__1__1__1__1____now.tv_sec, &event_scan_smb_root__1__2__1__1__1__1____tm);
        strftime(event_scan_smb_root__1__2__1__1__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &event_scan_smb_root__1__2__1__1__1__1____tm);
        signed int return_value_getpid_4;
        return_value_getpid_4=getpid();
        common_debug_print("%.19s.%03d %d->%s: ups..., smbc_type=%d, d_name=%s\n", (const void *)event_scan_smb_root__1__2__1__1__1__1____tstamp, (signed int)(event_scan_smb_root__1__2__1__1__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"event_scan_smb_root", rec->smbc_type, (const void *)rec->d_name);
      }


    __CPROVER_DUMP_L8:
      ;
      rec = rec + 1l;
    }
  }
  samba_closedir(fd);
}

// event_scan_smb_tree
// file event.c line 188
void event_scan_smb_tree(void)
{
  signed int i;
  struct smbitem *dir;
  signed int return_value_event_get_query_browser_flag_1;
  return_value_event_get_query_browser_flag_1=event_get_query_browser_flag();
  if(!(return_value_event_get_query_browser_flag_1 == 0))
    event_scan_smb_root();

  dir=smbitem_get_samba_groups();
  i = 0;
  for( ; !(i >= dir->_anon0._anon1.child_cnt); i = i + 1)
    if((signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
      event_scan_samba_group(dir->_anon0._anon1.childs[(signed long int)i]->name);

  smbitem_release_dir(dir);
}

// event_set_config_update_period
// file event.c line 82
signed int event_set_config_update_period(signed int period)
{
  signed int return_value_event_get_time_step_1;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  if(!(period == 0))
  {
    return_value_event_get_time_step_1=event_get_time_step();
    if(period >= return_value_event_get_time_step_1)
      goto __CPROVER_DUMP_L1;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link10();
    if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_2;
      return_value_getpid_2=getpid();
      common_debug_print("%.19s.%03d %d->%s: period=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"event_set_config_update_period", period);
    }

    pthread_mutex_lock(&m_evthread);
    event_config_update_period = period;
    pthread_mutex_unlock(&m_evthread);
    return 1;
  }
}

// event_set_event_handler
// file event.c line 309
void event_set_event_handler(struct fuse_operations *file_oper)
{
  file_oper->init = event_init;
  file_oper->destroy = event_destroy;
}

// event_set_last_config_update
// file event.c line 107
static void event_set_last_config_update(signed long int update_time)
{
  pthread_mutex_lock(&m_evthread);
  event_last_config_update = update_time;
  pthread_mutex_unlock(&m_evthread);
}

// event_set_last_smb_tree_scan
// file event.c line 91
static void event_set_last_smb_tree_scan(signed long int scan_time)
{
  pthread_mutex_lock(&m_evthread);
  event_last_smb_tree_scan = scan_time;
  pthread_mutex_unlock(&m_evthread);
}

// event_set_query_browser_flag
// file event.c line 32
signed int event_set_query_browser_flag(signed int flag)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: flag=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_set_query_browser_flag", flag);
  }

  __atomic_store_4(&event_query_browser_flag, flag, 5);
  return 1;
}

// event_set_smb_tree_elements_ttl
// file event.c line 71
signed int event_set_smb_tree_elements_ttl(signed int ttl)
{
  signed int return_value_event_get_smb_tree_scan_period_1;
  return_value_event_get_smb_tree_scan_period_1=event_get_smb_tree_scan_period();
  signed int return_value_common_get_smbnetfs_debug_level_3;
  if(!(ttl >= return_value_event_get_smb_tree_scan_period_1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link10();
    if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_2;
      return_value_getpid_2=getpid();
      common_debug_print("%.19s.%03d %d->%s: ttl=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"event_set_smb_tree_elements_ttl", ttl);
    }

    __atomic_store_4(&event_smb_tree_elements_ttl, ttl, 5);
    return 1;
  }
}

// event_set_smb_tree_scan_period
// file event.c line 53
signed int event_set_smb_tree_scan_period(signed int period)
{
  signed int return_value_event_get_time_step_1;
  return_value_event_get_time_step_1=event_get_time_step();
  signed int return_value_common_get_smbnetfs_debug_level_3;
  if(!(period >= return_value_event_get_time_step_1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link10();
    if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_2;
      return_value_getpid_2=getpid();
      common_debug_print("%.19s.%03d %d->%s: period=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"event_set_smb_tree_scan_period", period);
    }

    pthread_mutex_lock(&m_evthread);
    event_smb_tree_scan_period = period;
    pthread_mutex_unlock(&m_evthread);
    return 1;
  }
}

// event_set_time_step
// file event.c line 42
signed int event_set_time_step(signed int step)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(step >= 1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link10();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: step=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"event_set_time_step", step);
    }

    __atomic_store_4(&event_time_step, step, 5);
    return 1;
  }
}

// event_thread
// file event.c line 247
static void * event_thread(void *data)
{
  struct anonymous_19 siginfo;
  struct anonymous_10 signal_set;
  signed long int start_time;
  struct timespec timeout;
  signed int sigret;
  (void)data;
  pthread_setcancelstate(1, (signed int *)(void *)0);
  start_time=time((signed long int *)(void *)0);
  event_set_last_config_update(start_time);
  sigemptyset(&signal_set);
  sigaddset(&signal_set, 1);
  sigaddset(&signal_set, 17);
  _Bool tmp_if_expr_3;
  signed int return_value_event_is_time_for_config_update_2;
  while((_Bool)1)
  {
    signed int return_value_event_get_time_step_1;
    return_value_event_get_time_step_1=event_get_time_step();
    timeout.tv_sec = (signed long int)return_value_event_get_time_step_1;
    timeout.tv_nsec = (signed long int)0;
    pthread_setcancelstate(0, (signed int *)(void *)0);
    sigret=sigtimedwait(&signal_set, &siginfo, &timeout);
    pthread_setcancelstate(1, (signed int *)(void *)0);
    process_cleanup_from_zombies();
    if(siginfo.si_signo == 1 && !(sigret == -1))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_event_is_time_for_config_update_2=event_is_time_for_config_update();
      tmp_if_expr_3 = return_value_event_is_time_for_config_update_2 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      event_reread_config();

  }
  return (void *)0;
}

// event_update_smb_tree_thread
// file event.c line 201
static void * event_update_smb_tree_thread(void *data)
{
  signed long int scan_time;
  signed long int die_threshold;
  signed int time_step;
  (void)data;
  pthread_setcancelstate(1, (signed int *)(void *)0);
  scan_time=time((signed long int *)(void *)0);
  event_scan_smb_tree();
  event_set_last_smb_tree_scan(scan_time);
  signed int return_value_common_get_smbnetfs_debug_level_3;
  while((_Bool)1)
  {
    time_step=event_get_time_step();
    pthread_setcancelstate(0, (signed int *)(void *)0);
    sleep((unsigned int)time_step);
    pthread_setcancelstate(1, (signed int *)(void *)0);
    signed int return_value_event_is_time_for_smb_tree_scan_4;
    return_value_event_is_time_for_smb_tree_scan_4=event_is_time_for_smb_tree_scan();
    if(!(return_value_event_is_time_for_smb_tree_scan_4 == 0))
    {
      scan_time=time((signed long int *)(void *)0);
      signed int return_value_event_get_smb_tree_elements_ttl_1;
      return_value_event_get_smb_tree_elements_ttl_1=event_get_smb_tree_elements_ttl();
      die_threshold = scan_time - (signed long int)return_value_event_get_smb_tree_elements_ttl_1;
      return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link10();
      if(return_value_common_get_smbnetfs_debug_level_3 >= 5)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_2;
        return_value_getpid_2=getpid();
        common_debug_print("%.19s.%03d %d->%s: start at timestamp=%u, die_threshold=%u\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"event_update_smb_tree_thread", (unsigned int)scan_time, (unsigned int)die_threshold);
      }

      event_scan_smb_tree();
      smbitem_delete_obsolete(die_threshold, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
      event_set_last_smb_tree_scan(scan_time);
    }

  }
  return (void *)0;
}

// first_list_elem
// file list.h line 16
static inline struct __LIST * first_list_elem(struct __LIST *list)
{
  return list->next;
}

// first_list_elem_link1
// file list.h line 16
static inline struct __LIST * first_list_elem_link1(struct __LIST *list_link1)
{
  return list_link1->next;
}

// first_list_elem_link2
// file list.h line 16
static inline struct __LIST * first_list_elem_link2(struct __LIST *list_link2)
{
  return list_link2->next;
}

// first_list_elem_link3
// file list.h line 16
static inline struct __LIST * first_list_elem_link3(struct __LIST *list_link3)
{
  return list_link3->next;
}

// first_list_elem_link4
// file list.h line 16
static inline struct __LIST * first_list_elem_link4(struct __LIST *list_link4)
{
  return list_link4->next;
}

// first_list_elem_link5
// file list.h line 16
static inline struct __LIST * first_list_elem_link5(struct __LIST *list_link5)
{
  return list_link5->next;
}

// function_check_xattr_name
// file function.c line 70
static inline signed int function_check_xattr_name(const char *name)
{
  unsigned long int return_value_strlen_1;
  static char *xattr_name = "system.nt_sec_desc.";
  return_value_strlen_1=strlen(xattr_name);
  signed int return_value_strncmp_2;
  return_value_strncmp_2=strncmp(name, xattr_name, return_value_strlen_1);
  return (signed int)(return_value_strncmp_2 == 0);
}

// function_chmod
// file function.c line 465
static signed int function_chmod(const char *path, unsigned int mode)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_chmod", path, mode);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    signed int return_value_samba_chmod_5;
    return_value_samba_chmod_5=samba_chmod(path, mode);
    if(!(return_value_samba_chmod_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_chown
// file function.c line 545
static signed int function_chown(const char *path, unsigned int uid, unsigned int gid)
{
  (void)path;
  (void)uid;
  (void)gid;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, uid=%d, gid=%d)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_chown", path, uid, gid);
  }

  signed int return_value_function_get_quiet_flag_3;
  return_value_function_get_quiet_flag_3=function_get_quiet_flag();
  if(!(return_value_function_get_quiet_flag_3 == 0))
    return 0;

  else
    return -1;
}

// function_close
// file function.c line 135
static signed int function_close(const char *path, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, fh=%llx, flags=%o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_close", path, (signed long long int)fi->fh, fi->flags);
  }

  fd=function_get_fd(fi);
  signed int *return_value___errno_location_3;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
  {
    signed int return_value_samba_close_4;
    return_value_samba_close_4=samba_close(fd);
    if(!(return_value_samba_close_4 == 0))
    {
      return_value___errno_location_3=__errno_location();
      return -(*return_value___errno_location_3);
    }

    else
      return 0;
  }
}

// function_closedir
// file function.c line 181
static signed int function_closedir(const char *path, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, fh=%llx, flags=%o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_closedir", path, (signed long long int)fi->fh, fi->flags);
  }

  fd=function_get_fd(fi);
  signed int *return_value___errno_location_3;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
    if(fd == (struct smb_conn_file *)-1)
      return 0;

    else
    {
      signed int return_value_samba_closedir_4;
      return_value_samba_closedir_4=samba_closedir(fd);
      if(!(return_value_samba_closedir_4 == 0))
      {
        return_value___errno_location_3=__errno_location();
        return -(*return_value___errno_location_3);
      }

      else
        return 0;
    }
}

// function_creat
// file function.c line 94
static signed int function_creat(const char *path, unsigned int mode, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, mode=%0x, flags=%o, fh=%llx)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_creat", path, mode, fi->flags, (signed long long int)fi->fh);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    fd=samba_creat(path, (unsigned int)fi->flags);
    if(fd == ((struct smb_conn_file *)NULL))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
    {
      function_store_fd(fi, fd);
      return 0;
    }
  }
}

// function_fstat
// file function.c line 412
static signed int function_fstat(const char *path, struct stat *stbuf, struct fuse_file_info *fi)
{
  signed int i;
  signed int count;
  struct smbitem *dir;
  struct smb_conn_file *fd;
  (void)path;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_fstat", path);
  }

  fd=function_get_fd(fi);
  signed int *return_value___errno_location_3;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
    if(fd == (struct smb_conn_file *)-1)
    {
      for( ; (signed int)*path == 47; path = path + 1l)
        ;
      count = 2;
      dir=smbitem_getdir(path);
      if(dir == ((struct smbitem *)NULL))
        return -9;

      i = 0;
      for( ; !(i >= dir->_anon0._anon1.child_cnt); i = i + 1)
        if((signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_HOST || (signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
          count = count + 1;

      smbitem_release_dir(dir);
      memset((void *)stbuf, 0, sizeof(struct stat) /*144ul*/ );
      stbuf->st_mode = (unsigned int)0040777;
      stbuf->st_nlink = (unsigned long int)count;
      stbuf->st_uid = (unsigned int)0;
      stbuf->st_gid = (unsigned int)0;
      stbuf->st_size = (signed long int)0;
      stbuf->st_blksize = (signed long int)4096;
      return 0;
    }

    else
    {
      signed int return_value_samba_fstat_4;
      return_value_samba_fstat_4=samba_fstat(fd, stbuf);
      if(!(return_value_samba_fstat_4 == 0))
      {
        return_value___errno_location_3=__errno_location();
        return -(*return_value___errno_location_3);
      }

      else
        return 0;
    }
}

// function_ftruncate
// file function.c line 454
static signed int function_ftruncate(const char *path, signed long int size, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %lld)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_ftruncate", path, (signed long long int)size);
  }

  signed int *return_value___errno_location_3;
  if(!(size >= 0l))
    return -22;

  else
  {
    fd=function_get_fd(fi);
    if(fd == ((struct smb_conn_file *)NULL))
      return -9;

    else
    {
      signed int return_value_samba_ftruncate_4;
      return_value_samba_ftruncate_4=samba_ftruncate(fd, size);
      if(!(return_value_samba_ftruncate_4 == 0))
      {
        return_value___errno_location_3=__errno_location();
        return -(*return_value___errno_location_3);
      }

      else
        return 0;
    }
  }
}

// function_get_dollar_share_visibility
// file function.c line 56
static inline signed int function_get_dollar_share_visibility(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&function_show_dollar_shares, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// function_get_fd
// file function.c line 75
static inline struct smb_conn_file * function_get_fd(struct fuse_file_info *fi)
{
  return (struct smb_conn_file *)fi->fh;
}

// function_get_free_space_size
// file function.c line 36
static signed int function_get_free_space_size(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&function_free_space_size, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// function_get_hidden_hosts_visibility
// file function.c line 66
static inline signed int function_get_hidden_hosts_visibility(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&function_show_hidden_hosts, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// function_get_quiet_flag
// file function.c line 46
static inline signed int function_get_quiet_flag(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&function_quiet_flag, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// function_getxattr
// file function.c line 499
static signed int function_getxattr(const char *path, const char *name, char *value, unsigned long int size)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, name=%s, size=%zd)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_getxattr", path, name, size);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_5;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -95;

  else
  {
    signed int return_value_function_check_xattr_name_4;
    return_value_function_check_xattr_name_4=function_check_xattr_name(name);
    if(return_value_function_check_xattr_name_4 == 0)
      return -95;

    else
    {
      signed int return_value_samba_getxattr_6;
      return_value_samba_getxattr_6=samba_getxattr(path, name, (void *)value, size);
      if(!(return_value_samba_getxattr_6 == 0))
      {
        return_value___errno_location_5=__errno_location();
        return -(*return_value___errno_location_5);
      }

      else
        return 0;
    }
  }
}

// function_listxattr
// file function.c line 509
static signed int function_listxattr(const char *path, char *list, unsigned long int size)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, size=%zd)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_listxattr", path, size);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -95;

  else
  {
    signed int return_value_samba_listxattr_5;
    return_value_samba_listxattr_5=samba_listxattr(path, list, size);
    if(!(return_value_samba_listxattr_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_mkdir
// file function.c line 330
static signed int function_mkdir(const char *path, unsigned int mode)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_mkdir", path, mode);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    signed int return_value_samba_mkdir_5;
    return_value_samba_mkdir_5=samba_mkdir(path, mode);
    if(!(return_value_samba_mkdir_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_mknod
// file function.c line 532
static signed int function_mknod(const char *path, unsigned int mode, unsigned long int rdev)
{
  struct smb_conn_file *fd;
  (void)rdev;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_mknod", path, mode);
  }

  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_5;
  if(!((61440u & mode) == 32768u))
    return -1;

  else
  {
    enum smbitem_path_t return_value_smbitem_what_is_3;
    return_value_smbitem_what_is_3=smbitem_what_is(path);
    if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
      return -22;

    else
    {
      fd=samba_creat(path, mode);
      if(fd == ((struct smb_conn_file *)NULL))
      {
        return_value___errno_location_4=__errno_location();
        return -(*return_value___errno_location_4);
      }

      else
      {
        signed int return_value_samba_close_6;
        return_value_samba_close_6=samba_close(fd);
        if(!(return_value_samba_close_6 == 0))
        {
          return_value___errno_location_5=__errno_location();
          return -(*return_value___errno_location_5);
        }

        else
          return 0;
      }
    }
  }
}

// function_open
// file function.c line 83
static signed int function_open(const char *path, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, flags=%o, fh=%llx)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_open", path, fi->flags, (signed long long int)fi->fh);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    fd=samba_open(path, fi->flags, (unsigned int)0777);
    if(fd == ((struct smb_conn_file *)NULL))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
    {
      function_store_fd(fi, fd);
      return 0;
    }
  }
}

// function_opendir
// file function.c line 160
static signed int function_opendir(const char *path, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, flags=%o, fh=%llx)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_opendir", path, fi->flags, (signed long long int)fi->fh);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  switch((signed int)return_value_smbitem_what_is_3)
  {
    case SMBITEM_SMBNETFS_DIR:
    {
      function_store_fd(fi, (struct smb_conn_file *)-1);
      return 0;
    }
    case SMBITEM_SMB_NAME:

    case SMBITEM_SMB_SHARE:

    case SMBITEM_SMB_SHARE_ITEM:
    {
      fd=samba_opendir(path);
      if(fd == ((struct smb_conn_file *)NULL))
      {
        return_value___errno_location_4=__errno_location();
        return -(*return_value___errno_location_4);
      }

      function_store_fd(fi, fd);
      return 0;
    }
    default:
      return -20;
  }
}

// function_read
// file function.c line 107
static signed int function_read(const char *path, char *buf, unsigned long int size, signed long int offset, struct fuse_file_info *fi)
{
  signed int result;
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %zd, fh=%llx, offset=%lld, flags=%o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_read", path, size, (signed long long int)fi->fh, (signed long long int)offset, fi->flags);
  }

  fd=function_get_fd(fi);
  signed int *return_value___errno_location_4;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
  {
    signed long int return_value_samba_read_3;
    return_value_samba_read_3=samba_read(fd, offset, (void *)buf, size);
    result = (signed int)return_value_samba_read_3;
    if((signed long int)result == -1l)
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return result;
  }
}

// function_readdir
// file function.c line 191
static signed int function_readdir(const char *path, void *buf, signed int (*filler)(void *, const char *, struct stat *, signed long int), signed long int offset, struct fuse_file_info *fi)
{
  struct smb_conn_file *fd;
  signed int error;
  signed int rec_cnt;
  struct stat st;
  (void)offset;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_readdir", path);
  }

  memset((void *)&st, 0, sizeof(struct stat) /*144ul*/ );
  fd=function_get_fd(fi);
  signed int return_value_1;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_7;
  unsigned long int return_value_strlen_9;
  signed int return_value_function_get_dollar_share_visibility_8;
  signed int return_value_5;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
  {
    if(fd == (struct smb_conn_file *)-1)
    {
      signed int i;
      signed int show_hidden_hosts;
      struct smbitem *dir;
      for( ; (signed int)*path == 47; path = path + 1l)
        ;
      dir=smbitem_getdir(path);
      if(dir == ((struct smbitem *)NULL))
        return -9;

      error = 22;
      st.st_mode = (unsigned int)0040000;
      signed int return_value;
      return_value=filler(buf, ".", &st, (signed long int)0);
      if(return_value == 0)
      {
        return_value_1=filler(buf, "..", &st, (signed long int)0);
        if(return_value_1 == 0)
        {
          show_hidden_hosts=function_get_hidden_hosts_visibility();
          i = 0;
          if(!(i >= dir->_anon0._anon1.child_cnt))
          {
            if((signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
            {
              st.st_mode = (unsigned int)0040000;
              st.st_mode = (unsigned int)0040000;
              st.st_mode = (unsigned int)0120000;
            }

            signed int return_value_2;
            return_value_2=filler(buf, dir->_anon0._anon1.childs[(signed long int)i]->name, &st, (signed long int)0);
            i = i + 1;
          }

          error = 0;
        }

      }


    error0:
      ;
      smbitem_release_dir(dir);
      return -error;
    }

    rec_cnt = 0;
    for( ; (signed int)*path == 47; path = path + 1l)
      ;
    while((_Bool)1)
    {
      signed int count;
      char readdir_buf[4096l];
      char name[1024l];
      char link[1024l];
      struct smb_conn_dirent_rec *rec;
      signed long int return_value_samba_readdir_3;
      return_value_samba_readdir_3=samba_readdir(fd, (void *)readdir_buf, sizeof(char [4096l]) /*4096ul*/ );
      count = (signed int)return_value_samba_readdir_3;
      if(count == 0)
        break;

      if(!(count >= 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        error = *return_value___errno_location_4;
        goto end;
      }

      rec = (struct smb_conn_dirent_rec *)readdir_buf;
      for( ; count >= (signed int)sizeof(struct smb_conn_dirent_rec) /*260*/ ; count = count - (signed int)sizeof(struct smb_conn_dirent_rec) /*260ul*/ )
      {
        signed int return_value_strcmp_5;
        return_value_strcmp_5=strcmp(rec->d_name, "");
        if(!(return_value_strcmp_5 == 0))
        {
          return_value_strcmp_6=strcmp(rec->d_name, ".");
          if(!(return_value_strcmp_6 == 0))
          {
            return_value_strcmp_7=strcmp(rec->d_name, "..");
            if(!(return_value_strcmp_7 == 0))
            {
              switch(rec->smbc_type)
              {
                case (unsigned int)1:
                {
                  error = 9;
                  goto end;
                }
                case (unsigned int)2:
                {
                  st.st_mode = (unsigned int)0040000;
                  snprintf(name, sizeof(char [1024l]) /*1024ul*/ , "%s/%s", path, (const void *)rec->d_name);
                  snprintf(link, sizeof(char [1024l]) /*1024ul*/ , "../%s", (const void *)rec->d_name);
                  smbitem_mkgroup(path, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
                  smbitem_mkhost(rec->d_name, path, 1, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
                  smbitem_mklink(name, link, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
                  break;
                }
                case (unsigned int)3:
                {
                  st.st_mode = (unsigned int)0040000;
                  return_value_strlen_9=strlen(rec->d_name);
                  if((signed int)rec->d_name[-1l + (signed long int)return_value_strlen_9] == 36)
                  {
                    return_value_function_get_dollar_share_visibility_8=function_get_dollar_share_visibility();
                    if(return_value_function_get_dollar_share_visibility_8 == 0)
                      goto next_record;

                  }

                  break;
                }
                case (unsigned int)7:
                {
                  st.st_mode = (unsigned int)0040000;
                  break;
                }
                case (unsigned int)8:
                {
                  st.st_mode = (unsigned int)0100000;
                  break;
                }
                default:
                  goto next_record;
              }
              if(rec_cnt == 0)
              {
                struct stat function_readdir__1__3__2__1__2__st;
                error = 22;
                memset((void *)&function_readdir__1__3__2__1__2__st, 0, sizeof(struct stat) /*144ul*/ );
                function_readdir__1__3__2__1__2__st.st_mode = (unsigned int)0040000;
                signed int return_value_3;
                return_value_3=filler(buf, ".", &function_readdir__1__3__2__1__2__st, (signed long int)0);
                signed int return_value_4;
                return_value_4=filler(buf, "..", &function_readdir__1__3__2__1__2__st, (signed long int)0);
                rec_cnt = rec_cnt + 2;
              }

              return_value_5=filler(buf, rec->d_name, &st, (signed long int)0);
              if(!(return_value_5 == 0))
                error = 22;

              rec_cnt = rec_cnt + 1;
            }

          }

        }


      next_record:
        ;
        rec = rec + 1l;
      }
    }
    if(rec_cnt == 0)
    {
      error = 22;
      st.st_mode = (unsigned int)0040000;
      signed int return_value_6;
      return_value_6=filler(buf, ".", &st, (signed long int)0);
      signed int return_value_7;
      return_value_7=filler(buf, "..", &st, (signed long int)0);
      rec_cnt = rec_cnt + 2;
    }

    error = 0;

  end:
    ;
    return -error;
  }
}

// function_readlink
// file function.c line 525
static signed int function_readlink(const char *path, char *buf, unsigned long int size)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %zd)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_readlink", path, size);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMBNETFS_LINK))
    return -22;

  else
  {
    signed int return_value_smbitem_readlink_4;
    return_value_smbitem_readlink_4=smbitem_readlink(path, buf, size);
    if(!(return_value_smbitem_readlink_4 == 0))
      return -22;

    else
      return 0;
  }
}

// function_removexattr
// file function.c line 517
static signed int function_removexattr(const char *path, const char *name)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, name=%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_removexattr", path, name);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_5;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -95;

  else
  {
    signed int return_value_function_check_xattr_name_4;
    return_value_function_check_xattr_name_4=function_check_xattr_name(name);
    if(return_value_function_check_xattr_name_4 == 0)
      return -95;

    else
    {
      signed int return_value_samba_removexattr_6;
      return_value_samba_removexattr_6=samba_removexattr(path, name);
      if(!(return_value_samba_removexattr_6 == 0))
      {
        return_value___errno_location_5=__errno_location();
        return -(*return_value___errno_location_5);
      }

      else
        return 0;
    }
  }
}

// function_rename
// file function.c line 152
static signed int function_rename(const char *from, const char *to)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_rename", from, to);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(from);
  signed int *return_value___errno_location_5;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    enum smbitem_path_t return_value_smbitem_what_is_4;
    return_value_smbitem_what_is_4=smbitem_what_is(to);
    if(!((signed int)return_value_smbitem_what_is_4 == SMBITEM_SMB_SHARE_ITEM))
      return -22;

    else
    {
      signed int return_value_samba_rename_6;
      return_value_samba_rename_6=samba_rename(from, to);
      if(!(return_value_samba_rename_6 == 0))
      {
        return_value___errno_location_5=__errno_location();
        return -(*return_value___errno_location_5);
      }

      else
        return 0;
    }
  }
}

// function_rmdir
// file function.c line 337
static signed int function_rmdir(const char *path)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_rmdir", path);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    signed int return_value_samba_rmdir_5;
    return_value_samba_rmdir_5=samba_rmdir(path);
    if(!(return_value_samba_rmdir_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_set_dollar_share_visibility
// file function.c line 50
signed int function_set_dollar_share_visibility(signed int flag)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: flag=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_set_dollar_share_visibility", flag);
  }

  __atomic_store_4(&function_show_dollar_shares, flag, 5);
  return 1;
}

// function_set_free_space_size
// file function.c line 30
signed int function_set_free_space_size(signed int blocks_count)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: blocks_count=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_set_free_space_size", blocks_count);
  }

  __atomic_store_4(&function_free_space_size, blocks_count, 5);
  return 1;
}

// function_set_hidden_hosts_visibility
// file function.c line 60
signed int function_set_hidden_hosts_visibility(signed int flag)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: flag=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_set_hidden_hosts_visibility", flag);
  }

  __atomic_store_4(&function_show_hidden_hosts, flag, 5);
  return 1;
}

// function_set_quiet_flag
// file function.c line 40
signed int function_set_quiet_flag(signed int flag)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: flag=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_set_quiet_flag", flag);
  }

  __atomic_store_4(&function_quiet_flag, flag, 5);
  return 1;
}

// function_setxattr
// file function.c line 488
static signed int function_setxattr(const char *path, const char *name, const char *value, unsigned long int size, signed int flags)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, name=%s, value=%s, size=%zd, flags=%o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_setxattr", path, name, value, size, flags);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_5;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -95;

  else
  {
    signed int return_value_function_check_xattr_name_4;
    return_value_function_check_xattr_name_4=function_check_xattr_name(name);
    if(return_value_function_check_xattr_name_4 == 0)
      return -95;

    else
    {
      signed int return_value_samba_setxattr_6;
      return_value_samba_setxattr_6=samba_setxattr(path, name, (const void *)value, size, flags);
      if(!(return_value_samba_setxattr_6 == 0))
      {
        return_value___errno_location_5=__errno_location();
        return -(*return_value___errno_location_5);
      }

      else
        return 0;
    }
  }
}

// function_stat
// file function.c line 344
static signed int function_stat(const char *path, struct stat *stbuf)
{
  signed int i;
  signed int count;
  unsigned long int len;
  struct smbitem *dir;
  char buf[2048l];
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_stat", path);
  }

  signed int return_value_stat_workaround_is_name_ignored_3;
  return_value_stat_workaround_is_name_ignored_3=stat_workaround_is_name_ignored(path);
  signed int return_value_common_get_smbnetfs_debug_level_6;
  signed int return_value_smbitem_readlink_7;
  signed int return_value_samba_stat_9;
  signed int *return_value___errno_location_8;
  if(!(return_value_stat_workaround_is_name_ignored_3 == 0))
    return -2;

  else
  {
    enum smbitem_path_t return_value_smbitem_what_is_4;
    return_value_smbitem_what_is_4=smbitem_what_is(path);
    switch((signed int)return_value_smbitem_what_is_4)
    {
      case SMBITEM_SMBNETFS_DIR:
      {
        for( ; (signed int)*path == 47; path = path + 1l)
          ;
        count = 2;
        dir=smbitem_getdir(path);
        if(dir == ((struct smbitem *)NULL))
          return -22;

        i = 0;
        for( ; !(i >= dir->_anon0._anon1.child_cnt); i = i + 1)
          if((signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_HOST || (signed int)dir->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
            count = count + 1;

        smbitem_release_dir(dir);
        memset((void *)stbuf, 0, sizeof(struct stat) /*144ul*/ );
        stbuf->st_mode = (unsigned int)0040777;
        stbuf->st_nlink = (unsigned long int)count;
        stbuf->st_uid = (unsigned int)0;
        stbuf->st_gid = (unsigned int)0;
        stbuf->st_size = (signed long int)0;
        stbuf->st_blksize = (signed long int)4096;
        return 0;
      }
      case SMBITEM_SMBNETFS_LINK:
      {
        return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level_link9();
        if(return_value_common_get_smbnetfs_debug_level_6 >= 5)
        {
          struct timeval function_stat__1__2__2____now;
          gettimeofday(&function_stat__1__2__2____now, (struct timezone *)(void *)0);
          char function_stat__1__2__2____tstamp[20l];
          struct tm function_stat__1__2__2____tm;
          localtime_r(&function_stat__1__2__2____now.tv_sec, &function_stat__1__2__2____tm);
          strftime(function_stat__1__2__2____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &function_stat__1__2__2____tm);
          signed int return_value_getpid_5;
          return_value_getpid_5=getpid();
          common_debug_print("%.19s.%03d %d->%s: link:(%s)\n", (const void *)function_stat__1__2__2____tstamp, (signed int)(function_stat__1__2__2____now.tv_usec / (signed long int)1000), return_value_getpid_5, (const void *)"function_stat", path);
        }

        return_value_smbitem_readlink_7=smbitem_readlink(path, buf, sizeof(char [2048l]) /*2048ul*/ );
        if(!(return_value_smbitem_readlink_7 == 0))
          return -22;

        len=strlen(buf);
        memset((void *)stbuf, 0, sizeof(struct stat) /*144ul*/ );
        stbuf->st_mode = (unsigned int)0120777;
        stbuf->st_nlink = (unsigned long int)1;
        stbuf->st_uid = (unsigned int)0;
        stbuf->st_gid = (unsigned int)0;
        stbuf->st_size = (signed long int)len;
        stbuf->st_blksize = (signed long int)4096;
        return 0;
      }
      case SMBITEM_SMB_NAME:

      case SMBITEM_SMB_SHARE:
      {
        memset((void *)stbuf, 0, sizeof(struct stat) /*144ul*/ );
        stbuf->st_mode = (unsigned int)0040777;
        stbuf->st_nlink = (unsigned long int)2;
        stbuf->st_uid = (unsigned int)0;
        stbuf->st_gid = (unsigned int)0;
        stbuf->st_size = (signed long int)0;
        stbuf->st_blksize = (signed long int)4096;
        return 0;
      }
      case SMBITEM_SMB_SHARE_ITEM:
      {
        return_value_samba_stat_9=samba_stat(path, stbuf);
        if(!(return_value_samba_stat_9 == 0))
        {
          return_value___errno_location_8=__errno_location();
          return -(*return_value___errno_location_8);
        }

        return 0;
      }
      default:
        return -22;
    }
  }
}

// function_statfs
// file function.c line 571
static signed int function_statfs(const char *path, struct statvfs *stbuf)
{
  signed int free_space_blocks;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_statfs", path);
  }

  free_space_blocks=function_get_free_space_size();
  memset((void *)stbuf, 0, sizeof(struct statvfs) /*112ul*/ );
  stbuf->f_bsize = (unsigned long int)4096;
  stbuf->f_frsize = (unsigned long int)4096;
  if(free_space_blocks >= 1)
  {
    stbuf->f_blocks = (unsigned long int)free_space_blocks;
    stbuf->f_bfree = (unsigned long int)free_space_blocks;
    stbuf->f_bavail = (unsigned long int)free_space_blocks;
    stbuf->f_ffree = (unsigned long int)32768;
    stbuf->f_favail = (unsigned long int)32768;
  }

  stbuf->f_namemax = (unsigned long int)4096;
  return 0;
}

// function_store_fd
// file function.c line 79
static inline void function_store_fd(struct fuse_file_info *fi, struct smb_conn_file *fd)
{
  fi->fh = (unsigned long int)fd;
}

// function_truncate
// file function.c line 555
static signed int function_truncate(const char *path, signed long int size)
{
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %lld)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_truncate", path, (signed long long int)size);
  }

  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_7;
  if(!(size >= 0l))
    return -22;

  else
  {
    enum smbitem_path_t return_value_smbitem_what_is_3;
    return_value_smbitem_what_is_3=smbitem_what_is(path);
    if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
      return -22;

    else
    {
      fd=samba_open(path, 02, (unsigned int)0777);
      if(fd == ((struct smb_conn_file *)NULL))
      {
        return_value___errno_location_4=__errno_location();
        return -(*return_value___errno_location_4);
      }

      else
      {
        signed int return_value_samba_ftruncate_6;
        return_value_samba_ftruncate_6=samba_ftruncate(fd, size);
        if(!(return_value_samba_ftruncate_6 == 0))
        {
          signed int error;
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          error = *return_value___errno_location_5;
          samba_close(fd);
          return -error;
        }

        signed int return_value_samba_close_8;
        return_value_samba_close_8=samba_close(fd);
        if(!(return_value_samba_close_8 == 0))
        {
          return_value___errno_location_7=__errno_location();
          return -(*return_value___errno_location_7);
        }

        else
          return 0;
      }
    }
  }
}

// function_unlink
// file function.c line 145
static signed int function_unlink(const char *path)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_unlink", path);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    signed int return_value_samba_unlink_5;
    return_value_samba_unlink_5=samba_unlink(path);
    if(!(return_value_samba_unlink_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_utimes
// file function.c line 472
static signed int function_utimes(const char *path, struct utimbuf *buffer)
{
  struct timeval tbuf[2l];
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %u)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_utimes", path, (unsigned int)buffer->modtime);
  }

  enum smbitem_path_t return_value_smbitem_what_is_3;
  return_value_smbitem_what_is_3=smbitem_what_is(path);
  signed int *return_value___errno_location_4;
  if(!((signed int)return_value_smbitem_what_is_3 == SMBITEM_SMB_SHARE_ITEM))
    return -22;

  else
  {
    tbuf[(signed long int)0].tv_sec = buffer->actime;
    tbuf[(signed long int)0].tv_usec = (signed long int)0;
    tbuf[(signed long int)1].tv_sec = buffer->modtime;
    tbuf[(signed long int)1].tv_usec = (signed long int)0;
    signed int return_value_samba_utimes_5;
    return_value_samba_utimes_5=samba_utimes(path, tbuf);
    if(!(return_value_samba_utimes_5 == 0))
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return 0;
  }
}

// function_write
// file function.c line 121
static signed int function_write(const char *path, const char *buf, unsigned long int size, signed long int offset, struct fuse_file_info *fi)
{
  signed int result;
  struct smb_conn_file *fd;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link9();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: (%s, %zd, fh=%llx, offset=%lld, flags=%o)\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"function_write", path, size, (signed long long int)fi->fh, (signed long long int)offset, fi->flags);
  }

  fd=function_get_fd(fi);
  signed int *return_value___errno_location_4;
  if(fd == ((struct smb_conn_file *)NULL))
    return -9;

  else
  {
    signed long int return_value_samba_write_3;
    return_value_samba_write_3=samba_write(fd, offset, (void *)(char *)buf, size);
    result = (signed int)return_value_samba_write_3;
    if((signed long int)result == -1l)
    {
      return_value___errno_location_4=__errno_location();
      return -(*return_value___errno_location_4);
    }

    else
      return result;
  }
}

// get_default_rw_block_size
// file main.c line 92
static inline unsigned long int get_default_rw_block_size(void)
{
  const char *return_value_smbc_version_1;
  return_value_smbc_version_1=smbc_version();
  signed int return_value_strncmp_2;
  return_value_strncmp_2=strncmp(return_value_smbc_version_1, "3.0.", (unsigned long int)4);
  return (unsigned long int)(return_value_strncmp_2 == 0 ? 48 : 128);
}

// gnome_keyring_done
// file auth-gnome-keyring.c line 145
void gnome_keyring_done(void)
{
  if(!((signed int)gnome_keyring == GNOME_KEYRING_NOT_AVAILABLE))
  {
    if(!(loop == ((struct _GMainLoop *)NULL)))
    {
      g_main_loop_unref(loop);
      loop = (struct _GMainLoop *)(void *)0;
    }

    gnome_keyring = (enum gnome_keyring_status)GNOME_KEYRING_NOT_AVAILABLE;
  }

}

// gnome_keyring_enable
// file auth-gnome-keyring.c line 163
signed int gnome_keyring_enable(signed int state)
{
  signed int ret;
  pthread_mutex_lock(&m_auth_gnome);
  if((signed int)gnome_keyring == GNOME_KEYRING_DISABLED || (signed int)gnome_keyring == GNOME_KEYRING_ENABLED)
  {
    gnome_keyring = (enum gnome_keyring_status)(state != 0 ? GNOME_KEYRING_ENABLED : GNOME_KEYRING_DISABLED);
    ret = 0;
    goto __CPROVER_DUMP_L3;
  }

  ret = -1;

__CPROVER_DUMP_L3:
  ;
  pthread_mutex_unlock(&m_auth_gnome);
  return ret;
}

// gnome_keyring_free_authinfo
// file auth-gnome-keyring.c line 214
void gnome_keyring_free_authinfo(struct gnome_keyring_authinfo *info)
{
  free((void *)info);
}

// gnome_keyring_get_authinfo
// file auth-gnome-keyring.c line 289
struct gnome_keyring_authinfo * gnome_keyring_get_authinfo(const char *domain, const char *server, const char *share)
{
  void *request;
  struct req_data req_data;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link3();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 10)
  {
    struct timeval gnome_keyring_get_authinfo__1__1____now;
    gettimeofday(&gnome_keyring_get_authinfo__1__1____now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&gnome_keyring_get_authinfo__1__1____now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: domain=%s, server=%s, share=%s\n", (const void *)__tstamp, (signed int)(gnome_keyring_get_authinfo__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"gnome_keyring_get_authinfo", domain, server, share);
  }

  _Bool tmp_if_expr_3;
  if(server == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*server == 0 ? (_Bool)1 : (_Bool)0;
  struct _GMainContext *return_value_g_main_loop_get_context_6;
  signed int return_value_g_main_context_acquire_7;
  signed int return_value_common_get_smbnetfs_debug_level_5;
  struct _GMainContext *return_value_g_main_loop_get_context_8;
  if(tmp_if_expr_3)
    return (struct gnome_keyring_authinfo *)(void *)0;

  else
  {
    if(domain == ((const char *)NULL))
      domain = "";

    if(share == ((const char *)NULL))
      share = "";

    req_data.domain = domain;
    req_data.server = server;
    req_data.share = share;
    req_data.info = (struct gnome_keyring_authinfo *)(void *)0;
    pthread_mutex_lock(&m_auth_gnome);
    if((signed int)gnome_keyring == GNOME_KEYRING_ENABLED)
    {
      if(!(req_timeout == ((struct req_timeout *)NULL)))
      {
        return_value_g_main_loop_get_context_6=g_main_loop_get_context(loop);
        return_value_g_main_context_acquire_7=g_main_context_acquire(return_value_g_main_loop_get_context_6);
        if(return_value_g_main_context_acquire_7 == 0)
        {
          return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link3();
          if(return_value_common_get_smbnetfs_debug_level_5 >= 10)
          {
            struct timeval __now;
            gettimeofday(&__now, (struct timezone *)(void *)0);
            char gnome_keyring_get_authinfo__1__2__1____tstamp[20l];
            struct tm gnome_keyring_get_authinfo__1__2__1____tm;
            localtime_r(&__now.tv_sec, &gnome_keyring_get_authinfo__1__2__1____tm);
            strftime(gnome_keyring_get_authinfo__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &gnome_keyring_get_authinfo__1__2__1____tm);
            signed int return_value_getpid_4;
            return_value_getpid_4=getpid();
            common_debug_print("%.19s.%03d %d->%s: can't acquire GMainContext\n", (const void *)gnome_keyring_get_authinfo__1__2__1____tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"gnome_keyring_get_authinfo");
          }

          goto end;
        }

        request_timeout_init(req_timeout, max_req_timeout);
        request=gnome_keyring_find_network_password((const char *)(void *)0, (const char *)(void *)0, (const char *)(void *)0, (const char *)(void *)0, "smb", (const char *)(void *)0, (unsigned int)0, gnome_keyring_get_list_callback, (void *)&req_data, (void (*)(void *))(void *)0);
        g_main_loop_run(loop);
        if(req_timeout->expired == 1)
        {
          gnome_keyring_cancel_request(request);
          if(!(req_data.info == ((struct gnome_keyring_authinfo *)NULL)))
          {
            gnome_keyring_free_authinfo(req_data.info);
            req_data.info = (struct gnome_keyring_authinfo *)(void *)0;
          }

        }

        return_value_g_main_loop_get_context_8=g_main_loop_get_context(loop);
        g_main_context_release(return_value_g_main_loop_get_context_8);
      }

    }


  end:
    ;
    pthread_mutex_unlock(&m_auth_gnome);
    return req_data.info;
  }
}

// gnome_keyring_get_list_callback
// file auth-gnome-keyring.c line 218
static void gnome_keyring_get_list_callback(enum anonymous_8 result, struct _GList *list, void *data)
{
  struct _GList *elem;
  struct req_data *req = (struct req_data *)data;
  signed int return_value_strcasecmp_2;
  signed int return_value_strcasecmp_1;
  _Bool tmp_if_expr_4;
  signed int return_value_strcasecmp_3;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  signed int return_value_strcasecmp_5;
  _Bool tmp_if_expr_9;
  signed int return_value_strcasecmp_8;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_10;
  struct _GList *tmp_if_expr_12;
  if(!((signed int)result == GNOME_KEYRING_RESULT_OK))
    g_main_loop_quit(loop);

  else
  {
    elem=g_list_first(list);
    while(!(elem == ((struct _GList *)NULL)))
    {
      struct anonymous_9 *p = (struct anonymous_9 *)elem->data;
      if(!(req->server == ((const char *)NULL)))
      {
        if(!(req->server == ((const char *)NULL)))
        {
          if(!(req->share == ((const char *)NULL)))
          {
            if(!(req->share == ((const char *)NULL)))
            {
              if(!(p->server == ((char *)NULL)))
              {
                if(!((signed int)*p->server == 0))
                {
                  if(!(p->object == ((char *)NULL)))
                  {
                    if(!((signed int)*p->object == 0))
                    {
                      return_value_strcasecmp_2=strcasecmp(p->server, req->server);
                      if(return_value_strcasecmp_2 == 0)
                      {
                        return_value_strcasecmp_1=strcasecmp(p->object, req->share);
                        if(return_value_strcasecmp_1 == 0)
                        {
                          req->info=gnome_keyring_update_authinfo(req->info, p->domain, p->user, p->password, 5);
                          break;
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

      if(!(req->server == ((const char *)NULL)))
      {
        if(req->server == ((const char *)NULL))
          goto __CPROVER_DUMP_L6;

        if(p->server == ((char *)NULL))
          goto __CPROVER_DUMP_L6;

        if((signed int)*p->server == 0)
          goto __CPROVER_DUMP_L6;

        if(p->object == ((char *)NULL))
          tmp_if_expr_4 = (_Bool)1;

        else

        if(!tmp_if_expr_4)
          goto __CPROVER_DUMP_L6;

        return_value_strcasecmp_3=strcasecmp(p->server, req->server);
        if(!(return_value_strcasecmp_3 == 0))
          goto __CPROVER_DUMP_L6;

        req->info=gnome_keyring_update_authinfo(req->info, p->domain, p->user, p->password, 4);
      }

      else
      {

      __CPROVER_DUMP_L6:
        ;
        if(!(req->domain == ((const char *)NULL)))
        {
          if(req->domain == ((const char *)NULL))
            goto __CPROVER_DUMP_L11;

          if(p->domain == ((char *)NULL))
            goto __CPROVER_DUMP_L11;

          if((signed int)*p->domain == 0)
            goto __CPROVER_DUMP_L11;

          if(p->server == ((char *)NULL))
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = (signed int)*p->server == 0 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_7)
            goto __CPROVER_DUMP_L11;

          if(p->object == ((char *)NULL))
            tmp_if_expr_6 = (_Bool)1;

          else

          if(!tmp_if_expr_6)
            goto __CPROVER_DUMP_L11;

          return_value_strcasecmp_5=strcasecmp(p->domain, req->domain);
          if(!(return_value_strcasecmp_5 == 0))
            goto __CPROVER_DUMP_L11;

          req->info=gnome_keyring_update_authinfo(req->info, p->domain, p->user, p->password, 3);
        }

        else
        {

        __CPROVER_DUMP_L11:
          ;
          if(!(req->domain == ((const char *)NULL)))
          {
            if(req->domain == ((const char *)NULL))
              goto __CPROVER_DUMP_L14;

            if(p->server == ((char *)NULL))
              goto __CPROVER_DUMP_L14;

            if((signed int)*p->server == 0)
              goto __CPROVER_DUMP_L14;

            if(p->object == ((char *)NULL))
              tmp_if_expr_9 = (_Bool)1;

            else

            if(!tmp_if_expr_9)
              goto __CPROVER_DUMP_L14;

            return_value_strcasecmp_8=strcasecmp(p->server, req->domain);
            if(!(return_value_strcasecmp_8 == 0))
              goto __CPROVER_DUMP_L14;

            req->info=gnome_keyring_update_authinfo(req->info, p->domain, p->user, p->password, 2);
          }

          else
          {

          __CPROVER_DUMP_L14:
            ;
            if(p->server == ((char *)NULL))
              tmp_if_expr_11 = (_Bool)1;

            else
              tmp_if_expr_11 = (signed int)*p->server == 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_11)
            {
              if(p->object == ((char *)NULL))
                tmp_if_expr_10 = (_Bool)1;

              else

              if(tmp_if_expr_10)
                req->info=gnome_keyring_update_authinfo(req->info, p->domain, p->user, p->password, 1);

            }

          }
        }
      }

    next:
      ;
      if(!(elem == ((struct _GList *)NULL)))
        tmp_if_expr_12 = ((struct _GList *)elem)->next;

      else
        tmp_if_expr_12 = (struct _GList *)(void *)0;
      elem = tmp_if_expr_12;
    }
    g_main_loop_quit(loop);
  }
}

// gnome_keyring_init
// file auth-gnome-keyring.c line 117
void gnome_keyring_init(void)
{
  struct _GSource *source;
  g_set_application_name("SMBNetFS");
  signed int return_value_gnome_keyring_is_available_1;
  return_value_gnome_keyring_is_available_1=gnome_keyring_is_available();
  struct _GMainContext *return_value_g_main_loop_get_context_2;
  signed int return_value_common_get_smbnetfs_debug_level_4;
  if(return_value_gnome_keyring_is_available_1 == 1)
  {
    loop=g_main_loop_new((struct _GMainContext *)(void *)0, 0);
    if(loop == ((struct _GMainLoop *)NULL))
      goto error;

    source=g_source_new(&req_timeout_func, (unsigned int)(sizeof(struct _GSource) /*96ul*/  + sizeof(struct req_timeout) /*24ul*/ ));
    if(source == ((struct _GSource *)NULL))
      goto error;

    req_timeout = &(*((struct req_timeout *)(void *)((unsigned char *)source + (signed long int)sizeof(struct _GSource) /*96ul*/ )));
    return_value_g_main_loop_get_context_2=g_main_loop_get_context(loop);
    g_source_attach(source, return_value_g_main_loop_get_context_2);
    gnome_keyring = (enum gnome_keyring_status)GNOME_KEYRING_ENABLED;
  }

  else
  {

  error:
    ;
    if(!(loop == ((struct _GMainLoop *)NULL)))
    {
      g_main_loop_unref(loop);
      loop = (struct _GMainLoop *)(void *)0;
    }

    gnome_keyring = (enum gnome_keyring_status)GNOME_KEYRING_NOT_AVAILABLE;
    return_value_common_get_smbnetfs_debug_level_4=common_get_smbnetfs_debug_level_link3();
    if(return_value_common_get_smbnetfs_debug_level_4 >= 1)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_3;
      return_value_getpid_3=getpid();
      common_debug_print("%.19s.%03d %d->%s: gnome-keyring is not available.\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_3, (const void *)"gnome_keyring_init");
    }

    goto __CPROVER_DUMP_L4;
  }

__CPROVER_DUMP_L4:
  ;
}

// gnome_keyring_set_request_timeout
// file auth-gnome-keyring.c line 154
signed int gnome_keyring_set_request_timeout(signed int timeout)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(timeout >= 1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link3();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: max_req_timeout=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"gnome_keyring_set_request_timeout", timeout);
    }

    pthread_mutex_lock(&m_auth_gnome);
    max_req_timeout = timeout;
    pthread_mutex_unlock(&m_auth_gnome);
    return 1;
  }
}

// gnome_keyring_update_authinfo
// file auth-gnome-keyring.c line 182
static struct gnome_keyring_authinfo * gnome_keyring_update_authinfo(struct gnome_keyring_authinfo *info, const char *domain, const char *user, const char *password, signed int suitability)
{
  if(domain == ((const char *)NULL))
    domain = "";

  _Bool tmp_if_expr_1;
  if(user == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*user == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return info;

  else
  {
    if(password == ((const char *)NULL))
      password = "";

    if(!(info == ((struct gnome_keyring_authinfo *)NULL)))
    {
      if(info->suitability >= suitability)
        return info;

      gnome_keyring_free_authinfo(info);
      info = (struct gnome_keyring_authinfo *)(void *)0;
    }

    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(domain);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(user);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(password);
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(struct gnome_keyring_authinfo) /*32ul*/  + return_value_strlen_2 + return_value_strlen_3 + return_value_strlen_4 + (unsigned long int)3);
    info = (struct gnome_keyring_authinfo *)return_value_malloc_5;
    if(info == ((struct gnome_keyring_authinfo *)NULL))
      return (struct gnome_keyring_authinfo *)(void *)0;

    else
    {
      info->domain = (char *)(info + (signed long int)1);
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(domain);
      info->user = info->domain + (signed long int)return_value_strlen_6 + (signed long int)1;
      unsigned long int return_value_strlen_7;
      return_value_strlen_7=strlen(user);
      info->password = info->user + (signed long int)return_value_strlen_7 + (signed long int)1;
      strcpy(info->domain, domain);
      strcpy(info->user, user);
      strcpy(info->password, password);
      info->suitability = suitability;
      return info;
    }
  }
}

// init_list
// file list.h line 92
static inline void init_list(struct __LIST *list)
{
  list->prev = list;
  list->next = list->prev;
}

// insert_to_list_before
// file list.h line 56
static inline void insert_to_list_before(struct __LIST *list, struct __LIST *elem, struct __LIST *new_elem)
{
  (void)list;
  _Bool tmp_if_expr_1;
  if(!(new_elem->next == ((struct __LIST *)NULL)))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = new_elem->prev != (struct __LIST *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    *((char *)(void *)0) = (char)0;

  new_elem->next = elem;
  new_elem->prev = elem->prev;
  elem->prev->next = new_elem;
  elem->prev = new_elem;
}

// is_list_empty
// file list.h line 84
static inline signed int is_list_empty(struct __LIST *list)
{
  return (signed int)(list == list->next);
}

// is_valid_list_elem
// file list.h line 88
static inline signed int is_valid_list_elem(struct __LIST *list, struct __LIST *elem)
{
  return (signed int)(elem != list);
}

// is_valid_list_elem_link1
// file list.h line 88
static inline signed int is_valid_list_elem_link1(struct __LIST *list_link1, struct __LIST *elem_link1)
{
  return (signed int)(elem_link1 != list_link1);
}

// is_valid_list_elem_link2
// file list.h line 88
static inline signed int is_valid_list_elem_link2(struct __LIST *list_link2, struct __LIST *elem_link2)
{
  return (signed int)(elem_link2 != list_link2);
}

// is_valid_list_elem_link3
// file list.h line 88
static inline signed int is_valid_list_elem_link3(struct __LIST *list_link3, struct __LIST *elem_link3)
{
  return (signed int)(elem_link3 != list_link3);
}

// is_valid_list_elem_link4
// file list.h line 88
static inline signed int is_valid_list_elem_link4(struct __LIST *list_link4, struct __LIST *elem_link4)
{
  return (signed int)(elem_link4 != list_link4);
}

// is_valid_list_elem_link5
// file list.h line 88
static inline signed int is_valid_list_elem_link5(struct __LIST *list_link5, struct __LIST *elem_link5)
{
  return (signed int)(elem_link5 != list_link5);
}

// last_list_elem
// file list.h line 20
static inline struct __LIST * last_list_elem(struct __LIST *list)
{
  return list->prev;
}

// last_list_elem_link1
// file list.h line 20
static inline struct __LIST * last_list_elem_link1(struct __LIST *list_link1)
{
  return list_link1->prev;
}

// main
// file main.c line 181
signed int main(signed int argc, char **argv)
{
  struct fuse_args args = { .argc=argc, .argv=argv, .allocated=0 };
  setlocale(6, "");
  check_samba_version();
  set_signal_reactions();
  reconfigure_set_default_login_and_configdir();
  gnome_keyring_init();
  smbitem_init();
  process_init();
  unsigned long int return_value_get_default_rw_block_size_1;
  return_value_get_default_rw_block_size_1=get_default_rw_block_size();
  samba_init((unsigned long int)1024 * return_value_get_default_rw_block_size_1);
  event_set_event_handler(&smb_oper);
  signed int return_value_fuse_opt_parse_2;
  return_value_fuse_opt_parse_2=fuse_opt_parse(&args, (void *)0, (struct fuse_opt *)(void *)0, smbnetfs_opt_proc);
  if(return_value_fuse_opt_parse_2 == -1)
  {
    fprintf(stderr, "Can't parse command line, please verify it.\n");
    exit(1);
  }

  reconfigure_read_config(0x01);
  samba_allocate_ctxs();
  fuse_main_real(args.argc, args.argv, &smb_oper, sizeof(struct fuse_operations) /*360ul*/ , (void *)0);
  samba_destroy_unused_ctxs();
  signed long int return_value_time_3;
  return_value_time_3=time((signed long int *)(void *)0);
  smbitem_delete_obsolete(return_value_time_3 + (signed long int)10, (enum smbitem_tree_t)SMBITEM_SAMBA_TREE);
  signed long int return_value_time_4;
  return_value_time_4=time((signed long int *)(void *)0);
  smbitem_delete_obsolete(return_value_time_4 + (signed long int)10, (enum smbitem_tree_t)SMBITEM_USER_TREE);
  signed long int return_value_time_5;
  return_value_time_5=time((signed long int *)(void *)0);
  auth_delete_obsolete(return_value_time_5 + (signed long int)10);
  smbitem_done();
  process_cleanup_from_zombies();
  gnome_keyring_done();
  return 0;
}

// neg_cache_check
// file neg_cache.c line 89
signed int neg_cache_check(const char *url)
{
  signed int result = 0;
  unsigned long int len = (unsigned long int)0;
  struct neg_cache *cache;
  for( ; (signed int)*url == 47; url = url + 1l)
    ;
  for( ; !((signed int)url[(signed long int)len] == 47); len = len + 1ul)
    if((signed int)url[(signed long int)len] == 0)
      break;

  if(len == 0ul)
    return 0;

  else
  {
    pthread_mutex_lock(&m_neg_cache);
    if(!(neg_cache_enabled == 0))
    {
      neg_cache_remove_outdate();
      cache=neg_cache_find_by_name(url, len);
      if(!(cache == ((struct neg_cache *)NULL)))
      {
        remove_from_list_link2(&neg_cache_usage_list, &cache->usage_entries);
        add_to_list_link1(&neg_cache_usage_list, &cache->usage_entries);
        result = cache->errno_value;
      }

    }


  end:
    ;
    pthread_mutex_unlock(&m_neg_cache);
    return result;
  }
}

// neg_cache_enable
// file neg_cache.c line 80
signed int neg_cache_enable(signed int status)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link5();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: status=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"neg_cache_enable", status);
  }

  pthread_mutex_lock(&m_neg_cache);
  neg_cache_enabled = status;
  if(status == 0)
    neg_cache_flush();

  pthread_mutex_unlock(&m_neg_cache);
  return 1;
}

// neg_cache_find_by_name
// file neg_cache.c line 49
static struct neg_cache * neg_cache_find_by_name(const char *name, unsigned long int len)
{
  struct __LIST *elem;
  struct neg_cache *cache;
  elem=first_list_elem_link2(&neg_cache_usage_list);
  signed int return_value_is_valid_list_elem_1;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link2(&neg_cache_usage_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    cache = (struct neg_cache *)((char *)elem - (signed long int)0ul);
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(cache->hostname, name, len);
    if(return_value_strncmp_2 == 0)
    {
      if((signed int)cache->hostname[(signed long int)len] == 0)
        return cache;

    }

    elem = elem->next;
  }
  while((_Bool)1);
  return (struct neg_cache *)(void *)0;
}

// neg_cache_flush
// file neg_cache.c line 149
void neg_cache_flush(void)
{
  struct __LIST *elem;
  struct neg_cache *cache;
  pthread_mutex_lock(&m_neg_cache);
  while((_Bool)1)
  {
    elem=first_list_elem_link2(&neg_cache_usage_list);
    signed int return_value_is_valid_list_elem_1;
    return_value_is_valid_list_elem_1=is_valid_list_elem_link2(&neg_cache_usage_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    cache = (struct neg_cache *)((char *)elem - (signed long int)0ul);
    remove_from_list_link2(&neg_cache_usage_list, &cache->usage_entries);
    remove_from_list_link2(&neg_cache_time_list, &cache->time_entries);
    free((void *)cache);
  }
  pthread_mutex_unlock(&m_neg_cache);
}

// neg_cache_remove_outdate
// file neg_cache.c line 63
static inline void neg_cache_remove_outdate(void)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  neg_cache_remove_outdate_tv(&tv);
}

// neg_cache_remove_outdate_tv
// file neg_cache.c line 27
static void neg_cache_remove_outdate_tv(struct timeval *tv)
{
  struct __LIST *elem;
  struct neg_cache *cache;
  struct timeval res;
  signed int tmp_if_expr_2;
  while((_Bool)1)
  {
    elem=last_list_elem(&neg_cache_time_list);
    signed int return_value_is_valid_list_elem_1;
    return_value_is_valid_list_elem_1=is_valid_list_elem_link2(&neg_cache_time_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    cache = (struct neg_cache *)((char *)elem - (signed long int)16ul);
    if(tv->tv_sec == cache->tv.tv_sec)
      tmp_if_expr_2 = (signed int)(tv->tv_usec < (&cache->tv)->tv_usec);

    else
      tmp_if_expr_2 = (signed int)(tv->tv_sec < (&cache->tv)->tv_sec);
    if(tmp_if_expr_2 == 0)
    {
      do
      {
        (&res)->tv_sec = tv->tv_sec - (&cache->tv)->tv_sec;
        (&res)->tv_usec = tv->tv_usec - (&cache->tv)->tv_usec;
        if(!(res.tv_usec >= 0l))
        {
          (&res)->tv_sec = (&res)->tv_sec - 1l;
          (&res)->tv_usec = (&res)->tv_usec + (signed long int)1000000;
        }

      }
      while((_Bool)0);
      if(!(1000l * res.tv_sec + res.tv_usec / 1000l >= (signed long int)neg_cache_timeout))
        break;

    }


  bad_time:
    ;
    remove_from_list_link2(&neg_cache_usage_list, &cache->usage_entries);
    remove_from_list_link2(&neg_cache_time_list, &cache->time_entries);
    free((void *)cache);
  }
}

// neg_cache_set_timeout
// file neg_cache.c line 70
signed int neg_cache_set_timeout(signed int timeout)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(timeout >= 1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link5();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: timeout=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"neg_cache_set_timeout", timeout);
    }

    pthread_mutex_lock(&m_neg_cache);
    neg_cache_timeout = timeout;
    neg_cache_remove_outdate();
    pthread_mutex_unlock(&m_neg_cache);
    return 1;
  }
}

// neg_cache_store
// file neg_cache.c line 112
signed int neg_cache_store(const char *url, signed int errno_value)
{
  signed int result = 0;
  unsigned long int len = (unsigned long int)0;
  struct neg_cache *cache;
  struct timeval tv;
  for( ; (signed int)*url == 47; url = url + 1l)
    ;
  for( ; !((signed int)url[(signed long int)len] == 47); len = len + 1ul)
    if((signed int)url[(signed long int)len] == 0)
      break;

  if(len == 0ul)
    return 0;

  else
  {
    pthread_mutex_lock(&m_neg_cache);
    if(!(neg_cache_enabled == 0))
    {
      gettimeofday(&tv, (struct timezone *)(void *)0);
      neg_cache_remove_outdate_tv(&tv);
      cache=neg_cache_find_by_name(url, len);
      if(!(cache == ((struct neg_cache *)NULL)))
      {
        remove_from_list_link2(&neg_cache_usage_list, &cache->usage_entries);
        remove_from_list_link2(&neg_cache_time_list, &cache->time_entries);
      }

      else
      {
        void *return_value_malloc_1;
        return_value_malloc_1=malloc(sizeof(struct neg_cache) /*56ul*/  + len);
        cache = (struct neg_cache *)return_value_malloc_1;
        if(cache == ((struct neg_cache *)NULL))
          goto end;

        memset((void *)cache, 0, sizeof(struct neg_cache) /*56ul*/  + len);
        strncpy(cache->hostname, url, len);
      }
      cache->tv = tv;
      cache->errno_value = errno_value;
      add_to_list_link1(&neg_cache_usage_list, &cache->usage_entries);
      add_to_list_link1(&neg_cache_time_list, &cache->time_entries);
      result = 1;
    }


  end:
    ;
    pthread_mutex_unlock(&m_neg_cache);
    return result;
  }
}

// print_help
// file main.c line 133
static void print_help(struct fuse_args *outargs)
{
  fprintf(stderr, "usage: %s mountpoint [options]\n\ngeneral options:\n    -o opt,[opt...]        mount options\n    -h   --help            print help\n    -V   --version         print version\n\nSMBNetFS options:\n%s\n", outargs->argv[(signed long int)0], smbnetfs_option_list);
  fuse_opt_add_arg(outargs, "-ho");
  fuse_main_real(outargs->argc, outargs->argv, &smb_oper, sizeof(struct fuse_operations) /*360ul*/ , (void *)0);
}

// process_cleanup_from_zombies
// file process.c line 276
void process_cleanup_from_zombies(void)
{
  signed int pid;
  struct __LIST *elem;
  struct process_rec *rec;
  pthread_mutex_lock(&m_process);
  signed int return_value_is_valid_list_elem_1;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  signed int return_value_common_get_smbnetfs_debug_level_5;
  while((_Bool)1)
  {
    pid=waitpid((signed int)-1, (signed int *)(void *)0, 1);
    if(!(pid >= 1))
      break;

    elem=first_list_elem_link1(&process_list);
    do
    {
      return_value_is_valid_list_elem_1=is_valid_list_elem_link1(&process_list, elem);
      if(return_value_is_valid_list_elem_1 == 0)
        break;

      rec = (struct process_rec *)((char *)elem - (signed long int)0ul);
      elem = elem->next;
      if(rec->child_pid == pid)
      {
        return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
        if(return_value_common_get_smbnetfs_debug_level_3 >= 6)
        {
          struct timeval __now;
          gettimeofday(&__now, (struct timezone *)(void *)0);
          char __tstamp[20l];
          struct tm __tm;
          localtime_r(&__now.tv_sec, &__tm);
          strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
          signed int return_value_getpid_2;
          return_value_getpid_2=getpid();
          common_debug_print("%.19s.%03d %d->%s: R.I.P. child with pid=%d, fd=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"process_cleanup_from_zombies", (signed int)rec->child_pid, rec->child_fd);
        }

        rec->child_pid = (signed int)-1;
        if(rec->child_fd == -1)
        {
          return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link4();
          if(return_value_common_get_smbnetfs_debug_level_5 >= 6)
          {
            struct timeval process_cleanup_from_zombies__1__1__1__1__2__1____now;
            gettimeofday(&process_cleanup_from_zombies__1__1__1__1__2__1____now, (struct timezone *)(void *)0);
            char process_cleanup_from_zombies__1__1__1__1__2__1____tstamp[20l];
            struct tm process_cleanup_from_zombies__1__1__1__1__2__1____tm;
            localtime_r(&process_cleanup_from_zombies__1__1__1__1__2__1____now.tv_sec, &process_cleanup_from_zombies__1__1__1__1__2__1____tm);
            strftime(process_cleanup_from_zombies__1__1__1__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_cleanup_from_zombies__1__1__1__1__2__1____tm);
            signed int return_value_getpid_4;
            return_value_getpid_4=getpid();
            common_debug_print("%.19s.%03d %d->%s: cleanup child record with pid=%d\n", (const void *)process_cleanup_from_zombies__1__1__1__1__2__1____tstamp, (signed int)(process_cleanup_from_zombies__1__1__1__1__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"process_cleanup_from_zombies", (signed int)pid);
          }

          remove_from_list_link1(&process_list, &rec->entries);
          free((void *)rec);
        }

        break;
      }

    }
    while((_Bool)1);
  }
  pthread_mutex_unlock(&m_process);
}

// process_disable_new_smb_conn_starting
// file process.c line 63
void process_disable_new_smb_conn_starting(void)
{
  signed int return_value_common_get_smbnetfs_debug_level_3;
  return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
  if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    common_debug_print("%.19s.%03d %d->%s: disable new process starting at %u\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"process_disable_new_smb_conn_starting", (unsigned int)return_value_time_2);
  }

  pthread_mutex_lock(&m_process);
  process_start_enabled = 0;
  pthread_mutex_unlock(&m_process);
}

// process_init
// file process.c line 38
signed int process_init(void)
{
  char *charset;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  signed int return_value_common_get_smbnetfs_debug_level_4;
  static signed int initialized = 0;
  if(initialized == 0)
  {
    charset=nl_langinfo(14);
    if(charset == ((char *)NULL))
    {
      return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_2 >= 0)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_1;
        return_value_getpid_1=getpid();
        common_debug_print("%.19s.%03d %d->%s: Can't find system charset, use utf-8 instead. Check your locale.\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"process_init");
      }

      charset = "UTF-8";
    }

    else
      initialized = 1;
    strncpy(process_system_charset, charset, (unsigned long int)64);
    process_system_charset[(signed long int)(64 - 1)] = (char)0;
    return_value_common_get_smbnetfs_debug_level_4=common_get_smbnetfs_debug_level_link4();
    if(return_value_common_get_smbnetfs_debug_level_4 >= 5)
    {
      struct timeval process_init__1__1__3____now;
      gettimeofday(&process_init__1__1__3____now, (struct timezone *)(void *)0);
      char process_init__1__1__3____tstamp[20l];
      struct tm process_init__1__1__3____tm;
      localtime_r(&process_init__1__1__3____now.tv_sec, &process_init__1__1__3____tm);
      strftime(process_init__1__1__3____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_init__1__1__3____tm);
      signed int return_value_getpid_3;
      return_value_getpid_3=getpid();
      common_debug_print("%.19s.%03d %d->%s: system_charset=%s\n", (const void *)process_init__1__1__3____tstamp, (signed int)(process_init__1__1__3____now.tv_usec / (signed long int)1000), return_value_getpid_3, (const void *)"process_init", (const void *)process_system_charset);
    }

  }

  pthread_mutex_lock(&m_process);
  strncpy(process_server_local_charset, process_system_charset, (unsigned long int)64);
  process_server_local_charset[(signed long int)(64 - 1)] = (char)0;
  strncpy(process_server_samba_charset, "UTF-8", (unsigned long int)64);
  process_server_samba_charset[(signed long int)(64 - 1)] = (char)0;
  pthread_mutex_unlock(&m_process);
  return initialized;
}

// process_is_smb_conn_alive
// file process.c line 208
signed int process_is_smb_conn_alive(signed int fd)
{
  signed int result;
  struct __LIST *elem;
  struct process_rec *rec;
  result = 0;
  pthread_mutex_lock(&m_process);
  elem=first_list_elem_link1(&process_list);
  signed int return_value_is_valid_list_elem_1;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link1(&process_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    rec = (struct process_rec *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(rec->child_fd == fd)
    {
      if(!(rec->child_pid == -1))
      {
        result = 1;
        break;
      }

    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&m_process);
  return result;
}

// process_kill_all
// file process.c line 230
void process_kill_all(void)
{
  struct __LIST *elem;
  struct process_rec *rec;
  pthread_mutex_lock(&m_process);
  elem=first_list_elem_link1(&process_list);
  signed int return_value_is_valid_list_elem_1;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link1(&process_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    rec = (struct process_rec *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(!(rec->child_pid == -1))
    {
      return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_3 >= 6)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_2;
        return_value_getpid_2=getpid();
        common_debug_print("%.19s.%03d %d->%s: kill child with pid=%d, fd=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"process_kill_all", (signed int)rec->child_pid, rec->child_fd);
      }

      kill(rec->child_pid, 9);
    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&m_process);
}

// process_kill_by_smb_conn_fd
// file process.c line 249
void process_kill_by_smb_conn_fd(signed int fd)
{
  struct __LIST *elem;
  struct process_rec *rec;
  pthread_mutex_lock(&m_process);
  elem=first_list_elem_link1(&process_list);
  signed int return_value_is_valid_list_elem_1;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  signed int return_value_common_get_smbnetfs_debug_level_5;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link1(&process_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    rec = (struct process_rec *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(rec->child_fd == fd)
    {
      return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_3 >= 6)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_2;
        return_value_getpid_2=getpid();
        common_debug_print("%.19s.%03d %d->%s: closing child connection with pid=%d, fd=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"process_kill_by_smb_conn_fd", (signed int)rec->child_pid, rec->child_fd);
      }

      close(rec->child_fd);
      rec->child_fd = -1;
      if(rec->child_pid == -1)
      {
        return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link4();
        if(return_value_common_get_smbnetfs_debug_level_5 >= 6)
        {
          struct timeval process_kill_by_smb_conn_fd__1__1__1__2__1____now;
          gettimeofday(&process_kill_by_smb_conn_fd__1__1__1__2__1____now, (struct timezone *)(void *)0);
          char process_kill_by_smb_conn_fd__1__1__1__2__1____tstamp[20l];
          struct tm process_kill_by_smb_conn_fd__1__1__1__2__1____tm;
          localtime_r(&process_kill_by_smb_conn_fd__1__1__1__2__1____now.tv_sec, &process_kill_by_smb_conn_fd__1__1__1__2__1____tm);
          strftime(process_kill_by_smb_conn_fd__1__1__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_kill_by_smb_conn_fd__1__1__1__2__1____tm);
          signed int return_value_getpid_4;
          return_value_getpid_4=getpid();
          common_debug_print("%.19s.%03d %d->%s: cleanup child record with fd=%d\n", (const void *)process_kill_by_smb_conn_fd__1__1__1__2__1____tstamp, (signed int)(process_kill_by_smb_conn_fd__1__1__1__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"process_kill_by_smb_conn_fd", fd);
        }

        remove_from_list_link1(&process_list, &rec->entries);
        free((void *)rec);
      }

      else
        kill(rec->child_pid, 9);
      break;
    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&m_process);
}

// process_set_server_listen_timeout
// file process.c line 70
signed int process_set_server_listen_timeout(signed int timeout)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(timeout >= 30))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link4();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: timeout=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"process_set_server_listen_timeout", timeout);
    }

    pthread_mutex_lock(&m_process);
    process_server_listen_timeout = timeout;
    pthread_mutex_unlock(&m_process);
    return 1;
  }
}

// process_set_server_local_charset
// file process.c line 97
signed int process_set_server_local_charset(const char *charset)
{
  _Bool tmp_if_expr_1;
  if(charset == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*charset == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    charset = process_system_charset;

  signed int return_value_common_get_smbnetfs_debug_level_3;
  return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
  if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    common_debug_print("%.19s.%03d %d->%s: local_charset=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"process_set_server_local_charset", charset);
  }

  pthread_mutex_lock(&m_process);
  strncpy(process_server_local_charset, charset, (unsigned long int)64);
  process_server_local_charset[(signed long int)(64 - 1)] = (char)0;
  pthread_mutex_unlock(&m_process);
  return 1;
}

// process_set_server_samba_charset
// file process.c line 109
signed int process_set_server_samba_charset(const char *charset)
{
  _Bool tmp_if_expr_1;
  if(charset == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*charset == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    charset = "UTF-8";

  signed int return_value_common_get_smbnetfs_debug_level_3;
  return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link4();
  if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    common_debug_print("%.19s.%03d %d->%s: samba_charset=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"process_set_server_samba_charset", charset);
  }

  pthread_mutex_lock(&m_process);
  strncpy(process_server_samba_charset, charset, (unsigned long int)64);
  process_server_samba_charset[(signed long int)(64 - 1)] = (char)0;
  pthread_mutex_unlock(&m_process);
  return 1;
}

// process_set_server_smb_debug_level
// file process.c line 88
signed int process_set_server_smb_debug_level(signed int level)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(level >= 11 || !(level >= 0))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link4();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: level=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"process_set_server_smb_debug_level", level);
    }

    pthread_mutex_lock(&m_process);
    process_server_smb_debug_level = level;
    pthread_mutex_unlock(&m_process);
    return 1;
  }
}

// process_set_server_smb_timeout
// file process.c line 79
signed int process_set_server_smb_timeout(signed int timeout)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(timeout >= 1000))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link4();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: smb_timeout=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"process_set_server_smb_timeout", timeout);
    }

    pthread_mutex_lock(&m_process);
    process_server_smb_timeout = timeout;
    pthread_mutex_unlock(&m_process);
    return 1;
  }
}

// process_start_new_smb_conn
// file process.c line 120
signed int process_start_new_smb_conn(char *shmem_ptr, unsigned long int shmem_size)
{
  signed int error;
  signed int debug_level;
  signed int pair[2l];
  signed int pid;
  struct process_rec *rec;
  _Bool tmp_if_expr_3;
  signed int return_value_getpagesize_2;
  if(shmem_ptr == ((char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_getpagesize_2=getpagesize();
    tmp_if_expr_3 = shmem_size < (unsigned long int)return_value_getpagesize_2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  error = 0;
  pid = (signed int)-1;
  pthread_mutex_lock(&m_process);
  void *return_value_malloc_10;
  signed int return_value_common_get_smbnetfs_debug_level_9;
  signed int return_value_socketpair_20;
  signed int return_value_common_get_smbnetfs_debug_level_12;
  signed int return_value_common_get_smbnetfs_debug_level_18;
  signed int return_value_common_get_smbnetfs_debug_level_26;
  signed int return_value_common_get_smbnetfs_debug_level_28;
  if(!(process_start_enabled == 1))
  {
    error = 1;
    pair[(signed long int)0] = -1;
  }

  else
  {
    return_value_malloc_10=malloc(sizeof(struct process_rec) /*24ul*/ );
    rec = (struct process_rec *)return_value_malloc_10;
    if(rec == ((struct process_rec *)NULL))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      error = *return_value___errno_location_4;
      pair[(signed long int)0] = -1;
      return_value_common_get_smbnetfs_debug_level_9=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_9 >= 6)
      {
        struct timeval process_start_new_smb_conn__1__3__1____now;
        gettimeofday(&process_start_new_smb_conn__1__3__1____now, (struct timezone *)(void *)0);
        char process_start_new_smb_conn__1__3__1____tstamp[20l];
        struct tm process_start_new_smb_conn__1__3__1____tm;
        localtime_r(&process_start_new_smb_conn__1__3__1____now.tv_sec, &process_start_new_smb_conn__1__3__1____tm);
        strftime(process_start_new_smb_conn__1__3__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_start_new_smb_conn__1__3__1____tm);
        signed int return_value_getpid_5;
        return_value_getpid_5=getpid();
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        char *return_value_strerror_8;
        return_value_strerror_8=strerror(*return_value___errno_location_7);
        common_debug_print("%.19s.%03d %d->%s: starting new child failed on malloc(): errno=%d, %s\n", (const void *)process_start_new_smb_conn__1__3__1____tstamp, (signed int)(process_start_new_smb_conn__1__3__1____now.tv_usec / (signed long int)1000), return_value_getpid_5, (const void *)"process_start_new_smb_conn", *return_value___errno_location_6, return_value_strerror_8);
      }

      goto error;
    }

    return_value_socketpair_20=socketpair(1, 5, 0, pair);
    if(!(return_value_socketpair_20 >= 0))
    {
      return_value_common_get_smbnetfs_debug_level_12=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_12 >= 6)
      {
        struct timeval process_start_new_smb_conn__1__4__1____now;
        gettimeofday(&process_start_new_smb_conn__1__4__1____now, (struct timezone *)(void *)0);
        char process_start_new_smb_conn__1__4__1____tstamp[20l];
        struct tm process_start_new_smb_conn__1__4__1____tm;
        localtime_r(&process_start_new_smb_conn__1__4__1____now.tv_sec, &process_start_new_smb_conn__1__4__1____tm);
        strftime(process_start_new_smb_conn__1__4__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_start_new_smb_conn__1__4__1____tm);
        signed int return_value_getpid_11;
        return_value_getpid_11=getpid();
        common_debug_print("%.19s.%03d %d->%s: using SOCK_DGRAM instead of SOCK_SEQPACKET\n", (const void *)process_start_new_smb_conn__1__4__1____tstamp, (signed int)(process_start_new_smb_conn__1__4__1____now.tv_usec / (signed long int)1000), return_value_getpid_11, (const void *)"process_start_new_smb_conn");
      }

      signed int return_value_socketpair_19;
      return_value_socketpair_19=socketpair(1, 2, 0, pair);
      if(!(return_value_socketpair_19 >= 0))
      {
        signed int *return_value___errno_location_13;
        return_value___errno_location_13=__errno_location();
        error = *return_value___errno_location_13;
        free((void *)rec);
        pair[(signed long int)0] = -1;
        return_value_common_get_smbnetfs_debug_level_18=common_get_smbnetfs_debug_level_link4();
        if(return_value_common_get_smbnetfs_debug_level_18 >= 6)
        {
          struct timeval __now;
          gettimeofday(&__now, (struct timezone *)(void *)0);
          char __tstamp[20l];
          struct tm __tm;
          localtime_r(&__now.tv_sec, &__tm);
          strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
          signed int return_value_getpid_14;
          return_value_getpid_14=getpid();
          signed int *return_value___errno_location_15;
          return_value___errno_location_15=__errno_location();
          signed int *return_value___errno_location_16;
          return_value___errno_location_16=__errno_location();
          char *return_value_strerror_17;
          return_value_strerror_17=strerror(*return_value___errno_location_16);
          common_debug_print("%.19s.%03d %d->%s: starting new child failed on socketpair(): errno=%d, %s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_14, (const void *)"process_start_new_smb_conn", *return_value___errno_location_15, return_value_strerror_17);
        }

        goto error;
      }

    }

    memset((void *)rec, 0, sizeof(struct process_rec) /*24ul*/ );
    debug_level=common_get_smbnetfs_debug_level_link4();
    pid=fork();
    if(pid == -1)
    {
      signed int *return_value___errno_location_21;
      return_value___errno_location_21=__errno_location();
      error = *return_value___errno_location_21;
      close(pair[(signed long int)0]);
      close(pair[(signed long int)1]);
      free((void *)rec);
      pair[(signed long int)0] = -1;
      return_value_common_get_smbnetfs_debug_level_26=common_get_smbnetfs_debug_level_link4();
      if(return_value_common_get_smbnetfs_debug_level_26 >= 6)
      {
        struct timeval process_start_new_smb_conn__1__5__1____now;
        gettimeofday(&process_start_new_smb_conn__1__5__1____now, (struct timezone *)(void *)0);
        char process_start_new_smb_conn__1__5__1____tstamp[20l];
        struct tm process_start_new_smb_conn__1__5__1____tm;
        localtime_r(&process_start_new_smb_conn__1__5__1____now.tv_sec, &process_start_new_smb_conn__1__5__1____tm);
        strftime(process_start_new_smb_conn__1__5__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_start_new_smb_conn__1__5__1____tm);
        signed int return_value_getpid_22;
        return_value_getpid_22=getpid();
        signed int *return_value___errno_location_23;
        return_value___errno_location_23=__errno_location();
        signed int *return_value___errno_location_24;
        return_value___errno_location_24=__errno_location();
        char *return_value_strerror_25;
        return_value_strerror_25=strerror(*return_value___errno_location_24);
        common_debug_print("%.19s.%03d %d->%s: starting new child failed on fork(): errno=%d, %s\n", (const void *)process_start_new_smb_conn__1__5__1____tstamp, (signed int)(process_start_new_smb_conn__1__5__1____now.tv_usec / (signed long int)1000), return_value_getpid_22, (const void *)"process_start_new_smb_conn", *return_value___errno_location_23, return_value_strerror_25);
      }

      goto error;
    }

    if(pid == 0)
    {
      struct smb_conn_srv_ctx srv_ctx;
      pthread_mutex_unlock(&m_process);
      close(pair[(signed long int)0]);
      srv_ctx.conn_fd = pair[(signed long int)1];
      srv_ctx.shmem_ptr = shmem_ptr;
      srv_ctx.shmem_size = shmem_size;
      srv_ctx.timeout = process_server_listen_timeout;
      srv_ctx.smb_timeout = process_server_smb_timeout;
      srv_ctx.debug_level = debug_level;
      srv_ctx.smb_debug_level = process_server_smb_debug_level;
      srv_ctx.samba_charset = process_server_samba_charset;
      srv_ctx.local_charset = process_server_local_charset;
      smb_conn_srv_listen(&srv_ctx);
      exit(0);
    }

    close(pair[(signed long int)1]);
    rec->child_pid = pid;
    rec->child_fd = pair[(signed long int)0];
    add_to_list(&process_list, &rec->entries);
    return_value_common_get_smbnetfs_debug_level_28=common_get_smbnetfs_debug_level_link4();
    if(return_value_common_get_smbnetfs_debug_level_28 >= 6)
    {
      struct timeval process_start_new_smb_conn__1__7____now;
      gettimeofday(&process_start_new_smb_conn__1__7____now, (struct timezone *)(void *)0);
      char process_start_new_smb_conn__1__7____tstamp[20l];
      struct tm process_start_new_smb_conn__1__7____tm;
      localtime_r(&process_start_new_smb_conn__1__7____now.tv_sec, &process_start_new_smb_conn__1__7____tm);
      strftime(process_start_new_smb_conn__1__7____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &process_start_new_smb_conn__1__7____tm);
      signed int return_value_getpid_27;
      return_value_getpid_27=getpid();
      common_debug_print("%.19s.%03d %d->%s: starting new child with pid=%d, fd=%d\n", (const void *)process_start_new_smb_conn__1__7____tstamp, (signed int)(process_start_new_smb_conn__1__7____now.tv_usec / (signed long int)1000), return_value_getpid_27, (const void *)"process_start_new_smb_conn", (signed int)pid, pair[(signed long int)0]);
    }

  }

error:
  ;
  pthread_mutex_unlock(&m_process);
  signed int *return_value___errno_location_29;
  return_value___errno_location_29=__errno_location();
  *return_value___errno_location_29 = error;
  return pair[(signed long int)0];
}

// reconfigure_add_cmd_opt
// file reconfigure.c line 186
static signed int reconfigure_add_cmd_opt(const char *option)
{
  char *opt;
  char **new_ptr;
  signed int new_max_cnt;
  signed int return_value_reconfigure_find_cmd_opt_1;
  return_value_reconfigure_find_cmd_opt_1=reconfigure_find_cmd_opt(option);
  signed int tmp_post_4;
  if(!(return_value_reconfigure_find_cmd_opt_1 == 0))
    return 1;

  else
  {
    if(config_cmd_opts == ((char **)NULL))
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)16 * sizeof(char *) /*8ul*/ );
      config_cmd_opts = (char **)return_value_malloc_2;
      if(config_cmd_opts == ((char **)NULL))
        return 0;

      config_cmd_opts_max_cnt = 16;
    }

    if(config_cmd_opts_cnt == config_cmd_opts_max_cnt)
    {
      new_max_cnt = 2 * config_cmd_opts_max_cnt;
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)config_cmd_opts, (unsigned long int)new_max_cnt * sizeof(char *) /*8ul*/ );
      new_ptr = (char **)return_value_realloc_3;
      if(new_ptr == ((char **)NULL))
        return 0;

      config_cmd_opts_max_cnt = new_max_cnt;
      config_cmd_opts = new_ptr;
    }

    opt=strdup(option);
    if(opt == ((char *)NULL))
      return 0;

    else
    {
      tmp_post_4 = config_cmd_opts_cnt;
      config_cmd_opts_cnt = config_cmd_opts_cnt + 1;
      config_cmd_opts[(signed long int)tmp_post_4] = opt;
      return 1;
    }
  }
}

// reconfigure_analyse_cmdline_option
// file reconfigure.c line 369
signed int reconfigure_analyse_cmdline_option(const char *option, char *value)
{
  signed int ret;
  signed int return_value_reconfigure_find_cmd_opt_1;
  return_value_reconfigure_find_cmd_opt_1=reconfigure_find_cmd_opt(option);
  if(!(return_value_reconfigure_find_cmd_opt_1 == 0))
    fprintf(stderr, "WARNING: duplicate option '%s' found.\n", option);

  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(option, "config");
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  if(return_value_strcmp_5 == 0)
  {
    char *pos;
    char *name;
    char path[2048l];
    unsigned long int len = (unsigned long int)0;
    memset((void *)path, 0, sizeof(char [2048l]) /*2048ul*/ );
    if(!((signed int)*value == 47))
    {
      char *return_value_getcwd_2;
      return_value_getcwd_2=getcwd(path, sizeof(char [2048l]) /*2048ul*/  - (unsigned long int)1);
      if(return_value_getcwd_2 == ((char *)NULL))
        goto error;

      len=strlen(path);
      if(!((signed int)path[-1l + (signed long int)len] == 47))
      {
        if(2ul + len >= 2049ul)
          goto error;

        strcat(path, "/");
        len = len + 1ul;
      }

    }

    name = value;
    pos=strrchr(name, 47);
    if(!(pos == ((char *)NULL)))
    {
      pos = pos + 1l;
      if(1ul + len + (unsigned long int)(pos - name) >= 2049ul)
        goto error;

      strncat(path, name, (unsigned long int)(pos - name));
      name = pos;
    }

    if(!((signed int)*name == 0))
    {
      return_value_strlen_3=strlen(path);
      if(!(1ul + return_value_strlen_3 >= 2049ul))
      {
        reconfigure_set_config_dir(path);
        return_value_strlen_4=strlen(name);
        if(!(1ul + return_value_strlen_4 >= 257ul))
        {
          strcpy(config_file, name);
          reconfigure_add_cmd_opt(option);
          return 1;
        }

      }

    }


  error:
    ;
    reconfigure_add_cmd_opt(option);
    fprintf(stderr, "Can't set alternative configuration file '%s'.\nUse default one instead.\n", value);
    return 1;
  }

  ret=reconfigure_analyse_simple_option(option, value, 0x01 | 0x02);
  if(ret == 1)
    reconfigure_add_cmd_opt(option);

  return ret;
}

// reconfigure_analyse_simple_option
// file reconfigure.c line 283
static signed int reconfigure_analyse_simple_option(const char *option, char *value, signed int flags)
{
  signed int return_value_reconfigure_find_cmd_opt_3;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if((0x02 & flags) == 0)
  {
    return_value_reconfigure_find_cmd_opt_3=reconfigure_find_cmd_opt(option);
    if(!(return_value_reconfigure_find_cmd_opt_3 == 0))
    {
      return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link11();
      if(return_value_common_get_smbnetfs_debug_level_2 >= 8)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_1;
        return_value_getpid_1=getpid();
        common_debug_print("%.19s.%03d %d->%s: ignore overriding of command line option '%s'.\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"reconfigure_analyse_simple_option", option);
      }

      return 1;
    }

  }

  signed int return_value_strcasecmp_5;
  return_value_strcasecmp_5=strcasecmp(option, "smbnetfs_debug");
  signed int return_value_reconfigure_set_number_4;
  signed int return_value_common_set_log_file_6;
  signed int return_value_reconfigure_set_boolean_8;
  signed int return_value_reconfigure_set_number_10;
  signed int return_value_reconfigure_set_number_12;
  signed int return_value_reconfigure_set_number_14;
  signed int return_value_reconfigure_set_number_16;
  signed int return_value_process_set_server_local_charset_18;
  signed int return_value_process_set_server_samba_charset_20;
  signed int return_value_reconfigure_set_number_22;
  signed int return_value_reconfigure_set_number_24;
  signed int return_value_reconfigure_set_number_26;
  signed int return_value_reconfigure_set_number_30;
  signed int return_value_reconfigure_set_number_32;
  signed int return_value_reconfigure_set_number_34;
  signed int return_value_reconfigure_set_number_36;
  signed int return_value_reconfigure_set_number_38;
  signed int return_value_reconfigure_set_boolean_40;
  signed int return_value_reconfigure_set_number_42;
  signed int return_value_reconfigure_set_boolean_44;
  signed int return_value_reconfigure_set_number_46;
  signed int return_value_reconfigure_set_boolean_48;
  signed int return_value_reconfigure_set_boolean_50;
  signed int return_value_reconfigure_set_boolean_52;
  signed int return_value_reconfigure_set_boolean_54;
  signed int return_value_reconfigure_set_number_56;
  if(return_value_strcasecmp_5 == 0)
  {
    return_value_reconfigure_set_number_4=reconfigure_set_number(value, common_set_smbnetfs_debug_level);
    return return_value_reconfigure_set_number_4;
  }

  else
  {
    signed int return_value_strcasecmp_7;
    return_value_strcasecmp_7=strcasecmp(option, "log_file");
    if(return_value_strcasecmp_7 == 0)
    {
      return_value_common_set_log_file_6=common_set_log_file(value);
      return return_value_common_set_log_file_6;
    }

    else
    {
      signed int return_value_strcasecmp_9;
      return_value_strcasecmp_9=strcasecmp(option, "use_gnome_keyring");
      if(return_value_strcasecmp_9 == 0)
      {
        return_value_reconfigure_set_boolean_8=reconfigure_set_boolean(value, gnome_keyring_enable);
        return return_value_reconfigure_set_boolean_8;
      }

      else
      {
        signed int return_value_strcasecmp_11;
        return_value_strcasecmp_11=strcasecmp(option, "gnome_keyring_timeout");
        if(return_value_strcasecmp_11 == 0)
        {
          return_value_reconfigure_set_number_10=reconfigure_set_number(value, gnome_keyring_set_request_timeout);
          return return_value_reconfigure_set_number_10;
        }

        else
        {
          signed int return_value_strcasecmp_13;
          return_value_strcasecmp_13=strcasecmp(option, "listen_timeout");
          if(return_value_strcasecmp_13 == 0)
          {
            return_value_reconfigure_set_number_12=reconfigure_set_number(value, process_set_server_listen_timeout);
            return return_value_reconfigure_set_number_12;
          }

          else
          {
            signed int return_value_strcasecmp_15;
            return_value_strcasecmp_15=strcasecmp(option, "smb_timeout");
            if(return_value_strcasecmp_15 == 0)
            {
              return_value_reconfigure_set_number_14=reconfigure_set_number(value, process_set_server_smb_timeout);
              return return_value_reconfigure_set_number_14;
            }

            else
            {
              signed int return_value_strcasecmp_17;
              return_value_strcasecmp_17=strcasecmp(option, "smb_debug_level");
              if(return_value_strcasecmp_17 == 0)
              {
                return_value_reconfigure_set_number_16=reconfigure_set_number(value, process_set_server_smb_debug_level);
                return return_value_reconfigure_set_number_16;
              }

              else
              {
                signed int return_value_strcasecmp_19;
                return_value_strcasecmp_19=strcasecmp(option, "local_charset");
                if(return_value_strcasecmp_19 == 0)
                {
                  return_value_process_set_server_local_charset_18=process_set_server_local_charset(value);
                  return return_value_process_set_server_local_charset_18;
                }

                else
                {
                  signed int return_value_strcasecmp_21;
                  return_value_strcasecmp_21=strcasecmp(option, "samba_charset");
                  if(return_value_strcasecmp_21 == 0)
                  {
                    return_value_process_set_server_samba_charset_20=process_set_server_samba_charset(value);
                    return return_value_process_set_server_samba_charset_20;
                  }

                  else
                  {
                    signed int return_value_strcasecmp_23;
                    return_value_strcasecmp_23=strcasecmp(option, "max_retry_count");
                    if(return_value_strcasecmp_23 == 0)
                    {
                      return_value_reconfigure_set_number_22=reconfigure_set_number(value, smb_conn_set_max_retry_count);
                      return return_value_reconfigure_set_number_22;
                    }

                    else
                    {
                      signed int return_value_strcasecmp_25;
                      return_value_strcasecmp_25=strcasecmp(option, "max_passwd_query_count");
                      if(return_value_strcasecmp_25 == 0)
                      {
                        return_value_reconfigure_set_number_24=reconfigure_set_number(value, smb_conn_set_max_passwd_query_count);
                        return return_value_reconfigure_set_number_24;
                      }

                      else
                      {
                        signed int return_value_strcasecmp_27;
                        return_value_strcasecmp_27=strcasecmp(option, "reply_timeout");
                        if(return_value_strcasecmp_27 == 0)
                        {
                          return_value_reconfigure_set_number_26=reconfigure_set_number(value, smb_conn_set_server_reply_timeout);
                          return return_value_reconfigure_set_number_26;
                        }

                        else
                        {
                          signed int return_value_strcasecmp_29;
                          return_value_strcasecmp_29=strcasecmp(option, "max_rw_block_size");
                          if(return_value_strcasecmp_29 == 0)
                          {
                            if((0x01 & flags) == 0)
                              return 1;

                            signed int return_value_reconfigure_set_kb_size_28;
                            return_value_reconfigure_set_kb_size_28=reconfigure_set_kb_size(value, samba_init);
                            return return_value_reconfigure_set_kb_size_28;
                          }

                          signed int return_value_strcasecmp_31;
                          return_value_strcasecmp_31=strcasecmp(option, "max_ctx_count");
                          if(return_value_strcasecmp_31 == 0)
                          {
                            return_value_reconfigure_set_number_30=reconfigure_set_number(value, samba_set_max_ctx_count);
                            return return_value_reconfigure_set_number_30;
                          }

                          else
                          {
                            signed int return_value_strcasecmp_33;
                            return_value_strcasecmp_33=strcasecmp(option, "time_step");
                            if(return_value_strcasecmp_33 == 0)
                            {
                              return_value_reconfigure_set_number_32=reconfigure_set_number(value, event_set_time_step);
                              return return_value_reconfigure_set_number_32;
                            }

                            else
                            {
                              signed int return_value_strcasecmp_35;
                              return_value_strcasecmp_35=strcasecmp(option, "smb_tree_scan_period");
                              if(return_value_strcasecmp_35 == 0)
                              {
                                return_value_reconfigure_set_number_34=reconfigure_set_number(value, event_set_smb_tree_scan_period);
                                return return_value_reconfigure_set_number_34;
                              }

                              else
                              {
                                signed int return_value_strcasecmp_37;
                                return_value_strcasecmp_37=strcasecmp(option, "smb_tree_elements_ttl");
                                if(return_value_strcasecmp_37 == 0)
                                {
                                  return_value_reconfigure_set_number_36=reconfigure_set_number(value, event_set_smb_tree_elements_ttl);
                                  return return_value_reconfigure_set_number_36;
                                }

                                else
                                {
                                  signed int return_value_strcasecmp_39;
                                  return_value_strcasecmp_39=strcasecmp(option, "config_update_period");
                                  if(return_value_strcasecmp_39 == 0)
                                  {
                                    return_value_reconfigure_set_number_38=reconfigure_set_number(value, event_set_config_update_period);
                                    return return_value_reconfigure_set_number_38;
                                  }

                                  else
                                  {
                                    signed int return_value_strcasecmp_41;
                                    return_value_strcasecmp_41=strcasecmp(option, "smb_query_browsers");
                                    if(return_value_strcasecmp_41 == 0)
                                    {
                                      return_value_reconfigure_set_boolean_40=reconfigure_set_boolean(value, event_set_query_browser_flag);
                                      return return_value_reconfigure_set_boolean_40;
                                    }

                                    else
                                    {
                                      signed int return_value_strcasecmp_43;
                                      return_value_strcasecmp_43=strcasecmp(option, "stat_workaround_depth");
                                      if(return_value_strcasecmp_43 == 0)
                                      {
                                        return_value_reconfigure_set_number_42=reconfigure_set_number(value, stat_workaround_set_default_depth);
                                        return return_value_reconfigure_set_number_42;
                                      }

                                      else
                                      {
                                        signed int return_value_strcasecmp_45;
                                        return_value_strcasecmp_45=strcasecmp(option, "stat_workaround_enable_default_entries");
                                        if(return_value_strcasecmp_45 == 0)
                                        {
                                          return_value_reconfigure_set_boolean_44=reconfigure_set_boolean(value, stat_workaround_enable_default_entries);
                                          return return_value_reconfigure_set_boolean_44;
                                        }

                                        else
                                        {
                                          signed int return_value_strcasecmp_47;
                                          return_value_strcasecmp_47=strcasecmp(option, "free_space_size");
                                          if(return_value_strcasecmp_47 == 0)
                                          {
                                            return_value_reconfigure_set_number_46=reconfigure_set_number(value, function_set_free_space_size);
                                            return return_value_reconfigure_set_number_46;
                                          }

                                          else
                                          {
                                            signed int return_value_strcasecmp_49;
                                            return_value_strcasecmp_49=strcasecmp(option, "quiet_flag");
                                            if(return_value_strcasecmp_49 == 0)
                                            {
                                              return_value_reconfigure_set_boolean_48=reconfigure_set_boolean(value, function_set_quiet_flag);
                                              return return_value_reconfigure_set_boolean_48;
                                            }

                                            else
                                            {
                                              signed int return_value_strcasecmp_51;
                                              return_value_strcasecmp_51=strcasecmp(option, "show___shares");
                                              if(return_value_strcasecmp_51 == 0)
                                              {
                                                return_value_reconfigure_set_boolean_50=reconfigure_set_boolean(value, function_set_dollar_share_visibility);
                                                return return_value_reconfigure_set_boolean_50;
                                              }

                                              else
                                              {
                                                signed int return_value_strcasecmp_53;
                                                return_value_strcasecmp_53=strcasecmp(option, "show_hidden_hosts");
                                                if(return_value_strcasecmp_53 == 0)
                                                {
                                                  return_value_reconfigure_set_boolean_52=reconfigure_set_boolean(value, function_set_hidden_hosts_visibility);
                                                  return return_value_reconfigure_set_boolean_52;
                                                }

                                                else
                                                {
                                                  signed int return_value_strcasecmp_55;
                                                  return_value_strcasecmp_55=strcasecmp(option, "neg_cache");
                                                  if(return_value_strcasecmp_55 == 0)
                                                  {
                                                    return_value_reconfigure_set_boolean_54=reconfigure_set_boolean(value, neg_cache_enable);
                                                    return return_value_reconfigure_set_boolean_54;
                                                  }

                                                  else
                                                  {
                                                    signed int return_value_strcasecmp_57;
                                                    return_value_strcasecmp_57=strcasecmp(option, "neg_cache_timeout");
                                                    if(return_value_strcasecmp_57 == 0)
                                                    {
                                                      return_value_reconfigure_set_number_56=reconfigure_set_number(value, neg_cache_set_timeout);
                                                      return return_value_reconfigure_set_number_56;
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

// reconfigure_find_cmd_opt
// file reconfigure.c line 177
static signed int reconfigure_find_cmd_opt(const char *option)
{
  signed int i = 0;
  for( ; !(i >= config_cmd_opts_cnt); i = i + 1)
  {
    signed int return_value_strcasecmp_1;
    return_value_strcasecmp_1=strcasecmp(config_cmd_opts[(signed long int)i], option);
    if(return_value_strcasecmp_1 == 0)
      return 1;

  }
  return 0;
}

// reconfigure_get_boolean
// file reconfigure.c line 158
static signed int reconfigure_get_boolean(char *value, signed int *result)
{
  signed int return_value_strcasecmp_1;
  return_value_strcasecmp_1=strcasecmp(value, "true");
  _Bool tmp_if_expr_3;
  signed int return_value_strcasecmp_2;
  if(return_value_strcasecmp_1 == 0)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_strcasecmp_2=strcasecmp(value, "yes");
    tmp_if_expr_3 = return_value_strcasecmp_2 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  signed int return_value_strcasecmp_5;
  if(tmp_if_expr_3)
  {
    *result = 1;
    return 1;
  }

  else
  {
    signed int return_value_strcasecmp_4;
    return_value_strcasecmp_4=strcasecmp(value, "false");
    if(return_value_strcasecmp_4 == 0)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_strcasecmp_5=strcasecmp(value, "no");
      tmp_if_expr_6 = return_value_strcasecmp_5 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
    {
      *result = 0;
      return 1;
    }

    else
      return 0;
  }
}

// reconfigure_get_number
// file reconfigure.c line 128
static signed int reconfigure_get_number(char *value, signed int *result)
{
  char *endptr;
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(value, &endptr, 0);
  *result = (signed int)return_value_strtol_1;
  if((signed int)*endptr == 0)
    return 1;

  else
    return 0;
}

// reconfigure_get_size
// file reconfigure.c line 143
static signed int reconfigure_get_size(char *value, unsigned long int *result)
{
  char *endptr;
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(value, &endptr, 0);
  *result = (unsigned long int)return_value_strtol_1;
  if((signed int)*endptr == 0)
    return 1;

  else
    return 0;
}

// reconfigure_parse_auth_option
// file reconfigure.c line 426
static signed int reconfigure_parse_auth_option(char **value, signed int count)
{
  char *comp = "";
  char *share = "";
  char *domain = "";
  char *user;
  char *password;
  signed int user_pos = 0;
  char *tmp_post_1;
  _Bool tmp_if_expr_3;
  char *return_value_strchr_2;
  char *tmp_post_4;
  _Bool tmp_if_expr_6;
  char *return_value_strchr_5;
  if(count >= 4 || !(count >= 2))
    return 0;

  else
  {
    if(count == 3)
    {
      if((signed int)*(*value) == 47)
        return 0;

      user_pos = 1;
      comp = value[(signed long int)0];
      share=strchr(comp, 47);
      if(!(share == ((char *)NULL)))
      {
        tmp_post_1 = share;
        share = share + 1l;
        *tmp_post_1 = (char)0;
        if((signed int)*share == 0)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value_strchr_2=strchr(share, 47);
          tmp_if_expr_3 = return_value_strchr_2 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          return 0;

      }

      else
        share = "";
    }

    if((signed int)*value[(signed long int)user_pos] == 47)
      return 0;

    else
    {
      user=strchr(value[(signed long int)user_pos], 47);
      if(!(user == ((char *)NULL)))
      {
        domain = value[(signed long int)user_pos];
        tmp_post_4 = user;
        user = user + 1l;
        *tmp_post_4 = (char)0;
        if((signed int)*user == 0)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_strchr_5=strchr(user, 47);
          tmp_if_expr_6 = return_value_strchr_5 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          return 0;

      }

      else
        user = value[(signed long int)user_pos];
      password = value[(signed long int)(user_pos + 1)];
      signed int return_value_auth_store_auth_data_7;
      return_value_auth_store_auth_data_7=auth_store_auth_data(comp, share, domain, user, password);
      return (signed int)(return_value_auth_store_auth_data_7 == 0);
    }
  }
}

// reconfigure_parse_group_option
// file reconfigure.c line 554
static signed int reconfigure_parse_group_option(char **value, signed int count)
{
  if(!(count == 1))
    return 0;

  else
  {
    char *return_value_strchr_1;
    return_value_strchr_1=strchr(value[(signed long int)0], 47);
    if(!(return_value_strchr_1 == ((char *)NULL)))
      return 0;

    else
    {
      signed int return_value_smbitem_mkgroup_2;
      return_value_smbitem_mkgroup_2=smbitem_mkgroup(value[(signed long int)0], (enum smbitem_tree_t)SMBITEM_USER_TREE);
      return (signed int)(return_value_smbitem_mkgroup_2 == 0);
    }
  }
}

// reconfigure_parse_host_option
// file reconfigure.c line 492
static signed int reconfigure_parse_host_option(char **value, signed int count)
{
  const char *group_ptn = "parent_group=";
  const char *visible_ptn = "visible=";
  const char *parent_group = (const char *)(void *)0;
  signed int visibility = -1;
  signed int i;
  unsigned long int len;
  _Bool tmp_if_expr_3;
  char *return_value_strchr_2;
  if(count >= 4 || !(count >= 1))
    return 0;

  else
  {
    char *return_value_strchr_1;
    return_value_strchr_1=strchr(value[(signed long int)0], 47);
    if(!(return_value_strchr_1 == ((char *)NULL)))
      return 0;

    else
    {
      i = 1;
      for( ; !(i >= count); i = i + 1)
      {
        len=strlen(group_ptn);
        signed int return_value_strncasecmp_4;
        return_value_strncasecmp_4=strncasecmp(value[(signed long int)i], group_ptn, len);
        if(return_value_strncasecmp_4 == 0)
        {
          if(!(parent_group == ((const char *)NULL)))
            return 0;

          parent_group = value[(signed long int)i] + (signed long int)len;
          if((signed int)*parent_group == 0)
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            return_value_strchr_2=strchr(parent_group, 47);
            tmp_if_expr_3 = return_value_strchr_2 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_3)
            return 0;

        }

        len=strlen(visible_ptn);
        signed int return_value_strncasecmp_6;
        return_value_strncasecmp_6=strncasecmp(value[(signed long int)i], visible_ptn, len);
        if(return_value_strncasecmp_6 == 0)
        {
          if(!(visibility == -1))
            return 0;

          signed int return_value_reconfigure_get_boolean_5;
          return_value_reconfigure_get_boolean_5=reconfigure_get_boolean(value[(signed long int)i] + (signed long int)len, &visibility);
          if(return_value_reconfigure_get_boolean_5 == 0)
            return 0;

        }

      }
      if(visibility == -1)
        visibility = 0;

      signed int return_value_smbitem_mkhost_7;
      return_value_smbitem_mkhost_7=smbitem_mkhost(value[(signed long int)0], parent_group, (signed int)!(visibility != 0), (enum smbitem_tree_t)SMBITEM_USER_TREE);
      return (signed int)(return_value_smbitem_mkhost_7 == 0);
    }
  }
}

// reconfigure_parse_link_option
// file reconfigure.c line 525
static signed int reconfigure_parse_link_option(char **value, signed int count)
{
  char *name;
  signed int result;
  _Bool tmp_if_expr_2;
  char *return_value_strchr_1;
  if(count >= 3 || !(count >= 1))
    return 0;

  else
    if((signed int)*(*value) == 47)
      return 0;

    else
    {
      name=strchr(value[(signed long int)0], 47);
      if(name == ((char *)NULL))
      {
        if((signed int)*value[1l] == 0)
          return 0;

      }

      else
      {
        name = name + 1l;
        if((signed int)*name == 0)
          tmp_if_expr_2 = (_Bool)1;

        else
        {
          return_value_strchr_1=strchr(name, 47);
          tmp_if_expr_2 = return_value_strchr_1 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_2)
          return 0;

      }
      if((signed int)*value[1l] == 0)
      {
        char *link;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(name);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc(return_value_strlen_3 + (unsigned long int)4);
        link = (char *)return_value_malloc_4;
        if(link == ((char *)NULL))
          return 0;

        strcpy(link, "../");
        strcat(link, name);
        signed int return_value_smbitem_mklink_5;
        return_value_smbitem_mklink_5=smbitem_mklink(value[(signed long int)0], link, (enum smbitem_tree_t)SMBITEM_USER_TREE);
        result = (signed int)(return_value_smbitem_mklink_5 == 0);
        free((void *)link);
      }

      else
      {
        signed int return_value_smbitem_mklink_6;
        return_value_smbitem_mklink_6=smbitem_mklink(value[(signed long int)0], value[(signed long int)1], (enum smbitem_tree_t)SMBITEM_USER_TREE);
        result = (signed int)(return_value_smbitem_mklink_6 == 0);
      }
      return result;
    }
}

// reconfigure_parse_stat_workaround_name_option
// file reconfigure.c line 463
static signed int reconfigure_parse_stat_workaround_name_option(char **value, signed int count)
{
  const char *case_ptn = "case_sensitive=";
  const char *depth_ptn = "depth=";
  signed int case_sensitive = -1;
  signed int depth = -2;
  signed int i;
  unsigned long int len;
  if(count >= 4 || !(count >= 1))
    return 0;

  else
  {
    i = 1;
    for( ; !(i >= count); i = i + 1)
    {
      len=strlen(case_ptn);
      signed int return_value_strncasecmp_2;
      return_value_strncasecmp_2=strncasecmp(value[(signed long int)i], case_ptn, len);
      if(return_value_strncasecmp_2 == 0)
      {
        if(!(case_sensitive == -1))
          return 0;

        signed int return_value_reconfigure_get_boolean_1;
        return_value_reconfigure_get_boolean_1=reconfigure_get_boolean(value[(signed long int)i] + (signed long int)len, &case_sensitive);
        if(return_value_reconfigure_get_boolean_1 == 0)
          return 0;

      }

      len=strlen(depth_ptn);
      signed int return_value_strncasecmp_4;
      return_value_strncasecmp_4=strncasecmp(value[(signed long int)i], depth_ptn, len);
      if(return_value_strncasecmp_4 == 0)
      {
        if(!(depth == -2))
          return 0;

        signed int return_value_reconfigure_get_number_3;
        return_value_reconfigure_get_number_3=reconfigure_get_number(value[(signed long int)i] + (signed long int)len, &depth);
        if(return_value_reconfigure_get_number_3 == 0)
          return 0;

      }

    }
    if(case_sensitive == -1)
      case_sensitive = 1;

    signed int return_value_stat_workaround_add_name_5;
    return_value_stat_workaround_add_name_5=stat_workaround_add_name(value[(signed long int)0], case_sensitive, depth);
    return return_value_stat_workaround_add_name_5;
  }
}

// reconfigure_read_config
// file reconfigure.h line 13
signed int reconfigure_read_config(signed int flags)
{
  signed int status;
  status=reconfigure_read_config_file(config_file, flags);
  stat_workaround_add_default_entries();
  return status;
}

// reconfigure_read_config_file
// file reconfigure.c line 560
static signed int reconfigure_read_config_file(const char *filename, signed int flags)
{
  struct _IO_FILE *file;
  signed int cnt;
  signed int ok_permission;
  char s[200l];
  char pattern[20l];
  char fields[4l][200l];
  char *arg[4l];
  unsigned long int arg_len[4l];
  struct stat st;
  _Bool tmp_if_expr_2;
  if(filename == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)*filename == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  if((signed int)*filename == 47)
  {
    filename=strdup(filename);
    if(filename == ((const char *)NULL))
      return -1;

  }

  else
  {
    char *tmp;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(config_dir);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(filename);
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(return_value_strlen_3 + return_value_strlen_4 + (unsigned long int)1);
    tmp = (char *)return_value_malloc_5;
    if(tmp == ((char *)NULL))
      return -1;

    strcpy(tmp, config_dir);
    strcat(tmp, filename);
    filename = tmp;
  }
  cnt = 0;
  for( ; !(cnt >= 4); cnt = cnt + 1)
  {
    arg[(signed long int)cnt] = fields[(signed long int)cnt];
    arg_len[(signed long int)cnt] = (unsigned long int)200;
  }
  snprintf(pattern, sizeof(char [20l]) /*20ul*/ , "%%%zd[^\n]\n", sizeof(char [200l]) /*200ul*/  - (unsigned long int)1);
  signed int return_value_common_get_smbnetfs_debug_level_7;
  return_value_common_get_smbnetfs_debug_level_7=common_get_smbnetfs_debug_level_link11();
  if(return_value_common_get_smbnetfs_debug_level_7 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    common_debug_print("%.19s.%03d %d->%s: reading file: %s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_6, (const void *)"reconfigure_read_config_file", filename);
  }

  file=fopen(filename, "r");
  signed int return_value_common_get_smbnetfs_debug_level_11;
  if(file == ((struct _IO_FILE *)NULL))
  {
    signed int error;
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    error = *return_value___errno_location_8;
    return_value_common_get_smbnetfs_debug_level_11=common_get_smbnetfs_debug_level_link11();
    if(return_value_common_get_smbnetfs_debug_level_11 >= 3)
    {
      struct timeval reconfigure_read_config_file__1__6__1____now;
      gettimeofday(&reconfigure_read_config_file__1__6__1____now, (struct timezone *)(void *)0);
      char reconfigure_read_config_file__1__6__1____tstamp[20l];
      struct tm reconfigure_read_config_file__1__6__1____tm;
      localtime_r(&reconfigure_read_config_file__1__6__1____now.tv_sec, &reconfigure_read_config_file__1__6__1____tm);
      strftime(reconfigure_read_config_file__1__6__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_read_config_file__1__6__1____tm);
      signed int return_value_getpid_9;
      return_value_getpid_9=getpid();
      char *return_value_strerror_10;
      return_value_strerror_10=strerror(error);
      common_debug_print("%.19s.%03d %d->%s: Open file %s error : %s.\n", (const void *)reconfigure_read_config_file__1__6__1____tstamp, (signed int)(reconfigure_read_config_file__1__6__1____now.tv_usec / (signed long int)1000), return_value_getpid_9, (const void *)"reconfigure_read_config_file", filename, return_value_strerror_10);
    }

    free((void *)(char *)filename);
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    *return_value___errno_location_12 = error;
    return -1;
  }

  ok_permission = 0;
  signed int return_value_fileno_18;
  return_value_fileno_18=fileno(file);
  signed int return_value_fstat_19;
  return_value_fstat_19=fstat(return_value_fileno_18, &st);
  unsigned int return_value_getuid_13;
  signed int return_value_common_get_smbnetfs_debug_level_17;
  if(return_value_fstat_19 == 0)
  {
    return_value_getuid_13=getuid();
    ok_permission = (signed int)(st.st_uid == return_value_getuid_13 ? ((st.st_mode & (unsigned int)0177) == (unsigned int)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0);
  }

  else
  {
    return_value_common_get_smbnetfs_debug_level_17=common_get_smbnetfs_debug_level_link11();
    if(return_value_common_get_smbnetfs_debug_level_17 >= 3)
    {
      struct timeval reconfigure_read_config_file__1__7____now;
      gettimeofday(&reconfigure_read_config_file__1__7____now, (struct timezone *)(void *)0);
      char reconfigure_read_config_file__1__7____tstamp[20l];
      struct tm reconfigure_read_config_file__1__7____tm;
      localtime_r(&reconfigure_read_config_file__1__7____now.tv_sec, &reconfigure_read_config_file__1__7____tm);
      strftime(reconfigure_read_config_file__1__7____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_read_config_file__1__7____tm);
      signed int return_value_getpid_14;
      return_value_getpid_14=getpid();
      signed int *return_value___errno_location_15;
      return_value___errno_location_15=__errno_location();
      char *return_value_strerror_16;
      return_value_strerror_16=strerror(*return_value___errno_location_15);
      common_debug_print("%.19s.%03d %d->%s: Stat file %s error : %s\n", (const void *)reconfigure_read_config_file__1__7____tstamp, (signed int)(reconfigure_read_config_file__1__7____now.tv_usec / (signed long int)1000), return_value_getpid_14, (const void *)"reconfigure_read_config_file", filename, return_value_strerror_16);
    }

  }
  fscanf(file, "%[\n]", (const void *)s);
  signed int return_value_feof_20;
  signed int return_value_common_get_smbnetfs_debug_level_22;
  signed int return_value_stat_workaround_add_exception_25;
  signed int return_value_common_get_smbnetfs_debug_level_38;
  signed int return_value_common_get_smbnetfs_debug_level_40;
  do
  {
    return_value_feof_20=feof(file);
    if(!(return_value_feof_20 == 0))
      break;

    memset((void *)s, 0, sizeof(char [200l]) /*200ul*/ );
    fscanf(file, pattern, (const void *)s);
    cnt=reconfigure_split_line(s, arg, arg_len, 4);
    if(!(cnt >= 0))
    {
      return_value_common_get_smbnetfs_debug_level_22=common_get_smbnetfs_debug_level_link11();
      if(return_value_common_get_smbnetfs_debug_level_22 >= 0)
      {
        struct timeval reconfigure_read_config_file__1__8__1__1____now;
        gettimeofday(&reconfigure_read_config_file__1__8__1__1____now, (struct timezone *)(void *)0);
        char reconfigure_read_config_file__1__8__1__1____tstamp[20l];
        struct tm reconfigure_read_config_file__1__8__1__1____tm;
        localtime_r(&reconfigure_read_config_file__1__8__1__1____now.tv_sec, &reconfigure_read_config_file__1__8__1__1____tm);
        strftime(reconfigure_read_config_file__1__8__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_read_config_file__1__8__1__1____tm);
        signed int return_value_getpid_21;
        return_value_getpid_21=getpid();
        common_debug_print("%.19s.%03d %d->%s: Error: (file: %s), Syntax error at pos=%d in line : %s\n", (const void *)reconfigure_read_config_file__1__8__1__1____tstamp, (signed int)(reconfigure_read_config_file__1__8__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_21, (const void *)"reconfigure_read_config_file", filename, -(cnt + 1), (const void *)s);
      }

      continue;
    }

    if(!(cnt == 0))
    {
      signed int return_value_strcasecmp_24;
      return_value_strcasecmp_24=strcasecmp(arg[(signed long int)0], "stat_workaround_name");
      if(return_value_strcasecmp_24 == 0)
      {
        signed int return_value_reconfigure_parse_stat_workaround_name_option_23;
        return_value_reconfigure_parse_stat_workaround_name_option_23=reconfigure_parse_stat_workaround_name_option(arg + (signed long int)1, cnt - 1);
        if(!(return_value_reconfigure_parse_stat_workaround_name_option_23 == 0))
          continue;

      }

      signed int return_value_strcasecmp_26;
      return_value_strcasecmp_26=strcasecmp(arg[(signed long int)0], "stat_workaround_exception");
      if(return_value_strcasecmp_26 == 0)
      {
        if(cnt == 2)
        {
          return_value_stat_workaround_add_exception_25=stat_workaround_add_exception(arg[(signed long int)1]);
          if(!(return_value_stat_workaround_add_exception_25 == 0))
            continue;

        }

      }

      if(cnt == 2)
      {
        signed int return_value_strcasecmp_27;
        return_value_strcasecmp_27=strcasecmp(arg[(signed long int)0], "include");
        if(return_value_strcasecmp_27 == 0)
        {
          reconfigure_read_config_file(arg[(signed long int)1], flags);
          continue;
        }

        signed int return_value_reconfigure_analyse_simple_option_28;
        return_value_reconfigure_analyse_simple_option_28=reconfigure_analyse_simple_option(arg[(signed long int)0], arg[(signed long int)1], flags);
        if(!(return_value_reconfigure_analyse_simple_option_28 == 0))
          continue;

      }

      signed int return_value_strcasecmp_30;
      return_value_strcasecmp_30=strcasecmp(arg[(signed long int)0], "auth");
      if(return_value_strcasecmp_30 == 0)
      {
        if(ok_permission == 0)
          goto insecure_permission;

        signed int return_value_reconfigure_parse_auth_option_29;
        return_value_reconfigure_parse_auth_option_29=reconfigure_parse_auth_option(arg + (signed long int)1, cnt - 1);
        if(!(return_value_reconfigure_parse_auth_option_29 == 0))
          continue;

      }

      signed int return_value_strcasecmp_32;
      return_value_strcasecmp_32=strcasecmp(arg[(signed long int)0], "host");
      if(return_value_strcasecmp_32 == 0)
      {
        if(ok_permission == 0)
          goto insecure_permission;

        signed int return_value_reconfigure_parse_host_option_31;
        return_value_reconfigure_parse_host_option_31=reconfigure_parse_host_option(arg + (signed long int)1, cnt - 1);
        if(!(return_value_reconfigure_parse_host_option_31 == 0))
          continue;

      }

      signed int return_value_strcasecmp_34;
      return_value_strcasecmp_34=strcasecmp(arg[(signed long int)0], "link");
      if(return_value_strcasecmp_34 == 0)
      {
        if(ok_permission == 0)
          goto insecure_permission;

        signed int return_value_reconfigure_parse_link_option_33;
        return_value_reconfigure_parse_link_option_33=reconfigure_parse_link_option(arg + (signed long int)1, cnt - 1);
        if(!(return_value_reconfigure_parse_link_option_33 == 0))
          continue;

      }

      signed int return_value_strcasecmp_36;
      return_value_strcasecmp_36=strcasecmp(arg[(signed long int)0], "group");
      if(return_value_strcasecmp_36 == 0)
      {
        if(ok_permission == 0)
          goto insecure_permission;

        signed int return_value_reconfigure_parse_group_option_35;
        return_value_reconfigure_parse_group_option_35=reconfigure_parse_group_option(arg + (signed long int)1, cnt - 1);
        if(!(return_value_reconfigure_parse_group_option_35 == 0))
          continue;

      }

      return_value_common_get_smbnetfs_debug_level_38=common_get_smbnetfs_debug_level_link11();
      if(return_value_common_get_smbnetfs_debug_level_38 >= 0)
      {
        struct timeval reconfigure_read_config_file__1__8__9____now;
        gettimeofday(&reconfigure_read_config_file__1__8__9____now, (struct timezone *)(void *)0);
        char reconfigure_read_config_file__1__8__9____tstamp[20l];
        struct tm reconfigure_read_config_file__1__8__9____tm;
        localtime_r(&reconfigure_read_config_file__1__8__9____now.tv_sec, &reconfigure_read_config_file__1__8__9____tm);
        strftime(reconfigure_read_config_file__1__8__9____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_read_config_file__1__8__9____tm);
        signed int return_value_getpid_37;
        return_value_getpid_37=getpid();
        common_debug_print("%.19s.%03d %d->%s: Error: (file: %s) Invalid input line : %s\n", (const void *)reconfigure_read_config_file__1__8__9____tstamp, (signed int)(reconfigure_read_config_file__1__8__9____now.tv_usec / (signed long int)1000), return_value_getpid_37, (const void *)"reconfigure_read_config_file", filename, (const void *)s);
      }

      continue;

    insecure_permission:
      ;
      return_value_common_get_smbnetfs_debug_level_40=common_get_smbnetfs_debug_level_link11();
      if(return_value_common_get_smbnetfs_debug_level_40 >= 0)
      {
        struct timeval reconfigure_read_config_file__1__8__10____now;
        gettimeofday(&reconfigure_read_config_file__1__8__10____now, (struct timezone *)(void *)0);
        char reconfigure_read_config_file__1__8__10____tstamp[20l];
        struct tm reconfigure_read_config_file__1__8__10____tm;
        localtime_r(&reconfigure_read_config_file__1__8__10____now.tv_sec, &reconfigure_read_config_file__1__8__10____tm);
        strftime(reconfigure_read_config_file__1__8__10____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_read_config_file__1__8__10____tm);
        signed int return_value_getpid_39;
        return_value_getpid_39=getpid();
        common_debug_print("%.19s.%03d %d->%s: Error: Insecure config file permission.\nCan't apply '%s' directive.\nRun 'chmod 600 %s' to fix it.\n", (const void *)reconfigure_read_config_file__1__8__10____tstamp, (signed int)(reconfigure_read_config_file__1__8__10____now.tv_usec / (signed long int)1000), return_value_getpid_39, (const void *)"reconfigure_read_config_file", arg[(signed long int)0], filename);
      }

    }

  }
  while((_Bool)1);
  fclose(file);
  free((void *)(char *)filename);
  return 0;
}

// reconfigure_set_boolean
// file reconfigure.c line 170
static signed int reconfigure_set_boolean(char *value, signed int (*func)(signed int))
{
  signed int result;
  signed int return_value_reconfigure_get_boolean_1;
  return_value_reconfigure_get_boolean_1=reconfigure_get_boolean(value, &result);
  signed int return_value;
  if(!(return_value_reconfigure_get_boolean_1 == 0))
  {
    return_value=func(result);
    return return_value;
  }

  else
    return 0;
}

// reconfigure_set_config_dir
// file reconfigure.c line 74
static void reconfigure_set_config_dir(const char *path)
{
  struct stat buf;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(path);
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(2ul + return_value_strlen_3 >= 2049ul)
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link11();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm reconfigure_set_config_dir__1__1__1____tm;
      localtime_r(&__now.tv_sec, &reconfigure_set_config_dir__1__1__1____tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &reconfigure_set_config_dir__1__1__1____tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: path too long\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"reconfigure_set_config_dir");
    }

    goto __CPROVER_DUMP_L6;
  }

  strcpy(config_dir, path);
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(path);
  if(!((signed int)path[-1l + (signed long int)return_value_strlen_4] == 47))
    strcat(config_dir, "/");

  signed int return_value_stat_7;
  return_value_stat_7=stat(config_dir, &buf);
  signed int return_value_common_get_smbnetfs_debug_level_6;
  if(return_value_stat_7 == 0)
  {
    if((61440u & buf.st_mode) == 16384u)
    {
      return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level_link11();
      if(return_value_common_get_smbnetfs_debug_level_6 >= 5)
      {
        struct timeval reconfigure_set_config_dir__1__2__1____now;
        gettimeofday(&reconfigure_set_config_dir__1__2__1____now, (struct timezone *)(void *)0);
        char reconfigure_set_config_dir__1__2__1____tstamp[20l];
        struct tm __tm;
        localtime_r(&reconfigure_set_config_dir__1__2__1____now.tv_sec, &__tm);
        strftime(reconfigure_set_config_dir__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_5;
        return_value_getpid_5=getpid();
        common_debug_print("%.19s.%03d %d->%s: config_dir=%s\n", (const void *)reconfigure_set_config_dir__1__2__1____tstamp, (signed int)(reconfigure_set_config_dir__1__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_5, (const void *)"reconfigure_set_config_dir", (const void *)config_dir);
      }

      goto __CPROVER_DUMP_L6;
    }

  }

  fprintf(stderr, "WARNING!!! Configuration directory %s is not found. Please create it.\nThis directory should contain at least two files: smb.conf and smbnetfs.conf.\nYou may copy smb.conf from the /etc/samba directory. You can find a sample of\nsmbnetfs.conf in the /etc directory.\n\nUsing default settings for now.\n", path);

__CPROVER_DUMP_L6:
  ;
}

// reconfigure_set_default_login_and_configdir
// file reconfigure.c line 95
void reconfigure_set_default_login_and_configdir(void)
{
  char buf[2048l];
  struct passwd *pwd;
  const char *home;
  const char *user;
  const char *dir;
  unsigned int return_value_getuid_1;
  return_value_getuid_1=getuid();
  pwd=getpwuid(return_value_getuid_1);
  user=getenv("USER");
  _Bool tmp_if_expr_2;
  if(user == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)*user == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    user=getenv("LOGNAME");

  _Bool tmp_if_expr_6;
  if(user == ((const char *)NULL))
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = (signed int)*user == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  char *tmp_if_expr_5;
  if(tmp_if_expr_6)
  {
    if(!(pwd == ((struct passwd *)NULL)))
      tmp_if_expr_3 = pwd->pw_name != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = pwd->pw_name != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = pwd->pw_name;

    else
      tmp_if_expr_5 = "anonymous";
    user = tmp_if_expr_5;
    setenv("USER", user, 1);
    setenv("LOGNAME", user, 1);
  }

  auth_set_default_login_name(user);
  home=getenv("HOME");
  _Bool tmp_if_expr_10;
  if(home == ((const char *)NULL))
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = (signed int)*home != 47 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  char *tmp_if_expr_9;
  if(tmp_if_expr_10)
  {
    if(!(pwd == ((struct passwd *)NULL)))
      tmp_if_expr_7 = pwd->pw_dir != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_8 = (signed int)*pwd->pw_dir == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_8 = (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = pwd->pw_dir;

    else
      tmp_if_expr_9 = "/";
    home = tmp_if_expr_9;
    setenv("HOME", home, 1);
  }

  dir = config_dir_postfix;
  unsigned long int return_value_strlen_11;
  return_value_strlen_11=strlen(home);
  unsigned long int return_value_strlen_12;
  return_value_strlen_12=strlen(dir);
  if(1ul + return_value_strlen_11 + return_value_strlen_12 >= 2049ul)
    home = "/";

  strcpy(buf, home);
  unsigned long int return_value_strlen_13;
  return_value_strlen_13=strlen(home);
  strcat(buf, (signed int)home[(signed long int)(return_value_strlen_13 - (unsigned long int)1)] == 47 ? dir + (signed long int)1 : dir);
  reconfigure_set_config_dir(buf);
}

// reconfigure_set_kb_size
// file reconfigure.c line 151
static signed int reconfigure_set_kb_size(char *value, signed int (*func)(unsigned long int))
{
  unsigned long int result;
  signed int return_value_reconfigure_get_size_1;
  return_value_reconfigure_get_size_1=reconfigure_get_size(value, &result);
  signed int return_value;
  if(!(return_value_reconfigure_get_size_1 == 0))
  {
    return_value=func(result * (unsigned long int)1024);
    return return_value;
  }

  else
    return 0;
}

// reconfigure_set_number
// file reconfigure.c line 136
static signed int reconfigure_set_number(char *value, signed int (*func)(signed int))
{
  signed int result;
  signed int return_value_reconfigure_get_number_1;
  return_value_reconfigure_get_number_1=reconfigure_get_number(value, &result);
  signed int return_value;
  if(!(return_value_reconfigure_get_number_1 == 0))
  {
    return_value=func(result);
    return return_value;
  }

  else
    return 0;
}

// reconfigure_split_line
// file reconfigure.c line 213
static signed int reconfigure_split_line(const char *line, char **arg, unsigned long int *arg_len, signed int arg_cnt)
{
  enum config_read_mode mode;
  const char *orig_line;
  char quote_char;
  unsigned long int cur_arg_len;
  signed int cnt = 0;
  for( ; !(cnt >= arg_cnt); cnt = cnt + 1)
    memset((void *)arg[(signed long int)cnt], 0, arg_len[(signed long int)cnt]);
  cnt = 0;
  orig_line = line;
  mode = (enum config_read_mode)DELIMITER;
  cur_arg_len = (unsigned long int)0;
  quote_char = (char)0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  const char *tmp_post_3;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  unsigned long int tmp_post_7;
  while((_Bool)1)
  {
    switch((signed int)mode)
    {
      case DELIMITER:
      {
        if((signed int)*line == 0)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)*line == 35 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          return cnt;

        if((signed int)*line == 9)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (signed int)*line == 32 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
        {
          line = line + 1l;
          goto __CPROVER_DUMP_L30;
        }

        mode = (enum config_read_mode)PLAIN;
        cur_arg_len = (unsigned long int)0;
        if((signed int)*line == 39)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (signed int)*line == 34 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
        {
          mode = (enum config_read_mode)QUOTED;
          tmp_post_3 = line;
          line = line + 1l;
          quote_char = *tmp_post_3;
        }

        goto __CPROVER_DUMP_L30;
      }
      case PLAIN:
      {
        if((signed int)*line == 0)
          return cnt + 1;

        if((signed int)*line == 9)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = (signed int)*line == 32 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
        {
          mode = (enum config_read_mode)DELIMITER;
          cnt = cnt + 1;
          goto __CPROVER_DUMP_L30;
        }

        break;
      }
      case QUOTED:
      {
        if((signed int)*line == 0)
          return (signed int)-((line - orig_line) + (signed long int)1);

        if(*line == quote_char)
        {
          line = line + 1l;
          if(!((signed int)*line == 32))
          {
            if(!((signed int)*line == 9))
            {
              if(!((signed int)*line == 0))
                return (signed int)-((line - orig_line) + (signed long int)1);

            }

          }

          mode = (enum config_read_mode)DELIMITER;
          cnt = cnt + 1;
          goto __CPROVER_DUMP_L30;
        }

        if((signed int)*line == 92)
        {
          if((signed int)line[1l] == 92)
            tmp_if_expr_6 = (_Bool)1;

          else
            tmp_if_expr_6 = line[(signed long int)1] == quote_char ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_6)
            line = line + 1l;

        }

        break;
      }
      default:
        return (signed int)-((line - orig_line) + (signed long int)1);
    }
    if(!(cnt >= arg_cnt))
    {
      if(1ul + cur_arg_len >= arg_len[(signed long int)cnt])
        return (signed int)-((line - orig_line) + (signed long int)1);

      tmp_post_7 = cur_arg_len;
      cur_arg_len = cur_arg_len + 1ul;
      arg[(signed long int)cnt][(signed long int)tmp_post_7] = *line;
    }

    line = line + 1l;

  __CPROVER_DUMP_L30:
    ;
  }
  return -1;
}

// remove_from_list
// file list.h line 77
static inline void remove_from_list(struct __LIST *list, struct __LIST *elem)
{
  (void)list;
  elem->prev->next = elem->next;
  elem->next->prev = elem->prev;
  elem->prev = (struct __LIST *)(void *)0;
  elem->next = elem->prev;
}

// remove_from_list_link1
// file list.h line 77
static inline void remove_from_list_link1(struct __LIST *list_link1, struct __LIST *elem_link1)
{
  (void)list_link1;
  elem_link1->prev->next = elem_link1->next;
  elem_link1->next->prev = elem_link1->prev;
  elem_link1->prev = (struct __LIST *)(void *)0;
  elem_link1->next = elem_link1->prev;
}

// remove_from_list_link2
// file list.h line 77
static inline void remove_from_list_link2(struct __LIST *list_link2, struct __LIST *elem_link2)
{
  (void)list_link2;
  elem_link2->prev->next = elem_link2->next;
  elem_link2->next->prev = elem_link2->prev;
  elem_link2->prev = (struct __LIST *)(void *)0;
  elem_link2->next = elem_link2->prev;
}

// remove_from_list_link3
// file list.h line 77
static inline void remove_from_list_link3(struct __LIST *list_link3, struct __LIST *elem_link3)
{
  (void)list_link3;
  elem_link3->prev->next = elem_link3->next;
  elem_link3->next->prev = elem_link3->prev;
  elem_link3->prev = (struct __LIST *)(void *)0;
  elem_link3->next = elem_link3->prev;
}

// remove_from_list_link4
// file list.h line 77
static inline void remove_from_list_link4(struct __LIST *list_link4, struct __LIST *elem_link4)
{
  (void)list_link4;
  elem_link4->prev->next = elem_link4->next;
  elem_link4->next->prev = elem_link4->prev;
  elem_link4->prev = (struct __LIST *)(void *)0;
  elem_link4->next = elem_link4->prev;
}

// remove_from_list_link5
// file list.h line 77
static inline void remove_from_list_link5(struct __LIST *list_link5, struct __LIST *elem_link5)
{
  (void)list_link5;
  elem_link5->prev->next = elem_link5->next;
  elem_link5->next->prev = elem_link5->prev;
  elem_link5->prev = (struct __LIST *)(void *)0;
  elem_link5->next = elem_link5->prev;
}

// req_timeout_check
// file auth-gnome-keyring.c line 83
static signed int req_timeout_check(struct _GSource *source)
{
  signed int timeout;
  signed int return_value_req_timeout_prepare_1;
  return_value_req_timeout_prepare_1=req_timeout_prepare(source, &timeout);
  return return_value_req_timeout_prepare_1;
}

// req_timeout_dispatch
// file auth-gnome-keyring.c line 89
static signed int req_timeout_dispatch(struct _GSource *source, signed int (*callback)(void *), void *user_data)
{
  struct req_timeout *req;
  (void)callback;
  (void)user_data;
  req = &(*((struct req_timeout *)(void *)((unsigned char *)source + (signed long int)sizeof(struct _GSource) /*96ul*/ )));
  req->expired = (signed int)!(0 != 0);
  g_main_loop_quit(loop);
  return (signed int)!(0 != 0);
}

// req_timeout_finalize
// file auth-gnome-keyring.c line 103
static void req_timeout_finalize(struct _GSource *source)
{
  struct req_timeout *req = &(*((struct req_timeout *)(void *)((unsigned char *)source + (signed long int)sizeof(struct _GSource) /*96ul*/ )));
  req->timeout_len = 0;
  req->expired = 0;
}

// req_timeout_prepare
// file auth-gnome-keyring.c line 59
static signed int req_timeout_prepare(struct _GSource *source, signed int *timeout)
{
  struct req_timeout *req;
  struct timeval tv;
  signed int diff;
  req = &(*((struct req_timeout *)(void *)((unsigned char *)source + (signed long int)sizeof(struct _GSource) /*96ul*/ )));
  gettimeofday(&tv, (struct timezone *)(void *)0);
  diff = (signed int)((tv.tv_sec - req->start_time.tv_sec) * (signed long int)1000 + (tv.tv_usec - req->start_time.tv_usec) / (signed long int)1000);
  if(!(diff >= 0))
  {
    req->start_time = tv;
    *timeout = req->timeout_len;
    return 0;
  }

  else
    if(!(diff >= req->timeout_len))
    {
      *timeout = req->timeout_len - diff;
      return 0;
    }

  return (signed int)!(0 != 0);
}

// request_timeout_init
// file auth-gnome-keyring.c line 111
static void request_timeout_init(struct req_timeout *req, signed int timeout)
{
  req->expired = 0;
  req->timeout_len = timeout;
  gettimeofday(&req->start_time, (struct timezone *)(void *)0);
}

// samba_add_new_context
// file samba.c line 48
static struct samba_ctx * samba_add_new_context(const char *name, unsigned long int len)
{
  struct samba_ctx *ctx;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct samba_ctx) /*240ul*/ );
  ctx = (struct samba_ctx *)return_value_malloc_1;
  if(ctx == ((struct samba_ctx *)NULL))
    return (struct samba_ctx *)(void *)0;

  else
  {
    memset((void *)ctx, 0, sizeof(struct samba_ctx) /*240ul*/ );
    signed int return_value_smb_conn_ctx_init_2;
    return_value_smb_conn_ctx_init_2=smb_conn_ctx_init(&ctx->smb_ctx, samba_max_rw_block_size);
    if(!(return_value_smb_conn_ctx_init_2 == 0))
    {
      free((void *)ctx);
      return (struct samba_ctx *)(void *)0;
    }

    else
    {
      samba_set_context_name(ctx, name, len);
      add_to_list_back_link1(&samba_ctx_list, &ctx->entries);
      samba_ctx_count = samba_ctx_count + 1;
      return ctx;
    }
  }
}

// samba_allocate_ctxs
// file samba.c line 154
void samba_allocate_ctxs(void)
{
  struct samba_ctx *ctx;
  pthread_mutex_lock(&m_samba);
  while(!(samba_ctx_count >= samba_ctx_max_count))
  {
    ctx=samba_add_new_context("", (unsigned long int)0);
    if(ctx == ((struct samba_ctx *)NULL))
      break;

  }
  pthread_mutex_unlock(&m_samba);
}

// samba_chmod
// file samba.c line 453
signed int samba_chmod(const char *url, unsigned int mode)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_chmod(&ctx->smb_ctx, url, mode);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_close
// file samba.c line 303
signed int samba_close(struct smb_conn_file *fd)
{
  signed int error;
  signed int result;
  struct smb_conn_ctx *ctx;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  ctx = fd->ctx;
  result=smb_conn_close(ctx, fd);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  error = *return_value___errno_location_3;
  if(result == 0)
    samba_release_ctx((struct samba_ctx *)((char *)ctx - (signed long int)24ul));

  signed int *return_value___errno_location_4;
  return_value___errno_location_4=__errno_location();
  *return_value___errno_location_4 = error;
  return result;
}

// samba_closedir
// file samba.c line 365
signed int samba_closedir(struct smb_conn_file *fd)
{
  signed int error;
  signed int result;
  struct smb_conn_ctx *ctx;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  ctx = fd->ctx;
  result=smb_conn_closedir(ctx, fd);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  error = *return_value___errno_location_3;
  if(result == 0)
    samba_release_ctx((struct samba_ctx *)((char *)ctx - (signed long int)24ul));

  signed int *return_value___errno_location_4;
  return_value___errno_location_4=__errno_location();
  *return_value___errno_location_4 = error;
  return result;
}

// samba_creat
// file samba.c line 241
struct smb_conn_file * samba_creat(const char *url, unsigned int mode)
{
  signed int error;
  struct samba_ctx *ctx;
  struct smb_conn_file *fd;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  fd=smb_conn_creat(&ctx->smb_ctx, url, mode);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  if(fd == ((struct smb_conn_file *)NULL))
    samba_release_ctx(ctx);

  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return fd;
}

// samba_destroy_unused_ctxs
// file samba.c line 164
void samba_destroy_unused_ctxs(void)
{
  struct __LIST *elem;
  struct samba_ctx *ctx;
  pthread_mutex_lock(&m_samba);
  elem=first_list_elem_link4(&samba_ctx_list);
  signed int return_value_is_valid_list_elem_1;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link4(&samba_ctx_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    ctx = (struct samba_ctx *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(ctx->ref_count == 0)
      samba_try_to_remove_context(ctx);

  }
  while((_Bool)1);
  signed int return_value_common_get_smbnetfs_debug_level_4;
  return_value_common_get_smbnetfs_debug_level_4=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_4 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    const char *return_value_samba_get_context_status_string_3;
    return_value_samba_get_context_status_string_3=samba_get_context_status_string();
    common_debug_print("%.19s.%03d %d->%s: ctx_total=%d, list=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"samba_destroy_unused_ctxs", samba_ctx_count, return_value_samba_get_context_status_string_3);
  }

  pthread_mutex_unlock(&m_samba);
}

// samba_find_by_name
// file samba.c line 72
static struct samba_ctx * samba_find_by_name(const char *name, unsigned long int len)
{
  struct samba_ctx *ctx;
  struct __LIST *elem;
  if(len >= sizeof(char [128l]) /*128ul*/ )
    len = sizeof(char [128l]) /*128ul*/  - (unsigned long int)1;

  elem=first_list_elem_link4(&samba_ctx_list);
  signed int return_value_is_valid_list_elem_1;
  do
  {
    return_value_is_valid_list_elem_1=is_valid_list_elem_link4(&samba_ctx_list, elem);
    if(return_value_is_valid_list_elem_1 == 0)
      break;

    ctx = (struct samba_ctx *)((char *)elem - (signed long int)0ul);
    signed int return_value_strncasecmp_2;
    return_value_strncasecmp_2=strncasecmp(ctx->name, name, len);
    if(return_value_strncasecmp_2 == 0)
    {
      if((signed int)ctx->name[(signed long int)len] == 0)
        return ctx;

    }

    elem = elem->next;
  }
  while((_Bool)1);
  return (struct samba_ctx *)(void *)0;
}

// samba_find_oldest
// file samba.c line 87
static struct samba_ctx * samba_find_oldest(void)
{
  struct __LIST *elem;
  elem=last_list_elem_link1(&samba_ctx_list);
  signed int return_value_is_valid_list_elem_1;
  return_value_is_valid_list_elem_1=is_valid_list_elem_link4(&samba_ctx_list, elem);
  if(!(return_value_is_valid_list_elem_1 == 0))
    return (struct samba_ctx *)((char *)elem - (signed long int)0ul);

  else
    return (struct samba_ctx *)(void *)0;
}

// samba_fstat
// file samba.c line 435
signed int samba_fstat(struct smb_conn_file *fd, struct stat *st)
{
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  samba_touch_ctx((struct samba_ctx *)((char *)fd->ctx - (signed long int)24ul));
  signed int return_value_smb_conn_fstat_3;
  return_value_smb_conn_fstat_3=smb_conn_fstat(fd->ctx, fd, st);
  return return_value_smb_conn_fstat_3;
}

// samba_ftruncate
// file samba.c line 444
signed int samba_ftruncate(struct smb_conn_file *fd, signed long int size)
{
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  samba_touch_ctx((struct samba_ctx *)((char *)fd->ctx - (signed long int)24ul));
  signed int return_value_smb_conn_ftruncate_3;
  return_value_smb_conn_ftruncate_3=smb_conn_ftruncate(fd->ctx, fd, size);
  return return_value_smb_conn_ftruncate_3;
}

// samba_get_context_status_string
// file samba.c line 95
static const char * samba_get_context_status_string(void)
{
  struct __LIST *elem;
  signed int ret;
  unsigned long int len;
  char *pos;
  char *ptn;
  static char buffer[4096l];
  memset((void *)buffer, 0, sizeof(char [4096l]) /*4096ul*/ );
  len = sizeof(char [4096l]) /*4096ul*/ ;
  pos = buffer;
  ptn = "%s[%d], ";
  char *tmp_post_1 = pos;
  pos = pos + 1l;
  *tmp_post_1 = (char)40;
  len = len - 1ul;
  elem=first_list_elem_link4(&samba_ctx_list);
  signed int return_value_is_valid_list_elem_2;
  do
  {
    return_value_is_valid_list_elem_2=is_valid_list_elem_link4(&samba_ctx_list, elem);
    if(return_value_is_valid_list_elem_2 == 0)
      break;

    struct samba_ctx *ctx = (struct samba_ctx *)((char *)elem - (signed long int)0ul);
    signed int return_value_is_valid_list_elem_3;
    return_value_is_valid_list_elem_3=is_valid_list_elem_link4(&samba_ctx_list, elem->next);
    if(return_value_is_valid_list_elem_3 == 0)
      ptn = "%s[%d]";

    ret=snprintf(pos, len, ptn, (const void *)ctx->name, ctx->ref_count);
    if(!(ret >= 0))
      goto error;

    if((unsigned long int)ret >= len)
      goto out_of_space;

    pos = pos + (signed long int)ret;
    len = len - (unsigned long int)ret;
    elem = elem->next;
  }
  while((_Bool)1);
  char *tmp_post_4;
  if(len >= 2ul)
  {
    tmp_post_4 = pos;
    pos = pos + 1l;
    *tmp_post_4 = (char)41;
    *pos = (char)0;
    return buffer;
  }

  else
  {

  out_of_space:
    ;
    strcpy((buffer + (signed long int)sizeof(char [4096l]) /*4096ul*/ ) - (signed long int)5, "...)");
    return buffer;

  error:
    ;
    return "(?error?)";
  }
}

// samba_get_ctx
// file samba.c line 180
static struct samba_ctx * samba_get_ctx(const char *url)
{
  unsigned long int len;
  struct samba_ctx *ctx;
  len = (unsigned long int)0;
  for( ; (signed int)url[(signed long int)len] == 47; len = len + 1ul)
    ;
  _Bool tmp_if_expr_1;
  do
  {
    if(!((signed int)url[(signed long int)len] == 0))
      tmp_if_expr_1 = (signed int)url[(signed long int)len] != 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    len = len + 1ul;
  }
  while((_Bool)1);
  signed int return_value_common_get_smbnetfs_debug_level_3;
  return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_3 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    common_debug_print("%.19s.%03d %d->%s: name='%.*s'\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"samba_get_ctx", (signed int)len, url);
  }

  pthread_mutex_lock(&m_samba);
  ctx=samba_find_by_name(url, len);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    if(!(samba_ctx_count >= samba_ctx_max_count))
    {
      ctx=samba_add_new_context(url, len);
      if(!(ctx == ((struct samba_ctx *)NULL)))
        goto exist;

    }

    ctx=samba_find_oldest();
    if(ctx == ((struct samba_ctx *)NULL))
      goto shit_happens;

    samba_set_context_name(ctx, url, len);
  }


exist:
  ;
  samba_touch_ctx_without_lock(ctx);
  ctx->ref_count = ctx->ref_count + 1;

shit_happens:
  ;
  signed int return_value_common_get_smbnetfs_debug_level_6;
  return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_6 >= 6)
  {
    struct timeval samba_get_ctx__1__4____now;
    gettimeofday(&samba_get_ctx__1__4____now, (struct timezone *)(void *)0);
    char samba_get_ctx__1__4____tstamp[20l];
    struct tm samba_get_ctx__1__4____tm;
    localtime_r(&samba_get_ctx__1__4____now.tv_sec, &samba_get_ctx__1__4____tm);
    strftime(samba_get_ctx__1__4____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &samba_get_ctx__1__4____tm);
    signed int return_value_getpid_4;
    return_value_getpid_4=getpid();
    const char *return_value_samba_get_context_status_string_5;
    return_value_samba_get_context_status_string_5=samba_get_context_status_string();
    common_debug_print("%.19s.%03d %d->%s: ctx_total=%d, list=%s\n", (const void *)samba_get_ctx__1__4____tstamp, (signed int)(samba_get_ctx__1__4____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"samba_get_ctx", samba_ctx_count, return_value_samba_get_context_status_string_5);
  }

  pthread_mutex_unlock(&m_samba);
  return ctx;
}

// samba_getxattr
// file samba.c line 500
signed int samba_getxattr(const char *url, const char *name, void *value, unsigned long int size)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_getxattr(&ctx->smb_ctx, url, name, value, size);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_init
// file samba.c line 30
signed int samba_init(unsigned long int max_rw_block_size)
{
  unsigned long int page_size;
  signed int return_value_getpagesize_1;
  return_value_getpagesize_1=getpagesize();
  page_size = (unsigned long int)return_value_getpagesize_1;
  max_rw_block_size = max_rw_block_size - max_rw_block_size % page_size;
  if(max_rw_block_size == 0ul)
    max_rw_block_size = page_size;

  samba_max_rw_block_size = max_rw_block_size;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_3 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_2;
    return_value_getpid_2=getpid();
    common_debug_print("%.19s.%03d %d->%s: max_rw_block_size=%zd\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"samba_init", samba_max_rw_block_size);
  }

  return 1;
}

// samba_listxattr
// file samba.c line 517
signed int samba_listxattr(const char *url, char *list, unsigned long int size)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_listxattr(&ctx->smb_ctx, url, list, size);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_mkdir
// file samba.c line 390
signed int samba_mkdir(const char *url, unsigned int mode)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_mkdir(&ctx->smb_ctx, url, mode);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_open
// file samba.c line 225
struct smb_conn_file * samba_open(const char *url, signed int flags, unsigned int mode)
{
  signed int error;
  struct samba_ctx *ctx;
  struct smb_conn_file *fd;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  fd=smb_conn_open(&ctx->smb_ctx, url, flags, mode);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  if(fd == ((struct smb_conn_file *)NULL))
    samba_release_ctx(ctx);

  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return fd;
}

// samba_opendir
// file samba.c line 349
struct smb_conn_file * samba_opendir(const char *url)
{
  signed int error;
  struct samba_ctx *ctx;
  struct smb_conn_file *fd;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  fd=smb_conn_opendir(&ctx->smb_ctx, url);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  if(fd == ((struct smb_conn_file *)NULL))
    samba_release_ctx(ctx);

  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return fd;
}

// samba_read
// file samba.c line 257
signed long int samba_read(struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize)
{
  signed long int result = (signed long int)0;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  samba_touch_ctx((struct samba_ctx *)((char *)fd->ctx - (signed long int)24ul));
  while(bufsize >= 1ul)
  {
    signed long int res;
    unsigned long int count = bufsize <= samba_max_rw_block_size ? bufsize : samba_max_rw_block_size;
    res=smb_conn_read(fd->ctx, fd, offset, buf, count);
    if(res == -1l)
      return res;

    buf = buf + res;
    offset = offset + res;
    bufsize = bufsize - (unsigned long int)res;
    result = result + res;
    if(!(res == (signed long int)count))
      break;

  }
  return result;
}

// samba_readdir
// file samba.c line 381
signed long int samba_readdir(struct smb_conn_file *fd, void *buf, unsigned long int bufsize)
{
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  samba_touch_ctx((struct samba_ctx *)((char *)fd->ctx - (signed long int)24ul));
  signed long int return_value_smb_conn_readdir_3;
  return_value_smb_conn_readdir_3=smb_conn_readdir(fd->ctx, fd, buf, bufsize);
  return return_value_smb_conn_readdir_3;
}

// samba_release_ctx
// file samba.c line 210
static void samba_release_ctx(struct samba_ctx *ctx)
{
  pthread_mutex_lock(&m_samba);
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: ctx->name=%s[%d]\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"samba_release_ctx", (const void *)ctx->name, ctx->ref_count);
  }

  signed int return_value_common_get_smbnetfs_debug_level_4;
  if(ctx->ref_count >= 1)
  {
    ctx->ref_count = ctx->ref_count - 1;
    if(!(samba_ctx_max_count >= samba_ctx_count))
    {
      if(ctx->ref_count == 0)
        samba_try_to_remove_context(ctx);

    }

  }

  else
  {
    return_value_common_get_smbnetfs_debug_level_4=common_get_smbnetfs_debug_level_link7();
    if(return_value_common_get_smbnetfs_debug_level_4 >= 0)
    {
      struct timeval samba_release_ctx__1__3__1____now;
      gettimeofday(&samba_release_ctx__1__3__1____now, (struct timezone *)(void *)0);
      char samba_release_ctx__1__3__1____tstamp[20l];
      struct tm samba_release_ctx__1__3__1____tm;
      localtime_r(&samba_release_ctx__1__3__1____now.tv_sec, &samba_release_ctx__1__3__1____tm);
      strftime(samba_release_ctx__1__3__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &samba_release_ctx__1__3__1____tm);
      signed int return_value_getpid_3;
      return_value_getpid_3=getpid();
      common_debug_print("%.19s.%03d %d->%s: WARNING! trying to release an unused context!\n", (const void *)samba_release_ctx__1__3__1____tstamp, (signed int)(samba_release_ctx__1__3__1____now.tv_usec / (signed long int)1000), return_value_getpid_3, (const void *)"samba_release_ctx");
    }

  }
  signed int return_value_common_get_smbnetfs_debug_level_7;
  return_value_common_get_smbnetfs_debug_level_7=common_get_smbnetfs_debug_level_link7();
  if(return_value_common_get_smbnetfs_debug_level_7 >= 6)
  {
    struct timeval samba_release_ctx__1__4____now;
    gettimeofday(&samba_release_ctx__1__4____now, (struct timezone *)(void *)0);
    char samba_release_ctx__1__4____tstamp[20l];
    struct tm samba_release_ctx__1__4____tm;
    localtime_r(&samba_release_ctx__1__4____now.tv_sec, &samba_release_ctx__1__4____tm);
    strftime(samba_release_ctx__1__4____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &samba_release_ctx__1__4____tm);
    signed int return_value_getpid_5;
    return_value_getpid_5=getpid();
    const char *return_value_samba_get_context_status_string_6;
    return_value_samba_get_context_status_string_6=samba_get_context_status_string();
    common_debug_print("%.19s.%03d %d->%s: ctx_total=%d, list=%s\n", (const void *)samba_release_ctx__1__4____tstamp, (signed int)(samba_release_ctx__1__4____now.tv_usec / (signed long int)1000), return_value_getpid_5, (const void *)"samba_release_ctx", samba_ctx_count, return_value_samba_get_context_status_string_6);
  }

  pthread_mutex_unlock(&m_samba);
}

// samba_removexattr
// file samba.c line 532
signed int samba_removexattr(const char *url, const char *name)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_removexattr(&ctx->smb_ctx, url, name);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_rename
// file samba.c line 334
signed int samba_rename(const char *old_url, const char *new_url)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(old_url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_rename(&ctx->smb_ctx, old_url, new_url);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_rmdir
// file samba.c line 405
signed int samba_rmdir(const char *url)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_rmdir(&ctx->smb_ctx, url);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_set_context_name
// file samba.c line 42
static void samba_set_context_name(struct samba_ctx *ctx, const char *name, unsigned long int len)
{
  if(len >= sizeof(char [128l]) /*128ul*/ )
    len = sizeof(char [128l]) /*128ul*/  - (unsigned long int)1;

  if(len >= 1ul)
    strncpy(ctx->name, name, len);

  ctx->name[(signed long int)len] = (char)0;
}

// samba_set_max_ctx_count
// file samba.c line 145
signed int samba_set_max_ctx_count(signed int count)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(count >= 3))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link7();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: count=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"samba_set_max_ctx_count", count);
    }

    pthread_mutex_lock(&m_samba);
    samba_ctx_max_count = count;
    pthread_mutex_unlock(&m_samba);
    return 1;
  }
}

// samba_setxattr
// file samba.c line 483
signed int samba_setxattr(const char *url, const char *name, const void *value, unsigned long int size, signed int flags)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_setxattr(&ctx->smb_ctx, url, name, value, size, flags);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_stat
// file samba.c line 420
signed int samba_stat(const char *url, struct stat *st)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_stat(&ctx->smb_ctx, url, st);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_touch_ctx
// file samba.c line 139
static void samba_touch_ctx(struct samba_ctx *ctx)
{
  pthread_mutex_lock(&m_samba);
  samba_touch_ctx_without_lock(ctx);
  pthread_mutex_unlock(&m_samba);
}

// samba_touch_ctx_without_lock
// file samba.c line 133
static inline void samba_touch_ctx_without_lock(struct samba_ctx *ctx)
{
  remove_from_list_link4(&samba_ctx_list, &ctx->entries);
  add_to_list_link3(&samba_ctx_list, &ctx->entries);
}

// samba_try_to_remove_context
// file samba.c line 64
static signed int samba_try_to_remove_context(struct samba_ctx *ctx)
{
  if(!(ctx->ref_count == 0))
    return -1;

  else
  {
    signed int return_value_smb_conn_ctx_destroy_1;
    return_value_smb_conn_ctx_destroy_1=smb_conn_ctx_destroy(&ctx->smb_ctx);
    if(!(return_value_smb_conn_ctx_destroy_1 == 0))
      return -1;

    else
    {
      samba_ctx_count = samba_ctx_count - 1;
      remove_from_list_link4(&samba_ctx_list, &ctx->entries);
      return 0;
    }
  }
}

// samba_unlink
// file samba.c line 319
signed int samba_unlink(const char *url)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_unlink(&ctx->smb_ctx, url);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_utimes
// file samba.c line 468
signed int samba_utimes(const char *url, struct timeval *tbuf)
{
  signed int error;
  signed int result;
  struct samba_ctx *ctx;
  ctx=samba_get_ctx(url);
  if(ctx == ((struct samba_ctx *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return -1;
  }

  result=smb_conn_utimes(&ctx->smb_ctx, url, tbuf);
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  error = *return_value___errno_location_2;
  samba_release_ctx(ctx);
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  *return_value___errno_location_3 = error;
  return result;
}

// samba_write
// file samba.c line 280
signed long int samba_write(struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize)
{
  signed long int result = (signed long int)0;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fd->ctx == (struct smb_conn_ctx *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  samba_touch_ctx((struct samba_ctx *)((char *)fd->ctx - (signed long int)24ul));
  while(bufsize >= 1ul)
  {
    signed long int res;
    unsigned long int count = bufsize <= samba_max_rw_block_size ? bufsize : samba_max_rw_block_size;
    res=smb_conn_write(fd->ctx, fd, offset, buf, count);
    if(res == -1l)
      return res;

    buf = buf + res;
    offset = offset + res;
    bufsize = bufsize - (unsigned long int)res;
    result = result + res;
    if(!(res == (signed long int)count))
      break;

  }
  return result;
}

// set_signal_reactions
// file main.c line 103
static void set_signal_reactions(void)
{
  /* tag-#anon#lST[S32'signum'||U32'_pad0'||l*{S8}_S8_'name'|] */
struct anonymous_21
{
  // signum
  signed int signum;
  // name
  char *name;
};

/* */
  ;
  struct anonymous_21 sig[3l] = { { .signum=4, .name="SIGILL" }, { .signum=11, .name="SIGSEGV" }, { .signum=6, .name="SIGABRT" } };
  signed int i;
  struct sigaction action;
  sigemptyset(&action.sa_mask);
  action.__sigaction_handler.sa_handler = sig_handler;
  action.sa_flags = 0x10000000;
  i = 0;
  for( ; !(i >= 3); i = i + 1)
  {
    signed int return_value_sigaction_1;
    return_value_sigaction_1=sigaction(sig[(signed long int)i].signum, &action, (struct sigaction *)(void *)0);
    if(!(return_value_sigaction_1 >= 0))
    {
      fprintf(stderr, "Can't set %s handler\n", sig[(signed long int)i].name);
      exit(1);
    }

  }
  sigemptyset(&action.sa_mask);
  sigaddset(&action.sa_mask, 1);
  sigaddset(&action.sa_mask, 17);
  signed int return_value_pthread_sigmask_2;
  return_value_pthread_sigmask_2=pthread_sigmask(0, &action.sa_mask, (struct anonymous_10 *)(void *)0);
  if(!(return_value_pthread_sigmask_2 == 0))
  {
    fprintf(stderr, "Can't block SIGHUP and SIGCHLD signals.\n");
    exit(1);
  }

}

// sig_handler
// file main.c line 96
static void sig_handler(signed int signum)
{
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  fprintf(stderr, "%d->%s: signal %d received\n", return_value_getpid_1, (const void *)"sig_handler", signum);
  common_print_backtrace();
  exit(signum);
}

// smb_conn_chmod
// file smb_conn.c line 1160
signed int smb_conn_chmod(struct smb_conn_ctx *ctx, const char *url, unsigned int mode)
{
  signed int error;
  struct smb_conn_url_mode_query query;
  query.url_offs = sizeof(struct smb_conn_url_mode_query) /*16ul*/ ;
  query.mode = mode;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)CHMOD, (void *)&query, sizeof(struct smb_conn_url_mode_query) /*16ul*/ , (void *)0, (unsigned long int)0, url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// smb_conn_close
// file smb_conn.c line 784
signed int smb_conn_close(struct smb_conn_ctx *ctx, struct smb_conn_file *fd)
{
  signed int error;
  struct smb_conn_file *file;
  if(fd == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  error = 22;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPEN)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      if(!(file->srv_fd == NULL))
      {
        struct smb_conn_query_result result;
        struct smb_conn_fd_query query;
        query.srv_fd = file->srv_fd;
        smb_conn_process_query_lowlevel(ctx, (enum smb_conn_cmd)CLOSE, (void *)&query, sizeof(struct smb_conn_fd_query) /*8ul*/ , &result, (void *)0, (unsigned long int)0, (void *)0);
      }

      remove_from_list_link3(&ctx->smb_conn_file_list, &file->entries);
      free((void *)file);
      error = 0;
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_2;
  if(!(error == 0))
  {
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
  }

  return error != 0 ? -1 : 0;
}

// smb_conn_closedir
// file smb_conn.c line 908
signed int smb_conn_closedir(struct smb_conn_ctx *ctx, struct smb_conn_file *fd)
{
  signed int error;
  struct smb_conn_file *file;
  if(fd == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  error = 22;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPENDIR)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      if(!(file->srv_fd == NULL))
      {
        struct smb_conn_query_result result;
        struct smb_conn_fd_query query;
        query.srv_fd = file->srv_fd;
        smb_conn_process_query_lowlevel(ctx, (enum smb_conn_cmd)CLOSEDIR, (void *)&query, sizeof(struct smb_conn_fd_query) /*8ul*/ , &result, (void *)0, (unsigned long int)0, (void *)0);
      }

      remove_from_list_link3(&ctx->smb_conn_file_list, &file->entries);
      free((void *)file);
      error = 0;
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_2;
  if(!(error == 0))
  {
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
  }

  return error != 0 ? -1 : 0;
}

// smb_conn_connection_close
// file smb_conn.c line 115
static void smb_conn_connection_close(struct smb_conn_ctx *ctx)
{
  struct __LIST *elem;
  struct smb_conn_file *conn_file;
  signed int return_value_is_valid_list_elem_1;
  if(!(ctx->shmem_ptr == ((char *)NULL)))
  {
    process_kill_by_smb_conn_fd(ctx->conn_fd);
    ctx->conn_fd = -1;
    elem=first_list_elem_link3(&ctx->smb_conn_file_list);
    do
    {
      return_value_is_valid_list_elem_1=is_valid_list_elem_link3(&ctx->smb_conn_file_list, elem);
      if(return_value_is_valid_list_elem_1 == 0)
        break;

      conn_file = (struct smb_conn_file *)((char *)elem - (signed long int)0ul);
      conn_file->access_time = (signed long int)0;
      conn_file->srv_fd = (void *)0;
      elem = elem->next;
    }
    while((_Bool)1);
  }

}

// smb_conn_creat
// file smb_conn.c line 652
struct smb_conn_file * smb_conn_creat(struct smb_conn_ctx *ctx, const char *url, unsigned int mode)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_url_mode_query query;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct smb_conn_file) /*56ul*/  + return_value_strlen_1 + (unsigned long int)1);
  file = (struct smb_conn_file *)return_value_malloc_2;
  if(file == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  memset((void *)&file->entries, 0, sizeof(struct __LIST) /*16ul*/ );
  file->access_time = (signed long int)0;
  file->ctx = ctx;
  file->url = (char *)file + (signed long int)sizeof(struct smb_conn_file) /*56ul*/ ;
  file->reopen_cmd = (enum smb_conn_cmd)OPEN;
  file->reopen_flags = 01;
  file->srv_fd = (void *)0;
  strcpy(file->url, url);
  query.url_offs = sizeof(struct smb_conn_url_mode_query) /*16ul*/ ;
  query.mode = mode;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  file->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)CREAT, (void *)&query, sizeof(struct smb_conn_url_mode_query) /*16ul*/ , (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ , url, (void *)0);
  if(error == 0)
  {
    file->srv_fd = reply.srv_fd;
    add_to_list_link2(&ctx->smb_conn_file_list, &file->entries);
  }

  else
  {
    free((void *)file);
    file = (struct smb_conn_file *)(void *)0;
  }
  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_4;
  if(!(error == 0))
  {
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = error;
  }

  return file;
}

// smb_conn_ctx_destroy
// file smb_conn.c line 160
signed int smb_conn_ctx_destroy(struct smb_conn_ctx *ctx)
{
  signed int result = -1;
  if(ctx->shmem_ptr == ((char *)NULL))
    return -1;

  else
  {
    pthread_mutex_lock(&ctx->mutex);
    signed int return_value_is_list_empty_1;
    return_value_is_list_empty_1=is_list_empty(&ctx->smb_conn_file_list);
    if(!(return_value_is_list_empty_1 == 0))
    {
      if(!(ctx->conn_fd == -1))
        smb_conn_connection_close(ctx);

      munmap((void *)ctx->shmem_ptr, ctx->shmem_size);
      ctx->shmem_ptr = (char *)(void *)0;
      result = 0;
    }

    pthread_mutex_unlock(&ctx->mutex);
    if(result == 0)
      pthread_mutex_destroy(&ctx->mutex);

    return result;
  }
}

// smb_conn_ctx_init
// file smb_conn.c line 142
signed int smb_conn_ctx_init(struct smb_conn_ctx *ctx, unsigned long int shmem_size)
{
  signed int return_value_getpagesize_1;
  return_value_getpagesize_1=getpagesize();
  if(!((signed long int)shmem_size >= (signed long int)return_value_getpagesize_1))
    return -1;

  else
  {
    init_list(&ctx->smb_conn_file_list);
    pthread_mutex_init(&ctx->mutex, (const union anonymous_5 *)(void *)0);
    ctx->access_time=time((signed long int *)(void *)0);
    ctx->shmem_size = shmem_size;
    ctx->conn_fd = -1;
    void *return_value_mmap_2;
    return_value_mmap_2=mmap((void *)0, ctx->shmem_size, 0x1 | 0x2, 0x01 | 0x20, -1, (signed long int)0);
    ctx->shmem_ptr = (char *)return_value_mmap_2;
    if(ctx->shmem_ptr == (char *)-1)
    {
      pthread_mutex_destroy(&ctx->mutex);
      return -1;
    }

    else
      return 0;
  }
}

// smb_conn_fstat
// file smb_conn.c line 1087
signed int smb_conn_fstat(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, struct stat *st)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_fd_query query;
  struct smb_conn_stat_reply reply;
  if(fd == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  error = 22;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPEN)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      file->access_time=time((signed long int *)(void *)0);
      error=smb_conn_process_fd_query(ctx, (enum smb_conn_cmd)FSTAT, file, &query.srv_fd, (void *)&query, sizeof(struct smb_conn_fd_query) /*8ul*/ , (void *)&reply, sizeof(struct smb_conn_stat_reply) /*144ul*/ );
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
    return -1;
  }

  memcpy((void *)st, (const void *)&reply.stat, sizeof(struct stat) /*144ul*/ );
  return 0;
}

// smb_conn_ftruncate
// file smb_conn.c line 1124
signed int smb_conn_ftruncate(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int size)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_ftruncate_query query;
  if(fd == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  query.offset = size;
  error = 22;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPEN)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      file->access_time=time((signed long int *)(void *)0);
      error=smb_conn_process_fd_query(ctx, (enum smb_conn_cmd)FTRUNCATE, file, &query.srv_fd, (void *)&query, sizeof(struct smb_conn_ftruncate_query) /*16ul*/ , (void *)0, (unsigned long int)0);
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
    return -1;
  }

  return 0;
}

// smb_conn_get_max_passwd_query_count
// file smb_conn.c line 100
static inline signed int smb_conn_get_max_passwd_query_count(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&smb_conn_max_passwd_query_count, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// smb_conn_get_max_retry_count
// file smb_conn.c line 89
static inline signed int smb_conn_get_max_retry_count(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&smb_conn_max_retry_count, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// smb_conn_get_server_reply_timeout
// file smb_conn.c line 111
static inline signed int smb_conn_get_server_reply_timeout(void)
{
  signed int tmp_statement_expression_1;
  signed int return_value___atomic_load_4_2;
  return_value___atomic_load_4_2=__atomic_load_4(&smb_conn_server_reply_timeout, 5);
  tmp_statement_expression_1 = (signed int)return_value___atomic_load_4_2;
  return tmp_statement_expression_1;
}

// smb_conn_getxattr
// file smb_conn.c line 1237
signed int smb_conn_getxattr(struct smb_conn_ctx *ctx, const char *url, const char *name, void *value, unsigned long int size)
{
  signed int error;
  struct smb_conn_getxattr_query query;
  struct smb_conn_buf_reply reply;
  if(!(ctx->shmem_size >= size))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  query.url_offs = sizeof(struct smb_conn_getxattr_query) /*24ul*/ ;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(url);
  query.name_offs = sizeof(struct smb_conn_getxattr_query) /*24ul*/  + return_value_strlen_2 + (unsigned long int)1;
  query.bufsize = size;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)GETXATTR, (void *)&query, sizeof(struct smb_conn_getxattr_query) /*24ul*/ , (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ , url, name, (void *)0);
  if(error == 0 && reply.bufsize >= 1l && (signed long int)size >= reply.bufsize)
    memcpy(value, (const void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize);

  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = error;
    return -1;
  }

  _Bool tmp_if_expr_5;
  if(size == 0ul)
    tmp_if_expr_5 = reply.bufsize > (signed long int)ctx->shmem_size ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_5 = (_Bool)0;
  if(size >= 1ul && !((signed long int)size >= reply.bufsize) || tmp_if_expr_5)
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = 5;
    return -1;
  }

  return (signed int)reply.bufsize;
}

// smb_conn_is_neg_cache_candidate
// file smb_conn.c line 45
static inline signed int smb_conn_is_neg_cache_candidate(enum smb_conn_cmd query_cmd, struct smb_conn_query_result *result)
{
  if(result->process_state == 1)
  {
    if(!(result->errno_value == 110) && !(result->errno_value == 111) && !(result->errno_value == 113))
    {
      if(result->errno_value == 22)
        goto __CPROVER_DUMP_L2;

      goto __CPROVER_DUMP_L4;
    }

    return 1;

  __CPROVER_DUMP_L2:
    ;
    if(!((signed int)query_cmd == OPENDIR) && !((signed int)query_cmd == STAT))
      goto __CPROVER_DUMP_L4;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    return 0;
  }
}

// smb_conn_listxattr
// file smb_conn.c line 1278
signed int smb_conn_listxattr(struct smb_conn_ctx *ctx, const char *url, char *list, unsigned long int size)
{
  signed int error;
  struct smb_conn_listxattr_query query;
  struct smb_conn_buf_reply reply;
  if(!(ctx->shmem_size >= size))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  query.url_offs = sizeof(struct smb_conn_listxattr_query) /*16ul*/ ;
  query.bufsize = size;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)LISTXATTR, (void *)&query, sizeof(struct smb_conn_listxattr_query) /*16ul*/ , (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ , url, (void *)0);
  if(error == 0 && reply.bufsize >= 1l && (signed long int)size >= reply.bufsize)
    memcpy((void *)list, (const void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize);

  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
    return -1;
  }

  _Bool tmp_if_expr_4;
  if(size == 0ul)
    tmp_if_expr_4 = reply.bufsize > (signed long int)ctx->shmem_size ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  if(size >= 1ul && !((signed long int)size >= reply.bufsize) || tmp_if_expr_4)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 5;
    return -1;
  }

  return (signed int)reply.bufsize;
}

// smb_conn_mkdir
// file smb_conn.c line 1021
signed int smb_conn_mkdir(struct smb_conn_ctx *ctx, const char *url, unsigned int mode)
{
  signed int error;
  struct smb_conn_url_mode_query query;
  query.url_offs = sizeof(struct smb_conn_url_mode_query) /*16ul*/ ;
  query.mode = mode;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)MKDIR, (void *)&query, sizeof(struct smb_conn_url_mode_query) /*16ul*/ , (void *)0, (unsigned long int)0, url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// smb_conn_open
// file smb_conn.c line 605
struct smb_conn_file * smb_conn_open(struct smb_conn_ctx *ctx, const char *url, signed int flags, unsigned int mode)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_open_query query;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct smb_conn_file) /*56ul*/  + return_value_strlen_1 + (unsigned long int)1);
  file = (struct smb_conn_file *)return_value_malloc_2;
  if(file == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  memset((void *)&file->entries, 0, sizeof(struct __LIST) /*16ul*/ );
  file->access_time = (signed long int)0;
  file->ctx = ctx;
  file->url = (char *)file + (signed long int)sizeof(struct smb_conn_file) /*56ul*/ ;
  file->reopen_cmd = (enum smb_conn_cmd)OPEN;
  file->reopen_flags = flags & ~(0100 | 0200 | 01000);
  file->srv_fd = (void *)0;
  strcpy(file->url, url);
  query.url_offs = sizeof(struct smb_conn_open_query) /*16ul*/ ;
  query.mode = mode;
  query.flags = flags;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  file->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)OPEN, (void *)&query, sizeof(struct smb_conn_open_query) /*16ul*/ , (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ , url, (void *)0);
  if(error == 0)
  {
    file->srv_fd = reply.srv_fd;
    add_to_list_link2(&ctx->smb_conn_file_list, &file->entries);
  }

  else
  {
    free((void *)file);
    file = (struct smb_conn_file *)(void *)0;
  }
  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_4;
  if(!(error == 0))
  {
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = error;
  }

  return file;
}

// smb_conn_opendir
// file smb_conn.c line 863
struct smb_conn_file * smb_conn_opendir(struct smb_conn_ctx *ctx, const char *url)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_url_query query;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct smb_conn_file) /*56ul*/  + return_value_strlen_1 + (unsigned long int)1);
  file = (struct smb_conn_file *)return_value_malloc_2;
  if(file == ((struct smb_conn_file *)NULL))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 12;
    return (struct smb_conn_file *)(void *)0;
  }

  memset((void *)&file->entries, 0, sizeof(struct __LIST) /*16ul*/ );
  file->access_time = (signed long int)0;
  file->ctx = ctx;
  file->url = (char *)file + (signed long int)sizeof(struct smb_conn_file) /*56ul*/ ;
  file->reopen_cmd = (enum smb_conn_cmd)OPENDIR;
  file->reopen_flags = 0;
  file->srv_fd = (void *)0;
  strcpy(file->url, url);
  query.url_offs = sizeof(struct smb_conn_url_query) /*8ul*/ ;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  file->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)OPENDIR, (void *)&query, sizeof(struct smb_conn_url_query) /*8ul*/ , (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ , url, (void *)0);
  if(error == 0)
  {
    add_to_list_link2(&ctx->smb_conn_file_list, &file->entries);
    file->srv_fd = reply.srv_fd;
  }

  else
  {
    free((void *)file);
    file = (struct smb_conn_file *)(void *)0;
  }
  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_4;
  if(!(error == 0))
  {
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = error;
  }

  return file;
}

// smb_conn_process_fd_query
// file smb_conn.c line 527
static signed int smb_conn_process_fd_query(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, struct smb_conn_file *file, void **query_fd_ptr, void *query, unsigned long int query_len, void *reply, unsigned long int reply_len)
{
  signed int count;
  signed int retval;
  struct smb_conn_query_result result;
  _Bool tmp_if_expr_1;
  if(file == ((struct smb_conn_file *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = file->url == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  signed int return_value_smb_conn_query_result_check_3;
  signed int return_value_smb_conn_query_result_map_5;
  signed int return_value_smb_conn_query_result_check_8;
  signed int return_value_smb_conn_query_result_map_7;
  if(tmp_if_expr_1)
    return 22;

  else
  {
    count = 0;
    do
    {
      signed int return_value_smb_conn_up_if_broken_2;
      return_value_smb_conn_up_if_broken_2=smb_conn_up_if_broken(ctx);
      if(!(return_value_smb_conn_up_if_broken_2 == 0))
        break;

      if(file->srv_fd == NULL)
      {
        /* tag-#anon#lUN[lSYM#tag-smb_conn_open_query#'open'||lSYM#tag-smb_conn_url_query#'opendir'|] */
union anonymous_0
{
  // open
  struct smb_conn_open_query open;
  // opendir
  struct smb_conn_url_query opendir;
};

/* */
        ;
        union anonymous_0 fd_query;
        unsigned long int fd_len;
        struct smb_conn_fd_reply fd_reply;
        switch((signed int)file->reopen_cmd)
        {
          case OPEN:
          {
            fd_len = sizeof(struct smb_conn_open_query) /*16ul*/ ;
            fd_query.open.url_offs = sizeof(struct smb_conn_open_query) /*16ul*/ ;
            fd_query.open.mode = (unsigned int)0664;
            fd_query.open.flags = file->reopen_flags & ~(0100 | 01000);
            break;
          }
          case OPENDIR:
          {
            if(!(file->reopen_flags == 0))
              return 5;

            fd_len = sizeof(struct smb_conn_url_query) /*8ul*/ ;
            fd_query.opendir.url_offs = sizeof(struct smb_conn_url_query) /*8ul*/ ;
            break;
          }
          default:
            return 5;
        }
        retval=smb_conn_process_query_lowlevel(ctx, file->reopen_cmd, (void *)&fd_query, fd_len, &result, (void *)&fd_reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ , file->url, (void *)0);
        if(!(retval == 0))
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_smb_conn_query_result_check_3=smb_conn_query_result_check(file->reopen_cmd, &result);
          tmp_if_expr_4 = !(return_value_smb_conn_query_result_check_3 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          goto loop_end;

        signed int return_value_smb_conn_query_result_map_6;
        return_value_smb_conn_query_result_map_6=smb_conn_query_result_map(&result);
        if(!(return_value_smb_conn_query_result_map_6 == 0))
        {
          return_value_smb_conn_query_result_map_5=smb_conn_query_result_map(&result);
          return return_value_smb_conn_query_result_map_5;
        }

        file->srv_fd = fd_reply.srv_fd;
      }

      *query_fd_ptr = file->srv_fd;
      retval=smb_conn_process_query_lowlevel(ctx, query_cmd, query, query_len, &result, reply, reply_len, (void *)0);
      if(retval == 0)
      {
        return_value_smb_conn_query_result_check_8=smb_conn_query_result_check(query_cmd, &result);
        if(!(return_value_smb_conn_query_result_check_8 == 0))
        {
          return_value_smb_conn_query_result_map_7=smb_conn_query_result_map(&result);
          return return_value_smb_conn_query_result_map_7;
        }

      }


    loop_end:
      ;
      signed int return_value_smb_conn_get_max_retry_count_9;
      return_value_smb_conn_get_max_retry_count_9=smb_conn_get_max_retry_count();
      if(count >= return_value_smb_conn_get_max_retry_count_9)
        break;

      sleep((unsigned int)2);
      count = count + 1;
    }
    while((_Bool)1);
    return 5;
  }
}

// smb_conn_process_query
// file smb_conn.c line 475
static signed int smb_conn_process_query(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, void *reply, unsigned long int reply_len, ...)
{
  __builtin_va_list ap;
  signed int count;
  signed int retval;
  struct smb_conn_query_result result;
  const char *url = (const char *)(void *)0;
  if((signed int)query_cmd >= OPEN && !((signed int)query_cmd >= 21))
  {
    va_start(ap, reply_len);
    url=va_arg(ap, __typeof__(url));
    va_end(ap);
    if(!(url == ((const char *)NULL)))
    {
      retval=neg_cache_check(url);
      if(!(retval == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = retval;
        return retval;
      }

    }

  }

  count = 0;
  signed int return_value_smb_conn_query_result_check_4;
  do
  {
    signed int return_value_smb_conn_up_if_broken_2;
    return_value_smb_conn_up_if_broken_2=smb_conn_up_if_broken(ctx);
    if(!(return_value_smb_conn_up_if_broken_2 == 0))
      break;

    va_start(ap, reply_len);
    retval=smb_conn_process_query_lowlevel_va(ctx, query_cmd, query, query_len, &result, reply, reply_len, ap);
    va_end(ap);
    if(retval == 0)
    {
      return_value_smb_conn_query_result_check_4=smb_conn_query_result_check(query_cmd, &result);
      if(!(return_value_smb_conn_query_result_check_4 == 0))
      {
        retval=smb_conn_query_result_map(&result);
        signed int return_value_smb_conn_is_neg_cache_candidate_3;
        return_value_smb_conn_is_neg_cache_candidate_3=smb_conn_is_neg_cache_candidate(query_cmd, &result);
        if(!(return_value_smb_conn_is_neg_cache_candidate_3 == 0))
        {
          if(!(url == ((const char *)NULL)))
            neg_cache_store(url, retval);

        }

        return retval;
      }

    }

    signed int return_value_smb_conn_get_max_retry_count_5;
    return_value_smb_conn_get_max_retry_count_5=smb_conn_get_max_retry_count();
    if(count >= return_value_smb_conn_get_max_retry_count_5)
      break;

    sleep((unsigned int)2);
    count = count + 1;
  }
  while((_Bool)1);
  if(!(url == ((const char *)NULL)))
    neg_cache_store(url, 5);

  return 5;
}

// smb_conn_process_query_lowlevel
// file smb_conn.c line 453
static signed int smb_conn_process_query_lowlevel(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, struct smb_conn_query_result *result, void *reply, unsigned long int reply_len, ...)
{
  void **ap;
  signed int retval;
  ap = (void **)&reply_len;
  retval=smb_conn_process_query_lowlevel_va(ctx, query_cmd, query, query_len, result, reply, reply_len, ap);
  ap = ((void **)NULL);
  return retval;
}

// smb_conn_process_query_lowlevel_va
// file smb_conn.c line 290
static signed int smb_conn_process_query_lowlevel_va(struct smb_conn_ctx *ctx, enum smb_conn_cmd query_cmd, void *query, unsigned long int query_len, struct smb_conn_query_result *result, void *reply, unsigned long int reply_len, __builtin_va_list ap)
{
  signed int iov_cnt;
  signed int retval;
  signed int count;
  signed long int bytes;
  struct iovec iov[4l];
  struct smb_conn_query_hdr query_header;
  _Bool tmp_if_expr_1;
  if(ctx == ((struct smb_conn_ctx *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ctx->conn_fd == -1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_7;
  signed int return_value_common_get_smbnetfs_debug_level_6;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  if(query == NULL || result == ((struct smb_conn_query_result *)NULL) || query_len == 0ul || reply == NULL && !(reply_len == 0ul) || tmp_if_expr_1)
    return 22;

  else
  {
    result->process_state = -1;
    result->errno_value = 22;
    iov_cnt = 2;
    query_header.query_cmd = query_cmd;
    query_header.debug_level=common_get_smbnetfs_debug_level_link6();
    query_header.query_len = sizeof(struct smb_conn_query_hdr) /*16ul*/  + query_len;
    iov[(signed long int)0].iov_base = (void *)&query_header;
    iov[(signed long int)0].iov_len = sizeof(struct smb_conn_query_hdr) /*16ul*/ ;
    iov[(signed long int)1].iov_base = query;
    iov[(signed long int)1].iov_len = query_len;
    while((_Bool)1)
    {
      const char *str;
      str=va_arg(ap, __typeof__(str));
      if(str == ((const char *)NULL))
        break;

      if((signed long int)iov_cnt >= 4l)
      {
        va_end(ap);
        return 22;
      }

      iov[(signed long int)iov_cnt].iov_base = (void *)str;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(str);
      iov[(signed long int)iov_cnt].iov_len = return_value_strlen_2 + (unsigned long int)1;
      query_header.query_len = query_header.query_len + iov[(signed long int)iov_cnt].iov_len;
      iov_cnt = iov_cnt + 1;
    }
    if(query_header.query_len >= 4097ul)
      return 5;

    else
    {
      bytes=writev(ctx->conn_fd, iov, iov_cnt);
      if(bytes == (signed long int)query_header.query_len)
      {
        count = 0;
        while((_Bool)1)
        {
          struct anonymous_6 readfds;
          struct anonymous_6 exceptfds;
          struct timeval tv;
          struct smb_conn_reply_hdr *reply_hdr;
          char buf[4096l];
          signed int return_value_smb_conn_get_server_reply_timeout_3;
          return_value_smb_conn_get_server_reply_timeout_3=smb_conn_get_server_reply_timeout();
          tv.tv_sec = (signed long int)return_value_smb_conn_get_server_reply_timeout_3;
          tv.tv_usec = (signed long int)0;
          do
          {
            signed int __d0;
            signed int __d1;
            asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfds)->fds_bits[(signed long int)0]) : "memory");
          }
          while((_Bool)0);
          (&readfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
          do
          {
            signed int smb_conn_process_query_lowlevel_va__1__2__2____d0;
            signed int smb_conn_process_query_lowlevel_va__1__2__2____d1;
            asm("cld; rep; stosq" : "=c"(smb_conn_process_query_lowlevel_va__1__2__2____d0), "=D"(smb_conn_process_query_lowlevel_va__1__2__2____d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&exceptfds)->fds_bits[(signed long int)0]) : "memory");
          }
          while((_Bool)0);
          (&exceptfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&exceptfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
          retval=select(ctx->conn_fd + 1, &readfds, (struct anonymous_6 *)(void *)0, &exceptfds, &tv);
          if(!(retval >= 1))
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = ((&exceptfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & (signed long int)(1UL << ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ))) != (signed long int)0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
            break;

          bytes=read(ctx->conn_fd, (void *)buf, (unsigned long int)4096);
          if(!(bytes >= (signed long int)sizeof(struct smb_conn_reply_hdr) /*16l*/ ))
            break;

          reply_hdr = (struct smb_conn_reply_hdr *)buf;
          if(!((signed long int)reply_hdr->reply_len == bytes))
            break;

          if((signed int)reply_hdr->reply_cmd == MESSAGE)
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = (signed int)reply_hdr->reply_cmd == DIE_MSG ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_7)
          {
            const char *msg;
            struct smb_conn_message_req *msg_req;
            if((signed int)reply_hdr->reply_cmd == MESSAGE)
            {
              if(!(reply_hdr->errno_value == 0))
                break;

            }

            if(!((signed int)buf[bytes + -1l] == 0))
              break;

            bytes = bytes - (signed long int)sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
            if(!(bytes >= (signed long int)sizeof(struct smb_conn_message_req) /*16l*/ ))
              break;

            msg_req = (struct smb_conn_message_req *)(reply_hdr + (signed long int)1);
            if(!(msg_req->msg_offs == sizeof(struct smb_conn_message_req) /*16ul*/ ))
              break;

            bytes = bytes - (signed long int)sizeof(struct smb_conn_message_req) /*16ul*/ ;
            msg = (char *)msg_req + (signed long int)msg_req->msg_offs;
            unsigned long int return_value_strlen_5;
            return_value_strlen_5=strlen(msg);
            if(!(bytes == 1l + (signed long int)return_value_strlen_5))
              break;

            if(msg_req->debug_level >= 0)
            {
              return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level_link6();
              if(return_value_common_get_smbnetfs_debug_level_6 >= msg_req->debug_level)
              {
                struct timeval __now;
                gettimeofday(&__now, (struct timezone *)(void *)0);
                char __tstamp[20l];
                struct tm __tm;
                localtime_r(&__now.tv_sec, &__tm);
                strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
                common_debug_print("%.19s.%03d %s", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), msg);
              }

            }

            if((signed int)reply_hdr->reply_cmd == DIE_MSG)
            {
              result->errno_value = reply_hdr->errno_value;
              result->process_state = 1;
              smb_conn_connection_close(ctx);
              return 0;
            }

            continue;
          }

          if((signed int)reply_hdr->reply_cmd == PASSWORD)
          {
            const char *server;
            const char *share;
            struct smb_conn_passwd_req *passwd_req;
            signed int return_value_smb_conn_get_max_passwd_query_count_8;
            return_value_smb_conn_get_max_passwd_query_count_8=smb_conn_get_max_passwd_query_count();
            if(!(return_value_smb_conn_get_max_passwd_query_count_8 >= count))
              break;

            if(!(reply_hdr->errno_value == 0))
              break;

            if(!((signed int)buf[bytes + -1l] == 0))
              break;

            bytes = bytes - (signed long int)sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
            if(!(bytes >= (signed long int)sizeof(struct smb_conn_passwd_req) /*16l*/ ))
              break;

            passwd_req = (struct smb_conn_passwd_req *)(reply_hdr + (signed long int)1);
            if(!(passwd_req->server_offs == sizeof(struct smb_conn_passwd_req) /*16ul*/ ))
              tmp_if_expr_9 = (_Bool)1;

            else
              tmp_if_expr_9 = passwd_req->share_offs <= passwd_req->server_offs ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_9)
              tmp_if_expr_10 = (_Bool)1;

            else
              tmp_if_expr_10 = (signed long int)passwd_req->share_offs > bytes - (signed long int)1 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_10)
              break;

            bytes = bytes - (signed long int)sizeof(struct smb_conn_passwd_req) /*16ul*/ ;
            server = (char *)passwd_req + (signed long int)passwd_req->server_offs;
            share = (char *)passwd_req + (signed long int)passwd_req->share_offs;
            unsigned long int return_value_strlen_11;
            return_value_strlen_11=strlen(server);
            unsigned long int return_value_strlen_12;
            return_value_strlen_12=strlen(share);
            if(!(bytes == 2l + (signed long int)return_value_strlen_11 + (signed long int)return_value_strlen_12))
              break;

            count = count + 1;
            signed int return_value_smb_conn_send_password_13;
            return_value_smb_conn_send_password_13=smb_conn_send_password(ctx, server, share);
            if(!(return_value_smb_conn_send_password_13 == 0))
              break;

            continue;
          }

          if(!(reply_hdr->reply_cmd == query_cmd))
            break;

          if(!(reply_hdr->errno_value == 0))
            reply_len = (unsigned long int)0;

          if(!(bytes == (signed long int)sizeof(struct smb_conn_reply_hdr) /*16l*/  + (signed long int)reply_len))
            break;

          if(!(reply_len == 0ul))
            memcpy(reply, (const void *)(reply_hdr + (signed long int)1), reply_len);

          result->errno_value = reply_hdr->errno_value;
          result->process_state = 0;
          return 0;
        }
      }


    error:
      ;
      smb_conn_connection_close(ctx);
      return 5;
    }
  }
}

// smb_conn_query_result_check
// file smb_conn.c line 73
static inline signed int smb_conn_query_result_check(enum smb_conn_cmd query_cmd, struct smb_conn_query_result *result)
{
  if(result->process_state == 0)
    return 1;

  else
  {
    signed int return_value_smb_conn_is_neg_cache_candidate_1;
    return_value_smb_conn_is_neg_cache_candidate_1=smb_conn_is_neg_cache_candidate(query_cmd, result);
    if(!(return_value_smb_conn_is_neg_cache_candidate_1 == 0))
      return 1;

    else
      return 0;
  }
}

// smb_conn_query_result_map
// file smb_conn.c line 67
static inline signed int smb_conn_query_result_map(struct smb_conn_query_result *result)
{
  if(result->process_state == 0)
    return result->errno_value;

  else
    return 5;
}

// smb_conn_read
// file smb_conn.c line 698
signed long int smb_conn_read(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_rw_query query;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  query.offset = offset;
  query.bufsize = bufsize;
  error = 22;
  reply.bufsize = (signed long int)-1;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPEN)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      file->access_time=time((signed long int *)(void *)0);
      error=smb_conn_process_fd_query(ctx, (enum smb_conn_cmd)READ, file, &query.srv_fd, (void *)&query, sizeof(struct smb_conn_rw_query) /*24ul*/ , (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );
      if(error == 0 && (signed long int)bufsize >= reply.bufsize)
        memcpy(buf, (const void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize);

      else
      {
        reply.bufsize = (signed long int)-1;
        if(error == 0)
          error = 5;

      }
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_3;
  if(!(error == 0))
  {
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = error;
  }

  return reply.bufsize;
}

// smb_conn_readdir
// file smb_conn.c line 944
signed long int smb_conn_readdir(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, void *buf, unsigned long int bufsize)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_rw_query query;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  query.offset = (signed long int)-1;
  query.bufsize = bufsize;
  error = 22;
  reply.bufsize = (signed long int)-1;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPENDIR)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      file->access_time=time((signed long int *)(void *)0);
      if(file->reopen_flags == 0)
        error=smb_conn_process_fd_query(ctx, (enum smb_conn_cmd)READDIR, file, &query.srv_fd, (void *)&query, sizeof(struct smb_conn_rw_query) /*24ul*/ , (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );

      else
      {
        struct smb_conn_query_result result;
        if(file->srv_fd == NULL)
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = 5;
          return (signed long int)-1;
        }

        query.srv_fd = file->srv_fd;
        error=smb_conn_process_query_lowlevel(ctx, (enum smb_conn_cmd)READDIR, (void *)&query, sizeof(struct smb_conn_rw_query) /*24ul*/ , &result, (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ , (void *)0);
        if(error == 0)
          error=smb_conn_query_result_map(&result);

      }
      if((unsigned long int)reply.bufsize % sizeof(struct smb_conn_dirent_rec) /*260ul*/  == 0ul && error == 0 && (signed long int)bufsize >= reply.bufsize)
      {
        memcpy(buf, (const void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize);
        file->reopen_flags = file->reopen_flags + 1;
      }

      else
      {
        reply.bufsize = (signed long int)-1;
        if(error == 0)
          error = 5;

      }
    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_4;
  if(!(error == 0))
  {
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = error;
  }

  return reply.bufsize;
}

// smb_conn_removexattr
// file smb_conn.c line 1318
signed int smb_conn_removexattr(struct smb_conn_ctx *ctx, const char *url, const char *name)
{
  signed int error;
  struct smb_conn_removexattr_query query;
  query.url_offs = sizeof(struct smb_conn_removexattr_query) /*16ul*/ ;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(url);
  query.name_offs = sizeof(struct smb_conn_removexattr_query) /*16ul*/  + return_value_strlen_1 + (unsigned long int)1;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)GETXATTR, (void *)&query, sizeof(struct smb_conn_removexattr_query) /*16ul*/ , (void *)0, (unsigned long int)0, url, name, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
    return -1;
  }

  return 0;
}

// smb_conn_rename
// file smb_conn.c line 841
signed int smb_conn_rename(struct smb_conn_ctx *ctx, const char *old_url, const char *new_url)
{
  signed int error;
  struct smb_conn_rename_query query;
  query.old_url_offs = sizeof(struct smb_conn_rename_query) /*16ul*/ ;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(old_url);
  query.new_url_offs = sizeof(struct smb_conn_rename_query) /*16ul*/  + return_value_strlen_1 + (unsigned long int)1;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)RENAME, (void *)&query, sizeof(struct smb_conn_rename_query) /*16ul*/ , (void *)0, (unsigned long int)0, old_url, new_url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = error;
    return -1;
  }

  return 0;
}

// smb_conn_rmdir
// file smb_conn.c line 1043
signed int smb_conn_rmdir(struct smb_conn_ctx *ctx, const char *url)
{
  signed int error;
  struct smb_conn_url_query query;
  query.url_offs = sizeof(struct smb_conn_url_query) /*8ul*/ ;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)RMDIR, (void *)&query, sizeof(struct smb_conn_url_query) /*8ul*/ , (void *)0, (unsigned long int)0, url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// smb_conn_send_password
// file smb_conn.c line 214
static signed int smb_conn_send_password(struct smb_conn_ctx *ctx, const char *server, const char *share)
{
  struct gnome_keyring_authinfo *gnome_keyring_info;
  struct authinfo *config_file_info;
  signed int config_file_info_suitability;
  char workgroup[256l];
  signed int ret;
  _Bool tmp_if_expr_1;
  if(ctx == ((struct smb_conn_ctx *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ctx->conn_fd == -1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  signed int return_value_common_get_smbnetfs_debug_level_3;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  signed int return_value_common_get_smbnetfs_debug_level_7;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    memset((void *)workgroup, 0, sizeof(char [256l]) /*256ul*/ );
    smbitem_get_group(server, workgroup, sizeof(char [256l]) /*256ul*/ );
    config_file_info_suitability = -1;
    config_file_info=auth_get_authinfo(workgroup, server, share, &config_file_info_suitability);
    if(!(config_file_info == ((struct authinfo *)NULL)))
    {
      if(config_file_info->domain == ((char *)NULL))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = config_file_info->user == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = config_file_info->password == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
      {
        return_value_common_get_smbnetfs_debug_level_3=common_get_smbnetfs_debug_level_link6();
        if(return_value_common_get_smbnetfs_debug_level_3 >= 0)
        {
          struct timeval __now;
          gettimeofday(&__now, (struct timezone *)(void *)0);
          char __tstamp[20l];
          struct tm __tm;
          localtime_r(&__now.tv_sec, &__tm);
          strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
          signed int return_value_getpid_2;
          return_value_getpid_2=getpid();
          common_debug_print("%.19s.%03d %d->%s: WARNING!!! Damaged authinfo record\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_2, (const void *)"smb_conn_send_password");
        }

        auth_release_authinfo(config_file_info);
        config_file_info = (struct authinfo *)(void *)0;
        config_file_info_suitability = -1;
      }

    }

    gnome_keyring_info=gnome_keyring_get_authinfo(workgroup, server, share);
    if(!(gnome_keyring_info == ((struct gnome_keyring_authinfo *)NULL)))
    {
      if(gnome_keyring_info->domain == ((char *)NULL))
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = gnome_keyring_info->user == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = gnome_keyring_info->password == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
      {
        return_value_common_get_smbnetfs_debug_level_7=common_get_smbnetfs_debug_level_link6();
        if(return_value_common_get_smbnetfs_debug_level_7 >= 0)
        {
          struct timeval smb_conn_send_password__1__2__1____now;
          gettimeofday(&smb_conn_send_password__1__2__1____now, (struct timezone *)(void *)0);
          char smb_conn_send_password__1__2__1____tstamp[20l];
          struct tm smb_conn_send_password__1__2__1____tm;
          localtime_r(&smb_conn_send_password__1__2__1____now.tv_sec, &smb_conn_send_password__1__2__1____tm);
          strftime(smb_conn_send_password__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &smb_conn_send_password__1__2__1____tm);
          signed int return_value_getpid_6;
          return_value_getpid_6=getpid();
          common_debug_print("%.19s.%03d %d->%s: WARNING!!! Damaged gnome_keyring_info record\n", (const void *)smb_conn_send_password__1__2__1____tstamp, (signed int)(smb_conn_send_password__1__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_6, (const void *)"smb_conn_send_password");
        }

        gnome_keyring_free_authinfo(gnome_keyring_info);
        gnome_keyring_info = (struct gnome_keyring_authinfo *)(void *)0;
      }

    }

    if(!(gnome_keyring_info == ((struct gnome_keyring_authinfo *)NULL)))
    {
      if(gnome_keyring_info->suitability >= config_file_info_suitability)
      {
        if(!(config_file_info == ((struct authinfo *)NULL)))
          auth_release_authinfo(config_file_info);

        config_file_info = (struct authinfo *)(void *)0;
        config_file_info_suitability = -1;
        goto use_gnome_keyring_info;
      }

      gnome_keyring_free_authinfo(gnome_keyring_info);
      gnome_keyring_info = (struct gnome_keyring_authinfo *)(void *)0;
    }

    if(config_file_info == ((struct authinfo *)NULL))
      return -1;

    else
    {
      ret=smb_conn_send_password_base(ctx, config_file_info->domain, config_file_info->user, config_file_info->password);
      auth_release_authinfo(config_file_info);
      return ret;

    use_gnome_keyring_info:
      ;
      ret=smb_conn_send_password_base(ctx, gnome_keyring_info->domain, gnome_keyring_info->user, gnome_keyring_info->password);
      gnome_keyring_free_authinfo(gnome_keyring_info);
      return ret;
    }
  }
}

// smb_conn_send_password_base
// file smb_conn.c line 177
static signed int smb_conn_send_password_base(struct smb_conn_ctx *ctx, const char *domain, const char *user, const char *password)
{
  signed long int bytes;
  struct iovec iov[5l];
  struct smb_conn_query_hdr header;
  struct smb_conn_passwd data;
  _Bool tmp_if_expr_1;
  if(ctx == ((struct smb_conn_ctx *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = ctx->conn_fd == -1 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
  {
    iov[(signed long int)0].iov_base = (void *)&header;
    iov[(signed long int)0].iov_len = sizeof(struct smb_conn_query_hdr) /*16ul*/ ;
    iov[(signed long int)1].iov_base = (void *)&data;
    iov[(signed long int)1].iov_len = sizeof(struct smb_conn_passwd) /*24ul*/ ;
    iov[(signed long int)2].iov_base = (void *)(char *)domain;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(domain);
    iov[(signed long int)2].iov_len = return_value_strlen_2 + (unsigned long int)1;
    iov[(signed long int)3].iov_base = (void *)(char *)user;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(user);
    iov[(signed long int)3].iov_len = return_value_strlen_3 + (unsigned long int)1;
    iov[(signed long int)4].iov_base = (void *)(char *)password;
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(password);
    iov[(signed long int)4].iov_len = return_value_strlen_4 + (unsigned long int)1;
    header.query_len = iov[(signed long int)0].iov_len + iov[(signed long int)1].iov_len + iov[(signed long int)2].iov_len + iov[(signed long int)3].iov_len + iov[(signed long int)4].iov_len;
    header.query_cmd = (enum smb_conn_cmd)PASSWORD;
    header.debug_level=common_get_smbnetfs_debug_level_link6();
    data.domain_offs = sizeof(struct smb_conn_passwd) /*24ul*/ ;
    data.username_offs = sizeof(struct smb_conn_passwd) /*24ul*/  + iov[(signed long int)2].iov_len;
    data.password_offs = sizeof(struct smb_conn_passwd) /*24ul*/  + iov[(signed long int)2].iov_len + iov[(signed long int)3].iov_len;
    if(!(header.query_len >= 4097ul))
      bytes=writev(ctx->conn_fd, iov, 5);

    else
      bytes = (signed long int)-1;
    return bytes == (signed long int)header.query_len ? 0 : -1;
  }
}

// smb_conn_set_max_passwd_query_count
// file smb_conn.c line 93
signed int smb_conn_set_max_passwd_query_count(signed int count)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(count >= 3))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link6();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: count=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smb_conn_set_max_passwd_query_count", count);
    }

    __atomic_store_4(&smb_conn_max_passwd_query_count, count, 5);
    return 1;
  }
}

// smb_conn_set_max_retry_count
// file smb_conn.c line 82
signed int smb_conn_set_max_retry_count(signed int count)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(count >= 0))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link6();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: count=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smb_conn_set_max_retry_count", count);
    }

    __atomic_store_4(&smb_conn_max_retry_count, count, 5);
    return 1;
  }
}

// smb_conn_set_server_reply_timeout
// file smb_conn.c line 104
signed int smb_conn_set_server_reply_timeout(signed int timeout)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(timeout >= 10))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link6();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: timeout=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smb_conn_set_server_reply_timeout", timeout);
    }

    __atomic_store_4(&smb_conn_server_reply_timeout, timeout, 5);
    return 1;
  }
}

// smb_conn_setxattr
// file smb_conn.c line 1204
signed int smb_conn_setxattr(struct smb_conn_ctx *ctx, const char *url, const char *name, const void *value, unsigned long int size, signed int flags)
{
  signed int error;
  struct smb_conn_setxattr_query query;
  if(!(ctx->shmem_size >= size))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  query.url_offs = sizeof(struct smb_conn_setxattr_query) /*32ul*/ ;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(url);
  query.name_offs = sizeof(struct smb_conn_setxattr_query) /*32ul*/  + return_value_strlen_2 + (unsigned long int)1;
  query.bufsize = size;
  query.flags = flags;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  memcpy((void *)ctx->shmem_ptr, value, size);
  msync((void *)ctx->shmem_ptr, size, 4);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)SETXATTR, (void *)&query, sizeof(struct smb_conn_setxattr_query) /*32ul*/ , (void *)0, (unsigned long int)0, url, name, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = error;
    return -1;
  }

  return 0;
}

// smb_conn_srv_auth_fn
// file smb_conn_srv.c line 76
static void smb_conn_srv_auth_fn(struct _SMBCCTX *ctx, const char *server, const char *share, char *wrkgrp, signed int wrkgrplen, char *user, signed int userlen, char *passwd, signed int passwdlen)
{
  struct smb_conn_srv_ctx *srv_ctx;
  signed int retval;
  signed long int bytes;
  struct anonymous_6 readfds;
  struct anonymous_6 exceptfds;
  struct timeval tv;
  struct iovec iov[4l];
  struct smb_conn_reply_hdr reply_header;
  struct smb_conn_passwd_req reply;
  struct smb_conn_query_hdr *query_hdr;
  struct smb_conn_passwd *passwd_hdr;
  const char *domain;
  const char *username;
  const char *password;
  srv_ctx = (struct smb_conn_srv_ctx *)(void *)0;
  void *return_value_smbc_getOptionUserData_1;
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  unsigned long int return_value_strlen_8;
  unsigned long int return_value_strlen_9;
  unsigned long int return_value_strlen_10;
  signed int return_value_getpid_11;
  if(!(ctx == ((struct _SMBCCTX *)NULL)))
  {
    return_value_smbc_getOptionUserData_1=smbc_getOptionUserData(ctx);
    srv_ctx = (struct smb_conn_srv_ctx *)return_value_smbc_getOptionUserData_1;
    if(srv_ctx == ((struct smb_conn_srv_ctx *)NULL))
      goto error;

    static char smb_conn_srv_auth_fn__1__charset_buf[2048l];
    server=charset_smb2local_r(server, smb_conn_srv_auth_fn__1__charset_buf, sizeof(char [2048l]) /*2048ul*/ );
    if(server == ((const char *)NULL))
      goto error;

    server=strdup(server);
    if(server == ((const char *)NULL))
      goto error;

    share=charset_smb2local_r(share, smb_conn_srv_auth_fn__1__charset_buf, sizeof(char [2048l]) /*2048ul*/ );
    if(share == ((const char *)NULL))
      goto error;

    iov[(signed long int)0].iov_base = (void *)&reply_header;
    iov[(signed long int)0].iov_len = sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
    iov[(signed long int)1].iov_base = (void *)&reply;
    iov[(signed long int)1].iov_len = sizeof(struct smb_conn_passwd_req) /*16ul*/ ;
    iov[(signed long int)2].iov_base = (void *)(char *)server;
    return_value_strlen_2=strlen(server);
    iov[(signed long int)2].iov_len = return_value_strlen_2 + (unsigned long int)1;
    iov[(signed long int)3].iov_base = (void *)(char *)share;
    return_value_strlen_3=strlen(share);
    iov[(signed long int)3].iov_len = return_value_strlen_3 + (unsigned long int)1;
    reply_header.reply_len = iov[(signed long int)0].iov_len + iov[(signed long int)1].iov_len + iov[(signed long int)2].iov_len + iov[(signed long int)3].iov_len;
    reply_header.reply_cmd = (enum smb_conn_cmd)PASSWORD;
    reply_header.errno_value = 0;
    reply.server_offs = sizeof(struct smb_conn_passwd_req) /*16ul*/ ;
    reply.share_offs = sizeof(struct smb_conn_passwd_req) /*16ul*/  + iov[(signed long int)2].iov_len;
    if(reply_header.reply_len >= 4097ul)
      goto error;

    bytes=writev(srv_ctx->conn_fd, iov, 4);
    if(!(bytes == (signed long int)reply_header.reply_len))
      goto error;

    tv.tv_sec = (signed long int)srv_ctx->timeout;
    tv.tv_usec = (signed long int)0;
    do
    {
      signed int smb_conn_srv_auth_fn__1__1____d0;
      signed int smb_conn_srv_auth_fn__1__1____d1;
      asm("cld; rep; stosq" : "=c"(smb_conn_srv_auth_fn__1__1____d0), "=D"(smb_conn_srv_auth_fn__1__1____d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfds)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&readfds)->fds_bits[(signed long int)(srv_ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfds)->fds_bits[(signed long int)(srv_ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << srv_ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&exceptfds)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&exceptfds)->fds_bits[(signed long int)(srv_ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&exceptfds)->fds_bits[(signed long int)(srv_ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << srv_ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    retval=select(srv_ctx->conn_fd + 1, &readfds, (struct anonymous_6 *)(void *)0, &exceptfds, &tv);
    if(!(retval >= 1))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = ((&exceptfds)->fds_bits[(signed long int)(srv_ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & (signed long int)(1UL << srv_ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ))) != (signed long int)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      goto error;

    static char buf[4096l];
    bytes=read(srv_ctx->conn_fd, (void *)buf, (unsigned long int)4096);
    if(!((signed int)buf[bytes + -1l] == 0))
      goto error;

    if(!(bytes >= (signed long int)sizeof(struct smb_conn_query_hdr) /*16l*/ ))
      goto error;

    query_hdr = (struct smb_conn_query_hdr *)buf;
    if(!(bytes == (signed long int)query_hdr->query_len))
      goto error;

    if(!((signed int)query_hdr->query_cmd == PASSWORD))
      goto error;

    bytes = bytes - (signed long int)sizeof(struct smb_conn_query_hdr) /*16ul*/ ;
    if(!(bytes >= (signed long int)sizeof(struct smb_conn_passwd) /*24l*/ ))
      goto error;

    passwd_hdr = (struct smb_conn_passwd *)(query_hdr + (signed long int)1);
    if(!(passwd_hdr->domain_offs == sizeof(struct smb_conn_passwd) /*24ul*/ ))
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = passwd_hdr->username_offs <= passwd_hdr->domain_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = passwd_hdr->password_offs <= passwd_hdr->username_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = (signed long int)passwd_hdr->password_offs > bytes - (signed long int)1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
      goto error;

    bytes = bytes - (signed long int)sizeof(struct smb_conn_passwd) /*24ul*/ ;
    domain=smb_conn_srv_get_url_from_query((const void *)passwd_hdr, passwd_hdr->domain_offs);
    username=smb_conn_srv_get_url_from_query((const void *)passwd_hdr, passwd_hdr->username_offs);
    password=smb_conn_srv_get_url_from_query((const void *)passwd_hdr, passwd_hdr->password_offs);
    return_value_strlen_8=strlen(domain);
    return_value_strlen_9=strlen(username);
    return_value_strlen_10=strlen(password);
    if(!(bytes == 3l + (signed long int)return_value_strlen_10 + (signed long int)return_value_strlen_8 + (signed long int)return_value_strlen_9))
      goto error;

    if(!((signed int)*domain == 0))
    {
      strncpy(wrkgrp, domain, (unsigned long int)wrkgrplen);
      wrkgrp[(signed long int)(wrkgrplen - 1)] = (char)0;
    }

    strncpy(user, username, (unsigned long int)userlen);
    user[(signed long int)(userlen - 1)] = (char)0;
    strncpy(passwd, password, (unsigned long int)passwdlen);
    passwd[(signed long int)(passwdlen - 1)] = (char)0;
    return_value_getpid_11=getpid();
    smb_conn_srv_debug_print(srv_ctx, (enum smb_conn_cmd)MESSAGE, 0, 6, 0, "srv(%d)->%s: url=smb://%s/%s, grp=%s, user=%s, passwd=%s\n", return_value_getpid_11, (const void *)"smb_conn_srv_auth_fn", server, share, wrkgrp, user, (const void *)"********");
    free((void *)(char *)server);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    signed int return_value_getpid_13;
    return_value_getpid_13=getpid();
    signed int *return_value___errno_location_14;
    return_value___errno_location_14=__errno_location();
    signed int *return_value___errno_location_15;
    return_value___errno_location_15=__errno_location();
    char *return_value_strerror_16;
    return_value_strerror_16=strerror(*return_value___errno_location_15);
    smb_conn_srv_debug_print(srv_ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_12, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_13, (const void *)"smb_conn_srv_auth_fn", *return_value___errno_location_14, return_value_strerror_16);
    exit(1);
  }
}

// smb_conn_srv_chmod
// file smb_conn_srv.c line 1267
void smb_conn_srv_chmod(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len)
{
  const char *url;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_chmod_4;
  signed int *return_value___errno_location_3;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_mode_query) /*16ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 17ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_chmod_4=smbc_chmod(url, query->mode);
    if(!(return_value_smbc_chmod_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 1 || *return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 5 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 20 || *return_value___errno_location_2 == 30 || *return_value___errno_location_2 == 36 || *return_value___errno_location_2 == 40)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CHMOD, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CHMOD, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_chmod", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_close
// file smb_conn_srv.c line 642
void smb_conn_srv_close(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  _Bool tmp_if_expr_1;
  signed int return_value_smbc_close_4;
  signed int *return_value___errno_location_3;
  if(query_len == sizeof(struct smb_conn_fd_query) /*8ul*/ )
  {
    if(query->srv_fd == NULL)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)state->type != SMB_CONN_FILE ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      goto error;

    return_value_smbc_close_4=smbc_close(state->fd);
    if(!(return_value_smbc_close_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 4)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CLOSE, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L7;
      }

      goto error;
    }

    free((void *)state);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CLOSE, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_close", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L7:
  ;
}

// smb_conn_srv_closedir
// file smb_conn_srv.c line 1001
void smb_conn_srv_closedir(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  _Bool tmp_if_expr_1;
  signed int return_value_smbc_closedir_2;
  if(query_len == sizeof(struct smb_conn_fd_query) /*8ul*/ )
  {
    if(query->srv_fd == NULL)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)state->type != SMB_CONN_DIR ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      goto error;

    return_value_smbc_closedir_2=smbc_closedir(state->fd);
    if(!(return_value_smbc_closedir_2 >= 0))
      goto error;

    free((void *)state);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CLOSEDIR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    signed int return_value_getpid_4;
    return_value_getpid_4=getpid();
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    char *return_value_strerror_7;
    return_value_strerror_7=strerror(*return_value___errno_location_6);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_3, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_4, (const void *)"smb_conn_srv_closedir", *return_value___errno_location_5, return_value_strerror_7);
    exit(1);
  }
}

// smb_conn_srv_creat
// file smb_conn_srv.c line 489
void smb_conn_srv_creat(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len)
{
  const char *url;
  struct smb_conn_srv_fd *state;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  void *return_value_malloc_2;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_mode_query) /*16ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 17ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_malloc_2=malloc(sizeof(struct smb_conn_srv_fd) /*16ul*/ );
    state = (struct smb_conn_srv_fd *)return_value_malloc_2;
    if(state == ((struct smb_conn_srv_fd *)NULL))
      goto error;

    state->type = (enum smb_conn_srv_fd_type)SMB_CONN_FILE;
    state->offset = (signed long int)-1;
    state->fd=smbc_creat(url, query->mode);
    if(!(state->fd >= 0))
    {
      signed int error;
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      error = *return_value___errno_location_3;
      free((void *)state);
      if(error == 1 || error == 2 || error == 4 || error == 13 || error == 14 || error == 17 || error == 19 || error == 20 || error == 21 || error == 23 || error == 24 || error == 26 || error == 27 || error == 28 || error == 30 || error == 36 || error == 40)
      {
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CREAT, error, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    reply.srv_fd = (void *)state;
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)CREAT, 0, (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int return_value_getpid_5;
    return_value_getpid_5=getpid();
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    char *return_value_strerror_8;
    return_value_strerror_8=strerror(*return_value___errno_location_7);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_4, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_5, (const void *)"smb_conn_srv_creat", *return_value___errno_location_6, return_value_strerror_8);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_debug_print
// file smb_conn_srv.c line 42
void smb_conn_srv_debug_print(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd msg_type, signed int errno_value, signed int level, signed int no_fallback, const char *fmt, ...)
{
  signed long int bytes;
  void **ap;
  signed int return_value_smb_conn_srv_send_msg_1;
  if(!(ctx == ((struct smb_conn_srv_ctx *)NULL)))
  {
    if(!((signed int)msg_type == DIE_MSG) && !((signed int)msg_type == MESSAGE))
      goto __CPROVER_DUMP_L5;

    if(!(ctx->debug_level >= level))
      goto __CPROVER_DUMP_L5;

    bytes = (signed long int)(((sizeof(char [4096l]) /*4096ul*/  - sizeof(struct smb_conn_reply_hdr) /*16ul*/ ) - sizeof(struct smb_conn_message_req) /*16ul*/ ) - (unsigned long int)1);
    if(!(bytes >= 1l))
      goto fallback;

    ap = (void **)&fmt;
    static char buf[4096l];
    vsnprintf(buf, (unsigned long int)bytes, fmt, ap);
    buf[bytes] = (char)0;
    ap = ((void **)NULL);
    return_value_smb_conn_srv_send_msg_1=smb_conn_srv_send_msg(ctx, msg_type, errno_value, level, buf);
    if(!(return_value_smb_conn_srv_send_msg_1 == 0))
      goto fallback;

  }

  else
  {

  fallback:
    ;
    if(no_fallback == 0)
    {
      ap = (void **)&fmt;
      vfprintf(stderr, fmt, ap);
      fflush(stderr);
      ap = ((void **)NULL);
    }

  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_fstat
// file smb_conn_srv.c line 1190
void smb_conn_srv_fstat(struct smb_conn_srv_ctx *ctx, struct smb_conn_fd_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  struct smb_conn_stat_reply reply;
  _Bool tmp_if_expr_1;
  signed int return_value_smbc_fstat_4;
  signed int *return_value___errno_location_3;
  if(query_len == sizeof(struct smb_conn_fd_query) /*8ul*/ )
  {
    if(query->srv_fd == NULL)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)state->type != SMB_CONN_FILE ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      goto error;

    return_value_smbc_fstat_4=smbc_fstat(state->fd, &reply.stat);
    if(!(return_value_smbc_fstat_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 20 || *return_value___errno_location_2 == 36 || *return_value___errno_location_2 == 40)
      {
        state->offset = (signed long int)-1;
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)FSTAT, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L7;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)FSTAT, 0, (void *)&reply, sizeof(struct smb_conn_stat_reply) /*144ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_fstat", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L7:
  ;
}

// smb_conn_srv_ftruncate
// file smb_conn_srv.c line 1225
void smb_conn_srv_ftruncate(struct smb_conn_srv_ctx *ctx, struct smb_conn_ftruncate_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  signed int return_value_smbc_ftruncate_5;
  signed int *return_value___errno_location_4;
  if(query_len == sizeof(struct smb_conn_ftruncate_query) /*16ul*/ )
  {
    if(query->offset == -1l)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->srv_fd == (void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)state->type != SMB_CONN_FILE ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    return_value_smbc_ftruncate_5=smbc_ftruncate(state->fd, query->offset);
    if(!(return_value_smbc_ftruncate_5 >= 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 1 || *return_value___errno_location_3 == 2 || *return_value___errno_location_3 == 4 || *return_value___errno_location_3 == 5 || *return_value___errno_location_3 == 13 || *return_value___errno_location_3 == 20 || *return_value___errno_location_3 == 21 || *return_value___errno_location_3 == 22 || *return_value___errno_location_3 == 26 || *return_value___errno_location_3 == 30 || *return_value___errno_location_3 == 36 || *return_value___errno_location_3 == 40)
      {
        state->offset = (signed long int)-1;
        return_value___errno_location_4=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)FTRUNCATE, *return_value___errno_location_4, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L9;
      }

      goto error;
    }

    state->offset = (signed long int)-1;
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)FTRUNCATE, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int return_value_getpid_7;
    return_value_getpid_7=getpid();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_6, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_7, (const void *)"smb_conn_srv_ftruncate", *return_value___errno_location_8, return_value_strerror_10);
    exit(1);
  }

__CPROVER_DUMP_L9:
  ;
}

// smb_conn_srv_get_url_from_query
// file smb_conn_srv.h line 66
static inline const char * smb_conn_srv_get_url_from_query(const void *query, unsigned long int url_offs)
{
  return (const char *)query + (signed long int)url_offs;
}

// smb_conn_srv_getxattr
// file smb_conn_srv.c line 1388
void smb_conn_srv_getxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_getxattr_query *query, unsigned long int query_len)
{
  const char *url;
  const char *name;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_smbc_getxattr_8;
  signed int *return_value___errno_location_7;
  if(query_len >= 25ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_getxattr_query) /*24ul*/ ))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->name_offs <= query->url_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->name_offs >= query_len - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    name=smb_conn_srv_get_url_from_query((const void *)query, query->name_offs);
    return_value_strlen_3=strlen(url);
    if(!(name == url + (signed long int)return_value_strlen_3 + 1l))
      goto error;

    return_value_strlen_4=strlen(url);
    return_value_strlen_5=strlen(name);
    if(!(query_len == 26ul + return_value_strlen_4 + return_value_strlen_5))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_getxattr_8=smbc_getxattr(url, name, (const void *)ctx->shmem_ptr, query->bufsize);
    if(!(return_value_smbc_getxattr_8 >= 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 1 || *return_value___errno_location_6 == 2 || *return_value___errno_location_6 == 13 || *return_value___errno_location_6 == 17 || *return_value___errno_location_6 == 20 || *return_value___errno_location_6 == 22 || *return_value___errno_location_6 == 34 || *return_value___errno_location_6 == 36 || *return_value___errno_location_6 == 40 || *return_value___errno_location_6 == 95)
      {
        return_value___errno_location_7=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)GETXATTR, *return_value___errno_location_7, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L9;
      }

      goto error;
    }

    msync((void *)ctx->shmem_ptr, query->bufsize, 4);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)GETXATTR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    signed int return_value_getpid_10;
    return_value_getpid_10=getpid();
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    char *return_value_strerror_13;
    return_value_strerror_13=strerror(*return_value___errno_location_12);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_9, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_10, (const void *)"smb_conn_srv_getxattr", *return_value___errno_location_11, return_value_strerror_13);
    exit(1);
  }

__CPROVER_DUMP_L9:
  ;
}

// smb_conn_srv_listen
// file smb_conn_srv.c line 225
void smb_conn_srv_listen(struct smb_conn_srv_ctx *ctx)
{
  signed int return_value_charset_init_2;
  return_value_charset_init_2=charset_init(ctx->local_charset, ctx->samba_charset);
  if(!(return_value_charset_init_2 == 0))
  {
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, 22, 0, 0, "srv(%d)->%s: Can't set samba or local charset\n", return_value_getpid_1, (const void *)"smb_conn_srv_listen");
    exit(1);
  }

  smb_conn_srv_samba_init(ctx);
  while((_Bool)1)
  {
    struct anonymous_6 readfds;
    struct anonymous_6 exceptfds;
    struct timeval tv;
    signed int retval;
    void *query;
    signed long int query_len;
    struct smb_conn_query_hdr *query_hdr;
    tv.tv_sec = (signed long int)ctx->timeout;
    tv.tv_usec = (signed long int)0;
    do
    {
      signed int __d0;
      signed int __d1;
      asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readfds)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&readfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    do
    {
      signed int smb_conn_srv_listen__1__2__2____d0;
      signed int smb_conn_srv_listen__1__2__2____d1;
      asm("cld; rep; stosq" : "=c"(smb_conn_srv_listen__1__2__2____d0), "=D"(smb_conn_srv_listen__1__2__2____d1) : "a"(0), "0"(sizeof(struct anonymous_6) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&exceptfds)->fds_bits[(signed long int)0]) : "memory");
    }
    while((_Bool)0);
    (&exceptfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&exceptfds)->fds_bits[(signed long int)(ctx->conn_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << ctx->conn_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
    retval=select(ctx->conn_fd + 1, &readfds, (struct anonymous_6 *)(void *)0, &exceptfds, &tv);
    if(!(retval >= 0))
      break;

    if(retval == 0)
    {
      signed int return_value_getpid_3;
      return_value_getpid_3=getpid();
      smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, 0, 0, 0, "srv(%d)->%s: Timeout expired\n", return_value_getpid_3, (const void *)"smb_conn_srv_listen");
      exit(0);
    }

    if(!((exceptfds.fds_bits[(signed long int)(ctx->conn_fd / 8)] & (signed long int)(1UL << ctx->conn_fd % 8)) == 0l))
      break;

    static char buf[4096l];
    query_len=read(ctx->conn_fd, (void *)buf, (unsigned long int)4096);
    if(!(query_len >= (signed long int)sizeof(struct smb_conn_query_hdr) /*16l*/ ))
      break;

    query_hdr = (struct smb_conn_query_hdr *)buf;
    if(!(query_len == (signed long int)query_hdr->query_len))
      break;

    ctx->debug_level = query_hdr->debug_level;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = 0;
    query = (void *)(query_hdr + (signed long int)1);
    query_len = query_len - (signed long int)sizeof(struct smb_conn_query_hdr) /*16ul*/ ;
    signed int return_value_getpid_5;
    return_value_getpid_5=getpid();
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)MESSAGE, 0, 6, 0, "srv(%d)->%s: process query=%d, query_len=%zd\n", return_value_getpid_5, (const void *)"smb_conn_srv_listen", query_hdr->query_cmd, query_len);
    switch((signed int)query_hdr->query_cmd)
    {
      case OPEN:
      {
        smb_conn_srv_open(ctx, (struct smb_conn_open_query *)query, (unsigned long int)query_len);
        break;
      }
      case CREAT:
      {
        smb_conn_srv_creat(ctx, (struct smb_conn_url_mode_query *)query, (unsigned long int)query_len);
        break;
      }
      case READ:
      {
        smb_conn_srv_read(ctx, (struct smb_conn_rw_query *)query, (unsigned long int)query_len);
        break;
      }
      case WRITE:
      {
        smb_conn_srv_write(ctx, (struct smb_conn_rw_query *)query, (unsigned long int)query_len);
        break;
      }
      case CLOSE:
      {
        smb_conn_srv_close(ctx, (struct smb_conn_fd_query *)query, (unsigned long int)query_len);
        break;
      }
      case UNLINK:
      {
        smb_conn_srv_unlink(ctx, (struct smb_conn_url_query *)query, (unsigned long int)query_len);
        break;
      }
      case RENAME:
      {
        smb_conn_srv_rename(ctx, (struct smb_conn_rename_query *)query, (unsigned long int)query_len);
        break;
      }
      case OPENDIR:
      {
        smb_conn_srv_opendir(ctx, (struct smb_conn_url_query *)query, (unsigned long int)query_len);
        break;
      }
      case CLOSEDIR:
      {
        smb_conn_srv_closedir(ctx, (struct smb_conn_fd_query *)query, (unsigned long int)query_len);
        break;
      }
      case READDIR:
      {
        smb_conn_srv_readdir(ctx, (struct smb_conn_rw_query *)query, (unsigned long int)query_len);
        break;
      }
      case MKDIR:
      {
        smb_conn_srv_mkdir(ctx, (struct smb_conn_url_mode_query *)query, (unsigned long int)query_len);
        break;
      }
      case RMDIR:
      {
        smb_conn_srv_rmdir(ctx, (struct smb_conn_url_query *)query, (unsigned long int)query_len);
        break;
      }
      case STAT:
      {
        smb_conn_srv_stat(ctx, (struct smb_conn_url_query *)query, (unsigned long int)query_len);
        break;
      }
      case FSTAT:
      {
        smb_conn_srv_fstat(ctx, (struct smb_conn_fd_query *)query, (unsigned long int)query_len);
        break;
      }
      case FTRUNCATE:
      {
        smb_conn_srv_ftruncate(ctx, (struct smb_conn_ftruncate_query *)query, (unsigned long int)query_len);
        break;
      }
      case CHMOD:
      {
        smb_conn_srv_chmod(ctx, (struct smb_conn_url_mode_query *)query, (unsigned long int)query_len);
        break;
      }
      case UTIMES:
      {
        smb_conn_srv_utimes(ctx, (struct smb_conn_utimes_query *)query, (unsigned long int)query_len);
        break;
      }
      case SETXATTR:
      {
        smb_conn_srv_setxattr(ctx, (struct smb_conn_setxattr_query *)query, (unsigned long int)query_len);
        break;
      }
      case GETXATTR:
      {
        smb_conn_srv_getxattr(ctx, (struct smb_conn_getxattr_query *)query, (unsigned long int)query_len);
        break;
      }
      case LISTXATTR:
      {
        smb_conn_srv_listxattr(ctx, (struct smb_conn_listxattr_query *)query, (unsigned long int)query_len);
        break;
      }
      case REMOVEXATTR:
      {
        smb_conn_srv_removexattr(ctx, (struct smb_conn_removexattr_query *)query, (unsigned long int)query_len);
        break;
      }
      default:
        goto error;
    }
  }

error:
  ;
  signed int *return_value___errno_location_6;
  return_value___errno_location_6=__errno_location();
  signed int return_value_getpid_7;
  return_value_getpid_7=getpid();
  signed int *return_value___errno_location_8;
  return_value___errno_location_8=__errno_location();
  signed int *return_value___errno_location_9;
  return_value___errno_location_9=__errno_location();
  char *return_value_strerror_10;
  return_value_strerror_10=strerror(*return_value___errno_location_9);
  smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_6, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_7, (const void *)"smb_conn_srv_listen", *return_value___errno_location_8, return_value_strerror_10);
  exit(1);
}

// smb_conn_srv_listxattr
// file smb_conn_srv.c line 1437
void smb_conn_srv_listxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_listxattr_query *query, unsigned long int query_len)
{
  const char *url;
  _Bool tmp_if_expr_1;
  unsigned long int return_value_strlen_2;
  signed int return_value_smbc_listxattr_5;
  signed int *return_value___errno_location_4;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_listxattr_query) /*16ul*/ ))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_2=strlen(url);
    if(!(query_len == 17ul + return_value_strlen_2))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_listxattr_5=smbc_listxattr(url, ctx->shmem_ptr, query->bufsize);
    if(!(return_value_smbc_listxattr_5 >= 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 1 || *return_value___errno_location_3 == 2 || *return_value___errno_location_3 == 13 || *return_value___errno_location_3 == 20 || *return_value___errno_location_3 == 34 || *return_value___errno_location_3 == 36 || *return_value___errno_location_3 == 40 || *return_value___errno_location_3 == 95)
      {
        return_value___errno_location_4=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)LISTXATTR, *return_value___errno_location_4, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L7;
      }

      goto error;
    }

    msync((void *)ctx->shmem_ptr, query->bufsize, 4);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)LISTXATTR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int return_value_getpid_7;
    return_value_getpid_7=getpid();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_6, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_7, (const void *)"smb_conn_srv_listxattr", *return_value___errno_location_8, return_value_strerror_10);
    exit(1);
  }

__CPROVER_DUMP_L7:
  ;
}

// smb_conn_srv_mkdir
// file smb_conn_srv.c line 1075
void smb_conn_srv_mkdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_mode_query *query, unsigned long int query_len)
{
  const char *url;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_mkdir_4;
  signed int *return_value___errno_location_3;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_mode_query) /*16ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 17ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_mkdir_4=smbc_mkdir(url, query->mode);
    if(!(return_value_smbc_mkdir_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 1 || *return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 17 || *return_value___errno_location_2 == 20 || *return_value___errno_location_2 == 28 || *return_value___errno_location_2 == 30 || *return_value___errno_location_2 == 36 || *return_value___errno_location_2 == 40)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)MKDIR, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)MKDIR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_mkdir", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_open
// file smb_conn_srv.c line 430
void smb_conn_srv_open(struct smb_conn_srv_ctx *ctx, struct smb_conn_open_query *query, unsigned long int query_len)
{
  const char *url;
  struct smb_conn_srv_fd *state;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  void *return_value_malloc_2;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_open_query) /*16ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 17ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_malloc_2=malloc(sizeof(struct smb_conn_srv_fd) /*16ul*/ );
    state = (struct smb_conn_srv_fd *)return_value_malloc_2;
    if(state == ((struct smb_conn_srv_fd *)NULL))
      goto error;

    state->type = (enum smb_conn_srv_fd_type)SMB_CONN_FILE;
    state->offset = (signed long int)-1;
    state->fd=smbc_open(url, query->flags, query->mode);
    if(!(state->fd >= 0))
    {
      signed int error;
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      error = *return_value___errno_location_3;
      free((void *)state);
      if(error == 1 || error == 2 || error == 4 || error == 13 || error == 14 || error == 17 || error == 19 || error == 20 || error == 21 || error == 23 || error == 24 || error == 26 || error == 27 || error == 28 || error == 30 || error == 36 || error == 40)
      {
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)OPEN, error, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    reply.srv_fd = (void *)state;
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)OPEN, 0, (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int return_value_getpid_5;
    return_value_getpid_5=getpid();
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    char *return_value_strerror_8;
    return_value_strerror_8=strerror(*return_value___errno_location_7);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_4, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_5, (const void *)"smb_conn_srv_open", *return_value___errno_location_6, return_value_strerror_8);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_opendir
// file smb_conn_srv.c line 953
void smb_conn_srv_opendir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len)
{
  const char *url;
  struct smb_conn_srv_fd *state;
  struct smb_conn_fd_reply reply;
  unsigned long int return_value_strlen_1;
  void *return_value_malloc_2;
  if(query_len >= 9ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_query) /*8ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 9ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_malloc_2=malloc(sizeof(struct smb_conn_srv_fd) /*16ul*/ );
    state = (struct smb_conn_srv_fd *)return_value_malloc_2;
    if(state == ((struct smb_conn_srv_fd *)NULL))
      goto error;

    state->type = (enum smb_conn_srv_fd_type)SMB_CONN_DIR;
    state->offset = (signed long int)-1;
    state->fd=smbc_opendir(url);
    if(!(state->fd >= 0))
    {
      signed int error;
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      error = *return_value___errno_location_3;
      free((void *)state);
      if(error == 1 || error == 2 || error == 13 || error == 19 || error == 20 || error == 24)
      {
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)OPENDIR, error, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    reply.srv_fd = (void *)state;
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)OPENDIR, 0, (void *)&reply, sizeof(struct smb_conn_fd_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int return_value_getpid_5;
    return_value_getpid_5=getpid();
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    char *return_value_strerror_8;
    return_value_strerror_8=strerror(*return_value___errno_location_7);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_4, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_5, (const void *)"smb_conn_srv_opendir", *return_value___errno_location_6, return_value_strerror_8);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_read
// file smb_conn_srv.c line 548
void smb_conn_srv_read(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_5;
  if(query_len == sizeof(struct smb_conn_rw_query) /*24ul*/ )
  {
    if(query->offset == -1l)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->srv_fd == (void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)state->type != SMB_CONN_FILE ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      goto error;

    if(!(state->offset == query->offset))
    {
      signed long int pos;
      pos=smbc_lseek(state->fd, query->offset, 0);
      if(!(pos == query->offset))
        goto error;

      state->offset = query->offset;
    }

    reply.bufsize=smbc_read(state->fd, (void *)ctx->shmem_ptr, query->bufsize);
    if(!(reply.bufsize >= 0l))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(*return_value___errno_location_4 == 4 || *return_value___errno_location_4 == 11 || *return_value___errno_location_4 == 21)
      {
        state->offset = (signed long int)-1;
        return_value___errno_location_5=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)READ, *return_value___errno_location_5, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L12;
      }

      goto error;
    }

    state->offset = state->offset + reply.bufsize;
    msync((void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize, 4);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)READ, 0, (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int return_value_getpid_7;
    return_value_getpid_7=getpid();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_6, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_7, (const void *)"smb_conn_srv_read", *return_value___errno_location_8, return_value_strerror_10);
    exit(1);
  }

__CPROVER_DUMP_L12:
  ;
}

// smb_conn_srv_readdir
// file smb_conn_srv.c line 1023
void smb_conn_srv_readdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len)
{
  const char *name;
  struct smbc_dirent *dirent;
  struct smb_conn_dirent_rec *pos;
  struct smb_conn_srv_fd *state;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(query_len == sizeof(struct smb_conn_rw_query) /*24ul*/ )
  {
    if(!(query->offset == -1l))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->srv_fd == (void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)state->type != SMB_CONN_DIR ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = state->offset != (signed long int)-1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      goto error;

    pos = (struct smb_conn_dirent_rec *)ctx->shmem_ptr;
    while(!((char *)(pos + 1l) >= ctx->shmem_ptr + (signed long int)query->bufsize))
    {
      dirent=smbc_readdir((unsigned int)state->fd);
      if(dirent == ((struct smbc_dirent *)NULL))
        break;

      signed int return_value_strcmp_5;
      return_value_strcmp_5=strcmp(dirent->name, "");
      if(!(return_value_strcmp_5 == 0))
      {
        signed int return_value_strcmp_6;
        return_value_strcmp_6=strcmp(dirent->name, ".");
        if(!(return_value_strcmp_6 == 0))
        {
          signed int return_value_strcmp_7;
          return_value_strcmp_7=strcmp(dirent->name, "..");
          if(!(return_value_strcmp_7 == 0))
          {
            name=charset_smb2local(dirent->name);
            if(!(name == ((const char *)NULL)))
            {
              unsigned long int return_value_strlen_8;
              return_value_strlen_8=strlen(name);
              if(!(1ul + return_value_strlen_8 >= 257ul))
              {
                pos->smbc_type = dirent->smbc_type;
                strcpy(pos->d_name, name);
                pos = pos + 1l;
              }

            }

          }

        }

      }

    }
    reply.bufsize = (char *)pos - ctx->shmem_ptr;
    msync((void *)ctx->shmem_ptr, (unsigned long int)reply.bufsize, 4);
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)READDIR, 0, (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    signed int return_value_getpid_10;
    return_value_getpid_10=getpid();
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    char *return_value_strerror_13;
    return_value_strerror_13=strerror(*return_value___errno_location_12);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_9, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_10, (const void *)"smb_conn_srv_readdir", *return_value___errno_location_11, return_value_strerror_13);
    exit(1);
  }
}

// smb_conn_srv_removexattr
// file smb_conn_srv.c line 1478
void smb_conn_srv_removexattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_removexattr_query *query, unsigned long int query_len)
{
  const char *url;
  const char *name;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_smbc_removexattr_8;
  signed int *return_value___errno_location_7;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_getxattr_query) /*24ul*/ ))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->name_offs <= query->url_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->name_offs >= query_len - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    name=smb_conn_srv_get_url_from_query((const void *)query, query->name_offs);
    return_value_strlen_3=strlen(url);
    if(!(name == url + (signed long int)return_value_strlen_3 + 1l))
      goto error;

    return_value_strlen_4=strlen(url);
    return_value_strlen_5=strlen(name);
    if(!(query_len == 26ul + return_value_strlen_4 + return_value_strlen_5))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_removexattr_8=smbc_removexattr(url, name);
    if(!(return_value_smbc_removexattr_8 >= 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 1 || *return_value___errno_location_6 == 2 || *return_value___errno_location_6 == 13 || *return_value___errno_location_6 == 20 || *return_value___errno_location_6 == 36 || *return_value___errno_location_6 == 40 || *return_value___errno_location_6 == 95)
      {
        return_value___errno_location_7=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)REMOVEXATTR, *return_value___errno_location_7, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L9;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)REMOVEXATTR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    signed int return_value_getpid_10;
    return_value_getpid_10=getpid();
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    char *return_value_strerror_13;
    return_value_strerror_13=strerror(*return_value___errno_location_12);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_9, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_10, (const void *)"smb_conn_srv_removexattr", *return_value___errno_location_11, return_value_strerror_13);
    exit(1);
  }

__CPROVER_DUMP_L9:
  ;
}

// smb_conn_srv_rename
// file smb_conn_srv.c line 754
void smb_conn_srv_rename(struct smb_conn_srv_ctx *ctx, struct smb_conn_rename_query *query, unsigned long int query_len)
{
  signed int count;
  const char *old_url;
  const char *new_url;
  const char *pos;
  struct stat old_st;
  struct stat new_st;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_strncasecmp_6;
  signed int return_value_strcasecmp_7;
  signed int return_value_smbc_stat_10;
  signed int *return_value___errno_location_9;
  signed int return_value_smbc_stat_13;
  signed int *return_value___errno_location_12;
  signed int *return_value___errno_location_15;
  signed int *return_value___errno_location_18;
  signed int *return_value___errno_location_21;
  signed int return_value_smbc_rename_25;
  signed int *return_value___errno_location_24;
  if(query_len >= 17ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->old_url_offs == sizeof(struct smb_conn_rename_query) /*16ul*/ ))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->new_url_offs <= query->old_url_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->new_url_offs >= query_len - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    old_url=smb_conn_srv_get_url_from_query((const void *)query, query->old_url_offs);
    new_url=smb_conn_srv_get_url_from_query((const void *)query, query->new_url_offs);
    return_value_strlen_3=strlen(old_url);
    if(!(new_url == old_url + (signed long int)return_value_strlen_3 + 1l))
      goto error;

    return_value_strlen_4=strlen(old_url);
    return_value_strlen_5=strlen(new_url);
    if(!(query_len == 18ul + return_value_strlen_4 + return_value_strlen_5))
      goto error;

    new_url=charset_local2smb(new_url);
    if(new_url == ((const char *)NULL))
      goto error;

    new_url=strdup(new_url);
    if(new_url == ((const char *)NULL))
      goto error;

    old_url=charset_local2smb(old_url);
    if(old_url == ((const char *)NULL))
      goto error;

    count = 0;
    pos = old_url;
    for( ; !(*pos == 0); pos = pos + 1l)
      if((signed int)*pos == 47)
      {
        count = count + 1;
        if(count == 4)
          break;

      }

    if(!((signed int)*pos == 47))
    {
      smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, 18, (void *)0, (unsigned long int)0);
      free((void *)(char *)new_url);
      goto __CPROVER_DUMP_L41;
    }

    return_value_strncasecmp_6=strncasecmp(old_url, new_url, (unsigned long int)((pos - old_url) + (signed long int)1));
    if(!(return_value_strncasecmp_6 == 0))
    {
      smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, 18, (void *)0, (unsigned long int)0);
      free((void *)(char *)new_url);
      goto __CPROVER_DUMP_L41;
    }

    return_value_strcasecmp_7=strcasecmp(new_url, old_url);
    if(!(return_value_strcasecmp_7 == 0))
    {
      return_value_smbc_stat_10=smbc_stat(old_url, &old_st);
      if(!(return_value_smbc_stat_10 >= 0))
      {
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        switch(*return_value___errno_location_8)
        {
          case 13:
            goto rename;
          case 40:

          case 36:

          case 2:

          case 20:
          {
            return_value___errno_location_9=__errno_location();
            smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, *return_value___errno_location_9, (void *)0, (unsigned long int)0);
            free((void *)(char *)new_url);
            goto __CPROVER_DUMP_L41;
          }
          default:
            goto error;
        }
      }

      return_value_smbc_stat_13=smbc_stat(new_url, &new_st);
      if(!(return_value_smbc_stat_13 >= 0))
      {
        signed int *return_value___errno_location_11;
        return_value___errno_location_11=__errno_location();
        switch(*return_value___errno_location_11)
        {
          case 13:
            goto rename;
          case 2:
            goto rename;
          case 40:

          case 36:

          case 20:
          {
            return_value___errno_location_12=__errno_location();
            smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, *return_value___errno_location_12, (void *)0, (unsigned long int)0);
            free((void *)(char *)new_url);
            goto __CPROVER_DUMP_L41;
          }
          default:
            goto error;
        }
      }

      if((61440u & new_st.st_mode) == 32768u && (61440u & old_st.st_mode) == 16384u)
      {
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, 20, (void *)0, (unsigned long int)0);
        free((void *)(char *)new_url);
        goto __CPROVER_DUMP_L41;
      }

      if((61440u & new_st.st_mode) == 16384u && (61440u & old_st.st_mode) == 16384u)
      {
        signed int return_value_smbc_rmdir_16;
        return_value_smbc_rmdir_16=smbc_rmdir(new_url);
        if(!(return_value_smbc_rmdir_16 == 0))
        {
          signed int *return_value___errno_location_14;
          return_value___errno_location_14=__errno_location();
          switch(*return_value___errno_location_14)
          {
            case 13:

            case 16:

            case 1:
              goto rename;
            case 22:

            case 40:

            case 36:

            case 2:

            case 20:

            case 39:

            case 30:
            {
              return_value___errno_location_15=__errno_location();
              smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, *return_value___errno_location_15, (void *)0, (unsigned long int)0);
              free((void *)(char *)new_url);
              goto __CPROVER_DUMP_L41;
            }
            default:
              goto error;
          }
        }

        goto rename;
      }

      if((61440u & new_st.st_mode) == 32768u && (61440u & old_st.st_mode) == 32768u)
      {
        if(!((2u & new_st.st_mode) == 2u))
        {
          signed int return_value_smbc_chmod_19;
          return_value_smbc_chmod_19=smbc_chmod(new_url, new_st.st_mode | (unsigned int)((0200 >> 3) >> 3));
          if(!(return_value_smbc_chmod_19 >= 0))
          {
            signed int *return_value___errno_location_17;
            return_value___errno_location_17=__errno_location();
            switch(*return_value___errno_location_17)
            {
              case 13:

              case 5:

              case 1:

              case 2:

              case 20:
                break;
              case 40:

              case 36:

              case 30:
              {
                return_value___errno_location_18=__errno_location();
                smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, *return_value___errno_location_18, (void *)0, (unsigned long int)0);
                free((void *)(char *)new_url);
                goto __CPROVER_DUMP_L41;
              }
              default:
                goto error;
            }
          }

        }

        signed int return_value_smbc_unlink_22;
        return_value_smbc_unlink_22=smbc_unlink(new_url);
        if(!(return_value_smbc_unlink_22 >= 0))
        {
          signed int *return_value___errno_location_20;
          return_value___errno_location_20=__errno_location();
          switch(*return_value___errno_location_20)
          {
            case 13:

            case 16:

            case 5:

            case 21:

            case 2:

            case 20:

            case 1:
              break;
            case 40:

            case 36:

            case 30:
            {
              return_value___errno_location_21=__errno_location();
              smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, *return_value___errno_location_21, (void *)0, (unsigned long int)0);
              free((void *)(char *)new_url);
              goto __CPROVER_DUMP_L41;
            }
            default:
              goto error;
          }
        }

      }

    }


  rename:
    ;
    return_value_smbc_rename_25=smbc_rename(old_url, new_url);
    if(!(return_value_smbc_rename_25 >= 0))
    {
      signed int *return_value___errno_location_23;
      return_value___errno_location_23=__errno_location();
      if(*return_value___errno_location_23 == 1 || *return_value___errno_location_23 == 2 || *return_value___errno_location_23 == 13 || *return_value___errno_location_23 == 16 || *return_value___errno_location_23 == 17 || *return_value___errno_location_23 == 18 || *return_value___errno_location_23 == 20 || *return_value___errno_location_23 == 21 || *return_value___errno_location_23 == 22 || *return_value___errno_location_23 == 28 || *return_value___errno_location_23 == 30 || *return_value___errno_location_23 == 31 || *return_value___errno_location_23 == 36 || *return_value___errno_location_23 == 39 || *return_value___errno_location_23 == 40)
      {
        return_value___errno_location_24=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, *return_value___errno_location_24, (void *)0, (unsigned long int)0);
        free((void *)(char *)new_url);
        goto __CPROVER_DUMP_L41;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RENAME, 0, (void *)0, (unsigned long int)0);
    free((void *)(char *)new_url);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_26;
    return_value___errno_location_26=__errno_location();
    signed int return_value_getpid_27;
    return_value_getpid_27=getpid();
    signed int *return_value___errno_location_28;
    return_value___errno_location_28=__errno_location();
    signed int *return_value___errno_location_29;
    return_value___errno_location_29=__errno_location();
    char *return_value_strerror_30;
    return_value_strerror_30=strerror(*return_value___errno_location_29);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_26, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_27, (const void *)"smb_conn_srv_rename", *return_value___errno_location_28, return_value_strerror_30);
    exit(1);
  }

__CPROVER_DUMP_L41:
  ;
}

// smb_conn_srv_rmdir
// file smb_conn_srv.c line 1114
void smb_conn_srv_rmdir(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len)
{
  const char *url;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_rmdir_4;
  signed int *return_value___errno_location_3;
  if(query_len >= 9ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_query) /*8ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 9ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_rmdir_4=smbc_rmdir(url);
    if(!(return_value_smbc_rmdir_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 1 || *return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 16 || *return_value___errno_location_2 == 20 || *return_value___errno_location_2 == 22 || *return_value___errno_location_2 == 30 || *return_value___errno_location_2 == 36 || *return_value___errno_location_2 == 39 || *return_value___errno_location_2 == 40)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RMDIR, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)RMDIR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_rmdir", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_samba_init
// file smb_conn_srv.c line 204
static void smb_conn_srv_samba_init(struct smb_conn_srv_ctx *srv_ctx)
{
  struct _SMBCCTX *ctx;
  ctx=smbc_new_context();
  struct _SMBCCTX *return_value_smbc_init_context_1;
  if(!(ctx == ((struct _SMBCCTX *)NULL)))
  {
    smbc_setTimeout(ctx, srv_ctx->smb_timeout);
    smbc_setDebug(ctx, srv_ctx->smb_debug_level);
    smbc_setFunctionAuthDataWithContext(ctx, smb_conn_srv_auth_fn);
    smbc_setOptionUserData(ctx, (void *)srv_ctx);
    smbc_setOptionUseKerberos(ctx, 1);
    smbc_setOptionFallbackAfterKerberos(ctx, 1);
    return_value_smbc_init_context_1=smbc_init_context(ctx);
    if(return_value_smbc_init_context_1 == ((struct _SMBCCTX *)NULL))
      goto error;

    smbc_set_context(ctx);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    signed int return_value_getpid_3;
    return_value_getpid_3=getpid();
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    smb_conn_srv_debug_print(srv_ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_2, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_3, (const void *)"smb_conn_srv_samba_init", *return_value___errno_location_4, return_value_strerror_6);
    exit(1);
  }
}

// smb_conn_srv_send_msg
// file smb_conn_srv.c line 396
signed int smb_conn_srv_send_msg(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd msg_type, signed int errno_value, signed int level, const char *msg)
{
  signed long int bytes;
  struct iovec iov[3l];
  struct smb_conn_reply_hdr reply_header;
  struct smb_conn_message_req reply;
  iov[(signed long int)0].iov_base = (void *)&reply_header;
  iov[(signed long int)0].iov_len = sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
  iov[(signed long int)1].iov_base = (void *)&reply;
  iov[(signed long int)1].iov_len = sizeof(struct smb_conn_message_req) /*16ul*/ ;
  iov[(signed long int)2].iov_base = (void *)(char *)msg;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(msg);
  iov[(signed long int)2].iov_len = return_value_strlen_1 + (unsigned long int)1;
  reply_header.reply_len = iov[(signed long int)0].iov_len + iov[(signed long int)1].iov_len + iov[(signed long int)2].iov_len;
  reply_header.reply_cmd = msg_type;
  reply_header.errno_value = errno_value;
  reply.pid=getpid();
  reply.debug_level = level;
  reply.msg_offs = sizeof(struct smb_conn_message_req) /*16ul*/ ;
  if(reply_header.reply_len >= 4097ul)
    return -1;

  else
  {
    bytes=writev(ctx->conn_fd, iov, 3);
    if(!(bytes == (signed long int)reply_header.reply_len))
      return -1;

    else
      return 0;
  }
}

// smb_conn_srv_send_reply
// file smb_conn_srv.c line 354
void smb_conn_srv_send_reply(struct smb_conn_srv_ctx *ctx, enum smb_conn_cmd reply_cmd, signed int errno_value, void *reply, unsigned long int reply_len)
{
  signed int iov_cnt;
  struct iovec iov[2l];
  struct smb_conn_reply_hdr header;
  if(errno_value == 0)
  {
    if(reply == NULL && !(reply_len == 0ul) || reply_len == 0ul && !(reply == NULL))
      goto error;

  }

  else
    if(!(reply == NULL) || !(reply_len == 0ul))
      goto error;

  iov_cnt = 1;
  header.reply_cmd = reply_cmd;
  header.errno_value = errno_value;
  header.reply_len = sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
  iov[(signed long int)0].iov_base = (void *)&header;
  iov[(signed long int)0].iov_len = sizeof(struct smb_conn_reply_hdr) /*16ul*/ ;
  if(reply_len >= 1ul)
  {
    iov[(signed long int)iov_cnt].iov_base = reply;
    iov[(signed long int)iov_cnt].iov_len = reply_len;
    header.reply_len = header.reply_len + iov[(signed long int)iov_cnt].iov_len;
    iov_cnt = iov_cnt + 1;
  }

  signed long int return_value_writev_1;
  if(!(header.reply_len >= 4097ul))
  {
    return_value_writev_1=writev(ctx->conn_fd, iov, iov_cnt);
    if(!(return_value_writev_1 == (signed long int)header.reply_len))
      goto error;

  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    signed int return_value_getpid_3;
    return_value_getpid_3=getpid();
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_2, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_3, (const void *)"smb_conn_srv_send_reply", *return_value___errno_location_4, return_value_strerror_6);
    exit(1);
  }
}

// smb_conn_srv_setxattr
// file smb_conn_srv.c line 1339
void smb_conn_srv_setxattr(struct smb_conn_srv_ctx *ctx, struct smb_conn_setxattr_query *query, unsigned long int query_len)
{
  const char *url;
  const char *name;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_smbc_setxattr_8;
  signed int *return_value___errno_location_7;
  if(query_len >= 33ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_setxattr_query) /*32ul*/ ))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->name_offs <= query->url_offs ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->name_offs >= query_len - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    name=smb_conn_srv_get_url_from_query((const void *)query, query->name_offs);
    return_value_strlen_3=strlen(url);
    if(!(name == url + (signed long int)return_value_strlen_3 + 1l))
      goto error;

    return_value_strlen_4=strlen(url);
    return_value_strlen_5=strlen(name);
    if(!(query_len == 34ul + return_value_strlen_4 + return_value_strlen_5))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_setxattr_8=smbc_setxattr(url, name, (const void *)ctx->shmem_ptr, query->bufsize, query->flags);
    if(!(return_value_smbc_setxattr_8 >= 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 1 || *return_value___errno_location_6 == 2 || *return_value___errno_location_6 == 13 || *return_value___errno_location_6 == 17 || *return_value___errno_location_6 == 20 || *return_value___errno_location_6 == 22 || *return_value___errno_location_6 == 28 || *return_value___errno_location_6 == 36 || *return_value___errno_location_6 == 40 || *return_value___errno_location_6 == 95 || *return_value___errno_location_6 == 122)
      {
        return_value___errno_location_7=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)SETXATTR, *return_value___errno_location_7, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L9;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)SETXATTR, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    signed int return_value_getpid_10;
    return_value_getpid_10=getpid();
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    signed int *return_value___errno_location_12;
    return_value___errno_location_12=__errno_location();
    char *return_value_strerror_13;
    return_value_strerror_13=strerror(*return_value___errno_location_12);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_9, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_10, (const void *)"smb_conn_srv_setxattr", *return_value___errno_location_11, return_value_strerror_13);
    exit(1);
  }

__CPROVER_DUMP_L9:
  ;
}

// smb_conn_srv_stat
// file smb_conn_srv.c line 1154
void smb_conn_srv_stat(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len)
{
  const char *url;
  struct smb_conn_stat_reply reply;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_stat_4;
  signed int *return_value___errno_location_3;
  if(query_len >= 9ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_query) /*8ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 9ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_stat_4=smbc_stat(url, &reply.stat);
    if(!(return_value_smbc_stat_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 20 || *return_value___errno_location_2 == 36 || *return_value___errno_location_2 == 40)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)STAT, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)STAT, 0, (void *)&reply, sizeof(struct smb_conn_stat_reply) /*144ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_stat", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_unlink
// file smb_conn_srv.c line 672
void smb_conn_srv_unlink(struct smb_conn_srv_ctx *ctx, struct smb_conn_url_query *query, unsigned long int query_len)
{
  const char *url;
  struct stat st;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_stat_7;
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_5;
  signed int return_value_smbc_unlink_10;
  signed int *return_value___errno_location_9;
  if(query_len >= 9ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_url_query) /*8ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 9ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_stat_7=smbc_stat(url, &st);
    if(!(return_value_smbc_stat_7 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      switch(*return_value___errno_location_2)
      {
        case 13:
          break;
        case 40:

        case 36:

        case 2:

        case 20:
        {
          return_value___errno_location_3=__errno_location();
          smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
          goto __CPROVER_DUMP_L17;
        }
        default:
          goto error;
      }
    }

    else
    {
      if(!((61440u & st.st_mode) == 32768u))
      {
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, 21, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L17;
      }

      if(!((2u & st.st_mode) == 2u))
      {
        signed int return_value_smbc_chmod_6;
        return_value_smbc_chmod_6=smbc_chmod(url, st.st_mode | (unsigned int)((0200 >> 3) >> 3));
        if(!(return_value_smbc_chmod_6 >= 0))
        {
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          switch(*return_value___errno_location_4)
          {
            case 13:

            case 5:

            case 1:
              break;
            case 40:

            case 36:

            case 2:

            case 20:

            case 30:
            {
              return_value___errno_location_5=__errno_location();
              smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, *return_value___errno_location_5, (void *)0, (unsigned long int)0);
              goto __CPROVER_DUMP_L17;
            }
            default:
              goto error;
          }
        }

      }

    }
    return_value_smbc_unlink_10=smbc_unlink(url);
    if(!(return_value_smbc_unlink_10 >= 0))
    {
      signed int *return_value___errno_location_8;
      return_value___errno_location_8=__errno_location();
      if(*return_value___errno_location_8 == 1 || *return_value___errno_location_8 == 2 || *return_value___errno_location_8 == 5 || *return_value___errno_location_8 == 13 || *return_value___errno_location_8 == 16 || *return_value___errno_location_8 == 20 || *return_value___errno_location_8 == 21 || *return_value___errno_location_8 == 30 || *return_value___errno_location_8 == 36 || *return_value___errno_location_8 == 40)
      {
        return_value___errno_location_9=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, *return_value___errno_location_9, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L17;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UNLINK, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_11;
    return_value___errno_location_11=__errno_location();
    signed int return_value_getpid_12;
    return_value_getpid_12=getpid();
    signed int *return_value___errno_location_13;
    return_value___errno_location_13=__errno_location();
    signed int *return_value___errno_location_14;
    return_value___errno_location_14=__errno_location();
    char *return_value_strerror_15;
    return_value_strerror_15=strerror(*return_value___errno_location_14);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_11, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_12, (const void *)"smb_conn_srv_unlink", *return_value___errno_location_13, return_value_strerror_15);
    exit(1);
  }

__CPROVER_DUMP_L17:
  ;
}

// smb_conn_srv_utimes
// file smb_conn_srv.c line 1305
void smb_conn_srv_utimes(struct smb_conn_srv_ctx *ctx, struct smb_conn_utimes_query *query, unsigned long int query_len)
{
  const char *url;
  unsigned long int return_value_strlen_1;
  signed int return_value_smbc_utimes_4;
  signed int *return_value___errno_location_3;
  if(query_len >= 41ul)
  {
    if(!((signed int)((char *)query)[(signed long int)query_len + -1l] == 0))
      goto error;

    if(!(query->url_offs == sizeof(struct smb_conn_utimes_query) /*40ul*/ ))
      goto error;

    url=smb_conn_srv_get_url_from_query((const void *)query, query->url_offs);
    return_value_strlen_1=strlen(url);
    if(!(query_len == 41ul + return_value_strlen_1))
      goto error;

    url=charset_local2smb(url);
    if(url == ((const char *)NULL))
      goto error;

    return_value_smbc_utimes_4=smbc_utimes(url, query->tbuf);
    if(!(return_value_smbc_utimes_4 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 1 || *return_value___errno_location_2 == 2 || *return_value___errno_location_2 == 13 || *return_value___errno_location_2 == 30)
      {
        return_value___errno_location_3=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UTIMES, *return_value___errno_location_3, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L5;
      }

      goto error;
    }

    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)UTIMES, 0, (void *)0, (unsigned long int)0);
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_5, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_6, (const void *)"smb_conn_srv_utimes", *return_value___errno_location_7, return_value_strerror_9);
    exit(1);
  }

__CPROVER_DUMP_L5:
  ;
}

// smb_conn_srv_write
// file smb_conn_srv.c line 594
void smb_conn_srv_write(struct smb_conn_srv_ctx *ctx, struct smb_conn_rw_query *query, unsigned long int query_len)
{
  struct smb_conn_srv_fd *state;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_5;
  if(query_len == sizeof(struct smb_conn_rw_query) /*24ul*/ )
  {
    if(query->offset == -1l)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = query->bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = query->srv_fd == (void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      goto error;

    state = (struct smb_conn_srv_fd *)query->srv_fd;
    if(!(state->fd >= 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)state->type != SMB_CONN_FILE ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      goto error;

    if(!(state->offset == query->offset))
    {
      signed long int pos;
      pos=smbc_lseek(state->fd, query->offset, 0);
      if(!(pos == query->offset))
        goto error;

      state->offset = query->offset;
    }

    reply.bufsize=smbc_write(state->fd, (const void *)ctx->shmem_ptr, query->bufsize);
    if(!(reply.bufsize >= 0l))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(*return_value___errno_location_4 == 4 || *return_value___errno_location_4 == 5 || *return_value___errno_location_4 == 11 || *return_value___errno_location_4 == 21 || *return_value___errno_location_4 == 22 || *return_value___errno_location_4 == 28)
      {
        state->offset = (signed long int)-1;
        return_value___errno_location_5=__errno_location();
        smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)WRITE, *return_value___errno_location_5, (void *)0, (unsigned long int)0);
        goto __CPROVER_DUMP_L12;
      }

      goto error;
    }

    state->offset = state->offset + reply.bufsize;
    smb_conn_srv_send_reply(ctx, (enum smb_conn_cmd)WRITE, 0, (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );
  }

  else
  {

  error:
    ;
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    signed int return_value_getpid_7;
    return_value_getpid_7=getpid();
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    char *return_value_strerror_10;
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    smb_conn_srv_debug_print(ctx, (enum smb_conn_cmd)DIE_MSG, *return_value___errno_location_6, 0, 0, "srv(%d)->%s: errno=%d, %s\n", return_value_getpid_7, (const void *)"smb_conn_srv_write", *return_value___errno_location_8, return_value_strerror_10);
    exit(1);
  }

__CPROVER_DUMP_L12:
  ;
}

// smb_conn_stat
// file smb_conn.c line 1064
signed int smb_conn_stat(struct smb_conn_ctx *ctx, const char *url, struct stat *st)
{
  signed int error;
  struct smb_conn_url_query query;
  struct smb_conn_stat_reply reply;
  query.url_offs = sizeof(struct smb_conn_url_query) /*8ul*/ ;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)STAT, (void *)&query, sizeof(struct smb_conn_url_query) /*8ul*/ , (void *)&reply, sizeof(struct smb_conn_stat_reply) /*144ul*/ , url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  memcpy((void *)st, (const void *)&reply.stat, sizeof(struct stat) /*144ul*/ );
  return 0;
}

// smb_conn_unlink
// file smb_conn.c line 820
signed int smb_conn_unlink(struct smb_conn_ctx *ctx, const char *url)
{
  signed int error;
  struct smb_conn_url_query query;
  query.url_offs = sizeof(struct smb_conn_url_query) /*8ul*/ ;
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)UNLINK, (void *)&query, sizeof(struct smb_conn_url_query) /*8ul*/ , (void *)0, (unsigned long int)0, url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// smb_conn_up_if_broken
// file smb_conn.c line 133
static signed int smb_conn_up_if_broken(struct smb_conn_ctx *ctx)
{
  if(!(ctx->conn_fd == -1))
  {
    signed int return_value_process_is_smb_conn_alive_1;
    return_value_process_is_smb_conn_alive_1=process_is_smb_conn_alive(ctx->conn_fd);
    if(!(return_value_process_is_smb_conn_alive_1 == 0))
      return 0;

    smb_conn_connection_close(ctx);
  }

  ctx->conn_fd=process_start_new_smb_conn(ctx->shmem_ptr, ctx->shmem_size);
  return ctx->conn_fd != -1 ? 0 : -1;
}

// smb_conn_utimes
// file smb_conn.c line 1182
signed int smb_conn_utimes(struct smb_conn_ctx *ctx, const char *url, struct timeval *tbuf)
{
  signed int error;
  struct smb_conn_utimes_query query;
  query.url_offs = sizeof(struct smb_conn_utimes_query) /*40ul*/ ;
  memcpy((void *)&query.tbuf, (const void *)tbuf, (unsigned long int)2 * sizeof(struct timeval) /*16ul*/ );
  pthread_mutex_lock(&ctx->mutex);
  ctx->access_time=time((signed long int *)(void *)0);
  error=smb_conn_process_query(ctx, (enum smb_conn_cmd)UTIMES, (void *)&query, sizeof(struct smb_conn_utimes_query) /*40ul*/ , (void *)0, (unsigned long int)0, url, (void *)0);
  pthread_mutex_unlock(&ctx->mutex);
  if(!(error == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = error;
    return -1;
  }

  return 0;
}

// smb_conn_write
// file smb_conn.c line 741
signed long int smb_conn_write(struct smb_conn_ctx *ctx, struct smb_conn_file *fd, signed long int offset, void *buf, unsigned long int bufsize)
{
  signed int error;
  struct smb_conn_file *file;
  struct smb_conn_rw_query query;
  struct smb_conn_buf_reply reply;
  _Bool tmp_if_expr_2;
  if(fd == ((struct smb_conn_file *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = bufsize > ctx->shmem_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  query.offset = offset;
  query.bufsize = bufsize;
  error = 22;
  reply.bufsize = (signed long int)-1;
  file = (struct smb_conn_file *)fd;
  pthread_mutex_lock(&ctx->mutex);
  if((signed int)file->reopen_cmd == OPEN)
  {
    if(file->ctx == ctx)
    {
      ctx->access_time=time((signed long int *)(void *)0);
      file->access_time=time((signed long int *)(void *)0);
      memcpy((void *)ctx->shmem_ptr, buf, bufsize);
      msync((void *)ctx->shmem_ptr, bufsize, 4);
      error=smb_conn_process_fd_query(ctx, (enum smb_conn_cmd)WRITE, file, &query.srv_fd, (void *)&query, sizeof(struct smb_conn_rw_query) /*24ul*/ , (void *)&reply, sizeof(struct smb_conn_buf_reply) /*8ul*/ );
      if(!(error == 0) || !((signed long int)bufsize >= reply.bufsize))
      {
        reply.bufsize = (signed long int)-1;
        if(error == 0)
          error = 5;

      }

    }

  }

  pthread_mutex_unlock(&ctx->mutex);
  signed int *return_value___errno_location_3;
  if(!(error == 0))
  {
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = error;
  }

  return reply.bufsize;
}

// smbitem_aquire_item
// file smbitem.c line 69
static inline void smbitem_aquire_item(struct smbitem *item)
{
  item->ref_count = item->ref_count + 1;
}

// smbitem_delete_item
// file smbitem.c line 65
static inline void smbitem_delete_item(struct smbitem *item)
{
  free((void *)item);
}

// smbitem_delete_obsolete
// file smbitem.c line 523
void smbitem_delete_obsolete(signed long int threshold, enum smbitem_tree_t tree)
{
  struct smbitem *dir;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: threshold=%d, tree=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_delete_obsolete", (signed int)threshold, tree);
  }

  dir = (signed int)tree == SMBITEM_SAMBA_TREE ? trees.samba : trees.user;
  pthread_mutex_lock(&m_smbitem);
  smbitem_delete_obsolete_items(dir, threshold);
  pthread_mutex_unlock(&m_smbitem);
}

// smbitem_delete_obsolete_items
// file smbitem.c line 103
static void smbitem_delete_obsolete_items(struct smbitem *group, signed long int threshold)
{
  signed int i = group->_anon0._anon1.child_cnt - 1;
  for( ; i >= 0; i = i - 1)
  {
    if((signed int)group->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
      smbitem_delete_obsolete_items(group->_anon0._anon1.childs[(signed long int)i], threshold);

    if(!(group->_anon0._anon1.childs[(signed long int)i]->touch_time >= threshold))
    {
      smbitem_release_item(group->_anon0._anon1.childs[(signed long int)i]);
      if(!(i == group->_anon0._anon1.child_cnt + -1))
        memmove((void *)&group->_anon0._anon1.childs[(signed long int)i], (const void *)&group->_anon0._anon1.childs[(signed long int)(i + 1)], (unsigned long int)((group->_anon0._anon1.child_cnt - i) - 1) * sizeof(struct smbitem *) /*8ul*/ );

      group->_anon0._anon1.child_cnt = group->_anon0._anon1.child_cnt - 1;
    }

  }
}

// smbitem_done
// file smbitem.c line 204
void smbitem_done(void)
{
  pthread_mutex_lock(&m_smbitem);
  smbitem_release_item(trees.samba);
  smbitem_release_item(trees.user);
  trees.user = (struct smbitem *)(void *)0;
  trees.samba = trees.user;
  pthread_mutex_unlock(&m_smbitem);
}

// smbitem_find_in_group
// file smbitem.c line 148
static inline signed int smbitem_find_in_group(struct smbitem *group, const char *name, signed int first)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  signed int return_value_smbitem_find_in_group_wl_2;
  return_value_smbitem_find_in_group_wl_2=smbitem_find_in_group_wl(group, name, return_value_strlen_1, first);
  return return_value_smbitem_find_in_group_wl_2;
}

// smbitem_find_in_group_wl
// file smbitem.c line 132
static signed int smbitem_find_in_group_wl(struct smbitem *group, const char *name, unsigned long int name_len, signed int first)
{
  signed int last = group->_anon0._anon1.child_cnt - 1;
  while(last >= first)
  {
    signed int i = first + last >> 1;
    signed int result;
    result=strncasecmp(group->_anon0._anon1.childs[(signed long int)i]->name, name, name_len);
    if(result == 0)
    {
      if((signed int)group->_anon0._anon1.childs[(signed long int)i]->name[(signed long int)name_len] == 0)
        return i;

    }

    if(!(result >= 0))
      first = i + 1;

    else
      last = i - 1;
  }
  return -(first + 1);
}

// smbitem_get_group
// file smbitem.c line 675
signed int smbitem_get_group(const char *host, char *buf, unsigned long int size)
{
  signed int pos;
  signed int result;
  struct smbitem *item;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  _Bool tmp_if_expr_5;
  signed int return_value_strcmp_4;
  if(host == ((const char *)NULL))
    return -1;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: host=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_get_group", host);
    }

    for( ; (signed int)*host == 47; host = host + 1l)
      ;
    if((signed int)*host == 0)
      return -1;

    else
    {
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(host, ".");
      if(return_value_strcmp_3 == 0)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strcmp_4=strcmp(host, "..");
        tmp_if_expr_5 = return_value_strcmp_4 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        return -1;

      else
      {
        result = -1;
        pthread_mutex_lock(&m_smbitem);
        item = trees.user;
        pos=smbitem_find_in_group(item, host, 0);
        if(!(pos >= 0))
        {
          item = trees.samba;
          pos=smbitem_find_in_group(item, host, 0);
          if(!(pos >= 0))
            goto end;

        }


      ok:
        ;
        item = item->_anon0._anon1.childs[(signed long int)pos];
        if((signed int)item->type == SMBITEM_HOST)
        {
          if(!(item->_anon0._anon0.parent_group == ((struct smbitem *)NULL)))
          {
            item = item->_anon0._anon0.parent_group;
            strncpy(buf, item->name, size);
            buf[(signed long int)(size - (unsigned long int)1)] = (char)0;
            result = 0;
          }

        }


      end:
        ;
        pthread_mutex_unlock(&m_smbitem);
        return result;
      }
    }
  }
}

// smbitem_get_path_end
// file smbitem.c line 535
static inline const char * smbitem_get_path_end(const char *path)
{
  const char *next;
  next=strchr(path, 47);
  const char *tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(next == ((const char *)NULL)))
    tmp_if_expr_2 = next;

  else
  {
    return_value_strlen_1=strlen(path);
    tmp_if_expr_2 = path + (signed long int)return_value_strlen_1;
  }
  return tmp_if_expr_2;
}

// smbitem_get_samba_groups
// file smbitem.c line 404
struct smbitem * smbitem_get_samba_groups(void)
{
  signed int i;
  struct smbitem *dir = (struct smbitem *)(void *)0;
  pthread_mutex_lock(&m_smbitem);
  dir=smbitem_new_group("/");
  if(!(dir == ((struct smbitem *)NULL)))
  {
    i = 0;
    for( ; !(i >= trees.samba->_anon0._anon1.child_cnt); i = i + 1)
      if((signed int)trees.samba->_anon0._anon1.childs[(signed long int)i]->type == SMBITEM_GROUP)
      {
        signed int return_value_smbitem_insert_to_group_1;
        return_value_smbitem_insert_to_group_1=smbitem_insert_to_group(dir, trees.samba->_anon0._anon1.childs[(signed long int)i], dir->_anon0._anon1.child_cnt);
        if(!(return_value_smbitem_insert_to_group_1 == 0))
          goto error;

        smbitem_aquire_item(trees.samba->_anon0._anon1.childs[(signed long int)i]);
      }

    goto end;

  error:
    ;
    if(!(dir == ((struct smbitem *)NULL)))
      smbitem_release_item(dir);

    dir = (struct smbitem *)(void *)0;
  }


end:
  ;
  pthread_mutex_unlock(&m_smbitem);
  return dir;
}

// smbitem_getdir
// file smbitem.c line 431
struct smbitem * smbitem_getdir(const char *path)
{
  signed int i;
  signed int pos;
  struct smbitem *dir_user;
  struct smbitem *dir_samba;
  struct smbitem *dir;
  _Bool tmp_if_expr_2;
  char *return_value_strchr_1;
  if(path == ((const char *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_strchr_1=strchr(path, 47);
    tmp_if_expr_2 = return_value_strchr_1 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(tmp_if_expr_2)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_strcmp_3=strcmp(path, ".");
    tmp_if_expr_4 = return_value_strcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_strcmp_5=strcmp(path, "..");
    tmp_if_expr_6 = return_value_strcmp_5 == 0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_common_get_smbnetfs_debug_level_8;
  signed int return_value_common_get_smbnetfs_debug_level_10;
  if(tmp_if_expr_6)
    return (struct smbitem *)(void *)0;

  else
  {
    dir = (struct smbitem *)(void *)0;
    pthread_mutex_lock(&m_smbitem);
    if(!((signed int)*path == 0))
    {
      dir_user = (struct smbitem *)(void *)0;
      pos=smbitem_find_in_group(trees.user, path, 0);
      if(pos >= 0)
      {
        if((signed int)trees.user->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_GROUP)
          dir_user = trees.user->_anon0._anon1.childs[(signed long int)pos];

        else
        {
          return_value_common_get_smbnetfs_debug_level_8=common_get_smbnetfs_debug_level_link1();
          if(return_value_common_get_smbnetfs_debug_level_8 >= 5)
          {
            struct timeval __now;
            gettimeofday(&__now, (struct timezone *)(void *)0);
            char __tstamp[20l];
            struct tm __tm;
            localtime_r(&__now.tv_sec, &__tm);
            strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
            signed int return_value_getpid_7;
            return_value_getpid_7=getpid();
            common_debug_print("%.19s.%03d %d->%s: ERROR: '%s' is not a group\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_7, (const void *)"smbitem_getdir", path);
          }

          goto error;
        }
      }

      dir_samba = (struct smbitem *)(void *)0;
      pos=smbitem_find_in_group(trees.samba, path, 0);
      if(pos >= 0)
      {
        if((signed int)trees.samba->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_GROUP)
          dir_samba = trees.samba->_anon0._anon1.childs[(signed long int)pos];

        else
          if(dir_user == ((struct smbitem *)NULL))
          {
            return_value_common_get_smbnetfs_debug_level_10=common_get_smbnetfs_debug_level_link1();
            if(return_value_common_get_smbnetfs_debug_level_10 >= 5)
            {
              struct timeval smbitem_getdir__1__1__2__2__1____now;
              gettimeofday(&smbitem_getdir__1__1__2__2__1____now, (struct timezone *)(void *)0);
              char smbitem_getdir__1__1__2__2__1____tstamp[20l];
              struct tm smbitem_getdir__1__1__2__2__1____tm;
              localtime_r(&smbitem_getdir__1__1__2__2__1____now.tv_sec, &smbitem_getdir__1__1__2__2__1____tm);
              strftime(smbitem_getdir__1__1__2__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &smbitem_getdir__1__1__2__2__1____tm);
              signed int return_value_getpid_9;
              return_value_getpid_9=getpid();
              common_debug_print("%.19s.%03d %d->%s: ERROR: '%s' is not a group\n", (const void *)smbitem_getdir__1__1__2__2__1____tstamp, (signed int)(smbitem_getdir__1__1__2__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_9, (const void *)"smbitem_getdir", path);
            }

            goto error;
          }

      }

    }

    else
    {
      dir_user = trees.user;
      dir_samba = trees.samba;
    }
    dir=smbitem_new_group(path);
    if(!(dir == ((struct smbitem *)NULL)))
    {
      if(!(dir_user == ((struct smbitem *)NULL)))
      {
        if(dir_user->_anon0._anon1.child_cnt >= 1)
        {
          void *return_value_malloc_11;
          return_value_malloc_11=malloc((unsigned long int)dir_user->_anon0._anon1.max_child_cnt * sizeof(struct smbitem *) /*8ul*/ );
          dir->_anon0._anon1.childs = (struct smbitem **)return_value_malloc_11;
          if(dir->_anon0._anon1.childs == ((struct smbitem **)NULL))
            goto error;

          dir->_anon0._anon1.max_child_cnt = dir_user->_anon0._anon1.max_child_cnt;
          dir->_anon0._anon1.child_cnt = dir_user->_anon0._anon1.child_cnt;
          memcpy((void *)dir->_anon0._anon1.childs, (const void *)dir_user->_anon0._anon1.childs, (unsigned long int)dir_user->_anon0._anon1.child_cnt * sizeof(struct smbitem *) /*8ul*/ );
          i = 0;
          for( ; !(i >= dir_user->_anon0._anon1.child_cnt); i = i + 1)
            smbitem_aquire_item(dir->_anon0._anon1.childs[(signed long int)i]);
        }

      }

      if(!(dir_samba == ((struct smbitem *)NULL)))
      {
        if(dir_samba->_anon0._anon1.child_cnt >= 1)
        {
          pos = 0;
          i = 0;
          for( ; !(i >= dir_samba->_anon0._anon1.child_cnt); i = i + 1)
          {
            pos=smbitem_find_in_group(dir, dir_samba->_anon0._anon1.childs[(signed long int)i]->name, pos);
            if(!(pos >= 0))
            {
              pos = -(pos + 1);
              signed int return_value_smbitem_insert_to_group_12;
              return_value_smbitem_insert_to_group_12=smbitem_insert_to_group(dir, dir_samba->_anon0._anon1.childs[(signed long int)i], pos);
              if(!(return_value_smbitem_insert_to_group_12 == 0))
                goto error;

              smbitem_aquire_item(dir_samba->_anon0._anon1.childs[(signed long int)i]);
            }

            pos = pos + 1;
          }
        }

      }

    }

    else
    {

    error:
      ;
      if(!(dir == ((struct smbitem *)NULL)))
        smbitem_release_item(dir);

      dir = (struct smbitem *)(void *)0;
    }

  end:
    ;
    pthread_mutex_unlock(&m_smbitem);
    return dir;
  }
}

// smbitem_init
// file smbitem.c line 188
signed int smbitem_init(void)
{
  signed int result = -1;
  pthread_mutex_lock(&m_smbitem);
  trees.samba=smbitem_new_group("/");
  if(!(trees.samba == ((struct smbitem *)NULL)))
  {
    trees.user=smbitem_new_group("/");
    if(trees.user == ((struct smbitem *)NULL))
    {
      smbitem_release_item(trees.samba);
      trees.samba = (struct smbitem *)(void *)0;
    }

    else
      result = 0;
  }


error:
  ;
  pthread_mutex_unlock(&m_smbitem);
  return result;
}

// smbitem_insert_to_group
// file smbitem.c line 160
static signed int smbitem_insert_to_group(struct smbitem *group, struct smbitem *item, signed int pos)
{
  signed int tmp_if_expr_1;
  if(!(group->_anon0._anon1.child_cnt >= pos) || !(pos >= 0))
    return -1;

  else
  {
    if(group->_anon0._anon1.max_child_cnt == group->_anon0._anon1.child_cnt)
    {
      struct smbitem **new_childs;
      signed int new_max_cnt;
      if(group->_anon0._anon1.max_child_cnt == 0)
        tmp_if_expr_1 = 64;

      else
        tmp_if_expr_1 = 2 * group->_anon0._anon1.max_child_cnt;
      new_max_cnt = tmp_if_expr_1;
      void *return_value_realloc_2;
      return_value_realloc_2=realloc((void *)group->_anon0._anon1.childs, (unsigned long int)new_max_cnt * sizeof(struct smbitem *) /*8ul*/ );
      new_childs = (struct smbitem **)return_value_realloc_2;
      if(new_childs == ((struct smbitem **)NULL))
        return -1;

      group->_anon0._anon1.max_child_cnt = new_max_cnt;
      group->_anon0._anon1.childs = new_childs;
    }

    if(!(pos >= group->_anon0._anon1.child_cnt))
      memmove((void *)&group->_anon0._anon1.childs[(signed long int)(pos + 1)], (const void *)&group->_anon0._anon1.childs[(signed long int)pos], (unsigned long int)(group->_anon0._anon1.child_cnt - pos) * sizeof(struct smbitem *) /*8ul*/ );

    group->_anon0._anon1.childs[(signed long int)pos] = item;
    group->_anon0._anon1.child_cnt = group->_anon0._anon1.child_cnt + 1;
    group->touch_time=time((signed long int *)(void *)0);
    return 0;
  }
}

// smbitem_is_name_exist
// file smbitem.c line 610
signed int smbitem_is_name_exist(const char *name)
{
  signed int pos;
  _Bool tmp_if_expr_1;
  if(name == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)*name == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    pthread_mutex_lock(&m_smbitem);
    pos=smbitem_find_in_group(trees.user, name, 0);
    if(!(pos >= 0))
      pos=smbitem_find_in_group(trees.samba, name, 0);

    pthread_mutex_unlock(&m_smbitem);
    return (signed int)(pos >= 0);
  }
}

// smbitem_mkgroup
// file smbitem.c line 212
signed int smbitem_mkgroup(const char *path, enum smbitem_tree_t tree)
{
  signed int pos;
  signed int result;
  struct smbitem *dir;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s, tree=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_mkgroup", path, tree);
  }

  dir = (signed int)tree == SMBITEM_SAMBA_TREE ? trees.samba : trees.user;
  _Bool tmp_if_expr_3;
  if(path == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*path == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  char *return_value_strchr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_strchr_4=strchr(path, 47);
    tmp_if_expr_5 = return_value_strchr_4 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_strcmp_6=strcmp(path, ".");
    tmp_if_expr_7 = return_value_strcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_strcmp_8=strcmp(path, "..");
    tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_9)
    return -1;

  else
  {
    result = -1;
    pthread_mutex_lock(&m_smbitem);
    pos=smbitem_find_in_group(dir, path, 0);
    if(pos >= 0)
    {
      if((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_GROUP)
        dir->_anon0._anon1.childs[(signed long int)pos]->touch_time=time((signed long int *)(void *)0);

      else
      {
        struct smbitem *item;
        item=smbitem_new_group(path);
        if(item == ((struct smbitem *)NULL))
          goto error;

        smbitem_release_item(dir->_anon0._anon1.childs[(signed long int)pos]);
        dir->_anon0._anon1.childs[(signed long int)pos] = item;
      }
    }

    else
    {
      struct smbitem *smbitem_mkgroup__1__3__item;
      smbitem_mkgroup__1__3__item=smbitem_new_group(path);
      if(smbitem_mkgroup__1__3__item == ((struct smbitem *)NULL))
        goto error;

      signed int return_value_smbitem_insert_to_group_10;
      return_value_smbitem_insert_to_group_10=smbitem_insert_to_group(dir, smbitem_mkgroup__1__3__item, -(pos + 1));
      if(!(return_value_smbitem_insert_to_group_10 == 0))
      {
        smbitem_release_item(smbitem_mkgroup__1__3__item);
        goto error;
      }

    }
    dir->touch_time=time((signed long int *)(void *)0);
    result = 0;

  error:
    ;
    pthread_mutex_unlock(&m_smbitem);
    return result;
  }
}

// smbitem_mkhost
// file smbitem.c line 256
signed int smbitem_mkhost(const char *path, const char *group, signed int is_hidden, enum smbitem_tree_t tree)
{
  signed int pos;
  signed int result;
  struct smbitem *dir;
  struct smbitem *item;
  struct smbitem *parent_group;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval smbitem_mkhost__1__1____now;
    gettimeofday(&smbitem_mkhost__1__1____now, (struct timezone *)(void *)0);
    char smbitem_mkhost__1__1____tstamp[20l];
    struct tm smbitem_mkhost__1__1____tm;
    localtime_r(&smbitem_mkhost__1__1____now.tv_sec, &smbitem_mkhost__1__1____tm);
    strftime(smbitem_mkhost__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &smbitem_mkhost__1__1____tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s, group=%s, is_hidden=%d, tree=%d\n", (const void *)smbitem_mkhost__1__1____tstamp, (signed int)(smbitem_mkhost__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_mkhost", path, group, is_hidden, tree);
  }

  dir = (signed int)tree == SMBITEM_SAMBA_TREE ? trees.samba : trees.user;
  _Bool tmp_if_expr_3;
  if(path == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*path == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  char *return_value_strchr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_strchr_4=strchr(path, 47);
    tmp_if_expr_5 = return_value_strchr_4 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_strcmp_6=strcmp(path, ".");
    tmp_if_expr_7 = return_value_strcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_strcmp_8=strcmp(path, "..");
    tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_12;
  signed int return_value_strcmp_11;
  _Bool tmp_if_expr_14;
  signed int return_value_strcmp_13;
  _Bool tmp_if_expr_17;
  signed int return_value_common_get_smbnetfs_debug_level_16;
  if(tmp_if_expr_9)
    return -1;

  else
  {
    if(!(group == ((const char *)NULL)))
    {
      char *return_value_strchr_10;
      return_value_strchr_10=strchr(group, 47);
      if(!(return_value_strchr_10 == ((char *)NULL)))
        tmp_if_expr_12 = (_Bool)1;

      else
      {
        return_value_strcmp_11=strcmp(group, ".");
        tmp_if_expr_12 = return_value_strcmp_11 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_12)
        tmp_if_expr_14 = (_Bool)1;

      else
      {
        return_value_strcmp_13=strcmp(group, "..");
        tmp_if_expr_14 = return_value_strcmp_13 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14)
        return -1;

    }

    result = -1;
    pthread_mutex_lock(&m_smbitem);
    if(!(group == ((const char *)NULL)))
    {
      pos=smbitem_find_in_group(dir, group, 0);
      if(!(pos >= 0))
        tmp_if_expr_17 = (_Bool)1;

      else
        tmp_if_expr_17 = (signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type != SMBITEM_GROUP ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_17)
      {
        return_value_common_get_smbnetfs_debug_level_16=common_get_smbnetfs_debug_level_link1();
        if(return_value_common_get_smbnetfs_debug_level_16 >= 5)
        {
          struct timeval __now;
          gettimeofday(&__now, (struct timezone *)(void *)0);
          char __tstamp[20l];
          struct tm __tm;
          localtime_r(&__now.tv_sec, &__tm);
          strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
          signed int return_value_getpid_15;
          return_value_getpid_15=getpid();
          common_debug_print("%.19s.%03d %d->%s: ERROR: group '%s' was not found\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_15, (const void *)"smbitem_mkhost", group);
        }

        goto error;
      }

      parent_group = dir->_anon0._anon1.childs[(signed long int)pos];
    }

    else
      parent_group = (struct smbitem *)(void *)0;
    pos=smbitem_find_in_group(dir, path, 0);
    if(pos >= 0)
    {
      if((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_HOST)
      {
        item = dir->_anon0._anon1.childs[(signed long int)pos];
        if(!(item->_anon0._anon0.parent_group == ((struct smbitem *)NULL)))
        {
          if(!(item->_anon0._anon0.parent_group == parent_group))
          {
            smbitem_release_item(item->_anon0._anon0.parent_group);
            item->_anon0._anon0.parent_group = (struct smbitem *)(void *)0;
          }

        }

        item->_anon0._anon0.is_hidden = is_hidden;
        item->touch_time=time((signed long int *)(void *)0);
      }

      else
      {
        item=smbitem_new_host(path, is_hidden);
        if(item == ((struct smbitem *)NULL))
          goto error;

        smbitem_release_item(dir->_anon0._anon1.childs[(signed long int)pos]);
        dir->_anon0._anon1.childs[(signed long int)pos] = item;
      }
    }

    else
    {
      item=smbitem_new_host(path, is_hidden);
      if(item == ((struct smbitem *)NULL))
        goto error;

      signed int return_value_smbitem_insert_to_group_18;
      return_value_smbitem_insert_to_group_18=smbitem_insert_to_group(dir, item, -(pos + 1));
      if(!(return_value_smbitem_insert_to_group_18 == 0))
      {
        smbitem_release_item(item);
        goto error;
      }

    }
    if(!(parent_group == ((struct smbitem *)NULL)))
    {
      smbitem_aquire_item(parent_group);
      parent_group->touch_time=time((signed long int *)(void *)0);
      item->_anon0._anon0.parent_group = parent_group;
    }

    dir->touch_time=time((signed long int *)(void *)0);
    result = 0;

  error:
    ;
    pthread_mutex_unlock(&m_smbitem);
    return result;
  }
}

// smbitem_mklink
// file smbitem.c line 331
signed int smbitem_mklink(const char *path, const char *linkpath, enum smbitem_tree_t tree)
{
  signed int pos;
  signed int result;
  unsigned long int dirname_len;
  const char *tmp;
  const char *dirname;
  struct smbitem *dir;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s, linkpath=%s, tree=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_mklink", path, linkpath, tree);
  }

  dir = (signed int)tree == SMBITEM_SAMBA_TREE ? trees.samba : trees.user;
  _Bool tmp_if_expr_3;
  if(linkpath == ((const char *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (signed int)*linkpath == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  char *return_value_strchr_5;
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_10;
  signed int return_value_strcmp_9;
  _Bool tmp_if_expr_13;
  signed int return_value_common_get_smbnetfs_debug_level_12;
  _Bool tmp_if_expr_15;
  signed int return_value_strcmp_14;
  if(tmp_if_expr_3)
    return -1;

  else
  {
    if(path == ((const char *)NULL))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (signed int)*path == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      return -1;

    else
    {
      tmp=strchr(path, 47);
      if(!(tmp == ((const char *)NULL)))
      {
        dirname = path;
        dirname_len = (unsigned long int)(tmp - path);
        path = tmp + (signed long int)1;
      }

      else
      {
        dirname = (const char *)(void *)0;
        dirname_len = (unsigned long int)0;
      }
      if((signed int)*path == 0)
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value_strchr_5=strchr(path, 47);
        tmp_if_expr_6 = return_value_strchr_5 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
        tmp_if_expr_8 = (_Bool)1;

      else
      {
        return_value_strcmp_7=strcmp(path, ".");
        tmp_if_expr_8 = return_value_strcmp_7 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_8)
        tmp_if_expr_10 = (_Bool)1;

      else
      {
        return_value_strcmp_9=strcmp(path, "..");
        tmp_if_expr_10 = return_value_strcmp_9 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_10)
        return -1;

      else
      {
        result = -1;
        pthread_mutex_lock(&m_smbitem);
        if(!(dirname == ((const char *)NULL)))
        {
          pos=smbitem_find_in_group_wl(dir, dirname, dirname_len, 0);
          if(!(pos >= 0))
            tmp_if_expr_13 = (_Bool)1;

          else
            tmp_if_expr_13 = (signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type != SMBITEM_GROUP ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_13)
          {
            return_value_common_get_smbnetfs_debug_level_12=common_get_smbnetfs_debug_level_link1();
            if(return_value_common_get_smbnetfs_debug_level_12 >= 5)
            {
              struct timeval smbitem_mklink__1__5__1__1____now;
              gettimeofday(&smbitem_mklink__1__5__1__1____now, (struct timezone *)(void *)0);
              char smbitem_mklink__1__5__1__1____tstamp[20l];
              struct tm smbitem_mklink__1__5__1__1____tm;
              localtime_r(&smbitem_mklink__1__5__1__1____now.tv_sec, &smbitem_mklink__1__5__1__1____tm);
              strftime(smbitem_mklink__1__5__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &smbitem_mklink__1__5__1__1____tm);
              signed int return_value_getpid_11;
              return_value_getpid_11=getpid();
              common_debug_print("%.19s.%03d %d->%s: ERROR: group '%.*s' was not found\n", (const void *)smbitem_mklink__1__5__1__1____tstamp, (signed int)(smbitem_mklink__1__5__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_11, (const void *)"smbitem_mklink", (signed int)dirname_len, dirname);
            }

            goto error;
          }

          dir = dir->_anon0._anon1.childs[(signed long int)pos];
        }

        pos=smbitem_find_in_group(dir, path, 0);
        if(pos >= 0)
        {
          if((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_LINK)
          {
            return_value_strcmp_14=strcmp(dir->_anon0._anon1.childs[(signed long int)pos]->_anon0._anon2.linkpath, linkpath);
            tmp_if_expr_15 = return_value_strcmp_14 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_15 = (_Bool)0;
          if(tmp_if_expr_15)
            dir->_anon0._anon1.childs[(signed long int)pos]->touch_time=time((signed long int *)(void *)0);

          else
          {
            struct smbitem *item;
            item=smbitem_new_link(path, linkpath);
            if(item == ((struct smbitem *)NULL))
              goto error;

            smbitem_release_item(dir->_anon0._anon1.childs[(signed long int)pos]);
            dir->_anon0._anon1.childs[(signed long int)pos] = item;
          }
        }

        else
        {
          struct smbitem *smbitem_mklink__1__7__item;
          smbitem_mklink__1__7__item=smbitem_new_link(path, linkpath);
          if(smbitem_mklink__1__7__item == ((struct smbitem *)NULL))
            goto error;

          signed int return_value_smbitem_insert_to_group_16;
          return_value_smbitem_insert_to_group_16=smbitem_insert_to_group(dir, smbitem_mklink__1__7__item, -(pos + 1));
          if(!(return_value_smbitem_insert_to_group_16 == 0))
          {
            smbitem_release_item(smbitem_mklink__1__7__item);
            goto error;
          }

        }
        dir->touch_time=time((signed long int *)(void *)0);
        result = 0;

      error:
        ;
        pthread_mutex_unlock(&m_smbitem);
        return result;
      }
    }
  }
}

// smbitem_new_group
// file smbitem.c line 32
static struct smbitem * smbitem_new_group(const char *name)
{
  struct smbitem *item;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct smbitem) /*48ul*/  + return_value_strlen_1 + (unsigned long int)1);
  item = (struct smbitem *)return_value_malloc_2;
  if(item == ((struct smbitem *)NULL))
    return (struct smbitem *)(void *)0;

  else
  {
    memset((void *)item, 0, sizeof(struct smbitem) /*48ul*/ );
    item->ref_count = 1;
    item->name = (char *)(item + (signed long int)1);
    strcpy(item->name, name);
    item->type = (enum smbitem_t)SMBITEM_GROUP;
    item->touch_time=time((signed long int *)(void *)0);
    return item;
  }
}

// smbitem_new_host
// file smbitem.c line 16
static struct smbitem * smbitem_new_host(const char *name, signed int is_hidden)
{
  struct smbitem *item;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct smbitem) /*48ul*/  + return_value_strlen_1 + (unsigned long int)1);
  item = (struct smbitem *)return_value_malloc_2;
  if(item == ((struct smbitem *)NULL))
    return (struct smbitem *)(void *)0;

  else
  {
    memset((void *)item, 0, sizeof(struct smbitem) /*48ul*/ );
    item->ref_count = 1;
    item->name = (char *)(item + (signed long int)1);
    strcpy(item->name, name);
    item->type = (enum smbitem_t)SMBITEM_HOST;
    item->touch_time=time((signed long int *)(void *)0);
    item->_anon0._anon0.is_hidden = is_hidden;
    return item;
  }
}

// smbitem_new_link
// file smbitem.c line 47
static struct smbitem * smbitem_new_link(const char *name, const char *linkpath)
{
  struct smbitem *item;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(linkpath);
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct smbitem) /*48ul*/  + return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)2);
  item = (struct smbitem *)return_value_malloc_3;
  if(item == ((struct smbitem *)NULL))
    return (struct smbitem *)(void *)0;

  else
  {
    memset((void *)item, 0, sizeof(struct smbitem) /*48ul*/ );
    item->ref_count = 1;
    item->name = (char *)(item + (signed long int)1);
    strcpy(item->name, name);
    item->type = (enum smbitem_t)SMBITEM_LINK;
    item->touch_time=time((signed long int *)(void *)0);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(name);
    item->_anon0._anon2.linkpath = item->name + (signed long int)return_value_strlen_4 + (signed long int)1;
    strcpy(item->_anon0._anon2.linkpath, linkpath);
    return item;
  }
}

// smbitem_readlink
// file smbitem.c line 625
signed int smbitem_readlink(const char *path, char *buf, unsigned long int size)
{
  signed int pos;
  struct smbitem *dir;
  struct smbitem *tmp_dir;
  const char *next;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(path == ((const char *)NULL))
    return -1;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: path=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_readlink", path);
    }

    for( ; (signed int)*path == 47; path = path + 1l)
      ;
    if((signed int)*path == 0)
      return -1;

    else
    {
      next=smbitem_get_path_end(path);
      dir=smbitem_getdir("");
      if(dir == ((struct smbitem *)NULL))
        return -1;

      else
      {
        pos=smbitem_find_in_group_wl(dir, path, (unsigned long int)(next - path), 0);
        if(pos >= 0)
        {
          if(!((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_GROUP))
          {
            if((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_LINK)
              goto __CPROVER_DUMP_L8;

            goto error;
          }

          for( ; (signed int)*next == 47; next = next + 1l)
            ;
          if((signed int)*next == 0)
            goto error;

          tmp_dir=smbitem_getdir(dir->_anon0._anon1.childs[(signed long int)pos]->name);
          if(tmp_dir == ((struct smbitem *)NULL))
            goto error;

          smbitem_release_dir(dir);
          dir = tmp_dir;
          path = next;
          next=smbitem_get_path_end(next);
          pos=smbitem_find_in_group_wl(dir, path, (unsigned long int)(next - path), 0);
          if(!(pos >= 0))
            goto error;

          if(!((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_LINK))
            goto error;


        __CPROVER_DUMP_L8:
          ;
          if(!((signed int)*next == 0))
            goto error;

          strncpy(buf, dir->_anon0._anon1.childs[(signed long int)pos]->_anon0._anon2.linkpath, size);
          buf[(signed long int)(size - (unsigned long int)1)] = (char)0;
          smbitem_release_dir(dir);
          return 0;
        }

        else
        {

        error:
          ;
          smbitem_release_dir(dir);
          return -1;
        }
      }
    }
  }
}

// smbitem_release_dir
// file smbitem.c line 513
void smbitem_release_dir(struct smbitem *item)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!((signed int)item->type == SMBITEM_GROUP))
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 5)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: ERROR: item is not a group\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_release_dir");
    }

    goto __CPROVER_DUMP_L3;
  }

  pthread_mutex_lock(&m_smbitem);
  smbitem_release_item(item);
  pthread_mutex_unlock(&m_smbitem);

__CPROVER_DUMP_L3:
  ;
}

// smbitem_release_item
// file smbitem.c line 73
static void smbitem_release_item(struct smbitem *item)
{
  item->ref_count = item->ref_count - 1;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(item->ref_count == 0)
  {
    switch((signed int)item->type)
    {
      case SMBITEM_HOST:
      {
        if(!(item->_anon0._anon0.parent_group == ((struct smbitem *)NULL)))
          smbitem_release_item(item->_anon0._anon0.parent_group);

        break;
      }
      case SMBITEM_GROUP:
      {
        if(!(item->_anon0._anon1.childs == ((struct smbitem **)NULL)))
        {
          signed int i = 0;
          for( ; !(i >= item->_anon0._anon1.child_cnt); i = i + 1)
            smbitem_release_item(item->_anon0._anon1.childs[(signed long int)i]);
          free((void *)item->_anon0._anon1.childs);
        }

        break;
      }
      case SMBITEM_LINK:
        break;
      default:
      {
        return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
        if(return_value_common_get_smbnetfs_debug_level_2 >= 0)
        {
          struct timeval __now;
          gettimeofday(&__now, (struct timezone *)(void *)0);
          char __tstamp[20l];
          struct tm __tm;
          localtime_r(&__now.tv_sec, &__tm);
          strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
          signed int return_value_getpid_1;
          return_value_getpid_1=getpid();
          common_debug_print("%.19s.%03d %d->%s: ERROR: item '%s' is damaged\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_release_item", item->name);
        }

        goto __CPROVER_DUMP_L11;
      }
    }
    smbitem_delete_item(item);
  }


__CPROVER_DUMP_L11:
  ;
}

// smbitem_what_is
// file smbitem.c line 540
enum smbitem_path_t smbitem_what_is(const char *path)
{
  signed int pos;
  struct smbitem *dir;
  struct smbitem *tmp_dir;
  const char *next;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(path == ((const char *)NULL))
    return (enum smbitem_path_t)SMBITEM_UNKNOWN;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link1();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: path=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"smbitem_what_is", path);
    }

    for( ; (signed int)*path == 47; path = path + 1l)
      ;
    if((signed int)*path == 0)
      return (enum smbitem_path_t)SMBITEM_SMBNETFS_DIR;

    else
    {
      next=smbitem_get_path_end(path);
      dir=smbitem_getdir("");
      if(dir == ((struct smbitem *)NULL))
        return (enum smbitem_path_t)SMBITEM_UNKNOWN;

      else
      {
        pos=smbitem_find_in_group_wl(dir, path, (unsigned long int)(next - path), 0);
        if(pos >= 0)
          switch((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type)
          {
            case SMBITEM_HOST:
              goto smbitem_host;
            case SMBITEM_GROUP:
            {
              for( ; (signed int)*next == 47; next = next + 1l)
                ;
              if((signed int)*next == 0)
                goto smbitem_smbnetfs_dir;

              tmp_dir=smbitem_getdir(dir->_anon0._anon1.childs[(signed long int)pos]->name);
              if(tmp_dir == ((struct smbitem *)NULL))
                goto error;

              smbitem_release_dir(dir);
              dir = tmp_dir;
              path = next;
              next=smbitem_get_path_end(next);
              pos=smbitem_find_in_group_wl(dir, path, (unsigned long int)(next - path), 0);
              if(!(pos >= 0))
                goto error;

              if(!((signed int)dir->_anon0._anon1.childs[(signed long int)pos]->type == SMBITEM_LINK))
                goto error;

            }
            case SMBITEM_LINK:
              goto smbitem_smbnetfs_link;
            default:
              ;
          }

        else
        {

        smbitem_host:
          ;
          smbitem_release_dir(dir);
          for( ; (signed int)*next == 47; next = next + 1l)
            ;
          if((signed int)*next == 0)
            return (enum smbitem_path_t)SMBITEM_SMB_NAME;

          next=smbitem_get_path_end(next);
          for( ; (signed int)*next == 47; next = next + 1l)
            ;
          if((signed int)*next == 0)
            return (enum smbitem_path_t)SMBITEM_SMB_SHARE;

          return (enum smbitem_path_t)SMBITEM_SMB_SHARE_ITEM;

        smbitem_smbnetfs_dir:
          ;
          if((signed int)*next == 0)
          {
            smbitem_release_dir(dir);
            return (enum smbitem_path_t)SMBITEM_SMBNETFS_DIR;

          smbitem_smbnetfs_link:
            ;
            if((signed int)*next == 0)
            {
              smbitem_release_dir(dir);
              return (enum smbitem_path_t)SMBITEM_SMBNETFS_LINK;
            }

          }

        }

      error:
        ;
        smbitem_release_dir(dir);
        return (enum smbitem_path_t)SMBITEM_UNKNOWN;
      }
    }
  }
}

// smbnetfs_opt_proc
// file main.c line 149
static signed int smbnetfs_opt_proc(void *data, const char *arg, signed int key, struct fuse_args *outargs)
{
  const char *value;
  char *name;
  signed int result;
  (void)data;
  (void)key;
  signed int return_value_strcmp_2;
  return_value_strcmp_2=strcmp(arg, "--version");
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(return_value_strcmp_2 == 0)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_strcmp_3=strcmp(arg, "-V");
    tmp_if_expr_4 = return_value_strcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
  {
    fprintf(stderr, "SMBNetFS version 0.6.0\n");
    const char *return_value_smbc_version_1;
    return_value_smbc_version_1=smbc_version();
    fprintf(stderr, "libsmbclient version %s\n", return_value_smbc_version_1);
    fuse_opt_add_arg(outargs, "--version");
    fuse_main_real(outargs->argc, outargs->argv, &smb_oper, sizeof(struct fuse_operations) /*360ul*/ , (void *)0);
    exit(0);
  }

  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(arg, "--help");
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  if(return_value_strcmp_5 == 0)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_strcmp_6=strcmp(arg, "-h");
    tmp_if_expr_7 = return_value_strcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_7)
  {
    print_help(outargs);
    exit(1);
  }

  value=strchr(arg, 61);
  const char *tmp_post_8;
  if(value == ((const char *)NULL))
    return 1;

  else
  {
    tmp_post_8 = value;
    value = value + 1l;
    if(tmp_post_8 == arg)
      return 1;

    else
    {
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(value);
      if(return_value_strlen_9 == 0ul)
        return 1;

      else
      {
        name=strndup(arg, (unsigned long int)((value - arg) - (signed long int)1));
        if(name == ((char *)NULL))
          return 1;

        else
        {
          result=reconfigure_analyse_cmdline_option(name, (char *)value);
          free((void *)name);
          return result != 0 ? 0 : 1;
        }
      }
    }
  }
}

// stat_workaround_add_default_entries
// file stat_workaround.c line 181
void stat_workaround_add_default_entries(void)
{
  struct stat_workaround_predefined *elem;
  pthread_mutex_lock(&m_stat_workaround);
  if(!(stat_workaround_default_entries == 0))
  {
    elem = stat_workaround_predefined_list;
    for( ; !(elem->name == ((char *)NULL)); elem = elem + 1l)
      stat_workaround_add_name_internal(elem->name, elem->case_sensitive, elem->depth);
  }

  pthread_mutex_unlock(&m_stat_workaround);
}

// stat_workaround_add_exception
// file stat_workaround.c line 172
signed int stat_workaround_add_exception(const char *path)
{
  signed int result;
  pthread_mutex_lock(&m_stat_workaround);
  result=stat_workaround_add_exception_internal(path);
  pthread_mutex_unlock(&m_stat_workaround);
  return result;
}

// stat_workaround_add_exception_internal
// file stat_workaround.c line 141
static signed int stat_workaround_add_exception_internal(const char *path)
{
  unsigned long int pos;
  signed int depth;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char stat_workaround_add_exception_internal__1__1____tstamp[20l];
    struct tm stat_workaround_add_exception_internal__1__1____tm;
    localtime_r(&__now.tv_sec, &stat_workaround_add_exception_internal__1__1____tm);
    strftime(stat_workaround_add_exception_internal__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &stat_workaround_add_exception_internal__1__1____tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s\n", (const void *)stat_workaround_add_exception_internal__1__1____tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_add_exception_internal", path);
  }

  pos = (unsigned long int)0;
  depth = 0;
  while(!(path[(signed long int)pos] == 0))
  {
    for( ; (signed int)path[(signed long int)pos] == 47; pos = pos + 1ul)
      ;
    if((signed int)path[(signed long int)pos] == 0)
      break;

    for( ; !((signed int)path[(signed long int)pos] == 47); pos = pos + 1ul)
      if((signed int)path[(signed long int)pos] == 0)
        break;

    depth = depth + 1;
    signed int return_value_stat_workaround_add_exception_internal_low_3;
    return_value_stat_workaround_add_exception_internal_low_3=stat_workaround_add_exception_internal_low(path, pos, depth);
    if(return_value_stat_workaround_add_exception_internal_low_3 == 0)
      return 0;

  }
  signed int i = 0;
  struct __LIST *elem;
  struct stat_workaround_exception *exception;
  elem=first_list_elem_link5(&stat_workaround_exception_list);
  signed int return_value_is_valid_list_elem_4;
  signed int return_value_common_get_smbnetfs_debug_level_6;
  do
  {
    return_value_is_valid_list_elem_4=is_valid_list_elem_link5(&stat_workaround_exception_list, elem);
    if(return_value_is_valid_list_elem_4 == 0)
      break;

    exception = (struct stat_workaround_exception *)((char *)elem - (signed long int)0ul);
    return_value_common_get_smbnetfs_debug_level_6=common_get_smbnetfs_debug_level_link8();
    if(return_value_common_get_smbnetfs_debug_level_6 >= 6)
    {
      struct timeval stat_workaround_add_exception_internal__1__3__1____now;
      gettimeofday(&stat_workaround_add_exception_internal__1__3__1____now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&stat_workaround_add_exception_internal__1__3__1____now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_5;
      return_value_getpid_5=getpid();
      common_debug_print("%.19s.%03d %d->%s: %d: path=%s, len=%d, depth=%d\n", (const void *)__tstamp, (signed int)(stat_workaround_add_exception_internal__1__3__1____now.tv_usec / (signed long int)1000), return_value_getpid_5, (const void *)"stat_workaround_add_exception_internal", i, (const void *)exception->path, exception->len, exception->depth);
    }

    i = i + 1;
    elem = elem->next;
  }
  while((_Bool)1);
  return 1;
}

// stat_workaround_add_exception_internal_low
// file stat_workaround.c line 112
static signed int stat_workaround_add_exception_internal_low(const char *path, unsigned long int len, signed int depth)
{
  struct __LIST *elem;
  struct stat_workaround_exception *exception;
  signed int result = 1;
  _Bool tmp_if_expr_1;
  do
  {
    if(len >= 1ul)
      tmp_if_expr_1 = (signed int)path[(signed long int)(len - (unsigned long int)1)] == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    len = len - 1ul;
  }
  while((_Bool)1);
  elem=first_list_elem_link5(&stat_workaround_exception_list);
  signed int return_value_is_valid_list_elem_2;
  do
  {
    return_value_is_valid_list_elem_2=is_valid_list_elem_link5(&stat_workaround_exception_list, elem);
    if(return_value_is_valid_list_elem_2 == 0)
      break;

    exception = (struct stat_workaround_exception *)((char *)elem - (signed long int)0ul);
    result=strncmp(exception->path, path, len);
    if(!(result >= 0))
      break;

    if(result == 0)
    {
      if((signed int)exception->path[(signed long int)len] == 0)
        goto refresh_item;

    }

    elem = elem->next;
  }
  while((_Bool)1);
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct stat_workaround_exception) /*40ul*/  + len);
  exception = (struct stat_workaround_exception *)return_value_malloc_3;
  if(exception == ((struct stat_workaround_exception *)NULL))
    return 0;

  else
  {
    memset((void *)exception, 0, sizeof(struct stat_workaround_exception) /*40ul*/  + len);
    strncpy(exception->path, path, len);
    exception->len = (signed int)len;
    exception->depth = depth;
    insert_to_list_before(&stat_workaround_exception_list, elem, &exception->entries);

  refresh_item:
    ;
    exception->touch_time=time((signed long int *)(void *)0);
    return 1;
  }
}

// stat_workaround_add_name
// file stat_workaround.c line 100
signed int stat_workaround_add_name(const char *name, signed int case_sensitive, signed int depth)
{
  signed int result;
  pthread_mutex_lock(&m_stat_workaround);
  result=stat_workaround_add_name_internal(name, case_sensitive, depth);
  pthread_mutex_unlock(&m_stat_workaround);
  return result;
}

// stat_workaround_add_name_internal
// file stat_workaround.c line 69
static signed int stat_workaround_add_name_internal(const char *name, signed int case_sensitive, signed int depth)
{
  struct __LIST *elem;
  struct stat_workaround *workaround;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: name=%s, case_sensitive=%d, depth=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_add_name_internal", name, case_sensitive, depth);
  }

  if(!(depth >= -1))
    depth = stat_workaround_default_depth;

  elem=first_list_elem_link5(&stat_workaround_list);
  signed int return_value_is_valid_list_elem_3;
  do
  {
    return_value_is_valid_list_elem_3=is_valid_list_elem_link5(&stat_workaround_list, elem);
    if(return_value_is_valid_list_elem_3 == 0)
      break;

    workaround = (struct stat_workaround *)((char *)elem - (signed long int)0ul);
    signed int return_value_strcmp_4;
    return_value_strcmp_4=strcmp(workaround->name, name);
    if(return_value_strcmp_4 == 0)
      goto refresh_item;

    elem = elem->next;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(name);
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(struct stat_workaround) /*40ul*/  + return_value_strlen_5);
  workaround = (struct stat_workaround *)return_value_malloc_6;
  if(workaround == ((struct stat_workaround *)NULL))
    return 0;

  else
  {
    unsigned long int return_value_strlen_7;
    return_value_strlen_7=strlen(name);
    memset((void *)workaround, 0, sizeof(struct stat_workaround) /*40ul*/  + return_value_strlen_7);
    strcpy(workaround->name, name);
    unsigned long int return_value_strlen_8;
    return_value_strlen_8=strlen(name);
    workaround->len = (signed int)return_value_strlen_8;
    add_to_list_back_link2(&stat_workaround_list, &workaround->entries);

  refresh_item:
    ;
    workaround->touch_time=time((signed long int *)(void *)0);
    workaround->depth = depth;
    workaround->case_sensitive = case_sensitive;
    return 1;
  }
}

// stat_workaround_check_path
// file stat_workaround.c line 229
static signed int stat_workaround_check_path(const char *path, signed int min_depth)
{
  struct __LIST *elem;
  struct stat_workaround *workaround;
  const char *path_start;
  const char *path_end;
  signed long int len;
  signed int i;
  signed int (*cmp_func)(const char *, const char *, unsigned long int);
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval stat_workaround_check_path__1__1____now;
    gettimeofday(&stat_workaround_check_path__1__1____now, (struct timezone *)(void *)0);
    char stat_workaround_check_path__1__1____tstamp[20l];
    struct tm stat_workaround_check_path__1__1____tm;
    localtime_r(&stat_workaround_check_path__1__1____now.tv_sec, &stat_workaround_check_path__1__1____tm);
    strftime(stat_workaround_check_path__1__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &stat_workaround_check_path__1__1____tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s, min_depth=%d\n", (const void *)stat_workaround_check_path__1__1____tstamp, (signed int)(stat_workaround_check_path__1__1____now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_check_path", path, min_depth);
  }

  elem=first_list_elem_link5(&stat_workaround_list);
  signed int return_value_is_valid_list_elem_3;
  signed int return_value_common_get_smbnetfs_debug_level_5;
  _Bool tmp_if_expr_7;
  signed int return_value_common_get_smbnetfs_debug_level_9;
  signed int return_value;
  do
  {
    return_value_is_valid_list_elem_3=is_valid_list_elem_link5(&stat_workaround_list, elem);
    if(return_value_is_valid_list_elem_3 == 0)
      break;

    workaround = (struct stat_workaround *)((char *)elem - (signed long int)0ul);
    return_value_common_get_smbnetfs_debug_level_5=common_get_smbnetfs_debug_level_link8();
    if(return_value_common_get_smbnetfs_debug_level_5 >= 7)
    {
      struct timeval stat_workaround_check_path__1__2__1____now;
      gettimeofday(&stat_workaround_check_path__1__2__1____now, (struct timezone *)(void *)0);
      char stat_workaround_check_path__1__2__1____tstamp[20l];
      struct tm stat_workaround_check_path__1__2__1____tm;
      localtime_r(&stat_workaround_check_path__1__2__1____now.tv_sec, &stat_workaround_check_path__1__2__1____tm);
      strftime(stat_workaround_check_path__1__2__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &stat_workaround_check_path__1__2__1____tm);
      signed int return_value_getpid_4;
      return_value_getpid_4=getpid();
      common_debug_print("%.19s.%03d %d->%s: workaround->name=%s\n", (const void *)stat_workaround_check_path__1__2__1____tstamp, (signed int)(stat_workaround_check_path__1__2__1____now.tv_usec / (signed long int)1000), return_value_getpid_4, (const void *)"stat_workaround_check_path", (const void *)workaround->name);
    }

    cmp_func = workaround->case_sensitive != 0 ? strncmp : strncasecmp;
    path_start = path;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(workaround->name);
    len = (signed long int)return_value_strlen_6;
    i = min_depth;
    do
    {
      if(!(i >= workaround->depth))
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = workaround->depth == -1 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_7)
        break;

      for( ; (signed int)*path_start == 47; path_start = path_start + 1l)
        ;
      if((signed int)*path_start == 0)
        break;

      return_value_common_get_smbnetfs_debug_level_9=common_get_smbnetfs_debug_level_link8();
      if(return_value_common_get_smbnetfs_debug_level_9 >= 7)
      {
        struct timeval __now;
        gettimeofday(&__now, (struct timezone *)(void *)0);
        char __tstamp[20l];
        struct tm __tm;
        localtime_r(&__now.tv_sec, &__tm);
        strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
        signed int return_value_getpid_8;
        return_value_getpid_8=getpid();
        common_debug_print("%.19s.%03d %d->%s: path_start=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_8, (const void *)"stat_workaround_check_path", path_start);
      }

      path_end = path_start;
      for( ; !((signed int)*path_end == 47); path_end = path_end + 1l)
        if((signed int)*path_end == 0)
          break;

      if(path_end - path_start == len)
      {
        return_value=cmp_func(path_start, workaround->name, (unsigned long int)len);
        if(return_value == 0)
          return 1;

      }

      path_start = path_end;
      i = i + 1;
    }
    while((_Bool)1);
    elem = elem->next;
  }
  while((_Bool)1);
  return 0;
}

// stat_workaround_delete_obsolete
// file stat_workaround.c line 193
void stat_workaround_delete_obsolete(signed long int threshold)
{
  struct __LIST *elem;
  struct stat_workaround *workaround;
  struct stat_workaround_exception *exception;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 6)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: threshold=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_delete_obsolete", (signed int)threshold);
  }

  pthread_mutex_lock(&m_stat_workaround);
  elem=first_list_elem_link5(&stat_workaround_exception_list);
  signed int return_value_is_valid_list_elem_3;
  do
  {
    return_value_is_valid_list_elem_3=is_valid_list_elem_link5(&stat_workaround_exception_list, elem);
    if(return_value_is_valid_list_elem_3 == 0)
      break;

    exception = (struct stat_workaround_exception *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(!(exception->touch_time >= threshold))
    {
      remove_from_list_link5(&stat_workaround_exception_list, &exception->entries);
      free((void *)exception);
    }

  }
  while((_Bool)1);
  elem=first_list_elem_link5(&stat_workaround_list);
  signed int return_value_is_valid_list_elem_4;
  do
  {
    return_value_is_valid_list_elem_4=is_valid_list_elem_link5(&stat_workaround_list, elem);
    if(return_value_is_valid_list_elem_4 == 0)
      break;

    workaround = (struct stat_workaround *)((char *)elem - (signed long int)0ul);
    elem = elem->next;
    if(!(workaround->touch_time >= threshold))
    {
      remove_from_list_link5(&stat_workaround_list, &workaround->entries);
      free((void *)workaround);
    }

  }
  while((_Bool)1);
  pthread_mutex_unlock(&m_stat_workaround);
}

// stat_workaround_enable_default_entries
// file stat_workaround.c line 52
signed int stat_workaround_enable_default_entries(signed int new_status)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: new_status=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_enable_default_entries", new_status != 0 ? "true" : "false");
  }

  pthread_mutex_lock(&m_stat_workaround);
  stat_workaround_default_entries = new_status;
  pthread_mutex_unlock(&m_stat_workaround);
  return 1;
}

// stat_workaround_is_name_ignored
// file stat_workaround.c line 267
signed int stat_workaround_is_name_ignored(const char *path)
{
  struct __LIST *elem;
  struct stat_workaround_exception *exception;
  signed long int len;
  signed long int min_len;
  signed int result;
  signed int ret;
  signed int return_value_common_get_smbnetfs_debug_level_2;
  return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
  {
    struct timeval __now;
    gettimeofday(&__now, (struct timezone *)(void *)0);
    char __tstamp[20l];
    struct tm __tm;
    localtime_r(&__now.tv_sec, &__tm);
    strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
    signed int return_value_getpid_1;
    return_value_getpid_1=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_is_name_ignored", path);
  }

  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(path);
  len = (signed long int)return_value_strlen_3;
  _Bool tmp_if_expr_4;
  do
  {
    if(len >= 2l)
      tmp_if_expr_4 = (signed int)path[len - (signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(!tmp_if_expr_4)
      break;

    len = len - 1l;
  }
  while((_Bool)1);
  pthread_mutex_lock(&m_stat_workaround);
  elem=first_list_elem_link5(&stat_workaround_exception_list);
  signed int return_value_is_valid_list_elem_5;
  signed long int tmp_if_expr_6;
  signed int return_value_common_get_smbnetfs_debug_level_8;
  _Bool tmp_if_expr_9;
  do
  {
    return_value_is_valid_list_elem_5=is_valid_list_elem_link5(&stat_workaround_exception_list, elem);
    if(return_value_is_valid_list_elem_5 == 0)
      break;

    exception = (struct stat_workaround_exception *)((char *)elem - (signed long int)0ul);
    if((signed long int)exception->len >= len)
      tmp_if_expr_6 = len;

    else
      tmp_if_expr_6 = (signed long int)exception->len;
    min_len = tmp_if_expr_6;
    ret=strncmp(exception->path, path, (unsigned long int)min_len);
    return_value_common_get_smbnetfs_debug_level_8=common_get_smbnetfs_debug_level_link8();
    if(return_value_common_get_smbnetfs_debug_level_8 >= 7)
    {
      struct timeval stat_workaround_is_name_ignored__1__3__1____now;
      gettimeofday(&stat_workaround_is_name_ignored__1__3__1____now, (struct timezone *)(void *)0);
      char stat_workaround_is_name_ignored__1__3__1____tstamp[20l];
      struct tm stat_workaround_is_name_ignored__1__3__1____tm;
      localtime_r(&stat_workaround_is_name_ignored__1__3__1____now.tv_sec, &stat_workaround_is_name_ignored__1__3__1____tm);
      strftime(stat_workaround_is_name_ignored__1__3__1____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &stat_workaround_is_name_ignored__1__3__1____tm);
      signed int return_value_getpid_7;
      return_value_getpid_7=getpid();
      common_debug_print("%.19s.%03d %d->%s: exception->path=%s, min_len=%zd, ret=%d\n", (const void *)stat_workaround_is_name_ignored__1__3__1____tstamp, (signed int)(stat_workaround_is_name_ignored__1__3__1____now.tv_usec / (signed long int)1000), return_value_getpid_7, (const void *)"stat_workaround_is_name_ignored", (const void *)exception->path, min_len, ret);
    }

    if(ret == 0)
    {
      if(min_len == len)
      {
        if((signed int)exception->path[len] == 47)
          tmp_if_expr_9 = (_Bool)1;

        else
          tmp_if_expr_9 = (signed int)exception->path[len] == 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_9)
        {
          result = 0;
          goto end;
        }

      }

      else
        if((signed int)path[(signed long int)exception->len] == 47)
        {
          result=stat_workaround_check_path(path + min_len, exception->depth);
          goto end;
        }

    }

    elem = elem->next;
  }
  while((_Bool)1);
  result=stat_workaround_check_path(path, 0);

end:
  ;
  pthread_mutex_unlock(&m_stat_workaround);
  signed int return_value_common_get_smbnetfs_debug_level_11;
  return_value_common_get_smbnetfs_debug_level_11=common_get_smbnetfs_debug_level_link8();
  if(return_value_common_get_smbnetfs_debug_level_11 >= 7)
  {
    struct timeval stat_workaround_is_name_ignored__1__4____now;
    gettimeofday(&stat_workaround_is_name_ignored__1__4____now, (struct timezone *)(void *)0);
    char stat_workaround_is_name_ignored__1__4____tstamp[20l];
    struct tm stat_workaround_is_name_ignored__1__4____tm;
    localtime_r(&stat_workaround_is_name_ignored__1__4____now.tv_sec, &stat_workaround_is_name_ignored__1__4____tm);
    strftime(stat_workaround_is_name_ignored__1__4____tstamp, (unsigned long int)20, "%Y-%m-%d %T", &stat_workaround_is_name_ignored__1__4____tm);
    signed int return_value_getpid_10;
    return_value_getpid_10=getpid();
    common_debug_print("%.19s.%03d %d->%s: path=%s, result=%d\n", (const void *)stat_workaround_is_name_ignored__1__4____tstamp, (signed int)(stat_workaround_is_name_ignored__1__4____now.tv_usec / (signed long int)1000), return_value_getpid_10, (const void *)"stat_workaround_is_name_ignored", path, result);
  }

  return result;
}

// stat_workaround_set_default_depth
// file stat_workaround.c line 60
signed int stat_workaround_set_default_depth(signed int depth)
{
  signed int return_value_common_get_smbnetfs_debug_level_2;
  if(!(depth >= -1))
    return 0;

  else
  {
    return_value_common_get_smbnetfs_debug_level_2=common_get_smbnetfs_debug_level_link8();
    if(return_value_common_get_smbnetfs_debug_level_2 >= 7)
    {
      struct timeval __now;
      gettimeofday(&__now, (struct timezone *)(void *)0);
      char __tstamp[20l];
      struct tm __tm;
      localtime_r(&__now.tv_sec, &__tm);
      strftime(__tstamp, (unsigned long int)20, "%Y-%m-%d %T", &__tm);
      signed int return_value_getpid_1;
      return_value_getpid_1=getpid();
      common_debug_print("%.19s.%03d %d->%s: depth=%d\n", (const void *)__tstamp, (signed int)(__now.tv_usec / (signed long int)1000), return_value_getpid_1, (const void *)"stat_workaround_set_default_depth", depth);
    }

    pthread_mutex_lock(&m_stat_workaround);
    stat_workaround_default_depth = depth;
    pthread_mutex_unlock(&m_stat_workaround);
    return 1;
  }
}

