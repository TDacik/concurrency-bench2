// #anon_enum_DB_BACKUP_READ_COUNT=1_DB_BACKUP_READ_SLEEP=2_DB_BACKUP_SIZE=3_DB_BACKUP_WRITE_DIRECT=4
// file /usr/include/db.h line 2269
enum anonymous_44 { DB_BACKUP_READ_COUNT=1, DB_BACKUP_READ_SLEEP=2, DB_BACKUP_SIZE=3, DB_BACKUP_WRITE_DIRECT=4 };

// #anon_enum_DB_BTREE=1_DB_HASH=2_DB_HEAP=6_DB_RECNO=3_DB_QUEUE=4_DB_UNKNOWN=5
// file /usr/include/db.h line 1292
enum anonymous_12 { DB_BTREE=1, DB_HASH=2, DB_HEAP=6, DB_RECNO=3, DB_QUEUE=4, DB_UNKNOWN=5 };

// #anon_enum_DB_LOCK_DUMP=0_DB_LOCK_GET=1_DB_LOCK_GET_TIMEOUT=2_DB_LOCK_INHERIT=3_DB_LOCK_PUT=4_DB_LOCK_PUT_ALL=5_DB_LOCK_PUT_OBJ=6_DB_LOCK_PUT_READ=7_DB_LOCK_TIMEOUT=8_DB_LOCK_TRADE=9_DB_LOCK_UPGRADE_WRITE=10
// file /usr/include/db.h line 325
enum anonymous_6 { DB_LOCK_DUMP=0, DB_LOCK_GET=1, DB_LOCK_GET_TIMEOUT=2, DB_LOCK_INHERIT=3, DB_LOCK_PUT=4, DB_LOCK_PUT_ALL=5, DB_LOCK_PUT_OBJ=6, DB_LOCK_PUT_READ=7, DB_LOCK_TIMEOUT=8, DB_LOCK_TRADE=9, DB_LOCK_UPGRADE_WRITE=10 };

// #anon_enum_DB_LOCK_NG=0_DB_LOCK_READ=1_DB_LOCK_WRITE=2_DB_LOCK_WAIT=3_DB_LOCK_IWRITE=4_DB_LOCK_IREAD=5_DB_LOCK_IWR=6_DB_LOCK_READ_UNCOMMITTED=7_DB_LOCK_WWRITE=8
// file /usr/include/db.h line 310
enum anonymous_7 { DB_LOCK_NG=0, DB_LOCK_READ=1, DB_LOCK_WRITE=2, DB_LOCK_WAIT=3, DB_LOCK_IWRITE=4, DB_LOCK_IREAD=5, DB_LOCK_IWR=6, DB_LOCK_READ_UNCOMMITTED=7, DB_LOCK_WWRITE=8 };

// #anon_enum_DB_MEM_LOCK=1_DB_MEM_LOCKOBJECT=2_DB_MEM_LOCKER=3_DB_MEM_LOGID=4_DB_MEM_TRANSACTION=5_DB_MEM_THREAD=6
// file /usr/include/db.h line 2257
enum anonymous_46 { DB_MEM_LOCK=1, DB_MEM_LOCKOBJECT=2, DB_MEM_LOCKER=3, DB_MEM_LOGID=4, DB_MEM_TRANSACTION=5, DB_MEM_THREAD=6 };

// #anon_enum_DB_PRIORITY_UNCHANGED=0_DB_PRIORITY_VERY_LOW=1_DB_PRIORITY_LOW=2_DB_PRIORITY_DEFAULT=3_DB_PRIORITY_HIGH=4_DB_PRIORITY_VERY_HIGH=5
// file /usr/include/db.h line 618
enum anonymous_18 { DB_PRIORITY_UNCHANGED=0, DB_PRIORITY_VERY_LOW=1, DB_PRIORITY_LOW=2, DB_PRIORITY_DEFAULT=3, DB_PRIORITY_HIGH=4, DB_PRIORITY_VERY_HIGH=5 };

// #anon_enum_DB_TXN_ABORT=0_DB_TXN_APPLY=1_DB_TXN_BACKWARD_ROLL=3_DB_TXN_FORWARD_ROLL=4_DB_TXN_OPENFILES=5_DB_TXN_POPENFILES=6_DB_TXN_PRINT=7_DB_TXN_LOG_VERIFY=8
// file /usr/include/db.h line 794
enum anonymous_43 { DB_TXN_ABORT=0, DB_TXN_APPLY=1, DB_TXN_BACKWARD_ROLL=3, DB_TXN_FORWARD_ROLL=4, DB_TXN_OPENFILES=5, DB_TXN_POPENFILES=6, DB_TXN_PRINT=7, DB_TXN_LOG_VERIFY=8 };

// #anon_enum_LOGREC_Done=0_LOGREC_ARG=1_LOGREC_HDR=2_LOGREC_DATA=3_LOGREC_DB=4_LOGREC_DBOP=5_LOGREC_DBT=6_LOGREC_LOCKS=7_LOGREC_OP=8_LOGREC_PGDBT=9_LOGREC_PGDDBT=10_LOGREC_PGLIST=11_LOGREC_POINTER=12_LOGREC_TIME=13
// file /usr/include/db.h line 584
enum anonymous_9 { LOGREC_Done=0, LOGREC_ARG=1, LOGREC_HDR=2, LOGREC_DATA=3, LOGREC_DB=4, LOGREC_DBOP=5, LOGREC_DBT=6, LOGREC_LOCKS=7, LOGREC_OP=8, LOGREC_PGDBT=9, LOGREC_PGDDBT=10, LOGREC_PGLIST=11, LOGREC_POINTER=12, LOGREC_TIME=13 };

// tag-#anon#ST[*{SYM#tag-__db#}_SYM#tag-__db#_'le_next'||*{*{SYM#tag-__db#}_SYM#tag-__db#_}_*{SYM#tag-__db#}_SYM#tag-__db#__'le_prev'|]
// file /usr/include/db.h line 1548
struct anonymous_40;

// tag-#anon#ST[*{SYM#tag-__db#}_SYM#tag-__db#_'lh_first'|]
// file /usr/include/db.h line 1532
struct anonymous_39;

// tag-#anon#ST[*{SYM#tag-__db#}_SYM#tag-__db#_'tqe_next'||*{*{SYM#tag-__db#}_SYM#tag-__db#_}_*{SYM#tag-__db#}_SYM#tag-__db#__'tqe_prev'|]
// file /usr/include/db.h line 1496
struct anonymous_38;

// tag-#anon#ST[*{SYM#tag-__db_foreign_info#}_SYM#tag-__db_foreign_info#_'lh_first'|]
// file /usr/include/db.h line 1575
struct anonymous_41;

// tag-#anon#ST[*{SYM#tag-__db_mpoolfile#}_SYM#tag-__db_mpoolfile#_'tqe_next'||*{*{SYM#tag-__db_mpoolfile#}_SYM#tag-__db_mpoolfile#_}_*{SYM#tag-__db_mpoolfile#}_SYM#tag-__db_mpoolfile#__'tqe_prev'|]
// file /usr/include/db.h line 644
struct anonymous_15;

// tag-#anon#ST[*{SYM#tag-__db_txn#}_SYM#tag-__db_txn#_'tqe_next'||*{*{SYM#tag-__db_txn#}_SYM#tag-__db_txn#_}_*{SYM#tag-__db_txn#}_SYM#tag-__db_txn#__'tqe_prev'|]
// file /usr/include/db.h line 832
struct anonymous_25;

// tag-#anon#ST[*{SYM#tag-__dbc#}_SYM#tag-__dbc#_'tqe_next'||*{*{SYM#tag-__dbc#}_SYM#tag-__dbc#_}_*{SYM#tag-__dbc#}_SYM#tag-__dbc#__'tqe_prev'|]
// file /usr/include/db.h line 2027
struct anonymous_49;

// tag-#anon#ST[*{SYM#tag-__txn_event#}_SYM#tag-__txn_event#_'tqh_first'||*{*{SYM#tag-__txn_event#}_SYM#tag-__txn_event#_}_*{SYM#tag-__txn_event#}_SYM#tag-__txn_event#__'tqh_last'|]
// file /usr/include/db.h line 864
struct anonymous_29;

// tag-#anon#ST[*{SYM#tag-__txn_logrec#}_SYM#tag-__txn_logrec#_'stqh_first'||*{*{SYM#tag-__txn_logrec#}_SYM#tag-__txn_logrec#_}_*{SYM#tag-__txn_logrec#}_SYM#tag-__txn_logrec#__'stqh_last'|]
// file /usr/include/db.h line 874
struct anonymous_30;

// tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]
// file /usr/include/event2/event_struct.h line 88
struct anonymous_16;

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_5;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_3;

// tag-#anon#ST[ARR16{S64}_S64_'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_42;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_45;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_14;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_51;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_1;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_50;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_52;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_4;

// tag-#anon#ST[S64'stqe_next'||S64'stqe_prev'|]
// file /usr/include/db.h line 844
struct anonymous_27;

// tag-#anon#ST[SYM#tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]#'ev_io_next'||SYM#tag-timeval#'ev_timeout'|]
// file /usr/include/event2/event_struct.h line 101
struct anonymous_17;

// tag-#anon#ST[SYM#tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]#'ev_signal_next'||S16'ev_ncalls'||U48'_pad0'||*{S16}_S16_'ev_pncalls'|]
// file /usr/include/event2/event_struct.h line 107
struct anonymous_37;

// tag-#anon#ST[U64'thread_id'||*{SYM#tag-event_base#}_SYM#tag-event_base#_'base'||SYM#tag-event#'notify_event'||S32'notify_receive_fd'||S32'notify_send_fd'||SYM#tag-conn_queue#'new_conn_queue'|]
// file thread.c line 80
struct anonymous_48;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_10;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_8;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_13;

// tag-#anon#UN[S64'ru_idrss'||S64'__ru_idrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 208
union anonymous_21;

// tag-#anon#UN[S64'ru_inblock'||S64'__ru_inblock_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 240
union anonymous_28;

// tag-#anon#UN[S64'ru_isrss'||S64'__ru_isrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 214
union anonymous_22;

// tag-#anon#UN[S64'ru_ixrss'||S64'__ru_ixrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 202
union anonymous_20;

// tag-#anon#UN[S64'ru_majflt'||S64'__ru_majflt_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 227
union anonymous_24;

// tag-#anon#UN[S64'ru_maxrss'||S64'__ru_maxrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 194
union anonymous_19;

// tag-#anon#UN[S64'ru_minflt'||S64'__ru_minflt_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 221
union anonymous_23;

// tag-#anon#UN[S64'ru_msgrcv'||S64'__ru_msgrcv_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 258
union anonymous_33;

// tag-#anon#UN[S64'ru_msgsnd'||S64'__ru_msgsnd_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 252
union anonymous_32;

// tag-#anon#UN[S64'ru_nivcsw'||S64'__ru_nivcsw_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 279
union anonymous_36;

// tag-#anon#UN[S64'ru_nsignals'||S64'__ru_nsignals_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 264
union anonymous_34;

// tag-#anon#UN[S64'ru_nswap'||S64'__ru_nswap_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 233
union anonymous_26;

// tag-#anon#UN[S64'ru_nvcsw'||S64'__ru_nvcsw_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 272
union anonymous_35;

// tag-#anon#UN[S64'ru_oublock'||S64'__ru_oublock_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 246
union anonymous_31;

// tag-#anon#UN[SYM#tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]#'ev_next_with_common_timeout'||S32'min_heap_idx'|]
// file /usr/include/event2/event_struct.h line 91
union anonymous_0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_11;

// tag-#anon#UN[SYM#tag-#anon#ST[SYM#tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]#'ev_io_next'||SYM#tag-timeval#'ev_timeout'|]#'ev_io'||SYM#tag-#anon#ST[SYM#tag-#anon#ST[*{SYM#tag-event#}_SYM#tag-event#_'tqe_next'||*{*{SYM#tag-event#}_SYM#tag-event#_}_*{SYM#tag-event#}_SYM#tag-event#__'tqe_prev'|]#'ev_signal_next'||S16'ev_ncalls'||U48'_pad0'||*{S16}_S16_'ev_pncalls'|]#'ev_signal'|]
// file /usr/include/event2/event_struct.h line 99
union anonymous_2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_47;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__channel
// file /usr/include/db.h line 151
struct __channel;

// tag-__cq_aq
// file /usr/include/db.h line 1514
struct __cq_aq;

// tag-__cq_fq
// file /usr/include/db.h line 1510
struct __cq_fq;

// tag-__cq_jq
// file /usr/include/db.h line 1518
struct __cq_jq;

// tag-__db
// file /usr/include/db.h line 152
struct __db;

// tag-__db_channel
// file /usr/include/db.h line 154
struct __db_channel;

// tag-__db_compact
// file /usr/include/db.h line 156
struct __db_compact;

// tag-__db_dbt
// file /usr/include/db.h line 157
struct __db_dbt;

// tag-__db_env
// file /usr/include/db.h line 159
struct __db_env;

// tag-__db_foreign_info
// file /usr/include/db.h line 1576
struct __db_foreign_info;

// tag-__db_ilock
// file /usr/include/db.h line 163
struct __db_ilock;

// tag-__db_lock_stat
// file /usr/include/db.h line 166
struct __db_lock_stat;

// tag-__db_lock_u
// file /usr/include/db.h line 167
struct __db_lock_u;

// tag-__db_locker
// file /usr/include/db.h line 168
struct __db_locker;

// tag-__db_lockreq
// file /usr/include/db.h line 169
struct __db_lockreq;

// tag-__db_log_cursor
// file /usr/include/db.h line 172
struct __db_log_cursor;

// tag-__db_log_stat
// file /usr/include/db.h line 173
struct __db_log_stat;

// tag-__db_logvrfy_config
// file /usr/include/db.h line 207
struct __db_logvrfy_config;

// tag-__db_lsn
// file /usr/include/db.h line 174
struct __db_lsn;

// tag-__db_mpool_fstat
// file /usr/include/db.h line 176
struct __db_mpool_fstat;

// tag-__db_mpool_stat
// file /usr/include/db.h line 177
struct __db_mpool_stat;

// tag-__db_mpoolfile
// file /usr/include/db.h line 178
struct __db_mpoolfile;

// tag-__db_mutex_stat
// file /usr/include/db.h line 179
struct __db_mutex_stat;

// tag-__db_preplist
// file /usr/include/db.h line 182
struct __db_preplist;

// tag-__db_rep_stat
// file /usr/include/db.h line 185
struct __db_rep_stat;

// tag-__db_repmgr_site
// file /usr/include/db.h line 188
struct __db_repmgr_site;

// tag-__db_repmgr_stat
// file /usr/include/db.h line 189
struct __db_repmgr_stat;

// tag-__db_site
// file /usr/include/db.h line 192
struct __db_site;

// tag-__db_thread_info
// file /usr/include/db.h line 194
struct __db_thread_info;

// tag-__db_txn
// file /usr/include/db.h line 195
struct __db_txn;

// tag-__db_txn_active
// file /usr/include/db.h line 196
struct __db_txn_active;

// tag-__db_txn_stat
// file /usr/include/db.h line 197
struct __db_txn_stat;

// tag-__db_txn_token
// file /usr/include/db.h line 198
struct __db_txn_token;

// tag-__db_txnmgr
// file /usr/include/db.h line 199
struct __db_txnmgr;

// tag-__dbc
// file /usr/include/db.h line 200
struct __dbc;

// tag-__dbc_internal
// file /usr/include/db.h line 201
struct __dbc_internal;

// tag-__env
// file /usr/include/db.h line 202
struct __env;

// tag-__femfs
// file /usr/include/db.h line 906
struct __femfs;

// tag-__fh_t
// file /usr/include/db.h line 203
struct __fh_t;

// tag-__fname
// file /usr/include/db.h line 204
struct __fname;

// tag-__key_range
// file /usr/include/db.h line 205
struct __key_range;

// tag-__kids
// file /usr/include/db.h line 854
struct __kids;

// tag-__log_rec_spec
// file /usr/include/db.h line 601
struct __log_rec_spec;

// tag-__mpoolfile
// file /usr/include/db.h line 206
struct __mpoolfile;

// tag-__my_cursors
// file /usr/include/db.h line 894
struct __my_cursors;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__txn_event
// file /usr/include/db.h line 865
struct __txn_event;

// tag-__txn_logrec
// file /usr/include/db.h line 875
struct __txn_logrec;

// tag-_stritem
// file memcachedb.h line 179
struct _stritem;

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-bdb_settings
// file memcachedb.h line 122
struct bdb_settings;

// tag-bdb_version
// file memcachedb.h line 114
struct bdb_version;

// tag-conn
// file memcachedb.h line 212
struct conn;

// tag-conn_queue
// file thread.c line 52
struct conn_queue;

// tag-conn_queue_item
// file thread.c line 41
struct conn_queue_item;

// tag-event
// file /usr/include/event2/event_struct.h line 87
struct event;

// tag-event_base
// file /usr/include/event2/event_struct.h line 86
struct event_base;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-linger
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 379
struct linger;

// tag-msghdr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 224
struct msghdr;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-rusage
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 187
struct rusage;

// tag-settings
// file memcachedb.h line 99
struct settings;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stats
// file memcachedb.h line 84
struct stats;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-token_s
// file memcachedb.c line 735
struct token_s;

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
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// accept_new_conns
// file memcachedb.c line 1546
static void accept_new_conns(const _Bool do_accept);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// add_iov
// file memcachedb.c line 521
static signed int add_iov(struct conn *c, const void *buf, signed int len);
// add_msghdr
// file memcachedb.c line 162
static signed int add_msghdr(struct conn *c);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bdb_chkpoint
// file memcachedb.h line 288
void bdb_chkpoint(void);
// bdb_chkpoint_thread
// file bdb.c line 340
static void * bdb_chkpoint_thread(void *arg);
// bdb_db_close
// file memcachedb.h line 286
void bdb_db_close(void);
// bdb_db_open
// file memcachedb.h line 282
void bdb_db_open(void);
// bdb_dl_detect_thread
// file bdb.c line 377
static void * bdb_dl_detect_thread(void *arg);
// bdb_env_close
// file memcachedb.h line 287
void bdb_env_close(void);
// bdb_env_init
// file memcachedb.h line 281
void bdb_env_init(void);
// bdb_err_callback
// file bdb.c line 441
static void bdb_err_callback(const struct __db_env *dbenv, const char *errpfx, const char *msg);
// bdb_event_callback
// file bdb.c line 396
static void bdb_event_callback(struct __db_env *env, unsigned int which, void *info);
// bdb_memp_trickle_thread
// file bdb.c line 358
static void * bdb_memp_trickle_thread(void *arg);
// bdb_msg_callback
// file bdb.c line 448
static void bdb_msg_callback(const struct __db_env *dbenv, const char *msg);
// bdb_settings_init
// file memcachedb.h line 280
void bdb_settings_init(void);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// build_udp_headers
// file memcachedb.c line 574
static signed int build_udp_headers(struct conn *c);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// complete_nread
// file memcachedb.c line 641
static void complete_nread(struct conn *c);
// conn_cleanup
// file memcachedb.c line 343
static void conn_cleanup(struct conn *c);
// conn_close
// file memcachedb.c line 384
static void conn_close(struct conn *c);
// conn_free
// file memcachedb.c line 366
static void conn_free(struct conn *c);
// conn_init
// file memcachedb.c line 210
static void conn_init(void);
// conn_new
// file memcachedb.c line 256
struct conn * conn_new(const signed int sfd, const signed int init_state, const signed int event_flags, const signed int read_buffer_size, const _Bool is_udp, struct event_base *base);
// conn_set_state
// file memcachedb.c line 473
static void conn_set_state(struct conn *c, signed int state);
// conn_shrink
// file memcachedb.c line 418
static void conn_shrink(struct conn *c);
// cq_init
// file thread.c line 104
static void cq_init(struct conn_queue *cq);
// cq_peek
// file thread.c line 134
static struct conn_queue_item * cq_peek(struct conn_queue *cq);
// cq_push
// file thread.c line 152
static void cq_push(struct conn_queue *cq, struct conn_queue_item *item);
// cqi_free
// file thread.c line 206
static void cqi_free(struct conn_queue_item *item);
// cqi_new
// file thread.c line 168
static struct conn_queue_item * cqi_new();
// create_worker
// file thread.c line 217
static void create_worker(void * (*func)(void *), void *arg);
// create_worker::func_object
//
void * func_object(void *);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// db_create
// file /usr/include/db.h line 3049
signed int db_create(struct __db **, struct __db_env *, unsigned int);
// db_env_create
// file /usr/include/db.h line 3073
signed int db_env_create(struct __db_env **, unsigned int);
// db_strerror
// file /usr/include/db.h line 3050
char * db_strerror(signed int);
// db_version
// file /usr/include/db.h line 3074
char * db_version(signed int *, signed int *, signed int *);
// dispatch_conn_new
// file memcachedb.h line 334
void dispatch_conn_new(signed int sfd, signed int init_state, signed int event_flags, signed int read_buffer_size, signed int is_udp);
// do_add_delta
// file memcachedb.c line 1109
char * do_add_delta(const _Bool incr, const signed long int delta, char *buf, char *key, unsigned long int nkey);
// do_conn_add_to_freelist
// file memcachedb.c line 239
_Bool do_conn_add_to_freelist(struct conn *c);
// do_conn_from_freelist
// file memcachedb.c line 223
struct conn * do_conn_from_freelist();
// do_item_add_to_freelist
// file item.c line 76
signed int do_item_add_to_freelist(struct _stritem *it);
// do_item_from_freelist
// file item.c line 55
struct _stritem * do_item_from_freelist(void);
// do_store_item
// file memcachedb.c line 676
signed int do_store_item(struct _stritem *it, signed int comm);
// drive_machine
// file memcachedb.c line 1636
static void drive_machine(struct conn *c);
// ensure_iov_space
// file memcachedb.c line 491
static signed int ensure_iov_space(struct conn *c);
// event_add
// file /usr/include/event2/event.h line 937
signed int event_add(struct event *, struct timeval *);
// event_base_loop
// file /usr/include/event2/event.h line 660
signed int event_base_loop(struct event_base *, signed int);
// event_base_set
// file /usr/include/event2/event.h line 627
signed int event_base_set(struct event_base *, struct event *);
// event_del
// file /usr/include/event2/event.h line 950
signed int event_del(struct event *);
// event_handler
// file memcachedb.c line 1849
static void event_handler(const signed int fd, const signed short int which, void *arg);
// event_init
// file /usr/include/event2/event_compat.h line 73
struct event_base * event_init(void);
// event_set
// file /usr/include/event2/event_compat.h line 174
void event_set(struct event *, signed int, signed short int, void (*)(signed int, signed short int, void *), void *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file stats.c line 120 function stats_rep
void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(signed int, struct rlimit *);
// getrusage
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 87
extern signed int getrusage(signed int, struct rusage *);
// getsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 219
extern signed int getsockopt(signed int, signed int, signed int, void *, unsigned int *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// item_alloc1
// file memcachedb.h line 294
struct _stritem * item_alloc1(char *key, const unsigned long int nkey, const signed int flags, const signed int nbytes);
// item_alloc2
// file item.c line 154
struct _stritem * item_alloc2(unsigned long int ntotal);
// item_delete
// file memcachedb.h line 299
signed int item_delete(char *key, unsigned long int nkey);
// item_exists
// file memcachedb.h line 300
signed int item_exists(char *key, unsigned long int nkey);
// item_free
// file memcachedb.h line 296
signed int item_free(struct _stritem *it);
// item_get
// file memcachedb.h line 297
struct _stritem * item_get(char *key, unsigned long int nkey);
// item_init
// file memcachedb.h line 291
void item_init(void);
// item_make_header
// file item.c line 108
static unsigned long int item_make_header(const unsigned char nkey, const signed int flags, const signed int nbytes, char *suffix, unsigned char *nsuffix);
// item_put
// file memcachedb.h line 298
signed int item_put(char *key, unsigned long int nkey, struct _stritem *it);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// main::_tmp::return_value_signal_1_object
//
void return_value_signal_1_object(signed int);
// main::_tmp::return_value_signal_2_object
//
void return_value_signal_2_object(signed int);
// main::_tmp::return_value_signal_3_object
//
void return_value_signal_3_object(signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// maximize_sndbuf
// file memcachedb.c line 1893
static void maximize_sndbuf(const signed int sfd);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// mt_add_delta
// file memcachedb.h line 337
char * mt_add_delta(signed int incr, const signed long int delta, char *buf, char *key, unsigned long int nkey);
// mt_conn_add_to_freelist
// file memcachedb.h line 339
_Bool mt_conn_add_to_freelist(struct conn *c);
// mt_conn_from_freelist
// file memcachedb.h line 338
struct conn * mt_conn_from_freelist(void);
// mt_is_listen_thread
// file memcachedb.h line 340
signed int mt_is_listen_thread(void);
// mt_item_add_to_freelist
// file memcachedb.h line 342
signed int mt_item_add_to_freelist(struct _stritem *it);
// mt_item_from_freelist
// file memcachedb.h line 341
struct _stritem * mt_item_from_freelist(void);
// mt_stats_lock
// file memcachedb.h line 343
void mt_stats_lock(void);
// mt_stats_unlock
// file memcachedb.h line 344
void mt_stats_unlock(void);
// mt_store_item
// file memcachedb.h line 345
signed int mt_store_item(struct _stritem *item, signed int comm);
// new_socket
// file memcachedb.c line 1871
static signed int new_socket(struct addrinfo *ai);
// new_socket_unix
// file memcachedb.c line 2026
static signed int new_socket_unix(void);
// out_string
// file memcachedb.c line 611
static void out_string(struct conn *c, const char *str);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_arithmetic_command
// file memcachedb.c line 1073
static void process_arithmetic_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens, const _Bool incr);
// process_bdb_command
// file memcachedb.c line 1254
static void process_bdb_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens);
// process_command
// file memcachedb.c line 1298
static void process_command(struct conn *c, char *command);
// process_delete_command
// file memcachedb.c line 1168
static void process_delete_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens);
// process_get_command
// file memcachedb.c line 914
static inline void process_get_command(struct conn *c, struct token_s *tokens, unsigned long int ntokens);
// process_rep_command
// file memcachedb.c line 1210
static void process_rep_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens);
// process_stat
// file memcachedb.c line 815
static void process_stat(struct conn *c, struct token_s *tokens, const unsigned long int ntokens);
// process_update_command
// file memcachedb.c line 1029
static void process_update_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens, signed int comm);
// process_verbosity_command
// file memcachedb.c line 1195
static void process_verbosity_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_11 *, const union anonymous_13 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_11 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_11 *, union anonymous_47 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_47 *, const union anonymous_13 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_47 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_47 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int, struct sockaddr *, unsigned int *);
// remove_pidfile
// file memcachedb.c line 2277
static void remove_pidfile(const char *pid_file);
// save_pid
// file memcachedb.c line 2260
static void save_pid(const signed int pid, const char *pid_file);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_42 *, struct anonymous_42 *, struct anonymous_42 *, struct timeval *);
// sendmsg
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 184
extern signed long int sendmsg(signed int, struct msghdr *, signed int);
// server_socket
// file memcachedb.c line 1924
static signed int server_socket(const signed int port, const _Bool is_udp);
// server_socket_unix
// file memcachedb.c line 2044
static signed int server_socket_unix(const char *path, signed int access_mask);
// setbuf
// file /usr/include/stdio.h line 332
extern void setbuf(struct _IO_FILE *, char *);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(signed int, struct rlimit *);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// settings_init
// file memcachedb.c line 140
static void settings_init(void);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// setup_thread
// file thread.c line 294
static void setup_thread(struct anonymous_48 *me);
// sig_handler
// file memcachedb.c line 2288
static void sig_handler(const signed int sig);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_45 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// start_chkpoint_thread
// file memcachedb.h line 283
void start_chkpoint_thread(void);
// start_dl_detect_thread
// file memcachedb.h line 285
void start_dl_detect_thread(void);
// start_memp_trickle_thread
// file memcachedb.h line 284
void start_memp_trickle_thread(void);
// stats_bdb
// file memcachedb.h line 303
void stats_bdb(char *temp);
// stats_init
// file memcachedb.c line 120
static void stats_init(void);
// stats_rep
// file memcachedb.h line 304
void stats_rep(char *temp);
// stats_repcfg
// file memcachedb.h line 306
void stats_repcfg(char *temp);
// stats_repmgr
// file memcachedb.h line 305
void stats_repmgr(char *temp);
// stats_repms
// file memcachedb.h line 307
void stats_repms(char *temp);
// stats_reset
// file memcachedb.c line 132
static void stats_reset(void);
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
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// strtoull
// file /usr/include/stdlib.h line 214
extern unsigned long long int strtoull(const char *, char ** restrict , signed int);
// thread_init
// file memcachedb.h line 332
void thread_init(signed int nthreads, struct event_base *main_base);
// thread_libevent_process
// file thread.c line 340
static void thread_libevent_process(signed int fd, signed short int which, void *arg);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tokenize_command
// file memcachedb.c line 764
static unsigned long int tokenize_command(char *command, struct token_s *tokens, const unsigned long int max_tokens);
// transmit
// file memcachedb.c line 1578
static signed int transmit(struct conn *c);
// try_read_command
// file memcachedb.c line 1390
static signed int try_read_command(struct conn *c);
// try_read_network
// file memcachedb.c line 1464
static signed int try_read_network(struct conn *c);
// try_read_udp
// file memcachedb.c line 1423
static signed int try_read_udp(struct conn *c);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// update_event
// file memcachedb.c line 1529
static _Bool update_event(struct conn *c, const signed int new_flags);
// usage
// file memcachedb.c line 2102
static void usage(void);
// usage_license
// file memcachedb.c line 2145
static void usage_license(void);
// worker_libevent
// file thread.c line 320
static void * worker_libevent(void *arg);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_40
{
  // le_next
  struct __db *le_next;
  // le_prev
  struct __db **le_prev;
};

struct anonymous_39
{
  // lh_first
  struct __db *lh_first;
};

struct anonymous_38
{
  // tqe_next
  struct __db *tqe_next;
  // tqe_prev
  struct __db **tqe_prev;
};

struct anonymous_41
{
  // lh_first
  struct __db_foreign_info *lh_first;
};

struct anonymous_15
{
  // tqe_next
  struct __db_mpoolfile *tqe_next;
  // tqe_prev
  struct __db_mpoolfile **tqe_prev;
};

struct anonymous_25
{
  // tqe_next
  struct __db_txn *tqe_next;
  // tqe_prev
  struct __db_txn **tqe_prev;
};

struct anonymous_49
{
  // tqe_next
  struct __dbc *tqe_next;
  // tqe_prev
  struct __dbc **tqe_prev;
};

struct anonymous_29
{
  // tqh_first
  struct __txn_event *tqh_first;
  // tqh_last
  struct __txn_event **tqh_last;
};

struct anonymous_30
{
  // stqh_first
  struct __txn_logrec *stqh_first;
  // stqh_last
  struct __txn_logrec **stqh_last;
};

struct anonymous_16
{
  // tqe_next
  struct event *tqe_next;
  // tqe_prev
  struct event **tqe_prev;
};

struct anonymous_5
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_3
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_42
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous_45
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_14
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

struct anonymous_51
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_1
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

struct anonymous
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_52
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_4
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_8
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_51 _kill;
  // _timer
  struct anonymous_52 _timer;
  // _rt
  struct anonymous _rt;
  // _sigchld
  struct anonymous_1 _sigchld;
  // _sigfault
  struct anonymous_3 _sigfault;
  // _sigpoll
  struct anonymous_4 _sigpoll;
  // _sigsys
  struct anonymous_5 _sigsys;
};

struct anonymous_50
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_8 _sifields;
};

