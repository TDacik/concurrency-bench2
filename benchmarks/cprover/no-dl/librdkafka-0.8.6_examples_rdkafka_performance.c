// #anon_enum$RD_KAFKA_AVG_GAUGE=0$RD_KAFKA_AVG_COUNTER=1
// file rdkafka_int.h line 276
enum anonymous$71 { RD_KAFKA_AVG_GAUGE=0, RD_KAFKA_AVG_COUNTER=1 };

// #anon_enum$RD_KAFKA_BROKER_STATE_INIT=0$RD_KAFKA_BROKER_STATE_DOWN=1$RD_KAFKA_BROKER_STATE_UP=2
// file rdkafka_int.h line 549
enum anonymous$50 { RD_KAFKA_BROKER_STATE_INIT=0, RD_KAFKA_BROKER_STATE_DOWN=1, RD_KAFKA_BROKER_STATE_UP=2 };

// #anon_enum$RD_KAFKA_COMPRESSION_NONE=0$RD_KAFKA_COMPRESSION_GZIP=1$RD_KAFKA_COMPRESSION_SNAPPY=2
// file rdkafka_int.h line 103
enum anonymous$68 { RD_KAFKA_COMPRESSION_NONE=0, RD_KAFKA_COMPRESSION_GZIP=1, RD_KAFKA_COMPRESSION_SNAPPY=2 };

// #anon_enum$RD_KAFKA_CONFIGURED=0$RD_KAFKA_LEARNED=1
// file rdkafka_int.h line 513
enum anonymous$21 { RD_KAFKA_CONFIGURED=0, RD_KAFKA_LEARNED=1 };

// #anon_enum$RD_KAFKA_CONF_UNKNOWN=-2$RD_KAFKA_CONF_INVALID=-1$RD_KAFKA_CONF_OK=0
// file ../src/rdkafka.h line 236
enum anonymous$24 { RD_KAFKA_CONF_UNKNOWN=-2, RD_KAFKA_CONF_INVALID=-1, RD_KAFKA_CONF_OK=0 };

// #anon_enum$RD_KAFKA_OFFSET_METHOD_FILE=0$RD_KAFKA_OFFSET_METHOD_BROKER=1
// file rdkafka_int.h line 255
enum anonymous$69 { RD_KAFKA_OFFSET_METHOD_FILE=0, RD_KAFKA_OFFSET_METHOD_BROKER=1 };

// #anon_enum$RD_KAFKA_OP_FETCH=0$RD_KAFKA_OP_ERR=1$RD_KAFKA_OP_DR=2$RD_KAFKA_OP_STATS=3$RD_KAFKA_OP_METADATA_REQ=4$RD_KAFKA_OP_OFFSET_COMMIT=5
// file rdkafka_int.h line 455
enum anonymous$44 { RD_KAFKA_OP_FETCH=0, RD_KAFKA_OP_ERR=1, RD_KAFKA_OP_DR=2, RD_KAFKA_OP_STATS=3, RD_KAFKA_OP_METADATA_REQ=4, RD_KAFKA_OP_OFFSET_COMMIT=5 };

// #anon_enum$RD_KAFKA_RESP_ERR__BEGIN=-200$RD_KAFKA_RESP_ERR__BAD_MSG=-199$RD_KAFKA_RESP_ERR__BAD_COMPRESSION=-198$RD_KAFKA_RESP_ERR__DESTROY=-197$RD_KAFKA_RESP_ERR__FAIL=-196$RD_KAFKA_RESP_ERR__TRANSPORT=-195$RD_KAFKA_RESP_ERR__CRIT_SYS_RESOURCE=-194$RD_KAFKA_RESP_ERR__RESOLVE=-193$RD_KAFKA_RESP_ERR__MSG_TIMED_OUT=-192$RD_KAFKA_RESP_ERR__PARTITION_EOF=-191$RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION=-190$RD_KAFKA_RESP_ERR__FS=-189$RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC=-188$RD_KAFKA_RESP_ERR__ALL_BROKERS_DOWN=-187$RD_KAFKA_RESP_ERR__INVALID_ARG=-186$RD_KAFKA_RESP_ERR__TIMED_OUT=-185$RD_KAFKA_RESP_ERR__QUEUE_FULL=-184$RD_KAFKA_RESP_ERR__ISR_INSUFF=-183$RD_KAFKA_RESP_ERR__END=-100$RD_KAFKA_RESP_ERR_UNKNOWN=-1$RD_KAFKA_RESP_ERR_NO_ERROR=0$RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE=1$RD_KAFKA_RESP_ERR_INVALID_MSG=2$RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART=3$RD_KAFKA_RESP_ERR_INVALID_MSG_SIZE=4$RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE=5$RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION=6$RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT=7$RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE=8$RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE=9$RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE=10$RD_KAFKA_RESP_ERR_STALE_CTRL_EPOCH=11$RD_KAFKA_RESP_ERR_OFFSET_METADATA_TOO_LARGE=12
// file ../src/rdkafka.h line 96
enum anonymous$9 { RD_KAFKA_RESP_ERR__BEGIN=-200, RD_KAFKA_RESP_ERR__BAD_MSG=-199, RD_KAFKA_RESP_ERR__BAD_COMPRESSION=-198, RD_KAFKA_RESP_ERR__DESTROY=-197, RD_KAFKA_RESP_ERR__FAIL=-196, RD_KAFKA_RESP_ERR__TRANSPORT=-195, RD_KAFKA_RESP_ERR__CRIT_SYS_RESOURCE=-194, RD_KAFKA_RESP_ERR__RESOLVE=-193, RD_KAFKA_RESP_ERR__MSG_TIMED_OUT=-192, RD_KAFKA_RESP_ERR__PARTITION_EOF=-191, RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION=-190, RD_KAFKA_RESP_ERR__FS=-189, RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC=-188, RD_KAFKA_RESP_ERR__ALL_BROKERS_DOWN=-187, RD_KAFKA_RESP_ERR__INVALID_ARG=-186, RD_KAFKA_RESP_ERR__TIMED_OUT=-185, RD_KAFKA_RESP_ERR__QUEUE_FULL=-184, RD_KAFKA_RESP_ERR__ISR_INSUFF=-183, RD_KAFKA_RESP_ERR__END=-100, RD_KAFKA_RESP_ERR_UNKNOWN=-1, RD_KAFKA_RESP_ERR_NO_ERROR=0, RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE=1, RD_KAFKA_RESP_ERR_INVALID_MSG=2, RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART=3, RD_KAFKA_RESP_ERR_INVALID_MSG_SIZE=4, RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE=5, RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION=6, RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT=7, RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE=8, RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE=9, RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE=10, RD_KAFKA_RESP_ERR_STALE_CTRL_EPOCH=11, RD_KAFKA_RESP_ERR_OFFSET_METADATA_TOO_LARGE=12 };

// #anon_enum$RD_KAFKA_TOPIC_S_UNKNOWN=0$RD_KAFKA_TOPIC_S_EXISTS=1$RD_KAFKA_TOPIC_S_NOTEXISTS=2
// file rdkafka_int.h line 628
enum anonymous$57 { RD_KAFKA_TOPIC_S_UNKNOWN=0, RD_KAFKA_TOPIC_S_EXISTS=1, RD_KAFKA_TOPIC_S_NOTEXISTS=2 };

// #anon_enum$RD_KAFKA_TOPPAR_FETCH_NONE=0$RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY=1$RD_KAFKA_TOPPAR_FETCH_OFFSET_WAIT=2$RD_KAFKA_TOPPAR_FETCH_ACTIVE=3
// file rdkafka_int.h line 671
enum anonymous$54 { RD_KAFKA_TOPPAR_FETCH_NONE=0, RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY=1, RD_KAFKA_TOPPAR_FETCH_OFFSET_WAIT=2, RD_KAFKA_TOPPAR_FETCH_ACTIVE=3 };

// #anon_enum$RD_THREAD_S_NONE=0$RD_THREAD_S_RUNNING=1$RD_THREAD_S_EXITING=2$RD_THREAD_S_DEAD=3
// file rdthread.h line 44
enum anonymous$10 { RD_THREAD_S_NONE=0, RD_THREAD_S_RUNNING=1, RD_THREAD_S_EXITING=2, RD_THREAD_S_DEAD=3 };

// #anon_enum$_RK_C_STR=0$_RK_C_INT=1$_RK_C_S2I=2$_RK_C_S2F=3$_RK_C_BOOL=4$_RK_C_PTR=5
// file rdkafka_defaultconf.c line 42
enum anonymous$0 { _RK_C_STR=0, _RK_C_INT=1, _RK_C_S2I=2, _RK_C_S2F=3, _RK_C_BOOL=4, _RK_C_PTR=5 };

// #anon_enum$_RK_GLOBAL=1$_RK_PRODUCER=2$_RK_CONSUMER=4$_RK_TOPIC=8
// file rdkafka_int.h line 942
enum anonymous { _RK_GLOBAL=1, _RK_PRODUCER=2, _RK_CONSUMER=4, _RK_TOPIC=8 };

// tag-#anon#ST[*{S8}$S8$'topic'||S32'partition'||U32'$pad0'||U64'offset'||U64'app_offset'|]
// file rdkafka_int.h line 758
struct anonymous$60;

// tag-#anon#ST[*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$'tqe_next'||*{*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$}$*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$$'tqe_prev'|]
// file rdqueue.h line 63
struct anonymous$13;

// tag-#anon#ST[*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$'tqh_first'||*{*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$}$*{SYM#tag-rd_fifoq_elm_s#}$SYM#tag-rd_fifoq_elm_s#$$'tqh_last'|]
// file rdqueue.h line 72
struct anonymous$14;

// tag-#anon#ST[*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$}$*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$$'tqe_prev'|]
// file rdkafka_int.h line 520
struct anonymous$48;

// tag-#anon#ST[*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$}$*{SYM#tag-rd_kafka_broker_s#}$SYM#tag-rd_kafka_broker_s#$$'tqh_last'|]
// file rdkafka_int.h line 742
struct anonymous$58;

// tag-#anon#ST[*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$}$*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$$'tqe_prev'|]
// file rdkafka_int.h line 378
struct anonymous$45;

// tag-#anon#ST[*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$}$*{SYM#tag-rd_kafka_buf_s#}$SYM#tag-rd_kafka_buf_s#$$'tqh_last'|]
// file rdkafka_int.h line 433
struct anonymous$46;

// tag-#anon#ST[*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$}$*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$$'tqe_prev'|]
// file rdkafka_int.h line 353
struct anonymous$42;

// tag-#anon#ST[*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$}$*{SYM#tag-rd_kafka_msg_s#}$SYM#tag-rd_kafka_msg_s#$$'tqh_last'|]
// file rdkafka_int.h line 365
struct anonymous$40;

// tag-#anon#ST[*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$}$*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$$'tqe_prev'|]
// file rdkafka_int.h line 467
struct anonymous$43;

// tag-#anon#ST[*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$}$*{SYM#tag-rd_kafka_op_s#}$SYM#tag-rd_kafka_op_s#$$'tqh_last'|]
// file rdkafka_int.h line 446
struct anonymous$47;

// tag-#anon#ST[*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$}$*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$$'tqe_prev'|]
// file rdkafka_timer.h line 34
struct anonymous$63;

// tag-#anon#ST[*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$}$*{SYM#tag-rd_kafka_timer_s#}$SYM#tag-rd_kafka_timer_s#$$'tqh_last'|]
// file rdkafka_int.h line 771
struct anonymous$64;

// tag-#anon#ST[*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$}$*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$$'tqe_prev'|]
// file rdkafka_int.h line 612
struct anonymous$56;

// tag-#anon#ST[*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$}$*{SYM#tag-rd_kafka_topic_s#}$SYM#tag-rd_kafka_topic_s#$$'tqh_last'|]
// file rdkafka_int.h line 745
struct anonymous$59;

// tag-#anon#ST[*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$'tqe_next'||*{*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$}$*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$$'tqe_prev'|]
// file rdkafka_int.h line 650
struct anonymous$53;

// tag-#anon#ST[*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$'tqh_first'||*{*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$}$*{SYM#tag-rd_kafka_toppar_s#}$SYM#tag-rd_kafka_toppar_s#$$'tqh_last'|]
// file rdkafka_int.h line 535
struct anonymous$49;

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$34;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$32;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$18;

// tag-#anon#ST[ARR512{S8}$S8$'msg'||S32'err'|]
// file rdkafka_int.h line 586
struct anonymous$52;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$38;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous$39;

// tag-#anon#ST[S32'msg_cnt'|]
// file rdkafka_int.h line 764
struct anonymous$61;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$28;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$31;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$30;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$36;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$29;

// tag-#anon#ST[S32'val'||U32'$pad0'||*{cS8}$cS8$'str'|]
// file rdkafka_defaultconf.c line 57
struct anonymous$1;

// tag-#anon#ST[S64'maxv'||S64'minv'||S64'avg'||S64'sum'||S32'cnt'||U32'$pad0'||U64'start'|]
// file rdkafka_int.h line 267
struct anonymous$70;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$33;

// tag-#anon#ST[U64't_start'||U64't_end'||U64't_end_send'||U64'msgs'||U64'msgs_dr_ok'||U64'msgs_dr_err'||U64'bytes_dr_ok'||U64'bytes'||U64'tx'||U64'tx_err'||U64'avg_rtt'||U64'offset'||U64't_fetch_latency'||U64't_last'||U64't_enobufs_last'||U64't_total'||U64'latency_last'||U64'latency_lo'||U64'latency_hi'||U64'latency_sum'||S32'latency_cnt'||U32'$pad0'||S64'last_offset'|]
// file rdkafka_performance.c line 78
struct anonymous$41;

// tag-#anon#ST[U64'tx_bytes'||U64'tx'||U64'tx_err'||U64'tx_retries'||U64'req_timeouts'||U64'rx_bytes'||U64'rx'||U64'rx_err'||U64'rx_corrid_err'||U64'rx_partial'|]
// file rdkafka_int.h line 559
struct anonymous$51;

// tag-#anon#ST[U64'tx_msgs'||U64'tx_bytes'||U64'msgs'|]
// file rdkafka_int.h line 707
struct anonymous$55;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$37;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$67;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$35;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$12;

// tag-#anon#UN[ARR8{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous$17;

// tag-#anon#UN[SYM#tag-#anon#ST[*{S8}$S8$'topic'||S32'partition'||U32'$pad0'||U64'offset'||U64'app_offset'|]#'consumer'||SYM#tag-#anon#ST[S32'msg_cnt'|]#'producer'|]
// file rdkafka_int.h line 757
union anonymous$62;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$15;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]#'__data'||ARR56{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous$16;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$11;

// tag-#anon#UN[SYM#tag-sockaddr_in#'in'||SYM#tag-sockaddr_in6#'in6'|]
// file rdaddr.h line 43
union anonymous$8;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$5;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$65;

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

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-consume_ctx
// file rdkafka.c line 1497
struct consume_ctx;

// tag-gz_header_s
// file /usr/include/zlib.h line 112
struct gz_header_s;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-internal_state
// file /usr/include/zlib.h line 83
struct internal_state;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-msghdr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 224
struct msghdr;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rd_fifoq_elm_head_s
// file rdqueue.h line 69
struct rd_fifoq_elm_head_s;

// tag-rd_fifoq_elm_s
// file rdqueue.h line 62
struct rd_fifoq_elm_s;

// tag-rd_fifoq_s
// file rdqueue.h line 71
struct rd_fifoq_s;

// tag-rd_kafka_avg_s
// file rdkafka_int.h line 266
struct rd_kafka_avg_s;

// tag-rd_kafka_broker_s
// file rdkafka_proto.h line 262
struct rd_kafka_broker_s;

// tag-rd_kafka_buf_s
// file rdkafka_int.h line 377
struct rd_kafka_buf_s;

// tag-rd_kafka_bufq_s
// file rdkafka_int.h line 432
struct rd_kafka_bufq_s;

// tag-rd_kafka_conf_s
// file rdkafka.h line 89
struct rd_kafka_conf_s;

// tag-rd_kafka_message_s
// file ../src/rdkafka.h line 187
struct rd_kafka_message_s;

// tag-rd_kafka_metadata
// file rdkafka.h line 1000
struct rd_kafka_metadata;

// tag-rd_kafka_metadata_broker
// file rdkafka.h line 967
struct rd_kafka_metadata_broker;

// tag-rd_kafka_metadata_partition
// file rdkafka.h line 976
struct rd_kafka_metadata_partition;

// tag-rd_kafka_metadata_topic
// file rdkafka.h line 989
struct rd_kafka_metadata_topic;

// tag-rd_kafka_msg_s
// file rdkafka_int.h line 93
struct rd_kafka_msg_s;

// tag-rd_kafka_msgq_s
// file rdkafka_int.h line 364
struct rd_kafka_msgq_s;

// tag-rd_kafka_op_s
// file rdkafka_int.h line 446
struct rd_kafka_op_s;

// tag-rd_kafka_property
// file rdkafka_defaultconf.c line 39
struct rd_kafka_property;

// tag-rd_kafka_q_s
// file rdkafka_int.h line 440
struct rd_kafka_q_s;

// tag-rd_kafka_queue_s
// file rdkafka.h line 91
struct rd_kafka_queue_s;

// tag-rd_kafka_s
// file rdkafka.h line 87
struct rd_kafka_s;

// tag-rd_kafka_timer_s
// file rdkafka_timer.h line 33
struct rd_kafka_timer_s;

// tag-rd_kafka_topic_conf_s
// file rdkafka.h line 90
struct rd_kafka_topic_conf_s;

// tag-rd_kafka_topic_s
// file rdkafka.h line 88
struct rd_kafka_topic_s;

// tag-rd_kafka_toppar_s
// file rdkafka_int.h line 91
struct rd_kafka_toppar_s;

// tag-rd_kafka_type_t
// file ../src/rdkafka.h line 74
enum rd_kafka_type_t { RD_KAFKA_PRODUCER=0, RD_KAFKA_CONSUMER=1 };

// tag-rd_kafkap_FetchRequest
// file rdkafka_proto.h line 245
struct rd_kafkap_FetchRequest;

// tag-rd_kafkap_bytes_s
// file rdkafka_proto.h line 183
struct rd_kafkap_bytes_s;

// tag-rd_kafkap_reqhdr
// file rdkafka_proto.h line 43
struct rd_kafkap_reqhdr;

// tag-rd_kafkap_reshdr
// file rdkafka_proto.h line 63
struct rd_kafkap_reshdr;

// tag-rd_kafkap_str_s
// file rdkafka_proto.h line 101
struct rd_kafkap_str_s;

// tag-rd_sockaddr_list_s
// file rdaddr.h line 97
struct rd_sockaddr_list_s;

// tag-rd_thread_event_s
// file rdevent.h line 37
struct rd_thread_event_s;

// tag-rd_thread_s
// file rdthread.h line 39
struct rd_thread_s;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sink
// file snappy.c line 266
struct sink;

// tag-snappy_decompressor
// file snappy.c line 1057
struct snappy_decompressor;

// tag-snappy_env
// file snappy.h line 8
struct snappy_env;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-source
// file snappy.c line 228
struct source;

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

// tag-writer
// file snappy.c line 346
struct writer;

// tag-z_stream_s
// file /usr/include/zlib.h line 85
struct z_stream_s;

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __atomic_add_fetch
// file rdkafka_int.h line 847 function rd_kafka_q_enq
signed int __atomic_add_fetch(void);
// __atomic_sub_fetch
// file rdkafka_msg.h line 102 function rd_kafka_msgq_deq
signed int __atomic_sub_fetch(void);
// __bswap_64
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 109
static inline unsigned long int __bswap_64(unsigned long int __bsx);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// append
// file snappy.c line 274
static inline void append(struct sink *s, const char *data, unsigned long int n);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// available
// file snappy.c line 237
static inline signed int available(struct source *s);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// compress
// file snappy.c line 1301
static inline signed int compress(struct snappy_env *env, struct source *reader, struct sink *writer);
// compress_fragment
// file snappy.c line 850
static char * compress_fragment(const char * const input, const unsigned long int input_size, char *op, unsigned short int *table, const unsigned int table_size);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, union anonymous$65, unsigned int);
// crc32
// file /usr/include/zlib.h line 1600
extern unsigned long int crc32(unsigned long int, const unsigned char *, unsigned int);
// decompress_all_tags
// file snappy.c line 1119
static void decompress_all_tags(struct snappy_decompressor *d, struct writer *writer);
// deflate
// file /usr/include/zlib.h line 246
extern signed int deflate(struct z_stream_s *, signed int);
// deflateBound
// file /usr/include/zlib.h line 698
extern unsigned long int deflateBound(struct z_stream_s *, unsigned long int);
// deflateEnd
// file /usr/include/zlib.h line 353
extern signed int deflateEnd(struct z_stream_s *);
// deflateInit2_
// file /usr/include/zlib.h line 1637
extern signed int deflateInit2_(struct z_stream_s *, signed int, signed int, signed int, signed int, signed int, const char *, signed int);
// emit_copy
// file snappy.c line 611
static inline char * emit_copy(char *op, signed int offset, signed int len);
// emit_copy_less_than64
// file snappy.c line 590
static inline char * emit_copy_less_than64(char *op, signed int offset, signed int len);
// emit_literal
// file snappy.c line 545
static inline char * emit_literal(char *op, const char *literal, signed int len, _Bool allow_fast_path);
// err_cb
// file rdkafka_performance.c line 112
static void err_cb(struct rd_kafka_s *rk, signed int err, const char *reason, void *opaque);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exit_snappy_decompressor
// file snappy.c line 1076
static void exit_snappy_decompressor(struct snappy_decompressor *d);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// find_lsb_set_non_zero64
// file snappy.c line 133
static inline signed int find_lsb_set_non_zero64(unsigned long long int n);
// find_match_length
// file snappy.c line 716
static inline signed int find_match_length(const char *s1, const char *s2, const char *s2_limit);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// fsync
// file /usr/include/unistd.h line 956
extern signed int fsync(signed int);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// get_eight_bytes_at
// file snappy.c line 807
static inline unsigned long long int get_eight_bytes_at(const char *ptr);
// get_hash_table
// file snappy.c line 683
static unsigned short int * get_hash_table(struct snappy_env *env, unsigned long int input_size, signed int *table_size);
// get_u32_at_offset
// file snappy.c line 812
static inline unsigned int get_u32_at_offset(unsigned long long int v, signed int offset);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// hash
// file snappy.c line 505
static inline unsigned int hash(const char *p, signed int shift);
// hash_bytes
// file snappy.c line 499
static inline unsigned int hash_bytes(unsigned int bytes, signed int shift);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// incremental_copy
// file snappy.c line 377
static inline void incremental_copy(const char *src, char *op, signed long int len);
// incremental_copy_fast_path
// file snappy.c line 420
static inline void incremental_copy_fast_path(const char *src, char *op, signed long int len);
// inflate
// file /usr/include/zlib.h line 392
extern signed int inflate(struct z_stream_s *, signed int);
// inflateEnd
// file /usr/include/zlib.h line 508
extern signed int inflateEnd(struct z_stream_s *);
// inflateGetHeader
// file /usr/include/zlib.h line 963
extern signed int inflateGetHeader(struct z_stream_s *, struct gz_header_s *);
// inflateInit2_
// file /usr/include/zlib.h line 1641
extern signed int inflateInit2_(struct z_stream_s *, signed int, const char *, signed int);
// init_snappy_decompressor
// file snappy.c line 1067
static void init_snappy_decompressor(struct snappy_decompressor *d, struct source *reader);
// internal_uncompress
// file snappy.c line 1276
static signed int internal_uncompress(struct source *r, struct writer *writer, unsigned int max_len);
// is_little_endian
// file snappy.c line 115
static inline _Bool is_little_endian(void);
// json_parse_fields
// file rdkafka_performance.c line 258
static unsigned long int json_parse_fields(const char *json, const char **end, const char *field1, const char *field2);
// json_parse_stats
// file rdkafka_performance.c line 294
static void json_parse_stats(const char *json);
// llabs
// file /usr/include/stdlib.h line 779
extern signed long long int llabs(signed long long int);
// log2_floor
// file snappy.c line 123
static inline signed int log2_floor(unsigned int n);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
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
// mk_esc_filename
// file rdkafka_offset.c line 411
static char * mk_esc_filename(const char *in, char *out, unsigned long int out_size);
// msg_consume
// file rdkafka_performance.c line 176
static void msg_consume(struct rd_kafka_message_s *rkmessage, void *opaque);
// msg_delivered
// file rdkafka_performance.c line 118
static void msg_delivered(struct rd_kafka_s *rk, const struct rd_kafka_message_s *rkmessage, void *opaque);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// pclose
// file /usr/include/stdio.h line 878
extern signed int pclose(struct _IO_FILE *);
// peek
// file snappy.c line 242
static inline const char * peek(struct source *s, unsigned long int *len);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// popen
// file /usr/include/stdio.h line 872
extern struct _IO_FILE * popen(const char *, const char *);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// print_stats
// file rdkafka_performance.c line 340
static void print_stats(signed int mode, signed int otype, const char *compression);
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
extern signed int pthread_cond_destroy(union anonymous$15 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$15 *, const union anonymous$12 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$15 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$15 *, union anonymous$11 *, struct timespec *);
// pthread_cond_timedwait_ms
// file rdkafka.c line 92
signed int pthread_cond_timedwait_ms(union anonymous$15 *cond, union anonymous$11 *mutex, signed int timeout_ms);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$15 *, union anonymous$11 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$11 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$11 *, const union anonymous$12 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$11 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$11 *);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// pthread_rwlock_destroy
// file /usr/include/pthread.h line 895
extern signed int pthread_rwlock_destroy(union anonymous$16 *);
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous$16 *, const union anonymous$17 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous$16 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous$16 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous$16 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$18 *, struct anonymous$18 *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// rd_addrinfo_prepare
// file rdaddr.c line 89
const char * rd_addrinfo_prepare(const char *nodesvc, char **node, char **svc);
// rd_array_shuffle
// file rdrand.h line 45
void rd_array_shuffle(void *base, unsigned long int nmemb, unsigned long int entry_size);
// rd_clock
// file ../src/rdtime.h line 60
static inline unsigned long int rd_clock(void);
// rd_clock$link1
// file rdtime.h line 60
static inline unsigned long int rd_clock$link1(void);
// rd_clock$link2
// file rdtime.h line 60
static inline unsigned long int rd_clock$link2(void);
// rd_clock$link3
// file rdtime.h line 60
static inline unsigned long int rd_clock$link3(void);
// rd_clock$link4
// file rdtime.h line 60
static inline unsigned long int rd_clock$link4(void);
// rd_clock$link5
// file rdtime.h line 60
static inline unsigned long int rd_clock$link5(void);
// rd_cond_timedwait_ms
// file rdthread.h line 218
static signed int rd_cond_timedwait_ms(union anonymous$15 *cond, union anonymous$11 *mutex, signed int timeout_ms);
// rd_crc32_reflect
// file rdcrc32.c line 97
unsigned int rd_crc32_reflect(unsigned int data, unsigned long int data_len);
// rd_crc32_update
// file rdcrc32.c line 119
unsigned int rd_crc32_update(unsigned int crc, const unsigned char *data, unsigned long int data_len);
// rd_family2str
// file rdaddr.h line 169
static const char * rd_family2str(signed int af);
// rd_family2str$link1
// file rdaddr.h line 169
static const char * rd_family2str$link1(signed int af$link1);
// rd_fifoq_add0
// file rdqueue.c line 76
void rd_fifoq_add0(struct rd_fifoq_s *rfq, void *ptr, void **ptr_purged);
// rd_fifoq_destroy
// file rdqueue.h line 81
void rd_fifoq_destroy(struct rd_fifoq_s *rfq);
// rd_fifoq_elm_release0
// file rdqueue.h line 105
static inline void rd_fifoq_elm_release0(struct rd_fifoq_s *rfq, struct rd_fifoq_elm_s *rfqe);
// rd_fifoq_elm_release0$link1
// file rdqueue.h line 105
static inline void rd_fifoq_elm_release0$link1(struct rd_fifoq_s *rfq$link1, struct rd_fifoq_elm_s *rfqe$link1);
// rd_fifoq_init
// file rdqueue.h line 82
struct rd_fifoq_s * rd_fifoq_init(struct rd_fifoq_s *rfq);
// rd_fifoq_pop0
// file rdqueue.h line 100
struct rd_fifoq_elm_s * rd_fifoq_pop0(struct rd_fifoq_s *rfq, signed int nowait, signed int timeout_ms);
// rd_fifoq_set_max_size
// file rdqueue.c line 60
void rd_fifoq_set_max_size(struct rd_fifoq_s *rfq, signed int max_size, signed int taildrop);
// rd_getaddrinfo
// file rdaddr.h line 149
struct rd_sockaddr_list_s * rd_getaddrinfo(const char *nodesvc, const char *defsvc, signed int flags, signed int family, signed int socktype, signed int protocol, const char **errstr);
// rd_gz_decompress
// file rdgz.h line 41
void * rd_gz_decompress(void *compressed, signed int compressed_len, unsigned long int *decompressed_lenp);
// rd_hexdump
// file rdlog.c line 39
void rd_hexdump(struct _IO_FILE *fp, const char *name, const void *ptr, unsigned long int len);
// rd_jitter
// file rdrand.h line 36
static inline signed int rd_jitter(signed int low, signed int high);
// rd_jitter$link1
// file rdrand.h line 36
static inline signed int rd_jitter$link1(signed int low$link1, signed int high$link1);
// rd_jitter$link2
// file rdrand.h line 36
static inline signed int rd_jitter$link2(signed int low$link2, signed int high$link2);
// rd_kafka_ApiKey2str
// file rdkafka_proto.h line 71
static const char * rd_kafka_ApiKey2str(signed short int ApiKey);
// rd_kafka_anyconf_clear
// file rdkafka_defaultconf.c line 711
static void rd_kafka_anyconf_clear(void *conf, struct rd_kafka_property *prop);
// rd_kafka_anyconf_copy
// file rdkafka_defaultconf.c line 756
static void rd_kafka_anyconf_copy(signed int scope, void *dst, const void *src);
// rd_kafka_anyconf_destroy
// file rdkafka_int.h line 949
void rd_kafka_anyconf_destroy(signed int scope, void *conf);
// rd_kafka_anyconf_dump
// file rdkafka_defaultconf.c line 889
static const char ** rd_kafka_anyconf_dump(signed int scope, void *conf, unsigned long int *cntp);
// rd_kafka_anyconf_set
// file rdkafka_defaultconf.c line 657
static signed int rd_kafka_anyconf_set(signed int scope, void *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size);
// rd_kafka_anyconf_set_prop
// file rdkafka_defaultconf.c line 473
static enum anonymous$24 rd_kafka_anyconf_set_prop(signed int scope, void *conf, struct rd_kafka_property *prop, const char *value, char *errstr, unsigned long int errstr_size);
// rd_kafka_anyconf_set_prop0
// file rdkafka_defaultconf.c line 426
static enum anonymous$24 rd_kafka_anyconf_set_prop0(signed int scope, void *conf, struct rd_kafka_property *prop, const char *istr, signed int ival);
// rd_kafka_avg_add
// file rdkafka_int.h line 286
static void rd_kafka_avg_add(struct rd_kafka_avg_s *ra, signed long int v);
// rd_kafka_avg_destroy
// file rdkafka_int.h line 345
static void rd_kafka_avg_destroy(struct rd_kafka_avg_s *ra);
// rd_kafka_avg_init
// file rdkafka_int.h line 333
static void rd_kafka_avg_init(struct rd_kafka_avg_s *ra, signed int type);
// rd_kafka_avg_rollover
// file rdkafka_int.h line 301
static void rd_kafka_avg_rollover(struct rd_kafka_avg_s *dst, struct rd_kafka_avg_s *src);
// rd_kafka_avg_rollover$link1
// file rdkafka_int.h line 301
static void rd_kafka_avg_rollover$link1(struct rd_kafka_avg_s *dst$link1, struct rd_kafka_avg_s *src$link1);
// rd_kafka_broker_add
// file rdkafka_broker.c line 4205
static struct rd_kafka_broker_s * rd_kafka_broker_add(struct rd_kafka_s *rk, enum anonymous$21 source, const char *name, unsigned short int port, signed int nodeid);
// rd_kafka_broker_any
// file rdkafka_broker.h line 39
struct rd_kafka_broker_s * rd_kafka_broker_any(struct rd_kafka_s *rk, signed int state);
// rd_kafka_broker_buf_enq
// file rdkafka_broker.c line 657
static void rd_kafka_broker_buf_enq(struct rd_kafka_broker_s *rkb, signed short int ApiKey, char *buf, signed int size, signed int flags, void (*reply_cb)(struct rd_kafka_broker_s *, signed int, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *), void *opaque);
// rd_kafka_broker_buf_enq0
// file rdkafka_broker.c line 582
static void rd_kafka_broker_buf_enq0(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, signed int at_head);
// rd_kafka_broker_buf_enq1
// file rdkafka_broker.c line 613
static void rd_kafka_broker_buf_enq1(struct rd_kafka_broker_s *rkb, signed short int ApiKey, struct rd_kafka_buf_s *rkbuf, void (*reply_cb)(struct rd_kafka_broker_s *, enum anonymous$9, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *), void *opaque);
// rd_kafka_broker_buf_enq1::reply_cb$object
//
void reply_cb$object(struct rd_kafka_broker_s *, enum anonymous$9, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *);
// rd_kafka_broker_buf_enq::reply_cb$object
//
void reply_cb$object(struct rd_kafka_broker_s *, signed int, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *);
// rd_kafka_broker_buf_retry
// file rdkafka_broker.c line 1759
static void rd_kafka_broker_buf_retry(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf);
// rd_kafka_broker_connect
// file rdkafka_broker.c line 1554
static signed int rd_kafka_broker_connect(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_consumer_serve
// file rdkafka_broker.c line 4073
static void rd_kafka_broker_consumer_serve(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_destroy
// file rdkafka_broker.h line 45
void rd_kafka_broker_destroy(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_fail
// file rdkafka_broker.c line 346
static void rd_kafka_broker_fail(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, const char *fmt, ...);
// rd_kafka_broker_fetch_backoff
// file rdkafka_broker.c line 2968
static void rd_kafka_broker_fetch_backoff(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_fetch_reply
// file rdkafka_broker.c line 3165
static void rd_kafka_broker_fetch_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque);
// rd_kafka_broker_fetch_toppars
// file rdkafka_broker.c line 3891
static signed int rd_kafka_broker_fetch_toppars(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_find
// file rdkafka_broker.c line 4334
static struct rd_kafka_broker_s * rd_kafka_broker_find(struct rd_kafka_s *rk, const char *name, unsigned short int port);
// rd_kafka_broker_find_by_nodeid
// file rdkafka_broker.c line 4311
struct rd_kafka_broker_s * rd_kafka_broker_find_by_nodeid(struct rd_kafka_s *rk, signed int nodeid);
// rd_kafka_broker_io_serve
// file rdkafka_broker.c line 2427
static void rd_kafka_broker_io_serve(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_metadata_reply
// file rdkafka_broker.c line 1003
static void rd_kafka_broker_metadata_reply(struct rd_kafka_broker_s *rkb, signed int err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque);
// rd_kafka_broker_metadata_req
// file rdkafka_broker.h line 51
void rd_kafka_broker_metadata_req(struct rd_kafka_broker_s *rkb, signed int all_topics, struct rd_kafka_topic_s *only_rkt, struct rd_kafka_q_s *replyq, const char *reason);
// rd_kafka_broker_metadata_req_op
// file rdkafka_broker.c line 1061
static void rd_kafka_broker_metadata_req_op(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko);
// rd_kafka_broker_op_serve
// file rdkafka_broker.c line 2400
static void rd_kafka_broker_op_serve(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko);
// rd_kafka_broker_produce_toppar
// file rdkafka_broker.c line 1963
static signed int rd_kafka_broker_produce_toppar(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp);
// rd_kafka_broker_producer_serve
// file rdkafka_broker.c line 2492
static void rd_kafka_broker_producer_serve(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_resolve
// file rdkafka_broker.c line 545
static signed int rd_kafka_broker_resolve(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_retry_bufs_move
// file rdkafka_broker.c line 1779
static void rd_kafka_broker_retry_bufs_move(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_send
// file rdkafka_broker.c line 507
static signed long int rd_kafka_broker_send(struct rd_kafka_broker_s *rkb, struct msghdr *msg);
// rd_kafka_broker_set_state
// file rdkafka_broker.c line 108
static void rd_kafka_broker_set_state(struct rd_kafka_broker_s *rkb, signed int state);
// rd_kafka_broker_thread_main
// file rdkafka_broker.c line 4119
static void * rd_kafka_broker_thread_main(void *arg);
// rd_kafka_broker_ua_idle
// file rdkafka_broker.c line 2468
static void rd_kafka_broker_ua_idle(struct rd_kafka_broker_s *rkb);
// rd_kafka_broker_update
// file rdkafka_broker.c line 4422
static void rd_kafka_broker_update(struct rd_kafka_s *rk, struct rd_kafka_metadata_broker *mdb);
// rd_kafka_broker_waitresp_timeout_scan
// file rdkafka_broker.c line 464
static void rd_kafka_broker_waitresp_timeout_scan(struct rd_kafka_broker_s *rkb, unsigned long int now);
// rd_kafka_brokers_add
// file ../src/rdkafka.h line 1088
signed int rd_kafka_brokers_add(struct rd_kafka_s *rk, const char *brokerlist);
// rd_kafka_brokers_init
// file rdkafka_broker.c line 4439
void rd_kafka_brokers_init(void);
// rd_kafka_buf_autopush
// file rdkafka_broker.c line 186
static void rd_kafka_buf_autopush(struct rd_kafka_buf_s *rkbuf);
// rd_kafka_buf_auxbuf_add
// file rdkafka_broker.c line 153
static void rd_kafka_buf_auxbuf_add(struct rd_kafka_buf_s *rkbuf, void *auxbuf);
// rd_kafka_buf_destroy
// file rdkafka_broker.h line 34
void rd_kafka_buf_destroy(struct rd_kafka_buf_s *rkbuf);
// rd_kafka_buf_iov_next
// file rdkafka_broker.c line 163
static struct iovec * rd_kafka_buf_iov_next(struct rd_kafka_buf_s *rkbuf);
// rd_kafka_buf_new
// file rdkafka_broker.c line 239
static struct rd_kafka_buf_s * rd_kafka_buf_new(signed int iovcnt, unsigned long int size);
// rd_kafka_buf_new_shadow
// file rdkafka_broker.c line 271
static struct rd_kafka_buf_s * rd_kafka_buf_new_shadow(void *ptr, unsigned long int size);
// rd_kafka_buf_push
// file rdkafka_broker.c line 172
static void rd_kafka_buf_push(struct rd_kafka_buf_s *rkbuf, void *buf, unsigned long int len);
// rd_kafka_buf_rewind
// file rdkafka_broker.c line 158
static void rd_kafka_buf_rewind(struct rd_kafka_buf_s *rkbuf, signed int iovindex);
// rd_kafka_buf_write
// file rdkafka_broker.c line 197
static inline void rd_kafka_buf_write(struct rd_kafka_buf_s *rkbuf, const void *ptr, unsigned long int len);
// rd_kafka_buf_write_i32
// file rdkafka_broker.c line 212
static inline void rd_kafka_buf_write_i32(struct rd_kafka_buf_s *rkbuf, signed int v);
// rd_kafka_buf_write_i64
// file rdkafka_broker.c line 221
static inline void rd_kafka_buf_write_i64(struct rd_kafka_buf_s *rkbuf, signed long int v);
// rd_kafka_buf_write_kstr
// file rdkafka_broker.c line 230
static inline void rd_kafka_buf_write_kstr(struct rd_kafka_buf_s *rkbuf, const struct rd_kafkap_str_s *kstr);
// rd_kafka_bufq_concat
// file rdkafka_broker.c line 310
static void rd_kafka_bufq_concat(struct rd_kafka_bufq_s *dst, struct rd_kafka_bufq_s *src);
// rd_kafka_bufq_deq
// file rdkafka_broker.c line 293
static void rd_kafka_bufq_deq(struct rd_kafka_bufq_s *rkbufq, struct rd_kafka_buf_s *rkbuf);
// rd_kafka_bufq_enq
// file rdkafka_broker.c line 286
static void rd_kafka_bufq_enq(struct rd_kafka_bufq_s *rkbufq, struct rd_kafka_buf_s *rkbuf);
// rd_kafka_bufq_init
// file rdkafka_broker.c line 301
static void rd_kafka_bufq_init(struct rd_kafka_bufq_s *rkbufq);
// rd_kafka_bufq_purge
// file rdkafka_broker.c line 322
static void rd_kafka_bufq_purge(struct rd_kafka_broker_s *rkb, struct rd_kafka_bufq_s *rkbufq, enum anonymous$9 err);
// rd_kafka_conf_destroy
// file rdkafka.h line 272
void rd_kafka_conf_destroy(struct rd_kafka_conf_s *conf);
// rd_kafka_conf_dump
// file rdkafka_defaultconf.c line 956
const char ** rd_kafka_conf_dump(struct rd_kafka_conf_s *conf, unsigned long int *cntp);
// rd_kafka_conf_dump_free
// file rdkafka_defaultconf.c line 965
void rd_kafka_conf_dump_free(const char **arr, unsigned long int cnt);
// rd_kafka_conf_dup
// file rdkafka_defaultconf.c line 789
struct rd_kafka_conf_s * rd_kafka_conf_dup(const struct rd_kafka_conf_s *conf);
// rd_kafka_conf_new
// file ../src/rdkafka.h line 267
struct rd_kafka_conf_s * rd_kafka_conf_new(void);
// rd_kafka_conf_properties_show
// file ../src/rdkafka.h line 441
void rd_kafka_conf_properties_show(struct _IO_FILE *fp);
// rd_kafka_conf_set
// file ../src/rdkafka.h line 289
enum anonymous$24 rd_kafka_conf_set(struct rd_kafka_conf_s *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size);
// rd_kafka_conf_set_dr_cb
// file rdkafka_defaultconf.c line 808
void rd_kafka_conf_set_dr_cb(struct rd_kafka_conf_s *conf, void (*dr_cb)(struct rd_kafka_s *, void *, unsigned long int, enum anonymous$9, void *, void *));
// rd_kafka_conf_set_dr_cb::dr_cb$object
//
void dr_cb$object(struct rd_kafka_s *, void *, unsigned long int, enum anonymous$9, void *, void *);
// rd_kafka_conf_set_dr_msg_cb
// file ../src/rdkafka.h line 310
void rd_kafka_conf_set_dr_msg_cb(struct rd_kafka_conf_s *conf, void (*dr_msg_cb)(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *));
// rd_kafka_conf_set_dr_msg_cb::dr_msg_cb$object
//
void dr_msg_cb$object(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *);
// rd_kafka_conf_set_error_cb
// file ../src/rdkafka.h line 321
void rd_kafka_conf_set_error_cb(struct rd_kafka_conf_s *conf, void (*error_cb)(struct rd_kafka_s *, signed int, const char *, void *));
// rd_kafka_conf_set_error_cb::error_cb$object
//
void error_cb$object(struct rd_kafka_s *, signed int, const char *, void *);
// rd_kafka_conf_set_log_cb
// file rdkafka_defaultconf.c line 835
void rd_kafka_conf_set_log_cb(struct rd_kafka_conf_s *conf, void (*log_cb)(const struct rd_kafka_s *, signed int, const char *, const char *));
// rd_kafka_conf_set_log_cb::log_cb$object
//
void log_cb$object(const struct rd_kafka_s *, signed int, const char *, const char *);
// rd_kafka_conf_set_opaque
// file rdkafka_defaultconf.c line 865
void rd_kafka_conf_set_opaque(struct rd_kafka_conf_s *conf, void *opaque);
// rd_kafka_conf_set_open_cb
// file rdkafka_defaultconf.c line 858
void rd_kafka_conf_set_open_cb(struct rd_kafka_conf_s *conf, signed int (*open_cb)(const char *, signed int, unsigned int, void *));
// rd_kafka_conf_set_open_cb::open_cb$object
//
signed int open_cb$object(const char *, signed int, unsigned int, void *);
// rd_kafka_conf_set_socket_cb
// file rdkafka_defaultconf.c line 850
void rd_kafka_conf_set_socket_cb(struct rd_kafka_conf_s *conf, signed int (*socket_cb)(signed int, signed int, signed int, void *));
// rd_kafka_conf_set_socket_cb::socket_cb$object
//
signed int socket_cb$object(signed int, signed int, signed int, void *);
// rd_kafka_conf_set_stats_cb
// file ../src/rdkafka.h line 356
void rd_kafka_conf_set_stats_cb(struct rd_kafka_conf_s *conf, signed int (*stats_cb)(struct rd_kafka_s *, char *, unsigned long int, void *));
// rd_kafka_conf_set_stats_cb::stats_cb$object
//
signed int stats_cb$object(struct rd_kafka_s *, char *, unsigned long int, void *);
// rd_kafka_consume
// file rdkafka.c line 1599
struct rd_kafka_message_s * rd_kafka_consume(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms);
// rd_kafka_consume0
// file rdkafka.c line 1575
static struct rd_kafka_message_s * rd_kafka_consume0(struct rd_kafka_q_s *rkq, signed int timeout_ms);
// rd_kafka_consume_batch
// file ../src/rdkafka.h line 768
signed long int rd_kafka_consume_batch(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size);
// rd_kafka_consume_batch0
// file rdkafka.c line 1448
static signed long int rd_kafka_consume_batch0(struct rd_kafka_q_s *rkq, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size);
// rd_kafka_consume_batch_queue
// file rdkafka.c line 1487
signed long int rd_kafka_consume_batch_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size);
// rd_kafka_consume_callback
// file ../src/rdkafka.h line 793
signed int rd_kafka_consume_callback(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque);
// rd_kafka_consume_callback0
// file rdkafka.c line 1519
static signed int rd_kafka_consume_callback0(struct rd_kafka_q_s *rkq, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque);
// rd_kafka_consume_callback0::consume_cb$object
//
void consume_cb$object(struct rd_kafka_message_s *, void *);
// rd_kafka_consume_callback::consume_cb$object
//
void consume_cb$object(struct rd_kafka_message_s *, void *);
// rd_kafka_consume_callback_queue
// file rdkafka.c line 1563
signed int rd_kafka_consume_callback_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque);
// rd_kafka_consume_callback_queue::consume_cb$object
//
void consume_cb$object(struct rd_kafka_message_s *, void *);
// rd_kafka_consume_cb
// file rdkafka.c line 1506
static void rd_kafka_consume_cb(struct rd_kafka_op_s *rko, void *opaque);
// rd_kafka_consume_queue
// file rdkafka.c line 1624
struct rd_kafka_message_s * rd_kafka_consume_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms);
// rd_kafka_consume_start
// file ../src/rdkafka.h line 700
signed int rd_kafka_consume_start(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset);
// rd_kafka_consume_start0
// file rdkafka.c line 1342
static signed int rd_kafka_consume_start0(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset, struct rd_kafka_q_s *rkq);
// rd_kafka_consume_start_queue
// file rdkafka.c line 1396
signed int rd_kafka_consume_start_queue(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset, struct rd_kafka_queue_s *rkqu);
// rd_kafka_consume_stop
// file ../src/rdkafka.h line 728
signed int rd_kafka_consume_stop(struct rd_kafka_topic_s *rkt, signed int partition);
// rd_kafka_crash
// file rdkafka.c line 1871
void rd_kafka_crash(const char *file, signed int line, const char *function, struct rd_kafka_s *rk, const char *reason);
// rd_kafka_defaultconf_set
// file rdkafka_defaultconf.c line 629
static void rd_kafka_defaultconf_set(signed int scope, void *conf);
// rd_kafka_destroy
// file ../src/rdkafka.h line 581
void rd_kafka_destroy(struct rd_kafka_s *rk);
// rd_kafka_destroy0
// file rdkafka.c line 821
void rd_kafka_destroy0(struct rd_kafka_s *rk);
// rd_kafka_dr_msgq
// file rdkafka_broker.c line 1797
void rd_kafka_dr_msgq(struct rd_kafka_s *rk, struct rd_kafka_msgq_s *rkmq, enum anonymous$9 err);
// rd_kafka_dump
// file ../src/rdkafka.h line 1143
void rd_kafka_dump(struct _IO_FILE *fp, struct rd_kafka_s *rk);
// rd_kafka_dump0
// file rdkafka.c line 1755
static void rd_kafka_dump0(struct _IO_FILE *fp, struct rd_kafka_s *rk, signed int locks);
// rd_kafka_err2str
// file ../src/rdkafka.h line 149
const char * rd_kafka_err2str(enum anonymous$9 err);
// rd_kafka_errno2err
// file ../src/rdkafka.h line 163
enum anonymous$9 rd_kafka_errno2err(signed int errnox);
// rd_kafka_fetch_reply_handle
// file rdkafka_broker.c line 2978
static enum anonymous$9 rd_kafka_fetch_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf);
// rd_kafka_global_init
// file rdkafka.c line 1193
static void rd_kafka_global_init(void);
// rd_kafka_log0
// file rdkafka.c line 122
void rd_kafka_log0(const struct rd_kafka_s *rk, const char *extra, signed int level, const char *fac, const char *fmt, ...);
// rd_kafka_log_buf
// file rdkafka.c line 113
void rd_kafka_log_buf(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf);
// rd_kafka_log_print
// file rdkafka.c line 146
void rd_kafka_log_print(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf);
// rd_kafka_log_syslog
// file rdkafka.c line 157
void rd_kafka_log_syslog(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf);
// rd_kafka_message_destroy
// file ../src/rdkafka.h line 206
void rd_kafka_message_destroy(struct rd_kafka_message_s *rkmessage);
// rd_kafka_message_errstr
// file ../src/rdkafka.h line 215
static inline const char * rd_kafka_message_errstr(const struct rd_kafka_message_s *rkmessage);
// rd_kafka_message_get
// file rdkafka.c line 489
static struct rd_kafka_message_s * rd_kafka_message_get(struct rd_kafka_op_s *rko);
// rd_kafka_messageset_handle
// file rdkafka_broker.c line 2735
static enum anonymous$9 rd_kafka_messageset_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, struct rd_kafka_q_s *rkq, struct rd_kafka_buf_s *rkbuf, void *buf, unsigned long int size);
// rd_kafka_metadata
// file rdkafka.c line 1882
enum anonymous$9 rd_kafka_metadata(struct rd_kafka_s *rk, signed int all_topics, struct rd_kafka_topic_s *only_rkt, struct rd_kafka_metadata **metadatap, signed int timeout_ms);
// rd_kafka_metadata_destroy
// file rdkafka.c line 1940
void rd_kafka_metadata_destroy(struct rd_kafka_metadata *metadata);
// rd_kafka_metadata_handle
// file rdkafka_broker.c line 833
static struct rd_kafka_metadata * rd_kafka_metadata_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko, const char *buf, unsigned long int size);
// rd_kafka_metadata_refresh_cb
// file rdkafka.c line 1134
static void rd_kafka_metadata_refresh_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_msg_destroy
// file rdkafka_msg.h line 33
void rd_kafka_msg_destroy(struct rd_kafka_s *rk, struct rd_kafka_msg_s *rkm);
// rd_kafka_msg_new
// file rdkafka_msg.h line 35
signed int rd_kafka_msg_new(struct rd_kafka_topic_s *rkt, signed int force_partition, signed int msgflags, char *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque);
// rd_kafka_msg_new0
// file rdkafka_msg.c line 58
static struct rd_kafka_msg_s * rd_kafka_msg_new0(struct rd_kafka_topic_s *rkt, signed int force_partition, signed int msgflags, char *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque, enum anonymous$9 *errp, unsigned long int now);
// rd_kafka_msg_partitioner
// file rdkafka_msg.c line 319
signed int rd_kafka_msg_partitioner(struct rd_kafka_topic_s *rkt, struct rd_kafka_msg_s *rkm, signed int do_lock);
// rd_kafka_msg_partitioner_random
// file rdkafka_msg.c line 302
signed int rd_kafka_msg_partitioner_random(const struct rd_kafka_topic_s *rkt, const void *key, unsigned long int keylen, signed int partition_cnt, void *rkt_opaque, void *msg_opaque);
// rd_kafka_msghdr_rebuild
// file rdkafka_broker.c line 1330
static void rd_kafka_msghdr_rebuild(struct msghdr *dst, unsigned long int dst_len, struct msghdr *src, signed long int of);
// rd_kafka_msghdr_size
// file rdkafka_broker.c line 94
static unsigned long int rd_kafka_msghdr_size(struct msghdr *msg);
// rd_kafka_msgq_age_scan
// file rdkafka_msg.h line 148
signed int rd_kafka_msgq_age_scan(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msgq_s *timedout, unsigned long int now);
// rd_kafka_msgq_concat
// file rdkafka_msg.h line 52
static inline void rd_kafka_msgq_concat(struct rd_kafka_msgq_s *dst, struct rd_kafka_msgq_s *src);
// rd_kafka_msgq_concat$link1
// file rdkafka_msg.h line 52
static inline void rd_kafka_msgq_concat$link1(struct rd_kafka_msgq_s *dst$link1, struct rd_kafka_msgq_s *src$link1);
// rd_kafka_msgq_deq
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm, signed int do_count);
// rd_kafka_msgq_deq$link1
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq$link1(struct rd_kafka_msgq_s *rkmq$link1, struct rd_kafka_msg_s *rkm$link1, signed int do_count$link1);
// rd_kafka_msgq_deq$link2
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq$link2(struct rd_kafka_msgq_s *rkmq$link2, struct rd_kafka_msg_s *rkm$link2, signed int do_count$link2);
// rd_kafka_msgq_enq
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm);
// rd_kafka_msgq_enq$link1
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq$link1(struct rd_kafka_msgq_s *rkmq$link1, struct rd_kafka_msg_s *rkm$link1);
// rd_kafka_msgq_enq$link2
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq$link2(struct rd_kafka_msgq_s *rkmq$link2, struct rd_kafka_msg_s *rkm$link2);
// rd_kafka_msgq_init
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init(struct rd_kafka_msgq_s *rkmq);
// rd_kafka_msgq_init$link1
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init$link1(struct rd_kafka_msgq_s *rkmq$link1);
// rd_kafka_msgq_init$link2
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init$link2(struct rd_kafka_msgq_s *rkmq$link2);
// rd_kafka_msgq_insert
// file rdkafka_msg.h line 124
static inline void rd_kafka_msgq_insert(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm);
// rd_kafka_msgq_move
// file rdkafka_msg.h line 64
static inline void rd_kafka_msgq_move(struct rd_kafka_msgq_s *dst, struct rd_kafka_msgq_s *src);
// rd_kafka_msgq_move$link1
// file rdkafka_msg.h line 64
static inline void rd_kafka_msgq_move$link1(struct rd_kafka_msgq_s *dst$link1, struct rd_kafka_msgq_s *src$link1);
// rd_kafka_msgq_purge
// file rdkafka_msg.h line 76
static inline void rd_kafka_msgq_purge(struct rd_kafka_s *rk, struct rd_kafka_msgq_s *rkmq);
// rd_kafka_msgq_purge$link1
// file rdkafka_msg.h line 76
static inline void rd_kafka_msgq_purge$link1(struct rd_kafka_s *rk$link1, struct rd_kafka_msgq_s *rkmq$link1);
// rd_kafka_name
// file ../src/rdkafka.h line 588
const char * rd_kafka_name(const struct rd_kafka_s *rk);
// rd_kafka_new
// file ../src/rdkafka.h line 573
struct rd_kafka_s * rd_kafka_new(enum rd_kafka_type_t type, struct rd_kafka_conf_s *conf, char *errstr, unsigned long int errstr_size);
// rd_kafka_offset_broker_commit_tmr_cb
// file rdkafka_offset.c line 538
static void rd_kafka_offset_broker_commit_tmr_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_offset_broker_init
// file rdkafka_offset.c line 574
static void rd_kafka_offset_broker_init(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_broker_term
// file rdkafka_offset.c line 560
static void rd_kafka_offset_broker_term(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_file_close
// file rdkafka_offset.c line 63
static void rd_kafka_offset_file_close(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_file_commit
// file rdkafka_offset.c line 199
static signed int rd_kafka_offset_file_commit(struct rd_kafka_toppar_s *rktp, signed long int offset);
// rd_kafka_offset_file_commit_tmr_cb
// file rdkafka_offset.c line 298
static void rd_kafka_offset_file_commit_tmr_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_offset_file_init
// file rdkafka_offset.c line 460
static void rd_kafka_offset_file_init(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_file_open
// file rdkafka_offset.c line 105
static signed int rd_kafka_offset_file_open(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_file_read
// file rdkafka_offset.c line 130
static signed long int rd_kafka_offset_file_read(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_file_sync_tmr_cb
// file rdkafka_offset.c line 320
static void rd_kafka_offset_file_sync_tmr_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_offset_file_term
// file rdkafka_offset.c line 341
static void rd_kafka_offset_file_term(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_reset
// file rdkafka_offset.h line 55
void rd_kafka_offset_reset(struct rd_kafka_toppar_s *rktp, signed long int err_offset, enum anonymous$9 err, const char *reason);
// rd_kafka_offset_store
// file rdkafka_offset.c line 274
enum anonymous$9 rd_kafka_offset_store(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset);
// rd_kafka_offset_store0
// file rdkafka_offset.h line 40
static inline void rd_kafka_offset_store0(struct rd_kafka_toppar_s *rktp, signed long int offset, signed int lock);
// rd_kafka_offset_store0$link1
// file rdkafka_offset.h line 40
static inline void rd_kafka_offset_store0$link1(struct rd_kafka_toppar_s *rktp$link1, signed long int offset$link1, signed int lock$link1);
// rd_kafka_offset_store_init
// file rdkafka_offset.h line 53
void rd_kafka_offset_store_init(struct rd_kafka_toppar_s *rktp);
// rd_kafka_offset_store_term
// file rdkafka_offset.h line 52
void rd_kafka_offset_store_term(struct rd_kafka_toppar_s *rktp);
// rd_kafka_op_destroy
// file rdkafka.c line 194
void rd_kafka_op_destroy(struct rd_kafka_op_s *rko);
// rd_kafka_op_err
// file rdkafka.c line 652
void rd_kafka_op_err(struct rd_kafka_s *rk, enum anonymous$9 err, const char *fmt, ...);
// rd_kafka_op_new
// file rdkafka.c line 184
struct rd_kafka_op_s * rd_kafka_op_new(enum anonymous$44 type);
// rd_kafka_op_reply
// file rdkafka.c line 613
void rd_kafka_op_reply(struct rd_kafka_s *rk, enum anonymous$44 type, enum anonymous$9 err, void *payload, signed int len);
// rd_kafka_op_reply0
// file rdkafka.c line 595
void rd_kafka_op_reply0(struct rd_kafka_s *rk, struct rd_kafka_op_s *rko, enum anonymous$44 type, enum anonymous$9 err, void *payload, signed int len);
// rd_kafka_op_reply2
// file rdkafka.c line 642
void rd_kafka_op_reply2(struct rd_kafka_s *rk, struct rd_kafka_op_s *rko);
// rd_kafka_op_req
// file rdkafka.c line 695
struct rd_kafka_op_s * rd_kafka_op_req(struct rd_kafka_q_s *destq, struct rd_kafka_op_s *rko, signed int timeout_ms);
// rd_kafka_op_req0
// file rdkafka.c line 671
struct rd_kafka_op_s * rd_kafka_op_req0(struct rd_kafka_q_s *destq, struct rd_kafka_q_s *recvq, struct rd_kafka_op_s *rko, signed int timeout_ms);
// rd_kafka_opaque
// file rdkafka.c line 1838
void * rd_kafka_opaque(const struct rd_kafka_s *rk);
// rd_kafka_open_cb_generic
// file rdkafka_offset.c line 88
signed int rd_kafka_open_cb_generic(const char *pathname, signed int flags, unsigned int mode, void *opaque);
// rd_kafka_open_cb_linux
// file rdkafka_int.h line 225
signed int rd_kafka_open_cb_linux(const char *pathname, signed int flags, unsigned int mode, void *opaque);
// rd_kafka_outq_len
// file ../src/rdkafka.h line 1134
signed int rd_kafka_outq_len(struct rd_kafka_s *rk);
// rd_kafka_poll
// file ../src/rdkafka.h line 1068
signed int rd_kafka_poll(struct rd_kafka_s *rk, signed int timeout_ms);
// rd_kafka_poll_cb
// file rdkafka.c line 1635
static void rd_kafka_poll_cb(struct rd_kafka_op_s *rko, void *opaque);
// rd_kafka_produce
// file ../src/rdkafka.h line 921
signed int rd_kafka_produce(struct rd_kafka_topic_s *rkt, signed int partition, signed int msgflags, void *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque);
// rd_kafka_produce_batch
// file rdkafka_msg.c line 172
signed int rd_kafka_produce_batch(struct rd_kafka_topic_s *rkt, signed int partition, signed int msgflags, struct rd_kafka_message_s *rkmessages, signed int message_cnt);
// rd_kafka_produce_msgset_reply
// file rdkafka_broker.c line 1870
static void rd_kafka_produce_msgset_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque);
// rd_kafka_produce_reply_handle
// file rdkafka_broker.c line 1827
static enum anonymous$9 rd_kafka_produce_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, signed long int *offsetp);
// rd_kafka_q_concat0
// file rdkafka_int.h line 863
static inline void rd_kafka_q_concat0(struct rd_kafka_q_s *rkq, struct rd_kafka_q_s *srcq, signed int do_lock);
// rd_kafka_q_concat0$link1
// file rdkafka_int.h line 863
static inline void rd_kafka_q_concat0$link1(struct rd_kafka_q_s *rkq$link1, struct rd_kafka_q_s *srcq$link1, signed int do_lock$link1);
// rd_kafka_q_destroy
// file rdkafka.c line 214
signed int rd_kafka_q_destroy(struct rd_kafka_q_s *rkq);
// rd_kafka_q_enq
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq(struct rd_kafka_q_s *rkq, struct rd_kafka_op_s *rko);
// rd_kafka_q_enq$link1
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq$link1(struct rd_kafka_q_s *rkq$link1, struct rd_kafka_op_s *rko$link1);
// rd_kafka_q_enq$link2
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq$link2(struct rd_kafka_q_s *rkq$link2, struct rd_kafka_op_s *rko$link2);
// rd_kafka_q_fwd_set
// file rdkafka.c line 264
void rd_kafka_q_fwd_set(struct rd_kafka_q_s *rkq, struct rd_kafka_q_s *fwdq);
// rd_kafka_q_init
// file rdkafka.c line 233
void rd_kafka_q_init(struct rd_kafka_q_s *rkq);
// rd_kafka_q_len
// file rdkafka_int.h line 885
static inline signed int rd_kafka_q_len(struct rd_kafka_q_s *rkq);
// rd_kafka_q_len$link1
// file rdkafka_int.h line 885
static inline signed int rd_kafka_q_len$link1(struct rd_kafka_q_s *rkq$link1);
// rd_kafka_q_move_cnt
// file rdkafka.c line 321
unsigned long int rd_kafka_q_move_cnt(struct rd_kafka_q_s *dstq, struct rd_kafka_q_s *srcq, unsigned long int cnt);
// rd_kafka_q_new
// file rdkafka.c line 249
struct rd_kafka_q_s * rd_kafka_q_new(void);
// rd_kafka_q_pop
// file rdkafka.c line 371
struct rd_kafka_op_s * rd_kafka_q_pop(struct rd_kafka_q_s *rkq, signed int timeout_ms);
// rd_kafka_q_purge
// file rdkafka.c line 285
void rd_kafka_q_purge(struct rd_kafka_q_s *rkq);
// rd_kafka_q_serve
// file rdkafka.c line 418
signed int rd_kafka_q_serve(struct rd_kafka_q_s *rkq, signed int timeout_ms, void (*callback)(struct rd_kafka_op_s *, void *), void *opaque);
// rd_kafka_q_serve::callback$object
//
void callback$object(struct rd_kafka_op_s *, void *);
// rd_kafka_q_serve_rkmessages
// file rdkafka.c line 512
static signed int rd_kafka_q_serve_rkmessages(struct rd_kafka_q_s *rkq, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size);
// rd_kafka_q_size
// file rdkafka_int.h line 898
static inline unsigned long int rd_kafka_q_size(struct rd_kafka_q_s *rkq);
// rd_kafka_q_size$link1
// file rdkafka_int.h line 898
static inline unsigned long int rd_kafka_q_size$link1(struct rd_kafka_q_s *rkq$link1);
// rd_kafka_queue_destroy
// file rdkafka.c line 572
void rd_kafka_queue_destroy(struct rd_kafka_queue_s *rkqu);
// rd_kafka_queue_new
// file rdkafka.c line 579
struct rd_kafka_queue_s * rd_kafka_queue_new(struct rd_kafka_s *rk);
// rd_kafka_recv
// file rdkafka_broker.c line 1369
static signed int rd_kafka_recv(struct rd_kafka_broker_s *rkb);
// rd_kafka_req_response
// file rdkafka_broker.c line 1293
static signed int rd_kafka_req_response(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf);
// rd_kafka_send
// file rdkafka_broker.c line 1682
static signed int rd_kafka_send(struct rd_kafka_broker_s *rkb);
// rd_kafka_set_log_level
// file ../src/rdkafka.h line 1113
void rd_kafka_set_log_level(struct rd_kafka_s *rk, signed int level);
// rd_kafka_set_logger
// file rdkafka.c line 168
void rd_kafka_set_logger(struct rd_kafka_s *rk, void (*func)(const struct rd_kafka_s *, signed int, const char *, const char *));
// rd_kafka_set_logger::func$object
//
void func$object(const struct rd_kafka_s *, signed int, const char *, const char *);
// rd_kafka_snappy_java_decompress
// file rdkafka_broker.c line 2618
static char * rd_kafka_snappy_java_decompress(struct rd_kafka_broker_s *rkb, signed long int Offset, const char *inbuf, unsigned long int inlen, unsigned long int *outlenp);
// rd_kafka_socket_cb_generic
// file rdkafka_broker.c line 1540
signed int rd_kafka_socket_cb_generic(signed int domain, signed int type, signed int protocol, void *opaque);
// rd_kafka_socket_cb_linux
// file rdkafka_broker.c line 1527
signed int rd_kafka_socket_cb_linux(signed int domain, signed int type, signed int protocol, void *opaque);
// rd_kafka_stats_emit_all
// file rdkafka.c line 969
static void rd_kafka_stats_emit_all(struct rd_kafka_s *rk);
// rd_kafka_stats_emit_tmr_cb
// file rdkafka.c line 1130
static void rd_kafka_stats_emit_tmr_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_stats_emit_toppar
// file rdkafka.c line 890
static inline void rd_kafka_stats_emit_toppar(char **bufp, unsigned long int *sizep, signed int *ofp, struct rd_kafka_toppar_s *rktp, signed int first);
// rd_kafka_term_sig_handler
// file rdkafka.c line 1189
static void rd_kafka_term_sig_handler(signed int sig);
// rd_kafka_thread_cnt
// file rdkafka.c line 55
signed int rd_kafka_thread_cnt(void);
// rd_kafka_thread_main
// file rdkafka.c line 1158
static void * rd_kafka_thread_main(void *arg);
// rd_kafka_timer_cmp
// file rdkafka_timer.c line 44
static signed int rd_kafka_timer_cmp(const void *_a, const void *_b);
// rd_kafka_timer_schedule
// file rdkafka_timer.c line 54
static void rd_kafka_timer_schedule(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr);
// rd_kafka_timer_start
// file rdkafka_timer.h line 46
void rd_kafka_timer_start(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr, signed int interval, void (*callback)(struct rd_kafka_s *, void *), void *arg);
// rd_kafka_timer_start::callback$object
//
void callback$object(struct rd_kafka_s *, void *);
// rd_kafka_timer_started
// file rdkafka_timer.c line 39
static inline signed int rd_kafka_timer_started(const struct rd_kafka_timer_s *rtmr);
// rd_kafka_timer_stop
// file rdkafka_timer.c line 76
void rd_kafka_timer_stop(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr, signed int lock);
// rd_kafka_timer_unschedule
// file rdkafka_timer.c line 49
static void rd_kafka_timer_unschedule(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr);
// rd_kafka_timers_interrupt
// file rdkafka_timer.h line 51
void rd_kafka_timers_interrupt(struct rd_kafka_s *rk);
// rd_kafka_timers_run
// file rdkafka_timer.h line 52
void rd_kafka_timers_run(struct rd_kafka_s *rk, signed int timeout);
// rd_kafka_topic_assign_uas
// file rdkafka_topic.c line 883
static void rd_kafka_topic_assign_uas(struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_conf_destroy
// file rdkafka.h line 469
void rd_kafka_topic_conf_destroy(struct rd_kafka_topic_conf_s *topic_conf);
// rd_kafka_topic_conf_dump
// file rdkafka_defaultconf.c line 960
const char ** rd_kafka_topic_conf_dump(struct rd_kafka_topic_conf_s *conf, unsigned long int *cntp);
// rd_kafka_topic_conf_dup
// file rdkafka_defaultconf.c line 798
struct rd_kafka_topic_conf_s * rd_kafka_topic_conf_dup(const struct rd_kafka_topic_conf_s *conf);
// rd_kafka_topic_conf_new
// file ../src/rdkafka.h line 456
struct rd_kafka_topic_conf_s * rd_kafka_topic_conf_new(void);
// rd_kafka_topic_conf_set
// file ../src/rdkafka.h line 479
enum anonymous$24 rd_kafka_topic_conf_set(struct rd_kafka_topic_conf_s *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size);
// rd_kafka_topic_conf_set_opaque
// file rdkafka_defaultconf.c line 883
void rd_kafka_topic_conf_set_opaque(struct rd_kafka_topic_conf_s *topic_conf, void *opaque);
// rd_kafka_topic_conf_set_partitioner_cb
// file rdkafka_defaultconf.c line 872
void rd_kafka_topic_conf_set_partitioner_cb(struct rd_kafka_topic_conf_s *topic_conf, signed int (*partitioner)(const struct rd_kafka_topic_s *, const void *, unsigned long int, signed int, void *, void *));
// rd_kafka_topic_conf_set_partitioner_cb::partitioner$object
//
signed int partitioner$object(const struct rd_kafka_topic_s *, const void *, unsigned long int, signed int, void *, void *);
// rd_kafka_topic_destroy
// file ../src/rdkafka.h line 612
void rd_kafka_topic_destroy(struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_destroy0
// file rdkafka_topic.h line 44
void rd_kafka_topic_destroy0(struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_find
// file rdkafka_topic.c line 444
struct rd_kafka_topic_s * rd_kafka_topic_find(struct rd_kafka_s *rk, const char *topic, signed int do_lock);
// rd_kafka_topic_find0
// file rdkafka_topic.c line 465
struct rd_kafka_topic_s * rd_kafka_topic_find0(struct rd_kafka_s *rk, const struct rd_kafkap_str_s *topic);
// rd_kafka_topic_leader_query0
// file rdkafka_broker.c line 1229
void rd_kafka_topic_leader_query0(struct rd_kafka_s *rk, struct rd_kafka_topic_s *rkt, signed int do_rk_lock);
// rd_kafka_topic_leader_update
// file rdkafka_topic.c line 655
static signed int rd_kafka_topic_leader_update(struct rd_kafka_topic_s *rkt, struct rd_kafka_metadata_partition *mdp, struct rd_kafka_broker_s *rkb);
// rd_kafka_topic_metadata_none
// file rdkafka_topic.h line 76
void rd_kafka_topic_metadata_none(struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_metadata_update
// file rdkafka_topic.h line 78
signed int rd_kafka_topic_metadata_update(struct rd_kafka_broker_s *rkb, struct rd_kafka_metadata_topic *mdt);
// rd_kafka_topic_name
// file ../src/rdkafka.h line 618
const char * rd_kafka_topic_name(const struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_new
// file ../src/rdkafka.h line 604
struct rd_kafka_topic_s * rd_kafka_topic_new(struct rd_kafka_s *rk, const char *topic, struct rd_kafka_topic_conf_s *conf);
// rd_kafka_topic_partition_available
// file rdkafka.h line 523
signed int rd_kafka_topic_partition_available(const struct rd_kafka_topic_s *rkt, signed int partition);
// rd_kafka_topic_partition_cnt_update
// file rdkafka_topic.c line 780
static signed int rd_kafka_topic_partition_cnt_update(struct rd_kafka_topic_s *rkt, signed int partition_cnt);
// rd_kafka_topic_partitions_remove
// file rdkafka_topic.h line 74
void rd_kafka_topic_partitions_remove(struct rd_kafka_topic_s *rkt);
// rd_kafka_topic_scan_all
// file rdkafka_topic.h line 81
signed int rd_kafka_topic_scan_all(struct rd_kafka_s *rk, unsigned long int now);
// rd_kafka_topic_scan_tmr_cb
// file rdkafka.c line 1126
static void rd_kafka_topic_scan_tmr_cb(struct rd_kafka_s *rk, void *arg);
// rd_kafka_topic_set_state
// file rdkafka_topic.c line 558
static void rd_kafka_topic_set_state(struct rd_kafka_topic_s *rkt, signed int state);
// rd_kafka_toppar_broker_delegate
// file rdkafka_topic.h line 71
void rd_kafka_toppar_broker_delegate(struct rd_kafka_toppar_s *rktp, struct rd_kafka_broker_s *rkb);
// rd_kafka_toppar_concat_msgq
// file rdkafka_topic.h line 40
void rd_kafka_toppar_concat_msgq(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msgq_s *rkmq);
// rd_kafka_toppar_deq_msg
// file rdkafka_topic.c line 353
void rd_kafka_toppar_deq_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm);
// rd_kafka_toppar_desired_add
// file rdkafka_topic.h line 60
struct rd_kafka_toppar_s * rd_kafka_toppar_desired_add(struct rd_kafka_topic_s *rkt, signed int partition);
// rd_kafka_toppar_desired_del
// file rdkafka_topic.h line 62
void rd_kafka_toppar_desired_del(struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_desired_get
// file rdkafka_topic.h line 58
struct rd_kafka_toppar_s * rd_kafka_toppar_desired_get(struct rd_kafka_topic_s *rkt, signed int partition);
// rd_kafka_toppar_destroy0
// file rdkafka_topic.h line 34
void rd_kafka_toppar_destroy0(struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_dump
// file rdkafka.c line 1735
static void rd_kafka_toppar_dump(struct _IO_FILE *fp, const char *indent, struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_enq_msg
// file rdkafka_topic.h line 36
void rd_kafka_toppar_enq_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm);
// rd_kafka_toppar_get
// file rdkafka_topic.h line 46
struct rd_kafka_toppar_s * rd_kafka_toppar_get(const struct rd_kafka_topic_s *rkt, signed int partition, signed int ua_on_miss);
// rd_kafka_toppar_get2
// file rdkafka_topic.h line 49
struct rd_kafka_toppar_s * rd_kafka_toppar_get2(struct rd_kafka_s *rk, const struct rd_kafkap_str_s *topic, signed int partition, signed int ua_on_miss);
// rd_kafka_toppar_get_avail
// file rdkafka_topic.h line 53
struct rd_kafka_toppar_s * rd_kafka_toppar_get_avail(const struct rd_kafka_topic_s *rkt, signed int partition, signed int ua_on_miss, enum anonymous$9 *errp);
// rd_kafka_toppar_hi_offset_handle
// file rdkafka_broker.c line 3826
static void rd_kafka_toppar_hi_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque);
// rd_kafka_toppar_insert_msg
// file rdkafka_topic.c line 333
void rd_kafka_toppar_insert_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm);
// rd_kafka_toppar_insert_msgq
// file rdkafka_topic.h line 38
void rd_kafka_toppar_insert_msgq(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msgq_s *rkmq);
// rd_kafka_toppar_lo_offset_handle
// file rdkafka_broker.c line 3821
static void rd_kafka_toppar_lo_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque);
// rd_kafka_toppar_move_msgs
// file rdkafka_topic.c line 321
static void rd_kafka_toppar_move_msgs(struct rd_kafka_toppar_s *dst, struct rd_kafka_toppar_s *src);
// rd_kafka_toppar_new
// file rdkafka_topic.c line 52
static struct rd_kafka_toppar_s * rd_kafka_toppar_new(struct rd_kafka_topic_s *rkt, signed int partition);
// rd_kafka_toppar_next_offset_handle
// file rdkafka_broker.c line 3832
static void rd_kafka_toppar_next_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque);
// rd_kafka_toppar_offset_commit
// file rdkafka_broker.c line 3430
enum anonymous$9 rd_kafka_toppar_offset_commit(struct rd_kafka_toppar_s *rktp, signed long int offset);
// rd_kafka_toppar_offset_reply
// file rdkafka_broker.c line 3615
static void rd_kafka_toppar_offset_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque);
// rd_kafka_toppar_offset_reply_handle
// file rdkafka_broker.c line 3532
static enum anonymous$9 rd_kafka_toppar_offset_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *request, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_offset_reply_handle::1::2::1::3::1::6::hndcb$object
//
void hndcb$object(struct rd_kafka_toppar_s *, signed long int, void *);
// rd_kafka_toppar_offset_request
// file rdkafka_broker.c line 3866
static void rd_kafka_toppar_offset_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_offset_request0
// file rdkafka_broker.c line 3766
static void rd_kafka_toppar_offset_request0(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, signed long int query_offset, void *hndcb, void *hndopaque);
// rd_kafka_toppar_offsetcommit_reply
// file rdkafka_broker.c line 3286
static void rd_kafka_toppar_offsetcommit_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque);
// rd_kafka_toppar_offsetcommit_reply_handle
// file rdkafka_broker.c line 3221
static enum anonymous$9 rd_kafka_toppar_offsetcommit_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp, signed long int offset);
// rd_kafka_toppar_offsetcommit_request
// file rdkafka_broker.c line 3365
static void rd_kafka_toppar_offsetcommit_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, signed long int offset);
// rd_kafka_toppar_offsetfetch_reply_handle
// file rdkafka_broker.c line 3461
static enum anonymous$9 rd_kafka_toppar_offsetfetch_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_offsetfetch_request
// file rdkafka_broker.c line 3715
static void rd_kafka_toppar_offsetfetch_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp);
// rd_kafka_toppar_ua_move
// file rdkafka_topic.c line 387
signed int rd_kafka_toppar_ua_move(struct rd_kafka_topic_s *rkt, struct rd_kafka_msgq_s *rkmq);
// rd_kafka_type2str
// file rdkafka.c line 712
static const char * rd_kafka_type2str(enum rd_kafka_type_t type);
// rd_kafka_version
// file ../src/rdkafka.h line 63
signed int rd_kafka_version(void);
// rd_kafka_version_str
// file ../src/rdkafka.h line 68
const char * rd_kafka_version_str(void);
// rd_kafka_wait_destroyed
// file ../src/rdkafka.h line 1162
signed int rd_kafka_wait_destroyed(signed int timeout_ms);
// rd_kafka_waitresp_find
// file rdkafka_broker.c line 1267
static struct rd_kafka_buf_s * rd_kafka_waitresp_find(struct rd_kafka_broker_s *rkb, signed int corrid);
// rd_kafkap_bytes_new
// file rdkafka_proto.h line 226
static inline struct rd_kafkap_bytes_s * rd_kafkap_bytes_new(const void *data, unsigned long int datalen);
// rd_kafkap_str_cmp
// file rdkafka_proto.h line 128
static inline signed int rd_kafkap_str_cmp(const struct rd_kafkap_str_s *a, const struct rd_kafkap_str_s *b);
// rd_kafkap_str_cmp$link1
// file rdkafka_proto.h line 128
static inline signed int rd_kafkap_str_cmp$link1(const struct rd_kafkap_str_s *a$link1, const struct rd_kafkap_str_s *b$link1);
// rd_kafkap_str_cmp_str
// file rdkafka_proto.h line 137
static inline signed int rd_kafkap_str_cmp_str(const struct rd_kafkap_str_s *a, const char *str);
// rd_kafkap_str_cmp_str$link1
// file rdkafka_proto.h line 137
static inline signed int rd_kafkap_str_cmp_str$link1(const struct rd_kafkap_str_s *a$link1, const char *str$link1);
// rd_kafkap_str_new
// file rdkafka_proto.h line 147
static inline struct rd_kafkap_str_s * rd_kafkap_str_new(const char *str);
// rd_kafkap_str_new$link1
// file rdkafka_proto.h line 147
static inline struct rd_kafkap_str_s * rd_kafkap_str_new$link1(const char *str$link1);
// rd_sockaddr2str
// file rdaddr.h line 80
const char * rd_sockaddr2str(const void *addr, signed int flags);
// rd_sockaddr_list_destroy
// file rdaddr.h line 161
void rd_sockaddr_list_destroy(struct rd_sockaddr_list_s *rsal);
// rd_sockaddr_list_next
// file rdaddr.h line 123
static inline union anonymous$8 * rd_sockaddr_list_next(struct rd_sockaddr_list_s *rsal);
// rd_thread_cleanup
// file rdthread.c line 78
void rd_thread_cleanup(void);
// rd_thread_create
// file rdthread.c line 130
signed int rd_thread_create(struct rd_thread_s **rdt, const char *name, const union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg);
// rd_thread_create0
// file rdthread.c line 111
struct rd_thread_s * rd_thread_create0(const char *name, unsigned long int *pthread);
// rd_thread_create::start_routine$object
//
void * start_routine$object(void *);
// rd_thread_destroy
// file rdthread.c line 70
static void rd_thread_destroy(struct rd_thread_s *rdt);
// rd_thread_dispatch
// file rdthread.c line 82
void rd_thread_dispatch(void);
// rd_thread_event_call
// file rdevent.h line 92
static void rd_thread_event_call(struct rd_thread_event_s *rte);
// rd_thread_init
// file rdthread.c line 44
void rd_thread_init(void);
// rd_thread_poll
// file rdthread.c line 50
signed int rd_thread_poll(signed int timeout_ms);
// rd_thread_sigmask
// file rdthread.c line 190
signed int rd_thread_sigmask(signed int how, ...);
// rd_thread_start_routine
// file rdthread.c line 93
static void * rd_thread_start_routine(void *arg);
// rd_threads_create
// file rdthread.c line 164
signed int rd_threads_create(const char *nameprefix, signed int threadcount, const union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg);
// rd_threads_create::start_routine$object
//
void * start_routine$object(void *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_uncompressed_length
// file snappy.c line 1086
static _Bool read_uncompressed_length(struct snappy_decompressor *d, unsigned int *result);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recvmsg
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 202
extern signed long int recvmsg(signed int, struct msghdr *, signed int);
// refill_tag
// file snappy.c line 1209
static _Bool refill_tag(struct snappy_decompressor *d);
// sendmsg
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 184
extern signed long int sendmsg(signed int, struct msghdr *, signed int);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// sig_usr1
// file rdkafka_performance.c line 512
static void sig_usr1(signed int sig);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$18 *, signed int);
// sigdelset
// file /usr/include/signal.h line 224
extern signed int sigdelset(struct anonymous$18 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$18 *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$18 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sink_peek
// file snappy.c line 294
static inline void * sink_peek(struct sink *s, unsigned long int n);
// skip
// file snappy.c line 255
static inline void skip(struct source *s, unsigned long int n);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snappy_compress
// file snappy.c line 1425
signed int snappy_compress(struct snappy_env *env, const char *input, unsigned long int input_length, char *compressed, unsigned long int *compressed_length);
// snappy_compress_iov
// file snappy.h line 26
signed int snappy_compress_iov(struct snappy_env *env, struct iovec *iov_in, signed int iov_in_len, unsigned long int input_length, struct iovec *iov_out, signed int *iov_out_len, unsigned long int *compressed_length);
// snappy_free_env
// file snappy.h line 17
void snappy_free_env(struct snappy_env *env);
// snappy_init_env
// file snappy.c line 1588
signed int snappy_init_env(struct snappy_env *env);
// snappy_init_env_sg
// file snappy.h line 16
signed int snappy_init_env_sg(struct snappy_env *env, _Bool sg);
// snappy_max_compressed_length
// file snappy.h line 34
unsigned long int snappy_max_compressed_length(unsigned long int source_len);
// snappy_uncompress
// file snappy.h line 20
signed int snappy_uncompress(const char *compressed, unsigned long int n, char *uncompressed);
// snappy_uncompress_iov
// file snappy.c line 1445
signed int snappy_uncompress_iov(struct iovec *iov_in, signed int iov_in_len, unsigned long int input_len, char *uncompressed);
// snappy_uncompressed_length
// file snappy.h line 33
_Bool snappy_uncompressed_length(const char *start, unsigned long int n, unsigned long int *result);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// stats_cb
// file rdkafka_performance.c line 326
static signed int stats_cb(struct rd_kafka_s *rk, char *json, unsigned long int json_len, void *opaque);
// stop
// file rdkafka_performance.c line 62
static void stop(signed int sig);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
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
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strnlen
// file /usr/include/string.h line 405
extern unsigned long int strnlen(const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtoll
// file /usr/include/stdlib.h line 209
extern signed long long int strtoll(const char *, char ** restrict , signed int);
// strtoull
// file /usr/include/stdlib.h line 214
extern unsigned long long int strtoull(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// unaligned_copy64
// file snappy.c line 80
static inline void unaligned_copy64(const void *src, void *dst);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// varint_encode32
// file snappy.c line 196
static inline char * varint_encode32(char *sptr, unsigned int v);
// varint_parse32_with_limit
// file snappy.c line 147
static inline const char * varint_parse32_with_limit(const char *p, const char *l, unsigned int *OUTPUT);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// wall_clock
// file rdkafka_performance.c line 105
unsigned long int wall_clock(void);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writer_append
// file snappy.c line 465
static inline _Bool writer_append(struct writer *w, const char *ip, unsigned int len);
// writer_append_from_self
// file snappy.c line 436
static inline _Bool writer_append_from_self(struct writer *w, unsigned int offset, unsigned int len);
// writer_check_length
// file snappy.c line 359
static inline _Bool writer_check_length(struct writer *w);
// writer_set_expected_length
// file snappy.c line 353
static inline void writer_set_expected_length(struct writer *w, unsigned long int len);
// writer_try_fast_append
// file snappy.c line 477
static inline _Bool writer_try_fast_append(struct writer *w, const char *ip, unsigned int available_bytes, unsigned int len);

struct anonymous$60
{
  // topic
  char *topic;
  // partition
  signed int partition;
  // offset
  unsigned long int offset;
  // app_offset
  unsigned long int app_offset;
};

struct anonymous$13
{
  // tqe_next
  struct rd_fifoq_elm_s *tqe_next;
  // tqe_prev
  struct rd_fifoq_elm_s **tqe_prev;
};

struct anonymous$14
{
  // tqh_first
  struct rd_fifoq_elm_s *tqh_first;
  // tqh_last
  struct rd_fifoq_elm_s **tqh_last;
};

struct anonymous$48
{
  // tqe_next
  struct rd_kafka_broker_s *tqe_next;
  // tqe_prev
  struct rd_kafka_broker_s **tqe_prev;
};

struct anonymous$58
{
  // tqh_first
  struct rd_kafka_broker_s *tqh_first;
  // tqh_last
  struct rd_kafka_broker_s **tqh_last;
};

struct anonymous$45
{
  // tqe_next
  struct rd_kafka_buf_s *tqe_next;
  // tqe_prev
  struct rd_kafka_buf_s **tqe_prev;
};

struct anonymous$46
{
  // tqh_first
  struct rd_kafka_buf_s *tqh_first;
  // tqh_last
  struct rd_kafka_buf_s **tqh_last;
};

struct anonymous$42
{
  // tqe_next
  struct rd_kafka_msg_s *tqe_next;
  // tqe_prev
  struct rd_kafka_msg_s **tqe_prev;
};

struct anonymous$40
{
  // tqh_first
  struct rd_kafka_msg_s *tqh_first;
  // tqh_last
  struct rd_kafka_msg_s **tqh_last;
};

struct anonymous$43
{
  // tqe_next
  struct rd_kafka_op_s *tqe_next;
  // tqe_prev
  struct rd_kafka_op_s **tqe_prev;
};

struct anonymous$47
{
  // tqh_first
  struct rd_kafka_op_s *tqh_first;
  // tqh_last
  struct rd_kafka_op_s **tqh_last;
};

struct anonymous$63
{
  // tqe_next
  struct rd_kafka_timer_s *tqe_next;
  // tqe_prev
  struct rd_kafka_timer_s **tqe_prev;
};

struct anonymous$64
{
  // tqh_first
  struct rd_kafka_timer_s *tqh_first;
  // tqh_last
  struct rd_kafka_timer_s **tqh_last;
};

struct anonymous$56
{
  // tqe_next
  struct rd_kafka_topic_s *tqe_next;
  // tqe_prev
  struct rd_kafka_topic_s **tqe_prev;
};

struct anonymous$59
{
  // tqh_first
  struct rd_kafka_topic_s *tqh_first;
  // tqh_last
  struct rd_kafka_topic_s **tqh_last;
};

struct anonymous$53
{
  // tqe_next
  struct rd_kafka_toppar_s *tqe_next;
  // tqe_prev
  struct rd_kafka_toppar_s **tqe_prev;
};

struct anonymous$49
{
  // tqh_first
  struct rd_kafka_toppar_s *tqh_first;
  // tqh_last
  struct rd_kafka_toppar_s **tqh_last;
};

struct anonymous$34
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$32
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$18
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$52
{
  // msg
  char msg[512l];
  // err
  signed int err;
};

struct anonymous$38
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

struct anonymous$39
{
  // __lock
  signed int __lock;
  // __nr_readers
  unsigned int __nr_readers;
  // __readers_wakeup
  unsigned int __readers_wakeup;
  // __writer_wakeup
  unsigned int __writer_wakeup;
  // __nr_readers_queued
  unsigned int __nr_readers_queued;
  // __nr_writers_queued
  unsigned int __nr_writers_queued;
  // __writer
  signed int __writer;
  // __shared
  signed int __shared;
  // __rwelision
  signed char __rwelision;
  // __pad1
  unsigned char __pad1[7l];
  // __pad2
  unsigned long int __pad2;
  // __flags
  unsigned int __flags;
};

struct anonymous$61
{
  // msg_cnt
  signed int msg_cnt;
};

struct anonymous$28
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$31
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

struct anonymous$30
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$29
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$33
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$35
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$28 _kill;
  // _timer
  struct anonymous$29 _timer;
  // _rt
  struct anonymous$30 _rt;
  // _sigchld
  struct anonymous$31 _sigchld;
  // _sigfault
  struct anonymous$32 _sigfault;
  // _sigpoll
  struct anonymous$33 _sigpoll;
  // _sigsys
  struct anonymous$34 _sigsys;
};

struct anonymous$36
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$35 _sifields;
};

struct anonymous$1
{
  // val
  signed int val;
  // str
  const char *str;
};

struct anonymous$70
{
  // maxv
  signed long int maxv;
  // minv
  signed long int minv;
  // avg
  signed long int avg;
  // sum
  signed long int sum;
  // cnt
  signed int cnt;
  // start
  unsigned long int start;
};

struct anonymous$41
{
  // t_start
  unsigned long int t_start;
  // t_end
  unsigned long int t_end;
  // t_end_send
  unsigned long int t_end_send;
  // msgs
  unsigned long int msgs;
  // msgs_dr_ok
  unsigned long int msgs_dr_ok;
  // msgs_dr_err
  unsigned long int msgs_dr_err;
  // bytes_dr_ok
  unsigned long int bytes_dr_ok;
  // bytes
  unsigned long int bytes;
  // tx
  unsigned long int tx;
  // tx_err
  unsigned long int tx_err;
  // avg_rtt
  unsigned long int avg_rtt;
  // offset
  unsigned long int offset;
  // t_fetch_latency
  unsigned long int t_fetch_latency;
  // t_last
  unsigned long int t_last;
  // t_enobufs_last
  unsigned long int t_enobufs_last;
  // t_total
  unsigned long int t_total;
  // latency_last
  unsigned long int latency_last;
  // latency_lo
  unsigned long int latency_lo;
  // latency_hi
  unsigned long int latency_hi;
  // latency_sum
  unsigned long int latency_sum;
  // latency_cnt
  signed int latency_cnt;
  // last_offset
  signed long int last_offset;
};

struct anonymous$51
{
  // tx_bytes
  unsigned long int tx_bytes;
  // tx
  unsigned long int tx;
  // tx_err
  unsigned long int tx_err;
  // tx_retries
  unsigned long int tx_retries;
  // req_timeouts
  unsigned long int req_timeouts;
  // rx_bytes
  unsigned long int rx_bytes;
  // rx
  unsigned long int rx;
  // rx_err
  unsigned long int rx_err;
  // rx_corrid_err
  unsigned long int rx_corrid_err;
  // rx_partial
  unsigned long int rx_partial;
};

struct anonymous$55
{
  // tx_msgs
  unsigned long int tx_msgs;
  // tx_bytes
  unsigned long int tx_bytes;
  // msgs
  unsigned long int msgs;
};

union anonymous$37
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$36 *, void *);
};

union anonymous$67
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$12
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$17
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous$62
{
  // consumer
  struct anonymous$60 consumer;
  // producer
  struct anonymous$61 producer;
};

union anonymous$15
{
  // __data
  struct anonymous$38 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous$16
{
  // __data
  struct anonymous$39 __data;
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

union anonymous$11
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct in6_addr
{
  // __in6_u
  union anonymous$67 __in6_u;
};

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

union anonymous$8
{
  // in
  struct sockaddr_in in;
  // in6
  struct sockaddr_in6 in6;
};

union anonymous$5
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous$65
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

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

struct consume_ctx
{
  // consume_cb
  void (*consume_cb)(struct rd_kafka_message_s *, void *);
  // opaque
  void *opaque;
};

struct gz_header_s
{
  // text
  signed int text;
  // time
  unsigned long int time;
  // xflags
  signed int xflags;
  // os
  signed int os;
  // extra
  unsigned char *extra;
  // extra_len
  unsigned int extra_len;
  // extra_max
  unsigned int extra_max;
  // name
  unsigned char *name;
  // name_max
  unsigned int name_max;
  // comment
  unsigned char *comment;
  // comm_max
  unsigned int comm_max;
  // hcrc
  signed int hcrc;
  // done
  signed int done;
};

struct internal_state
{
  // dummy
  signed int dummy;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
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

struct rd_fifoq_elm_head_s
{
  // tqh_first
  struct rd_fifoq_elm_s *tqh_first;
  // tqh_last
  struct rd_fifoq_elm_s **tqh_last;
};

struct rd_fifoq_elm_s
{
  // rfqe_link
  struct anonymous$13 rfqe_link;
  // rfqe_refcnt
  signed int rfqe_refcnt;
  // rfqe_ptr
  void *rfqe_ptr;
};

struct rd_fifoq_s
{
  // rfq_q
  struct anonymous$14 rfq_q;
  // rfq_lock
  union anonymous$11 rfq_lock;
  // rfq_cond
  union anonymous$15 rfq_cond;
  // rfq_cnt
  signed int rfq_cnt;
  // rfq_max_size
  signed int rfq_max_size;
  // rfq_taildrop
  signed int rfq_taildrop;
  // rfq_inited
  signed int rfq_inited;
};

struct rd_kafka_avg_s
{
  // ra_v
  struct anonymous$70 ra_v;
  // ra_lock
  union anonymous$11 ra_lock;
  // ra_type
  enum anonymous$71 ra_type;
};

struct rd_kafka_q_s
{
  // rkq_lock
  union anonymous$11 rkq_lock;
  // rkq_cond
  union anonymous$15 rkq_cond;
  // rkq_fwdq
  struct rd_kafka_q_s *rkq_fwdq;
  // rkq_q
  struct anonymous$47 rkq_q;
  // rkq_qlen
  signed int rkq_qlen;
  // rkq_qsize
  unsigned long int rkq_qsize;
  // rkq_refcnt
  signed int rkq_refcnt;
  // rkq_flags
  signed int rkq_flags;
};

struct rd_kafka_bufq_s
{
  // rkbq_bufs
  struct anonymous$46 rkbq_bufs;
  // rkbq_cnt
  signed int rkbq_cnt;
  // rkbq_msg_cnt
  signed int rkbq_msg_cnt;
};

struct rd_kafka_broker_s
{
  // rkb_link
  struct anonymous$48 rkb_link;
  // rkb_nodeid
  signed int rkb_nodeid;
  // rkb_rsal
  struct rd_sockaddr_list_s *rkb_rsal;
  // rkb_t_rsal_last
  signed long int rkb_t_rsal_last;
  // rkb_s
  signed int rkb_s;
  // rkb_pfd
  struct pollfd rkb_pfd;
  // rkb_corrid
  unsigned int rkb_corrid;
  // rkb_ops
  struct rd_kafka_q_s rkb_ops;
  // rkb_toppars
  struct anonymous$49 rkb_toppars;
  // rkb_toppar_lock
  union anonymous$16 rkb_toppar_lock;
  // rkb_toppar_cnt
  signed int rkb_toppar_cnt;
  // rkb_ts_fetch_backoff
  unsigned long int rkb_ts_fetch_backoff;
  // rkb_fetching
  signed int rkb_fetching;
  // rkb_state
  enum anonymous$50 rkb_state;
  // rkb_ts_state
  unsigned long int rkb_ts_state;
  // rkb_source
  enum anonymous$21 rkb_source;
  // rkb_c
  struct anonymous$51 rkb_c;
  // rkb_req_timeouts
  signed int rkb_req_timeouts;
  // rkb_ts_metadata_poll
  unsigned long int rkb_ts_metadata_poll;
  // rkb_metadata_fast_poll_cnt
  signed int rkb_metadata_fast_poll_cnt;
  // rkb_lock
  union anonymous$11 rkb_lock;
  // rkb_thread
  unsigned long int rkb_thread;
  // rkb_refcnt
  signed int rkb_refcnt;
  // rkb_rk
  struct rd_kafka_s *rkb_rk;
  // rkb_err
  struct anonymous$52 rkb_err;
  // rkb_recv_buf
  struct rd_kafka_buf_s *rkb_recv_buf;
  // rkb_outbufs
  struct rd_kafka_bufq_s rkb_outbufs;
  // rkb_outbuf_msgcnt
  signed int rkb_outbuf_msgcnt;
  // rkb_waitresps
  struct rd_kafka_bufq_s rkb_waitresps;
  // rkb_retrybufs
  struct rd_kafka_bufq_s rkb_retrybufs;
  // rkb_avg_rtt
  struct rd_kafka_avg_s rkb_avg_rtt;
  // rkb_name
  char rkb_name[128l];
  // rkb_nodename
  char rkb_nodename[128l];
};

struct rd_kafkap_reqhdr
{
  // Size
  signed int Size;
  // ApiKey
  signed short int ApiKey;
  // ApiVersion
  signed short int ApiVersion;
  // CorrId
  signed int CorrId;
} __attribute__ ((__packed__));

struct rd_kafkap_reshdr
{
  // Size
  signed int Size;
  // CorrId
  signed int CorrId;
} __attribute__ ((__packed__));

struct rd_kafka_msgq_s
{
  // rkmq_msgs
  struct anonymous$40 rkmq_msgs;
  // rkmq_msg_cnt
  signed int rkmq_msg_cnt;
  // rkmq_msg_bytes
  unsigned long int rkmq_msg_bytes;
};

struct rd_kafka_buf_s
{
  // rkbuf_link
  struct anonymous$45 rkbuf_link;
  // rkbuf_corrid
  signed int rkbuf_corrid;
  // rkbuf_ts_retry
  unsigned long int rkbuf_ts_retry;
  // rkbuf_flags
  signed int rkbuf_flags;
  // rkbuf_msg
  struct msghdr rkbuf_msg;
  // rkbuf_iov
  struct iovec *rkbuf_iov;
  // rkbuf_iovcnt
  signed int rkbuf_iovcnt;
  // rkbuf_of
  unsigned long int rkbuf_of;
  // rkbuf_len
  unsigned long int rkbuf_len;
  // rkbuf_size
  unsigned long int rkbuf_size;
  // rkbuf_buf
  char *rkbuf_buf;
  // rkbuf_buf2
  char *rkbuf_buf2;
  // rkbuf_wbuf
  char *rkbuf_wbuf;
  // rkbuf_wof
  unsigned long int rkbuf_wof;
  // rkbuf_reqhdr
  struct rd_kafkap_reqhdr rkbuf_reqhdr;
  // rkbuf_reshdr
  struct rd_kafkap_reshdr rkbuf_reshdr;
  // rkbuf_expected_size
  signed int rkbuf_expected_size;
  // rkbuf_cb
  void (*rkbuf_cb)(struct rd_kafka_broker_s *, signed int, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *);
  // rkbuf_hndcb
  void (*rkbuf_hndcb)(void *);
  // rkbuf_hndopaque
  void *rkbuf_hndopaque;
  // rkbuf_refcnt
  signed int rkbuf_refcnt;
  // rkbuf_opaque
  void *rkbuf_opaque;
  // rkbuf_retries
  signed int rkbuf_retries;
  // rkbuf_ts_enq
  unsigned long int rkbuf_ts_enq;
  // rkbuf_ts_sent
  unsigned long int rkbuf_ts_sent;
  // rkbuf_ts_timeout
  unsigned long int rkbuf_ts_timeout;
  // rkbuf_offset
  signed long int rkbuf_offset;
  // rkbuf_msgq
  struct rd_kafka_msgq_s rkbuf_msgq;
};

struct rd_kafkap_FetchRequest
{
  // ReplicaId
  signed int ReplicaId;
  // MaxWaitTime
  signed int MaxWaitTime;
  // MinBytes
  signed int MinBytes;
  // TopicArrayCnt
  signed int TopicArrayCnt;
} __attribute__ ((__packed__));

struct rd_kafka_conf_s
{
  // max_msg_size
  signed int max_msg_size;
  // recv_max_msg_size
  signed int recv_max_msg_size;
  // metadata_request_timeout_ms
  signed int metadata_request_timeout_ms;
  // metadata_refresh_interval_ms
  signed int metadata_refresh_interval_ms;
  // metadata_refresh_fast_cnt
  signed int metadata_refresh_fast_cnt;
  // metadata_refresh_fast_interval_ms
  signed int metadata_refresh_fast_interval_ms;
  // metadata_refresh_sparse
  signed int metadata_refresh_sparse;
  // debug
  signed int debug;
  // broker_addr_ttl
  signed int broker_addr_ttl;
  // broker_addr_family
  signed int broker_addr_family;
  // socket_timeout_ms
  signed int socket_timeout_ms;
  // socket_sndbuf_size
  signed int socket_sndbuf_size;
  // socket_rcvbuf_size
  signed int socket_rcvbuf_size;
  // socket_keepalive
  signed int socket_keepalive;
  // socket_max_fails
  signed int socket_max_fails;
  // clientid
  char *clientid;
  // brokerlist
  char *brokerlist;
  // stats_interval_ms
  signed int stats_interval_ms;
  // term_sig
  signed int term_sig;
  // queued_min_msgs
  signed int queued_min_msgs;
  // queued_max_msg_kbytes
  signed int queued_max_msg_kbytes;
  // queued_max_msg_bytes
  signed long int queued_max_msg_bytes;
  // fetch_wait_max_ms
  signed int fetch_wait_max_ms;
  // fetch_msg_max_bytes
  signed int fetch_msg_max_bytes;
  // fetch_min_bytes
  signed int fetch_min_bytes;
  // fetch_error_backoff_ms
  signed int fetch_error_backoff_ms;
  // FetchRequest
  struct rd_kafkap_FetchRequest FetchRequest;
  // group_id_str
  char *group_id_str;
  // group_id
  struct rd_kafkap_str_s *group_id;
  // queue_buffering_max_msgs
  signed int queue_buffering_max_msgs;
  // buffering_max_ms
  signed int buffering_max_ms;
  // max_retries
  signed int max_retries;
  // retry_backoff_ms
  signed int retry_backoff_ms;
  // batch_num_messages
  signed int batch_num_messages;
  // compression_codec
  enum anonymous$68 compression_codec;
  // dr_err_only
  signed int dr_err_only;
  // dr_cb
  void (*dr_cb)(struct rd_kafka_s *, void *, unsigned long int, enum anonymous$9, void *, void *);
  // dr_msg_cb
  void (*dr_msg_cb)(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *);
  // error_cb
  void (*error_cb)(struct rd_kafka_s *, signed int, const char *, void *);
  // stats_cb
  signed int (*stats_cb)(struct rd_kafka_s *, char *, unsigned long int, void *);
  // log_cb
  void (*log_cb)(const struct rd_kafka_s *, signed int, const char *, const char *);
  // log_level
  signed int log_level;
  // socket_cb
  signed int (*socket_cb)(signed int, signed int, signed int, void *);
  // open_cb
  signed int (*open_cb)(const char *, signed int, unsigned int, void *);
  // opaque
  void *opaque;
};

struct rd_kafka_message_s
{
  // err
  enum anonymous$9 err;
  // rkt
  struct rd_kafka_topic_s *rkt;
  // partition
  signed int partition;
  // payload
  void *payload;
  // len
  unsigned long int len;
  // key
  void *key;
  // key_len
  unsigned long int key_len;
  // offset
  signed long int offset;
  // _private
  void *_private;
};

struct rd_kafka_metadata
{
  // broker_cnt
  signed int broker_cnt;
  // brokers
  struct rd_kafka_metadata_broker *brokers;
  // topic_cnt
  signed int topic_cnt;
  // topics
  struct rd_kafka_metadata_topic *topics;
  // orig_broker_id
  signed int orig_broker_id;
  // orig_broker_name
  char *orig_broker_name;
};

struct rd_kafka_metadata_broker
{
  // id
  signed int id;
  // host
  char *host;
  // port
  signed int port;
};

struct rd_kafka_metadata_partition
{
  // id
  signed int id;
  // err
  enum anonymous$9 err;
  // leader
  signed int leader;
  // replica_cnt
  signed int replica_cnt;
  // replicas
  signed int *replicas;
  // isr_cnt
  signed int isr_cnt;
  // isrs
  signed int *isrs;
};

struct rd_kafka_metadata_topic
{
  // topic
  char *topic;
  // partition_cnt
  signed int partition_cnt;
  // partitions
  struct rd_kafka_metadata_partition *partitions;
  // err
  enum anonymous$9 err;
};

struct rd_kafka_msg_s
{
  // rkm_link
  struct anonymous$42 rkm_link;
  // rkm_flags
  signed int rkm_flags;
  // rkm_len
  unsigned long int rkm_len;
  // rkm_payload
  void *rkm_payload;
  // rkm_opaque
  void *rkm_opaque;
  // rkm_partition
  signed int rkm_partition;
  // rkm_key
  struct rd_kafkap_bytes_s *rkm_key;
  // rkm_offset
  signed long int rkm_offset;
  // rkm_ts_timeout
  unsigned long int rkm_ts_timeout;
};

struct rd_kafka_op_s
{
  // rko_link
  struct anonymous$43 rko_link;
  // rko_type
  enum anonymous$44 rko_type;
  // rko_flags
  signed int rko_flags;
  // rko_msgq
  struct rd_kafka_msgq_s rko_msgq;
  // rko_replyq
  struct rd_kafka_q_s *rko_replyq;
  // rko_intarg
  signed int rko_intarg;
  // rko_rkm
  struct rd_kafka_msg_s *rko_rkm;
  // rko_rkmessage
  struct rd_kafka_message_s rko_rkmessage;
  // rko_rkbuf
  struct rd_kafka_buf_s *rko_rkbuf;
  // rko_metadata
  struct rd_kafka_metadata *rko_metadata;
  // rko_rktp
  struct rd_kafka_toppar_s *rko_rktp;
};

struct rd_kafka_property
{
  // scope
  enum anonymous scope;
  // name
  const char *name;
  // type
  enum anonymous$0 type;
  // offset
  signed int offset;
  // desc
  const char *desc;
  // vmin
  signed int vmin;
  // vmax
  signed int vmax;
  // vdef
  signed int vdef;
  // sdef
  const char *sdef;
  // pdef
  void *pdef;
  // s2i
  struct anonymous$1 s2i[10l];
};

struct rd_kafka_queue_s
{
  // rkqu_q
  struct rd_kafka_q_s rkqu_q;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct rd_kafka_s
{
  // rk_rep
  struct rd_kafka_q_s rk_rep;
  // rk_brokers
  struct anonymous$58 rk_brokers;
  // rk_broker_cnt
  signed int rk_broker_cnt;
  // rk_broker_down_cnt
  signed int rk_broker_down_cnt;
  // rk_topics
  struct anonymous$59 rk_topics;
  // rk_topic_cnt
  signed int rk_topic_cnt;
  // rk_name
  char rk_name[128l];
  // rk_clientid
  struct rd_kafkap_str_s *rk_clientid;
  // rk_conf
  struct rd_kafka_conf_s rk_conf;
  // rk_flags
  signed int rk_flags;
  // rk_terminate
  signed int rk_terminate;
  // rk_lock
  union anonymous$16 rk_lock;
  // rk_refcnt
  signed int rk_refcnt;
  // rk_type
  enum rd_kafka_type_t rk_type;
  // rk_tv_state_change
  struct timeval rk_tv_state_change;
  // rk_u
  union anonymous$62 rk_u;
  // rk_timers
  struct anonymous$64 rk_timers;
  // rk_timers_lock
  union anonymous$11 rk_timers_lock;
  // rk_timers_cond
  union anonymous$15 rk_timers_cond;
  // rk_thread
  unsigned long int rk_thread;
};

struct rd_kafka_timer_s
{
  // rtmr_link
  struct anonymous$63 rtmr_link;
  // rtmr_next
  unsigned long int rtmr_next;
  // rtmr_interval
  signed int rtmr_interval;
  // rtmr_callback
  void (*rtmr_callback)(struct rd_kafka_s *, void *);
  // rtmr_arg
  void *rtmr_arg;
};

struct rd_kafka_topic_conf_s
{
  // required_acks
  signed int required_acks;
  // enforce_isr_cnt
  signed int enforce_isr_cnt;
  // request_timeout_ms
  signed int request_timeout_ms;
  // message_timeout_ms
  signed int message_timeout_ms;
  // partitioner
  signed int (*partitioner)(const struct rd_kafka_topic_s *, const void *, unsigned long int, signed int, void *, void *);
  // produce_offset_report
  signed int produce_offset_report;
  // group_id_str
  char *group_id_str;
  // group_id
  struct rd_kafkap_str_s *group_id;
  // auto_commit
  signed int auto_commit;
  // auto_commit_interval_ms
  signed int auto_commit_interval_ms;
  // auto_offset_reset
  signed int auto_offset_reset;
  // offset_store_path
  char *offset_store_path;
  // offset_store_sync_interval_ms
  signed int offset_store_sync_interval_ms;
  // offset_store_method
  enum anonymous$69 offset_store_method;
  // opaque
  void *opaque;
};

struct rd_kafka_topic_s
{
  // rkt_link
  struct anonymous$56 rkt_link;
  // rkt_refcnt
  signed int rkt_refcnt;
  // rkt_lock
  union anonymous$16 rkt_lock;
  // rkt_topic
  struct rd_kafkap_str_s *rkt_topic;
  // rkt_ua
  struct rd_kafka_toppar_s *rkt_ua;
  // rkt_p
  struct rd_kafka_toppar_s **rkt_p;
  // rkt_partition_cnt
  signed int rkt_partition_cnt;
  // rkt_desp
  struct anonymous$49 rkt_desp;
  // rkt_ts_metadata
  unsigned long int rkt_ts_metadata;
  // rkt_state
  enum anonymous$57 rkt_state;
  // rkt_flags
  signed int rkt_flags;
  // rkt_rk
  struct rd_kafka_s *rkt_rk;
  // rkt_conf
  struct rd_kafka_topic_conf_s rkt_conf;
};

struct rd_kafka_toppar_s
{
  // rktp_rklink
  struct anonymous$53 rktp_rklink;
  // rktp_rkblink
  struct anonymous$53 rktp_rkblink;
  // rktp_rktlink
  struct anonymous$53 rktp_rktlink;
  // rktp_rkt
  struct rd_kafka_topic_s *rktp_rkt;
  // rktp_partition
  signed int rktp_partition;
  // rktp_leader
  struct rd_kafka_broker_s *rktp_leader;
  // rktp_refcnt
  signed int rktp_refcnt;
  // rktp_lock
  union anonymous$11 rktp_lock;
  // rktp_msgq
  struct rd_kafka_msgq_s rktp_msgq;
  // rktp_xmit_msgq
  struct rd_kafka_msgq_s rktp_xmit_msgq;
  // rktp_ts_last_xmit
  unsigned long int rktp_ts_last_xmit;
  // rktp_metadata
  struct rd_kafka_metadata_partition rktp_metadata;
  // rktp_fetchq
  struct rd_kafka_q_s rktp_fetchq;
  // rktp_fetch_state
  enum anonymous$54 rktp_fetch_state;
  // rktp_ts_offset_req_next
  unsigned long int rktp_ts_offset_req_next;
  // rktp_query_offset
  signed long int rktp_query_offset;
  // rktp_next_offset
  signed long int rktp_next_offset;
  // rktp_app_offset
  signed long int rktp_app_offset;
  // rktp_stored_offset
  signed long int rktp_stored_offset;
  // rktp_committing_offset
  signed long int rktp_committing_offset;
  // rktp_commited_offset
  signed long int rktp_commited_offset;
  // rktp_ts_commited_offset
  unsigned long int rktp_ts_commited_offset;
  // rktp_eof_offset
  signed long int rktp_eof_offset;
  // rktp_lo_offset
  signed long int rktp_lo_offset;
  // rktp_hi_offset
  signed long int rktp_hi_offset;
  // rktp_ts_offset_lag
  unsigned long int rktp_ts_offset_lag;
  // rktp_offset_path
  char *rktp_offset_path;
  // rktp_offset_fd
  signed int rktp_offset_fd;
  // rktp_offset_commit_tmr
  struct rd_kafka_timer_s rktp_offset_commit_tmr;
  // rktp_offset_sync_tmr
  struct rd_kafka_timer_s rktp_offset_sync_tmr;
  // rktp_flags
  signed int rktp_flags;
  // rktp_c
  struct anonymous$55 rktp_c;
};

struct rd_kafkap_bytes_s
{
  // len
  signed int len;
  // data
  char data[0l];
} __attribute__ ((__packed__));

struct rd_kafkap_str_s
{
  // len
  signed short int len;
  // str
  char str[0l];
} __attribute__ ((__packed__));

struct rd_sockaddr_list_s
{
  // rsal_cnt
  signed int rsal_cnt;
  // rsal_curr
  signed int rsal_curr;
  // rsal_addr
  union anonymous$8 rsal_addr[0l];
};

struct rd_thread_event_s
{
  // rte_callback
  void (*rte_callback)(void *);
  // rte_ptr
  void *rte_ptr;
};

struct rd_thread_s
{
  // rdt_thread
  unsigned long int rdt_thread;
  // rdt_name
  char *rdt_name;
  // rdt_start
  void * (*rdt_start)(void *);
  // rdt_start_arg
  void *rdt_start_arg;
  // rdt_state
  enum anonymous$10 rdt_state;
  // rdt_eventq
  struct rd_fifoq_s rdt_eventq;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$37 __sigaction_handler;
  // sa_mask
  struct anonymous$18 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct sink
{
  // iov
  struct iovec *iov;
  // iovlen
  signed int iovlen;
  // curvec
  unsigned int curvec;
  // curoff
  unsigned int curoff;
  // written
  unsigned int written;
};

struct snappy_decompressor
{
  // reader
  struct source *reader;
  // ip
  const char *ip;
  // ip_limit
  const char *ip_limit;
  // peeked
  unsigned int peeked;
  // eof
  _Bool eof;
  // scratch
  char scratch[5l];
};

struct snappy_env
{
  // hash_table
  unsigned short int *hash_table;
  // scratch
  void *scratch;
  // scratch_output
  void *scratch_output;
};

struct source
{
  // iov
  struct iovec *iov;
  // iovlen
  signed int iovlen;
  // curvec
  signed int curvec;
  // curoff
  signed int curoff;
  // total
  unsigned long int total;
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct writer
{
  // base
  char *base;
  // op
  char *op;
  // op_limit
  char *op_limit;
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


// char_table
// file snappy.c line 1022
static const unsigned short int char_table[256l] = { (const unsigned short int)0x0001, (const unsigned short int)0x0804, (const unsigned short int)0x1001, (const unsigned short int)0x2001, (const unsigned short int)0x0002, (const unsigned short int)0x0805, (const unsigned short int)0x1002, (const unsigned short int)0x2002, (const unsigned short int)0x0003, (const unsigned short int)0x0806, (const unsigned short int)0x1003, (const unsigned short int)0x2003, (const unsigned short int)0x0004, (const unsigned short int)0x0807, (const unsigned short int)0x1004, (const unsigned short int)0x2004, (const unsigned short int)0x0005, (const unsigned short int)0x0808, (const unsigned short int)0x1005, (const unsigned short int)0x2005, (const unsigned short int)0x0006, (const unsigned short int)0x0809, (const unsigned short int)0x1006, (const unsigned short int)0x2006, (const unsigned short int)0x0007, (const unsigned short int)0x080a, (const unsigned short int)0x1007, (const unsigned short int)0x2007, (const unsigned short int)0x0008, (const unsigned short int)0x080b, (const unsigned short int)0x1008, (const unsigned short int)0x2008, (const unsigned short int)0x0009, (const unsigned short int)0x0904, (const unsigned short int)0x1009, (const unsigned short int)0x2009, (const unsigned short int)0x000a, (const unsigned short int)0x0905, (const unsigned short int)0x100a, (const unsigned short int)0x200a, (const unsigned short int)0x000b, (const unsigned short int)0x0906, (const unsigned short int)0x100b, (const unsigned short int)0x200b, (const unsigned short int)0x000c, (const unsigned short int)0x0907, (const unsigned short int)0x100c, (const unsigned short int)0x200c, (const unsigned short int)0x000d, (const unsigned short int)0x0908, (const unsigned short int)0x100d, (const unsigned short int)0x200d, (const unsigned short int)0x000e, (const unsigned short int)0x0909, (const unsigned short int)0x100e, (const unsigned short int)0x200e, (const unsigned short int)0x000f, (const unsigned short int)0x090a, (const unsigned short int)0x100f, (const unsigned short int)0x200f, (const unsigned short int)0x0010, (const unsigned short int)0x090b, (const unsigned short int)0x1010, (const unsigned short int)0x2010, (const unsigned short int)0x0011, (const unsigned short int)0x0a04, (const unsigned short int)0x1011, (const unsigned short int)0x2011, (const unsigned short int)0x0012, (const unsigned short int)0x0a05, (const unsigned short int)0x1012, (const unsigned short int)0x2012, (const unsigned short int)0x0013, (const unsigned short int)0x0a06, (const unsigned short int)0x1013, (const unsigned short int)0x2013, (const unsigned short int)0x0014, (const unsigned short int)0x0a07, (const unsigned short int)0x1014, (const unsigned short int)0x2014, (const unsigned short int)0x0015, (const unsigned short int)0x0a08, (const unsigned short int)0x1015, (const unsigned short int)0x2015, (const unsigned short int)0x0016, (const unsigned short int)0x0a09, (const unsigned short int)0x1016, (const unsigned short int)0x2016, (const unsigned short int)0x0017, (const unsigned short int)0x0a0a, (const unsigned short int)0x1017, (const unsigned short int)0x2017, (const unsigned short int)0x0018, (const unsigned short int)0x0a0b, (const unsigned short int)0x1018, (const unsigned short int)0x2018, (const unsigned short int)0x0019, (const unsigned short int)0x0b04, (const unsigned short int)0x1019, (const unsigned short int)0x2019, (const unsigned short int)0x001a, (const unsigned short int)0x0b05, (const unsigned short int)0x101a, (const unsigned short int)0x201a, (const unsigned short int)0x001b, (const unsigned short int)0x0b06, (const unsigned short int)0x101b, (const unsigned short int)0x201b, (const unsigned short int)0x001c, (const unsigned short int)0x0b07, (const unsigned short int)0x101c, (const unsigned short int)0x201c, (const unsigned short int)0x001d, (const unsigned short int)0x0b08, (const unsigned short int)0x101d, (const unsigned short int)0x201d, (const unsigned short int)0x001e, (const unsigned short int)0x0b09, (const unsigned short int)0x101e, (const unsigned short int)0x201e, (const unsigned short int)0x001f, (const unsigned short int)0x0b0a, (const unsigned short int)0x101f, (const unsigned short int)0x201f, (const unsigned short int)0x0020, (const unsigned short int)0x0b0b, (const unsigned short int)0x1020, (const unsigned short int)0x2020, (const unsigned short int)0x0021, (const unsigned short int)0x0c04, (const unsigned short int)0x1021, (const unsigned short int)0x2021, (const unsigned short int)0x0022, (const unsigned short int)0x0c05, (const unsigned short int)0x1022, (const unsigned short int)0x2022, (const unsigned short int)0x0023, (const unsigned short int)0x0c06, (const unsigned short int)0x1023, (const unsigned short int)0x2023, (const unsigned short int)0x0024, (const unsigned short int)0x0c07, (const unsigned short int)0x1024, (const unsigned short int)0x2024, (const unsigned short int)0x0025, (const unsigned short int)0x0c08, (const unsigned short int)0x1025, (const unsigned short int)0x2025, (const unsigned short int)0x0026, (const unsigned short int)0x0c09, (const unsigned short int)0x1026, (const unsigned short int)0x2026, (const unsigned short int)0x0027, (const unsigned short int)0x0c0a, (const unsigned short int)0x1027, (const unsigned short int)0x2027, (const unsigned short int)0x0028, (const unsigned short int)0x0c0b, (const unsigned short int)0x1028, (const unsigned short int)0x2028, (const unsigned short int)0x0029, (const unsigned short int)0x0d04, (const unsigned short int)0x1029, (const unsigned short int)0x2029, (const unsigned short int)0x002a, (const unsigned short int)0x0d05, (const unsigned short int)0x102a, (const unsigned short int)0x202a, (const unsigned short int)0x002b, (const unsigned short int)0x0d06, (const unsigned short int)0x102b, (const unsigned short int)0x202b, (const unsigned short int)0x002c, (const unsigned short int)0x0d07, (const unsigned short int)0x102c, (const unsigned short int)0x202c, (const unsigned short int)0x002d, (const unsigned short int)0x0d08, (const unsigned short int)0x102d, (const unsigned short int)0x202d, (const unsigned short int)0x002e, (const unsigned short int)0x0d09, (const unsigned short int)0x102e, (const unsigned short int)0x202e, (const unsigned short int)0x002f, (const unsigned short int)0x0d0a, (const unsigned short int)0x102f, (const unsigned short int)0x202f, (const unsigned short int)0x0030, (const unsigned short int)0x0d0b, (const unsigned short int)0x1030, (const unsigned short int)0x2030, (const unsigned short int)0x0031, (const unsigned short int)0x0e04, (const unsigned short int)0x1031, (const unsigned short int)0x2031, (const unsigned short int)0x0032, (const unsigned short int)0x0e05, (const unsigned short int)0x1032, (const unsigned short int)0x2032, (const unsigned short int)0x0033, (const unsigned short int)0x0e06, (const unsigned short int)0x1033, (const unsigned short int)0x2033, (const unsigned short int)0x0034, (const unsigned short int)0x0e07, (const unsigned short int)0x1034, (const unsigned short int)0x2034, (const unsigned short int)0x0035, (const unsigned short int)0x0e08, (const unsigned short int)0x1035, (const unsigned short int)0x2035, (const unsigned short int)0x0036, (const unsigned short int)0x0e09, (const unsigned short int)0x1036, (const unsigned short int)0x2036, (const unsigned short int)0x0037, (const unsigned short int)0x0e0a, (const unsigned short int)0x1037, (const unsigned short int)0x2037, (const unsigned short int)0x0038, (const unsigned short int)0x0e0b, (const unsigned short int)0x1038, (const unsigned short int)0x2038, (const unsigned short int)0x0039, (const unsigned short int)0x0f04, (const unsigned short int)0x1039, (const unsigned short int)0x2039, (const unsigned short int)0x003a, (const unsigned short int)0x0f05, (const unsigned short int)0x103a, (const unsigned short int)0x203a, (const unsigned short int)0x003b, (const unsigned short int)0x0f06, (const unsigned short int)0x103b, (const unsigned short int)0x203b, (const unsigned short int)0x003c, (const unsigned short int)0x0f07, (const unsigned short int)0x103c, (const unsigned short int)0x203c, (const unsigned short int)0x0801, (const unsigned short int)0x0f08, (const unsigned short int)0x103d, (const unsigned short int)0x203d, (const unsigned short int)0x1001, (const unsigned short int)0x0f09, (const unsigned short int)0x103e, (const unsigned short int)0x203e, (const unsigned short int)0x1801, (const unsigned short int)0x0f0a, (const unsigned short int)0x103f, (const unsigned short int)0x203f, (const unsigned short int)0x2001, (const unsigned short int)0x0f0b, (const unsigned short int)0x1040, (const unsigned short int)0x2040 };
// cnt
// file rdkafka_performance.c line 101
static struct anonymous$41 cnt = { .t_start=0ul, .t_end=0ul, .t_end_send=0ul, .msgs=0ul,
    .msgs_dr_ok=0ul, .msgs_dr_err=0ul, .bytes_dr_ok=0ul,
    .bytes=0ul, .tx=0ul, .tx_err=0ul,
    .avg_rtt=0ul, .offset=0ul, .t_fetch_latency=0ul,
    .t_last=0ul, .t_enobufs_last=0ul, .t_total=0ul,
    .latency_last=0ul, .latency_lo=0ul, .latency_hi=0ul,
    .latency_sum=0ul, .latency_cnt=0, .last_offset=0l };
// crc_table
// file rdcrc32.c line 23
static const unsigned int crc_table[256l] = { (const unsigned int)0x00000000, (const unsigned int)0x77073096, 0xee0e612c, 0x990951ba, (const unsigned int)0x076dc419, (const unsigned int)0x706af48f, 0xe963a535, 0x9e6495a3, (const unsigned int)0x0edb8832, (const unsigned int)0x79dcb8a4, 0xe0d5e91e, 0x97d2d988, (const unsigned int)0x09b64c2b, (const unsigned int)0x7eb17cbd, 0xe7b82d07, 0x90bf1d91, (const unsigned int)0x1db71064, (const unsigned int)0x6ab020f2, 0xf3b97148, 0x84be41de, (const unsigned int)0x1adad47d, (const unsigned int)0x6ddde4eb, 0xf4d4b551, 0x83d385c7, (const unsigned int)0x136c9856, (const unsigned int)0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, (const unsigned int)0x14015c4f, (const unsigned int)0x63066cd9, 0xfa0f3d63, 0x8d080df5, (const unsigned int)0x3b6e20c8, (const unsigned int)0x4c69105e, 0xd56041e4, 0xa2677172, (const unsigned int)0x3c03e4d1, (const unsigned int)0x4b04d447, 0xd20d85fd, 0xa50ab56b, (const unsigned int)0x35b5a8fa, (const unsigned int)0x42b2986c, 0xdbbbc9d6, 0xacbcf940, (const unsigned int)0x32d86ce3, (const unsigned int)0x45df5c75, 0xdcd60dcf, 0xabd13d59, (const unsigned int)0x26d930ac, (const unsigned int)0x51de003a, 0xc8d75180, 0xbfd06116, (const unsigned int)0x21b4f4b5, (const unsigned int)0x56b3c423, 0xcfba9599, 0xb8bda50f, (const unsigned int)0x2802b89e, (const unsigned int)0x5f058808, 0xc60cd9b2, 0xb10be924, (const unsigned int)0x2f6f7c87, (const unsigned int)0x58684c11, 0xc1611dab, 0xb6662d3d, (const unsigned int)0x76dc4190, (const unsigned int)0x01db7106, 0x98d220bc, 0xefd5102a, (const unsigned int)0x71b18589, (const unsigned int)0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433, (const unsigned int)0x7807c9a2, (const unsigned int)0x0f00f934, 0x9609a88e, 0xe10e9818, (const unsigned int)0x7f6a0dbb, (const unsigned int)0x086d3d2d, 0x91646c97, 0xe6635c01, (const unsigned int)0x6b6b51f4, (const unsigned int)0x1c6c6162, 0x856530d8, 0xf262004e, (const unsigned int)0x6c0695ed, (const unsigned int)0x1b01a57b, 0x8208f4c1, 0xf50fc457, (const unsigned int)0x65b0d9c6, (const unsigned int)0x12b7e950, 0x8bbeb8ea, 0xfcb9887c, (const unsigned int)0x62dd1ddf, (const unsigned int)0x15da2d49, 0x8cd37cf3, 0xfbd44c65, (const unsigned int)0x4db26158, (const unsigned int)0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, (const unsigned int)0x4adfa541, (const unsigned int)0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb, (const unsigned int)0x4369e96a, (const unsigned int)0x346ed9fc, 0xad678846, 0xda60b8d0, (const unsigned int)0x44042d73, (const unsigned int)0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9, (const unsigned int)0x5005713c, (const unsigned int)0x270241aa, 0xbe0b1010, 0xc90c2086, (const unsigned int)0x5768b525, (const unsigned int)0x206f85b3, 0xb966d409, 0xce61e49f, (const unsigned int)0x5edef90e, (const unsigned int)0x29d9c998, 0xb0d09822, 0xc7d7a8b4, (const unsigned int)0x59b33d17, (const unsigned int)0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6, (const unsigned int)0x03b6e20c, (const unsigned int)0x74b1d29a, 0xead54739, 0x9dd277af, (const unsigned int)0x04db2615, (const unsigned int)0x73dc1683, 0xe3630b12, 0x94643b84, (const unsigned int)0x0d6d6a3e, (const unsigned int)0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, (const unsigned int)0x0a00ae27, (const unsigned int)0x7d079eb1, 0xf00f9344, 0x8708a3d2, (const unsigned int)0x1e01f268, (const unsigned int)0x6906c2fe, 0xf762575d, 0x806567cb, (const unsigned int)0x196c3671, (const unsigned int)0x6e6b06e7, 0xfed41b76, 0x89d32be0, (const unsigned int)0x10da7a5a, (const unsigned int)0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, (const unsigned int)0x17b7be43, (const unsigned int)0x60b08ed5, 0xd6d6a3e8, 0xa1d1937e, (const unsigned int)0x38d8c2c4, (const unsigned int)0x4fdff252, 0xd1bb67f1, 0xa6bc5767, (const unsigned int)0x3fb506dd, (const unsigned int)0x48b2364b, 0xd80d2bda, 0xaf0a1b4c, (const unsigned int)0x36034af6, (const unsigned int)0x41047a60, 0xdf60efc3, 0xa867df55, (const unsigned int)0x316e8eef, (const unsigned int)0x4669be79, 0xcb61b38c, 0xbc66831a, (const unsigned int)0x256fd2a0, (const unsigned int)0x5268e236, 0xcc0c7795, 0xbb0b4703, (const unsigned int)0x220216b9, (const unsigned int)0x5505262f, 0xc5ba3bbe, 0xb2bd0b28, (const unsigned int)0x2bb45a92, (const unsigned int)0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, (const unsigned int)0x2cd99e8b, (const unsigned int)0x5bdeae1d, 0x9b64c2b0, 0xec63f226, (const unsigned int)0x756aa39c, (const unsigned int)0x026d930a, 0x9c0906a9, 0xeb0e363f, (const unsigned int)0x72076785, (const unsigned int)0x05005713, 0x95bf4a82, 0xe2b87a14, (const unsigned int)0x7bb12bae, (const unsigned int)0x0cb61b38, 0x92d28e9b, 0xe5d5be0d, (const unsigned int)0x7cdcefb7, (const unsigned int)0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242, (const unsigned int)0x68ddb3f8, (const unsigned int)0x1fda836e, 0x81be16cd, 0xf6b9265b, (const unsigned int)0x6fb077e1, (const unsigned int)0x18b74777, 0x88085ae6, 0xff0f6a70, (const unsigned int)0x66063bca, (const unsigned int)0x11010b5c, 0x8f659eff, 0xf862ae69, (const unsigned int)0x616bffd3, (const unsigned int)0x166ccf45, 0xa00ae278, 0xd70dd2ee, (const unsigned int)0x4e048354, (const unsigned int)0x3903b3c2, 0xa7672661, 0xd06016f7, (const unsigned int)0x4969474d, (const unsigned int)0x3e6e77db, 0xaed16a4a, 0xd9d65adc, (const unsigned int)0x40df0b66, (const unsigned int)0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, (const unsigned int)0x47b2cf7f, (const unsigned int)0x30b5ffe9, 0xbdbdf21c, 0xcabac28a, (const unsigned int)0x53b39330, (const unsigned int)0x24b4a3a6, 0xbad03605, 0xcdd70693, (const unsigned int)0x54de5729, (const unsigned int)0x23d967bf, 0xb3667a2e, 0xc4614ab8, (const unsigned int)0x5d681b02, (const unsigned int)0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, (const unsigned int)0x5a05df1b, (const unsigned int)0x2d02ef8d };
// dispintvl
// file rdkafka_performance.c line 50
static signed int dispintvl = 1000;
// do_seq
// file rdkafka_performance.c line 51
static signed int do_seq = 0;
// dr_disp_div
// file rdkafka_performance.c line 55
static signed int dr_disp_div;
// exit_after
// file rdkafka_performance.c line 52
static signed int exit_after = 0;
// exit_eof
// file rdkafka_performance.c line 53
static signed int exit_eof = 0;
// forever
// file rdkafka_performance.c line 49
static signed int forever = 1;
// latency_fp
// file rdkafka_performance.c line 59
static struct _IO_FILE *latency_fp = (struct _IO_FILE *)(void *)0;
// latency_mode
// file rdkafka_performance.c line 57
static signed int latency_mode = 0;
// msgcnt
// file rdkafka_performance.c line 60
static signed int msgcnt = -1;
// msgs_wait_cnt
// file rdkafka_performance.c line 68
static signed long int msgs_wait_cnt = (signed long int)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// rd_currthread
// file rdthread.c line 41
struct rd_thread_s *rd_currthread;
// rd_kafka_broker_state_names
// file rdkafka_broker.c line 54
const char *rd_kafka_broker_state_names[3l] = { "INIT", "DOWN", "UP" };
// rd_kafka_fetch_states
// file rdkafka_topic.c line 39
const char *rd_kafka_fetch_states[4l] = { "none", "offset-query", "offset-wait", "active" };
// rd_kafka_global_init_once
// file rdkafka.c line 47
static signed int rd_kafka_global_init_once = 0;
// rd_kafka_handle_cnt_curr
// file rdkafka.c line 64
static signed int rd_kafka_handle_cnt_curr = 0;
// rd_kafka_properties
// file rdkafka_defaultconf.c line 71
static struct rd_kafka_property rd_kafka_properties[57l];
// rd_kafka_properties
// file rdkafka_defaultconf.c line 71
static struct rd_kafka_property rd_kafka_properties[57l] = { { .scope=(enum anonymous)_RK_GLOBAL, .name="client.id", .type=(enum anonymous$0)_RK_C_STR,
    .offset=(signed int)64ul, .desc="Client identifier.",
    .vmin=0, .vmax=0,
    .vdef=0, .sdef="rdkafka", .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="metadata.broker.list", .type=(enum anonymous$0)_RK_C_STR,
    .offset=(signed int)72ul, .desc="Initial list of brokers. The application may also use `rd_kafka_brokers_add()` to add brokers during runtime.",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="message.max.bytes", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)0ul, .desc="Maximum transmit message size.",
    .vmin=1000,
    .vmax=1000000000, .vdef=4000000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="receive.message.max.bytes", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)4ul, .desc="Maximum receive message size. This is a safety precaution to avoid memory exhaustion in case of protocol hickups. The value should be at least fetch.message.max.bytes * number of partitions consumed from + messaging overhead (e.g. 200000 bytes).",
    .vmin=1000,
    .vmax=1000000000, .vdef=100000000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="metadata.request.timeout.ms", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)8ul, .desc="Non-topic request timeout in milliseconds. This is for metadata requests, etc.",
    .vmin=10,
    .vmax=900 * 1000, .vdef=60 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="topic.metadata.refresh.interval.ms", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)12ul, .desc="Topic metadata refresh interval in milliseconds. The metadata is automatically refreshed on error and connect. Use -1 to disable the intervalled refresh.",
    .vmin=-1,
    .vmax=3600 * 1000, .vdef=10 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="topic.metadata.refresh.fast.cnt", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)16ul, .desc="When a topic looses its leader this number of metadata requests are sent with `topic.metadata.refresh.fast.interval.ms` interval disregarding the `topic.metadata.refresh.interval.ms` value. This is used to recover quickly from transitioning leader brokers.",
    .vmin=0,
    .vmax=1000, .vdef=10, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="topic.metadata.refresh.fast.interval.ms", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)20ul, .desc="See `topic.metadata.refresh.fast.cnt` description",
    .vmin=1,
    .vmax=60 * 1000, .vdef=250, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="topic.metadata.refresh.sparse", .type=(enum anonymous$0)_RK_C_BOOL,
    .offset=(signed int)24ul, .desc="Sparse metadata requests (consumes less network bandwidth)",
    .vmin=0,
    .vmax=1, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="debug", .type=(enum anonymous$0)_RK_C_S2F,
    .offset=(signed int)28ul, .desc="A comma-separated list of debug contexts to enable: all,generic,broker,topic,metadata,producer,queue,msg,protocol",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0x1, .str="generic" }, { .val=0x2, .str="broker" }, { .val=0x4, .str="topic" }, { .val=0x8, .str="metadata" }, { .val=0x10, .str="producer" }, { .val=0x20, .str="queue" }, { .val=0x40, .str="msg" }, { .val=0x80, .str="protocol" }, { .val=0xff, .str="all" }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket.timeout.ms", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)40ul, .desc="Timeout for network requests.",
    .vmin=10,
    .vmax=300 * 1000, .vdef=60 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket.send.buffer.bytes", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)44ul, .desc="Broker socket send buffer size. System default is used if 0.",
    .vmin=0,
    .vmax=100000000, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket.receive.buffer.bytes", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)48ul, .desc="Broker socket receive buffer size. System default is used if 0.",
    .vmin=0,
    .vmax=100000000, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket.keepalive.enable", .type=(enum anonymous$0)_RK_C_BOOL,
    .offset=(signed int)52ul, .desc="Enable TCP keep-alives (SO_KEEPALIVE) on broker sockets",
    .vmin=0,
    .vmax=1, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket.max.fails", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)56ul, .desc="Disconnect from broker when this number of send failures (e.g., timed out requests) is reached. Disable with 0. NOTE: The connection is automatically re-established.",
    .vmin=0,
    .vmax=1000000, .vdef=3, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="broker.address.ttl", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)32ul, .desc="How long to cache the broker address resolving results.",
    .vmin=0,
    .vmax=86400 * 1000, .vdef=300 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="broker.address.family", .type=(enum anonymous$0)_RK_C_S2I,
    .offset=(signed int)36ul, .desc="Allowed broker IP address families: any, v4, v6",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str="any" }, { .val=2, .str="v4" }, { .val=10, .str="v6" }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="statistics.interval.ms", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)80ul, .desc="librdkafka statistics emit interval. The application also needs to register a stats callback using `rd_kafka_conf_set_stats_cb()`. The granularity is 1000ms. A value of 0 disables statistics.",
    .vmin=0,
    .vmax=86400 * 1000, .vdef=0, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="error_cb", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)200ul, .desc="Error callback (set with rd_kafka_conf_set_error_cb())",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="stats_cb", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)208ul, .desc="Statistics callback (set with rd_kafka_conf_set_stats_cb())",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="log_cb", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)216ul, .desc="Log callback (set with rd_kafka_conf_set_log_cb())",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=(void *)rd_kafka_log_print,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="log_level", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)224ul, .desc="Logging level (syslog(3) levels)",
    .vmin=0,
    .vmax=7, .vdef=6, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="socket_cb", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)232ul, .desc="Socket creation callback to provide race-free CLOEXEC",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=(void *)rd_kafka_socket_cb_linux,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="open_cb", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)240ul, .desc="File open callback to provide race-free CLOEXEC",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=(void *)rd_kafka_open_cb_linux,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="opaque", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)248ul, .desc="Application opaque (set with rd_kafka_conf_set_opaque())",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_GLOBAL, .name="internal.termination.signal", .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)84ul, .desc="Signal that librdkafka will use to quickly terminate on rd_kafka_destroy(). If this signal is not set then there will be a delay before rd_kafka_wait_destroyed() returns true as internal threads are timing out their system calls. If this signal is set however the delay will be minimal. The application should mask this signal as an internal signal handler is installed.",
    .vmin=0,
    .vmax=128, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="queued.min.messages",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)88ul,
    .desc="Minimum number of messages per topic+partition in the local consumer queue.", .vmin=1,
    .vmax=10000000, .vdef=100000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="queued.max.messages.kbytes",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)92ul,
    .desc="Maximum number of kilobytes per topic+partition in the local consumer queue. This value may be overshot by fetch.message.max.bytes.", .vmin=1,
    .vmax=1000000000, .vdef=1000000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="fetch.wait.max.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)104ul,
    .desc="Maximum time the broker may wait to fill the response with fetch.min.bytes.", .vmin=0,
    .vmax=300 * 1000, .vdef=100, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="fetch.message.max.bytes",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)108ul,
    .desc="Maximum number of bytes per topic+partition to request when fetching messages from the broker.", .vmin=1,
    .vmax=1000000000, .vdef=1024 * 1024, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="fetch.min.bytes",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)112ul,
    .desc="Minimum number of bytes the broker responds with. If fetch.wait.max.ms expires the accumulated data will be sent to the client regardless of this setting.", .vmin=1,
    .vmax=100000000, .vdef=1, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="fetch.error.backoff.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)116ul,
    .desc="How long to postpone the next fetch request for a topic+partition in case of a fetch error.", .vmin=0,
    .vmax=300 * 1000, .vdef=500, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_CONSUMER), .name="group.id",
    .type=(enum anonymous$0)_RK_C_STR, .offset=(signed int)136ul,
    .desc="Consumer group id string. All clients sharing the same group.id belong to the same consumer group.", .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="queue.buffering.max.messages",
    .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)152ul, .desc="Maximum number of messages allowed on the producer queue.",
    .vmin=1,
    .vmax=10000000, .vdef=100000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="queue.buffering.max.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)156ul,
    .desc="Maximum time, in milliseconds, for buffering data on the producer queue.", .vmin=1,
    .vmax=900 * 1000, .vdef=1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="message.send.max.retries",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)160ul,
    .desc="How many times to retry sending a failing MessageSet. **Note:** retrying may cause reordering.", .vmin=0,
    .vmax=10000000, .vdef=2, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="retry.backoff.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)164ul,
    .desc="The backoff time in milliseconds before retrying a message send.", .vmin=1,
    .vmax=300 * 1000, .vdef=100, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="compression.codec",
    .type=(enum anonymous$0)_RK_C_S2I, .offset=(signed int)172ul,
    .desc="Compression codec to use for compressing message sets: none, gzip or snappy", .vmin=0,
    .vmax=0, .vdef=RD_KAFKA_COMPRESSION_NONE, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=RD_KAFKA_COMPRESSION_NONE, .str="none" },
    { .val=RD_KAFKA_COMPRESSION_GZIP, .str="gzip" },
    { .val=RD_KAFKA_COMPRESSION_SNAPPY, .str="snappy" },
    { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="batch.num.messages",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)168ul,
    .desc="Maximum number of messages batched in one MessageSet.", .vmin=1,
    .vmax=1000000, .vdef=1000, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="delivery.report.only.error",
    .type=(enum anonymous$0)_RK_C_BOOL, .offset=(signed int)176ul,
    .desc="Only provide delivery reports for failed messages.", .vmin=0,
    .vmax=1, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="dr_cb",
    .type=(enum anonymous$0)_RK_C_PTR, .offset=(signed int)184ul,
    .desc="Delivery report callback (set with rd_kafka_conf_set_dr_cb())", .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_GLOBAL | _RK_PRODUCER), .name="dr_msg_cb",
    .type=(enum anonymous$0)_RK_C_PTR, .offset=(signed int)192ul,
    .desc="Delivery report callback (set with rd_kafka_conf_set_dr_msg_cb())", .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="request.required.acks",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)0ul,
    .desc="This field indicates how many acknowledgements the leader broker must receive from ISR brokers before responding to the request: *0*=broker does not send any response, *1*=broker will wait until the data is written to local log before sending a response, *-1*=broker will block until message is committed by all in sync replicas (ISRs) or broker's `in.sync.replicas` setting before sending response. *1*=Only the leader broker will need to ack the message. ", .vmin=-1,
    .vmax=1000, .vdef=1, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="enforce.isr.cnt",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)4ul,
    .desc="Fail messages locally if the currently known ISR count for a partition is less than this value. **NOTE**: The ISR count is fetched from the broker at regular intervals (`topic.metadata.refresh.interval.ms`) and might thus be outdated.", .vmin=0,
    .vmax=1000, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="request.timeout.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)8ul,
    .desc="The ack timeout of the producer request in milliseconds. This value is only enforced by the broker and relies on `request.required.acks` being > 0.", .vmin=1,
    .vmax=900 * 1000, .vdef=5 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="message.timeout.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)12ul,
    .desc="Local message timeout. This value is only enforced locally and limits the time a produced message waits for successful delivery. A time of 0 is infinite.", .vmin=0,
    .vmax=900 * 1000, .vdef=300 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="produce.offset.report",
    .type=(enum anonymous$0)_RK_C_BOOL, .offset=(signed int)24ul,
    .desc="Report offset of produced message back to application. The application must be use the `dr_msg_cb` to retrieve the offset from `rd_kafka_message_t.offset`.", .vmin=0,
    .vmax=1, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_PRODUCER), .name="partitioner",
    .type=(enum anonymous$0)_RK_C_PTR, .offset=(signed int)16ul,
    .desc="Partitioner callback (set with rd_kafka_topic_conf_set_partitioner_cb())", .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)_RK_TOPIC, .name="opaque", .type=(enum anonymous$0)_RK_C_PTR,
    .offset=(signed int)80ul, .desc="Application opaque (set with rd_kafka_topic_conf_set_opaque())",
    .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="group.id",
    .type=(enum anonymous$0)_RK_C_STR, .offset=(signed int)32ul,
    .desc="Consumer group id string. All clients sharing the same group.id belong to the same consumer group. This takes precedence over the global group.id.", .vmin=0,
    .vmax=0, .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="auto.commit.enable",
    .type=(enum anonymous$0)_RK_C_BOOL, .offset=(signed int)48ul,
    .desc="If true, periodically commit offset of the last message handed to the application. This commited offset will be used when the process restarts to pick up where it left off. If false, the application will have to call `rd_kafka_offset_store()` to store an offset (optional). **NOTE:** There is currently no zookeeper integration, offsets will be written to broker or local file according to offset.store.method.", .vmin=0,
    .vmax=1, .vdef=1, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="auto.commit.interval.ms",
    .type=(enum anonymous$0)_RK_C_INT, .offset=(signed int)52ul,
    .desc="The frequency in milliseconds that the consumer offsets are commited (written) to offset storage.", .vmin=10,
    .vmax=86400 * 1000, .vdef=60 * 1000, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="auto.offset.reset",
    .type=(enum anonymous$0)_RK_C_S2I, .offset=(signed int)56ul,
    .desc="Action to take when there is no initial offset in offset store or the desired offset is out of range: 'smallest' - automatically reset the offset to the smallest offset, 'largest' - automatically reset the offset to the largest offset, 'error' - trigger an error which is retrieved by consuming messages and checking 'message->err'.", .vmin=0,
    .vmax=0, .vdef=-1, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=-2, .str="smallest" }, { .val=-1, .str="largest" }, { .val=-1001, .str="error" }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="offset.store.path",
    .type=(enum anonymous$0)_RK_C_STR, .offset=(signed int)64ul,
    .desc="Path to local file for storing offsets. If the path is a directory a filename will be automatically generated in that directory based on the topic and partition.", .vmin=0,
    .vmax=0, .vdef=0, .sdef=".", .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="offset.store.sync.interval.ms",
    .type=(enum anonymous$0)_RK_C_INT,
    .offset=(signed int)72ul, .desc="fsync() interval for the offset file, in milliseconds. Use -1 to disable syncing, and 0 for immediate sync after each write.",
    .vmin=-1,
    .vmax=86400 * 1000, .vdef=-1, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)(_RK_TOPIC | _RK_CONSUMER), .name="offset.store.method",
    .type=(enum anonymous$0)_RK_C_S2I, .offset=(signed int)76ul,
    .desc="Offset commit store method: 'file' - local file store (offset.store.path, et.al), 'broker' - broker commit store (requires Apache Kafka 0.8.1 or later on the broker).", .vmin=0,
    .vmax=0, .vdef=RD_KAFKA_OFFSET_METHOD_FILE, .sdef=((const char *)NULL),
    .pdef=NULL, .s2i={ { .val=RD_KAFKA_OFFSET_METHOD_FILE, .str="file" },
    { .val=RD_KAFKA_OFFSET_METHOD_BROKER, .str="broker" },
    { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } },
    { .scope=(enum anonymous)0, .name=((const char *)NULL), .type=(enum anonymous$0)0,
    .offset=0, .desc=((const char *)NULL),
    .vmin=0, .vmax=0,
    .vdef=0, .sdef=((const char *)NULL), .pdef=NULL,
    .s2i={ { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) }, { .val=0, .str=((const char *)NULL) } } } };
// rd_kafka_thread_cnt_curr
// file rdkafka.c line 54
signed int rd_kafka_thread_cnt_curr = 0;
// rd_kafka_topic_state_names
// file rdkafka_topic.c line 46
const char *rd_kafka_topic_state_names[3l] = { "unknown", "exists", "notexists" };
// rd_mainthread
// file rdthread.c line 40
struct rd_thread_s *rd_mainthread;
// report_offset
// file rdkafka_performance.c line 58
static signed int report_offset = 0;
// rk
// file rdkafka_performance.c line 70
static struct rd_kafka_s *rk;
// run
// file rdkafka_performance.c line 48
static signed int run = 1;
// stats_fp
// file rdkafka_performance.c line 54
static struct _IO_FILE *stats_fp;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// t_end
// file rdkafka_performance.c line 69
static unsigned long int t_end;
// verbosity
// file rdkafka_performance.c line 56
static signed int verbosity = 1;
// wordmask
// file snappy.c line 1005
static const unsigned int wordmask[5l] = { 0u, 0xffu, 0xffffu, 0xffffffu, 0xffffffffu };

// __bswap_64
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 109
static inline unsigned long int __bswap_64(unsigned long int __bsx)
{
  signed long long int return_value___builtin_bswap64$1;
  return_value___builtin_bswap64$1=__builtin_bswap64((signed long long int)__bsx);
  return (unsigned long int)return_value___builtin_bswap64$1;
}

// append
// file snappy.c line 274
static inline void append(struct sink *s, const char *data, unsigned long int n)
{
  struct iovec *iov = &s->iov[(signed long int)s->curvec];
  char *dst = (char *)iov->iov_base + (signed long int)s->curoff;
  unsigned long int nlen;
  unsigned long int tmp_if_expr$1;
  if(!(iov->iov_len + -((unsigned long int)s->curoff) >= n))
    tmp_if_expr$1 = iov->iov_len - (unsigned long int)s->curoff;

  else
    tmp_if_expr$1 = n;
  nlen = tmp_if_expr$1;
  if(!(data == dst))
    memcpy((void *)dst, (const void *)data, nlen);

  s->written = s->written + (unsigned int)n;
  s->curoff = s->curoff + (unsigned int)nlen;
  unsigned long int tmp_if_expr$2;
  do
  {
    n = n - nlen;
    if(!(n >= 1ul))
      break;

    data = data + (signed long int)nlen;
    s->curvec = s->curvec + 1u;
    /* assertion !(!((s->curvec) < (s->iovlen))) */
    assert(!(!(s->curvec < (unsigned int)s->iovlen)));
    iov = iov + 1l;
    if(!(iov->iov_len >= n))
      tmp_if_expr$2 = iov->iov_len;

    else
      tmp_if_expr$2 = n;
    nlen = tmp_if_expr$2;
    memcpy(iov->iov_base, (const void *)data, nlen);
    s->curoff = (unsigned int)nlen;
  }
  while((_Bool)1);
}

// available
// file snappy.c line 237
static inline signed int available(struct source *s)
{
  return (signed int)s->total;
}

// compress
// file snappy.c line 1301
static inline signed int compress(struct snappy_env *env, struct source *reader, struct sink *writer)
{
  signed int err;
  unsigned long int written = (unsigned long int)0;
  signed int N;
  N=available(reader);
  char ulength[5l];
  char *p;
  p=varint_encode32(ulength, (unsigned int)N);
  append(writer, ulength, (unsigned long int)(p - ulength));
  written = written + (unsigned long int)(p - ulength);
  while(N >= 1)
  {
    unsigned long int fragment_size;
    const char *fragment;
    fragment=peek(reader, &fragment_size);
    if(fragment_size == 0ul)
    {
      err = -5;
      goto out;
    }

    const unsigned int num_to_read = (const unsigned int)(N < 1 << 16 ? N : 1 << 16);
    unsigned long int bytes_read = fragment_size;
    signed int pending_advance = 0;
    if(bytes_read >= (unsigned long int)num_to_read)
    {
      pending_advance = (signed int)num_to_read;
      fragment_size = (unsigned long int)num_to_read;
    }

    else
    {
      memcpy(env->scratch, (const void *)fragment, bytes_read);
      skip(reader, bytes_read);
      while(!(bytes_read >= (unsigned long int)num_to_read))
      {
        fragment=peek(reader, &fragment_size);
        unsigned long int n = fragment_size < (unsigned long int)num_to_read - bytes_read ? fragment_size : (unsigned long int)num_to_read - bytes_read;
        memcpy((void *)((char *)env->scratch + (signed long int)bytes_read), (const void *)fragment, n);
        bytes_read = bytes_read + n;
        skip(reader, n);
      }
      /* assertion !(!((bytes_read) == (num_to_read))) */
      assert(!(!(bytes_read == (unsigned long int)num_to_read)));
      fragment = (const char *)env->scratch;
      fragment_size = (unsigned long int)num_to_read;
    }
    if(!(fragment_size >= (unsigned long int)num_to_read))
      return -5;

    signed int table_size;
    unsigned short int *table;
    table=get_hash_table(env, (unsigned long int)num_to_read, &table_size);
    char *dest;
    unsigned long int return_value_snappy_max_compressed_length$1;
    return_value_snappy_max_compressed_length$1=snappy_max_compressed_length((unsigned long int)num_to_read);
    void *return_value_sink_peek$2;
    return_value_sink_peek$2=sink_peek(writer, return_value_snappy_max_compressed_length$1);
    dest = (char *)return_value_sink_peek$2;
    if(dest == ((char *)NULL))
      dest = (char *)env->scratch_output;

    char *end;
    end=compress_fragment(fragment, fragment_size, dest, table, (const unsigned int)table_size);
    append(writer, dest, (unsigned long int)(end - dest));
    written = written + (unsigned long int)(end - dest);
    N = N - (signed int)num_to_read;
    skip(reader, (unsigned long int)pending_advance);
  }
  err = 0;

out:
  ;
  return err;
}

// compress_fragment
// file snappy.c line 850
static char * compress_fragment(const char * const input, const unsigned long int input_size, char *op, unsigned short int *table, const unsigned int table_size)
{
  const char *ip = input;
  /* assertion !(!((input_size) <= ((1 << 16)))) */
  assert(!(!(input_size <= (unsigned long int)(1 << 16))));
  /* assertion !(!((table_size & (table_size - 1)) == (0))) */
  assert(!(!((table_size & table_size - (unsigned int)1) == (unsigned int)0)));
  signed int shift;
  signed int return_value_log2_floor$1;
  return_value_log2_floor$1=log2_floor(table_size);
  shift = 32 - return_value_log2_floor$1;
  /* assertion !(!(((0x7fffffff * 2U + 1U) >> shift) == (table_size - 1))) */
  assert(!(!((unsigned int)0x7fffffff * 2U + 1U >> shift == table_size - (unsigned int)1)));
  const char *ip_end = input + (signed long int)input_size;
  const char *baseip = ip;
  const char *next_emit = ip;
  const unsigned int kinput_margin_bytes = (const unsigned int)15;
  unsigned int tmp_post$3;
  unsigned int return_value_get_u32_at_offset$4;
  if(input_size >= (unsigned long int)kinput_margin_bytes)
  {
    const char * const ip_limit = (input + (signed long int)input_size) - (signed long int)kinput_margin_bytes;
    unsigned int next_hash;
    ip = ip + 1l;
    next_hash=hash(ip, shift);
    do
    {
      /* assertion !(!((next_emit) < (ip))) */
      assert(!(!(next_emit < ip)));
      unsigned int skip_bytes = (unsigned int)32;
      const char *next_ip = ip;
      const char *candidate;
      do
      {
        ip = next_ip;
        unsigned int hval = next_hash;
        unsigned int return_value_hash$2;
        return_value_hash$2=hash(ip, shift);
        /* assertion !(!((hval) == (hash(ip, shift)))) */
        assert(!(!(hval == return_value_hash$2)));
        unsigned int bytes_between_hash_lookups;
        tmp_post$3 = skip_bytes;
        skip_bytes = skip_bytes + 1u;
        bytes_between_hash_lookups = tmp_post$3 >> 5;
        next_ip = ip + (signed long int)bytes_between_hash_lookups;
        if(!(ip_limit >= next_ip))
          goto emit_remainder;

        next_hash=hash(next_ip, shift);
        candidate = baseip + (signed long int)table[(signed long int)hval];
        /* assertion !(!((candidate) >= (baseip))) */
        assert(!(!(candidate >= baseip)));
        /* assertion !(!((candidate) < (ip))) */
        assert(!(!(candidate < ip)));
        table[(signed long int)hval] = (unsigned short int)(ip - baseip);
      }
      while(!(*((unsigned int *)ip) == *((unsigned int *)candidate)));
      /* assertion !(!((next_emit + 16) <= (ip_end))) */
      assert(!(!(next_emit + (signed long int)16 <= ip_end)));
      op=emit_literal(op, next_emit, (signed int)(ip - next_emit), (_Bool)1);
      unsigned long long int input_bytes;
      unsigned int candidate_bytes = (unsigned int)0;
      do
      {
        const char *base = ip;
        signed int matched;
        signed int return_value_find_match_length$5;
        return_value_find_match_length$5=find_match_length(candidate + (signed long int)4, ip + (signed long int)4, ip_end);
        matched = 4 + return_value_find_match_length$5;
        ip = ip + (signed long int)matched;
        signed int offset = (signed int)(base - candidate);
        signed int return_value_memcmp$6;
        return_value_memcmp$6=memcmp((const void *)base, (const void *)candidate, (unsigned long int)matched);
        /* assertion !(!((0) == (memcmp(base, candidate, matched)))) */
        assert(!(!(0 == return_value_memcmp$6)));
        op=emit_copy(op, offset, matched);
        const char *insert_tail = ip - (signed long int)1;
        next_emit = ip;
        if(ip >= ip_limit)
          goto emit_remainder;

        input_bytes=get_eight_bytes_at(insert_tail);
        unsigned int prev_hash;
        unsigned int return_value_get_u32_at_offset$7;
        return_value_get_u32_at_offset$7=get_u32_at_offset(input_bytes, 0);
        prev_hash=hash_bytes(return_value_get_u32_at_offset$7, shift);
        table[(signed long int)prev_hash] = (unsigned short int)((ip - baseip) - (signed long int)1);
        unsigned int cur_hash;
        unsigned int return_value_get_u32_at_offset$8;
        return_value_get_u32_at_offset$8=get_u32_at_offset(input_bytes, 1);
        cur_hash=hash_bytes(return_value_get_u32_at_offset$8, shift);
        candidate = baseip + (signed long int)table[(signed long int)cur_hash];
        candidate_bytes = *((unsigned int *)candidate);
        table[(signed long int)cur_hash] = (unsigned short int)(ip - baseip);
        return_value_get_u32_at_offset$4=get_u32_at_offset(input_bytes, 1);
      }
      while(return_value_get_u32_at_offset$4 == candidate_bytes);
      unsigned int return_value_get_u32_at_offset$9;
      return_value_get_u32_at_offset$9=get_u32_at_offset(input_bytes, 2);
      next_hash=hash_bytes(return_value_get_u32_at_offset$9, shift);
      ip = ip + 1l;
    }
    while((_Bool)1);
  }


emit_remainder:
  ;
  if(!(next_emit >= ip_end))
    op=emit_literal(op, next_emit, (signed int)(ip_end - next_emit), (_Bool)0);

  return op;
}

// decompress_all_tags
// file snappy.c line 1119
static void decompress_all_tags(struct snappy_decompressor *d, struct writer *writer)
{
  const char *ip = d->ip;
  if(!(d->ip_limit - ip >= 5l))
  {
    d->ip = ip;
    _Bool return_value_refill_tag$1;
    return_value_refill_tag$1=refill_tag(d);
    if(return_value_refill_tag$1 == (_Bool)0)
      goto __CPROVER_DUMP_L22;

    ip = d->ip;
  }

  const char *tmp_post$3;
  while((_Bool)1)
  {
    if(!(d->ip_limit - ip >= 5l))
    {
      d->ip = ip;
      _Bool return_value_refill_tag$2;
      return_value_refill_tag$2=refill_tag(d);
      if(return_value_refill_tag$2 == (_Bool)0)
        goto __CPROVER_DUMP_L22;

      ip = d->ip;
    }

    unsigned char c;
    tmp_post$3 = ip;
    ip = ip + 1l;
    c = *((const unsigned char *)tmp_post$3);
    if((0x3 & (signed int)c) == 0)
    {
      unsigned int literal_length = (unsigned int)(((signed int)c >> 2) + 1);
      _Bool return_value_writer_try_fast_append$5;
      return_value_writer_try_fast_append$5=writer_try_fast_append(writer, ip, (unsigned int)(d->ip_limit - ip), literal_length);
      if(!(return_value_writer_try_fast_append$5 == (_Bool)0))
      {
        /* assertion !(!((literal_length) < (61))) */
        assert(!(!(literal_length < (unsigned int)61)));
        ip = ip + (signed long int)literal_length;
        if(!(d->ip_limit - ip >= 5l))
        {
          d->ip = ip;
          _Bool return_value_refill_tag$4;
          return_value_refill_tag$4=refill_tag(d);
          if(return_value_refill_tag$4 == (_Bool)0)
            break;

          ip = d->ip;
        }

        continue;
      }

      if(literal_length >= 61u)
      {
        const unsigned int literal_ll = literal_length - (unsigned int)60;
        literal_length = (*((unsigned int *)ip) & wordmask[(signed long int)literal_ll]) + (unsigned int)1;
        ip = ip + (signed long int)literal_ll;
      }

      unsigned int avail = (unsigned int)(d->ip_limit - ip);
      while(!(avail >= literal_length))
      {
        _Bool return_value_writer_append$6;
        return_value_writer_append$6=writer_append(writer, ip, avail);
        if(return_value_writer_append$6 == (_Bool)0)
          goto __CPROVER_DUMP_L22;

        literal_length = literal_length - avail;
        skip(d->reader, (unsigned long int)d->peeked);
        unsigned long int n;
        ip=peek(d->reader, &n);
        avail = (unsigned int)n;
        d->peeked = avail;
        if(avail == 0u)
          goto __CPROVER_DUMP_L22;

        d->ip_limit = ip + (signed long int)avail;
      }
      _Bool return_value_writer_append$7;
      return_value_writer_append$7=writer_append(writer, ip, literal_length);
      if(return_value_writer_append$7 == (_Bool)0)
        break;

      ip = ip + (signed long int)literal_length;
      if(!(d->ip_limit - ip >= 5l))
      {
        d->ip = ip;
        _Bool return_value_refill_tag$8;
        return_value_refill_tag$8=refill_tag(d);
        if(return_value_refill_tag$8 == (_Bool)0)
          break;

        ip = d->ip;
      }

    }

    else
    {
      const unsigned int entry = (const unsigned int)char_table[(signed long int)c];
      const unsigned int trailer = *((unsigned int *)ip) & wordmask[(signed long int)(entry >> 11)];
      const unsigned int length = entry & (unsigned int)0xff;
      ip = ip + (signed long int)(entry >> 11);
      const unsigned int copy_offset = entry & (unsigned int)0x700;
      _Bool return_value_writer_append_from_self$9;
      return_value_writer_append_from_self$9=writer_append_from_self(writer, copy_offset + trailer, length);
      if(return_value_writer_append_from_self$9 == (_Bool)0)
        break;

      if(!(d->ip_limit - ip >= 5l))
      {
        d->ip = ip;
        _Bool return_value_refill_tag$10;
        return_value_refill_tag$10=refill_tag(d);
        if(return_value_refill_tag$10 == (_Bool)0)
          break;

        ip = d->ip;
      }

    }
  }

__CPROVER_DUMP_L22:
  ;
}

// emit_copy
// file snappy.c line 611
static inline char * emit_copy(char *op, signed int offset, signed int len)
{
  for( ; len >= 68; len = len - 64)
    op=emit_copy_less_than64(op, offset, 64);
  if(len >= 65)
  {
    op=emit_copy_less_than64(op, offset, 60);
    len = len - 60;
  }

  op=emit_copy_less_than64(op, offset, len);
  return op;
}

// emit_copy_less_than64
// file snappy.c line 590
static inline char * emit_copy_less_than64(char *op, signed int offset, signed int len)
{
  /* assertion !(!((len) <= (64))) */
  assert(!(!(len <= 64)));
  /* assertion !(!((len) >= (4))) */
  assert(!(!(len >= 4)));
  /* assertion !(!((offset) < (65536))) */
  assert(!(!(offset < 65536)));
  char *tmp_post$1;
  char *tmp_post$2;
  char *tmp_post$3;
  if(!(len >= 12) && !(offset >= 2048))
  {
    signed int len_minus_4 = len - 4;
    /* assertion !(!(len_minus_4 < 8)) */
    assert(!(!(len_minus_4 < 8)));
    tmp_post$1 = op;
    op = op + 1l;
    *tmp_post$1 = (char)(1 + (len_minus_4 << 2) + ((offset >> 8) << 5));
    tmp_post$2 = op;
    op = op + 1l;
    *tmp_post$2 = (char)(offset & 0xff);
  }

  else
  {
    tmp_post$3 = op;
    op = op + 1l;
    *tmp_post$3 = (char)(2 + (len - 1 << 2));
    *((unsigned short int *)op) = (unsigned short int)offset;
    op = op + (signed long int)2;
  }
  return op;
}

// emit_literal
// file snappy.c line 545
static inline char * emit_literal(char *op, const char *literal, signed int len, _Bool allow_fast_path)
{
  signed int n = len - 1;
  char *tmp_post$1;
  char *tmp_post$2;
  if(!(n >= 60))
  {
    tmp_post$1 = op;
    op = op + 1l;
    *tmp_post$1 = (char)(0 | n << 2);
    if(!(len >= 17) && !(allow_fast_path == (_Bool)0))
    {
      unaligned_copy64((const void *)literal, (void *)op);
      unaligned_copy64((const void *)(literal + (signed long int)8), (void *)(op + (signed long int)8));
      return op + (signed long int)len;
    }

  }

  else
  {
    char *base = op;
    signed int count = 0;
    op = op + 1l;
    for( ; n >= 1; count = count + 1)
    {
      tmp_post$2 = op;
      op = op + 1l;
      *tmp_post$2 = (char)(n & 0xff);
      n = n >> 8;
    }
    /* assertion !(!(count >= 1)) */
    assert(!(!(count >= 1)));
    /* assertion !(!(count <= 4)) */
    assert(!(!(count <= 4)));
    *base = (char)(0 | 59 + count << 2);
  }
  memcpy((void *)op, (const void *)literal, (unsigned long int)len);
  return op + (signed long int)len;
}

// err_cb
// file rdkafka_performance.c line 112
static void err_cb(struct rd_kafka_s *rk, signed int err, const char *reason, void *opaque)
{
  const char *return_value_rd_kafka_name$1;
  return_value_rd_kafka_name$1=rd_kafka_name(rk);
  const char *return_value_rd_kafka_err2str$2;
  return_value_rd_kafka_err2str$2=rd_kafka_err2str((enum anonymous$9)err);
  printf("%% ERROR CALLBACK: %s: %s: %s\n", return_value_rd_kafka_name$1, return_value_rd_kafka_err2str$2, reason);
}

// exit_snappy_decompressor
// file snappy.c line 1076
static void exit_snappy_decompressor(struct snappy_decompressor *d)
{
  skip(d->reader, (unsigned long int)d->peeked);
}

// find_lsb_set_non_zero64
// file snappy.c line 133
static inline signed int find_lsb_set_non_zero64(unsigned long long int n)
{
  signed int return_value___builtin_ctzll$1;
  return_value___builtin_ctzll$1=__builtin_ctzll(n);
  return return_value___builtin_ctzll$1;
}

// find_match_length
// file snappy.c line 716
static inline signed int find_match_length(const char *s1, const char *s2, const char *s2_limit)
{
  signed int matched = 0;
  /* assertion !(!((s2_limit) >= (s2))) */
  assert(!(!(s2_limit >= s2)));
  while(s2_limit + -8l >= s2)
    if(*((unsigned long long int *)s2) == *((unsigned long long int *)(s1 + (signed long int)matched)))
    {
      s2 = s2 + (signed long int)8;
      matched = matched + 8;
    }

    else
    {
      unsigned long long int x = *((unsigned long long int *)s2) ^ *((unsigned long long int *)(s1 + (signed long int)matched));
      signed int matching_bits;
      matching_bits=find_lsb_set_non_zero64(x);
      matched = matched + (matching_bits >> 3);
      return matched;
    }
  while(!(s2 >= s2_limit))
    if(s1[(signed long int)matched] == *s2)
    {
      s2 = s2 + 1l;
      matched = matched + 1;
    }

    else
      return matched;
  return matched;
}

// get_eight_bytes_at
// file snappy.c line 807
static inline unsigned long long int get_eight_bytes_at(const char *ptr)
{
  return *((unsigned long long int *)ptr);
}

// get_hash_table
// file snappy.c line 683
static unsigned short int * get_hash_table(struct snappy_env *env, unsigned long int input_size, signed int *table_size)
{
  unsigned int htsize = (unsigned int)256;
  /* assertion !(!((1U << 14) >= 256)) */
  assert(!(!(1U << 14 >= (unsigned int)256)));
  for( ; !(htsize >= 16384u) && !((unsigned long int)htsize >= input_size); htsize = htsize << 1)
    ;
  /* assertion !(!((0) == (htsize & (htsize - 1)))) */
  assert(!(!((unsigned int)0 == (htsize & htsize - (unsigned int)1))));
  /* assertion !(!((htsize) <= ((1U << 14)))) */
  assert(!(!(htsize <= 1U << 14)));
  unsigned short int *table = env->hash_table;
  *table_size = (signed int)htsize;
  memset((void *)table, 0, (unsigned long int)htsize * sizeof(unsigned short int) /*2ul*/ );
  return table;
}

// get_u32_at_offset
// file snappy.c line 812
static inline unsigned int get_u32_at_offset(unsigned long long int v, signed int offset)
{
  /* assertion !(!((offset) >= (0))) */
  assert(!(!(offset >= 0)));
  /* assertion !(!((offset) <= (4))) */
  assert(!(!(offset <= 4)));
  _Bool return_value_is_little_endian$1;
  return_value_is_little_endian$1=is_little_endian();
  return (unsigned int)(v >> (return_value_is_little_endian$1 != (_Bool)0 ? 8 * offset : 32 - 8 * offset));
}

// hash
// file snappy.c line 505
static inline unsigned int hash(const char *p, signed int shift)
{
  unsigned int return_value_hash_bytes$1;
  return_value_hash_bytes$1=hash_bytes(*((unsigned int *)p), shift);
  return return_value_hash_bytes$1;
}

// hash_bytes
// file snappy.c line 499
static inline unsigned int hash_bytes(unsigned int bytes, signed int shift)
{
  unsigned int kmul = (unsigned int)0x1e35a7bd;
  return bytes * kmul >> shift;
}

// incremental_copy
// file snappy.c line 377
static inline void incremental_copy(const char *src, char *op, signed long int len)
{
  /* assertion !(!((len) > (0))) */
  assert(!(!(len > (signed long int)0)));
  char *tmp_post$1;
  const char *tmp_post$2;
  do
  {
    tmp_post$1 = op;
    op = op + 1l;
    tmp_post$2 = src;
    src = src + 1l;
    *tmp_post$1 = *tmp_post$2;
    len = len - 1l;
  }
  while(len >= 1l);
}

// incremental_copy_fast_path
// file snappy.c line 420
static inline void incremental_copy_fast_path(const char *src, char *op, signed long int len)
{
  for( ; !(op - src >= 8l); op = op + (op - src))
  {
    unaligned_copy64((const void *)src, (void *)op);
    len = len - (op - src);
  }
  for( ; len >= 1l; len = len - (signed long int)8)
  {
    unaligned_copy64((const void *)src, (void *)op);
    src = src + (signed long int)8;
    op = op + (signed long int)8;
  }
}

// init_snappy_decompressor
// file snappy.c line 1067
static void init_snappy_decompressor(struct snappy_decompressor *d, struct source *reader)
{
  d->reader = reader;
  d->ip = (const char *)(void *)0;
  d->ip_limit = (const char *)(void *)0;
  d->peeked = (unsigned int)0;
  d->eof = (_Bool)0;
}

// internal_uncompress
// file snappy.c line 1276
static signed int internal_uncompress(struct source *r, struct writer *writer, unsigned int max_len)
{
  struct snappy_decompressor decompressor;
  unsigned int uncompressed_len = (unsigned int)0;
  init_snappy_decompressor(&decompressor, r);
  _Bool return_value_read_uncompressed_length$1;
  return_value_read_uncompressed_length$1=read_uncompressed_length(&decompressor, &uncompressed_len);
  _Bool return_value_writer_check_length$2;
  if(return_value_read_uncompressed_length$1 == (_Bool)0)
    return -5;

  else
    if(!((unsigned long int)max_len >= (unsigned long long int)uncompressed_len))
      return -5;

    else
    {
      writer_set_expected_length(writer, (unsigned long int)uncompressed_len);
      decompress_all_tags(&decompressor, writer);
      exit_snappy_decompressor(&decompressor);
      if(!(decompressor.eof == (_Bool)0))
      {
        return_value_writer_check_length$2=writer_check_length(writer);
        if(return_value_writer_check_length$2 == (_Bool)0)
          goto __CPROVER_DUMP_L3;

        return 0;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        return -5;
      }
    }
}

// is_little_endian
// file snappy.c line 115
static inline _Bool is_little_endian(void)
{
  return (_Bool)1;
  return (_Bool)0;
}

// json_parse_fields
// file rdkafka_performance.c line 258
static unsigned long int json_parse_fields(const char *json, const char **end, const char *field1, const char *field2)
{
  const char *t = json;
  const char *t2;
  signed int len1;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(field1);
  len1 = (signed int)return_value_strlen$1;
  signed int len2;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(field2);
  len2 = (signed int)return_value_strlen$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  do
  {
    t2=strstr(t, field1);
    if(t2 == ((const char *)NULL))
      break;

    unsigned long int v;
    t = t2;
    t = t + (signed long int)len1;
    t2=strstr(t, field2);
    if(!(t2 == ((const char *)NULL)))
    {
      t2 = t2 + (signed long int)len2;
      do
      {
        return_value___ctype_b_loc$3=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*t2]) == 0)
          break;

        t2 = t2 + 1l;
      }
      while((_Bool)1);
      v=strtoull(t2, (char **)&t, 10);
      if(!(t2 == t))
      {
        *end = t;
        return v;
      }

    }

  }
  while((_Bool)1);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(t);
  *end = t + (signed long int)return_value_strlen$4;
  return (unsigned long int)0;
}

// json_parse_stats
// file rdkafka_performance.c line 294
static void json_parse_stats(const char *json)
{
  const char *t;
  const signed int max_avgs = 100;
  const signed long int max_avgs$array_size0 = (signed long int)(max_avgs + 1);
  unsigned long int avg_rtt[max_avgs$array_size0];
  signed int avg_rtt_i = 0;
  avg_rtt[(signed long int)max_avgs] = (unsigned long int)0;
  t = json;
  while(!(avg_rtt_i >= max_avgs))
  {
    if(*t == 0)
      break;

    avg_rtt[(signed long int)avg_rtt_i]=json_parse_fields(t, &t, "\"rtt\":", "\"avg\":");
    if(avg_rtt[(signed long int)avg_rtt_i] >= 100ul)
    {
      avg_rtt[(signed long int)max_avgs] = avg_rtt[(signed long int)max_avgs] + avg_rtt[(signed long int)avg_rtt_i];
      avg_rtt_i = avg_rtt_i + 1;
    }

  }
  if(avg_rtt_i >= 1)
    avg_rtt[(signed long int)max_avgs] = avg_rtt[(signed long int)max_avgs] / (unsigned long int)avg_rtt_i;

  cnt.avg_rtt = avg_rtt[(signed long int)max_avgs];
}

// log2_floor
// file snappy.c line 123
static inline signed int log2_floor(unsigned int n)
{
  signed int tmp_if_expr$2;
  signed int return_value___builtin_clz$1;
  if(n == 0u)
    tmp_if_expr$2 = -1;

  else
  {
    return_value___builtin_clz$1=__builtin_clz(n);
    tmp_if_expr$2 = 31 ^ return_value___builtin_clz$1;
  }
  return tmp_if_expr$2;
}

// main
// file rdkafka_performance.c line 516
signed int main(signed int argc, char **argv)
{
  char *brokers = "localhost";
  char mode = (char)67;
  char *topic = (char *)(void *)0;
  const char *key = (const char *)(void *)0;
  signed int partition = (signed int)-1;
  signed int opt;
  signed int sendflags = 0;
  char *msgpattern = "librdkafka_performance testing!";
  signed int msgsize;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(msgpattern);
  msgsize = (signed int)return_value_strlen$1;
  const char *debug = (const char *)(void *)0;
  unsigned long int now;
  char errstr[512l];
  unsigned long int seq = (unsigned long int)0;
  signed int seed;
  signed long int return_value_time$2;
  return_value_time$2=time((signed long int *)(void *)0);
  seed = (signed int)return_value_time$2;
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_conf_s *conf;
  struct rd_kafka_topic_conf_s *topic_conf;
  const char *compression = "no";
  signed long int start_offset = (signed long int)0;
  signed int batch_size = 0;
  signed int idle = 0;
  const char *stats_cmd = (const char *)(void *)0;
  char *stats_intvlstr = (char *)(void *)0;
  char tmp[128l];
  char *tmp2;
  signed int otype = 0x2;
  double dtmp;
  signed int rate_sleep = 0;
  conf=rd_kafka_conf_new();
  rd_kafka_conf_set_error_cb(conf, err_cb);
  rd_kafka_conf_set_dr_msg_cb(conf, msg_delivered);
  snprintf(tmp, sizeof(char [128l]) /*128ul*/ , "%i", 29);
  rd_kafka_conf_set(conf, "internal.termination.signal", tmp, (char *)(void *)0, (unsigned long int)0);
  rd_kafka_conf_set(conf, "queue.buffering.max.messages", "500000", (char *)(void *)0, (unsigned long int)0);
  rd_kafka_conf_set(conf, "message.send.max.retries", "3", (char *)(void *)0, (unsigned long int)0);
  rd_kafka_conf_set(conf, "retry.backoff.ms", "500", (char *)(void *)0, (unsigned long int)0);
  rd_kafka_conf_set(conf, "queued.min.messages", "1000000", (char *)(void *)0, (unsigned long int)0);
  topic_conf=rd_kafka_topic_conf_new();
  enum anonymous$24 return_value_rd_kafka_topic_conf_set$3;
  enum anonymous$24 return_value_rd_kafka_conf_set$4;
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$5;
  _Bool tmp_if_expr$10;
  signed int return_value_strcmp$9;
  unsigned long int return_value_strlen$11;
  enum anonymous$24 return_value_rd_kafka_topic_conf_set$16;
  do
  {
    opt=getopt(argc, argv, "PCt:p:b:s:k:c:fi:Dd:m:S:x:R:a:z:o:X:B:eT:G:qvIur:lA:O");
    if(opt == -1)
      break;

    switch(opt)
    {
      case 80:

      case 67:
      {
        mode = (char)opt;
        break;
      }
      case 116:
      {
        topic = optarg;
        break;
      }
      case 112:
      {
        partition=atoi(optarg);
        break;
      }
      case 98:
      {
        brokers = optarg;
        break;
      }
      case 115:
      {
        msgsize=atoi(optarg);
        break;
      }
      case 107:
      {
        key = optarg;
        break;
      }
      case 99:
      {
        msgcnt=atoi(optarg);
        break;
      }
      case 68:
      {
        sendflags = sendflags | 0x1;
        break;
      }
      case 105:
      {
        dispintvl=atoi(optarg);
        break;
      }
      case 109:
      {
        msgpattern = optarg;
        break;
      }
      case 83:
      {
        seq=strtoull(optarg, (char ** restrict )(void *)0, 10);
        do_seq = 1;
        break;
      }
      case 120:
      {
        exit_after=atoi(optarg);
        break;
      }
      case 82:
      {
        seed=atoi(optarg);
        break;
      }
      case 97:
      {
        return_value_rd_kafka_topic_conf_set$3=rd_kafka_topic_conf_set(topic_conf, "request.required.acks", optarg, errstr, sizeof(char [512l]) /*512ul*/ );
        if(!((signed int)return_value_rd_kafka_topic_conf_set$3 == RD_KAFKA_CONF_OK))
        {
          fprintf(stderr, "%% %s\n", (const void *)errstr);
          exit(1);
        }

        break;
      }
      case 66:
      {
        batch_size=atoi(optarg);
        break;
      }
      case 122:
      {
        return_value_rd_kafka_conf_set$4=rd_kafka_conf_set(conf, "compression.codec", optarg, errstr, sizeof(char [512l]) /*512ul*/ );
        if(!((signed int)return_value_rd_kafka_conf_set$4 == RD_KAFKA_CONF_OK))
        {
          fprintf(stderr, "%% %s\n", (const void *)errstr);
          exit(1);
        }

        compression = optarg;
        break;
      }
      case 111:
      {
        return_value_strcmp$7=strcmp(optarg, "end");
        if(return_value_strcmp$7 == 0)
          start_offset = (signed long int)-1;

        else
        {
          return_value_strcmp$6=strcmp(optarg, "beginning");
          if(return_value_strcmp$6 == 0)
            start_offset = (signed long int)-2;

          else
          {
            return_value_strcmp$5=strcmp(optarg, "stored");
            if(return_value_strcmp$5 == 0)
              start_offset = (signed long int)-1000;

            else
            {
              start_offset=strtoll(optarg, (char ** restrict )(void *)0, 10);
              if(!(start_offset >= 0l))
                start_offset = (signed long int)-2000 - -start_offset;

            }
          }
        }
        break;
      }
      case 101:
      {
        exit_eof = 1;
        break;
      }
      case 100:
      {
        debug = optarg;
        break;
      }
      case 88:
      {
        char *name;
        char *val;
        enum anonymous$24 res;
        signed int return_value_strcmp$8;
        return_value_strcmp$8=strcmp(optarg, "list");
        if(return_value_strcmp$8 == 0)
          tmp_if_expr$10 = (_Bool)1;

        else
        {
          return_value_strcmp$9=strcmp(optarg, "help");
          tmp_if_expr$10 = !(return_value_strcmp$9 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$10)
        {
          rd_kafka_conf_properties_show(stdout);
          exit(0);
        }

        name = optarg;
        val=strchr(name, 61);
        if(val == ((char *)NULL))
        {
          fprintf(stderr, "%% Expected -X property=value, not %s\n", name);
          exit(1);
        }

        *val = (char)0;
        val = val + 1l;
        res = (enum anonymous$24)RD_KAFKA_CONF_UNKNOWN;
        unsigned long int return_value_strlen$12;
        return_value_strlen$12=strlen("topic.");
        signed int return_value_strncmp$13;
        return_value_strncmp$13=strncmp(name, "topic.", return_value_strlen$12);
        if(return_value_strncmp$13 == 0)
        {
          return_value_strlen$11=strlen("topic.");
          res=rd_kafka_topic_conf_set(topic_conf, name + (signed long int)return_value_strlen$11, val, errstr, sizeof(char [512l]) /*512ul*/ );
        }

        if((signed int)res == RD_KAFKA_CONF_UNKNOWN)
          res=rd_kafka_conf_set(conf, name, val, errstr, sizeof(char [512l]) /*512ul*/ );

        if(!((signed int)res == RD_KAFKA_CONF_OK))
        {
          fprintf(stderr, "%% %s\n", (const void *)errstr);
          exit(1);
        }

        break;
      }
      case 84:
      {
        stats_intvlstr = optarg;
        break;
      }
      case 71:
      {
        stats_cmd = optarg;
        break;
      }
      case 113:
      {
        verbosity = verbosity - 1;
        break;
      }
      case 118:
      {
        verbosity = verbosity + 1;
        break;
      }
      case 73:
      {
        idle = 1;
        break;
      }
      case 117:
      {
        otype = 0x1;
        verbosity = verbosity - 1;
        break;
      }
      case 114:
      {
        dtmp=strtod(optarg, &tmp2);
        if(tmp2 == optarg || dtmp <= 0.001 && dtmp >= -1.000000e-3)
        {
          fprintf(stderr, "%% Invalid rate: %s\n", optarg);
          exit(1);
        }

        rate_sleep = (signed int)(1000000.0 / dtmp);
        break;
      }
      case 108:
      {
        latency_mode = 1;
        break;
      }
      case 65:
      {
        latency_fp=fopen(optarg, "w");
        if(latency_fp == ((struct _IO_FILE *)NULL))
        {
          signed int *return_value___errno_location$14;
          return_value___errno_location$14=__errno_location();
          char *return_value_strerror$15;
          return_value_strerror$15=strerror(*return_value___errno_location$14);
          fprintf(stderr, "%% Cant open %s: %s\n", optarg, return_value_strerror$15);
          exit(1);
        }

        break;
      }
      case 79:
      {
        return_value_rd_kafka_topic_conf_set$16=rd_kafka_topic_conf_set(topic_conf, "produce.offset.report", "true", errstr, sizeof(char [512l]) /*512ul*/ );
        if(!((signed int)return_value_rd_kafka_topic_conf_set$16 == RD_KAFKA_CONF_OK))
        {
          fprintf(stderr, "%% %s\n", (const void *)errstr);
          exit(1);
        }

        report_offset = 1;
        break;
      }
      default:
      {
        fprintf(stderr, "Unknown option: %c\n", opt);
        goto usage;
      }
    }
  }
  while((_Bool)1);
  if(topic == ((char *)NULL) || !(optind == argc))
  {
    if(!(optind >= argc))
      fprintf(stderr, "Unknown argument: %s\n", argv[(signed long int)optind]);


  usage:
    ;
    const char *return_value_rd_kafka_version_str$17;
    return_value_rd_kafka_version_str$17=rd_kafka_version_str();
    signed int return_value_rd_kafka_version$18;
    return_value_rd_kafka_version$18=rd_kafka_version();
    fprintf(stderr, "Usage: %s [-C|-P] -t <topic> [-p <partition>] [-b <broker,broker..>] [options..]\n\nlibrdkafka version %s (0x%08x)\n\n Options:\n  -C | -P      Consumer or Producer mode\n  -t <topic>   Topic to fetch / produce\n  -p <num>     Partition (defaults to random)\n  -b <brokers> Broker address list (host[:port],..)\n  -s <size>    Message size (producer)\n  -k <key>     Message key (producer)\n  -c <cnt>     Messages to transmit/receive\n  -D           Copy/Duplicate data buffer (producer)\n  -i <ms>      Display interval\n  -m <msg>     Message payload pattern\n  -S <start>   Send a sequence number starting at <start> as payload\n  -R <seed>    Random seed value (defaults to time)\n  -a <acks>    Required acks (producer): -1, 0, 1, >1\n  -B <size>    Consume batch size (# of msgs)\n  -z <codec>   Enable compression:\n               none|gzip|snappy\n  -o <offset>  Start offset (consumer)\n               beginning, end, NNNNN or -NNNNN\n  -d [facs..]  Enable debugging contexts:\n               %s\n  -X <prop=name> Set arbitrary librdkafka configuration property\n               Properties prefixed with \"topic.\" will be set on topic object.\n               Use '-X list' to see the full list\n               of supported properties.\n  -T <intvl>   Enable statistics from librdkafka at specified interval (ms)\n  -G <command> Pipe statistics to <command>\n  -I           Idle: dont produce any messages\n  -q           Decrease verbosity\n  -v           Increase verbosity (default 1)\n  -u           Output stats in table format\n  -r <rate>    Producer msg/s limit\n  -l           Latency measurement.\n               Needs two matching instances, one\n               consumer and one producer, both\n               running with the -l switch.\n  -A <file>    Write per-message latency stats to <file>. Requires -l\n  -O           Report produced offset (producer)\n\n In Consumer mode:\n  consumes messages and prints thruput\n  If -B <..> is supplied the batch consumer\n  mode is used, else the callback mode is used.\n\n In Producer mode:\n  writes messages of size -s <..> and prints thruput\n\n", argv[(signed long int)0], return_value_rd_kafka_version_str$17, return_value_rd_kafka_version$18, (const void *)"all,generic,broker,topic,metadata,producer,queue,msg,protocol");
    exit(1);
  }

  dispintvl = dispintvl * 1000;
  if(verbosity >= 2)
    printf("%% Using random seed %i, verbosity level %i\n", seed, verbosity);

  srand((unsigned int)seed);
  signal(2, stop);
  signal(10, sig_usr1);
  enum anonymous$24 return_value_rd_kafka_conf_set$19;
  if(!(debug == ((const char *)NULL)))
  {
    return_value_rd_kafka_conf_set$19=rd_kafka_conf_set(conf, "debug", debug, errstr, sizeof(char [512l]) /*512ul*/ );
    if(!((signed int)return_value_rd_kafka_conf_set$19 == RD_KAFKA_CONF_OK))
    {
      printf("%% Debug configuration failed: %s: %s\n", (const void *)errstr, debug);
      exit(1);
    }

  }

  rd_kafka_conf_set_stats_cb(conf, stats_cb);
  if(stats_intvlstr == ((char *)NULL))
    snprintf(tmp, sizeof(char [128l]) /*128ul*/ , "%i", dispintvl / 1000);

  char *tmp_if_expr$20;
  if(!(stats_intvlstr == ((char *)NULL)))
    tmp_if_expr$20 = stats_intvlstr;

  else
    tmp_if_expr$20 = tmp;
  enum anonymous$24 return_value_rd_kafka_conf_set$21;
  return_value_rd_kafka_conf_set$21=rd_kafka_conf_set(conf, "statistics.interval.ms", tmp_if_expr$20, errstr, sizeof(char [512l]) /*512ul*/ );
  if(!((signed int)return_value_rd_kafka_conf_set$21 == RD_KAFKA_CONF_OK))
  {
    fprintf(stderr, "%% %s\n", (const void *)errstr);
    exit(1);
  }

  if(!(latency_mode == 0))
    do_seq = 0;

  if(!(stats_intvlstr == ((char *)NULL)))
  {
    if(!(stats_cmd == ((const char *)NULL)))
    {
      stats_fp=popen(stats_cmd, "we");
      if(stats_fp == ((struct _IO_FILE *)NULL))
      {
        signed int *return_value___errno_location$22;
        return_value___errno_location$22=__errno_location();
        char *return_value_strerror$23;
        return_value_strerror$23=strerror(*return_value___errno_location$22);
        fprintf(stderr, "%% Failed to start stats command: %s: %s", stats_cmd, return_value_strerror$23);
        exit(1);
      }

    }

    else
      stats_fp = stdout;
  }

  if(!(msgcnt == -1))
    forever = 0;

  unsigned long int tmp_if_expr$25;
  unsigned long int return_value_strlen$24;
  signed int return_value_rd_kafka_produce$33;
  signed int *return_value___errno_location$38;
  signed int *return_value___errno_location$34;
  enum anonymous$9 return_value_rd_kafka_errno2err$35;
  const char *return_value_rd_kafka_err2str$36;
  signed int *return_value___errno_location$37;
  signed int return_value_rd_kafka_poll$42;
  void *return_value_malloc$44;
  signed int *return_value___errno_location$51;
  enum anonymous$9 return_value_rd_kafka_errno2err$52;
  const char *return_value_rd_kafka_err2str$53;
  if((signed int)mode == 80)
  {
    char *sbuf;
    char *pbuf;
    signed int outq;
    signed int keylen;
    if(!(key == ((const char *)NULL)))
    {
      return_value_strlen$24=strlen(key);
      tmp_if_expr$25 = return_value_strlen$24;
    }

    else
      tmp_if_expr$25 = (unsigned long int)0;
    keylen = (signed int)tmp_if_expr$25;
    signed long int rof = (signed long int)0;
    unsigned long int plen;
    plen=strlen(msgpattern);
    if(!(latency_mode == 0))
    {
      unsigned long int return_value_strlen$26;
      return_value_strlen$26=strlen("LATENCY:");
      unsigned long int return_value_strlen$27;
      return_value_strlen$27=strlen("18446744073709551615 ");
      msgsize = (signed int)(return_value_strlen$26 + return_value_strlen$27 + (unsigned long int)1);
      sendflags = sendflags | 0x2;
    }

    else
      if(!(do_seq == 0))
      {
        signed int minlen;
        unsigned long int return_value_strlen$28;
        return_value_strlen$28=strlen("18446744073709551615 ");
        minlen = (signed int)(return_value_strlen$28 + (unsigned long int)1);
        if(!(msgsize >= minlen))
          msgsize = minlen;

        sendflags = sendflags | 0x1;
      }

    void *return_value_malloc$29;
    return_value_malloc$29=malloc((unsigned long int)msgsize);
    sbuf = (char *)return_value_malloc$29;
    while(!(rof >= (signed long int)msgsize))
    {
      unsigned long int xlen = (unsigned long int)((signed long int)msgsize - rof) < plen ? (unsigned long int)((signed long int)msgsize - rof) : plen;
      memcpy((void *)(sbuf + rof), (const void *)msgpattern, xlen);
      rof = rof + (signed long int)xlen;
    }
    if(msgcnt == -1)
      printf("%% Sending messages of size %i bytes\n", msgsize);

    else
      printf("%% Sending %i messages of size %i bytes\n", msgcnt, msgsize);
    rk=rd_kafka_new((enum rd_kafka_type_t)RD_KAFKA_PRODUCER, conf, errstr, sizeof(char [512l]) /*512ul*/ );
    if(rk == ((struct rd_kafka_s *)NULL))
    {
      fprintf(stderr, "%% Failed to create Kafka producer: %s\n", (const void *)errstr);
      exit(1);
    }

    if(!(debug == ((const char *)NULL)))
      rd_kafka_set_log_level(rk, 7);

    signed int return_value_rd_kafka_brokers_add$30;
    return_value_rd_kafka_brokers_add$30=rd_kafka_brokers_add(rk, brokers);
    if(!(return_value_rd_kafka_brokers_add$30 >= 1))
    {
      fprintf(stderr, "%% No valid brokers specified\n");
      exit(1);
    }

    rkt=rd_kafka_topic_new(rk, topic, topic_conf);
    if(verbosity >= 2 && !(rate_sleep == 0))
      fprintf(stderr, "%% Inter message rate limiter sleep %ius\n", rate_sleep);

    dr_disp_div = msgcnt / 50;
    if(dr_disp_div == 0)
      dr_disp_div = 10;

    cnt.t_start=rd_clock();
    while(!(run == 0) && (msgcnt == -1 || !(cnt.msgs >= (unsigned long int)msgcnt)))
      if(!(idle == 0))
        rd_kafka_poll(rk, 1000);

      else
      {
        if(!(latency_mode == 0))
        {
          unsigned long int return_value_wall_clock$31;
          return_value_wall_clock$31=wall_clock();
          snprintf(sbuf, (unsigned long int)(msgsize - 1), "LATENCY:%lu", return_value_wall_clock$31);
        }

        else
          if(!(do_seq == 0))
          {
            snprintf(sbuf, (unsigned long int)(msgsize - 1), "%lu: ", seq);
            seq = seq + 1ul;
          }

        if(!((0x1 & sendflags) == 0))
        {
          void *return_value_malloc$32;
          return_value_malloc$32=malloc((unsigned long int)msgsize);
          pbuf = (char *)return_value_malloc$32;
          memcpy((void *)pbuf, (const void *)sbuf, (unsigned long int)msgsize);
        }

        else
          pbuf = sbuf;
        if(msgsize == 0)
          pbuf = (char *)(void *)0;

        cnt.tx = cnt.tx + 1ul;
        while(!(run == 0))
        {
          return_value_rd_kafka_produce$33=rd_kafka_produce(rkt, partition, sendflags, (void *)pbuf, (unsigned long int)msgsize, (const void *)key, (unsigned long int)keylen, (void *)0);
          if(!(return_value_rd_kafka_produce$33 == -1))
            break;

          signed int *return_value___errno_location$39;
          return_value___errno_location$39=__errno_location();
          if(*return_value___errno_location$39 == 3)
            printf("%% No such partition: %d\n", partition);

          else
          {
            return_value___errno_location$38=__errno_location();
            if(verbosity >= 3 || verbosity >= 1 && !(*return_value___errno_location$38 == 105))
            {
              return_value___errno_location$34=__errno_location();
              return_value_rd_kafka_errno2err$35=rd_kafka_errno2err(*return_value___errno_location$34);
              return_value_rd_kafka_err2str$36=rd_kafka_err2str(return_value_rd_kafka_errno2err$35);
              return_value___errno_location$37=__errno_location();
              printf("%% produce error: %s%s\n", return_value_rd_kafka_err2str$36, *return_value___errno_location$37 == 105 ? " (backpressure)" : "");
            }

          }
          cnt.tx_err = cnt.tx_err + 1ul;
          signed int *return_value___errno_location$40;
          return_value___errno_location$40=__errno_location();
          if(!(*return_value___errno_location$40 == 105))
          {
            run = 0;
            break;
          }

          now=rd_clock();
          if(verbosity >= 2 && now >= cnt.t_enobufs_last + (unsigned long int)dispintvl)
          {
            signed int return_value_rd_kafka_outq_len$41;
            return_value_rd_kafka_outq_len$41=rd_kafka_outq_len(rk);
            printf("%% Backpressure %i (tx %lu, txerr %lu)\n", return_value_rd_kafka_outq_len$41, cnt.tx, cnt.tx_err);
            cnt.t_enobufs_last = now;
          }

          rd_kafka_poll(rk, 10);
          print_stats((signed int)mode, otype, compression);
        }
        msgs_wait_cnt = msgs_wait_cnt + 1l;
        cnt.msgs = cnt.msgs + 1ul;
        cnt.bytes = cnt.bytes + (unsigned long int)msgsize;
        if(!(rate_sleep == 0))
          usleep((unsigned int)rate_sleep);

        rd_kafka_poll(rk, 0);
        print_stats((signed int)mode, otype, compression);
      }
    forever = 0;
    if(verbosity >= 2)
      printf("%% All messages produced, now waiting for %li deliveries\n", msgs_wait_cnt);

    if(!(debug == ((const char *)NULL)))
      rd_kafka_dump(stdout, rk);

    while(!(run == 0))
    {
      return_value_rd_kafka_poll$42=rd_kafka_poll(rk, 1000);
      if(return_value_rd_kafka_poll$42 == -1)
        break;

      print_stats((signed int)mode, otype, compression);
    }
    outq=rd_kafka_outq_len(rk);
    if(verbosity >= 2)
      printf("%% %i messages in outq\n", outq);

    cnt.msgs = cnt.msgs - (unsigned long int)outq;
    cnt.bytes = cnt.bytes - (unsigned long int)(msgsize * outq);
    cnt.t_end = t_end;
    if(cnt.tx_err >= 1ul)
      printf("%% %lu backpressures for %lu produce calls: %.3f%% backpressure rate\n", cnt.tx_err, cnt.tx, ((double)cnt.tx_err / (double)cnt.tx) * 100.0);

    if(!(debug == ((const char *)NULL)))
      rd_kafka_dump(stdout, rk);

    rd_kafka_topic_destroy(rkt);
    rd_kafka_destroy(rk);
  }

  else
    if((signed int)mode == 67)
    {
      struct rd_kafka_message_s **rkmessages = (struct rd_kafka_message_s **)(void *)0;
      rk=rd_kafka_new((enum rd_kafka_type_t)RD_KAFKA_CONSUMER, conf, errstr, sizeof(char [512l]) /*512ul*/ );
      if(rk == ((struct rd_kafka_s *)NULL))
      {
        fprintf(stderr, "%% Failed to create Kafka consumer: %s\n", (const void *)errstr);
        exit(1);
      }

      if(!(debug == ((const char *)NULL)))
        rd_kafka_set_log_level(rk, 7);

      signed int return_value_rd_kafka_brokers_add$43;
      return_value_rd_kafka_brokers_add$43=rd_kafka_brokers_add(rk, brokers);
      if(!(return_value_rd_kafka_brokers_add$43 >= 1))
      {
        fprintf(stderr, "%% No valid brokers specified\n");
        exit(1);
      }

      rkt=rd_kafka_topic_new(rk, topic, topic_conf);
      if(!(batch_size == 0))
      {
        return_value_malloc$44=malloc(sizeof(struct rd_kafka_message_s *) /*8ul*/  * (unsigned long int)batch_size);
        rkmessages = (struct rd_kafka_message_s **)return_value_malloc$44;
      }

      signed int return_value_rd_kafka_consume_start$48;
      return_value_rd_kafka_consume_start$48=rd_kafka_consume_start(rkt, partition, start_offset);
      if(return_value_rd_kafka_consume_start$48 == -1)
      {
        signed int *return_value___errno_location$45;
        return_value___errno_location$45=__errno_location();
        enum anonymous$9 return_value_rd_kafka_errno2err$46;
        return_value_rd_kafka_errno2err$46=rd_kafka_errno2err(*return_value___errno_location$45);
        const char *return_value_rd_kafka_err2str$47;
        return_value_rd_kafka_err2str$47=rd_kafka_err2str(return_value_rd_kafka_errno2err$46);
        fprintf(stderr, "%% Failed to start consuming: %s\n", return_value_rd_kafka_err2str$47);
        exit(1);
      }

      cnt.t_start=rd_clock();
      while(!(run == 0) && (msgcnt == -1 || !(cnt.msgs >= (unsigned long int)msgcnt)))
      {
        unsigned long int fetch_latency;
        signed int r;
        fetch_latency=rd_clock();
        if(!(batch_size == 0))
        {
          signed int i;
          signed long int return_value_rd_kafka_consume_batch$49;
          return_value_rd_kafka_consume_batch$49=rd_kafka_consume_batch(rkt, partition, 1000, rkmessages, (unsigned long int)batch_size);
          r = (signed int)return_value_rd_kafka_consume_batch$49;
          if(!(r == -1))
          {
            i = 0;
            for( ; !(i >= r); i = i + 1)
            {
              msg_consume(rkmessages[(signed long int)i], (void *)0);
              rd_kafka_message_destroy(rkmessages[(signed long int)i]);
            }
          }

        }

        else
          r=rd_kafka_consume_callback(rkt, partition, 1000, msg_consume, (void *)0);
        unsigned long int return_value_rd_clock$50;
        return_value_rd_clock$50=rd_clock();
        cnt.t_fetch_latency = cnt.t_fetch_latency + (return_value_rd_clock$50 - fetch_latency);
        if(r == -1)
        {
          return_value___errno_location$51=__errno_location();
          return_value_rd_kafka_errno2err$52=rd_kafka_errno2err(*return_value___errno_location$51);
          return_value_rd_kafka_err2str$53=rd_kafka_err2str(return_value_rd_kafka_errno2err$52);
          fprintf(stderr, "%% Error: %s\n", return_value_rd_kafka_err2str$53);
        }

        print_stats((signed int)mode, otype, compression);
        rd_kafka_poll(rk, 0);
      }
      cnt.t_end=rd_clock();
      rd_kafka_consume_stop(rkt, partition);
      rd_kafka_topic_destroy(rkt);
      if(!(batch_size == 0))
        free((void *)rkmessages);

      rd_kafka_destroy(rk);
    }

  print_stats((signed int)mode, otype | 0x4, compression);
  if(!(cnt.msgs == 0ul) && !(cnt.t_fetch_latency == 0ul))
    printf("%% Average application fetch latency: %luus\n", cnt.t_fetch_latency / cnt.msgs);

  if(!(latency_fp == ((struct _IO_FILE *)NULL)))
    fclose(latency_fp);

  if(!(stats_fp == ((struct _IO_FILE *)NULL)))
  {
    pclose(stats_fp);
    stats_fp = (struct _IO_FILE *)(void *)0;
  }

  rd_kafka_wait_destroyed(2000);
  return 0;
}

// mk_esc_filename
// file rdkafka_offset.c line 411
static char * mk_esc_filename(const char *in, char *out, unsigned long int out_size)
{
  const char *s = in;
  char *o = out;
  unsigned long int return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$3;
  signed int tmp_post$4;
  char *tmp_post$5;
  const char *tmp_post$6;
  while(!(*s == 0))
  {
    const char *esc;
    signed int esclen;
    switch((signed int)*s)
    {
      case 47:
      {
        esc = "%2F";
        return_value_strlen$1=strlen(esc);
        esclen = (signed int)return_value_strlen$1;
        break;
      }
      case 58:
      {
        esc = "%3A";
        return_value_strlen$2=strlen(esc);
        esclen = (signed int)return_value_strlen$2;
        break;
      }
      case 92:
      {
        esc = "%5C";
        return_value_strlen$3=strlen(esc);
        esclen = (signed int)return_value_strlen$3;
        break;
      }
      default:
      {
        esc = s;
        esclen = 1;
      }
    }
    if((unsigned long int)((o + (signed long int)esclen + 1l) - out) >= out_size)
      break;

    do
    {
      tmp_post$4 = esclen;
      esclen = esclen - 1;
      if(!(tmp_post$4 >= 1))
        break;

      tmp_post$5 = o;
      o = o + 1l;
      tmp_post$6 = esc;
      esc = esc + 1l;
      *tmp_post$5 = *tmp_post$6;
    }
    while((_Bool)1);
    s = s + 1l;
  }
  *o = (char)0;
  return out;
}

// msg_consume
// file rdkafka_performance.c line 176
static void msg_consume(struct rd_kafka_message_s *rkmessage, void *opaque)
{
  const char *return_value_rd_kafka_topic_name$1;
  if(!(rkmessage->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
  {
    if((signed int)rkmessage->err == RD_KAFKA_RESP_ERR__PARTITION_EOF)
    {
      cnt.offset = (unsigned long int)rkmessage->offset;
      if(verbosity >= 1)
      {
        return_value_rd_kafka_topic_name$1=rd_kafka_topic_name(rkmessage->rkt);
        printf("%% Consumer reached end of %s [%d] message queue at offset %ld\n", return_value_rd_kafka_topic_name$1, rkmessage->partition, rkmessage->offset);
      }

      if(!(exit_eof == 0))
        run = 0;

      goto __CPROVER_DUMP_L18;
    }

    const char *return_value_rd_kafka_topic_name$2;
    return_value_rd_kafka_topic_name$2=rd_kafka_topic_name(rkmessage->rkt);
    const char *return_value_rd_kafka_message_errstr$3;
    return_value_rd_kafka_message_errstr$3=rd_kafka_message_errstr(rkmessage);
    printf("%% Consume error for topic \"%s\" [%d] offset %ld: %s\n", return_value_rd_kafka_topic_name$2, rkmessage->partition, rkmessage->offset, return_value_rd_kafka_message_errstr$3);
    cnt.msgs_dr_err = cnt.msgs_dr_err + 1ul;
    goto __CPROVER_DUMP_L18;
  }

  cnt.offset = (unsigned long int)rkmessage->offset;
  cnt.msgs = cnt.msgs + 1ul;
  cnt.bytes = cnt.bytes + rkmessage->len;
  if(verbosity >= 3 || cnt.msgs % 1000000ul == 0ul && verbosity >= 2)
    printf("@%ld: %.*s: %.*s\n", rkmessage->offset, (signed int)rkmessage->key_len, (char *)rkmessage->key, (signed int)rkmessage->len, (char *)rkmessage->payload);

  _Bool tmp_if_expr$6;
  signed int return_value_memcmp$5;
  _Bool tmp_if_expr$8;
  signed int return_value_sscanf$7;
  if(!(latency_mode == 0))
  {
    unsigned long int remote_ts;
    unsigned long int ts;
    if(rkmessage->len >= 9ul)
    {
      return_value_memcmp$5=memcmp(rkmessage->payload, (const void *)"LATENCY:", (unsigned long int)8);
      tmp_if_expr$6 = !(return_value_memcmp$5 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
    {
      return_value_sscanf$7=sscanf((const char *)rkmessage->payload, "LATENCY:%ld", &remote_ts);
      tmp_if_expr$8 = return_value_sscanf$7 == 1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$8 = (_Bool)0;
    if(tmp_if_expr$8)
    {
      unsigned long int return_value_wall_clock$4;
      return_value_wall_clock$4=wall_clock();
      ts = return_value_wall_clock$4 - remote_ts;
      if(ts >= 1ul && !(ts >= 300000000ul))
      {
        if(!(cnt.latency_hi >= ts))
          cnt.latency_hi = ts;

        if(cnt.latency_lo == 0ul || !(ts >= cnt.latency_lo))
          cnt.latency_lo = ts;

        cnt.latency_last = ts;
        cnt.latency_cnt = cnt.latency_cnt + 1;
        cnt.latency_sum = cnt.latency_sum + ts;
        if(!(latency_fp == ((struct _IO_FILE *)NULL)))
          fprintf(latency_fp, "%lu\n", ts);

      }

      else
        if(verbosity >= 1)
          printf("Received latency timestamp is too far off: %ldus (message offset %ld): ignored\n", ts, rkmessage->offset);

    }

    else
      if(verbosity >= 2)
        printf("not a LATENCY payload: %.*s\n", (signed int)rkmessage->len, (char *)rkmessage->payload);

  }

  if(cnt.msgs >= (unsigned long int)msgcnt && !(msgcnt == -1))
    run = 0;


__CPROVER_DUMP_L18:
  ;
}

// msg_delivered
// file rdkafka_performance.c line 118
static void msg_delivered(struct rd_kafka_s *rk, const struct rd_kafka_message_s *rkmessage, void *opaque)
{
  unsigned long int now;
  now=rd_clock();
  static signed int msgs;
  msgs = msgs + 1;
  msgs_wait_cnt = msgs_wait_cnt - 1l;
  if(!(rkmessage->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
    cnt.msgs_dr_err = cnt.msgs_dr_err + 1ul;

  else
  {
    cnt.msgs_dr_ok = cnt.msgs_dr_ok + 1ul;
    cnt.bytes_dr_ok = cnt.bytes_dr_ok + rkmessage->len;
  }
  const char *return_value_rd_kafka_err2str$1;
  static unsigned long int last;
  if(!(msgs_wait_cnt >= 5l) || msgs_wait_cnt % (signed long int)dr_disp_div == 0l || last == 0ul || now + -last >= (unsigned long int)(1000 * dispintvl) || verbosity >= 3 || !(rkmessage->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR) && (!(cnt.msgs_dr_err >= 50ul) || cnt.msgs_dr_err % (unsigned long int)(dispintvl / 1000) == 0ul))
  {
    if(verbosity >= 2 && !(rkmessage->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
    {
      return_value_rd_kafka_err2str$1=rd_kafka_err2str(rkmessage->err);
      printf("%% Message delivery failed: %s (%li remain)\n", return_value_rd_kafka_err2str$1, msgs_wait_cnt);
    }

    else
      if(verbosity >= 2)
        printf("%% Message delivered (offset %ld): %li remain\n", rkmessage->offset, msgs_wait_cnt);

    if(verbosity >= 3 && !(do_seq == 0))
      printf(" --> \"%.*s\"\n", (signed int)rkmessage->len, (const char *)rkmessage->payload);

    last = now;
  }

  if(!(report_offset == 0))
    cnt.last_offset = rkmessage->offset;

  if(forever == 0 && msgs_wait_cnt == 0l)
  {
    if(verbosity >= 2)
      printf("All messages delivered!\n");

    t_end=rd_clock();
    run = 0;
  }

  if(msgs >= exit_after && !(exit_after == 0))
  {
    printf("%% Hard exit after %i messages, as requested\n", exit_after);
    exit(0);
  }

}

// peek
// file snappy.c line 242
static inline const char * peek(struct source *s, unsigned long int *len)
{
  if(!(s->curvec >= s->iovlen))
  {
    struct iovec *iv = &s->iov[(signed long int)s->curvec];
    if(!((unsigned long int)s->curoff >= iv->iov_len))
    {
      *len = iv->iov_len - (unsigned long int)s->curoff;
      return (char *)iv->iov_base + (signed long int)s->curoff;
    }

  }

  *len = (unsigned long int)0;
  return (const char *)(void *)0;
}

// print_stats
// file rdkafka_performance.c line 340
static void print_stats(signed int mode, signed int otype, const char *compression)
{
  unsigned long int now;
  now=rd_clock();
  unsigned long int t_total;
  signed int print_header;
  char extra[512l];
  signed int extra_of = 0;
  extra[0l] = (char)0;
  signed int return_value_snprintf$3;
  if(!((0x4 & otype) == 0) || (!(verbosity == 0) || (0x2 & otype) == 0) && now >= cnt.t_last + (unsigned long int)dispintvl)
  {
    static signed int rows_written = 0;
    print_header = (signed int)(!(rows_written != 0) || verbosity > 0 && !(rows_written % 20 != 0));
    if(!(cnt.t_end_send == 0ul))
      t_total = cnt.t_end_send - cnt.t_start;

    else
      if(!(cnt.t_end == 0ul))
        t_total = cnt.t_end - cnt.t_start;

      else
        t_total = now - cnt.t_start;
    if(mode == 80)
    {
      if(!((0x1 & otype) == 0))
      {
        if(!(print_header == 0))
        {

        __CPROVER_DUMP_L5:
          ;
          printf("| %10.10s ", (const void *)"elapsed");
          printf("| %10.10s ", (const void *)"msgs");
          printf("| %10.10s ", (const void *)"bytes");
          printf("| %10.10s ", (const void *)"rtt");
          printf("| %10.10s ", (const void *)"dr");
          printf("| %10.10s ", (const void *)"dr_m/s");
          printf("| %10.10s ", (const void *)"dr_MB/s");
          printf("| %10.10s ", (const void *)"dr_err");
          printf("| %10.10s ", (const void *)"tx_err");
          printf("| %10.10s ", (const void *)"outq");
          if(!(report_offset == 0))
            printf("| %10.10s ", (const void *)"offset");

          do
          {
            printf("\n");
            rows_written = rows_written + 1;
          }
          while((_Bool)0);
        }


      __CPROVER_DUMP_L7:
        ;
        printf("| %10lu ", t_total / (unsigned long int)1000);
        printf("| %10lu ", cnt.msgs);
        printf("| %10lu ", cnt.bytes);
        printf("| %10lu ", cnt.avg_rtt / (unsigned long int)1000);
        printf("| %10lu ", cnt.msgs_dr_ok);
        printf("| %10lu ", (cnt.msgs_dr_ok * (unsigned long int)1000000) / t_total);
        printf("| %10.2f ", (float)((float)cnt.bytes_dr_ok / (float)t_total));
        printf("| %10lu ", cnt.msgs_dr_err);
        printf("| %10lu ", cnt.tx_err);
        signed int return_value_rd_kafka_outq_len$1;
        return_value_rd_kafka_outq_len$1=rd_kafka_outq_len(rk);
        printf("| %10lu ", (unsigned long int)return_value_rd_kafka_outq_len$1);
        if(!(report_offset == 0))
          printf("| %10lu ", (unsigned long int)cnt.last_offset);

        do
        {
          printf("\n");
          rows_written = rows_written + 1;
        }
        while((_Bool)0);
      }

      if(!((0x2 & otype) == 0))
      {
        signed int return_value_rd_kafka_outq_len$2;
        return_value_rd_kafka_outq_len$2=rd_kafka_outq_len(rk);
        printf("%% %lu messages produced (%lu bytes), %lu delivered (offset %ld, %lu failed) in %lums: %lu msgs/s and %.02f Mb/s, %lu produce failures, %i in queue, %s compression\n", cnt.msgs, cnt.bytes, cnt.msgs_dr_ok, cnt.last_offset, cnt.msgs_dr_err, t_total / (unsigned long int)1000, (cnt.msgs_dr_ok * (unsigned long int)1000000) / t_total, (float)((float)cnt.bytes_dr_ok / (float)t_total), cnt.tx_err, return_value_rd_kafka_outq_len$2, compression);
      }

    }

    else
    {
      float latency_avg = 0.0f;
      if(!(cnt.latency_cnt == 0) && !(latency_mode == 0))
        latency_avg = (float)((double)cnt.latency_sum / (double)(float)cnt.latency_cnt);

      if(!((0x1 & otype) == 0))
      {
        if(!(print_header == 0))
        {

        __CPROVER_DUMP_L13:
          ;
          printf("| %10.10s ", (const void *)"elapsed");
          printf("| %10.10s ", (const void *)"msgs");
          printf("| %10.10s ", (const void *)"bytes");
          printf("| %10.10s ", (const void *)"rtt");
          printf("| %10.10s ", (const void *)"m/s");
          printf("| %10.10s ", (const void *)"MB/s");
          printf("| %10.10s ", (const void *)"rx_err");
          printf("| %10.10s ", (const void *)"offset");
          if(!(latency_mode == 0))
          {
            printf("| %10.10s ", (const void *)"lat_curr");
            printf("| %10.10s ", (const void *)"lat_avg");
            printf("| %10.10s ", (const void *)"lat_lo");
            printf("| %10.10s ", (const void *)"lat_hi");
          }

          do
          {
            printf("\n");
            rows_written = rows_written + 1;
          }
          while((_Bool)0);
        }


      __CPROVER_DUMP_L15:
        ;
        printf("| %10lu ", t_total / (unsigned long int)1000);
        printf("| %10lu ", cnt.msgs);
        printf("| %10lu ", cnt.bytes);
        printf("| %10lu ", cnt.avg_rtt / (unsigned long int)1000);
        printf("| %10lu ", (cnt.msgs * (unsigned long int)1000000) / t_total);
        printf("| %10.2f ", (float)((float)cnt.bytes / (float)t_total));
        printf("| %10lu ", cnt.msgs_dr_err);
        printf("| %10lu ", cnt.offset);
        if(!(latency_mode == 0))
        {
          printf("| %10.2f ", (float)cnt.latency_last / 1000.0f);
          printf("| %10.2f ", latency_avg / 1000.0f);
          printf("| %10.2f ", (float)cnt.latency_lo / 1000.0f);
          printf("| %10.2f ", (float)cnt.latency_hi / 1000.0f);
        }

        do
        {
          printf("\n");
          rows_written = rows_written + 1;
        }
        while((_Bool)0);
      }

      if(!((0x2 & otype) == 0))
      {
        if(latency_avg >= 1.0f)
        {
          return_value_snprintf$3=snprintf(extra + (signed long int)extra_of, sizeof(char [512l]) /*512ul*/  - (unsigned long int)extra_of, ", latency curr/avg/lo/hi %.2f/%.2f/%.2f/%.2fms", (float)cnt.latency_last / 1000.0f, latency_avg / 1000.0f, (float)cnt.latency_lo / 1000.0f, (float)cnt.latency_hi / 1000.0f);
          extra_of = extra_of + return_value_snprintf$3;
        }

        printf("%% %lu messages (%lu bytes) consumed in %lums: %lu msgs/s (%.02f Mb/s)%s\n", cnt.msgs, cnt.bytes, t_total / (unsigned long int)1000, (cnt.msgs * (unsigned long int)1000000) / t_total, (float)((float)cnt.bytes / (float)t_total), (const void *)extra);
      }

    }
    cnt.t_last = now;
  }

}

// pthread_cond_timedwait_ms
// file rdkafka.c line 92
signed int pthread_cond_timedwait_ms(union anonymous$15 *cond, union anonymous$11 *mutex, signed int timeout_ms)
{
  struct timeval tv;
  struct timespec ts;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  (&ts)->tv_sec = (&tv)->tv_sec;
  (&ts)->tv_nsec = (&tv)->tv_usec * (signed long int)1000;
  ts.tv_sec = ts.tv_sec + (signed long int)(timeout_ms / 1000);
  ts.tv_nsec = ts.tv_nsec + (signed long int)((timeout_ms % 1000) * 1000000);
  if(ts.tv_nsec >= 1000000000l)
  {
    ts.tv_sec = ts.tv_sec + 1l;
    ts.tv_nsec = ts.tv_nsec - (signed long int)1000000000;
  }

  signed int return_value_pthread_cond_timedwait$1;
  return_value_pthread_cond_timedwait$1=pthread_cond_timedwait(cond, mutex, &ts);
  return return_value_pthread_cond_timedwait$1;
}

// rd_addrinfo_prepare
// file rdaddr.c line 89
const char * rd_addrinfo_prepare(const char *nodesvc, char **node, char **svc)
{
  const char *t;
  const char *svct = (const char *)(void *)0;
  signed int nodelen = 0;
  static char snode[256l];
  snode[0l] = (char)0;
  static char ssvc[64l];
  ssvc[0l] = (char)0;
  if((signed int)*nodesvc == 91)
  {
    t=strchr(nodesvc, 93);
    if(t == ((const char *)NULL))
      return "Missing close-']'";

    nodesvc = nodesvc + 1l;
    nodelen = (signed int)(t - nodesvc);
    svct = t + (signed long int)1;
  }

  else
    if((signed int)*nodesvc == 58)
    {
      if(!((signed int)nodesvc[1l] == 58))
      {
        nodelen = 0;
        svct = nodesvc;
      }

    }

  svct=strrchr((_Bool)svct ? svct : nodesvc, 58);
  _Bool tmp_if_expr$3;
  if(!(svct == ((const char *)NULL)))
    tmp_if_expr$3 = (signed int)*(svct - (signed long int)1) != 58 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  _Bool tmp_if_expr$4;
  if(tmp_if_expr$3)
  {
    svct = svct + 1l;
    tmp_if_expr$4 = *svct != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$4 = (_Bool)0;
  unsigned long int return_value_strlen$2;
  if(tmp_if_expr$4)
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(svct);
    if(return_value_strlen$1 >= sizeof(char [64l]) /*64ul*/ )
      return "Service name too long";

    strcpy(ssvc, svct);
    if(nodelen == 0)
      nodelen = (signed int)(svct - nodesvc) - 1;

  }

  else
    if(nodelen == 0)
    {
      return_value_strlen$2=strlen(nodesvc);
      nodelen = (signed int)return_value_strlen$2;
    }

  if(!(nodelen == 0))
  {
    strncpy(snode, nodesvc, (unsigned long int)nodelen);
    snode[(signed long int)nodelen] = (char)0;
  }

  *node = snode;
  *svc = ssvc;
  return (const char *)(void *)0;
}

// rd_array_shuffle
// file rdrand.h line 45
void rd_array_shuffle(void *base, unsigned long int nmemb, unsigned long int entry_size)
{
  signed int i;
  void *tmp;
  tmp=__builtin_alloca(entry_size);
  i = (signed int)(nmemb - (unsigned long int)1);
  for( ; i >= 1; i = i - 1)
  {
    signed int j;
    j=rd_jitter$link2(0, i);
    if(!(i == j))
    {
      memcpy(tmp, (const void *)((char *)base + (signed long int)((unsigned long int)i * entry_size)), entry_size);
      memcpy((void *)((char *)base + (signed long int)((unsigned long int)i * entry_size)), (const void *)((char *)base + (signed long int)((unsigned long int)j * entry_size)), entry_size);
      memcpy((void *)((char *)base + (signed long int)((unsigned long int)j * entry_size)), tmp, entry_size);
    }

  }
}

// rd_clock
// file ../src/rdtime.h line 60
static inline unsigned long int rd_clock(void)
{
  struct timespec ts;
  clock_gettime(1, &ts);
  return (unsigned long int)ts.tv_sec * 1000000LLU + (unsigned long int)ts.tv_nsec / 1000LLU;
}

// rd_clock$link1
// file rdtime.h line 60
static inline unsigned long int rd_clock$link1(void)
{
  struct timespec ts$link1;
  clock_gettime(1, &ts$link1);
  return (unsigned long int)ts$link1.tv_sec * 1000000LLU + (unsigned long int)ts$link1.tv_nsec / 1000LLU;
}

// rd_clock$link2
// file rdtime.h line 60
static inline unsigned long int rd_clock$link2(void)
{
  struct timespec ts$link2;
  clock_gettime(1, &ts$link2);
  return (unsigned long int)ts$link2.tv_sec * 1000000LLU + (unsigned long int)ts$link2.tv_nsec / 1000LLU;
}

// rd_clock$link3
// file rdtime.h line 60
static inline unsigned long int rd_clock$link3(void)
{
  struct timespec ts$link3;
  clock_gettime(1, &ts$link3);
  return (unsigned long int)ts$link3.tv_sec * 1000000LLU + (unsigned long int)ts$link3.tv_nsec / 1000LLU;
}

// rd_clock$link4
// file rdtime.h line 60
static inline unsigned long int rd_clock$link4(void)
{
  struct timespec ts$link4;
  clock_gettime(1, &ts$link4);
  return (unsigned long int)ts$link4.tv_sec * 1000000LLU + (unsigned long int)ts$link4.tv_nsec / 1000LLU;
}

// rd_clock$link5
// file rdtime.h line 60
static inline unsigned long int rd_clock$link5(void)
{
  struct timespec ts$link5;
  clock_gettime(1, &ts$link5);
  return (unsigned long int)ts$link5.tv_sec * 1000000LLU + (unsigned long int)ts$link5.tv_nsec / 1000LLU;
}

// rd_cond_timedwait_ms
// file rdthread.h line 218
static signed int rd_cond_timedwait_ms(union anonymous$15 *cond, union anonymous$11 *mutex, signed int timeout_ms)
{
  struct timeval tv;
  struct timespec ts;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  do
  {
    (&ts)->tv_sec = (&tv)->tv_sec;
    (&ts)->tv_nsec = (&tv)->tv_usec * (signed long int)1000;
  }
  while((_Bool)0);
  ts.tv_sec = ts.tv_sec + (signed long int)(timeout_ms / 1000);
  ts.tv_nsec = ts.tv_nsec + (signed long int)((timeout_ms % 1000) * 1000000);
  if(ts.tv_nsec >= 1000000000l)
  {
    ts.tv_sec = ts.tv_sec + 1l;
    ts.tv_nsec = ts.tv_nsec - (signed long int)1000000000;
  }

  signed int return_value_pthread_cond_timedwait$1;
  return_value_pthread_cond_timedwait$1=pthread_cond_timedwait(cond, mutex, &ts);
  return return_value_pthread_cond_timedwait$1;
}

// rd_crc32_reflect
// file rdcrc32.c line 97
unsigned int rd_crc32_reflect(unsigned int data, unsigned long int data_len)
{
  unsigned int i;
  unsigned int ret = data & (unsigned int)0x01;
  i = (unsigned int)1;
  for( ; !((unsigned long int)i >= data_len); i = i + 1u)
  {
    data = data >> 1;
    ret = ret << 1 | data & (unsigned int)0x01;
  }
  return ret;
}

// rd_crc32_update
// file rdcrc32.c line 119
unsigned int rd_crc32_update(unsigned int crc, const unsigned char *data, unsigned long int data_len)
{
  unsigned int tbl_idx;
  unsigned long int tmp_post$1;
  do
  {
    tmp_post$1 = data_len;
    data_len = data_len - 1ul;
    if(tmp_post$1 == 0ul)
      break;

    tbl_idx = (crc ^ (unsigned int)*data) & (unsigned int)0xff;
    crc = (crc_table[(signed long int)tbl_idx] ^ crc >> 8) & 0xffffffff;
    data = data + 1l;
  }
  while((_Bool)1);
  return crc & 0xffffffff;
}

// rd_family2str
// file rdaddr.h line 169
static const char * rd_family2str(signed int af)
{
  switch(af)
  {
    case 2:
      return "inet";
    case 10:
      return "inet6";
    default:
      return "af?";
  }
}

// rd_family2str$link1
// file rdaddr.h line 169
static const char * rd_family2str$link1(signed int af$link1)
{
  switch(af$link1)
  {
    case 2:
      return "inet";
    case 10:
      return "inet6";
    default:
      return "af?";
  }
}

// rd_fifoq_add0
// file rdqueue.c line 76
void rd_fifoq_add0(struct rd_fifoq_s *rfq, void *ptr, void **ptr_purged)
{
  struct rd_fifoq_elm_s *rfqe;
  if(!(ptr_purged == ((void **)NULL)))
    *ptr_purged = (void *)0;

  /* assertion rfq->rfq_inited */
  assert(rfq->rfq_inited != 0);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rd_fifoq_elm_s) /*32ul*/ );
  rfqe = (struct rd_fifoq_elm_s *)return_value_malloc$1;
  rfqe->rfqe_refcnt = 2;
  rfqe->rfqe_ptr = ptr;
  pthread_mutex_lock(&rfq->rfq_lock);
  if(!(rfq->rfq_max_size == 0))
  {
    if(rfq->rfq_cnt >= rfq->rfq_max_size)
    {
      struct rd_fifoq_elm_s *purge;
      if(!(rfq->rfq_taildrop == 0))
        purge = *((struct rd_fifoq_elm_head_s *)(&rfq->rfq_q)->tqh_last)->tqh_last;

      else
        purge = (&rfq->rfq_q)->tqh_first;
      if(!(ptr_purged == ((void **)NULL)))
        *ptr_purged = purge->rfqe_ptr;

      rfq->rfq_cnt = rfq->rfq_cnt - 1;
      do
      {
        if(!(purge->rfqe_link.tqe_next == ((struct rd_fifoq_elm_s *)NULL)))
          purge->rfqe_link.tqe_next->rfqe_link.tqe_prev = purge->rfqe_link.tqe_prev;

        else
          (&rfq->rfq_q)->tqh_last = purge->rfqe_link.tqe_prev;
        *purge->rfqe_link.tqe_prev = purge->rfqe_link.tqe_next;
      }
      while((_Bool)0);
      if(purge->rfqe_refcnt == 1)
        rd_fifoq_elm_release0$link1(rfq, purge);

    }

  }

  do
  {
    rfqe->rfqe_link.tqe_next = (struct rd_fifoq_elm_s *)(void *)0;
    rfqe->rfqe_link.tqe_prev = (&rfq->rfq_q)->tqh_last;
    *(&rfq->rfq_q)->tqh_last = rfqe;
    (&rfq->rfq_q)->tqh_last = &rfqe->rfqe_link.tqe_next;
  }
  while((_Bool)0);
  rfq->rfq_cnt = rfq->rfq_cnt + 1;
  pthread_cond_signal(&rfq->rfq_cond);
  pthread_mutex_unlock(&rfq->rfq_lock);
}

// rd_fifoq_destroy
// file rdqueue.h line 81
void rd_fifoq_destroy(struct rd_fifoq_s *rfq)
{
  struct rd_fifoq_elm_s *rfqe;
  pthread_mutex_lock(&rfq->rfq_lock);
  do
  {
    rfqe = (&rfq->rfq_q)->tqh_first;
    if(rfqe == ((struct rd_fifoq_elm_s *)NULL))
      break;

    do
    {
      if(!(rfqe->rfqe_link.tqe_next == ((struct rd_fifoq_elm_s *)NULL)))
        rfqe->rfqe_link.tqe_next->rfqe_link.tqe_prev = rfqe->rfqe_link.tqe_prev;

      else
        (&rfq->rfq_q)->tqh_last = rfqe->rfqe_link.tqe_prev;
      *rfqe->rfqe_link.tqe_prev = rfqe->rfqe_link.tqe_next;
    }
    while((_Bool)0);
    free((void *)rfqe);
  }
  while((_Bool)1);
  pthread_mutex_unlock(&rfq->rfq_lock);
}

// rd_fifoq_elm_release0
// file rdqueue.h line 105
static inline void rd_fifoq_elm_release0(struct rd_fifoq_s *rfq, struct rd_fifoq_elm_s *rfqe)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rfqe->rfqe_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1 >= 1))
    free((void *)rfqe);

}

// rd_fifoq_elm_release0$link1
// file rdqueue.h line 105
static inline void rd_fifoq_elm_release0$link1(struct rd_fifoq_s *rfq$link1, struct rd_fifoq_elm_s *rfqe$link1)
{
  signed int return_value___atomic_sub_fetch$1$link1;
  return_value___atomic_sub_fetch$1$link1=__atomic_sub_fetch(&rfqe$link1->rfqe_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1$link1 >= 1))
    free((void *)rfqe$link1);

}

// rd_fifoq_init
// file rdqueue.h line 82
struct rd_fifoq_s * rd_fifoq_init(struct rd_fifoq_s *rfq)
{
  void *return_value_calloc$1;
  if(rfq == ((struct rd_fifoq_s *)NULL))
  {
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_fifoq_s) /*120ul*/ );
    rfq = (struct rd_fifoq_s *)return_value_calloc$1;
  }

  do
  {
    (&rfq->rfq_q)->tqh_first = (struct rd_fifoq_elm_s *)(void *)0;
    (&rfq->rfq_q)->tqh_last = &(&rfq->rfq_q)->tqh_first;
  }
  while((_Bool)0);
  pthread_mutex_init(&rfq->rfq_lock, (const union anonymous$12 *)(void *)0);
  pthread_cond_init(&rfq->rfq_cond, (const union anonymous$12 *)(void *)0);
  rfq->rfq_inited = 1;
  return rfq;
}

// rd_fifoq_pop0
// file rdqueue.h line 100
struct rd_fifoq_elm_s * rd_fifoq_pop0(struct rd_fifoq_s *rfq, signed int nowait, signed int timeout_ms)
{
  struct rd_fifoq_elm_s *rfqe;
  do
  {
    pthread_mutex_lock(&rfq->rfq_lock);
    do
    {
      rfqe = (&rfq->rfq_q)->tqh_first;
      if(!(rfqe == ((struct rd_fifoq_elm_s *)NULL)))
        break;

      if(!(nowait == 0))
      {
        pthread_mutex_unlock(&rfq->rfq_lock);
        return (struct rd_fifoq_elm_s *)(void *)0;
      }

      if(!(timeout_ms == 0))
      {
        signed int return_value_rd_cond_timedwait_ms$1;
        return_value_rd_cond_timedwait_ms$1=rd_cond_timedwait_ms(&rfq->rfq_cond, &rfq->rfq_lock, timeout_ms);
        if(return_value_rd_cond_timedwait_ms$1 == 110)
        {
          pthread_mutex_unlock(&rfq->rfq_lock);
          return (struct rd_fifoq_elm_s *)(void *)0;
        }

      }

      else
        pthread_cond_wait(&rfq->rfq_cond, &rfq->rfq_lock);
    }
    while((_Bool)1);
    /* assertion rfq->rfq_cnt > 0 */
    assert(rfq->rfq_cnt > 0);
    rfq->rfq_cnt = rfq->rfq_cnt - 1;
    do
    {
      if(!(rfqe->rfqe_link.tqe_next == ((struct rd_fifoq_elm_s *)NULL)))
        rfqe->rfqe_link.tqe_next->rfqe_link.tqe_prev = rfqe->rfqe_link.tqe_prev;

      else
        (&rfq->rfq_q)->tqh_last = rfqe->rfqe_link.tqe_prev;
      *rfqe->rfqe_link.tqe_prev = rfqe->rfqe_link.tqe_next;
    }
    while((_Bool)0);
    if(rfqe->rfqe_refcnt == 1)
      rd_fifoq_elm_release0$link1(rfq, rfqe);

    else
      break;
  }
  while(rfqe == ((struct rd_fifoq_elm_s *)NULL));
  rd_fifoq_elm_release0$link1(rfq, rfqe);
  pthread_mutex_unlock(&rfq->rfq_lock);
  return rfqe;
}

// rd_fifoq_set_max_size
// file rdqueue.c line 60
void rd_fifoq_set_max_size(struct rd_fifoq_s *rfq, signed int max_size, signed int taildrop)
{
  pthread_mutex_lock(&rfq->rfq_lock);
  rfq->rfq_max_size = max_size;
  rfq->rfq_taildrop = (signed int)!(!(taildrop != 0));
  pthread_mutex_unlock(&rfq->rfq_lock);
}

// rd_getaddrinfo
// file rdaddr.h line 149
struct rd_sockaddr_list_s * rd_getaddrinfo(const char *nodesvc, const char *defsvc, signed int flags, signed int family, signed int socktype, signed int protocol, const char **errstr)
{
  struct addrinfo hints = { .ai_flags=flags, .ai_family=family, .ai_socktype=socktype, .ai_protocol=protocol,
    .ai_addrlen=0u, .ai_addr=((struct sockaddr *)NULL),
    .ai_canonname=((char *)NULL), .ai_next=((struct addrinfo *)NULL) };
  struct addrinfo *ais;
  struct addrinfo *ai;
  char *node;
  char *svc;
  signed int r;
  signed int rd_getaddrinfo$$1$$cnt = 0;
  struct rd_sockaddr_list_s *rsal;
  *errstr=rd_addrinfo_prepare(nodesvc, &node, &svc);
  if(!(*errstr == ((const char *)NULL)))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct rd_sockaddr_list_s *)(void *)0;
  }

  if(!(*svc == 0))
    defsvc = svc;

  r=getaddrinfo(node, defsvc, &hints, &ais);
  signed int *return_value___errno_location$2;
  if(!(r == 0))
  {
    if(r == -11)
    {
      return_value___errno_location$2=__errno_location();
      *errstr=strerror(*return_value___errno_location$2);
    }

    else
    {
      *errstr=gai_strerror(r);
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 14;
    }
    return (struct rd_sockaddr_list_s *)(void *)0;
  }

  ai = ais;
  for( ; !(ai == ((struct addrinfo *)NULL)); ai = ai->ai_next)
    rd_getaddrinfo$$1$$cnt = rd_getaddrinfo$$1$$cnt + 1;
  if(rd_getaddrinfo$$1$$cnt == 0)
  {
    freeaddrinfo(ais);
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    *return_value___errno_location$4 = 2;
    *errstr = "No addresses";
    return (struct rd_sockaddr_list_s *)(void *)0;
  }

  void *return_value_calloc$5;
  return_value_calloc$5=calloc((unsigned long int)1, sizeof(struct rd_sockaddr_list_s) /*8ul*/  + sizeof(union anonymous$8) /*28ul*/  * (unsigned long int)rd_getaddrinfo$$1$$cnt);
  rsal = (struct rd_sockaddr_list_s *)return_value_calloc$5;
  ai = ais;
  signed int tmp_post$6;
  for( ; !(ai == ((struct addrinfo *)NULL)); ai = ai->ai_next)
  {
    tmp_post$6 = rsal->rsal_cnt;
    rsal->rsal_cnt = rsal->rsal_cnt + 1;
    memcpy((void *)&rsal->rsal_addr[(signed long int)tmp_post$6], (const void *)ai->ai_addr, (unsigned long int)ai->ai_addrlen);
  }
  freeaddrinfo(ais);
  if((0x10000000 & flags) == 0)
    rd_array_shuffle((void *)rsal->rsal_addr, (unsigned long int)rsal->rsal_cnt, sizeof(union anonymous$8) /*28ul*/ );

  return rsal;
}

// rd_gz_decompress
// file rdgz.h line 41
void * rd_gz_decompress(void *compressed, signed int compressed_len, unsigned long int *decompressed_lenp)
{
  signed int pass = 1;
  char *decompressed = (char *)(void *)0;
  if(!(*decompressed_lenp == 0LLU))
    pass = pass + 1;

  for( ; !(pass >= 3); pass = pass + 1)
  {
    struct z_stream_s strm = { .next_in=((unsigned char *)NULL), .avail_in=0u, .total_in=0ul,
    .next_out=((unsigned char *)NULL), .avail_out=0u,
    .total_out=0ul, .msg=((char *)NULL), .state=((struct internal_state *)NULL),
    .zalloc=((void * (*)(void *, unsigned int, unsigned int))NULL),
    .zfree=((void (*)(void *, void *))NULL),
    .opaque=NULL,
    .data_type=0, .adler=0ul, .reserved=0ul };
    struct gz_header_s hdr;
    char buf[512l];
    char *p;
    signed int len;
    signed int r;
    r=inflateInit2_(&strm, 15 + 32, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
    if(!(r == 0))
      goto fail;

    strm.next_in = (unsigned char *)compressed;
    strm.avail_in = (unsigned int)compressed_len;
    r=inflateGetHeader(&strm, &hdr);
    if(!(r == 0))
    {
      inflateEnd(&strm);
      goto fail;
    }

    if(pass == 1)
    {
      p = buf;
      len = (signed int)sizeof(char [512l]) /*512ul*/ ;
    }

    else
    {
      p = decompressed;
      len = (signed int)*decompressed_lenp;
    }
    do
    {
      strm.next_out = (unsigned char *)p;
      strm.avail_out = (unsigned int)len;
      r=inflate(&strm, 0);
      if(r == 2 || r == -4 || r == -3 || r == -2)
      {
        inflateEnd(&strm);
        goto fail;
      }

      if(pass == 2)
      {
        p = p + (signed long int)((unsigned int)len - strm.avail_out);
        len = len - (signed int)((unsigned int)len - strm.avail_out);
      }

    }
    while(strm.avail_out == 0u && !(r == 1));
    if(pass == 1)
    {
      *decompressed_lenp = strm.total_out;
      void *return_value_malloc$1;
      return_value_malloc$1=malloc(*decompressed_lenp + (unsigned long int)1);
      decompressed = (char *)return_value_malloc$1;
      if(decompressed == ((char *)NULL))
      {
        inflateEnd(&strm);
        return (void *)0;
      }

      decompressed[(signed long int)*decompressed_lenp] = (char)0;
    }

    inflateEnd(&strm);
  }
  return (void *)decompressed;

fail:
  ;
  if(!(decompressed == ((char *)NULL)))
    free((void *)decompressed);

  return (void *)0;
}

// rd_hexdump
// file rdlog.c line 39
void rd_hexdump(struct _IO_FILE *fp, const char *name, const void *ptr, unsigned long int len)
{
  const char *p = (const char *)ptr;
  unsigned long int of = (unsigned long int)0;
  if(!(name == ((const char *)NULL)))
    fprintf(fp, "%s hexdump (%zu bytes):\n", name, len);

  of = (unsigned long int)0;
  signed int tmp_if_expr$3;
  for( ; !(of >= len); of = of + (unsigned long int)16)
  {
    char hexen[49l];
    char charen[17l];
    unsigned long int hof = (unsigned long int)0;
    unsigned long int cof = (unsigned long int)0;
    unsigned long int i = of;
    for( ; !(i >= 16ul + of) && !(i >= len); i = i + 1ul)
    {
      signed int return_value_sprintf$1;
      return_value_sprintf$1=sprintf(hexen + (signed long int)hof, "%02x ", (signed int)p[(signed long int)i] & 0xff);
      hof = hof + (unsigned long int)return_value_sprintf$1;
      const unsigned short int **return_value___ctype_b_loc$2;
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if(!((16384 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)p[(signed long int)i]]) == 0))
        tmp_if_expr$3 = (signed int)p[(signed long int)i];

      else
        tmp_if_expr$3 = 46;
      signed int return_value_sprintf$4;
      return_value_sprintf$4=sprintf(charen + (signed long int)cof, "%c", tmp_if_expr$3);
      cof = cof + (unsigned long int)return_value_sprintf$4;
    }
    fprintf(fp, "%08zu: %-48s %-16s\n", of, (const void *)hexen, (const void *)charen);
  }
}

// rd_jitter
// file rdrand.h line 36
static inline signed int rd_jitter(signed int low, signed int high)
{
  signed int return_value_rand$1;
  return_value_rand$1=rand();
  return low + return_value_rand$1 % (high + 1);
}

// rd_jitter$link1
// file rdrand.h line 36
static inline signed int rd_jitter$link1(signed int low$link1, signed int high$link1)
{
  signed int return_value_rand$1$link1;
  return_value_rand$1$link1=rand();
  return low$link1 + return_value_rand$1$link1 % (high$link1 + 1);
}

// rd_jitter$link2
// file rdrand.h line 36
static inline signed int rd_jitter$link2(signed int low$link2, signed int high$link2)
{
  signed int return_value_rand$1$link2;
  return_value_rand$1$link2=rand();
  return low$link2 + return_value_rand$1$link2 % (high$link2 + 1);
}

// rd_kafka_ApiKey2str
// file rdkafka_proto.h line 71
static const char * rd_kafka_ApiKey2str(signed short int ApiKey)
{
  static const char *names[11l] = { "Produce", "Fetch", "Offset", "Metadata", "LeaderAndIsr", "StopReplica", ((const char *)NULL), ((const char *)NULL), "OffsetCommit", "OffsetFetch", "ConsumerMetadata" };
  if((unsigned long int)ApiKey >= 11ul || !((signed int)ApiKey >= 0))
  {
    static char ret[32l];
    snprintf(ret, sizeof(char [32l]) /*32ul*/ , "Unknown-%hd?", ApiKey);
    return ret;
  }

  else
    return names[(signed long int)ApiKey];
}

// rd_kafka_anyconf_clear
// file rdkafka_defaultconf.c line 711
static void rd_kafka_anyconf_clear(void *conf, struct rd_kafka_property *prop)
{
  if((signed int)prop->type == _RK_C_STR)
  {
    char **str = (char **)((char *)conf + (signed long int)prop->offset);
    if(!(*str == ((char *)NULL)))
    {
      free((void *)*str);
      *str = (char *)(void *)0;
    }

  }

}

// rd_kafka_anyconf_copy
// file rdkafka_defaultconf.c line 756
static void rd_kafka_anyconf_copy(signed int scope, void *dst, const void *src)
{
  struct rd_kafka_property *prop = rd_kafka_properties;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
  {
    const char *val = (const char *)(void *)0;
    signed int ival = 0;
    if(!((scope & (signed int)prop->scope) == 0))
    {
      switch((signed int)prop->type)
      {
        case _RK_C_STR:

        case _RK_C_PTR:
        {
          val = *((const char **)((char *)src + (signed long int)prop->offset));
          break;
        }
        case _RK_C_BOOL:

        case _RK_C_INT:

        case _RK_C_S2I:

        case _RK_C_S2F:
        {
          ival = *((const signed int *)((char *)src + (signed long int)prop->offset));
          break;
        }
        default:
          goto __CPROVER_DUMP_L7;
      }
      rd_kafka_anyconf_set_prop0(scope, dst, prop, val, ival);
    }


  __CPROVER_DUMP_L7:
    ;
  }
}

// rd_kafka_anyconf_destroy
// file rdkafka_int.h line 949
void rd_kafka_anyconf_destroy(signed int scope, void *conf)
{
  struct rd_kafka_property *prop = rd_kafka_properties;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
    if(!((scope & (signed int)prop->scope) == 0))
      rd_kafka_anyconf_clear(conf, prop);

}

// rd_kafka_anyconf_dump
// file rdkafka_defaultconf.c line 889
static const char ** rd_kafka_anyconf_dump(signed int scope, void *conf, unsigned long int *cntp)
{
  struct rd_kafka_property *prop;
  char **arr;
  signed int rd_kafka_anyconf_dump$$1$$cnt = 0;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(char *) /*8ul*/ , (sizeof(struct rd_kafka_property [57l]) /*12768ul*/  / sizeof(struct rd_kafka_property) /*224ul*/ ) * (unsigned long int)2);
  arr = (char **)return_value_calloc$1;
  prop = rd_kafka_properties;
  signed int tmp_post$2;
  signed int tmp_post$3;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
  {
    char tmp[22l];
    const char *val = (const char *)(void *)0;
    signed int j;
    if(!((scope & (signed int)prop->scope) == 0))
      switch((signed int)prop->type)
      {
        case _RK_C_STR:
        {
          val = *((const char **)((char *)conf + (signed long int)prop->offset));
          goto __CPROVER_DUMP_L11;
        }
        case _RK_C_PTR:
        {
          val = (const char *)*((const void **)((char *)conf + (signed long int)prop->offset));
          if(!(val == ((const char *)NULL)))
          {
            snprintf(tmp, sizeof(char [22l]) /*22ul*/ , "%p", (void *)val);
            val = tmp;
          }

          goto __CPROVER_DUMP_L11;
        }
        case _RK_C_BOOL:
        {
          val = *((signed int *)((char *)conf + (signed long int)prop->offset)) != 0 ? "true" : "false";
          goto __CPROVER_DUMP_L11;
        }
        case _RK_C_INT:
        {
          snprintf(tmp, sizeof(char [22l]) /*22ul*/ , "%i", *((signed int *)((char *)conf + (signed long int)prop->offset)));
          val = tmp;
          goto __CPROVER_DUMP_L11;
        }
        case _RK_C_S2I:
        {
          j = 0;
          for( ; !((unsigned long int)j >= 10ul); j = j + 1)
            if(prop->s2i[(signed long int)j].val == *((signed int *)((char *)conf + (signed long int)prop->offset)))
            {
              val = prop->s2i[(signed long int)j].str;
              break;
            }

        }
        case _RK_C_S2F:

        default:
        {

        __CPROVER_DUMP_L11:
          ;
          if(!(val == ((const char *)NULL)))
          {
            tmp_post$2 = rd_kafka_anyconf_dump$$1$$cnt;
            rd_kafka_anyconf_dump$$1$$cnt = rd_kafka_anyconf_dump$$1$$cnt + 1;
            arr[(signed long int)tmp_post$2]=strdup(prop->name);
            tmp_post$3 = rd_kafka_anyconf_dump$$1$$cnt;
            rd_kafka_anyconf_dump$$1$$cnt = rd_kafka_anyconf_dump$$1$$cnt + 1;
            arr[(signed long int)tmp_post$3]=strdup(val);
          }

        }
      }

  }
  *cntp = (unsigned long int)rd_kafka_anyconf_dump$$1$$cnt;
  return (const char **)arr;
}

// rd_kafka_anyconf_set
// file rdkafka_defaultconf.c line 657
static signed int rd_kafka_anyconf_set(signed int scope, void *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size)
{
  char estmp[1l];
  struct rd_kafka_property *prop;
  if(errstr == ((char *)NULL))
  {
    errstr = estmp;
    errstr_size = (unsigned long int)0;
  }

  if(!(value == ((const char *)NULL)))
  {
    if(*value == 0)
      value = (const char *)(void *)0;

  }

  prop = rd_kafka_properties;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
    if(!((scope & (signed int)prop->scope) == 0))
    {
      signed int return_value_strcmp$1;
      return_value_strcmp$1=strcmp(prop->name, name);
      if(return_value_strcmp$1 == 0)
      {
        enum anonymous$24 return_value_rd_kafka_anyconf_set_prop$2;
        return_value_rd_kafka_anyconf_set_prop$2=rd_kafka_anyconf_set_prop(scope, conf, prop, value, errstr, errstr_size);
        return (signed int)return_value_rd_kafka_anyconf_set_prop$2;
      }

    }

  snprintf(errstr, errstr_size, "No such configuration property: \"%s\"", name);
  return RD_KAFKA_CONF_UNKNOWN;
}

// rd_kafka_anyconf_set_prop
// file rdkafka_defaultconf.c line 473
static enum anonymous$24 rd_kafka_anyconf_set_prop(signed int scope, void *conf, struct rd_kafka_property *prop, const char *value, char *errstr, unsigned long int errstr_size)
{
  signed int ival;
  signed int return_value_strcasecmp$6;
  _Bool tmp_if_expr$8;
  signed int return_value_strcasecmp$7;
  _Bool tmp_if_expr$10;
  signed int return_value_strcmp$9;
  signed int return_value_strcasecmp$1;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  _Bool tmp_if_expr$5;
  signed int return_value_strcmp$4;
  _Bool tmp_if_expr$11;
  signed int j;
  const char *next;
  _Bool tmp_if_expr$13;
  const unsigned short int **return_value___ctype_b_loc$14;
  const unsigned short int **return_value___ctype_b_loc$15;
  _Bool tmp_if_expr$17;
  unsigned long int return_value_strlen$16;
  _Bool tmp_if_expr$19;
  signed int return_value_strncmp$18;
  switch((signed int)prop->type)
  {
    case _RK_C_STR:
    {
      rd_kafka_anyconf_set_prop0(scope, conf, prop, value, 0);
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    case _RK_C_PTR:
    {
      snprintf(errstr, errstr_size, "Property \"%s\" must be set through dedicated .._set_..() function", prop->name);
      return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
    }
    case _RK_C_BOOL:
    {
      if(value == ((const char *)NULL))
      {
        snprintf(errstr, errstr_size, "Bool configuration property \"%s\" cannot be set to empty value", prop->name);
        return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
      }

      return_value_strcasecmp$6=strcasecmp(value, "true");
      if(return_value_strcasecmp$6 == 0)
        tmp_if_expr$8 = (_Bool)1;

      else
      {
        return_value_strcasecmp$7=strcasecmp(value, "t");
        tmp_if_expr$8 = !(return_value_strcasecmp$7 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$8)
        tmp_if_expr$10 = (_Bool)1;

      else
      {
        return_value_strcmp$9=strcmp(value, "1");
        tmp_if_expr$10 = !(return_value_strcmp$9 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$10)
        ival = 1;

      else
      {
        return_value_strcasecmp$1=strcasecmp(value, "false");
        if(return_value_strcasecmp$1 == 0)
          tmp_if_expr$3 = (_Bool)1;

        else
        {
          return_value_strcasecmp$2=strcasecmp(value, "f");
          tmp_if_expr$3 = !(return_value_strcasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$3)
          tmp_if_expr$5 = (_Bool)1;

        else
        {
          return_value_strcmp$4=strcmp(value, "0");
          tmp_if_expr$5 = !(return_value_strcmp$4 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$5)
          ival = 0;

        else
        {
          snprintf(errstr, errstr_size, "Expected bool value for \"%s\": true or false", prop->name);
          return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
        }
      }
      rd_kafka_anyconf_set_prop0(scope, conf, prop, (const char *)(void *)0, ival);
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    case _RK_C_INT:
    {
      if(value == ((const char *)NULL))
      {
        snprintf(errstr, errstr_size, "Integer configuration property \"%s\" cannot be set to empty value", prop->name);
        return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
      }

      ival=atoi(value);
      if(!(ival >= prop->vmin))
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = ival > prop->vmax ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$11)
      {
        snprintf(errstr, errstr_size, "Configuration property \"%s\" value %i is outside allowed range %i..%i\n", prop->name, ival, prop->vmin, prop->vmax);
        return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
      }

      rd_kafka_anyconf_set_prop0(scope, conf, prop, (const char *)(void *)0, ival);
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    case _RK_C_S2I:

    case _RK_C_S2F:
    {
      if(value == ((const char *)NULL))
      {
        snprintf(errstr, errstr_size, "Configuration property \"%s\" cannot be set to empty value", prop->name);
        return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
      }

      next = value;
      while(!(next == ((const char *)NULL)))
      {
        if(*next == 0)
          break;

        const char *s;
        const char *t;
        s = next;
        if((signed int)prop->type == _RK_C_S2F)
        {
          t=strchr(s, 44);
          tmp_if_expr$13 = t != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$13 = (_Bool)0;
        if(tmp_if_expr$13)
          next = t + (signed long int)1;

        else
        {
          unsigned long int return_value_strlen$12;
          return_value_strlen$12=strlen(s);
          t = s + (signed long int)return_value_strlen$12;
          next = (const char *)(void *)0;
        }
        for( ; !(s >= t); s = s + 1l)
        {
          return_value___ctype_b_loc$14=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$14)[(signed long int)(signed int)*s]) == 0)
            break;

        }
        for( ; !(s >= t); t = t - 1l)
        {
          return_value___ctype_b_loc$15=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$15)[(signed long int)(signed int)*t]) == 0)
            break;

        }
        if(!(s == t))
        {
          j = 0;
          for( ; !((unsigned long int)j >= 10ul); j = j + 1)
          {
            if(prop->s2i[(signed long int)j].str == ((const char *)NULL))
              tmp_if_expr$17 = (_Bool)1;

            else
            {
              return_value_strlen$16=strlen(prop->s2i[(signed long int)j].str);
              tmp_if_expr$17 = return_value_strlen$16 != (unsigned long int)(signed int)(t - s) ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$17)
              tmp_if_expr$19 = (_Bool)1;

            else
            {
              return_value_strncmp$18=strncmp(prop->s2i[(signed long int)j].str, s, (unsigned long int)(signed int)(t - s));
              tmp_if_expr$19 = return_value_strncmp$18 != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(!tmp_if_expr$19)
            {
              rd_kafka_anyconf_set_prop0(scope, conf, prop, (const char *)(void *)0, prop->s2i[(signed long int)j].val);
              if((signed int)prop->type == _RK_C_S2F)
                break;

              else
                return (enum anonymous$24)RD_KAFKA_CONF_OK;
            }

          }
          if((unsigned long int)j >= 10ul)
          {
            snprintf(errstr, errstr_size, "Invalid value for configuration property \"%s\"", prop->name);
            return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
          }

        }

      }
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    default:
    {
      do
        rd_kafka_crash("rdkafka_defaultconf.c", 620, "rd_kafka_anyconf_set_prop", (struct rd_kafka_s *)(void *)0, "assert: !*\"unknown conf type\"");
      while((_Bool)0);
      return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
    }
  }
}

// rd_kafka_anyconf_set_prop0
// file rdkafka_defaultconf.c line 426
static enum anonymous$24 rd_kafka_anyconf_set_prop0(signed int scope, void *conf, struct rd_kafka_property *prop, const char *istr, signed int ival)
{
  char **str;
  signed int *val;
  switch((signed int)prop->type)
  {
    case _RK_C_STR:
    {
      str = (char **)((char *)conf + (signed long int)prop->offset);
      if(!(*str == ((char *)NULL)))
        free((void *)*str);

      if(!(istr == ((const char *)NULL)))
        *str=strdup(istr);

      else
        *str = (char *)(void *)0;
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    case _RK_C_PTR:
    {
      *((const void **)((char *)conf + (signed long int)prop->offset)) = (const void *)istr;
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    case _RK_C_BOOL:

    case _RK_C_INT:

    case _RK_C_S2I:

    case _RK_C_S2F:
    {
      val = (signed int *)((char *)conf + (signed long int)prop->offset);
      if((signed int)prop->type == _RK_C_S2F)
        *val = *val | ival;

      else
        *val = ival;
      return (enum anonymous$24)RD_KAFKA_CONF_OK;
    }
    default:
    {
      do
        rd_kafka_crash("rdkafka_defaultconf.c", 465, "rd_kafka_anyconf_set_prop0", (struct rd_kafka_s *)(void *)0, "assert: !*\"unknown conf type\"");
      while((_Bool)0);
      return (enum anonymous$24)RD_KAFKA_CONF_INVALID;
    }
  }
}

// rd_kafka_avg_add
// file rdkafka_int.h line 286
static void rd_kafka_avg_add(struct rd_kafka_avg_s *ra, signed long int v)
{
  pthread_mutex_lock(&ra->ra_lock);
  if(!(ra->ra_v.maxv >= v))
    ra->ra_v.maxv = v;

  _Bool tmp_if_expr$1;
  if(ra->ra_v.minv == 0l)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = v < ra->ra_v.minv ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    ra->ra_v.minv = v;

  ra->ra_v.sum = ra->ra_v.sum + v;
  ra->ra_v.cnt = ra->ra_v.cnt + 1;
  pthread_mutex_unlock(&ra->ra_lock);
}

// rd_kafka_avg_destroy
// file rdkafka_int.h line 345
static void rd_kafka_avg_destroy(struct rd_kafka_avg_s *ra)
{
  pthread_mutex_destroy(&ra->ra_lock);
}

// rd_kafka_avg_init
// file rdkafka_int.h line 333
static void rd_kafka_avg_init(struct rd_kafka_avg_s *ra, signed int type)
{
  struct rd_kafka_avg_s dummy;
  memset((void *)ra, 0, sizeof(struct rd_kafka_avg_s) /*96ul*/ );
  pthread_mutex_init(&ra->ra_lock, (const union anonymous$12 *)(void *)0);
  ra->ra_type = (enum anonymous$71)type;
  rd_kafka_avg_rollover$link1(&dummy, ra);
}

// rd_kafka_avg_rollover
// file rdkafka_int.h line 301
static void rd_kafka_avg_rollover(struct rd_kafka_avg_s *dst, struct rd_kafka_avg_s *src)
{
  unsigned long int now;
  now=rd_clock$link1();
  pthread_mutex_lock(&src->ra_lock);
  dst->ra_type = src->ra_type;
  dst->ra_v = src->ra_v;
  memset((void *)&src->ra_v, 0, sizeof(struct anonymous$70) /*48ul*/ );
  src->ra_v.start = now;
  pthread_mutex_unlock(&src->ra_lock);
  if((signed int)dst->ra_type == RD_KAFKA_AVG_GAUGE)
  {
    if(!(dst->ra_v.cnt == 0))
      dst->ra_v.avg = dst->ra_v.sum / (signed long int)dst->ra_v.cnt;

    else
      dst->ra_v.avg = (signed long int)0;
  }

  else
  {
    unsigned long int elapsed = now - dst->ra_v.start;
    if(!(elapsed == 0ul))
      dst->ra_v.avg = (signed long int)(((unsigned long int)dst->ra_v.sum * 1000000llu) / elapsed);

    else
      dst->ra_v.avg = (signed long int)0;
    dst->ra_v.start = elapsed;
  }
}

// rd_kafka_avg_rollover$link1
// file rdkafka_int.h line 301
static void rd_kafka_avg_rollover$link1(struct rd_kafka_avg_s *dst$link1, struct rd_kafka_avg_s *src$link1)
{
  unsigned long int now$link1;
  now$link1=rd_clock$link2();
  pthread_mutex_lock(&src$link1->ra_lock);
  dst$link1->ra_type = src$link1->ra_type;
  dst$link1->ra_v = src$link1->ra_v;
  memset((void *)&src$link1->ra_v, 0, sizeof(struct anonymous$70) /*48ul*/ );
  src$link1->ra_v.start = now$link1;
  pthread_mutex_unlock(&src$link1->ra_lock);
  if((signed int)dst$link1->ra_type == RD_KAFKA_AVG_GAUGE)
  {
    if(!(dst$link1->ra_v.cnt == 0))
      dst$link1->ra_v.avg = dst$link1->ra_v.sum / (signed long int)dst$link1->ra_v.cnt;

    else
      dst$link1->ra_v.avg = (signed long int)0;
  }

  else
  {
    unsigned long int elapsed$link1 = now$link1 - dst$link1->ra_v.start;
    if(!(elapsed$link1 == 0ul))
      dst$link1->ra_v.avg = (signed long int)(((unsigned long int)dst$link1->ra_v.sum * 1000000llu) / elapsed$link1);

    else
      dst$link1->ra_v.avg = (signed long int)0;
    dst$link1->ra_v.start = elapsed$link1;
  }
}

// rd_kafka_broker_add
// file rdkafka_broker.c line 4205
static struct rd_kafka_broker_s * rd_kafka_broker_add(struct rd_kafka_s *rk, enum anonymous$21 source, const char *name, unsigned short int port, signed int nodeid)
{
  struct rd_kafka_broker_s *rkb;
  signed int err;
  union pthread_attr_t attr;
  struct anonymous$18 newset;
  struct anonymous$18 oldset;
  __atomic_add_fetch(&rk->rk_refcnt, 1, 5);
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_broker_s) /*1432ul*/ );
  rkb = (struct rd_kafka_broker_s *)return_value_calloc$1;
  snprintf(rkb->rkb_nodename, sizeof(char [128l]) /*128ul*/ , "%s:%hu", name, port);
  if(nodeid == -1)
    snprintf(rkb->rkb_name, sizeof(char [128l]) /*128ul*/ , "%s/bootstrap", (const void *)rkb->rkb_nodename);

  else
    snprintf(rkb->rkb_name, sizeof(char [128l]) /*128ul*/ , "%s/%d", (const void *)rkb->rkb_nodename, nodeid);
  rkb->rkb_source = source;
  rkb->rkb_rk = rk;
  rkb->rkb_nodeid = nodeid;
  rkb->rkb_s = -1;
  pthread_mutex_init(&rkb->rkb_lock, (const union anonymous$12 *)(void *)0);
  pthread_rwlock_init(&rkb->rkb_toppar_lock, (const union anonymous$17 *)(void *)0);
  do
  {
    (&rkb->rkb_toppars)->tqh_first = (struct rd_kafka_toppar_s *)(void *)0;
    (&rkb->rkb_toppars)->tqh_last = &(&rkb->rkb_toppars)->tqh_first;
  }
  while((_Bool)0);
  rd_kafka_bufq_init(&rkb->rkb_outbufs);
  rd_kafka_bufq_init(&rkb->rkb_waitresps);
  rd_kafka_bufq_init(&rkb->rkb_retrybufs);
  rd_kafka_q_init(&rkb->rkb_ops);
  rd_kafka_avg_init(&rkb->rkb_avg_rtt, RD_KAFKA_AVG_GAUGE);
  __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);
  unsigned long int return_value_rd_clock$2;
  signed int return_value_rd_jitter$3;
  if(rkb->rkb_rk->rk_conf.metadata_refresh_interval_ms >= 0)
  {
    return_value_rd_clock$2=rd_clock$link2();
    return_value_rd_jitter$3=rd_jitter(500, 1500);
    rkb->rkb_ts_metadata_poll = return_value_rd_clock$2 + (unsigned long int)(rkb->rkb_rk->rk_conf.metadata_refresh_interval_ms * 1000) + (unsigned long int)(return_value_rd_jitter$3 * 1000);
  }

  else
    rkb->rkb_ts_metadata_poll = 18446744073709551615UL;
  sigemptyset(&oldset);
  sigfillset(&newset);
  if(!(rkb->rkb_rk->rk_conf.term_sig == 0))
    sigdelset(&newset, rkb->rkb_rk->rk_conf.term_sig);

  pthread_sigmask(2, &newset, &oldset);
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 1);
  err=pthread_create(&rkb->rkb_thread, &attr, rd_kafka_broker_thread_main, (void *)rkb);
  if(!(err == 0))
  {
    char tmp[512l];
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(err);
    snprintf(tmp, sizeof(char [512l]) /*512ul*/ , "Unable to create broker thread: %s", return_value_strerror$4);
    rd_kafka_log0(rk, (const char *)(void *)0, 2, "THREAD", "%s", (const void *)tmp);
    rd_kafka_op_err(rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__CRIT_SYS_RESOURCE, "%s", (const void *)tmp);
    free((void *)rkb);
    rd_kafka_destroy(rk);
    pthread_sigmask(2, &oldset, (struct anonymous$18 *)(void *)0);
    pthread_attr_destroy(&attr);
    return (struct rd_kafka_broker_s *)(void *)0;
  }

  do
  {
    rkb->rkb_link.tqe_next = (struct rd_kafka_broker_s *)(void *)0;
    rkb->rkb_link.tqe_prev = (&rkb->rkb_rk->rk_brokers)->tqh_last;
    *(&rkb->rkb_rk->rk_brokers)->tqh_last = rkb;
    (&rkb->rkb_rk->rk_brokers)->tqh_last = &rkb->rkb_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkb->rkb_rk->rk_broker_cnt, 1, 5);
  do
    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "BROKER", "Added new broker with NodeId %d", rkb->rkb_nodeid);

  while((_Bool)0);
  pthread_sigmask(2, &oldset, (struct anonymous$18 *)(void *)0);
  pthread_attr_destroy(&attr);
  return rkb;
}

// rd_kafka_broker_any
// file rdkafka_broker.h line 39
struct rd_kafka_broker_s * rd_kafka_broker_any(struct rd_kafka_s *rk, signed int state)
{
  struct rd_kafka_broker_s *rkb;
  struct rd_kafka_broker_s *good = (struct rd_kafka_broker_s *)(void *)0;
  signed int rd_kafka_broker_any$$1$$cnt = 0;
  rkb = (&rk->rk_brokers)->tqh_first;
  _Bool tmp_if_expr$2;
  signed int return_value_rd_jitter$1;
  for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
  {
    pthread_mutex_lock(&rkb->rkb_lock);
    if((signed int)rkb->rkb_state == state)
    {
      if(!(rd_kafka_broker_any$$1$$cnt >= 1))
        tmp_if_expr$2 = (_Bool)1;

      else
      {
        return_value_rd_jitter$1=rd_jitter(0, rd_kafka_broker_any$$1$$cnt);
        tmp_if_expr$2 = return_value_rd_jitter$1 < 1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$2)
      {
        if(!(good == ((struct rd_kafka_broker_s *)NULL)))
          rd_kafka_broker_destroy(good);

        __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);
        good = rkb;
      }

      rd_kafka_broker_any$$1$$cnt = rd_kafka_broker_any$$1$$cnt + 1;
    }

    pthread_mutex_unlock(&rkb->rkb_lock);
  }
  return good;
}

// rd_kafka_broker_buf_enq
// file rdkafka_broker.c line 657
static void rd_kafka_broker_buf_enq(struct rd_kafka_broker_s *rkb, signed short int ApiKey, char *buf, signed int size, signed int flags, void (*reply_cb)(struct rd_kafka_broker_s *, signed int, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *), void *opaque)
{
  struct rd_kafka_buf_s *rkbuf;
  rkbuf=rd_kafka_buf_new(1, (unsigned long int)((flags & 0x1) != 0 ? 0 : size));
  unsigned long int return_value_rd_clock$1;
  return_value_rd_clock$1=rd_clock$link2();
  rkbuf->rkbuf_ts_timeout = return_value_rd_clock$1 + (unsigned long int)(rkb->rkb_rk->rk_conf.socket_timeout_ms * 1000);
  rkbuf->rkbuf_flags = rkbuf->rkbuf_flags | flags;
  if(size >= 1)
  {
    if((0x1 & flags) == 0)
    {
      memcpy((void *)rkbuf->rkbuf_buf, (const void *)buf, (unsigned long int)size);
      buf = rkbuf->rkbuf_buf;
    }

    else
    {
      rkbuf->rkbuf_buf = buf;
      rkbuf->rkbuf_size = (unsigned long int)size;
    }
    rd_kafka_buf_push(rkbuf, (void *)buf, (unsigned long int)size);
  }

  rd_kafka_broker_buf_enq1(rkb, ApiKey, rkbuf, (void (*)(struct rd_kafka_broker_s *, enum anonymous$9, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *))reply_cb, opaque);
}

// rd_kafka_broker_buf_enq0
// file rdkafka_broker.c line 582
static void rd_kafka_broker_buf_enq0(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, signed int at_head)
{
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 584, "rd_kafka_broker_buf_enq0", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  if(!((signed long int)at_head == 0l))
  {
    struct rd_kafka_buf_s *prev = (&rkb->rkb_outbufs.rkbq_bufs)->tqh_first;
    for( ; !(prev == ((struct rd_kafka_buf_s *)NULL)); prev = prev->rkbuf_link.tqe_next)
      if((0x2 & prev->rkbuf_flags) == 0)
        break;

    if(!(prev == ((struct rd_kafka_buf_s *)NULL)))
      do
      {
        rkbuf->rkbuf_link.tqe_next = prev->rkbuf_link.tqe_next;
        if(!(rkbuf->rkbuf_link.tqe_next == ((struct rd_kafka_buf_s *)NULL)))
          rkbuf->rkbuf_link.tqe_next->rkbuf_link.tqe_prev = &rkbuf->rkbuf_link.tqe_next;

        else
          (&rkb->rkb_outbufs.rkbq_bufs)->tqh_last = &rkbuf->rkbuf_link.tqe_next;
        prev->rkbuf_link.tqe_next = rkbuf;
        rkbuf->rkbuf_link.tqe_prev = &prev->rkbuf_link.tqe_next;
      }
      while((_Bool)0);

    else
      do
      {
        rkbuf->rkbuf_link.tqe_next = (&rkb->rkb_outbufs.rkbq_bufs)->tqh_first;
        if(!(rkbuf->rkbuf_link.tqe_next == ((struct rd_kafka_buf_s *)NULL)))
          (&rkb->rkb_outbufs.rkbq_bufs)->tqh_first->rkbuf_link.tqe_prev = &rkbuf->rkbuf_link.tqe_next;

        else
          (&rkb->rkb_outbufs.rkbq_bufs)->tqh_last = &rkbuf->rkbuf_link.tqe_next;
        (&rkb->rkb_outbufs.rkbq_bufs)->tqh_first = rkbuf;
        rkbuf->rkbuf_link.tqe_prev = &(&rkb->rkb_outbufs.rkbq_bufs)->tqh_first;
      }
      while((_Bool)0);
  }

  else
    do
    {
      rkbuf->rkbuf_link.tqe_next = (struct rd_kafka_buf_s *)(void *)0;
      rkbuf->rkbuf_link.tqe_prev = (&rkb->rkb_outbufs.rkbq_bufs)->tqh_last;
      *(&rkb->rkb_outbufs.rkbq_bufs)->tqh_last = rkbuf;
      (&rkb->rkb_outbufs.rkbq_bufs)->tqh_last = &rkbuf->rkbuf_link.tqe_next;
    }
    while((_Bool)0);
  __atomic_add_fetch(&rkb->rkb_outbufs.rkbq_cnt, 1, 5);
  __atomic_add_fetch(&rkb->rkb_outbufs.rkbq_msg_cnt, rkbuf->rkbuf_msgq.rkmq_msg_cnt, 5);
}

// rd_kafka_broker_buf_enq1
// file rdkafka_broker.c line 613
static void rd_kafka_broker_buf_enq1(struct rd_kafka_broker_s *rkb, signed short int ApiKey, struct rd_kafka_buf_s *rkbuf, void (*reply_cb)(struct rd_kafka_broker_s *, enum anonymous$9, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *), void *opaque)
{
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 624, "rd_kafka_broker_buf_enq1", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  rkb->rkb_corrid = rkb->rkb_corrid + 1u;
  rkbuf->rkbuf_corrid = (signed int)rkb->rkb_corrid;
  unsigned short int return_value_htons$2;
  return_value_htons$2=htons((unsigned short int)ApiKey);
  rkbuf->rkbuf_reqhdr.ApiKey = (signed short int)return_value_htons$2;
  rkbuf->rkbuf_reqhdr.ApiVersion = (signed short int)0;
  unsigned int return_value_htonl$3;
  return_value_htonl$3=htonl((unsigned int)rkbuf->rkbuf_corrid);
  rkbuf->rkbuf_reqhdr.CorrId = (signed int)return_value_htonl$3;
  (rkbuf->rkbuf_iov + (signed long int)0)->iov_base = (void *)&rkbuf->rkbuf_reqhdr;
  (rkbuf->rkbuf_iov + (signed long int)0)->iov_len = sizeof(struct rd_kafkap_reqhdr) /*12ul*/ ;
  (rkbuf->rkbuf_iov + (signed long int)1)->iov_base = (void *)rkb->rkb_rk->rk_clientid;
  unsigned short int return_value_ntohs$4;
  return_value_ntohs$4=ntohs((unsigned short int)rkb->rkb_rk->rk_clientid->len);
  signed int tmp_if_expr$6;
  unsigned short int return_value_ntohs$5;
  if((signed int)(signed short int)return_value_ntohs$4 == -1)
    tmp_if_expr$6 = 0;

  else
  {
    return_value_ntohs$5=ntohs((unsigned short int)rkb->rkb_rk->rk_clientid->len);
    tmp_if_expr$6 = (signed int)return_value_ntohs$5;
  }
  (rkbuf->rkbuf_iov + (signed long int)1)->iov_len = (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$6);
  rkbuf->rkbuf_cb = (void (*)(struct rd_kafka_broker_s *, signed int, struct rd_kafka_buf_s *, struct rd_kafka_buf_s *, void *))reply_cb;
  rkbuf->rkbuf_opaque = opaque;
  rkbuf->rkbuf_ts_enq=rd_clock$link2();
  rkbuf->rkbuf_of = (unsigned long int)0;
  rkbuf->rkbuf_len=rd_kafka_msghdr_size(&rkbuf->rkbuf_msg);
  unsigned int return_value_ntohl$7;
  return_value_ntohl$7=ntohl((unsigned int)(rkbuf->rkbuf_len - (unsigned long int)4));
  rkbuf->rkbuf_reqhdr.Size = (signed int)return_value_ntohl$7;
  rd_kafka_broker_buf_enq0(rkb, rkbuf, (rkbuf->rkbuf_flags & 0x2) != 0 ? 1 : 0);
}

// rd_kafka_broker_buf_retry
// file rdkafka_broker.c line 1759
static void rd_kafka_broker_buf_retry(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf)
{
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 1762, "rd_kafka_broker_buf_retry", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  rkb->rkb_c.tx_retries = rkb->rkb_c.tx_retries + 1ul;
  unsigned long int return_value_rd_clock$2;
  return_value_rd_clock$2=rd_clock$link2();
  rkbuf->rkbuf_ts_retry = return_value_rd_clock$2 + (unsigned long int)(rkb->rkb_rk->rk_conf.retry_backoff_ms * 1000);
  rkbuf->rkbuf_of = (unsigned long int)0;
  rd_kafka_bufq_enq(&rkb->rkb_retrybufs, rkbuf);
}

// rd_kafka_broker_connect
// file rdkafka_broker.c line 1554
static signed int rd_kafka_broker_connect(struct rd_kafka_broker_s *rkb)
{
  union anonymous$8 *sinx;
  signed int one = 1;
  signed int on = 1;
  do
    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "CONNECT", "broker in state %s connecting", rd_kafka_broker_state_names[(signed long int)rkb->rkb_state]);

  while((_Bool)0);
  signed int return_value_rd_kafka_broker_resolve$1;
  return_value_rd_kafka_broker_resolve$1=rd_kafka_broker_resolve(rkb);
  signed int *return_value___errno_location$5;
  char *return_value_strerror$6;
  unsigned long int tmp_if_expr$15;
  const char *return_value_rd_sockaddr2str$8;
  signed int *return_value___errno_location$9;
  char *return_value_strerror$10;
  const char *return_value_rd_sockaddr2str$11;
  signed int *return_value___errno_location$12;
  char *return_value_strerror$13;
  const char *return_value_rd_sockaddr2str$17;
  signed int *return_value___errno_location$18;
  char *return_value_strerror$19;
  signed int *return_value___errno_location$21;
  char *return_value_strerror$22;
  if(return_value_rd_kafka_broker_resolve$1 == -1)
    return -1;

  else
  {
    sinx=rd_sockaddr_list_next(rkb->rkb_rsal);
    do
      if(!(rkb->rkb_s == -1))
        rd_kafka_crash("rdkafka_broker.c", 1568, "rd_kafka_broker_connect", rkb->rkb_rk, "assert: rkb->rkb_s == -1");

    while((_Bool)0);
    rkb->rkb_s=rkb->rkb_rk->rk_conf.socket_cb((signed int)sinx->in.sin_family, 1, 6, rkb->rkb_rk->rk_conf.opaque);
    if(rkb->rkb_s == -1)
    {
      const char *return_value_rd_family2str$2;
      return_value_rd_family2str$2=rd_family2str((signed int)sinx->in.sin_family);
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__FAIL, "Failed to create %s socket: %s", return_value_rd_family2str$2, return_value_strerror$4);
      return -1;
    }

    if(!(rkb->rkb_rk->rk_conf.socket_keepalive == 0))
    {
      signed int return_value_setsockopt$7;
      return_value_setsockopt$7=setsockopt(rkb->rkb_s, 1, 9, (const void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$7 == -1)
      {
        if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
        {
          return_value___errno_location$5=__errno_location();
          return_value_strerror$6=strerror(*return_value___errno_location$5);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SOCKET", "Failed to set SO_KEEPALIVE: %s", return_value_strerror$6);
        }

      }

    }

    if((signed int)sinx->in.sin_family == 2)
      tmp_if_expr$15 = sizeof(struct sockaddr_in) /*16ul*/ ;

    else
      tmp_if_expr$15 = (signed int)sinx->in.sin_family == 10 ? sizeof(struct sockaddr_in6) /*28ul*/  : sizeof(union anonymous$8) /*28ul*/ ;
    signed int return_value_connect$16;
    return_value_connect$16=connect(rkb->rkb_s, (struct sockaddr *)sinx, (unsigned int)tmp_if_expr$15);
    if(return_value_connect$16 == -1)
    {
      if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_rd_sockaddr2str$8=rd_sockaddr2str((const void *)sinx, 0x1 | 0x4);
        return_value___errno_location$9=__errno_location();
        return_value_strerror$10=strerror(*return_value___errno_location$9);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "CONNECT", "couldn't connect to %s: %s", return_value_rd_sockaddr2str$8, return_value_strerror$10);
      }

      signed int *return_value___errno_location$14;
      return_value___errno_location$14=__errno_location();
      if(rkb->rkb_err.err == *return_value___errno_location$14)
        rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__FAIL, (const char *)(void *)0);

      else
      {
        return_value_rd_sockaddr2str$11=rd_sockaddr2str((const void *)sinx, 0x1 | 0x2);
        return_value___errno_location$12=__errno_location();
        return_value_strerror$13=strerror(*return_value___errno_location$12);
        rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT, "Failed to connect to broker at %s: %s", return_value_rd_sockaddr2str$11, return_value_strerror$13);
      }
      return -1;
    }

    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
    {
      return_value_rd_sockaddr2str$17=rd_sockaddr2str((const void *)sinx, 0x1 | 0x2);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "CONNECTED", "connected to %s", return_value_rd_sockaddr2str$17);
    }

    if(!(rkb->rkb_rk->rk_conf.socket_sndbuf_size == 0))
    {
      signed int return_value_setsockopt$20;
      return_value_setsockopt$20=setsockopt(rkb->rkb_s, 1, 7, (const void *)&rkb->rkb_rk->rk_conf.socket_sndbuf_size, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$20 == -1)
      {
        return_value___errno_location$18=__errno_location();
        return_value_strerror$19=strerror(*return_value___errno_location$18);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "SNDBUF", "Failed to set socket send buffer size to %i: %s", rkb->rkb_rk->rk_conf.socket_sndbuf_size, return_value_strerror$19);
      }

    }

    if(!(rkb->rkb_rk->rk_conf.socket_rcvbuf_size == 0))
    {
      signed int return_value_setsockopt$23;
      return_value_setsockopt$23=setsockopt(rkb->rkb_s, 1, 8, (const void *)&rkb->rkb_rk->rk_conf.socket_rcvbuf_size, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$23 == -1)
      {
        return_value___errno_location$21=__errno_location();
        return_value_strerror$22=strerror(*return_value___errno_location$21);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "RCVBUF", "Failed to set socket receive buffer size to %i: %s", rkb->rkb_rk->rk_conf.socket_rcvbuf_size, return_value_strerror$22);
      }

    }

    pthread_mutex_lock(&rkb->rkb_lock);
    rd_kafka_broker_set_state(rkb, RD_KAFKA_BROKER_STATE_UP);
    rkb->rkb_err.err = 0;
    pthread_mutex_unlock(&rkb->rkb_lock);
    rkb->rkb_pfd.fd = rkb->rkb_s;
    rkb->rkb_pfd.events = (signed short int)0x001;
    rd_kafka_broker_metadata_req(rkb, rkb->rkb_rk->rk_conf.metadata_refresh_sparse != 0 ? 0 : 1, (struct rd_kafka_topic_s *)(void *)0, (struct rd_kafka_q_s *)(void *)0, "connected");
    return 0;
  }
}

// rd_kafka_broker_consumer_serve
// file rdkafka_broker.c line 4073
static void rd_kafka_broker_consumer_serve(struct rd_kafka_broker_s *rkb)
{
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 4075, "rd_kafka_broker_consumer_serve", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  pthread_mutex_lock(&rkb->rkb_lock);
  unsigned long int tmp_if_expr$2;
  while(rkb->rkb_rk->rk_terminate == 0)
  {
    if(!((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_UP))
      break;

    signed int rd_kafka_broker_consumer_serve$$1$$2$$cnt = 0;
    unsigned long int now;
    signed int do_timeout_scan = 1;
    now=rd_clock$link2();
    if(rkb->rkb_fetching == 0)
    {
      if(!(rkb->rkb_ts_fetch_backoff >= now))
        rd_kafka_broker_consumer_serve$$1$$2$$cnt=rd_kafka_broker_fetch_toppars(rkb);

    }

    do
      if(!((signed long int)(0x20 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        if(!(rkb->rkb_ts_fetch_backoff == 0ul))
          tmp_if_expr$2 = (rkb->rkb_ts_fetch_backoff - now) / (unsigned long int)1000;

        else
          tmp_if_expr$2 = (unsigned long int)0;
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Fetch for %i toppars, fetching=%i, backoff=%ldms", rd_kafka_broker_consumer_serve$$1$$2$$cnt, rkb->rkb_fetching, tmp_if_expr$2);
      }

    while((_Bool)0);
    if((signed long int)rkb->rkb_retrybufs.rkbq_cnt >= 1l)
      rd_kafka_broker_retry_bufs_move(rkb);

    pthread_mutex_unlock(&rkb->rkb_lock);
    rd_kafka_broker_io_serve(rkb);
    if(!(do_timeout_scan == 0))
      rd_kafka_broker_waitresp_timeout_scan(rkb, now);

    pthread_mutex_lock(&rkb->rkb_lock);
  }
  pthread_mutex_unlock(&rkb->rkb_lock);
}

// rd_kafka_broker_destroy
// file rdkafka_broker.h line 45
void rd_kafka_broker_destroy(struct rd_kafka_broker_s *rkb)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rkb->rkb_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1 >= 1))
  {
    do
      if(!(rkb->rkb_outbufs.rkbq_bufs.tqh_first == ((struct rd_kafka_buf_s *)NULL)))
        rd_kafka_crash("rdkafka_broker.c", 4178, "rd_kafka_broker_destroy", rkb->rkb_rk, "assert: TAILQ_EMPTY(&rkb->rkb_outbufs.rkbq_bufs)");

    while((_Bool)0);
    do
      if(!(rkb->rkb_toppars.tqh_first == ((struct rd_kafka_toppar_s *)NULL)))
        rd_kafka_crash("rdkafka_broker.c", 4179, "rd_kafka_broker_destroy", rkb->rkb_rk, "assert: TAILQ_EMPTY(&rkb->rkb_toppars)");

    while((_Bool)0);
    if(!(rkb->rkb_recv_buf == ((struct rd_kafka_buf_s *)NULL)))
      rd_kafka_buf_destroy(rkb->rkb_recv_buf);

    if(!(rkb->rkb_rsal == ((struct rd_sockaddr_list_s *)NULL)))
      rd_sockaddr_list_destroy(rkb->rkb_rsal);

    rd_kafka_q_purge(&rkb->rkb_ops);
    rd_kafka_q_destroy(&rkb->rkb_ops);
    rd_kafka_avg_destroy(&rkb->rkb_avg_rtt);
    rd_kafka_destroy0(rkb->rkb_rk);
    pthread_rwlock_destroy(&rkb->rkb_toppar_lock);
    pthread_mutex_destroy(&rkb->rkb_lock);
    free((void *)rkb);
  }

}

// rd_kafka_broker_fail
// file rdkafka_broker.c line 346
static void rd_kafka_broker_fail(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, const char *fmt, ...)
{
  void **ap;
  signed int errno_save;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  errno_save = *return_value___errno_location$1;
  struct rd_kafka_toppar_s *rktp;
  struct rd_kafka_bufq_s tmpq;
  signed int statechange;
  do
  {
    unsigned long int return_value_pthread_self$2;
    return_value_pthread_self$2=pthread_self();
    if(!(return_value_pthread_self$2 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 355, "rd_kafka_broker_fail", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  const char *return_value_rd_kafka_err2str$3;
  char *return_value_strerror$4;
  do
    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
    {
      return_value_rd_kafka_err2str$3=rd_kafka_err2str(err);
      return_value_strerror$4=strerror(errno_save);
      rd_kafka_log0(rkb->rkb_rk, (const char *)(void *)0, 7, "BROKERFAIL", "%s: failed: err: %s: (errno: %s)", (const void *)rkb->rkb_name, return_value_rd_kafka_err2str$3, return_value_strerror$4);
    }

  while((_Bool)0);
  rkb->rkb_err.err = errno_save;
  if(!(rkb->rkb_s == -1))
  {
    close(rkb->rkb_s);
    rkb->rkb_s = -1;
    rkb->rkb_pfd.fd = rkb->rkb_s;
  }

  rkb->rkb_req_timeouts = 0;
  if(!(rkb->rkb_recv_buf == ((struct rd_kafka_buf_s *)NULL)))
  {
    rd_kafka_buf_destroy(rkb->rkb_recv_buf);
    rkb->rkb_recv_buf = (struct rd_kafka_buf_s *)(void *)0;
  }

  _Bool tmp_if_expr$5;
  if(!(fmt == ((const char *)NULL)))
  {
    if(errno_save == 4)
      tmp_if_expr$5 = rkb->rkb_rk->rk_terminate != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(!tmp_if_expr$5)
    {
      signed int of;
      of=snprintf(rkb->rkb_err.msg, sizeof(char [512l]) /*512ul*/ , "%s: ", (const void *)rkb->rkb_name);
      if((unsigned long int)of >= sizeof(char [512l]) /*512ul*/ )
        of = 0;

      ap = (void **)&fmt;
      vsnprintf(rkb->rkb_err.msg + (signed long int)of, sizeof(char [512l]) /*512ul*/  - (unsigned long int)of, fmt, ap);
      ap = ((void **)NULL);
      rd_kafka_log0(rkb->rkb_rk, (const char *)(void *)0, 3, "FAIL", "%s", (const void *)rkb->rkb_err.msg);
      rd_kafka_op_err(rkb->rkb_rk, err, "%s", (const void *)rkb->rkb_err.msg);
    }

  }

  pthread_mutex_lock(&rkb->rkb_lock);
  statechange = (signed int)((signed int)rkb->rkb_state != RD_KAFKA_BROKER_STATE_DOWN);
  rd_kafka_broker_set_state(rkb, RD_KAFKA_BROKER_STATE_DOWN);
  rd_kafka_bufq_init(&tmpq);
  rd_kafka_bufq_concat(&tmpq, &rkb->rkb_waitresps);
  rd_kafka_bufq_concat(&tmpq, &rkb->rkb_outbufs);
  pthread_mutex_unlock(&rkb->rkb_lock);
  rd_kafka_bufq_purge(rkb, &tmpq, err);
  pthread_rwlock_wrlock(&rkb->rkb_toppar_lock);
  unsigned short int return_value_ntohs$6;
  signed int tmp_if_expr$8;
  unsigned short int return_value_ntohs$7;
  do
  {
    rktp = (&rkb->rkb_toppars)->tqh_first;
    if(rktp == ((struct rd_kafka_toppar_s *)NULL))
      break;

    struct rd_kafka_topic_s *rkt = rktp->rktp_rkt;
    __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
    __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
    pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
    do
      if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$6=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$6 == -1)
          tmp_if_expr$8 = 0;

        else
        {
          return_value_ntohs$7=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          tmp_if_expr$8 = (signed int)return_value_ntohs$7;
        }
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "BRKTP", "Undelegating %.*s [%d]", tmp_if_expr$8, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
      }

    while((_Bool)0);
    pthread_rwlock_wrlock(&rktp->rktp_rkt->rkt_lock);
    rd_kafka_toppar_broker_delegate(rktp, (struct rd_kafka_broker_s *)(void *)0);
    pthread_rwlock_unlock(&rktp->rktp_rkt->rkt_lock);
    do
    {
      signed int return_value___atomic_sub_fetch$9;
      return_value___atomic_sub_fetch$9=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$9 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
    rd_kafka_topic_destroy0(rkt);
    pthread_rwlock_wrlock(&rkb->rkb_toppar_lock);
  }
  while((_Bool)1);
  pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
  if(!(fmt == ((const char *)NULL)) && !(statechange == 0) && !((signed int)err == RD_KAFKA_RESP_ERR__DESTROY))
    rd_kafka_topic_leader_query0(rkb->rkb_rk, (struct rd_kafka_topic_s *)(void *)0, 1);

}

// rd_kafka_broker_fetch_backoff
// file rdkafka_broker.c line 2968
static void rd_kafka_broker_fetch_backoff(struct rd_kafka_broker_s *rkb)
{
  unsigned long int return_value_rd_clock$1;
  return_value_rd_clock$1=rd_clock$link2();
  rkb->rkb_ts_fetch_backoff = return_value_rd_clock$1 + (unsigned long int)(rkb->rkb_rk->rk_conf.fetch_error_backoff_ms * 1000);
}

// rd_kafka_broker_fetch_reply
// file rdkafka_broker.c line 3165
static void rd_kafka_broker_fetch_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque)
{
  do
    if(!(rkb->rkb_fetching >= 1))
      rd_kafka_crash("rdkafka_broker.c", 3170, "rd_kafka_broker_fetch_reply", rkb->rkb_rk, "assert: rkb->rkb_fetching > 0");

  while((_Bool)0);
  rkb->rkb_fetching = 0;
  if(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR && !(reply == ((struct rd_kafka_buf_s *)NULL)))
    err=rd_kafka_fetch_reply_handle(rkb, reply);

  const char *return_value_rd_kafka_err2str$1;
  do
    if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
    {
      return_value_rd_kafka_err2str$1=rd_kafka_err2str(err);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Fetch reply: %s", return_value_rd_kafka_err2str$1);
    }

  while((_Bool)0);
  if(!((signed long int)err == 0l))
  {
    if(!((signed int)err == RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART) && !((signed int)err == RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE) && !((signed int)err == RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION) && !((signed int)err == RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE) && !((signed int)err == RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE))
    {
      if((signed int)err == RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT || (signed int)err == RD_KAFKA_RESP_ERR__TRANSPORT || (signed int)err == RD_KAFKA_RESP_ERR__MSG_TIMED_OUT)
        goto __CPROVER_DUMP_L6;

    }

    else
      rd_kafka_topic_leader_query0(rkb->rkb_rk, (struct rd_kafka_topic_s *)(void *)0, 1);

  __CPROVER_DUMP_L6:
    ;
    rd_kafka_broker_fetch_backoff(rkb);
  }

  rd_kafka_buf_destroy(request);
  if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(reply);

}

// rd_kafka_broker_fetch_toppars
// file rdkafka_broker.c line 3891
static signed int rd_kafka_broker_fetch_toppars(struct rd_kafka_broker_s *rkb)
{
  struct rd_kafkap_FetchRequest *fr;
  /* tag-#anon#lST[S32'PartitionArrayCnt'||S32'Partition'||S64'FetchOffset'||S32'MaxBytes'|] */
struct anonymous$22
{
  // PartitionArrayCnt
  signed int PartitionArrayCnt;
  // Partition
  signed int Partition;
  // FetchOffset
  signed long int FetchOffset;
  // MaxBytes
  signed int MaxBytes;
} __attribute__ ((__packed__));

/* */
  ;
  struct anonymous$22 *tp;
  struct rd_kafka_toppar_s *rktp;
  char *next;
  signed int rd_kafka_broker_fetch_toppars$$1$$cnt = 0;
  struct rd_kafka_buf_s *rkbuf;
  unsigned long int now;
  now=rd_clock$link2();
  signed int max_cnt;
  signed int consumer_lag_intvl = rkb->rkb_rk->rk_conf.stats_interval_ms * 1000;
  pthread_rwlock_rdlock(&rkb->rkb_toppar_lock);
  signed int tmp_if_expr$1;
  if(!(rkb->rkb_toppar_cnt >= 500))
    tmp_if_expr$1 = rkb->rkb_toppar_cnt;

  else
    tmp_if_expr$1 = 500;
  max_cnt = tmp_if_expr$1;
  rkbuf=rd_kafka_buf_new(1 + max_cnt * (1 + 1), sizeof(struct rd_kafkap_FetchRequest) /*16ul*/  + sizeof(struct anonymous$22) /*20ul*/  * (unsigned long int)rkb->rkb_toppar_cnt);
  fr = (struct rd_kafkap_FetchRequest *)(void *)rkbuf->rkbuf_buf;
  *fr = rkb->rkb_rk->rk_conf.FetchRequest;
  rd_kafka_buf_push(rkbuf, (void *)fr, sizeof(struct rd_kafkap_FetchRequest) /*16ul*/ );
  next = (char *)(void *)(fr + (signed long int)1);
  rktp = (&rkb->rkb_toppars)->tqh_first;
  signed int return_value_rd_kafka_q_len$2;
  unsigned long int return_value_rd_kafka_q_size$3;
  signed int return_value_rd_kafka_q_len$4;
  unsigned long int return_value_rd_kafka_q_size$6;
  signed int tmp_if_expr$10;
  unsigned short int return_value_ntohs$9;
  unsigned short int return_value_ntohs$15;
  signed int tmp_if_expr$17;
  unsigned short int return_value_ntohs$16;
  for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rkblink.tqe_next)
  {
    if(!(consumer_lag_intvl == 0))
    {
      if(!(rktp->rktp_ts_offset_lag + (unsigned long int)consumer_lag_intvl >= now))
      {
        rd_kafka_toppar_offset_request0(rkb, rktp, (signed long int)-2, (void *)rd_kafka_toppar_lo_offset_handle, (void *)0);
        rd_kafka_toppar_offset_request0(rkb, rktp, (signed long int)-1, (void *)rd_kafka_toppar_hi_offset_handle, (void *)0);
        rktp->rktp_ts_offset_lag = now;
      }

    }

    if(!((signed int)rktp->rktp_fetch_state == RD_KAFKA_TOPPAR_FETCH_ACTIVE))
    {
      if((signed int)rktp->rktp_fetch_state == RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY)
      {
        if(now >= rktp->rktp_ts_offset_req_next)
          rd_kafka_toppar_offset_request(rkb, rktp);

      }

      do
        if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Skipping topic %s [%d] in state %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rd_kafka_fetch_states[(signed long int)rktp->rktp_fetch_state]);

      while((_Bool)0);
    }

    else
    {
      do
        if(!((signed long int)(0x20 & rkb->rkb_rk->rk_conf.debug) == 0l))
        {
          return_value_rd_kafka_q_len$2=rd_kafka_q_len$link1(&rktp->rktp_fetchq);
          return_value_rd_kafka_q_size$3=rd_kafka_q_size$link1(&rktp->rktp_fetchq);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Topic %s [%d] fetch queue %i (%lukb) >= queued.min.messages %i (queued.max.messages.kbytes %i)?", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, return_value_rd_kafka_q_len$2, return_value_rd_kafka_q_size$3 / (unsigned long int)1024, rkb->rkb_rk->rk_conf.queued_min_msgs, rkb->rkb_rk->rk_conf.queued_max_msg_kbytes);
        }

      while((_Bool)0);
      signed int return_value_rd_kafka_q_len$5;
      return_value_rd_kafka_q_len$5=rd_kafka_q_len$link1(&rktp->rktp_fetchq);
      if(return_value_rd_kafka_q_len$5 >= rkb->rkb_rk->rk_conf.queued_min_msgs)
        do
          if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
          {
            return_value_rd_kafka_q_len$4=rd_kafka_q_len$link1(&rktp->rktp_fetchq);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Skipping topic %s [%d]: threshold queued.min.messages=%i exceeded: %i messages in queue", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rkb->rkb_rk->rk_conf.queued_min_msgs, return_value_rd_kafka_q_len$4);
          }

        while((_Bool)0);

      else
      {
        unsigned long int return_value_rd_kafka_q_size$7;
        return_value_rd_kafka_q_size$7=rd_kafka_q_size$link1(&rktp->rktp_fetchq);
        if(return_value_rd_kafka_q_size$7 >= (unsigned long int)rkb->rkb_rk->rk_conf.queued_max_msg_bytes)
          do
            if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
            {
              return_value_rd_kafka_q_size$6=rd_kafka_q_size$link1(&rktp->rktp_fetchq);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Skipping topic %s [%d]: threshold queued.max.messages.kbytes=%i exceeded: %ld bytes in queue", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rkb->rkb_rk->rk_conf.queued_max_msg_kbytes, return_value_rd_kafka_q_size$6);
            }

          while((_Bool)0);

        else
        {
          if(rd_kafka_broker_fetch_toppars$$1$$cnt >= max_cnt)
          {
            do
              if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "FIXME: Fetching too many partitions (>%i), see issue #110", max_cnt);

            while((_Bool)0);
            break;
          }

          unsigned short int return_value_ntohs$8;
          return_value_ntohs$8=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$8 == -1)
            tmp_if_expr$10 = 0;

          else
          {
            return_value_ntohs$9=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$10 = (signed int)return_value_ntohs$9;
          }
          rd_kafka_buf_push(rkbuf, (void *)rktp->rktp_rkt->rkt_topic, (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$10));
          tp = (struct anonymous$22 *)(void *)next;
          unsigned int return_value_htonl$11;
          return_value_htonl$11=htonl((unsigned int)1);
          tp->PartitionArrayCnt = (signed int)return_value_htonl$11;
          unsigned int return_value_htonl$12;
          return_value_htonl$12=htonl((unsigned int)rktp->rktp_partition);
          tp->Partition = (signed int)return_value_htonl$12;
          unsigned long int return_value___bswap_64$13;
          return_value___bswap_64$13=__bswap_64((unsigned long int)rktp->rktp_next_offset);
          tp->FetchOffset = (signed long int)return_value___bswap_64$13;
          unsigned int return_value_htonl$14;
          return_value_htonl$14=htonl((unsigned int)rkb->rkb_rk->rk_conf.fetch_msg_max_bytes);
          tp->MaxBytes = (signed int)return_value_htonl$14;
          rd_kafka_buf_push(rkbuf, (void *)tp, sizeof(struct anonymous$22) /*20ul*/ );
          next = (char *)(void *)(tp + (signed long int)1);
          do
            if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
            {
              return_value_ntohs$15=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
              if((signed int)(signed short int)return_value_ntohs$15 == -1)
                tmp_if_expr$17 = 0;

              else
              {
                return_value_ntohs$16=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
                tmp_if_expr$17 = (signed int)return_value_ntohs$16;
              }
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Fetch topic %.*s [%d] at offset %ld", tmp_if_expr$17, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_next_offset);
            }

          while((_Bool)0);
          rd_kafka_broker_fetch_toppars$$1$$cnt = rd_kafka_broker_fetch_toppars$$1$$cnt + 1;
        }
      }
    }
  }
  pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
  do
    if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "CONSUME", "consume from %i toppar(s)", rd_kafka_broker_fetch_toppars$$1$$cnt);

  while((_Bool)0);
  if(rd_kafka_broker_fetch_toppars$$1$$cnt == 0)
  {
    rd_kafka_buf_destroy(rkbuf);
    return rd_kafka_broker_fetch_toppars$$1$$cnt;
  }

  else
  {
    unsigned int return_value_htonl$18;
    return_value_htonl$18=htonl((unsigned int)rd_kafka_broker_fetch_toppars$$1$$cnt);
    fr->TopicArrayCnt = (signed int)return_value_htonl$18;
    rkbuf->rkbuf_ts_timeout = now + (unsigned long int)((rkb->rkb_rk->rk_conf.socket_timeout_ms + rkb->rkb_rk->rk_conf.fetch_wait_max_ms) * 1000);
    rkb->rkb_fetching = 1;
    rd_kafka_broker_buf_enq1(rkb, (signed short int)1, rkbuf, rd_kafka_broker_fetch_reply, (void *)0);
    return rd_kafka_broker_fetch_toppars$$1$$cnt;
  }
}

// rd_kafka_broker_find
// file rdkafka_broker.c line 4334
static struct rd_kafka_broker_s * rd_kafka_broker_find(struct rd_kafka_s *rk, const char *name, unsigned short int port)
{
  struct rd_kafka_broker_s *rkb;
  char fullname[(signed long int)sizeof(char [128l]) /*128l*/ ];
  snprintf(fullname, sizeof(char [128l]) /*128ul*/ , "%s:%hu", name, port);
  rkb = (&rk->rk_brokers)->tqh_first;
  signed int return_value_strcmp$1;
  for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
  {
    pthread_mutex_lock(&rkb->rkb_lock);
    if(rk->rk_terminate == 0)
    {
      return_value_strcmp$1=strcmp(rkb->rkb_name, fullname);
      if(return_value_strcmp$1 == 0)
      {
        __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);
        pthread_mutex_unlock(&rkb->rkb_lock);
        return rkb;
      }

    }

    pthread_mutex_unlock(&rkb->rkb_lock);
  }
  return (struct rd_kafka_broker_s *)(void *)0;
}

// rd_kafka_broker_find_by_nodeid
// file rdkafka_broker.c line 4311
struct rd_kafka_broker_s * rd_kafka_broker_find_by_nodeid(struct rd_kafka_s *rk, signed int nodeid)
{
  struct rd_kafka_broker_s *rkb = (&rk->rk_brokers)->tqh_first;
  for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
  {
    pthread_mutex_lock(&rkb->rkb_lock);
    if(rk->rk_terminate == 0)
    {
      if(rkb->rkb_nodeid == nodeid)
      {
        __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);
        pthread_mutex_unlock(&rkb->rkb_lock);
        return rkb;
      }

    }

    pthread_mutex_unlock(&rkb->rkb_lock);
  }
  return (struct rd_kafka_broker_s *)(void *)0;
}

// rd_kafka_broker_io_serve
// file rdkafka_broker.c line 2427
static void rd_kafka_broker_io_serve(struct rd_kafka_broker_s *rkb)
{
  struct rd_kafka_op_s *rko;
  unsigned long int now;
  now=rd_clock$link2();
  signed int return_value_rd_kafka_q_len$1;
  return_value_rd_kafka_q_len$1=rd_kafka_q_len$link1(&rkb->rkb_ops);
  if(return_value_rd_kafka_q_len$1 >= 1)
    do
    {
      rko=rd_kafka_q_pop(&rkb->rkb_ops, 0);
      if(rko == ((struct rd_kafka_op_s *)NULL))
        break;

      rd_kafka_broker_op_serve(rkb, rko);
    }
    while((_Bool)1);

  _Bool tmp_if_expr$2;
  if(rkb->rkb_rk->rk_conf.metadata_refresh_sparse == 0)
    tmp_if_expr$2 = now >= rkb->rkb_ts_metadata_poll ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    rd_kafka_broker_metadata_req(rkb, 1, (struct rd_kafka_topic_s *)(void *)0, (struct rd_kafka_q_s *)(void *)0, "periodic refresh");

  if(rkb->rkb_outbufs.rkbq_cnt >= 1)
    rkb->rkb_pfd.events = rkb->rkb_pfd.events | (signed short int)0x004;

  else
    rkb->rkb_pfd.events = rkb->rkb_pfd.events & (signed short int)~0x004;
  signed int return_value_poll$3;
  return_value_poll$3=poll(&rkb->rkb_pfd, (unsigned long int)1, rkb->rkb_rk->rk_conf.buffering_max_ms);
  signed int return_value_rd_kafka_recv$4;
  signed int return_value_rd_kafka_send$5;
  if(return_value_poll$3 >= 1)
  {
    if(!((0x001 & (signed int)rkb->rkb_pfd.revents) == 0))
      do
      {
        return_value_rd_kafka_recv$4=rd_kafka_recv(rkb);
        if(!(return_value_rd_kafka_recv$4 >= 1))
          break;

      }
      while((_Bool)1);

    if(!((0x010 & (signed int)rkb->rkb_pfd.revents) == 0))
      rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT, "Connection closed");

    else
      if(!((0x004 & (signed int)rkb->rkb_pfd.revents) == 0))
        do
        {
          return_value_rd_kafka_send$5=rd_kafka_send(rkb);
          if(!(return_value_rd_kafka_send$5 >= 1))
            break;

        }
        while((_Bool)1);

  }

}

// rd_kafka_broker_metadata_reply
// file rdkafka_broker.c line 1003
static void rd_kafka_broker_metadata_reply(struct rd_kafka_broker_s *rkb, signed int err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque)
{
  struct rd_kafka_op_s *rko = (struct rd_kafka_op_s *)opaque;
  struct rd_kafka_metadata *md = (struct rd_kafka_metadata *)(void *)0;
  struct rd_kafka_q_s *replyq;
  do
    if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "===== Received metadata from %s =====", (const void *)rkb->rkb_name);

  while((_Bool)0);
  if(!(rkb->rkb_rk->rk_terminate == 0))
    err = RD_KAFKA_RESP_ERR__DESTROY;

  const char *return_value_rd_kafka_err2str$1;
  if(!((signed long int)err == 0l))
  {
    if(!(err == RD_KAFKA_RESP_ERR__DESTROY))
    {
      return_value_rd_kafka_err2str$1=rd_kafka_err2str((enum anonymous$9)err);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "METADATA", "Metadata request failed: %s", return_value_rd_kafka_err2str$1);
    }

  }

  else
    md=rd_kafka_metadata_handle(rkb, rko, reply->rkbuf_buf2, reply->rkbuf_len);
  if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
  {
    pthread_rwlock_wrlock(&rko->rko_rkmessage.rkt->rkt_lock);
    rko->rko_rkmessage.rkt->rkt_flags = rko->rko_rkmessage.rkt->rkt_flags & ~0x1;
    pthread_rwlock_unlock(&rko->rko_rkmessage.rkt->rkt_lock);
  }

  replyq = rko->rko_replyq;
  if(!(replyq == ((struct rd_kafka_q_s *)NULL)))
  {
    rko->rko_rkmessage.err = (enum anonymous$9)err;
    rko->rko_replyq = (struct rd_kafka_q_s *)(void *)0;
    rko->rko_metadata = md;
    rd_kafka_q_enq$link1(replyq, rko);
    rd_kafka_q_destroy(replyq);
  }

  else
  {
    if(!(md == ((struct rd_kafka_metadata *)NULL)))
      free((void *)md);

    rd_kafka_op_destroy(rko);
  }
  rd_kafka_buf_destroy(request);
  if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(reply);

}

// rd_kafka_broker_metadata_req
// file rdkafka_broker.h line 51
void rd_kafka_broker_metadata_req(struct rd_kafka_broker_s *rkb, signed int all_topics, struct rd_kafka_topic_s *only_rkt, struct rd_kafka_q_s *replyq, const char *reason)
{
  struct rd_kafka_op_s *rko;
  rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_METADATA_REQ);
  rko->rko_intarg = all_topics;
  rko->rko_rkmessage.rkt = only_rkt;
  if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
    __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);

  rko->rko_replyq = replyq;
  {
    char *return_value_strdup$1;
    return_value_strdup$1=strdup(reason);
    rko->rko_rkmessage.payload = (void *)return_value_strdup$1;
    rko->rko_flags = rko->rko_flags | 0x1;
  }
  rd_kafka_broker_metadata_req_op(rkb, rko);
}

// rd_kafka_broker_metadata_req_op
// file rdkafka_broker.c line 1061
static void rd_kafka_broker_metadata_req_op(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko)
{
  char *buf;
  unsigned long int of = (unsigned long int)0;
  signed int arrsize = 0;
  unsigned long int tnamelen = (unsigned long int)0;
  struct rd_kafka_topic_s *rkt;
  char *tmp_if_expr$1;
  char *tmp_if_expr$2;
  do
    if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
    {
      if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
        tmp_if_expr$1 = rko->rko_rkmessage.rkt->rkt_topic->str;

      else
        tmp_if_expr$1 = rko->rko_intarg != 0 ? "all topics" : "locally known topics";
      if(!(rko->rko_rkmessage.payload == NULL))
        tmp_if_expr$2 = (char *)rko->rko_rkmessage.payload;

      else
        tmp_if_expr$2 = "";
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "Request metadata for %s: %s", tmp_if_expr$1, tmp_if_expr$2);
    }

  while((_Bool)0);
  unsigned long int return_value_pthread_self$3;
  return_value_pthread_self$3=pthread_self();
  _Bool tmp_if_expr$9;
  signed int tmp_if_expr$8;
  unsigned short int return_value_ntohs$7;
  _Bool tmp_if_expr$15;
  signed int tmp_if_expr$14;
  unsigned short int return_value_ntohs$13;
  if(!(return_value_pthread_self$3 == rkb->rkb_thread))
  {
    do
      if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "Request metadata: scheduled: not in broker thread");

    while((_Bool)0);
    rd_kafka_q_enq$link1(&rkb->rkb_ops, rko);
  }

  else
  {
    do
      if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "Requesting metadata for %stopics", rko->rko_intarg != 0 ? "all " : "known ");

    while((_Bool)0);
    if(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL))
    {
      if(rkb->rkb_rk->rk_conf.metadata_refresh_interval_ms >= 0)
      {
        if(rkb->rkb_metadata_fast_poll_cnt >= 1)
        {
          rkb->rkb_metadata_fast_poll_cnt = rkb->rkb_metadata_fast_poll_cnt - 1;
          unsigned long int return_value_rd_clock$4;
          return_value_rd_clock$4=rd_clock$link2();
          rkb->rkb_ts_metadata_poll = return_value_rd_clock$4 + (unsigned long int)(rkb->rkb_rk->rk_conf.metadata_refresh_fast_interval_ms * 1000);
        }

        else
        {
          unsigned long int return_value_rd_clock$5;
          return_value_rd_clock$5=rd_clock$link2();
          rkb->rkb_ts_metadata_poll = return_value_rd_clock$5 + (unsigned long int)(rkb->rkb_rk->rk_conf.metadata_refresh_interval_ms * 1000);
        }
      }

    }

    if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = !(rko->rko_intarg != 0) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
    {
      pthread_rwlock_rdlock(&rkb->rkb_rk->rk_lock);
      rkt = (&rkb->rkb_rk->rk_topics)->tqh_first;
      for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
      {
        if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
        {
          if(!(rko->rko_rkmessage.rkt == rkt))
            goto __CPROVER_DUMP_L19;

        }

        arrsize = arrsize + 1;
        unsigned short int return_value_ntohs$6;
        return_value_ntohs$6=ntohs((unsigned short int)rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$6 == -1)
          tmp_if_expr$8 = 0;

        else
        {
          return_value_ntohs$7=ntohs((unsigned short int)rkt->rkt_topic->len);
          tmp_if_expr$8 = (signed int)return_value_ntohs$7;
        }
        tnamelen = tnamelen + (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$8);

      __CPROVER_DUMP_L19:
        ;
      }
    }

    void *return_value_malloc$10;
    return_value_malloc$10=malloc(sizeof(signed int) /*4ul*/  + tnamelen);
    buf = (char *)return_value_malloc$10;
    unsigned int return_value_htonl$11;
    return_value_htonl$11=htonl((unsigned int)arrsize);
    arrsize = (signed int)return_value_htonl$11;
    memcpy((void *)(buf + (signed long int)of), (const void *)&arrsize, (unsigned long int)4);
    of = of + (unsigned long int)4;
    if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
      tmp_if_expr$15 = (_Bool)1;

    else
      tmp_if_expr$15 = !(rko->rko_intarg != 0) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$15)
    {
      rkt = (&rkb->rkb_rk->rk_topics)->tqh_first;
      for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
      {
        signed int tlen;
        if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
        {
          if(rko->rko_rkmessage.rkt == rkt)
            goto __CPROVER_DUMP_L24;

        }

        else
        {

        __CPROVER_DUMP_L24:
          ;
          unsigned short int return_value_ntohs$12;
          return_value_ntohs$12=ntohs((unsigned short int)rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$12 == -1)
            tmp_if_expr$14 = 0;

          else
          {
            return_value_ntohs$13=ntohs((unsigned short int)rkt->rkt_topic->len);
            tmp_if_expr$14 = (signed int)return_value_ntohs$13;
          }
          tlen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$14);
          memcpy((void *)(buf + (signed long int)of), (const void *)rkt->rkt_topic, (unsigned long int)tlen);
          of = of + (unsigned long int)tlen;
        }
      }
      pthread_rwlock_unlock(&rkb->rkb_rk->rk_lock);
    }

    rd_kafka_broker_buf_enq(rkb, (signed short int)3, buf, (signed int)of, 0x1 | 0x2, rd_kafka_broker_metadata_reply, (void *)rko);
  }
}

// rd_kafka_broker_op_serve
// file rdkafka_broker.c line 2400
static void rd_kafka_broker_op_serve(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko)
{
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 2403, "rd_kafka_broker_op_serve", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  switch((signed int)rko->rko_type)
  {
    case RD_KAFKA_OP_METADATA_REQ:
    {
      rd_kafka_broker_metadata_req_op(rkb, rko);
      rko = (struct rd_kafka_op_s *)(void *)0;
      break;
    }
    case RD_KAFKA_OP_OFFSET_COMMIT:
    {
      rd_kafka_toppar_offsetcommit_request(rkb, rko->rko_rktp, rko->rko_rkmessage.offset);
      break;
    }
    default:
      do
        rd_kafka_crash("rdkafka_broker.c", 2419, "rd_kafka_broker_op_serve", rkb->rkb_rk, "assert: !*\"unhandled op type\"");
      while((_Bool)0);
  }
  if(!(rko == ((struct rd_kafka_op_s *)NULL)))
    rd_kafka_op_destroy(rko);

}

// rd_kafka_broker_produce_toppar
// file rdkafka_broker.c line 1963
static signed int rd_kafka_broker_produce_toppar(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp)
{
  signed int rd_kafka_broker_produce_toppar$$1$$cnt;
  struct rd_kafka_msg_s *rkm;
  signed int rd_kafka_broker_produce_toppar$$1$$msgcnt;
  struct rd_kafka_buf_s *rkbuf;
  struct rd_kafka_topic_s *rkt = rktp->rktp_rkt;
  /* tag-#anon#lST[S32'PartitionArrayCnt'||S32'Partition'||S32'MessageSetSize'|] */
struct anonymous$6
{
  // PartitionArrayCnt
  signed int PartitionArrayCnt;
  // Partition
  signed int Partition;
  // MessageSetSize
  signed int MessageSetSize;
} __attribute__ ((__packed__));

/* */
  ;
  /* tag-#anon#lST[S16'RequiredAcks'||S32'Timeout'||S32'TopicArrayCnt'|] */
struct anonymous$4
{
  // RequiredAcks
  signed short int RequiredAcks;
  // Timeout
  signed int Timeout;
  // TopicArrayCnt
  signed int TopicArrayCnt;
} __attribute__ ((__packed__));

/* */
  ;
  /* tag-#anon#lST[lSYM#tag-#anon#lST[S16'RequiredAcks'||S32'Timeout'||S32'TopicArrayCnt'|]#'part1'||lSYM#tag-#anon#lST[S32'PartitionArrayCnt'||S32'Partition'||S32'MessageSetSize'|]#'part2'|] */
struct anonymous$25
{
  // part1
  struct anonymous$4 part1;
  // part2
  struct anonymous$6 part2;
};

/* */
  ;
  struct anonymous$25 *prodhdr;
  /* tag-#anon#lST[S32'Value_len'|] */
struct anonymous$7
{
  // Value_len
  signed int Value_len;
} __attribute__ ((__packed__));

/* */
  ;
  /* tag-#anon#lST[S64'Offset'||S32'MessageSize'||S32'Crc'||S8'MagicByte'||S8'Attributes'|] */
struct anonymous$2
{
  // Offset
  signed long int Offset;
  // MessageSize
  signed int MessageSize;
  // Crc
  signed int Crc;
  // MagicByte
  signed char MagicByte;
  // Attributes
  signed char Attributes;
} __attribute__ ((__packed__));

/* */
  ;
  /* tag-#anon#lST[lSYM#tag-#anon#lST[S64'Offset'||S32'MessageSize'||S32'Crc'||S8'MagicByte'||S8'Attributes'|]#'part3'||lSYM#tag-#anon#lST[S32'Value_len'|]#'part4'|] */
struct anonymous$26
{
  // part3
  struct anonymous$2 part3;
  // part4
  struct anonymous$7 part4;
};

/* */
  ;
  struct anonymous$26 *msghdr;
  signed int iovcnt;
  signed int iov_firstmsg;
  if(rktp->rktp_xmit_msgq.rkmq_msg_cnt >= 1)
    do
      if(rktp->rktp_xmit_msgq.rkmq_msgs.tqh_first == ((struct rd_kafka_msg_s *)NULL))
        rd_kafka_crash("rdkafka_broker.c", 2015, "rd_kafka_broker_produce_toppar", rkb->rkb_rk, "assert: TAILQ_FIRST(&rktp->rktp_xmit_msgq.rkmq_msgs)");

    while((_Bool)0);

  signed int tmp_if_expr$1;
  if(!(rktp->rktp_xmit_msgq.rkmq_msg_cnt >= rkb->rkb_rk->rk_conf.batch_num_messages))
    tmp_if_expr$1 = rktp->rktp_xmit_msgq.rkmq_msg_cnt;

  else
    tmp_if_expr$1 = rkb->rkb_rk->rk_conf.batch_num_messages;
  rd_kafka_broker_produce_toppar$$1$$msgcnt = tmp_if_expr$1;
  do
    if(!(rd_kafka_broker_produce_toppar$$1$$msgcnt >= 1))
      rd_kafka_crash("rdkafka_broker.c", 2018, "rd_kafka_broker_produce_toppar", rkb->rkb_rk, "assert: msgcnt > 0");

  while((_Bool)0);
  iovcnt = 3 + 4 * rd_kafka_broker_produce_toppar$$1$$msgcnt;
  if(iovcnt >= 1023)
  {
    iovcnt = 1024 - 2;
    rd_kafka_broker_produce_toppar$$1$$msgcnt = iovcnt / 4 - 3;
  }

  unsigned short int return_value_ntohs$2;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  rkbuf=rd_kafka_buf_new(iovcnt, sizeof(struct anonymous$25) /*22ul*/  + sizeof(struct anonymous$26) /*22ul*/  * (unsigned long int)rd_kafka_broker_produce_toppar$$1$$msgcnt);
  prodhdr = (struct anonymous$25 *)(void *)rkbuf->rkbuf_buf;
  msghdr = (struct anonymous$26 *)(void *)(prodhdr + (signed long int)1);
  unsigned short int return_value_htons$5;
  return_value_htons$5=htons((unsigned short int)rkt->rkt_conf.required_acks);
  prodhdr->part1.RequiredAcks = (signed short int)return_value_htons$5;
  unsigned int return_value_htonl$6;
  return_value_htonl$6=htonl((unsigned int)rkt->rkt_conf.request_timeout_ms);
  prodhdr->part1.Timeout = (signed int)return_value_htonl$6;
  unsigned int return_value_htonl$7;
  return_value_htonl$7=htonl((unsigned int)1);
  prodhdr->part1.TopicArrayCnt = (signed int)return_value_htonl$7;
  rd_kafka_buf_push(rkbuf, (void *)&prodhdr->part1, sizeof(struct anonymous$4) /*10ul*/ );
  unsigned short int return_value_ntohs$8;
  return_value_ntohs$8=ntohs((unsigned short int)rkt->rkt_topic->len);
  signed int tmp_if_expr$10;
  unsigned short int return_value_ntohs$9;
  if((signed int)(signed short int)return_value_ntohs$8 == -1)
    tmp_if_expr$10 = 0;

  else
  {
    return_value_ntohs$9=ntohs((unsigned short int)rkt->rkt_topic->len);
    tmp_if_expr$10 = (signed int)return_value_ntohs$9;
  }
  rd_kafka_buf_push(rkbuf, (void *)rkt->rkt_topic, (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$10));
  unsigned int return_value_htonl$11;
  return_value_htonl$11=htonl((unsigned int)1);
  prodhdr->part2.PartitionArrayCnt = (signed int)return_value_htonl$11;
  unsigned int return_value_htonl$12;
  return_value_htonl$12=htonl((unsigned int)rktp->rktp_partition);
  prodhdr->part2.Partition = (signed int)return_value_htonl$12;
  prodhdr->part2.MessageSetSize = 0;
  rd_kafka_buf_push(rkbuf, (void *)&prodhdr->part2, sizeof(struct anonymous$6) /*12ul*/ );
  iov_firstmsg = (signed int)rkbuf->rkbuf_msg.msg_iovlen;
  unsigned int tmp_if_expr$15;
  unsigned int return_value_ntohl$14;
  unsigned int tmp_if_expr$21;
  unsigned int return_value_ntohl$20;
  unsigned int tmp_if_expr$25;
  unsigned int return_value_ntohl$24;
  unsigned long int tmp_if_expr$26;
  while(rd_kafka_broker_produce_toppar$$1$$msgcnt >= 1)
  {
    rkm = (&rktp->rktp_xmit_msgq.rkmq_msgs)->tqh_first;
    if(rkm == ((struct rd_kafka_msg_s *)NULL))
      break;

    if(!((unsigned long int)rkb->rkb_rk->rk_conf.max_msg_size >= rkm->rkm_len + (unsigned long int)prodhdr->part2.MessageSetSize))
    {
      do
        if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "PRODUCE", "No more space in current message (%i messages)", rkbuf->rkbuf_msgq.rkmq_msg_cnt);

      while((_Bool)0);
      break;
    }

    rd_kafka_msgq_deq(&rktp->rktp_xmit_msgq, rkm, 1);
    rd_kafka_msgq_enq(&rkbuf->rkbuf_msgq, rkm);
    rd_kafka_broker_produce_toppar$$1$$msgcnt = rd_kafka_broker_produce_toppar$$1$$msgcnt - 1;
    msghdr->part3.Offset = (signed long int)0;
    unsigned int return_value_ntohl$13;
    return_value_ntohl$13=ntohl((unsigned int)rkm->rkm_key->len);
    if((signed int)return_value_ntohl$13 == -1)
      tmp_if_expr$15 = (unsigned int)0;

    else
    {
      return_value_ntohl$14=ntohl((unsigned int)rkm->rkm_key->len);
      tmp_if_expr$15 = return_value_ntohl$14;
    }
    msghdr->part3.MessageSize = (signed int)(((sizeof(struct anonymous$2) /*18ul*/  - sizeof(signed long int) /*8ul*/ ) - sizeof(signed int) /*4ul*/ ) + (unsigned long int)(signed int)(sizeof(signed int) /*4ul*/  + (unsigned long int)tmp_if_expr$15) + sizeof(struct anonymous$7) /*4ul*/  + rkm->rkm_len);
    prodhdr->part2.MessageSetSize = prodhdr->part2.MessageSetSize + (signed int)(sizeof(signed long int) /*8ul*/  + sizeof(signed int) /*4ul*/  + (unsigned long int)msghdr->part3.MessageSize);
    unsigned int return_value_htonl$16;
    return_value_htonl$16=htonl((unsigned int)msghdr->part3.MessageSize);
    msghdr->part3.MessageSize = (signed int)return_value_htonl$16;
    unsigned long int return_value_crc32$17;
    return_value_crc32$17=crc32((unsigned long int)0, (const unsigned char *)(void *)0, (unsigned int)0);
    msghdr->part3.Crc = (signed int)return_value_crc32$17;
    msghdr->part3.MagicByte = (signed char)0;
    msghdr->part3.Attributes = (signed char)0;
    unsigned long int return_value_crc32$18;
    return_value_crc32$18=crc32((unsigned long int)msghdr->part3.Crc, (const unsigned char *)(void *)&msghdr->part3.MagicByte, (unsigned int)(sizeof(signed char) /*1ul*/  + sizeof(signed char) /*1ul*/ ));
    msghdr->part3.Crc = (signed int)return_value_crc32$18;
    rd_kafka_buf_push(rkbuf, (void *)&msghdr->part3, sizeof(struct anonymous$2) /*18ul*/ );
    unsigned int return_value_ntohl$19;
    return_value_ntohl$19=ntohl((unsigned int)rkm->rkm_key->len);
    if((signed int)return_value_ntohl$19 == -1)
      tmp_if_expr$21 = (unsigned int)0;

    else
    {
      return_value_ntohl$20=ntohl((unsigned int)rkm->rkm_key->len);
      tmp_if_expr$21 = return_value_ntohl$20;
    }
    unsigned long int return_value_crc32$22;
    return_value_crc32$22=crc32((unsigned long int)msghdr->part3.Crc, (const unsigned char *)(void *)rkm->rkm_key, (unsigned int)(signed int)(sizeof(signed int) /*4ul*/  + (unsigned long int)tmp_if_expr$21));
    msghdr->part3.Crc = (signed int)return_value_crc32$22;
    unsigned int return_value_ntohl$23;
    return_value_ntohl$23=ntohl((unsigned int)rkm->rkm_key->len);
    if((signed int)return_value_ntohl$23 == -1)
      tmp_if_expr$25 = (unsigned int)0;

    else
    {
      return_value_ntohl$24=ntohl((unsigned int)rkm->rkm_key->len);
      tmp_if_expr$25 = return_value_ntohl$24;
    }
    rd_kafka_buf_push(rkbuf, (void *)rkm->rkm_key, (unsigned long int)(signed int)(sizeof(signed int) /*4ul*/  + (unsigned long int)tmp_if_expr$25));
    if(!(rkm->rkm_payload == NULL))
      tmp_if_expr$26 = rkm->rkm_len;

    else
      tmp_if_expr$26 = (unsigned long int)-1;
    unsigned int return_value_htonl$27;
    return_value_htonl$27=htonl((unsigned int)tmp_if_expr$26);
    msghdr->part4.Value_len = (signed int)return_value_htonl$27;
    unsigned long int return_value_crc32$28;
    return_value_crc32$28=crc32((unsigned long int)msghdr->part3.Crc, (const unsigned char *)(void *)&msghdr->part4.Value_len, (unsigned int)sizeof(signed int) /*4ul*/ );
    msghdr->part3.Crc = (signed int)return_value_crc32$28;
    rd_kafka_buf_push(rkbuf, (void *)&msghdr->part4, sizeof(struct anonymous$7) /*4ul*/ );
    if(!(rkm->rkm_payload == NULL))
    {
      unsigned long int return_value_crc32$29;
      return_value_crc32$29=crc32((unsigned long int)msghdr->part3.Crc, (const unsigned char *)rkm->rkm_payload, (unsigned int)rkm->rkm_len);
      msghdr->part3.Crc = (signed int)return_value_crc32$29;
      rd_kafka_buf_push(rkbuf, rkm->rkm_payload, rkm->rkm_len);
    }

    unsigned int return_value_htonl$30;
    return_value_htonl$30=htonl((unsigned int)msghdr->part3.Crc);
    msghdr->part3.Crc = (signed int)return_value_htonl$30;
    msghdr = msghdr + 1l;
  }
  signed int tmp_if_expr$33;
  unsigned short int return_value_ntohs$32;
  void *return_value_malloc$34;
  signed int tmp_if_expr$37;
  unsigned short int return_value_ntohs$36;
  signed int tmp_if_expr$41;
  unsigned short int return_value_ntohs$40;
  void *return_value_malloc$42;
  signed int tmp_if_expr$45;
  unsigned short int return_value_ntohs$44;
  unsigned int return_value_ntohl$55;
  if(rkbuf->rkbuf_msgq.rkmq_msg_cnt == 0)
  {
    rd_kafka_buf_destroy(rkbuf);
    return -1;
  }

  else
  {
    if(!(rkb->rkb_rk->rk_conf.compression_codec == /*enum*/RD_KAFKA_COMPRESSION_NONE))
    {
      signed int siovlen = 1;
      unsigned long int coutlen;
      signed int r;
      /* tag-#anon#lST[S64'Offset'||S32'MessageSize'||S32'Crc'||S8'MagicByte'||S8'Attributes'||S32'Key_len'||S32'Value_len'|] */
struct anonymous$27
{
  // Offset
  signed long int Offset;
  // MessageSize
  signed int MessageSize;
  // Crc
  signed int Crc;
  // MagicByte
  signed char MagicByte;
  // Attributes
  signed char Attributes;
  // Key_len
  signed int Key_len;
  // Value_len
  signed int Value_len;
} __attribute__ ((__packed__));

/* */
      ;
      struct anonymous$27 *msghdr2 = (struct anonymous$27 *)(void *)0;
      signed int ctotlen;
      struct snappy_env senv;
      struct iovec siov;
      struct z_stream_s strm;
      signed int i;
      switch((signed int)rkb->rkb_rk->rk_conf.compression_codec)
      {
        case RD_KAFKA_COMPRESSION_NONE:
        {
          abort();
          break;
        }
        case RD_KAFKA_COMPRESSION_GZIP:
        {
          memset((void *)&strm, 0, sizeof(struct z_stream_s) /*112ul*/ );
          r=deflateInit2_(&strm, -1, 8, 15 + 16, 8, 0, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
          if(!(r == 0))
          {
            unsigned short int return_value_ntohs$31;
            return_value_ntohs$31=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            if((signed int)(signed short int)return_value_ntohs$31 == -1)
              tmp_if_expr$33 = 0;

            else
            {
              return_value_ntohs$32=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
              tmp_if_expr$33 = (signed int)return_value_ntohs$32;
            }
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 3, "GZIP", "Failed to initialize gzip for compressing %d bytes in topic %.*s [%d]: %s (%i): sending uncompressed", prodhdr->part2.MessageSetSize, tmp_if_expr$33, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, (_Bool)strm.msg ? strm.msg : "", r);
            goto do_send;
          }

          siov.iov_len=deflateBound(&strm, (unsigned long int)prodhdr->part2.MessageSetSize);
          return_value_malloc$34=malloc(sizeof(struct anonymous$27) /*26ul*/  + siov.iov_len);
          msghdr2 = (struct anonymous$27 *)return_value_malloc$34;
          siov.iov_base = (void *)(msghdr2 + (signed long int)1);
          strm.next_out = (unsigned char *)(void *)siov.iov_base;
          strm.avail_out = (unsigned int)siov.iov_len;
          i = iov_firstmsg;
          for( ; !((unsigned long int)i >= rkbuf->rkbuf_msg.msg_iovlen); i = i + 1)
            if(!((rkbuf->rkbuf_msg.msg_iov + (signed long int)i)->iov_len == 0ul))
            {
              strm.next_in = (unsigned char *)(void *)(rkbuf->rkbuf_msg.msg_iov + (signed long int)i)->iov_base;
              strm.avail_in = (unsigned int)(rkbuf->rkbuf_msg.msg_iov + (signed long int)i)->iov_len;
              signed int return_value_deflate$38;
              return_value_deflate$38=deflate(&strm, 0);
              r = (signed int)(return_value_deflate$38 != 0);
              if(!(r == 0))
              {
                unsigned short int return_value_ntohs$35;
                return_value_ntohs$35=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
                if((signed int)(signed short int)return_value_ntohs$35 == -1)
                  tmp_if_expr$37 = 0;

                else
                {
                  return_value_ntohs$36=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
                  tmp_if_expr$37 = (signed int)return_value_ntohs$36;
                }
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 3, "GZIP", "Failed to gzip-compress %zd bytes for topic %.*s [%d]: %s (%i): sending uncompressed", (rkbuf->rkbuf_msg.msg_iov + (signed long int)i)->iov_len, tmp_if_expr$37, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, (_Bool)strm.msg ? strm.msg : "", r);
                deflateEnd(&strm);
                free((void *)msghdr2);
                goto do_send;
              }

              do
                if(!(strm.avail_in == 0u))
                  rd_kafka_crash("rdkafka_broker.c", 2255, "rd_kafka_broker_produce_toppar", rkb->rkb_rk, "assert: strm.avail_in == 0");

              while((_Bool)0);
            }

          r=deflate(&strm, 4);
          if(!(r == 1))
          {
            unsigned short int return_value_ntohs$39;
            return_value_ntohs$39=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            if((signed int)(signed short int)return_value_ntohs$39 == -1)
              tmp_if_expr$41 = 0;

            else
            {
              return_value_ntohs$40=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
              tmp_if_expr$41 = (signed int)return_value_ntohs$40;
            }
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 3, "GZIP", "Failed to finish gzip compression  of %d bytes for topic %.*s [%d]: %s (%i): sending uncompressed", prodhdr->part2.MessageSetSize, tmp_if_expr$41, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, (_Bool)strm.msg ? strm.msg : "", r);
            deflateEnd(&strm);
            free((void *)msghdr2);
            goto do_send;
          }

          coutlen = strm.total_out;
          deflateEnd(&strm);
          break;
        }
        case RD_KAFKA_COMPRESSION_SNAPPY:
        {
          snappy_init_env_sg(&senv, (_Bool)1);
          siov.iov_len=snappy_max_compressed_length((unsigned long int)prodhdr->part2.MessageSetSize);
          return_value_malloc$42=malloc(sizeof(struct anonymous$27) /*26ul*/  + siov.iov_len);
          msghdr2 = (struct anonymous$27 *)return_value_malloc$42;
          siov.iov_base = (void *)(msghdr2 + (signed long int)1);
          r=snappy_compress_iov(&senv, &rkbuf->rkbuf_iov[(signed long int)iov_firstmsg], (signed int)(rkbuf->rkbuf_msg.msg_iovlen - (unsigned long int)iov_firstmsg), (unsigned long int)prodhdr->part2.MessageSetSize, &siov, &siovlen, &coutlen);
          if(!(r == 0))
          {
            unsigned short int return_value_ntohs$43;
            return_value_ntohs$43=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            if((signed int)(signed short int)return_value_ntohs$43 == -1)
              tmp_if_expr$45 = 0;

            else
            {
              return_value_ntohs$44=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
              tmp_if_expr$45 = (signed int)return_value_ntohs$44;
            }
            char *return_value_strerror$46;
            return_value_strerror$46=strerror(-r);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 3, "SNAPPY", "Failed to snappy-compress %d bytes for topic %.*s [%d]: %s: sending uncompressed", prodhdr->part2.MessageSetSize, tmp_if_expr$45, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, return_value_strerror$46);
            free((void *)msghdr2);
            goto do_send;
          }

          snappy_free_env(&senv);
          break;
        }
        default:
          do
            rd_kafka_crash("rdkafka_broker.c", 2326, "rd_kafka_broker_produce_toppar", rkb->rkb_rk, "assert: !*\"notreached: compression.codec\"");
          while((_Bool)0);
      }
      ctotlen = (signed int)(sizeof(struct anonymous$27) /*26ul*/  + coutlen);
      msghdr2->Offset = (signed long int)0;
      unsigned int return_value_htonl$47;
      return_value_htonl$47=htonl((unsigned int)((unsigned long int)(4 + 1 + 1 + 4 + 4) + coutlen));
      msghdr2->MessageSize = (signed int)return_value_htonl$47;
      msghdr2->MagicByte = (signed char)0;
      msghdr2->Attributes = (signed char)((signed int)rkb->rkb_rk->rk_conf.compression_codec & 0x7);
      unsigned int return_value_htonl$48;
      return_value_htonl$48=htonl((unsigned int)-1);
      msghdr2->Key_len = (signed int)return_value_htonl$48;
      unsigned int return_value_htonl$49;
      return_value_htonl$49=htonl((unsigned int)coutlen);
      msghdr2->Value_len = (signed int)return_value_htonl$49;
      unsigned long int return_value_crc32$50;
      return_value_crc32$50=crc32((unsigned long int)0, (const unsigned char *)(void *)0, (unsigned int)0);
      msghdr2->Crc = (signed int)return_value_crc32$50;
      unsigned long int return_value_crc32$51;
      return_value_crc32$51=crc32((unsigned long int)msghdr2->Crc, (const unsigned char *)(void *)&msghdr2->MagicByte, (unsigned int)(1 + 1 + 4 + 4));
      msghdr2->Crc = (signed int)return_value_crc32$51;
      unsigned long int return_value_crc32$52;
      return_value_crc32$52=crc32((unsigned long int)msghdr2->Crc, (const unsigned char *)(void *)siov.iov_base, (unsigned int)coutlen);
      msghdr2->Crc = (signed int)return_value_crc32$52;
      unsigned int return_value_htonl$53;
      return_value_htonl$53=htonl((unsigned int)msghdr2->Crc);
      msghdr2->Crc = (signed int)return_value_htonl$53;
      prodhdr->part2.MessageSetSize = ctotlen;
      rd_kafka_buf_rewind(rkbuf, iov_firstmsg);
      rd_kafka_buf_auxbuf_add(rkbuf, (void *)msghdr2);
      rd_kafka_buf_push(rkbuf, (void *)msghdr2, (unsigned long int)ctotlen);
    }


  do_send:
    ;
    __atomic_add_fetch(&rktp->rktp_c.tx_msgs, rkbuf->rkbuf_msgq.rkmq_msg_cnt, 5);
    __atomic_add_fetch(&rktp->rktp_c.tx_bytes, prodhdr->part2.MessageSetSize, 5);
    unsigned int return_value_htonl$54;
    return_value_htonl$54=htonl((unsigned int)prodhdr->part2.MessageSetSize);
    prodhdr->part2.MessageSetSize = (signed int)return_value_htonl$54;
    do
      if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_ntohl$55=ntohl((unsigned int)prodhdr->part2.MessageSetSize);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "PRODUCE", "produce messageset with %i messages (%d bytes)", rkbuf->rkbuf_msgq.rkmq_msg_cnt, return_value_ntohl$55);
      }

    while((_Bool)0);
    rd_kafka_broker_produce_toppar$$1$$cnt = rkbuf->rkbuf_msgq.rkmq_msg_cnt;
    if(rkt->rkt_conf.required_acks == 0)
      rkbuf->rkbuf_flags = rkbuf->rkbuf_flags | 0x4;

    rkbuf->rkbuf_ts_timeout = (&rkbuf->rkbuf_msgq.rkmq_msgs)->tqh_first->rkm_ts_timeout;
    __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
    rd_kafka_broker_buf_enq1(rkb, (signed short int)0, rkbuf, rd_kafka_produce_msgset_reply, (void *)rktp);
    return rd_kafka_broker_produce_toppar$$1$$cnt;
  }
}

// rd_kafka_broker_producer_serve
// file rdkafka_broker.c line 2492
static void rd_kafka_broker_producer_serve(struct rd_kafka_broker_s *rkb)
{
  unsigned long int last_timeout_scan;
  last_timeout_scan=rd_clock$link2();
  struct rd_kafka_msgq_s timedout = { .rkmq_msgs={ .tqh_first=(struct rd_kafka_msg_s *)(void *)0, .tqh_last=&timedout.rkmq_msgs.tqh_first }, .rkmq_msg_cnt=0,
    .rkmq_msg_bytes=0ul };
  struct rd_kafka_msgq_s isrfailed = { .rkmq_msgs={ .tqh_first=(struct rd_kafka_msg_s *)(void *)0, .tqh_last=&isrfailed.rkmq_msgs.tqh_first }, .rkmq_msg_cnt=0,
    .rkmq_msg_bytes=0ul };
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 2497, "rd_kafka_broker_producer_serve", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  pthread_mutex_lock(&rkb->rkb_lock);
  unsigned short int return_value_ntohs$2;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  while(rkb->rkb_rk->rk_terminate == 0)
  {
    if(!((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_UP))
      break;

    struct rd_kafka_toppar_s *rktp;
    signed int rd_kafka_broker_producer_serve$$1$$2$$cnt;
    unsigned long int now;
    signed int do_timeout_scan = 0;
    now=rd_clock$link2();
    if(!(1000000ul + last_timeout_scan >= now))
    {
      do_timeout_scan = 1;
      last_timeout_scan = now;
    }

    pthread_rwlock_rdlock(&rkb->rkb_toppar_lock);
    do
    {
      rd_kafka_broker_producer_serve$$1$$2$$cnt = 0;
      rktp = (&rkb->rkb_toppars)->tqh_first;
      for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rkblink.tqe_next)
      {
        do
          if(!((signed long int)(0x20 & rkb->rkb_rk->rk_conf.debug) == 0l))
          {
            return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            if((signed int)(signed short int)return_value_ntohs$2 == -1)
              tmp_if_expr$4 = 0;

            else
            {
              return_value_ntohs$3=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
              tmp_if_expr$4 = (signed int)return_value_ntohs$3;
            }
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "TOPPAR", "%.*s [%d] %i+%i msgs", tmp_if_expr$4, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_msgq.rkmq_msg_cnt, rktp->rktp_xmit_msgq.rkmq_msg_cnt);
          }

        while((_Bool)0);
        pthread_mutex_lock(&rktp->rktp_lock);
        if(!(rktp->rktp_metadata.isr_cnt >= rktp->rktp_rkt->rkt_conf.enforce_isr_cnt))
          rd_kafka_msgq_concat(&isrfailed, &rktp->rktp_msgq);

        if(rktp->rktp_msgq.rkmq_msg_cnt >= 1)
          rd_kafka_msgq_concat(&rktp->rktp_xmit_msgq, &rktp->rktp_msgq);

        pthread_mutex_unlock(&rktp->rktp_lock);
        if(!((signed long int)do_timeout_scan == 0l))
          rd_kafka_msgq_age_scan(&rktp->rktp_xmit_msgq, &timedout, now);

        if(!(rktp->rktp_xmit_msgq.rkmq_msg_cnt == 0))
        {
          if(!(now >= rktp->rktp_ts_last_xmit + (unsigned long int)(1000 * rkb->rkb_rk->rk_conf.buffering_max_ms)))
          {
            if(!(rktp->rktp_xmit_msgq.rkmq_msg_cnt >= rkb->rkb_rk->rk_conf.batch_num_messages))
              goto __CPROVER_DUMP_L18;

          }

          rktp->rktp_ts_last_xmit = now;
          while(rktp->rktp_xmit_msgq.rkmq_msg_cnt >= 1)
          {
            signed int r;
            r=rd_kafka_broker_produce_toppar(rkb, rktp);
            if(r >= 1)
              rd_kafka_broker_producer_serve$$1$$2$$cnt = rd_kafka_broker_producer_serve$$1$$2$$cnt + r;

            else
              break;
          }
        }


      __CPROVER_DUMP_L18:
        ;
      }
    }
    while(!(rd_kafka_broker_producer_serve$$1$$2$$cnt == 0));
    if(isrfailed.rkmq_msg_cnt >= 1)
      rd_kafka_dr_msgq(rkb->rkb_rk, &isrfailed, (enum anonymous$9)RD_KAFKA_RESP_ERR__ISR_INSUFF);

    if(timedout.rkmq_msg_cnt >= 1)
      rd_kafka_dr_msgq(rkb->rkb_rk, &timedout, (enum anonymous$9)RD_KAFKA_RESP_ERR__MSG_TIMED_OUT);

    pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
    if((signed long int)rkb->rkb_retrybufs.rkbq_cnt >= 1l)
      rd_kafka_broker_retry_bufs_move(rkb);

    pthread_mutex_unlock(&rkb->rkb_lock);
    rd_kafka_broker_io_serve(rkb);
    if(!(do_timeout_scan == 0))
      rd_kafka_broker_waitresp_timeout_scan(rkb, now);

    pthread_mutex_lock(&rkb->rkb_lock);
  }
  pthread_mutex_unlock(&rkb->rkb_lock);
}

// rd_kafka_broker_resolve
// file rdkafka_broker.c line 545
static signed int rd_kafka_broker_resolve(struct rd_kafka_broker_s *rkb)
{
  const char *errstr;
  signed long int return_value_time$1;
  if(!(rkb->rkb_rsal == ((struct rd_sockaddr_list_s *)NULL)))
  {
    return_value_time$1=time((signed long int *)(void *)0);
    if(!(rkb->rkb_t_rsal_last + (signed long int)rkb->rkb_rk->rk_conf.broker_addr_ttl >= return_value_time$1))
    {
      rd_sockaddr_list_destroy(rkb->rkb_rsal);
      rkb->rkb_rsal = (struct rd_sockaddr_list_s *)(void *)0;
    }

  }

  if(rkb->rkb_rsal == ((struct rd_sockaddr_list_s *)NULL))
  {
    rkb->rkb_rsal=rd_getaddrinfo(rkb->rkb_nodename, "9092", 0x0020, rkb->rkb_rk->rk_conf.broker_addr_family, 1, 6, &errstr);
    if(rkb->rkb_rsal == ((struct rd_sockaddr_list_s *)NULL))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__RESOLVE, rkb->rkb_err.err == *return_value___errno_location$2 ? (char *)(void *)0 : "Failed to resolve '%s': %s", (const void *)rkb->rkb_nodename, errstr);
      return -1;
    }

  }

  return 0;
}

// rd_kafka_broker_retry_bufs_move
// file rdkafka_broker.c line 1779
static void rd_kafka_broker_retry_bufs_move(struct rd_kafka_broker_s *rkb)
{
  unsigned long int now;
  now=rd_clock$link2();
  struct rd_kafka_buf_s *rkbuf;
  do
  {
    rkbuf = (&rkb->rkb_retrybufs.rkbq_bufs)->tqh_first;
    if(rkbuf == ((struct rd_kafka_buf_s *)NULL))
      break;

    if(!(now >= rkbuf->rkbuf_ts_retry))
      break;

    rd_kafka_bufq_deq(&rkb->rkb_retrybufs, rkbuf);
    rd_kafka_broker_buf_enq0(rkb, rkbuf, 0);
  }
  while((_Bool)1);
}

// rd_kafka_broker_send
// file rdkafka_broker.c line 507
static signed long int rd_kafka_broker_send(struct rd_kafka_broker_s *rkb, struct msghdr *msg)
{
  signed long int r;
  do
    if(!((signed int)rkb->rkb_state >= RD_KAFKA_BROKER_STATE_UP))
      rd_kafka_crash("rdkafka_broker.c", 511, "rd_kafka_broker_send", rkb->rkb_rk, "assert: rkb->rkb_state>=RD_KAFKA_BROKER_STATE_UP");

  while((_Bool)0);
  do
    if(rkb->rkb_s == -1)
      rd_kafka_crash("rdkafka_broker.c", 512, "rd_kafka_broker_send", rkb->rkb_rk, "assert: rkb->rkb_s != -1");

  while((_Bool)0);
  r=sendmsg(rkb->rkb_s, msg, 64 | 16384);
  if(r == -1l)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    if(*return_value___errno_location$1 == 11)
      return (signed long int)0;

    do
      if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, (const char *)(void *)0, 7, "BRKSEND", "sendmsg FAILED for iovlen %zd (%i)", (unsigned long int)msg->msg_iovlen, 1024);

    while((_Bool)0);
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT, "Send failed: %s", return_value_strerror$3);
    rkb->rkb_c.tx_err = rkb->rkb_c.tx_err + 1ul;
    return (signed long int)-1;
  }

  __atomic_add_fetch(&rkb->rkb_c.tx_bytes, r, 5);
  __atomic_add_fetch(&rkb->rkb_c.tx, 1, 5);
  return r;
}

// rd_kafka_broker_set_state
// file rdkafka_broker.c line 108
static void rd_kafka_broker_set_state(struct rd_kafka_broker_s *rkb, signed int state)
{
  if(!((signed int)rkb->rkb_state == state))
  {
    do
      if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, (const char *)(void *)0, 7, "STATE", "%s: Broker changed state %s -> %s", (const void *)rkb->rkb_name, rd_kafka_broker_state_names[(signed long int)rkb->rkb_state], rd_kafka_broker_state_names[(signed long int)state]);

    while((_Bool)0);
    if(state == RD_KAFKA_BROKER_STATE_DOWN)
    {
      signed int return_value___atomic_add_fetch$1;
      return_value___atomic_add_fetch$1=__atomic_add_fetch(&rkb->rkb_rk->rk_broker_down_cnt, 1, 5);
      if(return_value___atomic_add_fetch$1 == rkb->rkb_rk->rk_broker_cnt)
      {
        if(rkb->rkb_rk->rk_terminate == 0)
          rd_kafka_op_err(rkb->rkb_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__ALL_BROKERS_DOWN, "%i/%i brokers are down", rkb->rkb_rk->rk_broker_down_cnt, rkb->rkb_rk->rk_broker_cnt);

      }

    }

    else
      if((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_DOWN)
        __atomic_sub_fetch(&rkb->rkb_rk->rk_broker_down_cnt, 1, 5);

    rkb->rkb_state = (enum anonymous$50)state;
    rkb->rkb_ts_state=rd_clock$link2();
  }

}

// rd_kafka_broker_thread_main
// file rdkafka_broker.c line 4119
static void * rd_kafka_broker_thread_main(void *arg)
{
  struct rd_kafka_broker_s *rkb = (struct rd_kafka_broker_s *)arg;
  struct rd_kafka_s *rd_kafka_broker_thread_main$$1$$rk = rkb->rkb_rk;
  __atomic_add_fetch(&rd_kafka_thread_cnt_curr, 1, 5);
  do
    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "BRKMAIN", "Enter main broker thread");

  while((_Bool)0);
  signed int return_value_rd_kafka_broker_connect$3;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  while(rkb->rkb_rk->rk_terminate == 0)
    switch((signed int)rkb->rkb_state)
    {
      case RD_KAFKA_BROKER_STATE_INIT:

      case RD_KAFKA_BROKER_STATE_DOWN:
      {
        return_value_rd_kafka_broker_connect$3=rd_kafka_broker_connect(rkb);
        if(return_value_rd_kafka_broker_connect$3 == -1)
        {
          if(rkb->rkb_rsal == ((struct rd_sockaddr_list_s *)NULL))
            tmp_if_expr$1 = (_Bool)1;

          else
            tmp_if_expr$1 = rkb->rkb_rsal->rsal_cnt == 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$1)
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = rkb->rkb_rsal->rsal_curr + 1 == rkb->rkb_rsal->rsal_cnt ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$2)
            sleep((unsigned int)1);

        }

        break;
      }
      case RD_KAFKA_BROKER_STATE_UP:
        if(rkb->rkb_nodeid == -1)
          rd_kafka_broker_ua_idle(rkb);

        else
          if((signed int)rd_kafka_broker_thread_main$$1$$rk->rk_type == RD_KAFKA_PRODUCER)
            rd_kafka_broker_producer_serve(rkb);

          else
            if((signed int)rd_kafka_broker_thread_main$$1$$rk->rk_type == RD_KAFKA_CONSUMER)
              rd_kafka_broker_consumer_serve(rkb);

    }
  pthread_rwlock_wrlock(&rkb->rkb_rk->rk_lock);
  do
  {
    if(!(rkb->rkb_link.tqe_next == ((struct rd_kafka_broker_s *)NULL)))
      rkb->rkb_link.tqe_next->rkb_link.tqe_prev = rkb->rkb_link.tqe_prev;

    else
      (&rkb->rkb_rk->rk_brokers)->tqh_last = rkb->rkb_link.tqe_prev;
    *rkb->rkb_link.tqe_prev = rkb->rkb_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_sub_fetch(&rkb->rkb_rk->rk_broker_cnt, 1, 5);
  pthread_rwlock_unlock(&rkb->rkb_rk->rk_lock);
  rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__DESTROY, (const char *)(void *)0);
  rd_kafka_broker_destroy(rkb);
  __atomic_sub_fetch(&rd_kafka_thread_cnt_curr, 1, 5);
  return (void *)0;
}

// rd_kafka_broker_ua_idle
// file rdkafka_broker.c line 2468
static void rd_kafka_broker_ua_idle(struct rd_kafka_broker_s *rkb)
{
  unsigned long int last_timeout_scan;
  last_timeout_scan=rd_clock$link2();
  while(rkb->rkb_rk->rk_terminate == 0)
  {
    if(!((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_UP))
      break;

    unsigned long int now;
    rd_kafka_broker_io_serve(rkb);
    now=rd_clock$link2();
    if(!(1000000ul + last_timeout_scan >= now))
    {
      rd_kafka_broker_waitresp_timeout_scan(rkb, now);
      last_timeout_scan = now;
    }

  }
}

// rd_kafka_broker_update
// file rdkafka_broker.c line 4422
static void rd_kafka_broker_update(struct rd_kafka_s *rk, struct rd_kafka_metadata_broker *mdb)
{
  struct rd_kafka_broker_s *rkb;
  pthread_rwlock_wrlock(&rk->rk_lock);
  rkb=rd_kafka_broker_find_by_nodeid(rk, mdb->id);
  if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
    rd_kafka_broker_destroy(rkb);

  else
    rd_kafka_broker_add(rk, (enum anonymous$21)RD_KAFKA_LEARNED, mdb->host, (unsigned short int)mdb->port, mdb->id);
  pthread_rwlock_unlock(&rk->rk_lock);
}

// rd_kafka_broker_waitresp_timeout_scan
// file rdkafka_broker.c line 464
static void rd_kafka_broker_waitresp_timeout_scan(struct rd_kafka_broker_s *rkb, unsigned long int now)
{
  struct rd_kafka_buf_s *rkbuf;
  struct rd_kafka_buf_s *tmp;
  signed int rd_kafka_broker_waitresp_timeout_scan$$1$$cnt = 0;
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 469, "rd_kafka_broker_waitresp_timeout_scan", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  rkbuf = (&rkb->rkb_waitresps.rkbq_bufs)->tqh_first;
  _Bool tmp_if_expr$2;
  do
  {
    if(!(rkbuf == ((struct rd_kafka_buf_s *)NULL)))
    {
      tmp = rkbuf->rkbuf_link.tqe_next;
      tmp_if_expr$2 = 1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    if(now >= rkbuf->rkbuf_ts_timeout)
    {
      rd_kafka_bufq_deq(&rkb->rkb_waitresps, rkbuf);
      rkbuf->rkbuf_cb(rkb, RD_KAFKA_RESP_ERR__MSG_TIMED_OUT, (struct rd_kafka_buf_s *)(void *)0, rkbuf, rkbuf->rkbuf_opaque);
      rd_kafka_broker_waitresp_timeout_scan$$1$$cnt = rd_kafka_broker_waitresp_timeout_scan$$1$$cnt + 1;
    }

    rkbuf = tmp;
  }
  while((_Bool)1);
  if(rd_kafka_broker_waitresp_timeout_scan$$1$$cnt >= 1)
  {
    do
      if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "REQTMOUT", "Timed out %i requests", rd_kafka_broker_waitresp_timeout_scan$$1$$cnt);

    while((_Bool)0);
    rkb->rkb_req_timeouts = rkb->rkb_req_timeouts + rd_kafka_broker_waitresp_timeout_scan$$1$$cnt;
    rkb->rkb_c.req_timeouts = rkb->rkb_c.req_timeouts + (unsigned long int)rd_kafka_broker_waitresp_timeout_scan$$1$$cnt;
    if(!(rkb->rkb_rk->rk_conf.socket_max_fails == 0))
    {
      if(rkb->rkb_req_timeouts >= rkb->rkb_rk->rk_conf.socket_max_fails)
      {
        if((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_UP)
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          *return_value___errno_location$3 = 110;
          rd_kafka_broker_fail(rkb, (enum anonymous$9)RD_KAFKA_RESP_ERR__MSG_TIMED_OUT, "%i request(s) timed out: disconnect", rkb->rkb_req_timeouts);
        }

      }

    }

  }

}

// rd_kafka_brokers_add
// file ../src/rdkafka.h line 1088
signed int rd_kafka_brokers_add(struct rd_kafka_s *rk, const char *brokerlist)
{
  char *s;
  char *tmp_statement_expression$1;
  const char *__old = brokerlist;
  unsigned long int __len;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(__old);
  __len = return_value_strlen$2 + (unsigned long int)1;
  char *__new;
  void *return_value___builtin_alloca$3;
  return_value___builtin_alloca$3=__builtin_alloca(__len);
  __new = (char *)return_value___builtin_alloca$3;
  void *return_value_memcpy$4;
  return_value_memcpy$4=memcpy((void *)__new, (const void *)__old, __len);
  tmp_statement_expression$1 = (char *)return_value_memcpy$4;
  s = tmp_statement_expression$1;
  char *t;
  char *t2;
  char *n;
  signed int rd_kafka_brokers_add$$1$$cnt = 0;
  struct rd_kafka_broker_s *rkb;
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strlen$6;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$10;
  struct rd_kafka_broker_s *return_value_rd_kafka_broker_add$9;
  while(!(*s == 0))
  {
    unsigned short int port = (unsigned short int)0;
    if((signed int)*s == 44)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = (signed int)*s == 32 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
      s = s + 1l;

    else
    {
      n=strchr(s, 44);
      if(!(n == ((char *)NULL)))
        *n = (char)0;

      else
      {
        return_value_strlen$6=strlen(s);
        n = (s + (signed long int)return_value_strlen$6) - (signed long int)1;
      }
      t=strrchr(s, 58);
      if(!(t == ((char *)NULL)))
      {
        t2=strchr(s, 58);
        if(t2 == t)
          tmp_if_expr$8 = (_Bool)1;

        else
          tmp_if_expr$8 = (signed int)*(t - (signed long int)1) == 93 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$8)
        {
          *t = (char)0;
          signed int return_value_atoi$7;
          return_value_atoi$7=atoi(t + (signed long int)1);
          port = (unsigned short int)return_value_atoi$7;
        }

      }

      if(port == 0)
        port = (unsigned short int)9092;

      pthread_rwlock_wrlock(&rk->rk_lock);
      rkb=rd_kafka_broker_find(rk, s, port);
      if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
        tmp_if_expr$10 = (signed int)rkb->rkb_source == RD_KAFKA_CONFIGURED ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$10 = (_Bool)0;
      if(tmp_if_expr$10)
        rd_kafka_brokers_add$$1$$cnt = rd_kafka_brokers_add$$1$$cnt + 1;

      else
      {
        return_value_rd_kafka_broker_add$9=rd_kafka_broker_add(rk, (enum anonymous$21)RD_KAFKA_CONFIGURED, s, port, -1);
        if(!(return_value_rd_kafka_broker_add$9 == ((struct rd_kafka_broker_s *)NULL)))
          rd_kafka_brokers_add$$1$$cnt = rd_kafka_brokers_add$$1$$cnt + 1;

      }
      if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
        rd_kafka_broker_destroy(rkb);

      pthread_rwlock_unlock(&rk->rk_lock);
      s = n + (signed long int)1;
    }
  }
  return rd_kafka_brokers_add$$1$$cnt;
}

// rd_kafka_brokers_init
// file rdkafka_broker.c line 4439
void rd_kafka_brokers_init(void)
{
  ;
}

// rd_kafka_buf_autopush
// file rdkafka_broker.c line 186
static void rd_kafka_buf_autopush(struct rd_kafka_buf_s *rkbuf)
{
  rd_kafka_buf_push(rkbuf, (void *)rkbuf->rkbuf_wbuf, rkbuf->rkbuf_wof);
  rkbuf->rkbuf_wbuf = rkbuf->rkbuf_wbuf + (signed long int)rkbuf->rkbuf_wof;
  rkbuf->rkbuf_wof = (unsigned long int)0;
}

// rd_kafka_buf_auxbuf_add
// file rdkafka_broker.c line 153
static void rd_kafka_buf_auxbuf_add(struct rd_kafka_buf_s *rkbuf, void *auxbuf)
{
  do
    if(!(rkbuf->rkbuf_buf2 == ((char *)NULL)))
      rd_kafka_crash("rdkafka_broker.c", 154, "rd_kafka_buf_auxbuf_add", (struct rd_kafka_s *)(void *)0, "assert: rkbuf->rkbuf_buf2 == NULL");

  while((_Bool)0);
  rkbuf->rkbuf_buf2 = (char *)auxbuf;
}

// rd_kafka_buf_destroy
// file rdkafka_broker.h line 34
void rd_kafka_buf_destroy(struct rd_kafka_buf_s *rkbuf)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rkbuf->rkbuf_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1 >= 1))
  {
    if(!(rkbuf->rkbuf_buf2 == ((char *)NULL)))
      free((void *)rkbuf->rkbuf_buf2);

    if(!((0x1 & rkbuf->rkbuf_flags) == 0))
    {
      if(!(rkbuf->rkbuf_buf == ((char *)NULL)))
        free((void *)rkbuf->rkbuf_buf);

    }

    free((void *)rkbuf);
  }

}

// rd_kafka_buf_iov_next
// file rdkafka_broker.c line 163
static struct iovec * rd_kafka_buf_iov_next(struct rd_kafka_buf_s *rkbuf)
{
  do
    if(!((unsigned long int)rkbuf->rkbuf_iovcnt >= 1ul + rkbuf->rkbuf_msg.msg_iovlen))
      rd_kafka_crash("rdkafka_broker.c", 165, "rd_kafka_buf_iov_next", (struct rd_kafka_s *)(void *)0, "assert: rkbuf->rkbuf_msg.msg_iovlen + 1 <= rkbuf->rkbuf_iovcnt");

  while((_Bool)0);
  unsigned long int tmp_post$1 = rkbuf->rkbuf_msg.msg_iovlen;
  rkbuf->rkbuf_msg.msg_iovlen = rkbuf->rkbuf_msg.msg_iovlen + 1ul;
  return &rkbuf->rkbuf_iov[(signed long int)tmp_post$1];
}

// rd_kafka_buf_new
// file rdkafka_broker.c line 239
static struct rd_kafka_buf_s * rd_kafka_buf_new(signed int iovcnt, unsigned long int size)
{
  struct rd_kafka_buf_s *rkbuf;
  const signed int iovcnt_fixed = 2;
  unsigned long int iovsize = sizeof(struct iovec) /*16ul*/  * (unsigned long int)(iovcnt + iovcnt_fixed);
  unsigned long int fullsize = iovsize + sizeof(struct rd_kafka_buf_s) /*304ul*/  + size;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(fullsize);
  rkbuf = (struct rd_kafka_buf_s *)return_value_malloc$1;
  memset((void *)rkbuf, 0, sizeof(struct rd_kafka_buf_s) /*304ul*/ );
  rkbuf->rkbuf_iov = (struct iovec *)(rkbuf + (signed long int)1);
  rkbuf->rkbuf_iovcnt = iovcnt + iovcnt_fixed;
  do
    if(rkbuf->rkbuf_iovcnt >= 1025)
      rd_kafka_crash("rdkafka_broker.c", 250, "rd_kafka_buf_new", (struct rd_kafka_s *)(void *)0, "assert: rkbuf->rkbuf_iovcnt <= IOV_MAX");

  while((_Bool)0);
  rkbuf->rkbuf_msg.msg_iov = rkbuf->rkbuf_iov;
  rkbuf->rkbuf_msg.msg_iovlen = (unsigned long int)iovcnt_fixed;
  memset((void *)rkbuf->rkbuf_iov, 0, sizeof(struct iovec) /*16ul*/  * (unsigned long int)iovcnt_fixed);
  rkbuf->rkbuf_size = size;
  rkbuf->rkbuf_buf = (char *)(rkbuf + (signed long int)1) + (signed long int)iovsize;
  rkbuf->rkbuf_wbuf = rkbuf->rkbuf_buf;
  rd_kafka_msgq_init$link1(&rkbuf->rkbuf_msgq);
  __atomic_add_fetch(&rkbuf->rkbuf_refcnt, 1, 5);
  return rkbuf;
}

// rd_kafka_buf_new_shadow
// file rdkafka_broker.c line 271
static struct rd_kafka_buf_s * rd_kafka_buf_new_shadow(void *ptr, unsigned long int size)
{
  struct rd_kafka_buf_s *rkbuf;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_buf_s) /*304ul*/ );
  rkbuf = (struct rd_kafka_buf_s *)return_value_calloc$1;
  rkbuf->rkbuf_buf2 = (char *)ptr;
  rkbuf->rkbuf_len = size;
  rd_kafka_msgq_init$link1(&rkbuf->rkbuf_msgq);
  __atomic_add_fetch(&rkbuf->rkbuf_refcnt, 1, 5);
  return rkbuf;
}

// rd_kafka_buf_push
// file rdkafka_broker.c line 172
static void rd_kafka_buf_push(struct rd_kafka_buf_s *rkbuf, void *buf, unsigned long int len)
{
  struct iovec *iov;
  iov=rd_kafka_buf_iov_next(rkbuf);
  iov->iov_base = buf;
  iov->iov_len = len;
}

// rd_kafka_buf_rewind
// file rdkafka_broker.c line 158
static void rd_kafka_buf_rewind(struct rd_kafka_buf_s *rkbuf, signed int iovindex)
{
  rkbuf->rkbuf_msg.msg_iovlen = (unsigned long int)iovindex;
}

// rd_kafka_buf_write
// file rdkafka_broker.c line 197
static inline void rd_kafka_buf_write(struct rd_kafka_buf_s *rkbuf, const void *ptr, unsigned long int len)
{
  do
    if(!(rkbuf->rkbuf_buf + (signed long int)rkbuf->rkbuf_size >= rkbuf->rkbuf_wbuf + (signed long int)rkbuf->rkbuf_wof + (signed long int)len))
      rd_kafka_crash("rdkafka_broker.c", 202, "rd_kafka_buf_write", (struct rd_kafka_s *)(void *)0, "assert: (rkbuf->rkbuf_wbuf + rkbuf->rkbuf_wof + len <= rkbuf->rkbuf_buf + rkbuf->rkbuf_size)");

  while((_Bool)0);
  memcpy((void *)(rkbuf->rkbuf_wbuf + (signed long int)rkbuf->rkbuf_wof), ptr, len);
  rkbuf->rkbuf_wof = rkbuf->rkbuf_wof + len;
}

// rd_kafka_buf_write_i32
// file rdkafka_broker.c line 212
static inline void rd_kafka_buf_write_i32(struct rd_kafka_buf_s *rkbuf, signed int v)
{
  unsigned int return_value_htonl$1;
  return_value_htonl$1=htonl((unsigned int)v);
  v = (signed int)return_value_htonl$1;
  rd_kafka_buf_write(rkbuf, (const void *)&v, sizeof(signed int) /*4ul*/ );
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// rd_kafka_buf_write_i64
// file rdkafka_broker.c line 221
static inline void rd_kafka_buf_write_i64(struct rd_kafka_buf_s *rkbuf, signed long int v)
{
  unsigned long int return_value___bswap_64$1;
  return_value___bswap_64$1=__bswap_64((unsigned long int)v);
  v = (signed long int)return_value___bswap_64$1;
  rd_kafka_buf_write(rkbuf, (const void *)&v, sizeof(signed long int) /*8ul*/ );
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// rd_kafka_buf_write_kstr
// file rdkafka_broker.c line 230
static inline void rd_kafka_buf_write_kstr(struct rd_kafka_buf_s *rkbuf, const struct rd_kafkap_str_s *kstr)
{
  unsigned short int return_value_ntohs$1;
  return_value_ntohs$1=ntohs((unsigned short int)kstr->len);
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  if((signed int)(signed short int)return_value_ntohs$1 == -1)
    tmp_if_expr$3 = 0;

  else
  {
    return_value_ntohs$2=ntohs((unsigned short int)kstr->len);
    tmp_if_expr$3 = (signed int)return_value_ntohs$2;
  }
  rd_kafka_buf_write(rkbuf, (const void *)kstr, (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$3));
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// rd_kafka_bufq_concat
// file rdkafka_broker.c line 310
static void rd_kafka_bufq_concat(struct rd_kafka_bufq_s *dst, struct rd_kafka_bufq_s *src)
{
  do
    if(!(src->rkbq_bufs.tqh_first == ((struct rd_kafka_buf_s *)NULL)))
    {
      *(&dst->rkbq_bufs)->tqh_last = (&src->rkbq_bufs)->tqh_first;
      (&src->rkbq_bufs)->tqh_first->rkbuf_link.tqe_prev = (&dst->rkbq_bufs)->tqh_last;
      (&dst->rkbq_bufs)->tqh_last = (&src->rkbq_bufs)->tqh_last;
      do
      {
        (&src->rkbq_bufs)->tqh_first = (struct rd_kafka_buf_s *)(void *)0;
        (&src->rkbq_bufs)->tqh_last = &(&src->rkbq_bufs)->tqh_first;
      }
      while((_Bool)0);
    }

  while((_Bool)0);
  __atomic_add_fetch(&dst->rkbq_cnt, src->rkbq_cnt, 5);
  __atomic_add_fetch(&dst->rkbq_msg_cnt, src->rkbq_msg_cnt, 5);
  rd_kafka_bufq_init(src);
}

// rd_kafka_bufq_deq
// file rdkafka_broker.c line 293
static void rd_kafka_bufq_deq(struct rd_kafka_bufq_s *rkbufq, struct rd_kafka_buf_s *rkbuf)
{
  do
  {
    if(!(rkbuf->rkbuf_link.tqe_next == ((struct rd_kafka_buf_s *)NULL)))
      rkbuf->rkbuf_link.tqe_next->rkbuf_link.tqe_prev = rkbuf->rkbuf_link.tqe_prev;

    else
      (&rkbufq->rkbq_bufs)->tqh_last = rkbuf->rkbuf_link.tqe_prev;
    *rkbuf->rkbuf_link.tqe_prev = rkbuf->rkbuf_link.tqe_next;
  }
  while((_Bool)0);
  do
    if(!(rkbufq->rkbq_cnt >= 1))
      rd_kafka_crash("rdkafka_broker.c", 295, "rd_kafka_bufq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkbufq->rkbq_cnt > 0");

  while((_Bool)0);
  __atomic_sub_fetch(&rkbufq->rkbq_cnt, 1, 5);
  __atomic_sub_fetch(&rkbufq->rkbq_msg_cnt, rkbuf->rkbuf_msgq.rkmq_msg_cnt, 5);
}

// rd_kafka_bufq_enq
// file rdkafka_broker.c line 286
static void rd_kafka_bufq_enq(struct rd_kafka_bufq_s *rkbufq, struct rd_kafka_buf_s *rkbuf)
{
  do
  {
    rkbuf->rkbuf_link.tqe_next = (struct rd_kafka_buf_s *)(void *)0;
    rkbuf->rkbuf_link.tqe_prev = (&rkbufq->rkbq_bufs)->tqh_last;
    *(&rkbufq->rkbq_bufs)->tqh_last = rkbuf;
    (&rkbufq->rkbq_bufs)->tqh_last = &rkbuf->rkbuf_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkbufq->rkbq_cnt, 1, 5);
  __atomic_add_fetch(&rkbufq->rkbq_msg_cnt, rkbuf->rkbuf_msgq.rkmq_msg_cnt, 5);
}

// rd_kafka_bufq_init
// file rdkafka_broker.c line 301
static void rd_kafka_bufq_init(struct rd_kafka_bufq_s *rkbufq)
{
  do
  {
    (&rkbufq->rkbq_bufs)->tqh_first = (struct rd_kafka_buf_s *)(void *)0;
    (&rkbufq->rkbq_bufs)->tqh_last = &(&rkbufq->rkbq_bufs)->tqh_first;
  }
  while((_Bool)0);
  rkbufq->rkbq_cnt = 0;
  rkbufq->rkbq_msg_cnt = 0;
}

// rd_kafka_bufq_purge
// file rdkafka_broker.c line 322
static void rd_kafka_bufq_purge(struct rd_kafka_broker_s *rkb, struct rd_kafka_bufq_s *rkbufq, enum anonymous$9 err)
{
  struct rd_kafka_buf_s *rkbuf;
  struct rd_kafka_buf_s *tmp;
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 327, "rd_kafka_bufq_purge", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  do
    if(!((signed long int)(0x20 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "BUFQ", "Purging bufq with %i buffers", rkbufq->rkbq_cnt);

  while((_Bool)0);
  rkbuf = (&rkbufq->rkbq_bufs)->tqh_first;
  _Bool tmp_if_expr$2;
  if(!(rkbuf == ((struct rd_kafka_buf_s *)NULL)))
  {
    tmp = rkbuf->rkbuf_link.tqe_next;
    tmp_if_expr$2 = 1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
  {
    rkbuf->rkbuf_cb(rkb, (signed int)err, (struct rd_kafka_buf_s *)(void *)0, rkbuf, rkbuf->rkbuf_opaque);
    rkbuf = tmp;
  }

}

// rd_kafka_conf_destroy
// file rdkafka.h line 272
void rd_kafka_conf_destroy(struct rd_kafka_conf_s *conf)
{
  rd_kafka_anyconf_destroy(_RK_GLOBAL, (void *)conf);
  free((void *)conf);
}

// rd_kafka_conf_dump
// file rdkafka_defaultconf.c line 956
const char ** rd_kafka_conf_dump(struct rd_kafka_conf_s *conf, unsigned long int *cntp)
{
  const char **return_value_rd_kafka_anyconf_dump$1;
  return_value_rd_kafka_anyconf_dump$1=rd_kafka_anyconf_dump(_RK_GLOBAL, (void *)conf, cntp);
  return return_value_rd_kafka_anyconf_dump$1;
}

// rd_kafka_conf_dump_free
// file rdkafka_defaultconf.c line 965
void rd_kafka_conf_dump_free(const char **arr, unsigned long int cnt)
{
  char **_arr = (char **)arr;
  signed int i = 0;
  for( ; !((unsigned long int)i >= cnt); i = i + 1)
    if(!(_arr[(signed long int)i] == ((char *)NULL)))
      free((void *)_arr[(signed long int)i]);

  free((void *)_arr);
}

// rd_kafka_conf_dup
// file rdkafka_defaultconf.c line 789
struct rd_kafka_conf_s * rd_kafka_conf_dup(const struct rd_kafka_conf_s *conf)
{
  struct rd_kafka_conf_s *new;
  new=rd_kafka_conf_new();
  rd_kafka_anyconf_copy(_RK_GLOBAL, (void *)new, (const void *)conf);
  return new;
}

// rd_kafka_conf_new
// file ../src/rdkafka.h line 267
struct rd_kafka_conf_s * rd_kafka_conf_new(void)
{
  struct rd_kafka_conf_s *conf;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_conf_s) /*256ul*/ );
  conf = (struct rd_kafka_conf_s *)return_value_calloc$1;
  rd_kafka_defaultconf_set(_RK_GLOBAL, (void *)conf);
  return conf;
}

// rd_kafka_conf_properties_show
// file ../src/rdkafka.h line 441
void rd_kafka_conf_properties_show(struct _IO_FILE *fp)
{
  struct rd_kafka_property *prop;
  signed int last = 0;
  signed int j;
  const char *dash80 = "--------------------------------------------------------------------------------";
  prop = rd_kafka_properties;
  char *tmp_if_expr$2;
  char *tmp_if_expr$1;
  const char *tmp_if_expr$3;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
  {
    if((last & (signed int)prop->scope) == 0)
    {
      fprintf(fp, "%s## %s configuration properties\n\n", last != 0 ? "\n\n" : "", (signed int)prop->scope == _RK_GLOBAL ? "Global" : "Topic");
      fprintf(fp, "%-40s | %3s | %13s | %-25s\n%.*s-|-%.*s-|-%.*s:|-%.*s\n", (const void *)"Property", (const void *)"C/P", (const void *)"Default", (const void *)"Description", 40, dash80, 3, dash80, 13, dash80, 25, dash80);
      last = (signed int)prop->scope & (_RK_GLOBAL | _RK_TOPIC);
    }

    if(((_RK_PRODUCER & (signed int)prop->scope) == 0) == ((_RK_CONSUMER & (signed int)prop->scope) == 0))
      tmp_if_expr$2 = " * ";

    else
    {
      if(!((_RK_PRODUCER & (signed int)prop->scope) == 0))
        tmp_if_expr$1 = " P ";

      else
        tmp_if_expr$1 = ((signed int)prop->scope & _RK_CONSUMER) != 0 ? " C " : "";
      tmp_if_expr$2 = tmp_if_expr$1;
    }
    fprintf(fp, "%-40s | %3s | ", prop->name, tmp_if_expr$2);
    switch((signed int)prop->type)
    {
      case _RK_C_STR:
      {
        if(!(prop->sdef == ((const char *)NULL)))
          tmp_if_expr$3 = prop->sdef;

        else
          tmp_if_expr$3 = "";
        fprintf(fp, "%13s", tmp_if_expr$3);
        break;
      }
      case _RK_C_BOOL:
      {
        fprintf(fp, "%13s", prop->vdef != 0 ? "true" : "false");
        break;
      }
      case _RK_C_INT:
      {
        fprintf(fp, "%13i", prop->vdef);
        break;
      }
      case _RK_C_S2I:
      {
        j = 0;
        for( ; !((unsigned long int)j >= 10ul); j = j + 1)
          if(prop->s2i[(signed long int)j].val == prop->vdef)
          {
            fprintf(fp, "%13s", prop->s2i[(signed long int)j].str);
            break;
          }

        if((unsigned long int)j == 10ul)
          fprintf(fp, "%13s", (const void *)" ");

        break;
      }
      case _RK_C_S2F:

      default:
        fprintf(fp, "%-13s", (const void *)" ");
    }
    fprintf(fp, " | %s\n", prop->desc);
  }
  fprintf(fp, "\n");
  fprintf(fp, "### C/P legend: C = Consumer, P = Producer, * = both\n");
}

// rd_kafka_conf_set
// file ../src/rdkafka.h line 289
enum anonymous$24 rd_kafka_conf_set(struct rd_kafka_conf_s *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size)
{
  signed int return_value_rd_kafka_anyconf_set$1;
  return_value_rd_kafka_anyconf_set$1=rd_kafka_anyconf_set(_RK_GLOBAL, (void *)conf, name, value, errstr, errstr_size);
  return (enum anonymous$24)return_value_rd_kafka_anyconf_set$1;
}

// rd_kafka_conf_set_dr_cb
// file rdkafka_defaultconf.c line 808
void rd_kafka_conf_set_dr_cb(struct rd_kafka_conf_s *conf, void (*dr_cb)(struct rd_kafka_s *, void *, unsigned long int, enum anonymous$9, void *, void *))
{
  conf->dr_cb = dr_cb;
}

// rd_kafka_conf_set_dr_msg_cb
// file ../src/rdkafka.h line 310
void rd_kafka_conf_set_dr_msg_cb(struct rd_kafka_conf_s *conf, void (*dr_msg_cb)(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *))
{
  conf->dr_msg_cb = dr_msg_cb;
}

// rd_kafka_conf_set_error_cb
// file ../src/rdkafka.h line 321
void rd_kafka_conf_set_error_cb(struct rd_kafka_conf_s *conf, void (*error_cb)(struct rd_kafka_s *, signed int, const char *, void *))
{
  conf->error_cb = error_cb;
}

// rd_kafka_conf_set_log_cb
// file rdkafka_defaultconf.c line 835
void rd_kafka_conf_set_log_cb(struct rd_kafka_conf_s *conf, void (*log_cb)(const struct rd_kafka_s *, signed int, const char *, const char *))
{
  conf->log_cb = log_cb;
}

// rd_kafka_conf_set_opaque
// file rdkafka_defaultconf.c line 865
void rd_kafka_conf_set_opaque(struct rd_kafka_conf_s *conf, void *opaque)
{
  conf->opaque = opaque;
}

// rd_kafka_conf_set_open_cb
// file rdkafka_defaultconf.c line 858
void rd_kafka_conf_set_open_cb(struct rd_kafka_conf_s *conf, signed int (*open_cb)(const char *, signed int, unsigned int, void *))
{
  conf->open_cb = open_cb;
}

// rd_kafka_conf_set_socket_cb
// file rdkafka_defaultconf.c line 850
void rd_kafka_conf_set_socket_cb(struct rd_kafka_conf_s *conf, signed int (*socket_cb)(signed int, signed int, signed int, void *))
{
  conf->socket_cb = socket_cb;
}

// rd_kafka_conf_set_stats_cb
// file ../src/rdkafka.h line 356
void rd_kafka_conf_set_stats_cb(struct rd_kafka_conf_s *conf, signed int (*stats_cb)(struct rd_kafka_s *, char *, unsigned long int, void *))
{
  conf->stats_cb = stats_cb;
}

// rd_kafka_consume
// file rdkafka.c line 1599
struct rd_kafka_message_s * rd_kafka_consume(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms)
{
  struct rd_kafka_toppar_s *rktp;
  struct rd_kafka_message_s *rkmessage;
  pthread_rwlock_rdlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
    rktp=rd_kafka_toppar_desired_get(rkt, partition);

  pthread_rwlock_unlock(&rkt->rkt_lock);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 3;
    return (struct rd_kafka_message_s *)(void *)0;
  }

  rkmessage=rd_kafka_consume0(&rktp->rktp_fetchq, timeout_ms);
  do
  {
    signed int return_value___atomic_sub_fetch$2;
    return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$2 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  return rkmessage;
}

// rd_kafka_consume0
// file rdkafka.c line 1575
static struct rd_kafka_message_s * rd_kafka_consume0(struct rd_kafka_q_s *rkq, signed int timeout_ms)
{
  struct rd_kafka_op_s *rko;
  struct rd_kafka_message_s *rkmessage;
  rko=rd_kafka_q_pop(rkq, timeout_ms);
  if(rko == ((struct rd_kafka_op_s *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 110;
    return (struct rd_kafka_message_s *)(void *)0;
  }

  rkmessage=rd_kafka_message_get(rko);
  if(rko->rko_rkmessage.err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR)
  {
    if(!(rko->rko_rkmessage.rkt->rkt_conf.auto_commit == 0))
      rd_kafka_offset_store0(rko->rko_rktp, rkmessage->offset, 1);

  }

  return rkmessage;
}

// rd_kafka_consume_batch
// file ../src/rdkafka.h line 768
signed long int rd_kafka_consume_batch(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size)
{
  struct rd_kafka_toppar_s *rktp;
  signed long int rd_kafka_consume_batch$$1$$cnt;
  pthread_rwlock_rdlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
    rktp=rd_kafka_toppar_desired_get(rkt, partition);

  pthread_rwlock_unlock(&rkt->rkt_lock);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 3;
    return (signed long int)-1;
  }

  signed int return_value_rd_kafka_q_serve_rkmessages$2;
  return_value_rd_kafka_q_serve_rkmessages$2=rd_kafka_q_serve_rkmessages(&rktp->rktp_fetchq, timeout_ms, rkmessages, rkmessages_size);
  rd_kafka_consume_batch$$1$$cnt = (signed long int)return_value_rd_kafka_q_serve_rkmessages$2;
  do
  {
    signed int return_value___atomic_sub_fetch$3;
    return_value___atomic_sub_fetch$3=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$3 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  return rd_kafka_consume_batch$$1$$cnt;
}

// rd_kafka_consume_batch0
// file rdkafka.c line 1448
static signed long int rd_kafka_consume_batch0(struct rd_kafka_q_s *rkq, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size)
{
  signed int return_value_rd_kafka_q_serve_rkmessages$1;
  return_value_rd_kafka_q_serve_rkmessages$1=rd_kafka_q_serve_rkmessages(rkq, timeout_ms, rkmessages, rkmessages_size);
  return (signed long int)return_value_rd_kafka_q_serve_rkmessages$1;
}

// rd_kafka_consume_batch_queue
// file rdkafka.c line 1487
signed long int rd_kafka_consume_batch_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size)
{
  signed long int return_value_rd_kafka_consume_batch0$1;
  return_value_rd_kafka_consume_batch0$1=rd_kafka_consume_batch0(&rkqu->rkqu_q, timeout_ms, rkmessages, rkmessages_size);
  return return_value_rd_kafka_consume_batch0$1;
}

// rd_kafka_consume_callback
// file ../src/rdkafka.h line 793
signed int rd_kafka_consume_callback(struct rd_kafka_topic_s *rkt, signed int partition, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque)
{
  struct rd_kafka_toppar_s *rktp;
  signed int r;
  pthread_rwlock_rdlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
    rktp=rd_kafka_toppar_desired_get(rkt, partition);

  pthread_rwlock_unlock(&rkt->rkt_lock);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 3;
    return -1;
  }

  r=rd_kafka_consume_callback0(&rktp->rktp_fetchq, timeout_ms, consume_cb, opaque);
  do
  {
    signed int return_value___atomic_sub_fetch$2;
    return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$2 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  return r;
}

// rd_kafka_consume_callback0
// file rdkafka.c line 1519
static signed int rd_kafka_consume_callback0(struct rd_kafka_q_s *rkq, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque)
{
  struct consume_ctx ctx = { .consume_cb=consume_cb, .opaque=opaque };
  signed int return_value_rd_kafka_q_serve$1;
  return_value_rd_kafka_q_serve$1=rd_kafka_q_serve(rkq, timeout_ms, rd_kafka_consume_cb, (void *)&ctx);
  return return_value_rd_kafka_q_serve$1;
}

// rd_kafka_consume_callback_queue
// file rdkafka.c line 1563
signed int rd_kafka_consume_callback_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms, void (*consume_cb)(struct rd_kafka_message_s *, void *), void *opaque)
{
  signed int return_value_rd_kafka_consume_callback0$1;
  return_value_rd_kafka_consume_callback0$1=rd_kafka_consume_callback0(&rkqu->rkqu_q, timeout_ms, consume_cb, opaque);
  return return_value_rd_kafka_consume_callback0$1;
}

// rd_kafka_consume_cb
// file rdkafka.c line 1506
static void rd_kafka_consume_cb(struct rd_kafka_op_s *rko, void *opaque)
{
  struct consume_ctx *ctx = (struct consume_ctx *)opaque;
  struct rd_kafka_message_s *rkmessage;
  rkmessage=rd_kafka_message_get(rko);
  if(rko->rko_rkmessage.err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR)
  {
    if(!(rko->rko_rktp->rktp_rkt->rkt_conf.auto_commit == 0))
      rd_kafka_offset_store0(rko->rko_rktp, rkmessage->offset, 1);

  }

  ctx->consume_cb(rkmessage, ctx->opaque);
}

// rd_kafka_consume_queue
// file rdkafka.c line 1624
struct rd_kafka_message_s * rd_kafka_consume_queue(struct rd_kafka_queue_s *rkqu, signed int timeout_ms)
{
  struct rd_kafka_message_s *return_value_rd_kafka_consume0$1;
  return_value_rd_kafka_consume0$1=rd_kafka_consume0(&rkqu->rkqu_q, timeout_ms);
  return return_value_rd_kafka_consume0$1;
}

// rd_kafka_consume_start
// file ../src/rdkafka.h line 700
signed int rd_kafka_consume_start(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset)
{
  signed int return_value_rd_kafka_consume_start0$1;
  return_value_rd_kafka_consume_start0$1=rd_kafka_consume_start0(rkt, partition, offset, (struct rd_kafka_q_s *)(void *)0);
  return return_value_rd_kafka_consume_start0$1;
}

// rd_kafka_consume_start0
// file rdkafka.c line 1342
static signed int rd_kafka_consume_start0(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset, struct rd_kafka_q_s *rkq)
{
  struct rd_kafka_toppar_s *rktp;
  if(!(partition >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 3;
    return -1;
  }

  pthread_rwlock_wrlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_desired_add(rkt, partition);
  pthread_rwlock_unlock(&rkt->rkt_lock);
  pthread_mutex_lock(&rktp->rktp_lock);
  if(offset == -2l || offset == -1l || !(offset >= -1999l))
  {
    rktp->rktp_query_offset = offset;
    rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY;
  }

  else
    if(offset == -1000l)
      rd_kafka_offset_store_init(rktp);

    else
      if(!(offset >= 0l))
      {
        pthread_mutex_unlock(&rktp->rktp_lock);
        do
        {
          signed int return_value___atomic_sub_fetch$2;
          return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
          if(return_value___atomic_sub_fetch$2 == 0)
            rd_kafka_toppar_destroy0(rktp);

        }
        while((_Bool)0);
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        *return_value___errno_location$3 = 22;
        return -1;
      }

      else
      {
        rktp->rktp_next_offset = offset;
        rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_ACTIVE;
      }
  pthread_mutex_unlock(&rktp->rktp_lock);
  if(!(rkq == ((struct rd_kafka_q_s *)NULL)))
    rd_kafka_q_fwd_set(&rktp->rktp_fetchq, rkq);

  unsigned short int return_value_ntohs$4;
  signed int tmp_if_expr$6;
  unsigned short int return_value_ntohs$5;
  do
    if(!((signed long int)(0x4 & rkt->rkt_rk->rk_conf.debug) == 0l))
    {
      return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
      if((signed int)(signed short int)return_value_ntohs$4 == -1)
        tmp_if_expr$6 = 0;

      else
      {
        return_value_ntohs$5=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
        tmp_if_expr$6 = (signed int)return_value_ntohs$5;
      }
      rd_kafka_log0(rkt->rkt_rk, (const char *)(void *)0, 7, "CONSUMER", "Start consuming %.*s [%d] at offset %ld", tmp_if_expr$6, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, offset);
    }

  while((_Bool)0);
  return 0;
}

// rd_kafka_consume_start_queue
// file rdkafka.c line 1396
signed int rd_kafka_consume_start_queue(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset, struct rd_kafka_queue_s *rkqu)
{
  signed int return_value_rd_kafka_consume_start0$1;
  return_value_rd_kafka_consume_start0$1=rd_kafka_consume_start0(rkt, partition, offset, &rkqu->rkqu_q);
  return return_value_rd_kafka_consume_start0$1;
}

// rd_kafka_consume_stop
// file ../src/rdkafka.h line 728
signed int rd_kafka_consume_stop(struct rd_kafka_topic_s *rkt, signed int partition)
{
  struct rd_kafka_toppar_s *rktp;
  if(partition == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  pthread_rwlock_wrlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    rktp=rd_kafka_toppar_desired_get(rkt, partition);
    if(rktp == ((struct rd_kafka_toppar_s *)NULL))
    {
      pthread_rwlock_unlock(&rkt->rkt_lock);
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      *return_value___errno_location$2 = 3;
      return -1;
    }

  }

  rd_kafka_toppar_desired_del(rktp);
  pthread_rwlock_unlock(&rkt->rkt_lock);
  pthread_mutex_lock(&rktp->rktp_lock);
  rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_NONE;
  rd_kafka_offset_store_term(rktp);
  rd_kafka_q_fwd_set(&rktp->rktp_fetchq, (struct rd_kafka_q_s *)(void *)0);
  rd_kafka_q_purge(&rktp->rktp_fetchq);
  unsigned short int return_value_ntohs$3;
  signed int tmp_if_expr$5;
  unsigned short int return_value_ntohs$4;
  do
    if(!((signed long int)(0x4 & rkt->rkt_rk->rk_conf.debug) == 0l))
    {
      return_value_ntohs$3=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
      if((signed int)(signed short int)return_value_ntohs$3 == -1)
        tmp_if_expr$5 = 0;

      else
      {
        return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
        tmp_if_expr$5 = (signed int)return_value_ntohs$4;
      }
      rd_kafka_log0(rkt->rkt_rk, (const char *)(void *)0, 7, "CONSUMER", "Stop consuming %.*s [%d] currently at offset %ld", tmp_if_expr$5, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_next_offset);
    }

  while((_Bool)0);
  pthread_mutex_unlock(&rktp->rktp_lock);
  do
  {
    signed int return_value___atomic_sub_fetch$6;
    return_value___atomic_sub_fetch$6=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$6 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  return 0;
}

// rd_kafka_crash
// file rdkafka.c line 1871
void rd_kafka_crash(const char *file, signed int line, const char *function, struct rd_kafka_s *rk, const char *reason)
{
  fprintf(stderr, "*** %s:%i:%s: %s ***\n", file, line, function, reason);
  if(!(rk == ((struct rd_kafka_s *)NULL)))
    rd_kafka_dump0(stderr, rk, 0);

  abort();
}

// rd_kafka_defaultconf_set
// file rdkafka_defaultconf.c line 629
static void rd_kafka_defaultconf_set(signed int scope, void *conf)
{
  struct rd_kafka_property *prop = rd_kafka_properties;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  const char *tmp_if_expr$1;
  for( ; !(prop->name == ((const char *)NULL)); prop = prop + 1l)
    if(!((scope & (signed int)prop->scope) == 0))
    {
      if(!(prop->sdef == ((const char *)NULL)))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = prop->vdef != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = prop->pdef != NULL ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        if(!(prop->sdef == ((const char *)NULL)))
          tmp_if_expr$1 = prop->sdef;

        else
          tmp_if_expr$1 = (const char *)prop->pdef;
        rd_kafka_anyconf_set_prop0(scope, conf, prop, tmp_if_expr$1, prop->vdef);
      }

    }

}

// rd_kafka_destroy
// file ../src/rdkafka.h line 581
void rd_kafka_destroy(struct rd_kafka_s *rk)
{
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_topic_s *rkt_tmp;
  struct rd_kafka_broker_s *rkb;
  do
    if(!((signed long int)(0x1 & rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rk, (const char *)(void *)0, 7, "DESTROY", "Terminating instance");

  while((_Bool)0);
  __atomic_add_fetch(&rk->rk_terminate, 1, 5);
  pthread_rwlock_rdlock(&rk->rk_lock);
  rkt = (&rk->rk_topics)->tqh_first;
  _Bool tmp_if_expr$1;
  do
  {
    if(!(rkt == ((struct rd_kafka_topic_s *)NULL)))
    {
      rkt_tmp = rkt->rkt_link.tqe_next;
      tmp_if_expr$1 = 1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    pthread_rwlock_unlock(&rk->rk_lock);
    rd_kafka_topic_partitions_remove(rkt);
    pthread_rwlock_rdlock(&rk->rk_lock);
    rkt = rkt_tmp;
  }
  while((_Bool)1);
  rd_kafka_timers_interrupt(rk);
  if(!(rk->rk_conf.term_sig == 0))
  {
    rkb = (&rk->rk_brokers)->tqh_first;
    for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
      pthread_kill(rkb->rkb_thread, rk->rk_conf.term_sig);
  }

  pthread_rwlock_unlock(&rk->rk_lock);
  rd_kafka_destroy0(rk);
}

// rd_kafka_destroy0
// file rdkafka.c line 821
void rd_kafka_destroy0(struct rd_kafka_s *rk)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rk->rk_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1 >= 1))
  {
    rd_kafka_q_purge(&rk->rk_rep);
    free((void *)rk->rk_clientid);
    free((void *)rk->rk_conf.group_id);
    rd_kafka_anyconf_destroy(_RK_GLOBAL, (void *)&rk->rk_conf);
    pthread_rwlock_destroy(&rk->rk_lock);
    free((void *)rk);
    __atomic_sub_fetch(&rd_kafka_handle_cnt_curr, 1, 5);
  }

}

// rd_kafka_dr_msgq
// file rdkafka_broker.c line 1797
void rd_kafka_dr_msgq(struct rd_kafka_s *rk, struct rd_kafka_msgq_s *rkmq, enum anonymous$9 err)
{
  _Bool tmp_if_expr$1;
  if(!(rk->rk_conf.dr_cb == ((void (*)(struct rd_kafka_s *, void *, unsigned long int, enum anonymous$9, void *, void *))NULL)))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = rk->rk_conf.dr_msg_cb != ((void (*)(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *))NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (!(rk->rk_conf.dr_err_only != 0) ? (_Bool)1 : (err != (enum anonymous$9)0 ? (_Bool)1 : (_Bool)0)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
  {
    struct rd_kafka_op_s *rko;
    rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_DR);
    rko->rko_rkmessage.err = err;
    rd_kafka_msgq_move(&rko->rko_msgq, rkmq);
    rd_kafka_op_reply2(rk, rko);
  }

  else
    rd_kafka_msgq_purge(rk, rkmq);
}

// rd_kafka_dump
// file ../src/rdkafka.h line 1143
void rd_kafka_dump(struct _IO_FILE *fp, struct rd_kafka_s *rk)
{
  rd_kafka_dump0(fp, rk, 1);
}

// rd_kafka_dump0
// file rdkafka.c line 1755
static void rd_kafka_dump0(struct _IO_FILE *fp, struct rd_kafka_s *rk, signed int locks)
{
  struct rd_kafka_broker_s *rkb;
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_toppar_s *rktp;
  if(!(locks == 0))
    pthread_rwlock_rdlock(&rk->rk_lock);

  fprintf(fp, "rd_kafka_t %p: %s\n", rk, (const void *)rk->rk_name);
  fprintf(fp, " refcnt %i, producer.msg_cnt %i\n", rk->rk_refcnt, rk->rk_u.producer.msg_cnt);
  signed int return_value_rd_kafka_q_len$1;
  return_value_rd_kafka_q_len$1=rd_kafka_q_len(&rk->rk_rep);
  fprintf(fp, " rk_rep reply queue: %i ops\n", return_value_rd_kafka_q_len$1);
  fprintf(fp, " brokers:\n");
  rkb = (&rk->rk_brokers)->tqh_first;
  float tmp_if_expr$3;
  unsigned long int return_value_rd_clock$2;
  for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
  {
    if(!(locks == 0))
      pthread_mutex_lock(&rkb->rkb_lock);

    if(!(rkb->rkb_ts_state == 0ul))
    {
      return_value_rd_clock$2=rd_clock$link1();
      tmp_if_expr$3 = (float)(return_value_rd_clock$2 - rkb->rkb_ts_state) / 1000000.0f;
    }

    else
      tmp_if_expr$3 = 0.0f;
    fprintf(fp, " rd_kafka_broker_t %p: %s NodeId %d in state %s (for %.3fs)\n", rkb, (const void *)rkb->rkb_name, rkb->rkb_nodeid, rd_kafka_broker_state_names[(signed long int)rkb->rkb_state], tmp_if_expr$3);
    fprintf(fp, "  refcnt %i\n", rkb->rkb_refcnt);
    fprintf(fp, "  outbuf_cnt: %i waitresp_cnt: %i\n", rkb->rkb_outbufs.rkbq_cnt, rkb->rkb_waitresps.rkbq_cnt);
    fprintf(fp, "  %lu messages sent, %lu bytes, %lu errors, %lu timeouts\n  %lu messages received, %lu bytes, %lu errors\n  %lu messageset transmissions were retried\n", rkb->rkb_c.tx, rkb->rkb_c.tx_bytes, rkb->rkb_c.tx_err, rkb->rkb_c.req_timeouts, rkb->rkb_c.rx, rkb->rkb_c.rx_bytes, rkb->rkb_c.rx_err, rkb->rkb_c.tx_retries);
    fprintf(fp, "  %i toppars:\n", rkb->rkb_toppar_cnt);
    if(!(locks == 0))
      pthread_rwlock_rdlock(&rkb->rkb_toppar_lock);

    rktp = (&rkb->rkb_toppars)->tqh_first;
    for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rkblink.tqe_next)
      rd_kafka_toppar_dump(fp, "   ", rktp);
    if(!(locks == 0))
    {
      pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
      pthread_mutex_unlock(&rkb->rkb_lock);
    }

  }
  fprintf(fp, " topics:\n");
  rkt = (&rk->rk_topics)->tqh_first;
  signed int tmp_if_expr$6;
  unsigned short int return_value_ntohs$5;
  for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
  {
    unsigned short int return_value_ntohs$4;
    return_value_ntohs$4=ntohs((unsigned short int)rkt->rkt_topic->len);
    if((signed int)(signed short int)return_value_ntohs$4 == -1)
      tmp_if_expr$6 = 0;

    else
    {
      return_value_ntohs$5=ntohs((unsigned short int)rkt->rkt_topic->len);
      tmp_if_expr$6 = (signed int)return_value_ntohs$5;
    }
    fprintf(fp, "  %.*s with %d partitions, state %s, refcnt %i\n", tmp_if_expr$6, (const void *)rkt->rkt_topic->str, rkt->rkt_partition_cnt, rd_kafka_topic_state_names[(signed long int)rkt->rkt_state], rkt->rkt_refcnt);
    if(!(rkt->rkt_ua == ((struct rd_kafka_toppar_s *)NULL)))
      rd_kafka_toppar_dump(fp, "   ", rkt->rkt_ua);

    if(!(rkt->rkt_desp.tqh_first == ((struct rd_kafka_toppar_s *)NULL)))
    {
      fprintf(fp, "   desired partitions:");
      rktp = (&rkt->rkt_desp)->tqh_first;
      for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rktlink.tqe_next)
        fprintf(fp, " %d", rktp->rktp_partition);
      fprintf(fp, "\n");
    }

  }
  if(!(locks == 0))
    pthread_rwlock_unlock(&rk->rk_lock);

}

// rd_kafka_err2str
// file ../src/rdkafka.h line 149
const char * rd_kafka_err2str(enum anonymous$9 err)
{
  switch((signed int)err)
  {
    case RD_KAFKA_RESP_ERR__BAD_MSG:
      return "Local: Bad message format";
    case RD_KAFKA_RESP_ERR__BAD_COMPRESSION:
      return "Local: Invalid compressed data";
    case RD_KAFKA_RESP_ERR__DESTROY:
      return "Local: Broker handle destroyed";
    case RD_KAFKA_RESP_ERR__FAIL:
      return "Local: Communication failure with broker";
    case RD_KAFKA_RESP_ERR__TRANSPORT:
      return "Local: Broker transport failure";
    case RD_KAFKA_RESP_ERR__CRIT_SYS_RESOURCE:
      return "Local: Critical system resource failure";
    case RD_KAFKA_RESP_ERR__RESOLVE:
      return "Local: Host resolution failure";
    case RD_KAFKA_RESP_ERR__MSG_TIMED_OUT:
      return "Local: Message timed out";
    case RD_KAFKA_RESP_ERR__PARTITION_EOF:
      return "Broker: No more messages";
    case RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION:
      return "Local: Unknown partition";
    case RD_KAFKA_RESP_ERR__FS:
      return "Local: File or filesystem error";
    case RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC:
      return "Local: Unknown topic";
    case RD_KAFKA_RESP_ERR__ALL_BROKERS_DOWN:
      return "Local: All broker connections are down";
    case RD_KAFKA_RESP_ERR__INVALID_ARG:
      return "Local: Invalid argument or configuration";
    case RD_KAFKA_RESP_ERR__TIMED_OUT:
      return "Local: Timed out";
    case RD_KAFKA_RESP_ERR__QUEUE_FULL:
      return "Local: Queue full";
    case RD_KAFKA_RESP_ERR__ISR_INSUFF:
      return "Local: ISR count insufficient";
    case RD_KAFKA_RESP_ERR_UNKNOWN:
      return "Unknown error";
    case RD_KAFKA_RESP_ERR_NO_ERROR:
      return "Success";
    case RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE:
      return "Broker: Offset out of range";
    case RD_KAFKA_RESP_ERR_INVALID_MSG:
      return "Broker: Invalid message";
    case RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART:
      return "Broker: Unknown topic or partition";
    case RD_KAFKA_RESP_ERR_INVALID_MSG_SIZE:
      return "Broker: Invalid message size";
    case RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE:
      return "Broker: Leader not available";
    case RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION:
      return "Broker: Not leader for partition";
    case RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT:
      return "Broker: Request timed out";
    case RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE:
      return "Broker: Broker not available";
    case RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE:
      return "Broker: Replica not available";
    case RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE:
      return "Broker: Message size too large";
    case RD_KAFKA_RESP_ERR_STALE_CTRL_EPOCH:
      return "Broker: StaleControllerEpochCode";
    case RD_KAFKA_RESP_ERR_OFFSET_METADATA_TOO_LARGE:
      return "Broker: Offset metadata string too large";
    default:
    {
      static char ret[32l];
      snprintf(ret, sizeof(char [32l]) /*32ul*/ , "Err-%i?", err);
      return ret;
    }
  }
}

// rd_kafka_errno2err
// file ../src/rdkafka.h line 163
enum anonymous$9 rd_kafka_errno2err(signed int errnox)
{
  switch(errnox)
  {
    case 22:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__INVALID_ARG;
    case 2:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC;
    case 3:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
    case 110:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__TIMED_OUT;
    case 90:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE;
    case 105:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__QUEUE_FULL;
    default:
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__FAIL;
  }
}

// rd_kafka_fetch_reply_handle
// file rdkafka_broker.c line 2978
static enum anonymous$9 rd_kafka_fetch_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf)
{
  char *buf = rkbuf->rkbuf_buf2;
  unsigned long int size = rkbuf->rkbuf_len;
  unsigned long int of = (unsigned long int)0;
  signed int TopicArrayCnt;
  signed int i;
  const signed int log_decode_errors = 1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int _LEN = (signed int)4;
    if(!(size + -of >= (unsigned long int)_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 2987);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
      }

      goto err;
    }

    memcpy((void *)&TopicArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
    of = of + (unsigned long int)4;
    unsigned int return_value_ntohl$1;
    return_value_ntohl$1=ntohl((unsigned int)*((signed int *)&TopicArrayCnt));
    *((signed int *)&TopicArrayCnt) = (signed int)return_value_ntohl$1;
  }
  while((_Bool)0);
  do
  {
    signed int rd_kafka_fetch_reply_handle$$1$$2$$_LEN = (signed int)(TopicArrayCnt * (3 + 4 + 4 + 2 + 8 + 4));
    if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$2$$_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 2991);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$2$$_LEN, (signed int)(size - of));
      }

      goto err;
    }

  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  unsigned short int return_value_ntohs$10;
  signed int tmp_if_expr$12;
  unsigned short int return_value_ntohs$11;
  unsigned short int return_value_ntohs$13;
  signed int tmp_if_expr$15;
  unsigned short int return_value_ntohs$14;
  const char *return_value_rd_kafka_err2str$16;
  signed int return_value_rd_kafka_q_len$20;
  for( ; !(i >= TopicArrayCnt); i = i + 1)
  {
    struct rd_kafkap_str_s *topic;
    struct rd_kafka_toppar_s *rktp;
    signed int PartitionArrayCnt;
    /* tag-#anon#lST[S32'Partition'||S16'ErrorCode'||S64'HighwaterMarkOffset'||S32'MessageSetSize'|] */
struct anonymous$3
{
  // Partition
  signed int Partition;
  // ErrorCode
  signed short int ErrorCode;
  // HighwaterMarkOffset
  signed long int HighwaterMarkOffset;
  // MessageSetSize
  signed int MessageSetSize;
} __attribute__ ((__packed__));

/* */
    ;
    struct anonymous$3 *hdr;
    enum anonymous$9 err2;
    signed int j;
    do
    {
      signed int _klen;
      do
      {
        signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3006);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      topic = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$2;
      return_value_ntohs$2=ntohs((unsigned short int)topic->len);
      if((signed int)(signed short int)return_value_ntohs$2 == -1)
        tmp_if_expr$4 = 0;

      else
      {
        return_value_ntohs$3=ntohs((unsigned short int)topic->len);
        tmp_if_expr$4 = (signed int)return_value_ntohs$3;
      }
      _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$4);
      do
      {
        signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$2$$_LEN = (signed int)_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3006);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$1$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)_klen;
    }
    while((_Bool)0);
    do
    {

    __CPROVER_DUMP_L21:
      ;
      signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$2$$1$$1$$_LEN = (signed int)4;
      if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$2$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3007);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      memcpy((void *)&PartitionArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + (unsigned long int)4;
      unsigned int return_value_ntohl$5;
      return_value_ntohl$5=ntohl((unsigned int)*((signed int *)&PartitionArrayCnt));
      *((signed int *)&PartitionArrayCnt) = (signed int)return_value_ntohl$5;
    }
    while((_Bool)0);
    do
    {
      signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$3$$_LEN = (signed int)(PartitionArrayCnt * (4 + 2 + 8 + 4));
      if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$3$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3009);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$3$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

    }
    while((_Bool)0);
    j = 0;
    for( ; !(j >= PartitionArrayCnt); j = j + 1)
    {
      struct rd_kafka_q_s tmp_opq;
      do
      {

      __CPROVER_DUMP_L30:
        ;
        signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$1$$1$$_LEN = (signed int)sizeof(struct anonymous$3) /*18ul*/ ;
        if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3014);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        hdr = (struct anonymous$3 *)(void *)((char *)buf + (signed long int)of);
        of = of + sizeof(struct anonymous$3) /*18ul*/ ;
      }
      while((_Bool)0);
      unsigned int return_value_ntohl$6;
      return_value_ntohl$6=ntohl((unsigned int)hdr->Partition);
      hdr->Partition = (signed int)return_value_ntohl$6;
      unsigned short int return_value_ntohs$7;
      return_value_ntohs$7=ntohs((unsigned short int)hdr->ErrorCode);
      hdr->ErrorCode = (signed short int)return_value_ntohs$7;
      unsigned long int return_value___bswap_64$8;
      return_value___bswap_64$8=__bswap_64((unsigned long int)hdr->HighwaterMarkOffset);
      hdr->HighwaterMarkOffset = (signed long int)return_value___bswap_64$8;
      unsigned int return_value_ntohl$9;
      return_value_ntohl$9=ntohl((unsigned int)hdr->MessageSetSize);
      hdr->MessageSetSize = (signed int)return_value_ntohl$9;
      rktp=rd_kafka_toppar_get2(rkb->rkb_rk, topic, hdr->Partition, 0);
      if(rktp == ((struct rd_kafka_toppar_s *)NULL))
      {
        do
          if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
          {
            return_value_ntohs$10=ntohs((unsigned short int)topic->len);
            if((signed int)(signed short int)return_value_ntohs$10 == -1)
              tmp_if_expr$12 = 0;

            else
            {
              return_value_ntohs$11=ntohs((unsigned short int)topic->len);
              tmp_if_expr$12 = (signed int)return_value_ntohs$11;
            }
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "UNKTOPIC", "Received Fetch response (error %hu) for unknown topic %.*s [%d]: ignoring", hdr->ErrorCode, tmp_if_expr$12, (const void *)topic->str, hdr->Partition);
          }

        while((_Bool)0);
        do
        {

        __CPROVER_DUMP_L38:
          ;
          signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$2$$2$$1$$_LEN = (signed int)hdr->MessageSetSize;
          if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$2$$2$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3032);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$2$$2$$1$$_LEN, (signed int)(size - of));
            }

            goto err;
          }

          of = of + (unsigned long int)hdr->MessageSetSize;
        }
        while((_Bool)0);
      }

      else
      {
        do
          if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
          {
            return_value_ntohs$13=ntohs((unsigned short int)topic->len);
            if((signed int)(signed short int)return_value_ntohs$13 == -1)
              tmp_if_expr$15 = 0;

            else
            {
              return_value_ntohs$14=ntohs((unsigned short int)topic->len);
              tmp_if_expr$15 = (signed int)return_value_ntohs$14;
            }
            return_value_rd_kafka_err2str$16=rd_kafka_err2str((enum anonymous$9)hdr->ErrorCode);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "FETCH", "Topic %.*s [%d] MessageSet size %d, error \"%s\", MaxOffset %ld", tmp_if_expr$15, (const void *)topic->str, hdr->Partition, hdr->MessageSetSize, return_value_rd_kafka_err2str$16, hdr->HighwaterMarkOffset);
          }

        while((_Bool)0);
        if(hdr->HighwaterMarkOffset == rktp->rktp_next_offset)
        {
          if(!(rktp->rktp_eof_offset == rktp->rktp_next_offset))
          {
            hdr->ErrorCode = (signed short int)RD_KAFKA_RESP_ERR__PARTITION_EOF;
            rktp->rktp_eof_offset = rktp->rktp_next_offset;
          }

        }

        if(!((signed int)hdr->ErrorCode == RD_KAFKA_RESP_ERR_NO_ERROR))
        {
          struct rd_kafka_op_s *rko;
          switch((signed int)hdr->ErrorCode)
          {
            case RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART:

            case RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE:

            case RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION:

            case RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE:
            {
              rd_kafka_topic_leader_query0(rkb->rkb_rk, rktp->rktp_rkt, 1);
              break;
            }
            case RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE:
            {
              rd_kafka_offset_reset(rktp, rktp->rktp_next_offset, (enum anonymous$9)hdr->ErrorCode, "Fetch response");
              break;
            }
            case RD_KAFKA_RESP_ERR__PARTITION_EOF:

            case RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE:

            default:
            {
              rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_ERR);
              rko->rko_rkmessage.err = (enum anonymous$9)hdr->ErrorCode;
              rko->rko_rkmessage.offset = rktp->rktp_next_offset;
              rko->rko_rkmessage.rkt = rktp->rktp_rkt;
              rko->rko_rkmessage.partition = rktp->rktp_partition;
              __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);
              rd_kafka_q_enq$link1(&rktp->rktp_fetchq, rko);
            }
          }
          rd_kafka_broker_fetch_backoff(rkb);
          do
          {
            signed int return_value___atomic_sub_fetch$17;
            return_value___atomic_sub_fetch$17=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
            if(return_value___atomic_sub_fetch$17 == 0)
              rd_kafka_toppar_destroy0(rktp);

          }
          while((_Bool)0);
          goto __CPROVER_DUMP_L69;
        }

        if(!(hdr->MessageSetSize >= 1))
          do
          {
            signed int return_value___atomic_sub_fetch$18;
            return_value___atomic_sub_fetch$18=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
            if(return_value___atomic_sub_fetch$18 == 0)
              rd_kafka_toppar_destroy0(rktp);

          }
          while((_Bool)0);

        else
        {
          rd_kafka_q_init(&tmp_opq);
          err2=rd_kafka_messageset_handle(rkb, rktp, &tmp_opq, rkbuf, (void *)(buf + (signed long int)of), (unsigned long int)hdr->MessageSetSize);
          if(!(err2 == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
          {
            do
            {
              signed int return_value___atomic_sub_fetch$19;
              return_value___atomic_sub_fetch$19=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
              if(return_value___atomic_sub_fetch$19 == 0)
                rd_kafka_toppar_destroy0(rktp);

            }
            while((_Bool)0);
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3126);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "messageset handle failed");
            }

            goto err;
          }

          do
            if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
            {
              return_value_rd_kafka_q_len$20=rd_kafka_q_len$link1(&rktp->rktp_fetchq);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "CONSUME", "Enqueue %i messages on %s [%d] fetch queue (%i)", tmp_opq.rkq_qlen, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, return_value_rd_kafka_q_len$20);
            }

          while((_Bool)0);
          if(tmp_opq.rkq_qlen >= 1)
          {
            __atomic_add_fetch(&rktp->rktp_c.msgs, tmp_opq.rkq_qlen, 5);
            rd_kafka_q_concat0$link1(&rktp->rktp_fetchq, &tmp_opq, 1);
          }

          do
          {
            signed int return_value___atomic_sub_fetch$21;
            return_value___atomic_sub_fetch$21=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
            if(return_value___atomic_sub_fetch$21 == 0)
              rd_kafka_toppar_destroy0(rktp);

          }
          while((_Bool)0);
          rd_kafka_q_destroy(&tmp_opq);
          do
          {

          __CPROVER_DUMP_L65:
            ;
            signed int rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$11$$1$$_LEN = (signed int)hdr->MessageSetSize;
            if(!(size + -of >= (unsigned long int)rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$11$$1$$_LEN))
            {
              if(!(log_decode_errors == 0))
              {
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3149);
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_fetch_reply_handle$$1$$3$$1$$4$$1$$11$$1$$_LEN, (signed int)(size - of));
              }

              goto err;
            }

            of = of + (unsigned long int)hdr->MessageSetSize;
          }
          while((_Bool)0);
        }
      }

    __CPROVER_DUMP_L69:
      ;
    }
  }
  if(!(size == of))
  {
    if(!(log_decode_errors == 0))
    {
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_fetch_reply_handle", 3155);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Remaining data after message set parse: %zd bytes", size - of);
    }

    goto err;
  }

  return (enum anonymous$9)0;

err:
  ;
  return (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
}

// rd_kafka_global_init
// file rdkafka.c line 1193
static void rd_kafka_global_init(void)
{
  ;
}

// rd_kafka_log0
// file rdkafka.c line 122
void rd_kafka_log0(const struct rd_kafka_s *rk, const char *extra, signed int level, const char *fac, const char *fmt, ...)
{
  char buf[2048l];
  void **ap;
  signed int elen = 0;
  _Bool tmp_if_expr$1;
  if(rk->rk_conf.log_cb == ((void (*)(const struct rd_kafka_s *, signed int, const char *, const char *))NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = level > rk->rk_conf.log_level ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr$1)
  {
    if(!(extra == ((const char *)NULL)))
    {
      elen=snprintf(buf, sizeof(char [2048l]) /*2048ul*/ , "%s: ", extra);
      if((unsigned long int)elen >= sizeof(char [2048l]) /*2048ul*/ )
        elen = (signed int)sizeof(char [2048l]) /*2048ul*/ ;

    }

    ap = (void **)&fmt;
    vsnprintf(buf + (signed long int)elen, sizeof(char [2048l]) /*2048ul*/  - (unsigned long int)elen, fmt, ap);
    ap = ((void **)NULL);
    rk->rk_conf.log_cb(rk, level, fac, buf);
  }

}

// rd_kafka_log_buf
// file rdkafka.c line 113
void rd_kafka_log_buf(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf)
{
  _Bool tmp_if_expr$1;
  if(rk->rk_conf.log_cb == ((void (*)(const struct rd_kafka_s *, signed int, const char *, const char *))NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = level > rk->rk_conf.log_level ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr$1)
    rk->rk_conf.log_cb(rk, level, fac, buf);

}

// rd_kafka_log_print
// file rdkafka.c line 146
void rd_kafka_log_print(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  char *tmp_if_expr$1;
  if(!(rk == ((const struct rd_kafka_s *)NULL)))
    tmp_if_expr$1 = rk->rk_name;

  else
    tmp_if_expr$1 = "";
  fprintf(stderr, "%%%i|%u.%03u|%s|%s| %s\n", level, (signed int)tv.tv_sec, (signed int)(tv.tv_usec / (signed long int)1000), fac, tmp_if_expr$1, buf);
}

// rd_kafka_log_syslog
// file rdkafka.c line 157
void rd_kafka_log_syslog(const struct rd_kafka_s *rk, signed int level, const char *fac, const char *buf)
{
  static signed int initialized = 0;
  if(initialized == 0)
    openlog("rdkafka", 0x01 | 0x02, 1 << 3);

  char *tmp_if_expr$1;
  if(!(rk == ((const struct rd_kafka_s *)NULL)))
    tmp_if_expr$1 = rk->rk_name;

  else
    tmp_if_expr$1 = "";
  syslog(level, "%s: %s: %s", fac, tmp_if_expr$1, buf);
}

// rd_kafka_message_destroy
// file ../src/rdkafka.h line 206
void rd_kafka_message_destroy(struct rd_kafka_message_s *rkmessage)
{
  struct rd_kafka_op_s *rko = (struct rd_kafka_op_s *)rkmessage->_private;
  if(!(rko == ((struct rd_kafka_op_s *)NULL)))
    rd_kafka_op_destroy(rko);

  else
    free((void *)rkmessage);
}

// rd_kafka_message_errstr
// file ../src/rdkafka.h line 215
static inline const char * rd_kafka_message_errstr(const struct rd_kafka_message_s *rkmessage)
{
  if(rkmessage->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR)
    return (const char *)(void *)0;

  else
    if(!(rkmessage->payload == NULL))
      return (const char *)rkmessage->payload;

    else
    {
      const char *return_value_rd_kafka_err2str$1;
      return_value_rd_kafka_err2str$1=rd_kafka_err2str(rkmessage->err);
      return return_value_rd_kafka_err2str$1;
    }
}

// rd_kafka_message_get
// file rdkafka.c line 489
static struct rd_kafka_message_s * rd_kafka_message_get(struct rd_kafka_op_s *rko)
{
  struct rd_kafka_message_s *rkmessage;
  void *return_value_calloc$1;
  if(!(rko == ((struct rd_kafka_op_s *)NULL)))
  {
    rkmessage = &rko->rko_rkmessage;
    rkmessage->_private = (void *)rko;
  }

  else
  {
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_message_s) /*72ul*/ );
    rkmessage = (struct rd_kafka_message_s *)return_value_calloc$1;
  }
  return rkmessage;
}

// rd_kafka_messageset_handle
// file rdkafka_broker.c line 2735
static enum anonymous$9 rd_kafka_messageset_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, struct rd_kafka_q_s *rkq, struct rd_kafka_buf_s *rkbuf, void *buf, unsigned long int size)
{
  unsigned long int of = (unsigned long int)0;
  struct rd_kafka_buf_s *rkbufz;
  const signed int log_decode_errors = 0;
  if(size == of)
  {
    if(!(log_decode_errors == 0))
    {
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2747);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "%s [%d] empty messageset", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
    }

    goto err;
  }

  unsigned int tmp_if_expr$5;
  unsigned int return_value_ntohl$4;
  unsigned int tmp_if_expr$8;
  unsigned int return_value_ntohl$7;
  signed int tmp_if_expr$11;
  unsigned int return_value_ntohl$10;
  unsigned int return_value_ntohl$15;
  signed int tmp_if_expr$14;
  unsigned int return_value_ntohl$13;
  unsigned int return_value_ntohl$16;
  char *tmp_if_expr$17;
  _Bool tmp_if_expr$22;
  signed int return_value_memcmp$21;
  char *return_value_strerror$20;
  while(size + -of >= 1ul)
  {
    /* tag-#anon#lST[S64'Offset'||S32'MessageSize'||S32'Crc'||S8'MagicByte'||S8'Attributes'|] */
struct anonymous$2
{
  // Offset
  signed long int Offset;
  // MessageSize
  signed int MessageSize;
  // Crc
  signed int Crc;
  // MagicByte
  signed char MagicByte;
  // Attributes
  signed char Attributes;
} __attribute__ ((__packed__));

/* */
    ;
    struct anonymous$2 *hdr;
    struct rd_kafkap_bytes_s *Key;
    struct rd_kafkap_bytes_s *Value;
    signed int Value_len;
    struct rd_kafka_op_s *rko;
    unsigned long int outlen;
    void *outbuf = (void *)0;
    do
    {

    __CPROVER_DUMP_L4:
      ;
      signed int rd_kafka_messageset_handle$$1$$2$$1$$1$$_LEN = (signed int)sizeof(struct anonymous$2) /*18ul*/ ;
      if(!(size + -of >= (unsigned long int)rd_kafka_messageset_handle$$1$$2$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2764);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_messageset_handle$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      hdr = (struct anonymous$2 *)(void *)((char *)buf + (signed long int)of);
      of = of + sizeof(struct anonymous$2) /*18ul*/ ;
    }
    while((_Bool)0);
    unsigned long int return_value___bswap_64$1;
    return_value___bswap_64$1=__bswap_64((unsigned long int)hdr->Offset);
    hdr->Offset = (signed long int)return_value___bswap_64$1;
    unsigned int return_value_ntohl$2;
    return_value_ntohl$2=ntohl((unsigned int)hdr->MessageSize);
    hdr->MessageSize = (signed int)return_value_ntohl$2;
    if(!(size + -of >= (unsigned long int)(hdr->MessageSize + -6)))
      goto err;

    do
    {
      signed int _klen;
      do
      {
        signed int _LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2783);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      Key = (struct rd_kafkap_bytes_s *)((char *)buf + (signed long int)of);
      unsigned int return_value_ntohl$3;
      return_value_ntohl$3=ntohl((unsigned int)Key->len);
      if((signed int)return_value_ntohl$3 == -1)
        tmp_if_expr$5 = (unsigned int)0;

      else
      {
        return_value_ntohl$4=ntohl((unsigned int)Key->len);
        tmp_if_expr$5 = return_value_ntohl$4;
      }
      _klen = (signed int)(sizeof(signed int) /*4ul*/  + (unsigned long int)tmp_if_expr$5);
      do
      {
        signed int rd_kafka_messageset_handle$$1$$2$$3$$2$$_LEN = (signed int)_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_messageset_handle$$1$$2$$3$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2783);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_messageset_handle$$1$$2$$3$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)_klen;
    }
    while((_Bool)0);
    do
    {
      signed int rd_kafka_messageset_handle$$1$$2$$4$$_klen;
      do
      {
        signed int rd_kafka_messageset_handle$$1$$2$$4$$1$$_LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)rd_kafka_messageset_handle$$1$$2$$4$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2786);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_messageset_handle$$1$$2$$4$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      Value = (struct rd_kafkap_bytes_s *)((char *)buf + (signed long int)of);
      unsigned int return_value_ntohl$6;
      return_value_ntohl$6=ntohl((unsigned int)Value->len);
      if((signed int)return_value_ntohl$6 == -1)
        tmp_if_expr$8 = (unsigned int)0;

      else
      {
        return_value_ntohl$7=ntohl((unsigned int)Value->len);
        tmp_if_expr$8 = return_value_ntohl$7;
      }
      rd_kafka_messageset_handle$$1$$2$$4$$_klen = (signed int)(sizeof(signed int) /*4ul*/  + (unsigned long int)tmp_if_expr$8);
      do
      {
        signed int rd_kafka_messageset_handle$$1$$2$$4$$2$$_LEN = (signed int)rd_kafka_messageset_handle$$1$$2$$4$$_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_messageset_handle$$1$$2$$4$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_messageset_handle", 2786);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_messageset_handle$$1$$2$$4$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)rd_kafka_messageset_handle$$1$$2$$4$$_klen;
    }
    while((_Bool)0);
    unsigned int return_value_ntohl$9;
    return_value_ntohl$9=ntohl((unsigned int)Value->len);
    if((signed int)return_value_ntohl$9 == -1)
      tmp_if_expr$11 = 0;

    else
    {
      return_value_ntohl$10=ntohl((unsigned int)Value->len);
      tmp_if_expr$11 = (signed int)return_value_ntohl$10;
    }
    Value_len = (signed int)tmp_if_expr$11;
    switch((signed int)hdr->Attributes & 0x3)
    {
      case RD_KAFKA_COMPRESSION_NONE:
      {
        if(!(hdr->Offset >= rktp->rktp_next_offset))
          goto __CPROVER_DUMP_L59;

        rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_FETCH);
        return_value_ntohl$15=ntohl((unsigned int)Key->len);
        if(!((signed int)return_value_ntohl$15 == -1))
        {
          rko->rko_rkmessage.key = (void *)Key->data;
          unsigned int return_value_ntohl$12;
          return_value_ntohl$12=ntohl((unsigned int)Key->len);
          if((signed int)return_value_ntohl$12 == -1)
            tmp_if_expr$14 = 0;

          else
          {
            return_value_ntohl$13=ntohl((unsigned int)Key->len);
            tmp_if_expr$14 = (signed int)return_value_ntohl$13;
          }
          rko->rko_rkmessage.key_len = (unsigned long int)(signed int)tmp_if_expr$14;
        }

        return_value_ntohl$16=ntohl((unsigned int)Value->len);
        if((signed int)return_value_ntohl$16 == -1)
          tmp_if_expr$17 = (char *)(void *)0;

        else
          tmp_if_expr$17 = Value->data;
        rko->rko_rkmessage.payload = (void *)tmp_if_expr$17;
        rko->rko_rkmessage.len = (unsigned long int)Value_len;
        rko->rko_rkmessage.offset = hdr->Offset;
        rko->rko_rkmessage.rkt = rktp->rktp_rkt;
        rko->rko_rkmessage.partition = rktp->rktp_partition;
        __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);
        rko->rko_rktp = rktp;
        __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
        rktp->rktp_next_offset = hdr->Offset + (signed long int)1;
        rko->rko_rkbuf = rkbuf;
        __atomic_add_fetch(&rkbuf->rkbuf_refcnt, 1, 5);
        rd_kafka_q_enq$link1(rkq, rko);
        break;
      }
      case RD_KAFKA_COMPRESSION_GZIP:
      {
        unsigned long int outlenx = (unsigned long int)0;
        outbuf=rd_gz_decompress((void *)Value->data, Value_len, &outlenx);
        if(outbuf == NULL)
        {
          do
            if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "GZIP", "Failed to decompress Gzip message at offset %ld of %d bytes: ignoring message", hdr->Offset, Value_len);

          while((_Bool)0);
          goto __CPROVER_DUMP_L59;
        }

        outlen = outlenx;
        break;
      }
      case RD_KAFKA_COMPRESSION_SNAPPY:
      {
        char *inbuf = Value->data;
        signed int r;
        static const signed int snappy_java_hdrlen = 8 + 4 + 4;
        if(!(4 + snappy_java_hdrlen >= Value_len))
        {
          static const char snappy_java_magic[8l] = { (const char)0x82, (const char)83, (const char)78, (const char)65, (const char)80, (const char)80, (const char)89, (const char)0 };
          return_value_memcmp$21=memcmp((const void *)inbuf, (const void *)snappy_java_magic, (unsigned long int)8);
          tmp_if_expr$22 = !(return_value_memcmp$21 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$22 = (_Bool)0;
        if(tmp_if_expr$22)
        {
          inbuf = inbuf + (signed long int)snappy_java_hdrlen;
          Value_len = Value_len - snappy_java_hdrlen;
          char *return_value_rd_kafka_snappy_java_decompress$18;
          return_value_rd_kafka_snappy_java_decompress$18=rd_kafka_snappy_java_decompress(rkb, hdr->Offset, inbuf, (unsigned long int)Value_len, &outlen);
          outbuf = (void *)return_value_rd_kafka_snappy_java_decompress$18;
          if(outbuf == NULL)
            goto __CPROVER_DUMP_L59;

        }

        else
        {
          _Bool return_value_snappy_uncompressed_length$19;
          return_value_snappy_uncompressed_length$19=snappy_uncompressed_length(inbuf, (unsigned long int)Value_len, &outlen);
          if(return_value_snappy_uncompressed_length$19 == (_Bool)0)
          {
            do
              if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Failed to get length of Snappy compressed payload for message at offset %ld (%d bytes): ignoring message", hdr->Offset, Value_len);

            while((_Bool)0);
            goto __CPROVER_DUMP_L59;
          }

          outbuf=malloc(outlen);
          r=snappy_uncompress(inbuf, (unsigned long int)Value_len, (char *)outbuf);
          if(!((signed long int)r == 0l))
          {
            do
              if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
              {
                return_value_strerror$20=strerror(-r);
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Failed to decompress Snappy payload for message at offset %ld (%d bytes): %s: ignoring message", hdr->Offset, Value_len, return_value_strerror$20);
              }

            while((_Bool)0);
            free(outbuf);
            goto __CPROVER_DUMP_L59;
          }

        }
      }
    }
    if(!(outbuf == NULL))
    {
      rkbufz=rd_kafka_buf_new_shadow(outbuf, outlen);
      rd_kafka_messageset_handle(rkb, rktp, rkq, rkbufz, outbuf, outlen);
      rd_kafka_buf_destroy(rkbufz);
    }


  __CPROVER_DUMP_L59:
    ;
  }
  return (enum anonymous$9)0;

err:
  ;
  __atomic_add_fetch(&rkb->rkb_c.rx_partial, 1, 5);
  return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
}

// rd_kafka_metadata
// file rdkafka.c line 1882
enum anonymous$9 rd_kafka_metadata(struct rd_kafka_s *rk, signed int all_topics, struct rd_kafka_topic_s *only_rkt, struct rd_kafka_metadata **metadatap, signed int timeout_ms)
{
  struct rd_kafka_q_s *replyq;
  struct rd_kafka_broker_s *rkb;
  struct rd_kafka_op_s *rko;
  pthread_rwlock_rdlock(&rk->rk_lock);
  rkb=rd_kafka_broker_any(rk, RD_KAFKA_BROKER_STATE_UP);
  if(rkb == ((struct rd_kafka_broker_s *)NULL))
  {
    rkb = (&rk->rk_brokers)->tqh_first;
    if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
      __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);

  }

  pthread_rwlock_unlock(&rk->rk_lock);
  if(rkb == ((struct rd_kafka_broker_s *)NULL))
    return (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT;

  else
  {
    replyq=rd_kafka_q_new();
    __atomic_add_fetch(&replyq->rkq_refcnt, 1, 5);
    rd_kafka_broker_metadata_req(rkb, all_topics, only_rkt, replyq, "application requested");
    rd_kafka_broker_destroy(rkb);
    rko=rd_kafka_q_pop(replyq, timeout_ms);
    rd_kafka_q_destroy(replyq);
    if(rko == ((struct rd_kafka_op_s *)NULL))
      return (enum anonymous$9)RD_KAFKA_RESP_ERR__TIMED_OUT;

    else
    {
      if(!(rko->rko_rkmessage.err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
      {
        enum anonymous$9 err = rko->rko_rkmessage.err;
        rd_kafka_op_destroy(rko);
        return err;
      }

      do
        if(rko->rko_metadata == ((struct rd_kafka_metadata *)NULL))
          rd_kafka_crash("rdkafka.c", 1932, "rd_kafka_metadata", rk, "assert: rko->rko_metadata");

      while((_Bool)0);
      *metadatap = rko->rko_metadata;
      rko->rko_metadata = (struct rd_kafka_metadata *)(void *)0;
      rd_kafka_op_destroy(rko);
      return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
    }
  }
}

// rd_kafka_metadata_destroy
// file rdkafka.c line 1940
void rd_kafka_metadata_destroy(struct rd_kafka_metadata *metadata)
{
  free((void *)metadata);
}

// rd_kafka_metadata_handle
// file rdkafka_broker.c line 833
static struct rd_kafka_metadata * rd_kafka_metadata_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_op_s *rko, const char *buf, unsigned long int size)
{
  signed int i;
  signed int j;
  signed int k;
  signed int of = 0;
  signed int req_rkt_seen = 0;
  char *msh_buf = (char *)(void *)0;
  signed int msh_of = 0;
  signed int msh_size;
  struct rd_kafka_metadata *md = (struct rd_kafka_metadata *)(void *)0;
  signed int rkb_namelen;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(rkb->rkb_name);
  rkb_namelen = (signed int)(return_value_strlen$1 + (unsigned long int)1);
  const signed int log_decode_errors = 1;
  msh_size = (signed int)(sizeof(struct rd_kafka_metadata) /*48ul*/  + (unsigned long int)rkb_namelen + size * (unsigned long int)4);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)msh_size);
  msh_buf = (char *)return_value_malloc$2;
  do
  {
    signed int rd_kafka_metadata_handle$$1$$1$$__LEN = (signed int)sizeof(struct rd_kafka_metadata) /*48ul*/ ;
    if(rd_kafka_metadata_handle$$1$$1$$__LEN + msh_of >= msh_size)
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 850);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$1$$__LEN, msh_size);
      }

      goto err;
    }

    md = (struct rd_kafka_metadata *)(void *)(msh_buf + (signed long int)msh_of);
    msh_of = msh_of + rd_kafka_metadata_handle$$1$$1$$__LEN;
  }
  while((_Bool)0);
  md->orig_broker_id = rkb->rkb_nodeid;
  do
  {
    signed int rd_kafka_metadata_handle$$1$$2$$__LEN = rkb_namelen;
    if(rd_kafka_metadata_handle$$1$$2$$__LEN + msh_of >= msh_size)
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 852);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$2$$__LEN, msh_size);
      }

      goto err;
    }

    md->orig_broker_name = (char *)(void *)(msh_buf + (signed long int)msh_of);
    msh_of = msh_of + rd_kafka_metadata_handle$$1$$2$$__LEN;
  }
  while((_Bool)0);
  memcpy((void *)md->orig_broker_name, (const void *)rkb->rkb_name, (unsigned long int)rkb_namelen);
  do
  {
    signed int rd_kafka_metadata_handle$$1$$3$$_v;
    do
    {

    __CPROVER_DUMP_L10:
      ;
      signed int rd_kafka_metadata_handle$$1$$3$$1$$1$$_LEN = (signed int)4;
      if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$3$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 856);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$3$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
        }

        goto err;
      }

      memcpy((void *)&rd_kafka_metadata_handle$$1$$3$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + 4;
    }
    while((_Bool)0);
    unsigned int return_value_ntohl$3;
    return_value_ntohl$3=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$3$$_v);
    md->broker_cnt = (signed int)return_value_ntohl$3;
  }
  while((_Bool)0);
  if(md->broker_cnt >= 1001)
  {
    if(!(log_decode_errors == 0))
    {
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 859);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Broker_cnt %i > BROKERS_MAX %i", md->broker_cnt, 1000);
    }

    goto err;
  }

  do
  {
    signed int rd_kafka_metadata_handle$$1$$5$$__LEN = (signed int)((unsigned long int)md->broker_cnt * sizeof(struct rd_kafka_metadata_broker) /*24ul*/ );
    if(rd_kafka_metadata_handle$$1$$5$$__LEN + msh_of >= msh_size)
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 861);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$5$$__LEN, msh_size);
      }

      goto err;
    }

    md->brokers = (struct rd_kafka_metadata_broker *)(void *)(msh_buf + (signed long int)msh_of);
    msh_of = msh_of + rd_kafka_metadata_handle$$1$$5$$__LEN;
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$7;
  unsigned short int return_value_ntohs$6;
  for( ; !(i >= md->broker_cnt); i = i + 1)
  {
    do
    {
      signed int rd_kafka_metadata_handle$$1$$6$$1$$1$$_v;
      do
      {

      __CPROVER_DUMP_L22:
        ;
        signed int rd_kafka_metadata_handle$$1$$6$$1$$1$$1$$1$$_LEN = (signed int)4;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$6$$1$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 864);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$6$$1$$1$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

        memcpy((void *)&rd_kafka_metadata_handle$$1$$6$$1$$1$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + 4;
      }
      while((_Bool)0);
      unsigned int return_value_ntohl$4;
      return_value_ntohl$4=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$6$$1$$1$$_v);
      (md->brokers + (signed long int)i)->id = (signed int)return_value_ntohl$4;
    }
    while((_Bool)0);
    do
    {
      struct rd_kafkap_str_s *_kstr;
      signed int _klen;
      do
      {
        signed int rd_kafka_metadata_handle$$1$$6$$1$$2$$1$$_LEN = (signed int)2;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$6$$1$$2$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 865);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$6$$1$$2$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      _kstr = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$5;
      return_value_ntohs$5=ntohs((unsigned short int)_kstr->len);
      if((signed int)(signed short int)return_value_ntohs$5 == -1)
        tmp_if_expr$7 = 0;

      else
      {
        return_value_ntohs$6=ntohs((unsigned short int)_kstr->len);
        tmp_if_expr$7 = (signed int)return_value_ntohs$6;
      }
      _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$7);
      do
      {
        signed int rd_kafka_metadata_handle$$1$$6$$1$$2$$2$$_LEN = (signed int)_klen;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$6$$1$$2$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 865);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$6$$1$$2$$2$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + _klen;
      do
      {
        signed int rd_kafka_metadata_handle$$1$$6$$1$$2$$3$$__LEN = _klen + 1;
        if(rd_kafka_metadata_handle$$1$$6$$1$$2$$3$$__LEN + msh_of >= msh_size)
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 865);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$6$$1$$2$$3$$__LEN, msh_size);
          }

          goto err;
        }

        (md->brokers + (signed long int)i)->host = (char *)(void *)(msh_buf + (signed long int)msh_of);
        msh_of = msh_of + rd_kafka_metadata_handle$$1$$6$$1$$2$$3$$__LEN;
      }
      while((_Bool)0);
      memcpy((void *)(md->brokers + (signed long int)i)->host, (const void *)_kstr->str, (unsigned long int)_klen);
      (md->brokers + (signed long int)i)->host[(signed long int)_klen] = (char)0;
    }
    while((_Bool)0);
    do
    {
      signed int rd_kafka_metadata_handle$$1$$6$$1$$3$$_v;
      do
      {

      __CPROVER_DUMP_L42:
        ;
        signed int rd_kafka_metadata_handle$$1$$6$$1$$3$$1$$1$$_LEN = (signed int)4;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$6$$1$$3$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 866);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$6$$1$$3$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

        memcpy((void *)&rd_kafka_metadata_handle$$1$$6$$1$$3$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + 4;
      }
      while((_Bool)0);
      unsigned int return_value_ntohl$8;
      return_value_ntohl$8=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$6$$1$$3$$_v);
      (md->brokers + (signed long int)i)->port = (signed int)return_value_ntohl$8;
    }
    while((_Bool)0);
  }
  do
  {
    signed int rd_kafka_metadata_handle$$1$$7$$_v;
    do
    {

    __CPROVER_DUMP_L47:
      ;
      signed int _LEN = (signed int)4;
      if(!(size + -((unsigned long int)of) >= (unsigned long int)_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 871);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - (unsigned long int)of));
        }

        goto err;
      }

      memcpy((void *)&rd_kafka_metadata_handle$$1$$7$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + 4;
    }
    while((_Bool)0);
    unsigned int return_value_ntohl$9;
    return_value_ntohl$9=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$7$$_v);
    md->topic_cnt = (signed int)return_value_ntohl$9;
  }
  while((_Bool)0);
  do
    if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "%i brokers, %i topics", md->broker_cnt, md->topic_cnt);

  while((_Bool)0);
  if(md->topic_cnt >= 10001)
  {
    if(!(log_decode_errors == 0))
    {
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 877);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "TopicMetadata_cnt %d > TOPICS_MAX %i", md->topic_cnt, 10000);
    }

    goto err;
  }

  do
  {
    signed int rd_kafka_metadata_handle$$1$$10$$__LEN = (signed int)((unsigned long int)md->topic_cnt * sizeof(struct rd_kafka_metadata_topic) /*32ul*/ );
    if(rd_kafka_metadata_handle$$1$$10$$__LEN + msh_of >= msh_size)
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 879);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$10$$__LEN, msh_size);
      }

      goto err;
    }

    md->topics = (struct rd_kafka_metadata_topic *)(void *)(msh_buf + (signed long int)msh_of);
    msh_of = msh_of + rd_kafka_metadata_handle$$1$$10$$__LEN;
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$13;
  unsigned short int return_value_ntohs$12;
  for( ; !(i >= md->topic_cnt); i = i + 1)
  {
    do
    {
      signed short int rd_kafka_metadata_handle$$1$$11$$1$$1$$_v;
      do
      {

      __CPROVER_DUMP_L61:
        ;
        signed int rd_kafka_metadata_handle$$1$$11$$1$$1$$1$$1$$_LEN = (signed int)2;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 883);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$1$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

        memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$1$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)2);
        of = of + 2;
      }
      while((_Bool)0);
      unsigned short int return_value_ntohs$10;
      return_value_ntohs$10=ntohs((unsigned short int)rd_kafka_metadata_handle$$1$$11$$1$$1$$_v);
      (md->topics + (signed long int)i)->err = (enum anonymous$9)(signed short int)return_value_ntohs$10;
    }
    while((_Bool)0);
    do
    {
      struct rd_kafkap_str_s *rd_kafka_metadata_handle$$1$$11$$1$$2$$_kstr;
      signed int rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen;
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$2$$1$$_LEN = (signed int)2;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$2$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 884);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$2$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      rd_kafka_metadata_handle$$1$$11$$1$$2$$_kstr = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$11;
      return_value_ntohs$11=ntohs((unsigned short int)rd_kafka_metadata_handle$$1$$11$$1$$2$$_kstr->len);
      if((signed int)(signed short int)return_value_ntohs$11 == -1)
        tmp_if_expr$13 = 0;

      else
      {
        return_value_ntohs$12=ntohs((unsigned short int)rd_kafka_metadata_handle$$1$$11$$1$$2$$_kstr->len);
        tmp_if_expr$13 = (signed int)return_value_ntohs$12;
      }
      rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$13);
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$2$$2$$_LEN = (signed int)rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$2$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 884);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$2$$2$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen;
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$2$$3$$__LEN = rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen + 1;
        if(rd_kafka_metadata_handle$$1$$11$$1$$2$$3$$__LEN + msh_of >= msh_size)
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 884);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$11$$1$$2$$3$$__LEN, msh_size);
          }

          goto err;
        }

        (md->topics + (signed long int)i)->topic = (char *)(void *)(msh_buf + (signed long int)msh_of);
        msh_of = msh_of + rd_kafka_metadata_handle$$1$$11$$1$$2$$3$$__LEN;
      }
      while((_Bool)0);
      memcpy((void *)(md->topics + (signed long int)i)->topic, (const void *)rd_kafka_metadata_handle$$1$$11$$1$$2$$_kstr->str, (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen);
      (md->topics + (signed long int)i)->topic[(signed long int)rd_kafka_metadata_handle$$1$$11$$1$$2$$_klen] = (char)0;
    }
    while((_Bool)0);
    do
    {
      signed int rd_kafka_metadata_handle$$1$$11$$1$$3$$_v;
      do
      {

      __CPROVER_DUMP_L81:
        ;
        signed int rd_kafka_metadata_handle$$1$$11$$1$$3$$1$$1$$_LEN = (signed int)4;
        if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$3$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 887);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$3$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
          }

          goto err;
        }

        memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$3$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + 4;
      }
      while((_Bool)0);
      unsigned int return_value_ntohl$14;
      return_value_ntohl$14=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$3$$_v);
      (md->topics + (signed long int)i)->partition_cnt = (signed int)return_value_ntohl$14;
    }
    while((_Bool)0);
    if((md->topics + (signed long int)i)->partition_cnt >= 10001)
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 892);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "TopicMetadata[%i].PartitionMetadata_cnt %i > PARTITIONS_MAX %i", i, (md->topics + (signed long int)i)->partition_cnt, 10000);
      }

      goto err;
    }

    do
    {
      signed int rd_kafka_metadata_handle$$1$$11$$1$$5$$__LEN = (signed int)((unsigned long int)(md->topics + (signed long int)i)->partition_cnt * sizeof(struct rd_kafka_metadata_partition) /*40ul*/ );
      if(rd_kafka_metadata_handle$$1$$11$$1$$5$$__LEN + msh_of >= msh_size)
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 896);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$11$$1$$5$$__LEN, msh_size);
        }

        goto err;
      }

      (md->topics + (signed long int)i)->partitions = (struct rd_kafka_metadata_partition *)(void *)(msh_buf + (signed long int)msh_of);
      msh_of = msh_of + rd_kafka_metadata_handle$$1$$11$$1$$5$$__LEN;
    }
    while((_Bool)0);
    j = 0;
    for( ; !(j >= (md->topics + (signed long int)i)->partition_cnt); j = j + 1)
    {
      do
      {
        signed short int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$_v;
        do
        {

        __CPROVER_DUMP_L93:
          ;
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$1$$1$$_LEN = (signed int)2;
          if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 899);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
            }

            goto err;
          }

          memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)2);
          of = of + 2;
        }
        while((_Bool)0);
        unsigned short int return_value_ntohs$15;
        return_value_ntohs$15=ntohs((unsigned short int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$1$$_v);
        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->err = (enum anonymous$9)(signed short int)return_value_ntohs$15;
      }
      while((_Bool)0);
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$_v;
        do
        {

        __CPROVER_DUMP_L98:
          ;
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$1$$1$$_LEN = (signed int)4;
          if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 900);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
            }

            goto err;
          }

          memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
          of = of + 4;
        }
        while((_Bool)0);
        unsigned int return_value_ntohl$16;
        return_value_ntohl$16=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$2$$_v);
        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->id = (signed int)return_value_ntohl$16;
      }
      while((_Bool)0);
      do
      {
        signed int _v;
        do
        {

        __CPROVER_DUMP_L103:
          ;
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$3$$1$$1$$_LEN = (signed int)4;
          if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$3$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 901);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$3$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
            }

            goto err;
          }

          memcpy((void *)&_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
          of = of + 4;
        }
        while((_Bool)0);
        unsigned int return_value_ntohl$17;
        return_value_ntohl$17=ntohl((unsigned int)_v);
        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->leader = (signed int)return_value_ntohl$17;
      }
      while((_Bool)0);
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$_v;
        do
        {

        __CPROVER_DUMP_L108:
          ;
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$1$$1$$_LEN = (signed int)4;
          if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 904);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
            }

            goto err;
          }

          memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
          of = of + 4;
        }
        while((_Bool)0);
        unsigned int return_value_ntohl$18;
        return_value_ntohl$18=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$4$$_v);
        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->replica_cnt = (signed int)return_value_ntohl$18;
      }
      while((_Bool)0);
      if(((md->topics + (signed long int)i)->partitions + (signed long int)j)->replica_cnt >= 1001)
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 912);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "TopicMetadata[%i].PartitionMetadata[%i].Replica_cnt %i > BROKERS_MAX %i", i, j, ((md->topics + (signed long int)i)->partitions + (signed long int)j)->replica_cnt, 1000);
        }

        goto err;
      }

      do
      {
        signed int __LEN = (signed int)((unsigned long int)((md->topics + (signed long int)i)->partitions + (signed long int)j)->replica_cnt * sizeof(signed int) /*4ul*/ );
        if(__LEN + msh_of >= msh_size)
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 917);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, __LEN, msh_size);
          }

          goto err;
        }

        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->replicas = (signed int *)(void *)(msh_buf + (signed long int)msh_of);
        msh_of = msh_of + __LEN;
      }
      while((_Bool)0);
      k = 0;
      for( ; !(k >= ((md->topics + (signed long int)i)->partitions + (signed long int)j)->replica_cnt); k = k + 1)
        do
        {
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$_v;
          do
          {

          __CPROVER_DUMP_L120:
            ;
            signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$1$$1$$_LEN = (signed int)4;
            if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$1$$1$$_LEN))
            {
              if(!(log_decode_errors == 0))
              {
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 922);
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
              }

              goto err;
            }

            memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
            of = of + 4;
          }
          while((_Bool)0);
          unsigned int return_value_ntohl$19;
          return_value_ntohl$19=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$7$$1$$_v);
          ((md->topics + (signed long int)i)->partitions + (signed long int)j)->replicas[(signed long int)k] = (signed int)return_value_ntohl$19;
        }
        while((_Bool)0);
      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$_v;
        do
        {

        __CPROVER_DUMP_L125:
          ;
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$1$$1$$_LEN = (signed int)4;
          if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 925);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
            }

            goto err;
          }

          memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
          of = of + 4;
        }
        while((_Bool)0);
        unsigned int return_value_ntohl$20;
        return_value_ntohl$20=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$8$$_v);
        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->isr_cnt = (signed int)return_value_ntohl$20;
      }
      while((_Bool)0);
      if(((md->topics + (signed long int)i)->partitions + (signed long int)j)->isr_cnt >= 1001)
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 933);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "TopicMetadata[%i].PartitionMetadata[%i].Isr_cnt %i > BROKERS_MAX %i", i, j, ((md->topics + (signed long int)i)->partitions + (signed long int)j)->isr_cnt, 1000);
        }

        goto err;
      }

      do
      {
        signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$10$$__LEN = (signed int)((unsigned long int)((md->topics + (signed long int)i)->partitions + (signed long int)j)->isr_cnt * sizeof(signed int) /*4ul*/ );
        if(rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$10$$__LEN + msh_of >= msh_size)
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 937);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Not enough room in marshall buffer: %i+%i > %i", msh_of, rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$10$$__LEN, msh_size);
          }

          goto err;
        }

        ((md->topics + (signed long int)i)->partitions + (signed long int)j)->isrs = (signed int *)(void *)(msh_buf + (signed long int)msh_of);
        msh_of = msh_of + rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$10$$__LEN;
      }
      while((_Bool)0);
      k = 0;
      for( ; !(k >= ((md->topics + (signed long int)i)->partitions + (signed long int)j)->isr_cnt); k = k + 1)
        do
        {
          signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$_v;
          do
          {

          __CPROVER_DUMP_L137:
            ;
            signed int rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$1$$1$$_LEN = (signed int)4;
            if(!(size + -((unsigned long int)of) >= (unsigned long int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$1$$1$$_LEN))
            {
              if(!(log_decode_errors == 0))
              {
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_metadata_handle", 941);
                rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$1$$1$$_LEN, (signed int)(size - (unsigned long int)of));
              }

              goto err;
            }

            memcpy((void *)&rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$_v, (const void *)(buf + (signed long int)of), (unsigned long int)4);
            of = of + 4;
          }
          while((_Bool)0);
          unsigned int return_value_ntohl$21;
          return_value_ntohl$21=ntohl((unsigned int)rd_kafka_metadata_handle$$1$$11$$1$$6$$1$$11$$1$$_v);
          ((md->topics + (signed long int)i)->partitions + (signed long int)j)->isrs[(signed long int)k] = (signed int)return_value_ntohl$21;
        }
        while((_Bool)0);
    }
  }
  i = 0;
  for( ; !(i >= md->broker_cnt); i = i + 1)
  {
    do
      if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "  Broker #%i/%i: %s:%i NodeId %d", i, md->broker_cnt, (md->brokers + (signed long int)i)->host, (md->brokers + (signed long int)i)->port, (md->brokers + (signed long int)i)->id);

    while((_Bool)0);
    rd_kafka_broker_update(rkb->rkb_rk, &md->brokers[(signed long int)i]);
  }
  i = 0;
  const char *tmp_if_expr$23;
  const char *return_value_rd_kafka_err2str$22;
  signed int return_value_rd_kafkap_str_cmp_str$24;
  for( ; !(i >= md->topic_cnt); i = i + 1)
  {
    do
      if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        if(!((md->topics + (signed long int)i)->err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
        {
          return_value_rd_kafka_err2str$22=rd_kafka_err2str((md->topics + (signed long int)i)->err);
          tmp_if_expr$23 = return_value_rd_kafka_err2str$22;
        }

        else
          tmp_if_expr$23 = "";
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "  Topic #%i/%i: %s with %i partitions%s%s", i, md->topic_cnt, (md->topics + (signed long int)i)->topic, (md->topics + (signed long int)i)->partition_cnt, (md->topics + (signed long int)i)->err != (enum anonymous$9)0 ? ": " : "", tmp_if_expr$23);
      }

    while((_Bool)0);
    if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
    {
      return_value_rd_kafkap_str_cmp_str$24=rd_kafkap_str_cmp_str(rko->rko_rkmessage.rkt->rkt_topic, (md->topics + (signed long int)i)->topic);
      if(return_value_rd_kafkap_str_cmp_str$24 == 0)
        req_rkt_seen = req_rkt_seen + 1;

    }

    rd_kafka_topic_metadata_update(rkb, &md->topics[(signed long int)i]);
  }
  if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
  {
    do
      if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "Requested topic %s %sseen in metadata", (const void *)rko->rko_rkmessage.rkt->rkt_topic->str, req_rkt_seen != 0 ? "" : "not ");

    while((_Bool)0);
    if(req_rkt_seen == 0)
      rd_kafka_topic_metadata_none(rko->rko_rkmessage.rkt);

  }

  return md;

err:
  ;
  free((void *)md);
  return (struct rd_kafka_metadata *)(void *)0;
}

// rd_kafka_metadata_refresh_cb
// file rdkafka.c line 1134
static void rd_kafka_metadata_refresh_cb(struct rd_kafka_s *rk, void *arg)
{
  struct rd_kafka_broker_s *rkb;
  pthread_rwlock_rdlock(&rk->rk_lock);
  rkb=rd_kafka_broker_any(rk, RD_KAFKA_BROKER_STATE_UP);
  pthread_rwlock_unlock(&rk->rk_lock);
  if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
  {
    if(!(rk->rk_conf.metadata_refresh_sparse == 0))
      rd_kafka_broker_metadata_req(rkb, 0, (struct rd_kafka_topic_s *)(void *)0, (struct rd_kafka_q_s *)(void *)0, "sparse periodic refresh");

    else
      rd_kafka_broker_metadata_req(rkb, 1, (struct rd_kafka_topic_s *)(void *)0, (struct rd_kafka_q_s *)(void *)0, "periodic refresh");
    rd_kafka_broker_destroy(rkb);
  }

}

// rd_kafka_msg_destroy
// file rdkafka_msg.h line 33
void rd_kafka_msg_destroy(struct rd_kafka_s *rk, struct rd_kafka_msg_s *rkm)
{
  do
    if(!(rk->rk_u.producer.msg_cnt >= 1))
      rd_kafka_crash("rdkafka_msg.c", 40, "rd_kafka_msg_destroy", rk, "assert: rk->rk_producer.msg_cnt > 0");

  while((_Bool)0);
  __atomic_sub_fetch(&rk->rk_u.producer.msg_cnt, 1, 5);
  if(!((0x1 & rkm->rkm_flags) == 0))
  {
    if(!(rkm->rkm_payload == NULL))
      free(rkm->rkm_payload);

  }

  if(!(rkm->rkm_key == ((struct rd_kafkap_bytes_s *)NULL)))
    free((void *)rkm->rkm_key);

  free((void *)rkm);
}

// rd_kafka_msg_new
// file rdkafka_msg.h line 35
signed int rd_kafka_msg_new(struct rd_kafka_topic_s *rkt, signed int force_partition, signed int msgflags, char *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque)
{
  struct rd_kafka_msg_s *rkm;
  enum anonymous$9 err;
  signed int return_value___atomic_add_fetch$2;
  return_value___atomic_add_fetch$2=__atomic_add_fetch(&rkt->rkt_rk->rk_u.producer.msg_cnt, 1, 5);
  if(!(rkt->rkt_rk->rk_conf.queue_buffering_max_msgs >= return_value___atomic_add_fetch$2))
  {
    __atomic_sub_fetch(&rkt->rkt_rk->rk_u.producer.msg_cnt, 1, 5);
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 105;
    return -1;
  }

  unsigned long int return_value_rd_clock$3;
  return_value_rd_clock$3=rd_clock$link3();
  rkm=rd_kafka_msg_new0(rkt, force_partition, msgflags, payload, len, key, keylen, msg_opaque, &err, return_value_rd_clock$3);
  signed int *return_value___errno_location$5;
  signed int *return_value___errno_location$6;
  signed int *return_value___errno_location$7;
  if(rkm == ((struct rd_kafka_msg_s *)NULL))
  {
    __atomic_sub_fetch(&rkt->rkt_rk->rk_u.producer.msg_cnt, 1, 5);
    return -1;
  }

  else
  {
    signed int return_value_rd_kafka_msg_partitioner$4;
    return_value_rd_kafka_msg_partitioner$4=rd_kafka_msg_partitioner(rkt, rkm, 1);
    err = (enum anonymous$9)return_value_rd_kafka_msg_partitioner$4;
    if(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR)
      return 0;

    else
    {
      rd_kafka_msg_destroy(rkt->rkt_rk, rkm);
      if((signed int)err == RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION)
      {
        return_value___errno_location$5=__errno_location();
        *return_value___errno_location$5 = 3;
      }

      else
        if((signed int)err == RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC)
        {
          return_value___errno_location$6=__errno_location();
          *return_value___errno_location$6 = 2;
        }

        else
        {
          return_value___errno_location$7=__errno_location();
          *return_value___errno_location$7 = 22;
        }
      return -1;
    }
  }
}

// rd_kafka_msg_new0
// file rdkafka_msg.c line 58
static struct rd_kafka_msg_s * rd_kafka_msg_new0(struct rd_kafka_topic_s *rkt, signed int force_partition, signed int msgflags, char *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque, enum anonymous$9 *errp, unsigned long int now)
{
  struct rd_kafka_msg_s *rkm;
  unsigned long int mlen = sizeof(struct rd_kafka_msg_s) /*80ul*/ ;
  if(!((unsigned long int)rkt->rkt_rk->rk_conf.max_msg_size >= keylen + len))
  {
    *errp = (enum anonymous$9)RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 90;
    return (struct rd_kafka_msg_s *)(void *)0;
  }

  if(!((0x2 & msgflags) == 0))
  {
    msgflags = msgflags & ~0x1;
    mlen = mlen + len;
  }

  void *return_value_malloc$2;
  return_value_malloc$2=malloc(mlen);
  rkm = (struct rd_kafka_msg_s *)return_value_malloc$2;
  rkm->rkm_len = len;
  rkm->rkm_flags = msgflags;
  rkm->rkm_opaque = msg_opaque;
  rkm->rkm_key=rd_kafkap_bytes_new(key, keylen);
  rkm->rkm_partition = force_partition;
  if(rkt->rkt_conf.message_timeout_ms == 0)
    rkm->rkm_ts_timeout = (unsigned long int)9223372036854775807L;

  else
    rkm->rkm_ts_timeout = now + (unsigned long int)(rkt->rkt_conf.message_timeout_ms * 1000);
  if(!((0x2 & msgflags) == 0) && !(payload == ((char *)NULL)))
  {
    rkm->rkm_payload = (void *)(rkm + (signed long int)1);
    memcpy(rkm->rkm_payload, (const void *)payload, len);
  }

  else
    rkm->rkm_payload = (void *)payload;
  return rkm;
}

// rd_kafka_msg_partitioner
// file rdkafka_msg.c line 319
signed int rd_kafka_msg_partitioner(struct rd_kafka_topic_s *rkt, struct rd_kafka_msg_s *rkm, signed int do_lock)
{
  signed int partition;
  struct rd_kafka_toppar_s *rktp_new;
  enum anonymous$9 err;
  if(!(do_lock == 0))
    pthread_rwlock_rdlock(&rkt->rkt_lock);

  unsigned int return_value_ntohl$1;
  signed int tmp_if_expr$3;
  unsigned int return_value_ntohl$2;
  switch((signed int)rkt->rkt_state)
  {
    case RD_KAFKA_TOPIC_S_UNKNOWN:
    {
      partition = (signed int)-1;
      break;
    }
    case RD_KAFKA_TOPIC_S_NOTEXISTS:
    {
      err = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC;
      if(!(do_lock == 0))
        pthread_rwlock_unlock(&rkt->rkt_lock);

      return (signed int)err;
    }
    case RD_KAFKA_TOPIC_S_EXISTS:
    {
      if(rkt->rkt_partition_cnt == 0)
      {
        partition = (signed int)-1;
        break;
      }

      if(rkm->rkm_partition == -1)
      {
        return_value_ntohl$1=ntohl((unsigned int)rkm->rkm_key->len);
        if((signed int)return_value_ntohl$1 == -1)
          tmp_if_expr$3 = 0;

        else
        {
          return_value_ntohl$2=ntohl((unsigned int)rkm->rkm_key->len);
          tmp_if_expr$3 = (signed int)return_value_ntohl$2;
        }
        partition=rkt->rkt_conf.partitioner(rkt, (const void *)rkm->rkm_key->data, (unsigned long int)(signed int)tmp_if_expr$3, rkt->rkt_partition_cnt, rkt->rkt_conf.opaque, rkm->rkm_opaque);
      }

      else
        partition = rkm->rkm_partition;
      if(partition >= rkt->rkt_partition_cnt)
      {
        err = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
        if(!(do_lock == 0))
          pthread_rwlock_unlock(&rkt->rkt_lock);

        return (signed int)err;
      }

      break;
    }
    default:
      do
        rd_kafka_crash("rdkafka_msg.c", 379, "rd_kafka_msg_partitioner", rkt->rkt_rk, "assert: !*\"NOTREACHED\"");
      while((_Bool)0);
  }
  rktp_new=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp_new == ((struct rd_kafka_toppar_s *)NULL))
  {
    if((signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_NOTEXISTS)
      err = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC;

    else
      err = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
    if(!(do_lock == 0))
      pthread_rwlock_unlock(&rkt->rkt_lock);

    return (signed int)err;
  }

  else
  {
    __atomic_add_fetch(&rktp_new->rktp_c.msgs, 1, 5);
    rd_kafka_toppar_enq_msg(rktp_new, rkm);
    if(!(do_lock == 0))
      pthread_rwlock_unlock(&rkt->rkt_lock);

    do
    {
      signed int return_value___atomic_sub_fetch$4;
      return_value___atomic_sub_fetch$4=__atomic_sub_fetch(&rktp_new->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$4 == 0)
        rd_kafka_toppar_destroy0(rktp_new);

    }
    while((_Bool)0);
    return 0;
  }
}

// rd_kafka_msg_partitioner_random
// file rdkafka_msg.c line 302
signed int rd_kafka_msg_partitioner_random(const struct rd_kafka_topic_s *rkt, const void *key, unsigned long int keylen, signed int partition_cnt, void *rkt_opaque, void *msg_opaque)
{
  signed int p;
  p=rd_jitter$link1(0, partition_cnt - 1);
  signed int return_value_rd_kafka_topic_partition_available$2;
  return_value_rd_kafka_topic_partition_available$2=rd_kafka_topic_partition_available(rkt, p);
  signed int return_value_rd_jitter$1;
  if(return_value_rd_kafka_topic_partition_available$2 == 0)
  {
    return_value_rd_jitter$1=rd_jitter$link1(0, partition_cnt - 1);
    return return_value_rd_jitter$1;
  }

  else
    return p;
}

// rd_kafka_msghdr_rebuild
// file rdkafka_broker.c line 1330
static void rd_kafka_msghdr_rebuild(struct msghdr *dst, unsigned long int dst_len, struct msghdr *src, signed long int of)
{
  signed int i;
  unsigned long int len = (unsigned long int)0;
  void *iov = (void *)dst->msg_iov;
  *dst = *src;
  dst->msg_iov = (struct iovec *)iov;
  dst->msg_iovlen = (unsigned long int)0;
  i = 0;
  for( ; !((unsigned long int)i >= src->msg_iovlen); i = i + 1)
  {
    signed long int vof = (signed long int)((unsigned long int)of - len);
    if(!(vof >= 0l))
      vof = (signed long int)0;

    if(!((unsigned long int)vof >= (src->msg_iov + (signed long int)i)->iov_len))
    {
      do
        if(dst->msg_iovlen >= dst_len)
          rd_kafka_crash("rdkafka_broker.c", 1355, "rd_kafka_msghdr_rebuild", (struct rd_kafka_s *)(void *)0, "assert: dst->msg_iovlen < dst_len");

      while((_Bool)0);
      (dst->msg_iov + (signed long int)dst->msg_iovlen)->iov_base = (void *)((char *)(src->msg_iov + (signed long int)i)->iov_base + vof);
      (dst->msg_iov + (signed long int)dst->msg_iovlen)->iov_len = (src->msg_iov + (signed long int)i)->iov_len - (unsigned long int)vof;
      dst->msg_iovlen = dst->msg_iovlen + 1ul;
    }

    len = len + (src->msg_iov + (signed long int)i)->iov_len;
  }
}

// rd_kafka_msghdr_size
// file rdkafka_broker.c line 94
static unsigned long int rd_kafka_msghdr_size(struct msghdr *msg)
{
  signed int i;
  unsigned long int tot = (unsigned long int)0;
  i = 0;
  for( ; !((unsigned long int)i >= msg->msg_iovlen); i = i + 1)
    tot = tot + (msg->msg_iov + (signed long int)i)->iov_len;
  return tot;
}

// rd_kafka_msgq_age_scan
// file rdkafka_msg.h line 148
signed int rd_kafka_msgq_age_scan(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msgq_s *timedout, unsigned long int now)
{
  struct rd_kafka_msg_s *rkm;
  struct rd_kafka_msg_s *tmp;
  signed int rd_kafka_msgq_age_scan$$1$$cnt = timedout->rkmq_msg_cnt;
  rkm = (&rkmq->rkmq_msgs)->tqh_first;
  _Bool tmp_if_expr$1;
  do
  {
    if(!(rkm == ((struct rd_kafka_msg_s *)NULL)))
    {
      tmp = rkm->rkm_link.tqe_next;
      tmp_if_expr$1 = 1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    if(!(now >= rkm->rkm_ts_timeout))
      break;

    rd_kafka_msgq_deq$link1(rkmq, rkm, 1);
    rd_kafka_msgq_enq$link1(timedout, rkm);
    rkm = tmp;
  }
  while((_Bool)1);
  return timedout->rkmq_msg_cnt - rd_kafka_msgq_age_scan$$1$$cnt;
}

// rd_kafka_msgq_concat
// file rdkafka_msg.h line 52
static inline void rd_kafka_msgq_concat(struct rd_kafka_msgq_s *dst, struct rd_kafka_msgq_s *src)
{
  do
    if(!(src->rkmq_msgs.tqh_first == ((struct rd_kafka_msg_s *)NULL)))
    {
      *(&dst->rkmq_msgs)->tqh_last = (&src->rkmq_msgs)->tqh_first;
      (&src->rkmq_msgs)->tqh_first->rkm_link.tqe_prev = (&dst->rkmq_msgs)->tqh_last;
      (&dst->rkmq_msgs)->tqh_last = (&src->rkmq_msgs)->tqh_last;
      do
      {
        (&src->rkmq_msgs)->tqh_first = (struct rd_kafka_msg_s *)(void *)0;
        (&src->rkmq_msgs)->tqh_last = &(&src->rkmq_msgs)->tqh_first;
      }
      while((_Bool)0);
    }

  while((_Bool)0);
  __atomic_add_fetch(&dst->rkmq_msg_cnt, src->rkmq_msg_cnt, 5);
  __atomic_add_fetch(&dst->rkmq_msg_bytes, src->rkmq_msg_bytes, 5);
  rd_kafka_msgq_init$link1(src);
}

// rd_kafka_msgq_concat$link1
// file rdkafka_msg.h line 52
static inline void rd_kafka_msgq_concat$link1(struct rd_kafka_msgq_s *dst$link1, struct rd_kafka_msgq_s *src$link1)
{
  do
    if(!(src$link1->rkmq_msgs.tqh_first == ((struct rd_kafka_msg_s *)NULL)))
    {
      *(&dst$link1->rkmq_msgs)->tqh_last = (&src$link1->rkmq_msgs)->tqh_first;
      (&src$link1->rkmq_msgs)->tqh_first->rkm_link.tqe_prev = (&dst$link1->rkmq_msgs)->tqh_last;
      (&dst$link1->rkmq_msgs)->tqh_last = (&src$link1->rkmq_msgs)->tqh_last;
      do
      {
        (&src$link1->rkmq_msgs)->tqh_first = (struct rd_kafka_msg_s *)(void *)0;
        (&src$link1->rkmq_msgs)->tqh_last = &(&src$link1->rkmq_msgs)->tqh_first;
      }
      while((_Bool)0);
    }

  while((_Bool)0);
  __atomic_add_fetch(&dst$link1->rkmq_msg_cnt, src$link1->rkmq_msg_cnt, 5);
  __atomic_add_fetch(&dst$link1->rkmq_msg_bytes, src$link1->rkmq_msg_bytes, 5);
  rd_kafka_msgq_init$link2(src$link1);
}

// rd_kafka_msgq_deq
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm, signed int do_count)
{
  if(!((signed long int)do_count == 0l))
  {
    do
      if(!(rkmq->rkmq_msg_cnt >= 1))
        rd_kafka_crash("rdkafka_msg.h", 100, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_cnt > 0");

    while((_Bool)0);
    do
      if(!(rkmq->rkmq_msg_bytes >= rkm->rkm_len))
        rd_kafka_crash("rdkafka_msg.h", 101, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_bytes >= rkm->rkm_len");

    while((_Bool)0);
    __atomic_sub_fetch(&rkmq->rkmq_msg_cnt, 1, 5);
    __atomic_sub_fetch(&rkmq->rkmq_msg_bytes, rkm->rkm_len, 5);
  }

  do
  {
    if(!(rkm->rkm_link.tqe_next == ((struct rd_kafka_msg_s *)NULL)))
      rkm->rkm_link.tqe_next->rkm_link.tqe_prev = rkm->rkm_link.tqe_prev;

    else
      (&rkmq->rkmq_msgs)->tqh_last = rkm->rkm_link.tqe_prev;
    *rkm->rkm_link.tqe_prev = rkm->rkm_link.tqe_next;
  }
  while((_Bool)0);
  return rkm;
}

// rd_kafka_msgq_deq$link1
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq$link1(struct rd_kafka_msgq_s *rkmq$link1, struct rd_kafka_msg_s *rkm$link1, signed int do_count$link1)
{
  if(!((signed long int)do_count$link1 == 0l))
  {
    do
      if(!(rkmq$link1->rkmq_msg_cnt >= 1))
        rd_kafka_crash("rdkafka_msg.h", 100, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_cnt > 0");

    while((_Bool)0);
    do
      if(!(rkmq$link1->rkmq_msg_bytes >= rkm$link1->rkm_len))
        rd_kafka_crash("rdkafka_msg.h", 101, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_bytes >= rkm->rkm_len");

    while((_Bool)0);
    __atomic_sub_fetch(&rkmq$link1->rkmq_msg_cnt, 1, 5);
    __atomic_sub_fetch(&rkmq$link1->rkmq_msg_bytes, rkm$link1->rkm_len, 5);
  }

  do
  {
    if(!(rkm$link1->rkm_link.tqe_next == ((struct rd_kafka_msg_s *)NULL)))
      rkm$link1->rkm_link.tqe_next->rkm_link.tqe_prev = rkm$link1->rkm_link.tqe_prev;

    else
      (&rkmq$link1->rkmq_msgs)->tqh_last = rkm$link1->rkm_link.tqe_prev;
    *rkm$link1->rkm_link.tqe_prev = rkm$link1->rkm_link.tqe_next;
  }
  while((_Bool)0);
  return rkm$link1;
}

// rd_kafka_msgq_deq$link2
// file rdkafka_msg.h line 96
static inline struct rd_kafka_msg_s * rd_kafka_msgq_deq$link2(struct rd_kafka_msgq_s *rkmq$link2, struct rd_kafka_msg_s *rkm$link2, signed int do_count$link2)
{
  if(!((signed long int)do_count$link2 == 0l))
  {
    do
      if(!(rkmq$link2->rkmq_msg_cnt >= 1))
        rd_kafka_crash("rdkafka_msg.h", 100, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_cnt > 0");

    while((_Bool)0);
    do
      if(!(rkmq$link2->rkmq_msg_bytes >= rkm$link2->rkm_len))
        rd_kafka_crash("rdkafka_msg.h", 101, "rd_kafka_msgq_deq", (struct rd_kafka_s *)(void *)0, "assert: rkmq->rkmq_msg_bytes >= rkm->rkm_len");

    while((_Bool)0);
    __atomic_sub_fetch(&rkmq$link2->rkmq_msg_cnt, 1, 5);
    __atomic_sub_fetch(&rkmq$link2->rkmq_msg_bytes, rkm$link2->rkm_len, 5);
  }

  do
  {
    if(!(rkm$link2->rkm_link.tqe_next == ((struct rd_kafka_msg_s *)NULL)))
      rkm$link2->rkm_link.tqe_next->rkm_link.tqe_prev = rkm$link2->rkm_link.tqe_prev;

    else
      (&rkmq$link2->rkmq_msgs)->tqh_last = rkm$link2->rkm_link.tqe_prev;
    *rkm$link2->rkm_link.tqe_prev = rkm$link2->rkm_link.tqe_next;
  }
  while((_Bool)0);
  return rkm$link2;
}

// rd_kafka_msgq_enq
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm)
{
  do
  {
    rkm->rkm_link.tqe_next = (struct rd_kafka_msg_s *)(void *)0;
    rkm->rkm_link.tqe_prev = (&rkmq->rkmq_msgs)->tqh_last;
    *(&rkmq->rkmq_msgs)->tqh_last = rkm;
    (&rkmq->rkmq_msgs)->tqh_last = &rkm->rkm_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkmq->rkmq_msg_cnt, 1, 5);
  __atomic_add_fetch(&rkmq->rkmq_msg_bytes, rkm->rkm_len, 5);
}

// rd_kafka_msgq_enq$link1
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq$link1(struct rd_kafka_msgq_s *rkmq$link1, struct rd_kafka_msg_s *rkm$link1)
{
  do
  {
    rkm$link1->rkm_link.tqe_next = (struct rd_kafka_msg_s *)(void *)0;
    rkm$link1->rkm_link.tqe_prev = (&rkmq$link1->rkmq_msgs)->tqh_last;
    *(&rkmq$link1->rkmq_msgs)->tqh_last = rkm$link1;
    (&rkmq$link1->rkmq_msgs)->tqh_last = &rkm$link1->rkm_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkmq$link1->rkmq_msg_cnt, 1, 5);
  __atomic_add_fetch(&rkmq$link1->rkmq_msg_bytes, rkm$link1->rkm_len, 5);
}

// rd_kafka_msgq_enq$link2
// file rdkafka_msg.h line 134
static inline void rd_kafka_msgq_enq$link2(struct rd_kafka_msgq_s *rkmq$link2, struct rd_kafka_msg_s *rkm$link2)
{
  do
  {
    rkm$link2->rkm_link.tqe_next = (struct rd_kafka_msg_s *)(void *)0;
    rkm$link2->rkm_link.tqe_prev = (&rkmq$link2->rkmq_msgs)->tqh_last;
    *(&rkmq$link2->rkmq_msgs)->tqh_last = rkm$link2;
    (&rkmq$link2->rkmq_msgs)->tqh_last = &rkm$link2->rkm_link.tqe_next;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkmq$link2->rkmq_msg_cnt, 1, 5);
  __atomic_add_fetch(&rkmq$link2->rkmq_msg_bytes, rkm$link2->rkm_len, 5);
}

// rd_kafka_msgq_init
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init(struct rd_kafka_msgq_s *rkmq)
{
  do
  {
    (&rkmq->rkmq_msgs)->tqh_first = (struct rd_kafka_msg_s *)(void *)0;
    (&rkmq->rkmq_msgs)->tqh_last = &(&rkmq->rkmq_msgs)->tqh_first;
  }
  while((_Bool)0);
  rkmq->rkmq_msg_cnt = 0;
  rkmq->rkmq_msg_bytes = (unsigned long int)0;
}

// rd_kafka_msgq_init$link1
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init$link1(struct rd_kafka_msgq_s *rkmq$link1)
{
  do
  {
    (&rkmq$link1->rkmq_msgs)->tqh_first = (struct rd_kafka_msg_s *)(void *)0;
    (&rkmq$link1->rkmq_msgs)->tqh_last = &(&rkmq$link1->rkmq_msgs)->tqh_first;
  }
  while((_Bool)0);
  rkmq$link1->rkmq_msg_cnt = 0;
  rkmq$link1->rkmq_msg_bytes = (unsigned long int)0;
}

// rd_kafka_msgq_init$link2
// file rdkafka_msg.h line 42
static inline void rd_kafka_msgq_init$link2(struct rd_kafka_msgq_s *rkmq$link2)
{
  do
  {
    (&rkmq$link2->rkmq_msgs)->tqh_first = (struct rd_kafka_msg_s *)(void *)0;
    (&rkmq$link2->rkmq_msgs)->tqh_last = &(&rkmq$link2->rkmq_msgs)->tqh_first;
  }
  while((_Bool)0);
  rkmq$link2->rkmq_msg_cnt = 0;
  rkmq$link2->rkmq_msg_bytes = (unsigned long int)0;
}

// rd_kafka_msgq_insert
// file rdkafka_msg.h line 124
static inline void rd_kafka_msgq_insert(struct rd_kafka_msgq_s *rkmq, struct rd_kafka_msg_s *rkm)
{
  do
  {
    rkm->rkm_link.tqe_next = (&rkmq->rkmq_msgs)->tqh_first;
    if(!(rkm->rkm_link.tqe_next == ((struct rd_kafka_msg_s *)NULL)))
      (&rkmq->rkmq_msgs)->tqh_first->rkm_link.tqe_prev = &rkm->rkm_link.tqe_next;

    else
      (&rkmq->rkmq_msgs)->tqh_last = &rkm->rkm_link.tqe_next;
    (&rkmq->rkmq_msgs)->tqh_first = rkm;
    rkm->rkm_link.tqe_prev = &(&rkmq->rkmq_msgs)->tqh_first;
  }
  while((_Bool)0);
  __atomic_add_fetch(&rkmq->rkmq_msg_cnt, 1, 5);
  __atomic_add_fetch(&rkmq->rkmq_msg_bytes, rkm->rkm_len, 5);
}

// rd_kafka_msgq_move
// file rdkafka_msg.h line 64
static inline void rd_kafka_msgq_move(struct rd_kafka_msgq_s *dst, struct rd_kafka_msgq_s *src)
{
  do
  {
    if(!(src->rkmq_msgs.tqh_first == ((struct rd_kafka_msg_s *)NULL)))
      (&src->rkmq_msgs)->tqh_first->rkm_link.tqe_prev = &(&dst->rkmq_msgs)->tqh_first;

    (&dst->rkmq_msgs)->tqh_first = (&src->rkmq_msgs)->tqh_first;
    (&dst->rkmq_msgs)->tqh_last = (&src->rkmq_msgs)->tqh_last;
  }
  while((_Bool)0);
  dst->rkmq_msg_cnt = src->rkmq_msg_cnt;
  dst->rkmq_msg_bytes = src->rkmq_msg_bytes;
  rd_kafka_msgq_init$link1(src);
}

// rd_kafka_msgq_move$link1
// file rdkafka_msg.h line 64
static inline void rd_kafka_msgq_move$link1(struct rd_kafka_msgq_s *dst$link1, struct rd_kafka_msgq_s *src$link1)
{
  do
  {
    if(!(src$link1->rkmq_msgs.tqh_first == ((struct rd_kafka_msg_s *)NULL)))
      (&src$link1->rkmq_msgs)->tqh_first->rkm_link.tqe_prev = &(&dst$link1->rkmq_msgs)->tqh_first;

    (&dst$link1->rkmq_msgs)->tqh_first = (&src$link1->rkmq_msgs)->tqh_first;
    (&dst$link1->rkmq_msgs)->tqh_last = (&src$link1->rkmq_msgs)->tqh_last;
  }
  while((_Bool)0);
  dst$link1->rkmq_msg_cnt = src$link1->rkmq_msg_cnt;
  dst$link1->rkmq_msg_bytes = src$link1->rkmq_msg_bytes;
  rd_kafka_msgq_init$link2(src$link1);
}

// rd_kafka_msgq_purge
// file rdkafka_msg.h line 76
static inline void rd_kafka_msgq_purge(struct rd_kafka_s *rk, struct rd_kafka_msgq_s *rkmq)
{
  struct rd_kafka_msg_s *rkm;
  struct rd_kafka_msg_s *next = (&rkmq->rkmq_msgs)->tqh_first;
  while(!(next == ((struct rd_kafka_msg_s *)NULL)))
  {
    rkm = next;
    next = next->rkm_link.tqe_next;
    rd_kafka_msg_destroy(rk, rkm);
  }
  rd_kafka_msgq_init$link1(rkmq);
}

// rd_kafka_msgq_purge$link1
// file rdkafka_msg.h line 76
static inline void rd_kafka_msgq_purge$link1(struct rd_kafka_s *rk$link1, struct rd_kafka_msgq_s *rkmq$link1)
{
  struct rd_kafka_msg_s *rkm$link1;
  struct rd_kafka_msg_s *next$link1 = (&rkmq$link1->rkmq_msgs)->tqh_first;
  while(!(next$link1 == ((struct rd_kafka_msg_s *)NULL)))
  {
    rkm$link1 = next$link1;
    next$link1 = next$link1->rkm_link.tqe_next;
    rd_kafka_msg_destroy(rk$link1, rkm$link1);
  }
  rd_kafka_msgq_init$link2(rkmq$link1);
}

// rd_kafka_name
// file ../src/rdkafka.h line 588
const char * rd_kafka_name(const struct rd_kafka_s *rk)
{
  return rk->rk_name;
}

// rd_kafka_new
// file ../src/rdkafka.h line 573
struct rd_kafka_s * rd_kafka_new(enum rd_kafka_type_t type, struct rd_kafka_conf_s *conf, char *errstr, unsigned long int errstr_size)
{
  struct rd_kafka_s *rd_kafka_new$$1$$rk;
  union pthread_attr_t attr;
  struct anonymous$18 newset;
  struct anonymous$18 oldset;
  signed int err;
  pthread_once(&rd_kafka_global_init_once, rd_kafka_global_init);
  if(conf == ((struct rd_kafka_conf_s *)NULL))
    conf=rd_kafka_conf_new();

  signed int tmp_post$3;
  char *return_value_strerror$7;
  if(conf->socket_cb == ((signed int (*)(signed int, signed int, signed int, void *))NULL))
  {
    snprintf(errstr, errstr_size, "Mandatory config property 'socket_cb' not set");
    rd_kafka_conf_destroy(conf);
    return (struct rd_kafka_s *)(void *)0;
  }

  else
    if(conf->open_cb == ((signed int (*)(const char *, signed int, unsigned int, void *))NULL))
    {
      snprintf(errstr, errstr_size, "Mandatory config property 'open_cb' not set");
      rd_kafka_conf_destroy(conf);
      return (struct rd_kafka_s *)(void *)0;
    }

    else
    {
      void *return_value_calloc$1;
      return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_s) /*808ul*/ );
      rd_kafka_new$$1$$rk = (struct rd_kafka_s *)return_value_calloc$1;
      rd_kafka_new$$1$$rk->rk_type = type;
      rd_kafka_new$$1$$rk->rk_conf = *conf;
      free((void *)conf);
      __atomic_add_fetch(&rd_kafka_new$$1$$rk->rk_refcnt, 1, 5);
      pthread_rwlock_init(&rd_kafka_new$$1$$rk->rk_lock, (const union anonymous$17 *)(void *)0);
      rd_kafka_q_init(&rd_kafka_new$$1$$rk->rk_rep);
      do
      {
        (&rd_kafka_new$$1$$rk->rk_brokers)->tqh_first = (struct rd_kafka_broker_s *)(void *)0;
        (&rd_kafka_new$$1$$rk->rk_brokers)->tqh_last = &(&rd_kafka_new$$1$$rk->rk_brokers)->tqh_first;
      }
      while((_Bool)0);
      do
      {
        (&rd_kafka_new$$1$$rk->rk_topics)->tqh_first = (struct rd_kafka_topic_s *)(void *)0;
        (&rd_kafka_new$$1$$rk->rk_topics)->tqh_last = &(&rd_kafka_new$$1$$rk->rk_topics)->tqh_first;
      }
      while((_Bool)0);
      do
      {
        (&rd_kafka_new$$1$$rk->rk_timers)->tqh_first = (struct rd_kafka_timer_s *)(void *)0;
        (&rd_kafka_new$$1$$rk->rk_timers)->tqh_last = &(&rd_kafka_new$$1$$rk->rk_timers)->tqh_first;
      }
      while((_Bool)0);
      pthread_mutex_init(&rd_kafka_new$$1$$rk->rk_timers_lock, (const union anonymous$12 *)(void *)0);
      pthread_cond_init(&rd_kafka_new$$1$$rk->rk_timers_cond, (const union anonymous$12 *)(void *)0);
      if(!(rd_kafka_new$$1$$rk->rk_conf.debug == 0))
        rd_kafka_new$$1$$rk->rk_conf.log_level = 7;

      const char *return_value_rd_kafka_type2str$2;
      return_value_rd_kafka_type2str$2=rd_kafka_type2str(rd_kafka_new$$1$$rk->rk_type);
      static signed int rkid = 0;
      tmp_post$3 = rkid;
      rkid = rkid + 1;
      snprintf(rd_kafka_new$$1$$rk->rk_name, sizeof(char [128l]) /*128ul*/ , "%s#%s-%i", rd_kafka_new$$1$$rk->rk_conf.clientid, return_value_rd_kafka_type2str$2, tmp_post$3);
      rd_kafka_new$$1$$rk->rk_clientid=rd_kafkap_str_new(rd_kafka_new$$1$$rk->rk_conf.clientid);
      rd_kafka_new$$1$$rk->rk_conf.group_id=rd_kafkap_str_new(rd_kafka_new$$1$$rk->rk_conf.group_id_str);
      rd_kafka_new$$1$$rk->rk_conf.queued_max_msg_bytes = (signed long int)rd_kafka_new$$1$$rk->rk_conf.queued_max_msg_kbytes * 1000ll;
      if((signed int)rd_kafka_new$$1$$rk->rk_type == RD_KAFKA_CONSUMER)
      {
        unsigned int return_value_htonl$4;
        return_value_htonl$4=htonl((unsigned int)-1);
        rd_kafka_new$$1$$rk->rk_conf.FetchRequest.ReplicaId = (signed int)return_value_htonl$4;
        unsigned int return_value_htonl$5;
        return_value_htonl$5=htonl((unsigned int)rd_kafka_new$$1$$rk->rk_conf.fetch_wait_max_ms);
        rd_kafka_new$$1$$rk->rk_conf.FetchRequest.MaxWaitTime = (signed int)return_value_htonl$5;
        unsigned int return_value_htonl$6;
        return_value_htonl$6=htonl((unsigned int)rd_kafka_new$$1$$rk->rk_conf.fetch_min_bytes);
        rd_kafka_new$$1$$rk->rk_conf.FetchRequest.MinBytes = (signed int)return_value_htonl$6;
      }

      sigemptyset(&oldset);
      sigfillset(&newset);
      if(!(rd_kafka_new$$1$$rk->rk_conf.term_sig == 0))
      {
        struct sigaction sa_term = { .__sigaction_handler={ .sa_handler=rd_kafka_term_sig_handler }, .sa_mask={ .__val={ 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul } },
    .sa_flags=0,
    .sa_restorer=((void (*)(void))NULL) };
        sigaction(rd_kafka_new$$1$$rk->rk_conf.term_sig, &sa_term, (struct sigaction *)(void *)0);
      }

      pthread_sigmask(2, &newset, &oldset);
      pthread_attr_init(&attr);
      pthread_attr_setdetachstate(&attr, 1);
      __atomic_add_fetch(&rd_kafka_new$$1$$rk->rk_refcnt, 1, 5);
      err=pthread_create(&rd_kafka_new$$1$$rk->rk_thread, &attr, rd_kafka_thread_main, (void *)rd_kafka_new$$1$$rk);
      if(!(err == 0))
      {
        if(!(errstr == ((char *)NULL)))
        {
          return_value_strerror$7=strerror(err);
          snprintf(errstr, errstr_size, "Failed to create thread: %s", return_value_strerror$7);
        }

        rd_kafka_destroy0(rd_kafka_new$$1$$rk);
        rd_kafka_destroy0(rd_kafka_new$$1$$rk);
        pthread_sigmask(2, &oldset, (struct anonymous$18 *)(void *)0);
        pthread_attr_destroy(&attr);
        signed int *return_value___errno_location$8;
        return_value___errno_location$8=__errno_location();
        *return_value___errno_location$8 = err;
        return (struct rd_kafka_s *)(void *)0;
      }

      if(!(rd_kafka_new$$1$$rk->rk_conf.brokerlist == ((char *)NULL)))
        rd_kafka_brokers_add(rd_kafka_new$$1$$rk, rd_kafka_new$$1$$rk->rk_conf.brokerlist);

      __atomic_add_fetch(&rd_kafka_handle_cnt_curr, 1, 5);
      pthread_sigmask(2, &oldset, (struct anonymous$18 *)(void *)0);
      pthread_attr_destroy(&attr);
      return rd_kafka_new$$1$$rk;
    }
}

// rd_kafka_offset_broker_commit_tmr_cb
// file rdkafka_offset.c line 538
static void rd_kafka_offset_broker_commit_tmr_cb(struct rd_kafka_s *rk, void *arg)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)arg;
  pthread_mutex_lock(&rktp->rktp_lock);
  do
    if(!((signed long int)(0x4 & rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: periodic commit: stored offset %ld > commited offset %ld ?", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_stored_offset, rktp->rktp_commited_offset);

  while((_Bool)0);
  if(!(rktp->rktp_committing_offset >= rktp->rktp_stored_offset))
  {
    if(!(rktp->rktp_commited_offset >= rktp->rktp_stored_offset))
      rd_kafka_toppar_offset_commit(rktp, rktp->rktp_stored_offset);

  }

  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_offset_broker_init
// file rdkafka_offset.c line 574
static void rd_kafka_offset_broker_init(struct rd_kafka_toppar_s *rktp)
{
  rd_kafka_timer_start(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_commit_tmr, rktp->rktp_rkt->rkt_conf.auto_commit_interval_ms * 1000, rd_kafka_offset_broker_commit_tmr_cb, (void *)rktp);
  rktp->rktp_commited_offset = (signed long int)-1;
  rd_kafka_offset_reset(rktp, (signed long int)-1001, (enum anonymous$9)RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE, "waiting for broker offset");
}

// rd_kafka_offset_broker_term
// file rdkafka_offset.c line 560
static void rd_kafka_offset_broker_term(struct rd_kafka_toppar_s *rktp)
{
  rd_kafka_timer_stop(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_commit_tmr, 1);
  if(!(rktp->rktp_commited_offset >= rktp->rktp_stored_offset))
    rd_kafka_toppar_offset_commit(rktp, rktp->rktp_stored_offset);

}

// rd_kafka_offset_file_close
// file rdkafka_offset.c line 63
static void rd_kafka_offset_file_close(struct rd_kafka_toppar_s *rktp)
{
  if(!(rktp->rktp_offset_fd == -1))
  {
    close(rktp->rktp_offset_fd);
    rktp->rktp_offset_fd = -1;
  }

}

// rd_kafka_offset_file_commit
// file rdkafka_offset.c line 199
static signed int rd_kafka_offset_file_commit(struct rd_kafka_toppar_s *rktp, signed long int offset)
{
  struct rd_kafka_topic_s *rkt = rktp->rktp_rkt;
  signed int attempt = 0;
  signed int return_value_rd_kafka_offset_file_open$1;
  for( ; !(attempt >= 2); attempt = attempt + 1)
  {
    char buf[22l];
    signed int len;
    if(rktp->rktp_offset_fd == -1)
    {
      return_value_rd_kafka_offset_file_open$1=rd_kafka_offset_file_open(rktp);
      if(!(return_value_rd_kafka_offset_file_open$1 == -1))
        goto __CPROVER_DUMP_L2;

    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed long int return_value_lseek$4;
      return_value_lseek$4=lseek(rktp->rktp_offset_fd, (signed long int)0, 0);
      if(return_value_lseek$4 == -1l)
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Seek failed on offset file %s: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path, return_value_strerror$3);
        rd_kafka_offset_file_close(rktp);
        goto __CPROVER_DUMP_L8;
      }

      len=snprintf(buf, sizeof(char [22l]) /*22ul*/ , "%ld\n", offset);
      signed long int return_value_write$7;
      return_value_write$7=write(rktp->rktp_offset_fd, (const void *)buf, (unsigned long int)len);
      if(return_value_write$7 == -1l)
      {
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        char *return_value_strerror$6;
        return_value_strerror$6=strerror(*return_value___errno_location$5);
        rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Failed to write offset %ld to offset file %s (fd %i): %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, offset, rktp->rktp_offset_path, rktp->rktp_offset_fd, return_value_strerror$6);
        rd_kafka_offset_file_close(rktp);
        goto __CPROVER_DUMP_L8;
      }

      signed int return_value_ftruncate$8;
      return_value_ftruncate$8=ftruncate(rktp->rktp_offset_fd, (signed long int)len);
      do
        if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: wrote offset %ld to file %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, offset, rktp->rktp_offset_path);

      while((_Bool)0);
      rktp->rktp_commited_offset = offset;
      if(rkt->rkt_conf.offset_store_sync_interval_ms == 0)
        fsync(rktp->rktp_offset_fd);

      return 0;
    }

  __CPROVER_DUMP_L8:
    ;
  }
  return -1;
}

// rd_kafka_offset_file_commit_tmr_cb
// file rdkafka_offset.c line 298
static void rd_kafka_offset_file_commit_tmr_cb(struct rd_kafka_s *rk, void *arg)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)arg;
  pthread_mutex_lock(&rktp->rktp_lock);
  do
    if(!((signed long int)(0x4 & rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: periodic commit: stored offset %ld > commited offset %ld ?", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_stored_offset, rktp->rktp_commited_offset);

  while((_Bool)0);
  if(!(rktp->rktp_commited_offset >= rktp->rktp_stored_offset))
    rd_kafka_offset_file_commit(rktp, rktp->rktp_stored_offset);

  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_offset_file_init
// file rdkafka_offset.c line 460
static void rd_kafka_offset_file_init(struct rd_kafka_toppar_s *rktp)
{
  struct stat st;
  char spath[4096l];
  const char *path = rktp->rktp_rkt->rkt_conf.offset_store_path;
  signed long int offset = (signed long int)-1;
  signed int return_value_stat$6;
  return_value_stat$6=stat(path, &st);
  unsigned short int return_value_ntohs$1;
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  if(return_value_stat$6 == 0)
  {
    if((61440u & st.st_mode) == 16384u)
    {
      char tmpfile[1024l];
      char escfile[4096l];
      unsigned short int return_value_ntohs$4;
      return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_conf.group_id->len);
      if(!((signed int)(signed short int)return_value_ntohs$4 == -1))
      {
        return_value_ntohs$1=ntohs((unsigned short int)rktp->rktp_rkt->rkt_conf.group_id->len);
        if((signed int)(signed short int)return_value_ntohs$1 == -1)
          tmp_if_expr$3 = 0;

        else
        {
          return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_conf.group_id->len);
          tmp_if_expr$3 = (signed int)return_value_ntohs$2;
        }
        snprintf(tmpfile, sizeof(char [1024l]) /*1024ul*/ , "%s-%d-%.*s.offset", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, tmp_if_expr$3, (const void *)rktp->rktp_rkt->rkt_conf.group_id->str);
      }

      else
        snprintf(tmpfile, sizeof(char [1024l]) /*1024ul*/ , "%s-%d.offset", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
      mk_esc_filename(tmpfile, escfile, sizeof(char [4096l]) /*4096ul*/ );
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(path);
      snprintf(spath, sizeof(char [4096l]) /*4096ul*/ , "%s%s%s", path, (signed int)path[(signed long int)(return_value_strlen$5 - (unsigned long int)1)] == 47 ? "" : "/", (const void *)escfile);
      path = spath;
    }

  }

  do
    if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d] using offset file %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, path);

  while((_Bool)0);
  rktp->rktp_offset_path=strdup(path);
  rd_kafka_timer_start(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_commit_tmr, rktp->rktp_rkt->rkt_conf.auto_commit_interval_ms * 1000, rd_kafka_offset_file_commit_tmr_cb, (void *)rktp);
  if(rktp->rktp_rkt->rkt_conf.offset_store_sync_interval_ms >= 1)
    rd_kafka_timer_start(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_sync_tmr, rktp->rktp_rkt->rkt_conf.offset_store_sync_interval_ms * 1000, rd_kafka_offset_file_sync_tmr_cb, (void *)rktp);

  signed int return_value_rd_kafka_offset_file_open$7;
  return_value_rd_kafka_offset_file_open$7=rd_kafka_offset_file_open(rktp);
  if(!(return_value_rd_kafka_offset_file_open$7 == -1))
    offset=rd_kafka_offset_file_read(rktp);

  if(!(offset == -1l))
  {
    rktp->rktp_commited_offset = offset;
    rktp->rktp_next_offset = offset + (signed long int)1;
    rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_ACTIVE;
  }

  else
  {
    rktp->rktp_commited_offset = (signed long int)-1;
    rd_kafka_offset_reset(rktp, (signed long int)-1001, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "non-readable offset file");
  }
}

// rd_kafka_offset_file_open
// file rdkafka_offset.c line 105
static signed int rd_kafka_offset_file_open(struct rd_kafka_toppar_s *rktp)
{
  struct rd_kafka_s *rd_kafka_offset_file_open$$1$$rk = rktp->rktp_rkt->rkt_rk;
  signed int fd;
  fd=rd_kafka_offset_file_open$$1$$rk->rk_conf.open_cb(rktp->rktp_offset_path, 0100 | 02, (unsigned int)0644, rd_kafka_offset_file_open$$1$$rk->rk_conf.opaque);
  if(fd == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Failed to open offset file %s: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path, return_value_strerror$2);
    return -1;
  }

  rktp->rktp_offset_fd = fd;
  return 0;
}

// rd_kafka_offset_file_read
// file rdkafka_offset.c line 130
static signed long int rd_kafka_offset_file_read(struct rd_kafka_toppar_s *rktp)
{
  char buf[22l];
  char *end;
  signed long int offset;
  signed int r;
  signed long int return_value_lseek$3;
  return_value_lseek$3=lseek(rktp->rktp_offset_fd, (signed long int)0, 0);
  if(return_value_lseek$3 == -1l)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Seek (for read) failed on offset file %s: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path, return_value_strerror$2);
    rd_kafka_offset_file_close(rktp);
    return (signed long int)-1;
  }

  signed long int return_value_read$6;
  return_value_read$6=read(rktp->rktp_offset_fd, (void *)buf, sizeof(char [22l]) /*22ul*/  - (unsigned long int)1);
  r = (signed int)return_value_read$6;
  if(r == -1)
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    char *return_value_strerror$5;
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Failed to read offset file %s: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path, return_value_strerror$5);
    rd_kafka_offset_file_close(rktp);
    return (signed long int)-1;
  }

  if(r == 0)
  {
    do
      if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: offset file (%s) is empty", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path);

    while((_Bool)0);
    return (signed long int)-1;
  }

  else
  {
    buf[(signed long int)r] = (char)0;
    unsigned long long int return_value_strtoull$7;
    return_value_strtoull$7=strtoull(buf, &end, 10);
    offset = (signed long int)return_value_strtoull$7;
    if(buf == end)
    {
      rd_kafka_op_err(rktp->rktp_rkt->rkt_rk, (enum anonymous$9)RD_KAFKA_RESP_ERR__FS, "%s [%d]: Unable to parse offset in %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_offset_path);
      return (signed long int)-1;
    }

    else
    {
      do
        if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: Read offset %ld from offset file (%s)", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, offset, rktp->rktp_offset_path);

      while((_Bool)0);
      return offset;
    }
  }
}

// rd_kafka_offset_file_sync_tmr_cb
// file rdkafka_offset.c line 320
static void rd_kafka_offset_file_sync_tmr_cb(struct rd_kafka_s *rk, void *arg)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)arg;
  pthread_mutex_lock(&rktp->rktp_lock);
  if(!(rktp->rktp_offset_fd == -1))
  {
    do
      if(!((signed long int)(0x4 & rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rk, (const char *)(void *)0, 7, "SYNC", "%s [%d]: offset file sync", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);

    while((_Bool)0);
    fsync(rktp->rktp_offset_fd);
  }

  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_offset_file_term
// file rdkafka_offset.c line 341
static void rd_kafka_offset_file_term(struct rd_kafka_toppar_s *rktp)
{
  if(rktp->rktp_rkt->rkt_conf.offset_store_sync_interval_ms >= 1)
    rd_kafka_timer_stop(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_sync_tmr, 1);

  rd_kafka_timer_stop(rktp->rktp_rkt->rkt_rk, &rktp->rktp_offset_commit_tmr, 1);
  do
    if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: commit stored offset %ld, committed offset %ld?", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_stored_offset, rktp->rktp_commited_offset);

  while((_Bool)0);
  if(!(rktp->rktp_commited_offset >= rktp->rktp_stored_offset))
    rd_kafka_offset_file_commit(rktp, rktp->rktp_stored_offset);

  rd_kafka_offset_file_close(rktp);
  free((void *)rktp->rktp_offset_path);
  rktp->rktp_offset_path = (char *)(void *)0;
}

// rd_kafka_offset_reset
// file rdkafka_offset.h line 55
void rd_kafka_offset_reset(struct rd_kafka_toppar_s *rktp, signed long int err_offset, enum anonymous$9 err, const char *reason)
{
  signed long int offset = (signed long int)-1001;
  struct rd_kafka_op_s *rko;
  signed long int offset_reset = (signed long int)rktp->rktp_rkt->rkt_conf.auto_offset_reset;
  if(offset_reset == -2l || offset_reset == -1l || !(offset_reset >= -1999l))
  {
    offset = (signed long int)rktp->rktp_rkt->rkt_conf.auto_offset_reset;
    rktp->rktp_query_offset = offset;
    rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY;
  }

  else
    if(offset_reset == -1001l)
    {
      rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_ERR);
      rko->rko_rkmessage.err = err;
      rko->rko_rkmessage.offset = err_offset;
      rko->rko_rkmessage.rkt = rktp->rktp_rkt;
      rko->rko_rkmessage.partition = rktp->rktp_partition;
      char *return_value_strdup$1;
      return_value_strdup$1=strdup(reason);
      rko->rko_rkmessage.payload = (void *)return_value_strdup$1;
      rko->rko_rkmessage.len=strlen((const char *)rko->rko_rkmessage.payload);
      rko->rko_flags = rko->rko_flags | 0x1;
      __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);
      rd_kafka_q_enq$link2(&rktp->rktp_fetchq, rko);
      rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_NONE;
    }

  const char *return_value_rd_kafka_err2str$2;
  do
    if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
    {
      return_value_rd_kafka_err2str$2=rd_kafka_err2str(err);
      rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: offset reset (at offset %ld) to %ld: %s: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, err_offset, offset, reason, return_value_rd_kafka_err2str$2);
    }

  while((_Bool)0);
}

// rd_kafka_offset_store
// file rdkafka_offset.c line 274
enum anonymous$9 rd_kafka_offset_store(struct rd_kafka_topic_s *rkt, signed int partition, signed long int offset)
{
  struct rd_kafka_toppar_s *rktp;
  pthread_rwlock_rdlock(&rkt->rkt_lock);
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    pthread_rwlock_unlock(&rkt->rkt_lock);
    return (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
  }

  else
  {
    pthread_rwlock_unlock(&rkt->rkt_lock);
    rd_kafka_offset_store0$link1(rktp, offset, 1);
    do
    {
      signed int return_value___atomic_sub_fetch$1;
      return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$1 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
    return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
  }
}

// rd_kafka_offset_store0
// file rdkafka_offset.h line 40
static inline void rd_kafka_offset_store0(struct rd_kafka_toppar_s *rktp, signed long int offset, signed int lock)
{
  if(!(lock == 0))
    pthread_mutex_lock(&rktp->rktp_lock);

  rktp->rktp_stored_offset = offset;
  if(!(lock == 0))
    pthread_mutex_unlock(&rktp->rktp_lock);

}

// rd_kafka_offset_store0$link1
// file rdkafka_offset.h line 40
static inline void rd_kafka_offset_store0$link1(struct rd_kafka_toppar_s *rktp$link1, signed long int offset$link1, signed int lock$link1)
{
  if(!(lock$link1 == 0))
    pthread_mutex_lock(&rktp$link1->rktp_lock);

  rktp$link1->rktp_stored_offset = offset$link1;
  if(!(lock$link1 == 0))
    pthread_mutex_unlock(&rktp$link1->rktp_lock);

}

// rd_kafka_offset_store_init
// file rdkafka_offset.h line 53
void rd_kafka_offset_store_init(struct rd_kafka_toppar_s *rktp)
{
  static const char *store_names[2l] = { "file", "broker" };
  do
    if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: using offset store method: %s", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, store_names[(signed long int)rktp->rktp_rkt->rkt_conf.offset_store_method]);

  while((_Bool)0);
  switch((signed int)rktp->rktp_rkt->rkt_conf.offset_store_method)
  {
    case RD_KAFKA_OFFSET_METHOD_FILE:
    {
      rd_kafka_offset_file_init(rktp);
      break;
    }
    case RD_KAFKA_OFFSET_METHOD_BROKER:
    {
      rd_kafka_offset_broker_init(rktp);
      break;
    }
    default:
      goto __CPROVER_DUMP_L7;
  }
  rktp->rktp_flags = rktp->rktp_flags | 0x4;

__CPROVER_DUMP_L7:
  ;
}

// rd_kafka_offset_store_term
// file rdkafka_offset.h line 52
void rd_kafka_offset_store_term(struct rd_kafka_toppar_s *rktp)
{
  if(!((0x4 & rktp->rktp_flags) == 0))
  {
    do
      if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "%s [%d]: stopping offset store (stored offset %ld, commited offset %ld, EOF offset %ld)", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_stored_offset, rktp->rktp_commited_offset, rktp->rktp_eof_offset);

    while((_Bool)0);
    if(!(rktp->rktp_rkt->rkt_conf.auto_commit == 0))
    {
      if(rktp->rktp_stored_offset == -1l)
      {
        if(!(rktp->rktp_eof_offset == -1l))
          rd_kafka_offset_store0$link1(rktp, rktp->rktp_eof_offset, 0);

      }

    }

    switch((signed int)rktp->rktp_rkt->rkt_conf.offset_store_method)
    {
      case RD_KAFKA_OFFSET_METHOD_FILE:
      {
        rd_kafka_offset_file_term(rktp);
        break;
      }
      case RD_KAFKA_OFFSET_METHOD_BROKER:
        rd_kafka_offset_broker_term(rktp);
    }
  }

}

// rd_kafka_op_destroy
// file rdkafka.c line 194
void rd_kafka_op_destroy(struct rd_kafka_op_s *rko)
{
  if(!(rko->rko_rkbuf == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(rko->rko_rkbuf);

  else
    if(!(rko->rko_rkmessage.payload == NULL))
    {
      if(!((0x1 & rko->rko_flags) == 0))
        free(rko->rko_rkmessage.payload);

    }

  if(!(rko->rko_rkmessage.rkt == ((struct rd_kafka_topic_s *)NULL)))
    rd_kafka_topic_destroy0(rko->rko_rkmessage.rkt);

  if(!(rko->rko_rktp == ((struct rd_kafka_toppar_s *)NULL)))
    do
    {
      signed int return_value___atomic_sub_fetch$1;
      return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rko->rko_rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$1 == 0)
        rd_kafka_toppar_destroy0(rko->rko_rktp);

    }
    while((_Bool)0);

  if(!(rko->rko_metadata == ((struct rd_kafka_metadata *)NULL)))
    rd_kafka_metadata_destroy(rko->rko_metadata);

  free((void *)rko);
}

// rd_kafka_op_err
// file rdkafka.c line 652
void rd_kafka_op_err(struct rd_kafka_s *rk, enum anonymous$9 err, const char *fmt, ...)
{
  void **ap;
  char buf[2048l];
  ap = (void **)&fmt;
  vsnprintf(buf, sizeof(char [2048l]) /*2048ul*/ , fmt, ap);
  ap = ((void **)NULL);
  char *return_value_strdup$1;
  unsigned long int return_value_strlen$2;
  if(!(rk->rk_conf.error_cb == ((void (*)(struct rd_kafka_s *, signed int, const char *, void *))NULL)))
  {
    return_value_strdup$1=strdup(buf);
    return_value_strlen$2=strlen(buf);
    rd_kafka_op_reply(rk, (enum anonymous$44)RD_KAFKA_OP_ERR, err, (void *)return_value_strdup$1, (signed int)return_value_strlen$2);
  }

  else
    rd_kafka_log_buf(rk, 3, "ERROR", buf);
}

// rd_kafka_op_new
// file rdkafka.c line 184
struct rd_kafka_op_s * rd_kafka_op_new(enum anonymous$44 type)
{
  struct rd_kafka_op_s *rko;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_op_s) /*176ul*/ );
  rko = (struct rd_kafka_op_s *)return_value_calloc$1;
  rko->rko_type = type;
  return rko;
}

// rd_kafka_op_reply
// file rdkafka.c line 613
void rd_kafka_op_reply(struct rd_kafka_s *rk, enum anonymous$44 type, enum anonymous$9 err, void *payload, signed int len)
{
  struct rd_kafka_op_s *rko;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_op_s) /*176ul*/ );
  rko = (struct rd_kafka_op_s *)return_value_calloc$1;
  const char *return_value_rd_kafka_err2str$4;
  char *return_value_strdup$5;
  if(payload == NULL && !(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
  {
    if((signed int)err == RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE)
    {
      char tmp[512l];
      const char *return_value_rd_kafka_err2str$2;
      return_value_rd_kafka_err2str$2=rd_kafka_err2str(err);
      snprintf(tmp, sizeof(char [512l]) /*512ul*/ , "%s (%lu)", return_value_rd_kafka_err2str$2, rk->rk_u.consumer.offset);
      char *return_value_strdup$3;
      return_value_strdup$3=strdup(tmp);
      payload = (void *)return_value_strdup$3;
    }

    else
    {
      return_value_rd_kafka_err2str$4=rd_kafka_err2str(err);
      return_value_strdup$5=strdup(return_value_rd_kafka_err2str$4);
      payload = (void *)return_value_strdup$5;
    }
    unsigned long int return_value_strlen$6;
    return_value_strlen$6=strlen((const char *)payload);
    len = (signed int)return_value_strlen$6;
  }

  rd_kafka_op_reply0(rk, rko, type, err, payload, len);
  rd_kafka_q_enq(&rk->rk_rep, rko);
}

// rd_kafka_op_reply0
// file rdkafka.c line 595
void rd_kafka_op_reply0(struct rd_kafka_s *rk, struct rd_kafka_op_s *rko, enum anonymous$44 type, enum anonymous$9 err, void *payload, signed int len)
{
  rko->rko_type = type;
  rko->rko_flags = rko->rko_flags | 0x1;
  rko->rko_rkmessage.payload = payload;
  rko->rko_rkmessage.len = (unsigned long int)len;
  rko->rko_rkmessage.err = err;
}

// rd_kafka_op_reply2
// file rdkafka.c line 642
void rd_kafka_op_reply2(struct rd_kafka_s *rk, struct rd_kafka_op_s *rko)
{
  rd_kafka_q_enq(&rk->rk_rep, rko);
}

// rd_kafka_op_req
// file rdkafka.c line 695
struct rd_kafka_op_s * rd_kafka_op_req(struct rd_kafka_q_s *destq, struct rd_kafka_op_s *rko, signed int timeout_ms)
{
  struct rd_kafka_q_s *recvq;
  struct rd_kafka_op_s *reply;
  recvq=rd_kafka_q_new();
  reply=rd_kafka_op_req0(destq, recvq, rko, timeout_ms);
  rd_kafka_q_destroy(recvq);
  return reply;
}

// rd_kafka_op_req0
// file rdkafka.c line 671
struct rd_kafka_op_s * rd_kafka_op_req0(struct rd_kafka_q_s *destq, struct rd_kafka_q_s *recvq, struct rd_kafka_op_s *rko, signed int timeout_ms)
{
  struct rd_kafka_op_s *reply;
  __atomic_add_fetch(&recvq->rkq_refcnt, 1, 5);
  rko->rko_replyq = recvq;
  reply=rd_kafka_q_pop(recvq, timeout_ms);
  return reply;
}

// rd_kafka_opaque
// file rdkafka.c line 1838
void * rd_kafka_opaque(const struct rd_kafka_s *rk)
{
  return rk->rk_conf.opaque;
}

// rd_kafka_open_cb_generic
// file rdkafka_offset.c line 88
signed int rd_kafka_open_cb_generic(const char *pathname, signed int flags, unsigned int mode, void *opaque)
{
  signed int fd;
  signed int on = 1;
  fd=open(pathname, flags, mode);
  if(fd == -1)
    return -1;

  else
  {
    fcntl(fd, 2, 1, &on);
    return fd;
  }
}

// rd_kafka_open_cb_linux
// file rdkafka_int.h line 225
signed int rd_kafka_open_cb_linux(const char *pathname, signed int flags, unsigned int mode, void *opaque)
{
  signed int return_value_open$1;
  return_value_open$1=open(pathname, flags | 02000000, mode);
  return return_value_open$1;
}

// rd_kafka_outq_len
// file ../src/rdkafka.h line 1134
signed int rd_kafka_outq_len(struct rd_kafka_s *rk)
{
  return rk->rk_u.producer.msg_cnt;
}

// rd_kafka_poll
// file ../src/rdkafka.h line 1068
signed int rd_kafka_poll(struct rd_kafka_s *rk, signed int timeout_ms)
{
  signed int return_value_rd_kafka_q_serve$1;
  return_value_rd_kafka_q_serve$1=rd_kafka_q_serve(&rk->rk_rep, timeout_ms, rd_kafka_poll_cb, (void *)rk);
  return return_value_rd_kafka_q_serve$1;
}

// rd_kafka_poll_cb
// file rdkafka.c line 1635
static void rd_kafka_poll_cb(struct rd_kafka_op_s *rko, void *opaque)
{
  struct rd_kafka_s *rd_kafka_poll_cb$$1$$rk = (struct rd_kafka_s *)opaque;
  struct rd_kafka_msg_s *rkm;
  char *tmp_statement_expression$1;
  const char *return_value_rd_kafka_err2str$4;
  unsigned int return_value_ntohl$8;
  signed int tmp_if_expr$7;
  unsigned int return_value_ntohl$6;
  signed int return_value;
  switch((signed int)rko->rko_type)
  {
    case RD_KAFKA_OP_FETCH:
      break;
    case RD_KAFKA_OP_ERR:
    {
      if(!(rd_kafka_poll_cb$$1$$rk->rk_conf.error_cb == ((void (*)(struct rd_kafka_s *, signed int, const char *, void *))NULL)))
      {
        const char *__old = (const char *)rko->rko_rkmessage.payload;
        unsigned long int __len;
        __len=strnlen(__old, rko->rko_rkmessage.len);
        char *__new;
        void *return_value___builtin_alloca$2;
        return_value___builtin_alloca$2=__builtin_alloca(__len + (unsigned long int)1);
        __new = (char *)return_value___builtin_alloca$2;
        __new[(signed long int)__len] = (char)0;
        void *return_value_memcpy$3;
        return_value_memcpy$3=memcpy((void *)__new, (const void *)__old, __len);
        tmp_statement_expression$1 = (char *)return_value_memcpy$3;
        rd_kafka_poll_cb$$1$$rk->rk_conf.error_cb(rd_kafka_poll_cb$$1$$rk, (signed int)rko->rko_rkmessage.err, tmp_statement_expression$1, rd_kafka_poll_cb$$1$$rk->rk_conf.opaque);
      }

      else
      {
        return_value_rd_kafka_err2str$4=rd_kafka_err2str(rko->rko_rkmessage.err);
        rd_kafka_log0(rd_kafka_poll_cb$$1$$rk, (const char *)(void *)0, 3, "ERROR", "%s: %s: %.*s", (const void *)rd_kafka_poll_cb$$1$$rk->rk_name, return_value_rd_kafka_err2str$4, (signed int)rko->rko_rkmessage.len, (char *)rko->rko_rkmessage.payload);
      }
      break;
    }
    case RD_KAFKA_OP_DR:
    {
      rkm = (&rko->rko_msgq.rkmq_msgs)->tqh_first;
      static signed int dcnt = 0;
      if(!(rkm == ((struct rd_kafka_msg_s *)NULL)))
      {
        do
        {
          if(!(rkm->rkm_link.tqe_next == ((struct rd_kafka_msg_s *)NULL)))
            rkm->rkm_link.tqe_next->rkm_link.tqe_prev = rkm->rkm_link.tqe_prev;

          else
            (&rko->rko_msgq.rkmq_msgs)->tqh_last = rkm->rkm_link.tqe_prev;
          *rkm->rkm_link.tqe_prev = rkm->rkm_link.tqe_next;
        }
        while((_Bool)0);
        dcnt = dcnt + 1;
        if(!(rd_kafka_poll_cb$$1$$rk->rk_conf.dr_msg_cb == ((void (*)(struct rd_kafka_s *, const struct rd_kafka_message_s *, void *))NULL)))
        {
          struct rd_kafka_message_s rkmessage = { .err=rko->rko_rkmessage.err, .rkt=((struct rd_kafka_topic_s *)NULL), .partition=rkm->rkm_partition,
    .payload=rkm->rkm_payload, .len=rkm->rkm_len,
    .key=NULL, .key_len=0ul, .offset=rkm->rkm_offset,
    ._private=rkm->rkm_opaque };
          if(!(rkm->rkm_key == ((struct rd_kafkap_bytes_s *)NULL)))
          {
            return_value_ntohl$8=ntohl((unsigned int)rkm->rkm_key->len);
            if(!((signed int)return_value_ntohl$8 == -1))
            {
              rkmessage.key = (void *)rkm->rkm_key->data;
              unsigned int return_value_ntohl$5;
              return_value_ntohl$5=ntohl((unsigned int)rkm->rkm_key->len);
              if((signed int)return_value_ntohl$5 == -1)
                tmp_if_expr$7 = 0;

              else
              {
                return_value_ntohl$6=ntohl((unsigned int)rkm->rkm_key->len);
                tmp_if_expr$7 = (signed int)return_value_ntohl$6;
              }
              rkmessage.key_len = (unsigned long int)(signed int)tmp_if_expr$7;
            }

          }

          rd_kafka_poll_cb$$1$$rk->rk_conf.dr_msg_cb(rd_kafka_poll_cb$$1$$rk, &rkmessage, rd_kafka_poll_cb$$1$$rk->rk_conf.opaque);
        }

        else
          rd_kafka_poll_cb$$1$$rk->rk_conf.dr_cb(rd_kafka_poll_cb$$1$$rk, rkm->rkm_payload, rkm->rkm_len, rko->rko_rkmessage.err, rd_kafka_poll_cb$$1$$rk->rk_conf.opaque, rkm->rkm_opaque);
        rd_kafka_msg_destroy(rd_kafka_poll_cb$$1$$rk, rkm);
      }

      rd_kafka_msgq_init(&rko->rko_msgq);
      if(dcnt % 1000 == 0)
        do
          if(!((signed long int)(0x40 & rd_kafka_poll_cb$$1$$rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rd_kafka_poll_cb$$1$$rk, (const char *)(void *)0, 7, "POLL", "Now %i messages delivered to app", dcnt);

        while((_Bool)0);

      break;
    }
    case RD_KAFKA_OP_STATS:
    {
      if(!(rd_kafka_poll_cb$$1$$rk->rk_conf.stats_cb == ((signed int (*)(struct rd_kafka_s *, char *, unsigned long int, void *))NULL)))
      {
        return_value=rd_kafka_poll_cb$$1$$rk->rk_conf.stats_cb(rd_kafka_poll_cb$$1$$rk, (char *)rko->rko_rkmessage.payload, rko->rko_rkmessage.len, rd_kafka_poll_cb$$1$$rk->rk_conf.opaque);
        if(return_value == 1)
          rko->rko_rkmessage.payload = (void *)0;

      }

      break;
    }
    default:
    {
      do
        if(!((signed long int)(0xff & rd_kafka_poll_cb$$1$$rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rd_kafka_poll_cb$$1$$rk, (const char *)(void *)0, 7, "POLLCB", "cant handle op %i here", rko->rko_type);

      while((_Bool)0);
      do
        rd_kafka_crash("rdkafka.c", 1723, "rd_kafka_poll_cb", rd_kafka_poll_cb$$1$$rk, "assert: !*\"cant handle op type\"");
      while((_Bool)0);
    }
  }
}

// rd_kafka_produce
// file ../src/rdkafka.h line 921
signed int rd_kafka_produce(struct rd_kafka_topic_s *rkt, signed int partition, signed int msgflags, void *payload, unsigned long int len, const void *key, unsigned long int keylen, void *msg_opaque)
{
  signed int return_value_rd_kafka_msg_new$1;
  return_value_rd_kafka_msg_new$1=rd_kafka_msg_new(rkt, partition, msgflags, (char *)payload, len, key, keylen, msg_opaque);
  return return_value_rd_kafka_msg_new$1;
}

// rd_kafka_produce_batch
// file rdkafka_msg.c line 172
signed int rd_kafka_produce_batch(struct rd_kafka_topic_s *rkt, signed int partition, signed int msgflags, struct rd_kafka_message_s *rkmessages, signed int message_cnt)
{
  struct rd_kafka_msgq_s tmpq = { .rkmq_msgs={ .tqh_first=(struct rd_kafka_msg_s *)(void *)0, .tqh_last=&tmpq.rkmq_msgs.tqh_first }, .rkmq_msg_cnt=0,
    .rkmq_msg_bytes=0ul };
  signed int i;
  unsigned long int now;
  now=rd_clock$link3();
  signed int good = 0;
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)(void *)0;
  enum anonymous$9 all_err = (enum anonymous$9)0;
  if(partition == -1)
    pthread_rwlock_rdlock(&rkt->rkt_lock);

  i = 0;
  for( ; !(i >= message_cnt); i = i + 1)
  {
    struct rd_kafka_msg_s *rkm;
    if(!((signed long int)all_err == 0l))
      (rkmessages + (signed long int)i)->err = all_err;

    else
      if(!(rkt->rkt_rk->rk_conf.queue_buffering_max_msgs >= 1 + (partition == -1 ? 0 : good) + rkt->rkt_rk->rk_u.producer.msg_cnt))
      {
        all_err = (enum anonymous$9)RD_KAFKA_RESP_ERR__QUEUE_FULL;
        (rkmessages + (signed long int)i)->err = all_err;
      }

      else
      {
        rkm=rd_kafka_msg_new0(rkt, partition, msgflags, (char *)(rkmessages + (signed long int)i)->payload, (rkmessages + (signed long int)i)->len, (rkmessages + (signed long int)i)->key, (rkmessages + (signed long int)i)->key_len, (rkmessages + (signed long int)i)->_private, &(rkmessages + (signed long int)i)->err, now);
        if(!(rkm == ((struct rd_kafka_msg_s *)NULL)))
        {
          if(partition == -1)
          {
            __atomic_add_fetch(&rkt->rkt_rk->rk_u.producer.msg_cnt, 1, 5);
            signed int return_value_rd_kafka_msg_partitioner$1;
            return_value_rd_kafka_msg_partitioner$1=rd_kafka_msg_partitioner(rkt, rkm, 0);
            (rkmessages + (signed long int)i)->err = (enum anonymous$9)return_value_rd_kafka_msg_partitioner$1;
            if(!((signed long int)(rkmessages + (signed long int)i)->err == 0l))
            {
              rd_kafka_msg_destroy(rkt->rkt_rk, rkm);
              goto __CPROVER_DUMP_L9;
            }

          }

          else
            rd_kafka_msgq_enq$link1(&tmpq, rkm);
          (rkmessages + (signed long int)i)->err = (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
          good = good + 1;
        }

      }

  __CPROVER_DUMP_L9:
    ;
  }
  if(!(partition == -1))
  {
    pthread_rwlock_rdlock(&rkt->rkt_lock);
    rktp=rd_kafka_toppar_get_avail(rkt, partition, 1, &all_err);
    if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
    {
      if(good >= 1)
        __atomic_add_fetch(&rkt->rkt_rk->rk_u.producer.msg_cnt, good, 5);

      __atomic_add_fetch(&rktp->rktp_c.msgs, good, 5);
      rd_kafka_toppar_concat_msgq(rktp, &tmpq);
      do
      {
        signed int return_value___atomic_sub_fetch$2;
        return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$2 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
    }

  }

  pthread_rwlock_unlock(&rkt->rkt_lock);
  return good;
}

// rd_kafka_produce_msgset_reply
// file rdkafka_broker.c line 1870
static void rd_kafka_produce_msgset_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)opaque;
  signed long int offset = (signed long int)-1;
  do
    if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "MSGSET", "MessageSet with %i message(s) %sdelivered", request->rkbuf_msgq.rkmq_msg_cnt, err != (enum anonymous$9)0 ? "not " : "");

  while((_Bool)0);
  if(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR && !(reply == ((struct rd_kafka_buf_s *)NULL)))
    err=rd_kafka_produce_reply_handle(rkb, reply, &offset);

  const char *return_value_rd_kafka_err2str$1;
  signed long int tmp_post$2;
  if(!(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR))
  {
    do
      if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_rd_kafka_err2str$1=rd_kafka_err2str(err);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "MSGSET", "MessageSet with %i message(s) encountered error: %s", request->rkbuf_msgq.rkmq_msg_cnt, return_value_rd_kafka_err2str$1);
      }

    while((_Bool)0);
    switch((signed int)err)
    {
      case RD_KAFKA_RESP_ERR__DESTROY:

      case RD_KAFKA_RESP_ERR_INVALID_MSG:

      case RD_KAFKA_RESP_ERR_INVALID_MSG_SIZE:

      case RD_KAFKA_RESP_ERR_MSG_SIZE_TOO_LARGE:
        goto __CPROVER_DUMP_L11;
      case RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT:

      case RD_KAFKA_RESP_ERR__MSG_TIMED_OUT:
      {
        request->rkbuf_retries = request->rkbuf_retries + 1;
        if(!(request->rkbuf_retries >= rkb->rkb_rk->rk_conf.max_retries))
        {
          if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
            rd_kafka_buf_destroy(reply);

          rd_kafka_broker_buf_retry(rkb, request);
          goto __CPROVER_DUMP_L18;
        }

        goto __CPROVER_DUMP_L11;
      }
      case RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART:

      case RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION:

      case RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR__TRANSPORT:

      default:
      {
        rkb->rkb_metadata_fast_poll_cnt = rkb->rkb_rk->rk_conf.metadata_refresh_fast_cnt;
        rd_kafka_topic_leader_query0(rkb->rkb_rk, rktp->rktp_rkt, 1);
        rd_kafka_toppar_insert_msgq(rktp, &request->rkbuf_msgq);
      }
    }
  }

  else
  {

  __CPROVER_DUMP_L11:
    ;
    if(!(offset == -1l))
    {
      if(!(rktp->rktp_rkt->rkt_conf.produce_offset_report == 0))
      {
        struct rd_kafka_msg_s *rkm = (&request->rkbuf_msgq.rkmq_msgs)->tqh_first;
        for( ; !(rkm == ((struct rd_kafka_msg_s *)NULL)); rkm = rkm->rkm_link.tqe_next)
        {
          tmp_post$2 = offset;
          offset = offset + 1l;
          rkm->rkm_offset = tmp_post$2;
        }
      }

    }

    rd_kafka_dr_msgq(rkb->rkb_rk, &request->rkbuf_msgq, err);
  }
  do
  {

  done:
    ;
    signed int return_value___atomic_sub_fetch$3;
    return_value___atomic_sub_fetch$3=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$3 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  rd_kafka_buf_destroy(request);
  if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(reply);


__CPROVER_DUMP_L18:
  ;
}

// rd_kafka_produce_reply_handle
// file rdkafka_broker.c line 1827
static enum anonymous$9 rd_kafka_produce_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, signed long int *offsetp)
{
  char *buf = rkbuf->rkbuf_buf2;
  unsigned long int size = rkbuf->rkbuf_len;
  unsigned long int of = (unsigned long int)0;
  signed int TopicArrayCnt;
  struct rd_kafkap_str_s *topic;
  signed int PartitionArrayCnt;
  /* tag-#anon#lST[S32'Partition'||S16'ErrorCode'||S64'Offset'|] */
struct anonymous$23
{
  // Partition
  signed int Partition;
  // ErrorCode
  signed short int ErrorCode;
  // Offset
  signed long int Offset;
} __attribute__ ((__packed__));

/* */
  ;
  struct anonymous$23 *hdr;
  const signed int log_decode_errors = 1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int _LEN = (signed int)4;
    if(!(size + -of >= (unsigned long int)_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_produce_reply_handle", 1842);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
      }

      goto err;
    }

    memcpy((void *)&TopicArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
    of = of + (unsigned long int)4;
    unsigned int return_value_ntohl$1;
    return_value_ntohl$1=ntohl((unsigned int)*((signed int *)&TopicArrayCnt));
    *((signed int *)&TopicArrayCnt) = (signed int)return_value_ntohl$1;
  }
  while((_Bool)0);
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  unsigned long int return_value___bswap_64$6;
  unsigned short int return_value_ntohs$7;
  if(TopicArrayCnt == 1)
  {
    do
    {
      signed int _klen;
      do
      {
        signed int rd_kafka_produce_reply_handle$$1$$2$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_produce_reply_handle$$1$$2$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_produce_reply_handle", 1850);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_produce_reply_handle$$1$$2$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      topic = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$2;
      return_value_ntohs$2=ntohs((unsigned short int)topic->len);
      if((signed int)(signed short int)return_value_ntohs$2 == -1)
        tmp_if_expr$4 = 0;

      else
      {
        return_value_ntohs$3=ntohs((unsigned short int)topic->len);
        tmp_if_expr$4 = (signed int)return_value_ntohs$3;
      }
      _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$4);
      do
      {
        signed int rd_kafka_produce_reply_handle$$1$$2$$2$$_LEN = (signed int)_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_produce_reply_handle$$1$$2$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_produce_reply_handle", 1850);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_produce_reply_handle$$1$$2$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)_klen;
    }
    while((_Bool)0);
    do
    {

    __CPROVER_DUMP_L16:
      ;
      signed int rd_kafka_produce_reply_handle$$1$$3$$1$$1$$_LEN = (signed int)4;
      if(!(size + -of >= (unsigned long int)rd_kafka_produce_reply_handle$$1$$3$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_produce_reply_handle", 1851);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_produce_reply_handle$$1$$3$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      memcpy((void *)&PartitionArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + (unsigned long int)4;
      unsigned int return_value_ntohl$5;
      return_value_ntohl$5=ntohl((unsigned int)*((signed int *)&PartitionArrayCnt));
      *((signed int *)&PartitionArrayCnt) = (signed int)return_value_ntohl$5;
    }
    while((_Bool)0);
    if(!(PartitionArrayCnt == 1))
      goto err;

    do
    {

    __CPROVER_DUMP_L20:
      ;
      signed int rd_kafka_produce_reply_handle$$1$$4$$1$$_LEN = (signed int)sizeof(struct anonymous$23) /*14ul*/ ;
      if(!(size + -of >= (unsigned long int)rd_kafka_produce_reply_handle$$1$$4$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_produce_reply_handle", 1856);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_produce_reply_handle$$1$$4$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      hdr = (struct anonymous$23 *)(void *)((char *)buf + (signed long int)of);
      of = of + sizeof(struct anonymous$23) /*14ul*/ ;
    }
    while((_Bool)0);
    return_value___bswap_64$6=__bswap_64((unsigned long int)hdr->Offset);
    *offsetp = (signed long int)return_value___bswap_64$6;
    return_value_ntohs$7=ntohs((unsigned short int)hdr->ErrorCode);
    return (enum anonymous$9)return_value_ntohs$7;
  }

  else
  {

  err:
    ;
    return (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
  }
}

// rd_kafka_q_concat0
// file rdkafka_int.h line 863
static inline void rd_kafka_q_concat0(struct rd_kafka_q_s *rkq, struct rd_kafka_q_s *srcq, signed int do_lock)
{
  if(!(do_lock == 0))
    pthread_mutex_lock(&rkq->rkq_lock);

  _Bool tmp_if_expr$3;
  if(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    tmp_if_expr$3 = !(srcq->rkq_fwdq != ((struct rd_kafka_q_s *)NULL)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  struct rd_kafka_q_s *tmp_if_expr$1;
  struct rd_kafka_q_s *tmp_if_expr$2;
  if(tmp_if_expr$3)
  {
    do
      if(!(srcq->rkq_q.tqh_first == ((struct rd_kafka_op_s *)NULL)))
      {
        *(&rkq->rkq_q)->tqh_last = (&srcq->rkq_q)->tqh_first;
        (&srcq->rkq_q)->tqh_first->rko_link.tqe_prev = (&rkq->rkq_q)->tqh_last;
        (&rkq->rkq_q)->tqh_last = (&srcq->rkq_q)->tqh_last;
        do
        {
          (&srcq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
          (&srcq->rkq_q)->tqh_last = &(&srcq->rkq_q)->tqh_first;
        }
        while((_Bool)0);
      }

    while((_Bool)0);
    __atomic_add_fetch(&rkq->rkq_qlen, srcq->rkq_qlen, 5);
    __atomic_add_fetch(&rkq->rkq_qsize, srcq->rkq_qsize, 5);
    pthread_cond_signal(&rkq->rkq_cond);
  }

  else
  {
    if(!(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$1 = rkq->rkq_fwdq;

    else
      tmp_if_expr$1 = rkq;
    if(!(srcq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$2 = srcq->rkq_fwdq;

    else
      tmp_if_expr$2 = srcq;
    rd_kafka_q_concat0(tmp_if_expr$1, tmp_if_expr$2, do_lock);
  }
  if(!(do_lock == 0))
    pthread_mutex_unlock(&rkq->rkq_lock);

}

// rd_kafka_q_concat0$link1
// file rdkafka_int.h line 863
static inline void rd_kafka_q_concat0$link1(struct rd_kafka_q_s *rkq$link1, struct rd_kafka_q_s *srcq$link1, signed int do_lock$link1)
{
  if(!(do_lock$link1 == 0))
    pthread_mutex_lock(&rkq$link1->rkq_lock);

  _Bool tmp_if_expr$3$link1;
  if(rkq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    tmp_if_expr$3$link1 = !(srcq$link1->rkq_fwdq != ((struct rd_kafka_q_s *)NULL)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3$link1 = (_Bool)0;
  struct rd_kafka_q_s *tmp_if_expr$1$link1;
  struct rd_kafka_q_s *tmp_if_expr$2$link1;
  if(tmp_if_expr$3$link1)
  {
    do
      if(!(srcq$link1->rkq_q.tqh_first == ((struct rd_kafka_op_s *)NULL)))
      {
        *(&rkq$link1->rkq_q)->tqh_last = (&srcq$link1->rkq_q)->tqh_first;
        (&srcq$link1->rkq_q)->tqh_first->rko_link.tqe_prev = (&rkq$link1->rkq_q)->tqh_last;
        (&rkq$link1->rkq_q)->tqh_last = (&srcq$link1->rkq_q)->tqh_last;
        do
        {
          (&srcq$link1->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
          (&srcq$link1->rkq_q)->tqh_last = &(&srcq$link1->rkq_q)->tqh_first;
        }
        while((_Bool)0);
      }

    while((_Bool)0);
    __atomic_add_fetch(&rkq$link1->rkq_qlen, srcq$link1->rkq_qlen, 5);
    __atomic_add_fetch(&rkq$link1->rkq_qsize, srcq$link1->rkq_qsize, 5);
    pthread_cond_signal(&rkq$link1->rkq_cond);
  }

  else
  {
    if(!(rkq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$1$link1 = rkq$link1->rkq_fwdq;

    else
      tmp_if_expr$1$link1 = rkq$link1;
    if(!(srcq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$2$link1 = srcq$link1->rkq_fwdq;

    else
      tmp_if_expr$2$link1 = srcq$link1;
    rd_kafka_q_concat0$link1(tmp_if_expr$1$link1, tmp_if_expr$2$link1, do_lock$link1);
  }
  if(!(do_lock$link1 == 0))
    pthread_mutex_unlock(&rkq$link1->rkq_lock);

}

// rd_kafka_q_destroy
// file rdkafka.c line 214
signed int rd_kafka_q_destroy(struct rd_kafka_q_s *rkq)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rkq->rkq_refcnt, 1, 5);
  if(return_value___atomic_sub_fetch$1 >= 1)
    return 0;

  else
  {
    /* assertion !rkq->rkq_fwdq */
    assert(!(rkq->rkq_fwdq != ((struct rd_kafka_q_s *)NULL)));
    rd_kafka_q_purge(rkq);
    pthread_mutex_destroy(&rkq->rkq_lock);
    pthread_cond_destroy(&rkq->rkq_cond);
    if(!((0x1 & rkq->rkq_flags) == 0))
      free((void *)rkq);

    return 1;
  }
}

// rd_kafka_q_enq
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq(struct rd_kafka_q_s *rkq, struct rd_kafka_op_s *rko)
{
  pthread_mutex_lock(&rkq->rkq_lock);
  if(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
  {
    do
    {
      rko->rko_link.tqe_next = (struct rd_kafka_op_s *)(void *)0;
      rko->rko_link.tqe_prev = (&rkq->rkq_q)->tqh_last;
      *(&rkq->rkq_q)->tqh_last = rko;
      (&rkq->rkq_q)->tqh_last = &rko->rko_link.tqe_next;
    }
    while((_Bool)0);
    __atomic_add_fetch(&rkq->rkq_qlen, 1, 5);
    __atomic_add_fetch(&rkq->rkq_qsize, rko->rko_rkmessage.len, 5);
    pthread_cond_signal(&rkq->rkq_cond);
  }

  else
    rd_kafka_q_enq(rkq->rkq_fwdq, rko);
  pthread_mutex_unlock(&rkq->rkq_lock);
}

// rd_kafka_q_enq$link1
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq$link1(struct rd_kafka_q_s *rkq$link1, struct rd_kafka_op_s *rko$link1)
{
  pthread_mutex_lock(&rkq$link1->rkq_lock);
  if(rkq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
  {
    do
    {
      rko$link1->rko_link.tqe_next = (struct rd_kafka_op_s *)(void *)0;
      rko$link1->rko_link.tqe_prev = (&rkq$link1->rkq_q)->tqh_last;
      *(&rkq$link1->rkq_q)->tqh_last = rko$link1;
      (&rkq$link1->rkq_q)->tqh_last = &rko$link1->rko_link.tqe_next;
    }
    while((_Bool)0);
    __atomic_add_fetch(&rkq$link1->rkq_qlen, 1, 5);
    __atomic_add_fetch(&rkq$link1->rkq_qsize, rko$link1->rko_rkmessage.len, 5);
    pthread_cond_signal(&rkq$link1->rkq_cond);
  }

  else
    rd_kafka_q_enq$link1(rkq$link1->rkq_fwdq, rko$link1);
  pthread_mutex_unlock(&rkq$link1->rkq_lock);
}

// rd_kafka_q_enq$link2
// file rdkafka_int.h line 843
static inline void rd_kafka_q_enq$link2(struct rd_kafka_q_s *rkq$link2, struct rd_kafka_op_s *rko$link2)
{
  pthread_mutex_lock(&rkq$link2->rkq_lock);
  if(rkq$link2->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
  {
    do
    {
      rko$link2->rko_link.tqe_next = (struct rd_kafka_op_s *)(void *)0;
      rko$link2->rko_link.tqe_prev = (&rkq$link2->rkq_q)->tqh_last;
      *(&rkq$link2->rkq_q)->tqh_last = rko$link2;
      (&rkq$link2->rkq_q)->tqh_last = &rko$link2->rko_link.tqe_next;
    }
    while((_Bool)0);
    __atomic_add_fetch(&rkq$link2->rkq_qlen, 1, 5);
    __atomic_add_fetch(&rkq$link2->rkq_qsize, rko$link2->rko_rkmessage.len, 5);
    pthread_cond_signal(&rkq$link2->rkq_cond);
  }

  else
    rd_kafka_q_enq$link2(rkq$link2->rkq_fwdq, rko$link2);
  pthread_mutex_unlock(&rkq$link2->rkq_lock);
}

// rd_kafka_q_fwd_set
// file rdkafka.c line 264
void rd_kafka_q_fwd_set(struct rd_kafka_q_s *rkq, struct rd_kafka_q_s *fwdq)
{
  pthread_mutex_lock(&rkq->rkq_lock);
  if(!(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
  {
    rd_kafka_q_destroy(rkq->rkq_fwdq);
    rkq->rkq_fwdq = (struct rd_kafka_q_s *)(void *)0;
  }

  if(!(fwdq == ((struct rd_kafka_q_s *)NULL)))
  {
    __atomic_add_fetch(&fwdq->rkq_refcnt, 1, 5);
    rkq->rkq_fwdq = fwdq;
    if(rkq->rkq_qlen >= 1)
      rd_kafka_q_concat0(fwdq, rkq, 1);

  }

  pthread_mutex_unlock(&rkq->rkq_lock);
}

// rd_kafka_q_init
// file rdkafka.c line 233
void rd_kafka_q_init(struct rd_kafka_q_s *rkq)
{
  do
  {
    (&rkq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
    (&rkq->rkq_q)->tqh_last = &(&rkq->rkq_q)->tqh_first;
  }
  while((_Bool)0);
  rkq->rkq_fwdq = (struct rd_kafka_q_s *)(void *)0;
  rkq->rkq_qlen = 0;
  rkq->rkq_qsize = (unsigned long int)0;
  rkq->rkq_refcnt = 1;
  rkq->rkq_flags = 0;
  pthread_mutex_init(&rkq->rkq_lock, (const union anonymous$12 *)(void *)0);
  pthread_cond_init(&rkq->rkq_cond, (const union anonymous$12 *)(void *)0);
}

// rd_kafka_q_len
// file rdkafka_int.h line 885
static inline signed int rd_kafka_q_len(struct rd_kafka_q_s *rkq)
{
  signed int qlen;
  pthread_mutex_lock(&rkq->rkq_lock);
  if(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    qlen = rkq->rkq_qlen;

  else
    qlen=rd_kafka_q_len(rkq->rkq_fwdq);
  pthread_mutex_unlock(&rkq->rkq_lock);
  return qlen;
}

// rd_kafka_q_len$link1
// file rdkafka_int.h line 885
static inline signed int rd_kafka_q_len$link1(struct rd_kafka_q_s *rkq$link1)
{
  signed int qlen$link1;
  pthread_mutex_lock(&rkq$link1->rkq_lock);
  if(rkq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    qlen$link1 = rkq$link1->rkq_qlen;

  else
    qlen$link1=rd_kafka_q_len$link1(rkq$link1->rkq_fwdq);
  pthread_mutex_unlock(&rkq$link1->rkq_lock);
  return qlen$link1;
}

// rd_kafka_q_move_cnt
// file rdkafka.c line 321
unsigned long int rd_kafka_q_move_cnt(struct rd_kafka_q_s *dstq, struct rd_kafka_q_s *srcq, unsigned long int cnt)
{
  struct rd_kafka_op_s *rko;
  unsigned long int mcnt = (unsigned long int)0;
  pthread_mutex_lock(&srcq->rkq_lock);
  pthread_mutex_lock(&dstq->rkq_lock);
  _Bool tmp_if_expr$3;
  if(dstq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    tmp_if_expr$3 = !(srcq->rkq_fwdq != ((struct rd_kafka_q_s *)NULL)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  struct rd_kafka_q_s *tmp_if_expr$1;
  struct rd_kafka_q_s *tmp_if_expr$2;
  if(tmp_if_expr$3)
  {
    if(cnt >= (unsigned long int)srcq->rkq_qlen)
    {
      do
        if(!(srcq->rkq_q.tqh_first == ((struct rd_kafka_op_s *)NULL)))
        {
          *(&dstq->rkq_q)->tqh_last = (&srcq->rkq_q)->tqh_first;
          (&srcq->rkq_q)->tqh_first->rko_link.tqe_prev = (&dstq->rkq_q)->tqh_last;
          (&dstq->rkq_q)->tqh_last = (&srcq->rkq_q)->tqh_last;
          do
          {
            (&srcq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
            (&srcq->rkq_q)->tqh_last = &(&srcq->rkq_q)->tqh_first;
          }
          while((_Bool)0);
        }

      while((_Bool)0);
      do
      {
        (&srcq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
        (&srcq->rkq_q)->tqh_last = &(&srcq->rkq_q)->tqh_first;
      }
      while((_Bool)0);
      mcnt = (unsigned long int)srcq->rkq_qlen;
      __atomic_add_fetch(&dstq->rkq_qlen, srcq->rkq_qlen, 5);
      __atomic_add_fetch(&dstq->rkq_qsize, srcq->rkq_qsize, 5);
      srcq->rkq_qlen = 0;
      srcq->rkq_qsize = (unsigned long int)0;
    }

    else
      for( ; !(mcnt >= cnt); mcnt = mcnt + 1ul)
      {
        rko = (&srcq->rkq_q)->tqh_first;
        if(rko == ((struct rd_kafka_op_s *)NULL))
          break;

        do
        {
          if(!(rko->rko_link.tqe_next == ((struct rd_kafka_op_s *)NULL)))
            rko->rko_link.tqe_next->rko_link.tqe_prev = rko->rko_link.tqe_prev;

          else
            (&srcq->rkq_q)->tqh_last = rko->rko_link.tqe_prev;
          *rko->rko_link.tqe_prev = rko->rko_link.tqe_next;
        }
        while((_Bool)0);
        do
        {
          rko->rko_link.tqe_next = (struct rd_kafka_op_s *)(void *)0;
          rko->rko_link.tqe_prev = (&dstq->rkq_q)->tqh_last;
          *(&dstq->rkq_q)->tqh_last = rko;
          (&dstq->rkq_q)->tqh_last = &rko->rko_link.tqe_next;
        }
        while((_Bool)0);
        __atomic_sub_fetch(&srcq->rkq_qlen, 1, 5);
        __atomic_add_fetch(&dstq->rkq_qlen, 1, 5);
        __atomic_sub_fetch(&srcq->rkq_qsize, rko->rko_rkmessage.len, 5);
        __atomic_add_fetch(&dstq->rkq_qsize, rko->rko_rkmessage.len, 5);
      }
  }

  else
  {
    if(!(dstq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$1 = dstq->rkq_fwdq;

    else
      tmp_if_expr$1 = dstq;
    if(!(srcq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
      tmp_if_expr$2 = srcq->rkq_fwdq;

    else
      tmp_if_expr$2 = srcq;
    mcnt=rd_kafka_q_move_cnt(tmp_if_expr$1, tmp_if_expr$2, cnt);
  }
  pthread_mutex_unlock(&dstq->rkq_lock);
  pthread_mutex_unlock(&srcq->rkq_lock);
  return mcnt;
}

// rd_kafka_q_new
// file rdkafka.c line 249
struct rd_kafka_q_s * rd_kafka_q_new(void)
{
  struct rd_kafka_q_s *rkq;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rd_kafka_q_s) /*136ul*/ );
  rkq = (struct rd_kafka_q_s *)return_value_malloc$1;
  rd_kafka_q_init(rkq);
  rkq->rkq_flags = rkq->rkq_flags | 0x1;
  return rkq;
}

// rd_kafka_q_pop
// file rdkafka.c line 371
struct rd_kafka_op_s * rd_kafka_q_pop(struct rd_kafka_q_s *rkq, signed int timeout_ms)
{
  struct rd_kafka_op_s *rko;
  pthread_mutex_lock(&rkq->rkq_lock);
  if(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
  {
    do
    {
      rko = (&rkq->rkq_q)->tqh_first;
      if(!(rko == ((struct rd_kafka_op_s *)NULL)))
        break;

      if(timeout_ms == 0)
        break;

      if(!(timeout_ms == -1))
      {
        signed int return_value_pthread_cond_timedwait_ms$1;
        return_value_pthread_cond_timedwait_ms$1=pthread_cond_timedwait_ms(&rkq->rkq_cond, &rkq->rkq_lock, timeout_ms);
        if(return_value_pthread_cond_timedwait_ms$1 == 110)
        {
          pthread_mutex_unlock(&rkq->rkq_lock);
          return (struct rd_kafka_op_s *)(void *)0;
        }

        timeout_ms = 0;
      }

      else
        pthread_cond_wait(&rkq->rkq_cond, &rkq->rkq_lock);
    }
    while((_Bool)1);
    if(!(rko == ((struct rd_kafka_op_s *)NULL)))
    {
      do
      {
        if(!(rko->rko_link.tqe_next == ((struct rd_kafka_op_s *)NULL)))
          rko->rko_link.tqe_next->rko_link.tqe_prev = rko->rko_link.tqe_prev;

        else
          (&rkq->rkq_q)->tqh_last = rko->rko_link.tqe_prev;
        *rko->rko_link.tqe_prev = rko->rko_link.tqe_next;
      }
      while((_Bool)0);
      __atomic_sub_fetch(&rkq->rkq_qlen, 1, 5);
      __atomic_sub_fetch(&rkq->rkq_qsize, rko->rko_rkmessage.len, 5);
    }

  }

  else
    rko=rd_kafka_q_pop(rkq->rkq_fwdq, timeout_ms);
  pthread_mutex_unlock(&rkq->rkq_lock);
  return rko;
}

// rd_kafka_q_purge
// file rdkafka.c line 285
void rd_kafka_q_purge(struct rd_kafka_q_s *rkq)
{
  struct rd_kafka_op_s *rko;
  struct rd_kafka_op_s *next;
  /* tag-#anon#lST[l*{lSYM#tag-rd_kafka_op_s#}$lSYM#tag-rd_kafka_op_s#$'tqh_first'||l*{l*{lSYM#tag-rd_kafka_op_s#}$lSYM#tag-rd_kafka_op_s#$}$l*{lSYM#tag-rd_kafka_op_s#}$lSYM#tag-rd_kafka_op_s#$$'tqh_last'|] */
struct anonymous$66
{
  // tqh_first
  struct rd_kafka_op_s *tqh_first;
  // tqh_last
  struct rd_kafka_op_s **tqh_last;
};

/* */
  ;
  struct anonymous$66 tmpq = { .tqh_first=(struct rd_kafka_op_s *)(void *)0, .tqh_last=&tmpq.tqh_first };
  pthread_mutex_lock(&rkq->rkq_lock);
  if(!(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
  {
    rd_kafka_q_purge(rkq->rkq_fwdq);
    pthread_mutex_unlock(&rkq->rkq_lock);
  }

  else
  {
    do
    {
      if(!(rkq->rkq_q.tqh_first == ((struct rd_kafka_op_s *)NULL)))
        (&rkq->rkq_q)->tqh_first->rko_link.tqe_prev = &(&tmpq)->tqh_first;

      (&tmpq)->tqh_first = (&rkq->rkq_q)->tqh_first;
      (&tmpq)->tqh_last = (&rkq->rkq_q)->tqh_last;
    }
    while((_Bool)0);
    do
    {
      (&rkq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
      (&rkq->rkq_q)->tqh_last = &(&rkq->rkq_q)->tqh_first;
    }
    while((_Bool)0);
    rkq->rkq_qlen = 0;
    rkq->rkq_qsize = (unsigned long int)0;
    pthread_mutex_unlock(&rkq->rkq_lock);
    next = (&tmpq)->tqh_first;
    do
    {
      rko = next;
      if(rko == ((struct rd_kafka_op_s *)NULL))
        break;

      next = next->rko_link.tqe_next;
      rd_kafka_op_destroy(rko);
    }
    while((_Bool)1);
  }
}

// rd_kafka_q_serve
// file rdkafka.c line 418
signed int rd_kafka_q_serve(struct rd_kafka_q_s *rkq, signed int timeout_ms, void (*callback)(struct rd_kafka_op_s *, void *), void *opaque)
{
  struct rd_kafka_op_s *rko;
  struct rd_kafka_op_s *tmp;
  struct rd_kafka_q_s localq;
  do
  {
    (&localq.rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
    (&localq.rkq_q)->tqh_last = &(&localq.rkq_q)->tqh_first;
  }
  while((_Bool)0);
  pthread_mutex_lock(&rkq->rkq_lock);
  if(!(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
  {
    signed int ret;
    ret=rd_kafka_q_serve(rkq->rkq_fwdq, timeout_ms, callback, opaque);
    pthread_mutex_unlock(&rkq->rkq_lock);
    return ret;
  }

  do
  {
    rko = (&rkq->rkq_q)->tqh_first;
    if(!(rko == ((struct rd_kafka_op_s *)NULL)))
      break;

    if(timeout_ms == 0)
      break;

    if(!(timeout_ms == -1))
    {
      signed int return_value_pthread_cond_timedwait_ms$1;
      return_value_pthread_cond_timedwait_ms$1=pthread_cond_timedwait_ms(&rkq->rkq_cond, &rkq->rkq_lock, timeout_ms);
      if(return_value_pthread_cond_timedwait_ms$1 == 110)
        break;

      timeout_ms = 0;
    }

    else
      pthread_cond_wait(&rkq->rkq_cond, &rkq->rkq_lock);
  }
  while((_Bool)1);
  _Bool tmp_if_expr$2;
  if(rko == ((struct rd_kafka_op_s *)NULL))
  {
    pthread_mutex_unlock(&rkq->rkq_lock);
    return 0;
  }

  else
  {
    do
      if(!(rkq->rkq_q.tqh_first == ((struct rd_kafka_op_s *)NULL)))
      {
        *(&localq.rkq_q)->tqh_last = (&rkq->rkq_q)->tqh_first;
        (&rkq->rkq_q)->tqh_first->rko_link.tqe_prev = (&localq.rkq_q)->tqh_last;
        (&localq.rkq_q)->tqh_last = (&rkq->rkq_q)->tqh_last;
        do
        {
          (&rkq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
          (&rkq->rkq_q)->tqh_last = &(&rkq->rkq_q)->tqh_first;
        }
        while((_Bool)0);
      }

    while((_Bool)0);
    localq.rkq_qlen = rkq->rkq_qlen;
    localq.rkq_qsize = rkq->rkq_qsize;
    do
    {
      (&rkq->rkq_q)->tqh_first = (struct rd_kafka_op_s *)(void *)0;
      (&rkq->rkq_q)->tqh_last = &(&rkq->rkq_q)->tqh_first;
    }
    while((_Bool)0);
    rkq->rkq_qlen = 0;
    rkq->rkq_qsize = (unsigned long int)0;
    pthread_mutex_unlock(&rkq->rkq_lock);
    rko = (&localq.rkq_q)->tqh_first;
    if(!(rko == ((struct rd_kafka_op_s *)NULL)))
    {
      tmp = rko->rko_link.tqe_next;
      tmp_if_expr$2 = 1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      callback(rko, opaque);
      rd_kafka_op_destroy(rko);
      rko = tmp;
    }

    return localq.rkq_qlen;
  }
}

// rd_kafka_q_serve_rkmessages
// file rdkafka.c line 512
static signed int rd_kafka_q_serve_rkmessages(struct rd_kafka_q_s *rkq, signed int timeout_ms, struct rd_kafka_message_s **rkmessages, unsigned long int rkmessages_size)
{
  signed int rd_kafka_q_serve_rkmessages$$1$$cnt = 0;
  struct timeval tv;
  struct timespec ts;
  pthread_mutex_lock(&rkq->rkq_lock);
  signed int tmp_post$2;
  if(!(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL)))
  {
    rd_kafka_q_serve_rkmessages$$1$$cnt=rd_kafka_q_serve_rkmessages(rkq->rkq_fwdq, timeout_ms, rkmessages, rkmessages_size);
    pthread_mutex_unlock(&rkq->rkq_lock);
    return rd_kafka_q_serve_rkmessages$$1$$cnt;
  }

  else
  {
    gettimeofday(&tv, (struct timezone *)(void *)0);
    (&ts)->tv_sec = (&tv)->tv_sec;
    (&ts)->tv_nsec = (&tv)->tv_usec * (signed long int)1000;
    ts.tv_sec = ts.tv_sec + (signed long int)(timeout_ms / 1000);
    ts.tv_nsec = ts.tv_nsec + (signed long int)((timeout_ms % 1000) * 1000000);
    if(ts.tv_nsec >= 1000000000l)
    {
      ts.tv_sec = ts.tv_sec + 1l;
      ts.tv_nsec = ts.tv_nsec - (signed long int)1000000000;
    }

    while(!((unsigned long int)rd_kafka_q_serve_rkmessages$$1$$cnt >= rkmessages_size))
    {
      struct rd_kafka_op_s *rko;
      do
      {
        rko = (&rkq->rkq_q)->tqh_first;
        if(!(rko == ((struct rd_kafka_op_s *)NULL)))
          break;

        signed int return_value_pthread_cond_timedwait$1;
        return_value_pthread_cond_timedwait$1=pthread_cond_timedwait(&rkq->rkq_cond, &rkq->rkq_lock, &ts);
        if(return_value_pthread_cond_timedwait$1 == 110)
          break;

      }
      while((_Bool)1);
      if(rko == ((struct rd_kafka_op_s *)NULL))
        break;

      do
      {
        if(!(rko->rko_link.tqe_next == ((struct rd_kafka_op_s *)NULL)))
          rko->rko_link.tqe_next->rko_link.tqe_prev = rko->rko_link.tqe_prev;

        else
          (&rkq->rkq_q)->tqh_last = rko->rko_link.tqe_prev;
        *rko->rko_link.tqe_prev = rko->rko_link.tqe_next;
      }
      while((_Bool)0);
      __atomic_sub_fetch(&rkq->rkq_qlen, 1, 5);
      __atomic_sub_fetch(&rkq->rkq_qsize, rko->rko_rkmessage.len, 5);
      if(rko->rko_rkmessage.err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR)
      {
        if(!(rko->rko_rkmessage.rkt->rkt_conf.auto_commit == 0))
          rd_kafka_offset_store0(rko->rko_rktp, rko->rko_rkmessage.offset, 1);

      }

      tmp_post$2 = rd_kafka_q_serve_rkmessages$$1$$cnt;
      rd_kafka_q_serve_rkmessages$$1$$cnt = rd_kafka_q_serve_rkmessages$$1$$cnt + 1;
      rkmessages[(signed long int)tmp_post$2]=rd_kafka_message_get(rko);
    }
    pthread_mutex_unlock(&rkq->rkq_lock);
    return rd_kafka_q_serve_rkmessages$$1$$cnt;
  }
}

// rd_kafka_q_size
// file rdkafka_int.h line 898
static inline unsigned long int rd_kafka_q_size(struct rd_kafka_q_s *rkq)
{
  unsigned long int sz;
  pthread_mutex_lock(&rkq->rkq_lock);
  if(rkq->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    sz = rkq->rkq_qsize;

  else
    sz=rd_kafka_q_size(rkq->rkq_fwdq);
  pthread_mutex_unlock(&rkq->rkq_lock);
  return sz;
}

// rd_kafka_q_size$link1
// file rdkafka_int.h line 898
static inline unsigned long int rd_kafka_q_size$link1(struct rd_kafka_q_s *rkq$link1)
{
  unsigned long int sz$link1;
  pthread_mutex_lock(&rkq$link1->rkq_lock);
  if(rkq$link1->rkq_fwdq == ((struct rd_kafka_q_s *)NULL))
    sz$link1 = rkq$link1->rkq_qsize;

  else
    sz$link1=rd_kafka_q_size$link1(rkq$link1->rkq_fwdq);
  pthread_mutex_unlock(&rkq$link1->rkq_lock);
  return sz$link1;
}

// rd_kafka_queue_destroy
// file rdkafka.c line 572
void rd_kafka_queue_destroy(struct rd_kafka_queue_s *rkqu)
{
  signed int return_value_rd_kafka_q_destroy$1;
  return_value_rd_kafka_q_destroy$1=rd_kafka_q_destroy(&rkqu->rkqu_q);
  if(!(return_value_rd_kafka_q_destroy$1 == 0))
    free((void *)rkqu);

}

// rd_kafka_queue_new
// file rdkafka.c line 579
struct rd_kafka_queue_s * rd_kafka_queue_new(struct rd_kafka_s *rk)
{
  struct rd_kafka_queue_s *rkqu;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_queue_s) /*136ul*/ );
  rkqu = (struct rd_kafka_queue_s *)return_value_calloc$1;
  rd_kafka_q_init(&rkqu->rkqu_q);
  return rkqu;
}

// rd_kafka_recv
// file rdkafka_broker.c line 1369
static signed int rd_kafka_recv(struct rd_kafka_broker_s *rkb)
{
  struct rd_kafka_buf_s *rkbuf;
  signed long int r;
  struct msghdr msg;
  char errstr[512l];
  enum anonymous$9 err_code = (enum anonymous$9)0;
  rkbuf = rkb->rkb_recv_buf;
  if(rkbuf == ((struct rd_kafka_buf_s *)NULL))
  {
    rkbuf=rd_kafka_buf_new(0, (unsigned long int)0);
    (rkbuf->rkbuf_iov + (signed long int)0)->iov_base = (void *)&rkbuf->rkbuf_reshdr;
    (rkbuf->rkbuf_iov + (signed long int)0)->iov_len = sizeof(struct rd_kafkap_reshdr) /*8ul*/ ;
    rkbuf->rkbuf_msg.msg_iov = rkbuf->rkbuf_iov;
    rkbuf->rkbuf_msg.msg_iovlen = (unsigned long int)1;
    msg = rkbuf->rkbuf_msg;
    rkb->rkb_recv_buf = rkbuf;
  }

  else
  {
    void *return_value___builtin_alloca$1;
    return_value___builtin_alloca$1=__builtin_alloca(sizeof(struct iovec) /*16ul*/  * (unsigned long int)rkbuf->rkbuf_iovcnt);
    msg.msg_iov = (struct iovec *)return_value___builtin_alloca$1;
    rd_kafka_msghdr_rebuild(&msg, rkbuf->rkbuf_msg.msg_iovlen, &rkbuf->rkbuf_msg, (signed long int)rkbuf->rkbuf_of);
  }
  do
  {
    unsigned long int return_value_rd_kafka_msghdr_size$2;
    return_value_rd_kafka_msghdr_size$2=rd_kafka_msghdr_size(&msg);
    if(!(return_value_rd_kafka_msghdr_size$2 >= 1ul))
      rd_kafka_crash("rdkafka_broker.c", 1440, "rd_kafka_recv", rkb->rkb_rk, "assert: rd_kafka_msghdr_size(&msg) > 0");

  }
  while((_Bool)0);
  r=recvmsg(rkb->rkb_s, &msg, 64);
  if(r == -1l)
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(*return_value___errno_location$3 == 11)
      return 0;

    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    char *return_value_strerror$5;
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    snprintf(errstr, sizeof(char [512l]) /*512ul*/ , "Receive error: %s", return_value_strerror$5);
    err_code = (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT;
    rkb->rkb_c.rx_err = rkb->rkb_c.rx_err + 1ul;
    goto err;
  }

  _Bool tmp_if_expr$8;
  if(r == 0l)
  {
    snprintf(errstr, sizeof(char [512l]) /*512ul*/ , "Disconnected");
    err_code = (enum anonymous$9)RD_KAFKA_RESP_ERR__TRANSPORT;
  }

  else
  {
    rkbuf->rkbuf_of = rkbuf->rkbuf_of + (unsigned long int)r;
    if(rkbuf->rkbuf_len == 0ul)
    {
      if(!(rkbuf->rkbuf_of >= sizeof(struct rd_kafkap_reshdr) /*8ul*/ ))
        return 0;

      unsigned int return_value_ntohl$6;
      return_value_ntohl$6=ntohl((unsigned int)rkbuf->rkbuf_reshdr.Size);
      rkbuf->rkbuf_len = (unsigned long int)return_value_ntohl$6;
      unsigned int return_value_ntohl$7;
      return_value_ntohl$7=ntohl((unsigned int)rkbuf->rkbuf_reshdr.CorrId);
      rkbuf->rkbuf_reshdr.CorrId = (signed int)return_value_ntohl$7;
      if(!(rkbuf->rkbuf_len >= 4ul))
        tmp_if_expr$8 = (_Bool)1;

      else
        tmp_if_expr$8 = rkbuf->rkbuf_len > (unsigned long int)rkb->rkb_rk->rk_conf.recv_max_msg_size ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$8)
      {
        snprintf(errstr, sizeof(char [512l]) /*512ul*/ , "Invalid message size %zd (0..%i): increase receive.message.max.bytes", rkbuf->rkbuf_len - (unsigned long int)4, rkb->rkb_rk->rk_conf.recv_max_msg_size);
        rkb->rkb_c.rx_err = rkb->rkb_c.rx_err + 1ul;
        err_code = (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
        goto err;
      }

      rkbuf->rkbuf_len = rkbuf->rkbuf_len - (unsigned long int)4;
      if(rkbuf->rkbuf_len >= 1ul)
      {
        void *return_value_malloc$9;
        return_value_malloc$9=malloc(rkbuf->rkbuf_len);
        rkbuf->rkbuf_buf2 = (char *)return_value_malloc$9;
        do
          if(!(rkbuf->rkbuf_msg.msg_iovlen == 1ul))
            rd_kafka_crash("rdkafka_broker.c", 1501, "rd_kafka_recv", rkb->rkb_rk, "assert: rkbuf->rkbuf_msg.msg_iovlen == 1");

        while((_Bool)0);
        (rkbuf->rkbuf_iov + (signed long int)1)->iov_base = (void *)rkbuf->rkbuf_buf2;
        (rkbuf->rkbuf_iov + (signed long int)1)->iov_len = rkbuf->rkbuf_len;
        rkbuf->rkbuf_msg.msg_iovlen = (unsigned long int)2;
      }

    }

    if(rkbuf->rkbuf_of == sizeof(struct rd_kafkap_reshdr) /*8ul*/  + rkbuf->rkbuf_len)
    {
      rkb->rkb_recv_buf = (struct rd_kafka_buf_s *)(void *)0;
      __atomic_add_fetch(&rkb->rkb_c.rx, 1, 5);
      __atomic_add_fetch(&rkb->rkb_c.rx_bytes, rkbuf->rkbuf_of, 5);
      rd_kafka_req_response(rkb, rkbuf);
    }

    return 1;
  }

err:
  ;
  rd_kafka_broker_fail(rkb, err_code, "Receive failed: %s", (const void *)errstr);
  return -1;
}

// rd_kafka_req_response
// file rdkafka_broker.c line 1293
static signed int rd_kafka_req_response(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf)
{
  struct rd_kafka_buf_s *req;
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 1297, "rd_kafka_req_response", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  req=rd_kafka_waitresp_find(rkb, rkbuf->rkbuf_reshdr.CorrId);
  unsigned short int return_value_ntohs$2;
  const char *return_value_rd_kafka_ApiKey2str$3;
  if(req == ((struct rd_kafka_buf_s *)NULL))
  {
    rkb->rkb_c.rx_corrid_err = rkb->rkb_c.rx_corrid_err + 1ul;
    do
      if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "RESPONSE", "Response for unknown CorrId %d (timed out?)", rkbuf->rkbuf_reshdr.CorrId);

    while((_Bool)0);
    rd_kafka_buf_destroy(rkbuf);
    return -1;
  }

  else
  {
    do
      if(!((signed long int)(0x80 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$2=ntohs((unsigned short int)req->rkbuf_reqhdr.ApiKey);
        return_value_rd_kafka_ApiKey2str$3=rd_kafka_ApiKey2str((signed short int)return_value_ntohs$2);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "RECV", "Received %sResponse (%zd bytes, CorrId %d, rtt %.2fms)", return_value_rd_kafka_ApiKey2str$3, rkbuf->rkbuf_len, rkbuf->rkbuf_reshdr.CorrId, (float)req->rkbuf_ts_sent / 1000.0f);
      }

    while((_Bool)0);
    req->rkbuf_cb(rkb, 0, rkbuf, req, req->rkbuf_opaque);
    return 0;
  }
}

// rd_kafka_send
// file rdkafka_broker.c line 1682
static signed int rd_kafka_send(struct rd_kafka_broker_s *rkb)
{
  struct rd_kafka_buf_s *rkbuf;
  unsigned int rd_kafka_send$$1$$cnt = (unsigned int)0;
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 1686, "rd_kafka_send", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  unsigned short int return_value_ntohs$2;
  const char *return_value_rd_kafka_ApiKey2str$3;
  while((signed int)rkb->rkb_state == RD_KAFKA_BROKER_STATE_UP)
  {
    rkbuf = (&rkb->rkb_outbufs.rkbq_bufs)->tqh_first;
    if(rkbuf == ((struct rd_kafka_buf_s *)NULL))
      break;

    signed long int r;
    struct msghdr *msg = &rkbuf->rkbuf_msg;
    struct msghdr msg2;
    struct iovec iov[1024l];
    if(!(rkbuf->rkbuf_of == 0ul))
    {
      msg2.msg_iov = iov;
      rd_kafka_msghdr_rebuild(&msg2, (unsigned long int)1024, &rkbuf->rkbuf_msg, (signed long int)rkbuf->rkbuf_of);
      msg = &msg2;
    }

    r=rd_kafka_broker_send(rkb, msg);
    if(r == -1l)
      return -1;

    rkbuf->rkbuf_of = rkbuf->rkbuf_of + (unsigned long int)r;
    if(!(rkbuf->rkbuf_of >= rkbuf->rkbuf_len))
      return 0;

    do
      if(!((signed long int)(0x80 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$2=ntohs((unsigned short int)rkbuf->rkbuf_reqhdr.ApiKey);
        return_value_rd_kafka_ApiKey2str$3=rd_kafka_ApiKey2str((signed short int)return_value_ntohs$2);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SEND", "Sent %sRequest (%zd bytes, CorrId %d)", return_value_rd_kafka_ApiKey2str$3, rkbuf->rkbuf_len, rkbuf->rkbuf_corrid);
      }

    while((_Bool)0);
    rd_kafka_bufq_deq(&rkb->rkb_outbufs, rkbuf);
    __atomic_sub_fetch(&rkb->rkb_outbuf_msgcnt, rkbuf->rkbuf_msgq.rkmq_msg_cnt, 5);
    rkbuf->rkbuf_ts_sent=rd_clock$link2();
    if((0x4 & rkbuf->rkbuf_flags) == 0)
      rd_kafka_bufq_enq(&rkb->rkb_waitresps, rkbuf);

    else
      rkbuf->rkbuf_cb(rkb, 0, (struct rd_kafka_buf_s *)(void *)0, rkbuf, rkbuf->rkbuf_opaque);
    rd_kafka_send$$1$$cnt = rd_kafka_send$$1$$cnt + 1u;
  }
  do
    if(!((signed long int)(0x2 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SEND", "Sent %i bufs", rd_kafka_send$$1$$cnt);

  while((_Bool)0);
  return (signed int)rd_kafka_send$$1$$cnt;
}

// rd_kafka_set_log_level
// file ../src/rdkafka.h line 1113
void rd_kafka_set_log_level(struct rd_kafka_s *rk, signed int level)
{
  rk->rk_conf.log_level = level;
}

// rd_kafka_set_logger
// file rdkafka.c line 168
void rd_kafka_set_logger(struct rd_kafka_s *rk, void (*func)(const struct rd_kafka_s *, signed int, const char *, const char *))
{
  rk->rk_conf.log_cb = func;
}

// rd_kafka_snappy_java_decompress
// file rdkafka_broker.c line 2618
static char * rd_kafka_snappy_java_decompress(struct rd_kafka_broker_s *rkb, signed long int Offset, const char *inbuf, unsigned long int inlen, unsigned long int *outlenp)
{
  signed int pass;
  char *outbuf = (char *)(void *)0;
  pass = 1;
  char *return_value_strerror$2;
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  for( ; !(pass >= 3); pass = pass + 1)
  {
    signed long int of = (signed long int)0;
    signed long int uof = (signed long int)0;
    while(inlen >= 4ul + (unsigned long int)of)
    {
      unsigned int clen;
      clen=ntohl(*((unsigned int *)(inbuf + of)));
      unsigned long int ulen;
      signed int r;
      of = of + (signed long int)4;
      if(!(inlen + -((unsigned long int)of) >= (unsigned long int)clen))
      {
        do
          if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Invalid snappy-java chunk length for message at offset %ld (%u>%zd: ignoring message", Offset, clen, inlen - (unsigned long int)of);

        while((_Bool)0);
        return (char *)(void *)0;
      }

      _Bool return_value_snappy_uncompressed_length$1;
      return_value_snappy_uncompressed_length$1=snappy_uncompressed_length(inbuf + of, (unsigned long int)clen, &ulen);
      if(return_value_snappy_uncompressed_length$1 == (_Bool)0)
      {
        do
          if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Failed to get length of (snappy-java framed) Snappy compressed payload for message at offset %ld (%d bytes): ignoring message", Offset, clen);

        while((_Bool)0);
        return (char *)(void *)0;
      }

      if(pass == 1)
      {
        of = of + (signed long int)clen;
        uof = uof + (signed long int)ulen;
      }

      else
      {
        r=snappy_uncompress(inbuf + of, (unsigned long int)clen, outbuf + uof);
        if(!((signed long int)r == 0l))
        {
          do
            if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
            {
              return_value_strerror$2=strerror(-r);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Failed to decompress Snappy-java framed payload for message at offset %ld (%d bytes): %s: ignoring message", Offset, clen, return_value_strerror$2);
            }

          while((_Bool)0);
          free((void *)outbuf);
          return (char *)(void *)0;
        }

        of = of + (signed long int)clen;
        uof = uof + (signed long int)ulen;
      }
    }
    if(!((unsigned long int)of == inlen))
    {
      do
        if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "%zd trailing bytes in Snappy-java framed compressed data at offset %ld: ignoring message", inlen - (unsigned long int)of, Offset);

      while((_Bool)0);
      return (char *)(void *)0;
    }

    if(pass == 1)
    {
      if(!(uof >= 1l))
      {
        do
          if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Empty Snappy-java framed data at offset %ld (%zd bytes): ignoring message", Offset, uof);

        while((_Bool)0);
        return (char *)(void *)0;
      }

      void *return_value_malloc$3;
      return_value_malloc$3=malloc((unsigned long int)uof);
      outbuf = (char *)return_value_malloc$3;
      if(outbuf == ((char *)NULL))
      {
        do
          if(!((signed long int)(0x40 & rkb->rkb_rk->rk_conf.debug) == 0l))
          {
            return_value___errno_location$4=__errno_location();
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "SNAPPY", "Failed to allocate memory for uncompressed Snappy data at offset %ld (%zd bytes): %s", Offset, uof, return_value_strerror$5);
          }

        while((_Bool)0);
        return (char *)(void *)0;
      }

    }

    else
      *outlenp = (unsigned long int)uof;
  }
  return outbuf;
}

// rd_kafka_socket_cb_generic
// file rdkafka_broker.c line 1540
signed int rd_kafka_socket_cb_generic(signed int domain, signed int type, signed int protocol, void *opaque)
{
  signed int s;
  signed int on = 1;
  s=socket(domain, type, protocol);
  if(s == -1)
    return -1;

  else
  {
    fcntl(s, 2, 1, &on);
    return s;
  }
}

// rd_kafka_socket_cb_linux
// file rdkafka_broker.c line 1527
signed int rd_kafka_socket_cb_linux(signed int domain, signed int type, signed int protocol, void *opaque)
{
  signed int return_value_socket$1;
  return_value_socket$1=socket(domain, type | 524288, protocol);
  return return_value_socket$1;
}

// rd_kafka_stats_emit_all
// file rdkafka.c line 969
static void rd_kafka_stats_emit_all(struct rd_kafka_s *rk)
{
  char *buf;
  unsigned long int size = (unsigned long int)(1024 * rk->rk_refcnt);
  signed int of = 0;
  struct rd_kafka_broker_s *rkb;
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_toppar_s *rktp;
  unsigned long int now;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(size);
  buf = (char *)return_value_malloc$1;
  pthread_rwlock_rdlock(&rk->rk_lock);
  now=rd_clock$link1();
  do
  {
    signed long int r;
    signed long int rem = (signed long int)(size - (unsigned long int)of);
    const char *return_value_rd_kafka_type2str$2;
    return_value_rd_kafka_type2str$2=rd_kafka_type2str(rk->rk_type);
    signed long int return_value_time$3;
    return_value_time$3=time((signed long int *)(void *)0);
    signed int return_value_rd_kafka_q_len$4;
    return_value_rd_kafka_q_len$4=rd_kafka_q_len(&rk->rk_rep);
    signed int return_value_snprintf$5;
    return_value_snprintf$5=snprintf(buf + (signed long int)of, (unsigned long int)rem, "{ \"name\": \"%s\", \"type\": \"%s\", \"ts\":%lu, \"time\":%lli, \"replyq\":%i, \"msg_cnt\":%i, \"msg_max\":%i, \"brokers\":{ ", (const void *)rk->rk_name, return_value_rd_kafka_type2str$2, now, (signed long long int)return_value_time$3, return_value_rd_kafka_q_len$4, rk->rk_u.producer.msg_cnt, rk->rk_conf.queue_buffering_max_msgs);
    r = (signed long int)return_value_snprintf$5;
    if(!(rem >= r))
    {
      size = size * (unsigned long int)2;
      void *return_value_realloc$6;
      return_value_realloc$6=realloc((void *)buf, size);
      buf = (char *)return_value_realloc$6;
      const char *return_value_rd_kafka_type2str$7;
      return_value_rd_kafka_type2str$7=rd_kafka_type2str(rk->rk_type);
      signed long int return_value_time$8;
      return_value_time$8=time((signed long int *)(void *)0);
      signed int return_value_rd_kafka_q_len$9;
      return_value_rd_kafka_q_len$9=rd_kafka_q_len(&rk->rk_rep);
      signed int return_value_snprintf$10;
      return_value_snprintf$10=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "{ \"name\": \"%s\", \"type\": \"%s\", \"ts\":%lu, \"time\":%lli, \"replyq\":%i, \"msg_cnt\":%i, \"msg_max\":%i, \"brokers\":{ ", (const void *)rk->rk_name, return_value_rd_kafka_type2str$7, now, (signed long long int)return_value_time$8, return_value_rd_kafka_q_len$9, rk->rk_u.producer.msg_cnt, rk->rk_conf.queue_buffering_max_msgs);
      r = (signed long int)return_value_snprintf$10;
    }

    of = of + (signed int)r;
  }
  while((_Bool)0);
  rkb = (&rk->rk_brokers)->tqh_first;
  unsigned long int tmp_if_expr$11;
  unsigned long int tmp_if_expr$14;
  signed int tmp_if_expr$18;
  unsigned short int return_value_ntohs$17;
  signed int tmp_if_expr$21;
  unsigned short int return_value_ntohs$20;
  signed int tmp_if_expr$26;
  unsigned short int return_value_ntohs$25;
  signed int tmp_if_expr$29;
  unsigned short int return_value_ntohs$28;
  for( ; !(rkb == ((struct rd_kafka_broker_s *)NULL)); rkb = rkb->rkb_link.tqe_next)
  {
    struct rd_kafka_avg_s rtt;
    pthread_mutex_lock(&rkb->rkb_lock);
    rd_kafka_avg_rollover(&rtt, &rkb->rkb_avg_rtt);
    do
    {
      signed long int rd_kafka_stats_emit_all$$1$$2$$1$$1$$r;
      signed long int rd_kafka_stats_emit_all$$1$$2$$1$$1$$rem = (signed long int)(size - (unsigned long int)of);
      if(!(rkb->rkb_ts_state == 0ul))
        tmp_if_expr$11 = now - rkb->rkb_ts_state;

      else
        tmp_if_expr$11 = (unsigned long int)0;
      signed int return_value_snprintf$12;
      return_value_snprintf$12=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$2$$1$$1$$rem, "%s\"%s\": { \"name\":\"%s\", \"nodeid\":%d, \"state\":\"%s\", \"stateage\":%ld, \"outbuf_cnt\":%i, \"outbuf_msg_cnt\":%i, \"waitresp_cnt\":%i, \"waitresp_msg_cnt\":%i, \"tx\":%lu, \"txbytes\":%lu, \"txerrs\":%lu, \"txretries\":%lu, \"req_timeouts\":%lu, \"rx\":%lu, \"rxbytes\":%lu, \"rxerrs\":%lu, \"rxcorriderrs\":%lu, \"rxpartial\":%lu, \"rtt\": { \"min\":%ld, \"max\":%ld, \"avg\":%ld, \"sum\":%ld, \"cnt\":%i }, \"toppars\":{ ", rkb == (&rk->rk_brokers)->tqh_first ? "" : ", ", (const void *)rkb->rkb_name, (const void *)rkb->rkb_name, rkb->rkb_nodeid, rd_kafka_broker_state_names[(signed long int)rkb->rkb_state], tmp_if_expr$11, rkb->rkb_outbufs.rkbq_cnt, rkb->rkb_outbufs.rkbq_msg_cnt, rkb->rkb_waitresps.rkbq_cnt, rkb->rkb_waitresps.rkbq_msg_cnt, rkb->rkb_c.tx, rkb->rkb_c.tx_bytes, rkb->rkb_c.tx_err, rkb->rkb_c.tx_retries, rkb->rkb_c.req_timeouts, rkb->rkb_c.rx, rkb->rkb_c.rx_bytes, rkb->rkb_c.rx_err, rkb->rkb_c.rx_corrid_err, rkb->rkb_c.rx_partial, rtt.ra_v.minv, rtt.ra_v.maxv, rtt.ra_v.avg, rtt.ra_v.sum, rtt.ra_v.cnt);
      rd_kafka_stats_emit_all$$1$$2$$1$$1$$r = (signed long int)return_value_snprintf$12;
      if(!(rd_kafka_stats_emit_all$$1$$2$$1$$1$$rem >= rd_kafka_stats_emit_all$$1$$2$$1$$1$$r))
      {
        size = size * (unsigned long int)2;
        void *return_value_realloc$13;
        return_value_realloc$13=realloc((void *)buf, size);
        buf = (char *)return_value_realloc$13;
        if(!(rkb->rkb_ts_state == 0ul))
          tmp_if_expr$14 = now - rkb->rkb_ts_state;

        else
          tmp_if_expr$14 = (unsigned long int)0;
        signed int return_value_snprintf$15;
        return_value_snprintf$15=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "%s\"%s\": { \"name\":\"%s\", \"nodeid\":%d, \"state\":\"%s\", \"stateage\":%ld, \"outbuf_cnt\":%i, \"outbuf_msg_cnt\":%i, \"waitresp_cnt\":%i, \"waitresp_msg_cnt\":%i, \"tx\":%lu, \"txbytes\":%lu, \"txerrs\":%lu, \"txretries\":%lu, \"req_timeouts\":%lu, \"rx\":%lu, \"rxbytes\":%lu, \"rxerrs\":%lu, \"rxcorriderrs\":%lu, \"rxpartial\":%lu, \"rtt\": { \"min\":%ld, \"max\":%ld, \"avg\":%ld, \"sum\":%ld, \"cnt\":%i }, \"toppars\":{ ", rkb == (&rk->rk_brokers)->tqh_first ? "" : ", ", (const void *)rkb->rkb_name, (const void *)rkb->rkb_name, rkb->rkb_nodeid, rd_kafka_broker_state_names[(signed long int)rkb->rkb_state], tmp_if_expr$14, rkb->rkb_outbufs.rkbq_cnt, rkb->rkb_outbufs.rkbq_msg_cnt, rkb->rkb_waitresps.rkbq_cnt, rkb->rkb_waitresps.rkbq_msg_cnt, rkb->rkb_c.tx, rkb->rkb_c.tx_bytes, rkb->rkb_c.tx_err, rkb->rkb_c.tx_retries, rkb->rkb_c.req_timeouts, rkb->rkb_c.rx, rkb->rkb_c.rx_bytes, rkb->rkb_c.rx_err, rkb->rkb_c.rx_corrid_err, rkb->rkb_c.rx_partial, rtt.ra_v.minv, rtt.ra_v.maxv, rtt.ra_v.avg, rtt.ra_v.sum, rtt.ra_v.cnt);
        rd_kafka_stats_emit_all$$1$$2$$1$$1$$r = (signed long int)return_value_snprintf$15;
      }

      of = of + (signed int)rd_kafka_stats_emit_all$$1$$2$$1$$1$$r;
    }
    while((_Bool)0);
    pthread_rwlock_rdlock(&rkb->rkb_toppar_lock);
    rktp = (&rkb->rkb_toppars)->tqh_first;
    for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rkblink.tqe_next)
      do
      {
        signed long int rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$r;
        signed long int rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$rem = (signed long int)(size - (unsigned long int)of);
        unsigned short int return_value_ntohs$16;
        return_value_ntohs$16=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$16 == -1)
          tmp_if_expr$18 = 0;

        else
        {
          return_value_ntohs$17=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          tmp_if_expr$18 = (signed int)return_value_ntohs$17;
        }
        unsigned short int return_value_ntohs$19;
        return_value_ntohs$19=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$19 == -1)
          tmp_if_expr$21 = 0;

        else
        {
          return_value_ntohs$20=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          tmp_if_expr$21 = (signed int)return_value_ntohs$20;
        }
        signed int return_value_snprintf$22;
        return_value_snprintf$22=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$rem, "%s\"%.*s\": { \"topic\":\"%.*s\", \"partition\":%d} ", rktp == (&rkb->rkb_toppars)->tqh_first ? "" : ", ", tmp_if_expr$18, (const void *)rktp->rktp_rkt->rkt_topic->str, tmp_if_expr$21, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
        rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$r = (signed long int)return_value_snprintf$22;
        if(!(rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$rem >= rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$r))
        {
          size = size * (unsigned long int)2;
          void *return_value_realloc$23;
          return_value_realloc$23=realloc((void *)buf, size);
          buf = (char *)return_value_realloc$23;
          unsigned short int return_value_ntohs$24;
          return_value_ntohs$24=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$24 == -1)
            tmp_if_expr$26 = 0;

          else
          {
            return_value_ntohs$25=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$26 = (signed int)return_value_ntohs$25;
          }
          unsigned short int return_value_ntohs$27;
          return_value_ntohs$27=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$27 == -1)
            tmp_if_expr$29 = 0;

          else
          {
            return_value_ntohs$28=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$29 = (signed int)return_value_ntohs$28;
          }
          signed int return_value_snprintf$30;
          return_value_snprintf$30=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "%s\"%.*s\": { \"topic\":\"%.*s\", \"partition\":%d} ", rktp == (&rkb->rkb_toppars)->tqh_first ? "" : ", ", tmp_if_expr$26, (const void *)rktp->rktp_rkt->rkt_topic->str, tmp_if_expr$29, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
          rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$r = (signed long int)return_value_snprintf$30;
        }

        of = of + (signed int)rd_kafka_stats_emit_all$$1$$2$$1$$2$$1$$1$$r;
      }
      while((_Bool)0);
    pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
    pthread_mutex_unlock(&rkb->rkb_lock);
    do
    {
      signed long int rd_kafka_stats_emit_all$$1$$2$$1$$3$$r;
      signed long int rd_kafka_stats_emit_all$$1$$2$$1$$3$$rem = (signed long int)(size - (unsigned long int)of);
      signed int return_value_snprintf$31;
      return_value_snprintf$31=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$2$$1$$3$$rem, "} } ");
      rd_kafka_stats_emit_all$$1$$2$$1$$3$$r = (signed long int)return_value_snprintf$31;
      if(!(rd_kafka_stats_emit_all$$1$$2$$1$$3$$rem >= rd_kafka_stats_emit_all$$1$$2$$1$$3$$r))
      {
        size = size * (unsigned long int)2;
        void *return_value_realloc$32;
        return_value_realloc$32=realloc((void *)buf, size);
        buf = (char *)return_value_realloc$32;
        signed int return_value_snprintf$33;
        return_value_snprintf$33=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "} } ");
        rd_kafka_stats_emit_all$$1$$2$$1$$3$$r = (signed long int)return_value_snprintf$33;
      }

      of = of + (signed int)rd_kafka_stats_emit_all$$1$$2$$1$$3$$r;
    }
    while((_Bool)0);
  }
  do
  {
    signed long int rd_kafka_stats_emit_all$$1$$3$$r;
    signed long int rd_kafka_stats_emit_all$$1$$3$$rem = (signed long int)(size - (unsigned long int)of);
    signed int return_value_snprintf$34;
    return_value_snprintf$34=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$3$$rem, "}, \"topics\":{ ");
    rd_kafka_stats_emit_all$$1$$3$$r = (signed long int)return_value_snprintf$34;
    if(!(rd_kafka_stats_emit_all$$1$$3$$rem >= rd_kafka_stats_emit_all$$1$$3$$r))
    {
      size = size * (unsigned long int)2;
      void *return_value_realloc$35;
      return_value_realloc$35=realloc((void *)buf, size);
      buf = (char *)return_value_realloc$35;
      signed int return_value_snprintf$36;
      return_value_snprintf$36=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "}, \"topics\":{ ");
      rd_kafka_stats_emit_all$$1$$3$$r = (signed long int)return_value_snprintf$36;
    }

    of = of + (signed int)rd_kafka_stats_emit_all$$1$$3$$r;
  }
  while((_Bool)0);
  rkt = (&rk->rk_topics)->tqh_first;
  signed int tmp_if_expr$39;
  unsigned short int return_value_ntohs$38;
  signed int tmp_if_expr$42;
  unsigned short int return_value_ntohs$41;
  unsigned long int tmp_if_expr$44;
  unsigned long int return_value_rd_clock$43;
  signed int tmp_if_expr$49;
  unsigned short int return_value_ntohs$48;
  signed int tmp_if_expr$52;
  unsigned short int return_value_ntohs$51;
  unsigned long int tmp_if_expr$54;
  unsigned long int return_value_rd_clock$53;
  signed int tmp_post$56;
  signed int tmp_post$57;
  for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
  {
    signed int i;
    pthread_rwlock_rdlock(&rkt->rkt_lock);
    do
    {
      signed long int rd_kafka_stats_emit_all$$1$$4$$1$$1$$r;
      signed long int rd_kafka_stats_emit_all$$1$$4$$1$$1$$rem = (signed long int)(size - (unsigned long int)of);
      unsigned short int return_value_ntohs$37;
      return_value_ntohs$37=ntohs((unsigned short int)rkt->rkt_topic->len);
      if((signed int)(signed short int)return_value_ntohs$37 == -1)
        tmp_if_expr$39 = 0;

      else
      {
        return_value_ntohs$38=ntohs((unsigned short int)rkt->rkt_topic->len);
        tmp_if_expr$39 = (signed int)return_value_ntohs$38;
      }
      unsigned short int return_value_ntohs$40;
      return_value_ntohs$40=ntohs((unsigned short int)rkt->rkt_topic->len);
      if((signed int)(signed short int)return_value_ntohs$40 == -1)
        tmp_if_expr$42 = 0;

      else
      {
        return_value_ntohs$41=ntohs((unsigned short int)rkt->rkt_topic->len);
        tmp_if_expr$42 = (signed int)return_value_ntohs$41;
      }
      if(!(rkt->rkt_ts_metadata == 0ul))
      {
        return_value_rd_clock$43=rd_clock$link1();
        tmp_if_expr$44 = (return_value_rd_clock$43 - rkt->rkt_ts_metadata) / (unsigned long int)1000;
      }

      else
        tmp_if_expr$44 = (unsigned long int)0;
      signed int return_value_snprintf$45;
      return_value_snprintf$45=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$4$$1$$1$$rem, "%s\"%.*s\": { \"topic\":\"%.*s\", \"metadata_age\":%ld, \"partitions\":{ ", rkt == (&rk->rk_topics)->tqh_first ? "" : ", ", tmp_if_expr$39, (const void *)rkt->rkt_topic->str, tmp_if_expr$42, (const void *)rkt->rkt_topic->str, tmp_if_expr$44);
      rd_kafka_stats_emit_all$$1$$4$$1$$1$$r = (signed long int)return_value_snprintf$45;
      if(!(rd_kafka_stats_emit_all$$1$$4$$1$$1$$rem >= rd_kafka_stats_emit_all$$1$$4$$1$$1$$r))
      {
        size = size * (unsigned long int)2;
        void *return_value_realloc$46;
        return_value_realloc$46=realloc((void *)buf, size);
        buf = (char *)return_value_realloc$46;
        unsigned short int return_value_ntohs$47;
        return_value_ntohs$47=ntohs((unsigned short int)rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$47 == -1)
          tmp_if_expr$49 = 0;

        else
        {
          return_value_ntohs$48=ntohs((unsigned short int)rkt->rkt_topic->len);
          tmp_if_expr$49 = (signed int)return_value_ntohs$48;
        }
        unsigned short int return_value_ntohs$50;
        return_value_ntohs$50=ntohs((unsigned short int)rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$50 == -1)
          tmp_if_expr$52 = 0;

        else
        {
          return_value_ntohs$51=ntohs((unsigned short int)rkt->rkt_topic->len);
          tmp_if_expr$52 = (signed int)return_value_ntohs$51;
        }
        if(!(rkt->rkt_ts_metadata == 0ul))
        {
          return_value_rd_clock$53=rd_clock$link1();
          tmp_if_expr$54 = (return_value_rd_clock$53 - rkt->rkt_ts_metadata) / (unsigned long int)1000;
        }

        else
          tmp_if_expr$54 = (unsigned long int)0;
        signed int return_value_snprintf$55;
        return_value_snprintf$55=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "%s\"%.*s\": { \"topic\":\"%.*s\", \"metadata_age\":%ld, \"partitions\":{ ", rkt == (&rk->rk_topics)->tqh_first ? "" : ", ", tmp_if_expr$49, (const void *)rkt->rkt_topic->str, tmp_if_expr$52, (const void *)rkt->rkt_topic->str, tmp_if_expr$54);
        rd_kafka_stats_emit_all$$1$$4$$1$$1$$r = (signed long int)return_value_snprintf$55;
      }

      of = of + (signed int)rd_kafka_stats_emit_all$$1$$4$$1$$1$$r;
    }
    while((_Bool)0);
    i = 0;
    for( ; !(i >= rkt->rkt_partition_cnt); i = i + 1)
      rd_kafka_stats_emit_toppar(&buf, &size, &of, rkt->rkt_p[(signed long int)i], (signed int)(i == 0));
    rktp = (&rkt->rkt_desp)->tqh_first;
    for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rktlink.tqe_next)
    {
      tmp_post$56 = i;
      i = i + 1;
      rd_kafka_stats_emit_toppar(&buf, &size, &of, rktp, (signed int)(tmp_post$56 == 0));
    }
    if(!(rkt->rkt_ua == ((struct rd_kafka_toppar_s *)NULL)))
    {
      tmp_post$57 = i;
      i = i + 1;
      rd_kafka_stats_emit_toppar(&buf, &size, &of, rkt->rkt_ua, (signed int)(tmp_post$57 == 0));
    }

    pthread_rwlock_unlock(&rkt->rkt_lock);
    do
    {
      signed long int rd_kafka_stats_emit_all$$1$$4$$1$$4$$r;
      signed long int rd_kafka_stats_emit_all$$1$$4$$1$$4$$rem = (signed long int)(size - (unsigned long int)of);
      signed int return_value_snprintf$58;
      return_value_snprintf$58=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$4$$1$$4$$rem, "} } ");
      rd_kafka_stats_emit_all$$1$$4$$1$$4$$r = (signed long int)return_value_snprintf$58;
      if(!(rd_kafka_stats_emit_all$$1$$4$$1$$4$$rem >= rd_kafka_stats_emit_all$$1$$4$$1$$4$$r))
      {
        size = size * (unsigned long int)2;
        void *return_value_realloc$59;
        return_value_realloc$59=realloc((void *)buf, size);
        buf = (char *)return_value_realloc$59;
        signed int return_value_snprintf$60;
        return_value_snprintf$60=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "} } ");
        rd_kafka_stats_emit_all$$1$$4$$1$$4$$r = (signed long int)return_value_snprintf$60;
      }

      of = of + (signed int)rd_kafka_stats_emit_all$$1$$4$$1$$4$$r;
    }
    while((_Bool)0);
  }
  pthread_rwlock_unlock(&rk->rk_lock);
  do
  {
    signed long int rd_kafka_stats_emit_all$$1$$5$$r;
    signed long int rd_kafka_stats_emit_all$$1$$5$$rem = (signed long int)(size - (unsigned long int)of);
    signed int return_value_snprintf$61;
    return_value_snprintf$61=snprintf(buf + (signed long int)of, (unsigned long int)rd_kafka_stats_emit_all$$1$$5$$rem, "} }");
    rd_kafka_stats_emit_all$$1$$5$$r = (signed long int)return_value_snprintf$61;
    if(!(rd_kafka_stats_emit_all$$1$$5$$rem >= rd_kafka_stats_emit_all$$1$$5$$r))
    {
      size = size * (unsigned long int)2;
      void *return_value_realloc$62;
      return_value_realloc$62=realloc((void *)buf, size);
      buf = (char *)return_value_realloc$62;
      signed int return_value_snprintf$63;
      return_value_snprintf$63=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "} }");
      rd_kafka_stats_emit_all$$1$$5$$r = (signed long int)return_value_snprintf$63;
    }

    of = of + (signed int)rd_kafka_stats_emit_all$$1$$5$$r;
  }
  while((_Bool)0);
  rd_kafka_op_reply(rk, (enum anonymous$44)RD_KAFKA_OP_STATS, (enum anonymous$9)0, (void *)buf, of);
}

// rd_kafka_stats_emit_tmr_cb
// file rdkafka.c line 1130
static void rd_kafka_stats_emit_tmr_cb(struct rd_kafka_s *rk, void *arg)
{
  rd_kafka_stats_emit_all(rk);
}

// rd_kafka_stats_emit_toppar
// file rdkafka.c line 890
static inline void rd_kafka_stats_emit_toppar(char **bufp, unsigned long int *sizep, signed int *ofp, struct rd_kafka_toppar_s *rktp, signed int first)
{
  char *buf = *bufp;
  unsigned long int size = *sizep;
  signed int of = *ofp;
  signed long int consumer_lag = (signed long int)-1;
  if(!(rktp->rktp_hi_offset == -1l))
  {
    if(rktp->rktp_next_offset >= 1l)
    {
      if(!(rktp->rktp_hi_offset >= rktp->rktp_next_offset))
        consumer_lag = (signed long int)0;

      else
        consumer_lag = rktp->rktp_hi_offset - rktp->rktp_next_offset;
    }

  }

  signed int tmp_if_expr$1;
  signed int tmp_if_expr$6;
  do
  {
    signed long int r;
    signed long int rem = (signed long int)(size - (unsigned long int)of);
    if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
      tmp_if_expr$1 = rktp->rktp_leader->rkb_nodeid;

    else
      tmp_if_expr$1 = -1;
    signed int return_value_rd_kafka_q_len$2;
    return_value_rd_kafka_q_len$2=rd_kafka_q_len(&rktp->rktp_fetchq);
    unsigned long int return_value_rd_kafka_q_size$3;
    return_value_rd_kafka_q_size$3=rd_kafka_q_size(&rktp->rktp_fetchq);
    signed int return_value_snprintf$4;
    return_value_snprintf$4=snprintf(buf + (signed long int)of, (unsigned long int)rem, "%s\"%d\": { \"partition\":%d, \"leader\":%d, \"desired\":%s, \"unknown\":%s, \"msgq_cnt\":%i, \"msgq_bytes\":%lu, \"xmit_msgq_cnt\":%i, \"xmit_msgq_bytes\":%lu, \"fetchq_cnt\":%i, \"fetchq_size\":%lu, \"fetch_state\":\"%s\", \"query_offset\":%ld, \"next_offset\":%ld, \"app_offset\":%ld, \"stored_offset\":%ld, \"commited_offset\":%ld, \"committed_offset\":%ld, \"eof_offset\":%ld, \"lo_offset\":%ld, \"hi_offset\":%ld, \"consumer_lag\":%ld, \"txmsgs\":%lu, \"txbytes\":%lu, \"msgs\": %lu } ", first != 0 ? "" : ", ", rktp->rktp_partition, rktp->rktp_partition, tmp_if_expr$1, (rktp->rktp_flags & 0x1) != 0 ? "true" : "false", (rktp->rktp_flags & 0x2) != 0 ? "true" : "false", rktp->rktp_msgq.rkmq_msg_cnt, rktp->rktp_msgq.rkmq_msg_bytes, rktp->rktp_xmit_msgq.rkmq_msg_cnt, rktp->rktp_xmit_msgq.rkmq_msg_bytes, return_value_rd_kafka_q_len$2, return_value_rd_kafka_q_size$3, rd_kafka_fetch_states[(signed long int)rktp->rktp_fetch_state], rktp->rktp_query_offset, rktp->rktp_next_offset, rktp->rktp_app_offset, rktp->rktp_stored_offset, rktp->rktp_commited_offset, rktp->rktp_commited_offset, rktp->rktp_eof_offset, rktp->rktp_lo_offset, rktp->rktp_hi_offset, consumer_lag, rktp->rktp_c.tx_msgs, rktp->rktp_c.tx_bytes, rktp->rktp_c.msgs);
    r = (signed long int)return_value_snprintf$4;
    if(!(rem >= r))
    {
      size = size * (unsigned long int)2;
      void *return_value_realloc$5;
      return_value_realloc$5=realloc((void *)buf, size);
      buf = (char *)return_value_realloc$5;
      if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
        tmp_if_expr$6 = rktp->rktp_leader->rkb_nodeid;

      else
        tmp_if_expr$6 = -1;
      signed int return_value_rd_kafka_q_len$7;
      return_value_rd_kafka_q_len$7=rd_kafka_q_len(&rktp->rktp_fetchq);
      unsigned long int return_value_rd_kafka_q_size$8;
      return_value_rd_kafka_q_size$8=rd_kafka_q_size(&rktp->rktp_fetchq);
      signed int return_value_snprintf$9;
      return_value_snprintf$9=snprintf(buf + (signed long int)of, size - (unsigned long int)of, "%s\"%d\": { \"partition\":%d, \"leader\":%d, \"desired\":%s, \"unknown\":%s, \"msgq_cnt\":%i, \"msgq_bytes\":%lu, \"xmit_msgq_cnt\":%i, \"xmit_msgq_bytes\":%lu, \"fetchq_cnt\":%i, \"fetchq_size\":%lu, \"fetch_state\":\"%s\", \"query_offset\":%ld, \"next_offset\":%ld, \"app_offset\":%ld, \"stored_offset\":%ld, \"commited_offset\":%ld, \"committed_offset\":%ld, \"eof_offset\":%ld, \"lo_offset\":%ld, \"hi_offset\":%ld, \"consumer_lag\":%ld, \"txmsgs\":%lu, \"txbytes\":%lu, \"msgs\": %lu } ", first != 0 ? "" : ", ", rktp->rktp_partition, rktp->rktp_partition, tmp_if_expr$6, (rktp->rktp_flags & 0x1) != 0 ? "true" : "false", (rktp->rktp_flags & 0x2) != 0 ? "true" : "false", rktp->rktp_msgq.rkmq_msg_cnt, rktp->rktp_msgq.rkmq_msg_bytes, rktp->rktp_xmit_msgq.rkmq_msg_cnt, rktp->rktp_xmit_msgq.rkmq_msg_bytes, return_value_rd_kafka_q_len$7, return_value_rd_kafka_q_size$8, rd_kafka_fetch_states[(signed long int)rktp->rktp_fetch_state], rktp->rktp_query_offset, rktp->rktp_next_offset, rktp->rktp_app_offset, rktp->rktp_stored_offset, rktp->rktp_commited_offset, rktp->rktp_commited_offset, rktp->rktp_eof_offset, rktp->rktp_lo_offset, rktp->rktp_hi_offset, consumer_lag, rktp->rktp_c.tx_msgs, rktp->rktp_c.tx_bytes, rktp->rktp_c.msgs);
      r = (signed long int)return_value_snprintf$9;
    }

    of = of + (signed int)r;
  }
  while((_Bool)0);
  *bufp = buf;
  *sizep = size;
  *ofp = of;
}

// rd_kafka_term_sig_handler
// file rdkafka.c line 1189
static void rd_kafka_term_sig_handler(signed int sig)
{
  ;
}

// rd_kafka_thread_cnt
// file rdkafka.c line 55
signed int rd_kafka_thread_cnt(void)
{
  return rd_kafka_thread_cnt_curr;
}

// rd_kafka_thread_main
// file rdkafka.c line 1158
static void * rd_kafka_thread_main(void *arg)
{
  struct rd_kafka_s *rd_kafka_thread_main$$1$$rk = (struct rd_kafka_s *)arg;
  struct rd_kafka_timer_s tmr_topic_scan = { .rtmr_link={ .tqe_next=((struct rd_kafka_timer_s *)NULL), .tqe_prev=((struct rd_kafka_timer_s **)NULL) }, .rtmr_next=0ul,
    .rtmr_interval=0, .rtmr_callback=((void (*)(struct rd_kafka_s *, void *))NULL), .rtmr_arg=NULL };
  struct rd_kafka_timer_s tmr_stats_emit = { .rtmr_link={ .tqe_next=((struct rd_kafka_timer_s *)NULL), .tqe_prev=((struct rd_kafka_timer_s **)NULL) }, .rtmr_next=0ul,
    .rtmr_interval=0, .rtmr_callback=((void (*)(struct rd_kafka_s *, void *))NULL), .rtmr_arg=NULL };
  struct rd_kafka_timer_s tmr_metadata_refresh = { .rtmr_link={ .tqe_next=((struct rd_kafka_timer_s *)NULL), .tqe_prev=((struct rd_kafka_timer_s **)NULL) }, .rtmr_next=0ul,
    .rtmr_interval=0, .rtmr_callback=((void (*)(struct rd_kafka_s *, void *))NULL), .rtmr_arg=NULL };
  __atomic_add_fetch(&rd_kafka_thread_cnt_curr, 1, 5);
  rd_kafka_timer_start(rd_kafka_thread_main$$1$$rk, &tmr_topic_scan, 1000000, rd_kafka_topic_scan_tmr_cb, (void *)0);
  rd_kafka_timer_start(rd_kafka_thread_main$$1$$rk, &tmr_stats_emit, rd_kafka_thread_main$$1$$rk->rk_conf.stats_interval_ms * 1000, rd_kafka_stats_emit_tmr_cb, (void *)0);
  if(rd_kafka_thread_main$$1$$rk->rk_conf.metadata_refresh_interval_ms >= 0)
    rd_kafka_timer_start(rd_kafka_thread_main$$1$$rk, &tmr_metadata_refresh, rd_kafka_thread_main$$1$$rk->rk_conf.metadata_refresh_interval_ms * 1000, rd_kafka_metadata_refresh_cb, (void *)0);

  while(rd_kafka_thread_main$$1$$rk->rk_terminate == 0)
    rd_kafka_timers_run(rd_kafka_thread_main$$1$$rk, 1000000);
  rd_kafka_destroy0(rd_kafka_thread_main$$1$$rk);
  __atomic_sub_fetch(&rd_kafka_thread_cnt_curr, 1, 5);
  return (void *)0;
}

// rd_kafka_timer_cmp
// file rdkafka_timer.c line 44
static signed int rd_kafka_timer_cmp(const void *_a, const void *_b)
{
  const struct rd_kafka_timer_s *a = (const struct rd_kafka_timer_s *)_a;
  const struct rd_kafka_timer_s *b = (const struct rd_kafka_timer_s *)_b;
  return (signed int)(a->rtmr_next - b->rtmr_next);
}

// rd_kafka_timer_schedule
// file rdkafka_timer.c line 54
static void rd_kafka_timer_schedule(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr)
{
  struct rd_kafka_timer_s *first;
  _Bool tmp_if_expr$3;
  if(!(rtmr->rtmr_interval == 0))
  {
    unsigned long int return_value_rd_clock$1;
    return_value_rd_clock$1=rd_clock$link5();
    rtmr->rtmr_next = return_value_rd_clock$1 + (unsigned long int)rtmr->rtmr_interval;
    first = (&rk->rk_timers)->tqh_first;
    if(first == ((struct rd_kafka_timer_s *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = first->rtmr_next > rtmr->rtmr_next ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      do
      {
        rtmr->rtmr_link.tqe_next = (&rk->rk_timers)->tqh_first;
        if(!(rtmr->rtmr_link.tqe_next == ((struct rd_kafka_timer_s *)NULL)))
          (&rk->rk_timers)->tqh_first->rtmr_link.tqe_prev = &rtmr->rtmr_link.tqe_next;

        else
          (&rk->rk_timers)->tqh_last = &rtmr->rtmr_link.tqe_next;
        (&rk->rk_timers)->tqh_first = rtmr;
        rtmr->rtmr_link.tqe_prev = &(&rk->rk_timers)->tqh_first;
      }
      while((_Bool)0);
      pthread_cond_signal(&rk->rk_timers_cond);
    }

    else
      do
        if(rk->rk_timers.tqh_first == ((struct rd_kafka_timer_s *)NULL))
          do
          {
            rtmr->rtmr_link.tqe_next = (&rk->rk_timers)->tqh_first;
            if(!(rtmr->rtmr_link.tqe_next == ((struct rd_kafka_timer_s *)NULL)))
              (&rk->rk_timers)->tqh_first->rtmr_link.tqe_prev = &rtmr->rtmr_link.tqe_next;

            else
              (&rk->rk_timers)->tqh_last = &rtmr->rtmr_link.tqe_next;
            (&rk->rk_timers)->tqh_first = rtmr;
            rtmr->rtmr_link.tqe_prev = &(&rk->rk_timers)->tqh_first;
          }
          while((_Bool)0);

        else
        {
          struct rd_kafka_timer_s *_tmp = (&rk->rk_timers)->tqh_first;
          for( ; !(_tmp == ((struct rd_kafka_timer_s *)NULL)); _tmp = _tmp->rtmr_link.tqe_next)
          {
            signed int return_value_rd_kafka_timer_cmp$2;
            return_value_rd_kafka_timer_cmp$2=rd_kafka_timer_cmp((const void *)rtmr, (const void *)_tmp);
            if(!(return_value_rd_kafka_timer_cmp$2 >= 1))
            {
              do
              {
                rtmr->rtmr_link.tqe_prev = _tmp->rtmr_link.tqe_prev;
                rtmr->rtmr_link.tqe_next = _tmp;
                *_tmp->rtmr_link.tqe_prev = rtmr;
                _tmp->rtmr_link.tqe_prev = &rtmr->rtmr_link.tqe_next;
              }
              while((_Bool)0);
              break;
            }

            if(_tmp->rtmr_link.tqe_next == ((struct rd_kafka_timer_s *)NULL))
            {
              do
              {
                rtmr->rtmr_link.tqe_next = _tmp->rtmr_link.tqe_next;
                if(!(rtmr->rtmr_link.tqe_next == ((struct rd_kafka_timer_s *)NULL)))
                  rtmr->rtmr_link.tqe_next->rtmr_link.tqe_prev = &rtmr->rtmr_link.tqe_next;

                else
                  (&rk->rk_timers)->tqh_last = &rtmr->rtmr_link.tqe_next;
                _tmp->rtmr_link.tqe_next = rtmr;
                rtmr->rtmr_link.tqe_prev = &_tmp->rtmr_link.tqe_next;
              }
              while((_Bool)0);
              break;
            }

          }
        }
      while((_Bool)0);
  }

}

// rd_kafka_timer_start
// file rdkafka_timer.h line 46
void rd_kafka_timer_start(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr, signed int interval, void (*callback)(struct rd_kafka_s *, void *), void *arg)
{
  pthread_mutex_lock(&rk->rk_timers_lock);
  signed int return_value_rd_kafka_timer_started$1;
  return_value_rd_kafka_timer_started$1=rd_kafka_timer_started(rtmr);
  if(!(return_value_rd_kafka_timer_started$1 == 0))
    rd_kafka_timer_stop(rk, rtmr, 0);

  rtmr->rtmr_interval = interval;
  rtmr->rtmr_callback = callback;
  rtmr->rtmr_arg = arg;
  rd_kafka_timer_schedule(rk, rtmr);
  pthread_mutex_unlock(&rk->rk_timers_lock);
}

// rd_kafka_timer_started
// file rdkafka_timer.c line 39
static inline signed int rd_kafka_timer_started(const struct rd_kafka_timer_s *rtmr)
{
  return rtmr->rtmr_next != 0ul ? 1 : 0;
}

// rd_kafka_timer_stop
// file rdkafka_timer.c line 76
void rd_kafka_timer_stop(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr, signed int lock)
{
  if(!(lock == 0))
    pthread_mutex_lock(&rk->rk_timers_lock);

  signed int return_value_rd_kafka_timer_started$1;
  return_value_rd_kafka_timer_started$1=rd_kafka_timer_started(rtmr);
  if(return_value_rd_kafka_timer_started$1 == 0)
  {
    if(!(lock == 0))
      pthread_mutex_unlock(&rk->rk_timers_lock);

  }

  else
  {
    rd_kafka_timer_unschedule(rk, rtmr);
    rtmr->rtmr_interval = 0;
    if(!(lock == 0))
      pthread_mutex_unlock(&rk->rk_timers_lock);

  }
}

// rd_kafka_timer_unschedule
// file rdkafka_timer.c line 49
static void rd_kafka_timer_unschedule(struct rd_kafka_s *rk, struct rd_kafka_timer_s *rtmr)
{
  do
  {
    if(!(rtmr->rtmr_link.tqe_next == ((struct rd_kafka_timer_s *)NULL)))
      rtmr->rtmr_link.tqe_next->rtmr_link.tqe_prev = rtmr->rtmr_link.tqe_prev;

    else
      (&rk->rk_timers)->tqh_last = rtmr->rtmr_link.tqe_prev;
    *rtmr->rtmr_link.tqe_prev = rtmr->rtmr_link.tqe_next;
  }
  while((_Bool)0);
  rtmr->rtmr_next = (unsigned long int)0;
}

// rd_kafka_timers_interrupt
// file rdkafka_timer.h line 51
void rd_kafka_timers_interrupt(struct rd_kafka_s *rk)
{
  pthread_mutex_lock(&rk->rk_timers_lock);
  pthread_cond_signal(&rk->rk_timers_cond);
  pthread_mutex_unlock(&rk->rk_timers_lock);
}

// rd_kafka_timers_run
// file rdkafka_timer.h line 52
void rd_kafka_timers_run(struct rd_kafka_s *rk, signed int timeout)
{
  unsigned long int now;
  now=rd_clock$link5();
  unsigned long int end = now + (unsigned long int)timeout;
  pthread_mutex_lock(&rk->rk_timers_lock);
  while(rk->rk_terminate == 0)
  {
    if(!(end >= now))
      break;

    signed long int sleeptime;
    struct rd_kafka_timer_s *rtmr = (&rk->rk_timers)->tqh_first;
    if(!(rtmr == ((struct rd_kafka_timer_s *)NULL)))
      sleeptime = (signed long int)(rtmr->rtmr_next - now);

    else
      sleeptime = (signed long int)100000000000000llu;
    if(sleeptime >= 1l)
    {
      if(!(end + -now >= (unsigned long int)sleeptime))
        sleeptime = (signed long int)(end - now);

      pthread_cond_timedwait_ms(&rk->rk_timers_cond, &rk->rk_timers_lock, (signed int)(sleeptime / (signed long int)1000));
      now=rd_clock$link5();
    }

    rtmr = (&rk->rk_timers)->tqh_first;
    if(!(rtmr == ((struct rd_kafka_timer_s *)NULL)))
    {
      if(now >= rtmr->rtmr_next)
      {
        rd_kafka_timer_unschedule(rk, rtmr);
        pthread_mutex_unlock(&rk->rk_timers_lock);
        rtmr->rtmr_callback(rk, rtmr->rtmr_arg);
        pthread_mutex_lock(&rk->rk_timers_lock);
        rd_kafka_timer_schedule(rk, rtmr);
      }

    }

  }
  pthread_mutex_unlock(&rk->rk_timers_lock);
}

// rd_kafka_topic_assign_uas
// file rdkafka_topic.c line 883
static void rd_kafka_topic_assign_uas(struct rd_kafka_topic_s *rkt)
{
  struct rd_kafka_s *rd_kafka_topic_assign_uas$$1$$rk = rkt->rkt_rk;
  struct rd_kafka_toppar_s *rktp_ua;
  struct rd_kafka_msg_s *rkm;
  struct rd_kafka_msg_s *tmp;
  struct rd_kafka_msgq_s uas = { .rkmq_msgs={ .tqh_first=(struct rd_kafka_msg_s *)(void *)0, .tqh_last=&uas.rkmq_msgs.tqh_first }, .rkmq_msg_cnt=0,
    .rkmq_msg_bytes=0ul };
  struct rd_kafka_msgq_s failed = { .rkmq_msgs={ .tqh_first=(struct rd_kafka_msg_s *)(void *)0, .tqh_last=&failed.rkmq_msgs.tqh_first }, .rkmq_msg_cnt=0,
    .rkmq_msg_bytes=0ul };
  signed int rd_kafka_topic_assign_uas$$1$$cnt;
  rktp_ua=rd_kafka_toppar_get(rkt, (signed int)-1, 0);
  unsigned short int return_value_ntohs$1;
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  _Bool tmp_if_expr$4;
  if(rktp_ua == ((struct rd_kafka_toppar_s *)NULL))
    do
      if(!((signed long int)(0x4 & rd_kafka_topic_assign_uas$$1$$rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rd_kafka_topic_assign_uas$$1$$rk, (const char *)(void *)0, 7, "ASSIGNUA", "No UnAssigned partition available for %s", (const void *)rkt->rkt_topic->str);

    while((_Bool)0);

  else
  {
    do
      if(!((signed long int)(0x4 & rd_kafka_topic_assign_uas$$1$$rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$1=ntohs((unsigned short int)rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$1 == -1)
          tmp_if_expr$3 = 0;

        else
        {
          return_value_ntohs$2=ntohs((unsigned short int)rkt->rkt_topic->len);
          tmp_if_expr$3 = (signed int)return_value_ntohs$2;
        }
        rd_kafka_log0(rd_kafka_topic_assign_uas$$1$$rk, (const char *)(void *)0, 7, "PARTCNT", "Partitioning %i unassigned messages in topic %.*s to %d partitions", rktp_ua->rktp_msgq.rkmq_msg_cnt, tmp_if_expr$3, (const void *)rkt->rkt_topic->str, rkt->rkt_partition_cnt);
      }

    while((_Bool)0);
    pthread_mutex_lock(&rktp_ua->rktp_lock);
    rd_kafka_msgq_move$link1(&uas, &rktp_ua->rktp_msgq);
    rd_kafka_topic_assign_uas$$1$$cnt = uas.rkmq_msg_cnt;
    pthread_mutex_unlock(&rktp_ua->rktp_lock);
    rkm = (&uas.rkmq_msgs)->tqh_first;
    do
    {
      if(!(rkm == ((struct rd_kafka_msg_s *)NULL)))
      {
        tmp = rkm->rkm_link.tqe_next;
        tmp_if_expr$4 = 1 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      if(!tmp_if_expr$4)
        break;

      if(!(rkm->rkm_partition == -1))
      {
        if(!(rkm->rkm_partition >= rkt->rkt_partition_cnt))
          goto __CPROVER_DUMP_L10;

        if((signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_UNKNOWN)
          goto __CPROVER_DUMP_L10;

        rd_kafka_msgq_enq$link2(&failed, rkm);
      }

      else
      {

      __CPROVER_DUMP_L10:
        ;
        signed int return_value_rd_kafka_msg_partitioner$5;
        return_value_rd_kafka_msg_partitioner$5=rd_kafka_msg_partitioner(rkt, rkm, 0);
        if(!(return_value_rd_kafka_msg_partitioner$5 == 0))
          rd_kafka_msgq_enq$link2(&failed, rkm);

      }
      rkm = tmp;
    }
    while((_Bool)1);
    do
      if(!((signed long int)(0x4 & rd_kafka_topic_assign_uas$$1$$rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rd_kafka_topic_assign_uas$$1$$rk, (const char *)(void *)0, 7, "UAS", "%i/%i messages were partitioned in topic %s", rd_kafka_topic_assign_uas$$1$$cnt - failed.rkmq_msg_cnt, rd_kafka_topic_assign_uas$$1$$cnt, (const void *)rkt->rkt_topic->str);

    while((_Bool)0);
    if(failed.rkmq_msg_cnt >= 1)
    {
      do
        if(!((signed long int)(0x4 & rd_kafka_topic_assign_uas$$1$$rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rd_kafka_topic_assign_uas$$1$$rk, (const char *)(void *)0, 7, "UAS", "%i/%i messages failed partitioning in topic %s", uas.rkmq_msg_cnt, rd_kafka_topic_assign_uas$$1$$cnt, (const void *)rkt->rkt_topic->str);

      while((_Bool)0);
      rd_kafka_dr_msgq(rd_kafka_topic_assign_uas$$1$$rk, &failed, (enum anonymous$9)((signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_NOTEXISTS ? RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC : RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION));
    }

    do
    {
      signed int return_value___atomic_sub_fetch$6;
      return_value___atomic_sub_fetch$6=__atomic_sub_fetch(&rktp_ua->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$6 == 0)
        rd_kafka_toppar_destroy0(rktp_ua);

    }
    while((_Bool)0);
  }
}

// rd_kafka_topic_conf_destroy
// file rdkafka.h line 469
void rd_kafka_topic_conf_destroy(struct rd_kafka_topic_conf_s *topic_conf)
{
  rd_kafka_anyconf_destroy(_RK_TOPIC, (void *)topic_conf);
  free((void *)topic_conf);
}

// rd_kafka_topic_conf_dump
// file rdkafka_defaultconf.c line 960
const char ** rd_kafka_topic_conf_dump(struct rd_kafka_topic_conf_s *conf, unsigned long int *cntp)
{
  const char **return_value_rd_kafka_anyconf_dump$1;
  return_value_rd_kafka_anyconf_dump$1=rd_kafka_anyconf_dump(_RK_TOPIC, (void *)conf, cntp);
  return return_value_rd_kafka_anyconf_dump$1;
}

// rd_kafka_topic_conf_dup
// file rdkafka_defaultconf.c line 798
struct rd_kafka_topic_conf_s * rd_kafka_topic_conf_dup(const struct rd_kafka_topic_conf_s *conf)
{
  struct rd_kafka_topic_conf_s *new;
  new=rd_kafka_topic_conf_new();
  rd_kafka_anyconf_copy(_RK_TOPIC, (void *)new, (const void *)conf);
  return new;
}

// rd_kafka_topic_conf_new
// file ../src/rdkafka.h line 456
struct rd_kafka_topic_conf_s * rd_kafka_topic_conf_new(void)
{
  struct rd_kafka_topic_conf_s *tconf;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_topic_conf_s) /*88ul*/ );
  tconf = (struct rd_kafka_topic_conf_s *)return_value_calloc$1;
  rd_kafka_defaultconf_set(_RK_TOPIC, (void *)tconf);
  return tconf;
}

// rd_kafka_topic_conf_set
// file ../src/rdkafka.h line 479
enum anonymous$24 rd_kafka_topic_conf_set(struct rd_kafka_topic_conf_s *conf, const char *name, const char *value, char *errstr, unsigned long int errstr_size)
{
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen("topic.");
  signed int return_value_strncmp$3;
  return_value_strncmp$3=strncmp(name, "topic.", return_value_strlen$2);
  unsigned long int return_value_strlen$1;
  if(return_value_strncmp$3 == 0)
  {
    return_value_strlen$1=strlen("topic.");
    name = name + (signed long int)return_value_strlen$1;
  }

  signed int return_value_rd_kafka_anyconf_set$4;
  return_value_rd_kafka_anyconf_set$4=rd_kafka_anyconf_set(_RK_TOPIC, (void *)conf, name, value, errstr, errstr_size);
  return (enum anonymous$24)return_value_rd_kafka_anyconf_set$4;
}

// rd_kafka_topic_conf_set_opaque
// file rdkafka_defaultconf.c line 883
void rd_kafka_topic_conf_set_opaque(struct rd_kafka_topic_conf_s *topic_conf, void *opaque)
{
  topic_conf->opaque = opaque;
}

// rd_kafka_topic_conf_set_partitioner_cb
// file rdkafka_defaultconf.c line 872
void rd_kafka_topic_conf_set_partitioner_cb(struct rd_kafka_topic_conf_s *topic_conf, signed int (*partitioner)(const struct rd_kafka_topic_s *, const void *, unsigned long int, signed int, void *, void *))
{
  topic_conf->partitioner = partitioner;
}

// rd_kafka_topic_destroy
// file ../src/rdkafka.h line 612
void rd_kafka_topic_destroy(struct rd_kafka_topic_s *rkt)
{
  rd_kafka_topic_destroy0(rkt);
}

// rd_kafka_topic_destroy0
// file rdkafka_topic.h line 44
void rd_kafka_topic_destroy0(struct rd_kafka_topic_s *rkt)
{
  signed int return_value___atomic_sub_fetch$1;
  return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rkt->rkt_refcnt, 1, 5);
  if(!(return_value___atomic_sub_fetch$1 >= 1))
  {
    do
      if(!(rkt->rkt_refcnt == 0))
        rd_kafka_crash("rdkafka_topic.c", 410, "rd_kafka_topic_destroy0", rkt->rkt_rk, "assert: rkt->rkt_refcnt == 0");

    while((_Bool)0);
    if(!(rkt->rkt_topic == ((struct rd_kafkap_str_s *)NULL)))
      free((void *)rkt->rkt_topic);

    pthread_rwlock_wrlock(&rkt->rkt_rk->rk_lock);
    do
    {
      if(!(rkt->rkt_link.tqe_next == ((struct rd_kafka_topic_s *)NULL)))
        rkt->rkt_link.tqe_next->rkt_link.tqe_prev = rkt->rkt_link.tqe_prev;

      else
        (&rkt->rkt_rk->rk_topics)->tqh_last = rkt->rkt_link.tqe_prev;
      *rkt->rkt_link.tqe_prev = rkt->rkt_link.tqe_next;
    }
    while((_Bool)0);
    rkt->rkt_rk->rk_topic_cnt = rkt->rkt_rk->rk_topic_cnt - 1;
    pthread_rwlock_unlock(&rkt->rkt_rk->rk_lock);
    rd_kafka_destroy0(rkt->rkt_rk);
    free((void *)rkt->rkt_conf.group_id);
    rd_kafka_anyconf_destroy(_RK_TOPIC, (void *)&rkt->rkt_conf);
    pthread_rwlock_destroy(&rkt->rkt_lock);
    free((void *)rkt);
  }

}

// rd_kafka_topic_find
// file rdkafka_topic.c line 444
struct rd_kafka_topic_s * rd_kafka_topic_find(struct rd_kafka_s *rk, const char *topic, signed int do_lock)
{
  struct rd_kafka_topic_s *rkt;
  if(!(do_lock == 0))
    pthread_rwlock_rdlock(&rk->rk_lock);

  rkt = (&rk->rk_topics)->tqh_first;
  for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
  {
    signed int return_value_rd_kafkap_str_cmp_str$1;
    return_value_rd_kafkap_str_cmp_str$1=rd_kafkap_str_cmp_str$link1(rkt->rkt_topic, topic);
    if(return_value_rd_kafkap_str_cmp_str$1 == 0)
    {
      __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
      break;
    }

  }
  if(!(do_lock == 0))
    pthread_rwlock_unlock(&rk->rk_lock);

  return rkt;
}

// rd_kafka_topic_find0
// file rdkafka_topic.c line 465
struct rd_kafka_topic_s * rd_kafka_topic_find0(struct rd_kafka_s *rk, const struct rd_kafkap_str_s *topic)
{
  struct rd_kafka_topic_s *rkt;
  pthread_rwlock_rdlock(&rk->rk_lock);
  rkt = (&rk->rk_topics)->tqh_first;
  for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
  {
    signed int return_value_rd_kafkap_str_cmp$1;
    return_value_rd_kafkap_str_cmp$1=rd_kafkap_str_cmp$link1(rkt->rkt_topic, topic);
    if(return_value_rd_kafkap_str_cmp$1 == 0)
    {
      __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
      break;
    }

  }
  pthread_rwlock_unlock(&rk->rk_lock);
  return rkt;
}

// rd_kafka_topic_leader_query0
// file rdkafka_broker.c line 1229
void rd_kafka_topic_leader_query0(struct rd_kafka_s *rk, struct rd_kafka_topic_s *rkt, signed int do_rk_lock)
{
  struct rd_kafka_broker_s *rkb;
  if(!(do_rk_lock == 0))
    pthread_rwlock_rdlock(&rk->rk_lock);

  rkb=rd_kafka_broker_any(rk, RD_KAFKA_BROKER_STATE_UP);
  if(rkb == ((struct rd_kafka_broker_s *)NULL))
  {
    if(!(do_rk_lock == 0))
      pthread_rwlock_unlock(&rk->rk_lock);

  }

  else
  {
    if(!(do_rk_lock == 0))
      pthread_rwlock_unlock(&rk->rk_lock);

    if(!(rkt == ((struct rd_kafka_topic_s *)NULL)))
    {
      pthread_rwlock_wrlock(&rkt->rkt_lock);
      if(!((0x1 & rkt->rkt_flags) == 0))
      {
        pthread_rwlock_unlock(&rkt->rkt_lock);
        rd_kafka_broker_destroy(rkb);
        goto __CPROVER_DUMP_L7;
      }

      rkt->rkt_flags = rkt->rkt_flags | 0x1;
      pthread_rwlock_unlock(&rkt->rkt_lock);
    }

    rd_kafka_broker_metadata_req(rkb, 0, rkt, (struct rd_kafka_q_s *)(void *)0, "leader query");
    rd_kafka_broker_destroy(rkb);
  }

__CPROVER_DUMP_L7:
  ;
}

// rd_kafka_topic_leader_update
// file rdkafka_topic.c line 655
static signed int rd_kafka_topic_leader_update(struct rd_kafka_topic_s *rkt, struct rd_kafka_metadata_partition *mdp, struct rd_kafka_broker_s *rkb)
{
  struct rd_kafka_s *rd_kafka_topic_leader_update$$1$$rk = rkt->rkt_rk;
  struct rd_kafka_toppar_s *rktp;
  rktp=rd_kafka_toppar_get(rkt, mdp->id, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    rd_kafka_log0(rd_kafka_topic_leader_update$$1$$rk, (const char *)(void *)0, 4, "LEADER", "Topic %s: partition [%d] is unknown (partition_cnt %i)", (const void *)rkt->rkt_topic->str, mdp->id, rkt->rkt_partition_cnt);
    return -1;
  }

  else
  {
    pthread_mutex_lock(&rktp->rktp_lock);
    rktp->rktp_metadata = *mdp;
    rktp->rktp_metadata.replicas = (signed int *)(void *)0;
    rktp->rktp_metadata.isrs = (signed int *)(void *)0;
    pthread_mutex_unlock(&rktp->rktp_lock);
    if(rkb == ((struct rd_kafka_broker_s *)NULL))
    {
      signed int had_leader = rktp->rktp_leader != ((struct rd_kafka_broker_s *)NULL) ? 1 : 0;
      if(!(mdp->leader == -1))
        rd_kafka_log0(rd_kafka_topic_leader_update$$1$$rk, (const char *)(void *)0, 5, "TOPICBRK", "Topic %s [%d] migrated to unknown broker %d: requesting metadata update", (const void *)rkt->rkt_topic->str, mdp->id, mdp->leader);

      rd_kafka_toppar_broker_delegate(rktp, (struct rd_kafka_broker_s *)(void *)0);
      do
      {
        signed int return_value___atomic_sub_fetch$1;
        return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$1 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
      return had_leader != 0 ? -1 : 0;
    }

    if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
    {
      if(rktp->rktp_leader == rkb)
      {
        do
          if(!((signed long int)(0x4 & rd_kafka_topic_leader_update$$1$$rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rd_kafka_topic_leader_update$$1$$rk, (const char *)(void *)0, 7, "TOPICUPD", "No leader change for topic %s [%d] with leader %d", (const void *)rkt->rkt_topic->str, mdp->id, mdp->leader);

        while((_Bool)0);
        do
        {
          signed int return_value___atomic_sub_fetch$2;
          return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
          if(return_value___atomic_sub_fetch$2 == 0)
            rd_kafka_toppar_destroy0(rktp);

        }
        while((_Bool)0);
        return 0;
      }

      do
        if(!((signed long int)(0x4 & rd_kafka_topic_leader_update$$1$$rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rd_kafka_topic_leader_update$$1$$rk, (const char *)(void *)0, 7, "TOPICUPD", "Topic %s [%d] migrated from broker %d to %d", (const void *)rkt->rkt_topic->str, mdp->id, rktp->rktp_leader->rkb_nodeid, rkb->rkb_nodeid);

      while((_Bool)0);
    }

    rd_kafka_toppar_broker_delegate(rktp, rkb);
    do
    {
      signed int return_value___atomic_sub_fetch$3;
      return_value___atomic_sub_fetch$3=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$3 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
    return 1;
  }
}

// rd_kafka_topic_metadata_none
// file rdkafka_topic.h line 76
void rd_kafka_topic_metadata_none(struct rd_kafka_topic_s *rkt)
{
  pthread_rwlock_wrlock(&rkt->rkt_lock);
  rkt->rkt_ts_metadata=rd_clock$link4();
  rd_kafka_topic_set_state(rkt, RD_KAFKA_TOPIC_S_NOTEXISTS);
  rd_kafka_topic_partition_cnt_update(rkt, 0);
  rd_kafka_topic_assign_uas(rkt);
  pthread_rwlock_unlock(&rkt->rkt_lock);
}

// rd_kafka_topic_metadata_update
// file rdkafka_topic.h line 78
signed int rd_kafka_topic_metadata_update(struct rd_kafka_broker_s *rkb, struct rd_kafka_metadata_topic *mdt)
{
  struct rd_kafka_topic_s *rkt;
  signed int upd = 0;
  signed int j;
  struct rd_kafka_broker_s **partbrokers;
  signed int query_leader = 0;
  rkt=rd_kafka_topic_find(rkb->rkb_rk, mdt->topic, 1);
  const char *return_value_rd_kafka_err2str$1;
  _Bool tmp_if_expr$4;
  if(rkt == ((struct rd_kafka_topic_s *)NULL))
    return -1;

  else
  {
    if(!((signed int)mdt->err == RD_KAFKA_RESP_ERR_NO_ERROR))
      do
        if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
        {
          return_value_rd_kafka_err2str$1=rd_kafka_err2str(mdt->err);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "Error in metadata reply for topic %s (PartCnt %i): %s", (const void *)rkt->rkt_topic->str, mdt->partition_cnt, return_value_rd_kafka_err2str$1);
        }

      while((_Bool)0);

    void *return_value___builtin_alloca$2;
    return_value___builtin_alloca$2=__builtin_alloca((unsigned long int)mdt->partition_cnt * sizeof(struct rd_kafka_broker_s *) /*8ul*/ );
    partbrokers = (struct rd_kafka_broker_s **)return_value___builtin_alloca$2;
    pthread_rwlock_rdlock(&rkb->rkb_rk->rk_lock);
    j = 0;
    for( ; !(j >= mdt->partition_cnt); j = j + 1)
      if((mdt->partitions + (signed long int)j)->leader == -1)
        partbrokers[(signed long int)j] = (struct rd_kafka_broker_s *)(void *)0;

      else
        partbrokers[(signed long int)j]=rd_kafka_broker_find_by_nodeid(rkb->rkb_rk, (mdt->partitions + (signed long int)j)->leader);
    pthread_rwlock_unlock(&rkb->rkb_rk->rk_lock);
    pthread_rwlock_wrlock(&rkt->rkt_lock);
    rkt->rkt_ts_metadata=rd_clock$link4();
    if((signed int)mdt->err == RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART)
      rd_kafka_topic_set_state(rkt, RD_KAFKA_TOPIC_S_NOTEXISTS);

    else
      rd_kafka_topic_set_state(rkt, RD_KAFKA_TOPIC_S_EXISTS);
    signed int return_value_rd_kafka_topic_partition_cnt_update$3;
    return_value_rd_kafka_topic_partition_cnt_update$3=rd_kafka_topic_partition_cnt_update(rkt, mdt->partition_cnt);
    upd = upd + return_value_rd_kafka_topic_partition_cnt_update$3;
    j = 0;
    for( ; !(j >= mdt->partition_cnt); j = j + 1)
    {
      signed int r;
      do
        if(!((signed long int)(0x8 & rkb->rkb_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "METADATA", "  Topic %s partition %i Leader %d", (const void *)rkt->rkt_topic->str, (mdt->partitions + (signed long int)j)->id, (mdt->partitions + (signed long int)j)->leader);

      while((_Bool)0);
      r=rd_kafka_topic_leader_update(rkt, &mdt->partitions[(signed long int)j], partbrokers[(signed long int)j]);
      if(r == -1)
        query_leader = 1;

      upd = upd + (r != 0 ? 1 : 0);
      if(!(partbrokers[(signed long int)j] == ((struct rd_kafka_broker_s *)NULL)))
        rd_kafka_broker_destroy(partbrokers[(signed long int)j]);

    }
    if(upd >= 1)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_NOTEXISTS ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
      rd_kafka_topic_assign_uas(rkt);

    pthread_rwlock_unlock(&rkt->rkt_lock);
    if(!(query_leader == 0))
      rd_kafka_topic_leader_query0(rkt->rkt_rk, rkt, 1);

    rd_kafka_topic_destroy0(rkt);
    return upd;
  }
}

// rd_kafka_topic_name
// file ../src/rdkafka.h line 618
const char * rd_kafka_topic_name(const struct rd_kafka_topic_s *rkt)
{
  return rkt->rkt_topic->str;
}

// rd_kafka_topic_new
// file ../src/rdkafka.h line 604
struct rd_kafka_topic_s * rd_kafka_topic_new(struct rd_kafka_s *rk, const char *topic, struct rd_kafka_topic_conf_s *conf)
{
  struct rd_kafka_topic_s *rkt;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  if(topic == ((const char *)NULL))
    tmp_if_expr$4 = (_Bool)1;

  else
  {
    if(!(conf == ((struct rd_kafka_topic_conf_s *)NULL)))
    {
      if(!(conf->message_timeout_ms >= 0))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = conf->request_timeout_ms <= 0 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
    tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$4)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct rd_kafka_topic_s *)(void *)0;
  }

  pthread_rwlock_wrlock(&rk->rk_lock);
  rkt=rd_kafka_topic_find(rk, topic, 0);
  char *tmp_if_expr$6;
  unsigned short int return_value_ntohs$7;
  signed int tmp_if_expr$9;
  unsigned short int return_value_ntohs$8;
  if(!(rkt == ((struct rd_kafka_topic_s *)NULL)))
  {
    pthread_rwlock_unlock(&rk->rk_lock);
    if(!(conf == ((struct rd_kafka_topic_conf_s *)NULL)))
      rd_kafka_topic_conf_destroy(conf);

    return rkt;
  }

  else
  {
    void *return_value_calloc$5;
    return_value_calloc$5=calloc((unsigned long int)1, sizeof(struct rd_kafka_topic_s) /*240ul*/ );
    rkt = (struct rd_kafka_topic_s *)return_value_calloc$5;
    rkt->rkt_topic=rd_kafkap_str_new$link1(topic);
    rkt->rkt_rk = rk;
    if(conf == ((struct rd_kafka_topic_conf_s *)NULL))
      conf=rd_kafka_topic_conf_new();

    rkt->rkt_conf = *conf;
    free((void *)conf);
    if(rkt->rkt_conf.partitioner == ((signed int (*)(const struct rd_kafka_topic_s *, const void *, unsigned long int, signed int, void *, void *))NULL))
      rkt->rkt_conf.partitioner = rd_kafka_msg_partitioner_random;

    if(!(rkt->rkt_conf.group_id_str == ((char *)NULL)))
      tmp_if_expr$6 = rkt->rkt_conf.group_id_str;

    else
      tmp_if_expr$6 = rkt->rkt_rk->rk_conf.group_id_str;
    rkt->rkt_conf.group_id=rd_kafkap_str_new$link1(tmp_if_expr$6);
    do
      if(!((signed long int)(0x4 & rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$7=ntohs((unsigned short int)rkt->rkt_topic->len);
        if((signed int)(signed short int)return_value_ntohs$7 == -1)
          tmp_if_expr$9 = 0;

        else
        {
          return_value_ntohs$8=ntohs((unsigned short int)rkt->rkt_topic->len);
          tmp_if_expr$9 = (signed int)return_value_ntohs$8;
        }
        rd_kafka_log0(rk, (const char *)(void *)0, 7, "TOPIC", "New local topic: %.*s", tmp_if_expr$9, (const void *)rkt->rkt_topic->str);
      }

    while((_Bool)0);
    do
    {
      (&rkt->rkt_desp)->tqh_first = (struct rd_kafka_toppar_s *)(void *)0;
      (&rkt->rkt_desp)->tqh_last = &(&rkt->rkt_desp)->tqh_first;
    }
    while((_Bool)0);
    __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
    __atomic_add_fetch(&rk->rk_refcnt, 1, 5);
    pthread_rwlock_init(&rkt->rkt_lock, (const union anonymous$17 *)(void *)0);
    rkt->rkt_ua=rd_kafka_toppar_new(rkt, (signed int)-1);
    do
    {
      rkt->rkt_link.tqe_next = (struct rd_kafka_topic_s *)(void *)0;
      rkt->rkt_link.tqe_prev = (&rk->rk_topics)->tqh_last;
      *(&rk->rk_topics)->tqh_last = rkt;
      (&rk->rk_topics)->tqh_last = &rkt->rkt_link.tqe_next;
    }
    while((_Bool)0);
    rk->rk_topic_cnt = rk->rk_topic_cnt + 1;
    pthread_rwlock_unlock(&rk->rk_lock);
    rd_kafka_topic_leader_query0(rk, rkt, 1);
    return rkt;
  }
}

// rd_kafka_topic_partition_available
// file rdkafka.h line 523
signed int rd_kafka_topic_partition_available(const struct rd_kafka_topic_s *rkt, signed int partition)
{
  signed int avail;
  struct rd_kafka_toppar_s *rktp;
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
    return 0;

  else
  {
    pthread_mutex_lock(&rktp->rktp_lock);
    avail = rktp->rktp_leader != ((struct rd_kafka_broker_s *)NULL) ? 1 : 0;
    pthread_mutex_unlock(&rktp->rktp_lock);
    do
    {
      signed int return_value___atomic_sub_fetch$1;
      return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$1 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
    return avail;
  }
}

// rd_kafka_topic_partition_cnt_update
// file rdkafka_topic.c line 780
static signed int rd_kafka_topic_partition_cnt_update(struct rd_kafka_topic_s *rkt, signed int partition_cnt)
{
  struct rd_kafka_s *rd_kafka_topic_partition_cnt_update$$1$$rk = rkt->rkt_rk;
  struct rd_kafka_toppar_s **rktps;
  struct rd_kafka_toppar_s *rktp_ua;
  struct rd_kafka_toppar_s *rktp;
  signed int i;
  void *return_value_calloc$1;
  if(rkt->rkt_partition_cnt == partition_cnt)
  {
    do
      if(!((signed long int)(0x4 & rd_kafka_topic_partition_cnt_update$$1$$rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rd_kafka_topic_partition_cnt_update$$1$$rk, (const char *)(void *)0, 7, "PARTCNT", "No change in partition count for topic %s", (const void *)rkt->rkt_topic->str);

    while((_Bool)0);
    return 0;
  }

  else
  {
    if(!(rkt->rkt_partition_cnt == 0))
      rd_kafka_log0(rd_kafka_topic_partition_cnt_update$$1$$rk, (const char *)(void *)0, 5, "PARTCNT", "Topic %s partition count changed from %d to %d", (const void *)rkt->rkt_topic->str, rkt->rkt_partition_cnt, partition_cnt);

    else
      do
        if(!((signed long int)(0x4 & rd_kafka_topic_partition_cnt_update$$1$$rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rd_kafka_topic_partition_cnt_update$$1$$rk, (const char *)(void *)0, 7, "PARTCNT", "Topic %s partition count changed from %d to %d", (const void *)rkt->rkt_topic->str, rkt->rkt_partition_cnt, partition_cnt);

      while((_Bool)0);
    if(partition_cnt >= 1)
    {
      return_value_calloc$1=calloc((unsigned long int)partition_cnt, sizeof(struct rd_kafka_toppar_s *) /*8ul*/ );
      rktps = (struct rd_kafka_toppar_s **)return_value_calloc$1;
    }

    else
      rktps = (struct rd_kafka_toppar_s **)(void *)0;
    i = 0;
    for( ; !(i >= partition_cnt); i = i + 1)
      if(i >= rkt->rkt_partition_cnt)
      {
        rktp=rd_kafka_toppar_desired_get(rkt, i);
        if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
        {
          pthread_mutex_lock(&rktp->rktp_lock);
          rktp->rktp_flags = rktp->rktp_flags & ~0x2;
          pthread_mutex_unlock(&rktp->rktp_lock);
          do
          {
            if(!(rktp->rktp_rktlink.tqe_next == ((struct rd_kafka_toppar_s *)NULL)))
              rktp->rktp_rktlink.tqe_next->rktp_rktlink.tqe_prev = rktp->rktp_rktlink.tqe_prev;

            else
              (&rkt->rkt_desp)->tqh_last = rktp->rktp_rktlink.tqe_prev;
            *rktp->rktp_rktlink.tqe_prev = rktp->rktp_rktlink.tqe_next;
          }
          while((_Bool)0);
        }

        else
          rktp=rd_kafka_toppar_new(rkt, i);
        rktps[(signed long int)i] = rktp;
      }

      else
        rktps[(signed long int)i] = rkt->rkt_p[(signed long int)i];
    rktp_ua=rd_kafka_toppar_get(rkt, (signed int)-1, 0);
    for( ; !(i >= rkt->rkt_partition_cnt); i = i + 1)
    {
      rktp = rkt->rkt_p[(signed long int)i];
      if(!(rktp_ua == ((struct rd_kafka_toppar_s *)NULL)))
        rd_kafka_toppar_move_msgs(rktp_ua, rktp);

      else
        rd_kafka_msgq_purge$link1(rkt->rkt_rk, &rktp->rktp_msgq);
      pthread_mutex_lock(&rktp->rktp_lock);
      if(!((0x1 & rktp->rktp_flags) == 0))
      {
        do
          if(!((0x2 & rktp->rktp_flags) == 0))
            rd_kafka_crash("rdkafka_topic.c", 856, "rd_kafka_topic_partition_cnt_update", rkt->rkt_rk, "assert: !(rktp->rktp_flags & RD_KAFKA_TOPPAR_F_UNKNOWN)");

        while((_Bool)0);
        rktp->rktp_flags = rktp->rktp_flags | 0x2;
        do
        {
          rktp->rktp_rktlink.tqe_next = (struct rd_kafka_toppar_s *)(void *)0;
          rktp->rktp_rktlink.tqe_prev = (&rkt->rkt_desp)->tqh_last;
          *(&rkt->rkt_desp)->tqh_last = rktp;
          (&rkt->rkt_desp)->tqh_last = &rktp->rktp_rktlink.tqe_next;
        }
        while((_Bool)0);
      }

      pthread_mutex_unlock(&rktp->rktp_lock);
      do
      {
        signed int return_value___atomic_sub_fetch$2;
        return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$2 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
    }
    if(!(rktp_ua == ((struct rd_kafka_toppar_s *)NULL)))
      do
      {
        signed int return_value___atomic_sub_fetch$3;
        return_value___atomic_sub_fetch$3=__atomic_sub_fetch(&rktp_ua->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$3 == 0)
          rd_kafka_toppar_destroy0(rktp_ua);

      }
      while((_Bool)0);

    if(!(rkt->rkt_p == ((struct rd_kafka_toppar_s **)NULL)))
      free((void *)rkt->rkt_p);

    rkt->rkt_p = rktps;
    rkt->rkt_partition_cnt = partition_cnt;
    return 1;
  }
}

// rd_kafka_topic_partitions_remove
// file rdkafka_topic.h line 74
void rd_kafka_topic_partitions_remove(struct rd_kafka_topic_s *rkt)
{
  struct rd_kafka_toppar_s *rktp;
  signed int i;
  __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
  pthread_rwlock_wrlock(&rkt->rkt_lock);
  i = 0;
  for( ; !(i >= rkt->rkt_partition_cnt); i = i + 1)
  {
    rktp=rd_kafka_toppar_get(rkt, i, 0);
    if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
    {
      pthread_mutex_lock(&rktp->rktp_lock);
      rd_kafka_msgq_purge$link1(rkt->rkt_rk, &rktp->rktp_msgq);
      pthread_mutex_unlock(&rktp->rktp_lock);
      do
      {
        signed int return_value___atomic_sub_fetch$1;
        return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$1 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
      do
      {
        signed int return_value___atomic_sub_fetch$2;
        return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$2 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
    }

  }
  if(!(rkt->rkt_p == ((struct rd_kafka_toppar_s **)NULL)))
    free((void *)rkt->rkt_p);

  rkt->rkt_p = (struct rd_kafka_toppar_s **)(void *)0;
  rkt->rkt_partition_cnt = 0;
  rktp=rd_kafka_toppar_get(rkt, (signed int)-1, 0);
  if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
  {
    pthread_mutex_lock(&rktp->rktp_lock);
    rd_kafka_msgq_purge$link1(rkt->rkt_rk, &rktp->rktp_msgq);
    rkt->rkt_ua = (struct rd_kafka_toppar_s *)(void *)0;
    pthread_mutex_unlock(&rktp->rktp_lock);
    do
    {
      signed int return_value___atomic_sub_fetch$3;
      return_value___atomic_sub_fetch$3=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$3 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
    do
    {
      signed int return_value___atomic_sub_fetch$4;
      return_value___atomic_sub_fetch$4=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$4 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
  }

  pthread_rwlock_unlock(&rkt->rkt_lock);
  rd_kafka_topic_destroy0(rkt);
}

// rd_kafka_topic_scan_all
// file rdkafka_topic.h line 81
signed int rd_kafka_topic_scan_all(struct rd_kafka_s *rk, unsigned long int now)
{
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_toppar_s *rktp;
  struct rd_kafka_msgq_s timedout;
  signed int tpcnt = 0;
  signed int totcnt;
  rd_kafka_msgq_init$link2(&timedout);
  pthread_rwlock_rdlock(&rk->rk_lock);
  rkt = (&rk->rk_topics)->tqh_first;
  unsigned long int return_value_rd_clock$2;
  unsigned long int return_value_rd_clock$1;
  for( ; !(rkt == ((struct rd_kafka_topic_s *)NULL)); rkt = rkt->rkt_link.tqe_next)
  {
    signed int p;
    pthread_rwlock_wrlock(&rkt->rkt_lock);
    if(!((signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_UNKNOWN))
    {
      if(rkt->rkt_rk->rk_conf.metadata_refresh_interval_ms >= 0)
      {
        return_value_rd_clock$2=rd_clock$link4();
        if(!(rkt->rkt_ts_metadata + (unsigned long int)(3 * rkt->rkt_rk->rk_conf.metadata_refresh_interval_ms) >= return_value_rd_clock$2))
        {
          do
            if(!((signed long int)(0x4 & rk->rk_conf.debug) == 0l))
            {
              return_value_rd_clock$1=rd_clock$link4();
              rd_kafka_log0(rk, (const char *)(void *)0, 7, "NOINFO", "Topic %s metadata information timed out (%lums old)", (const void *)rkt->rkt_topic->str, (return_value_rd_clock$1 - rkt->rkt_ts_metadata) / (unsigned long int)1000);
            }

          while((_Bool)0);
          rd_kafka_topic_set_state(rkt, RD_KAFKA_TOPIC_S_UNKNOWN);
        }

      }

    }

    pthread_rwlock_unlock(&rkt->rkt_lock);
    pthread_rwlock_rdlock(&rkt->rkt_lock);
    if(rkt->rkt_partition_cnt == 0)
    {
      pthread_rwlock_unlock(&rkt->rkt_lock);
      rd_kafka_topic_leader_query0(rk, rkt, 0);
      pthread_rwlock_rdlock(&rkt->rkt_lock);
    }

    p = (signed int)-1;
    for( ; !(p >= rkt->rkt_partition_cnt); p = p + 1)
    {
      rktp=rd_kafka_toppar_get(rkt, p, 0);
      if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
      {
        pthread_mutex_lock(&rktp->rktp_lock);
        signed int return_value_rd_kafka_msgq_age_scan$3;
        return_value_rd_kafka_msgq_age_scan$3=rd_kafka_msgq_age_scan(&rktp->rktp_msgq, &timedout, now);
        if(return_value_rd_kafka_msgq_age_scan$3 >= 1)
          tpcnt = tpcnt + 1;

        pthread_mutex_unlock(&rktp->rktp_lock);
        do
        {
          signed int return_value___atomic_sub_fetch$4;
          return_value___atomic_sub_fetch$4=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
          if(return_value___atomic_sub_fetch$4 == 0)
            rd_kafka_toppar_destroy0(rktp);

        }
        while((_Bool)0);
      }

    }
    pthread_rwlock_unlock(&rkt->rkt_lock);
  }
  pthread_rwlock_unlock(&rk->rk_lock);
  totcnt = timedout.rkmq_msg_cnt;
  if(totcnt >= 1)
  {
    do
      if(!((signed long int)(0x40 & rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rk, (const char *)(void *)0, 7, "TIMEOUT", "%i message(s) from %i toppar(s) timed out", timedout.rkmq_msg_cnt, tpcnt);

    while((_Bool)0);
    rd_kafka_dr_msgq(rk, &timedout, (enum anonymous$9)RD_KAFKA_RESP_ERR__MSG_TIMED_OUT);
  }

  return totcnt;
}

// rd_kafka_topic_scan_tmr_cb
// file rdkafka.c line 1126
static void rd_kafka_topic_scan_tmr_cb(struct rd_kafka_s *rk, void *arg)
{
  unsigned long int return_value_rd_clock$1;
  return_value_rd_clock$1=rd_clock$link1();
  rd_kafka_topic_scan_all(rk, return_value_rd_clock$1);
}

// rd_kafka_topic_set_state
// file rdkafka_topic.c line 558
static void rd_kafka_topic_set_state(struct rd_kafka_topic_s *rkt, signed int state)
{
  if(!((signed int)rkt->rkt_state == state))
  {
    do
      if(!((signed long int)(0x4 & rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkt->rkt_rk, (const char *)(void *)0, 7, "STATE", "Topic %s changed state %s -> %s", (const void *)rkt->rkt_topic->str, rd_kafka_topic_state_names[(signed long int)rkt->rkt_state], rd_kafka_topic_state_names[(signed long int)state]);

    while((_Bool)0);
    rkt->rkt_state = (enum anonymous$57)state;
  }

}

// rd_kafka_toppar_broker_delegate
// file rdkafka_topic.h line 71
void rd_kafka_toppar_broker_delegate(struct rd_kafka_toppar_s *rktp, struct rd_kafka_broker_s *rkb)
{
  unsigned short int return_value_ntohs$1;
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  unsigned short int return_value_ntohs$5;
  signed int tmp_if_expr$7;
  unsigned short int return_value_ntohs$6;
  unsigned short int return_value_ntohs$8;
  signed int tmp_if_expr$10;
  unsigned short int return_value_ntohs$9;
  if(!(rktp->rktp_leader == rkb))
  {
    __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
    if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
    {
      struct rd_kafka_broker_s *old_rkb = rktp->rktp_leader;
      do
        if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        {
          return_value_ntohs$1=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$1 == -1)
            tmp_if_expr$3 = 0;

          else
          {
            return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$3 = (signed int)return_value_ntohs$2;
          }
          rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "BRKDELGT", "Broker %s no longer leader for topic %.*s [%d]", (const void *)rktp->rktp_leader->rkb_name, tmp_if_expr$3, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
        }

      while((_Bool)0);
      pthread_rwlock_wrlock(&old_rkb->rkb_toppar_lock);
      do
      {
        if(!(rktp->rktp_rkblink.tqe_next == ((struct rd_kafka_toppar_s *)NULL)))
          rktp->rktp_rkblink.tqe_next->rktp_rkblink.tqe_prev = rktp->rktp_rkblink.tqe_prev;

        else
          (&old_rkb->rkb_toppars)->tqh_last = rktp->rktp_rkblink.tqe_prev;
        *rktp->rktp_rkblink.tqe_prev = rktp->rktp_rkblink.tqe_next;
      }
      while((_Bool)0);
      old_rkb->rkb_toppar_cnt = old_rkb->rkb_toppar_cnt - 1;
      rktp->rktp_leader = (struct rd_kafka_broker_s *)(void *)0;
      pthread_rwlock_unlock(&old_rkb->rkb_toppar_lock);
      do
      {
        signed int return_value___atomic_sub_fetch$4;
        return_value___atomic_sub_fetch$4=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
        if(return_value___atomic_sub_fetch$4 == 0)
          rd_kafka_toppar_destroy0(rktp);

      }
      while((_Bool)0);
      rd_kafka_broker_destroy(old_rkb);
    }

    if(!(rkb == ((struct rd_kafka_broker_s *)NULL)))
    {
      do
        if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        {
          return_value_ntohs$5=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$5 == -1)
            tmp_if_expr$7 = 0;

          else
          {
            return_value_ntohs$6=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$7 = (signed int)return_value_ntohs$6;
          }
          rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "BRKDELGT", "Broker %s is now leader for topic %.*s [%d] with %i messages (%lu bytes) queued", (const void *)rkb->rkb_name, tmp_if_expr$7, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, rktp->rktp_msgq.rkmq_msg_cnt, rktp->rktp_msgq.rkmq_msg_bytes);
        }

      while((_Bool)0);
      pthread_rwlock_wrlock(&rkb->rkb_toppar_lock);
      __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
      do
      {
        rktp->rktp_rkblink.tqe_next = (struct rd_kafka_toppar_s *)(void *)0;
        rktp->rktp_rkblink.tqe_prev = (&rkb->rkb_toppars)->tqh_last;
        *(&rkb->rkb_toppars)->tqh_last = rktp;
        (&rkb->rkb_toppars)->tqh_last = &rktp->rktp_rkblink.tqe_next;
      }
      while((_Bool)0);
      rkb->rkb_toppar_cnt = rkb->rkb_toppar_cnt + 1;
      rktp->rktp_leader = rkb;
      __atomic_add_fetch(&rkb->rkb_refcnt, 1, 5);
      pthread_rwlock_unlock(&rkb->rkb_toppar_lock);
    }

    else
      do
        if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        {
          return_value_ntohs$8=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
          if((signed int)(signed short int)return_value_ntohs$8 == -1)
            tmp_if_expr$10 = 0;

          else
          {
            return_value_ntohs$9=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
            tmp_if_expr$10 = (signed int)return_value_ntohs$9;
          }
          rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "BRKDELGT", "No broker is leader for topic %.*s [%d]", tmp_if_expr$10, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);
        }

      while((_Bool)0);
    do
    {
      signed int return_value___atomic_sub_fetch$11;
      return_value___atomic_sub_fetch$11=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$11 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
  }

}

// rd_kafka_toppar_concat_msgq
// file rdkafka_topic.h line 40
void rd_kafka_toppar_concat_msgq(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msgq_s *rkmq)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_msgq_concat$link1(&rktp->rktp_msgq, rkmq);
  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_toppar_deq_msg
// file rdkafka_topic.c line 353
void rd_kafka_toppar_deq_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_msgq_deq$link2(&rktp->rktp_msgq, rkm, 1);
  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_toppar_desired_add
// file rdkafka_topic.h line 60
struct rd_kafka_toppar_s * rd_kafka_toppar_desired_add(struct rd_kafka_topic_s *rkt, signed int partition)
{
  struct rd_kafka_toppar_s *rktp;
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
  {
    pthread_mutex_lock(&rktp->rktp_lock);
    do
      if(!((signed long int)(0x4 & rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rkt->rkt_rk, (const char *)(void *)0, 7, "DESP", "Setting topic %s [%d] partition as desired", (const void *)rkt->rkt_topic->str, rktp->rktp_partition);

    while((_Bool)0);
    rktp->rktp_flags = rktp->rktp_flags | 0x1;
    pthread_mutex_unlock(&rktp->rktp_lock);
    return rktp;
  }

  else
  {
    rktp=rd_kafka_toppar_desired_get(rkt, partition);
    if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
      return rktp;

    else
    {
      rktp=rd_kafka_toppar_new(rkt, partition);
      rktp->rktp_flags = rktp->rktp_flags | 0x1 | 0x2;
      do
        if(!((signed long int)(0x4 & rkt->rkt_rk->rk_conf.debug) == 0l))
          rd_kafka_log0(rkt->rkt_rk, (const char *)(void *)0, 7, "DESP", "Adding desired topic %s [%d]", (const void *)rkt->rkt_topic->str, rktp->rktp_partition);

      while((_Bool)0);
      do
      {
        rktp->rktp_rktlink.tqe_next = (struct rd_kafka_toppar_s *)(void *)0;
        rktp->rktp_rktlink.tqe_prev = (&rkt->rkt_desp)->tqh_last;
        *(&rkt->rkt_desp)->tqh_last = rktp;
        (&rkt->rkt_desp)->tqh_last = &rktp->rktp_rktlink.tqe_next;
      }
      while((_Bool)0);
      return rktp;
    }
  }
}

// rd_kafka_toppar_desired_del
// file rdkafka_topic.h line 62
void rd_kafka_toppar_desired_del(struct rd_kafka_toppar_s *rktp)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  if((0x1 & rktp->rktp_flags) == 0)
    pthread_mutex_unlock(&rktp->rktp_lock);

  else
  {
    rktp->rktp_flags = rktp->rktp_flags & ~0x1;
    if(!((0x2 & rktp->rktp_flags) == 0))
    {
      rktp->rktp_flags = rktp->rktp_flags & ~0x2;
      do
      {
        if(!(rktp->rktp_rktlink.tqe_next == ((struct rd_kafka_toppar_s *)NULL)))
          rktp->rktp_rktlink.tqe_next->rktp_rktlink.tqe_prev = rktp->rktp_rktlink.tqe_prev;

        else
          (&rktp->rktp_rkt->rkt_desp)->tqh_last = rktp->rktp_rktlink.tqe_prev;
        *rktp->rktp_rktlink.tqe_prev = rktp->rktp_rktlink.tqe_next;
      }
      while((_Bool)0);
    }

    pthread_mutex_unlock(&rktp->rktp_lock);
    do
      if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "DESP", "Removing (un)desired topic %s [%d]", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);

    while((_Bool)0);
    do
    {
      signed int return_value___atomic_sub_fetch$1;
      return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$1 == 0)
        rd_kafka_toppar_destroy0(rktp);

    }
    while((_Bool)0);
  }
}

// rd_kafka_toppar_desired_get
// file rdkafka_topic.h line 58
struct rd_kafka_toppar_s * rd_kafka_toppar_desired_get(struct rd_kafka_topic_s *rkt, signed int partition)
{
  struct rd_kafka_toppar_s *rktp = (&rkt->rkt_desp)->tqh_first;
  for( ; !(rktp == ((struct rd_kafka_toppar_s *)NULL)); rktp = rktp->rktp_rktlink.tqe_next)
    if(rktp->rktp_partition == partition)
    {
      __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
      return rktp;
    }

  return (struct rd_kafka_toppar_s *)(void *)0;
}

// rd_kafka_toppar_destroy0
// file rdkafka_topic.h line 34
void rd_kafka_toppar_destroy0(struct rd_kafka_toppar_s *rktp)
{
  rd_kafka_dr_msgq(rktp->rktp_rkt->rkt_rk, &rktp->rktp_xmit_msgq, (enum anonymous$9)RD_KAFKA_RESP_ERR__DESTROY);
  rd_kafka_dr_msgq(rktp->rktp_rkt->rkt_rk, &rktp->rktp_msgq, (enum anonymous$9)RD_KAFKA_RESP_ERR__DESTROY);
  rd_kafka_q_purge(&rktp->rktp_fetchq);
  rd_kafka_topic_destroy0(rktp->rktp_rkt);
  pthread_mutex_destroy(&rktp->rktp_lock);
  free((void *)rktp);
}

// rd_kafka_toppar_dump
// file rdkafka.c line 1735
static void rd_kafka_toppar_dump(struct _IO_FILE *fp, const char *indent, struct rd_kafka_toppar_s *rktp)
{
  unsigned short int return_value_ntohs$1;
  return_value_ntohs$1=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  if((signed int)(signed short int)return_value_ntohs$1 == -1)
    tmp_if_expr$3 = 0;

  else
  {
    return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
    tmp_if_expr$3 = (signed int)return_value_ntohs$2;
  }
  char *tmp_if_expr$4;
  if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
    tmp_if_expr$4 = rktp->rktp_leader->rkb_name;

  else
    tmp_if_expr$4 = "none";
  fprintf(fp, "%s%.*s [%d] leader %s\n", indent, tmp_if_expr$3, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, tmp_if_expr$4);
  fprintf(fp, "%s refcnt %i\n%s msgq:      %i messages\n%s xmit_msgq: %i messages\n%s total:     %lu messages, %lu bytes\n", indent, rktp->rktp_refcnt, indent, rktp->rktp_msgq.rkmq_msg_cnt, indent, rktp->rktp_xmit_msgq.rkmq_msg_cnt, indent, rktp->rktp_c.tx_msgs, rktp->rktp_c.tx_bytes);
}

// rd_kafka_toppar_enq_msg
// file rdkafka_topic.h line 36
void rd_kafka_toppar_enq_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_msgq_enq$link2(&rktp->rktp_msgq, rkm);
  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_toppar_get
// file rdkafka_topic.h line 46
struct rd_kafka_toppar_s * rd_kafka_toppar_get(const struct rd_kafka_topic_s *rkt, signed int partition, signed int ua_on_miss)
{
  struct rd_kafka_toppar_s *rktp;
  _Bool tmp_if_expr$1;
  if(partition >= 0)
    tmp_if_expr$1 = partition < rkt->rkt_partition_cnt ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
    rktp = rkt->rkt_p[(signed long int)partition];

  else
    if(partition == -1 || !(ua_on_miss == 0))
      rktp = rkt->rkt_ua;

    else
      return (struct rd_kafka_toppar_s *)(void *)0;
  if(!(rktp == ((struct rd_kafka_toppar_s *)NULL)))
    __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);

  return rktp;
}

// rd_kafka_toppar_get2
// file rdkafka_topic.h line 49
struct rd_kafka_toppar_s * rd_kafka_toppar_get2(struct rd_kafka_s *rk, const struct rd_kafkap_str_s *topic, signed int partition, signed int ua_on_miss)
{
  struct rd_kafka_topic_s *rkt;
  struct rd_kafka_toppar_s *rktp;
  rkt=rd_kafka_topic_find0(rk, topic);
  if(rkt == ((struct rd_kafka_topic_s *)NULL))
    return (struct rd_kafka_toppar_s *)(void *)0;

  else
  {
    pthread_rwlock_rdlock(&rkt->rkt_lock);
    rktp=rd_kafka_toppar_get(rkt, partition, ua_on_miss);
    pthread_rwlock_unlock(&rkt->rkt_lock);
    rd_kafka_topic_destroy0(rkt);
    return rktp;
  }
}

// rd_kafka_toppar_get_avail
// file rdkafka_topic.h line 53
struct rd_kafka_toppar_s * rd_kafka_toppar_get_avail(const struct rd_kafka_topic_s *rkt, signed int partition, signed int ua_on_miss, enum anonymous$9 *errp)
{
  struct rd_kafka_toppar_s *rktp;
  switch((signed int)rkt->rkt_state)
  {
    case RD_KAFKA_TOPIC_S_UNKNOWN:
    {
      partition = (signed int)-1;
      break;
    }
    case RD_KAFKA_TOPIC_S_NOTEXISTS:
    {
      *errp = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC;
      return (struct rd_kafka_toppar_s *)(void *)0;
    }
    case RD_KAFKA_TOPIC_S_EXISTS:
    {
      if(rkt->rkt_partition_cnt == 0)
      {
        partition = (signed int)-1;
        break;
      }

      if(partition >= rkt->rkt_partition_cnt)
      {
        *errp = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
        return (struct rd_kafka_toppar_s *)(void *)0;
      }

      break;
    }
    default:
      do
        rd_kafka_crash("rdkafka_topic.c", 194, "rd_kafka_toppar_get_avail", rkt->rkt_rk, "assert: !*\"NOTREACHED\"");
      while((_Bool)0);
  }
  rktp=rd_kafka_toppar_get(rkt, partition, 0);
  if(rktp == ((struct rd_kafka_toppar_s *)NULL))
  {
    if((signed int)rkt->rkt_state == RD_KAFKA_TOPIC_S_NOTEXISTS)
      *errp = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_TOPIC;

    else
      *errp = (enum anonymous$9)RD_KAFKA_RESP_ERR__UNKNOWN_PARTITION;
    return (struct rd_kafka_toppar_s *)(void *)0;
  }

  else
    return rktp;
}

// rd_kafka_toppar_hi_offset_handle
// file rdkafka_broker.c line 3826
static void rd_kafka_toppar_hi_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque)
{
  rktp->rktp_hi_offset = Offset;
}

// rd_kafka_toppar_insert_msg
// file rdkafka_topic.c line 333
void rd_kafka_toppar_insert_msg(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msg_s *rkm)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_msgq_insert(&rktp->rktp_msgq, rkm);
  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_toppar_insert_msgq
// file rdkafka_topic.h line 38
void rd_kafka_toppar_insert_msgq(struct rd_kafka_toppar_s *rktp, struct rd_kafka_msgq_s *rkmq)
{
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_msgq_concat$link1(rkmq, &rktp->rktp_msgq);
  rd_kafka_msgq_move$link1(&rktp->rktp_msgq, rkmq);
  pthread_mutex_unlock(&rktp->rktp_lock);
}

// rd_kafka_toppar_lo_offset_handle
// file rdkafka_broker.c line 3821
static void rd_kafka_toppar_lo_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque)
{
  rktp->rktp_lo_offset = Offset;
}

// rd_kafka_toppar_move_msgs
// file rdkafka_topic.c line 321
static void rd_kafka_toppar_move_msgs(struct rd_kafka_toppar_s *dst, struct rd_kafka_toppar_s *src)
{
  __atomic_add_fetch(&src->rktp_refcnt, 1, 5);
  rd_kafka_msgq_concat$link1(&dst->rktp_msgq, &src->rktp_msgq);
  do
  {
    signed int return_value___atomic_sub_fetch$1;
    return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&src->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$1 == 0)
      rd_kafka_toppar_destroy0(src);

  }
  while((_Bool)0);
}

// rd_kafka_toppar_new
// file rdkafka_topic.c line 52
static struct rd_kafka_toppar_s * rd_kafka_toppar_new(struct rd_kafka_topic_s *rkt, signed int partition)
{
  struct rd_kafka_toppar_s *rktp;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_kafka_toppar_s) /*616ul*/ );
  rktp = (struct rd_kafka_toppar_s *)return_value_calloc$1;
  rktp->rktp_partition = partition;
  rktp->rktp_rkt = rkt;
  rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_NONE;
  rktp->rktp_offset_fd = -1;
  rktp->rktp_lo_offset = (signed long int)-1;
  rktp->rktp_hi_offset = (signed long int)-1;
  rktp->rktp_stored_offset = (signed long int)-1;
  rktp->rktp_commited_offset = (signed long int)-1;
  rktp->rktp_eof_offset = (signed long int)-1;
  rd_kafka_msgq_init$link2(&rktp->rktp_msgq);
  rd_kafka_msgq_init$link2(&rktp->rktp_xmit_msgq);
  pthread_mutex_init(&rktp->rktp_lock, (const union anonymous$12 *)(void *)0);
  rd_kafka_q_init(&rktp->rktp_fetchq);
  __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
  __atomic_add_fetch(&rkt->rkt_refcnt, 1, 5);
  return rktp;
}

// rd_kafka_toppar_next_offset_handle
// file rdkafka_broker.c line 3832
static void rd_kafka_toppar_next_offset_handle(struct rd_kafka_toppar_s *rktp, signed long int Offset, void *opaque)
{
  if(!(rktp->rktp_query_offset >= -1999l))
  {
    signed long int orig_Offset = Offset;
    signed long int tail_cnt;
    tail_cnt=llabs(rktp->rktp_query_offset - (signed long int)-2000);
    if(!(Offset >= tail_cnt))
      Offset = (signed long int)0;

    else
      Offset = Offset - tail_cnt;
    do
      if(!((signed long int)(0x4 & rktp->rktp_rkt->rkt_rk->rk_conf.debug) == 0l))
        rd_kafka_log0(rktp->rktp_rkt->rkt_rk, (const char *)(void *)0, 7, "OFFSET", "OffsetReply for topic %s [%d]: offset %ld: adjusting for OFFSET_TAIL(%ld): effective offset %ld", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, orig_Offset, tail_cnt, Offset);

    while((_Bool)0);
  }

  rktp->rktp_next_offset = Offset;
  rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_ACTIVE;
}

// rd_kafka_toppar_offset_commit
// file rdkafka_broker.c line 3430
enum anonymous$9 rd_kafka_toppar_offset_commit(struct rd_kafka_toppar_s *rktp, signed long int offset)
{
  struct rd_kafka_op_s *rko;
  enum anonymous$9 err = (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
  rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_OFFSET_COMMIT);
  rko->rko_rkmessage.offset = offset;
  rko->rko_rktp = rktp;
  __atomic_add_fetch(&rko->rko_rktp->rktp_refcnt, 1, 5);
  if(!(rktp->rktp_leader == ((struct rd_kafka_broker_s *)NULL)))
    rd_kafka_q_enq$link1(&rktp->rktp_leader->rkb_ops, rko);

  else
  {
    rd_kafka_op_destroy(rko);
    err = (enum anonymous$9)RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE;
  }
  return err;
}

// rd_kafka_toppar_offset_reply
// file rdkafka_broker.c line 3615
static void rd_kafka_toppar_offset_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)opaque;
  struct rd_kafka_op_s *rko;
  if(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR && !(reply == ((struct rd_kafka_buf_s *)NULL)))
  {
    unsigned short int return_value_ntohs$1;
    return_value_ntohs$1=ntohs((unsigned short int)request->rkbuf_reqhdr.ApiKey);
    if((signed int)return_value_ntohs$1 == 9)
      err=rd_kafka_toppar_offsetfetch_reply_handle(rkb, reply, rktp);

    else
      err=rd_kafka_toppar_offset_reply_handle(rkb, request, reply, rktp);
  }

  unsigned short int return_value_ntohs$2;
  const char *return_value_rd_kafka_err2str$3;
  if(!((signed long int)err == 0l))
  {
    do
      if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
      {
        return_value_ntohs$2=ntohs((unsigned short int)request->rkbuf_reqhdr.ApiKey);
        return_value_rd_kafka_err2str$3=rd_kafka_err2str(err);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "Offset (type %hd) reply for topic %s [%d]: %s", return_value_ntohs$2, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, return_value_rd_kafka_err2str$3);
      }

    while((_Bool)0);
    switch((signed int)err)
    {
      case RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART:

      case RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION:

      case RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE:
        rd_kafka_topic_leader_query0(rkb->rkb_rk, rktp->rktp_rkt, 1);
      case RD_KAFKA_RESP_ERR__TRANSPORT:

      case RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT:

      case RD_KAFKA_RESP_ERR__MSG_TIMED_OUT:
      {
        request->rkbuf_retries = request->rkbuf_retries + 1;
        if(!(request->rkbuf_retries >= rkb->rkb_rk->rk_conf.max_retries))
        {
          if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
            rd_kafka_buf_destroy(reply);

          rd_kafka_broker_buf_retry(rkb, request);
          goto __CPROVER_DUMP_L16;
        }

      }
      default:
      {
        unsigned long int return_value_rd_clock$4;
        return_value_rd_clock$4=rd_clock$link2();
        rktp->rktp_ts_offset_req_next = return_value_rd_clock$4 + (unsigned long int)500000;
        rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_OFFSET_QUERY;
        if(request->rkbuf_hndcb == (void (*)(void *))rd_kafka_toppar_next_offset_handle)
        {
          rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_ERR);
          rko->rko_rkmessage.err = err;
          if(!(rktp->rktp_query_offset >= -1999l))
            rko->rko_rkmessage.offset = rktp->rktp_query_offset - (signed long int)-2000;

          else
            rko->rko_rkmessage.offset = rktp->rktp_query_offset;
          rko->rko_rkmessage.rkt = rktp->rktp_rkt;
          rko->rko_rkmessage.partition = rktp->rktp_partition;
          __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);
          rd_kafka_q_enq$link1(&rktp->rktp_fetchq, rko);
        }

      }
    }
  }

  do
  {
    signed int return_value___atomic_sub_fetch$5;
    return_value___atomic_sub_fetch$5=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$5 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  rd_kafka_buf_destroy(request);
  if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(reply);


__CPROVER_DUMP_L16:
  ;
}

// rd_kafka_toppar_offset_reply_handle
// file rdkafka_broker.c line 3532
static enum anonymous$9 rd_kafka_toppar_offset_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *request, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp)
{
  char *buf = rkbuf->rkbuf_buf2;
  unsigned long int size = rkbuf->rkbuf_len;
  unsigned long int of = (unsigned long int)0;
  signed int TopicArrayCnt;
  signed int i;
  const signed int log_decode_errors = 1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int rd_kafka_toppar_offset_reply_handle$$1$$1$$1$$1$$_LEN = (signed int)4;
    if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$1$$1$$1$$_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3543);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$1$$1$$1$$_LEN, (signed int)(size - of));
      }

      goto err;
    }

    memcpy((void *)&TopicArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
    of = of + (unsigned long int)4;
    unsigned int return_value_ntohl$1;
    return_value_ntohl$1=ntohl((unsigned int)*((signed int *)&TopicArrayCnt));
    *((signed int *)&TopicArrayCnt) = (signed int)return_value_ntohl$1;
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  _Bool tmp_if_expr$10;
  signed int return_value_rd_kafkap_str_cmp$9;
  for( ; !(i >= TopicArrayCnt); i = i + 1)
  {
    struct rd_kafkap_str_s *topic;
    signed int PartitionOffsetsArrayCnt;
    signed int j;
    do
    {
      signed int _klen;
      do
      {
        signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3549);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      topic = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$2;
      return_value_ntohs$2=ntohs((unsigned short int)topic->len);
      if((signed int)(signed short int)return_value_ntohs$2 == -1)
        tmp_if_expr$4 = 0;

      else
      {
        return_value_ntohs$3=ntohs((unsigned short int)topic->len);
        tmp_if_expr$4 = (signed int)return_value_ntohs$3;
      }
      _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$4);
      do
      {
        signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$2$$_LEN = (signed int)_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3549);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$1$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)_klen;
    }
    while((_Bool)0);
    do
    {

    __CPROVER_DUMP_L17:
      ;
      signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN = (signed int)4;
      if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3550);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      memcpy((void *)&PartitionOffsetsArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + (unsigned long int)4;
      unsigned int return_value_ntohl$5;
      return_value_ntohl$5=ntohl((unsigned int)*((signed int *)&PartitionOffsetsArrayCnt));
      *((signed int *)&PartitionOffsetsArrayCnt) = (signed int)return_value_ntohl$5;
    }
    while((_Bool)0);
    j = 0;
    for( ; !(j >= PartitionOffsetsArrayCnt); j = j + 1)
    {
      signed int Partition;
      signed short int ErrorCode;
      signed int OffsetArrayCnt;
      signed long int Offset;
      do
      {

      __CPROVER_DUMP_L22:
        ;
        signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3558);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&Partition, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + (unsigned long int)4;
        unsigned int return_value_ntohl$6;
        return_value_ntohl$6=ntohl((unsigned int)*((signed int *)&Partition));
        *((signed int *)&Partition) = (signed int)return_value_ntohl$6;
      }
      while((_Bool)0);
      do
      {

      __CPROVER_DUMP_L26:
        ;
        signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3559);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&ErrorCode, (const void *)(buf + (signed long int)of), (unsigned long int)2);
        of = of + (unsigned long int)2;
        unsigned short int return_value_ntohs$7;
        return_value_ntohs$7=ntohs((unsigned short int)*((signed short int *)&ErrorCode));
        *((signed short int *)&ErrorCode) = (signed short int)return_value_ntohs$7;
      }
      while((_Bool)0);
      do
      {

      __CPROVER_DUMP_L30:
        ;
        signed int _LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3560);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&OffsetArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + (unsigned long int)4;
        unsigned int return_value_ntohl$8;
        return_value_ntohl$8=ntohl((unsigned int)*((signed int *)&OffsetArrayCnt));
        *((signed int *)&OffsetArrayCnt) = (signed int)return_value_ntohl$8;
      }
      while((_Bool)0);
      if(!(rktp->rktp_partition == Partition))
        tmp_if_expr$10 = (_Bool)1;

      else
      {
        return_value_rd_kafkap_str_cmp$9=rd_kafkap_str_cmp(rktp->rktp_rkt->rkt_topic, topic);
        tmp_if_expr$10 = return_value_rd_kafkap_str_cmp$9 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$10)
      {
        if(!((signed int)ErrorCode == RD_KAFKA_RESP_ERR_NO_ERROR))
          return (enum anonymous$9)ErrorCode;

        if(OffsetArrayCnt == 0)
          return (enum anonymous$9)RD_KAFKA_RESP_ERR_OFFSET_OUT_OF_RANGE;

        do
        {

        __CPROVER_DUMP_L37:
          ;
          signed int rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN = (signed int)8;
          if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offset_reply_handle", 3580);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offset_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN, (signed int)(size - of));
            }

            goto err;
          }

          memcpy((void *)&Offset, (const void *)(buf + (signed long int)of), (unsigned long int)8);
          of = of + (unsigned long int)8;
          unsigned long int return_value___bswap_64$11;
          return_value___bswap_64$11=__bswap_64((unsigned long int)*((signed long int *)&Offset));
          *((signed long int *)&Offset) = (signed long int)return_value___bswap_64$11;
        }
        while((_Bool)0);
        do
          if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetReply for topic %s [%d]: offset %ld: activating fetch", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, Offset);

        while((_Bool)0);
        if(!(request->rkbuf_hndcb == ((void (*)(void *))NULL)))
        {
          void (*hndcb)(struct rd_kafka_toppar_s *, signed long int, void *) = (void (*)(struct rd_kafka_toppar_s *, signed long int, void *))(void *)request->rkbuf_hndcb;
          hndcb(rktp, Offset, request->rkbuf_hndopaque);
        }

        return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
      }

    }
  }
  return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;

err:
  ;
  return (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
}

// rd_kafka_toppar_offset_request
// file rdkafka_broker.c line 3866
static void rd_kafka_toppar_offset_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp)
{
  signed long int tmp_if_expr$1;
  if((signed int)rktp->rktp_rkt->rkt_conf.offset_store_method == RD_KAFKA_OFFSET_METHOD_BROKER)
    rd_kafka_toppar_offsetfetch_request(rkb, rktp);

  else
  {
    pthread_mutex_lock(&rktp->rktp_lock);
    rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_OFFSET_WAIT;
    pthread_mutex_unlock(&rktp->rktp_lock);
    if(!(rktp->rktp_query_offset >= -1999l))
      tmp_if_expr$1 = (signed long int)-1;

    else
      tmp_if_expr$1 = rktp->rktp_query_offset;
    rd_kafka_toppar_offset_request0(rkb, rktp, tmp_if_expr$1, (void *)rd_kafka_toppar_next_offset_handle, (void *)0);
  }
}

// rd_kafka_toppar_offset_request0
// file rdkafka_broker.c line 3766
static void rd_kafka_toppar_offset_request0(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, signed long int query_offset, void *hndcb, void *hndopaque)
{
  /* tag-#anon#lST[S32'ReplicaId'||S32'TopicArrayCnt'|] */
struct anonymous$19
{
  // ReplicaId
  signed int ReplicaId;
  // TopicArrayCnt
  signed int TopicArrayCnt;
} __attribute__ ((__packed__));

/* */
  ;
  struct anonymous$19 *part1;
  /* tag-#anon#lST[S32'PartitionArrayCnt'||S32'Partition'||S64'Time'||S32'MaxNumberOfOffsets'|] */
struct anonymous$20
{
  // PartitionArrayCnt
  signed int PartitionArrayCnt;
  // Partition
  signed int Partition;
  // Time
  signed long int Time;
  // MaxNumberOfOffsets
  signed int MaxNumberOfOffsets;
} __attribute__ ((__packed__));

/* */
  ;
  struct anonymous$20 *part2;
  struct rd_kafka_buf_s *rkbuf;
  rkbuf=rd_kafka_buf_new(3, sizeof(struct anonymous$19) /*8ul*/  + sizeof(struct anonymous$20) /*20ul*/ );
  part1 = (struct anonymous$19 *)(void *)rkbuf->rkbuf_buf;
  unsigned int return_value_htonl$1;
  return_value_htonl$1=htonl((unsigned int)-1);
  part1->ReplicaId = (signed int)return_value_htonl$1;
  unsigned int return_value_htonl$2;
  return_value_htonl$2=htonl((unsigned int)1);
  part1->TopicArrayCnt = (signed int)return_value_htonl$2;
  rd_kafka_buf_push(rkbuf, (void *)part1, sizeof(struct anonymous$19) /*8ul*/ );
  unsigned short int return_value_ntohs$3;
  return_value_ntohs$3=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
  signed int tmp_if_expr$5;
  unsigned short int return_value_ntohs$4;
  if((signed int)(signed short int)return_value_ntohs$3 == -1)
    tmp_if_expr$5 = 0;

  else
  {
    return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
    tmp_if_expr$5 = (signed int)return_value_ntohs$4;
  }
  rd_kafka_buf_push(rkbuf, (void *)rktp->rktp_rkt->rkt_topic, (unsigned long int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$5));
  part2 = (struct anonymous$20 *)(void *)(part1 + (signed long int)1);
  unsigned int return_value_htonl$6;
  return_value_htonl$6=htonl((unsigned int)1);
  part2->PartitionArrayCnt = (signed int)return_value_htonl$6;
  unsigned int return_value_htonl$7;
  return_value_htonl$7=htonl((unsigned int)rktp->rktp_partition);
  part2->Partition = (signed int)return_value_htonl$7;
  unsigned long int return_value___bswap_64$8;
  return_value___bswap_64$8=__bswap_64((unsigned long int)query_offset);
  part2->Time = (signed long int)return_value___bswap_64$8;
  unsigned int return_value_htonl$9;
  return_value_htonl$9=htonl((unsigned int)1);
  part2->MaxNumberOfOffsets = (signed int)return_value_htonl$9;
  rd_kafka_buf_push(rkbuf, (void *)part2, sizeof(struct anonymous$20) /*20ul*/ );
  __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
  unsigned long int return_value_rd_clock$10;
  return_value_rd_clock$10=rd_clock$link2();
  rkbuf->rkbuf_ts_timeout = return_value_rd_clock$10 + (unsigned long int)(rkb->rkb_rk->rk_conf.socket_timeout_ms * 1000);
  rkbuf->rkbuf_hndcb = (void (*)(void *))hndcb;
  rkbuf->rkbuf_hndopaque = hndopaque;
  rd_kafka_broker_buf_enq1(rkb, (signed short int)2, rkbuf, rd_kafka_toppar_offset_reply, (void *)rktp);
  do
    if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetRequest (%ld) for topic %s [%d]", query_offset, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);

  while((_Bool)0);
}

// rd_kafka_toppar_offsetcommit_reply
// file rdkafka_broker.c line 3286
static void rd_kafka_toppar_offsetcommit_reply(struct rd_kafka_broker_s *rkb, enum anonymous$9 err, struct rd_kafka_buf_s *reply, struct rd_kafka_buf_s *request, void *opaque)
{
  struct rd_kafka_toppar_s *rktp = (struct rd_kafka_toppar_s *)opaque;
  struct rd_kafka_op_s *rko;
  if(err == /*enum*/RD_KAFKA_RESP_ERR_NO_ERROR && !(reply == ((struct rd_kafka_buf_s *)NULL)))
    err=rd_kafka_toppar_offsetcommit_reply_handle(rkb, reply, rktp, request->rkbuf_offset);

  const char *return_value_rd_kafka_err2str$1;
  do
    if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
    {
      return_value_rd_kafka_err2str$1=rd_kafka_err2str(err);
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSETCI", "OffsetCommitResponse (%ld) for topic %s [%d]: %s", rktp->rktp_committing_offset, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, return_value_rd_kafka_err2str$1);
    }

  while((_Bool)0);
  if(!((signed long int)err == 0l))
    switch((signed int)err)
    {
      case RD_KAFKA_RESP_ERR_UNKNOWN_TOPIC_OR_PART:

      case RD_KAFKA_RESP_ERR_LEADER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_NOT_LEADER_FOR_PARTITION:

      case RD_KAFKA_RESP_ERR_BROKER_NOT_AVAILABLE:

      case RD_KAFKA_RESP_ERR_REPLICA_NOT_AVAILABLE:
        rd_kafka_topic_leader_query0(rkb->rkb_rk, rktp->rktp_rkt, 1);
      case RD_KAFKA_RESP_ERR__TRANSPORT:

      case RD_KAFKA_RESP_ERR_REQUEST_TIMED_OUT:

      case RD_KAFKA_RESP_ERR__MSG_TIMED_OUT:
      {
        request->rkbuf_retries = request->rkbuf_retries + 1;
        if(!(request->rkbuf_retries >= rkb->rkb_rk->rk_conf.max_retries))
        {
          if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
            rd_kafka_buf_destroy(reply);

          rd_kafka_broker_buf_retry(rkb, request);
          goto __CPROVER_DUMP_L10;
        }

      }
      default:
      {
        rko=rd_kafka_op_new((enum anonymous$44)RD_KAFKA_OP_ERR);
        rko->rko_rkmessage.err = err;
        rko->rko_rkmessage.offset = request->rkbuf_offset;
        rko->rko_rkmessage.rkt = rktp->rktp_rkt;
        rko->rko_rkmessage.partition = rktp->rktp_partition;
        __atomic_add_fetch(&rko->rko_rkmessage.rkt->rkt_refcnt, 1, 5);
        rd_kafka_q_enq$link1(&rktp->rktp_fetchq, rko);
      }
    }

  do
  {
    signed int return_value___atomic_sub_fetch$2;
    return_value___atomic_sub_fetch$2=__atomic_sub_fetch(&rktp->rktp_refcnt, 1, 5);
    if(return_value___atomic_sub_fetch$2 == 0)
      rd_kafka_toppar_destroy0(rktp);

  }
  while((_Bool)0);
  rd_kafka_buf_destroy(request);
  if(!(reply == ((struct rd_kafka_buf_s *)NULL)))
    rd_kafka_buf_destroy(reply);


__CPROVER_DUMP_L10:
  ;
}

// rd_kafka_toppar_offsetcommit_reply_handle
// file rdkafka_broker.c line 3221
static enum anonymous$9 rd_kafka_toppar_offsetcommit_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp, signed long int offset)
{
  char *buf = rkbuf->rkbuf_buf2;
  unsigned long int size = rkbuf->rkbuf_len;
  unsigned long int of = (unsigned long int)0;
  signed int TopicArrayCnt;
  signed int i;
  const signed int log_decode_errors = 1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int rd_kafka_toppar_offsetcommit_reply_handle$$1$$1$$1$$1$$_LEN = (signed int)4;
    if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetcommit_reply_handle$$1$$1$$1$$1$$_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3232);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetcommit_reply_handle$$1$$1$$1$$1$$_LEN, (signed int)(size - of));
      }

      goto err;
    }

    memcpy((void *)&TopicArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
    of = of + (unsigned long int)4;
    unsigned int return_value_ntohl$1;
    return_value_ntohl$1=ntohl((unsigned int)*((signed int *)&TopicArrayCnt));
    *((signed int *)&TopicArrayCnt) = (signed int)return_value_ntohl$1;
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  _Bool tmp_if_expr$9;
  signed int return_value_rd_kafkap_str_cmp$8;
  for( ; !(i >= TopicArrayCnt); i = i + 1)
  {
    struct rd_kafkap_str_s *topic;
    signed int PartitionArrayCnt;
    signed int j;
    do
    {
      signed int _klen;
      do
      {
        signed int rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3238);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      topic = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$2;
      return_value_ntohs$2=ntohs((unsigned short int)topic->len);
      if((signed int)(signed short int)return_value_ntohs$2 == -1)
        tmp_if_expr$4 = 0;

      else
      {
        return_value_ntohs$3=ntohs((unsigned short int)topic->len);
        tmp_if_expr$4 = (signed int)return_value_ntohs$3;
      }
      _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$4);
      do
      {
        signed int rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$2$$_LEN = (signed int)_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3238);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$1$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)_klen;
    }
    while((_Bool)0);
    do
    {

    __CPROVER_DUMP_L17:
      ;
      signed int rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN = (signed int)4;
      if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3239);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      memcpy((void *)&PartitionArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + (unsigned long int)4;
      unsigned int return_value_ntohl$5;
      return_value_ntohl$5=ntohl((unsigned int)*((signed int *)&PartitionArrayCnt));
      *((signed int *)&PartitionArrayCnt) = (signed int)return_value_ntohl$5;
    }
    while((_Bool)0);
    j = 0;
    for( ; !(j >= PartitionArrayCnt); j = j + 1)
    {
      signed int Partition;
      signed short int ErrorCode;
      do
      {

      __CPROVER_DUMP_L22:
        ;
        signed int _LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3245);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&Partition, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + (unsigned long int)4;
        unsigned int return_value_ntohl$6;
        return_value_ntohl$6=ntohl((unsigned int)*((signed int *)&Partition));
        *((signed int *)&Partition) = (signed int)return_value_ntohl$6;
      }
      while((_Bool)0);
      do
      {

      __CPROVER_DUMP_L26:
        ;
        signed int rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetcommit_reply_handle", 3246);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetcommit_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&ErrorCode, (const void *)(buf + (signed long int)of), (unsigned long int)2);
        of = of + (unsigned long int)2;
        unsigned short int return_value_ntohs$7;
        return_value_ntohs$7=ntohs((unsigned short int)*((signed short int *)&ErrorCode));
        *((signed short int *)&ErrorCode) = (signed short int)return_value_ntohs$7;
      }
      while((_Bool)0);
      if(!(rktp->rktp_partition == Partition))
        tmp_if_expr$9 = (_Bool)1;

      else
      {
        return_value_rd_kafkap_str_cmp$8=rd_kafkap_str_cmp(rktp->rktp_rkt->rkt_topic, topic);
        tmp_if_expr$9 = return_value_rd_kafkap_str_cmp$8 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$9)
      {
        if(!((signed int)ErrorCode == RD_KAFKA_RESP_ERR_NO_ERROR))
          return (enum anonymous$9)ErrorCode;

        rktp->rktp_commited_offset = offset;
        do
          if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetCommitResponse for topic %s [%d]: offset %ld commited", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, offset);

        while((_Bool)0);
        return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
      }

    }
  }
  return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;

err:
  ;
  return (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
}

// rd_kafka_toppar_offsetcommit_request
// file rdkafka_broker.c line 3365
static void rd_kafka_toppar_offsetcommit_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp, signed long int offset)
{
  struct rd_kafka_buf_s *rkbuf;
  unsigned short int return_value_ntohs$1;
  return_value_ntohs$1=ntohs((unsigned short int)rktp->rktp_rkt->rkt_rk->rk_conf.group_id->len);
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  if((signed int)(signed short int)return_value_ntohs$1 == -1)
    tmp_if_expr$3 = 0;

  else
  {
    return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_rk->rk_conf.group_id->len);
    tmp_if_expr$3 = (signed int)return_value_ntohs$2;
  }
  unsigned short int return_value_ntohs$4;
  return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
  signed int tmp_if_expr$6;
  unsigned short int return_value_ntohs$5;
  if((signed int)(signed short int)return_value_ntohs$4 == -1)
    tmp_if_expr$6 = 0;

  else
  {
    return_value_ntohs$5=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
    tmp_if_expr$6 = (signed int)return_value_ntohs$5;
  }
  unsigned short int return_value_ntohs$7;
  static const struct rd_kafkap_str_s metadata = { .len=(signed short int)(unsigned short int)-1, .str={  } };
  return_value_ntohs$7=ntohs((unsigned short int)(&metadata)->len);
  signed int tmp_if_expr$9;
  unsigned short int return_value_ntohs$8;
  if((signed int)(signed short int)return_value_ntohs$7 == -1)
    tmp_if_expr$9 = 0;

  else
  {
    return_value_ntohs$8=ntohs((unsigned short int)(&metadata)->len);
    tmp_if_expr$9 = (signed int)return_value_ntohs$8;
  }
  rkbuf=rd_kafka_buf_new(1, (unsigned long int)(4 + 4 + 4 + 8 + (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$3) + (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$6) + (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$9)));
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_buf_write_kstr(rkbuf, rktp->rktp_rkt->rkt_conf.group_id);
  rd_kafka_buf_write_i32(rkbuf, 1);
  rd_kafka_buf_write_kstr(rkbuf, rktp->rktp_rkt->rkt_topic);
  rd_kafka_buf_write_i32(rkbuf, 1);
  rd_kafka_buf_write_i32(rkbuf, rktp->rktp_partition);
  rd_kafka_buf_write_i64(rkbuf, offset);
  rd_kafka_buf_write_kstr(rkbuf, &metadata);
  rd_kafka_buf_autopush(rkbuf);
  rkbuf->rkbuf_offset = offset;
  rktp->rktp_committing_offset = offset;
  __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
  pthread_mutex_unlock(&rktp->rktp_lock);
  do
    if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetCommitRequest (%ld) for topic %s [%d]", offset, (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);

  while((_Bool)0);
  unsigned long int return_value_rd_clock$10;
  return_value_rd_clock$10=rd_clock$link2();
  rkbuf->rkbuf_ts_timeout = return_value_rd_clock$10 + (unsigned long int)(rkb->rkb_rk->rk_conf.socket_timeout_ms * 1000);
  rd_kafka_broker_buf_enq1(rkb, (signed short int)8, rkbuf, rd_kafka_toppar_offsetcommit_reply, (void *)rktp);
}

// rd_kafka_toppar_offsetfetch_reply_handle
// file rdkafka_broker.c line 3461
static enum anonymous$9 rd_kafka_toppar_offsetfetch_reply_handle(struct rd_kafka_broker_s *rkb, struct rd_kafka_buf_s *rkbuf, struct rd_kafka_toppar_s *rktp)
{
  char *buf = rkbuf->rkbuf_buf2;
  unsigned long int size = rkbuf->rkbuf_len;
  unsigned long int of = (unsigned long int)0;
  signed int TopicArrayCnt;
  signed int i;
  const signed int log_decode_errors = 1;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int _LEN = (signed int)4;
    if(!(size + -of >= (unsigned long int)_LEN))
    {
      if(!(log_decode_errors == 0))
      {
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3471);
        rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", _LEN, (signed int)(size - of));
      }

      goto err;
    }

    memcpy((void *)&TopicArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
    of = of + (unsigned long int)4;
    unsigned int return_value_ntohl$1;
    return_value_ntohl$1=ntohl((unsigned int)*((signed int *)&TopicArrayCnt));
    *((signed int *)&TopicArrayCnt) = (signed int)return_value_ntohl$1;
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_if_expr$4;
  unsigned short int return_value_ntohs$3;
  signed int tmp_if_expr$10;
  unsigned short int return_value_ntohs$9;
  _Bool tmp_if_expr$13;
  signed int return_value_rd_kafkap_str_cmp$12;
  for( ; !(i >= TopicArrayCnt); i = i + 1)
  {
    struct rd_kafkap_str_s *topic;
    signed int PartitionArrayCnt;
    signed int j;
    do
    {
      signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$_klen;
      do
      {
        signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3477);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      topic = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
      unsigned short int return_value_ntohs$2;
      return_value_ntohs$2=ntohs((unsigned short int)topic->len);
      if((signed int)(signed short int)return_value_ntohs$2 == -1)
        tmp_if_expr$4 = 0;

      else
      {
        return_value_ntohs$3=ntohs((unsigned short int)topic->len);
        tmp_if_expr$4 = (signed int)return_value_ntohs$3;
      }
      rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$_klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$4);
      do
      {
        signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$2$$_LEN = (signed int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$_klen;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$2$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3477);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$2$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

      }
      while((_Bool)0);
      of = of + (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$1$$_klen;
    }
    while((_Bool)0);
    do
    {

    __CPROVER_DUMP_L17:
      ;
      signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN = (signed int)4;
      if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN))
      {
        if(!(log_decode_errors == 0))
        {
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3478);
          rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
        }

        goto err;
      }

      memcpy((void *)&PartitionArrayCnt, (const void *)(buf + (signed long int)of), (unsigned long int)4);
      of = of + (unsigned long int)4;
      unsigned int return_value_ntohl$5;
      return_value_ntohl$5=ntohl((unsigned int)*((signed int *)&PartitionArrayCnt));
      *((signed int *)&PartitionArrayCnt) = (signed int)return_value_ntohl$5;
    }
    while((_Bool)0);
    j = 0;
    for( ; !(j >= PartitionArrayCnt); j = j + 1)
    {
      signed int Partition;
      signed long int Offset;
      struct rd_kafkap_str_s *Metadata;
      signed short int ErrorCode;
      do
      {

      __CPROVER_DUMP_L22:
        ;
        signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN = (signed int)4;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3486);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$1$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&Partition, (const void *)(buf + (signed long int)of), (unsigned long int)4);
        of = of + (unsigned long int)4;
        unsigned int return_value_ntohl$6;
        return_value_ntohl$6=ntohl((unsigned int)*((signed int *)&Partition));
        *((signed int *)&Partition) = (signed int)return_value_ntohl$6;
      }
      while((_Bool)0);
      do
      {

      __CPROVER_DUMP_L26:
        ;
        signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN = (signed int)8;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3487);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$2$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&Offset, (const void *)(buf + (signed long int)of), (unsigned long int)8);
        of = of + (unsigned long int)8;
        unsigned long int return_value___bswap_64$7;
        return_value___bswap_64$7=__bswap_64((unsigned long int)*((signed long int *)&Offset));
        *((signed long int *)&Offset) = (signed long int)return_value___bswap_64$7;
      }
      while((_Bool)0);
      do
      {
        signed int _klen;
        do
        {
          signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$1$$_LEN = (signed int)2;
          if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$1$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3488);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$1$$_LEN, (signed int)(size - of));
            }

            goto err;
          }

        }
        while((_Bool)0);
        Metadata = (struct rd_kafkap_str_s *)((char *)buf + (signed long int)of);
        unsigned short int return_value_ntohs$8;
        return_value_ntohs$8=ntohs((unsigned short int)Metadata->len);
        if((signed int)(signed short int)return_value_ntohs$8 == -1)
          tmp_if_expr$10 = 0;

        else
        {
          return_value_ntohs$9=ntohs((unsigned short int)Metadata->len);
          tmp_if_expr$10 = (signed int)return_value_ntohs$9;
        }
        _klen = (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$10);
        do
        {
          signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$2$$_LEN = (signed int)_klen;
          if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$2$$_LEN))
          {
            if(!(log_decode_errors == 0))
            {
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3488);
              rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$3$$2$$_LEN, (signed int)(size - of));
            }

            goto err;
          }

        }
        while((_Bool)0);
        of = of + (unsigned long int)_klen;
      }
      while((_Bool)0);
      do
      {

      __CPROVER_DUMP_L41:
        ;
        signed int rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN = (signed int)2;
        if(!(size + -of >= (unsigned long int)rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN))
        {
          if(!(log_decode_errors == 0))
          {
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "Protocol parse failure at %s:%i", (const void *)"rd_kafka_toppar_offsetfetch_reply_handle", 3489);
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 4, "PROTOERR", "expected %i bytes > %i remaining bytes", rd_kafka_toppar_offsetfetch_reply_handle$$1$$2$$1$$3$$1$$4$$1$$1$$_LEN, (signed int)(size - of));
          }

          goto err;
        }

        memcpy((void *)&ErrorCode, (const void *)(buf + (signed long int)of), (unsigned long int)2);
        of = of + (unsigned long int)2;
        unsigned short int return_value_ntohs$11;
        return_value_ntohs$11=ntohs((unsigned short int)*((signed short int *)&ErrorCode));
        *((signed short int *)&ErrorCode) = (signed short int)return_value_ntohs$11;
      }
      while((_Bool)0);
      if(!(rktp->rktp_partition == Partition))
        tmp_if_expr$13 = (_Bool)1;

      else
      {
        return_value_rd_kafkap_str_cmp$12=rd_kafkap_str_cmp(rktp->rktp_rkt->rkt_topic, topic);
        tmp_if_expr$13 = return_value_rd_kafkap_str_cmp$12 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$13)
      {
        if(!((signed int)ErrorCode == RD_KAFKA_RESP_ERR_NO_ERROR))
          return (enum anonymous$9)ErrorCode;

        do
          if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
            rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetFetchResponse for topic %s [%d]: offset %ld: activating fetch", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition, Offset);

        while((_Bool)0);
        rktp->rktp_next_offset = Offset;
        rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_ACTIVE;
        return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;
      }

    }
  }
  return (enum anonymous$9)RD_KAFKA_RESP_ERR_NO_ERROR;

err:
  ;
  return (enum anonymous$9)RD_KAFKA_RESP_ERR__BAD_MSG;
}

// rd_kafka_toppar_offsetfetch_request
// file rdkafka_broker.c line 3715
static void rd_kafka_toppar_offsetfetch_request(struct rd_kafka_broker_s *rkb, struct rd_kafka_toppar_s *rktp)
{
  struct rd_kafka_buf_s *rkbuf;
  unsigned short int return_value_ntohs$1;
  return_value_ntohs$1=ntohs((unsigned short int)rktp->rktp_rkt->rkt_conf.group_id->len);
  signed int tmp_if_expr$3;
  unsigned short int return_value_ntohs$2;
  if((signed int)(signed short int)return_value_ntohs$1 == -1)
    tmp_if_expr$3 = 0;

  else
  {
    return_value_ntohs$2=ntohs((unsigned short int)rktp->rktp_rkt->rkt_conf.group_id->len);
    tmp_if_expr$3 = (signed int)return_value_ntohs$2;
  }
  unsigned short int return_value_ntohs$4;
  return_value_ntohs$4=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
  signed int tmp_if_expr$6;
  unsigned short int return_value_ntohs$5;
  if((signed int)(signed short int)return_value_ntohs$4 == -1)
    tmp_if_expr$6 = 0;

  else
  {
    return_value_ntohs$5=ntohs((unsigned short int)rktp->rktp_rkt->rkt_topic->len);
    tmp_if_expr$6 = (signed int)return_value_ntohs$5;
  }
  rkbuf=rd_kafka_buf_new(1, (unsigned long int)((signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$3) + 4 + (signed int)(signed short int)(sizeof(signed short int) /*2ul*/  + (unsigned long int)tmp_if_expr$6) + 4 + 4));
  pthread_mutex_lock(&rktp->rktp_lock);
  rd_kafka_buf_write_kstr(rkbuf, rktp->rktp_rkt->rkt_conf.group_id);
  rd_kafka_buf_write_i32(rkbuf, 1);
  rd_kafka_buf_write_kstr(rkbuf, rktp->rktp_rkt->rkt_topic);
  rd_kafka_buf_write_i32(rkbuf, 1);
  rd_kafka_buf_write_i32(rkbuf, rktp->rktp_partition);
  rd_kafka_buf_autopush(rkbuf);
  rktp->rktp_fetch_state = (enum anonymous$54)RD_KAFKA_TOPPAR_FETCH_OFFSET_WAIT;
  __atomic_add_fetch(&rktp->rktp_refcnt, 1, 5);
  pthread_mutex_unlock(&rktp->rktp_lock);
  do
    if(!((signed long int)(0x4 & rkb->rkb_rk->rk_conf.debug) == 0l))
      rd_kafka_log0(rkb->rkb_rk, rkb->rkb_name, 7, "OFFSET", "OffsetFetchRequest for topic %s [%d]", (const void *)rktp->rktp_rkt->rkt_topic->str, rktp->rktp_partition);

  while((_Bool)0);
  unsigned long int return_value_rd_clock$7;
  return_value_rd_clock$7=rd_clock$link2();
  rkbuf->rkbuf_ts_timeout = return_value_rd_clock$7 + (unsigned long int)(rkb->rkb_rk->rk_conf.socket_timeout_ms * 1000);
  rd_kafka_broker_buf_enq1(rkb, (signed short int)9, rkbuf, rd_kafka_toppar_offset_reply, (void *)rktp);
}

// rd_kafka_toppar_ua_move
// file rdkafka_topic.c line 387
signed int rd_kafka_toppar_ua_move(struct rd_kafka_topic_s *rkt, struct rd_kafka_msgq_s *rkmq)
{
  struct rd_kafka_toppar_s *rktp_ua;
  pthread_rwlock_rdlock(&rkt->rkt_lock);
  rktp_ua=rd_kafka_toppar_get(rkt, (signed int)-1, 0);
  pthread_rwlock_unlock(&rkt->rkt_lock);
  if(rktp_ua == ((struct rd_kafka_toppar_s *)NULL))
    return -1;

  else
  {
    rd_kafka_msgq_concat$link1(&rktp_ua->rktp_msgq, rkmq);
    do
    {
      signed int return_value___atomic_sub_fetch$1;
      return_value___atomic_sub_fetch$1=__atomic_sub_fetch(&rktp_ua->rktp_refcnt, 1, 5);
      if(return_value___atomic_sub_fetch$1 == 0)
        rd_kafka_toppar_destroy0(rktp_ua);

    }
    while((_Bool)0);
    return 0;
  }
}

// rd_kafka_type2str
// file rdkafka.c line 712
static const char * rd_kafka_type2str(enum rd_kafka_type_t type)
{
  static const char *types[2l] = { "producer", "consumer" };
  return types[(signed long int)type];
}

// rd_kafka_version
// file ../src/rdkafka.h line 63
signed int rd_kafka_version(void)
{
  return 0x00080600;
}

// rd_kafka_version_str
// file ../src/rdkafka.h line 68
const char * rd_kafka_version_str(void)
{
  signed int ver;
  ver=rd_kafka_version();
  static char ret[64l];
  if(ret[0l] == 0)
    snprintf(ret, sizeof(char [64l]) /*64ul*/ , "%i.%i.%i", ver >> 24 & 0xff, ver >> 16 & 0xff, ver >> 8 & 0xff);

  return ret;
}

// rd_kafka_wait_destroyed
// file ../src/rdkafka.h line 1162
signed int rd_kafka_wait_destroyed(signed int timeout_ms)
{
  unsigned long int timeout;
  unsigned long int return_value_rd_clock$1;
  return_value_rd_clock$1=rd_clock$link1();
  timeout = return_value_rd_clock$1 + (unsigned long int)(timeout_ms * 1000);
  signed int return_value_rd_kafka_thread_cnt$2;
  do
  {
    return_value_rd_kafka_thread_cnt$2=rd_kafka_thread_cnt();
    if(!(return_value_rd_kafka_thread_cnt$2 >= 1))
    {
      if(!(rd_kafka_handle_cnt_curr >= 1))
        break;

    }

    unsigned long int return_value_rd_clock$4;
    return_value_rd_clock$4=rd_clock$link1();
    if(return_value_rd_clock$4 >= timeout)
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 110;
      return -1;
    }

    usleep((unsigned int)25000);
  }
  while((_Bool)1);
  return 0;
}

// rd_kafka_waitresp_find
// file rdkafka_broker.c line 1267
static struct rd_kafka_buf_s * rd_kafka_waitresp_find(struct rd_kafka_broker_s *rkb, signed int corrid)
{
  struct rd_kafka_buf_s *rkbuf;
  unsigned long int now;
  now=rd_clock$link2();
  do
  {
    unsigned long int return_value_pthread_self$1;
    return_value_pthread_self$1=pthread_self();
    if(!(return_value_pthread_self$1 == rkb->rkb_thread))
      rd_kafka_crash("rdkafka_broker.c", 1272, "rd_kafka_waitresp_find", rkb->rkb_rk, "assert: pthread_self() == rkb->rkb_thread");

  }
  while((_Bool)0);
  rkbuf = (&rkb->rkb_waitresps.rkbq_bufs)->tqh_first;
  for( ; !(rkbuf == ((struct rd_kafka_buf_s *)NULL)); rkbuf = rkbuf->rkbuf_link.tqe_next)
    if(rkbuf->rkbuf_corrid == corrid)
    {
      rkbuf->rkbuf_ts_sent = now - rkbuf->rkbuf_ts_sent;
      rd_kafka_avg_add(&rkb->rkb_avg_rtt, (signed long int)rkbuf->rkbuf_ts_sent);
      rd_kafka_bufq_deq(&rkb->rkb_waitresps, rkbuf);
      return rkbuf;
    }

  return (struct rd_kafka_buf_s *)(void *)0;
}

// rd_kafkap_bytes_new
// file rdkafka_proto.h line 226
static inline struct rd_kafkap_bytes_s * rd_kafkap_bytes_new(const void *data, unsigned long int datalen)
{
  struct rd_kafkap_bytes_s *kbytes;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rd_kafkap_bytes_s) /*4ul*/  + datalen);
  kbytes = (struct rd_kafkap_bytes_s *)return_value_malloc$1;
  unsigned int return_value_ntohl$3;
  if(!(data == NULL))
  {
    unsigned int return_value_ntohl$2;
    return_value_ntohl$2=ntohl((unsigned int)datalen);
    kbytes->len = (signed int)return_value_ntohl$2;
    memcpy((void *)kbytes->data, data, datalen);
  }

  else
  {
    return_value_ntohl$3=ntohl((unsigned int)-1);
    kbytes->len = (signed int)return_value_ntohl$3;
  }
  return kbytes;
}

// rd_kafkap_str_cmp
// file rdkafka_proto.h line 128
static inline signed int rd_kafkap_str_cmp(const struct rd_kafkap_str_s *a, const struct rd_kafkap_str_s *b)
{
  if(!(a->len == b->len))
    return -1;

  else
  {
    unsigned short int return_value_ntohs$1;
    return_value_ntohs$1=ntohs((unsigned short int)a->len);
    signed int return_value_memcmp$2;
    return_value_memcmp$2=memcmp((const void *)a->str, (const void *)b->str, (unsigned long int)return_value_ntohs$1);
    return return_value_memcmp$2;
  }
}

// rd_kafkap_str_cmp$link1
// file rdkafka_proto.h line 128
static inline signed int rd_kafkap_str_cmp$link1(const struct rd_kafkap_str_s *a$link1, const struct rd_kafkap_str_s *b$link1)
{
  if(!(a$link1->len == b$link1->len))
    return -1;

  else
  {
    unsigned short int return_value_ntohs$1$link1;
    return_value_ntohs$1$link1=ntohs((unsigned short int)a$link1->len);
    signed int return_value_memcmp$2$link1;
    return_value_memcmp$2$link1=memcmp((const void *)a$link1->str, (const void *)b$link1->str, (unsigned long int)return_value_ntohs$1$link1);
    return return_value_memcmp$2$link1;
  }
}

// rd_kafkap_str_cmp_str
// file rdkafka_proto.h line 137
static inline signed int rd_kafkap_str_cmp_str(const struct rd_kafkap_str_s *a, const char *str)
{
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  len = (signed int)return_value_strlen$1;
  unsigned short int return_value_ntohs$2;
  return_value_ntohs$2=ntohs((unsigned short int)a->len);
  if(!((signed int)return_value_ntohs$2 == len))
    return -1;

  else
  {
    unsigned short int return_value_ntohs$3;
    return_value_ntohs$3=ntohs((unsigned short int)a->len);
    signed int return_value_memcmp$4;
    return_value_memcmp$4=memcmp((const void *)a->str, (const void *)str, (unsigned long int)return_value_ntohs$3);
    return return_value_memcmp$4;
  }
}

// rd_kafkap_str_cmp_str$link1
// file rdkafka_proto.h line 137
static inline signed int rd_kafkap_str_cmp_str$link1(const struct rd_kafkap_str_s *a$link1, const char *str$link1)
{
  signed int len$link1;
  unsigned long int return_value_strlen$1$link1;
  return_value_strlen$1$link1=strlen(str$link1);
  len$link1 = (signed int)return_value_strlen$1$link1;
  unsigned short int return_value_ntohs$2$link1;
  return_value_ntohs$2$link1=ntohs((unsigned short int)a$link1->len);
  if(!((signed int)return_value_ntohs$2$link1 == len$link1))
    return -1;

  else
  {
    unsigned short int return_value_ntohs$3$link1;
    return_value_ntohs$3$link1=ntohs((unsigned short int)a$link1->len);
    signed int return_value_memcmp$4$link1;
    return_value_memcmp$4$link1=memcmp((const void *)a$link1->str, (const void *)str$link1, (unsigned long int)return_value_ntohs$3$link1);
    return return_value_memcmp$4$link1;
  }
}

// rd_kafkap_str_new
// file rdkafka_proto.h line 147
static inline struct rd_kafkap_str_s * rd_kafkap_str_new(const char *str)
{
  struct rd_kafkap_str_s *kstr;
  signed int len = 0;
  unsigned long int return_value_strlen$1;
  if(!(str == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(str);
    len = (signed int)return_value_strlen$1;
  }

  else
    len = 0;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct rd_kafkap_str_s) /*2ul*/  + (unsigned long int)len + (unsigned long int)1);
  kstr = (struct rd_kafkap_str_s *)return_value_malloc$2;
  unsigned short int return_value_ntohs$4;
  if(!(str == ((const char *)NULL)))
  {
    unsigned short int return_value_ntohs$3;
    return_value_ntohs$3=ntohs((unsigned short int)len);
    kstr->len = (signed short int)return_value_ntohs$3;
    memcpy((void *)kstr->str, (const void *)str, (unsigned long int)(len + 1));
  }

  else
  {
    return_value_ntohs$4=ntohs((unsigned short int)-1);
    kstr->len = (signed short int)return_value_ntohs$4;
  }
  return kstr;
}

// rd_kafkap_str_new$link1
// file rdkafka_proto.h line 147
static inline struct rd_kafkap_str_s * rd_kafkap_str_new$link1(const char *str$link1)
{
  struct rd_kafkap_str_s *kstr$link1;
  signed int len$link1 = 0;
  unsigned long int return_value_strlen$1$link1;
  if(!(str$link1 == ((const char *)NULL)))
  {
    return_value_strlen$1$link1=strlen(str$link1);
    len$link1 = (signed int)return_value_strlen$1$link1;
  }

  else
    len$link1 = 0;
  void *return_value_malloc$2$link1;
  return_value_malloc$2$link1=malloc(sizeof(struct rd_kafkap_str_s) /*2ul*/  + (unsigned long int)len$link1 + (unsigned long int)1);
  kstr$link1 = (struct rd_kafkap_str_s *)return_value_malloc$2$link1;
  unsigned short int return_value_ntohs$4$link1;
  if(!(str$link1 == ((const char *)NULL)))
  {
    unsigned short int return_value_ntohs$3$link1;
    return_value_ntohs$3$link1=ntohs((unsigned short int)len$link1);
    kstr$link1->len = (signed short int)return_value_ntohs$3$link1;
    memcpy((void *)kstr$link1->str, (const void *)str$link1, (unsigned long int)(len$link1 + 1));
  }

  else
  {
    return_value_ntohs$4$link1=ntohs((unsigned short int)-1);
    kstr$link1->len = (signed short int)return_value_ntohs$4$link1;
  }
  return kstr$link1;
}

// rd_sockaddr2str
// file rdaddr.h line 80
const char * rd_sockaddr2str(const void *addr, signed int flags)
{
  const union anonymous$8 *a = (const union anonymous$8 *)addr;
  char portstr[64l];
  signed int of = 0;
  signed int niflags = 2;
  static signed int reti = 0;
  reti = (reti + 1) % 32;
  signed int return_value_sprintf$1;
  signed int tmp_post$2;
  unsigned long int tmp_if_expr$3;
  char *tmp_if_expr$4;
  static char ret[32l][62l];
  if((signed int)a->in.sin_family == 2 || (signed int)a->in.sin_family == 10)
  {
    if(!((0x4 & flags) == 0))
    {
      return_value_sprintf$1=sprintf(&ret[(signed long int)reti][(signed long int)of], "ipv%i#", (signed int)a->in.sin_family == 2 ? 4 : 6);
      of = of + return_value_sprintf$1;
    }

    if(!((0x1 & flags) == 0))
    {
      if((signed int)a->in.sin_family == 10)
      {
        tmp_post$2 = of;
        of = of + 1;
        ret[(signed long int)reti][(signed long int)tmp_post$2] = (char)91;
      }

    }

    if((0x2 & flags) == 0)
      niflags = niflags | 1;

    if((signed int)a->in.sin_family == 2)
      tmp_if_expr$3 = sizeof(struct sockaddr_in) /*16ul*/ ;

    else
      tmp_if_expr$3 = (signed int)a->in.sin_family == 10 ? sizeof(struct sockaddr_in6) /*28ul*/  : sizeof(union anonymous$8) /*28ul*/ ;
    if(!((0x1 & flags) == 0))
      tmp_if_expr$4 = portstr;

    else
      tmp_if_expr$4 = (char *)(void *)0;
    signed int return_value_getnameinfo$5;
    return_value_getnameinfo$5=getnameinfo((struct sockaddr *)a, (unsigned int)tmp_if_expr$3, ret[(signed long int)reti] + (signed long int)of, (unsigned int)(sizeof(char [62l]) /*62ul*/  - (unsigned long int)of), tmp_if_expr$4, (unsigned int)((flags & 0x1) != 0 ? sizeof(char [64l]) /*64ul*/  : (unsigned long int)0), niflags);
    if(return_value_getnameinfo$5 == 0)
    {
      if(!((0x1 & flags) == 0))
      {
        signed int len;
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(ret[(signed long int)reti]);
        len = (signed int)return_value_strlen$6;
        snprintf(ret[(signed long int)reti] + (signed long int)len, sizeof(char [62l]) /*62ul*/  - (unsigned long int)len, "%s:%s", (signed int)a->in.sin_family == 10 ? "]" : "", (const void *)portstr);
      }

      return ret[(signed long int)reti];
    }

  }

  const char *return_value_rd_family2str$7;
  return_value_rd_family2str$7=rd_family2str$link1((signed int)a->in.sin_family);
  snprintf(ret[(signed long int)reti], sizeof(char [62l]) /*62ul*/ , "<unsupported:%s>", return_value_rd_family2str$7);
  return ret[(signed long int)reti];
}

// rd_sockaddr_list_destroy
// file rdaddr.h line 161
void rd_sockaddr_list_destroy(struct rd_sockaddr_list_s *rsal)
{
  free((void *)rsal);
}

// rd_sockaddr_list_next
// file rdaddr.h line 123
static inline union anonymous$8 * rd_sockaddr_list_next(struct rd_sockaddr_list_s *rsal)
{
  rsal->rsal_curr = (rsal->rsal_curr + 1) % rsal->rsal_cnt;
  return &rsal->rsal_addr[(signed long int)rsal->rsal_curr];
}

// rd_thread_cleanup
// file rdthread.c line 78
void rd_thread_cleanup(void)
{
  ;
}

// rd_thread_create
// file rdthread.c line 130
signed int rd_thread_create(struct rd_thread_s **rdt, const char *name, const union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg)
{
  struct rd_thread_s *rdt0;
  rdt0=rd_thread_create0(name, (unsigned long int *)(void *)0);
  rdt0->rdt_start = start_routine;
  rdt0->rdt_start_arg = arg;
  if(!(rdt == ((struct rd_thread_s **)NULL)))
    *rdt = rdt0;

  signed int return_value_pthread_create$3;
  return_value_pthread_create$3=pthread_create(&rdt0->rdt_thread, attr, rd_thread_start_routine, (void *)rdt0);
  if(!(return_value_pthread_create$3 == 0))
  {
    signed int errno_save;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    errno_save = *return_value___errno_location$1;
    rd_thread_destroy(rdt0);
    if(!(rdt == ((struct rd_thread_s **)NULL)))
      *rdt = (struct rd_thread_s *)(void *)0;

    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = errno_save;
    return -1;
  }

  prctl(15, (char *)rdt0->rdt_name, 0, 0, 0);
  return 0;
}

// rd_thread_create0
// file rdthread.c line 111
struct rd_thread_s * rd_thread_create0(const char *name, unsigned long int *pthread)
{
  struct rd_thread_s *rdt;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct rd_thread_s) /*160ul*/ );
  rdt = (struct rd_thread_s *)return_value_calloc$1;
  if(!(name == ((const char *)NULL)))
    rdt->rdt_name=strdup(name);

  rdt->rdt_state = (enum anonymous$10)RD_THREAD_S_RUNNING;
  rd_fifoq_init(&rdt->rdt_eventq);
  if(!(pthread == ((unsigned long int *)NULL)))
    rdt->rdt_thread = *pthread;

  return rdt;
}

// rd_thread_destroy
// file rdthread.c line 70
static void rd_thread_destroy(struct rd_thread_s *rdt)
{
  /* assertion rdt->rdt_state != RD_THREAD_S_RUNNING */
  assert((signed int)rdt->rdt_state != RD_THREAD_S_RUNNING);
  if(!(rdt->rdt_name == ((char *)NULL)))
    free((void *)rdt->rdt_name);

  rd_fifoq_destroy(&rdt->rdt_eventq);
  free((void *)rdt);
}

// rd_thread_dispatch
// file rdthread.c line 82
void rd_thread_dispatch(void)
{
  while((signed int)rd_currthread->rdt_state == RD_THREAD_S_RUNNING)
    rd_thread_poll(100);
  rd_thread_cleanup();
}

// rd_thread_event_call
// file rdevent.h line 92
static void rd_thread_event_call(struct rd_thread_event_s *rte)
{
  rte->rte_callback(rte->rte_ptr);
  free((void *)rte);
}

// rd_thread_init
// file rdthread.c line 44
void rd_thread_init(void)
{
  unsigned long int thr;
  thr=pthread_self();
  rd_mainthread=rd_thread_create0("main", &thr);
  rd_currthread = rd_mainthread;
}

// rd_thread_poll
// file rdthread.c line 50
signed int rd_thread_poll(signed int timeout_ms)
{
  struct rd_fifoq_elm_s *rfqe;
  signed int rd_thread_poll$$1$$cnt = 0;
  signed int nowait = (signed int)(timeout_ms == 0);
  do
  {
    rfqe=rd_fifoq_pop0(&rd_currthread->rdt_eventq, nowait, timeout_ms);
    if(rfqe == ((struct rd_fifoq_elm_s *)NULL))
      break;

    struct rd_thread_event_s *rte = (struct rd_thread_event_s *)rfqe->rfqe_ptr;
    rd_thread_event_call(rte);
    do
    {
      pthread_mutex_lock(&(&rd_currthread->rdt_eventq)->rfq_lock);
      rd_fifoq_elm_release0(&rd_currthread->rdt_eventq, rfqe);
      pthread_mutex_unlock(&(&rd_currthread->rdt_eventq)->rfq_lock);
    }
    while((_Bool)0);
    rd_thread_poll$$1$$cnt = rd_thread_poll$$1$$cnt + 1;
  }
  while((_Bool)1);
  return rd_thread_poll$$1$$cnt;
}

// rd_thread_sigmask
// file rdthread.c line 190
signed int rd_thread_sigmask(signed int how, ...)
{
  __builtin_va_list ap;
  struct anonymous$18 set;
  signed int sig;
  sigemptyset(&set);
  va_start(ap, how);
  do
  {
    sig=va_arg(ap, __typeof__(sig));
    if(sig == -2)
      break;

    if(sig == -1)
      sigfillset(&set);

    else
      sigaddset(&set, sig);
  }
  while((_Bool)1);
  va_end(ap);
  signed int return_value_pthread_sigmask$1;
  return_value_pthread_sigmask$1=pthread_sigmask(how, &set, (struct anonymous$18 *)(void *)0);
  return return_value_pthread_sigmask$1;
}

// rd_thread_start_routine
// file rdthread.c line 93
static void * rd_thread_start_routine(void *arg)
{
  struct rd_thread_s *rdt = (struct rd_thread_s *)arg;
  void *ret;
  rd_thread_sigmask(0, 10, 12, -2);
  rd_currthread = rdt;
  ret=rdt->rdt_start(rdt->rdt_start_arg);
  rd_thread_cleanup();
  rd_thread_destroy(rdt);
  return ret;
}

// rd_threads_create
// file rdthread.c line 164
signed int rd_threads_create(const char *nameprefix, signed int threadcount, const union pthread_attr_t *attr, void * (*start_routine)(void *), void *arg)
{
  signed int i;
  char *name;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(nameprefix);
  void *return_value___builtin_alloca$2;
  return_value___builtin_alloca$2=__builtin_alloca(return_value_strlen$1 + (unsigned long int)4);
  name = (char *)return_value___builtin_alloca$2;
  signed int failed = 0;
  if(threadcount >= 1000)
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    *return_value___errno_location$3 = 7;
    return -1;
  }

  i = 0;
  for( ; !(i >= threadcount); i = i + 1)
  {
    sprintf(name, "%s%i", nameprefix, i);
    signed int return_value_rd_thread_create$4;
    return_value_rd_thread_create$4=rd_thread_create((struct rd_thread_s **)(void *)0, name, attr, start_routine, arg);
    if(return_value_rd_thread_create$4 == 0)
      failed = failed + 1;

  }
  if(failed == threadcount)
    return -1;

  else
    return threadcount - failed;
}

// read_uncompressed_length
// file snappy.c line 1086
static _Bool read_uncompressed_length(struct snappy_decompressor *d, unsigned int *result)
{
  /* assertion !(!(d->ip == ((void *)0))) */
  assert(!(!(d->ip == (const char *)(void *)0)));
  *result = (unsigned int)0;
  unsigned int shift = (unsigned int)0;
  while((_Bool)1)
  {
    if(shift >= 32u)
      return (_Bool)0;

    unsigned long int n;
    const char *ip;
    ip=peek(d->reader, &n);
    if(n == 0ul)
      return (_Bool)0;

    const unsigned char c = *((const unsigned char *)ip);
    skip(d->reader, (unsigned long int)1);
    *result = *result | (unsigned int)((signed int)c & 0x7f) << shift;
    if(!((signed int)c >= 128))
      break;

    shift = shift + (unsigned int)7;
  }
  return (_Bool)1;
}

// refill_tag
// file snappy.c line 1209
static _Bool refill_tag(struct snappy_decompressor *d)
{
  const char *ip = d->ip;
  if(ip == d->ip_limit)
  {
    unsigned long int n;
    skip(d->reader, (unsigned long int)d->peeked);
    ip=peek(d->reader, &n);
    d->peeked = (unsigned int)n;
    if(n == 0ul)
    {
      d->eof = (_Bool)1;
      return (_Bool)0;
    }

    d->ip_limit = ip + (signed long int)n;
  }

  /* assertion !(!((ip) < (d->ip_limit))) */
  assert(!(!(ip < d->ip_limit)));
  const unsigned char c = *((const unsigned char *)ip);
  const unsigned int entry = (const unsigned int)char_table[(signed long int)c];
  const unsigned int needed = (entry >> 11) + (unsigned int)1;
  /* assertion !(!((needed) <= (sizeof(d->scratch)))) */
  assert(!(!((unsigned long int)needed <= sizeof(char [5l]) /*5ul*/ )));
  unsigned int nbuf = (unsigned int)(d->ip_limit - ip);
  if(!(nbuf >= needed))
  {
    memmove((void *)d->scratch, (const void *)ip, (unsigned long int)nbuf);
    skip(d->reader, (unsigned long int)d->peeked);
    d->peeked = (unsigned int)0;
    while(!(nbuf >= needed))
    {
      unsigned long int length;
      const char *src;
      src=peek(d->reader, &length);
      if(length == 0ul)
        return (_Bool)0;

      unsigned int to_add = (unsigned int)((unsigned long int)(needed - nbuf) < length ? (unsigned long int)(needed - nbuf) : length);
      memcpy((void *)(d->scratch + (signed long int)nbuf), (const void *)src, (unsigned long int)to_add);
      nbuf = nbuf + to_add;
      skip(d->reader, (unsigned long int)to_add);
    }
    /* assertion !(!((nbuf) == (needed))) */
    assert(!(!(nbuf == needed)));
    d->ip = d->scratch;
    d->ip_limit = d->scratch + (signed long int)needed;
  }

  else
    if(!(nbuf >= 5u))
    {
      memmove((void *)d->scratch, (const void *)ip, (unsigned long int)nbuf);
      skip(d->reader, (unsigned long int)d->peeked);
      d->peeked = (unsigned int)0;
      d->ip = d->scratch;
      d->ip_limit = d->scratch + (signed long int)nbuf;
    }

    else
      d->ip = ip;
  return (_Bool)1;
}

// sig_usr1
// file rdkafka_performance.c line 512
static void sig_usr1(signed int sig)
{
  rd_kafka_dump(stdout, rk);
}

// sink_peek
// file snappy.c line 294
static inline void * sink_peek(struct sink *s, unsigned long int n)
{
  struct iovec *iov = &s->iov[(signed long int)s->curvec];
  if(!((unsigned long int)s->curvec >= iov->iov_len))
  {
    if(!(iov->iov_len + -((unsigned long int)s->curoff) >= n))
      goto __CPROVER_DUMP_L1;

    return (void *)((char *)iov->iov_base + (signed long int)s->curoff);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return (void *)0;
  }
}

// skip
// file snappy.c line 255
static inline void skip(struct source *s, unsigned long int n)
{
  struct iovec *iv = &s->iov[(signed long int)s->curvec];
  s->curoff = s->curoff + (signed int)n;
  /* assertion !(!((s->curoff) <= (iv->iov_len))) */
  assert(!(!((unsigned long int)s->curoff <= iv->iov_len)));
  if((unsigned long int)s->curoff >= iv->iov_len)
  {
    if(!(1 + s->curvec >= s->iovlen))
    {
      s->curoff = 0;
      s->curvec = s->curvec + 1;
    }

  }

}

// snappy_compress
// file snappy.c line 1425
signed int snappy_compress(struct snappy_env *env, const char *input, unsigned long int input_length, char *compressed, unsigned long int *compressed_length)
{
  struct iovec iov_in = { .iov_base=(void *)(char *)input, .iov_len=input_length };
  struct iovec iov_out = { .iov_base=(void *)compressed, .iov_len=(unsigned long int)0xffffffff };
  signed int out = 1;
  signed int return_value_snappy_compress_iov$1;
  return_value_snappy_compress_iov$1=snappy_compress_iov(env, &iov_in, 1, input_length, &iov_out, &out, compressed_length);
  return return_value_snappy_compress_iov$1;
}

// snappy_compress_iov
// file snappy.h line 26
signed int snappy_compress_iov(struct snappy_env *env, struct iovec *iov_in, signed int iov_in_len, unsigned long int input_length, struct iovec *iov_out, signed int *iov_out_len, unsigned long int *compressed_length)
{
  struct source reader = { .iov=iov_in, .iovlen=iov_in_len, .curvec=0, .curoff=0,
    .total=input_length };
  struct sink writer = { .iov=iov_out, .iovlen=*iov_out_len, .curvec=0u, .curoff=0u,
    .written=0u };
  signed int err;
  err=compress(env, &reader, &writer);
  *iov_out_len = (signed int)(writer.curvec + (unsigned int)1);
  *compressed_length = (unsigned long int)writer.written;
  return err;
}

// snappy_free_env
// file snappy.h line 17
void snappy_free_env(struct snappy_env *env)
{
  free((void *)env->hash_table);
  free(env->scratch);
  free(env->scratch_output);
  memset((void *)env, 0, sizeof(struct snappy_env) /*24ul*/ );
}

// snappy_init_env
// file snappy.c line 1588
signed int snappy_init_env(struct snappy_env *env)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(unsigned short int) /*2ul*/  * (unsigned long int)(1U << 14));
  env->hash_table = (unsigned short int *)return_value_malloc$1;
  if(env->hash_table == ((unsigned short int *)NULL))
    return -12;

  else
    return 0;
}

// snappy_init_env_sg
// file snappy.h line 16
signed int snappy_init_env_sg(struct snappy_env *env, _Bool sg)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(unsigned short int) /*2ul*/  * (unsigned long int)(1U << 14));
  env->hash_table = (unsigned short int *)return_value_malloc$1;
  if(!(env->hash_table == ((unsigned short int *)NULL)))
  {
    if(!(sg == (_Bool)0))
    {
      env->scratch=malloc((unsigned long int)(1 << 16));
      if(env->scratch == NULL)
        goto error;

      unsigned long int return_value_snappy_max_compressed_length$2;
      return_value_snappy_max_compressed_length$2=snappy_max_compressed_length((unsigned long int)(1 << 16));
      env->scratch_output=malloc(return_value_snappy_max_compressed_length$2);
      if(env->scratch_output == NULL)
        goto error;

    }

    return 0;
  }

  else
  {

  error:
    ;
    snappy_free_env(env);
    return -12;
  }
}

// snappy_max_compressed_length
// file snappy.h line 34
unsigned long int snappy_max_compressed_length(unsigned long int source_len)
{
  return (unsigned long int)32 + source_len + source_len / (unsigned long int)6;
}

// snappy_uncompress
// file snappy.h line 20
signed int snappy_uncompress(const char *compressed, unsigned long int n, char *uncompressed)
{
  struct iovec iov = { .iov_base=(void *)(char *)compressed, .iov_len=n };
  signed int return_value_snappy_uncompress_iov$1;
  return_value_snappy_uncompress_iov$1=snappy_uncompress_iov(&iov, 1, n, uncompressed);
  return return_value_snappy_uncompress_iov$1;
}

// snappy_uncompress_iov
// file snappy.c line 1445
signed int snappy_uncompress_iov(struct iovec *iov_in, signed int iov_in_len, unsigned long int input_len, char *uncompressed)
{
  struct source reader = { .iov=iov_in, .iovlen=iov_in_len, .curvec=0, .curoff=0,
    .total=input_len };
  struct writer output = { .base=uncompressed, .op=uncompressed, .op_limit=((char *)NULL) };
  signed int return_value_internal_uncompress$1;
  return_value_internal_uncompress$1=internal_uncompress(&reader, &output, 0xffffffff);
  return return_value_internal_uncompress$1;
}

// snappy_uncompressed_length
// file snappy.h line 33
_Bool snappy_uncompressed_length(const char *start, unsigned long int n, unsigned long int *result)
{
  unsigned int v = (unsigned int)0;
  const char *limit = start + (signed long int)n;
  const char *return_value_varint_parse32_with_limit$1;
  return_value_varint_parse32_with_limit$1=varint_parse32_with_limit(start, limit, &v);
  if(!(return_value_varint_parse32_with_limit$1 == ((const char *)NULL)))
  {
    *result = (unsigned long int)v;
    return (_Bool)1;
  }

  else
    return (_Bool)0;
}

// stats_cb
// file rdkafka_performance.c line 326
static signed int stats_cb(struct rd_kafka_s *rk, char *json, unsigned long int json_len, void *opaque)
{
  json_parse_stats(json);
  if(!(stats_fp == ((struct _IO_FILE *)NULL)))
    fprintf(stats_fp, "%s\n", json);

  return 0;
}

// stop
// file rdkafka_performance.c line 62
static void stop(signed int sig)
{
  if(run == 0)
    exit(0);

  run = 0;
}

// unaligned_copy64
// file snappy.c line 80
static inline void unaligned_copy64(const void *src, void *dst)
{
  *((unsigned long long int *)dst) = *((unsigned long long int *)src);
}

// varint_encode32
// file snappy.c line 196
static inline char * varint_encode32(char *sptr, unsigned int v)
{
  unsigned char *ptr = (unsigned char *)sptr;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned char *tmp_post$9;
  unsigned char *tmp_post$10;
  unsigned char *tmp_post$11;
  unsigned char *tmp_post$12;
  unsigned char *tmp_post$13;
  unsigned char *tmp_post$14;
  unsigned char *tmp_post$15;
  static const signed int B = 128;
  if(!(v >= 128u))
  {
    tmp_post$1 = ptr;
    ptr = ptr + 1l;
    *tmp_post$1 = (unsigned char)v;
  }

  else
    if(!(v >= 16384u))
    {
      tmp_post$2 = ptr;
      ptr = ptr + 1l;
      *tmp_post$2 = (unsigned char)(v | (unsigned int)B);
      tmp_post$3 = ptr;
      ptr = ptr + 1l;
      *tmp_post$3 = (unsigned char)(v >> 7);
    }

    else
      if(!(v >= 2097152u))
      {
        tmp_post$4 = ptr;
        ptr = ptr + 1l;
        *tmp_post$4 = (unsigned char)(v | (unsigned int)B);
        tmp_post$5 = ptr;
        ptr = ptr + 1l;
        *tmp_post$5 = (unsigned char)(v >> 7 | (unsigned int)B);
        tmp_post$6 = ptr;
        ptr = ptr + 1l;
        *tmp_post$6 = (unsigned char)(v >> 14);
      }

      else
        if(!(v >= 268435456u))
        {
          tmp_post$7 = ptr;
          ptr = ptr + 1l;
          *tmp_post$7 = (unsigned char)(v | (unsigned int)B);
          tmp_post$8 = ptr;
          ptr = ptr + 1l;
          *tmp_post$8 = (unsigned char)(v >> 7 | (unsigned int)B);
          tmp_post$9 = ptr;
          ptr = ptr + 1l;
          *tmp_post$9 = (unsigned char)(v >> 14 | (unsigned int)B);
          tmp_post$10 = ptr;
          ptr = ptr + 1l;
          *tmp_post$10 = (unsigned char)(v >> 21);
        }

        else
        {
          tmp_post$11 = ptr;
          ptr = ptr + 1l;
          *tmp_post$11 = (unsigned char)(v | (unsigned int)B);
          tmp_post$12 = ptr;
          ptr = ptr + 1l;
          *tmp_post$12 = (unsigned char)(v >> 7 | (unsigned int)B);
          tmp_post$13 = ptr;
          ptr = ptr + 1l;
          *tmp_post$13 = (unsigned char)(v >> 14 | (unsigned int)B);
          tmp_post$14 = ptr;
          ptr = ptr + 1l;
          *tmp_post$14 = (unsigned char)(v >> 21 | (unsigned int)B);
          tmp_post$15 = ptr;
          ptr = ptr + 1l;
          *tmp_post$15 = (unsigned char)(v >> 28);
        }
  return (char *)ptr;
}

// varint_parse32_with_limit
// file snappy.c line 147
static inline const char * varint_parse32_with_limit(const char *p, const char *l, unsigned int *OUTPUT)
{
  const unsigned char *ptr = (const unsigned char *)p;
  const unsigned char *limit = (const unsigned char *)l;
  unsigned int b;
  unsigned int result;
  const unsigned char *tmp_post$1;
  const unsigned char *tmp_post$2;
  const unsigned char *tmp_post$3;
  const unsigned char *tmp_post$4;
  const unsigned char *tmp_post$5;
  if(ptr >= limit)
    return (const char *)(void *)0;

  else
  {
    tmp_post$1 = ptr;
    ptr = ptr + 1l;
    b = (unsigned int)*tmp_post$1;
    result = b & (unsigned int)127;
    if(b >= 128u)
    {
      if(ptr >= limit)
        return (const char *)(void *)0;

      tmp_post$2 = ptr;
      ptr = ptr + 1l;
      b = (unsigned int)*tmp_post$2;
      result = result | (b & (unsigned int)127) << 7;
      if(!(b >= 128u))
        goto done;

      if(ptr >= limit)
        return (const char *)(void *)0;

      tmp_post$3 = ptr;
      ptr = ptr + 1l;
      b = (unsigned int)*tmp_post$3;
      result = result | (b & (unsigned int)127) << 14;
      if(!(b >= 128u))
        goto done;

      if(ptr >= limit)
        return (const char *)(void *)0;

      tmp_post$4 = ptr;
      ptr = ptr + 1l;
      b = (unsigned int)*tmp_post$4;
      result = result | (b & (unsigned int)127) << 21;
      if(!(b >= 128u))
        goto done;

      if(ptr >= limit)
        return (const char *)(void *)0;

      tmp_post$5 = ptr;
      ptr = ptr + 1l;
      b = (unsigned int)*tmp_post$5;
      result = result | (b & (unsigned int)127) << 28;
      if(!(b >= 16u))
        goto done;

      return (const char *)(void *)0;
    }

    else
    {

    done:
      ;
      *OUTPUT = result;
      return (const char *)ptr;
    }
  }
}

// wall_clock
// file rdkafka_performance.c line 105
unsigned long int wall_clock(void)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  return (unsigned long int)tv.tv_sec * 1000000LLU + (unsigned long int)tv.tv_usec;
}

// writer_append
// file snappy.c line 465
static inline _Bool writer_append(struct writer *w, const char *ip, unsigned int len)
{
  char * const op = w->op;
  /* assertion !(!((op) <= (w->op_limit))) */
  assert(!(!(op <= w->op_limit)));
  const unsigned int space_left = (const unsigned int)(w->op_limit - op);
  if(!(space_left >= len))
    return (_Bool)0;

  else
  {
    memcpy((void *)op, (const void *)ip, (unsigned long int)len);
    w->op = op + (signed long int)len;
    return (_Bool)1;
  }
}

// writer_append_from_self
// file snappy.c line 436
static inline _Bool writer_append_from_self(struct writer *w, unsigned int offset, unsigned int len)
{
  char * const op = w->op;
  /* assertion !(!((op) <= (w->op_limit))) */
  assert(!(!(op <= w->op_limit)));
  const unsigned int space_left = (const unsigned int)(w->op_limit - op);
  if((signed long int)(offset + 4294967295u) >= op - w->base)
    return (_Bool)0;

  else
  {
    if(space_left >= 16u && offset >= 8u && !(len >= 17u))
    {
      unaligned_copy64((const void *)(op - (signed long int)offset), (void *)op);
      unaligned_copy64((const void *)((op - (signed long int)offset) + (signed long int)8), (void *)(op + (signed long int)8));
    }

    else
      if(space_left >= 10u + len)
        incremental_copy_fast_path(op - (signed long int)offset, op, (signed long int)len);

      else
      {
        if(!(space_left >= len))
          return (_Bool)0;

        incremental_copy(op - (signed long int)offset, op, (signed long int)len);
      }
    w->op = op + (signed long int)len;
    return (_Bool)1;
  }
}

// writer_check_length
// file snappy.c line 359
static inline _Bool writer_check_length(struct writer *w)
{
  return w->op == w->op_limit;
}

// writer_set_expected_length
// file snappy.c line 353
static inline void writer_set_expected_length(struct writer *w, unsigned long int len)
{
  w->op_limit = w->op + (signed long int)len;
}

// writer_try_fast_append
// file snappy.c line 477
static inline _Bool writer_try_fast_append(struct writer *w, const char *ip, unsigned int available_bytes, unsigned int len)
{
  char * const op = w->op;
  const signed int space_left = (const signed int)(w->op_limit - op);
  if(space_left >= 16 && available_bytes >= 16u && !(len >= 17u))
  {
    unaligned_copy64((const void *)ip, (void *)op);
    unaligned_copy64((const void *)(ip + (signed long int)8), (void *)(op + (signed long int)8));
    w->op = op + (signed long int)len;
    return (_Bool)1;
  }

  else
    return (_Bool)0;
}