struct anonymous_27
{
  // stqe_next
  signed long int stqe_next;
  // stqe_prev
  signed long int stqe_prev;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct anonymous_17
{
  // ev_io_next
  struct anonymous_16 ev_io_next;
  // ev_timeout
  struct timeval ev_timeout;
};

struct anonymous_37
{
  // ev_signal_next
  struct anonymous_16 ev_signal_next;
  // ev_ncalls
  signed short int ev_ncalls;
  // ev_pncalls
  signed short int *ev_pncalls;
};

union anonymous_0
{
  // ev_next_with_common_timeout
  struct anonymous_16 ev_next_with_common_timeout;
  // min_heap_idx
  signed int min_heap_idx;
};

union anonymous_2
{
  // ev_io
  struct anonymous_17 ev_io;
  // ev_signal
  struct anonymous_37 ev_signal;
};

struct event
{
  // ev_active_next
  struct anonymous_16 ev_active_next;
  // ev_next
  struct anonymous_16 ev_next;
  // ev_timeout_pos
  union anonymous_0 ev_timeout_pos;
  // ev_fd
  signed int ev_fd;
  // ev_base
  struct event_base *ev_base;
  // _ev
  union anonymous_2 _ev;
  // ev_events
  signed short int ev_events;
  // ev_res
  signed short int ev_res;
  // ev_flags
  signed short int ev_flags;
  // ev_pri
  unsigned char ev_pri;
  // ev_closure
  unsigned char ev_closure;
  // ev_timeout
  struct timeval ev_timeout;
  // ev_callback
  void (*ev_callback)(signed int, signed short int, void *);
  // ev_arg
  void *ev_arg;
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

union anonymous_47
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_11
{
  // __data
  struct anonymous_14 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct conn_queue
{
  // head
  struct conn_queue_item *head;
  // tail
  struct conn_queue_item *tail;
  // lock
  union anonymous_47 lock;
  // cond
  union anonymous_11 cond;
};

struct anonymous_48
{
  // thread_id
  unsigned long int thread_id;
  // base
  struct event_base *base;
  // notify_event
  struct event notify_event;
  // notify_receive_fd
  signed int notify_receive_fd;
  // notify_send_fd
  signed int notify_send_fd;
  // new_conn_queue
  struct conn_queue new_conn_queue;
};

union anonymous_10
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_50 *, void *);
};

union anonymous_13
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_21
{
  // ru_idrss
  signed long int ru_idrss;
  // __ru_idrss_word
  signed long int __ru_idrss_word;
};

union anonymous_28
{
  // ru_inblock
  signed long int ru_inblock;
  // __ru_inblock_word
  signed long int __ru_inblock_word;
};

union anonymous_22
{
  // ru_isrss
  signed long int ru_isrss;
  // __ru_isrss_word
  signed long int __ru_isrss_word;
};

union anonymous_20
{
  // ru_ixrss
  signed long int ru_ixrss;
  // __ru_ixrss_word
  signed long int __ru_ixrss_word;
};

union anonymous_24
{
  // ru_majflt
  signed long int ru_majflt;
  // __ru_majflt_word
  signed long int __ru_majflt_word;
};

union anonymous_19
{
  // ru_maxrss
  signed long int ru_maxrss;
  // __ru_maxrss_word
  signed long int __ru_maxrss_word;
};

union anonymous_23
{
  // ru_minflt
  signed long int ru_minflt;
  // __ru_minflt_word
  signed long int __ru_minflt_word;
};

union anonymous_33
{
  // ru_msgrcv
  signed long int ru_msgrcv;
  // __ru_msgrcv_word
  signed long int __ru_msgrcv_word;
};

union anonymous_32
{
  // ru_msgsnd
  signed long int ru_msgsnd;
  // __ru_msgsnd_word
  signed long int __ru_msgsnd_word;
};

union anonymous_36
{
  // ru_nivcsw
  signed long int ru_nivcsw;
  // __ru_nivcsw_word
  signed long int __ru_nivcsw_word;
};

union anonymous_34
{
  // ru_nsignals
  signed long int ru_nsignals;
  // __ru_nsignals_word
  signed long int __ru_nsignals_word;
};

union anonymous_26
{
  // ru_nswap
  signed long int ru_nswap;
  // __ru_nswap_word
  signed long int __ru_nswap_word;
};

union anonymous_35
{
  // ru_nvcsw
  signed long int ru_nvcsw;
  // __ru_nvcsw_word
  signed long int __ru_nvcsw_word;
};

union anonymous_31
{
  // ru_oublock
  signed long int ru_oublock;
  // __ru_oublock_word
  signed long int __ru_oublock_word;
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

struct __cq_aq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __cq_fq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __cq_jq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __db_lock_u
{
  // off
  unsigned long int off;
  // ndx
  unsigned int ndx;
  // gen
  unsigned int gen;
  // mode
  enum anonymous_7 mode;
};

struct __db_dbt
{
  // data
  void *data;
  // size
  unsigned int size;
  // ulen
  unsigned int ulen;
  // dlen
  unsigned int dlen;
  // doff
  unsigned int doff;
  // app_data
  void *app_data;
  // flags
  unsigned int flags;
};

struct __db
{
  // pgsize
  unsigned int pgsize;
  // priority
  enum anonymous_18 priority;
  // db_append_recno
  signed int (*db_append_recno)(struct __db *, struct __db_dbt *, unsigned int);
  // db_feedback
  void (*db_feedback)(struct __db *, signed int, signed int);
  // dup_compare
  signed int (*dup_compare)(struct __db *, const struct __db_dbt *, const struct __db_dbt *);
  // app_private
  void *app_private;
  // dbenv
  struct __db_env *dbenv;
  // env
  struct __env *env;
  // type
  enum anonymous_12 type;
  // mpf
  struct __db_mpoolfile *mpf;
  // mutex
  unsigned long int mutex;
  // fname
  char *fname;
  // dname
  char *dname;
  // dirname
  const char *dirname;
  // open_flags
  unsigned int open_flags;
  // fileid
  unsigned char fileid[20l];
  // adj_fileid
  unsigned int adj_fileid;
  // log_filename
  struct __fname *log_filename;
  // meta_pgno
  unsigned int meta_pgno;
  // locker
  struct __db_locker *locker;
  // cur_locker
  struct __db_locker *cur_locker;
  // cur_txn
  struct __db_txn *cur_txn;
  // associate_locker
  struct __db_locker *associate_locker;
  // handle_lock
  struct __db_lock_u handle_lock;
  // timestamp
  signed long int timestamp;
  // fid_gen
  unsigned int fid_gen;
  // my_rskey
  struct __db_dbt my_rskey;
  // my_rkey
  struct __db_dbt my_rkey;
  // my_rdata
  struct __db_dbt my_rdata;
  // saved_open_fhp
  struct __fh_t *saved_open_fhp;
  // dblistlinks
  struct anonymous_38 dblistlinks;
  // free_queue
  struct __cq_fq free_queue;
  // active_queue
  struct __cq_aq active_queue;
  // join_queue
  struct __cq_jq join_queue;
  // s_secondaries
  struct anonymous_39 s_secondaries;
  // s_links
  struct anonymous_40 s_links;
  // s_refcnt
  unsigned int s_refcnt;
  // s_callback
  signed int (*s_callback)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *);
  // s_primary
  struct __db *s_primary;
  // s_assoc_flags
  unsigned int s_assoc_flags;
  // f_primaries
  struct anonymous_41 f_primaries;
  // felink
  struct anonymous_38 felink;
  // s_foreign
  struct __db *s_foreign;
  // api_internal
  void *api_internal;
  // bt_internal
  void *bt_internal;
  // h_internal
  void *h_internal;
  // heap_internal
  void *heap_internal;
  // p_internal
  void *p_internal;
  // q_internal
  void *q_internal;
  // associate
  signed int (*associate)(struct __db *, struct __db_txn *, struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), unsigned int);
  // associate_foreign
  signed int (*associate_foreign)(struct __db *, struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, struct __db_dbt *, const struct __db_dbt *, signed int *), unsigned int);
  // close
  signed int (*close)(struct __db *, unsigned int);
  // compact
  signed int (*compact)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, struct __db_compact *, unsigned int, struct __db_dbt *);
  // cursor
  signed int (*cursor)(struct __db *, struct __db_txn *, struct __dbc **, unsigned int);
  // del
  signed int (*del)(struct __db *, struct __db_txn *, struct __db_dbt *, unsigned int);
  // err
  void (*err)(struct __db *, signed int, const char *, ...);
  // errx
  void (*errx)(struct __db *, const char *, ...);
  // exists
  signed int (*exists)(struct __db *, struct __db_txn *, struct __db_dbt *, unsigned int);
  // fd
  signed int (*fd)(struct __db *, signed int *);
  // get
  signed int (*get)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // get_alloc
  signed int (*get_alloc)(struct __db *, void * (**)(unsigned long int), void * (**)(void *, unsigned long int), void (**)(void *));
  // get_append_recno
  signed int (*get_append_recno)(struct __db *, signed int (**)(struct __db *, struct __db_dbt *, unsigned int));
  // get_assoc_flags
  signed int (*get_assoc_flags)(struct __db *, unsigned int *);
  // get_bt_compare
  signed int (*get_bt_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_bt_compress
  signed int (*get_bt_compress)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *));
  // get_bt_minkey
  signed int (*get_bt_minkey)(struct __db *, unsigned int *);
  // get_bt_prefix
  signed int (*get_bt_prefix)(struct __db *, unsigned long int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_byteswapped
  signed int (*get_byteswapped)(struct __db *, signed int *);
  // get_cachesize
  signed int (*get_cachesize)(struct __db *, unsigned int *, unsigned int *, signed int *);
  // get_create_dir
  signed int (*get_create_dir)(struct __db *, const char **);
  // get_dbname
  signed int (*get_dbname)(struct __db *, const char **, const char **);
  // get_dup_compare
  signed int (*get_dup_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_encrypt_flags
  signed int (*get_encrypt_flags)(struct __db *, unsigned int *);
  // get_env
  struct __db_env * (*get_env)(struct __db *);
  // get_errcall
  void (*get_errcall)(struct __db *, void (**)(const struct __db_env *, const char *, const char *));
  // get_errfile
  void (*get_errfile)(struct __db *, struct _IO_FILE **);
  // get_errpfx
  void (*get_errpfx)(struct __db *, const char **);
  // get_feedback
  signed int (*get_feedback)(struct __db *, void (**)(struct __db *, signed int, signed int));
  // get_flags
  signed int (*get_flags)(struct __db *, unsigned int *);
  // get_h_compare
  signed int (*get_h_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_h_ffactor
  signed int (*get_h_ffactor)(struct __db *, unsigned int *);
  // get_h_hash
  signed int (*get_h_hash)(struct __db *, unsigned int (**)(struct __db *, const void *, unsigned int));
  // get_h_nelem
  signed int (*get_h_nelem)(struct __db *, unsigned int *);
  // get_heapsize
  signed int (*get_heapsize)(struct __db *, unsigned int *, unsigned int *);
  // get_heap_regionsize
  signed int (*get_heap_regionsize)(struct __db *, unsigned int *);
  // get_lk_exclusive
  signed int (*get_lk_exclusive)(struct __db *, signed int *, signed int *);
  // get_lorder
  signed int (*get_lorder)(struct __db *, signed int *);
  // get_mpf
  struct __db_mpoolfile * (*get_mpf)(struct __db *);
  // get_msgcall
  void (*get_msgcall)(struct __db *, void (**)(const struct __db_env *, const char *));
  // get_msgfile
  void (*get_msgfile)(struct __db *, struct _IO_FILE **);
  // get_multiple
  signed int (*get_multiple)(struct __db *);
  // get_open_flags
  signed int (*get_open_flags)(struct __db *, unsigned int *);
  // get_pagesize
  signed int (*get_pagesize)(struct __db *, unsigned int *);
  // get_partition_callback
  signed int (*get_partition_callback)(struct __db *, unsigned int *, unsigned int (**)(struct __db *, struct __db_dbt *));
  // get_partition_dirs
  signed int (*get_partition_dirs)(struct __db *, const char ***);
  // get_partition_keys
  signed int (*get_partition_keys)(struct __db *, unsigned int *, struct __db_dbt **);
  // get_priority
  signed int (*get_priority)(struct __db *, enum anonymous_18 *);
  // get_q_extentsize
  signed int (*get_q_extentsize)(struct __db *, unsigned int *);
  // get_re_delim
  signed int (*get_re_delim)(struct __db *, signed int *);
  // get_re_len
  signed int (*get_re_len)(struct __db *, unsigned int *);
  // get_re_pad
  signed int (*get_re_pad)(struct __db *, signed int *);
  // get_re_source
  signed int (*get_re_source)(struct __db *, const char **);
  // get_transactional
  signed int (*get_transactional)(struct __db *);
  // get_type
  signed int (*get_type)(struct __db *, enum anonymous_12 *);
  // join
  signed int (*join)(struct __db *, struct __dbc **, struct __dbc **, unsigned int);
  // key_range
  signed int (*key_range)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __key_range *, unsigned int);
  // open
  signed int (*open)(struct __db *, struct __db_txn *, const char *, const char *, enum anonymous_12, unsigned int, signed int);
  // pget
  signed int (*pget)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // put
  signed int (*put)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // remove
  signed int (*remove)(struct __db *, const char *, const char *, unsigned int);
  // rename
  signed int (*rename)(struct __db *, const char *, const char *, const char *, unsigned int);
  // set_alloc
  signed int (*set_alloc)(struct __db *, void * (*)(unsigned long int), void * (*)(void *, unsigned long int), void (*)(void *));
  // set_append_recno
  signed int (*set_append_recno)(struct __db *, signed int (*)(struct __db *, struct __db_dbt *, unsigned int));
  // set_bt_compare
  signed int (*set_bt_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_bt_compress
  signed int (*set_bt_compress)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *));
  // set_bt_minkey
  signed int (*set_bt_minkey)(struct __db *, unsigned int);
  // set_bt_prefix
  signed int (*set_bt_prefix)(struct __db *, unsigned long int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_cachesize
  signed int (*set_cachesize)(struct __db *, unsigned int, unsigned int, signed int);
  // set_create_dir
  signed int (*set_create_dir)(struct __db *, const char *);
  // set_dup_compare
  signed int (*set_dup_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_encrypt
  signed int (*set_encrypt)(struct __db *, const char *, unsigned int);
  // set_errcall
  void (*set_errcall)(struct __db *, void (*)(const struct __db_env *, const char *, const char *));
  // set_errfile
  void (*set_errfile)(struct __db *, struct _IO_FILE *);
  // set_errpfx
  void (*set_errpfx)(struct __db *, const char *);
  // set_feedback
  signed int (*set_feedback)(struct __db *, void (*)(struct __db *, signed int, signed int));
  // set_flags
  signed int (*set_flags)(struct __db *, unsigned int);
  // set_h_compare
  signed int (*set_h_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_h_ffactor
  signed int (*set_h_ffactor)(struct __db *, unsigned int);
  // set_h_hash
  signed int (*set_h_hash)(struct __db *, unsigned int (*)(struct __db *, const void *, unsigned int));
  // set_h_nelem
  signed int (*set_h_nelem)(struct __db *, unsigned int);
  // set_heapsize
  signed int (*set_heapsize)(struct __db *, unsigned int, unsigned int, unsigned int);
  // set_heap_regionsize
  signed int (*set_heap_regionsize)(struct __db *, unsigned int);
  // set_lk_exclusive
  signed int (*set_lk_exclusive)(struct __db *, signed int);
  // set_lorder
  signed int (*set_lorder)(struct __db *, signed int);
  // set_msgcall
  void (*set_msgcall)(struct __db *, void (*)(const struct __db_env *, const char *));
  // set_msgfile
  void (*set_msgfile)(struct __db *, struct _IO_FILE *);
  // set_pagesize
  signed int (*set_pagesize)(struct __db *, unsigned int);
  // set_paniccall
  signed int (*set_paniccall)(struct __db *, void (*)(struct __db_env *, signed int));
  // set_partition
  signed int (*set_partition)(struct __db *, unsigned int, struct __db_dbt *, unsigned int (*)(struct __db *, struct __db_dbt *));
  // set_partition_dirs
  signed int (*set_partition_dirs)(struct __db *, const char **);
  // set_priority
  signed int (*set_priority)(struct __db *, enum anonymous_18);
  // set_q_extentsize
  signed int (*set_q_extentsize)(struct __db *, unsigned int);
  // set_re_delim
  signed int (*set_re_delim)(struct __db *, signed int);
  // set_re_len
  signed int (*set_re_len)(struct __db *, unsigned int);
  // set_re_pad
  signed int (*set_re_pad)(struct __db *, signed int);
  // set_re_source
  signed int (*set_re_source)(struct __db *, const char *);
  // sort_multiple
  signed int (*sort_multiple)(struct __db *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // stat
  signed int (*stat)(struct __db *, struct __db_txn *, void *, unsigned int);
  // stat_print
  signed int (*stat_print)(struct __db *, unsigned int);
  // sync
  signed int (*sync)(struct __db *, unsigned int);
  // truncate
  signed int (*truncate)(struct __db *, struct __db_txn *, unsigned int *, unsigned int);
  // upgrade
  signed int (*upgrade)(struct __db *, const char *, unsigned int);
  // verify
  signed int (*verify)(struct __db *, const char *, const char *, struct _IO_FILE *, unsigned int);
  // dump
  signed int (*dump)(struct __db *, const char *, signed int (*)(void *, const void *), void *, signed int, signed int);
  // db_am_remove
  signed int (*db_am_remove)(struct __db *, struct __db_thread_info *, struct __db_txn *, const char *, const char *, unsigned int);
  // db_am_rename
  signed int (*db_am_rename)(struct __db *, struct __db_thread_info *, struct __db_txn *, const char *, const char *, const char *);
  // stored_get
  signed int (*stored_get)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // stored_close
  signed int (*stored_close)(struct __db *, unsigned int);
  // alt_close
  signed int (*alt_close)(struct __db *, unsigned int);
  // am_ok
  unsigned int am_ok;
  // preserve_fid
  signed int preserve_fid;
  // orig_flags
  unsigned int orig_flags;
  // flags
  unsigned int flags;
  // orig_flags2
  unsigned int orig_flags2;
  // flags2
  unsigned int flags2;
};

struct __db_channel
{
  // channel
  struct __channel *channel;
  // eid
  signed int eid;
  // timeout
  unsigned int timeout;
  // close
  signed int (*close)(struct __db_channel *, unsigned int);
  // send_msg
  signed int (*send_msg)(struct __db_channel *, struct __db_dbt *, unsigned int, unsigned int);
  // send_request
  signed int (*send_request)(struct __db_channel *, struct __db_dbt *, unsigned int, struct __db_dbt *, unsigned int, unsigned int);
  // set_timeout
  signed int (*set_timeout)(struct __db_channel *, unsigned int);
};

struct __db_compact
{
  // compact_fillpercent
  unsigned int compact_fillpercent;
  // compact_timeout
  unsigned int compact_timeout;
  // compact_pages
  unsigned int compact_pages;
  // compact_empty_buckets
  unsigned int compact_empty_buckets;
  // compact_pages_free
  unsigned int compact_pages_free;
  // compact_pages_examine
  unsigned int compact_pages_examine;
  // compact_levels
  unsigned int compact_levels;
  // compact_deadlock
  unsigned int compact_deadlock;
  // compact_pages_truncated
  unsigned int compact_pages_truncated;
  // compact_truncate
  unsigned int compact_truncate;
};

struct __db_env
{
  // env
  struct __env *env;
  // mtx_db_env
  unsigned long int mtx_db_env;
  // db_errcall
  void (*db_errcall)(const struct __db_env *, const char *, const char *);
  // db_errfile
  struct _IO_FILE *db_errfile;
  // db_errpfx
  const char *db_errpfx;
  // db_msgcall
  void (*db_msgcall)(const struct __db_env *, const char *);
  // db_msgfile
  struct _IO_FILE *db_msgfile;
  // app_dispatch
  signed int (*app_dispatch)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous_43);
  // db_event_func
  void (*db_event_func)(struct __db_env *, unsigned int, void *);
  // db_feedback
  void (*db_feedback)(struct __db_env *, signed int, signed int);
  // db_free
  void (*db_free)(void *);
  // db_paniccall
  void (*db_paniccall)(struct __db_env *, signed int);
  // db_malloc
  void * (*db_malloc)(unsigned long int);
  // db_realloc
  void * (*db_realloc)(void *, unsigned long int);
  // is_alive
  signed int (*is_alive)(struct __db_env *, signed int, unsigned long int, unsigned int);
  // thread_id
  void (*thread_id)(struct __db_env *, signed int *, unsigned long int *);
  // thread_id_string
  char * (*thread_id_string)(struct __db_env *, signed int, unsigned long int, char *);
  // db_log_dir
  char *db_log_dir;
  // db_md_dir
  char *db_md_dir;
  // db_tmp_dir
  char *db_tmp_dir;
  // db_create_dir
  char *db_create_dir;
  // db_data_dir
  char **db_data_dir;
  // data_cnt
  signed int data_cnt;
  // data_next
  signed int data_next;
  // intermediate_dir_mode
  char *intermediate_dir_mode;
  // shm_key
  signed long int shm_key;
  // passwd
  char *passwd;
  // passwd_len
  unsigned long int passwd_len;
  // app_private
  void *app_private;
  // api1_internal
  void *api1_internal;
  // api2_internal
  void *api2_internal;
  // verbose
  unsigned int verbose;
  // mutex_align
  unsigned int mutex_align;
  // mutex_cnt
  unsigned int mutex_cnt;
  // mutex_inc
  unsigned int mutex_inc;
  // mutex_max
  unsigned int mutex_max;
  // mutex_tas_spins
  unsigned int mutex_tas_spins;
  // lk_conflicts
  unsigned char *lk_conflicts;
  // lk_modes
  signed int lk_modes;
  // lk_detect
  unsigned int lk_detect;
  // lk_max
  unsigned int lk_max;
  // lk_max_lockers
  unsigned int lk_max_lockers;
  // lk_max_objects
  unsigned int lk_max_objects;
  // lk_init
  unsigned int lk_init;
  // lk_init_lockers
  unsigned int lk_init_lockers;
  // lk_init_objects
  unsigned int lk_init_objects;
  // lk_partitions
  unsigned int lk_partitions;
  // lk_timeout
  unsigned int lk_timeout;
  // locker_t_size
  unsigned int locker_t_size;
  // object_t_size
  unsigned int object_t_size;
  // lg_bsize
  unsigned int lg_bsize;
  // lg_fileid_init
  unsigned int lg_fileid_init;
  // lg_filemode
  signed int lg_filemode;
  // lg_regionmax
  unsigned int lg_regionmax;
  // lg_size
  unsigned int lg_size;
  // lg_flags
  unsigned int lg_flags;
  // mp_gbytes
  unsigned int mp_gbytes;
  // mp_bytes
  unsigned int mp_bytes;
  // mp_max_gbytes
  unsigned int mp_max_gbytes;
  // mp_max_bytes
  unsigned int mp_max_bytes;
  // mp_mmapsize
  unsigned long int mp_mmapsize;
  // mp_maxopenfd
  signed int mp_maxopenfd;
  // mp_maxwrite
  signed int mp_maxwrite;
  // mp_ncache
  unsigned int mp_ncache;
  // mp_pagesize
  unsigned int mp_pagesize;
  // mp_tablesize
  unsigned int mp_tablesize;
  // mp_mtxcount
  unsigned int mp_mtxcount;
  // mp_maxwrite_sleep
  unsigned int mp_maxwrite_sleep;
  // tx_init
  unsigned int tx_init;
  // tx_max
  unsigned int tx_max;
  // tx_timestamp
  signed long int tx_timestamp;
  // tx_timeout
  unsigned int tx_timeout;
  // thr_init
  unsigned int thr_init;
  // thr_max
  unsigned int thr_max;
  // memory_max
  unsigned long int memory_max;
  // registry
  struct __fh_t *registry;
  // registry_off
  unsigned int registry_off;
  // envreg_timeout
  unsigned int envreg_timeout;
  // flags
  unsigned int flags;
  // add_data_dir
  signed int (*add_data_dir)(struct __db_env *, const char *);
  // backup
  signed int (*backup)(struct __db_env *, const char *, unsigned int);
  // cdsgroup_begin
  signed int (*cdsgroup_begin)(struct __db_env *, struct __db_txn **);
  // close
  signed int (*close)(struct __db_env *, unsigned int);
  // dbbackup
  signed int (*dbbackup)(struct __db_env *, const char *, const char *, unsigned int);
  // dbremove
  signed int (*dbremove)(struct __db_env *, struct __db_txn *, const char *, const char *, unsigned int);
  // dbrename
  signed int (*dbrename)(struct __db_env *, struct __db_txn *, const char *, const char *, const char *, unsigned int);
  // err
  void (*err)(const struct __db_env *, signed int, const char *, ...);
  // errx
  void (*errx)(const struct __db_env *, const char *, ...);
  // failchk
  signed int (*failchk)(struct __db_env *, unsigned int);
  // fileid_reset
  signed int (*fileid_reset)(struct __db_env *, const char *, unsigned int);
  // get_alloc
  signed int (*get_alloc)(struct __db_env *, void * (**)(unsigned long int), void * (**)(void *, unsigned long int), void (**)(void *));
  // get_app_dispatch
  signed int (*get_app_dispatch)(struct __db_env *, signed int (**)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous_43));
  // get_cache_max
  signed int (*get_cache_max)(struct __db_env *, unsigned int *, unsigned int *);
  // get_cachesize
  signed int (*get_cachesize)(struct __db_env *, unsigned int *, unsigned int *, signed int *);
  // get_create_dir
  signed int (*get_create_dir)(struct __db_env *, const char **);
  // get_data_dirs
  signed int (*get_data_dirs)(struct __db_env *, const char ***);
  // get_data_len
  signed int (*get_data_len)(struct __db_env *, unsigned int *);
  // get_backup_callbacks
  signed int (*get_backup_callbacks)(struct __db_env *, signed int (**)(struct __db_env *, const char *, const char *, void **), signed int (**)(struct __db_env *, unsigned int, unsigned int, unsigned int, unsigned char *, void *), signed int (**)(struct __db_env *, const char *, void *));
  // get_backup_config
  signed int (*get_backup_config)(struct __db_env *, enum anonymous_44, unsigned int *);
  // get_encrypt_flags
  signed int (*get_encrypt_flags)(struct __db_env *, unsigned int *);
  // get_errcall
  void (*get_errcall)(struct __db_env *, void (**)(const struct __db_env *, const char *, const char *));
  // get_errfile
  void (*get_errfile)(struct __db_env *, struct _IO_FILE **);
  // get_errpfx
  void (*get_errpfx)(struct __db_env *, const char **);
  // get_flags
  signed int (*get_flags)(struct __db_env *, unsigned int *);
  // get_feedback
  signed int (*get_feedback)(struct __db_env *, void (**)(struct __db_env *, signed int, signed int));
  // get_home
  signed int (*get_home)(struct __db_env *, const char **);
  // get_intermediate_dir_mode
  signed int (*get_intermediate_dir_mode)(struct __db_env *, const char **);
  // get_isalive
  signed int (*get_isalive)(struct __db_env *, signed int (**)(struct __db_env *, signed int, unsigned long int, unsigned int));
  // get_lg_bsize
  signed int (*get_lg_bsize)(struct __db_env *, unsigned int *);
  // get_lg_dir
  signed int (*get_lg_dir)(struct __db_env *, const char **);
  // get_lg_filemode
  signed int (*get_lg_filemode)(struct __db_env *, signed int *);
  // get_lg_max
  signed int (*get_lg_max)(struct __db_env *, unsigned int *);
  // get_lg_regionmax
  signed int (*get_lg_regionmax)(struct __db_env *, unsigned int *);
  // get_lk_conflicts
  signed int (*get_lk_conflicts)(struct __db_env *, const unsigned char **, signed int *);
  // get_lk_detect
  signed int (*get_lk_detect)(struct __db_env *, unsigned int *);
  // get_lk_max_lockers
  signed int (*get_lk_max_lockers)(struct __db_env *, unsigned int *);
  // get_lk_max_locks
  signed int (*get_lk_max_locks)(struct __db_env *, unsigned int *);
  // get_lk_max_objects
  signed int (*get_lk_max_objects)(struct __db_env *, unsigned int *);
  // get_lk_partitions
  signed int (*get_lk_partitions)(struct __db_env *, unsigned int *);
  // get_lk_priority
  signed int (*get_lk_priority)(struct __db_env *, unsigned int, unsigned int *);
  // get_lk_tablesize
  signed int (*get_lk_tablesize)(struct __db_env *, unsigned int *);
  // get_memory_init
  signed int (*get_memory_init)(struct __db_env *, enum anonymous_46, unsigned int *);
  // get_memory_max
  signed int (*get_memory_max)(struct __db_env *, unsigned int *, unsigned int *);
  // get_metadata_dir
  signed int (*get_metadata_dir)(struct __db_env *, const char **);
  // get_mp_max_openfd
  signed int (*get_mp_max_openfd)(struct __db_env *, signed int *);
  // get_mp_max_write
  signed int (*get_mp_max_write)(struct __db_env *, signed int *, unsigned int *);
  // get_mp_mmapsize
  signed int (*get_mp_mmapsize)(struct __db_env *, unsigned long int *);
  // get_mp_mtxcount
  signed int (*get_mp_mtxcount)(struct __db_env *, unsigned int *);
  // get_mp_pagesize
  signed int (*get_mp_pagesize)(struct __db_env *, unsigned int *);
  // get_mp_tablesize
  signed int (*get_mp_tablesize)(struct __db_env *, unsigned int *);
  // get_msgcall
  void (*get_msgcall)(struct __db_env *, void (**)(const struct __db_env *, const char *));
  // get_msgfile
  void (*get_msgfile)(struct __db_env *, struct _IO_FILE **);
  // get_open_flags
  signed int (*get_open_flags)(struct __db_env *, unsigned int *);
  // get_shm_key
  signed int (*get_shm_key)(struct __db_env *, signed long int *);
  // get_thread_count
  signed int (*get_thread_count)(struct __db_env *, unsigned int *);
  // get_thread_id_fn
  signed int (*get_thread_id_fn)(struct __db_env *, void (**)(struct __db_env *, signed int *, unsigned long int *));
  // get_thread_id_string_fn
  signed int (*get_thread_id_string_fn)(struct __db_env *, char * (**)(struct __db_env *, signed int, unsigned long int, char *));
  // get_timeout
  signed int (*get_timeout)(struct __db_env *, unsigned int *, unsigned int);
  // get_tmp_dir
  signed int (*get_tmp_dir)(struct __db_env *, const char **);
  // get_tx_max
  signed int (*get_tx_max)(struct __db_env *, unsigned int *);
  // get_tx_timestamp
  signed int (*get_tx_timestamp)(struct __db_env *, signed long int *);
  // get_verbose
  signed int (*get_verbose)(struct __db_env *, unsigned int, signed int *);
  // is_bigendian
  signed int (*is_bigendian)(void);
  // lock_detect
  signed int (*lock_detect)(struct __db_env *, unsigned int, unsigned int, signed int *);
  // lock_get
  signed int (*lock_get)(struct __db_env *, unsigned int, unsigned int, struct __db_dbt *, enum anonymous_7, struct __db_lock_u *);
  // lock_id
  signed int (*lock_id)(struct __db_env *, unsigned int *);
  // lock_id_free
  signed int (*lock_id_free)(struct __db_env *, unsigned int);
  // lock_put
  signed int (*lock_put)(struct __db_env *, struct __db_lock_u *);
  // lock_stat
  signed int (*lock_stat)(struct __db_env *, struct __db_lock_stat **, unsigned int);
  // lock_stat_print
  signed int (*lock_stat_print)(struct __db_env *, unsigned int);
  // lock_vec
  signed int (*lock_vec)(struct __db_env *, unsigned int, unsigned int, struct __db_lockreq *, signed int, struct __db_lockreq **);
  // log_archive
  signed int (*log_archive)(struct __db_env *, char ***, unsigned int);
  // log_cursor
  signed int (*log_cursor)(struct __db_env *, struct __db_log_cursor **, unsigned int);
  // log_file
  signed int (*log_file)(struct __db_env *, const struct __db_lsn *, char *, unsigned long int);
  // log_flush
  signed int (*log_flush)(struct __db_env *, const struct __db_lsn *);
  // log_get_config
  signed int (*log_get_config)(struct __db_env *, unsigned int, signed int *);
  // log_printf
  signed int (*log_printf)(struct __db_env *, struct __db_txn *, const char *, ...);
  // log_put
  signed int (*log_put)(struct __db_env *, struct __db_lsn *, const struct __db_dbt *, unsigned int);
  // log_put_record
  signed int (*log_put_record)(struct __db_env *, struct __db *, struct __db_txn *, struct __db_lsn *, unsigned int, unsigned int, unsigned int, unsigned int, struct __log_rec_spec *, ...);
  // log_read_record
  signed int (*log_read_record)(struct __db_env *, struct __db **, void *, void *, struct __log_rec_spec *, unsigned int, void **);
  // log_set_config
  signed int (*log_set_config)(struct __db_env *, unsigned int, signed int);
  // log_stat
  signed int (*log_stat)(struct __db_env *, struct __db_log_stat **, unsigned int);
  // log_stat_print
  signed int (*log_stat_print)(struct __db_env *, unsigned int);
  // log_verify
  signed int (*log_verify)(struct __db_env *, const struct __db_logvrfy_config *);
  // lsn_reset
  signed int (*lsn_reset)(struct __db_env *, const char *, unsigned int);
  // memp_fcreate
  signed int (*memp_fcreate)(struct __db_env *, struct __db_mpoolfile **, unsigned int);
  // memp_register
  signed int (*memp_register)(struct __db_env *, signed int, signed int (*)(struct __db_env *, unsigned int, void *, struct __db_dbt *), signed int (*)(struct __db_env *, unsigned int, void *, struct __db_dbt *));
  // memp_stat
  signed int (*memp_stat)(struct __db_env *, struct __db_mpool_stat **, struct __db_mpool_fstat ***, unsigned int);
  // memp_stat_print
  signed int (*memp_stat_print)(struct __db_env *, unsigned int);
  // memp_sync
  signed int (*memp_sync)(struct __db_env *, struct __db_lsn *);
  // memp_trickle
  signed int (*memp_trickle)(struct __db_env *, signed int, signed int *);
  // mutex_alloc
  signed int (*mutex_alloc)(struct __db_env *, unsigned int, unsigned long int *);
  // mutex_free
  signed int (*mutex_free)(struct __db_env *, unsigned long int);
  // mutex_get_align
  signed int (*mutex_get_align)(struct __db_env *, unsigned int *);
  // mutex_get_increment
  signed int (*mutex_get_increment)(struct __db_env *, unsigned int *);
  // mutex_get_init
  signed int (*mutex_get_init)(struct __db_env *, unsigned int *);
  // mutex_get_max
  signed int (*mutex_get_max)(struct __db_env *, unsigned int *);
  // mutex_get_tas_spins
  signed int (*mutex_get_tas_spins)(struct __db_env *, unsigned int *);
  // mutex_lock
  signed int (*mutex_lock)(struct __db_env *, unsigned long int);
  // mutex_set_align
  signed int (*mutex_set_align)(struct __db_env *, unsigned int);
  // mutex_set_increment
  signed int (*mutex_set_increment)(struct __db_env *, unsigned int);
  // mutex_set_init
  signed int (*mutex_set_init)(struct __db_env *, unsigned int);
  // mutex_set_max
  signed int (*mutex_set_max)(struct __db_env *, unsigned int);
  // mutex_set_tas_spins
  signed int (*mutex_set_tas_spins)(struct __db_env *, unsigned int);
  // mutex_stat
  signed int (*mutex_stat)(struct __db_env *, struct __db_mutex_stat **, unsigned int);
  // mutex_stat_print
  signed int (*mutex_stat_print)(struct __db_env *, unsigned int);
  // mutex_unlock
  signed int (*mutex_unlock)(struct __db_env *, unsigned long int);
  // open
  signed int (*open)(struct __db_env *, const char *, unsigned int, signed int);
  // remove
  signed int (*remove)(struct __db_env *, const char *, unsigned int);
  // rep_elect
  signed int (*rep_elect)(struct __db_env *, unsigned int, unsigned int, unsigned int);
  // rep_flush
  signed int (*rep_flush)(struct __db_env *);
  // rep_get_clockskew
  signed int (*rep_get_clockskew)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_config
  signed int (*rep_get_config)(struct __db_env *, unsigned int, signed int *);
  // rep_get_limit
  signed int (*rep_get_limit)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_nsites
  signed int (*rep_get_nsites)(struct __db_env *, unsigned int *);
  // rep_get_priority
  signed int (*rep_get_priority)(struct __db_env *, unsigned int *);
  // rep_get_request
  signed int (*rep_get_request)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_timeout
  signed int (*rep_get_timeout)(struct __db_env *, signed int, unsigned int *);
  // rep_process_message
  signed int (*rep_process_message)(struct __db_env *, struct __db_dbt *, struct __db_dbt *, signed int, struct __db_lsn *);
  // rep_set_clockskew
  signed int (*rep_set_clockskew)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_config
  signed int (*rep_set_config)(struct __db_env *, unsigned int, signed int);
  // rep_set_limit
  signed int (*rep_set_limit)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_nsites
  signed int (*rep_set_nsites)(struct __db_env *, unsigned int);
  // rep_set_priority
  signed int (*rep_set_priority)(struct __db_env *, unsigned int);
  // rep_set_request
  signed int (*rep_set_request)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_timeout
  signed int (*rep_set_timeout)(struct __db_env *, signed int, unsigned int);
  // rep_set_transport
  signed int (*rep_set_transport)(struct __db_env *, signed int, signed int (*)(struct __db_env *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_lsn *, signed int, unsigned int));
  // rep_start
  signed int (*rep_start)(struct __db_env *, struct __db_dbt *, unsigned int);
  // rep_stat
  signed int (*rep_stat)(struct __db_env *, struct __db_rep_stat **, unsigned int);
  // rep_stat_print
  signed int (*rep_stat_print)(struct __db_env *, unsigned int);
  // rep_sync
  signed int (*rep_sync)(struct __db_env *, unsigned int);
  // repmgr_channel
  signed int (*repmgr_channel)(struct __db_env *, signed int, struct __db_channel **, unsigned int);
  // repmgr_get_ack_policy
  signed int (*repmgr_get_ack_policy)(struct __db_env *, signed int *);
  // repmgr_local_site
  signed int (*repmgr_local_site)(struct __db_env *, struct __db_site **);
  // repmgr_msg_dispatch
  signed int (*repmgr_msg_dispatch)(struct __db_env *, void (*)(struct __db_env *, struct __db_channel *, struct __db_dbt *, unsigned int, unsigned int), unsigned int);
  // repmgr_set_ack_policy
  signed int (*repmgr_set_ack_policy)(struct __db_env *, signed int);
  // repmgr_site
  signed int (*repmgr_site)(struct __db_env *, const char *, unsigned int, struct __db_site **, unsigned int);
  // repmgr_site_by_eid
  signed int (*repmgr_site_by_eid)(struct __db_env *, signed int, struct __db_site **);
  // repmgr_site_list
  signed int (*repmgr_site_list)(struct __db_env *, unsigned int *, struct __db_repmgr_site **);
  // repmgr_start
  signed int (*repmgr_start)(struct __db_env *, signed int, unsigned int);
  // repmgr_stat
  signed int (*repmgr_stat)(struct __db_env *, struct __db_repmgr_stat **, unsigned int);
  // repmgr_stat_print
  signed int (*repmgr_stat_print)(struct __db_env *, unsigned int);
  // set_alloc
  signed int (*set_alloc)(struct __db_env *, void * (*)(unsigned long int), void * (*)(void *, unsigned long int), void (*)(void *));
  // set_app_dispatch
  signed int (*set_app_dispatch)(struct __db_env *, signed int (*)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous_43));
  // set_cache_max
  signed int (*set_cache_max)(struct __db_env *, unsigned int, unsigned int);
  // set_cachesize
  signed int (*set_cachesize)(struct __db_env *, unsigned int, unsigned int, signed int);
  // set_create_dir
  signed int (*set_create_dir)(struct __db_env *, const char *);
  // set_data_dir
  signed int (*set_data_dir)(struct __db_env *, const char *);
  // set_data_len
  signed int (*set_data_len)(struct __db_env *, unsigned int);
  // set_backup_callbacks
  signed int (*set_backup_callbacks)(struct __db_env *, signed int (*)(struct __db_env *, const char *, const char *, void **), signed int (*)(struct __db_env *, unsigned int, unsigned int, unsigned int, unsigned char *, void *), signed int (*)(struct __db_env *, const char *, void *));
  // set_backup_config
  signed int (*set_backup_config)(struct __db_env *, enum anonymous_44, unsigned int);
  // set_encrypt
  signed int (*set_encrypt)(struct __db_env *, const char *, unsigned int);
  // set_errcall
  void (*set_errcall)(struct __db_env *, void (*)(const struct __db_env *, const char *, const char *));
  // set_errfile
  void (*set_errfile)(struct __db_env *, struct _IO_FILE *);
  // set_errpfx
  void (*set_errpfx)(struct __db_env *, const char *);
  // set_event_notify
  signed int (*set_event_notify)(struct __db_env *, void (*)(struct __db_env *, unsigned int, void *));
  // set_feedback
  signed int (*set_feedback)(struct __db_env *, void (*)(struct __db_env *, signed int, signed int));
  // set_flags
  signed int (*set_flags)(struct __db_env *, unsigned int, signed int);
  // set_intermediate_dir_mode
  signed int (*set_intermediate_dir_mode)(struct __db_env *, const char *);
  // set_isalive
  signed int (*set_isalive)(struct __db_env *, signed int (*)(struct __db_env *, signed int, unsigned long int, unsigned int));
  // set_lg_bsize
  signed int (*set_lg_bsize)(struct __db_env *, unsigned int);
  // set_lg_dir
  signed int (*set_lg_dir)(struct __db_env *, const char *);
  // set_lg_filemode
  signed int (*set_lg_filemode)(struct __db_env *, signed int);
  // set_lg_max
  signed int (*set_lg_max)(struct __db_env *, unsigned int);
  // set_lg_regionmax
  signed int (*set_lg_regionmax)(struct __db_env *, unsigned int);
  // set_lk_conflicts
  signed int (*set_lk_conflicts)(struct __db_env *, unsigned char *, signed int);
  // set_lk_detect
  signed int (*set_lk_detect)(struct __db_env *, unsigned int);
  // set_lk_max_lockers
  signed int (*set_lk_max_lockers)(struct __db_env *, unsigned int);
  // set_lk_max_locks
  signed int (*set_lk_max_locks)(struct __db_env *, unsigned int);
  // set_lk_max_objects
  signed int (*set_lk_max_objects)(struct __db_env *, unsigned int);
  // set_lk_partitions
  signed int (*set_lk_partitions)(struct __db_env *, unsigned int);
  // set_lk_priority
  signed int (*set_lk_priority)(struct __db_env *, unsigned int, unsigned int);
  // set_lk_tablesize
  signed int (*set_lk_tablesize)(struct __db_env *, unsigned int);
  // set_memory_init
  signed int (*set_memory_init)(struct __db_env *, enum anonymous_46, unsigned int);
  // set_memory_max
  signed int (*set_memory_max)(struct __db_env *, unsigned int, unsigned int);
  // set_metadata_dir
  signed int (*set_metadata_dir)(struct __db_env *, const char *);
  // set_mp_max_openfd
  signed int (*set_mp_max_openfd)(struct __db_env *, signed int);
  // set_mp_max_write
  signed int (*set_mp_max_write)(struct __db_env *, signed int, unsigned int);
  // set_mp_mmapsize
  signed int (*set_mp_mmapsize)(struct __db_env *, unsigned long int);
  // set_mp_mtxcount
  signed int (*set_mp_mtxcount)(struct __db_env *, unsigned int);
  // set_mp_pagesize
  signed int (*set_mp_pagesize)(struct __db_env *, unsigned int);
  // set_mp_tablesize
  signed int (*set_mp_tablesize)(struct __db_env *, unsigned int);
  // set_msgcall
  void (*set_msgcall)(struct __db_env *, void (*)(const struct __db_env *, const char *));
  // set_msgfile
  void (*set_msgfile)(struct __db_env *, struct _IO_FILE *);
  // set_paniccall
  signed int (*set_paniccall)(struct __db_env *, void (*)(struct __db_env *, signed int));
  // set_shm_key
  signed int (*set_shm_key)(struct __db_env *, signed long int);
  // set_thread_count
  signed int (*set_thread_count)(struct __db_env *, unsigned int);
  // set_thread_id
  signed int (*set_thread_id)(struct __db_env *, void (*)(struct __db_env *, signed int *, unsigned long int *));
  // set_thread_id_string
  signed int (*set_thread_id_string)(struct __db_env *, char * (*)(struct __db_env *, signed int, unsigned long int, char *));
  // set_timeout
  signed int (*set_timeout)(struct __db_env *, unsigned int, unsigned int);
  // set_tmp_dir
  signed int (*set_tmp_dir)(struct __db_env *, const char *);
  // set_tx_max
  signed int (*set_tx_max)(struct __db_env *, unsigned int);
  // set_tx_timestamp
  signed int (*set_tx_timestamp)(struct __db_env *, signed long int *);
  // set_verbose
  signed int (*set_verbose)(struct __db_env *, unsigned int, signed int);
  // txn_applied
  signed int (*txn_applied)(struct __db_env *, struct __db_txn_token *, unsigned int, unsigned int);
  // stat_print
  signed int (*stat_print)(struct __db_env *, unsigned int);
  // txn_begin
  signed int (*txn_begin)(struct __db_env *, struct __db_txn *, struct __db_txn **, unsigned int);
  // txn_checkpoint
  signed int (*txn_checkpoint)(struct __db_env *, unsigned int, unsigned int, unsigned int);
  // txn_recover
  signed int (*txn_recover)(struct __db_env *, struct __db_preplist *, signed long int, signed long int *, unsigned int);
  // txn_stat
  signed int (*txn_stat)(struct __db_env *, struct __db_txn_stat **, unsigned int);
  // txn_stat_print
  signed int (*txn_stat_print)(struct __db_env *, unsigned int);
  // prdbt
  signed int (*prdbt)(struct __db_dbt *, signed int, const char *, void *, signed int (*)(void *, const void *), signed int, signed int);
};

struct __db_ilock
{
  // pgno
  unsigned int pgno;
  // fileid
  unsigned char fileid[20l];
  // type
  unsigned int type;
};

struct __db_lock_stat
{
  // st_id
  unsigned int st_id;
  // st_cur_maxid
  unsigned int st_cur_maxid;
  // st_initlocks
  unsigned int st_initlocks;
  // st_initlockers
  unsigned int st_initlockers;
  // st_initobjects
  unsigned int st_initobjects;
  // st_locks
  unsigned int st_locks;
  // st_lockers
  unsigned int st_lockers;
  // st_objects
  unsigned int st_objects;
  // st_maxlocks
  unsigned int st_maxlocks;
  // st_maxlockers
  unsigned int st_maxlockers;
  // st_maxobjects
  unsigned int st_maxobjects;
  // st_partitions
  unsigned int st_partitions;
  // st_tablesize
  unsigned int st_tablesize;
  // st_nmodes
  signed int st_nmodes;
  // st_nlockers
  unsigned int st_nlockers;
  // st_nlocks
  unsigned int st_nlocks;
  // st_maxnlocks
  unsigned int st_maxnlocks;
  // st_maxhlocks
  unsigned int st_maxhlocks;
  // st_locksteals
  unsigned long int st_locksteals;
  // st_maxlsteals
  unsigned long int st_maxlsteals;
  // st_maxnlockers
  unsigned int st_maxnlockers;
  // st_nobjects
  unsigned int st_nobjects;
  // st_maxnobjects
  unsigned int st_maxnobjects;
  // st_maxhobjects
  unsigned int st_maxhobjects;
  // st_objectsteals
  unsigned long int st_objectsteals;
  // st_maxosteals
  unsigned long int st_maxosteals;
  // st_nrequests
  unsigned long int st_nrequests;
  // st_nreleases
  unsigned long int st_nreleases;
  // st_nupgrade
  unsigned long int st_nupgrade;
  // st_ndowngrade
  unsigned long int st_ndowngrade;
  // st_lock_wait
  unsigned long int st_lock_wait;
  // st_lock_nowait
  unsigned long int st_lock_nowait;
  // st_ndeadlocks
  unsigned long int st_ndeadlocks;
  // st_locktimeout
  unsigned int st_locktimeout;
  // st_nlocktimeouts
  unsigned long int st_nlocktimeouts;
  // st_txntimeout
  unsigned int st_txntimeout;
  // st_ntxntimeouts
  unsigned long int st_ntxntimeouts;
  // st_part_wait
  unsigned long int st_part_wait;
  // st_part_nowait
  unsigned long int st_part_nowait;
  // st_part_max_wait
  unsigned long int st_part_max_wait;
  // st_part_max_nowait
  unsigned long int st_part_max_nowait;
  // st_objs_wait
  unsigned long int st_objs_wait;
  // st_objs_nowait
  unsigned long int st_objs_nowait;
  // st_lockers_wait
  unsigned long int st_lockers_wait;
  // st_lockers_nowait
  unsigned long int st_lockers_nowait;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_hash_len
  unsigned int st_hash_len;
  // st_regsize
  unsigned long int st_regsize;
};

struct __db_lockreq
{
  // op
  enum anonymous_6 op;
  // mode
  enum anonymous_7 mode;
  // timeout
  unsigned int timeout;
  // obj
  struct __db_dbt *obj;
  // lock
  struct __db_lock_u lock;
};

struct __db_lsn
{
  // file
  unsigned int file;
  // offset
  unsigned int offset;
};

struct __db_log_cursor
{
  // env
  struct __env *env;
  // fhp
  struct __fh_t *fhp;
  // lsn
  struct __db_lsn lsn;
  // len
  unsigned int len;
  // prev
  unsigned int prev;
  // dbt
  struct __db_dbt dbt;
  // p_lsn
  struct __db_lsn p_lsn;
  // p_version
  unsigned int p_version;
  // bp
  unsigned char *bp;
  // bp_size
  unsigned int bp_size;
  // bp_rlen
  unsigned int bp_rlen;
  // bp_lsn
  struct __db_lsn bp_lsn;
  // bp_maxrec
  unsigned int bp_maxrec;
  // close
  signed int (*close)(struct __db_log_cursor *, unsigned int);
  // get
  signed int (*get)(struct __db_log_cursor *, struct __db_lsn *, struct __db_dbt *, unsigned int);
  // version
  signed int (*version)(struct __db_log_cursor *, unsigned int *, unsigned int);
  // flags
  unsigned int flags;
};

struct __db_log_stat
{
  // st_magic
  unsigned int st_magic;
  // st_version
  unsigned int st_version;
  // st_mode
  signed int st_mode;
  // st_lg_bsize
  unsigned int st_lg_bsize;
  // st_lg_size
  unsigned int st_lg_size;
  // st_wc_bytes
  unsigned int st_wc_bytes;
  // st_wc_mbytes
  unsigned int st_wc_mbytes;
  // st_fileid_init
  unsigned int st_fileid_init;
  // st_nfileid
  unsigned int st_nfileid;
  // st_maxnfileid
  unsigned int st_maxnfileid;
  // st_record
  unsigned long int st_record;
  // st_w_bytes
  unsigned int st_w_bytes;
  // st_w_mbytes
  unsigned int st_w_mbytes;
  // st_wcount
  unsigned long int st_wcount;
  // st_wcount_fill
  unsigned long int st_wcount_fill;
  // st_rcount
  unsigned long int st_rcount;
  // st_scount
  unsigned long int st_scount;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_cur_file
  unsigned int st_cur_file;
  // st_cur_offset
  unsigned int st_cur_offset;
  // st_disk_file
  unsigned int st_disk_file;
  // st_disk_offset
  unsigned int st_disk_offset;
  // st_maxcommitperflush
  unsigned int st_maxcommitperflush;
  // st_mincommitperflush
  unsigned int st_mincommitperflush;
  // st_regsize
  unsigned long int st_regsize;
};

struct __db_logvrfy_config
{
  // continue_after_fail
  signed int continue_after_fail;
  // verbose
  signed int verbose;
  // cachesize
  unsigned int cachesize;
  // temp_envhome
  const char *temp_envhome;
  // dbfile
  const char *dbfile;
  // dbname
  const char *dbname;
  // start_lsn
  struct __db_lsn start_lsn;
  // end_lsn
  struct __db_lsn end_lsn;
  // start_time
  signed long int start_time;
  // end_time
  signed long int end_time;
};

struct __db_mpool_fstat
{
  // st_pagesize
  unsigned int st_pagesize;
  // st_map
  unsigned int st_map;
  // st_cache_hit
  unsigned long int st_cache_hit;
  // st_cache_miss
  unsigned long int st_cache_miss;
  // st_page_create
  unsigned long int st_page_create;
  // st_page_in
  unsigned long int st_page_in;
  // st_page_out
  unsigned long int st_page_out;
  // st_backup_spins
  unsigned long int st_backup_spins;
  // file_name
  char *file_name;
};

struct __db_mpool_stat
{
  // st_gbytes
  unsigned int st_gbytes;
  // st_bytes
  unsigned int st_bytes;
  // st_ncache
  unsigned int st_ncache;
  // st_max_ncache
  unsigned int st_max_ncache;
  // st_mmapsize
  unsigned long int st_mmapsize;
  // st_maxopenfd
  signed int st_maxopenfd;
  // st_maxwrite
  signed int st_maxwrite;
  // st_maxwrite_sleep
  unsigned int st_maxwrite_sleep;
  // st_pages
  unsigned int st_pages;
  // st_map
  unsigned int st_map;
  // st_cache_hit
  unsigned long int st_cache_hit;
  // st_cache_miss
  unsigned long int st_cache_miss;
  // st_page_create
  unsigned long int st_page_create;
  // st_page_in
  unsigned long int st_page_in;
  // st_page_out
  unsigned long int st_page_out;
  // st_ro_evict
  unsigned long int st_ro_evict;
  // st_rw_evict
  unsigned long int st_rw_evict;
  // st_page_trickle
  unsigned long int st_page_trickle;
  // st_page_clean
  unsigned int st_page_clean;
  // st_page_dirty
  unsigned int st_page_dirty;
  // st_hash_buckets
  unsigned int st_hash_buckets;
  // st_hash_mutexes
  unsigned int st_hash_mutexes;
  // st_pagesize
  unsigned int st_pagesize;
  // st_hash_searches
  unsigned int st_hash_searches;
  // st_hash_longest
  unsigned int st_hash_longest;
  // st_hash_examined
  unsigned long int st_hash_examined;
  // st_hash_nowait
  unsigned long int st_hash_nowait;
  // st_hash_wait
  unsigned long int st_hash_wait;
  // st_hash_max_nowait
  unsigned long int st_hash_max_nowait;
  // st_hash_max_wait
  unsigned long int st_hash_max_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_mvcc_frozen
  unsigned long int st_mvcc_frozen;
  // st_mvcc_thawed
  unsigned long int st_mvcc_thawed;
  // st_mvcc_freed
  unsigned long int st_mvcc_freed;
  // st_alloc
  unsigned long int st_alloc;
  // st_alloc_buckets
  unsigned long int st_alloc_buckets;
  // st_alloc_max_buckets
  unsigned long int st_alloc_max_buckets;
  // st_alloc_pages
  unsigned long int st_alloc_pages;
  // st_alloc_max_pages
  unsigned long int st_alloc_max_pages;
  // st_io_wait
  unsigned long int st_io_wait;
  // st_sync_interrupted
  unsigned long int st_sync_interrupted;
  // st_regsize
  unsigned long int st_regsize;
  // st_regmax
  unsigned long int st_regmax;
};

struct __db_mpoolfile
{
  // fhp
  struct __fh_t *fhp;
  // ref
  unsigned int ref;
  // pinref
  unsigned int pinref;
  // q
  struct anonymous_15 q;
  // env
  struct __env *env;
  // mfp
  struct __mpoolfile *mfp;
  // clear_len
  unsigned int clear_len;
  // fileid
  unsigned char fileid[20l];
  // ftype
  signed int ftype;
  // lsn_offset
  signed int lsn_offset;
  // gbytes
  unsigned int gbytes;
  // bytes
  unsigned int bytes;
  // pgcookie
  struct __db_dbt *pgcookie;
  // priority
  signed int priority;
  // addr
  void *addr;
  // len
  unsigned long int len;
  // config_flags
  unsigned int config_flags;
  // close
  signed int (*close)(struct __db_mpoolfile *, unsigned int);
  // get
  signed int (*get)(struct __db_mpoolfile *, unsigned int *, struct __db_txn *, unsigned int, void *);
  // get_clear_len
  signed int (*get_clear_len)(struct __db_mpoolfile *, unsigned int *);
  // get_fileid
  signed int (*get_fileid)(struct __db_mpoolfile *, unsigned char *);
  // get_flags
  signed int (*get_flags)(struct __db_mpoolfile *, unsigned int *);
  // get_ftype
  signed int (*get_ftype)(struct __db_mpoolfile *, signed int *);
  // get_last_pgno
  signed int (*get_last_pgno)(struct __db_mpoolfile *, unsigned int *);
  // get_lsn_offset
  signed int (*get_lsn_offset)(struct __db_mpoolfile *, signed int *);
  // get_maxsize
  signed int (*get_maxsize)(struct __db_mpoolfile *, unsigned int *, unsigned int *);
  // get_pgcookie
  signed int (*get_pgcookie)(struct __db_mpoolfile *, struct __db_dbt *);
  // get_priority
  signed int (*get_priority)(struct __db_mpoolfile *, enum anonymous_18 *);
  // open
  signed int (*open)(struct __db_mpoolfile *, const char *, unsigned int, signed int, unsigned long int);
  // put
  signed int (*put)(struct __db_mpoolfile *, void *, enum anonymous_18, unsigned int);
  // set_clear_len
  signed int (*set_clear_len)(struct __db_mpoolfile *, unsigned int);
  // set_fileid
  signed int (*set_fileid)(struct __db_mpoolfile *, unsigned char *);
  // set_flags
  signed int (*set_flags)(struct __db_mpoolfile *, unsigned int, signed int);
  // set_ftype
  signed int (*set_ftype)(struct __db_mpoolfile *, signed int);
  // set_lsn_offset
  signed int (*set_lsn_offset)(struct __db_mpoolfile *, signed int);
  // set_maxsize
  signed int (*set_maxsize)(struct __db_mpoolfile *, unsigned int, unsigned int);
  // set_pgcookie
  signed int (*set_pgcookie)(struct __db_mpoolfile *, struct __db_dbt *);
  // set_priority
  signed int (*set_priority)(struct __db_mpoolfile *, enum anonymous_18);
  // sync
  signed int (*sync)(struct __db_mpoolfile *);
  // flags
  unsigned int flags;
};

struct __db_mutex_stat
{
  // st_mutex_align
  unsigned int st_mutex_align;
  // st_mutex_tas_spins
  unsigned int st_mutex_tas_spins;
  // st_mutex_init
  unsigned int st_mutex_init;
  // st_mutex_cnt
  unsigned int st_mutex_cnt;
  // st_mutex_max
  unsigned int st_mutex_max;
  // st_mutex_free
  unsigned int st_mutex_free;
  // st_mutex_inuse
  unsigned int st_mutex_inuse;
  // st_mutex_inuse_max
  unsigned int st_mutex_inuse_max;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_regsize
  unsigned long int st_regsize;
  // st_regmax
  unsigned long int st_regmax;
};

struct __db_preplist
{
  // txn
  struct __db_txn *txn;
  // gid
  unsigned char gid[128l];
};

struct __db_rep_stat
{
  // st_startup_complete
  unsigned int st_startup_complete;
  // st_log_queued
  unsigned long int st_log_queued;
  // st_status
  unsigned int st_status;
  // st_next_lsn
  struct __db_lsn st_next_lsn;
  // st_waiting_lsn
  struct __db_lsn st_waiting_lsn;
  // st_max_perm_lsn
  struct __db_lsn st_max_perm_lsn;
  // st_next_pg
  unsigned int st_next_pg;
  // st_waiting_pg
  unsigned int st_waiting_pg;
  // st_dupmasters
  unsigned int st_dupmasters;
  // st_env_id
  signed long int st_env_id;
  // st_env_priority
  unsigned int st_env_priority;
  // st_bulk_fills
  unsigned long int st_bulk_fills;
  // st_bulk_overflows
  unsigned long int st_bulk_overflows;
  // st_bulk_records
  unsigned long int st_bulk_records;
  // st_bulk_transfers
  unsigned long int st_bulk_transfers;
  // st_client_rerequests
  unsigned long int st_client_rerequests;
  // st_client_svc_req
  unsigned long int st_client_svc_req;
  // st_client_svc_miss
  unsigned long int st_client_svc_miss;
  // st_gen
  unsigned int st_gen;
  // st_egen
  unsigned int st_egen;
  // st_lease_chk
  unsigned long int st_lease_chk;
  // st_lease_chk_misses
  unsigned long int st_lease_chk_misses;
  // st_lease_chk_refresh
  unsigned long int st_lease_chk_refresh;
  // st_lease_sends
  unsigned long int st_lease_sends;
  // st_log_duplicated
  unsigned long int st_log_duplicated;
  // st_log_queued_max
  unsigned long int st_log_queued_max;
  // st_log_queued_total
  unsigned long int st_log_queued_total;
  // st_log_records
  unsigned long int st_log_records;
  // st_log_requested
  unsigned long int st_log_requested;
  // st_master
  signed long int st_master;
  // st_master_changes
  unsigned long int st_master_changes;
  // st_msgs_badgen
  unsigned long int st_msgs_badgen;
  // st_msgs_processed
  unsigned long int st_msgs_processed;
  // st_msgs_recover
  unsigned long int st_msgs_recover;
  // st_msgs_send_failures
  unsigned long int st_msgs_send_failures;
  // st_msgs_sent
  unsigned long int st_msgs_sent;
  // st_newsites
  unsigned long int st_newsites;
  // st_nsites
  unsigned int st_nsites;
  // st_nthrottles
  unsigned long int st_nthrottles;
  // st_outdated
  unsigned long int st_outdated;
  // st_pg_duplicated
  unsigned long int st_pg_duplicated;
  // st_pg_records
  unsigned long int st_pg_records;
  // st_pg_requested
  unsigned long int st_pg_requested;
  // st_txns_applied
  unsigned long int st_txns_applied;
  // st_startsync_delayed
  unsigned long int st_startsync_delayed;
  // st_elections
  unsigned long int st_elections;
  // st_elections_won
  unsigned long int st_elections_won;
  // st_election_cur_winner
  signed long int st_election_cur_winner;
  // st_election_gen
  unsigned int st_election_gen;
  // st_election_datagen
  unsigned int st_election_datagen;
  // st_election_lsn
  struct __db_lsn st_election_lsn;
  // st_election_nsites
  unsigned int st_election_nsites;
  // st_election_nvotes
  unsigned int st_election_nvotes;
  // st_election_priority
  unsigned int st_election_priority;
  // st_election_status
  signed int st_election_status;
  // st_election_tiebreaker
  unsigned int st_election_tiebreaker;
  // st_election_votes
  unsigned int st_election_votes;
  // st_election_sec
  unsigned int st_election_sec;
  // st_election_usec
  unsigned int st_election_usec;
  // st_max_lease_sec
  unsigned int st_max_lease_sec;
  // st_max_lease_usec
  unsigned int st_max_lease_usec;
};

struct __db_repmgr_site
{
  // eid
  signed int eid;
  // host
  char *host;
  // port
  unsigned int port;
  // status
  unsigned int status;
  // flags
  unsigned int flags;
};

struct __db_repmgr_stat
{
  // st_perm_failed
  unsigned long int st_perm_failed;
  // st_msgs_queued
  unsigned long int st_msgs_queued;
  // st_msgs_dropped
  unsigned long int st_msgs_dropped;
  // st_connection_drop
  unsigned long int st_connection_drop;
  // st_connect_fail
  unsigned long int st_connect_fail;
  // st_elect_threads
  unsigned long int st_elect_threads;
  // st_max_elect_threads
  unsigned long int st_max_elect_threads;
};

struct __db_site
{
  // env
  struct __env *env;
  // eid
  signed int eid;
  // host
  const char *host;
  // port
  unsigned int port;
  // flags
  unsigned int flags;
  // get_address
  signed int (*get_address)(struct __db_site *, const char **, unsigned int *);
  // get_config
  signed int (*get_config)(struct __db_site *, unsigned int, unsigned int *);
  // get_eid
  signed int (*get_eid)(struct __db_site *, signed int *);
  // set_config
  signed int (*set_config)(struct __db_site *, unsigned int, unsigned int);
  // remove
  signed int (*remove)(struct __db_site *);
  // close
  signed int (*close)(struct __db_site *);
};

struct __kids
{
  // tqh_first
  struct __db_txn *tqh_first;
  // tqh_last
  struct __db_txn **tqh_last;
};

struct __my_cursors
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __femfs
{
  // tqh_first
  struct __db *tqh_first;
  // tqh_last
  struct __db **tqh_last;
};

struct __db_txn
{
  // mgrp
  struct __db_txnmgr *mgrp;
  // parent
  struct __db_txn *parent;
  // thread_info
  struct __db_thread_info *thread_info;
  // txnid
  unsigned int txnid;
  // name
  char *name;
  // locker
  struct __db_locker *locker;
  // td
  void *td;
  // lock_timeout
  unsigned int lock_timeout;
  // txn_list
  void *txn_list;
  // links
  struct anonymous_25 links;
  // xa_links
  struct anonymous_27 xa_links;
  // kids
  struct __kids kids;
  // events
  struct anonymous_29 events;
  // logs
  struct anonymous_30 logs;
  // klinks
  struct anonymous_25 klinks;
  // my_cursors
  struct __my_cursors my_cursors;
  // femfs
  struct __femfs femfs;
  // token_buffer
  struct __db_txn_token *token_buffer;
  // api_internal
  void *api_internal;
  // xml_internal
  void *xml_internal;
  // cursors
  unsigned int cursors;
  // abort
  signed int (*abort)(struct __db_txn *);
  // commit
  signed int (*commit)(struct __db_txn *, unsigned int);
  // discard
  signed int (*discard)(struct __db_txn *, unsigned int);
  // get_name
  signed int (*get_name)(struct __db_txn *, const char **);
  // get_priority
  signed int (*get_priority)(struct __db_txn *, unsigned int *);
  // id
  unsigned int (*id)(struct __db_txn *);
  // prepare
  signed int (*prepare)(struct __db_txn *, unsigned char *);
  // set_commit_token
  signed int (*set_commit_token)(struct __db_txn *, struct __db_txn_token *);
  // set_name
  signed int (*set_name)(struct __db_txn *, const char *);
  // set_priority
  signed int (*set_priority)(struct __db_txn *, unsigned int);
  // set_timeout
  signed int (*set_timeout)(struct __db_txn *, unsigned int, unsigned int);
  // set_txn_lsnp
  void (*set_txn_lsnp)(struct __db_txn *, struct __db_lsn **, struct __db_lsn **);
  // xa_thr_status
  unsigned int xa_thr_status;
  // flags
  unsigned int flags;
};

struct __db_txn_active
{
  // txnid
  unsigned int txnid;
  // parentid
  unsigned int parentid;
  // pid
  signed int pid;
  // tid
  unsigned long int tid;
  // lsn
  struct __db_lsn lsn;
  // read_lsn
  struct __db_lsn read_lsn;
  // mvcc_ref
  unsigned int mvcc_ref;
  // priority
  unsigned int priority;
  // status
  unsigned int status;
  // xa_status
  unsigned int xa_status;
  // gid
  unsigned char gid[128l];
  // name
  char name[51l];
};

struct __db_txn_stat
{
  // st_nrestores
  unsigned int st_nrestores;
  // st_last_ckp
  struct __db_lsn st_last_ckp;
  // st_time_ckp
  signed long int st_time_ckp;
  // st_last_txnid
  unsigned int st_last_txnid;
  // st_inittxns
  unsigned int st_inittxns;
  // st_maxtxns
  unsigned int st_maxtxns;
  // st_naborts
  unsigned long int st_naborts;
  // st_nbegins
  unsigned long int st_nbegins;
  // st_ncommits
  unsigned long int st_ncommits;
  // st_nactive
  unsigned int st_nactive;
  // st_nsnapshot
  unsigned int st_nsnapshot;
  // st_maxnactive
  unsigned int st_maxnactive;
  // st_maxnsnapshot
  unsigned int st_maxnsnapshot;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_regsize
  unsigned long int st_regsize;
  // st_txnarray
  struct __db_txn_active *st_txnarray;
};

struct __db_txn_token
{
  // buf
  unsigned char buf[20l];
};

struct __dbc
{
  // dbp
  struct __db *dbp;
  // dbenv
  struct __db_env *dbenv;
  // env
  struct __env *env;
  // thread_info
  struct __db_thread_info *thread_info;
  // txn
  struct __db_txn *txn;
  // priority
  enum anonymous_18 priority;
  // links
  struct anonymous_49 links;
  // txn_cursors
  struct anonymous_49 txn_cursors;
  // rskey
  struct __db_dbt *rskey;
  // rkey
  struct __db_dbt *rkey;
  // rdata
  struct __db_dbt *rdata;
  // my_rskey
  struct __db_dbt my_rskey;
  // my_rkey
  struct __db_dbt my_rkey;
  // my_rdata
  struct __db_dbt my_rdata;
  // lref
  struct __db_locker *lref;
  // locker
  struct __db_locker *locker;
  // lock_dbt
  struct __db_dbt lock_dbt;
  // lock
  struct __db_ilock lock;
  // mylock
  struct __db_lock_u mylock;
  // dbtype
  enum anonymous_12 dbtype;
  // internal
  struct __dbc_internal *internal;
  // close
  signed int (*close)(struct __dbc *);
  // cmp
  signed int (*cmp)(struct __dbc *, struct __dbc *, signed int *, unsigned int);
  // count
  signed int (*count)(struct __dbc *, unsigned int *, unsigned int);
  // del
  signed int (*del)(struct __dbc *, unsigned int);
  // dup
  signed int (*dup)(struct __dbc *, struct __dbc **, unsigned int);
  // get
  signed int (*get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // get_priority
  signed int (*get_priority)(struct __dbc *, enum anonymous_18 *);
  // pget
  signed int (*pget)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // put
  signed int (*put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // set_priority
  signed int (*set_priority)(struct __dbc *, enum anonymous_18);
  // c_close
  signed int (*c_close)(struct __dbc *);
  // c_count
  signed int (*c_count)(struct __dbc *, unsigned int *, unsigned int);
  // c_del
  signed int (*c_del)(struct __dbc *, unsigned int);
  // c_dup
  signed int (*c_dup)(struct __dbc *, struct __dbc **, unsigned int);
  // c_get
  signed int (*c_get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // c_pget
  signed int (*c_pget)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // c_put
  signed int (*c_put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // am_bulk
  signed int (*am_bulk)(struct __dbc *, struct __db_dbt *, unsigned int);
  // am_close
  signed int (*am_close)(struct __dbc *, unsigned int, signed int *);
  // am_del
  signed int (*am_del)(struct __dbc *, unsigned int);
  // am_destroy
  signed int (*am_destroy)(struct __dbc *);
  // am_get
  signed int (*am_get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int, unsigned int *);
  // am_put
  signed int (*am_put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int, unsigned int *);
  // am_writelock
  signed int (*am_writelock)(struct __dbc *);
  // flags
  unsigned int flags;
};

struct __key_range
{
  // less
  double less;
  // equal
  double equal;
  // greater
  double greater;
};

struct __log_rec_spec
{
  // type
  enum anonymous_9 type;
  // offset
  unsigned int offset;
  // name
  const char *name;
  // fmt
  const char fmt[4l];
};

struct _stritem
{
  // nbytes
  signed int nbytes;
  // nsuffix
  unsigned char nsuffix;
  // nkey
  unsigned char nkey;
  // end
  void *end[0l];
};

struct addrinfo
{
  // ai_flags
  signed int ai_flags;
  // ai_family
  signed int ai_family;
  // ai_socktype
  signed int ai_socktype;
  // ai_protocol
  signed int ai_protocol;
  // ai_addrlen
  unsigned int ai_addrlen;
  // ai_addr
  struct sockaddr *ai_addr;
  // ai_canonname
  char *ai_canonname;
  // ai_next
  struct addrinfo *ai_next;
};

struct bdb_settings
{
  // db_file
  char *db_file;
  // env_home
  char *env_home;
  // cache_size
  unsigned int cache_size;
  // txn_lg_bsize
  unsigned int txn_lg_bsize;
  // page_size
  unsigned int page_size;
  // db_type
  enum anonymous_12 db_type;
  // txn_nosync
  signed int txn_nosync;
  // dldetect_val
  signed int dldetect_val;
  // chkpoint_val
  signed int chkpoint_val;
  // memp_trickle_val
  signed int memp_trickle_val;
  // memp_trickle_percent
  signed int memp_trickle_percent;
  // db_flags
  unsigned int db_flags;
  // env_flags
  unsigned int env_flags;
  // is_replicated
  signed int is_replicated;
  // rep_localhost
  char *rep_localhost;
  // rep_localport
  signed int rep_localport;
  // rep_remotehost
  char *rep_remotehost;
  // rep_remoteport
  signed int rep_remoteport;
  // rep_whoami
  signed int rep_whoami;
  // rep_master_eid
  signed int rep_master_eid;
  // rep_start_policy
  unsigned int rep_start_policy;
  // rep_nsites
  unsigned int rep_nsites;
  // rep_ack_policy
  signed int rep_ack_policy;
  // rep_ack_timeout
  unsigned int rep_ack_timeout;
  // rep_chkpoint_delay
  unsigned int rep_chkpoint_delay;
  // rep_conn_retry
  unsigned int rep_conn_retry;
  // rep_elect_timeout
  unsigned int rep_elect_timeout;
  // rep_elect_retry
  unsigned int rep_elect_retry;
  // rep_heartbeat_monitor
  unsigned int rep_heartbeat_monitor;
  // rep_heartbeat_send
  unsigned int rep_heartbeat_send;
  // rep_lease_timeout
  unsigned int rep_lease_timeout;
  // rep_bulk
  signed int rep_bulk;
  // rep_lease
  signed int rep_lease;
  // rep_priority
  unsigned int rep_priority;
  // rep_req_max
  unsigned int rep_req_max;
  // rep_req_min
  unsigned int rep_req_min;
  // rep_fast_clock
  unsigned int rep_fast_clock;
  // rep_slow_clock
  unsigned int rep_slow_clock;
  // rep_limit_gbytes
  unsigned int rep_limit_gbytes;
  // rep_limit_bytes
  unsigned int rep_limit_bytes;
};

struct bdb_version
{
  // majver
  signed int majver;
  // minver
  signed int minver;
  // patch
  signed int patch;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct conn
{
  // sfd
  signed int sfd;
  // state
  signed int state;
  // event
  struct event event;
  // ev_flags
  signed short int ev_flags;
  // which
  signed short int which;
  // rbuf
  char *rbuf;
  // rcurr
  char *rcurr;
  // rsize
  signed int rsize;
  // rbytes
  signed int rbytes;
  // wbuf
  char *wbuf;
  // wcurr
  char *wcurr;
  // wsize
  signed int wsize;
  // wbytes
  signed int wbytes;
  // write_and_go
  signed int write_and_go;
  // write_and_free
  void *write_and_free;
  // ritem
  char *ritem;
  // rlbytes
  signed int rlbytes;
  // item
  void *item;
  // item_comm
  signed int item_comm;
  // sbytes
  signed int sbytes;
  // iov
  struct iovec *iov;
  // iovsize
  signed int iovsize;
  // iovused
  signed int iovused;
  // msglist
  struct msghdr *msglist;
  // msgsize
  signed int msgsize;
  // msgused
  signed int msgused;
  // msgcurr
  signed int msgcurr;
  // msgbytes
  signed int msgbytes;
  // ilist
  struct _stritem **ilist;
  // isize
  signed int isize;
  // icurr
  struct _stritem **icurr;
  // ileft
  signed int ileft;
  // udp
  _Bool udp;
  // request_id
  signed int request_id;
  // request_addr
  struct sockaddr request_addr;
  // request_addr_size
  unsigned int request_addr_size;
  // hdrbuf
  unsigned char *hdrbuf;
  // hdrsize
  signed int hdrsize;
  // next
  struct conn *next;
};

struct conn_queue_item
{
  // sfd
  signed int sfd;
  // init_state
  signed int init_state;
  // event_flags
  signed int event_flags;
  // read_buffer_size
  signed int read_buffer_size;
  // is_udp
  signed int is_udp;
  // next
  struct conn_queue_item *next;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct linger
{
  // l_onoff
  signed int l_onoff;
  // l_linger
  signed int l_linger;
};

struct msghdr
{
  // msg_name
  void *msg_name;
  // msg_namelen
  unsigned int msg_namelen;
  // msg_iov
  struct iovec *msg_iov;
  // msg_iovlen
  unsigned long int msg_iovlen;
  // msg_control
  void *msg_control;
  // msg_controllen
  unsigned long int msg_controllen;
  // msg_flags
  signed int msg_flags;
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

struct rusage
{
  // ru_utime
  struct timeval ru_utime;
  // ru_stime
  struct timeval ru_stime;
  // _anon0
  union anonymous_19 _anon0;
  // _anon1
  union anonymous_20 _anon1;
  // _anon2
  union anonymous_21 _anon2;
  // _anon3
  union anonymous_22 _anon3;
  // _anon4
  union anonymous_23 _anon4;
  // _anon5
  union anonymous_24 _anon5;
  // _anon6
  union anonymous_26 _anon6;
  // _anon7
  union anonymous_28 _anon7;
  // _anon8
  union anonymous_31 _anon8;
  // _anon9
  union anonymous_32 _anon9;
  // _anon10
  union anonymous_33 _anon10;
  // _anon11
  union anonymous_34 _anon11;
  // _anon12
  union anonymous_35 _anon12;
  // _anon13
  union anonymous_36 _anon13;
};

struct settings
{
  // item_buf_size
  unsigned long int item_buf_size;
  // maxconns
  signed int maxconns;
  // port
  signed int port;
  // udpport
  signed int udpport;
  // inter
  char *inter;
  // verbose
  signed int verbose;
  // socketpath
  char *socketpath;
  // access
  signed int access;
  // num_threads
  signed int num_threads;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_10 __sigaction_handler;
  // sa_mask
  struct anonymous_45 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
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

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
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

struct stats
{
  // curr_conns
  unsigned int curr_conns;
  // total_conns
  unsigned int total_conns;
  // conn_structs
  unsigned int conn_structs;
  // get_cmds
  unsigned long int get_cmds;
  // set_cmds
  unsigned long int set_cmds;
  // get_hits
  unsigned long int get_hits;
  // get_misses
  unsigned long int get_misses;
  // started
  signed long int started;
  // bytes_read
  unsigned long int bytes_read;
  // bytes_written
  unsigned long int bytes_written;
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

struct token_s
{
  // value
  char *value;
  // length
  unsigned long int length;
};


// bdb_lock
// file thread.c line 67
static union anonymous_47 bdb_lock;
// bdb_settings
// file memcachedb.c line 104
struct bdb_settings bdb_settings;
// bdb_version
// file memcachedb.c line 105
struct bdb_version bdb_version;
// chk_ptid
// file bdb.c line 34
static unsigned long int chk_ptid;
// conn_lock
// file thread.c line 61
static union anonymous_47 conn_lock;
// cqi_freelist
// file thread.c line 73
static struct conn_queue_item *cqi_freelist;
// cqi_freelist_lock
// file thread.c line 74
static union anonymous_47 cqi_freelist_lock;
// daemon_quit
// file memcachedb.c line 109
signed int daemon_quit = 0;
// dbp
// file memcachedb.c line 107
struct __db *dbp;
// dld_ptid
// file bdb.c line 36
static unsigned long int dld_ptid;
// env
// file memcachedb.c line 106
struct __db_env *env;
// freeconns
// file memcachedb.c line 205
static struct conn **freeconns;
// freecurr
// file memcachedb.c line 207
static signed int freecurr;
// freeitem
// file item.c line 36
static struct _stritem **freeitem;
// freeitemcurr
// file item.c line 38
static signed int freeitemcurr;
// freeitemtotal
// file item.c line 37
static signed int freeitemtotal;
// freetotal
// file memcachedb.c line 206
static signed int freetotal;
// ibuffer_lock
// file thread.c line 64
static union anonymous_47 ibuffer_lock;
// init_cond
// file thread.c line 96
static union anonymous_11 init_cond;
// init_count
// file thread.c line 94
static signed int init_count = 0;
// init_lock
// file thread.c line 95
static union anonymous_47 init_lock;
// last_thread
// file thread.c line 371
static signed int last_thread = -1;
// listen_conn
// file memcachedb.c line 112
static struct conn *listen_conn = (struct conn *)(void *)0;
// main_base
// file memcachedb.c line 113
static struct event_base *main_base;
// mtri_ptid
// file bdb.c line 35
static unsigned long int mtri_ptid;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// settings
// file memcachedb.c line 102
struct settings settings;
// stats
// file memcachedb.c line 101
struct stats stats;
// stats_lock
// file thread.c line 70
static union anonymous_47 stats_lock;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// threads
// file thread.c line 89
static struct anonymous_48 *threads;

// accept_new_conns
// file memcachedb.c line 1546
static void accept_new_conns(const _Bool do_accept)
{
  struct conn *next;
  signed int return_value_mt_is_listen_thread_1;
  return_value_mt_is_listen_thread_1=mt_is_listen_thread();
  if(!(return_value_mt_is_listen_thread_1 == 0))
  {
    next = listen_conn;
    for( ; !(next == ((struct conn *)NULL)); next = next->next)
      if(!(do_accept == (_Bool)0))
      {
        update_event(next, 0x02 | 0x10);
        signed int return_value_listen_2;
        return_value_listen_2=listen(next->sfd, 1024);
        if(!(return_value_listen_2 == 0))
          perror("listen");

      }

      else
      {
        update_event(next, 0);
        signed int return_value_listen_3;
        return_value_listen_3=listen(next->sfd, 0);
        if(!(return_value_listen_3 == 0))
          perror("listen");

      }
  }

}

// add_iov
// file memcachedb.c line 521
static signed int add_iov(struct conn *c, const void *buf, signed int len)
{
  struct msghdr *m;
  signed int leftover;
  _Bool limit_to_mtu;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_5;
  do
  {
    m = &c->msglist[(signed long int)(c->msgused - 1)];
    if(!(c->udp == (_Bool)0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = 1 == c->msgused ? (_Bool)1 : (_Bool)0;
    limit_to_mtu = tmp_if_expr_1;
    if(m->msg_iovlen == 1024ul)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(!(limit_to_mtu == (_Bool)0))
        tmp_if_expr_2 = c->msgbytes >= 1400 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      add_msghdr(c);
      m = &c->msglist[(signed long int)(c->msgused - 1)];
    }

    signed int return_value_ensure_iov_space_4;
    return_value_ensure_iov_space_4=ensure_iov_space(c);
    if(!(return_value_ensure_iov_space_4 == 0))
      return -1;

    if(!(limit_to_mtu == (_Bool)0))
      tmp_if_expr_5 = len + c->msgbytes > 1400 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      leftover = (len + c->msgbytes) - 1400;
      len = len - leftover;
    }

    else
      leftover = 0;
    m = &c->msglist[(signed long int)(c->msgused - 1)];
    (m->msg_iov + (signed long int)m->msg_iovlen)->iov_base = (void *)buf;
    (m->msg_iov + (signed long int)m->msg_iovlen)->iov_len = (unsigned long int)len;
    c->msgbytes = c->msgbytes + len;
    c->iovused = c->iovused + 1;
    m->msg_iovlen = m->msg_iovlen + 1ul;
    buf = (const void *)((char *)buf + (signed long int)len);
    len = leftover;
  }
  while(leftover >= 1);
  return 0;
}

// add_msghdr
// file memcachedb.c line 162
static signed int add_msghdr(struct conn *c)
{
  struct msghdr *msg;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(c->msgsize == c->msgused)
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)c->msglist, (unsigned long int)(c->msgsize * 2) * sizeof(struct msghdr) /*56ul*/ );
    msg = (struct msghdr *)return_value_realloc_1;
    if(msg == ((struct msghdr *)NULL))
      return -1;

    c->msglist = msg;
    c->msgsize = c->msgsize * 2;
  }

  msg = c->msglist + (signed long int)c->msgused;
  memset((void *)msg, 0, sizeof(struct msghdr) /*56ul*/ );
  msg->msg_iov = &c->iov[(signed long int)c->iovused];
  if(c->request_addr_size >= 1u)
  {
    msg->msg_name = (void *)&c->request_addr;
    msg->msg_namelen = c->request_addr_size;
  }

  c->msgbytes = 0;
  c->msgused = c->msgused + 1;
  if(!(c->udp == (_Bool)0))
  {
    signed int return_value_add_iov_2;
    return_value_add_iov_2=add_iov(c, (void *)0, 8);
    return return_value_add_iov_2;
  }

  return 0;
}

// bdb_chkpoint
// file memcachedb.h line 288
void bdb_chkpoint(void)
{
  signed int ret = 0;
  if(!(env == ((struct __db_env *)NULL)))
  {
    ret=env->txn_checkpoint(env, (unsigned int)0, (unsigned int)0, (unsigned int)0);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_1;
      return_value_db_strerror_1=db_strerror(ret);
      fprintf(stderr, "env->txn_checkpoint: %s\n", return_value_db_strerror_1);
    }

    else
      fprintf(stderr, "env->txn_checkpoint: OK\n");
  }

}

// bdb_chkpoint_thread
// file bdb.c line 340
static void * bdb_chkpoint_thread(void *arg)
{
  struct __db_env *dbenv;
  signed int ret;
  dbenv = (struct __db_env *)arg;
  if(settings.verbose >= 2)
  {
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    dbenv->errx(dbenv, "checkpoint thread created: %lu, every %d seconds", (unsigned long int)return_value_pthread_self_1, bdb_settings.chkpoint_val);
  }

  ret=dbenv->txn_checkpoint(dbenv, (unsigned int)0, (unsigned int)0, (unsigned int)0);
  if(!(ret == 0))
    dbenv->err(dbenv, ret, "checkpoint thread");

  dbenv->errx(dbenv, "checkpoint thread: a txn_checkpoint is done");
  sleep((unsigned int)bdb_settings.chkpoint_val);
  return (void *)0;
}

// bdb_db_close
// file memcachedb.h line 286
void bdb_db_close(void)
{
  signed int ret = 0;
  if(!(dbp == ((struct __db *)NULL)))
  {
    ret=dbp->close(dbp, (unsigned int)0);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_1;
      return_value_db_strerror_1=db_strerror(ret);
      fprintf(stderr, "dbp->close: %s\n", return_value_db_strerror_1);
    }

    else
    {
      dbp = (struct __db *)(void *)0;
      fprintf(stderr, "dbp->close: OK\n");
    }
  }

}

// bdb_db_open
// file memcachedb.h line 282
void bdb_db_open(void)
{
  signed int ret;
  signed int db_open = 0;
  char *return_value_db_strerror_3;
  if(db_open == 0)
  {
    if(bdb_settings.is_replicated == 1)
    {
      if(bdb_settings.rep_whoami == 1)
        bdb_settings.db_flags = (unsigned int)0x00000100;

      else
        if(bdb_settings.rep_whoami == 0)
          bdb_settings.db_flags = (unsigned int)(0x00000001 | 0x00000100);

    }

    bdb_db_close();
    ret=db_create(&dbp, env, (unsigned int)0);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_1;
      return_value_db_strerror_1=db_strerror(ret);
      fprintf(stderr, "db_create: %s\n", return_value_db_strerror_1);
      exit(1);
    }

    ret=dbp->set_pagesize(dbp, bdb_settings.page_size);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_2;
      return_value_db_strerror_2=db_strerror(ret);
      fprintf(stderr, "dbp->set_pagesize: %s\n", return_value_db_strerror_2);
      exit(1);
    }

    ret=dbp->open(dbp, (struct __db_txn *)(void *)0, bdb_settings.db_file, (const char *)(void *)0, bdb_settings.db_type, bdb_settings.db_flags, 0664);
    if(ret == 0)
    {
      db_open = 1;
      return_value_db_strerror_3=db_strerror(ret);
      fprintf(stderr, "db_open: %s\n", return_value_db_strerror_3);
      sleep((unsigned int)3);
    }

    char *return_value_db_strerror_4;
    return_value_db_strerror_4=db_strerror(ret);
    fprintf(stderr, "db_open: %s\n", return_value_db_strerror_4);
    exit(1);
  }

}

// bdb_dl_detect_thread
// file bdb.c line 377
static void * bdb_dl_detect_thread(void *arg)
{
  struct __db_env *dbenv;
  struct timeval t;
  dbenv = (struct __db_env *)arg;
  if(settings.verbose >= 2)
  {
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    dbenv->errx(dbenv, "deadlock detecting thread created: %lu, every %d millisecond", (unsigned long int)return_value_pthread_self_1, bdb_settings.dldetect_val);
  }

  if(daemon_quit == 0)
  {
    t.tv_sec = (signed long int)0;
    t.tv_usec = (signed long int)bdb_settings.dldetect_val;
    dbenv->lock_detect(dbenv, (unsigned int)0, (unsigned int)9, (signed int *)(void *)0);
    select(0, (struct anonymous_42 *)(void *)0, (struct anonymous_42 *)(void *)0, (struct anonymous_42 *)(void *)0, &t);
  }

  return (void *)0;
}

// bdb_env_close
// file memcachedb.h line 287
void bdb_env_close(void)
{
  signed int ret = 0;
  if(!(env == ((struct __db_env *)NULL)))
  {
    ret=env->close(env, (unsigned int)0);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_1;
      return_value_db_strerror_1=db_strerror(ret);
      fprintf(stderr, "env->close: %s\n", return_value_db_strerror_1);
    }

    else
    {
      env = (struct __db_env *)(void *)0;
      fprintf(stderr, "env->close: OK\n");
    }
  }

}

// bdb_env_init
// file memcachedb.h line 281
void bdb_env_init(void)
{
  signed int ret;
  ret=db_env_create(&env, (unsigned int)0);
  if(!(ret == 0))
  {
    char *return_value_db_strerror_1;
    return_value_db_strerror_1=db_strerror(ret);
    fprintf(stderr, "db_env_create: %s\n", return_value_db_strerror_1);
    exit(1);
  }

  env->set_errpfx(env, "memcachedb");
  env->set_errcall(env, bdb_err_callback);
  env->set_msgcall(env, bdb_msg_callback);
  if(settings.verbose >= 2)
  {
    ret=env->set_verbose(env, (unsigned int)0x00000008, 1);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_2;
      return_value_db_strerror_2=db_strerror(ret);
      fprintf(stderr, "env->set_verbose[DB_VERB_FILEOPS_ALL]: %s\n", return_value_db_strerror_2);
      exit(1);
    }

    ret=env->set_verbose(env, (unsigned int)0x00000002, 1);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_3;
      return_value_db_strerror_3=db_strerror(ret);
      fprintf(stderr, "env->set_verbose[DB_VERB_DEADLOCK]: %s\n", return_value_db_strerror_3);
      exit(1);
    }

    ret=env->set_verbose(env, (unsigned int)0x00000010, 1);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_4;
      return_value_db_strerror_4=db_strerror(ret);
      fprintf(stderr, "env->set_verbose[DB_VERB_RECOVERY]: %s\n", return_value_db_strerror_4);
      exit(1);
    }

  }

  env->set_cachesize(env, (unsigned int)0, bdb_settings.cache_size, 0);
  if(!(bdb_settings.txn_nosync == 0))
    env->set_flags(env, (unsigned int)0x00000001, 1);

  env->set_lk_max_lockers(env, (unsigned int)20000);
  env->set_lk_max_locks(env, (unsigned int)20000);
  env->set_lk_max_objects(env, (unsigned int)20000);
  env->set_tx_max(env, (unsigned int)10000);
  env->set_lg_bsize(env, bdb_settings.txn_lg_bsize);
  signed int return_value_access_6;
  return_value_access_6=access(bdb_settings.env_home, 0);
  if(!(return_value_access_6 == 0))
  {
    signed int return_value_mkdir_5;
    return_value_mkdir_5=mkdir(bdb_settings.env_home, (unsigned int)0750);
    if(!(return_value_mkdir_5 == 0))
    {
      fprintf(stderr, "mkdir env_home error:[%s]\n", bdb_settings.env_home);
      exit(1);
    }

  }

  if(!(bdb_settings.is_replicated == 0))
  {
    bdb_settings.env_flags = bdb_settings.env_flags | (unsigned int)0x00001000;
    if(settings.verbose >= 2)
    {
      ret=env->set_verbose(env, (unsigned int)0x00000040, 1);
      if(!(ret == 0))
      {
        char *return_value_db_strerror_7;
        return_value_db_strerror_7=db_strerror(ret);
        fprintf(stderr, "env->set_verbose[DB_VERB_REPLICATION]: %s\n", return_value_db_strerror_7);
        exit(1);
      }

    }

    env->set_event_notify(env, bdb_event_callback);
    env->repmgr_set_ack_policy(env, bdb_settings.rep_ack_policy);
    env->rep_set_timeout(env, 1, bdb_settings.rep_ack_timeout);
    env->rep_set_timeout(env, 2, bdb_settings.rep_chkpoint_delay);
    env->rep_set_timeout(env, 3, bdb_settings.rep_conn_retry);
    env->rep_set_timeout(env, 5, bdb_settings.rep_elect_timeout);
    env->rep_set_timeout(env, 4, bdb_settings.rep_elect_retry);
    env->rep_set_timeout(env, 7, bdb_settings.rep_heartbeat_monitor);
    env->rep_set_timeout(env, 8, bdb_settings.rep_heartbeat_send);
    env->rep_set_config(env, (unsigned int)0x00000010, bdb_settings.rep_bulk);
    env->rep_set_priority(env, bdb_settings.rep_priority);
    env->rep_set_request(env, bdb_settings.rep_req_min, bdb_settings.rep_req_max);
    env->rep_set_limit(env, bdb_settings.rep_limit_gbytes, bdb_settings.rep_limit_bytes);
    struct __db_site *dbSite;
    ret=env->repmgr_site(env, bdb_settings.rep_localhost, (unsigned int)bdb_settings.rep_localport, &dbSite, (unsigned int)0);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_8;
      return_value_db_strerror_8=db_strerror(ret);
      fprintf(stderr, "repmgr_set_local_site[%s:%d]: %s\n", bdb_settings.rep_localhost, bdb_settings.rep_localport, return_value_db_strerror_8);
      exit(1);
    }

    dbSite->set_config(dbSite, (unsigned int)0x00000008, (unsigned int)1);
    dbSite->close(dbSite);
    if(!(bdb_settings.rep_remotehost == ((char *)NULL)))
    {
      ret=env->repmgr_site(env, bdb_settings.rep_remotehost, (unsigned int)bdb_settings.rep_remoteport, &dbSite, (unsigned int)0);
      if(!(ret == 0))
      {
        char *return_value_db_strerror_9;
        return_value_db_strerror_9=db_strerror(ret);
        fprintf(stderr, "repmgr_add_remote_site[%s:%d]: %s\n", bdb_settings.rep_remotehost, bdb_settings.rep_remoteport, return_value_db_strerror_9);
        exit(1);
      }

      dbSite->get_eid(dbSite, (signed int *)(void *)0);
      dbSite->close(dbSite);
    }

    ret=env->rep_set_nsites(env, bdb_settings.rep_nsites);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_10;
      return_value_db_strerror_10=db_strerror(ret);
      fprintf(stderr, "rep_set_nsites: %s\n", return_value_db_strerror_10);
      exit(1);
    }

  }

  ret=env->open(env, bdb_settings.env_home, bdb_settings.env_flags, 0);
  if(!(ret == 0))
  {
    char *return_value_db_strerror_11;
    return_value_db_strerror_11=db_strerror(ret);
    fprintf(stderr, "db_env_open: %s\n", return_value_db_strerror_11);
    exit(1);
  }

  if(!(bdb_settings.is_replicated == 0))
  {
    ret=env->repmgr_start(env, 3, bdb_settings.rep_start_policy);
    if(!(ret == 0))
    {
      char *return_value_db_strerror_12;
      return_value_db_strerror_12=db_strerror(ret);
      fprintf(stderr, "env->repmgr_start: %s\n", return_value_db_strerror_12);
      exit(1);
    }

    if(bdb_settings.rep_start_policy == 1u || bdb_settings.rep_start_policy == 4u)
      sleep((unsigned int)5);

  }

}

// bdb_err_callback
// file bdb.c line 441
static void bdb_err_callback(const struct __db_env *dbenv, const char *errpfx, const char *msg)
{
  signed long int curr_time;
  curr_time=time((signed long int *)(void *)0);
  char time_str[32l];
  struct tm *return_value_localtime_1;
  return_value_localtime_1=localtime(&curr_time);
  strftime(time_str, (unsigned long int)32, "%c", return_value_localtime_1);
  fprintf(stderr, "[%s] [%s] \"%s\"\n", errpfx, (const void *)time_str, msg);
}

// bdb_event_callback
// file bdb.c line 396
static void bdb_event_callback(struct __db_env *env, unsigned int which, void *info)
{
  switch(which)
  {
    case (unsigned int)0:
      env->errx(env, "evnet: DB_EVENT_PANIC, we got panic, recovery should be run.");
    case (unsigned int)3:
      env->errx(env, "event: DB_EVENT_REP_CLIENT, I<%s:%d> am now a replication client.", bdb_settings.rep_localhost, bdb_settings.rep_localport);
    case (unsigned int)8:
      env->errx(env, "event: DB_EVENT_REP_ELECTED, I<%s:%d> has just won an election.", bdb_settings.rep_localhost, bdb_settings.rep_localport);
    case (unsigned int)13:
      env->errx(env, "event: DB_EVENT_REP_MASTER, I<%s:%d> am now a replication master.", bdb_settings.rep_localhost, bdb_settings.rep_localport);
    case (unsigned int)15:
    {
      bdb_settings.rep_master_eid = *((signed int *)info);
      env->errx(env, "event: DB_EVENT_REP_NEWMASTER, a new master<eid: %d> has been established, but not me<%s:%d>", bdb_settings.rep_master_eid, bdb_settings.rep_localhost, bdb_settings.rep_localport);
    }
    case (unsigned int)16:
      env->errx(env, "event: DB_EVENT_REP_PERM_FAILED, insufficient acks, the master will flush the txn log buffer");
    case (unsigned int)19:
    {
      if(bdb_settings.rep_whoami == 1)
        env->errx(env, "event: DB_EVENT_REP_STARTUPDONE, I has completed startup synchronization and is now processing live log records received from the master.");

      break;
    }
    case (unsigned int)21:
      env->errx(env, "event: DB_EVENT_WRITE_FAILED, I wrote to stable storage failed.");
    default:
      env->errx(env, "ignoring event %d", which);
  }
}

// bdb_memp_trickle_thread
// file bdb.c line 358
static void * bdb_memp_trickle_thread(void *arg)
{
  struct __db_env *dbenv;
  signed int ret;
  signed int nwrotep;
  dbenv = (struct __db_env *)arg;
  if(settings.verbose >= 2)
  {
    unsigned long int return_value_pthread_self_1;
    return_value_pthread_self_1=pthread_self();
    dbenv->errx(dbenv, "memp_trickle thread created: %lu, every %d seconds, %d%% pages should be clean.", (unsigned long int)return_value_pthread_self_1, bdb_settings.memp_trickle_val, bdb_settings.memp_trickle_percent);
  }

  ret=dbenv->memp_trickle(dbenv, bdb_settings.memp_trickle_percent, &nwrotep);
  if(!(ret == 0))
    dbenv->err(dbenv, ret, "memp_trickle thread");

  dbenv->errx(dbenv, "memp_trickle thread: writing %d dirty pages", nwrotep);
  sleep((unsigned int)bdb_settings.memp_trickle_val);
  return (void *)0;
}

// bdb_msg_callback
// file bdb.c line 448
static void bdb_msg_callback(const struct __db_env *dbenv, const char *msg)
{
  signed long int curr_time;
  curr_time=time((signed long int *)(void *)0);
  char time_str[32l];
  struct tm *return_value_localtime_1;
  return_value_localtime_1=localtime(&curr_time);
  strftime(time_str, (unsigned long int)32, "%c", return_value_localtime_1);
  fprintf(stderr, "[%s] [%s] \"%s\"\n", (const void *)"memcachedb", (const void *)time_str, msg);
}

// bdb_settings_init
// file memcachedb.h line 280
void bdb_settings_init(void)
{
  bdb_settings.db_file = "data.db";
  bdb_settings.env_home = "/data1/memcachedb";
  bdb_settings.cache_size = (unsigned int)(64 * 1024 * 1024);
  bdb_settings.txn_lg_bsize = (unsigned int)(32 * 1024);
  bdb_settings.page_size = (unsigned int)4096;
  bdb_settings.db_type = (enum anonymous_12)DB_BTREE;
  bdb_settings.txn_nosync = 0;
  bdb_settings.dldetect_val = 100 * 1000;
  bdb_settings.chkpoint_val = 60 * 5;
  bdb_settings.memp_trickle_val = 30;
  bdb_settings.memp_trickle_percent = 60;
  bdb_settings.db_flags = (unsigned int)(0x00000001 | 0x00000100);
  bdb_settings.env_flags = (unsigned int)(0x00000001 | 0x00000100 | 0x00000020 | 0x00000400 | 0x00000200 | 0x00002000 | 0x00000002);
  bdb_settings.is_replicated = 0;
  bdb_settings.rep_localhost = "127.0.0.1";
  bdb_settings.rep_localport = 31211;
  bdb_settings.rep_remotehost = (char *)(void *)0;
  bdb_settings.rep_remoteport = 0;
  bdb_settings.rep_whoami = 2;
  bdb_settings.rep_master_eid = -2;
  bdb_settings.rep_start_policy = (unsigned int)0x00000004;
  bdb_settings.rep_nsites = (unsigned int)2;
  bdb_settings.rep_ack_policy = 6;
  bdb_settings.rep_ack_timeout = (unsigned int)(50 * 1000);
  bdb_settings.rep_chkpoint_delay = (unsigned int)0;
  bdb_settings.rep_conn_retry = (unsigned int)(30 * 1000 * 1000);
  bdb_settings.rep_elect_timeout = (unsigned int)(5 * 1000 * 1000);
  bdb_settings.rep_elect_retry = (unsigned int)(10 * 1000 * 1000);
  bdb_settings.rep_heartbeat_monitor = (unsigned int)(80 * 1000 * 1000);
  bdb_settings.rep_heartbeat_send = (unsigned int)(60 * 1000 * 1000);
  bdb_settings.rep_lease_timeout = (unsigned int)0;
  bdb_settings.rep_bulk = 1;
  bdb_settings.rep_lease = 0;
  bdb_settings.rep_priority = (unsigned int)100;
  bdb_settings.rep_req_min = (unsigned int)40000;
  bdb_settings.rep_req_max = (unsigned int)1280000;
  bdb_settings.rep_fast_clock = (unsigned int)102;
  bdb_settings.rep_slow_clock = (unsigned int)100;
  bdb_settings.rep_limit_gbytes = (unsigned int)0;
  bdb_settings.rep_limit_bytes = (unsigned int)(10 * 1024 * 1024);
}

// build_udp_headers
// file memcachedb.c line 574
static signed int build_udp_headers(struct conn *c)
{
  signed int i;
  unsigned char *hdr;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(!(c->hdrsize >= c->msgused))
  {
    void *new_hdrbuf;
    if(!(c->hdrbuf == ((unsigned char *)NULL)))
      new_hdrbuf=realloc((void *)c->hdrbuf, (unsigned long int)(c->msgused * 2 * 8));

    else
      new_hdrbuf=malloc((unsigned long int)(c->msgused * 2 * 8));
    if(new_hdrbuf == NULL)
      return -1;

    c->hdrbuf = (unsigned char *)new_hdrbuf;
    c->hdrsize = c->msgused * 2;
  }

  hdr = c->hdrbuf;
  i = 0;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  unsigned char *tmp_post_8;
  for( ; !(i >= c->msgused); i = i + 1)
  {
    ((c->msglist + (signed long int)i)->msg_iov + (signed long int)0)->iov_base = (void *)hdr;
    ((c->msglist + (signed long int)i)->msg_iov + (signed long int)0)->iov_len = (unsigned long int)8;
    tmp_post_1 = hdr;
    hdr = hdr + 1l;
    *tmp_post_1 = (unsigned char)(c->request_id / 256);
    tmp_post_2 = hdr;
    hdr = hdr + 1l;
    *tmp_post_2 = (unsigned char)(c->request_id % 256);
    tmp_post_3 = hdr;
    hdr = hdr + 1l;
    *tmp_post_3 = (unsigned char)(i / 256);
    tmp_post_4 = hdr;
    hdr = hdr + 1l;
    *tmp_post_4 = (unsigned char)(i % 256);
    tmp_post_5 = hdr;
    hdr = hdr + 1l;
    *tmp_post_5 = (unsigned char)(c->msgused / 256);
    tmp_post_6 = hdr;
    hdr = hdr + 1l;
    *tmp_post_6 = (unsigned char)(c->msgused % 256);
    tmp_post_7 = hdr;
    hdr = hdr + 1l;
    *tmp_post_7 = (unsigned char)0;
    tmp_post_8 = hdr;
    hdr = hdr + 1l;
    *tmp_post_8 = (unsigned char)0;
    /* assertion (void *) hdr == (void *)c->msglist[i].msg_iov[0].iov_base + 8 */
    assert((void *)hdr == (void *)((c->msglist + (signed long int)i)->msg_iov + (signed long int)0)->iov_base + (signed long int)8);
  }
  return 0;
}

// complete_nread
// file memcachedb.c line 641
static void complete_nread(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  struct _stritem *it = (struct _stritem *)c->item;
  signed int comm = c->item_comm;
  signed int ret;
  mt_stats_lock();
  stats.set_cmds = stats.set_cmds + 1ul;
  mt_stats_unlock();
  signed int return_value_strncmp_1;
  return_value_strncmp_1=strncmp(((char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1 + (signed long int)it->nsuffix + (signed long int)it->nbytes) - (signed long int)2, "\r\n", (unsigned long int)2);
  if(!(return_value_strncmp_1 == 0))
    out_string(c, "CLIENT_ERROR bad data chunk");

  else
  {
    ret=mt_store_item(it, comm);
    if(ret == 1)
      out_string(c, "STORED");

    else
      if(ret == 2)
        out_string(c, "EXISTS");

      else
        if(ret == 3)
          out_string(c, "NOT_FOUND");

        else
          out_string(c, "NOT_STORED");
  }
  item_free((struct _stritem *)c->item);
  c->item = NULL;
}

// conn_cleanup
// file memcachedb.c line 343
static void conn_cleanup(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(!(c->item == NULL))
  {
    item_free((struct _stritem *)c->item);
    c->item = NULL;
  }

  if(!(c->ileft == 0))
    for( ; c->ileft >= 1; c->icurr = c->icurr + 1l)
    {
      item_free(*c->icurr);
      c->ileft = c->ileft - 1;
    }

  if(!(c->write_and_free == NULL))
  {
    free(c->write_and_free);
    c->write_and_free = NULL;
  }

}

// conn_close
// file memcachedb.c line 384
static void conn_close(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  event_del(&c->event);
  if(settings.verbose >= 2)
    fprintf(stderr, "<%d connection closed.\n", c->sfd);

  close(c->sfd);
  accept_new_conns((const _Bool)1);
  conn_cleanup(c);
  _Bool tmp_if_expr_2;
  _Bool return_value_mt_conn_add_to_freelist_1;
  if(c->rsize >= 8193)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_mt_conn_add_to_freelist_1=mt_conn_add_to_freelist(c);
    tmp_if_expr_2 = return_value_mt_conn_add_to_freelist_1 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    conn_free(c);

  mt_stats_lock();
  stats.curr_conns = stats.curr_conns - 1u;
  mt_stats_unlock();
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// conn_free
// file memcachedb.c line 366
static void conn_free(struct conn *c)
{
  if(!(c == ((struct conn *)NULL)))
  {
    if(!(c->hdrbuf == ((unsigned char *)NULL)))
      free((void *)c->hdrbuf);

    if(!(c->msglist == ((struct msghdr *)NULL)))
      free((void *)c->msglist);

    if(!(c->rbuf == ((char *)NULL)))
      free((void *)c->rbuf);

    if(!(c->wbuf == ((char *)NULL)))
      free((void *)c->wbuf);

    if(!(c->ilist == ((struct _stritem **)NULL)))
      free((void *)c->ilist);

    if(!(c->iov == ((struct iovec *)NULL)))
      free((void *)c->iov);

    free((void *)c);
  }

}

// conn_init
// file memcachedb.c line 210
static void conn_init(void)
{
  freetotal = 200;
  freecurr = 0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct conn *) /*8ul*/  * (unsigned long int)freetotal);
  freeconns = (struct conn **)return_value_malloc_1;
  if(freeconns == ((struct conn **)NULL))
    fprintf(stderr, "malloc()\n");

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// conn_new
// file memcachedb.c line 256
struct conn * conn_new(const signed int sfd, const signed int init_state, const signed int event_flags, const signed int read_buffer_size, const _Bool is_udp, struct event_base *base)
{
  struct conn *c;
  c=mt_conn_from_freelist();
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  if(c == ((struct conn *)NULL))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct conn) /*368ul*/ );
    c = (struct conn *)return_value_calloc_1;
    if(c == ((struct conn *)NULL))
    {
      fprintf(stderr, "calloc()\n");
      return (struct conn *)(void *)0;
    }

    c->wbuf = ((char *)NULL);
    c->rbuf = c->wbuf;
    c->ilist = ((struct _stritem **)NULL);
    c->iov = ((struct iovec *)NULL);
    c->msglist = ((struct msghdr *)NULL);
    c->hdrbuf = ((unsigned char *)NULL);
    c->rsize = read_buffer_size;
    c->wsize = 2048;
    c->isize = 200;
    c->iovsize = 400;
    c->msgsize = 10;
    c->hdrsize = 0;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)c->rsize);
    c->rbuf = (char *)return_value_malloc_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)c->wsize);
    c->wbuf = (char *)return_value_malloc_3;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(struct _stritem *) /*8ul*/  * (unsigned long int)c->isize);
    c->ilist = (struct _stritem **)return_value_malloc_4;
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(struct iovec) /*16ul*/  * (unsigned long int)c->iovsize);
    c->iov = (struct iovec *)return_value_malloc_5;
    void *return_value_malloc_6;
    return_value_malloc_6=malloc(sizeof(struct msghdr) /*56ul*/  * (unsigned long int)c->msgsize);
    c->msglist = (struct msghdr *)return_value_malloc_6;
    if(c->rbuf == ((char *)NULL))
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = c->wbuf == ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = c->ilist == ((struct _stritem **)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = c->iov == ((struct iovec *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = (_Bool)1;

    else
      tmp_if_expr_10 = c->msglist == ((struct msghdr *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_10)
    {
      conn_free(c);
      fprintf(stderr, "malloc()\n");
      return (struct conn *)(void *)0;
    }

    mt_stats_lock();
    stats.conn_structs = stats.conn_structs + 1u;
    mt_stats_unlock();
  }

  if(settings.verbose >= 2)
  {
    if(init_state == 0)
      fprintf(stderr, "<%d server listening\n", sfd);

    else
      if(!(is_udp == (_Bool)0))
        fprintf(stderr, "<%d server listening (udp)\n", sfd);

      else
        fprintf(stderr, "<%d new client connection\n", sfd);
  }

  c->sfd = sfd;
  c->udp = is_udp;
  c->state = init_state;
  c->rlbytes = 0;
  c->wbytes = 0;
  c->rbytes = c->wbytes;
  c->wcurr = c->wbuf;
  c->rcurr = c->rbuf;
  c->ritem = ((char *)NULL);
  c->icurr = c->ilist;
  c->ileft = 0;
  c->iovused = 0;
  c->msgcurr = 0;
  c->msgused = 0;
  c->write_and_go = 1;
  c->write_and_free = NULL;
  c->item = NULL;
  event_set(&c->event, sfd, (signed short int)event_flags, event_handler, (void *)c);
  event_base_set(base, &c->event);
  c->ev_flags = (signed short int)event_flags;
  signed int return_value_event_add_12;
  return_value_event_add_12=event_add(&c->event, ((struct timeval *)NULL));
  if(return_value_event_add_12 == -1)
  {
    _Bool return_value_mt_conn_add_to_freelist_11;
    return_value_mt_conn_add_to_freelist_11=mt_conn_add_to_freelist(c);
    if(!(return_value_mt_conn_add_to_freelist_11 == (_Bool)0))
      conn_free(c);

    perror("event_add");
    return (struct conn *)(void *)0;
  }

  mt_stats_lock();
  stats.curr_conns = stats.curr_conns + 1u;
  stats.total_conns = stats.total_conns + 1u;
  mt_stats_unlock();
  return c;
}

// conn_set_state
// file memcachedb.c line 473
static void conn_set_state(struct conn *c, signed int state)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(!(state == c->state))
  {
    if(state == 1)
      conn_shrink(c);

    c->state = state;
  }

}

// conn_shrink
// file memcachedb.c line 418
static void conn_shrink(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(c->udp == (_Bool)0)
  {
    if(c->rsize >= 8193)
    {
      if(!(c->rbytes >= 2048))
      {
        char *newbuf;
        if(!(c->rcurr == c->rbuf))
          memmove((void *)c->rbuf, (const void *)c->rcurr, (unsigned long int)c->rbytes);

        void *return_value_realloc_1;
        return_value_realloc_1=realloc((void *)c->rbuf, (unsigned long int)2048);
        newbuf = (char *)return_value_realloc_1;
        if(!(newbuf == ((char *)NULL)))
        {
          c->rbuf = newbuf;
          c->rsize = 2048;
        }

        c->rcurr = c->rbuf;
      }

    }

    if(c->isize >= 401)
    {
      struct _stritem **conn_shrink__1__2__newbuf;
      void *return_value_realloc_2;
      return_value_realloc_2=realloc((void *)c->ilist, (unsigned long int)200 * sizeof(struct _stritem *) /*8ul*/ );
      conn_shrink__1__2__newbuf = (struct _stritem **)return_value_realloc_2;
      if(!(conn_shrink__1__2__newbuf == ((struct _stritem **)NULL)))
      {
        c->ilist = conn_shrink__1__2__newbuf;
        c->isize = 200;
      }

    }

    if(c->msgsize >= 101)
    {
      struct msghdr *conn_shrink__1__3__newbuf;
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)c->msglist, (unsigned long int)10 * sizeof(struct msghdr) /*56ul*/ );
      conn_shrink__1__3__newbuf = (struct msghdr *)return_value_realloc_3;
      if(!(conn_shrink__1__3__newbuf == ((struct msghdr *)NULL)))
      {
        c->msglist = conn_shrink__1__3__newbuf;
        c->msgsize = 10;
      }

    }

    if(c->iovsize >= 601)
    {
      struct iovec *conn_shrink__1__4__newbuf;
      void *return_value_realloc_4;
      return_value_realloc_4=realloc((void *)c->iov, (unsigned long int)400 * sizeof(struct iovec) /*16ul*/ );
      conn_shrink__1__4__newbuf = (struct iovec *)return_value_realloc_4;
      if(!(conn_shrink__1__4__newbuf == ((struct iovec *)NULL)))
      {
        c->iov = conn_shrink__1__4__newbuf;
        c->iovsize = 400;
      }

    }

  }

}

// cq_init
// file thread.c line 104
static void cq_init(struct conn_queue *cq)
{
  pthread_mutex_init(&cq->lock, (const union anonymous_13 *)(void *)0);
  pthread_cond_init(&cq->cond, (const union anonymous_13 *)(void *)0);
  cq->head = (struct conn_queue_item *)(void *)0;
  cq->tail = (struct conn_queue_item *)(void *)0;
}

// cq_peek
// file thread.c line 134
static struct conn_queue_item * cq_peek(struct conn_queue *cq)
{
  struct conn_queue_item *item;
  pthread_mutex_lock(&cq->lock);
  item = cq->head;
  if(!(item == ((struct conn_queue_item *)NULL)))
  {
    cq->head = item->next;
    if(cq->head == ((struct conn_queue_item *)NULL))
      cq->tail = (struct conn_queue_item *)(void *)0;

  }

  pthread_mutex_unlock(&cq->lock);
  return item;
}

// cq_push
// file thread.c line 152
static void cq_push(struct conn_queue *cq, struct conn_queue_item *item)
{
  item->next = (struct conn_queue_item *)(void *)0;
  pthread_mutex_lock(&cq->lock);
  if(cq->tail == ((struct conn_queue_item *)NULL))
    cq->head = item;

  else
    cq->tail->next = item;
  cq->tail = item;
  pthread_cond_signal(&cq->cond);
  pthread_mutex_unlock(&cq->lock);
}

// cqi_free
// file thread.c line 206
static void cqi_free(struct conn_queue_item *item)
{
  pthread_mutex_lock(&cqi_freelist_lock);
  item->next = cqi_freelist;
  cqi_freelist = item;
  pthread_mutex_unlock(&cqi_freelist_lock);
}

// cqi_new
// file thread.c line 168
static struct conn_queue_item * cqi_new()
{
  struct conn_queue_item *item = (struct conn_queue_item *)(void *)0;
  pthread_mutex_lock(&cqi_freelist_lock);
  if(!(cqi_freelist == ((struct conn_queue_item *)NULL)))
  {
    item = cqi_freelist;
    cqi_freelist = item->next;
  }

  pthread_mutex_unlock(&cqi_freelist_lock);
  if(item == ((struct conn_queue_item *)NULL))
  {
    signed int i;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct conn_queue_item) /*32ul*/  * (unsigned long int)64);
    item = (struct conn_queue_item *)return_value_malloc_1;
    if(item == ((struct conn_queue_item *)NULL))
      return (struct conn_queue_item *)(void *)0;

    i = 2;
    for( ; !(i >= 64); i = i + 1)
      (item + (signed long int)(i - 1))->next = &item[(signed long int)i];
    pthread_mutex_lock(&cqi_freelist_lock);
    (item + (signed long int)(64 - 1))->next = cqi_freelist;
    cqi_freelist = &item[(signed long int)1];
    pthread_mutex_unlock(&cqi_freelist_lock);
  }

  return item;
}

// create_worker
// file thread.c line 217
static void create_worker(void * (*func)(void *), void *arg)
{
  unsigned long int thread;
  union pthread_attr_t attr;
  signed int ret;
  pthread_attr_init(&attr);
  ret=pthread_create(&thread, &attr, func, arg);
  if(!(ret == 0))
  {
    char *return_value_strerror_1;
    return_value_strerror_1=strerror(ret);
    fprintf(stderr, "Can't create thread: %s\n", return_value_strerror_1);
    exit(1);
  }

}

// dispatch_conn_new
// file memcachedb.h line 334
void dispatch_conn_new(signed int sfd, signed int init_state, signed int event_flags, signed int read_buffer_size, signed int is_udp)
{
  struct conn_queue_item *item;
  item=cqi_new();
  signed int thread = (last_thread + 1) % settings.num_threads;
  last_thread = thread;
  item->sfd = sfd;
  item->init_state = init_state;
  item->event_flags = event_flags;
  item->read_buffer_size = read_buffer_size;
  item->is_udp = is_udp;
  cq_push(&(threads + (signed long int)thread)->new_conn_queue, item);
  signed long int return_value_write_1;
  return_value_write_1=write((threads + (signed long int)thread)->notify_send_fd, (const void *)"", (unsigned long int)1);
  if(!(return_value_write_1 == 1l))
    perror("Writing to thread notify pipe");

}

// do_add_delta
// file memcachedb.c line 1109
char * do_add_delta(const _Bool incr, const signed long int delta, char *buf, char *key, unsigned long int nkey)
{
  char *ptr;
  signed long int value;
  signed int vlen;
  signed int flags;
  signed int ret;
  struct _stritem *old_it = (struct _stritem *)(void *)0;
  struct _stritem *new_it = (struct _stritem *)(void *)0;
  old_it=item_get(key, nkey);
  if(old_it == ((struct _stritem *)NULL))
    return "NOT_FOUND";

  else
  {
    ptr = (char *)&old_it->end[(signed long int)0] + (signed long int)old_it->nkey + (signed long int)1 + (signed long int)old_it->nsuffix;
    for( ; !((signed int)*ptr == 0); ptr = ptr + 1l)
    {
      if((signed int)*ptr >= 48)
        break;

      if(!((signed int)*ptr >= 58))
        break;

    }
    unsigned long long int return_value_strtoull_1;
    return_value_strtoull_1=strtoull(ptr, (char ** restrict )(void *)0, 10);
    value = (signed long int)return_value_strtoull_1;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(*return_value___errno_location_2 == 34)
      return "CLIENT_ERROR cannot increment or decrement non-numeric value";

    else
    {
      if(!(incr == (_Bool)0))
        value = value + delta;

      else
        if(delta >= value)
          value = (signed long int)0;

        else
          value = value - delta;
      vlen=sprintf(buf, "%llu", value);
      signed long int return_value_strtol_3;
      return_value_strtol_3=strtol((char *)&old_it->end[(signed long int)0] + (signed long int)old_it->nkey + (signed long int)1, (char **)(void *)0, 10);
      flags = (signed int)return_value_strtol_3;
      new_it=item_alloc1(key, nkey, flags, vlen + 2);
      if(new_it == ((struct _stritem *)NULL))
      {
        if(!(old_it == ((struct _stritem *)NULL)))
          item_free(old_it);

        return "SERVER_ERROR out of memory processing arithmetic";
      }

      else
      {
        memcpy((void *)((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix), (const void *)buf, (unsigned long int)vlen);
        memcpy((void *)((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix + (signed long int)vlen), (const void *)"\r\n", (unsigned long int)2);
        ret=item_put(key, nkey, new_it);
        if(!(old_it == ((struct _stritem *)NULL)))
          item_free(old_it);

        if(!(old_it == ((struct _stritem *)NULL)))
          item_free(new_it);

        if(!(ret == 0))
          return "SERVER_ERROR while put a item";

        else
          return buf;
      }
    }
  }
}

// do_conn_add_to_freelist
// file memcachedb.c line 239
_Bool do_conn_add_to_freelist(struct conn *c)
{
  signed int tmp_post_1;
  signed int tmp_post_3;
  if(!(freecurr >= freetotal))
  {
    tmp_post_1 = freecurr;
    freecurr = freecurr + 1;
    freeconns[(signed long int)tmp_post_1] = c;
    return (_Bool)0;
  }

  else
  {
    struct conn **new_freeconns;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)freeconns, sizeof(struct conn *) /*8ul*/  * (unsigned long int)freetotal * (unsigned long int)2);
    new_freeconns = (struct conn **)return_value_realloc_2;
    if(!(new_freeconns == ((struct conn **)NULL)))
    {
      freetotal = freetotal * 2;
      freeconns = new_freeconns;
      tmp_post_3 = freecurr;
      freecurr = freecurr + 1;
      freeconns[(signed long int)tmp_post_3] = c;
      return (_Bool)0;
    }

  }
  return (_Bool)1;
}

// do_conn_from_freelist
// file memcachedb.c line 223
struct conn * do_conn_from_freelist()
{
  struct conn *c;
  if(freecurr >= 1)
  {
    freecurr = freecurr - 1;
    c = freeconns[(signed long int)freecurr];
  }

  else
    c = (struct conn *)(void *)0;
  return c;
}

// do_item_add_to_freelist
// file item.c line 76
signed int do_item_add_to_freelist(struct _stritem *it)
{
  signed int tmp_post_1;
  signed int tmp_post_3;
  if(!(freeitemcurr >= freeitemtotal))
  {
    tmp_post_1 = freeitemcurr;
    freeitemcurr = freeitemcurr + 1;
    freeitem[(signed long int)tmp_post_1] = it;
    return 0;
  }

  else
  {
    if(freeitemtotal >= 4000)
      return 1;

    struct _stritem **new_freeitem;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)freeitem, sizeof(struct _stritem *) /*8ul*/  * (unsigned long int)freeitemtotal * (unsigned long int)2);
    new_freeitem = (struct _stritem **)return_value_realloc_2;
    if(!(new_freeitem == ((struct _stritem **)NULL)))
    {
      freeitemtotal = freeitemtotal * 2;
      freeitem = new_freeitem;
      tmp_post_3 = freeitemcurr;
      freeitemcurr = freeitemcurr + 1;
      freeitem[(signed long int)tmp_post_3] = it;
      return 0;
    }

  }
  return 1;
}

// do_item_from_freelist
// file item.c line 55
struct _stritem * do_item_from_freelist(void)
{
  struct _stritem *s;
  if(freeitemcurr >= 1)
  {
    freeitemcurr = freeitemcurr - 1;
    s = freeitem[(signed long int)freeitemcurr];
  }

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(settings.item_buf_size);
    s = (struct _stritem *)return_value_malloc_1;
    if(!(s == ((struct _stritem *)NULL)))
      memset((void *)s, 0, settings.item_buf_size);

  }
  return s;
}

// do_store_item
// file memcachedb.c line 676
signed int do_store_item(struct _stritem *it, signed int comm)
{
  char *key = (char *)&it->end[(signed long int)0];
  signed int ret;
  struct _stritem *old_it = (struct _stritem *)(void *)0;
  struct _stritem *new_it = (struct _stritem *)(void *)0;
  signed int stored = 0;
  signed int flags;
  if(comm == 1 || comm == 3)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(key);
    ret=item_exists(key, return_value_strlen_1);
    if(ret == 0 && comm == 3 || ret == 1 && comm == 1)
      return 0;

  }

  else
    if(comm == 4 || comm == 5)
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(key);
      old_it=item_get(key, return_value_strlen_2);
      if(old_it == ((struct _stritem *)NULL))
        return 0;

      signed long int return_value_strtol_3;
      return_value_strtol_3=strtol((char *)&old_it->end[(signed long int)0] + (signed long int)old_it->nkey + (signed long int)1, (char **)(void *)0, 10);
      flags = (signed int)return_value_strtol_3;
      new_it=item_alloc1(key, (const unsigned long int)it->nkey, flags, (it->nbytes + old_it->nbytes) - 2);
      if(new_it == ((struct _stritem *)NULL))
      {
        if(!(old_it == ((struct _stritem *)NULL)))
          item_free(old_it);

        return 0;
      }

      if(comm == 4)
      {
        memcpy((void *)((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix), (const void *)((char *)&old_it->end[(signed long int)0] + (signed long int)old_it->nkey + (signed long int)1 + (signed long int)old_it->nsuffix), (unsigned long int)old_it->nbytes);
        memcpy((void *)(((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix + (signed long int)old_it->nbytes) - (signed long int)2), (const void *)((char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1 + (signed long int)it->nsuffix), (unsigned long int)it->nbytes);
      }

      else
      {
        memcpy((void *)((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix), (const void *)((char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1 + (signed long int)it->nsuffix), (unsigned long int)it->nbytes);
        memcpy((void *)(((char *)&new_it->end[(signed long int)0] + (signed long int)new_it->nkey + (signed long int)1 + (signed long int)new_it->nsuffix + (signed long int)it->nbytes) - (signed long int)2), (const void *)((char *)&old_it->end[(signed long int)0] + (signed long int)old_it->nkey + (signed long int)1 + (signed long int)old_it->nsuffix), (unsigned long int)old_it->nbytes);
      }
      it = new_it;
    }

  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(key);
  ret=item_put(key, return_value_strlen_4, it);
  if(!(old_it == ((struct _stritem *)NULL)))
    item_free(old_it);

  if(!(new_it == ((struct _stritem *)NULL)))
    item_free(new_it);

  if(ret == 0)
    return 1;

  else
    return 0;
}

// drive_machine
// file memcachedb.c line 1636
static void drive_machine(struct conn *c)
{
  _Bool stop = (_Bool)0;
  signed int sfd;
  signed int flags = 1;
  unsigned int addrlen;
  struct sockaddr_storage addr;
  signed int res;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_6;
  signed int return_value_fcntl_5;
  signed int return_value_try_read_command_7;
  signed int tmp_if_expr_10;
  signed int return_value_try_read_udp_8;
  signed int return_value_try_read_network_9;
  _Bool return_value_update_event_11;
  signed int tmp_if_expr_12;
  signed long int return_value_read_13;
  signed int *return_value___errno_location_15;
  _Bool tmp_if_expr_17;
  signed int *return_value___errno_location_16;
  signed int tmp_if_expr_18;
  signed int tmp_if_expr_19;
  signed long int return_value_read_20;
  signed int *return_value___errno_location_22;
  _Bool tmp_if_expr_24;
  signed int *return_value___errno_location_23;
  _Bool tmp_if_expr_30;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_28;
  _Bool tmp_if_expr_27;
  signed int return_value_build_udp_headers_26;
  signed int return_value_transmit_31;
  while(stop == (_Bool)0)
    switch(c->state)
    {
      case 0:
      {
        addrlen = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
        sfd=accept(c->sfd, (struct sockaddr *)&addr, &addrlen);
        if(sfd == -1)
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          if(*return_value___errno_location_2 == 11)
            tmp_if_expr_4 = (_Bool)1;

          else
          {
            return_value___errno_location_3=__errno_location();
            tmp_if_expr_4 = *return_value___errno_location_3 == 11 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_4)
            stop = (_Bool)1;

          else
          {
            return_value___errno_location_1=__errno_location();
            if(*return_value___errno_location_1 == 24)
            {
              if(settings.verbose >= 1)
                fprintf(stderr, "Too many open connections\n");

              accept_new_conns((const _Bool)0);
              stop = (_Bool)1;
            }

            else
            {
              perror("accept()");
              stop = (_Bool)1;
            }
          }
          break;
        }

        flags=fcntl(sfd, 3, 0);
        if(!(flags >= 0))
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_fcntl_5=fcntl(sfd, 4, flags | 04000);
          tmp_if_expr_6 = return_value_fcntl_5 < 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
        {
          perror("setting O_NONBLOCK");
          close(sfd);
          break;
        }

        dispatch_conn_new(sfd, 1, 0x02 | 0x10, 2048, 0);
        break;
      }
      case 1:
      {
        return_value_try_read_command_7=try_read_command(c);
        if(!(return_value_try_read_command_7 == 0))
          break;

        if(!(c->udp == (_Bool)0))
        {
          return_value_try_read_udp_8=try_read_udp(c);
          tmp_if_expr_10 = return_value_try_read_udp_8;
        }

        else
        {
          return_value_try_read_network_9=try_read_network(c);
          tmp_if_expr_10 = return_value_try_read_network_9;
        }
        if(!(tmp_if_expr_10 == 0))
          break;

        return_value_update_event_11=update_event(c, 0x02 | 0x10);
        if(return_value_update_event_11 == (_Bool)0)
        {
          if(settings.verbose >= 1)
            fprintf(stderr, "Couldn't update event\n");

          conn_set_state(c, 5);
          break;
        }

        stop = (_Bool)1;
        break;
      }
      case 3:
      {
        if(c->rlbytes == 0)
        {
          complete_nread(c);
          break;
        }

        if(c->rbytes >= 1)
        {
          signed int tocopy;
          if(!(c->rlbytes >= c->rbytes))
            tmp_if_expr_12 = c->rlbytes;

          else
            tmp_if_expr_12 = c->rbytes;
          tocopy = tmp_if_expr_12;
          memcpy((void *)c->ritem, (const void *)c->rcurr, (unsigned long int)tocopy);
          c->ritem = c->ritem + (signed long int)tocopy;
          c->rlbytes = c->rlbytes - tocopy;
          c->rcurr = c->rcurr + (signed long int)tocopy;
          c->rbytes = c->rbytes - tocopy;
          break;
        }

        return_value_read_13=read(c->sfd, (void *)c->ritem, (unsigned long int)c->rlbytes);
        res = (signed int)return_value_read_13;
        if(res >= 1)
        {
          mt_stats_lock();
          stats.bytes_read = stats.bytes_read + (unsigned long int)res;
          mt_stats_unlock();
          c->ritem = c->ritem + (signed long int)res;
          c->rlbytes = c->rlbytes - res;
          break;
        }

        if(res == 0)
        {
          conn_set_state(c, 5);
          break;
        }

        if(res == -1)
        {
          return_value___errno_location_15=__errno_location();
          if(*return_value___errno_location_15 == 11)
            tmp_if_expr_17 = (_Bool)1;

          else
          {
            return_value___errno_location_16=__errno_location();
            tmp_if_expr_17 = *return_value___errno_location_16 == 11 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_17)
          {
            _Bool return_value_update_event_14;
            return_value_update_event_14=update_event(c, 0x02 | 0x10);
            if(return_value_update_event_14 == (_Bool)0)
            {
              if(settings.verbose >= 1)
                fprintf(stderr, "Couldn't update event\n");

              conn_set_state(c, 5);
              break;
            }

            stop = (_Bool)1;
            break;
          }

        }

        if(settings.verbose >= 1)
          fprintf(stderr, "Failed to read, and not due to blocking\n");

        conn_set_state(c, 5);
        break;
      }
      case 4:
      {
        if(c->sbytes == 0)
        {
          conn_set_state(c, 1);
          break;
        }

        if(c->rbytes >= 1)
        {
          signed int drive_machine__1__1__1__12__tocopy;
          if(!(c->sbytes >= c->rbytes))
            tmp_if_expr_18 = c->sbytes;

          else
            tmp_if_expr_18 = c->rbytes;
          drive_machine__1__1__1__12__tocopy = tmp_if_expr_18;
          c->sbytes = c->sbytes - drive_machine__1__1__1__12__tocopy;
          c->rcurr = c->rcurr + (signed long int)drive_machine__1__1__1__12__tocopy;
          c->rbytes = c->rbytes - drive_machine__1__1__1__12__tocopy;
          break;
        }

        if(!(c->sbytes >= c->rsize))
          tmp_if_expr_19 = c->sbytes;

        else
          tmp_if_expr_19 = c->rsize;
        return_value_read_20=read(c->sfd, (void *)c->rbuf, (unsigned long int)tmp_if_expr_19);
        res = (signed int)return_value_read_20;
        if(res >= 1)
        {
          mt_stats_lock();
          stats.bytes_read = stats.bytes_read + (unsigned long int)res;
          mt_stats_unlock();
          c->sbytes = c->sbytes - res;
          break;
        }

        if(res == 0)
        {
          conn_set_state(c, 5);
          break;
        }

        if(res == -1)
        {
          return_value___errno_location_22=__errno_location();
          if(*return_value___errno_location_22 == 11)
            tmp_if_expr_24 = (_Bool)1;

          else
          {
            return_value___errno_location_23=__errno_location();
            tmp_if_expr_24 = *return_value___errno_location_23 == 11 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_24)
          {
            _Bool return_value_update_event_21;
            return_value_update_event_21=update_event(c, 0x02 | 0x10);
            if(return_value_update_event_21 == (_Bool)0)
            {
              if(settings.verbose >= 1)
                fprintf(stderr, "Couldn't update event\n");

              conn_set_state(c, 5);
              break;
            }

            stop = (_Bool)1;
            break;
          }

        }

        if(settings.verbose >= 1)
          fprintf(stderr, "Failed to read, and not due to blocking\n");

        conn_set_state(c, 5);
        break;
      }
      case 2:
      {
        if(c->iovused == 0)
          tmp_if_expr_30 = (_Bool)1;

        else
        {
          if(!(c->udp == (_Bool)0))
            tmp_if_expr_29 = c->iovused == 1 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_29 = (_Bool)0;
          tmp_if_expr_30 = tmp_if_expr_29 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_30)
        {
          signed int return_value_add_iov_25;
          return_value_add_iov_25=add_iov(c, (const void *)c->wcurr, c->wbytes);
          if(!(return_value_add_iov_25 == 0))
            tmp_if_expr_28 = (_Bool)1;

          else
          {
            if(!(c->udp == (_Bool)0))
            {
              return_value_build_udp_headers_26=build_udp_headers(c);
              tmp_if_expr_27 = return_value_build_udp_headers_26 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_27 = (_Bool)0;
            tmp_if_expr_28 = tmp_if_expr_27 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_28)
          {
            if(settings.verbose >= 1)
              fprintf(stderr, "Couldn't build response\n");

            conn_set_state(c, 5);
            break;
          }

        }

      }
      case 6:
      {
        return_value_transmit_31=transmit(c);
        switch(return_value_transmit_31)
        {
          case 0:
          {
            if(c->state == 6)
            {
              while(c->ileft >= 1)
              {
                struct _stritem *it = *c->icurr;
                item_free(it);
                c->icurr = c->icurr + 1l;
                c->ileft = c->ileft - 1;
              }
              conn_set_state(c, 1);
            }

            else
              if(c->state == 2)
              {
                if(!(c->write_and_free == NULL))
                {
                  free(c->write_and_free);
                  c->write_and_free = NULL;
                }

                conn_set_state(c, c->write_and_go);
              }

              else
              {
                if(settings.verbose >= 1)
                  fprintf(stderr, "Unexpected state %d\n", c->state);

                conn_set_state(c, 5);
              }
            break;
          }
          case 1:

          case 3:
            break;
          case 2:
            stop = (_Bool)1;
        }
        break;
      }
      case 5:
      {
        if(!(c->udp == (_Bool)0))
          conn_cleanup(c);

        else
          conn_close(c);
        stop = (_Bool)1;
      }
    }
  goto __CPROVER_DUMP_L76;

__CPROVER_DUMP_L76:
  ;
}

// ensure_iov_space
// file memcachedb.c line 491
static signed int ensure_iov_space(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(c->iovused >= c->iovsize)
  {
    signed int i;
    signed int iovnum;
    struct iovec *new_iov;
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)c->iov, (unsigned long int)(c->iovsize * 2) * sizeof(struct iovec) /*16ul*/ );
    new_iov = (struct iovec *)return_value_realloc_1;
    if(new_iov == ((struct iovec *)NULL))
      return -1;

    c->iov = new_iov;
    c->iovsize = c->iovsize * 2;
    i = 0;
    iovnum = 0;
    for( ; !(i >= c->msgused); i = i + 1)
    {
      (c->msglist + (signed long int)i)->msg_iov = &c->iov[(signed long int)iovnum];
      iovnum = iovnum + (signed int)(c->msglist + (signed long int)i)->msg_iovlen;
    }
  }

  return 0;
}

// event_handler
// file memcachedb.c line 1849
static void event_handler(const signed int fd, const signed short int which, void *arg)
{
  struct conn *c = (struct conn *)arg;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  c->which = which;
  if(!(fd == c->sfd))
  {
    if(settings.verbose >= 1)
      fprintf(stderr, "Catastrophic: event fd doesn't match conn fd!\n");

    conn_close(c);
  }

  else
  {
    drive_machine(c);
    goto __CPROVER_DUMP_L3;
  }

__CPROVER_DUMP_L3:
  ;
}

// item_alloc1
// file memcachedb.h line 294
struct _stritem * item_alloc1(char *key, const unsigned long int nkey, const signed int flags, const signed int nbytes)
{
  unsigned char nsuffix;
  struct _stritem *it;
  char suffix[40l];
  unsigned long int ntotal;
  ntotal=item_make_header((const unsigned char)(nkey + (unsigned long int)1), flags, nbytes, suffix, &nsuffix);
  if(!(settings.item_buf_size >= ntotal))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(ntotal);
    it = (struct _stritem *)return_value_malloc_1;
    if(it == ((struct _stritem *)NULL))
      return (struct _stritem *)(void *)0;

    memset((void *)it, 0, ntotal);
    if(settings.verbose >= 2)
      fprintf(stderr, "alloc a item buffer from malloc.\n");

  }

  else
  {
    it=mt_item_from_freelist();
    if(it == ((struct _stritem *)NULL))
      return (struct _stritem *)(void *)0;

    if(settings.verbose >= 2)
      fprintf(stderr, "alloc a item buffer from freelist.\n");

  }
  it->nkey = (unsigned char)nkey;
  it->nbytes = nbytes;
  strcpy((char *)&it->end[(signed long int)0], key);
  memcpy((void *)((char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1), (const void *)suffix, (unsigned long int)nsuffix);
  it->nsuffix = nsuffix;
  return it;
}

// item_alloc2
// file item.c line 154
struct _stritem * item_alloc2(unsigned long int ntotal)
{
  struct _stritem *it;
  if(!(settings.item_buf_size >= ntotal))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(ntotal);
    it = (struct _stritem *)return_value_malloc_1;
    if(it == ((struct _stritem *)NULL))
      return (struct _stritem *)(void *)0;

    memset((void *)it, 0, ntotal);
    if(settings.verbose >= 2)
      fprintf(stderr, "alloc a item buffer from malloc.\n");

  }

  else
  {
    it=mt_item_from_freelist();
    if(it == ((struct _stritem *)NULL))
      return (struct _stritem *)(void *)0;

    if(settings.verbose >= 2)
      fprintf(stderr, "alloc a item buffer from freelist.\n");

  }
  return it;
}

// item_delete
// file memcachedb.h line 299
signed int item_delete(char *key, unsigned long int nkey)
{
  signed int ret;
  struct __db_dbt dbkey;
  memset((void *)&dbkey, 0, sizeof(struct __db_dbt) /*40ul*/ );
  dbkey.data = (void *)key;
  dbkey.size = (unsigned int)nkey;
  ret=dbp->del(dbp, (struct __db_txn *)(void *)0, &dbkey, (unsigned int)0);
  if(ret == 0)
    return 0;

  else
    if(ret == -30988)
      return 1;

    else
    {
      if(settings.verbose >= 2)
      {
        char *return_value_db_strerror_1;
        return_value_db_strerror_1=db_strerror(ret);
        fprintf(stderr, "dbp->del: %s\n", return_value_db_strerror_1);
      }

      return -1;
    }
}

// item_exists
// file memcachedb.h line 300
signed int item_exists(char *key, unsigned long int nkey)
{
  signed int ret;
  struct __db_dbt dbkey;
  memset((void *)&dbkey, 0, sizeof(struct __db_dbt) /*40ul*/ );
  dbkey.data = (void *)key;
  dbkey.size = (unsigned int)nkey;
  ret=dbp->exists(dbp, (struct __db_txn *)(void *)0, &dbkey, (unsigned int)0);
  if(ret == 0)
    return 1;

  else
    return 0;
}

// item_free
// file memcachedb.h line 296
signed int item_free(struct _stritem *it)
{
  unsigned long int ntotal = (unsigned long int)0;
  if(it == ((struct _stritem *)NULL))
    return 0;

  else
  {
    ntotal = sizeof(struct _stritem) /*8ul*/  + (unsigned long int)it->nkey + (unsigned long int)1 + (unsigned long int)it->nsuffix + (unsigned long int)it->nbytes;
    if(!(settings.item_buf_size >= ntotal))
    {
      if(settings.verbose >= 2)
        fprintf(stderr, "ntotal: %d, use free() directly.\n", ntotal);

      free((void *)it);
    }

    else
    {
      signed int return_value_mt_item_add_to_freelist_1;
      return_value_mt_item_add_to_freelist_1=mt_item_add_to_freelist(it);
      if(!(return_value_mt_item_add_to_freelist_1 == 0))
      {
        if(settings.verbose >= 2)
          fprintf(stderr, "ntotal: %d, add a item buffer to freelist fail, use free() directly.\n", ntotal);

        free((void *)it);
      }

      else
        if(settings.verbose >= 2)
          fprintf(stderr, "ntotal: %d, add a item buffer to freelist.\n", ntotal);

    }
    return 0;
  }
}

// item_get
// file memcachedb.h line 297
struct _stritem * item_get(char *key, unsigned long int nkey)
{
  struct _stritem *it = (struct _stritem *)(void *)0;
  struct __db_dbt dbkey;
  struct __db_dbt dbdata;
  _Bool stop;
  signed int ret;
  it=item_alloc2(settings.item_buf_size);
  if(it == ((struct _stritem *)NULL))
    return (struct _stritem *)(void *)0;

  else
  {
    memset((void *)&dbkey, 0, sizeof(struct __db_dbt) /*40ul*/ );
    memset((void *)&dbdata, 0, sizeof(struct __db_dbt) /*40ul*/ );
    dbkey.data = (void *)key;
    dbkey.size = (unsigned int)nkey;
    dbdata.ulen = (unsigned int)settings.item_buf_size;
    dbdata.data = (void *)it;
    dbdata.flags = (unsigned int)0x800;
    stop = (_Bool)0;
    if(stop == (_Bool)0)
    {
      ret=dbp->get(dbp, (struct __db_txn *)(void *)0, &dbkey, &dbdata, (unsigned int)0);
      if(ret == -30999)
      {
        item_free(it);
        it=item_alloc2((unsigned long int)dbdata.size);
        if(it == ((struct _stritem *)NULL))
          return (struct _stritem *)(void *)0;

        dbdata.ulen = dbdata.size;
        dbdata.data = (void *)it;
        stop = (_Bool)1;
        stop = (_Bool)1;
        item_free(it);
        it = (struct _stritem *)(void *)0;
      }

      stop = (_Bool)1;
      item_free(it);
      it = (struct _stritem *)(void *)0;
      if(settings.verbose >= 2)
      {
        char *return_value_db_strerror_1;
        return_value_db_strerror_1=db_strerror(ret);
        fprintf(stderr, "dbp->get: %s\n", return_value_db_strerror_1);
      }

    }

    return it;
  }
}

// item_init
// file memcachedb.h line 291
void item_init(void)
{
  freeitemtotal = 500;
  freeitemcurr = 0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _stritem *) /*8ul*/  * (unsigned long int)freeitemtotal);
  freeitem = (struct _stritem **)return_value_malloc_1;
  if(freeitem == ((struct _stritem **)NULL))
    perror("malloc()");

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// item_make_header
// file item.c line 108
static unsigned long int item_make_header(const unsigned char nkey, const signed int flags, const signed int nbytes, char *suffix, unsigned char *nsuffix)
{
  signed int return_value_snprintf_1;
  return_value_snprintf_1=snprintf(suffix, (unsigned long int)40, " %d %d\r\n", flags, nbytes - 2);
  *nsuffix = (unsigned char)return_value_snprintf_1;
  return sizeof(struct _stritem) /*8ul*/  + (unsigned long int)nkey + (unsigned long int)*nsuffix + (unsigned long int)nbytes;
}

// item_put
// file memcachedb.h line 298
signed int item_put(char *key, unsigned long int nkey, struct _stritem *it)
{
  signed int ret;
  struct __db_dbt dbkey;
  struct __db_dbt dbdata;
  memset((void *)&dbkey, 0, sizeof(struct __db_dbt) /*40ul*/ );
  memset((void *)&dbdata, 0, sizeof(struct __db_dbt) /*40ul*/ );
  dbkey.data = (void *)key;
  dbkey.size = (unsigned int)nkey;
  dbdata.data = (void *)it;
  dbdata.size = (unsigned int)(sizeof(struct _stritem) /*8ul*/  + (unsigned long int)it->nkey + (unsigned long int)1 + (unsigned long int)it->nsuffix + (unsigned long int)it->nbytes);
  ret=dbp->put(dbp, (struct __db_txn *)(void *)0, &dbkey, &dbdata, (unsigned int)0);
  if(ret == 0)
    return 0;

  else
  {
    if(settings.verbose >= 2)
    {
      char *return_value_db_strerror_1;
      return_value_db_strerror_1=db_strerror(ret);
      fprintf(stderr, "dbp->put: %s\n", return_value_db_strerror_1);
    }

    return -1;
  }
}

// main
// file memcachedb.c line 2303
signed int main(signed int argc, char **argv)
{
  signed int c;
  struct in_addr addr;
  _Bool daemonize = (_Bool)0;
  signed int maxcore = 0;
  char *username = (char *)(void *)0;
  char *pid_file = (char *)(void *)0;
  struct passwd *pw;
  struct sigaction sa;
  struct rlimit rlim;
  char *portstr = (char *)(void *)0;
  void (*return_value_signal_1)(signed int);
  return_value_signal_1=signal(15, sig_handler);
  if(return_value_signal_1 == (void (*)(signed int))-1)
    fprintf(stderr, "can not catch SIGTERM\n");

  void (*return_value_signal_2)(signed int);
  return_value_signal_2=signal(3, sig_handler);
  if(return_value_signal_2 == (void (*)(signed int))-1)
    fprintf(stderr, "can not catch SIGQUIT\n");

  void (*return_value_signal_3)(signed int);
  return_value_signal_3=signal(2, sig_handler);
  if(return_value_signal_3 == (void (*)(signed int))-1)
    fprintf(stderr, "can not catch SIGINT\n");

  settings_init();
  bdb_settings_init();
  db_version(&bdb_version.majver, &bdb_version.minver, &bdb_version.patch);
  setbuf(stderr, (char *)(void *)0);
  signed long int return_value_strtol_4;
  signed int return_value_atoi_5;
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_atoi_8;
  signed int return_value_atoi_9;
  signed int return_value_atoi_10;
  signed int return_value_atoi_11;
  signed int return_value_atoi_12;
  signed int return_value_atoi_13;
  signed int return_value_atoi_14;
  do
  {
    c=getopt(argc, argv, "a:U:p:s:c:hivl:dru:P:t:b:f:H:B:m:A:L:C:T:e:D:NMSR:O:n:");
    if(c == -1)
      break;

    switch(c)
    {
      case 97:
      {
        return_value_strtol_4=strtol(optarg, (char ** restrict )(void *)0, 8);
        settings.access = (signed int)return_value_strtol_4;
        break;
      }
      case 85:
      {
        settings.udpport=atoi(optarg);
        break;
      }
      case 112:
      {
        settings.port=atoi(optarg);
        break;
      }
      case 115:
      {
        settings.socketpath = optarg;
        break;
      }
      case 99:
      {
        settings.maxconns=atoi(optarg);
        break;
      }
      case 104:
      {
        usage();
        exit(0);
      }
      case 105:
      {
        usage_license();
        exit(0);
      }
      case 118:
      {
        settings.verbose = settings.verbose + 1;
        break;
      }
      case 108:
      {
        settings.inter=strdup(optarg);
        break;
      }
      case 100:
      {
        daemonize = (_Bool)1;
        break;
      }
      case 114:
      {
        maxcore = 1;
        break;
      }
      case 117:
      {
        username = optarg;
        break;
      }
      case 80:
      {
        pid_file = optarg;
        break;
      }
      case 116:
      {
        settings.num_threads=atoi(optarg);
        if(settings.num_threads == 0)
        {
          fprintf(stderr, "Number of threads must be greater than 0\n");
          exit(1);
        }

        break;
      }
      case 98:
      {
        return_value_atoi_5=atoi(optarg);
        settings.item_buf_size = (unsigned long int)return_value_atoi_5;
        if(!(settings.item_buf_size >= 512ul))
        {
          fprintf(stderr, "item buf size must be larger than 512 bytes\n");
          exit(1);
        }

        if(settings.item_buf_size >= 262145ul)
          fprintf(stderr, "Warning: item buffer size(-b) larger than 256KB may cause performance issue\n");

        break;
      }
      case 102:
      {
        bdb_settings.db_file = optarg;
        break;
      }
      case 72:
      {
        bdb_settings.env_home = optarg;
        break;
      }
      case 66:
      {
        return_value_strcmp_7=strcmp(optarg, "btree");
        if(return_value_strcmp_7 == 0)
          bdb_settings.db_type = (enum anonymous_12)DB_BTREE;

        else
        {
          return_value_strcmp_6=strcmp(optarg, "hash");
          if(return_value_strcmp_6 == 0)
            bdb_settings.db_type = (enum anonymous_12)DB_HASH;

          else
          {
            fprintf(stderr, "Unknown databasetype, only 'btree' or 'hash' is available.\n");
            exit(1);
          }
        }
        break;
      }
      case 109:
      {
        return_value_atoi_8=atoi(optarg);
        bdb_settings.cache_size = (unsigned int)(return_value_atoi_8 * 1024 * 1024);
        break;
      }
      case 65:
      {
        return_value_atoi_9=atoi(optarg);
        bdb_settings.page_size = (unsigned int)return_value_atoi_9;
        break;
      }
      case 76:
      {
        return_value_atoi_10=atoi(optarg);
        bdb_settings.txn_lg_bsize = (unsigned int)(return_value_atoi_10 * 1024);
        break;
      }
      case 67:
      {
        bdb_settings.chkpoint_val=atoi(optarg);
        break;
      }
      case 84:
      {
        bdb_settings.memp_trickle_val=atoi(optarg);
        break;
      }
      case 101:
      {
        bdb_settings.memp_trickle_percent=atoi(optarg);
        if(bdb_settings.memp_trickle_percent >= 101 || !(bdb_settings.memp_trickle_percent >= 0))
        {
          fprintf(stderr, "memp_trickle_percent should be 0 ~ 100.\n");
          exit(1);
        }

        break;
      }
      case 68:
      {
        return_value_atoi_11=atoi(optarg);
        bdb_settings.dldetect_val = return_value_atoi_11 * 1000;
        break;
      }
      case 78:
      {
        bdb_settings.txn_nosync = 1;
        break;
      }
      case 77:
      {
        if(bdb_settings.rep_start_policy == 1u)
        {
          fprintf(stderr, "Can't not be a Master and Slave at same time.\n");
          exit(1);
        }

        else
          bdb_settings.rep_start_policy = (unsigned int)0x00000002;
        break;
      }
      case 83:
      {
        if(bdb_settings.rep_start_policy == 2u)
        {
          fprintf(stderr, "Can't not be a Master and Slave at same time.\n");
          exit(1);
        }

        else
          bdb_settings.rep_start_policy = (unsigned int)0x00000001;
        break;
      }
      case 82:
      {
        bdb_settings.is_replicated = 1;
        bdb_settings.rep_localhost=strtok(optarg, ":");
        portstr=strtok((char *)(void *)0, ":");
        if(portstr == ((char *)NULL))
        {
          fprintf(stderr, "Bad host specification.\n");
          exit(1);
        }

        return_value_atoi_12=atoi(portstr);
        bdb_settings.rep_localport = (signed int)(unsigned short int)return_value_atoi_12;
        break;
      }
      case 79:
      {
        bdb_settings.rep_remotehost=strtok(optarg, ":");
        portstr=strtok((char *)(void *)0, ":");
        if(portstr == ((char *)NULL))
        {
          fprintf(stderr, "Bad host specification.\n");
          exit(1);
        }

        return_value_atoi_13=atoi(portstr);
        bdb_settings.rep_remoteport = (signed int)(unsigned short int)return_value_atoi_13;
        break;
      }
      case 110:
      {
        return_value_atoi_14=atoi(optarg);
        bdb_settings.rep_nsites = (unsigned int)return_value_atoi_14;
        break;
      }
      default:
      {
        fprintf(stderr, "Illegal argument \"%c\"\n", c);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  if(!(maxcore == 0))
  {
    struct rlimit rlim_new;
    signed int return_value_getrlimit_16;
    return_value_getrlimit_16=getrlimit(4, &rlim);
    if(return_value_getrlimit_16 == 0)
    {
      rlim_new.rlim_max = (unsigned long int)-1;
      rlim_new.rlim_cur = rlim_new.rlim_max;
      signed int return_value_setrlimit_15;
      return_value_setrlimit_15=setrlimit(4, &rlim_new);
      if(!(return_value_setrlimit_15 == 0))
      {
        rlim_new.rlim_max = rlim.rlim_max;
        rlim_new.rlim_cur = rlim_new.rlim_max;
        setrlimit(4, &rlim_new);
      }

    }

    signed int return_value_getrlimit_17;
    return_value_getrlimit_17=getrlimit(4, &rlim);
    if(rlim.rlim_cur == 0ul || !(return_value_getrlimit_17 == 0))
    {
      fprintf(stderr, "failed to ensure corefile creation\n");
      exit(1);
    }

  }

  signed int return_value_getrlimit_19;
  return_value_getrlimit_19=getrlimit(7, &rlim);
  if(!(return_value_getrlimit_19 == 0))
  {
    fprintf(stderr, "failed to getrlimit number of files\n");
    exit(1);
  }

  else
  {
    signed int maxfiles = settings.maxconns;
    if(!(rlim.rlim_cur >= (unsigned long int)maxfiles))
      rlim.rlim_cur = (unsigned long int)(maxfiles + 3);

    if(!(rlim.rlim_max >= rlim.rlim_cur))
      rlim.rlim_max = rlim.rlim_cur;

    signed int return_value_setrlimit_18;
    return_value_setrlimit_18=setrlimit(7, &rlim);
    if(!(return_value_setrlimit_18 == 0))
    {
      fprintf(stderr, "failed to set rlimit for open files. Try running as root or requesting smaller maxconns value.\n");
      exit(1);
    }

  }
  if(!(daemonize == (_Bool)0))
  {
    signed int res;
    res=daemon(maxcore, settings.verbose);
    if(res == -1)
    {
      fprintf(stderr, "failed to daemon() in order to daemonize\n");
      return 1;
    }

  }

  unsigned int return_value_getuid_24;
  return_value_getuid_24=getuid();
  _Bool tmp_if_expr_26;
  unsigned int return_value_geteuid_25;
  if(return_value_getuid_24 == 0u)
    tmp_if_expr_26 = (_Bool)1;

  else
  {
    return_value_geteuid_25=geteuid();
    tmp_if_expr_26 = return_value_geteuid_25 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_23;
  signed int return_value_setuid_22;
  if(tmp_if_expr_26)
  {
    if(username == ((char *)NULL))
      tmp_if_expr_20 = (_Bool)1;

    else
      tmp_if_expr_20 = (signed int)*username == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_20)
    {
      fprintf(stderr, "can't run as root without the -u switch\n");
      return 1;
    }

    pw=getpwnam(username);
    if(pw == ((struct passwd *)NULL))
    {
      fprintf(stderr, "can't find the user %s to switch to\n", username);
      return 1;
    }

    signed int return_value_setgid_21;
    return_value_setgid_21=setgid(pw->pw_gid);
    if(!(return_value_setgid_21 >= 0))
      tmp_if_expr_23 = (_Bool)1;

    else
    {
      return_value_setuid_22=setuid(pw->pw_uid);
      tmp_if_expr_23 = return_value_setuid_22 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_23)
    {
      fprintf(stderr, "failed to assume identity of user %s\n", username);
      return 1;
    }

  }

  main_base=event_init();
  item_init();
  stats_init();
  conn_init();
  sa.__sigaction_handler.sa_handler = (void (*)(signed int))1;
  sa.sa_flags = 0;
  signed int return_value_sigemptyset_27;
  return_value_sigemptyset_27=sigemptyset(&sa.sa_mask);
  _Bool tmp_if_expr_29;
  signed int return_value_sigaction_28;
  if(return_value_sigemptyset_27 == -1)
    tmp_if_expr_29 = (_Bool)1;

  else
  {
    return_value_sigaction_28=sigaction(13, &sa, ((struct sigaction *)NULL));
    tmp_if_expr_29 = return_value_sigaction_28 == -1 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_29)
  {
    perror("failed to ignore SIGPIPE; sigaction");
    exit(1);
  }

  thread_init(settings.num_threads, main_base);
  signed int return_value_getpid_30;
  if(!(daemonize == (_Bool)0))
  {
    return_value_getpid_30=getpid();
    save_pid(return_value_getpid_30, pid_file);
  }

  if(!(settings.socketpath == ((char *)NULL)))
  {
    signed int return_value_server_socket_unix_31;
    return_value_server_socket_unix_31=server_socket_unix(settings.socketpath, settings.access);
    if(!(return_value_server_socket_unix_31 == 0))
    {
      fprintf(stderr, "failed to listen\n");
      exit(1);
    }

  }

  if(settings.socketpath == ((char *)NULL))
  {
    signed int udp_port;
    signed int return_value_server_socket_32;
    return_value_server_socket_32=server_socket(settings.port, (const _Bool)0);
    if(!(return_value_server_socket_32 == 0))
    {
      fprintf(stderr, "failed to listen\n");
      exit(1);
    }

    udp_port = settings.udpport != 0 ? settings.udpport : settings.port;
    signed int return_value_server_socket_33;
    return_value_server_socket_33=server_socket(udp_port, (const _Bool)1);
    if(!(return_value_server_socket_33 == 0))
    {
      fprintf(stderr, "failed to listen on UDP port %d\n", settings.udpport);
      exit(1);
    }

  }

  signed int return_value_atexit_34;
  return_value_atexit_34=atexit(bdb_env_close);
  if(!(return_value_atexit_34 == 0))
  {
    fprintf(stderr, "can not register close_env");
    exit(1);
  }

  signed int return_value_atexit_35;
  return_value_atexit_35=atexit(bdb_db_close);
  if(!(return_value_atexit_35 == 0))
  {
    fprintf(stderr, "can not register close_db");
    exit(1);
  }

  signed int return_value_atexit_36;
  return_value_atexit_36=atexit(bdb_chkpoint);
  if(!(return_value_atexit_36 == 0))
  {
    fprintf(stderr, "can not register db_checkpoint");
    exit(1);
  }

  bdb_env_init();
  bdb_db_open();
  start_chkpoint_thread();
  start_memp_trickle_thread();
  start_dl_detect_thread();
  event_base_loop(main_base, 0);
  if(!(daemonize == (_Bool)0))
    remove_pidfile(pid_file);

  if(!(settings.inter == ((char *)NULL)))
    free((void *)settings.inter);

  static signed int *l_socket = (signed int *)(void *)0;
  if(!(l_socket == ((signed int *)NULL)))
    free((void *)l_socket);

  static signed int *u_socket = (signed int *)(void *)0;
  if(!(u_socket == ((signed int *)NULL)))
    free((void *)u_socket);

  return 0;
}

// maximize_sndbuf
// file memcachedb.c line 1893
static void maximize_sndbuf(const signed int sfd)
{
  unsigned int intsize = (unsigned int)sizeof(signed int) /*4ul*/ ;
  signed int last_good = 0;
  signed int min;
  signed int max;
  signed int avg;
  signed int old_size;
  signed int return_value_getsockopt_1;
  return_value_getsockopt_1=getsockopt(sfd, 1, 7, (void *)&old_size, &intsize);
  if(!(return_value_getsockopt_1 == 0))
  {
    if(settings.verbose >= 1)
      perror("getsockopt(SO_SNDBUF)");

  }

  else
  {
    min = old_size;
    max = 256 * 1024 * 1024;
    while(max >= min)
    {
      avg = (signed int)((unsigned int)(min + max) / (unsigned int)2);
      signed int return_value_setsockopt_2;
      return_value_setsockopt_2=setsockopt(sfd, 1, 7, (void *)&avg, intsize);
      if(return_value_setsockopt_2 == 0)
      {
        last_good = avg;
        min = avg + 1;
      }

      else
        max = avg - 1;
    }
    if(settings.verbose >= 2)
      fprintf(stderr, "<%d send buffer was %d, now %d\n", sfd, old_size, last_good);

  }
}

// mt_add_delta
// file memcachedb.h line 337
char * mt_add_delta(signed int incr, const signed long int delta, char *buf, char *key, unsigned long int nkey)
{
  char *ret;
  pthread_mutex_lock(&bdb_lock);
  ret=do_add_delta((const _Bool)incr, delta, buf, key, nkey);
  pthread_mutex_unlock(&bdb_lock);
  return ret;
}

// mt_conn_add_to_freelist
// file memcachedb.h line 339
_Bool mt_conn_add_to_freelist(struct conn *c)
{
  _Bool result;
  pthread_mutex_lock(&conn_lock);
  result=do_conn_add_to_freelist(c);
  pthread_mutex_unlock(&conn_lock);
  return result;
}

// mt_conn_from_freelist
// file memcachedb.h line 338
struct conn * mt_conn_from_freelist(void)
{
  struct conn *c;
  pthread_mutex_lock(&conn_lock);
  c=do_conn_from_freelist();
  pthread_mutex_unlock(&conn_lock);
  return c;
}

// mt_is_listen_thread
// file memcachedb.h line 340
signed int mt_is_listen_thread(void)
{
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  return (signed int)(return_value_pthread_self_1 == (threads + (signed long int)0)->thread_id);
}

// mt_item_add_to_freelist
// file memcachedb.h line 342
signed int mt_item_add_to_freelist(struct _stritem *it)
{
  signed int result;
  pthread_mutex_lock(&ibuffer_lock);
  result=do_item_add_to_freelist(it);
  pthread_mutex_unlock(&ibuffer_lock);
  return result;
}

// mt_item_from_freelist
// file memcachedb.h line 341
struct _stritem * mt_item_from_freelist(void)
{
  struct _stritem *it;
  pthread_mutex_lock(&ibuffer_lock);
  it=do_item_from_freelist();
  pthread_mutex_unlock(&ibuffer_lock);
  return it;
}

// mt_stats_lock
// file memcachedb.h line 343
void mt_stats_lock(void)
{
  pthread_mutex_lock(&stats_lock);
}

// mt_stats_unlock
// file memcachedb.h line 344
void mt_stats_unlock(void)
{
  pthread_mutex_unlock(&stats_lock);
}

// mt_store_item
// file memcachedb.h line 345
signed int mt_store_item(struct _stritem *item, signed int comm)
{
  signed int ret;
  pthread_mutex_lock(&bdb_lock);
  ret=do_store_item(item, comm);
  pthread_mutex_unlock(&bdb_lock);
  return ret;
}

// new_socket
// file memcachedb.c line 1871
static signed int new_socket(struct addrinfo *ai)
{
  signed int sfd;
  signed int flags;
  sfd=socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
  _Bool tmp_if_expr_2;
  signed int return_value_fcntl_1;
  if(sfd == -1)
  {
    perror("socket()");
    return -1;
  }

  else
  {
    flags=fcntl(sfd, 3, 0);
    if(!(flags >= 0))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_fcntl_1=fcntl(sfd, 4, flags | 04000);
      tmp_if_expr_2 = return_value_fcntl_1 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      perror("setting O_NONBLOCK");
      close(sfd);
      return -1;
    }

    else
      return sfd;
  }
}

// new_socket_unix
// file memcachedb.c line 2026
static signed int new_socket_unix(void)
{
  signed int sfd;
  signed int flags;
  sfd=socket(1, 1, 0);
  _Bool tmp_if_expr_2;
  signed int return_value_fcntl_1;
  if(sfd == -1)
  {
    perror("socket()");
    return -1;
  }

  else
  {
    flags=fcntl(sfd, 3, 0);
    if(!(flags >= 0))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_fcntl_1=fcntl(sfd, 4, flags | 04000);
      tmp_if_expr_2 = return_value_fcntl_1 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      perror("setting O_NONBLOCK");
      close(sfd);
      return -1;
    }

    else
      return sfd;
  }
}

// out_string
// file memcachedb.c line 611
static void out_string(struct conn *c, const char *str)
{
  unsigned long int len;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(settings.verbose >= 2)
    fprintf(stderr, ">%d %s\n", c->sfd, str);

  len=strlen(str);
  if(!((unsigned long int)c->wsize >= 2ul + len))
  {
    str = "SERVER_ERROR output line too long";
    len=strlen(str);
  }

  memcpy((void *)c->wbuf, (const void *)str, len);
  memcpy((void *)(c->wbuf + (signed long int)len), (const void *)"\r\n", (unsigned long int)2);
  c->wbytes = (signed int)(len + (unsigned long int)2);
  c->wcurr = c->wbuf;
  conn_set_state(c, 2);
  c->write_and_go = 1;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// process_arithmetic_command
// file memcachedb.c line 1073
static void process_arithmetic_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens, const _Bool incr)
{
  char temp[(signed long int)sizeof(char [21l]) /*21l*/ ];
  signed long int delta;
  char *key;
  unsigned long int nkey;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if((tokens + 1l)->length >= 251ul)
    out_string(c, "CLIENT_ERROR bad command line format");

  else
  {
    key = (tokens + (signed long int)1)->value;
    nkey = (tokens + (signed long int)1)->length;
    delta=strtoll((tokens + (signed long int)2)->value, (char ** restrict )(void *)0, 10);
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 34)
      out_string(c, "CLIENT_ERROR bad command line format");

    else
    {
      char *return_value_mt_add_delta_2;
      return_value_mt_add_delta_2=mt_add_delta((const signed int)incr, delta, temp, key, nkey);
      out_string(c, return_value_mt_add_delta_2);
    }
  }
}

// process_bdb_command
// file memcachedb.c line 1254
static void process_bdb_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens)
{
  signed int ret;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  signed int return_value_strcmp_6;
  return_value_strcmp_6=strcmp((tokens + (signed long int)0)->value, "db_archive");
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  if(return_value_strcmp_6 == 0)
  {
    ret=env->log_archive(env, (char ***)(void *)0, (unsigned int)0x00000008);
    if(!(ret == 0))
    {
      if(settings.verbose >= 2)
      {
        char *return_value_db_strerror_1;
        return_value_db_strerror_1=db_strerror(ret);
        fprintf(stderr, "env->log_archive: %s\n", return_value_db_strerror_1);
      }

      out_string(c, "ERROR");
    }

    else
      out_string(c, "OK");
  }

  else
  {
    return_value_strcmp_5=strcmp((tokens + (signed long int)0)->value, "db_checkpoint");
    if(return_value_strcmp_5 == 0)
    {
      ret=env->txn_checkpoint(env, (unsigned int)0, (unsigned int)0, (unsigned int)0);
      if(!(ret == 0))
      {
        if(settings.verbose >= 2)
        {
          char *return_value_db_strerror_2;
          return_value_db_strerror_2=db_strerror(ret);
          fprintf(stderr, "env->txn_checkpoint: %s\n", return_value_db_strerror_2);
        }

        out_string(c, "ERROR");
      }

      else
        out_string(c, "OK");
    }

    else
    {
      return_value_strcmp_4=strcmp((tokens + (signed long int)0)->value, "db_compact");
      if(return_value_strcmp_4 == 0)
      {
        struct __db_compact c_data;
        ret=dbp->compact(dbp, (struct __db_txn *)(void *)0, (struct __db_dbt *)(void *)0, (struct __db_dbt *)(void *)0, &c_data, (unsigned int)0x00000002, (struct __db_dbt *)(void *)0);
        if(!(ret == 0))
        {
          if(settings.verbose >= 2)
          {
            char *return_value_db_strerror_3;
            return_value_db_strerror_3=db_strerror(ret);
            fprintf(stderr, "dbp->compact: %s\n", return_value_db_strerror_3);
          }

          out_string(c, "ERROR");
        }

        else
          out_string(c, "OK");
      }

      else
        out_string(c, "ERROR");
    }
  }
  goto __CPROVER_DUMP_L14;

__CPROVER_DUMP_L14:
  ;
}

// process_command
// file memcachedb.c line 1298
static void process_command(struct conn *c, char *command)
{
  struct token_s tokens[8l];
  unsigned long int ntokens;
  signed int comm;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(settings.verbose >= 2)
    fprintf(stderr, "<%d %s\n", c->sfd, command);

  c->msgcurr = 0;
  c->msgused = 0;
  c->iovused = 0;
  signed int return_value_add_msghdr_1;
  return_value_add_msghdr_1=add_msghdr(c);
  _Bool tmp_if_expr_44;
  signed int return_value_strcmp_43;
  _Bool tmp_if_expr_42;
  signed int return_value_strcmp_28;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_32;
  signed int return_value_strcmp_30;
  _Bool tmp_if_expr_31;
  _Bool tmp_if_expr_35;
  signed int return_value_strcmp_33;
  _Bool tmp_if_expr_34;
  _Bool tmp_if_expr_38;
  signed int return_value_strcmp_36;
  _Bool tmp_if_expr_37;
  _Bool tmp_if_expr_41;
  signed int return_value_strcmp_39;
  _Bool tmp_if_expr_40;
  _Bool tmp_if_expr_27;
  signed int return_value_strcmp_26;
  _Bool tmp_if_expr_25;
  signed int return_value_strcmp_24;
  _Bool tmp_if_expr_23;
  signed int return_value_strcmp_22;
  _Bool tmp_if_expr_21;
  signed int return_value_strcmp_20;
  _Bool tmp_if_expr_19;
  signed int return_value_strcmp_18;
  _Bool tmp_if_expr_17;
  signed int return_value_strcmp_16;
  _Bool tmp_if_expr_15;
  signed int return_value_strcmp_14;
  _Bool tmp_if_expr_13;
  signed int return_value_strcmp_12;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_8;
  _Bool tmp_if_expr_10;
  signed int return_value_strcmp_9;
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_2;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  if(!(return_value_add_msghdr_1 == 0))
    out_string(c, "SERVER_ERROR out of memory preparing response");

  else
  {
    ntokens=tokenize_command(command, tokens, (const unsigned long int)8);
    if(ntokens >= 3ul)
    {
      return_value_strcmp_43=strcmp(tokens[(signed long int)0].value, "get");
      tmp_if_expr_44 = return_value_strcmp_43 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_44 = (_Bool)0;
    if(tmp_if_expr_44)
      process_get_command(c, tokens, ntokens);

    else
    {
      if(ntokens == 6ul || ntokens == 7ul)
      {
        return_value_strcmp_28=strcmp(tokens[(signed long int)0].value, "add");
        if(return_value_strcmp_28 == 0)
        {
          comm = 1;
          tmp_if_expr_29 = comm != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_29 = (_Bool)0;
        if(tmp_if_expr_29)
          tmp_if_expr_32 = (_Bool)1;

        else
        {
          return_value_strcmp_30=strcmp(tokens[(signed long int)0].value, "set");
          if(return_value_strcmp_30 == 0)
          {
            comm = 2;
            tmp_if_expr_31 = comm != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_31 = (_Bool)0;
          tmp_if_expr_32 = tmp_if_expr_31 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_32)
          tmp_if_expr_35 = (_Bool)1;

        else
        {
          return_value_strcmp_33=strcmp(tokens[(signed long int)0].value, "replace");
          if(return_value_strcmp_33 == 0)
          {
            comm = 3;
            tmp_if_expr_34 = comm != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_34 = (_Bool)0;
          tmp_if_expr_35 = tmp_if_expr_34 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_35)
          tmp_if_expr_38 = (_Bool)1;

        else
        {
          return_value_strcmp_36=strcmp(tokens[(signed long int)0].value, "prepend");
          if(return_value_strcmp_36 == 0)
          {
            comm = 5;
            tmp_if_expr_37 = comm != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_37 = (_Bool)0;
          tmp_if_expr_38 = tmp_if_expr_37 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_38)
          tmp_if_expr_41 = (_Bool)1;

        else
        {
          return_value_strcmp_39=strcmp(tokens[(signed long int)0].value, "append");
          if(return_value_strcmp_39 == 0)
          {
            comm = 4;
            tmp_if_expr_40 = comm != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_40 = (_Bool)0;
          tmp_if_expr_41 = tmp_if_expr_40 ? (_Bool)1 : (_Bool)0;
        }
        tmp_if_expr_42 = tmp_if_expr_41 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_42 = (_Bool)0;
      if(tmp_if_expr_42)
        process_update_command(c, tokens, ntokens, comm);

      else
      {
        if(ntokens == 4ul)
        {
          return_value_strcmp_26=strcmp(tokens[(signed long int)0].value, "incr");
          tmp_if_expr_27 = return_value_strcmp_26 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_27 = (_Bool)0;
        if(tmp_if_expr_27)
          process_arithmetic_command(c, tokens, ntokens, (const _Bool)1);

        else
        {
          if(ntokens == 4ul)
          {
            return_value_strcmp_24=strcmp(tokens[(signed long int)0].value, "decr");
            tmp_if_expr_25 = return_value_strcmp_24 == 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_25 = (_Bool)0;
          if(tmp_if_expr_25)
            process_arithmetic_command(c, tokens, ntokens, (const _Bool)0);

          else
          {
            if(ntokens >= 3ul && !(ntokens >= 5ul))
            {
              return_value_strcmp_22=strcmp(tokens[(signed long int)0].value, "delete");
              tmp_if_expr_23 = return_value_strcmp_22 == 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_23 = (_Bool)0;
            if(tmp_if_expr_23)
              process_delete_command(c, tokens, ntokens);

            else
            {
              if(ntokens >= 2ul)
              {
                return_value_strcmp_20=strcmp(tokens[(signed long int)0].value, "stats");
                tmp_if_expr_21 = return_value_strcmp_20 == 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_21 = (_Bool)0;
              if(tmp_if_expr_21)
                process_stat(c, tokens, ntokens);

              else
              {
                if(ntokens >= 2ul && !(ntokens >= 4ul))
                {
                  return_value_strcmp_18=strcmp(tokens[(signed long int)0].value, "flush_all");
                  tmp_if_expr_19 = return_value_strcmp_18 == 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr_19 = (_Bool)0;
                if(tmp_if_expr_19)
                {
                  out_string(c, "OK");
                  goto __CPROVER_DUMP_L64;
                }

                else
                {
                  if(ntokens == 2ul)
                  {
                    return_value_strcmp_16=strcmp(tokens[(signed long int)0].value, "version");
                    tmp_if_expr_17 = return_value_strcmp_16 == 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr_17 = (_Bool)0;
                  if(tmp_if_expr_17)
                    out_string(c, "VERSION 1.2.0");

                  else
                  {
                    if(ntokens == 2ul)
                    {
                      return_value_strcmp_14=strcmp(tokens[(signed long int)0].value, "quit");
                      tmp_if_expr_15 = return_value_strcmp_14 == 0 ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr_15 = (_Bool)0;
                    if(tmp_if_expr_15)
                      conn_set_state(c, 5);

                    else
                    {
                      if(ntokens == 3ul)
                      {
                        return_value_strcmp_12=strcmp(tokens[(signed long int)0].value, "verbosity");
                        tmp_if_expr_13 = return_value_strcmp_12 == 0 ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr_13 = (_Bool)0;
                      if(tmp_if_expr_13)
                        process_verbosity_command(c, tokens, ntokens);

                      else
                      {
                        if(ntokens == 3ul)
                        {
                          return_value_strcmp_8=strcmp(tokens[(signed long int)0].value, "rep_set_ack_policy");
                          if(return_value_strcmp_8 == 0)
                            tmp_if_expr_10 = (_Bool)1;

                          else
                          {
                            return_value_strcmp_9=strcmp(tokens[(signed long int)0].value, "rep_set_priority");
                            tmp_if_expr_10 = return_value_strcmp_9 == 0 ? (_Bool)1 : (_Bool)0;
                          }
                          tmp_if_expr_11 = tmp_if_expr_10 ? (_Bool)1 : (_Bool)0;
                        }

                        else
                          tmp_if_expr_11 = (_Bool)0;
                        if(tmp_if_expr_11)
                          process_rep_command(c, tokens, ntokens);

                        else
                        {
                          if(ntokens == 2ul)
                          {
                            return_value_strcmp_2=strcmp(tokens[(signed long int)0].value, "db_archive");
                            if(return_value_strcmp_2 == 0)
                              tmp_if_expr_4 = (_Bool)1;

                            else
                            {
                              return_value_strcmp_3=strcmp(tokens[(signed long int)0].value, "db_checkpoint");
                              tmp_if_expr_4 = return_value_strcmp_3 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_4)
                              tmp_if_expr_6 = (_Bool)1;

                            else
                            {
                              return_value_strcmp_5=strcmp(tokens[(signed long int)0].value, "db_compact");
                              tmp_if_expr_6 = return_value_strcmp_5 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
                          }

                          else
                            tmp_if_expr_7 = (_Bool)0;
                          if(tmp_if_expr_7)
                            process_bdb_command(c, tokens, ntokens);

                          else
                            out_string(c, "ERROR");
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
    goto __CPROVER_DUMP_L64;
  }

__CPROVER_DUMP_L64:
  ;
}

// process_delete_command
// file memcachedb.c line 1168
static void process_delete_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens)
{
  char *key;
  unsigned long int nkey;
  signed int ret;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  key = (tokens + (signed long int)1)->value;
  nkey = (tokens + (signed long int)1)->length;
  if(nkey >= 251ul)
    out_string(c, "CLIENT_ERROR bad command line format");

  else
  {
    ret=item_delete(key, nkey);
    if(!(ret == 0))
    {
      if(ret == 1)
        goto __CPROVER_DUMP_L3;

      if(ret == -1)
        goto __CPROVER_DUMP_L4;

    }

    else
    {
      out_string(c, "DELETED");
      goto __CPROVER_DUMP_L6;

    __CPROVER_DUMP_L3:
      ;
      out_string(c, "NOT_FOUND");
      goto __CPROVER_DUMP_L6;

    __CPROVER_DUMP_L4:
      ;
      out_string(c, "SERVER_ERROR while delete a item");
      goto __CPROVER_DUMP_L6;
    }
    out_string(c, "SERVER_ERROR nothing to do");

  __CPROVER_DUMP_L6:
    ;
    goto __CPROVER_DUMP_L7;
  }

__CPROVER_DUMP_L7:
  ;
}

// process_get_command
// file memcachedb.c line 914
static inline void process_get_command(struct conn *c, struct token_s *tokens, unsigned long int ntokens)
{
  char *key;
  unsigned long int nkey;
  signed int i = 0;
  struct _stritem *it = (struct _stritem *)(void *)0;
  struct token_s *key_token = &tokens[(signed long int)1];
  signed int stats_get_cmds = 0;
  signed int stats_get_hits = 0;
  signed int stats_get_misses = 0;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);

__CPROVER_DUMP_L1:
  ;
  _Bool tmp_if_expr_4;
  signed int return_value_add_iov_3;
  _Bool tmp_if_expr_6;
  signed int return_value_add_iov_5;
  while((_Bool)1)
  {
    if(!(key_token->length == 0ul))
    {
      key = key_token->value;
      nkey = key_token->length;
      if(nkey >= 251ul)
      {
        mt_stats_lock();
        stats.get_cmds = stats.get_cmds + (unsigned long int)stats_get_cmds;
        stats.get_hits = stats.get_hits + (unsigned long int)stats_get_hits;
        stats.get_misses = stats.get_misses + (unsigned long int)stats_get_misses;
        mt_stats_unlock();
        out_string(c, "CLIENT_ERROR bad command line format");
        goto __CPROVER_DUMP_L25;
      }

      stats_get_cmds = stats_get_cmds + 1;
      it=item_get(key, nkey);
      if(!(it == ((struct _stritem *)NULL)))
      {
        if(i >= c->isize)
        {
          struct _stritem **new_list;
          void *return_value_realloc_1;
          return_value_realloc_1=realloc((void *)c->ilist, sizeof(struct _stritem *) /*8ul*/  * (unsigned long int)c->isize * (unsigned long int)2);
          new_list = (struct _stritem **)return_value_realloc_1;
          if(!(new_list == ((struct _stritem **)NULL)))
          {
            c->isize = c->isize * 2;
            c->ilist = new_list;
          }

          else
          {
            item_free(it);
            it = (struct _stritem *)(void *)0;
            goto __CPROVER_DUMP_L14;
          }
        }

        signed int return_value_add_iov_2;
        return_value_add_iov_2=add_iov(c, (const void *)"VALUE ", 6);
        if(!(return_value_add_iov_2 == 0))
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_add_iov_3=add_iov(c, (const void *)(char *)&it->end[(signed long int)0], (signed int)it->nkey);
          tmp_if_expr_4 = return_value_add_iov_3 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          return_value_add_iov_5=add_iov(c, (const void *)((char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1), (signed int)it->nsuffix + it->nbytes);
          tmp_if_expr_6 = return_value_add_iov_5 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
        {
          item_free(it);
          it = (struct _stritem *)(void *)0;
          goto __CPROVER_DUMP_L14;
        }

        if(settings.verbose >= 2)
          fprintf(stderr, ">%d sending key %s\n", c->sfd, (char *)&it->end[(signed long int)0]);

        stats_get_hits = stats_get_hits + 1;
        c->ilist[(signed long int)i] = it;
        i = i + 1;
      }

      else
        stats_get_misses = stats_get_misses + 1;
      key_token = key_token + 1l;
      goto __CPROVER_DUMP_L1;
    }


  __CPROVER_DUMP_L14:
    ;
    if(!(key_token->value == ((char *)NULL)))
    {
      ntokens=tokenize_command(key_token->value, tokens, (const unsigned long int)8);
      key_token = tokens;
    }

    if(key_token->value == ((char *)NULL))
      break;

  }
  c->icurr = c->ilist;
  c->ileft = i;
  if(settings.verbose >= 2)
    fprintf(stderr, ">%d END\n", c->sfd);

  _Bool tmp_if_expr_8;
  signed int return_value_add_iov_7;
  if(!(key_token->value == ((char *)NULL)))
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_add_iov_7=add_iov(c, (const void *)"END\r\n", 5);
    tmp_if_expr_8 = return_value_add_iov_7 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_10;
  signed int return_value_build_udp_headers_9;
  if(tmp_if_expr_8)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    if(!(c->udp == (_Bool)0))
    {
      return_value_build_udp_headers_9=build_udp_headers(c);
      tmp_if_expr_10 = return_value_build_udp_headers_9 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_10 = (_Bool)0;
    tmp_if_expr_11 = tmp_if_expr_10 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_11)
    out_string(c, "SERVER_ERROR out of memory writing get response");

  else
  {
    conn_set_state(c, 6);
    c->msgcurr = 0;
  }
  mt_stats_lock();
  stats.get_cmds = stats.get_cmds + (unsigned long int)stats_get_cmds;
  stats.get_hits = stats.get_hits + (unsigned long int)stats_get_hits;
  stats.get_misses = stats.get_misses + (unsigned long int)stats_get_misses;
  mt_stats_unlock();
  goto __CPROVER_DUMP_L25;

__CPROVER_DUMP_L25:
  ;
}

// process_rep_command
// file memcachedb.c line 1210
static void process_rep_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  _Bool tmp_if_expr_8;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  if(!(bdb_settings.is_replicated == 0))
  {
    if(ntokens == 3ul)
    {
      return_value_strcmp_7=strcmp((tokens + (signed long int)0)->value, "rep_set_priority");
      tmp_if_expr_8 = return_value_strcmp_7 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_8 = (_Bool)0;
    if(tmp_if_expr_8)
    {
      signed int priority;
      unsigned long int return_value_strtoul_1;
      return_value_strtoul_1=strtoul((tokens + (signed long int)1)->value, (char ** restrict )(void *)0, 10);
      priority = (signed int)return_value_strtoul_1;
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 34 || !(priority >= 0))
      {
        out_string(c, "CLIENT_ERROR bad command line format");
        goto __CPROVER_DUMP_L13;
      }

      bdb_settings.rep_priority = (unsigned int)(priority > 1000000 ? 1000000 : priority);
      signed int return_value;
      return_value=env->rep_set_priority(env, bdb_settings.rep_priority);
      if(!(return_value == 0))
        out_string(c, "SERVER_ERROR env->rep_set_priority");

      out_string(c, "OK");
    }

    else
    {
      if(ntokens == 3ul)
      {
        return_value_strcmp_5=strcmp((tokens + (signed long int)0)->value, "rep_set_ack_policy");
        tmp_if_expr_6 = return_value_strcmp_5 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
      {
        signed int ack_policy;
        unsigned long int return_value_strtoul_3;
        return_value_strtoul_3=strtoul((tokens + (signed long int)1)->value, (char ** restrict )(void *)0, 10);
        ack_policy = (signed int)return_value_strtoul_3;
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        if(*return_value___errno_location_4 == 34 || !(ack_policy >= 1))
        {
          out_string(c, "CLIENT_ERROR bad command line format");
          goto __CPROVER_DUMP_L13;
        }

        bdb_settings.rep_ack_policy = ack_policy > 6 ? 6 : ack_policy;
        signed int return_value_1;
        return_value_1=env->repmgr_set_ack_policy(env, bdb_settings.rep_ack_policy);
        if(!(return_value_1 == 0))
          out_string(c, "SERVER_ERROR env->repmgr_set_ack_policy");

        out_string(c, "OK");
      }

      else
        out_string(c, "ERROR");
    }
  }

  else
    out_string(c, "ERROR");

__CPROVER_DUMP_L13:
  ;
}

// process_stat
// file memcachedb.c line 815
static void process_stat(struct conn *c, struct token_s *tokens, const unsigned long int ntokens)
{
  signed long int now;
  now=time(((signed long int *)NULL));
  char *command;
  char *subcommand;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  signed int return_value_strcmp_20;
  if(!(ntokens >= 2ul))
    out_string(c, "CLIENT_ERROR bad command line");

  else
  {
    command = (tokens + (signed long int)0)->value;
    if(ntokens == 2ul)
    {
      return_value_strcmp_20=strcmp(command, "stats");
      if(return_value_strcmp_20 == 0)
      {
        char process_stat__1__2__temp[1024l];
        signed int pid;
        pid=getpid();
        char *pos = process_stat__1__2__temp;
        struct rusage process_stat__1__2__usage;
        getrusage(0, &process_stat__1__2__usage);
        mt_stats_lock();
        signed int return_value_sprintf_1;
        return_value_sprintf_1=sprintf(pos, "STAT pid %u\r\n", pid);
        pos = pos + (signed long int)return_value_sprintf_1;
        signed int return_value_sprintf_2;
        return_value_sprintf_2=sprintf(pos, "STAT uptime %ld\r\n", now - stats.started);
        pos = pos + (signed long int)return_value_sprintf_2;
        signed int return_value_sprintf_3;
        return_value_sprintf_3=sprintf(pos, "STAT time %ld\r\n", now);
        pos = pos + (signed long int)return_value_sprintf_3;
        signed int return_value_sprintf_4;
        return_value_sprintf_4=sprintf(pos, "STAT version 1.2.0\r\n");
        pos = pos + (signed long int)return_value_sprintf_4;
        signed int return_value_sprintf_5;
        return_value_sprintf_5=sprintf(pos, "STAT pointer_size %d\r\n", (unsigned long int)8 * sizeof(void *) /*8ul*/ );
        pos = pos + (signed long int)return_value_sprintf_5;
        signed int return_value_sprintf_6;
        return_value_sprintf_6=sprintf(pos, "STAT rusage_user %ld.%06ld\r\n", process_stat__1__2__usage.ru_utime.tv_sec, process_stat__1__2__usage.ru_utime.tv_usec);
        pos = pos + (signed long int)return_value_sprintf_6;
        signed int return_value_sprintf_7;
        return_value_sprintf_7=sprintf(pos, "STAT rusage_system %ld.%06ld\r\n", process_stat__1__2__usage.ru_stime.tv_sec, process_stat__1__2__usage.ru_stime.tv_usec);
        pos = pos + (signed long int)return_value_sprintf_7;
        signed int return_value_sprintf_8;
        return_value_sprintf_8=sprintf(pos, "STAT ibuffer_size %u\r\n", settings.item_buf_size);
        pos = pos + (signed long int)return_value_sprintf_8;
        signed int return_value_sprintf_9;
        return_value_sprintf_9=sprintf(pos, "STAT curr_connections %u\r\n", stats.curr_conns - (unsigned int)1);
        pos = pos + (signed long int)return_value_sprintf_9;
        signed int return_value_sprintf_10;
        return_value_sprintf_10=sprintf(pos, "STAT total_connections %u\r\n", stats.total_conns);
        pos = pos + (signed long int)return_value_sprintf_10;
        signed int return_value_sprintf_11;
        return_value_sprintf_11=sprintf(pos, "STAT connection_structures %u\r\n", stats.conn_structs);
        pos = pos + (signed long int)return_value_sprintf_11;
        signed int return_value_sprintf_12;
        return_value_sprintf_12=sprintf(pos, "STAT cmd_get %llu\r\n", stats.get_cmds);
        pos = pos + (signed long int)return_value_sprintf_12;
        signed int return_value_sprintf_13;
        return_value_sprintf_13=sprintf(pos, "STAT cmd_set %llu\r\n", stats.set_cmds);
        pos = pos + (signed long int)return_value_sprintf_13;
        signed int return_value_sprintf_14;
        return_value_sprintf_14=sprintf(pos, "STAT get_hits %llu\r\n", stats.get_hits);
        pos = pos + (signed long int)return_value_sprintf_14;
        signed int return_value_sprintf_15;
        return_value_sprintf_15=sprintf(pos, "STAT get_misses %llu\r\n", stats.get_misses);
        pos = pos + (signed long int)return_value_sprintf_15;
        signed int return_value_sprintf_16;
        return_value_sprintf_16=sprintf(pos, "STAT bytes_read %llu\r\n", stats.bytes_read);
        pos = pos + (signed long int)return_value_sprintf_16;
        signed int return_value_sprintf_17;
        return_value_sprintf_17=sprintf(pos, "STAT bytes_written %llu\r\n", stats.bytes_written);
        pos = pos + (signed long int)return_value_sprintf_17;
        signed int return_value_sprintf_18;
        return_value_sprintf_18=sprintf(pos, "STAT threads %u\r\n", settings.num_threads);
        pos = pos + (signed long int)return_value_sprintf_18;
        signed int return_value_sprintf_19;
        return_value_sprintf_19=sprintf(pos, "END");
        pos = pos + (signed long int)return_value_sprintf_19;
        mt_stats_unlock();
        out_string(c, process_stat__1__2__temp);
        goto __CPROVER_DUMP_L10;
      }

    }

    subcommand = (tokens + (signed long int)1)->value;
    signed int return_value_strcmp_21;
    return_value_strcmp_21=strcmp(subcommand, "reset");
    if(return_value_strcmp_21 == 0)
    {
      stats_reset();
      out_string(c, "RESET");
    }

    else
    {
      signed int return_value_strcmp_22;
      return_value_strcmp_22=strcmp(subcommand, "bdb");
      if(return_value_strcmp_22 == 0)
      {
        char temp[512l];
        stats_bdb(temp);
        out_string(c, temp);
        goto __CPROVER_DUMP_L10;
      }

      if(!(bdb_settings.is_replicated == 0))
      {
        signed int return_value_strcmp_23;
        return_value_strcmp_23=strcmp(subcommand, "rep");
        if(return_value_strcmp_23 == 0)
        {
          char process_stat__1__5__1__temp[2048l];
          stats_rep(process_stat__1__5__1__temp);
          out_string(c, process_stat__1__5__1__temp);
          goto __CPROVER_DUMP_L10;
        }

        signed int return_value_strcmp_24;
        return_value_strcmp_24=strcmp(subcommand, "repmgr");
        if(return_value_strcmp_24 == 0)
        {
          char process_stat__1__5__2__temp[256l];
          stats_repmgr(process_stat__1__5__2__temp);
          out_string(c, process_stat__1__5__2__temp);
          goto __CPROVER_DUMP_L10;
        }

        signed int return_value_strcmp_25;
        return_value_strcmp_25=strcmp(subcommand, "repcfg");
        if(return_value_strcmp_25 == 0)
        {
          char process_stat__1__5__3__temp[512l];
          stats_repcfg(process_stat__1__5__3__temp);
          out_string(c, process_stat__1__5__3__temp);
          goto __CPROVER_DUMP_L10;
        }

        signed int return_value_strcmp_26;
        return_value_strcmp_26=strcmp(subcommand, "repms");
        if(return_value_strcmp_26 == 0)
        {
          char process_stat__1__5__4__temp[256l];
          stats_repms(process_stat__1__5__4__temp);
          out_string(c, process_stat__1__5__4__temp);
          goto __CPROVER_DUMP_L10;
        }

      }

      out_string(c, "ERROR");
    }
  }

__CPROVER_DUMP_L10:
  ;
}

// process_update_command
// file memcachedb.c line 1029
static void process_update_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens, signed int comm)
{
  char *key;
  unsigned long int nkey;
  signed int flags;
  signed long int exptime;
  signed int vlen;
  struct _stritem *it = (struct _stritem *)(void *)0;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  if((tokens + 1l)->length >= 251ul)
    out_string(c, "CLIENT_ERROR bad command line format");

  else
  {
    key = (tokens + (signed long int)1)->value;
    nkey = (tokens + (signed long int)1)->length;
    unsigned long int return_value_strtoul_1;
    return_value_strtoul_1=strtoul((tokens + (signed long int)2)->value, (char ** restrict )(void *)0, 10);
    flags = (signed int)return_value_strtoul_1;
    exptime=strtol((tokens + (signed long int)3)->value, (char ** restrict )(void *)0, 10);
    signed long int return_value_strtol_2;
    return_value_strtol_2=strtol((tokens + (signed long int)4)->value, (char ** restrict )(void *)0, 10);
    vlen = (signed int)(return_value_strtol_2 + (signed long int)2);
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 34)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      if(flags == 0 || exptime == 0l)
      {
        return_value___errno_location_4=__errno_location();
        tmp_if_expr_5 = *return_value___errno_location_4 == 22 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }
    if(!(vlen + -2 >= 0) || !(vlen >= 0) || tmp_if_expr_6)
      out_string(c, "CLIENT_ERROR bad command line format");

    else
    {
      it=item_alloc1(key, nkey, flags, vlen);
      if(it == ((struct _stritem *)NULL))
      {
        out_string(c, "SERVER_ERROR out of memory storing object");
        c->write_and_go = 4;
        c->sbytes = vlen;
      }

      else
      {
        c->item = (void *)it;
        c->ritem = (char *)&it->end[(signed long int)0] + (signed long int)it->nkey + (signed long int)1 + (signed long int)it->nsuffix;
        c->rlbytes = it->nbytes;
        c->item_comm = comm;
        conn_set_state(c, 3);
      }
    }
  }
}

// process_verbosity_command
// file memcachedb.c line 1195
static void process_verbosity_command(struct conn *c, struct token_s *tokens, const unsigned long int ntokens)
{
  unsigned int level;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  unsigned long int return_value_strtoul_1;
  return_value_strtoul_1=strtoul((tokens + (signed long int)1)->value, (char ** restrict )(void *)0, 10);
  level = (unsigned int)return_value_strtoul_1;
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  if(*return_value___errno_location_2 == 34)
    out_string(c, "CLIENT_ERROR bad command line format");

  else
  {
    settings.verbose = (signed int)(level > (unsigned int)2 ? (unsigned int)2 : level);
    out_string(c, "OK");
    goto __CPROVER_DUMP_L2;
  }

__CPROVER_DUMP_L2:
  ;
}

// remove_pidfile
// file memcachedb.c line 2277
static void remove_pidfile(const char *pid_file)
{
  if(!(pid_file == ((const char *)NULL)))
  {
    signed int return_value_unlink_1;
    return_value_unlink_1=unlink(pid_file);
    if(!(return_value_unlink_1 == 0))
      fprintf(stderr, "Could not remove the pid file %s.\n", pid_file);

  }

}

// save_pid
// file memcachedb.c line 2260
static void save_pid(const signed int pid, const char *pid_file)
{
  struct _IO_FILE *fp;
  if(!(pid_file == ((const char *)NULL)))
  {
    fp=fopen(pid_file, "w");
    if(fp == ((struct _IO_FILE *)NULL))
      fprintf(stderr, "Could not open the pid file %s for writing\n", pid_file);

    else
    {
      fprintf(fp, "%ld\n", (signed long int)pid);
      signed int return_value_fclose_1;
      return_value_fclose_1=fclose(fp);
      if(return_value_fclose_1 == -1)
        fprintf(stderr, "Could not close the pid file %s.\n", pid_file);

    }
  }

}

// server_socket
// file memcachedb.c line 1924
static signed int server_socket(const signed int port, const _Bool is_udp)
{
  signed int sfd;
  struct linger ling = { .l_onoff=0, .l_linger=0 };
  struct addrinfo *ai;
  struct addrinfo *next;
  struct addrinfo hints;
  char port_buf[32l];
  signed int error;
  signed int success = 0;
  signed int flags = 1;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_flags = 0x0001 | 0x0020;
  if(!(is_udp == (_Bool)0))
  {
    hints.ai_protocol = 17;
    hints.ai_socktype = 2;
    hints.ai_family = 2;
  }

  else
  {
    hints.ai_family = 0;
    hints.ai_protocol = 6;
    hints.ai_socktype = 1;
  }
  snprintf(port_buf, (unsigned long int)32, "%d", port);
  error=getaddrinfo(settings.inter, port_buf, &hints, &ai);
  const char *return_value_gai_strerror_1;
  if(!(error == 0))
  {
    if(!(error == -11))
    {
      return_value_gai_strerror_1=gai_strerror(error);
      fprintf(stderr, "getaddrinfo(): %s\n", return_value_gai_strerror_1);
    }

    else
      perror("getaddrinfo()");
    return 1;
  }

  next = ai;
  signed int return_value_listen_3;
  for( ; !(next == ((struct addrinfo *)NULL)); next = next->ai_next)
  {
    struct conn *listen_conn_add;
    sfd=new_socket(next);
    if(sfd == -1)
    {
      freeaddrinfo(ai);
      return 1;
    }

    setsockopt(sfd, 1, 2, (void *)&flags, (unsigned int)sizeof(signed int) /*4ul*/ );
    if(!(is_udp == (_Bool)0))
      maximize_sndbuf(sfd);

    else
    {
      setsockopt(sfd, 1, 9, (void *)&flags, (unsigned int)sizeof(signed int) /*4ul*/ );
      setsockopt(sfd, 1, 13, (void *)&ling, (unsigned int)sizeof(struct linger) /*8ul*/ );
      setsockopt(sfd, 6, 1, (void *)&flags, (unsigned int)sizeof(signed int) /*4ul*/ );
    }
    signed int return_value_bind_4;
    return_value_bind_4=bind(sfd, next->ai_addr, next->ai_addrlen);
    if(return_value_bind_4 == -1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      if(!(*return_value___errno_location_2 == 98))
      {
        perror("bind()");
        close(sfd);
        freeaddrinfo(ai);
        return 1;
      }

      close(sfd);
      goto __CPROVER_DUMP_L19;
    }

    else
    {
      success = success + 1;
      if(is_udp == (_Bool)0)
      {
        return_value_listen_3=listen(sfd, 1024);
        if(return_value_listen_3 == -1)
        {
          perror("listen()");
          close(sfd);
          freeaddrinfo(ai);
          return 1;
        }

      }

    }
    if(!(is_udp == (_Bool)0))
    {
      signed int c = 0;
      for( ; !(c >= settings.num_threads); c = c + 1)
        dispatch_conn_new(sfd, 1, 0x02 | 0x10, 65536, 1);
    }

    else
    {
      listen_conn_add=conn_new(sfd, 0, 0x02 | 0x10, 1, (const _Bool)0, main_base);
      if(listen_conn_add == ((struct conn *)NULL))
      {
        fprintf(stderr, "failed to create listening connection\n");
        exit(1);
      }

      listen_conn_add->next = listen_conn;
      listen_conn = listen_conn_add;
    }

  __CPROVER_DUMP_L19:
    ;
  }
  freeaddrinfo(ai);
  return (signed int)(success == 0);
}

// server_socket_unix
// file memcachedb.c line 2044
static signed int server_socket_unix(const char *path, signed int access_mask)
{
  signed int sfd;
  struct linger ling = { .l_onoff=0, .l_linger=0 };
  struct sockaddr_un addr;
  struct stat tstat;
  signed int flags = 1;
  signed int old_umask;
  if(path == ((const char *)NULL))
    return 1;

  else
  {
    sfd=new_socket_unix();
    if(sfd == -1)
      return 1;

    else
    {
      signed int return_value_lstat_1;
      return_value_lstat_1=lstat(path, &tstat);
      if(return_value_lstat_1 == 0)
      {
        if((61440u & tstat.st_mode) == 49152u)
          unlink(path);

      }

      setsockopt(sfd, 1, 2, (void *)&flags, (unsigned int)sizeof(signed int) /*4ul*/ );
      setsockopt(sfd, 1, 9, (void *)&flags, (unsigned int)sizeof(signed int) /*4ul*/ );
      setsockopt(sfd, 1, 13, (void *)&ling, (unsigned int)sizeof(struct linger) /*8ul*/ );
      memset((void *)&addr, 0, sizeof(struct sockaddr_un) /*110ul*/ );
      addr.sun_family = (unsigned short int)1;
      strcpy(addr.sun_path, path);
      unsigned int return_value_umask_2;
      return_value_umask_2=umask((unsigned int)~(access_mask & 0777));
      old_umask = (signed int)return_value_umask_2;
      signed int return_value_bind_3;
      return_value_bind_3=bind(sfd, (struct sockaddr *)&addr, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
      if(return_value_bind_3 == -1)
      {
        perror("bind()");
        close(sfd);
        umask((unsigned int)old_umask);
        return 1;
      }

      else
      {
        umask((unsigned int)old_umask);
        signed int return_value_listen_4;
        return_value_listen_4=listen(sfd, 1024);
        if(return_value_listen_4 == -1)
        {
          perror("listen()");
          close(sfd);
          return 1;
        }

        else
        {
          listen_conn=conn_new(sfd, 0, 0x02 | 0x10, 1, (const _Bool)0, main_base);
          if(listen_conn == ((struct conn *)NULL))
          {
            fprintf(stderr, "failed to create listening connection\n");
            exit(1);
          }

          return 0;
        }
      }
    }
  }
}

// settings_init
// file memcachedb.c line 140
static void settings_init(void)
{
  settings.access = 0700;
  settings.port = 21201;
  settings.udpport = 0;
  settings.inter = (char *)(void *)0;
  settings.item_buf_size = (unsigned long int)512;
  settings.maxconns = 1024;
  settings.verbose = 0;
  settings.socketpath = (char *)(void *)0;
  settings.num_threads = 4;
}

// setup_thread
// file thread.c line 294
static void setup_thread(struct anonymous_48 *me)
{
  if(me->base == ((struct event_base *)NULL))
  {
    me->base=event_init();
    if(me->base == ((struct event_base *)NULL))
    {
      fprintf(stderr, "Can't allocate event base\n");
      exit(1);
    }

  }

  event_set(&me->notify_event, me->notify_receive_fd, (signed short int)(0x02 | 0x10), thread_libevent_process, (void *)me);
  event_base_set(me->base, &me->notify_event);
  signed int return_value_event_add_1;
  return_value_event_add_1=event_add(&me->notify_event, ((struct timeval *)NULL));
  if(return_value_event_add_1 == -1)
  {
    fprintf(stderr, "Can't monitor libevent notify pipe\n");
    exit(1);
  }

  cq_init(&me->new_conn_queue);
}

// sig_handler
// file memcachedb.c line 2288
static void sig_handler(const signed int sig)
{
  if(sig == 2 || sig == 3 || sig == 15)
  {
    daemon_quit = 1;
    fprintf(stderr, "Signal %d handled, memcacahedb is now exit..\n", sig);
    sleep((unsigned int)2);
    exit(0);
  }

}

// start_chkpoint_thread
// file memcachedb.h line 283
void start_chkpoint_thread(void)
{
  if(bdb_settings.chkpoint_val >= 1)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3=pthread_create(&chk_ptid, (const union pthread_attr_t *)(void *)0, bdb_chkpoint_thread, (void *)env);
    if(!(*return_value___errno_location_3 == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "failed spawning checkpoint thread: %s\n", return_value_strerror_2);
      exit(1);
    }

  }

}

// start_dl_detect_thread
// file memcachedb.h line 285
void start_dl_detect_thread(void)
{
  if(bdb_settings.dldetect_val >= 1)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3=pthread_create(&dld_ptid, (const union pthread_attr_t *)(void *)0, bdb_dl_detect_thread, (void *)env);
    if(!(*return_value___errno_location_3 == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "failed spawning deadlock thread: %s\n", return_value_strerror_2);
      exit(1);
    }

  }

}

// start_memp_trickle_thread
// file memcachedb.h line 284
void start_memp_trickle_thread(void)
{
  if(bdb_settings.memp_trickle_val >= 1)
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3=pthread_create(&mtri_ptid, (const union pthread_attr_t *)(void *)0, bdb_memp_trickle_thread, (void *)env);
    if(!(*return_value___errno_location_3 == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      fprintf(stderr, "failed spawning memp_trickle thread: %s\n", return_value_strerror_2);
      exit(1);
    }

  }

}

// stats_bdb
// file memcachedb.h line 303
void stats_bdb(char *temp)
{
  char *pos = temp;
  signed int ret;
  signed int return_value_sprintf_1;
  return_value_sprintf_1=sprintf(pos, "STAT db_ver %d.%d.%d\r\n", bdb_version.majver, bdb_version.minver, bdb_version.patch);
  pos = pos + (signed long int)return_value_sprintf_1;
  ret=dbp->get_pagesize(dbp, &bdb_settings.page_size);
  if(ret == 0)
  {
    signed int return_value_sprintf_2;
    return_value_sprintf_2=sprintf(pos, "STAT page_size %u\r\n", bdb_settings.page_size);
    pos = pos + (signed long int)return_value_sprintf_2;
  }

  ret=dbp->get_type(dbp, &bdb_settings.db_type);
  if(ret == 0)
  {
    if((signed int)bdb_settings.db_type == DB_BTREE)
    {
      signed int return_value_sprintf_3;
      return_value_sprintf_3=sprintf(pos, "STAT db_type btree\r\n");
      pos = pos + (signed long int)return_value_sprintf_3;
    }

    else
      if((signed int)bdb_settings.db_type == DB_HASH)
      {
        signed int return_value_sprintf_4;
        return_value_sprintf_4=sprintf(pos, "STAT db_type hash\r\n");
        pos = pos + (signed long int)return_value_sprintf_4;
      }

  }

  signed int return_value_sprintf_5;
  return_value_sprintf_5=sprintf(pos, "STAT cache_size %u\r\n", bdb_settings.cache_size);
  pos = pos + (signed long int)return_value_sprintf_5;
  signed int return_value_sprintf_6;
  return_value_sprintf_6=sprintf(pos, "STAT txn_lg_bsize %u\r\n", bdb_settings.txn_lg_bsize);
  pos = pos + (signed long int)return_value_sprintf_6;
  signed int return_value_sprintf_7;
  return_value_sprintf_7=sprintf(pos, "STAT txn_nosync %d\r\n", bdb_settings.txn_nosync);
  pos = pos + (signed long int)return_value_sprintf_7;
  signed int return_value_sprintf_8;
  return_value_sprintf_8=sprintf(pos, "STAT dldetect_val %d\r\n", bdb_settings.dldetect_val);
  pos = pos + (signed long int)return_value_sprintf_8;
  signed int return_value_sprintf_9;
  return_value_sprintf_9=sprintf(pos, "STAT chkpoint_val %d\r\n", bdb_settings.chkpoint_val);
  pos = pos + (signed long int)return_value_sprintf_9;
  signed int return_value_sprintf_10;
  return_value_sprintf_10=sprintf(pos, "STAT memp_trickle_val %d\r\n", bdb_settings.memp_trickle_val);
  pos = pos + (signed long int)return_value_sprintf_10;
  signed int return_value_sprintf_11;
  return_value_sprintf_11=sprintf(pos, "STAT memp_trickle_percent %d\r\n", bdb_settings.memp_trickle_percent);
  pos = pos + (signed long int)return_value_sprintf_11;
  signed int return_value_sprintf_12;
  return_value_sprintf_12=sprintf(pos, "END");
  pos = pos + (signed long int)return_value_sprintf_12;
}

// stats_init
// file memcachedb.c line 120
static void stats_init(void)
{
  stats.conn_structs = (unsigned int)0;
  stats.total_conns = stats.conn_structs;
  stats.curr_conns = stats.total_conns;
  stats.get_misses = (unsigned long int)0;
  stats.get_hits = stats.get_misses;
  stats.set_cmds = stats.get_hits;
  stats.get_cmds = stats.set_cmds;
  stats.bytes_written = (unsigned long int)0;
  stats.bytes_read = stats.bytes_written;
  signed long int return_value_time_1;
  return_value_time_1=time(((signed long int *)NULL));
  stats.started = return_value_time_1 - (signed long int)2;
}

// stats_rep
// file memcachedb.h line 304
void stats_rep(char *temp)
{
  char *pos = temp;
  signed int ret;
  struct __db_rep_stat *statp = (struct __db_rep_stat *)(void *)0;
  signed int return_value;
  return_value=env->rep_stat(env, &statp, (unsigned int)0);
  if(return_value == 0)
  {
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(pos, "STAT st_bulk_fills %u\r\n", statp->st_bulk_fills);
    pos = pos + (signed long int)return_value_sprintf_1;
    signed int return_value_sprintf_2;
    return_value_sprintf_2=sprintf(pos, "STAT st_bulk_overflows %u\r\n", statp->st_bulk_overflows);
    pos = pos + (signed long int)return_value_sprintf_2;
    signed int return_value_sprintf_3;
    return_value_sprintf_3=sprintf(pos, "STAT st_bulk_records %u\r\n", statp->st_bulk_records);
    pos = pos + (signed long int)return_value_sprintf_3;
    signed int return_value_sprintf_4;
    return_value_sprintf_4=sprintf(pos, "STAT st_bulk_transfers %u\r\n", statp->st_bulk_transfers);
    pos = pos + (signed long int)return_value_sprintf_4;
    signed int return_value_sprintf_5;
    return_value_sprintf_5=sprintf(pos, "STAT st_client_rerequests %u\r\n", statp->st_client_rerequests);
    pos = pos + (signed long int)return_value_sprintf_5;
    signed int return_value_sprintf_6;
    return_value_sprintf_6=sprintf(pos, "STAT st_client_svc_miss %u\r\n", statp->st_client_svc_miss);
    pos = pos + (signed long int)return_value_sprintf_6;
    signed int return_value_sprintf_7;
    return_value_sprintf_7=sprintf(pos, "STAT st_client_svc_req %u\r\n", statp->st_client_svc_req);
    pos = pos + (signed long int)return_value_sprintf_7;
    signed int return_value_sprintf_8;
    return_value_sprintf_8=sprintf(pos, "STAT st_dupmasters %u\r\n", statp->st_dupmasters);
    pos = pos + (signed long int)return_value_sprintf_8;
    signed int return_value_sprintf_9;
    return_value_sprintf_9=sprintf(pos, "STAT st_egen %u\r\n", statp->st_egen);
    pos = pos + (signed long int)return_value_sprintf_9;
    signed int return_value_sprintf_10;
    return_value_sprintf_10=sprintf(pos, "STAT st_election_cur_winner %u\r\n", statp->st_election_cur_winner);
    pos = pos + (signed long int)return_value_sprintf_10;
    signed int return_value_sprintf_11;
    return_value_sprintf_11=sprintf(pos, "STAT st_election_gen %u\r\n", statp->st_election_gen);
    pos = pos + (signed long int)return_value_sprintf_11;
    signed int return_value_sprintf_12;
    return_value_sprintf_12=sprintf(pos, "STAT st_election_lsn %u/%u\r\n", statp->st_election_lsn.file, statp->st_election_lsn.offset);
    pos = pos + (signed long int)return_value_sprintf_12;
    signed int return_value_sprintf_13;
    return_value_sprintf_13=sprintf(pos, "STAT st_election_nsites %u\r\n", statp->st_election_nsites);
    pos = pos + (signed long int)return_value_sprintf_13;
    signed int return_value_sprintf_14;
    return_value_sprintf_14=sprintf(pos, "STAT st_election_nvotes %u\r\n", statp->st_election_nvotes);
    pos = pos + (signed long int)return_value_sprintf_14;
    signed int return_value_sprintf_15;
    return_value_sprintf_15=sprintf(pos, "STAT st_election_priority %u\r\n", statp->st_election_priority);
    pos = pos + (signed long int)return_value_sprintf_15;
    signed int return_value_sprintf_16;
    return_value_sprintf_16=sprintf(pos, "STAT st_election_sec %u\r\n", statp->st_election_sec);
    pos = pos + (signed long int)return_value_sprintf_16;
    signed int return_value_sprintf_17;
    return_value_sprintf_17=sprintf(pos, "STAT st_election_status %u\r\n", statp->st_election_status);
    pos = pos + (signed long int)return_value_sprintf_17;
    signed int return_value_sprintf_18;
    return_value_sprintf_18=sprintf(pos, "STAT st_election_tiebreaker %u\r\n", statp->st_election_tiebreaker);
    pos = pos + (signed long int)return_value_sprintf_18;
    signed int return_value_sprintf_19;
    return_value_sprintf_19=sprintf(pos, "STAT st_election_usec %u\r\n", statp->st_election_usec);
    pos = pos + (signed long int)return_value_sprintf_19;
    signed int return_value_sprintf_20;
    return_value_sprintf_20=sprintf(pos, "STAT st_election_votes %u\r\n", statp->st_election_votes);
    pos = pos + (signed long int)return_value_sprintf_20;
    signed int return_value_sprintf_21;
    return_value_sprintf_21=sprintf(pos, "STAT st_elections %u\r\n", statp->st_elections);
    pos = pos + (signed long int)return_value_sprintf_21;
    signed int return_value_sprintf_22;
    return_value_sprintf_22=sprintf(pos, "STAT st_elections_won %u\r\n", statp->st_elections_won);
    pos = pos + (signed long int)return_value_sprintf_22;
    signed int return_value_sprintf_23;
    return_value_sprintf_23=sprintf(pos, "STAT st_env_id %u\r\n", statp->st_env_id);
    pos = pos + (signed long int)return_value_sprintf_23;
    signed int return_value_sprintf_24;
    return_value_sprintf_24=sprintf(pos, "STAT st_env_priority %u\r\n", statp->st_env_priority);
    pos = pos + (signed long int)return_value_sprintf_24;
    signed int return_value_sprintf_25;
    return_value_sprintf_25=sprintf(pos, "STAT st_gen %u\r\n", statp->st_gen);
    pos = pos + (signed long int)return_value_sprintf_25;
    signed int return_value_sprintf_26;
    return_value_sprintf_26=sprintf(pos, "STAT st_log_duplicated %u\r\n", statp->st_log_duplicated);
    pos = pos + (signed long int)return_value_sprintf_26;
    signed int return_value_sprintf_27;
    return_value_sprintf_27=sprintf(pos, "STAT st_log_queued %u\r\n", statp->st_log_queued);
    pos = pos + (signed long int)return_value_sprintf_27;
    signed int return_value_sprintf_28;
    return_value_sprintf_28=sprintf(pos, "STAT st_log_queued_max %u\r\n", statp->st_log_queued_max);
    pos = pos + (signed long int)return_value_sprintf_28;
    signed int return_value_sprintf_29;
    return_value_sprintf_29=sprintf(pos, "STAT st_log_queued_total %u\r\n", statp->st_log_queued_total);
    pos = pos + (signed long int)return_value_sprintf_29;
    signed int return_value_sprintf_30;
    return_value_sprintf_30=sprintf(pos, "STAT st_log_records %u\r\n", statp->st_log_records);
    pos = pos + (signed long int)return_value_sprintf_30;
    signed int return_value_sprintf_31;
    return_value_sprintf_31=sprintf(pos, "STAT st_log_requested %u\r\n", statp->st_log_requested);
    pos = pos + (signed long int)return_value_sprintf_31;
    signed int return_value_sprintf_32;
    return_value_sprintf_32=sprintf(pos, "STAT st_master %u\r\n", statp->st_master);
    pos = pos + (signed long int)return_value_sprintf_32;
    signed int return_value_sprintf_33;
    return_value_sprintf_33=sprintf(pos, "STAT st_master_changes %u\r\n", statp->st_master_changes);
    pos = pos + (signed long int)return_value_sprintf_33;
    signed int return_value_sprintf_34;
    return_value_sprintf_34=sprintf(pos, "STAT st_max_lease_sec %u\r\n", statp->st_max_lease_sec);
    pos = pos + (signed long int)return_value_sprintf_34;
    signed int return_value_sprintf_35;
    return_value_sprintf_35=sprintf(pos, "STAT st_max_lease_usec %u\r\n", statp->st_max_lease_usec);
    pos = pos + (signed long int)return_value_sprintf_35;
    signed int return_value_sprintf_36;
    return_value_sprintf_36=sprintf(pos, "STAT st_max_perm_lsn %u/%u\r\n", statp->st_max_perm_lsn.file, statp->st_max_perm_lsn.offset);
    pos = pos + (signed long int)return_value_sprintf_36;
    signed int return_value_sprintf_37;
    return_value_sprintf_37=sprintf(pos, "STAT st_msgs_badgen %u\r\n", statp->st_msgs_badgen);
    pos = pos + (signed long int)return_value_sprintf_37;
    signed int return_value_sprintf_38;
    return_value_sprintf_38=sprintf(pos, "STAT st_msgs_processed %u\r\n", statp->st_msgs_processed);
    pos = pos + (signed long int)return_value_sprintf_38;
    signed int return_value_sprintf_39;
    return_value_sprintf_39=sprintf(pos, "STAT st_msgs_recover %u\r\n", statp->st_msgs_recover);
    pos = pos + (signed long int)return_value_sprintf_39;
    signed int return_value_sprintf_40;
    return_value_sprintf_40=sprintf(pos, "STAT st_msgs_send_failures %u\r\n", statp->st_msgs_send_failures);
    pos = pos + (signed long int)return_value_sprintf_40;
    signed int return_value_sprintf_41;
    return_value_sprintf_41=sprintf(pos, "STAT st_msgs_sent %u\r\n", statp->st_msgs_sent);
    pos = pos + (signed long int)return_value_sprintf_41;
    signed int return_value_sprintf_42;
    return_value_sprintf_42=sprintf(pos, "STAT st_newsites %u\r\n", statp->st_newsites);
    pos = pos + (signed long int)return_value_sprintf_42;
    signed int return_value_sprintf_43;
    return_value_sprintf_43=sprintf(pos, "STAT st_next_lsn %u/%u\r\n", statp->st_next_lsn.file, statp->st_next_lsn.offset);
    pos = pos + (signed long int)return_value_sprintf_43;
    signed int return_value_sprintf_44;
    return_value_sprintf_44=sprintf(pos, "STAT st_next_pg %u\r\n", statp->st_next_pg);
    pos = pos + (signed long int)return_value_sprintf_44;
    signed int return_value_sprintf_45;
    return_value_sprintf_45=sprintf(pos, "STAT st_nsites %u\r\n", statp->st_nsites);
    pos = pos + (signed long int)return_value_sprintf_45;
    signed int return_value_sprintf_46;
    return_value_sprintf_46=sprintf(pos, "STAT st_nthrottles %u\r\n", statp->st_nthrottles);
    pos = pos + (signed long int)return_value_sprintf_46;
    signed int return_value_sprintf_47;
    return_value_sprintf_47=sprintf(pos, "STAT st_outdated %u\r\n", statp->st_outdated);
    pos = pos + (signed long int)return_value_sprintf_47;
    signed int return_value_sprintf_48;
    return_value_sprintf_48=sprintf(pos, "STAT st_pg_duplicated %u\r\n", statp->st_pg_duplicated);
    pos = pos + (signed long int)return_value_sprintf_48;
    signed int return_value_sprintf_49;
    return_value_sprintf_49=sprintf(pos, "STAT st_pg_records %u\r\n", statp->st_pg_records);
    pos = pos + (signed long int)return_value_sprintf_49;
    signed int return_value_sprintf_50;
    return_value_sprintf_50=sprintf(pos, "STAT st_pg_requested %u\r\n", statp->st_pg_requested);
    pos = pos + (signed long int)return_value_sprintf_50;
    signed int return_value_sprintf_51;
    return_value_sprintf_51=sprintf(pos, "STAT st_startsync_delayed %u\r\n", statp->st_startsync_delayed);
    pos = pos + (signed long int)return_value_sprintf_51;
    signed int return_value_sprintf_52;
    return_value_sprintf_52=sprintf(pos, "STAT st_startup_complete %u\r\n", statp->st_startup_complete);
    pos = pos + (signed long int)return_value_sprintf_52;
    signed int return_value_sprintf_53;
    return_value_sprintf_53=sprintf(pos, "STAT st_status %u\r\n", statp->st_status);
    pos = pos + (signed long int)return_value_sprintf_53;
    signed int return_value_sprintf_54;
    return_value_sprintf_54=sprintf(pos, "STAT st_txns_applied %u\r\n", statp->st_txns_applied);
    pos = pos + (signed long int)return_value_sprintf_54;
    signed int return_value_sprintf_55;
    return_value_sprintf_55=sprintf(pos, "STAT st_waiting_lsn %u/%u\r\n", statp->st_waiting_lsn.file, statp->st_waiting_lsn.offset);
    pos = pos + (signed long int)return_value_sprintf_55;
    signed int return_value_sprintf_56;
    return_value_sprintf_56=sprintf(pos, "STAT st_waiting_pg %u\r\n", statp->st_waiting_pg);
    pos = pos + (signed long int)return_value_sprintf_56;
  }

  if(!(statp == ((struct __db_rep_stat *)NULL)))
    free(statp);

  signed int return_value_sprintf_57;
  return_value_sprintf_57=sprintf(pos, "END");
  pos = pos + (signed long int)return_value_sprintf_57;
}

// stats_repcfg
// file memcachedb.h line 306
void stats_repcfg(char *temp)
{
  char *pos = temp;
  signed int ret;
  signed int return_value;
  return_value=env->rep_get_priority(env, &bdb_settings.rep_priority);
  if(return_value == 0)
  {
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(pos, "STAT rep_priority %d\r\n", bdb_settings.rep_priority);
    pos = pos + (signed long int)return_value_sprintf_1;
  }

  signed int return_value_1;
  return_value_1=env->repmgr_get_ack_policy(env, &bdb_settings.rep_ack_policy);
  if(return_value_1 == 0)
  {
    signed int return_value_sprintf_2;
    return_value_sprintf_2=sprintf(pos, "STAT rep_ack_policy %d\r\n", bdb_settings.rep_ack_policy);
    pos = pos + (signed long int)return_value_sprintf_2;
  }

  signed int return_value_2;
  return_value_2=env->rep_get_timeout(env, 1, &bdb_settings.rep_ack_timeout);
  if(return_value_2 == 0)
  {
    signed int return_value_sprintf_3;
    return_value_sprintf_3=sprintf(pos, "STAT rep_ack_timeout %u\r\n", bdb_settings.rep_ack_timeout);
    pos = pos + (signed long int)return_value_sprintf_3;
  }

  signed int return_value_3;
  return_value_3=env->rep_get_timeout(env, 2, &bdb_settings.rep_chkpoint_delay);
  if(return_value_3 == 0)
  {
    signed int return_value_sprintf_4;
    return_value_sprintf_4=sprintf(pos, "STAT rep_chkpoint_delay %u\r\n", bdb_settings.rep_chkpoint_delay);
    pos = pos + (signed long int)return_value_sprintf_4;
  }

  signed int return_value_4;
  return_value_4=env->rep_get_timeout(env, 3, &bdb_settings.rep_conn_retry);
  if(return_value_4 == 0)
  {
    signed int return_value_sprintf_5;
    return_value_sprintf_5=sprintf(pos, "STAT rep_conn_retry %u\r\n", bdb_settings.rep_conn_retry);
    pos = pos + (signed long int)return_value_sprintf_5;
  }

  signed int return_value_5;
  return_value_5=env->rep_get_timeout(env, 5, &bdb_settings.rep_elect_timeout);
  if(return_value_5 == 0)
  {
    signed int return_value_sprintf_6;
    return_value_sprintf_6=sprintf(pos, "STAT rep_elect_timeout %u\r\n", bdb_settings.rep_elect_timeout);
    pos = pos + (signed long int)return_value_sprintf_6;
  }

  signed int return_value_6;
  return_value_6=env->rep_get_timeout(env, 4, &bdb_settings.rep_elect_retry);
  if(return_value_6 == 0)
  {
    signed int return_value_sprintf_7;
    return_value_sprintf_7=sprintf(pos, "STAT rep_elect_retry %u\r\n", bdb_settings.rep_elect_retry);
    pos = pos + (signed long int)return_value_sprintf_7;
  }

  signed int return_value_7;
  return_value_7=env->rep_get_config(env, (unsigned int)0x00000010, &bdb_settings.rep_bulk);
  if(return_value_7 == 0)
  {
    signed int return_value_sprintf_8;
    return_value_sprintf_8=sprintf(pos, "STAT rep_bulk %d\r\n", bdb_settings.rep_bulk);
    pos = pos + (signed long int)return_value_sprintf_8;
  }

  signed int return_value_8;
  return_value_8=env->rep_get_request(env, &bdb_settings.rep_req_min, &bdb_settings.rep_req_max);
  if(return_value_8 == 0)
  {
    signed int return_value_sprintf_9;
    return_value_sprintf_9=sprintf(pos, "STAT rep_request %u/%u\r\n", bdb_settings.rep_req_min, bdb_settings.rep_req_max);
    pos = pos + (signed long int)return_value_sprintf_9;
  }

  signed int return_value_9;
  return_value_9=env->rep_get_limit(env, &bdb_settings.rep_limit_gbytes, &bdb_settings.rep_limit_bytes);
  if(return_value_9 == 0)
  {
    signed int return_value_sprintf_10;
    return_value_sprintf_10=sprintf(pos, "STAT rep_limit %u/%u\r\n", bdb_settings.rep_limit_gbytes, bdb_settings.rep_limit_bytes);
    pos = pos + (signed long int)return_value_sprintf_10;
  }

  signed int return_value_10;
  return_value_10=env->rep_get_nsites(env, &bdb_settings.rep_nsites);
  if(return_value_10 == 0)
  {
    signed int return_value_sprintf_11;
    return_value_sprintf_11=sprintf(pos, "STAT rep_nsites %u\r\n", bdb_settings.rep_nsites);
    pos = pos + (signed long int)return_value_sprintf_11;
  }

  signed int return_value_sprintf_12;
  return_value_sprintf_12=sprintf(pos, "END");
  pos = pos + (signed long int)return_value_sprintf_12;
}

// stats_repmgr
// file memcachedb.h line 305
void stats_repmgr(char *temp)
{
  char *pos = temp;
  signed int ret;
  struct __db_repmgr_stat *statp = (struct __db_repmgr_stat *)(void *)0;
  signed int return_value;
  return_value=env->repmgr_stat(env, &statp, (unsigned int)0);
  if(return_value == 0)
  {
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(pos, "STAT st_perm_failed %u\r\n", statp->st_perm_failed);
    pos = pos + (signed long int)return_value_sprintf_1;
    signed int return_value_sprintf_2;
    return_value_sprintf_2=sprintf(pos, "STAT st_msgs_queued %u\r\n", statp->st_msgs_queued);
    pos = pos + (signed long int)return_value_sprintf_2;
    signed int return_value_sprintf_3;
    return_value_sprintf_3=sprintf(pos, "STAT st_msgs_dropped %u\r\n", statp->st_msgs_dropped);
    pos = pos + (signed long int)return_value_sprintf_3;
    signed int return_value_sprintf_4;
    return_value_sprintf_4=sprintf(pos, "STAT st_connection_drop %u\r\n", statp->st_connection_drop);
    pos = pos + (signed long int)return_value_sprintf_4;
    signed int return_value_sprintf_5;
    return_value_sprintf_5=sprintf(pos, "STAT st_connect_fail %u\r\n", statp->st_connect_fail);
    pos = pos + (signed long int)return_value_sprintf_5;
  }

  if(!(statp == ((struct __db_repmgr_stat *)NULL)))
    free(statp);

  signed int return_value_sprintf_6;
  return_value_sprintf_6=sprintf(pos, "END");
  pos = pos + (signed long int)return_value_sprintf_6;
}

// stats_repms
// file memcachedb.h line 307
void stats_repms(char *temp)
{
  char *pos = temp;
  signed int ret;
  struct __db_repmgr_site *list = (struct __db_repmgr_site *)(void *)0;
  unsigned int count;
  unsigned int i;
  if(bdb_settings.rep_master_eid == -2)
  {
    signed int return_value_sprintf_1;
    return_value_sprintf_1=sprintf(pos, "STAT site-00 %s:%d/UNKNOWN/--\r\n", bdb_settings.rep_localhost, bdb_settings.rep_localport);
    pos = pos + (signed long int)return_value_sprintf_1;
  }

  else
    if(bdb_settings.rep_master_eid == -3)
    {
      signed int return_value_sprintf_2;
      return_value_sprintf_2=sprintf(pos, "STAT site-00 %s:%d/MASTER/--\r\n", bdb_settings.rep_localhost, bdb_settings.rep_localport);
      pos = pos + (signed long int)return_value_sprintf_2;
    }

    else
    {
      signed int return_value_sprintf_3;
      return_value_sprintf_3=sprintf(pos, "STAT site-00 %s:%d/CLIENT/--\r\n", bdb_settings.rep_localhost, bdb_settings.rep_localport);
      pos = pos + (signed long int)return_value_sprintf_3;
    }
  signed int return_value;
  return_value=env->repmgr_site_list(env, &count, &list);
  if(return_value == 0)
  {
    i = (unsigned int)0;
    if(!(i >= count))
    {
      signed int return_value_sprintf_4;
      return_value_sprintf_4=sprintf(pos, "STAT site-%02d %s:%d/%s/%s\r\n", i + (unsigned int)1, (list + (signed long int)i)->host, (list + (signed long int)i)->port, bdb_settings.rep_master_eid == (list + (signed long int)i)->eid ? "MASTER" : "CLIENT", (list + (signed long int)i)->status == (unsigned int)1 ? "CONNECTED" : "DISCONNECTED");
      pos = pos + (signed long int)return_value_sprintf_4;
      i = i + 1u;
    }

  }

  if(!(list == ((struct __db_repmgr_site *)NULL)))
    free(list);

  signed int return_value_sprintf_5;
  return_value_sprintf_5=sprintf(pos, "END");
  pos = pos + (signed long int)return_value_sprintf_5;
}

// stats_reset
// file memcachedb.c line 132
static void stats_reset(void)
{
  mt_stats_lock();
  stats.total_conns = (unsigned int)0;
  stats.get_misses = (unsigned long int)0;
  stats.get_hits = stats.get_misses;
  stats.set_cmds = stats.get_hits;
  stats.get_cmds = stats.set_cmds;
  stats.bytes_written = (unsigned long int)0;
  stats.bytes_read = stats.bytes_written;
  mt_stats_unlock();
}

// thread_init
// file memcachedb.h line 332
void thread_init(signed int nthreads, struct event_base *main_base)
{
  signed int i;
  pthread_mutex_init(&bdb_lock, (const union anonymous_13 *)(void *)0);
  pthread_mutex_init(&ibuffer_lock, (const union anonymous_13 *)(void *)0);
  pthread_mutex_init(&conn_lock, (const union anonymous_13 *)(void *)0);
  pthread_mutex_init(&stats_lock, (const union anonymous_13 *)(void *)0);
  pthread_mutex_init(&init_lock, (const union anonymous_13 *)(void *)0);
  pthread_cond_init(&init_cond, (const union anonymous_13 *)(void *)0);
  pthread_mutex_init(&cqi_freelist_lock, (const union anonymous_13 *)(void *)0);
  cqi_freelist = (struct conn_queue_item *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_48) /*264ul*/  * (unsigned long int)nthreads);
  threads = (struct anonymous_48 *)return_value_malloc_1;
  if(threads == ((struct anonymous_48 *)NULL))
  {
    perror("Can't allocate thread descriptors");
    exit(1);
  }

  (threads + (signed long int)0)->base = main_base;
  (threads + (signed long int)0)->thread_id=pthread_self();
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
  {
    signed int fds[2l];
    signed int return_value_pipe_2;
    return_value_pipe_2=pipe(fds);
    if(!(return_value_pipe_2 == 0))
    {
      perror("Can't create notify pipe");
      exit(1);
    }

    (threads + (signed long int)i)->notify_receive_fd = fds[(signed long int)0];
    (threads + (signed long int)i)->notify_send_fd = fds[(signed long int)1];
    setup_thread(&threads[(signed long int)i]);
  }
  i = 1;
  for( ; !(i >= nthreads); i = i + 1)
    create_worker(worker_libevent, (void *)&threads[(signed long int)i]);
  pthread_mutex_lock(&init_lock);
  init_count = init_count + 1;
  while(!(init_count >= nthreads))
    pthread_cond_wait(&init_cond, &init_lock);
  pthread_mutex_unlock(&init_lock);
}

// thread_libevent_process
// file thread.c line 340
static void thread_libevent_process(signed int fd, signed short int which, void *arg)
{
  struct anonymous_48 *me = (struct anonymous_48 *)arg;
  struct conn_queue_item *item;
  char buf[1l];
  signed long int return_value_read_1;
  return_value_read_1=read(fd, (void *)buf, (unsigned long int)1);
  if(!(return_value_read_1 == 1l))
  {
    if(settings.verbose >= 1)
      fprintf(stderr, "Can't read from libevent pipe\n");

  }

  item=cq_peek(&me->new_conn_queue);
  if(!(item == ((struct conn_queue_item *)NULL)))
  {
    struct conn *c;
    c=conn_new(item->sfd, item->init_state, item->event_flags, item->read_buffer_size, (const _Bool)item->is_udp, me->base);
    if(c == ((struct conn *)NULL))
    {
      if(!(item->is_udp == 0))
      {
        fprintf(stderr, "Can't listen for events on UDP socket\n");
        exit(1);
      }

      else
      {
        if(settings.verbose >= 1)
          fprintf(stderr, "Can't listen for events on fd %d\n", item->sfd);

        close(item->sfd);
      }
    }

    cqi_free(item);
  }

}

// tokenize_command
// file memcachedb.c line 764
static unsigned long int tokenize_command(char *command, struct token_s *tokens, const unsigned long int max_tokens)
{
  char *s;
  char *e;
  unsigned long int ntokens = (unsigned long int)0;
  /* assertion command != ((void *)0) && tokens != ((void *)0) && max_tokens > 1 */
  assert(command != (char *)(void *)0 && tokens != (struct token_s *)(void *)0 && max_tokens > (unsigned long int)1);
  e = command;
  s = e;
  for( ; !(ntokens >= max_tokens + 18446744073709551615ul); e = e + 1l)
    if((signed int)*e == 32)
    {
      if(!(s == e))
      {
        (tokens + (signed long int)ntokens)->value = s;
        (tokens + (signed long int)ntokens)->length = (unsigned long int)(e - s);
        ntokens = ntokens + 1ul;
        *e = (char)0;
      }

      s = e + (signed long int)1;
    }

    else
      if((signed int)*e == 0)
      {
        if(!(s == e))
        {
          (tokens + (signed long int)ntokens)->value = s;
          (tokens + (signed long int)ntokens)->length = (unsigned long int)(e - s);
          ntokens = ntokens + 1ul;
        }

        break;
      }

  (tokens + (signed long int)ntokens)->value = (signed int)*e == 0 ? (char *)(void *)0 : e;
  (tokens + (signed long int)ntokens)->length = (unsigned long int)0;
  ntokens = ntokens + 1ul;
  return ntokens;
}

// transmit
// file memcachedb.c line 1578
static signed int transmit(struct conn *c)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(!(c->msgcurr >= c->msgused))
  {
    if((c->msglist + (signed long int)c->msgcurr)->msg_iovlen == 0ul)
      c->msgcurr = c->msgcurr + 1;

  }

  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(!(c->msgcurr >= c->msgused))
  {
    signed long int res;
    struct msghdr *m = &c->msglist[(signed long int)c->msgcurr];
    res=sendmsg(c->sfd, m, 0);
    if(res >= 1l)
    {
      mt_stats_lock();
      stats.bytes_written = stats.bytes_written + (unsigned long int)res;
      mt_stats_unlock();
      for( ; m->msg_iovlen >= 1ul; m->msg_iov = m->msg_iov + 1l)
      {
        if(!((unsigned long int)res >= m->msg_iov->iov_len))
          break;

        res = res - (signed long int)m->msg_iov->iov_len;
        m->msg_iovlen = m->msg_iovlen - 1ul;
      }
      if(res >= 1l)
      {
        m->msg_iov->iov_base = m->msg_iov->iov_base + res;
        m->msg_iov->iov_len = m->msg_iov->iov_len - (unsigned long int)res;
      }

      return 1;
    }

    if(res == -1l)
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 11)
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        return_value___errno_location_3=__errno_location();
        tmp_if_expr_4 = *return_value___errno_location_3 == 11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
      {
        _Bool return_value_update_event_1;
        return_value_update_event_1=update_event(c, 0x04 | 0x10);
        if(return_value_update_event_1 == (_Bool)0)
        {
          if(settings.verbose >= 1)
            fprintf(stderr, "Couldn't update event\n");

          conn_set_state(c, 5);
          return 3;
        }

        return 2;
      }

    }

    if(settings.verbose >= 1)
      perror("Failed to write, and not due to blocking");

    if(!(c->udp == (_Bool)0))
      conn_set_state(c, 1);

    else
      conn_set_state(c, 5);
    return 3;
  }

  else
    return 0;
}

// try_read_command
// file memcachedb.c line 1390
static signed int try_read_command(struct conn *c)
{
  char *el;
  char *cont;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  /* assertion c->rcurr <= (c->rbuf + c->rsize) */
  assert(c->rcurr <= c->rbuf + (signed long int)c->rsize);
  if(c->rbytes == 0)
    return 0;

  else
  {
    void *return_value_memchr_1;
    return_value_memchr_1=memchr((const void *)c->rcurr, 10, (unsigned long int)c->rbytes);
    el = (char *)return_value_memchr_1;
    if(el == ((char *)NULL))
      return 0;

    else
    {
      cont = el + (signed long int)1;
      if(el - c->rcurr >= 2l)
      {
        if((signed int)el[-1l] == 13)
          el = el - 1l;

      }

      *el = (char)0;
      /* assertion cont <= (c->rcurr + c->rbytes) */
      assert(cont <= c->rcurr + (signed long int)c->rbytes);
      process_command(c, c->rcurr);
      c->rbytes = c->rbytes - (signed int)(cont - c->rcurr);
      c->rcurr = cont;
      /* assertion c->rcurr <= (c->rbuf + c->rsize) */
      assert(c->rcurr <= c->rbuf + (signed long int)c->rsize);
      return 1;
    }
  }
}

// try_read_network
// file memcachedb.c line 1464
static signed int try_read_network(struct conn *c)
{
  signed int gotdata = 0;
  signed int res;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  if(!(c->rcurr == c->rbuf))
  {
    if(!(c->rbytes == 0))
      memmove((void *)c->rbuf, (const void *)c->rcurr, (unsigned long int)c->rbytes);

    c->rcurr = c->rbuf;
  }

  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  while((_Bool)1)
  {
    if(c->rbytes >= c->rsize)
    {
      char *new_rbuf;
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)c->rbuf, (unsigned long int)(c->rsize * 2));
      new_rbuf = (char *)return_value_realloc_1;
      if(new_rbuf == ((char *)NULL))
      {
        if(settings.verbose >= 1)
          fprintf(stderr, "Couldn't realloc input buffer\n");

        c->rbytes = 0;
        out_string(c, "SERVER_ERROR out of memory reading request");
        c->write_and_go = 5;
        return 1;
      }

      c->rbuf = new_rbuf;
      c->rcurr = c->rbuf;
      c->rsize = c->rsize * 2;
    }

    if(settings.socketpath == ((char *)NULL))
      c->request_addr_size = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;

    else
      c->request_addr_size = (unsigned int)0;
    signed int avail = c->rsize - c->rbytes;
    signed long int return_value_read_2;
    return_value_read_2=read(c->sfd, (void *)(c->rbuf + (signed long int)c->rbytes), (unsigned long int)avail);
    res = (signed int)return_value_read_2;
    if(res >= 1)
    {
      mt_stats_lock();
      stats.bytes_read = stats.bytes_read + (unsigned long int)res;
      mt_stats_unlock();
      gotdata = 1;
      c->rbytes = c->rbytes + res;
      if(res == avail)
        continue;

      else
        break;
    }

    if(res == 0)
    {
      conn_set_state(c, 5);
      return 1;
    }

    if(res == -1)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(*return_value___errno_location_3 == 11)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value___errno_location_4=__errno_location();
        tmp_if_expr_5 = *return_value___errno_location_4 == 11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        break;

      conn_set_state(c, 5);
      return 1;
    }

  }
  return gotdata;
}

// try_read_udp
// file memcachedb.c line 1423
static signed int try_read_udp(struct conn *c)
{
  signed int res;
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  c->request_addr_size = (unsigned int)sizeof(struct sockaddr) /*16ul*/ ;
  signed long int return_value_recvfrom_1;
  return_value_recvfrom_1=recvfrom(c->sfd, (void *)c->rbuf, (unsigned long int)c->rsize, 0, &c->request_addr, &c->request_addr_size);
  res = (signed int)return_value_recvfrom_1;
  _Bool tmp_if_expr_2;
  if(res >= 9)
  {
    unsigned char *buf = (unsigned char *)c->rbuf;
    mt_stats_lock();
    stats.bytes_read = stats.bytes_read + (unsigned long int)res;
    mt_stats_unlock();
    c->request_id = (signed int)buf[(signed long int)0] * 256 + (signed int)buf[(signed long int)1];
    if(!((signed int)buf[4l] == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)buf[(signed long int)5] != 1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
    {
      out_string(c, "SERVER_ERROR multi-packet request not supported");
      return 0;
    }

    res = res - 8;
    memmove((void *)c->rbuf, (const void *)(c->rbuf + (signed long int)8), (unsigned long int)res);
    c->rbytes = c->rbytes + res;
    c->rcurr = c->rbuf;
    return 1;
  }

  return 0;
}

// update_event
// file memcachedb.c line 1529
static _Bool update_event(struct conn *c, const signed int new_flags)
{
  /* assertion c != ((void *)0) */
  assert(c != (struct conn *)(void *)0);
  struct event_base *base = c->event.ev_base;
  if((signed int)c->ev_flags == new_flags)
    return (_Bool)1;

  else
  {
    signed int return_value_event_del_1;
    return_value_event_del_1=event_del(&c->event);
    if(return_value_event_del_1 == -1)
      return (_Bool)0;

    else
    {
      event_set(&c->event, c->sfd, (signed short int)new_flags, event_handler, (void *)c);
      event_base_set(base, &c->event);
      c->ev_flags = (signed short int)new_flags;
      signed int return_value_event_add_2;
      return_value_event_add_2=event_add(&c->event, ((struct timeval *)NULL));
      if(return_value_event_add_2 == -1)
        return (_Bool)0;

      else
        return (_Bool)1;
    }
  }
}

// usage
// file memcachedb.c line 2102
static void usage(void)
{
  printf("memcachedb 1.2.0\n");
  printf("-p <num>      TCP port number to listen on (default: 21201)\n-U <num>      UDP port number to listen on (default: 0, off)\n-s <file>     unix socket path to listen on (disables network support)\n-a <mask>     access mask for unix socket, in octal (default 0700)\n-l <ip_addr>  interface to listen on, default is INDRR_ANY\n-d            run as a daemon\n-r            maximize core file limit\n-u <username> assume identity of <username> (only when run as root)\n-c <num>      max simultaneous connections, default is 1024\n-b <num>      item size smaller than <num> will use fast memory alloc, default is 512B\n-v            verbose (print errors/warnings while in event loop)\n-vv           very verbose (also print client commands/reponses)\n-h            print this help and exit\n-i            print license info\n-P <file>     save PID in <file>, only used with -d option\n");
  printf("-t <num>      number of threads to use, default 4\n");
  printf("--------------------BerkeleyDB Options-------------------------------\n");
  printf("-m <num>      in-memmory cache size of BerkeleyDB in megabytes, default is 64MB\n");
  printf("-A <num>      underlying page size in bytes, default is 4096, (512B ~ 64KB, power-of-two)\n");
  printf("-f <file>     filename of database, default is 'data.db'\n");
  printf("-H <dir>      env home of database, default is '/data1/memcachedb'\n");
  printf("-B <db_type>  type of database, 'btree' or 'hash'. default is 'btree'\n");
  printf("-L <num>      log buffer size in kbytes, default is 32KB\n");
  printf("-C <num>      do checkpoint every <num> seconds, 0 for disable, default is 5 minutes\n");
  printf("-T <num>      do memp_trickle every <num> seconds, 0 for disable, default is 30 seconds\n");
  printf("-e <num>      percent of the pages in the cache that should be clean, default is 60%%\n");
  printf("-D <num>      do deadlock detecting every <num> millisecond, 0 for disable, default is 100ms\n");
  printf("-N            enable DB_TXN_NOSYNC to gain big performance improved, default is off\n");
  printf("--------------------Replication Options-------------------------------\n");
  printf("-R            identifies the host and port used by this site (required).\n");
  printf("-O            identifies another site participating in this replication group\n");
  printf("-M/-S         start as a master or slave\n");
  printf("-n            number of sites that participat in replication, default is 2\n");
  printf("-----------------------------------------------------------------------\n");
}

// usage_license
// file memcachedb.c line 2145
static void usage_license(void)
{
  printf("memcachedb 1.2.0\n\n");
  printf("Copyright (c) 2008, Steve Chu. <stvchu@gmail.com>\nAll rights reserved.\n\nRedistribution and use in source and binary forms, with or without\nmodification, are permitted provided that the following conditions are\nmet:\n\n    * Redistributions of source code must retain the above copyright\nnotice, this list of conditions and the following disclaimer.\n\n    * Redistributions in binary form must reproduce the above\ncopyright notice, this list of conditions and the following disclaimer\nin the documentation and/or other materials provided with the\ndistribution.\n\n    * Neither the name of the Danga Interactive nor the names of its\ncontributors may be used to endorse or promote products derived from\nthis software without specific prior written permission.\n\nTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS\n\"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT\nLIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR\nA PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT\nOWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\nSPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT\nLIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,\nDATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY\nTHEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\nOF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n\n\nThis product includes software developed by Danga Interactive, Inc.\n\n[ memcached ]\n\nCopyright (c) 2003, Danga Interactive, Inc. <http://www.danga.com/>\nAll rights reserved.\n\nRedistribution and use in source and binary forms, with or without\nmodification, are permitted provided that the following conditions are\nmet:\n\n    * Redistributions of source code must retain the above copyright\nnotice, this list of conditions and the following disclaimer.\n\n    * Redistributions in binary form must reproduce the above\ncopyright notice, this list of conditions and the following disclaimer\nin the documentation and/or other materials provided with the\ndistribution.\n\n    * Neither the name of the Danga Interactive nor the names of its\ncontributors may be used to endorse or promote products derived from\nthis software without specific prior written permission.\n\nTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS\n\"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT\nLIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR\nA PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT\nOWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\nSPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT\nLIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,\nDATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY\nTHEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\nOF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n\n\nThis product includes software developed by Niels Provos.\n\n[ libevent ]\n\nCopyright 2000-2003 Niels Provos <provos@citi.umich.edu>\nAll rights reserved.\n\nRedistribution and use in source and binary forms, with or without\nmodification, are permitted provided that the following conditions\nare met:\n1. Redistributions of source code must retain the above copyright\n   notice, this list of conditions and the following disclaimer.\n2. Redistributions in binary form must reproduce the above copyright\n   notice, this list of conditions and the following disclaimer in the\n   documentation and/or other materials provided with the distribution.\n3. All advertising materials mentioning features or use of this software\n   must display the following acknowledgement:\n      This product includes software developed by Niels Provos.\n4. The name of the author may not be used to endorse or promote products\n   derived from this software without specific prior written permission.\n\nTHIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR\nIMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES\nOF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.\nIN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,\nINCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\nNOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,\nDATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY\nTHEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF\nTHIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n\n\nThis product includes software developed by Oracle Inc.\n\n[ BerkeleyDB ]\n\nSee LICENSE file in BerkeleyDB distribution to get more Copyright info.\n\n");
}

// worker_libevent
// file thread.c line 320
static void * worker_libevent(void *arg)
{
  struct anonymous_48 *me = (struct anonymous_48 *)arg;
  pthread_mutex_lock(&init_lock);
  init_count = init_count + 1;
  pthread_cond_signal(&init_cond);
  pthread_mutex_unlock(&init_lock);
  signed int return_value_event_base_loop_1;
  return_value_event_base_loop_1=event_base_loop(me->base, 0);
  return (void *)return_value_event_base_loop_1;
}

